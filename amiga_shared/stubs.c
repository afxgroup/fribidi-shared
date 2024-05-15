#include <stdarg.h>
#include <exec/exec.h>
#include <proto/exec.h>
#include <fribidi.h>
#include <proto/fribidi.h>
#include <stdarg.h>

uint32 _impl_Obtain(struct FriBidiIFace *Self)
{
	uint32 res;
	__asm__ __volatile__(
		"1:	lwarx	%0,0,%1\n"
		"addic	%0,%0,1\n"
		"stwcx.	%0,0,%1\n"
		"bne-	1b"
		: "=&r"(res)
		: "r"(&Self->Data.RefCount)
		: "cc", "memory");

	return res;
}

uint32 _impl_Release(struct FriBidiIFace *Self)
{
	uint32 res;
	__asm__ __volatile__(
		"1:	lwarx	%0,0,%1\n"
		"addic	%0,%0,-1\n"
		"stwcx.	%0,0,%1\n"
		"bne-	1b"
		: "=&r"(res)
		: "r"(&Self->Data.RefCount)
		: "cc", "memory");

	return res;
}

void _impl_fribidi_shape_arabic(
	struct FriBidiIFace *Self,
	FriBidiFlags flags,
	const FriBidiLevel *embedding_levels,
	const FriBidiStrIndex len,
	FriBidiArabicProp *ar_props,
	FriBidiChar *str)
{
	return fribidi_shape_arabic(flags, embedding_levels, len, ar_props, str);
}

FriBidiCharType
_impl_fribidi_get_bidi_type(
	struct FriBidiIFace *Self,
	FriBidiChar ch)
{
	return fribidi_get_bidi_type(ch);
}

void _impl_fribidi_get_bidi_types(
	struct FriBidiIFace *Self,
	const FriBidiChar *str,
	const FriBidiStrIndex len,
	FriBidiCharType *btypes)
{
	fribidi_get_bidi_types(str, len, btypes);
}

const char *_impl_fribidi_get_bidi_type_name(
	struct FriBidiIFace *Self,
	FriBidiCharType t)
{
	return fribidi_get_bidi_type_name(t);
}

FriBidiParType _impl_fribidi_get_par_direction(
	struct FriBidiIFace *Self,
	const FriBidiCharType *bidi_types,
	const FriBidiStrIndex len)
{
	return fribidi_get_par_direction(bidi_types, len);
}

FriBidiLevel
_impl_fribidi_get_par_embedding_levels_ex(
	struct FriBidiIFace *Self,
	const FriBidiCharType *bidi_types,
	const FriBidiBracketType *bracket_types,
	const FriBidiStrIndex len,
	FriBidiParType *pbase_dir,
	FriBidiLevel *embedding_levels)
{
	return fribidi_get_par_embedding_levels_ex(bidi_types, bracket_types, len, pbase_dir, embedding_levels);
}

FriBidiLevel _impl_fribidi_reorder_line(
	struct FriBidiIFace *Self,
	FriBidiFlags flags,
	const FriBidiCharType *bidi_types,
	const FriBidiStrIndex len,
	const FriBidiStrIndex off,
	const FriBidiParType base_dir,
	FriBidiLevel *embedding_levels,
	FriBidiChar *visual_str,
	FriBidiStrIndex *map)
{
	return fribidi_reorder_line(flags, bidi_types, len, off, base_dir, embedding_levels, visual_str, map);
}

FriBidiBracketType _impl_fribidi_get_bracket(
	struct FriBidiIFace *Self,
	FriBidiChar ch)
{
	return fribidi_get_bracket(ch);
}

void _impl_fribidi_get_bracket_types(
	struct FriBidiIFace *Self,
	const FriBidiChar *str,
	const FriBidiStrIndex len,
	const FriBidiCharType *types,
	FriBidiBracketType *btypes)
{
	return fribidi_get_bracket_types(str, len, types, btypes);
}

FriBidiStrIndex _impl_fribidi_charset_to_unicode(
	struct FriBidiIFace *Self,
	FriBidiCharSet char_set,
	const char *s,
	FriBidiStrIndex len,
	FriBidiChar *us)
{
	return fribidi_charset_to_unicode(char_set, s, len, us);
}

FriBidiStrIndex _impl_fribidi_unicode_to_charset(
	struct FriBidiIFace *Self,
	FriBidiCharSet char_set,
	const FriBidiChar *us,
	FriBidiStrIndex len,
	char *s)
{
	return fribidi_unicode_to_charset(char_set, us, len, s);
}

FriBidiCharSet _impl_fribidi_parse_charset(
	struct FriBidiIFace *Self,
	const char *s)
{
	return fribidi_parse_charset(s);
}

const char *_impl_fribidi_char_set_name(
	struct FriBidiIFace *Self,
	FriBidiCharSet char_set)
{
	return fribidi_char_set_name(char_set);
}

const char *_impl_fribidi_char_set_title(
	struct FriBidiIFace *Self,
	FriBidiCharSet char_set)
{
	return fribidi_char_set_title(char_set);
}

const char *_impl_fribidi_char_set_desc(
	struct FriBidiIFace *Self,
	FriBidiCharSet char_set)
{
	return fribidi_char_set_desc(char_set);
}

