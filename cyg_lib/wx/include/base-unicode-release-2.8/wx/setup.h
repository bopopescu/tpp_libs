/* lib/wx/include/base-unicode-release-2.8/wx/setup.h.  Generated from setup.h.in by configure.  */
/* This define (__WX_SETUP_H__) is used both to ensure setup.h is included
 * only once and to indicate that we are building using configure. */
#ifndef __WX_SETUP_H__
#define __WX_SETUP_H__

/* never undefine inline or const keywords for C++ compilation */
#ifndef __cplusplus

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

#endif /* __cplusplus */

/* fill in with the string wxGetOsDescription() will return */
#define WXWIN_OS_DESCRIPTION "CYGWIN_NT-6.1-WOW64 1.7.34s(0.281/5/3) i686"

/* the installation location prefix from configure */
#define wxINSTALL_PREFIX "/usr"

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef mode_t */

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if ssize_t type is available.  */
#define HAVE_SSIZE_T 1

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define this to get extra features from GNU libc. */
#ifndef _GNU_SOURCE
/* #undef _GNU_SOURCE */
#endif

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* #undef WORDS_BIGENDIAN */

/* Define this if your version of GTK+ is greater than 1.2 */
/* #undef __WXGTK12__ */

/* Define this if your version of GTK+ is greater than 1.2.7 */
/* #undef __WXGTK127__ */

/* Define this if your version of GTK+ is greater than 2.0 */
/* #undef __WXGTK20__ */

/* Define this if your version of GTK+ is greater than 2.4 */
/* #undef __WXGTK24__ */

/* Define this if your version of GTK+ is greater than 2.6 */
/* #undef __WXGTK26__ */

/* Define this if you want to use GPE features */
/* #undef __WXGPE__ */

/* Define this if your version of Motif is greater than 2.0 */
/* #undef __WXMOTIF20__ */

/* Define this if you are using Lesstif */
/* #undef __WXLESSTIF__ */

/*
 * Define to 1 for Unix[-like] system
 */
#define wxUSE_UNIX 1

#define __UNIX__ 1

/* #undef __AIX__ */
/* #undef __BSD__ */
/* #undef __DARWIN__ */
/* #undef __EMX__ */
/* #undef __FREEBSD__ */
/* #undef __HPUX__ */
/* #undef __LINUX__ */
/* #undef __NETBSD__ */
/* #undef __OPENBSD__ */
/* #undef __OSF__ */
/* #undef __SGI__ */
/* #undef __SOLARIS__ */
/* #undef __SUN__ */
/* #undef __SUNOS__ */
/* #undef __SVR4__ */
/* #undef __SYSV__ */
/* #undef __ULTRIX__ */
/* #undef __UNIXWARE__ */
/* #undef __VMS__ */

/* #undef __IA64__ */
/* #undef __ALPHA__ */

/* NanoX (with wxX11) */
#define wxUSE_NANOX 0

/* PowerPC Darwin & Mac OS X */
/* #undef __POWERPC__ */
/* #undef TARGET_CARBON */

/* Hack to make IOGraphicsTypes.h not define Point conflicting with MacTypes */
/* #undef __Point__ */

/* MS-DOS with DJGPP */
/* #undef __DOS__ */

/* Stupid hack; __WINDOWS__ clashes with wx/defs.h */
#ifndef __WINDOWS__
/* #undef __WINDOWS__ */
#endif

#ifndef __WIN32__
/* #undef __WIN32__ */
#endif
#ifndef __GNUWIN32__
/* #undef __GNUWIN32__ */
#endif
#ifndef STRICT
/* #undef STRICT */
#endif
#ifndef WINVER
/* #undef WINVER */
#endif

/* OS/2 with EMX */
/* #undef __OS2__ */

/* --- start common options --- */

#ifndef wxUSE_GUI
    #define wxUSE_GUI            0
#endif


#define WXWIN_COMPATIBILITY_2_4 0

#define WXWIN_COMPATIBILITY_2_6 1

#define wxDIALOG_UNIT_COMPATIBILITY   0



#define wxUSE_DEBUG_CONTEXT 0

#define wxUSE_MEMORY_TRACING 0

#define wxUSE_GLOBAL_MEMORY_OPERATORS 0

#define wxUSE_DEBUG_NEW_ALWAYS 0

#define wxUSE_ON_FATAL_EXCEPTION 1

