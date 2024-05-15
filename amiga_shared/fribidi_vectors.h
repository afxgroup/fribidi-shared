/*
** This file was machine generated by idltool.py 54.8.
** Do not edit.
*/

#include <exec/types.h>
#include <exec/exec.h>
#include <exec/interfaces.h>
#include <fribidi.h>


/* forward declaration */
struct FriBidiIFace;

extern uint32 VARARGS68K _impl_Obtain(struct FriBidiIFace *);
extern uint32 VARARGS68K _impl_Release(struct FriBidiIFace *);
extern FriBidiJoiningType VARARGS68K _impl_fribidi_get_joining_type(struct FriBidiIFace *, FriBidiChar ch);
extern void VARARGS68K _impl_fribidi_get_joining_types(struct FriBidiIFace *, const FriBidiChar * str, const FriBidiStrIndex len, FriBidiJoiningType * jtypes);
extern const char * VARARGS68K _impl_fribidi_get_joining_type_name(struct FriBidiIFace *, FriBidiJoiningType j);
extern void VARARGS68K _impl_fribidi_shape_arabic(struct FriBidiIFace *, FriBidiFlags flags, const FriBidiLevel * embedding_levels, const FriBidiStrIndex len, FriBidiArabicProp * ar_props, FriBidiChar * str);
extern FriBidiParType VARARGS68K _impl_fribidi_get_par_direction(struct FriBidiIFace *, const FriBidiCharType * bidi_types, const FriBidiStrIndex len);
extern FriBidiLevel VARARGS68K _impl_fribidi_get_par_embedding_levels_ex(struct FriBidiIFace *, const FriBidiCharType * bidi_types, const FriBidiBracketType * bracket_types, const FriBidiStrIndex len, FriBidiParType * pbase_dir, FriBidiLevel * embedding_levels);
extern FriBidiLevel VARARGS68K _impl_fribidi_reorder_line(struct FriBidiIFace *, FriBidiFlags flags, const FriBidiCharType * bidi_types, const FriBidiStrIndex len, const FriBidiStrIndex off, const FriBidiParType base_dir, FriBidiLevel * embedding_levels, FriBidiChar * visual_str, FriBidiStrIndex * map);
extern FriBidiBracketType VARARGS68K _impl_fribidi_get_bracket(struct FriBidiIFace *, FriBidiChar ch);
extern void VARARGS68K _impl_fribidi_get_bracket_types(struct FriBidiIFace *, const FriBidiChar * str, const FriBidiStrIndex len, const FriBidiCharType * types, FriBidiBracketType * btypes);
extern FriBidiStrIndex VARARGS68K _impl_fribidi_charset_to_unicode(struct FriBidiIFace *, FriBidiCharSet char_set, const char * s, FriBidiStrIndex len, FriBidiChar * us);
extern FriBidiStrIndex VARARGS68K _impl_fribidi_unicode_to_charset(struct FriBidiIFace *, FriBidiCharSet char_set, const FriBidiChar * us, FriBidiStrIndex len, char * s);
extern FriBidiCharSet VARARGS68K _impl_fribidi_parse_charset(struct FriBidiIFace *, const char * s);
extern const char * VARARGS68K _impl_fribidi_char_set_name(struct FriBidiIFace *, FriBidiCharSet char_set);
extern const char * VARARGS68K _impl_fribidi_char_set_title(struct FriBidiIFace *, FriBidiCharSet char_set);
extern const char * VARARGS68K _impl_fribidi_char_set_desc(struct FriBidiIFace *, FriBidiCharSet char_set);
extern int VARARGS68K _impl_fribidi_debug_status(struct FriBidiIFace *);
extern int VARARGS68K _impl_fribidi_set_debug(struct FriBidiIFace *, int state);
extern void VARARGS68K _impl_fribidi_join_arabic(struct FriBidiIFace *, const FriBidiCharType * bidi_types, const FriBidiStrIndex len, const FriBidiLevel * embedding_levels, FriBidiArabicProp * ar_props);
extern fribidi_boolean VARARGS68K _impl_fribidi_get_mirror_char(struct FriBidiIFace *, FriBidiChar ch, FriBidiChar * mirrored_ch);
extern void VARARGS68K _impl_fribidi_shape_mirroring(struct FriBidiIFace *, const FriBidiLevel * embedding_levels, const FriBidiStrIndex len, FriBidiChar * str);
extern void VARARGS68K _impl_fribidi_shape(struct FriBidiIFace *, FriBidiFlags flags, const FriBidiLevel * embedding_levels, const FriBidiStrIndex len, FriBidiArabicProp * ar_props, FriBidiChar * str);
extern FriBidiStrIndex VARARGS68K _impl_fribidi_remove_bidi_marks(struct FriBidiIFace *, FriBidiChar * str, const FriBidiStrIndex len, FriBidiStrIndex * positions_to_this, FriBidiStrIndex * position_from_this_list, FriBidiLevel * embedding_levels);
extern FriBidiLevel VARARGS68K _impl_fribidi_log2vis(struct FriBidiIFace *, const FriBidiChar * str, const FriBidiStrIndex len, FriBidiParType * pbase_dir, FriBidiChar * visual_str, FriBidiStrIndex * positions_L_to_V, FriBidiStrIndex * positions_V_to_L, FriBidiLevel * embedding_levels);
extern FriBidiCharType VARARGS68K _impl_fribidi_get_bidi_type(struct FriBidiIFace *, FriBidiChar ch);
extern void VARARGS68K _impl_fribidi_get_bidi_types(struct FriBidiIFace *, const FriBidiChar * str, const FriBidiStrIndex len, FriBidiCharType * btypes);
extern const char * VARARGS68K _impl_fribidi_get_bidi_type_name(struct FriBidiIFace *, FriBidiCharType t);
extern fribidi_boolean VARARGS68K _impl_fribidi_mirroring_status(struct FriBidiIFace *);
extern fribidi_boolean VARARGS68K _impl_fribidi_set_mirroring(struct FriBidiIFace *, fribidi_boolean state);
extern fribidi_boolean VARARGS68K _impl_fribidi_reorder_nsm_status(struct FriBidiIFace *);
extern fribidi_boolean VARARGS68K _impl_fribidi_set_reorder_nsm(struct FriBidiIFace *, fribidi_boolean state);
extern FriBidiLevel VARARGS68K _impl_fribidi_log2vis_get_embedding_levels(struct FriBidiIFace *, const FriBidiCharType * bidi_types, const FriBidiStrIndex len, FriBidiParType * pbase_dir, FriBidiLevel * embedding_levels);
extern FriBidiCharType VARARGS68K _impl_fribidi_get_type(struct FriBidiIFace *, FriBidiChar ch);
extern FriBidiCharType VARARGS68K _impl_fribidi_get_type_internal(struct FriBidiIFace *, FriBidiChar ch);
extern FriBidiLevel VARARGS68K _impl_fribidi_get_par_embedding_levels(struct FriBidiIFace *, const FriBidiCharType * bidi_types, const FriBidiStrIndex len, FriBidiParType * pbase_dir, FriBidiLevel * embedding_levels);

