#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Char8.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"


panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$Char32, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String} };

typedef panda$core$String* (*$fn103)(panda$core$Object*);

static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$MutableString$init(panda$core$MutableString* self) {
    panda$core$MutableString$init$panda$core$Int64(self, ((panda$core$Int64) { 32 }));
}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    self->length = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 32 }));
    self->maxLength = $tmp1;
    self->data = ((panda$core$Char8*) malloc(self->maxLength.value * 1));
    panda$core$MutableString$append$panda$core$String(self, p_s);
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
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp2);
    self->data[self->length.value] = p_c;
    panda$core$Int64 $tmp3 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    self->length = $tmp3;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value4;
    panda$core$Char8 $tmp7;
    panda$core$Char8 $tmp12;
    panda$core$Char8 $tmp16;
    panda$core$Char8 $tmp23;
    panda$core$Char8 $tmp27;
    panda$core$Char8 $tmp32;
    panda$core$Char8 $tmp38;
    panda$core$Char8 $tmp42;
    panda$core$Char8 $tmp47;
    panda$core$Char8 $tmp52;
    value4 = p_c.value;
    bool $tmp5 = value4 < 128;
    if (((panda$core$Bit) { $tmp5 }).value) {
    {
        panda$core$Int64 $tmp6 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp6);
        panda$core$Char8$init$panda$core$UInt8(&$tmp7, ((panda$core$UInt8) { ((int8_t) value4) }));
        self->data[self->length.value] = $tmp7;
        panda$core$Int64 $tmp8 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        self->length = $tmp8;
    }
    }
    else {
    bool $tmp9 = value4 < 2048;
    if (((panda$core$Bit) { $tmp9 }).value) {
    {
        panda$core$Int64 $tmp10 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp10);
        panda$core$Int64 $tmp11 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp13 = value4 >> 6;
        int32_t $tmp14 = $tmp13 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp12, ((panda$core$UInt8) { ((int8_t) $tmp14) }));
        self->data[$tmp11.value] = $tmp12;
        panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp17 = value4 & 63;
        int32_t $tmp18 = $tmp17 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp16, ((panda$core$UInt8) { ((int8_t) $tmp18) }));
        self->data[$tmp15.value] = $tmp16;
        panda$core$Int64 $tmp19 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        self->length = $tmp19;
    }
    }
    else {
    bool $tmp20 = value4 < 65536;
    if (((panda$core$Bit) { $tmp20 }).value) {
    {
        panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp21);
        panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp24 = value4 >> 12;
        int32_t $tmp25 = $tmp24 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp23, ((panda$core$UInt8) { ((int8_t) $tmp25) }));
        self->data[$tmp22.value] = $tmp23;
        panda$core$Int64 $tmp26 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp28 = value4 >> 6;
        int32_t $tmp29 = $tmp28 & 63;
        int32_t $tmp30 = $tmp29 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp27, ((panda$core$UInt8) { ((int8_t) $tmp30) }));
        self->data[$tmp26.value] = $tmp27;
        panda$core$Int64 $tmp31 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp33 = value4 & 63;
        int32_t $tmp34 = $tmp33 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { ((int8_t) $tmp34) }));
        self->data[$tmp31.value] = $tmp32;
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        self->length = $tmp35;
    }
    }
    else {
    {
        panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp36);
        panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp39 = value4 >> 18;
        int32_t $tmp40 = $tmp39 | 240;
        panda$core$Char8$init$panda$core$UInt8(&$tmp38, ((panda$core$UInt8) { ((int8_t) $tmp40) }));
        self->data[$tmp37.value] = $tmp38;
        panda$core$Int64 $tmp41 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp43 = value4 >> 12;
        int32_t $tmp44 = $tmp43 & 63;
        int32_t $tmp45 = $tmp44 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp42, ((panda$core$UInt8) { ((int8_t) $tmp45) }));
        self->data[$tmp41.value] = $tmp42;
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp48 = value4 >> 6;
        int32_t $tmp49 = $tmp48 & 63;
        int32_t $tmp50 = $tmp49 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp47, ((panda$core$UInt8) { ((int8_t) $tmp50) }));
        self->data[$tmp46.value] = $tmp47;
        panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        int32_t $tmp53 = value4 & 63;
        int32_t $tmp54 = $tmp53 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp52, ((panda$core$UInt8) { ((int8_t) $tmp54) }));
        self->data[$tmp51.value] = $tmp52;
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        self->length = $tmp55;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp57;
    panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp56);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp57, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp59 = $tmp57.min.value;
    panda$core$Int64 i58 = { $tmp59 };
    int64_t $tmp61 = $tmp57.max.value;
    bool $tmp62 = $tmp57.inclusive.value;
    if ($tmp62) goto $l69; else goto $l70;
    $l69:;
    if ($tmp59 <= $tmp61) goto $l63; else goto $l65;
    $l70:;
    if ($tmp59 < $tmp61) goto $l63; else goto $l65;
    $l63:;
    {
        panda$core$Int64 $tmp71 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i58);
        self->data[$tmp71.value] = p_s->data[i58.value];
    }
    $l66:;
    int64_t $tmp73 = $tmp61 - i58.value;
    if ($tmp62) goto $l74; else goto $l75;
    $l74:;
    if ($tmp73 >= 1) goto $l72; else goto $l65;
    $l75:;
    if ($tmp73 > 1) goto $l72; else goto $l65;
    $l72:;
    i58.value += 1;
    goto $l63;
    $l65:;
    panda$core$Int64 $tmp78 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp78;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp80;
    panda$core$Int64 $tmp79 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp79);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp80, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp82 = $tmp80.min.value;
    panda$core$Int64 i81 = { $tmp82 };
    int64_t $tmp84 = $tmp80.max.value;
    bool $tmp85 = $tmp80.inclusive.value;
    if ($tmp85) goto $l92; else goto $l93;
    $l92:;
    if ($tmp82 <= $tmp84) goto $l86; else goto $l88;
    $l93:;
    if ($tmp82 < $tmp84) goto $l86; else goto $l88;
    $l86:;
    {
        panda$core$Int64 $tmp94 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i81);
        panda$core$Int64 $tmp95 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i81);
        self->data[$tmp94.value] = p_chars[$tmp95.value];
    }
    $l89:;
    int64_t $tmp97 = $tmp84 - i81.value;
    if ($tmp85) goto $l98; else goto $l99;
    $l98:;
    if ($tmp97 >= 1) goto $l96; else goto $l88;
    $l99:;
    if ($tmp97 > 1) goto $l96; else goto $l88;
    $l96:;
    i81.value += 1;
    goto $l86;
    $l88:;
    panda$core$Int64 $tmp102 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp102;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp104 = (($fn103) p_o->$class->vtable[0])(p_o);
    panda$core$MutableString$append$panda$core$String(self, $tmp104);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Bit $tmp105 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp105.value) {
    {
        return;
    }
    }
    $l106:;
    panda$core$Bit $tmp108 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp108.value) goto $l107;
    {
        panda$core$Int64 $tmp109 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp109;
    }
    goto $l106;
    $l107:;
    self->data = ((panda$core$Char8*) realloc(self->data, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, ((panda$core$Int64) { 32 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 32 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result110;
    panda$core$Range$LTpanda$core$Int64$GT $tmp111;
    result110 = ((panda$core$Char8*) malloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp111, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Bit) { false }));
    int64_t $tmp113 = $tmp111.min.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp111.max.value;
    bool $tmp116 = $tmp111.inclusive.value;
    if ($tmp116) goto $l123; else goto $l124;
    $l123:;
    if ($tmp113 <= $tmp115) goto $l117; else goto $l119;
    $l124:;
    if ($tmp113 < $tmp115) goto $l117; else goto $l119;
    $l117:;
    {
        result110[i112.value] = self->data[i112.value];
    }
    $l120:;
    int64_t $tmp126 = $tmp115 - i112.value;
    if ($tmp116) goto $l127; else goto $l128;
    $l127:;
    if ($tmp126 >= 1) goto $l125; else goto $l119;
    $l128:;
    if ($tmp126 > 1) goto $l125; else goto $l119;
    $l125:;
    i112.value += 1;
    goto $l117;
    $l119:;
    panda$core$String* $tmp131 = (panda$core$String*) malloc(48);
    $tmp131->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp131->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp131, result110, self->length);
    return $tmp131;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, self->length.value * 1));
    self->maxLength = ((panda$core$Int64) { 0 });
    ((panda$core$Object*) self)->$class = ((panda$core$Object*) &$s133)->$class;
    return ((panda$core$String*) ((panda$core$Object*) self));
}