int _impl_fribidi_debug_status(
	struct FriBidiIFace *Self
)
{
	return fribidi_debug_status();
}

int _impl_fribidi_set_debug(
	struct FriBidiIFace *Self,
	int state)
{
	return fribidi_set_debug(state);
}

fribidi_boolean _impl_fribidi_mirroring_status(
	struct FriBidiIFace *Self
)
{
	return fribidi_mirroring_status();
}

fribidi_boolean _impl_fribidi_set_mirroring(
	struct FriBidiIFace *Self,
	fribidi_boolean state)
{
	return fribidi_set_mirroring(state);
}

fribidi_boolean _impl_fribidi_reorder_nsm_status(
	struct FriBidiIFace *Self
)
{
	return fribidi_reorder_nsm_status();
}

fribidi_boolean _impl_fribidi_set_reorder_nsm(
	struct FriBidiIFace *Self,
	fribidi_boolean state
)
{
	return fribidi_set_reorder_nsm(state);
}

FriBidiLevel
_impl_fribidi_log2vis_get_embedding_levels(
	struct FriBidiIFace *Self,
	const FriBidiCharType *bidi_types,
	const FriBidiStrIndex len,
	FriBidiParType *pbase_dir,
	FriBidiLevel *embedding_levels)
{
	return fribidi_log2vis_get_embedding_levels(bidi_types, len, pbase_dir, embedding_levels);
}

FriBidiCharType
_impl_fribidi_get_type(
	struct FriBidiIFace *Self,
	FriBidiChar ch)
{
	return fribidi_get_type(ch);
}

FriBidiCharType
_impl_fribidi_get_type_internal(
	struct FriBidiIFace *Self,
	FriBidiChar ch)
{
	return fribidi_get_type_internal(ch);
}

FriBidiLevel
_impl_fribidi_get_par_embedding_levels(
	struct FriBidiIFace *Self,
	const FriBidiCharType *bidi_types,
	const FriBidiStrIndex len,
	FriBidiParType *pbase_dir,
	FriBidiLevel *embedding_levels)
{
	return fribidi_get_par_embedding_levels(bidi_types, len, pbase_dir, embedding_levels);
}

FriBidiJoiningType
_impl_fribidi_get_joining_type(
	struct FriBidiIFace *Self,
	FriBidiChar ch)
{
	return fribidi_get_joining_type(ch);
}

void _impl_fribidi_get_joining_types(
	struct FriBidiIFace *Self,
	const FriBidiChar *str,
	const FriBidiStrIndex len,
	FriBidiJoiningType *jtypes)
{
	fribidi_get_joining_types(str, len, jtypes);
}

const char *_impl_fribidi_get_joining_type_name(
	struct FriBidiIFace *Self,
	FriBidiJoiningType j)
{
	return fribidi_get_joining_type_name(j);
}

void _impl_fribidi_join_arabic(
	struct FriBidiIFace *Self,
	const FriBidiCharType *bidi_types,
	const FriBidiStrIndex len,
	const FriBidiLevel *embedding_levels,
	FriBidiArabicProp *ar_props)
{
	fribidi_join_arabic(bidi_types, len, embedding_levels, ar_props);
}

fribidi_boolean _impl_fribidi_get_mirror_char(
	struct FriBidiIFace *Self,
	FriBidiChar ch,
	FriBidiChar *mirrored_ch)
{
	return fribidi_get_mirror_char(ch, mirrored_ch);
}

void _impl_fribidi_shape_mirroring(
	struct FriBidiIFace *Self,
	const FriBidiLevel *embedding_levels,
	const FriBidiStrIndex len,
	FriBidiChar *str)
{
	fribidi_shape_mirroring(embedding_levels, len, str);
}

void _impl_fribidi_shape(
	struct FriBidiIFace *Self,
	FriBidiFlags flags,
	const FriBidiLevel *embedding_levels,
	const FriBidiStrIndex len,
	FriBidiArabicProp *ar_props,
	FriBidiChar *str)
{
	return fribidi_shape(flags, embedding_levels, len, ar_props, str);
}

FriBidiStrIndex
_impl_fribidi_remove_bidi_marks(
	struct FriBidiIFace *Self,
	FriBidiChar *str,
	const FriBidiStrIndex len,
	FriBidiStrIndex *positions_to_this,
	FriBidiStrIndex *position_from_this_list,
	FriBidiLevel *embedding_levels)
{
	return fribidi_remove_bidi_marks(str, len, positions_to_this, position_from_this_list, embedding_levels);
}

FriBidiLevel _impl_fribidi_log2vis(
	struct FriBidiIFace *Self,
	const FriBidiChar *str,
	const FriBidiStrIndex len,
	FriBidiParType *pbase_dir,
	FriBidiChar *visual_str,
	FriBidiStrIndex *positions_L_to_V,
	FriBidiStrIndex *positions_V_to_L,
	FriBidiLevel *embedding_levels)
{
	return fribidi_log2vis(str, len, pbase_dir, visual_str, positions_L_to_V, positions_V_to_L, embedding_levels);
}