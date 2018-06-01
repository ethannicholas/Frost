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
panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* p0) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(p0);

    panda$core$Char32$wrapper* $tmp2;
    $tmp2 = (panda$core$Char32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };

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
    panda$core$Char8 c12;
    panda$core$Int32 result13;
    panda$core$Char32 $returnValue18;
    panda$core$Char32 $tmp19;
    panda$core$Char32 $tmp35;
    panda$core$Char32 $tmp56;
    panda$core$Char32 $tmp80;
    panda$core$Bit $tmp8 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    if ($tmp8.value) goto $l9; else goto $l10;
    $l10:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s11, (panda$core$Int64) { 186 });
    abort();
    $l9:;
    c12 = self->str->data[self->index.value];
    panda$core$Int32 $tmp14 = panda$core$Char8$convert$R$panda$core$Int32(c12);
    result13 = $tmp14;
    int64_t $tmp15 = ((int64_t) c12.value) & 255;
    bool $tmp16 = $tmp15 < 128;
    if (((panda$core$Bit) { $tmp16 }).value) {
    {
        panda$core$Int64 $tmp17 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp17;
        panda$core$Char32$init$panda$core$Int32(&$tmp19, result13);
        $returnValue18 = $tmp19;
        return $returnValue18;
    }
    }
    int64_t $tmp21 = ((int64_t) c12.value) & 255;
    bool $tmp22 = $tmp21 < 192;
    if (((panda$core$Bit) { $tmp22 }).value) {
    {
        panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp24 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp23, self->str->_length);
        if ($tmp24.value) goto $l25; else goto $l26;
        $l26:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s27, (panda$core$Int64) { 194 });
        abort();
        $l25:;
        panda$core$Int32 $tmp28 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result13, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp29 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp28, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp30 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp31 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp30.value]);
        panda$core$Int32 $tmp32 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp31, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp33 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp29, $tmp32);
        result13 = $tmp33;
        panda$core$Int64 $tmp34 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp34;
        panda$core$Char32$init$panda$core$Int32(&$tmp35, result13);
        $returnValue18 = $tmp35;
        return $returnValue18;
    }
    }
    int64_t $tmp37 = ((int64_t) c12.value) & 255;
    bool $tmp38 = $tmp37 < 224;
    if (((panda$core$Bit) { $tmp38 }).value) {
    {
        panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp40 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp39, self->str->_length);
        if ($tmp40.value) goto $l41; else goto $l42;
        $l42:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s43, (panda$core$Int64) { 200 });
        abort();
        $l41:;
        panda$core$Int32 $tmp44 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result13, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp45 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp44, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp47 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp46.value]);
        panda$core$Int32 $tmp48 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp47, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp49 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp48, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp50 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp45, $tmp49);
        panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp52 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp51.value]);
        panda$core$Int32 $tmp53 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp52, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp54 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp50, $tmp53);
        result13 = $tmp54;
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp55;
        panda$core$Char32$init$panda$core$Int32(&$tmp56, result13);
        $returnValue18 = $tmp56;
        return $returnValue18;
    }
    }
    panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp59 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp58, self->str->_length);
    if ($tmp59.value) goto $l60; else goto $l61;
    $l61:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s62, (panda$core$Int64) { 206 });
    abort();
    $l60:;
    panda$core$Int32 $tmp63 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result13, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp64 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp63, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp65 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp66 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp65.value]);
    panda$core$Int32 $tmp67 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp66, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp68 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp67, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp69 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp64, $tmp68);
    panda$core$Int64 $tmp70 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp71 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp70.value]);
    panda$core$Int32 $tmp72 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp71, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp73 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp72, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp74 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp69, $tmp73);
    panda$core$Int64 $tmp75 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp76 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp75.value]);
    panda$core$Int32 $tmp77 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp76, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp78 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp74, $tmp77);
    result13 = $tmp78;
    panda$core$Int64 $tmp79 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp79;
    panda$core$Char32$init$panda$core$Int32(&$tmp80, result13);
    $returnValue18 = $tmp80;
    return $returnValue18;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    int $tmp84;
    {
    }
    $tmp84 = -1;
    goto $l82;
    $l82:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp84) {
        case -1: goto $l85;
    }
    $l85:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

