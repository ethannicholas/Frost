#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"


panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$Char32, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String} };

typedef panda$core$String* (*$fn123)(panda$core$Object*);

static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$MutableString$init(panda$core$MutableString* self) {
    panda$core$MutableString$init$panda$core$Int64(self, ((panda$core$Int64) { 32 }));
}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->length = p_s->_length;
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 32 }));
    self->maxLength = $tmp1;
    self->data = ((panda$core$Char8*) malloc(self->maxLength.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    if ($tmp7) goto $l14; else goto $l15;
    $l14:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l15:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        self->data[i3.value] = p_s->data[i3.value];
    }
    $l11:;
    int64_t $tmp17 = $tmp6 - i3.value;
    if ($tmp7) goto $l18; else goto $l19;
    $l18:;
    if ($tmp17 >= 1) goto $l16; else goto $l10;
    $l19:;
    if ($tmp17 > 1) goto $l16; else goto $l10;
    $l16:;
    i3.value += 1;
    goto $l8;
    $l10:;
}
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_capacity) {
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = p_capacity;
    self->data = ((panda$core$Char8*) malloc(self->maxLength.value * 1));
}
void panda$core$MutableString$cleanup(panda$core$MutableString* self) {
    free(self->data);
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp22);
    self->data[self->length.value] = p_c;
    panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    self->length = $tmp23;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value24;
    panda$core$Char8 $tmp27;
    panda$core$Char8 $tmp32;
    panda$core$Char8 $tmp36;
    panda$core$Char8 $tmp43;
    panda$core$Char8 $tmp47;
    panda$core$Char8 $tmp52;
    panda$core$Char8 $tmp58;
    panda$core$Char8 $tmp62;
    panda$core$Char8 $tmp67;
    panda$core$Char8 $tmp72;
    value24 = p_c.value;
    bool $tmp25 = value24 < 128;
    if (((panda$core$Bit) { $tmp25 }).value) {
    {
        panda$core$Int64 $tmp26 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp26);
        panda$core$Char8$init$panda$core$UInt8(&$tmp27, ((panda$core$UInt8) { ((uint8_t) value24) }));
        self->data[self->length.value] = $tmp27;
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        self->length = $tmp28;
    }
    }
    else {
    bool $tmp29 = value24 < 2048;
    if (((panda$core$Bit) { $tmp29 }).value) {
    {
        panda$core$Int64 $tmp30 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp30);
        panda$core$Int64 $tmp31 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp33 = value24 >> 6;
        int32_t $tmp34 = $tmp33 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { ((uint8_t) $tmp34) }));
        self->data[$tmp31.value] = $tmp32;
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp37 = value24 & 63;
        int32_t $tmp38 = $tmp37 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { ((uint8_t) $tmp38) }));
        self->data[$tmp35.value] = $tmp36;
        panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        self->length = $tmp39;
    }
    }
    else {
    bool $tmp40 = value24 < 65536;
    if (((panda$core$Bit) { $tmp40 }).value) {
    {
        panda$core$Int64 $tmp41 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp41);
        panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp44 = value24 >> 12;
        int32_t $tmp45 = $tmp44 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp43, ((panda$core$UInt8) { ((uint8_t) $tmp45) }));
        self->data[$tmp42.value] = $tmp43;
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp48 = value24 >> 6;
        int32_t $tmp49 = $tmp48 & 63;
        int32_t $tmp50 = $tmp49 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp47, ((panda$core$UInt8) { ((uint8_t) $tmp50) }));
        self->data[$tmp46.value] = $tmp47;
        panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp53 = value24 & 63;
        int32_t $tmp54 = $tmp53 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp52, ((panda$core$UInt8) { ((uint8_t) $tmp54) }));
        self->data[$tmp51.value] = $tmp52;
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        self->length = $tmp55;
    }
    }
    else {
    {
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp56);
        panda$core$Int64 $tmp57 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp59 = value24 >> 18;
        int32_t $tmp60 = $tmp59 | 240;
        panda$core$Char8$init$panda$core$UInt8(&$tmp58, ((panda$core$UInt8) { ((uint8_t) $tmp60) }));
        self->data[$tmp57.value] = $tmp58;
        panda$core$Int64 $tmp61 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp63 = value24 >> 12;
        int32_t $tmp64 = $tmp63 & 63;
        int32_t $tmp65 = $tmp64 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp62, ((panda$core$UInt8) { ((uint8_t) $tmp65) }));
        self->data[$tmp61.value] = $tmp62;
        panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp68 = value24 >> 6;
        int32_t $tmp69 = $tmp68 & 63;
        int32_t $tmp70 = $tmp69 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { ((uint8_t) $tmp70) }));
        self->data[$tmp66.value] = $tmp67;
        panda$core$Int64 $tmp71 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        int32_t $tmp73 = value24 & 63;
        int32_t $tmp74 = $tmp73 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp72, ((panda$core$UInt8) { ((uint8_t) $tmp74) }));
        self->data[$tmp71.value] = $tmp72;
        panda$core$Int64 $tmp75 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        self->length = $tmp75;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp77;
    panda$core$Int64 $tmp76 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp76);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp77, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp79 = $tmp77.min.value;
    panda$core$Int64 i78 = { $tmp79 };
    int64_t $tmp81 = $tmp77.max.value;
    bool $tmp82 = $tmp77.inclusive.value;
    if ($tmp82) goto $l89; else goto $l90;
    $l89:;
    if ($tmp79 <= $tmp81) goto $l83; else goto $l85;
    $l90:;
    if ($tmp79 < $tmp81) goto $l83; else goto $l85;
    $l83:;
    {
        panda$core$Int64 $tmp91 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i78);
        self->data[$tmp91.value] = p_s->data[i78.value];
    }
    $l86:;
    int64_t $tmp93 = $tmp81 - i78.value;
    if ($tmp82) goto $l94; else goto $l95;
    $l94:;
    if ($tmp93 >= 1) goto $l92; else goto $l85;
    $l95:;
    if ($tmp93 > 1) goto $l92; else goto $l85;
    $l92:;
    i78.value += 1;
    goto $l83;
    $l85:;
    panda$core$Int64 $tmp98 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp98;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp100;
    panda$core$Int64 $tmp99 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp99);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp100, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp102 = $tmp100.min.value;
    panda$core$Int64 i101 = { $tmp102 };
    int64_t $tmp104 = $tmp100.max.value;
    bool $tmp105 = $tmp100.inclusive.value;
    if ($tmp105) goto $l112; else goto $l113;
    $l112:;
    if ($tmp102 <= $tmp104) goto $l106; else goto $l108;
    $l113:;
    if ($tmp102 < $tmp104) goto $l106; else goto $l108;
    $l106:;
    {
        panda$core$Int64 $tmp114 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i101);
        panda$core$Int64 $tmp115 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i101);
        self->data[$tmp114.value] = p_chars[$tmp115.value];
    }
    $l109:;
    int64_t $tmp117 = $tmp104 - i101.value;
    if ($tmp105) goto $l118; else goto $l119;
    $l118:;
    if ($tmp117 >= 1) goto $l116; else goto $l108;
    $l119:;
    if ($tmp117 > 1) goto $l116; else goto $l108;
    $l116:;
    i101.value += 1;
    goto $l106;
    $l108:;
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp122;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp124 = (($fn123) p_o->$class->vtable[0])(p_o);
    panda$core$MutableString$append$panda$core$String(self, $tmp124);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Bit $tmp125 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp125.value) {
    {
        return;
    }
    }
    $l126:;
    panda$core$Bit $tmp128 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp128.value) goto $l127;
    {
        panda$core$Int64 $tmp129 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp129;
    }
    goto $l126;
    $l127:;
    self->data = ((panda$core$Char8*) realloc(self->data, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, ((panda$core$Int64) { 32 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 32 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result130;
    panda$core$Range$LTpanda$core$Int64$GT $tmp131;
    result130 = ((panda$core$Char8*) malloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp131, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Bit) { false }));
    int64_t $tmp133 = $tmp131.min.value;
    panda$core$Int64 i132 = { $tmp133 };
    int64_t $tmp135 = $tmp131.max.value;
    bool $tmp136 = $tmp131.inclusive.value;
    if ($tmp136) goto $l143; else goto $l144;
    $l143:;
    if ($tmp133 <= $tmp135) goto $l137; else goto $l139;
    $l144:;
    if ($tmp133 < $tmp135) goto $l137; else goto $l139;
    $l137:;
    {
        result130[i132.value] = self->data[i132.value];
    }
    $l140:;
    int64_t $tmp146 = $tmp135 - i132.value;
    if ($tmp136) goto $l147; else goto $l148;
    $l147:;
    if ($tmp146 >= 1) goto $l145; else goto $l139;
    $l148:;
    if ($tmp146 > 1) goto $l145; else goto $l139;
    $l145:;
    i132.value += 1;
    goto $l137;
    $l139:;
    panda$core$String* $tmp151 = (panda$core$String*) malloc(48);
    $tmp151->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp151->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp151, result130, self->length);
    return $tmp151;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, self->length.value * 1));
    self->maxLength = ((panda$core$Int64) { 0 });
    ((panda$core$Object*) self)->$class = ((panda$core$Object*) &$s153)->$class;
    return ((panda$core$String*) ((panda$core$Object*) self));
}