#define wxUSE_STACKWALKER 0

#define wxUSE_DEBUGREPORT 1


#ifndef wxUSE_UNICODE
    #define wxUSE_UNICODE 1
#endif

#define wxUSE_WCHAR_T 1


#define wxUSE_EXCEPTIONS 1

#define wxUSE_EXTENDED_RTTI 0

#define wxUSE_STL 0

#define wxUSE_LOG 1

#define wxUSE_LOGWINDOW 0

#define wxUSE_LOGGUI 0

#define wxUSE_LOG_DIALOG 0

#define wxUSE_CMDLINE_PARSER 1

#define wxUSE_THREADS 1

#define wxUSE_STREAMS 1

#define wxUSE_STD_IOSTREAM 1

#if defined(__DMC__) || defined(__WATCOMC__) \
        || (defined(_MSC_VER) && _MSC_VER < 1200)
    #define wxUSE_STD_STRING 1
#else
    #define wxUSE_STD_STRING 1
#endif

#define wxUSE_PRINTF_POS_PARAMS 1


#define wxUSE_LONGLONG 1

#define wxUSE_FILE 1
#define wxUSE_FFILE 1

#define wxUSE_FSVOLUME      0

#define wxUSE_STDPATHS 1

#define wxUSE_TEXTBUFFER 1

#define wxUSE_TEXTFILE 1

#define wxUSE_INTL 1

#define wxUSE_DATETIME 1

#define wxUSE_TIMER 1

#define wxUSE_STOPWATCH 1

#define wxUSE_CONFIG 1

#define wxUSE_CONFIG_NATIVE 1

#define wxUSE_DIALUP_MANAGER 1

#define wxUSE_DYNLIB_CLASS 1

#define wxUSE_DYNAMIC_LOADER 1

#define wxUSE_SOCKETS 1

#define wxUSE_FILESYSTEM 1

#define wxUSE_FS_ZIP 1

#define wxUSE_FS_ARCHIVE 1

#define wxUSE_FS_INET 1

#define wxUSE_ARCHIVE_STREAMS 1

#define wxUSE_ZIPSTREAM 1

#define wxUSE_TARSTREAM 1

#define wxUSE_ZLIB 1

#define wxUSE_APPLE_IEEE 1

#define wxUSE_JOYSTICK            0

#define wxUSE_FONTMAP 1

#define wxUSE_MIMETYPE 1

#define wxUSE_PROTOCOL 1

#define wxUSE_PROTOCOL_FILE 1
#define wxUSE_PROTOCOL_FTP 1
#define wxUSE_PROTOCOL_HTTP 1

#define wxUSE_URL 1

#define wxUSE_URL_NATIVE 0

#define wxUSE_VARIANT 1

#define wxUSE_REGEX 1

#define wxUSE_SYSTEM_OPTIONS 1

#define wxUSE_SOUND 1

#define wxUSE_MEDIACTRL     0

#define wxUSE_GSTREAMER    0

#define wxUSE_XRC       0

#define wxUSE_XML 1

#define wxUSE_AUI       0


#ifndef wxUSE_GRAPHICS_CONTEXT
#define wxUSE_GRAPHICS_CONTEXT 0
#endif


#define wxUSE_CONTROLS     0

#define wxUSE_POPUPWIN     0

#define wxUSE_TIPWINDOW    0

#define wxUSE_ANIMATIONCTRL 0
#define wxUSE_BUTTON        0
#define wxUSE_BMPBUTTON     0
#define wxUSE_CALENDARCTRL  0
#define wxUSE_CHECKBOX      0
#define wxUSE_CHECKLISTBOX  0
#define wxUSE_CHOICE        0
#define wxUSE_COLLPANE      0
#define wxUSE_COLOURPICKERCTRL 0
#define wxUSE_COMBOBOX      0
#define wxUSE_DATAVIEWCTRL  0
#define wxUSE_DATEPICKCTRL  0
#define wxUSE_DIRPICKERCTRL 0
#define wxUSE_FILEPICKERCTRL 0
#define wxUSE_FONTPICKERCTRL 0
#define wxUSE_GAUGE         0
#define wxUSE_HYPERLINKCTRL 0
#define wxUSE_LISTBOX       0
#define wxUSE_LISTCTRL      0
#define wxUSE_RADIOBOX      0
#define wxUSE_RADIOBTN      0
#define wxUSE_SCROLLBAR     0
#define wxUSE_SEARCHCTRL    0
#define wxUSE_SLIDER        0
#define wxUSE_SPINBTN       0
#define wxUSE_SPINCTRL      0
#define wxUSE_STATBOX       0
#define wxUSE_STATLINE      0
#define wxUSE_STATTEXT      0
#define wxUSE_STATBMP       0
#define wxUSE_TEXTCTRL      0
#define wxUSE_TOGGLEBTN     0
#define wxUSE_TREECTRL      0

