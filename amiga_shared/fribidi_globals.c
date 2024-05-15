#include "../lib/fribidi-common.h"
#include "../lib/fribidi-unicode-version.h"

const char *fribidi_version_info =
  "(" FRIBIDI_NAME ") " FRIBIDI_VERSION "\n"
  "interface version " FRIBIDI_INTERFACE_VERSION_STRING ",\n"
  "Unicode Character Database version " FRIBIDI_UNICODE_VERSION ",\n"
  "Configure options"
#ifdef DEBUG
  " --enable-debug"
#endif /* DEBUG */
  ".\n\n"
  "Copyright (C) 2004  Sharif FarsiWeb, Inc.\n"
  "Copyright (C) 2001, 2002, 2004, 2005  Behdad Esfahbod\n"
  "Copyright (C) 1999, 2000, 2017, 2018, 2019  Dov Grobgeld\n"
  FRIBIDI_NAME " comes with NO WARRANTY, to the extent permitted by law.\n"
  "You may redistribute copies of " FRIBIDI_NAME " under\n"
  "the terms of the GNU Lesser General Public License.\n"
  "For more information about these matters, see the file named COPYING.\n\n"
  "Written by Behdad Esfahbod and Dov Grobgeld.\n";

const char *fribidi_unicode_version = FRIBIDI_UNICODE_VERSION;