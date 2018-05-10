#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$Char32, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String} };

typedef panda$core$String* (*$fn129)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$MutableString$init(panda$core$MutableString* self) {
    self->dummy = NULL;
    panda$core$MutableString$init$panda$core$Int64(self, ((panda$core$Int64) { 32 }));
}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    self->dummy = NULL;
    self->length = p_s->_length;
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 32 }));
    self->maxLength = $tmp2;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->maxLength.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp5 = $tmp3.min.value;
    panda$core$Int64 i4 = { $tmp5 };
    int64_t $tmp7 = $tmp3.max.value;
    bool $tmp8 = $tmp3.inclusive.value;
    if ($tmp8) goto $l15; else goto $l16;
    $l15:;
    if ($tmp5 <= $tmp7) goto $l9; else goto $l11;
    $l16:;
    if ($tmp5 < $tmp7) goto $l9; else goto $l11;
    $l9:;
    {
        self->data[i4.value] = p_s->data[i4.value];
    }
    $l12:;
    int64_t $tmp18 = $tmp7 - i4.value;
    if ($tmp8) goto $l19; else goto $l20;
    $l19:;
    if ((uint64_t) $tmp18 >= 1) goto $l17; else goto $l11;
    $l20:;
    if ((uint64_t) $tmp18 > 1) goto $l17; else goto $l11;
    $l17:;
    i4.value += 1;
    goto $l9;
    $l11:;
}
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_capacity) {
    self->dummy = NULL;
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = p_capacity;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->maxLength.value * 1));
}
void panda$core$MutableString$cleanup(panda$core$MutableString* self) {
    int $tmp25;
    {
        pandaFree(self->data);
    }
    $tmp25 = -1;
    goto $l23;
    $l23:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp25) {
        case -1: goto $l26;
    }
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->dummy));
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp27 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp27);
    self->data[self->length.value] = p_c;
    panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    self->length = $tmp28;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value29;
    panda$core$Char8 $tmp32;
    panda$core$Char8 $tmp37;
    panda$core$Char8 $tmp41;
    panda$core$Char8 $tmp48;
    panda$core$Char8 $tmp52;
    panda$core$Char8 $tmp57;
    panda$core$Char8 $tmp63;
    panda$core$Char8 $tmp67;
    panda$core$Char8 $tmp72;
    panda$core$Char8 $tmp77;
    value29 = p_c.value;
    bool $tmp30 = value29 < 128;
    if (((panda$core$Bit) { $tmp30 }).value) {
    {
        panda$core$Int64 $tmp31 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp31);
        panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { ((uint8_t) value29) }));
        self->data[self->length.value] = $tmp32;
        panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        self->length = $tmp33;
    }
    }
    else {
    bool $tmp34 = value29 < 2048;
    if (((panda$core$Bit) { $tmp34 }).value) {
    {
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp35);
        panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp38 = value29 >> 6;
        int32_t $tmp39 = $tmp38 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp37, ((panda$core$UInt8) { ((uint8_t) $tmp39) }));
        self->data[$tmp36.value] = $tmp37;
        panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp42 = value29 & 63;
        int32_t $tmp43 = $tmp42 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp41, ((panda$core$UInt8) { ((uint8_t) $tmp43) }));
        self->data[$tmp40.value] = $tmp41;
        panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        self->length = $tmp44;
    }
    }
    else {
    bool $tmp45 = value29 < 65536;
    if (((panda$core$Bit) { $tmp45 }).value) {
    {
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp46);
        panda$core$Int64 $tmp47 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp49 = value29 >> 12;
        int32_t $tmp50 = $tmp49 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { ((uint8_t) $tmp50) }));
        self->data[$tmp47.value] = $tmp48;
        panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp53 = value29 >> 6;
        int32_t $tmp54 = $tmp53 & 63;
        int32_t $tmp55 = $tmp54 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp52, ((panda$core$UInt8) { ((uint8_t) $tmp55) }));
        self->data[$tmp51.value] = $tmp52;
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp58 = value29 & 63;
        int32_t $tmp59 = $tmp58 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp57, ((panda$core$UInt8) { ((uint8_t) $tmp59) }));
        self->data[$tmp56.value] = $tmp57;
        panda$core$Int64 $tmp60 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        self->length = $tmp60;
    }
    }
    else {
    {
        panda$core$Int64 $tmp61 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp61);
        panda$core$Int64 $tmp62 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp64 = value29 >> 18;
        int32_t $tmp65 = $tmp64 | 240;
        panda$core$Char8$init$panda$core$UInt8(&$tmp63, ((panda$core$UInt8) { ((uint8_t) $tmp65) }));
        self->data[$tmp62.value] = $tmp63;
        panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp68 = value29 >> 12;
        int32_t $tmp69 = $tmp68 & 63;
        int32_t $tmp70 = $tmp69 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { ((uint8_t) $tmp70) }));
        self->data[$tmp66.value] = $tmp67;
        panda$core$Int64 $tmp71 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp73 = value29 >> 6;
        int32_t $tmp74 = $tmp73 & 63;
        int32_t $tmp75 = $tmp74 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp72, ((panda$core$UInt8) { ((uint8_t) $tmp75) }));
        self->data[$tmp71.value] = $tmp72;
        panda$core$Int64 $tmp76 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        int32_t $tmp78 = value29 & 63;
        int32_t $tmp79 = $tmp78 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp77, ((panda$core$UInt8) { ((uint8_t) $tmp79) }));
        self->data[$tmp76.value] = $tmp77;
        panda$core$Int64 $tmp80 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        self->length = $tmp80;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp82;
    panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp81);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp82, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp84 = $tmp82.min.value;
    panda$core$Int64 i83 = { $tmp84 };
    int64_t $tmp86 = $tmp82.max.value;
    bool $tmp87 = $tmp82.inclusive.value;
    if ($tmp87) goto $l94; else goto $l95;
    $l94:;
    if ($tmp84 <= $tmp86) goto $l88; else goto $l90;
    $l95:;
    if ($tmp84 < $tmp86) goto $l88; else goto $l90;
    $l88:;
    {
        panda$core$Int64 $tmp96 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i83);
        self->data[$tmp96.value] = p_s->data[i83.value];
    }
    $l91:;
    int64_t $tmp98 = $tmp86 - i83.value;
    if ($tmp87) goto $l99; else goto $l100;
    $l99:;
    if ((uint64_t) $tmp98 >= 1) goto $l97; else goto $l90;
    $l100:;
    if ((uint64_t) $tmp98 > 1) goto $l97; else goto $l90;
    $l97:;
    i83.value += 1;
    goto $l88;
    $l90:;
    panda$core$Int64 $tmp103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp103;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp105;
    panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp104);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp105, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp107 = $tmp105.min.value;
    panda$core$Int64 i106 = { $tmp107 };
    int64_t $tmp109 = $tmp105.max.value;
    bool $tmp110 = $tmp105.inclusive.value;
    if ($tmp110) goto $l117; else goto $l118;
    $l117:;
    if ($tmp107 <= $tmp109) goto $l111; else goto $l113;
    $l118:;
    if ($tmp107 < $tmp109) goto $l111; else goto $l113;
    $l111:;
    {
        panda$core$Int64 $tmp119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i106);
        panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i106);
        self->data[$tmp119.value] = p_chars[$tmp120.value];
    }
    $l114:;
    int64_t $tmp122 = $tmp109 - i106.value;
    if ($tmp110) goto $l123; else goto $l124;
    $l123:;
    if ((uint64_t) $tmp122 >= 1) goto $l121; else goto $l113;
    $l124:;
    if ((uint64_t) $tmp122 > 1) goto $l121; else goto $l113;
    $l121:;
    i106.value += 1;
    goto $l111;
    $l113:;
    panda$core$Int64 $tmp127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp127;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp128;
    panda$core$String* $tmp130 = (($fn129) p_o->$class->vtable[0])(p_o);
    $tmp128 = $tmp130;
    panda$core$MutableString$append$panda$core$String(self, $tmp128);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Int64 oldMax132;
    panda$core$Bit $tmp131 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp131.value) {
    {
        return;
    }
    }
    oldMax132 = self->maxLength;
    $l133:;
    panda$core$Bit $tmp136 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    bool $tmp135 = $tmp136.value;
    if (!$tmp135) goto $l134;
    {
        panda$core$Int64 $tmp137 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp137;
    }
    goto $l133;
    $l134:;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, oldMax132.value * 1, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, ((panda$core$Int64) { 32 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 32 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result138;
    panda$core$Range$LTpanda$core$Int64$GT $tmp139;
    panda$core$String* $finallyReturn158;
    panda$core$String* $tmp160;
    panda$core$String* $tmp161;
    result138 = ((panda$core$Char8*) pandaZAlloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp139, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Bit) { false }));
    int64_t $tmp141 = $tmp139.min.value;
    panda$core$Int64 i140 = { $tmp141 };
    int64_t $tmp143 = $tmp139.max.value;
    bool $tmp144 = $tmp139.inclusive.value;
    if ($tmp144) goto $l151; else goto $l152;
    $l151:;
    if ($tmp141 <= $tmp143) goto $l145; else goto $l147;
    $l152:;
    if ($tmp141 < $tmp143) goto $l145; else goto $l147;
    $l145:;
    {
        result138[i140.value] = self->data[i140.value];
    }
    $l148:;
    int64_t $tmp154 = $tmp143 - i140.value;
    if ($tmp144) goto $l155; else goto $l156;
    $l155:;
    if ((uint64_t) $tmp154 >= 1) goto $l153; else goto $l147;
    $l156:;
    if ((uint64_t) $tmp154 > 1) goto $l153; else goto $l147;
    $l153:;
    i140.value += 1;
    goto $l145;
    $l147:;
    panda$core$String* $tmp162 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp162, result138, self->length);
    $tmp161 = $tmp162;
    $tmp160 = $tmp161;
    $finallyReturn158 = $tmp160;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
    return $finallyReturn158;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Class* $tmp164;
    panda$core$Class* $tmp165;
    panda$core$String* $finallyReturn166;
    panda$core$String* $tmp168;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, self->length.value * 1));
    self->maxLength = ((panda$core$Int64) { 0 });
    {
        $tmp164 = ((panda$core$Object*) self)->$class;
        $tmp165 = ((panda$core$Object*) &$s166)->$class;
        ((panda$core$Object*) self)->$class = $tmp165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    }
    $tmp168 = ((panda$core$String*) ((panda$core$Object*) self));
    $finallyReturn166 = $tmp168;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
    return $finallyReturn166;
}