#define wxUSE_STATUSBAR    0

#define wxUSE_NATIVE_STATUSBAR        0

#define wxUSE_TOOLBAR 0
#define wxUSE_TOOLBAR_NATIVE 0

#define wxUSE_NOTEBOOK 0

#define wxUSE_LISTBOOK 0

#define wxUSE_CHOICEBOOK 0

#define wxUSE_TREEBOOK 0

#define wxUSE_TOOLBOOK 0

#define wxUSE_TAB_DIALOG    0

#define wxUSE_GRID         0

#define wxUSE_MINIFRAME 0

#define wxUSE_COMBOCTRL 0

#define wxUSE_ODCOMBOBOX 0

#define wxUSE_BITMAPCOMBOBOX 0


#define wxUSE_ACCEL 0

#define wxUSE_HOTKEY 0

#define wxUSE_CARET         0

#define wxUSE_DISPLAY       0

#define wxUSE_GEOMETRY 1

#define wxUSE_IMAGLIST      0

#define wxUSE_MENUS         0

#define wxUSE_SASH          0

#define wxUSE_SPLITTER      0

#define wxUSE_TOOLTIPS      0

#define wxUSE_VALIDATORS 0


#define wxUSE_COMMON_DIALOGS 0

#define wxUSE_BUSYINFO      0

#define wxUSE_CHOICEDLG     0

#define wxUSE_COLOURDLG     0

#define wxUSE_DIRDLG 0


#define wxUSE_FILEDLG       0

#define wxUSE_FINDREPLDLG       0

#define wxUSE_FONTDLG       0

#define wxUSE_MSGDLG        0

#define wxUSE_PROGRESSDLG 0

#define wxUSE_STARTUP_TIPS 0

#define wxUSE_TEXTDLG 0

#define wxUSE_NUMBERDLG 0

#define wxUSE_SPLASH 0

#define wxUSE_WIZARDDLG 0

#define wxUSE_ABOUTDLG 0


#define wxUSE_METAFILE              0
#define wxUSE_ENH_METAFILE          0
#define wxUSE_WIN_METAFILES_ALWAYS  0


#define wxUSE_MDI 0

#define wxUSE_DOC_VIEW_ARCHITECTURE 0

#define wxUSE_MDI_ARCHITECTURE    0

#define wxUSE_PRINTING_ARCHITECTURE  0

#define wxUSE_HTML          0

#define wxUSE_GLCANVAS       0

#define wxUSE_RICHTEXT       0


#define wxUSE_CLIPBOARD     0

#define wxUSE_DATAOBJ 1

#define wxUSE_DRAG_AND_DROP 0

#define wxUSE_ACCESSIBILITY 0


#define wxUSE_SNGLINST_CHECKER 1

#define wxUSE_DRAGIMAGE 0

#define wxUSE_IPC 1

#define wxUSE_HELP        0


#define wxUSE_MS_HTML_HELP 0


#define wxUSE_WXHTML_HELP 0

#define wxUSE_RESOURCES   0

#define wxUSE_CONSTRAINTS 0


#define wxUSE_SPLINES     0


#define wxUSE_MOUSEWHEEL        0



#define wxUSE_POSTSCRIPT  0

#define wxUSE_AFM_FOR_POSTSCRIPT 1


#define wxUSE_ODBC          0

#define wxODBC_FWD_ONLY_CURSORS	 0

#define wxODBC_BACKWARD_COMPATABILITY 0


#define REMOVE_UNUSED_ARG   0

#define wxUSE_IOSTREAMH     0



#define wxUSE_IMAGE         0

#define wxUSE_LIBPNG 1

#define wxUSE_LIBJPEG 1

#define wxUSE_LIBTIFF 1

#define wxUSE_TGA           0

#define wxUSE_GIF           0

