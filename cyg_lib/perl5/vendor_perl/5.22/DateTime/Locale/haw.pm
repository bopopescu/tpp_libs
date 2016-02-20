###########################################################################
#
# This file is auto-generated by the Perl DateTime Suite locale
# generator (0.05).  This code generator comes with the
# DateTime::Locale distribution in the tools/ directory, and is called
# generate-from-cldr.
#
# This file as generated from the CLDR XML locale data.  See the
# LICENSE.cldr file included in this distribution for license details.
#
# This file was generated from the source file haw.xml
# The source file version number was 1.45, generated on
# 2009/06/15 03:46:25.
#
# Do not edit this file directly.
#
###########################################################################

package DateTime::Locale::haw;

use strict;
use warnings;

our $VERSION = '0.46';

use utf8;

use base 'DateTime::Locale::root';

sub cldr_version { return "1\.7\.1" }

{
    my $am_pm_abbreviated = [ "AM", "PM" ];
    sub am_pm_abbreviated { return $am_pm_abbreviated }
}
{
    my $date_format_full = "EEEE\,\ d\ MMMM\ y";
    sub date_format_full { return $date_format_full }
}

{
    my $date_format_long = "d\ MMMM\ y";
    sub date_format_long { return $date_format_long }
}

{
    my $date_format_medium = "d\ MMM\ y";
    sub date_format_medium { return $date_format_medium }
}

{
    my $date_format_short = "d\/M\/yy";
    sub date_format_short { return $date_format_short }
}

{
    my $day_format_abbreviated = [ "P1", "P2", "P3", "P4", "P5", "P6", "LP" ];
    sub day_format_abbreviated { return $day_format_abbreviated }
}

sub day_format_narrow { $_[0]->day_stand_alone_narrow() }

{
    my $day_format_wide = [ "Poʻakahi", "Poʻalua", "Poʻakolu", "Poʻahā", "Poʻalima", "Poʻaono", "Lāpule" ];
    sub day_format_wide { return $day_format_wide }
}

sub day_stand_alone_abbreviated { $_[0]->day_format_abbreviated() }

{
    my $day_stand_alone_narrow = [ "2", "3", "4", "5", "6", "7", "1" ];
    sub day_stand_alone_narrow { return $day_stand_alone_narrow }
}

sub day_stand_alone_wide { $_[0]->day_format_wide() }

{
    my $era_abbreviated = [ "BCE", "CE" ];
    sub era_abbreviated { return $era_abbreviated }
}

sub era_narrow { $_[0]->era_abbreviated() }

{
    my $first_day_of_week = "1";
    sub first_day_of_week { return $first_day_of_week }
}

{
    my $month_format_abbreviated = [ "Ian\.", "Pep\.", "Mal\.", "ʻAp\.", "Mei", "Iun\.", "Iul\.", "ʻAu\.", "Kep\.", "ʻOk\.", "Now\.", "Kek\." ];
    sub month_format_abbreviated { return $month_format_abbreviated }
}

sub month_format_narrow { $_[0]->month_stand_alone_narrow() }

{
    my $month_format_wide = [ "Ianuali", "Pepeluali", "Malaki", "ʻApelila", "Mei", "Iune", "Iulai", "ʻAukake", "Kepakemapa", "ʻOkakopa", "Nowemapa", "Kekemapa" ];
    sub month_format_wide { return $month_format_wide }
}

sub month_stand_alone_abbreviated { $_[0]->month_format_abbreviated() }

{
    my $month_stand_alone_narrow = [ "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" ];
    sub month_stand_alone_narrow { return $month_stand_alone_narrow }
}

sub month_stand_alone_wide { $_[0]->month_format_wide() }

{
    my $quarter_format_abbreviated = [ "Q1", "Q2", "Q3", "Q4" ];
    sub quarter_format_abbreviated { return $quarter_format_abbreviated }
}
{
    my $quarter_format_wide = [ "Q1", "Q2", "Q3", "Q4" ];
    sub quarter_format_wide { return $quarter_format_wide }
}

sub quarter_stand_alone_abbreviated { $_[0]->quarter_format_abbreviated() }


sub quarter_stand_alone_wide { $_[0]->quarter_format_wide() }

{
    my $time_format_full = "h\:mm\:ss\ a\ zzzz";
    sub time_format_full { return $time_format_full }
}

{
    my $time_format_long = "h\:mm\:ss\ a\ z";
    sub time_format_long { return $time_format_long }
}

{
    my $time_format_medium = "h\:mm\:ss\ a";
    sub time_format_medium { return $time_format_medium }
}

