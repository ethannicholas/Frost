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


struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP} };

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
    panda$core$Bit $returnValue5;
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    $returnValue5 = $tmp6;
    return $returnValue5;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c9;
    panda$core$Int32 result10;
    panda$core$Char32 $returnValue15;
    panda$core$Char32 $tmp16;
    panda$core$Char32 $tmp29;
    panda$core$Char32 $tmp47;
    panda$core$Char32 $tmp68;
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
        $returnValue15 = $tmp16;
        return $returnValue15;
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
        panda$core$Char32$init$panda$core$Int32(&$tmp29, result10);
        $returnValue15 = $tmp29;
        return $returnValue15;
    }
    }
    int64_t $tmp31 = ((int64_t) c9.value) & 255;
    bool $tmp32 = $tmp31 < 224;
    if (((panda$core$Bit) { $tmp32 }).value) {
    {
        panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp34 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp33, self->str->_length);
        PANDA_ASSERT($tmp34.value);
        panda$core$Int32 $tmp35 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result10, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp36 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp35, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp38 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp37.value]);
        panda$core$Int32 $tmp39 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp38, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp40 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp39, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp41 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp36, $tmp40);
        panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp43 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp42.value]);
        panda$core$Int32 $tmp44 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp43, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp45 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp41, $tmp44);
        result10 = $tmp45;
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp46;
        panda$core$Char32$init$panda$core$Int32(&$tmp47, result10);
        $returnValue15 = $tmp47;
        return $returnValue15;
    }
    }
    panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp50 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp49, self->str->_length);
    PANDA_ASSERT($tmp50.value);
    panda$core$Int32 $tmp51 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result10, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp52 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp51, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp54 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp53.value]);
    panda$core$Int32 $tmp55 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp54, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp56 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp55, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp57 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp52, $tmp56);
    panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp59 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp58.value]);
    panda$core$Int32 $tmp60 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp59, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp61 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp60, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp62 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp57, $tmp61);
    panda$core$Int64 $tmp63 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp64 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp63.value]);
    panda$core$Int32 $tmp65 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp64, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp66 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp62, $tmp65);
    result10 = $tmp66;
    panda$core$Int64 $tmp67 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp67;
    panda$core$Char32$init$panda$core$Int32(&$tmp68, result10);
    $returnValue15 = $tmp68;
    return $returnValue15;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    int $tmp72;
    {
    }
    $tmp72 = -1;
    goto $l70;
    $l70:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp72) {
        case -1: goto $l73;
    }
    $l73:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

