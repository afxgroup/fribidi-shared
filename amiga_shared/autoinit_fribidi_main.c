/*
 * AutoInit stub for fribidi
 *
 * Copyright (c) 2012 Sebastian Bauer.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Keith Packard not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  Keith Packard makes no
 * representations about the suitability of this software for any purpose.  It
 * is provided "as is" without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING
 * OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */

#include <fribidi.h>

#include <interfaces/fribidi.h>
#include <proto/exec.h>
#include <assert.h>

struct FriBidiIFace *IFriBidi = NULL;
static struct FriBidiLibrary * __FriBidiBase;
static struct FriBidiIFace * __IFriBidi;

/****************************************************************************/

extern struct FriBidiLibrary * FriBidiBase;

/****************************************************************************/

void fribidi_main_constructor(void)
{
    if (FriBidiBase == NULL) /* Library base is NULL, we need to open it */
    {
        /* We were called before the base constructor.
         * This means we will be called _after_ the base destructor.
         * So we cant drop the interface _after_ closing the last library base,
         * we just open the library here which ensures that.
         */
        __FriBidiBase = FriBidiBase = (struct FriBidiLibrary *)IExec->OpenLibrary("fribidi.library", 54L);
        assert(FriBidiBase != NULL);
    }

    __IFriBidi = IFriBidi = (struct FriBidiIFace *)IExec->GetInterface((struct Library *)FriBidiBase, "main", 1, NULL);
    assert(IFriBidi != NULL);
}
__attribute__((section(".ctors.zzzy"))) static void
(*fribidi_main_constructor_ptr)(void) USED = fribidi_main_constructor;

/****************************************************************************/

void fribidi_main_destructor(void)
{
    if (__IFriBidi)
    {
        IExec->DropInterface ((struct Interface *)__IFriBidi);
    }
    if (__FriBidiBase)
    {
        IExec->CloseLibrary((struct Library *)__FriBidiBase);
    }
}
__attribute__((section(".dtors.zzzy"))) static void
(*fribidi_main_destructor_ptr)(void) USED = fribidi_main_destructor;

/****************************************************************************/