#define wxUSE_PNM           0

#define wxUSE_PCX           0

#define wxUSE_IFF           0

#define wxUSE_XPM           0

#define wxUSE_ICO_CUR       0

#define wxUSE_PALETTE       0


#define wxUSE_ALL_THEMES    0

#define wxUSE_THEME_GTK     0
#define wxUSE_THEME_METAL   0
#define wxUSE_THEME_MONO    0
#define wxUSE_THEME_WIN32   0


/* --- end common options --- */

/* for some features we don't have dedicated configure switches, so just choose
 * the common values automatically */
#if (defined(__WIN32__) && !defined(__WXUNIVERSAL__)) || defined(__WXPM__)
#define wxUSE_OWNER_DRAWN 1
#else
#define wxUSE_OWNER_DRAWN 0
#endif

#if defined(__WIN32__) && !defined(__WINE__) && !defined(__GNUWIN32_OLD__)
#define wxUSE_RICHEDIT 1
#define wxUSE_RICHEDIT2 1
#else
#define wxUSE_RICHEDIT 0
#define wxUSE_RICHEDIT2 0
#endif

#if !defined(__WIN32__) && !defined(__APPLE__)
#define wxUSE_CAIRO 1
#else
#define wxUSE_CAIRO 0
#endif

#define wxUSE_INKEDIT 0

#define wxUSE_UNICODE_MSLU 0

#define wxUSE_DC_CACHEING 0

#define wxUSE_GADGETS 0

/*
 * Supports bool type
 */
#define HAVE_BOOL 1

/*
 * Define if your compiler supports the explicit keyword
 */
#define HAVE_EXPLICIT 1

/*
 * Define if your compiler supports const_cast<>()
 */
#define HAVE_CONST_CAST /**/

/*
 * Define if your compiler supports reinterpret_cast<>()
 */
#define HAVE_REINTERPRET_CAST /**/

/*
 * Define if your compiler supports static_cast<>()
 */
#define HAVE_STATIC_CAST /**/

/*
 * Define if your compiler has C99 va_copy
 */
#define HAVE_VA_COPY 1

/*
 * Define if va_list type is an array
 */
/* #undef VA_LIST_IS_ARRAY */

/*
 * Define if the compiler supports variadic macros
 */
#define HAVE_VARIADIC_MACROS 1

/*
 * Define if your compiler has std::wstring
 */
#define HAVE_STD_WSTRING 1
/*
 * Define if your compiler has compliant std::string::compare
 */
/* #undef HAVE_STD_STRING_COMPARE */
/*
 * Define if your compiler has <hash_map>
 */
/* #undef HAVE_HASH_MAP */
/*
 * Define if your compiler has <ext/hash_map>
 */
/* #undef HAVE_EXT_HASH_MAP */
/*
 * Define if your compiler has std::hash_map/hash_set
 */
/* #undef HAVE_STD_HASH_MAP */
/*
 * Define if your compiler has __gnu_cxx::hash_map/hash_set
 */
/* #undef HAVE_GNU_CXX_HASH_MAP */

/*
 * Define if your compiler has std::unordered_map
 */
/* #undef HAVE_STD_UNORDERED_MAP */

/*
 * Define if your compiler has std::unordered_set
 */
/* #undef HAVE_STD_UNORDERED_SET */

/*
 * Define if your compiler has std::tr1::unordered_map
 */
/* #undef HAVE_TR1_UNORDERED_MAP */

/*
 * Define if your compiler has std::tr1::unordered_set
 */
/* #undef HAVE_TR1_UNORDERED_SET */

/*
 * The built-in regex supports advanced REs in additional to POSIX's basic
 * and extended. Your system regex probably won't support this, and in this
 * case WX_NO_REGEX_ADVANCED should be defined.
 */
/* #undef WX_NO_REGEX_ADVANCED */
/*
 * On GNU systems use re_search instead of regexec, since the latter does a
 * strlen on the search text affecting the performance of some operations.
 */
/* #undef HAVE_RE_SEARCH */
/*
 * Use SDL for audio (Unix)
 */
#define wxUSE_LIBSDL 1

/*
 * Compile sound backends as plugins
 */
#define wxUSE_PLUGINS 0

/*
 * Use GNOME print for printing under GTK+ 2.0
 */
#define wxUSE_LIBGNOMEPRINT 0
/*
 * Use GNOME VFS for MIME types
 */
