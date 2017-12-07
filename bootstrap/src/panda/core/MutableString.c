#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"


panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear} };

typedef panda$core$String* (*$fn71)(panda$core$Object*);


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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp5.start.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp5.end.value;
    int64_t $tmp10 = $tmp5.step.value;
    bool $tmp11 = $tmp5.inclusive.value;
    bool $tmp18 = $tmp10 > 0;
    if ($tmp18) goto $l16; else goto $l17;
    $l16:;
    if ($tmp11) goto $l19; else goto $l20;
    $l19:;
    if ($tmp7 <= $tmp9) goto $l12; else goto $l14;
    $l20:;
    if ($tmp7 < $tmp9) goto $l12; else goto $l14;
    $l17:;
    if ($tmp11) goto $l21; else goto $l22;
    $l21:;
    if ($tmp7 >= $tmp9) goto $l12; else goto $l14;
    $l22:;
    if ($tmp7 > $tmp9) goto $l12; else goto $l14;
    $l12:;
    {
        panda$core$Int64 $tmp24 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i6);
        self->data[$tmp24.value] = p_s->data[i6.value];
    }
    $l15:;
    if ($tmp18) goto $l26; else goto $l27;
    $l26:;
    int64_t $tmp28 = $tmp9 - i6.value;
    if ($tmp11) goto $l29; else goto $l30;
    $l29:;
    if ($tmp28 >= $tmp10) goto $l25; else goto $l14;
    $l30:;
    if ($tmp28 > $tmp10) goto $l25; else goto $l14;
    $l27:;
    int64_t $tmp32 = i6.value - $tmp9;
    if ($tmp11) goto $l33; else goto $l34;
    $l33:;
    if ($tmp32 >= -$tmp10) goto $l25; else goto $l14;
    $l34:;
    if ($tmp32 > -$tmp10) goto $l25; else goto $l14;
    $l25:;
    i6.value += $tmp10;
    goto $l12;
    $l14:;
    panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_s->_length);
    self->length = $tmp36;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp38;
    panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp37);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp38, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp40 = $tmp38.start.value;
    panda$core$Int64 i39 = { $tmp40 };
    int64_t $tmp42 = $tmp38.end.value;
    int64_t $tmp43 = $tmp38.step.value;
    bool $tmp44 = $tmp38.inclusive.value;
    bool $tmp51 = $tmp43 > 0;
    if ($tmp51) goto $l49; else goto $l50;
    $l49:;
    if ($tmp44) goto $l52; else goto $l53;
    $l52:;
    if ($tmp40 <= $tmp42) goto $l45; else goto $l47;
    $l53:;
    if ($tmp40 < $tmp42) goto $l45; else goto $l47;
    $l50:;
    if ($tmp44) goto $l54; else goto $l55;
    $l54:;
    if ($tmp40 >= $tmp42) goto $l45; else goto $l47;
    $l55:;
    if ($tmp40 > $tmp42) goto $l45; else goto $l47;
    $l45:;
    {
        panda$core$Int64 $tmp57 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, i39);
        panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, i39);
        self->data[$tmp57.value] = p_chars[$tmp58.value];
    }
    $l48:;
    if ($tmp51) goto $l60; else goto $l61;
    $l60:;
    int64_t $tmp62 = $tmp42 - i39.value;
    if ($tmp44) goto $l63; else goto $l64;
    $l63:;
    if ($tmp62 >= $tmp43) goto $l59; else goto $l47;
    $l64:;
    if ($tmp62 > $tmp43) goto $l59; else goto $l47;
    $l61:;
    int64_t $tmp66 = i39.value - $tmp42;
    if ($tmp44) goto $l67; else goto $l68;
    $l67:;
    if ($tmp66 >= -$tmp43) goto $l59; else goto $l47;
    $l68:;
    if ($tmp66 > -$tmp43) goto $l59; else goto $l47;
    $l59:;
    i39.value += $tmp43;
    goto $l45;
    $l47:;
    panda$core$Int64 $tmp70 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->length, p_count);
    self->length = $tmp70;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp72 = (($fn71) p_o->$class->vtable[0])(p_o);
    panda$core$MutableString$append$panda$core$String(self, $tmp72);
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Bit $tmp73 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp73.value) {
    {
        return;
    }
    }
    $l74:;
    panda$core$Bit $tmp76 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if (!$tmp76.value) goto $l75;
    {
        panda$core$Int64 $tmp77 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, ((panda$core$Int64) { 2 }));
        self->maxLength = $tmp77;
    }
    goto $l74;
    $l75:;
    self->data = ((panda$core$Char8*) realloc(self->data, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    self->data = ((panda$core$Char8*) realloc(self->data, ((panda$core$Int64) { 16 }).value * 1));
    self->length = ((panda$core$Int64) { 0 });
    self->maxLength = ((panda$core$Int64) { 16 });
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result78;
    panda$core$Range$LTpanda$core$Int64$GT $tmp79;
    result78 = ((panda$core$Char8*) malloc(self->length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp79, ((panda$core$Int64) { 0 }), self->length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp81 = $tmp79.start.value;
    panda$core$Int64 i80 = { $tmp81 };
    int64_t $tmp83 = $tmp79.end.value;
    int64_t $tmp84 = $tmp79.step.value;
    bool $tmp85 = $tmp79.inclusive.value;
    bool $tmp92 = $tmp84 > 0;
    if ($tmp92) goto $l90; else goto $l91;
    $l90:;
    if ($tmp85) goto $l93; else goto $l94;
    $l93:;
    if ($tmp81 <= $tmp83) goto $l86; else goto $l88;
    $l94:;
    if ($tmp81 < $tmp83) goto $l86; else goto $l88;
    $l91:;
    if ($tmp85) goto $l95; else goto $l96;
    $l95:;
    if ($tmp81 >= $tmp83) goto $l86; else goto $l88;
    $l96:;
    if ($tmp81 > $tmp83) goto $l86; else goto $l88;
    $l86:;
    {
        result78[i80.value] = self->data[i80.value];
    }
    $l89:;
    if ($tmp92) goto $l99; else goto $l100;
    $l99:;
    int64_t $tmp101 = $tmp83 - i80.value;
    if ($tmp85) goto $l102; else goto $l103;
    $l102:;
    if ($tmp101 >= $tmp84) goto $l98; else goto $l88;
    $l103:;
    if ($tmp101 > $tmp84) goto $l98; else goto $l88;
    $l100:;
    int64_t $tmp105 = i80.value - $tmp83;
    if ($tmp85) goto $l106; else goto $l107;
    $l106:;
    if ($tmp105 >= -$tmp84) goto $l98; else goto $l88;
    $l107:;
    if ($tmp105 > -$tmp84) goto $l98; else goto $l88;
    $l98:;
    i80.value += $tmp84;
    goto $l86;
    $l88:;
    panda$core$String* $tmp109 = (panda$core$String*) malloc(33);
    $tmp109->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp109->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp109, result78, self->length, ((panda$core$Bit) { true }));
    return $tmp109;
}