{
    my $time_format_short = "h\:mm\ a";
    sub time_format_short { return $time_format_short }
}

{
    my $_format_for_MMMMd = "d\ MMMM";
    sub _format_for_MMMMd { return $_format_for_MMMMd }
}

{
    my $_format_for_Md = "d\/M";
    sub _format_for_Md { return $_format_for_Md }
}

{
    my $_format_for_yyM = "M\/yy";
    sub _format_for_yyM { return $_format_for_yyM }
}

{
    my $_format_for_yyQ = "Q\ yy";
    sub _format_for_yyQ { return $_format_for_yyQ }
}

{
    my $_format_for_yyyyMMMM = "MMMM\ y";
    sub _format_for_yyyyMMMM { return $_format_for_yyyyMMMM }
}

{
    my $_available_formats =
        {
          "MMMMd" => "d\ MMMM",
          "Md" => "d\/M",
          "yyM" => "M\/yy",
          "yyQ" => "Q\ yy",
          "yyyyMMMM" => "MMMM\ y"
        };
    sub _available_formats { return $_available_formats }
}

1;

__END__


=pod

=encoding utf8

=head1 NAME

DateTime::Locale::haw

=head1 SYNOPSIS

  use DateTime;

  my $dt = DateTime->now( locale => 'haw' );
  print $dt->month_name();

=head1 DESCRIPTION

This is the DateTime locale package for Hawaiian.

=head1 DATA

This locale inherits from the L<DateTime::Locale::root> locale.

It contains the following data.

=head2 Days

=head3 Wide (format)

  Poʻakahi
  Poʻalua
  Poʻakolu
  Poʻahā
  Poʻalima
  Poʻaono
  Lāpule

=head3 Abbreviated (format)

  P1
  P2
  P3
  P4
  P5
  P6
  LP

=head3 Narrow (format)

  2
  3
  4
  5
  6
  7
  1

=head3 Wide (stand-alone)

  Poʻakahi
  Poʻalua
  Poʻakolu
  Poʻahā
  Poʻalima
  Poʻaono
  Lāpule

=head3 Abbreviated (stand-alone)

  P1
  P2
  P3
  P4
  P5
  P6
  LP

=head3 Narrow (stand-alone)

  2
  3
  4
  5
  6
  7
  1

=head2 Months

=head3 Wide (format)

  Ianuali
  Pepeluali
  Malaki
  ʻApelila
  Mei
  Iune
  Iulai
  ʻAukake
  Kepakemapa
  ʻOkakopa
  Nowemapa
  Kekemapa

=head3 Abbreviated (format)

  Ian.
  Pep.
  Mal.
  ʻAp.
  Mei
  Iun.
  Iul.
  ʻAu.
  Kep.
  ʻOk.
  Now.
  Kek.

=head3 Narrow (format)

  1
  2
  3
  4
  5
  6
  7
  8
  9
  10
  11
  12

=head3 Wide (stand-alone)

  Ianuali
  Pepeluali
  Malaki
  ʻApelila
  Mei
  Iune
  Iulai
  ʻAukake
  Kepakemapa
  ʻOkakopa
  Nowemapa
  Kekemapa

=head3 Abbreviated (stand-alone)

  Ian.
  Pep.
  Mal.
  ʻAp.
  Mei
  Iun.
  Iul.
  ʻAu.
  Kep.
  ʻOk.
  Now.
  Kek.

=head3 Narrow (stand-alone)

  1
  2
  3
  4
  5
  6
  7
  8
  9
  10
  11
  12

=head2 Quarters

=head3 Wide (format)

  Q1
  Q2
  Q3
  Q4

=head3 Abbreviated (format)

  Q1
  Q2
  Q3
  Q4

=head3 Narrow (format)

  1
  2
  3
  4

=head3 Wide (stand-alone)

  Q1
  Q2
  Q3
  Q4

=head3 Abbreviated (stand-alone)

  Q1
  Q2
  Q3
  Q4

=head3 Narrow (stand-alone)

  1
  2
  3
  4

=head2 Eras

=head3 Wide

  BCE
  CE

=head3 Abbreviated

  BCE
  CE

=head3 Narrow

  BCE
  CE

=head2 Date Formats

=head3 Full

   2008-02-05T18:30:30 = Poʻalua, 5 Pepeluali 2008
   1995-12-22T09:05:02 = Poʻalima, 22 Kekemapa 1995
  -0010-09-15T04:44:23 = Poʻaono, 15 Kepakemapa -10