#define wxUSE_LIBGNOMEVFS 0
/*
 * Use the Hildon framework
 */
#define wxUSE_LIBHILDON 0
/*
 * Use iODBC
 */
#define wxUSE_BUILTIN_IODBC 0
/*
 * Use freetype
 */
#define wxUSE_FREETYPE 0
/*
 * Have glibc2
 */
#define wxHAVE_GLIBC2 0
/*
 * Use libXpm
 */
#define wxHAVE_LIB_XPM 0
/*
 * Define if you have pthread_cleanup_push/pop()
 */
#define wxHAVE_PTHREAD_CLEANUP 1
/*
 * Use consistent PostScript fonts for AFM and printing (!)
 */
#define wxUSE_NORMALIZED_PS_FONTS 1

/* compatibility */
#define WX_NORMALIZED_PS_FONTS wxUSE_NORMALIZED_PS_FONTS

/*
 * Use OpenGL
 */
#define wxUSE_OPENGL 0

/*
 * Set to 1 to compile MS Windows XP theme engine support
 */
#define wxUSE_UXTHEME 1

/*
 *  Set to 1 to auto-adapt to MS Windows XP themes where possible
 * (notably, wxNotebook pages)
 */
#define wxUSE_UXTHEME_AUTO 1

/*
 * Work around a bug in GNU libc 5.x wcstombs() implementation.
 *
 * Note that you must link your programs with libc.a if you enable this and you
 * have libc 5 (you should enable this for libc6 where wcsrtombs() is
 * thread-safe version of wcstombs()).
 */
#define wxUSE_WCSRTOMBS 0

/*
 * Use the new experimental implementation of wxString::Printf()?
 *
 * Warning: enabling this may cause internal compiler errors with gcc!
 */
#define wxUSE_EXPERIMENTAL_PRINTF 0

/*
 * Use wxGetResource & wxWriteResource (change .Xdefaults)
 */
#define wxUSE_X_RESOURCES 0
/*
 * Use OLE and OLE Automation (MSW only)
 */
#define wxUSE_OLE 0
#define wxUSE_OLE_AUTOMATION 0
#define wxUSE_ACTIVEX 0

/* for compatibility */
#define wxUSE_WX_RESOURCES wxUSE_RESOURCES

/*
 * Use MS HTML Help via libmspack (Unix)
 */
#define wxUSE_LIBMSPACK 1

/*
 * Matthews garbage collection (used for MrEd?)
 */
#define WXGARBAGE_COLLECTION_ON 0

/*
 * wxWebKitCtrl
 */
#define wxUSE_WEBKIT 0

/*
 * Objective-C class name uniquifying
 */
#define wxUSE_OBJC_UNIQUIFYING 0

/*
 * ABI incompatible features
 */
#define wxUSE_ABI_INCOMPATIBLE_FEATURES 0

/*
 * The const keyword is being introduced more in wxWindows.
 * You can use this setting to maintain backward compatibility.
 * If 0: will use const wherever possible.
 * If 1: will use const only where necessary
 *       for precompiled headers to work.
 * If 2: will be totally backward compatible, but precompiled
 *       headers may not work and program size will be larger.
 */
#define CONST_COMPATIBILITY 0

/*
 * use the session manager to detect KDE/GNOME
 */
#define wxUSE_DETECT_SM     0


/* define with the name of timezone variable */
#define WX_TIMEZONE timezone

/* The type of 3rd argument to getsockname() - usually size_t or int */
#define WX_SOCKLEN_T socklen_t

/* The type of 5th argument to getsockopt() - usually size_t or int */
#define SOCKOPTLEN_T socklen_t

/* The type of statvfs(2) argument */
#define WX_STATFS_T struct statfs

/* The signal handler prototype */
#define wxTYPE_SA_HANDLER int

/* gettimeofday() usually takes 2 arguments, but some really old systems might
 * have only one, in which case define WX_GETTIMEOFDAY_NO_TZ */
/* #undef WX_GETTIMEOFDAY_NO_TZ */

/* struct tm doesn't always have the tm_gmtoff field, define this if it does */
#define WX_GMTOFF_IN_TM 1

/* Define if you have poll(2) function */
/* #undef HAVE_POLL */

/* Define if you have pw_gecos field in struct passwd */
#define HAVE_PW_GECOS 1

