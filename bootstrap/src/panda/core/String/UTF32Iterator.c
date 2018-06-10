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
__attribute__((weak)) panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* p0) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(p0);

    panda$core$Char32$wrapper* $tmp2;
    $tmp2 = (panda$core$Char32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };

void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str) {
    panda$core$Int64 $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->str = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->index = $tmp3;
    {
        $tmp4 = self->str;
        $tmp5 = p_str;
        self->str = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self) {
    panda$core$Bit $returnValue6;
    panda$core$Bit $tmp7 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    $returnValue6 = $tmp7;
    return $returnValue6;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c13;
    panda$core$Int32 result14;
    panda$core$Bit $tmp16;
    panda$core$Int64 $tmp19;
    panda$core$Char32 $returnValue21;
    panda$core$Char32 $tmp22;
    panda$core$Bit $tmp24;
    panda$core$Int64 $tmp27;
    panda$core$Int32 $tmp30;
    panda$core$Int32 $tmp32;
    panda$core$Int64 $tmp34;
    panda$core$Int32 $tmp37;
    panda$core$Int32 $tmp40;
    panda$core$Int64 $tmp41;
    panda$core$Char32 $tmp43;
    panda$core$Bit $tmp45;
    panda$core$Int64 $tmp48;
    panda$core$Int32 $tmp51;
    panda$core$Int32 $tmp53;
    panda$core$Int64 $tmp55;
    panda$core$Int32 $tmp58;
    panda$core$Int32 $tmp60;
    panda$core$Int64 $tmp63;
    panda$core$Int32 $tmp66;
    panda$core$Int32 $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Char32 $tmp72;
    panda$core$Int64 $tmp74;
    panda$core$Int32 $tmp77;
    panda$core$Int32 $tmp79;
    panda$core$Int64 $tmp81;
    panda$core$Int32 $tmp84;
    panda$core$Int32 $tmp86;
    panda$core$Int64 $tmp89;
    panda$core$Int32 $tmp92;
    panda$core$Int32 $tmp94;
    panda$core$Int64 $tmp97;
    panda$core$Int32 $tmp100;
    panda$core$Int32 $tmp103;
    panda$core$Int64 $tmp104;
    panda$core$Char32 $tmp106;
    panda$core$Bit $tmp9 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    if ($tmp9.value) goto $l10; else goto $l11;
    $l11:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s12, (panda$core$Int64) { 186 });
    abort();
    $l10:;
    c13 = self->str->data[self->index.value];
    panda$core$Int32 $tmp15 = panda$core$Char8$convert$R$panda$core$Int32(c13);
    result14 = $tmp15;
    int64_t $tmp17 = ((int64_t) c13.value) & 255;
    bool $tmp18 = $tmp17 < 128;
    panda$core$Bit$init$builtin_bit(&$tmp16, $tmp18);
    if ($tmp16.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp19, 1);
        panda$core$Int64 $tmp20 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp19);
        self->index = $tmp20;
        panda$core$Char32$init$panda$core$Int32(&$tmp22, result14);
        $returnValue21 = $tmp22;
        return $returnValue21;
    }
    }
    int64_t $tmp25 = ((int64_t) c13.value) & 255;
    bool $tmp26 = $tmp25 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp24, $tmp26);
    if ($tmp24.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp27);
        panda$core$Bit $tmp29 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp28, self->str->_length);
        if ($tmp29.value) {
        {
            panda$core$Int32$init$builtin_int32(&$tmp30, 31);
            panda$core$Int32 $tmp31 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result14, $tmp30);
            panda$core$Int32$init$builtin_int32(&$tmp32, 6);
            panda$core$Int32 $tmp33 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp31, $tmp32);
            panda$core$Int64$init$builtin_int64(&$tmp34, 1);
            panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp34);
            panda$core$Int32 $tmp36 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp35.value]);
            panda$core$Int32$init$builtin_int32(&$tmp37, 63);
            panda$core$Int32 $tmp38 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp36, $tmp37);
            panda$core$Int32 $tmp39 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp33, $tmp38);
            result14 = $tmp39;
        }
        }
        else {
        {
            panda$core$Int32$init$builtin_int32(&$tmp40, 0);
            result14 = $tmp40;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp41, 2);
        panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp41);
        self->index = $tmp42;
        panda$core$Char32$init$panda$core$Int32(&$tmp43, result14);
        $returnValue21 = $tmp43;
        return $returnValue21;
    }
    }
    int64_t $tmp46 = ((int64_t) c13.value) & 255;
    bool $tmp47 = $tmp46 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp45, $tmp47);
    if ($tmp45.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp48, 2);
        panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp48);
        panda$core$Bit $tmp50 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp49, self->str->_length);
        if ($tmp50.value) {
        {
            panda$core$Int32$init$builtin_int32(&$tmp51, 15);
            panda$core$Int32 $tmp52 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result14, $tmp51);
            panda$core$Int32$init$builtin_int32(&$tmp53, 12);
            panda$core$Int32 $tmp54 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp52, $tmp53);
            panda$core$Int64$init$builtin_int64(&$tmp55, 1);
            panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp55);
            panda$core$Int32 $tmp57 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp56.value]);
            panda$core$Int32$init$builtin_int32(&$tmp58, 63);
            panda$core$Int32 $tmp59 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp57, $tmp58);
            panda$core$Int32$init$builtin_int32(&$tmp60, 6);
            panda$core$Int32 $tmp61 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp59, $tmp60);
            panda$core$Int32 $tmp62 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp54, $tmp61);
            panda$core$Int64$init$builtin_int64(&$tmp63, 2);
            panda$core$Int64 $tmp64 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp63);
            panda$core$Int32 $tmp65 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp64.value]);
            panda$core$Int32$init$builtin_int32(&$tmp66, 63);
            panda$core$Int32 $tmp67 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp65, $tmp66);
            panda$core$Int32 $tmp68 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp62, $tmp67);
            result14 = $tmp68;
        }
        }
        else {
        {
            panda$core$Int32$init$builtin_int32(&$tmp69, 0);
            result14 = $tmp69;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp70, 3);
        panda$core$Int64 $tmp71 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp70);
        self->index = $tmp71;
        panda$core$Char32$init$panda$core$Int32(&$tmp72, result14);
        $returnValue21 = $tmp72;
        return $returnValue21;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp74, 3);
    panda$core$Int64 $tmp75 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp74);
    panda$core$Bit $tmp76 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp75, self->str->_length);
    if ($tmp76.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp77, 7);
        panda$core$Int32 $tmp78 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result14, $tmp77);
        panda$core$Int32$init$builtin_int32(&$tmp79, 18);
        panda$core$Int32 $tmp80 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp78, $tmp79);
        panda$core$Int64$init$builtin_int64(&$tmp81, 1);
        panda$core$Int64 $tmp82 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp81);
        panda$core$Int32 $tmp83 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp82.value]);
        panda$core$Int32$init$builtin_int32(&$tmp84, 63);
        panda$core$Int32 $tmp85 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp83, $tmp84);
        panda$core$Int32$init$builtin_int32(&$tmp86, 12);
        panda$core$Int32 $tmp87 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp85, $tmp86);
        panda$core$Int32 $tmp88 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp80, $tmp87);
        panda$core$Int64$init$builtin_int64(&$tmp89, 2);
        panda$core$Int64 $tmp90 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp89);
        panda$core$Int32 $tmp91 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp90.value]);
        panda$core$Int32$init$builtin_int32(&$tmp92, 63);
        panda$core$Int32 $tmp93 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp91, $tmp92);
        panda$core$Int32$init$builtin_int32(&$tmp94, 6);
        panda$core$Int32 $tmp95 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp93, $tmp94);
        panda$core$Int32 $tmp96 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp88, $tmp95);
        panda$core$Int64$init$builtin_int64(&$tmp97, 3);
        panda$core$Int64 $tmp98 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp97);
        panda$core$Int32 $tmp99 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp98.value]);
        panda$core$Int32$init$builtin_int32(&$tmp100, 63);
        panda$core$Int32 $tmp101 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp99, $tmp100);
        panda$core$Int32 $tmp102 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp96, $tmp101);
        result14 = $tmp102;
    }
    }
    else {
    {
        panda$core$Int32$init$builtin_int32(&$tmp103, 0);
        result14 = $tmp103;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp104, 4);
    panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp104);
    self->index = $tmp105;
    panda$core$Char32$init$panda$core$Int32(&$tmp106, result14);
    $returnValue21 = $tmp106;
    return $returnValue21;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    int $tmp110;
    {
    }
    $tmp110 = -1;
    goto $l108;
    $l108:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp110) {
        case -1: goto $l111;
    }
    $l111:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

