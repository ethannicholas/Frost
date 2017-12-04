#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.h"
#include "panda/core/Bit.h"


panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear} };

typedef void (*$fn2)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn72)(panda$core$Object*);
typedef void (*$fn74)(panda$core$MutableString*, panda$core$String*);


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
    (($fn2) self->$class->vtable[3])(self, p_s);
}
void panda$core$MutableString$cleanup(panda$core$MutableString* self) {
    free(self->data);
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp3 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp3);
    self->data[self->length.value] = p_c;
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, ((panda$core$Int64) { 1 }));
    self->length = $tmp4;
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range $tmp6;
    panda$core$Int64 $tmp5 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp5);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(p_s->_length)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp8 = ((panda$core$Int64$wrapper*) $tmp6.start)->value.value;
    panda$core$Int64 i7 = { $tmp8 };
    int64_t $tmp10 = ((panda$core$Int64$wrapper*) $tmp6.end)->value.value;
    int64_t $tmp11 = $tmp6.step.value;
    bool $tmp12 = $tmp6.inclusive.value;
    bool $tmp19 = $tmp11 > 0;
    if ($tmp19) goto $l17; else goto $l18;
    $l17:;
    if ($tmp12) goto $l20; else goto $l21;
    $l20:;
    if ($tmp8 <= $tmp10) goto $l13; else goto $l15;
    $l21:;
    if ($tmp8 < $tmp10) goto $l13; else goto $l15;
    $l18:;
    if ($tmp12) goto $l22; else goto $l23;
    $l22:;
    if ($tmp8 >= $tmp10) goto $l13; else goto $l15;
    $l23:;
    if ($tmp8 > $tmp10) goto $l13; else goto $l15;
    $l13:;
    {
        panda$core$Int64 $tmp25 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i7);
        self->data[$tmp25.value] = p_s->data[i7.value];
    }
    $l16:;
    if ($tmp19) goto $l27; else goto $l28;
    $l27:;
    int64_t $tmp29 = $tmp10 - i7.value;
    if ($tmp12) goto $l30; else goto $l31;
    $l30:;
    if ($tmp29 >= $tmp11) goto $l26; else goto $l15;
    $l31:;
    if ($tmp29 > $tmp11) goto $l26; else goto $l15;
    $l28:;
    int64_t $tmp33 = i7.value - $tmp10;
    if ($tmp12) goto $l34; else goto $l35;
    $l34:;
    if ($tmp33 >= -$tmp11) goto $l26; else goto $l15;
    $l35:;
    if ($tmp33 > -$tmp11) goto $l26; else goto $l15;
    $l26:;
    i7.value += $tmp11;
    goto $l13;
    $l15:;
    panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp37;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range $tmp39;
    panda$core$Int64 $tmp38 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp38);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp39, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(p_count)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp41 = ((panda$core$Int64$wrapper*) $tmp39.start)->value.value;
    panda$core$Int64 i40 = { $tmp41 };
    int64_t $tmp43 = ((panda$core$Int64$wrapper*) $tmp39.end)->value.value;
    int64_t $tmp44 = $tmp39.step.value;
    bool $tmp45 = $tmp39.inclusive.value;
    bool $tmp52 = $tmp44 > 0;
    if ($tmp52) goto $l50; else goto $l51;
    $l50:;
    if ($tmp45) goto $l53; else goto $l54;
    $l53:;
    if ($tmp41 <= $tmp43) goto $l46; else goto $l48;
    $l54:;
    if ($tmp41 < $tmp43) goto $l46; else goto $l48;
    $l51:;
    if ($tmp45) goto $l55; else goto $l56;
    $l55:;
    if ($tmp41 >= $tmp43) goto $l46; else goto $l48;
    $l56:;
    if ($tmp41 > $tmp43) goto $l46; else goto $l48;
    $l46:;
    {
        panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i40);
        panda$core$Int64 $tmp59 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i40);
        self->data[$tmp58.value] = p_chars[$tmp59.value];
    }
    $l49:;
    if ($tmp52) goto $l61; else goto $l62;
    $l61:;
    int64_t $tmp63 = $tmp43 - i40.value;
    if ($tmp45) goto $l64; else goto $l65;
    $l64:;
    if ($tmp63 >= $tmp44) goto $l60; else goto $l48;
    $l65:;
    if ($tmp63 > $tmp44) goto $l60; else goto $l48;
    $l62:;
    int64_t $tmp67 = i40.value - $tmp43;
    if ($tmp45) goto $l68; else goto $l69;
    $l68:;
    if ($tmp67 >= -$tmp44) goto $l60; else goto $l48;
    $l69:;
    if ($tmp67 > -$tmp44) goto $l60; else goto $l48;
    $l60:;
    i40.value += $tmp44;
    goto $l46;
    $l48:;
    panda$core$Int64 $tmp71 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp71;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp73 = (($fn72) p_o->$class->vtable[0])(p_o);
    (($fn74) self->$class->vtable[3])(self, $tmp73);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Bit $tmp75 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp75.value) {
    {
        return;
    }
    }
    $l76:;
    panda$core$Bit $tmp78 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp78.value) goto $l77;
    {
        panda$core$Int64 $tmp79 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp79;
    }
    goto $l76;
    $l77:;
    self->data = ((panda$core$Char8*) realloc(self->data, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, ((panda$core$Int64) { 16 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 16 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result80;
    panda$core$Range $tmp81;
    result80 = ((panda$core$Char8*) malloc(self->length.value * 1));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp81, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->length)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp83 = ((panda$core$Int64$wrapper*) $tmp81.start)->value.value;
    panda$core$Int64 i82 = { $tmp83 };
    int64_t $tmp85 = ((panda$core$Int64$wrapper*) $tmp81.end)->value.value;
    int64_t $tmp86 = $tmp81.step.value;
    bool $tmp87 = $tmp81.inclusive.value;
    bool $tmp94 = $tmp86 > 0;
    if ($tmp94) goto $l92; else goto $l93;
    $l92:;
    if ($tmp87) goto $l95; else goto $l96;
    $l95:;
    if ($tmp83 <= $tmp85) goto $l88; else goto $l90;
    $l96:;
    if ($tmp83 < $tmp85) goto $l88; else goto $l90;
    $l93:;
    if ($tmp87) goto $l97; else goto $l98;
    $l97:;
    if ($tmp83 >= $tmp85) goto $l88; else goto $l90;
    $l98:;
    if ($tmp83 > $tmp85) goto $l88; else goto $l90;
    $l88:;
    {
        result80[i82.value] = self->data[i82.value];
    }
    $l91:;
    if ($tmp94) goto $l101; else goto $l102;
    $l101:;
    int64_t $tmp103 = $tmp85 - i82.value;
    if ($tmp87) goto $l104; else goto $l105;
    $l104:;
    if ($tmp103 >= $tmp86) goto $l100; else goto $l90;
    $l105:;
    if ($tmp103 > $tmp86) goto $l100; else goto $l90;
    $l102:;
    int64_t $tmp107 = i82.value - $tmp85;
    if ($tmp87) goto $l108; else goto $l109;
    $l108:;
    if ($tmp107 >= -$tmp86) goto $l100; else goto $l90;
    $l109:;
    if ($tmp107 > -$tmp86) goto $l100; else goto $l90;
    $l100:;
    i82.value += $tmp86;
    goto $l88;
    $l90:;
    panda$core$String* $tmp111 = (panda$core$String*) malloc(32);
    $tmp111->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp111->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp111, result80, self->length);
    return $tmp111;
}