/* Define if you have __cxa_demangle() in <cxxabi.h> */
/* #undef HAVE_CXA_DEMANGLE */

/* Define if you have dlopen() */
#define HAVE_DLOPEN 1

/* Define if you have gettimeofday() */
#define HAVE_GETTIMEOFDAY 1

/* Define if fsync() is available */
#define HAVE_FSYNC 1

/* Define if you have ftime() */
/* #undef HAVE_FTIME */

/* Define if round() is available */
#define HAVE_ROUND 1

/* Define if you have support for large (64 bit size) files */
#define HAVE_LARGEFILE_SUPPORT 1

/* Define if you have localtime() */
#define HAVE_LOCALTIME 1

/* Define if you have nanosleep() */
#define HAVE_NANOSLEEP 1

/* Define if you have sched_yield */
#define HAVE_SCHED_YIELD 1

/* Define if you have pthread_mutexattr_t and functions to work with it */
#define HAVE_PTHREAD_MUTEXATTR_T 1

/* Define if you have pthread_mutexattr_settype() declaration */
#define HAVE_PTHREAD_MUTEXATTR_SETTYPE_DECL 1

/* Define if you have PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP */
/* #undef HAVE_PTHREAD_RECURSIVE_MUTEX_INITIALIZER */

/* Define if you have pthread_cancel */
#define HAVE_PTHREAD_CANCEL 1

/* Define if you have pthread_attr_setstacksize */
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1

/* Define if you have sigaction() */
#define HAVE_SIGACTION 1

/* Define if you have sigemptyset() */
/* #undef HAVE_SIGEMPTYSET */

/* Define if you have shl_load() */
/* #undef HAVE_SHL_LOAD */

/* Define if you have snprintf() */
#define HAVE_SNPRINTF 1

/* Define if you have snprintf() declaration in the header */
#define HAVE_SNPRINTF_DECL 1

/* Define if you have a _broken_ snprintf() declaration in the header,
 * with 'char*' for the 3rd parameter instead of 'const char*' */
/* #undef HAVE_BROKEN_SNPRINTF_DECL */

/* Define if you have a snprintf() which supports positional arguments
   (defined in the unix98 standard) */
#define HAVE_UNIX98_PRINTF 1

/* define if you have statfs function */
#define HAVE_STATFS 1

/* define if you have statfs prototype */
#define HAVE_STATFS_DECL 1

/* define if you have statvfs function */
/* #undef HAVE_STATVFS */

/* Define if you have strptime() */
#define HAVE_STRPTIME 1

/* Define if strptime() is declared in headers */
#define HAVE_STRPTIME_DECL 1

/* Define if you have strtoull() and strtoll() */
/* #undef HAVE_STRTOULL */

/* Define if you have all functions to set thread priority */
#define HAVE_THREAD_PRIORITY_FUNCTIONS 1

/* Define if you have timegm() function */
#define HAVE_TIMEGM 1

/* Define if you have vsnprintf() */
#define HAVE_VSNPRINTF 1

/* Define if you have vsnprintf() declaration in the header */
#define HAVE_VSNPRINTF_DECL 1

/* Define if you have a _broken_ vsnprintf() declaration in the header,
 * with 'char*' for the 3rd parameter instead of 'const char*' */
/* #undef HAVE_BROKEN_VSNPRINTF_DECL */

/* Define if you have usleep() */
/* #undef HAVE_USLEEP */

/* Define if you have wcslen function  */
#define HAVE_WCSLEN 1

/* Define if you have wcstoull() and wcstoll() */
#define HAVE_WCSTOULL 1

/* define if you have vsscanf function */
/* #undef HAVE_VSSCANF */

/* The number of bytes in a char.  */
#define SIZEOF_CHAR 1

/* The number of bytes in a wchar_t.  */
#define SIZEOF_WCHAR_T 2

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a pointer.  */
#define SIZEOF_VOID_P 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a long long.  */
#define SIZEOF_LONG_LONG 8

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

/* The number of bytes in a size_t.  */
#define SIZEOF_SIZE_T 4

/* Define if size_t on your machine is the same type as unsigned int. */
#define wxSIZE_T_IS_UINT 1

/* Define if size_t on your machine is the same type as unsigned long. */
/* #undef wxSIZE_T_IS_ULONG */

/* Define if you have the dlopen function.  */
#define HAVE_DLOPEN 1

