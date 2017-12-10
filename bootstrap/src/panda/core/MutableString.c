#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"


panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear} };

typedef panda$core$String* (*$fn69)(panda$core$Object*);


void panda$core$MutableString$init(panda$core$MutableString* self) {
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 16 });
    self->data = ((panda$core$Char8*) malloc(self->maxLength.value * 1));
}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    self->length = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 16 }));
    self->maxLength = $tmp1;
    self->data = ((panda$core$Char8*) malloc(self->maxLength.value * 1));
    panda$core$MutableString$append$panda$core$String(self, p_s);
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
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp4);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp5.min.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp5.max.value;
    bool $tmp10 = $tmp5.inclusive.value;
    bool $tmp17 = 1 > 0;
    if ($tmp17) goto $l15; else goto $l16;
    $l15:;
    if ($tmp10) goto $l18; else goto $l19;
    $l18:;
    if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
    $l19:;
    if ($tmp7 < $tmp9) goto $l11; else goto $l13;
    $l16:;
    if ($tmp10) goto $l20; else goto $l21;
    $l20:;
    if ($tmp7 >= $tmp9) goto $l11; else goto $l13;
    $l21:;
    if ($tmp7 > $tmp9) goto $l11; else goto $l13;
    $l11:;
    {
        panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i6);
        self->data[$tmp23.value] = p_s->data[i6.value];
    }
    $l14:;
    if ($tmp17) goto $l25; else goto $l26;
    $l25:;
    int64_t $tmp27 = $tmp9 - i6.value;
    if ($tmp10) goto $l28; else goto $l29;
    $l28:;
    if ($tmp27 >= 1) goto $l24; else goto $l13;
    $l29:;
    if ($tmp27 > 1) goto $l24; else goto $l13;
    $l26:;
    int64_t $tmp31 = i6.value - $tmp9;
    if ($tmp10) goto $l32; else goto $l33;
    $l32:;
    if ($tmp31 >= -1) goto $l24; else goto $l13;
    $l33:;
    if ($tmp31 > -1) goto $l24; else goto $l13;
    $l24:;
    i6.value += 1;
    goto $l11;
    $l13:;
    panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp35;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp37;
    panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp36);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp37, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp39 = $tmp37.min.value;
    panda$core$Int64 i38 = { $tmp39 };
    int64_t $tmp41 = $tmp37.max.value;
    bool $tmp42 = $tmp37.inclusive.value;
    bool $tmp49 = 1 > 0;
    if ($tmp49) goto $l47; else goto $l48;
    $l47:;
    if ($tmp42) goto $l50; else goto $l51;
    $l50:;
    if ($tmp39 <= $tmp41) goto $l43; else goto $l45;
    $l51:;
    if ($tmp39 < $tmp41) goto $l43; else goto $l45;
    $l48:;
    if ($tmp42) goto $l52; else goto $l53;
    $l52:;
    if ($tmp39 >= $tmp41) goto $l43; else goto $l45;
    $l53:;
    if ($tmp39 > $tmp41) goto $l43; else goto $l45;
    $l43:;
    {
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i38);
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i38);
        self->data[$tmp55.value] = p_chars[$tmp56.value];
    }
    $l46:;
    if ($tmp49) goto $l58; else goto $l59;
    $l58:;
    int64_t $tmp60 = $tmp41 - i38.value;
    if ($tmp42) goto $l61; else goto $l62;
    $l61:;
    if ($tmp60 >= 1) goto $l57; else goto $l45;
    $l62:;
    if ($tmp60 > 1) goto $l57; else goto $l45;
    $l59:;
    int64_t $tmp64 = i38.value - $tmp41;
    if ($tmp42) goto $l65; else goto $l66;
    $l65:;
    if ($tmp64 >= -1) goto $l57; else goto $l45;
    $l66:;
    if ($tmp64 > -1) goto $l57; else goto $l45;
    $l57:;
    i38.value += 1;
    goto $l43;
    $l45:;
    panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp68;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp70 = (($fn69) p_o->$class->vtable[0])(p_o);
    panda$core$MutableString$append$panda$core$String(self, $tmp70);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Bit $tmp71 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp71.value) {
    {
        return;
    }
    }
    $l72:;
    panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp74.value) goto $l73;
    {
        panda$core$Int64 $tmp75 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp75;
    }
    goto $l72;
    $l73:;
    self->data = ((panda$core$Char8*) realloc(self->data, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, ((panda$core$Int64) { 16 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 16 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result76;
    panda$core$Range$LTpanda$core$Int64$GT $tmp77;
    result76 = ((panda$core$Char8*) malloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp77, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Bit) { false }));
    int64_t $tmp79 = $tmp77.min.value;
    panda$core$Int64 i78 = { $tmp79 };
    int64_t $tmp81 = $tmp77.max.value;
    bool $tmp82 = $tmp77.inclusive.value;
    bool $tmp89 = 1 > 0;
    if ($tmp89) goto $l87; else goto $l88;
    $l87:;
    if ($tmp82) goto $l90; else goto $l91;
    $l90:;
    if ($tmp79 <= $tmp81) goto $l83; else goto $l85;
    $l91:;
    if ($tmp79 < $tmp81) goto $l83; else goto $l85;
    $l88:;
    if ($tmp82) goto $l92; else goto $l93;
    $l92:;
    if ($tmp79 >= $tmp81) goto $l83; else goto $l85;
    $l93:;
    if ($tmp79 > $tmp81) goto $l83; else goto $l85;
    $l83:;
    {
        result76[i78.value] = self->data[i78.value];
    }
    $l86:;
    if ($tmp89) goto $l96; else goto $l97;
    $l96:;
    int64_t $tmp98 = $tmp81 - i78.value;
    if ($tmp82) goto $l99; else goto $l100;
    $l99:;
    if ($tmp98 >= 1) goto $l95; else goto $l85;
    $l100:;
    if ($tmp98 > 1) goto $l95; else goto $l85;
    $l97:;
    int64_t $tmp102 = i78.value - $tmp81;
    if ($tmp82) goto $l103; else goto $l104;
    $l103:;
    if ($tmp102 >= -1) goto $l95; else goto $l85;
    $l104:;
    if ($tmp102 > -1) goto $l95; else goto $l85;
    $l95:;
    i78.value += 1;
    goto $l83;
    $l85:;
    panda$core$String* $tmp106 = (panda$core$String*) malloc(40);
    $tmp106->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp106->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp106, result76, self->length);
    return $tmp106;
}

