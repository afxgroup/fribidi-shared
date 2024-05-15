#include <stdarg.h>
#include <exec/exec.h>
#include <fribidi.h>
#include <proto/exec.h>
#include <proto/fribidi.h>

void
fribidi_shape_arabic (
  FriBidiFlags flags,
  const FriBidiLevel *embedding_levels,
  const FriBidiStrIndex len,
  FriBidiArabicProp *ar_props,
  FriBidiChar *str
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_shape_arabic(flags, embedding_levels, len, ar_props, str);
}

FriBidiCharType
fribidi_get_bidi_type (
  FriBidiChar ch
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_bidi_type(ch);
}

void fribidi_get_bidi_types (
  const FriBidiChar *str,
  const FriBidiStrIndex len,
  FriBidiCharType *btypes
) {
    extern struct FriBidiIFace *IFriBidi;
    IFriBidi->fribidi_get_bidi_types(str, len, btypes);
}

const char *fribidi_get_bidi_type_name (
  FriBidiCharType t
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_bidi_type_name(t);
}

FriBidiParType fribidi_get_par_direction (
  const FriBidiCharType *bidi_types,
  const FriBidiStrIndex len
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_par_direction(bidi_types, len);
}

FriBidiLevel
fribidi_get_par_embedding_levels_ex (
  const FriBidiCharType *bidi_types,
  const FriBidiBracketType *bracket_types,
  const FriBidiStrIndex len,
  FriBidiParType *pbase_dir,
  FriBidiLevel *embedding_levels
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_par_embedding_levels_ex(bidi_types, bracket_types, len, pbase_dir, embedding_levels);
}

FriBidiLevel fribidi_reorder_line (
  FriBidiFlags flags,
  const FriBidiCharType *bidi_types,
  const FriBidiStrIndex len,
  const FriBidiStrIndex off,
  const FriBidiParType base_dir,
  FriBidiLevel *embedding_levels,
  FriBidiChar *visual_str,
  FriBidiStrIndex *map
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_reorder_line(flags, bidi_types, len, off, base_dir, embedding_levels, visual_str, map);
}

FriBidiBracketType fribidi_get_bracket (
  FriBidiChar ch
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_bracket(ch);
}

void
fribidi_get_bracket_types (
  const FriBidiChar *str,
  const FriBidiStrIndex len,
  const FriBidiCharType *types,
  FriBidiBracketType *btypes
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_bracket_types(str, len, types, btypes);
}

FriBidiStrIndex fribidi_charset_to_unicode (
  FriBidiCharSet char_set,
  const char *s,
  FriBidiStrIndex len,
  FriBidiChar *us
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_charset_to_unicode(char_set, s, len, us);
}

FriBidiStrIndex fribidi_unicode_to_charset (
  FriBidiCharSet char_set,
  const FriBidiChar *us,
  FriBidiStrIndex len,
  char *s
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_unicode_to_charset(char_set, us, len, s);
}

FriBidiCharSet fribidi_parse_charset (
  const char *s
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_parse_charset(s);
}

const char *fribidi_char_set_name (
  FriBidiCharSet char_set
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_char_set_name(char_set);
}

const char *fribidi_char_set_title (
  FriBidiCharSet char_set
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_char_set_title(char_set);
}

const char *fribidi_char_set_desc (
  FriBidiCharSet char_set
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_char_set_desc(char_set);
}

int fribidi_debug_status (
  void
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_debug_status();
}

int
fribidi_set_debug (
  int state
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_set_debug(state);
}

fribidi_boolean fribidi_mirroring_status (
  void
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_mirroring_status();
}

fribidi_boolean fribidi_set_mirroring (
  fribidi_boolean state
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_set_mirroring(state);
}

fribidi_boolean fribidi_reorder_nsm_status (
  void
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_reorder_nsm_status();
}

fribidi_boolean fribidi_set_reorder_nsm (
  fribidi_boolean state		/* new state to set */
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_set_reorder_nsm(state);
}

FriBidiLevel
fribidi_log2vis_get_embedding_levels (
  const FriBidiCharType *bidi_types,
  const FriBidiStrIndex len,
  FriBidiParType *pbase_dir,
  FriBidiLevel *embedding_levels
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_log2vis_get_embedding_levels(bidi_types, len, pbase_dir, embedding_levels);
}

FriBidiCharType
fribidi_get_type (
  FriBidiChar ch
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_type(ch);
}

FriBidiCharType
fribidi_get_type_internal (
  FriBidiChar ch
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_type_internal(ch);
}

FriBidiLevel
fribidi_get_par_embedding_levels (
  const FriBidiCharType *bidi_types,
  const FriBidiStrIndex len,
  FriBidiParType *pbase_dir,
  FriBidiLevel *embedding_levels
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_par_embedding_levels(bidi_types, len, pbase_dir, embedding_levels);
}

FriBidiJoiningType
fribidi_get_joining_type (
  FriBidiChar ch
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_joining_type(ch);
}

void fribidi_get_joining_types (
  const FriBidiChar *str,
  const FriBidiStrIndex len,
  FriBidiJoiningType *jtypes
) {
    extern struct FriBidiIFace *IFriBidi;

    IFriBidi->fribidi_get_joining_types(str, len, jtypes);
}

const char *fribidi_get_joining_type_name (
  FriBidiJoiningType j
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_joining_type_name(j);
}

void fribidi_join_arabic (
  const FriBidiCharType *bidi_types,
  const FriBidiStrIndex len,
  const FriBidiLevel *embedding_levels,
  FriBidiArabicProp *ar_props
) {
    extern struct FriBidiIFace *IFriBidi;

    IFriBidi->fribidi_join_arabic(bidi_types, len, embedding_levels, ar_props);
}

fribidi_boolean fribidi_get_mirror_char (
  FriBidiChar ch,
  FriBidiChar *mirrored_ch
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_get_mirror_char(ch, mirrored_ch);
}

void fribidi_shape_mirroring (
  const FriBidiLevel *embedding_levels,
  const FriBidiStrIndex len,
  FriBidiChar *str
) {
    extern struct FriBidiIFace *IFriBidi;

    IFriBidi->fribidi_shape_mirroring(embedding_levels, len, str);
}

void fribidi_shape (
  FriBidiFlags flags,
  const FriBidiLevel *embedding_levels,
  const FriBidiStrIndex len,
  FriBidiArabicProp *ar_props,
  FriBidiChar *str
) {
    extern struct FriBidiIFace *IFriBidi;

    IFriBidi->fribidi_shape(flags, embedding_levels, len, ar_props, str);
}

FriBidiStrIndex
fribidi_remove_bidi_marks (
  FriBidiChar *str,
  const FriBidiStrIndex len,
  FriBidiStrIndex *positions_to_this,
  FriBidiStrIndex *position_from_this_list,
  FriBidiLevel *embedding_levels
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_remove_bidi_marks(str, len, positions_to_this, position_from_this_list, embedding_levels);
}

FriBidiLevel fribidi_log2vis (
  const FriBidiChar *str,
  const FriBidiStrIndex len,
  FriBidiParType *pbase_dir,
  FriBidiChar *visual_str,
  FriBidiStrIndex *positions_L_to_V,
  FriBidiStrIndex *positions_V_to_L,
  FriBidiLevel *embedding_levels
) {
    extern struct FriBidiIFace *IFriBidi;

    return IFriBidi->fribidi_log2vis(str, len, pbase_dir, visual_str, positions_L_to_V, positions_V_to_L, embedding_levels);
}