=head3 Long

   2008-02-05T18:30:30 = 5 Pepeluali 2008
   1995-12-22T09:05:02 = 22 Kekemapa 1995
  -0010-09-15T04:44:23 = 15 Kepakemapa -10

=head3 Medium

   2008-02-05T18:30:30 = 5 Pep. 2008
   1995-12-22T09:05:02 = 22 Kek. 1995
  -0010-09-15T04:44:23 = 15 Kep. -10

=head3 Short

   2008-02-05T18:30:30 = 5/2/08
   1995-12-22T09:05:02 = 22/12/95
  -0010-09-15T04:44:23 = 15/9/-10

=head3 Default

   2008-02-05T18:30:30 = 5 Pep. 2008
   1995-12-22T09:05:02 = 22 Kek. 1995
  -0010-09-15T04:44:23 = 15 Kep. -10

=head2 Time Formats

=head3 Full

   2008-02-05T18:30:30 = 6:30:30 PM UTC
   1995-12-22T09:05:02 = 9:05:02 AM UTC
  -0010-09-15T04:44:23 = 4:44:23 AM UTC

=head3 Long

   2008-02-05T18:30:30 = 6:30:30 PM UTC
   1995-12-22T09:05:02 = 9:05:02 AM UTC
  -0010-09-15T04:44:23 = 4:44:23 AM UTC

=head3 Medium

   2008-02-05T18:30:30 = 6:30:30 PM
   1995-12-22T09:05:02 = 9:05:02 AM
  -0010-09-15T04:44:23 = 4:44:23 AM

=head3 Short

   2008-02-05T18:30:30 = 6:30 PM
   1995-12-22T09:05:02 = 9:05 AM
  -0010-09-15T04:44:23 = 4:44 AM

=head3 Default

   2008-02-05T18:30:30 = 6:30:30 PM
   1995-12-22T09:05:02 = 9:05:02 AM
  -0010-09-15T04:44:23 = 4:44:23 AM

=head2 Datetime Formats

=head3 Full

   2008-02-05T18:30:30 = Poʻalua, 5 Pepeluali 2008 6:30:30 PM UTC
   1995-12-22T09:05:02 = Poʻalima, 22 Kekemapa 1995 9:05:02 AM UTC
  -0010-09-15T04:44:23 = Poʻaono, 15 Kepakemapa -10 4:44:23 AM UTC

=head3 Long

   2008-02-05T18:30:30 = 5 Pepeluali 2008 6:30:30 PM UTC
   1995-12-22T09:05:02 = 22 Kekemapa 1995 9:05:02 AM UTC
  -0010-09-15T04:44:23 = 15 Kepakemapa -10 4:44:23 AM UTC

=head3 Medium

   2008-02-05T18:30:30 = 5 Pep. 2008 6:30:30 PM
   1995-12-22T09:05:02 = 22 Kek. 1995 9:05:02 AM
  -0010-09-15T04:44:23 = 15 Kep. -10 4:44:23 AM

=head3 Short

   2008-02-05T18:30:30 = 5/2/08 6:30 PM
   1995-12-22T09:05:02 = 22/12/95 9:05 AM
  -0010-09-15T04:44:23 = 15/9/-10 4:44 AM

=head3 Default

   2008-02-05T18:30:30 = 5 Pep. 2008 6:30:30 PM
   1995-12-22T09:05:02 = 22 Kek. 1995 9:05:02 AM
  -0010-09-15T04:44:23 = 15 Kep. -10 4:44:23 AM

=head2 Available Formats

=head3 d (d)

   2008-02-05T18:30:30 = 5
   1995-12-22T09:05:02 = 22
  -0010-09-15T04:44:23 = 15

=head3 EEEd (d EEE)

   2008-02-05T18:30:30 = 5 P2
   1995-12-22T09:05:02 = 22 P5
  -0010-09-15T04:44:23 = 15 P6

=head3 Hm (H:mm)

   2008-02-05T18:30:30 = 18:30
   1995-12-22T09:05:02 = 9:05
  -0010-09-15T04:44:23 = 4:44

=head3 hm (h:mm a)

   2008-02-05T18:30:30 = 6:30 PM
   1995-12-22T09:05:02 = 9:05 AM
  -0010-09-15T04:44:23 = 4:44 AM

=head3 Hms (H:mm:ss)

   2008-02-05T18:30:30 = 18:30:30
   1995-12-22T09:05:02 = 9:05:02
  -0010-09-15T04:44:23 = 4:44:23

