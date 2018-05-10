#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char32.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/Int32.h"
panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* self) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(self);
    panda$core$Char32$wrapper* $tmp2;
    $tmp2 = (panda$core$Char32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };

void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str) {
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    self->str = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        $tmp3 = self->str;
        $tmp4 = p_str;
        self->str = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self) {
    panda$core$Bit $finallyReturn4;
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    $finallyReturn4 = $tmp6;
    return $finallyReturn4;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c9;
    panda$core$Int32 result10;
    panda$core$Char32 $finallyReturn14;
    panda$core$Char32 $tmp16;
    panda$core$Char32 $finallyReturn28;
    panda$core$Char32 $tmp30;
    panda$core$Char32 $finallyReturn47;
    panda$core$Char32 $tmp49;
    panda$core$Char32 $finallyReturn69;
    panda$core$Char32 $tmp71;
    panda$core$Bit $tmp8 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    PANDA_ASSERT($tmp8.value);
    c9 = self->str->data[self->index.value];
    panda$core$Int32 $tmp11 = panda$core$Char8$convert$R$panda$core$Int32(c9);
    result10 = $tmp11;
    int64_t $tmp12 = ((int64_t) c9.value) & 255;
    bool $tmp13 = $tmp12 < 128;
    if (((panda$core$Bit) { $tmp13 }).value) {
    {
        panda$core$Int64 $tmp14 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp14;
        panda$core$Char32$init$panda$core$Int32(&$tmp16, result10);
        $finallyReturn14 = $tmp16;
        return $finallyReturn14;
    }
    }
    int64_t $tmp18 = ((int64_t) c9.value) & 255;
    bool $tmp19 = $tmp18 < 192;
    if (((panda$core$Bit) { $tmp19 }).value) {
    {
        panda$core$Int64 $tmp20 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp21 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp20, self->str->_length);
        PANDA_ASSERT($tmp21.value);
        panda$core$Int32 $tmp22 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result10, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp23 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp22, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp24 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp25 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp24.value]);
        panda$core$Int32 $tmp26 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp25, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp27 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp23, $tmp26);
        result10 = $tmp27;
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp28;
        panda$core$Char32$init$panda$core$Int32(&$tmp30, result10);
        $finallyReturn28 = $tmp30;
        return $finallyReturn28;
    }
    }
    int64_t $tmp32 = ((int64_t) c9.value) & 255;
    bool $tmp33 = $tmp32 < 224;
    if (((panda$core$Bit) { $tmp33 }).value) {
    {
        panda$core$Int64 $tmp34 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp35 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp34, self->str->_length);
        PANDA_ASSERT($tmp35.value);
        panda$core$Int32 $tmp36 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result10, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp37 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp36, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp38 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp39 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp38.value]);
        panda$core$Int32 $tmp40 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp39, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp41 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp40, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp42 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp37, $tmp41);
        panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp44 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp43.value]);
        panda$core$Int32 $tmp45 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp44, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp46 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp42, $tmp45);
        result10 = $tmp46;
        panda$core$Int64 $tmp47 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp47;
        panda$core$Char32$init$panda$core$Int32(&$tmp49, result10);
        $finallyReturn47 = $tmp49;
        return $finallyReturn47;
    }
    }
    panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp52 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp51, self->str->_length);
    PANDA_ASSERT($tmp52.value);
    panda$core$Int32 $tmp53 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result10, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp54 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp53, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp56 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp55.value]);
    panda$core$Int32 $tmp57 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp56, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp58 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp57, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp59 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp54, $tmp58);
    panda$core$Int64 $tmp60 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp61 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp60.value]);
    panda$core$Int32 $tmp62 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp61, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp63 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp62, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp64 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp59, $tmp63);
    panda$core$Int64 $tmp65 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp66 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp65.value]);
    panda$core$Int32 $tmp67 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp66, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp68 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp64, $tmp67);
    result10 = $tmp68;
    panda$core$Int64 $tmp69 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp69;
    panda$core$Char32$init$panda$core$Int32(&$tmp71, result10);
    $finallyReturn69 = $tmp71;
    return $finallyReturn69;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    int $tmp75;
    {
    }
    $tmp75 = -1;
    goto $l73;
    $l73:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp75) {
        case -1: goto $l76;
    }
    $l76:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