/* Define if you have the dlerror function.  */
#define HAVE_DLERROR 1

/* Define if you have Posix fnctl() function. */
#define HAVE_FCNTL 1

/* Define if you have BSD flock() function. */
/* #undef HAVE_FLOCK */

/* Define if you have getaddrinfo function. */
/* #undef HAVE_GETADDRINFO */

/* Define if you have a gethostbyname_r function taking 6 arguments. */
/* #undef HAVE_FUNC_GETHOSTBYNAME_R_6 */

/* Define if you have a gethostbyname_r function taking 5 arguments. */
/* #undef HAVE_FUNC_GETHOSTBYNAME_R_5 */

/* Define if you have a gethostbyname_r function taking 3 arguments. */
/* #undef HAVE_FUNC_GETHOSTBYNAME_R_3 */

/* Define if you only have a gethostbyname function */
#define HAVE_GETHOSTBYNAME 1

/* Define if you have the gethostname function.  */
/* #undef HAVE_GETHOSTNAME */

/* Define if you have a getservbyname_r function taking 6 arguments. */
/* #undef HAVE_FUNC_GETSERVBYNAME_R_6 */

/* Define if you have a getservbyname_r function taking 5 arguments. */
/* #undef HAVE_FUNC_GETSERVBYNAME_R_5 */

/* Define if you have a getservbyname_r function taking 4 arguments. */
/* #undef HAVE_FUNC_GETSERVBYNAME_R_4 */

/* Define if you only have a getservbyname function */
#define HAVE_GETSERVBYNAME 1

/* Define if you have the gmtime_r function.  */
#define HAVE_GMTIME_R 1

/* Define if you have the inet_addr function.  */
#define HAVE_INET_ADDR 1

/* Define if you have the inet_aton function.  */
#define HAVE_INET_ATON 1

/* Define if you have the localtime_r function.  */
#define HAVE_LOCALTIME_R 1

/* Define if you have the mktemp function.  */
/* #undef HAVE_MKTEMP */

/* Define if you have the mkstemp function.  */
#define HAVE_MKSTEMP 1

/* Define if you have the nanosleep function.  */
#define HAVE_NANOSLEEP 1

/* Define if you have the putenv function.  */
/* #undef HAVE_PUTENV */

/* Define if you have the readdir_r function.  */
#define HAVE_READDIR_R 1

/* Define if you have the setenv function.  */
#define HAVE_SETENV 1

/* Define if you have the shl_load function.  */
/* #undef HAVE_SHL_LOAD */

/* Define if you have strtok_r function. */
#define HAVE_STRTOK_R 1

/* Define if you have thr_setconcurrency function */
/* #undef HAVE_THR_SETCONCURRENCY */

/* Define if you have the uname function.  */
#define HAVE_UNAME 1

/* Define if you have the unsetenv function.  */
#define HAVE_UNSETENV 1

/* Define if you have the usleep function.  */
/* #undef HAVE_USLEEP */

/* Define if you have the <X11/XKBlib.h> header file.  */
/* #undef HAVE_X11_XKBLIB_H */

/* Define if you have the <X11/extensions/xf86vmode.h> header file.  */
/* #undef HAVE_X11_EXTENSIONS_XF86VMODE_H */

/* Define if you have the fnmatch() function */
#define HAVE_FNMATCH 1

/* Define if you have the <fnmatch.h> header file.  */
#define HAVE_FNMATCH_H 1

/* Define if you have the <iostream> header file.  */
#define HAVE_IOSTREAM 1

/* Define if you have the <linux/joystick.h> header file.  */
/* #undef HAVE_LINUX_JOYSTICK_H */

/* Define if you have the <sched.h> header file.  */
#define HAVE_SCHED_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <fcntl.h> header file.  */
/* #undef HAVE_FCNTL_H */

/* Define if you have the <wchar.h> header file.  */
#define HAVE_WCHAR_H 1

/* Define if you have the <wcstr.h> header file.  */
/* #undef HAVE_WCSTR_H */

/* Define if you have the <wctype.h> header file.  */
/* #undef HAVE_WCTYPE_H */

/* Define if you have <widec.h> (Solaris only) */
/* #undef HAVE_WIDEC_H */

/* Define if you have the <iconv.h> header file and iconv() symbol.  */
#define HAVE_ICONV 1