=head3 hms (h:mm:ss a)

   2008-02-05T18:30:30 = 6:30:30 PM
   1995-12-22T09:05:02 = 9:05:02 AM
  -0010-09-15T04:44:23 = 4:44:23 AM

=head3 M (L)

   2008-02-05T18:30:30 = 2
   1995-12-22T09:05:02 = 12
  -0010-09-15T04:44:23 = 9

=head3 Md (d/M)

   2008-02-05T18:30:30 = 5/2
   1995-12-22T09:05:02 = 22/12
  -0010-09-15T04:44:23 = 15/9

=head3 MEd (E, M-d)

   2008-02-05T18:30:30 = P2, 2-5
   1995-12-22T09:05:02 = P5, 12-22
  -0010-09-15T04:44:23 = P6, 9-15

=head3 MMM (LLL)

   2008-02-05T18:30:30 = Pep.
   1995-12-22T09:05:02 = Kek.
  -0010-09-15T04:44:23 = Kep.

=head3 MMMd (MMM d)

   2008-02-05T18:30:30 = Pep. 5
   1995-12-22T09:05:02 = Kek. 22
  -0010-09-15T04:44:23 = Kep. 15

=head3 MMMEd (E MMM d)

   2008-02-05T18:30:30 = P2 Pep. 5
   1995-12-22T09:05:02 = P5 Kek. 22
  -0010-09-15T04:44:23 = P6 Kep. 15

=head3 MMMMd (d MMMM)

   2008-02-05T18:30:30 = 5 Pepeluali
   1995-12-22T09:05:02 = 22 Kekemapa
  -0010-09-15T04:44:23 = 15 Kepakemapa

=head3 MMMMEd (E MMMM d)

   2008-02-05T18:30:30 = P2 Pepeluali 5
   1995-12-22T09:05:02 = P5 Kekemapa 22
  -0010-09-15T04:44:23 = P6 Kepakemapa 15

=head3 ms (mm:ss)

   2008-02-05T18:30:30 = 30:30
   1995-12-22T09:05:02 = 05:02
  -0010-09-15T04:44:23 = 44:23

=head3 y (y)

   2008-02-05T18:30:30 = 2008
   1995-12-22T09:05:02 = 1995
  -0010-09-15T04:44:23 = -10

=head3 yM (y-M)

   2008-02-05T18:30:30 = 2008-2
   1995-12-22T09:05:02 = 1995-12
  -0010-09-15T04:44:23 = -10-9

=head3 yMEd (EEE, y-M-d)

   2008-02-05T18:30:30 = P2, 2008-2-5
   1995-12-22T09:05:02 = P5, 1995-12-22
  -0010-09-15T04:44:23 = P6, -10-9-15

=head3 yMMM (y MMM)

   2008-02-05T18:30:30 = 2008 Pep.
   1995-12-22T09:05:02 = 1995 Kek.
  -0010-09-15T04:44:23 = -10 Kep.

=head3 yMMMEd (EEE, y MMM d)

   2008-02-05T18:30:30 = P2, 2008 Pep. 5
   1995-12-22T09:05:02 = P5, 1995 Kek. 22
  -0010-09-15T04:44:23 = P6, -10 Kep. 15

=head3 yMMMM (y MMMM)

   2008-02-05T18:30:30 = 2008 Pepeluali
   1995-12-22T09:05:02 = 1995 Kekemapa
  -0010-09-15T04:44:23 = -10 Kepakemapa

=head3 yQ (y Q)

   2008-02-05T18:30:30 = 2008 1
   1995-12-22T09:05:02 = 1995 4
  -0010-09-15T04:44:23 = -10 3

=head3 yQQQ (y QQQ)

   2008-02-05T18:30:30 = 2008 Q1
   1995-12-22T09:05:02 = 1995 Q4
  -0010-09-15T04:44:23 = -10 Q3

=head3 yyM (M/yy)

   2008-02-05T18:30:30 = 2/08
   1995-12-22T09:05:02 = 12/95
  -0010-09-15T04:44:23 = 9/-10

=head3 yyQ (Q yy)

   2008-02-05T18:30:30 = 1 08
   1995-12-22T09:05:02 = 4 95
  -0010-09-15T04:44:23 = 3 -10

=head3 yyyyMMMM (MMMM y)

   2008-02-05T18:30:30 = Pepeluali 2008
   1995-12-22T09:05:02 = Kekemapa 1995
  -0010-09-15T04:44:23 = Kepakemapa -10

=head2 Miscellaneous

=head3 Prefers 24 hour time?

No

=head3 Local first day of the week

Poʻakahi


=head1 SUPPORT

See L<DateTime::Locale>.

=cut