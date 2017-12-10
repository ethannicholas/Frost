#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"


panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String, panda$core$MutableString$valid$R$panda$core$Bit} };

typedef panda$core$String* (*$fn51)(panda$core$Object*);


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
    if ($tmp10) goto $l17; else goto $l18;
    $l17:;
    if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
    $l18:;
    if ($tmp7 < $tmp9) goto $l11; else goto $l13;
    $l11:;
    {
        panda$core$Int64 $tmp19 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i6);
        self->data[$tmp19.value] = p_s->data[i6.value];
    }
    $l14:;
    int64_t $tmp21 = $tmp9 - i6.value;
    if ($tmp10) goto $l22; else goto $l23;
    $l22:;
    if ($tmp21 >= 1) goto $l20; else goto $l13;
    $l23:;
    if ($tmp21 > 1) goto $l20; else goto $l13;
    $l20:;
    i6.value += 1;
    goto $l11;
    $l13:;
    panda$core$Int64 $tmp26 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp26;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp28;
    panda$core$Int64 $tmp27 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp27);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp28, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp30 = $tmp28.min.value;
    panda$core$Int64 i29 = { $tmp30 };
    int64_t $tmp32 = $tmp28.max.value;
    bool $tmp33 = $tmp28.inclusive.value;
    if ($tmp33) goto $l40; else goto $l41;
    $l40:;
    if ($tmp30 <= $tmp32) goto $l34; else goto $l36;
    $l41:;
    if ($tmp30 < $tmp32) goto $l34; else goto $l36;
    $l34:;
    {
        panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i29);
        panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i29);
        self->data[$tmp42.value] = p_chars[$tmp43.value];
    }
    $l37:;
    int64_t $tmp45 = $tmp32 - i29.value;
    if ($tmp33) goto $l46; else goto $l47;
    $l46:;
    if ($tmp45 >= 1) goto $l44; else goto $l36;
    $l47:;
    if ($tmp45 > 1) goto $l44; else goto $l36;
    $l44:;
    i29.value += 1;
    goto $l34;
    $l36:;
    panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp50;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp52 = (($fn51) p_o->$class->vtable[0])(p_o);
    panda$core$MutableString$append$panda$core$String(self, $tmp52);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Bit $tmp53 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp53.value) {
    {
        return;
    }
    }
    $l54:;
    panda$core$Bit $tmp56 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp56.value) goto $l55;
    {
        panda$core$Int64 $tmp57 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp57;
    }
    goto $l54;
    $l55:;
    self->data = ((panda$core$Char8*) realloc(self->data, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    panda$core$Bit $tmp58 = panda$core$MutableString$valid$R$panda$core$Bit(self);
    if ($tmp58.value) {
    {
        self->data = ((panda$core$Char8*) realloc(self->data, ((panda$core$Int64) { 16 }).value * 1));
    }
    }
    else {
    {
        self->data = ((panda$core$Char8*) malloc(((panda$core$Int64) { 16 }).value * 1));
    }
    }
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 16 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result59;
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    result59 = ((panda$core$Char8*) malloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp60, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Bit) { false }));
    int64_t $tmp62 = $tmp60.min.value;
    panda$core$Int64 i61 = { $tmp62 };
    int64_t $tmp64 = $tmp60.max.value;
    bool $tmp65 = $tmp60.inclusive.value;
    if ($tmp65) goto $l72; else goto $l73;
    $l72:;
    if ($tmp62 <= $tmp64) goto $l66; else goto $l68;
    $l73:;
    if ($tmp62 < $tmp64) goto $l66; else goto $l68;
    $l66:;
    {
        result59[i61.value] = self->data[i61.value];
    }
    $l69:;
    int64_t $tmp75 = $tmp64 - i61.value;
    if ($tmp65) goto $l76; else goto $l77;
    $l76:;
    if ($tmp75 >= 1) goto $l74; else goto $l68;
    $l77:;
    if ($tmp75 > 1) goto $l74; else goto $l68;
    $l74:;
    i61.value += 1;
    goto $l66;
    $l68:;
    panda$core$String* $tmp80 = (panda$core$String*) malloc(40);
    $tmp80->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp80->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp80, result59, self->length);
    return $tmp80;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$String* result82;
    panda$core$String* $tmp83 = (panda$core$String*) malloc(40);
    $tmp83->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp83->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp83, self->data, self->length);
    result82 = $tmp83;
    self->maxLength = ((panda$core$Int64) { -1 });
    return result82;
}
panda$core$Bit panda$core$MutableString$valid$R$panda$core$Bit(panda$core$MutableString* self) {
    panda$core$Bit $tmp85 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, ((panda$core$Int64) { 0 }));
    return $tmp85;
}

