package Wx::Mini; # for RPM

package Wx;

use strict;

our( $VERSION, $XS_VERSION );
our $alien_key = 'gtk2_2_8_12_uni_gcc_3_4';

{
    my $VAR1;
    $Wx::dlls = $VAR1 = {
          'qa' => 'libwx_gtk2u_qa-2.8.dll.a',
          'net' => 'libwx_baseu_net-2.8.dll.a',
          'html' => 'libwx_gtk2u_html-2.8.dll.a',
          'gizmos' => 'libwx_gtk2u_gizmos-2.8.dll.a',
          'adv' => 'libwx_gtk2u_adv-2.8.dll.a',
          'media' => 'libwx_gtk2u_media-2.8.dll.a',
          'xrc' => 'libwx_gtk2u_xrc-2.8.dll.a',
          'aui' => 'libwx_gtk2u_aui-2.8.dll.a',
          'gl' => 'libwx_gtk2u_gl-2.8.dll.a',
          'base' => 'libwx_baseu-2.8.dll.a',
          'xml' => 'libwx_baseu_xml-2.8.dll.a',
          'stc' => 'libwx_gtk2u_stc-2.8.dll.a',
          'richtext' => 'libwx_gtk2u_richtext-2.8.dll.a',
          'core' => 'libwx_gtk2u_core-2.8.dll.a'
        };
;
}

$VERSION = '0.9927'; # bootstrap will catch wrong versions
$XS_VERSION = $VERSION;
$VERSION = eval $VERSION;


#
# Set Front Process on Mac
#
# Mac will be set to front process unless we are in test harness or
# and enivronment var is set
# e.g. In a syntax checking editor, set environment variable
# WXPERL_OPTIONS to include the string NO_MAC_SETFRONTPROCESS

sub MacSetFrontProcess {
    return if(  ( !defined( &Wx::_MacSetFrontProcess ) )
              #||( exists($ENV{HARNESS_ACTIVE}) && $ENV{HARNESS_ACTIVE} )
              ||( exists($ENV{WXPERL_OPTIONS}) && $ENV{WXPERL_OPTIONS} =~ /NO_MAC_SETFRONTPROCESS/)
              );
    Wx::_MacSetFrontProcess();
}

#
# XSLoader/DynaLoader wrapper
#
our( $wx_path );
our( $wx_binary_loader );

# see the comment in Wx.xs:_load_plugin for why this is necessary
sub wxPL_STATIC();
sub wx_boot($$) {
  local $ENV{PATH} = $wx_path . ';' . $ENV{PATH} if $wx_path;
  if( $_[0] eq 'Wx' || !wxPL_STATIC ) {
    no warnings 'redefine';
    if( $] < 5.006 ) {
      require DynaLoader;
      local *DynaLoader::dl_load_file = \&Wx::_load_plugin if $_[0] ne 'Wx';
      no strict 'refs';
      push @{"$_[0]::ISA"}, 'DynaLoader';
      $_[0]->bootstrap( $_[1] );
    } else {
      require XSLoader;
      local *DynaLoader::dl_load_file = \&Wx::_load_plugin if $_[0] ne 'Wx';
      XSLoader::load( $_[0], $_[1] );
    }
  } else {
    no strict 'refs';
    my $t = $_[0]; $t =~ tr/:/_/;
    &{"_boot_$t"}( $_[0], $_[1] );
  }
}

sub _alien_path {
  return if defined $wx_path;
  return unless length 'usr';
  foreach ( @INC ) {
    if( -d "$_/Alien/wxWidgets/usr" ) {
      $wx_path = "$_/Alien/wxWidgets/usr/lib";
      last;
    }
  }
}

_alien_path();

sub _init_binary_loader {
    return if $wx_binary_loader;
    # load the Loader
    # a custom loader may exist as Wx::Loader::Custom
    # or a packager may have installed a loader already
    eval{ require Wx::Loader::Custom };
    $wx_binary_loader = 'Wx::Loader::Standard' if !$wx_binary_loader;
}

sub _start {
    &_init_binary_loader;
    $wx_path = $wx_binary_loader->set_binary_path;
    wx_boot( 'Wx', $XS_VERSION ) if!$wx_binary_loader->boot_overload;
    _boot_Constant( 'Wx', $XS_VERSION );
    _boot_GDI( 'Wx', $XS_VERSION );

    if( ( exists($ENV{WXPERL_OPTIONS}) && $ENV{WXPERL_OPTIONS} =~ /ENABLE_DEFAULT_ASSERT_HANDLER/) ) {
        Wx::EnableDefaultAssertHandler();
    } else {
        Wx::DisableAssertHandler();
    }
    
    Load( 1 );
    
    Wx::MacSetFrontProcess();
}

# legacy load functions

sub set_load_function {
    &_init_binary_loader;
    $wx_binary_loader->external_set_load( $_[0] )
}

sub set_end_function  {
    &_init_binary_loader;
    $wx_binary_loader->external_set_unload( $_[0] )
}


# standard loader package - it gets
# used if nothing overrides it
# See Wx/Loader.pod

package Wx::Loader::Standard;
our @ISA = qw( Exporter );

sub loader_info { 'Standard Distribution'; }

sub set_binary_path { $Wx::wx_path }

sub boot_overload { }

# back compat overloading
# by default load_dll and unload_dll are no-ops (dependencies
# and the Wx lib are loaded via wx_boot above).
# But custom loaders may override this

# we need this to support deprecated
# set_load_function / set_end_function fo a while.
# As it is undocumented, should not need to maintain
# this for long.

# once support for set_load_function / set_end_function is
# removed, the rest of this package is
#
# sub load_dll {}
# sub unload_dll {}

my( $load_fun, $unload_fun ) = ( \&_load_dll, \&_unload_dll );

sub external_set_load { $load_fun = $_[1] }
sub external_set_unload { $unload_fun = $_[1] }

sub _load_dll {};
sub _unload_dll {};

sub load_dll {
  shift;
  goto &$load_fun;
}

sub unload_dll {
  shift;
  goto &$unload_fun;
}


1;
