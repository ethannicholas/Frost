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

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

typedef panda$core$Bit (*$fn9)(panda$core$String$UTF32Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 90, -7374214611074409872, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };

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
    panda$core$Char8 c20;
    panda$core$Int32 result21;
    panda$core$Bit $tmp23;
    panda$core$String$UTF32Iterator* $tmp26;
    panda$core$Int64 $tmp27;
    panda$core$Char32 $returnValue29;
    panda$core$Char32 $tmp30;
    panda$core$Bit $tmp32;
    panda$core$Int64 $tmp35;
    panda$core$Int32 $tmp38;
    panda$core$Int32 $tmp40;
    panda$core$Int64 $tmp42;
    panda$core$Int32 $tmp45;
    panda$core$Int32 $tmp48;
    panda$core$String$UTF32Iterator* $tmp49;
    panda$core$Int64 $tmp50;
    panda$core$Char32 $tmp52;
    panda$core$Bit $tmp54;
    panda$core$Int64 $tmp57;
    panda$core$Int32 $tmp60;
    panda$core$Int32 $tmp62;
    panda$core$Int64 $tmp64;
    panda$core$Int32 $tmp67;
    panda$core$Int32 $tmp69;
    panda$core$Int64 $tmp72;
    panda$core$Int32 $tmp75;
    panda$core$Int32 $tmp78;
    panda$core$String$UTF32Iterator* $tmp79;
    panda$core$Int64 $tmp80;
    panda$core$Char32 $tmp82;
    panda$core$Int64 $tmp84;
    panda$core$Int32 $tmp87;
    panda$core$Int32 $tmp89;
    panda$core$Int64 $tmp91;
    panda$core$Int32 $tmp94;
    panda$core$Int32 $tmp96;
    panda$core$Int64 $tmp99;
    panda$core$Int32 $tmp102;
    panda$core$Int32 $tmp104;
    panda$core$Int64 $tmp107;
    panda$core$Int32 $tmp110;
    panda$core$Int32 $tmp113;
    panda$core$String$UTF32Iterator* $tmp114;
    panda$core$Int64 $tmp115;
    panda$core$Char32 $tmp117;
    panda$core$Bit $tmp10 = (($fn9) self->$class->vtable[2])(self);
    panda$core$Bit $tmp11 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp10);
    if ($tmp11.value) goto $l12; else goto $l13;
    $l13:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s14, (panda$core$Int64) { 168 }, &$s15);
    abort();
    $l12:;
    panda$core$Bit $tmp16 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    if ($tmp16.value) goto $l17; else goto $l18;
    $l18:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s19, (panda$core$Int64) { 169 });
    abort();
    $l17:;
    c20 = self->str->data[self->index.value];
    panda$core$Int32 $tmp22 = panda$core$Char8$convert$R$panda$core$Int32(c20);
    result21 = $tmp22;
    int64_t $tmp24 = ((int64_t) c20.value) & 255;
    bool $tmp25 = $tmp24 < 128;
    panda$core$Bit$init$builtin_bit(&$tmp23, $tmp25);
    if ($tmp23.value) {
    {
        $tmp26 = self;
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp26->index, $tmp27);
        $tmp26->index = $tmp28;
        panda$core$Char32$init$panda$core$Int32(&$tmp30, result21);
        $returnValue29 = $tmp30;
        return $returnValue29;
    }
    }
    int64_t $tmp33 = ((int64_t) c20.value) & 255;
    bool $tmp34 = $tmp33 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp32, $tmp34);
    if ($tmp32.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp35, 1);
        panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp35);
        panda$core$Bit $tmp37 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp36, self->str->_length);
        if ($tmp37.value) {
        {
            panda$core$Int32$init$builtin_int32(&$tmp38, 31);
            panda$core$Int32 $tmp39 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result21, $tmp38);
            panda$core$Int32$init$builtin_int32(&$tmp40, 6);
            panda$core$Int32 $tmp41 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp39, $tmp40);
            panda$core$Int64$init$builtin_int64(&$tmp42, 1);
            panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp42);
            panda$core$Int32 $tmp44 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp43.value]);
            panda$core$Int32$init$builtin_int32(&$tmp45, 63);
            panda$core$Int32 $tmp46 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp44, $tmp45);
            panda$core$Int32 $tmp47 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp41, $tmp46);
            result21 = $tmp47;
        }
        }
        else {
        {
            panda$core$Int32$init$builtin_int32(&$tmp48, 0);
            result21 = $tmp48;
        }
        }
        $tmp49 = self;
        panda$core$Int64$init$builtin_int64(&$tmp50, 2);
        panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp49->index, $tmp50);
        $tmp49->index = $tmp51;
        panda$core$Char32$init$panda$core$Int32(&$tmp52, result21);
        $returnValue29 = $tmp52;
        return $returnValue29;
    }
    }
    int64_t $tmp55 = ((int64_t) c20.value) & 255;
    bool $tmp56 = $tmp55 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp54, $tmp56);
    if ($tmp54.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp57, 2);
        panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp57);
        panda$core$Bit $tmp59 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp58, self->str->_length);
        if ($tmp59.value) {
        {
            panda$core$Int32$init$builtin_int32(&$tmp60, 15);
            panda$core$Int32 $tmp61 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result21, $tmp60);
            panda$core$Int32$init$builtin_int32(&$tmp62, 12);
            panda$core$Int32 $tmp63 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp61, $tmp62);
            panda$core$Int64$init$builtin_int64(&$tmp64, 1);
            panda$core$Int64 $tmp65 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp64);
            panda$core$Int32 $tmp66 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp65.value]);
            panda$core$Int32$init$builtin_int32(&$tmp67, 63);
            panda$core$Int32 $tmp68 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp66, $tmp67);
            panda$core$Int32$init$builtin_int32(&$tmp69, 6);
            panda$core$Int32 $tmp70 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp68, $tmp69);
            panda$core$Int32 $tmp71 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp63, $tmp70);
            panda$core$Int64$init$builtin_int64(&$tmp72, 2);
            panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp72);
            panda$core$Int32 $tmp74 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp73.value]);
            panda$core$Int32$init$builtin_int32(&$tmp75, 63);
            panda$core$Int32 $tmp76 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp74, $tmp75);
            panda$core$Int32 $tmp77 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp71, $tmp76);
            result21 = $tmp77;
        }
        }
        else {
        {
            panda$core$Int32$init$builtin_int32(&$tmp78, 0);
            result21 = $tmp78;
        }
        }
        $tmp79 = self;
        panda$core$Int64$init$builtin_int64(&$tmp80, 3);
        panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp79->index, $tmp80);
        $tmp79->index = $tmp81;
        panda$core$Char32$init$panda$core$Int32(&$tmp82, result21);
        $returnValue29 = $tmp82;
        return $returnValue29;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp84, 3);
    panda$core$Int64 $tmp85 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp84);
    panda$core$Bit $tmp86 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp85, self->str->_length);
    if ($tmp86.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp87, 7);
        panda$core$Int32 $tmp88 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result21, $tmp87);
        panda$core$Int32$init$builtin_int32(&$tmp89, 18);
        panda$core$Int32 $tmp90 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp88, $tmp89);
        panda$core$Int64$init$builtin_int64(&$tmp91, 1);
        panda$core$Int64 $tmp92 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp91);
        panda$core$Int32 $tmp93 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp92.value]);
        panda$core$Int32$init$builtin_int32(&$tmp94, 63);
        panda$core$Int32 $tmp95 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp93, $tmp94);
        panda$core$Int32$init$builtin_int32(&$tmp96, 12);
        panda$core$Int32 $tmp97 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp95, $tmp96);
        panda$core$Int32 $tmp98 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp90, $tmp97);
        panda$core$Int64$init$builtin_int64(&$tmp99, 2);
        panda$core$Int64 $tmp100 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp99);
        panda$core$Int32 $tmp101 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp100.value]);
        panda$core$Int32$init$builtin_int32(&$tmp102, 63);
        panda$core$Int32 $tmp103 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp101, $tmp102);
        panda$core$Int32$init$builtin_int32(&$tmp104, 6);
        panda$core$Int32 $tmp105 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp103, $tmp104);
        panda$core$Int32 $tmp106 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp98, $tmp105);
        panda$core$Int64$init$builtin_int64(&$tmp107, 3);
        panda$core$Int64 $tmp108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp107);
        panda$core$Int32 $tmp109 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp108.value]);
        panda$core$Int32$init$builtin_int32(&$tmp110, 63);
        panda$core$Int32 $tmp111 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp109, $tmp110);
        panda$core$Int32 $tmp112 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp106, $tmp111);
        result21 = $tmp112;
    }
    }
    else {
    {
        panda$core$Int32$init$builtin_int32(&$tmp113, 0);
        result21 = $tmp113;
    }
    }
    $tmp114 = self;
    panda$core$Int64$init$builtin_int64(&$tmp115, 4);
    panda$core$Int64 $tmp116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp114->index, $tmp115);
    $tmp114->index = $tmp116;
    panda$core$Char32$init$panda$core$Int32(&$tmp117, result21);
    $returnValue29 = $tmp117;
    return $returnValue29;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    int $tmp121;
    {
    }
    $tmp121 = -1;
    goto $l119;
    $l119:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp121) {
        case -1: goto $l122;
    }
    $l122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

