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

typedef panda$core$String* (*$fn124)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    pandaFree(self->data);
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->dummy));
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp23);
    self->data[self->length.value] = p_c;
    panda$core$Int64 $tmp24 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    self->length = $tmp24;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value25;
    panda$core$Char8 $tmp28;
    panda$core$Char8 $tmp33;
    panda$core$Char8 $tmp37;
    panda$core$Char8 $tmp44;
    panda$core$Char8 $tmp48;
    panda$core$Char8 $tmp53;
    panda$core$Char8 $tmp59;
    panda$core$Char8 $tmp63;
    panda$core$Char8 $tmp68;
    panda$core$Char8 $tmp73;
    value25 = p_c.value;
    bool $tmp26 = value25 < 128;
    if (((panda$core$Bit) { $tmp26 }).value) {
    {
        panda$core$Int64 $tmp27 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp27);
        panda$core$Char8$init$panda$core$UInt8(&$tmp28, ((panda$core$UInt8) { ((uint8_t) value25) }));
        self->data[self->length.value] = $tmp28;
        panda$core$Int64 $tmp29 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        self->length = $tmp29;
    }
    }
    else {
    bool $tmp30 = value25 < 2048;
    if (((panda$core$Bit) { $tmp30 }).value) {
    {
        panda$core$Int64 $tmp31 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp31);
        panda$core$Int64 $tmp32 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp34 = value25 >> 6;
        int32_t $tmp35 = $tmp34 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp33, ((panda$core$UInt8) { ((uint8_t) $tmp35) }));
        self->data[$tmp32.value] = $tmp33;
        panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp38 = value25 & 63;
        int32_t $tmp39 = $tmp38 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp37, ((panda$core$UInt8) { ((uint8_t) $tmp39) }));
        self->data[$tmp36.value] = $tmp37;
        panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        self->length = $tmp40;
    }
    }
    else {
    bool $tmp41 = value25 < 65536;
    if (((panda$core$Bit) { $tmp41 }).value) {
    {
        panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp42);
        panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp45 = value25 >> 12;
        int32_t $tmp46 = $tmp45 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp44, ((panda$core$UInt8) { ((uint8_t) $tmp46) }));
        self->data[$tmp43.value] = $tmp44;
        panda$core$Int64 $tmp47 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp49 = value25 >> 6;
        int32_t $tmp50 = $tmp49 & 63;
        int32_t $tmp51 = $tmp50 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { ((uint8_t) $tmp51) }));
        self->data[$tmp47.value] = $tmp48;
        panda$core$Int64 $tmp52 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp54 = value25 & 63;
        int32_t $tmp55 = $tmp54 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { ((uint8_t) $tmp55) }));
        self->data[$tmp52.value] = $tmp53;
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        self->length = $tmp56;
    }
    }
    else {
    {
        panda$core$Int64 $tmp57 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp57);
        panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 0 }));
        int32_t $tmp60 = value25 >> 18;
        int32_t $tmp61 = $tmp60 | 240;
        panda$core$Char8$init$panda$core$UInt8(&$tmp59, ((panda$core$UInt8) { ((uint8_t) $tmp61) }));
        self->data[$tmp58.value] = $tmp59;
        panda$core$Int64 $tmp62 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
        int32_t $tmp64 = value25 >> 12;
        int32_t $tmp65 = $tmp64 & 63;
        int32_t $tmp66 = $tmp65 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp63, ((panda$core$UInt8) { ((uint8_t) $tmp66) }));
        self->data[$tmp62.value] = $tmp63;
        panda$core$Int64 $tmp67 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 2 }));
        int32_t $tmp69 = value25 >> 6;
        int32_t $tmp70 = $tmp69 & 63;
        int32_t $tmp71 = $tmp70 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp68, ((panda$core$UInt8) { ((uint8_t) $tmp71) }));
        self->data[$tmp67.value] = $tmp68;
        panda$core$Int64 $tmp72 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 3 }));
        int32_t $tmp74 = value25 & 63;
        int32_t $tmp75 = $tmp74 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp73, ((panda$core$UInt8) { ((uint8_t) $tmp75) }));
        self->data[$tmp72.value] = $tmp73;
        panda$core$Int64 $tmp76 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 4 }));
        self->length = $tmp76;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp78;
    panda$core$Int64 $tmp77 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp77);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp78, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp80 = $tmp78.min.value;
    panda$core$Int64 i79 = { $tmp80 };
    int64_t $tmp82 = $tmp78.max.value;
    bool $tmp83 = $tmp78.inclusive.value;
    if ($tmp83) goto $l90; else goto $l91;
    $l90:;
    if ($tmp80 <= $tmp82) goto $l84; else goto $l86;
    $l91:;
    if ($tmp80 < $tmp82) goto $l84; else goto $l86;
    $l84:;
    {
        panda$core$Int64 $tmp92 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i79);
        self->data[$tmp92.value] = p_s->data[i79.value];
    }
    $l87:;
    int64_t $tmp94 = $tmp82 - i79.value;
    if ($tmp83) goto $l95; else goto $l96;
    $l95:;
    if ((uint64_t) $tmp94 >= 1) goto $l93; else goto $l86;
    $l96:;
    if ((uint64_t) $tmp94 > 1) goto $l93; else goto $l86;
    $l93:;
    i79.value += 1;
    goto $l84;
    $l86:;
    panda$core$Int64 $tmp99 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp99;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp101;
    panda$core$Int64 $tmp100 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp100);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp101, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp103 = $tmp101.min.value;
    panda$core$Int64 i102 = { $tmp103 };
    int64_t $tmp105 = $tmp101.max.value;
    bool $tmp106 = $tmp101.inclusive.value;
    if ($tmp106) goto $l113; else goto $l114;
    $l113:;
    if ($tmp103 <= $tmp105) goto $l107; else goto $l109;
    $l114:;
    if ($tmp103 < $tmp105) goto $l107; else goto $l109;
    $l107:;
    {
        panda$core$Int64 $tmp115 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i102);
        panda$core$Int64 $tmp116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i102);
        self->data[$tmp115.value] = p_chars[$tmp116.value];
    }
    $l110:;
    int64_t $tmp118 = $tmp105 - i102.value;
    if ($tmp106) goto $l119; else goto $l120;
    $l119:;
    if ((uint64_t) $tmp118 >= 1) goto $l117; else goto $l109;
    $l120:;
    if ((uint64_t) $tmp118 > 1) goto $l117; else goto $l109;
    $l117:;
    i102.value += 1;
    goto $l107;
    $l109:;
    panda$core$Int64 $tmp123 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp123;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp125 = (($fn124) p_o->$class->vtable[0])(p_o);
    panda$core$MutableString$append$panda$core$String(self, $tmp125);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Int64 oldMax127;
    panda$core$Bit $tmp126 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp126.value) {
    {
        return;
    }
    }
    oldMax127 = self->maxLength;
    $l128:;
    panda$core$Bit $tmp130 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp130.value) goto $l129;
    {
        panda$core$Int64 $tmp131 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp131;
    }
    goto $l128;
    $l129:;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, oldMax127.value * 1, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, ((panda$core$Int64) { 32 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 32 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result132;
    panda$core$Range$LTpanda$core$Int64$GT $tmp133;
    result132 = ((panda$core$Char8*) pandaZAlloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp133, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Bit) { false }));
    int64_t $tmp135 = $tmp133.min.value;
    panda$core$Int64 i134 = { $tmp135 };
    int64_t $tmp137 = $tmp133.max.value;
    bool $tmp138 = $tmp133.inclusive.value;
    if ($tmp138) goto $l145; else goto $l146;
    $l145:;
    if ($tmp135 <= $tmp137) goto $l139; else goto $l141;
    $l146:;
    if ($tmp135 < $tmp137) goto $l139; else goto $l141;
    $l139:;
    {
        result132[i134.value] = self->data[i134.value];
    }
    $l142:;
    int64_t $tmp148 = $tmp137 - i134.value;
    if ($tmp138) goto $l149; else goto $l150;
    $l149:;
    if ((uint64_t) $tmp148 >= 1) goto $l147; else goto $l141;
    $l150:;
    if ((uint64_t) $tmp148 > 1) goto $l147; else goto $l141;
    $l147:;
    i134.value += 1;
    goto $l139;
    $l141:;
    panda$core$String* $tmp153 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp153, result132, self->length);
    return $tmp153;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, self->length.value * 1));
    self->maxLength = ((panda$core$Int64) { 0 });
    {
        ((panda$core$Object*) self)->$class = ((panda$core$Object*) &$s154)->$class;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ((panda$core$Object*) self)->$class));
    }
    return ((panda$core$String*) ((panda$core$Object*) self));
}

