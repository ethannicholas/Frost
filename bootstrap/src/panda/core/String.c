#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/String/UTF8List.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Array.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, ((panda$core$String*) p0));
    return result;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self, ((panda$core$String*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn52)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn58)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn215)(panda$core$Object*);
typedef panda$core$String* (*$fn252)(panda$core$Object*);


void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$Bit p_owned) {
    self->data = p_data;
    self->_length = p_length;
    self->owned = p_owned;
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp4;
    self->data = ((panda$core$Char8*) malloc(self->_length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
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
        ITable* $tmp24 = p_chars->$class->itable;
        while ($tmp24->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp24 = $tmp24->next;
        }
        $fn26 $tmp25 = $tmp24->methods[0];
        panda$core$Object* $tmp27 = $tmp25(p_chars, i6);
        self->data[i6.value] = ((panda$core$Char8$wrapper*) $tmp27)->value;
    }
    $l15:;
    if ($tmp18) goto $l29; else goto $l30;
    $l29:;
    int64_t $tmp31 = $tmp9 - i6.value;
    if ($tmp11) goto $l32; else goto $l33;
    $l32:;
    if ($tmp31 >= $tmp10) goto $l28; else goto $l14;
    $l33:;
    if ($tmp31 > $tmp10) goto $l28; else goto $l14;
    $l30:;
    int64_t $tmp35 = i6.value - $tmp9;
    if ($tmp11) goto $l36; else goto $l37;
    $l36:;
    if ($tmp35 >= -$tmp10) goto $l28; else goto $l14;
    $l37:;
    if ($tmp35 > -$tmp10) goto $l28; else goto $l14;
    $l28:;
    i6.value += $tmp10;
    goto $l12;
    $l14:;
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    free(self->data);
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp39 = (panda$core$String$UTF8List*) malloc(24);
    $tmp39->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp39->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp39, self);
    return ((panda$collections$ListView*) $tmp39);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp41 = (panda$core$String$UTF16Iterator*) malloc(32);
    $tmp41->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp41->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp41, self);
    return ((panda$collections$Iterator*) $tmp41);
}
panda$collections$Iterator* panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp43 = (panda$core$String$UTF32Iterator*) malloc(32);
    $tmp43->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp43->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp43, self);
    return ((panda$collections$Iterator*) $tmp43);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count45;
    panda$collections$Iterator* iter46;
    count45 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp47 = panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    iter46 = $tmp47;
    $l48:;
    ITable* $tmp50 = iter46->$class->itable;
    while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp50 = $tmp50->next;
    }
    $fn52 $tmp51 = $tmp50->methods[0];
    panda$core$Bit $tmp53 = $tmp51(iter46);
    panda$core$Bit $tmp54 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp53);
    if (!$tmp54.value) goto $l49;
    {
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count45, ((panda$core$Int64) { 1 }));
        count45 = $tmp55;
        ITable* $tmp56 = iter46->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[1];
        $tmp57(iter46);
    }
    goto $l48;
    $l49:;
    return count45;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    panda$core$Bit $tmp59 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp59.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp60, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp62 = $tmp60.start.value;
    panda$core$Int64 i61 = { $tmp62 };
    int64_t $tmp64 = $tmp60.end.value;
    int64_t $tmp65 = $tmp60.step.value;
    bool $tmp66 = $tmp60.inclusive.value;
    bool $tmp73 = $tmp65 > 0;
    if ($tmp73) goto $l71; else goto $l72;
    $l71:;
    if ($tmp66) goto $l74; else goto $l75;
    $l74:;
    if ($tmp62 <= $tmp64) goto $l67; else goto $l69;
    $l75:;
    if ($tmp62 < $tmp64) goto $l67; else goto $l69;
    $l72:;
    if ($tmp66) goto $l76; else goto $l77;
    $l76:;
    if ($tmp62 >= $tmp64) goto $l67; else goto $l69;
    $l77:;
    if ($tmp62 > $tmp64) goto $l67; else goto $l69;
    $l67:;
    {
        panda$core$Bit $tmp79 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i61.value], p_other->data[i61.value]);
        if ($tmp79.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l70:;
    if ($tmp73) goto $l81; else goto $l82;
    $l81:;
    int64_t $tmp83 = $tmp64 - i61.value;
    if ($tmp66) goto $l84; else goto $l85;
    $l84:;
    if ($tmp83 >= $tmp65) goto $l80; else goto $l69;
    $l85:;
    if ($tmp83 > $tmp65) goto $l80; else goto $l69;
    $l82:;
    int64_t $tmp87 = i61.value - $tmp64;
    if ($tmp66) goto $l88; else goto $l89;
    $l88:;
    if ($tmp87 >= -$tmp65) goto $l80; else goto $l69;
    $l89:;
    if ($tmp87 > -$tmp65) goto $l80; else goto $l69;
    $l80:;
    i61.value += $tmp65;
    goto $l67;
    $l69:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp92;
    panda$core$Bit $tmp91 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp91.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp94 = $tmp92.start.value;
    panda$core$Int64 i93 = { $tmp94 };
    int64_t $tmp96 = $tmp92.end.value;
    int64_t $tmp97 = $tmp92.step.value;
    bool $tmp98 = $tmp92.inclusive.value;
    bool $tmp105 = $tmp97 > 0;
    if ($tmp105) goto $l103; else goto $l104;
    $l103:;
    if ($tmp98) goto $l106; else goto $l107;
    $l106:;
    if ($tmp94 <= $tmp96) goto $l99; else goto $l101;
    $l107:;
    if ($tmp94 < $tmp96) goto $l99; else goto $l101;
    $l104:;
    if ($tmp98) goto $l108; else goto $l109;
    $l108:;
    if ($tmp94 >= $tmp96) goto $l99; else goto $l101;
    $l109:;
    if ($tmp94 > $tmp96) goto $l99; else goto $l101;
    $l99:;
    {
        panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp112 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp111, i93);
        panda$core$Bit $tmp113 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp112.value], p_other->data[i93.value]);
        if ($tmp113.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l102:;
    if ($tmp105) goto $l115; else goto $l116;
    $l115:;
    int64_t $tmp117 = $tmp96 - i93.value;
    if ($tmp98) goto $l118; else goto $l119;
    $l118:;
    if ($tmp117 >= $tmp97) goto $l114; else goto $l101;
    $l119:;
    if ($tmp117 > $tmp97) goto $l114; else goto $l101;
    $l116:;
    int64_t $tmp121 = i93.value - $tmp96;
    if ($tmp98) goto $l122; else goto $l123;
    $l122:;
    if ($tmp121 >= -$tmp97) goto $l114; else goto $l101;
    $l123:;
    if ($tmp121 > -$tmp97) goto $l114; else goto $l101;
    $l114:;
    i93.value += $tmp97;
    goto $l99;
    $l101:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trimmed$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start126;
    panda$core$Int64 end135;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp145;
    panda$core$String$Index $tmp146;
    panda$core$String$Index $tmp147;
    panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp125.value) {
    {
        return self;
    }
    }
    start126 = ((panda$core$Int64) { 0 });
    $l127:;
    panda$core$Bit $tmp130 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start126, self->_length);
    bool $tmp129 = $tmp130.value;
    if (!$tmp129) goto $l131;
    panda$core$Bit $tmp132 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start126.value]);
    $tmp129 = $tmp132.value;
    $l131:;
    panda$core$Bit $tmp133 = { $tmp129 };
    if (!$tmp133.value) goto $l128;
    {
        panda$core$Int64 $tmp134 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start126, ((panda$core$Int64) { 1 }));
        start126 = $tmp134;
    }
    goto $l127;
    $l128:;
    panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end135 = $tmp136;
    $l137:;
    panda$core$Bit $tmp140 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end135, start126);
    bool $tmp139 = $tmp140.value;
    if (!$tmp139) goto $l141;
    panda$core$Bit $tmp142 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end135.value]);
    $tmp139 = $tmp142.value;
    $l141:;
    panda$core$Bit $tmp143 = { $tmp139 };
    if (!$tmp143.value) goto $l138;
    {
        panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end135, ((panda$core$Int64) { 1 }));
        end135 = $tmp144;
    }
    goto $l137;
    $l138:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp146, start126);
    panda$core$String$Index$init$panda$core$Int64(&$tmp147, end135);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp145, ((panda$core$String$Index$nullable) { $tmp146, true }), ((panda$core$String$Index$nullable) { $tmp147, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
    panda$core$String* $tmp148 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp145);
    return $tmp148;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result149;
    panda$core$Range$LTpanda$core$Int64$GT $tmp151;
    panda$core$Range$LTpanda$core$Int64$GT $tmp181;
    panda$core$Int64 $tmp150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result149 = ((panda$core$Char8*) malloc($tmp150.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp151, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp153 = $tmp151.start.value;
    panda$core$Int64 i152 = { $tmp153 };
    int64_t $tmp155 = $tmp151.end.value;
    int64_t $tmp156 = $tmp151.step.value;
    bool $tmp157 = $tmp151.inclusive.value;
    bool $tmp164 = $tmp156 > 0;
    if ($tmp164) goto $l162; else goto $l163;
    $l162:;
    if ($tmp157) goto $l165; else goto $l166;
    $l165:;
    if ($tmp153 <= $tmp155) goto $l158; else goto $l160;
    $l166:;
    if ($tmp153 < $tmp155) goto $l158; else goto $l160;
    $l163:;
    if ($tmp157) goto $l167; else goto $l168;
    $l167:;
    if ($tmp153 >= $tmp155) goto $l158; else goto $l160;
    $l168:;
    if ($tmp153 > $tmp155) goto $l158; else goto $l160;
    $l158:;
    {
        result149[i152.value] = self->data[i152.value];
    }
    $l161:;
    if ($tmp164) goto $l171; else goto $l172;
    $l171:;
    int64_t $tmp173 = $tmp155 - i152.value;
    if ($tmp157) goto $l174; else goto $l175;
    $l174:;
    if ($tmp173 >= $tmp156) goto $l170; else goto $l160;
    $l175:;
    if ($tmp173 > $tmp156) goto $l170; else goto $l160;
    $l172:;
    int64_t $tmp177 = i152.value - $tmp155;
    if ($tmp157) goto $l178; else goto $l179;
    $l178:;
    if ($tmp177 >= -$tmp156) goto $l170; else goto $l160;
    $l179:;
    if ($tmp177 > -$tmp156) goto $l170; else goto $l160;
    $l170:;
    i152.value += $tmp156;
    goto $l158;
    $l160:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp181, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp183 = $tmp181.start.value;
    panda$core$Int64 i182 = { $tmp183 };
    int64_t $tmp185 = $tmp181.end.value;
    int64_t $tmp186 = $tmp181.step.value;
    bool $tmp187 = $tmp181.inclusive.value;
    bool $tmp194 = $tmp186 > 0;
    if ($tmp194) goto $l192; else goto $l193;
    $l192:;
    if ($tmp187) goto $l195; else goto $l196;
    $l195:;
    if ($tmp183 <= $tmp185) goto $l188; else goto $l190;
    $l196:;
    if ($tmp183 < $tmp185) goto $l188; else goto $l190;
    $l193:;
    if ($tmp187) goto $l197; else goto $l198;
    $l197:;
    if ($tmp183 >= $tmp185) goto $l188; else goto $l190;
    $l198:;
    if ($tmp183 > $tmp185) goto $l188; else goto $l190;
    $l188:;
    {
        panda$core$Int64 $tmp200 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i182);
        result149[$tmp200.value] = p_other->data[i182.value];
    }
    $l191:;
    if ($tmp194) goto $l202; else goto $l203;
    $l202:;
    int64_t $tmp204 = $tmp185 - i182.value;
    if ($tmp187) goto $l205; else goto $l206;
    $l205:;
    if ($tmp204 >= $tmp186) goto $l201; else goto $l190;
    $l206:;
    if ($tmp204 > $tmp186) goto $l201; else goto $l190;
    $l203:;
    int64_t $tmp208 = i182.value - $tmp185;
    if ($tmp187) goto $l209; else goto $l210;
    $l209:;
    if ($tmp208 >= -$tmp186) goto $l201; else goto $l190;
    $l210:;
    if ($tmp208 > -$tmp186) goto $l201; else goto $l190;
    $l201:;
    i182.value += $tmp186;
    goto $l188;
    $l190:;
    panda$core$String* $tmp212 = (panda$core$String*) malloc(33);
    $tmp212->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp212->refCount.value = 1;
    panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp212, result149, $tmp214, ((panda$core$Bit) { true }));
    return $tmp212;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp216 = (($fn215) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp216);
    return $tmp217;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result218;
    panda$core$Range$LTpanda$core$Int64$GT $tmp221;
    panda$core$MutableString* $tmp219 = (panda$core$MutableString*) malloc(40);
    $tmp219->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp219->refCount.value = 1;
    panda$core$MutableString$init($tmp219);
    result218 = $tmp219;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp221, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp223 = $tmp221.start.value;
    panda$core$Int64 i222 = { $tmp223 };
    int64_t $tmp225 = $tmp221.end.value;
    int64_t $tmp226 = $tmp221.step.value;
    bool $tmp227 = $tmp221.inclusive.value;
    bool $tmp234 = $tmp226 > 0;
    if ($tmp234) goto $l232; else goto $l233;
    $l232:;
    if ($tmp227) goto $l235; else goto $l236;
    $l235:;
    if ($tmp223 <= $tmp225) goto $l228; else goto $l230;
    $l236:;
    if ($tmp223 < $tmp225) goto $l228; else goto $l230;
    $l233:;
    if ($tmp227) goto $l237; else goto $l238;
    $l237:;
    if ($tmp223 >= $tmp225) goto $l228; else goto $l230;
    $l238:;
    if ($tmp223 > $tmp225) goto $l228; else goto $l230;
    $l228:;
    {
        panda$core$MutableString$append$panda$core$String(result218, self);
    }
    $l231:;
    if ($tmp234) goto $l241; else goto $l242;
    $l241:;
    int64_t $tmp243 = $tmp225 - i222.value;
    if ($tmp227) goto $l244; else goto $l245;
    $l244:;
    if ($tmp243 >= $tmp226) goto $l240; else goto $l230;
    $l245:;
    if ($tmp243 > $tmp226) goto $l240; else goto $l230;
    $l242:;
    int64_t $tmp247 = i222.value - $tmp225;
    if ($tmp227) goto $l248; else goto $l249;
    $l248:;
    if ($tmp247 >= -$tmp226) goto $l240; else goto $l230;
    $l249:;
    if ($tmp247 > -$tmp226) goto $l240; else goto $l230;
    $l240:;
    i222.value += $tmp226;
    goto $l228;
    $l230:;
    panda$core$String* $tmp251 = panda$core$MutableString$convert$R$panda$core$String(result218);
    return $tmp251;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp253 = (($fn252) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, p_s);
    return $tmp254;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp256;
    panda$core$Bit $tmp255 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp255.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp256, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp258 = $tmp256.start.value;
    panda$core$Int64 i257 = { $tmp258 };
    int64_t $tmp260 = $tmp256.end.value;
    int64_t $tmp261 = $tmp256.step.value;
    bool $tmp262 = $tmp256.inclusive.value;
    bool $tmp269 = $tmp261 > 0;
    if ($tmp269) goto $l267; else goto $l268;
    $l267:;
    if ($tmp262) goto $l270; else goto $l271;
    $l270:;
    if ($tmp258 <= $tmp260) goto $l263; else goto $l265;
    $l271:;
    if ($tmp258 < $tmp260) goto $l263; else goto $l265;
    $l268:;
    if ($tmp262) goto $l272; else goto $l273;
    $l272:;
    if ($tmp258 >= $tmp260) goto $l263; else goto $l265;
    $l273:;
    if ($tmp258 > $tmp260) goto $l263; else goto $l265;
    $l263:;
    {
        panda$core$Bit $tmp275 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i257.value], p_other->data[i257.value]);
        if ($tmp275.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l266:;
    if ($tmp269) goto $l277; else goto $l278;
    $l277:;
    int64_t $tmp279 = $tmp260 - i257.value;
    if ($tmp262) goto $l280; else goto $l281;
    $l280:;
    if ($tmp279 >= $tmp261) goto $l276; else goto $l265;
    $l281:;
    if ($tmp279 > $tmp261) goto $l276; else goto $l265;
    $l278:;
    int64_t $tmp283 = i257.value - $tmp260;
    if ($tmp262) goto $l284; else goto $l285;
    $l284:;
    if ($tmp283 >= -$tmp261) goto $l276; else goto $l265;
    $l285:;
    if ($tmp283 > -$tmp261) goto $l276; else goto $l265;
    $l276:;
    i257.value += $tmp261;
    goto $l263;
    $l265:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp287 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp288 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp287);
    return $tmp288;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx289;
    panda$core$Char8 c290;
    panda$core$Int32 result291;
    panda$core$Char32 $tmp295;
    panda$core$Char32 $tmp306;
    panda$core$Char32 $tmp322;
    panda$core$Char32 $tmp341;
    idx289 = p_index.value;
    c290 = self->data[idx289.value];
    panda$core$Int32 $tmp292 = panda$core$Char8$convert$R$panda$core$Int32(c290);
    result291 = $tmp292;
    int64_t $tmp293 = ((int64_t) c290.value) & 255;
    bool $tmp294 = $tmp293 < 192;
    if (((panda$core$Bit) { $tmp294 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp295, result291);
        return $tmp295;
    }
    }
    int64_t $tmp296 = ((int64_t) c290.value) & 255;
    bool $tmp297 = $tmp296 < 224;
    if (((panda$core$Bit) { $tmp297 }).value) {
    {
        panda$core$Int64 $tmp298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp299 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp298, self->_length);
        PANDA_ASSERT($tmp299.value);
        panda$core$Int32 $tmp300 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result291, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp301 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp300, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp303 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp302.value]);
        panda$core$Int32 $tmp304 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp303, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp305 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp301, $tmp304);
        result291 = $tmp305;
        panda$core$Char32$init$panda$core$Int32(&$tmp306, result291);
        return $tmp306;
    }
    }
    int64_t $tmp307 = ((int64_t) c290.value) & 255;
    bool $tmp308 = $tmp307 < 240;
    if (((panda$core$Bit) { $tmp308 }).value) {
    {
        panda$core$Int64 $tmp309 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp310 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp309, self->_length);
        PANDA_ASSERT($tmp310.value);
        panda$core$Int32 $tmp311 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result291, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp312 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp311, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp313 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp314 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp313.value]);
        panda$core$Int32 $tmp315 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp314, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp316 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp315, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp317 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp312, $tmp316);
        panda$core$Int64 $tmp318 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp319 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp318.value]);
        panda$core$Int32 $tmp320 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp319, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp321 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp317, $tmp320);
        result291 = $tmp321;
        panda$core$Char32$init$panda$core$Int32(&$tmp322, result291);
        return $tmp322;
    }
    }
    panda$core$Int64 $tmp323 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp324 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp323, self->_length);
    PANDA_ASSERT($tmp324.value);
    panda$core$Int32 $tmp325 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result291, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp326 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp325, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp327 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp328 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp327.value]);
    panda$core$Int32 $tmp329 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp328, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp330 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp329, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp331 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp326, $tmp330);
    panda$core$Int64 $tmp332 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp333 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp332.value]);
    panda$core$Int32 $tmp334 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp333, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp335 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp334, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp336 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp331, $tmp335);
    panda$core$Int64 $tmp337 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp338 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp337.value]);
    panda$core$Int32 $tmp339 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp338, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp340 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp336, $tmp339);
    result291 = $tmp340;
    panda$core$Char32$init$panda$core$Int32(&$tmp341, result291);
    return $tmp341;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp342 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp343 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp342, p_index);
    panda$core$Char32 $tmp344 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp343);
    return $tmp344;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 step345;
    panda$core$Int64 current346;
    panda$core$Int64 end351;
    panda$core$MutableString* result355;
    panda$core$Char8 c362;
    panda$core$Range$LTpanda$core$Int64$GT $tmp373;
    panda$core$String$Index $tmp394;
    panda$core$Char8 c411;
    panda$core$Int64 old412;
    panda$core$Range$LTpanda$core$Int64$GT $tmp432;
    panda$core$String$Index $tmp453;
    panda$core$Char8 c477;
    step345 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current346 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp347 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step345, ((panda$core$Int64) { 0 }));
    if ($tmp347.value) {
    {
        panda$core$String$Index $tmp348 = panda$core$String$start$R$panda$core$String$Index(self);
        current346 = $tmp348.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp349 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp350 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp349);
        current346 = $tmp350.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end351 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp352 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step345, ((panda$core$Int64) { 0 }));
    if ($tmp352.value) {
    {
        panda$core$String$Index $tmp353 = panda$core$String$end$R$panda$core$String$Index(self);
        end351 = $tmp353.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp354 = panda$core$String$start$R$panda$core$String$Index(self);
        end351 = $tmp354.value;
    }
    }
    }
    panda$core$MutableString* $tmp356 = (panda$core$MutableString*) malloc(40);
    $tmp356->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp356->refCount.value = 1;
    panda$core$MutableString$init($tmp356);
    result355 = $tmp356;
    panda$core$Bit $tmp358 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp358.value) {
    {
        $l359:;
        panda$core$Bit $tmp361 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current346, end351);
        if (!$tmp361.value) goto $l360;
        {
            c362 = self->data[current346.value];
            panda$core$MutableString$append$panda$core$Char8(result355, c362);
            panda$core$Int64 $tmp363 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
            current346 = $tmp363;
            int64_t $tmp364 = ((int64_t) c362.value) & 255;
            bool $tmp365 = $tmp364 >= 192;
            if (((panda$core$Bit) { $tmp365 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
                panda$core$Int64 $tmp366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
                current346 = $tmp366;
            }
            }
            int64_t $tmp367 = ((int64_t) c362.value) & 255;
            bool $tmp368 = $tmp367 >= 224;
            if (((panda$core$Bit) { $tmp368 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
                panda$core$Int64 $tmp369 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
                current346 = $tmp369;
            }
            }
            int64_t $tmp370 = ((int64_t) c362.value) & 255;
            bool $tmp371 = $tmp370 >= 240;
            if (((panda$core$Bit) { $tmp371 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
                panda$core$Int64 $tmp372 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
                current346 = $tmp372;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp373, ((panda$core$Int64) { 1 }), step345, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp375 = $tmp373.start.value;
            panda$core$Int64 i374 = { $tmp375 };
            int64_t $tmp377 = $tmp373.end.value;
            int64_t $tmp378 = $tmp373.step.value;
            bool $tmp379 = $tmp373.inclusive.value;
            bool $tmp386 = $tmp378 > 0;
            if ($tmp386) goto $l384; else goto $l385;
            $l384:;
            if ($tmp379) goto $l387; else goto $l388;
            $l387:;
            if ($tmp375 <= $tmp377) goto $l380; else goto $l382;
            $l388:;
            if ($tmp375 < $tmp377) goto $l380; else goto $l382;
            $l385:;
            if ($tmp379) goto $l389; else goto $l390;
            $l389:;
            if ($tmp375 >= $tmp377) goto $l380; else goto $l382;
            $l390:;
            if ($tmp375 > $tmp377) goto $l380; else goto $l382;
            $l380:;
            {
                panda$core$Bit $tmp392 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current346, end351);
                if ($tmp392.value) {
                {
                    panda$core$String* $tmp393 = panda$core$MutableString$convert$R$panda$core$String(result355);
                    return $tmp393;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp394, current346);
                panda$core$String$Index $tmp395 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp394);
                current346 = $tmp395.value;
            }
            $l383:;
            if ($tmp386) goto $l397; else goto $l398;
            $l397:;
            int64_t $tmp399 = $tmp377 - i374.value;
            if ($tmp379) goto $l400; else goto $l401;
            $l400:;
            if ($tmp399 >= $tmp378) goto $l396; else goto $l382;
            $l401:;
            if ($tmp399 > $tmp378) goto $l396; else goto $l382;
            $l398:;
            int64_t $tmp403 = i374.value - $tmp377;
            if ($tmp379) goto $l404; else goto $l405;
            $l404:;
            if ($tmp403 >= -$tmp378) goto $l396; else goto $l382;
            $l405:;
            if ($tmp403 > -$tmp378) goto $l396; else goto $l382;
            $l396:;
            i374.value += $tmp378;
            goto $l380;
            $l382:;
        }
        goto $l359;
        $l360:;
    }
    }
    else {
    {
        panda$core$Bit $tmp407 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp407.value);
        $l408:;
        panda$core$Bit $tmp410 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current346, end351);
        if (!$tmp410.value) goto $l409;
        {
            c411 = self->data[current346.value];
            panda$core$MutableString$append$panda$core$Char8(result355, c411);
            old412 = current346;
            panda$core$Int64 $tmp413 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
            current346 = $tmp413;
            int64_t $tmp414 = ((int64_t) c411.value) & 255;
            bool $tmp415 = $tmp414 >= 192;
            if (((panda$core$Bit) { $tmp415 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
                panda$core$Int64 $tmp416 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
                current346 = $tmp416;
            }
            }
            int64_t $tmp417 = ((int64_t) c411.value) & 255;
            bool $tmp418 = $tmp417 >= 224;
            if (((panda$core$Bit) { $tmp418 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
                panda$core$Int64 $tmp419 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
                current346 = $tmp419;
            }
            }
            int64_t $tmp420 = ((int64_t) c411.value) & 255;
            bool $tmp421 = $tmp420 >= 240;
            if (((panda$core$Bit) { $tmp421 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
            }
            }
            panda$core$Int64 $tmp422 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old412, ((panda$core$Int64) { 1 }));
            current346 = $tmp422;
            $l423:;
            int64_t $tmp426 = ((int64_t) self->data[current346.value].value) & 255;
            bool $tmp427 = $tmp426 >= 128;
            bool $tmp425 = $tmp427;
            if (!$tmp425) goto $l428;
            int64_t $tmp429 = ((int64_t) self->data[current346.value].value) & 255;
            bool $tmp430 = $tmp429 < 192;
            $tmp425 = $tmp430;
            $l428:;
            if (!((panda$core$Bit) { $tmp425 }).value) goto $l424;
            {
                panda$core$Int64 $tmp431 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
                current346 = $tmp431;
            }
            goto $l423;
            $l424:;
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp432, ((panda$core$Int64) { -1 }), step345, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp434 = $tmp432.start.value;
            panda$core$Int64 i433 = { $tmp434 };
            int64_t $tmp436 = $tmp432.end.value;
            int64_t $tmp437 = $tmp432.step.value;
            bool $tmp438 = $tmp432.inclusive.value;
            bool $tmp445 = $tmp437 > 0;
            if ($tmp445) goto $l443; else goto $l444;
            $l443:;
            if ($tmp438) goto $l446; else goto $l447;
            $l446:;
            if ($tmp434 <= $tmp436) goto $l439; else goto $l441;
            $l447:;
            if ($tmp434 < $tmp436) goto $l439; else goto $l441;
            $l444:;
            if ($tmp438) goto $l448; else goto $l449;
            $l448:;
            if ($tmp434 >= $tmp436) goto $l439; else goto $l441;
            $l449:;
            if ($tmp434 > $tmp436) goto $l439; else goto $l441;
            $l439:;
            {
                panda$core$Bit $tmp451 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current346, end351);
                if ($tmp451.value) {
                {
                    panda$core$String* $tmp452 = panda$core$MutableString$convert$R$panda$core$String(result355);
                    return $tmp452;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp453, current346);
                panda$core$String$Index $tmp454 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp453);
                current346 = $tmp454.value;
            }
            $l442:;
            if ($tmp445) goto $l456; else goto $l457;
            $l456:;
            int64_t $tmp458 = $tmp436 - i433.value;
            if ($tmp438) goto $l459; else goto $l460;
            $l459:;
            if ($tmp458 >= $tmp437) goto $l455; else goto $l441;
            $l460:;
            if ($tmp458 > $tmp437) goto $l455; else goto $l441;
            $l457:;
            int64_t $tmp462 = i433.value - $tmp436;
            if ($tmp438) goto $l463; else goto $l464;
            $l463:;
            if ($tmp462 >= -$tmp437) goto $l455; else goto $l441;
            $l464:;
            if ($tmp462 > -$tmp437) goto $l455; else goto $l441;
            $l455:;
            i433.value += $tmp437;
            goto $l439;
            $l441:;
        }
        goto $l408;
        $l409:;
    }
    }
    bool $tmp468 = p_r.inclusive.value;
    if ($tmp468) goto $l469;
    $tmp468 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l469:;
    panda$core$Bit $tmp470 = { $tmp468 };
    bool $tmp467 = $tmp470.value;
    if (!$tmp467) goto $l471;
    panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current346, end351);
    $tmp467 = $tmp472.value;
    $l471:;
    panda$core$Bit $tmp473 = { $tmp467 };
    bool $tmp466 = $tmp473.value;
    if (!$tmp466) goto $l474;
    panda$core$Bit $tmp475 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end351, self->_length);
    $tmp466 = $tmp475.value;
    $l474:;
    panda$core$Bit $tmp476 = { $tmp466 };
    if ($tmp476.value) {
    {
        c477 = self->data[current346.value];
        panda$core$MutableString$append$panda$core$Char8(result355, c477);
        panda$core$Int64 $tmp478 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
        current346 = $tmp478;
        int64_t $tmp479 = ((int64_t) c477.value) & 255;
        bool $tmp480 = $tmp479 >= 192;
        if (((panda$core$Bit) { $tmp480 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
            panda$core$Int64 $tmp481 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
            current346 = $tmp481;
        }
        }
        int64_t $tmp482 = ((int64_t) c477.value) & 255;
        bool $tmp483 = $tmp482 >= 224;
        if (((panda$core$Bit) { $tmp483 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
            panda$core$Int64 $tmp484 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current346, ((panda$core$Int64) { 1 }));
            current346 = $tmp484;
        }
        }
        int64_t $tmp485 = ((int64_t) c477.value) & 255;
        bool $tmp486 = $tmp485 >= 240;
        if (((panda$core$Bit) { $tmp486 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result355, self->data[current346.value]);
        }
        }
    }
    }
    panda$core$String* $tmp487 = panda$core$MutableString$convert$R$panda$core$String(result355);
    return $tmp487;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start488;
    panda$core$String$Index$nullable end491;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp494;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp489 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp490 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp489, ((panda$core$Int64) p_r.start.value));
        start488 = ((panda$core$String$Index$nullable) { $tmp490, true });
    }
    }
    else {
    {
        start488 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp492 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp493 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp492, ((panda$core$Int64) p_r.end.value));
        end491 = ((panda$core$String$Index$nullable) { $tmp493, true });
    }
    }
    else {
    {
        end491 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp494, start488, end491, ((panda$core$Int64$nullable) { p_r.step, true }), p_r.inclusive);
    panda$core$String* $tmp495 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp494);
    return $tmp495;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp496;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp496, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp498 = $tmp496.start.value;
    panda$core$Int64 i497 = { $tmp498 };
    int64_t $tmp500 = $tmp496.end.value;
    int64_t $tmp501 = $tmp496.step.value;
    bool $tmp502 = $tmp496.inclusive.value;
    bool $tmp509 = $tmp501 > 0;
    if ($tmp509) goto $l507; else goto $l508;
    $l507:;
    if ($tmp502) goto $l510; else goto $l511;
    $l510:;
    if ($tmp498 <= $tmp500) goto $l503; else goto $l505;
    $l511:;
    if ($tmp498 < $tmp500) goto $l503; else goto $l505;
    $l508:;
    if ($tmp502) goto $l512; else goto $l513;
    $l512:;
    if ($tmp498 >= $tmp500) goto $l503; else goto $l505;
    $l513:;
    if ($tmp498 > $tmp500) goto $l503; else goto $l505;
    $l503:;
    {
        panda$core$Bit $tmp515 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i497.value], p_c);
        if ($tmp515.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l506:;
    if ($tmp509) goto $l517; else goto $l518;
    $l517:;
    int64_t $tmp519 = $tmp500 - i497.value;
    if ($tmp502) goto $l520; else goto $l521;
    $l520:;
    if ($tmp519 >= $tmp501) goto $l516; else goto $l505;
    $l521:;
    if ($tmp519 > $tmp501) goto $l516; else goto $l505;
    $l518:;
    int64_t $tmp523 = i497.value - $tmp500;
    if ($tmp502) goto $l524; else goto $l525;
    $l524:;
    if ($tmp523 >= -$tmp501) goto $l516; else goto $l505;
    $l525:;
    if ($tmp523 > -$tmp501) goto $l516; else goto $l505;
    $l516:;
    i497.value += $tmp501;
    goto $l503;
    $l505:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp527 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp527.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp528 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp529 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp528);
    return $tmp529;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp531;
    panda$core$Range$LTpanda$core$Int64$GT $tmp551;
    panda$core$String$Index $tmp583;
    panda$core$Bit $tmp530 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp530.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp532 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp531, p_start.value, $tmp532, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp534 = $tmp531.start.value;
    panda$core$Int64 i533 = { $tmp534 };
    int64_t $tmp536 = $tmp531.end.value;
    int64_t $tmp537 = $tmp531.step.value;
    bool $tmp538 = $tmp531.inclusive.value;
    bool $tmp545 = $tmp537 > 0;
    if ($tmp545) goto $l543; else goto $l544;
    $l543:;
    if ($tmp538) goto $l546; else goto $l547;
    $l546:;
    if ($tmp534 <= $tmp536) goto $l539; else goto $l541;
    $l547:;
    if ($tmp534 < $tmp536) goto $l539; else goto $l541;
    $l544:;
    if ($tmp538) goto $l548; else goto $l549;
    $l548:;
    if ($tmp534 >= $tmp536) goto $l539; else goto $l541;
    $l549:;
    if ($tmp534 > $tmp536) goto $l539; else goto $l541;
    $l539:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp551, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp553 = $tmp551.start.value;
        panda$core$Int64 j552 = { $tmp553 };
        int64_t $tmp555 = $tmp551.end.value;
        int64_t $tmp556 = $tmp551.step.value;
        bool $tmp557 = $tmp551.inclusive.value;
        bool $tmp564 = $tmp556 > 0;
        if ($tmp564) goto $l562; else goto $l563;
        $l562:;
        if ($tmp557) goto $l565; else goto $l566;
        $l565:;
        if ($tmp553 <= $tmp555) goto $l558; else goto $l560;
        $l566:;
        if ($tmp553 < $tmp555) goto $l558; else goto $l560;
        $l563:;
        if ($tmp557) goto $l567; else goto $l568;
        $l567:;
        if ($tmp553 >= $tmp555) goto $l558; else goto $l560;
        $l568:;
        if ($tmp553 > $tmp555) goto $l558; else goto $l560;
        $l558:;
        {
            panda$core$Int64 $tmp570 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i533, j552);
            panda$core$Bit $tmp571 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp570.value], p_s->data[j552.value]);
            if ($tmp571.value) {
            {
                goto $l542;
            }
            }
        }
        $l561:;
        if ($tmp564) goto $l573; else goto $l574;
        $l573:;
        int64_t $tmp575 = $tmp555 - j552.value;
        if ($tmp557) goto $l576; else goto $l577;
        $l576:;
        if ($tmp575 >= $tmp556) goto $l572; else goto $l560;
        $l577:;
        if ($tmp575 > $tmp556) goto $l572; else goto $l560;
        $l574:;
        int64_t $tmp579 = j552.value - $tmp555;
        if ($tmp557) goto $l580; else goto $l581;
        $l580:;
        if ($tmp579 >= -$tmp556) goto $l572; else goto $l560;
        $l581:;
        if ($tmp579 > -$tmp556) goto $l572; else goto $l560;
        $l572:;
        j552.value += $tmp556;
        goto $l558;
        $l560:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp583, i533);
        return ((panda$core$String$Index$nullable) { $tmp583, true });
    }
    $l542:;
    if ($tmp545) goto $l585; else goto $l586;
    $l585:;
    int64_t $tmp587 = $tmp536 - i533.value;
    if ($tmp538) goto $l588; else goto $l589;
    $l588:;
    if ($tmp587 >= $tmp537) goto $l584; else goto $l541;
    $l589:;
    if ($tmp587 > $tmp537) goto $l584; else goto $l541;
    $l586:;
    int64_t $tmp591 = i533.value - $tmp536;
    if ($tmp538) goto $l592; else goto $l593;
    $l592:;
    if ($tmp591 >= -$tmp537) goto $l584; else goto $l541;
    $l593:;
    if ($tmp591 > -$tmp537) goto $l584; else goto $l541;
    $l584:;
    i533.value += $tmp537;
    goto $l539;
    $l541:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp595 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp596 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp595);
    return $tmp596;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos598;
    panda$core$Range$LTpanda$core$Int64$GT $tmp601;
    panda$core$Range$LTpanda$core$Int64$GT $tmp620;
    panda$core$String$Index $tmp652;
    panda$core$Bit $tmp597 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp597.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp599 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp600 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp599);
    startPos598 = $tmp600;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp601, startPos598, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp603 = $tmp601.start.value;
    panda$core$Int64 i602 = { $tmp603 };
    int64_t $tmp605 = $tmp601.end.value;
    int64_t $tmp606 = $tmp601.step.value;
    bool $tmp607 = $tmp601.inclusive.value;
    bool $tmp614 = $tmp606 > 0;
    if ($tmp614) goto $l612; else goto $l613;
    $l612:;
    if ($tmp607) goto $l615; else goto $l616;
    $l615:;
    if ($tmp603 <= $tmp605) goto $l608; else goto $l610;
    $l616:;
    if ($tmp603 < $tmp605) goto $l608; else goto $l610;
    $l613:;
    if ($tmp607) goto $l617; else goto $l618;
    $l617:;
    if ($tmp603 >= $tmp605) goto $l608; else goto $l610;
    $l618:;
    if ($tmp603 > $tmp605) goto $l608; else goto $l610;
    $l608:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp620, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp622 = $tmp620.start.value;
        panda$core$Int64 j621 = { $tmp622 };
        int64_t $tmp624 = $tmp620.end.value;
        int64_t $tmp625 = $tmp620.step.value;
        bool $tmp626 = $tmp620.inclusive.value;
        bool $tmp633 = $tmp625 > 0;
        if ($tmp633) goto $l631; else goto $l632;
        $l631:;
        if ($tmp626) goto $l634; else goto $l635;
        $l634:;
        if ($tmp622 <= $tmp624) goto $l627; else goto $l629;
        $l635:;
        if ($tmp622 < $tmp624) goto $l627; else goto $l629;
        $l632:;
        if ($tmp626) goto $l636; else goto $l637;
        $l636:;
        if ($tmp622 >= $tmp624) goto $l627; else goto $l629;
        $l637:;
        if ($tmp622 > $tmp624) goto $l627; else goto $l629;
        $l627:;
        {
            panda$core$Int64 $tmp639 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i602, j621);
            panda$core$Bit $tmp640 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp639.value], p_s->data[j621.value]);
            if ($tmp640.value) {
            {
                goto $l611;
            }
            }
        }
        $l630:;
        if ($tmp633) goto $l642; else goto $l643;
        $l642:;
        int64_t $tmp644 = $tmp624 - j621.value;
        if ($tmp626) goto $l645; else goto $l646;
        $l645:;
        if ($tmp644 >= $tmp625) goto $l641; else goto $l629;
        $l646:;
        if ($tmp644 > $tmp625) goto $l641; else goto $l629;
        $l643:;
        int64_t $tmp648 = j621.value - $tmp624;
        if ($tmp626) goto $l649; else goto $l650;
        $l649:;
        if ($tmp648 >= -$tmp625) goto $l641; else goto $l629;
        $l650:;
        if ($tmp648 > -$tmp625) goto $l641; else goto $l629;
        $l641:;
        j621.value += $tmp625;
        goto $l627;
        $l629:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp652, i602);
        return ((panda$core$String$Index$nullable) { $tmp652, true });
    }
    $l611:;
    if ($tmp614) goto $l654; else goto $l655;
    $l654:;
    int64_t $tmp656 = $tmp605 - i602.value;
    if ($tmp607) goto $l657; else goto $l658;
    $l657:;
    if ($tmp656 >= $tmp606) goto $l653; else goto $l610;
    $l658:;
    if ($tmp656 > $tmp606) goto $l653; else goto $l610;
    $l655:;
    int64_t $tmp660 = i602.value - $tmp605;
    if ($tmp607) goto $l661; else goto $l662;
    $l661:;
    if ($tmp660 >= -$tmp606) goto $l653; else goto $l610;
    $l662:;
    if ($tmp660 > -$tmp606) goto $l653; else goto $l610;
    $l653:;
    i602.value += $tmp606;
    goto $l608;
    $l610:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result664;
    panda$core$String$Index index667;
    panda$core$String$Index$nullable nextIndex671;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp673;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp675;
    panda$core$String$Index $tmp677;
    panda$core$MutableString* $tmp665 = (panda$core$MutableString*) malloc(40);
    $tmp665->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp665->refCount.value = 1;
    panda$core$MutableString$init($tmp665);
    result664 = $tmp665;
    panda$core$String$Index $tmp668 = panda$core$String$start$R$panda$core$String$Index(self);
    index667 = $tmp668;
    $l669:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp672 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index667);
        nextIndex671 = $tmp672;
        if (((panda$core$Bit) { !nextIndex671.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp673, ((panda$core$String$Index$nullable) { index667, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp674 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp673);
            panda$core$MutableString$append$panda$core$String(result664, $tmp674);
            goto $l670;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp675, ((panda$core$String$Index$nullable) { index667, true }), nextIndex671, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp676 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp675);
        panda$core$MutableString$append$panda$core$String(result664, $tmp676);
        panda$core$MutableString$append$panda$core$String(result664, p_replacement);
        panda$core$Int64 $tmp678 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex671.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp677, $tmp678);
        index667 = $tmp677;
    }
    }
    $l670:;
    panda$core$String* $tmp679 = panda$core$MutableString$convert$R$panda$core$String(result664);
    return $tmp679;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp680;
    panda$core$String$Index$init$panda$core$Int64(&$tmp680, ((panda$core$Int64) { 0 }));
    return $tmp680;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp681;
    panda$core$String$Index$init$panda$core$Int64(&$tmp681, self->_length);
    return $tmp681;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c683;
    panda$core$String$Index $tmp686;
    panda$core$String$Index $tmp689;
    panda$core$String$Index $tmp692;
    panda$core$String$Index $tmp694;
    panda$core$Bit $tmp682 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp682.value);
    int64_t $tmp684 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c683 = $tmp684;
    bool $tmp685 = c683 >= 240;
    if (((panda$core$Bit) { $tmp685 }).value) {
    {
        panda$core$Int64 $tmp687 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp686, $tmp687);
        return $tmp686;
    }
    }
    bool $tmp688 = c683 >= 224;
    if (((panda$core$Bit) { $tmp688 }).value) {
    {
        panda$core$Int64 $tmp690 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp689, $tmp690);
        return $tmp689;
    }
    }
    bool $tmp691 = c683 >= 192;
    if (((panda$core$Bit) { $tmp691 }).value) {
    {
        panda$core$Int64 $tmp693 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp692, $tmp693);
        return $tmp692;
    }
    }
    panda$core$Int64 $tmp695 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp694, $tmp695);
    return $tmp694;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue697;
    panda$core$String$Index $tmp708;
    panda$core$Bit $tmp696 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp696.value);
    panda$core$Int64 $tmp698 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue697 = $tmp698;
    $l699:;
    int64_t $tmp702 = ((int64_t) self->data[newValue697.value].value) & 255;
    bool $tmp703 = $tmp702 >= 128;
    bool $tmp701 = $tmp703;
    if (!$tmp701) goto $l704;
    int64_t $tmp705 = ((int64_t) self->data[newValue697.value].value) & 255;
    bool $tmp706 = $tmp705 < 192;
    $tmp701 = $tmp706;
    $l704:;
    if (!((panda$core$Bit) { $tmp701 }).value) goto $l700;
    {
        panda$core$Int64 $tmp707 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue697, ((panda$core$Int64) { 1 }));
        newValue697 = $tmp707;
    }
    goto $l699;
    $l700:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp708, newValue697);
    return $tmp708;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result709;
    panda$core$Range$LTpanda$core$Int64$GT $tmp711;
    panda$core$Range$LTpanda$core$Int64$GT $tmp742;
    result709 = p_index;
    panda$core$Bit $tmp710 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp710.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp711, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp713 = $tmp711.start.value;
        panda$core$Int64 i712 = { $tmp713 };
        int64_t $tmp715 = $tmp711.end.value;
        int64_t $tmp716 = $tmp711.step.value;
        bool $tmp717 = $tmp711.inclusive.value;
        bool $tmp724 = $tmp716 > 0;
        if ($tmp724) goto $l722; else goto $l723;
        $l722:;
        if ($tmp717) goto $l725; else goto $l726;
        $l725:;
        if ($tmp713 <= $tmp715) goto $l718; else goto $l720;
        $l726:;
        if ($tmp713 < $tmp715) goto $l718; else goto $l720;
        $l723:;
        if ($tmp717) goto $l727; else goto $l728;
        $l727:;
        if ($tmp713 >= $tmp715) goto $l718; else goto $l720;
        $l728:;
        if ($tmp713 > $tmp715) goto $l718; else goto $l720;
        $l718:;
        {
            panda$core$String$Index $tmp730 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result709);
            result709 = $tmp730;
        }
        $l721:;
        if ($tmp724) goto $l732; else goto $l733;
        $l732:;
        int64_t $tmp734 = $tmp715 - i712.value;
        if ($tmp717) goto $l735; else goto $l736;
        $l735:;
        if ($tmp734 >= $tmp716) goto $l731; else goto $l720;
        $l736:;
        if ($tmp734 > $tmp716) goto $l731; else goto $l720;
        $l733:;
        int64_t $tmp738 = i712.value - $tmp715;
        if ($tmp717) goto $l739; else goto $l740;
        $l739:;
        if ($tmp738 >= -$tmp716) goto $l731; else goto $l720;
        $l740:;
        if ($tmp738 > -$tmp716) goto $l731; else goto $l720;
        $l731:;
        i712.value += $tmp716;
        goto $l718;
        $l720:;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp742, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp744 = $tmp742.start.value;
        panda$core$Int64 i743 = { $tmp744 };
        int64_t $tmp746 = $tmp742.end.value;
        int64_t $tmp747 = $tmp742.step.value;
        bool $tmp748 = $tmp742.inclusive.value;
        bool $tmp755 = $tmp747 > 0;
        if ($tmp755) goto $l753; else goto $l754;
        $l753:;
        if ($tmp748) goto $l756; else goto $l757;
        $l756:;
        if ($tmp744 <= $tmp746) goto $l749; else goto $l751;
        $l757:;
        if ($tmp744 < $tmp746) goto $l749; else goto $l751;
        $l754:;
        if ($tmp748) goto $l758; else goto $l759;
        $l758:;
        if ($tmp744 >= $tmp746) goto $l749; else goto $l751;
        $l759:;
        if ($tmp744 > $tmp746) goto $l749; else goto $l751;
        $l749:;
        {
            panda$core$String$Index $tmp761 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result709);
            result709 = $tmp761;
        }
        $l752:;
        if ($tmp755) goto $l763; else goto $l764;
        $l763:;
        int64_t $tmp765 = $tmp746 - i743.value;
        if ($tmp748) goto $l766; else goto $l767;
        $l766:;
        if ($tmp765 >= $tmp747) goto $l762; else goto $l751;
        $l767:;
        if ($tmp765 > $tmp747) goto $l762; else goto $l751;
        $l764:;
        int64_t $tmp769 = i743.value - $tmp746;
        if ($tmp748) goto $l770; else goto $l771;
        $l770:;
        if ($tmp769 >= -$tmp747) goto $l762; else goto $l751;
        $l771:;
        if ($tmp769 > -$tmp747) goto $l762; else goto $l751;
        $l762:;
        i743.value += $tmp747;
        goto $l749;
        $l751:;
    }
    }
    return result709;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp773 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp773;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result774;
    panda$core$String$Index index777;
    panda$core$String$Index$nullable nextIndex781;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp790;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp792;
    panda$collections$Array* $tmp775 = (panda$collections$Array*) malloc(40);
    $tmp775->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp775->refCount.value = 1;
    panda$collections$Array$init($tmp775);
    result774 = $tmp775;
    panda$core$String$Index $tmp778 = panda$core$String$start$R$panda$core$String$Index(self);
    index777 = $tmp778;
    $l779:;
    while (true) {
    {
        panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp782.value) {
        {
            panda$core$String$Index $tmp783 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index777);
            nextIndex781 = ((panda$core$String$Index$nullable) { $tmp783, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp784 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index777);
            nextIndex781 = $tmp784;
        }
        }
        bool $tmp785 = ((panda$core$Bit) { !nextIndex781.nonnull }).value;
        if ($tmp785) goto $l786;
        panda$core$Int64 $tmp787 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result774->count, $tmp787);
        $tmp785 = $tmp788.value;
        $l786:;
        panda$core$Bit $tmp789 = { $tmp785 };
        if ($tmp789.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp790, ((panda$core$String$Index$nullable) { index777, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp791 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp790);
            panda$collections$Array$add$panda$collections$Array$T(result774, ((panda$core$Object*) $tmp791));
            goto $l780;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp792, ((panda$core$String$Index$nullable) { index777, true }), nextIndex781, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp793 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp792);
        panda$collections$Array$add$panda$collections$Array$T(result774, ((panda$core$Object*) $tmp793));
        panda$core$String$Index $tmp794 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex781.value), p_delimiter->_length);
        index777 = $tmp794;
    }
    }
    $l780:;
    return result774;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result796;
    panda$core$Int64 start797;
    panda$core$Char8 $tmp798;
    panda$core$Range$LTpanda$core$Int64$GT $tmp800;
    panda$core$Int64 digit819;
    panda$core$Char8 $tmp839;
    panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp795.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result796 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp798, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp799 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp798);
    if ($tmp799.value) {
    {
        start797 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start797 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp800, start797, self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp802 = $tmp800.start.value;
    panda$core$Int64 i801 = { $tmp802 };
    int64_t $tmp804 = $tmp800.end.value;
    int64_t $tmp805 = $tmp800.step.value;
    bool $tmp806 = $tmp800.inclusive.value;
    bool $tmp813 = $tmp805 > 0;
    if ($tmp813) goto $l811; else goto $l812;
    $l811:;
    if ($tmp806) goto $l814; else goto $l815;
    $l814:;
    if ($tmp802 <= $tmp804) goto $l807; else goto $l809;
    $l815:;
    if ($tmp802 < $tmp804) goto $l807; else goto $l809;
    $l812:;
    if ($tmp806) goto $l816; else goto $l817;
    $l816:;
    if ($tmp802 >= $tmp804) goto $l807; else goto $l809;
    $l817:;
    if ($tmp802 > $tmp804) goto $l807; else goto $l809;
    $l807:;
    {
        panda$core$Int64 $tmp820 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i801.value].value) }), ((panda$core$Int64) { 48 }));
        digit819 = $tmp820;
        panda$core$Bit $tmp822 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit819, ((panda$core$Int64) { 0 }));
        bool $tmp821 = $tmp822.value;
        if ($tmp821) goto $l823;
        panda$core$Bit $tmp824 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit819, ((panda$core$Int64) { 9 }));
        $tmp821 = $tmp824.value;
        $l823:;
        panda$core$Bit $tmp825 = { $tmp821 };
        if ($tmp825.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp826 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result796, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp827 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp826, digit819);
        result796 = $tmp827;
    }
    $l810:;
    if ($tmp813) goto $l829; else goto $l830;
    $l829:;
    int64_t $tmp831 = $tmp804 - i801.value;
    if ($tmp806) goto $l832; else goto $l833;
    $l832:;
    if ($tmp831 >= $tmp805) goto $l828; else goto $l809;
    $l833:;
    if ($tmp831 > $tmp805) goto $l828; else goto $l809;
    $l830:;
    int64_t $tmp835 = i801.value - $tmp804;
    if ($tmp806) goto $l836; else goto $l837;
    $l836:;
    if ($tmp835 >= -$tmp805) goto $l828; else goto $l809;
    $l837:;
    if ($tmp835 > -$tmp805) goto $l828; else goto $l809;
    $l828:;
    i801.value += $tmp805;
    goto $l807;
    $l809:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp839, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp840 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp839);
    if ($tmp840.value) {
    {
        panda$core$Int64 $tmp841 = panda$core$Int64$$SUB$R$panda$core$Int64(result796);
        result796 = $tmp841;
    }
    }
    return ((panda$core$Int64$nullable) { result796, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result843;
    panda$core$Range$LTpanda$core$Int64$GT $tmp844;
    panda$core$UInt64 digit863;
    panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp842.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result843 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp844, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp846 = $tmp844.start.value;
    panda$core$Int64 i845 = { $tmp846 };
    int64_t $tmp848 = $tmp844.end.value;
    int64_t $tmp849 = $tmp844.step.value;
    bool $tmp850 = $tmp844.inclusive.value;
    bool $tmp857 = $tmp849 > 0;
    if ($tmp857) goto $l855; else goto $l856;
    $l855:;
    if ($tmp850) goto $l858; else goto $l859;
    $l858:;
    if ($tmp846 <= $tmp848) goto $l851; else goto $l853;
    $l859:;
    if ($tmp846 < $tmp848) goto $l851; else goto $l853;
    $l856:;
    if ($tmp850) goto $l860; else goto $l861;
    $l860:;
    if ($tmp846 >= $tmp848) goto $l851; else goto $l853;
    $l861:;
    if ($tmp846 > $tmp848) goto $l851; else goto $l853;
    $l851:;
    {
        panda$core$UInt64 $tmp864 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i845.value].value) }), ((panda$core$UInt64) { 48 }));
        digit863 = $tmp864;
        panda$core$Bit $tmp866 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit863, ((panda$core$UInt64) { 0 }));
        bool $tmp865 = $tmp866.value;
        if ($tmp865) goto $l867;
        panda$core$Bit $tmp868 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit863, ((panda$core$UInt64) { 9 }));
        $tmp865 = $tmp868.value;
        $l867:;
        panda$core$Bit $tmp869 = { $tmp865 };
        if ($tmp869.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp870 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result843, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp871 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp870, digit863);
        result843 = $tmp871;
    }
    $l854:;
    if ($tmp857) goto $l873; else goto $l874;
    $l873:;
    int64_t $tmp875 = $tmp848 - i845.value;
    if ($tmp850) goto $l876; else goto $l877;
    $l876:;
    if ($tmp875 >= $tmp849) goto $l872; else goto $l853;
    $l877:;
    if ($tmp875 > $tmp849) goto $l872; else goto $l853;
    $l874:;
    int64_t $tmp879 = i845.value - $tmp848;
    if ($tmp850) goto $l880; else goto $l881;
    $l880:;
    if ($tmp879 >= -$tmp849) goto $l872; else goto $l853;
    $l881:;
    if ($tmp879 > -$tmp849) goto $l872; else goto $l853;
    $l872:;
    i845.value += $tmp849;
    goto $l851;
    $l853:;
    return ((panda$core$UInt64$nullable) { result843, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result883;
    panda$core$Range$LTpanda$core$Int64$GT $tmp884;
    result883 = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp884, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp886 = $tmp884.start.value;
    panda$core$Int64 i885 = { $tmp886 };
    int64_t $tmp888 = $tmp884.end.value;
    int64_t $tmp889 = $tmp884.step.value;
    bool $tmp890 = $tmp884.inclusive.value;
    bool $tmp897 = $tmp889 > 0;
    if ($tmp897) goto $l895; else goto $l896;
    $l895:;
    if ($tmp890) goto $l898; else goto $l899;
    $l898:;
    if ($tmp886 <= $tmp888) goto $l891; else goto $l893;
    $l899:;
    if ($tmp886 < $tmp888) goto $l891; else goto $l893;
    $l896:;
    if ($tmp890) goto $l900; else goto $l901;
    $l900:;
    if ($tmp886 >= $tmp888) goto $l891; else goto $l893;
    $l901:;
    if ($tmp886 > $tmp888) goto $l891; else goto $l893;
    $l891:;
    {
        panda$core$Int64 $tmp903 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result883, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp904 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp903, ((panda$core$Int64) { ((int64_t) self->data[i885.value].value) }));
        result883 = $tmp904;
    }
    $l894:;
    if ($tmp897) goto $l906; else goto $l907;
    $l906:;
    int64_t $tmp908 = $tmp888 - i885.value;
    if ($tmp890) goto $l909; else goto $l910;
    $l909:;
    if ($tmp908 >= $tmp889) goto $l905; else goto $l893;
    $l910:;
    if ($tmp908 > $tmp889) goto $l905; else goto $l893;
    $l907:;
    int64_t $tmp912 = i885.value - $tmp888;
    if ($tmp890) goto $l913; else goto $l914;
    $l913:;
    if ($tmp912 >= -$tmp889) goto $l905; else goto $l893;
    $l914:;
    if ($tmp912 > -$tmp889) goto $l905; else goto $l893;
    $l905:;
    i885.value += $tmp889;
    goto $l891;
    $l893:;
    return result883;
}