/* Define as "const" if the declaration of iconv() needs const.  */
#define ICONV_CONST 

/* Define if you have the <langinfo.h> header file.  */
#define HAVE_LANGINFO_H 1

/* Define if you have the <w32api.h> header file (mingw,cygwin).  */
/* #undef HAVE_W32API_H */

/* Define if you have the <esd.h> header file.  */
#define HAVE_ESD_H 1

/* Define if you have the <sys/soundcard.h> header file. */
#define HAVE_SYS_SOUNDCARD_H 1

/* Define if you have a CD-ROM interface known to mmedia.  */
/* #undef HAVE_KNOWN_CDROM_INTERFACE */

/* Define if you have wcsrtombs() function */
#define HAVE_WCSRTOMBS 1

/* Define this if you have wputc() */
/* #undef HAVE_WPUTC */

/* Define this if you have wputchar() */
/* #undef HAVE_WPUTCHAR */

/* Define this if you have putws() */
/* #undef HAVE_PUTWS */

/* Define this if you have fputws() */
#define HAVE_FPUTWS 1

/* Define this if you have strcasecmp() function in <string.h> */
#define HAVE_STRCASECMP_IN_STRING_H 1

/* Define this if you have strcasecmp() function in <strings.h> */
/* #undef HAVE_STRCASECMP_IN_STRINGS_H */

/* Define this if you have wprintf() and related functions */
#define HAVE_WPRINTF 1

/* Define this if you have swprintf() */
#define HAVE_SWPRINTF 1

/* Define if you have a _broken_ swprintf() declaration in the header,
 * without a 'size_t max' parameter as second argument */
/* #undef HAVE_BROKEN_SWPRINTF_DECL */

/* Define this if you have vswprintf() and related functions */
#define HAVE_VSWPRINTF 1

/* Define this if you have _vsnwprintf */
/* #undef HAVE__VSNWPRINTF */

/* Define if fseeko and ftello are available.  */
#define HAVE_FSEEKO 1

/* Define this if you are using gtk and gdk contains support for X11R6 XIM */
/* #undef HAVE_XIM */

/* Define this if you have X11/extensions/shape.h */
/* #undef HAVE_XSHAPE */

/* Define this if you have type SPBCDATA */
/* #undef HAVE_SPBCDATA */

/* Define if you have pango_font_family_is_monospace() (Pango >= 1.3.3) */
/* #undef HAVE_PANGO_FONT_FAMILY_IS_MONOSPACE */

/* Define if gtk_icon_size_lookup is missing from the GTK+ headers */
/* #undef NEED_GTK_ICON_SIZE_LOOKUP */

/* Define if you have Pango xft support */
/* #undef HAVE_PANGO_XFT */

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if fdopen is available.  */
#define HAVE_FDOPEN 1

/* Define if sysconf is available. */
#define HAVE_SYSCONF 1

/* Define if getpwuid_r is available. */
#define HAVE_GETPWUID_R 1

/* Define if getgrgid_r is available. */
#define HAVE_GETGRGID_R 1

/* -------------------------------------------------------------------------
   Win32 adjustments section
   ------------------------------------------------------------------------- */

#ifdef __WIN32__

/* we need to define wxUSE_XPM_IN_MSW for MSW compilation for compatibility
   with wx/msw/setup.h */
#define wxUSE_XPM_IN_MSW wxUSE_XPM

/* Set to 0 to disable PostScript print/preview architecture code under Windows
  (just use Windows printing).
 */
#define wxUSE_POSTSCRIPT_ARCHITECTURE_IN_MSW 1

/* When using an external jpeg library and the Windows headers already define
 * boolean, define to the type used by the jpeg library for boolean.  */
/* #undef wxHACK_BOOLEAN */

/* Define if the header pbt.h is missing.  */
/* #undef NEED_PBT_H */

#endif /* __WIN32__ */

/* --------------------------------------------------------*
 *  This stuff is static, it doesn't get modified directly
 *  by configure.
*/

/*
   define some constants identifying wxWindows version in more details than
   just the version number
 */

/* wxLogChain class available */
#define wxHAS_LOG_CHAIN

/* define this when wxDC::Blit() respects SetDeviceOrigin() in wxGTK */
/* #undef wxHAS_WORKING_GTK_DC_BLIT */

#endif /* __WX_SETUP_H__ */

