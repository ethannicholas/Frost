#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
panda$core$Object* panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(self);
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaZAlloc(64);
    $tmp2->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    $tmp2->refCount = 1;
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim} };

static panda$core$String $s1;
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 81, -1091975073017356571, NULL };

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p_array) {
    self->array = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        self->array = p_array;
    }
}
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, self->array->count);
    return $tmp3;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp4;
    panda$core$Int64 $tmp5 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp6 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->array, $tmp5);
    return $tmp6;
}
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->array));
}

