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

typedef panda$core$String* (*$fn170)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$MutableString$init(panda$core$MutableString* self) {
    panda$core$Int64 $tmp2;
    self->dummy = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 32);
    panda$core$MutableString$init$panda$core$Int64(self, $tmp2);
}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Int64 $tmp3;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    panda$core$Int64 $tmp6;
    panda$core$Bit $tmp7;
    self->dummy = NULL;
    self->length = p_s->_length;
    panda$core$Int64$init$builtin_int64(&$tmp3, 32);
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp3);
    self->maxLength = $tmp4;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->maxLength.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    panda$core$Bit$init$builtin_bit(&$tmp7, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, $tmp6, p_s->_length, $tmp7);
    int64_t $tmp9 = $tmp5.min.value;
    panda$core$Int64 i8 = { $tmp9 };
    int64_t $tmp11 = $tmp5.max.value;
    bool $tmp12 = $tmp5.inclusive.value;
    if ($tmp12) goto $l19; else goto $l20;
    $l19:;
    if ($tmp9 <= $tmp11) goto $l13; else goto $l15;
    $l20:;
    if ($tmp9 < $tmp11) goto $l13; else goto $l15;
    $l13:;
    {
        self->data[i8.value] = p_s->data[i8.value];
    }
    $l16:;
    int64_t $tmp22 = $tmp11 - i8.value;
    if ($tmp12) goto $l23; else goto $l24;
    $l23:;
    if ((uint64_t) $tmp22 >= 1) goto $l21; else goto $l15;
    $l24:;
    if ((uint64_t) $tmp22 > 1) goto $l21; else goto $l15;
    $l21:;
    i8.value += 1;
    goto $l13;
    $l15:;
}
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp27;
    self->dummy = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp27, 0);
    self->length = $tmp27;
    self->maxLength = p_capacity;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->maxLength.value * 1));
}
void panda$core$MutableString$cleanup(panda$core$MutableString* self) {
    int $tmp30;
    {
        pandaFree(self->data);
    }
    $tmp30 = -1;
    goto $l28;
    $l28:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp30) {
        case -1: goto $l31;
    }
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->dummy));
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp32;
    panda$core$Int64 $tmp34;
    panda$core$Int64$init$builtin_int64(&$tmp32, 1);
    panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp32);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp33);
    self->data[self->length.value] = p_c;
    panda$core$Int64$init$builtin_int64(&$tmp34, 1);
    panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp34);
    self->length = $tmp35;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value36;
    panda$core$Bit $tmp37;
    panda$core$Int64 $tmp39;
    panda$core$Char8 $tmp41;
    panda$core$UInt8 $tmp42;
    panda$core$Int64 $tmp43;
    panda$core$Bit $tmp45;
    panda$core$Int64 $tmp47;
    panda$core$Int64 $tmp49;
    panda$core$Char8 $tmp51;
    panda$core$UInt8 $tmp52;
    panda$core$Int64 $tmp55;
    panda$core$Char8 $tmp57;
    panda$core$UInt8 $tmp58;
    panda$core$Int64 $tmp61;
    panda$core$Bit $tmp63;
    panda$core$Int64 $tmp65;
    panda$core$Int64 $tmp67;
    panda$core$Char8 $tmp69;
    panda$core$UInt8 $tmp70;
    panda$core$Int64 $tmp73;
    panda$core$Char8 $tmp75;
    panda$core$UInt8 $tmp76;
    panda$core$Int64 $tmp80;
    panda$core$Char8 $tmp82;
    panda$core$UInt8 $tmp83;
    panda$core$Int64 $tmp86;
    panda$core$Int64 $tmp88;
    panda$core$Int64 $tmp90;
    panda$core$Char8 $tmp92;
    panda$core$UInt8 $tmp93;
    panda$core$Int64 $tmp96;
    panda$core$Char8 $tmp98;
    panda$core$UInt8 $tmp99;
    panda$core$Int64 $tmp103;
    panda$core$Char8 $tmp105;
    panda$core$UInt8 $tmp106;
    panda$core$Int64 $tmp110;
    panda$core$Char8 $tmp112;
    panda$core$UInt8 $tmp113;
    panda$core$Int64 $tmp116;
    value36 = p_c.value;
    bool $tmp38 = value36 < 128;
    panda$core$Bit$init$builtin_bit(&$tmp37, $tmp38);
    if ($tmp37.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp39, 1);
        panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp39);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp40);
        panda$core$UInt8$init$builtin_uint8(&$tmp42, ((uint8_t) value36));
        panda$core$Char8$init$panda$core$UInt8(&$tmp41, $tmp42);
        self->data[self->length.value] = $tmp41;
        panda$core$Int64$init$builtin_int64(&$tmp43, 1);
        panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp43);
        self->length = $tmp44;
    }
    }
    else {
    bool $tmp46 = value36 < 2048;
    panda$core$Bit$init$builtin_bit(&$tmp45, $tmp46);
    if ($tmp45.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp47, 2);
        panda$core$Int64 $tmp48 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp47);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp48);
        panda$core$Int64$init$builtin_int64(&$tmp49, 0);
        panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp49);
        int32_t $tmp53 = value36 >> 6;
        int32_t $tmp54 = $tmp53 | 192;
        panda$core$UInt8$init$builtin_uint8(&$tmp52, ((uint8_t) $tmp54));
        panda$core$Char8$init$panda$core$UInt8(&$tmp51, $tmp52);
        self->data[$tmp50.value] = $tmp51;
        panda$core$Int64$init$builtin_int64(&$tmp55, 1);
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp55);
        int32_t $tmp59 = value36 & 63;
        int32_t $tmp60 = $tmp59 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp58, ((uint8_t) $tmp60));
        panda$core$Char8$init$panda$core$UInt8(&$tmp57, $tmp58);
        self->data[$tmp56.value] = $tmp57;
        panda$core$Int64$init$builtin_int64(&$tmp61, 2);
        panda$core$Int64 $tmp62 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp61);
        self->length = $tmp62;
    }
    }
    else {
    bool $tmp64 = value36 < 65536;
    panda$core$Bit$init$builtin_bit(&$tmp63, $tmp64);
    if ($tmp63.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp65, 3);
        panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp65);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp66);
        panda$core$Int64$init$builtin_int64(&$tmp67, 0);
        panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp67);
        int32_t $tmp71 = value36 >> 12;
        int32_t $tmp72 = $tmp71 | 224;
        panda$core$UInt8$init$builtin_uint8(&$tmp70, ((uint8_t) $tmp72));
        panda$core$Char8$init$panda$core$UInt8(&$tmp69, $tmp70);
        self->data[$tmp68.value] = $tmp69;
        panda$core$Int64$init$builtin_int64(&$tmp73, 1);
        panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp73);
        int32_t $tmp77 = value36 >> 6;
        int32_t $tmp78 = $tmp77 & 63;
        int32_t $tmp79 = $tmp78 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp76, ((uint8_t) $tmp79));
        panda$core$Char8$init$panda$core$UInt8(&$tmp75, $tmp76);
        self->data[$tmp74.value] = $tmp75;
        panda$core$Int64$init$builtin_int64(&$tmp80, 2);
        panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp80);
        int32_t $tmp84 = value36 & 63;
        int32_t $tmp85 = $tmp84 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp83, ((uint8_t) $tmp85));
        panda$core$Char8$init$panda$core$UInt8(&$tmp82, $tmp83);
        self->data[$tmp81.value] = $tmp82;
        panda$core$Int64$init$builtin_int64(&$tmp86, 3);
        panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp86);
        self->length = $tmp87;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp88, 4);
        panda$core$Int64 $tmp89 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp88);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp89);
        panda$core$Int64$init$builtin_int64(&$tmp90, 0);
        panda$core$Int64 $tmp91 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp90);
        int32_t $tmp94 = value36 >> 18;
        int32_t $tmp95 = $tmp94 | 240;
        panda$core$UInt8$init$builtin_uint8(&$tmp93, ((uint8_t) $tmp95));
        panda$core$Char8$init$panda$core$UInt8(&$tmp92, $tmp93);
        self->data[$tmp91.value] = $tmp92;
        panda$core$Int64$init$builtin_int64(&$tmp96, 1);
        panda$core$Int64 $tmp97 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp96);
        int32_t $tmp100 = value36 >> 12;
        int32_t $tmp101 = $tmp100 & 63;
        int32_t $tmp102 = $tmp101 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp99, ((uint8_t) $tmp102));
        panda$core$Char8$init$panda$core$UInt8(&$tmp98, $tmp99);
        self->data[$tmp97.value] = $tmp98;
        panda$core$Int64$init$builtin_int64(&$tmp103, 2);
        panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp103);
        int32_t $tmp107 = value36 >> 6;
        int32_t $tmp108 = $tmp107 & 63;
        int32_t $tmp109 = $tmp108 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp106, ((uint8_t) $tmp109));
        panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
        self->data[$tmp104.value] = $tmp105;
        panda$core$Int64$init$builtin_int64(&$tmp110, 3);
        panda$core$Int64 $tmp111 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp110);
        int32_t $tmp114 = value36 & 63;
        int32_t $tmp115 = $tmp114 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp113, ((uint8_t) $tmp115));
        panda$core$Char8$init$panda$core$UInt8(&$tmp112, $tmp113);
        self->data[$tmp111.value] = $tmp112;
        panda$core$Int64$init$builtin_int64(&$tmp116, 4);
        panda$core$Int64 $tmp117 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, $tmp116);
        self->length = $tmp117;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp119;
    panda$core$Int64 $tmp120;
    panda$core$Bit $tmp121;
    panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp118);
    panda$core$Int64$init$builtin_int64(&$tmp120, 0);
    panda$core$Bit$init$builtin_bit(&$tmp121, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp119, $tmp120, p_s->_length, $tmp121);
    int64_t $tmp123 = $tmp119.min.value;
    panda$core$Int64 i122 = { $tmp123 };
    int64_t $tmp125 = $tmp119.max.value;
    bool $tmp126 = $tmp119.inclusive.value;
    if ($tmp126) goto $l133; else goto $l134;
    $l133:;
    if ($tmp123 <= $tmp125) goto $l127; else goto $l129;
    $l134:;
    if ($tmp123 < $tmp125) goto $l127; else goto $l129;
    $l127:;
    {
        panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i122);
        self->data[$tmp135.value] = p_s->data[i122.value];
    }
    $l130:;
    int64_t $tmp137 = $tmp125 - i122.value;
    if ($tmp126) goto $l138; else goto $l139;
    $l138:;
    if ((uint64_t) $tmp137 >= 1) goto $l136; else goto $l129;
    $l139:;
    if ((uint64_t) $tmp137 > 1) goto $l136; else goto $l129;
    $l136:;
    i122.value += 1;
    goto $l127;
    $l129:;
    panda$core$Int64 $tmp142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp142;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp144;
    panda$core$Int64 $tmp145;
    panda$core$Bit $tmp146;
    panda$core$Int64 $tmp143 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp143);
    panda$core$Int64$init$builtin_int64(&$tmp145, 0);
    panda$core$Bit$init$builtin_bit(&$tmp146, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp144, $tmp145, p_count, $tmp146);
    int64_t $tmp148 = $tmp144.min.value;
    panda$core$Int64 i147 = { $tmp148 };
    int64_t $tmp150 = $tmp144.max.value;
    bool $tmp151 = $tmp144.inclusive.value;
    if ($tmp151) goto $l158; else goto $l159;
    $l158:;
    if ($tmp148 <= $tmp150) goto $l152; else goto $l154;
    $l159:;
    if ($tmp148 < $tmp150) goto $l152; else goto $l154;
    $l152:;
    {
        panda$core$Int64 $tmp160 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i147);
        panda$core$Int64 $tmp161 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i147);
        self->data[$tmp160.value] = p_chars[$tmp161.value];
    }
    $l155:;
    int64_t $tmp163 = $tmp150 - i147.value;
    if ($tmp151) goto $l164; else goto $l165;
    $l164:;
    if ((uint64_t) $tmp163 >= 1) goto $l162; else goto $l154;
    $l165:;
    if ((uint64_t) $tmp163 > 1) goto $l162; else goto $l154;
    $l162:;
    i147.value += 1;
    goto $l152;
    $l154:;
    panda$core$Int64 $tmp168 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp168;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp169;
    panda$core$String* $tmp171 = (($fn170) p_o->$class->vtable[0])(p_o);
    $tmp169 = $tmp171;
    panda$core$MutableString$append$panda$core$String(self, $tmp169);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Int64 oldMax173;
    panda$core$Int64 $tmp178;
    panda$core$Bit $tmp172 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp172.value) {
    {
        return;
    }
    }
    oldMax173 = self->maxLength;
    $l174:;
    panda$core$Bit $tmp177 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    bool $tmp176 = $tmp177.value;
    if (!$tmp176) goto $l175;
    {
        panda$core$Int64$init$builtin_int64(&$tmp178, 2);
        panda$core$Int64 $tmp179 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, $tmp178);
        self->maxLength = $tmp179;
    }
    goto $l174;
    $l175:;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, oldMax173.value * 1, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    panda$core$Int64 $tmp180;
    panda$core$Int64 $tmp181;
    panda$core$Int64 $tmp182;
    panda$core$Int64$init$builtin_int64(&$tmp180, 32);
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, $tmp180.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp181, 0);
    self->length = $tmp181;
    panda$core$Int64$init$builtin_int64(&$tmp182, 32);
    self->maxLength = $tmp182;
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result183;
    panda$core$Range$LTpanda$core$Int64$GT $tmp184;
    panda$core$Int64 $tmp185;
    panda$core$Bit $tmp186;
    panda$core$String* $returnValue206;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    result183 = ((panda$core$Char8*) pandaZAlloc(self->length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp185, 0);
    panda$core$Bit$init$builtin_bit(&$tmp186, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp184, $tmp185, self->length, $tmp186);
    int64_t $tmp188 = $tmp184.min.value;
    panda$core$Int64 i187 = { $tmp188 };
    int64_t $tmp190 = $tmp184.max.value;
    bool $tmp191 = $tmp184.inclusive.value;
    if ($tmp191) goto $l198; else goto $l199;
    $l198:;
    if ($tmp188 <= $tmp190) goto $l192; else goto $l194;
    $l199:;
    if ($tmp188 < $tmp190) goto $l192; else goto $l194;
    $l192:;
    {
        result183[i187.value] = self->data[i187.value];
    }
    $l195:;
    int64_t $tmp201 = $tmp190 - i187.value;
    if ($tmp191) goto $l202; else goto $l203;
    $l202:;
    if ((uint64_t) $tmp201 >= 1) goto $l200; else goto $l194;
    $l203:;
    if ((uint64_t) $tmp201 > 1) goto $l200; else goto $l194;
    $l200:;
    i187.value += 1;
    goto $l192;
    $l194:;
    panda$core$String* $tmp209 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp209, result183, self->length);
    $tmp208 = $tmp209;
    $tmp207 = $tmp208;
    $returnValue206 = $tmp207;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
    return $returnValue206;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Int64 $tmp211;
    panda$core$Class* $tmp212;
    panda$core$Class* $tmp213;
    panda$core$String* $returnValue215;
    panda$core$String* $tmp216;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, self->length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp211, 0);
    self->maxLength = $tmp211;
    {
        $tmp212 = ((panda$core$Object*) self)->$class;
        $tmp213 = ((panda$core$Object*) &$s214)->$class;
        ((panda$core$Object*) self)->$class = $tmp213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
    }
    $tmp216 = ((panda$core$String*) ((panda$core$Object*) self));
    $returnValue215 = $tmp216;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
    return $returnValue215;
}

