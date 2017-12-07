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
    panda$core$Char32 $tmp304;
    panda$core$Char32 $tmp318;
    panda$core$Char32 $tmp335;
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
        panda$core$Int32 $tmp298 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result291, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp299 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp298, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp300 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp301 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp300.value]);
        panda$core$Int32 $tmp302 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp301, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp303 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp299, $tmp302);
        result291 = $tmp303;
        panda$core$Char32$init$panda$core$Int32(&$tmp304, result291);
        return $tmp304;
    }
    }
    int64_t $tmp305 = ((int64_t) c290.value) & 255;
    bool $tmp306 = $tmp305 < 240;
    if (((panda$core$Bit) { $tmp306 }).value) {
    {
        panda$core$Int32 $tmp307 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result291, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp308 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp307, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp309 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp310 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp309.value]);
        panda$core$Int32 $tmp311 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp310, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp312 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp311, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp313 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp308, $tmp312);
        panda$core$Int64 $tmp314 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp315 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp314.value]);
        panda$core$Int32 $tmp316 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp315, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp317 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp313, $tmp316);
        result291 = $tmp317;
        panda$core$Char32$init$panda$core$Int32(&$tmp318, result291);
        return $tmp318;
    }
    }
    panda$core$Int32 $tmp319 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result291, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp320 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp319, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp322 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp321.value]);
    panda$core$Int32 $tmp323 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp322, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp324 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp323, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp325 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp320, $tmp324);
    panda$core$Int64 $tmp326 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp327 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp326.value]);
    panda$core$Int32 $tmp328 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp327, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp329 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp328, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp330 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp325, $tmp329);
    panda$core$Int64 $tmp331 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx289, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp332 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp331.value]);
    panda$core$Int32 $tmp333 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp332, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp334 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp330, $tmp333);
    result291 = $tmp334;
    panda$core$Char32$init$panda$core$Int32(&$tmp335, result291);
    return $tmp335;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp336 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp337 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp336, p_index);
    panda$core$Char32 $tmp338 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp337);
    return $tmp338;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 step339;
    panda$core$Int64 current340;
    panda$core$Int64 end345;
    panda$core$MutableString* result349;
    panda$core$Char8 c356;
    panda$core$Range$LTpanda$core$Int64$GT $tmp367;
    panda$core$String$Index $tmp388;
    panda$core$Char8 c404;
    panda$core$Int64 old405;
    panda$core$Range$LTpanda$core$Int64$GT $tmp425;
    panda$core$String$Index $tmp446;
    panda$core$Char8 c470;
    step339 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current340 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp341 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step339, ((panda$core$Int64) { 0 }));
    if ($tmp341.value) {
    {
        panda$core$String$Index $tmp342 = panda$core$String$start$R$panda$core$String$Index(self);
        current340 = $tmp342.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp343 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp344 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp343);
        current340 = $tmp344.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end345 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp346 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step339, ((panda$core$Int64) { 0 }));
    if ($tmp346.value) {
    {
        panda$core$String$Index $tmp347 = panda$core$String$end$R$panda$core$String$Index(self);
        end345 = $tmp347.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp348 = panda$core$String$start$R$panda$core$String$Index(self);
        end345 = $tmp348.value;
    }
    }
    }
    panda$core$MutableString* $tmp350 = (panda$core$MutableString*) malloc(40);
    $tmp350->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp350->refCount.value = 1;
    panda$core$MutableString$init($tmp350);
    result349 = $tmp350;
    panda$core$Bit $tmp352 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp352.value) {
    {
        $l353:;
        panda$core$Bit $tmp355 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current340, end345);
        if (!$tmp355.value) goto $l354;
        {
            c356 = self->data[current340.value];
            panda$core$MutableString$append$panda$core$Char8(result349, c356);
            panda$core$Int64 $tmp357 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
            current340 = $tmp357;
            int64_t $tmp358 = ((int64_t) c356.value) & 255;
            bool $tmp359 = $tmp358 >= 192;
            if (((panda$core$Bit) { $tmp359 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
                panda$core$Int64 $tmp360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
                current340 = $tmp360;
            }
            }
            int64_t $tmp361 = ((int64_t) c356.value) & 255;
            bool $tmp362 = $tmp361 >= 224;
            if (((panda$core$Bit) { $tmp362 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
                panda$core$Int64 $tmp363 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
                current340 = $tmp363;
            }
            }
            int64_t $tmp364 = ((int64_t) c356.value) & 255;
            bool $tmp365 = $tmp364 >= 240;
            if (((panda$core$Bit) { $tmp365 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
                panda$core$Int64 $tmp366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
                current340 = $tmp366;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp367, ((panda$core$Int64) { 1 }), step339, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp369 = $tmp367.start.value;
            panda$core$Int64 i368 = { $tmp369 };
            int64_t $tmp371 = $tmp367.end.value;
            int64_t $tmp372 = $tmp367.step.value;
            bool $tmp373 = $tmp367.inclusive.value;
            bool $tmp380 = $tmp372 > 0;
            if ($tmp380) goto $l378; else goto $l379;
            $l378:;
            if ($tmp373) goto $l381; else goto $l382;
            $l381:;
            if ($tmp369 <= $tmp371) goto $l374; else goto $l376;
            $l382:;
            if ($tmp369 < $tmp371) goto $l374; else goto $l376;
            $l379:;
            if ($tmp373) goto $l383; else goto $l384;
            $l383:;
            if ($tmp369 >= $tmp371) goto $l374; else goto $l376;
            $l384:;
            if ($tmp369 > $tmp371) goto $l374; else goto $l376;
            $l374:;
            {
                panda$core$Bit $tmp386 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current340, end345);
                if ($tmp386.value) {
                {
                    panda$core$String* $tmp387 = panda$core$MutableString$convert$R$panda$core$String(result349);
                    return $tmp387;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp388, current340);
                panda$core$String$Index $tmp389 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp388);
                current340 = $tmp389.value;
            }
            $l377:;
            if ($tmp380) goto $l391; else goto $l392;
            $l391:;
            int64_t $tmp393 = $tmp371 - i368.value;
            if ($tmp373) goto $l394; else goto $l395;
            $l394:;
            if ($tmp393 >= $tmp372) goto $l390; else goto $l376;
            $l395:;
            if ($tmp393 > $tmp372) goto $l390; else goto $l376;
            $l392:;
            int64_t $tmp397 = i368.value - $tmp371;
            if ($tmp373) goto $l398; else goto $l399;
            $l398:;
            if ($tmp397 >= -$tmp372) goto $l390; else goto $l376;
            $l399:;
            if ($tmp397 > -$tmp372) goto $l390; else goto $l376;
            $l390:;
            i368.value += $tmp372;
            goto $l374;
            $l376:;
        }
        goto $l353;
        $l354:;
    }
    }
    else {
    {
        $l401:;
        panda$core$Bit $tmp403 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current340, end345);
        if (!$tmp403.value) goto $l402;
        {
            c404 = self->data[current340.value];
            panda$core$MutableString$append$panda$core$Char8(result349, c404);
            old405 = current340;
            panda$core$Int64 $tmp406 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
            current340 = $tmp406;
            int64_t $tmp407 = ((int64_t) c404.value) & 255;
            bool $tmp408 = $tmp407 >= 192;
            if (((panda$core$Bit) { $tmp408 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
                panda$core$Int64 $tmp409 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
                current340 = $tmp409;
            }
            }
            int64_t $tmp410 = ((int64_t) c404.value) & 255;
            bool $tmp411 = $tmp410 >= 224;
            if (((panda$core$Bit) { $tmp411 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
                panda$core$Int64 $tmp412 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
                current340 = $tmp412;
            }
            }
            int64_t $tmp413 = ((int64_t) c404.value) & 255;
            bool $tmp414 = $tmp413 >= 240;
            if (((panda$core$Bit) { $tmp414 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
            }
            }
            panda$core$Int64 $tmp415 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old405, ((panda$core$Int64) { 1 }));
            current340 = $tmp415;
            $l416:;
            int64_t $tmp419 = ((int64_t) self->data[current340.value].value) & 255;
            bool $tmp420 = $tmp419 >= 128;
            bool $tmp418 = $tmp420;
            if (!$tmp418) goto $l421;
            int64_t $tmp422 = ((int64_t) self->data[current340.value].value) & 255;
            bool $tmp423 = $tmp422 < 192;
            $tmp418 = $tmp423;
            $l421:;
            if (!((panda$core$Bit) { $tmp418 }).value) goto $l417;
            {
                panda$core$Int64 $tmp424 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
                current340 = $tmp424;
            }
            goto $l416;
            $l417:;
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp425, ((panda$core$Int64) { -1 }), step339, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp427 = $tmp425.start.value;
            panda$core$Int64 i426 = { $tmp427 };
            int64_t $tmp429 = $tmp425.end.value;
            int64_t $tmp430 = $tmp425.step.value;
            bool $tmp431 = $tmp425.inclusive.value;
            bool $tmp438 = $tmp430 > 0;
            if ($tmp438) goto $l436; else goto $l437;
            $l436:;
            if ($tmp431) goto $l439; else goto $l440;
            $l439:;
            if ($tmp427 <= $tmp429) goto $l432; else goto $l434;
            $l440:;
            if ($tmp427 < $tmp429) goto $l432; else goto $l434;
            $l437:;
            if ($tmp431) goto $l441; else goto $l442;
            $l441:;
            if ($tmp427 >= $tmp429) goto $l432; else goto $l434;
            $l442:;
            if ($tmp427 > $tmp429) goto $l432; else goto $l434;
            $l432:;
            {
                panda$core$Bit $tmp444 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current340, end345);
                if ($tmp444.value) {
                {
                    panda$core$String* $tmp445 = panda$core$MutableString$convert$R$panda$core$String(result349);
                    return $tmp445;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp446, current340);
                panda$core$String$Index $tmp447 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp446);
                current340 = $tmp447.value;
            }
            $l435:;
            if ($tmp438) goto $l449; else goto $l450;
            $l449:;
            int64_t $tmp451 = $tmp429 - i426.value;
            if ($tmp431) goto $l452; else goto $l453;
            $l452:;
            if ($tmp451 >= $tmp430) goto $l448; else goto $l434;
            $l453:;
            if ($tmp451 > $tmp430) goto $l448; else goto $l434;
            $l450:;
            int64_t $tmp455 = i426.value - $tmp429;
            if ($tmp431) goto $l456; else goto $l457;
            $l456:;
            if ($tmp455 >= -$tmp430) goto $l448; else goto $l434;
            $l457:;
            if ($tmp455 > -$tmp430) goto $l448; else goto $l434;
            $l448:;
            i426.value += $tmp430;
            goto $l432;
            $l434:;
        }
        goto $l401;
        $l402:;
    }
    }
    bool $tmp461 = p_r.inclusive.value;
    if ($tmp461) goto $l462;
    $tmp461 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l462:;
    panda$core$Bit $tmp463 = { $tmp461 };
    bool $tmp460 = $tmp463.value;
    if (!$tmp460) goto $l464;
    panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current340, end345);
    $tmp460 = $tmp465.value;
    $l464:;
    panda$core$Bit $tmp466 = { $tmp460 };
    bool $tmp459 = $tmp466.value;
    if (!$tmp459) goto $l467;
    panda$core$Bit $tmp468 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end345, self->_length);
    $tmp459 = $tmp468.value;
    $l467:;
    panda$core$Bit $tmp469 = { $tmp459 };
    if ($tmp469.value) {
    {
        c470 = self->data[current340.value];
        panda$core$MutableString$append$panda$core$Char8(result349, c470);
        panda$core$Int64 $tmp471 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
        current340 = $tmp471;
        int64_t $tmp472 = ((int64_t) c470.value) & 255;
        bool $tmp473 = $tmp472 >= 192;
        if (((panda$core$Bit) { $tmp473 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
            panda$core$Int64 $tmp474 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
            current340 = $tmp474;
        }
        }
        int64_t $tmp475 = ((int64_t) c470.value) & 255;
        bool $tmp476 = $tmp475 >= 224;
        if (((panda$core$Bit) { $tmp476 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
            panda$core$Int64 $tmp477 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current340, ((panda$core$Int64) { 1 }));
            current340 = $tmp477;
        }
        }
        int64_t $tmp478 = ((int64_t) c470.value) & 255;
        bool $tmp479 = $tmp478 >= 240;
        if (((panda$core$Bit) { $tmp479 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result349, self->data[current340.value]);
        }
        }
    }
    }
    panda$core$String* $tmp480 = panda$core$MutableString$convert$R$panda$core$String(result349);
    return $tmp480;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start481;
    panda$core$String$Index$nullable end484;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp487;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp482 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp483 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp482, ((panda$core$Int64) p_r.start.value));
        start481 = ((panda$core$String$Index$nullable) { $tmp483, true });
    }
    }
    else {
    {
        start481 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp485 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp486 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp485, ((panda$core$Int64) p_r.end.value));
        end484 = ((panda$core$String$Index$nullable) { $tmp486, true });
    }
    }
    else {
    {
        end484 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp487, start481, end484, ((panda$core$Int64$nullable) { p_r.step, true }), p_r.inclusive);
    panda$core$String* $tmp488 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp487);
    return $tmp488;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp489;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp489, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp491 = $tmp489.start.value;
    panda$core$Int64 i490 = { $tmp491 };
    int64_t $tmp493 = $tmp489.end.value;
    int64_t $tmp494 = $tmp489.step.value;
    bool $tmp495 = $tmp489.inclusive.value;
    bool $tmp502 = $tmp494 > 0;
    if ($tmp502) goto $l500; else goto $l501;
    $l500:;
    if ($tmp495) goto $l503; else goto $l504;
    $l503:;
    if ($tmp491 <= $tmp493) goto $l496; else goto $l498;
    $l504:;
    if ($tmp491 < $tmp493) goto $l496; else goto $l498;
    $l501:;
    if ($tmp495) goto $l505; else goto $l506;
    $l505:;
    if ($tmp491 >= $tmp493) goto $l496; else goto $l498;
    $l506:;
    if ($tmp491 > $tmp493) goto $l496; else goto $l498;
    $l496:;
    {
        panda$core$Bit $tmp508 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i490.value], p_c);
        if ($tmp508.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l499:;
    if ($tmp502) goto $l510; else goto $l511;
    $l510:;
    int64_t $tmp512 = $tmp493 - i490.value;
    if ($tmp495) goto $l513; else goto $l514;
    $l513:;
    if ($tmp512 >= $tmp494) goto $l509; else goto $l498;
    $l514:;
    if ($tmp512 > $tmp494) goto $l509; else goto $l498;
    $l511:;
    int64_t $tmp516 = i490.value - $tmp493;
    if ($tmp495) goto $l517; else goto $l518;
    $l517:;
    if ($tmp516 >= -$tmp494) goto $l509; else goto $l498;
    $l518:;
    if ($tmp516 > -$tmp494) goto $l509; else goto $l498;
    $l509:;
    i490.value += $tmp494;
    goto $l496;
    $l498:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp520 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp520.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp521 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp522 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp521);
    return $tmp522;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp524;
    panda$core$Range$LTpanda$core$Int64$GT $tmp544;
    panda$core$String$Index $tmp576;
    panda$core$Bit $tmp523 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp523.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp525 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp524, p_start.value, $tmp525, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp527 = $tmp524.start.value;
    panda$core$Int64 i526 = { $tmp527 };
    int64_t $tmp529 = $tmp524.end.value;
    int64_t $tmp530 = $tmp524.step.value;
    bool $tmp531 = $tmp524.inclusive.value;
    bool $tmp538 = $tmp530 > 0;
    if ($tmp538) goto $l536; else goto $l537;
    $l536:;
    if ($tmp531) goto $l539; else goto $l540;
    $l539:;
    if ($tmp527 <= $tmp529) goto $l532; else goto $l534;
    $l540:;
    if ($tmp527 < $tmp529) goto $l532; else goto $l534;
    $l537:;
    if ($tmp531) goto $l541; else goto $l542;
    $l541:;
    if ($tmp527 >= $tmp529) goto $l532; else goto $l534;
    $l542:;
    if ($tmp527 > $tmp529) goto $l532; else goto $l534;
    $l532:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp544, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp546 = $tmp544.start.value;
        panda$core$Int64 j545 = { $tmp546 };
        int64_t $tmp548 = $tmp544.end.value;
        int64_t $tmp549 = $tmp544.step.value;
        bool $tmp550 = $tmp544.inclusive.value;
        bool $tmp557 = $tmp549 > 0;
        if ($tmp557) goto $l555; else goto $l556;
        $l555:;
        if ($tmp550) goto $l558; else goto $l559;
        $l558:;
        if ($tmp546 <= $tmp548) goto $l551; else goto $l553;
        $l559:;
        if ($tmp546 < $tmp548) goto $l551; else goto $l553;
        $l556:;
        if ($tmp550) goto $l560; else goto $l561;
        $l560:;
        if ($tmp546 >= $tmp548) goto $l551; else goto $l553;
        $l561:;
        if ($tmp546 > $tmp548) goto $l551; else goto $l553;
        $l551:;
        {
            panda$core$Int64 $tmp563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i526, j545);
            panda$core$Bit $tmp564 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp563.value], p_s->data[j545.value]);
            if ($tmp564.value) {
            {
                goto $l535;
            }
            }
        }
        $l554:;
        if ($tmp557) goto $l566; else goto $l567;
        $l566:;
        int64_t $tmp568 = $tmp548 - j545.value;
        if ($tmp550) goto $l569; else goto $l570;
        $l569:;
        if ($tmp568 >= $tmp549) goto $l565; else goto $l553;
        $l570:;
        if ($tmp568 > $tmp549) goto $l565; else goto $l553;
        $l567:;
        int64_t $tmp572 = j545.value - $tmp548;
        if ($tmp550) goto $l573; else goto $l574;
        $l573:;
        if ($tmp572 >= -$tmp549) goto $l565; else goto $l553;
        $l574:;
        if ($tmp572 > -$tmp549) goto $l565; else goto $l553;
        $l565:;
        j545.value += $tmp549;
        goto $l551;
        $l553:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp576, i526);
        return ((panda$core$String$Index$nullable) { $tmp576, true });
    }
    $l535:;
    if ($tmp538) goto $l578; else goto $l579;
    $l578:;
    int64_t $tmp580 = $tmp529 - i526.value;
    if ($tmp531) goto $l581; else goto $l582;
    $l581:;
    if ($tmp580 >= $tmp530) goto $l577; else goto $l534;
    $l582:;
    if ($tmp580 > $tmp530) goto $l577; else goto $l534;
    $l579:;
    int64_t $tmp584 = i526.value - $tmp529;
    if ($tmp531) goto $l585; else goto $l586;
    $l585:;
    if ($tmp584 >= -$tmp530) goto $l577; else goto $l534;
    $l586:;
    if ($tmp584 > -$tmp530) goto $l577; else goto $l534;
    $l577:;
    i526.value += $tmp530;
    goto $l532;
    $l534:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp588 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp589 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp588);
    return $tmp589;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos591;
    panda$core$Range$LTpanda$core$Int64$GT $tmp594;
    panda$core$Range$LTpanda$core$Int64$GT $tmp613;
    panda$core$String$Index $tmp645;
    panda$core$Bit $tmp590 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp590.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp592 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp593 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp592);
    startPos591 = $tmp593;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp594, startPos591, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp596 = $tmp594.start.value;
    panda$core$Int64 i595 = { $tmp596 };
    int64_t $tmp598 = $tmp594.end.value;
    int64_t $tmp599 = $tmp594.step.value;
    bool $tmp600 = $tmp594.inclusive.value;
    bool $tmp607 = $tmp599 > 0;
    if ($tmp607) goto $l605; else goto $l606;
    $l605:;
    if ($tmp600) goto $l608; else goto $l609;
    $l608:;
    if ($tmp596 <= $tmp598) goto $l601; else goto $l603;
    $l609:;
    if ($tmp596 < $tmp598) goto $l601; else goto $l603;
    $l606:;
    if ($tmp600) goto $l610; else goto $l611;
    $l610:;
    if ($tmp596 >= $tmp598) goto $l601; else goto $l603;
    $l611:;
    if ($tmp596 > $tmp598) goto $l601; else goto $l603;
    $l601:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp613, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp615 = $tmp613.start.value;
        panda$core$Int64 j614 = { $tmp615 };
        int64_t $tmp617 = $tmp613.end.value;
        int64_t $tmp618 = $tmp613.step.value;
        bool $tmp619 = $tmp613.inclusive.value;
        bool $tmp626 = $tmp618 > 0;
        if ($tmp626) goto $l624; else goto $l625;
        $l624:;
        if ($tmp619) goto $l627; else goto $l628;
        $l627:;
        if ($tmp615 <= $tmp617) goto $l620; else goto $l622;
        $l628:;
        if ($tmp615 < $tmp617) goto $l620; else goto $l622;
        $l625:;
        if ($tmp619) goto $l629; else goto $l630;
        $l629:;
        if ($tmp615 >= $tmp617) goto $l620; else goto $l622;
        $l630:;
        if ($tmp615 > $tmp617) goto $l620; else goto $l622;
        $l620:;
        {
            panda$core$Int64 $tmp632 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i595, j614);
            panda$core$Bit $tmp633 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp632.value], p_s->data[j614.value]);
            if ($tmp633.value) {
            {
                goto $l604;
            }
            }
        }
        $l623:;
        if ($tmp626) goto $l635; else goto $l636;
        $l635:;
        int64_t $tmp637 = $tmp617 - j614.value;
        if ($tmp619) goto $l638; else goto $l639;
        $l638:;
        if ($tmp637 >= $tmp618) goto $l634; else goto $l622;
        $l639:;
        if ($tmp637 > $tmp618) goto $l634; else goto $l622;
        $l636:;
        int64_t $tmp641 = j614.value - $tmp617;
        if ($tmp619) goto $l642; else goto $l643;
        $l642:;
        if ($tmp641 >= -$tmp618) goto $l634; else goto $l622;
        $l643:;
        if ($tmp641 > -$tmp618) goto $l634; else goto $l622;
        $l634:;
        j614.value += $tmp618;
        goto $l620;
        $l622:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp645, i595);
        return ((panda$core$String$Index$nullable) { $tmp645, true });
    }
    $l604:;
    if ($tmp607) goto $l647; else goto $l648;
    $l647:;
    int64_t $tmp649 = $tmp598 - i595.value;
    if ($tmp600) goto $l650; else goto $l651;
    $l650:;
    if ($tmp649 >= $tmp599) goto $l646; else goto $l603;
    $l651:;
    if ($tmp649 > $tmp599) goto $l646; else goto $l603;
    $l648:;
    int64_t $tmp653 = i595.value - $tmp598;
    if ($tmp600) goto $l654; else goto $l655;
    $l654:;
    if ($tmp653 >= -$tmp599) goto $l646; else goto $l603;
    $l655:;
    if ($tmp653 > -$tmp599) goto $l646; else goto $l603;
    $l646:;
    i595.value += $tmp599;
    goto $l601;
    $l603:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result657;
    panda$core$String$Index index660;
    panda$core$String$Index$nullable nextIndex664;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp666;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp668;
    panda$core$String$Index $tmp670;
    panda$core$MutableString* $tmp658 = (panda$core$MutableString*) malloc(40);
    $tmp658->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp658->refCount.value = 1;
    panda$core$MutableString$init($tmp658);
    result657 = $tmp658;
    panda$core$String$Index $tmp661 = panda$core$String$start$R$panda$core$String$Index(self);
    index660 = $tmp661;
    $l662:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp665 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index660);
        nextIndex664 = $tmp665;
        if (((panda$core$Bit) { !nextIndex664.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp666, ((panda$core$String$Index$nullable) { index660, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp667 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp666);
            panda$core$MutableString$append$panda$core$String(result657, $tmp667);
            goto $l663;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp668, ((panda$core$String$Index$nullable) { index660, true }), nextIndex664, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp669 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp668);
        panda$core$MutableString$append$panda$core$String(result657, $tmp669);
        panda$core$MutableString$append$panda$core$String(result657, p_replacement);
        panda$core$Int64 $tmp671 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex664.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp670, $tmp671);
        index660 = $tmp670;
    }
    }
    $l663:;
    panda$core$String* $tmp672 = panda$core$MutableString$convert$R$panda$core$String(result657);
    return $tmp672;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp673;
    panda$core$String$Index$init$panda$core$Int64(&$tmp673, ((panda$core$Int64) { 0 }));
    return $tmp673;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp674;
    panda$core$String$Index$init$panda$core$Int64(&$tmp674, self->_length);
    return $tmp674;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c675;
    panda$core$String$Index $tmp678;
    panda$core$String$Index $tmp681;
    panda$core$String$Index $tmp684;
    panda$core$String$Index $tmp686;
    int64_t $tmp676 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c675 = $tmp676;
    bool $tmp677 = c675 >= 240;
    if (((panda$core$Bit) { $tmp677 }).value) {
    {
        panda$core$Int64 $tmp679 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp678, $tmp679);
        return $tmp678;
    }
    }
    bool $tmp680 = c675 >= 224;
    if (((panda$core$Bit) { $tmp680 }).value) {
    {
        panda$core$Int64 $tmp682 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp681, $tmp682);
        return $tmp681;
    }
    }
    bool $tmp683 = c675 >= 192;
    if (((panda$core$Bit) { $tmp683 }).value) {
    {
        panda$core$Int64 $tmp685 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp684, $tmp685);
        return $tmp684;
    }
    }
    panda$core$Int64 $tmp687 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp686, $tmp687);
    return $tmp686;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue688;
    panda$core$String$Index $tmp699;
    panda$core$Int64 $tmp689 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue688 = $tmp689;
    $l690:;
    int64_t $tmp693 = ((int64_t) self->data[newValue688.value].value) & 255;
    bool $tmp694 = $tmp693 >= 128;
    bool $tmp692 = $tmp694;
    if (!$tmp692) goto $l695;
    int64_t $tmp696 = ((int64_t) self->data[newValue688.value].value) & 255;
    bool $tmp697 = $tmp696 < 192;
    $tmp692 = $tmp697;
    $l695:;
    if (!((panda$core$Bit) { $tmp692 }).value) goto $l691;
    {
        panda$core$Int64 $tmp698 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue688, ((panda$core$Int64) { 1 }));
        newValue688 = $tmp698;
    }
    goto $l690;
    $l691:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp699, newValue688);
    return $tmp699;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result700;
    panda$core$Range$LTpanda$core$Int64$GT $tmp702;
    panda$core$Range$LTpanda$core$Int64$GT $tmp733;
    result700 = p_index;
    panda$core$Bit $tmp701 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp701.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp702, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp704 = $tmp702.start.value;
        panda$core$Int64 i703 = { $tmp704 };
        int64_t $tmp706 = $tmp702.end.value;
        int64_t $tmp707 = $tmp702.step.value;
        bool $tmp708 = $tmp702.inclusive.value;
        bool $tmp715 = $tmp707 > 0;
        if ($tmp715) goto $l713; else goto $l714;
        $l713:;
        if ($tmp708) goto $l716; else goto $l717;
        $l716:;
        if ($tmp704 <= $tmp706) goto $l709; else goto $l711;
        $l717:;
        if ($tmp704 < $tmp706) goto $l709; else goto $l711;
        $l714:;
        if ($tmp708) goto $l718; else goto $l719;
        $l718:;
        if ($tmp704 >= $tmp706) goto $l709; else goto $l711;
        $l719:;
        if ($tmp704 > $tmp706) goto $l709; else goto $l711;
        $l709:;
        {
            panda$core$String$Index $tmp721 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result700);
            result700 = $tmp721;
        }
        $l712:;
        if ($tmp715) goto $l723; else goto $l724;
        $l723:;
        int64_t $tmp725 = $tmp706 - i703.value;
        if ($tmp708) goto $l726; else goto $l727;
        $l726:;
        if ($tmp725 >= $tmp707) goto $l722; else goto $l711;
        $l727:;
        if ($tmp725 > $tmp707) goto $l722; else goto $l711;
        $l724:;
        int64_t $tmp729 = i703.value - $tmp706;
        if ($tmp708) goto $l730; else goto $l731;
        $l730:;
        if ($tmp729 >= -$tmp707) goto $l722; else goto $l711;
        $l731:;
        if ($tmp729 > -$tmp707) goto $l722; else goto $l711;
        $l722:;
        i703.value += $tmp707;
        goto $l709;
        $l711:;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp733, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp735 = $tmp733.start.value;
        panda$core$Int64 i734 = { $tmp735 };
        int64_t $tmp737 = $tmp733.end.value;
        int64_t $tmp738 = $tmp733.step.value;
        bool $tmp739 = $tmp733.inclusive.value;
        bool $tmp746 = $tmp738 > 0;
        if ($tmp746) goto $l744; else goto $l745;
        $l744:;
        if ($tmp739) goto $l747; else goto $l748;
        $l747:;
        if ($tmp735 <= $tmp737) goto $l740; else goto $l742;
        $l748:;
        if ($tmp735 < $tmp737) goto $l740; else goto $l742;
        $l745:;
        if ($tmp739) goto $l749; else goto $l750;
        $l749:;
        if ($tmp735 >= $tmp737) goto $l740; else goto $l742;
        $l750:;
        if ($tmp735 > $tmp737) goto $l740; else goto $l742;
        $l740:;
        {
            panda$core$String$Index $tmp752 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result700);
            result700 = $tmp752;
        }
        $l743:;
        if ($tmp746) goto $l754; else goto $l755;
        $l754:;
        int64_t $tmp756 = $tmp737 - i734.value;
        if ($tmp739) goto $l757; else goto $l758;
        $l757:;
        if ($tmp756 >= $tmp738) goto $l753; else goto $l742;
        $l758:;
        if ($tmp756 > $tmp738) goto $l753; else goto $l742;
        $l755:;
        int64_t $tmp760 = i734.value - $tmp737;
        if ($tmp739) goto $l761; else goto $l762;
        $l761:;
        if ($tmp760 >= -$tmp738) goto $l753; else goto $l742;
        $l762:;
        if ($tmp760 > -$tmp738) goto $l753; else goto $l742;
        $l753:;
        i734.value += $tmp738;
        goto $l740;
        $l742:;
    }
    }
    return result700;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp764 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp764;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result765;
    panda$core$String$Index index768;
    panda$core$String$Index$nullable nextIndex772;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp781;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp783;
    panda$collections$Array* $tmp766 = (panda$collections$Array*) malloc(40);
    $tmp766->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp766->refCount.value = 1;
    panda$collections$Array$init($tmp766);
    result765 = $tmp766;
    panda$core$String$Index $tmp769 = panda$core$String$start$R$panda$core$String$Index(self);
    index768 = $tmp769;
    $l770:;
    while (true) {
    {
        panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp773.value) {
        {
            panda$core$String$Index $tmp774 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index768);
            nextIndex772 = ((panda$core$String$Index$nullable) { $tmp774, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp775 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index768);
            nextIndex772 = $tmp775;
        }
        }
        bool $tmp776 = ((panda$core$Bit) { !nextIndex772.nonnull }).value;
        if ($tmp776) goto $l777;
        panda$core$Int64 $tmp778 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result765->count, $tmp778);
        $tmp776 = $tmp779.value;
        $l777:;
        panda$core$Bit $tmp780 = { $tmp776 };
        if ($tmp780.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp781, ((panda$core$String$Index$nullable) { index768, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp782 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp781);
            panda$collections$Array$add$panda$collections$Array$T(result765, ((panda$core$Object*) $tmp782));
            goto $l771;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp783, ((panda$core$String$Index$nullable) { index768, true }), nextIndex772, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp784 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp783);
        panda$collections$Array$add$panda$collections$Array$T(result765, ((panda$core$Object*) $tmp784));
        panda$core$String$Index $tmp785 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex772.value), p_delimiter->_length);
        index768 = $tmp785;
    }
    }
    $l771:;
    return result765;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result787;
    panda$core$Int64 start788;
    panda$core$Char8 $tmp789;
    panda$core$Range$LTpanda$core$Int64$GT $tmp791;
    panda$core$Int64 digit810;
    panda$core$Char8 $tmp830;
    panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp786.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result787 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp789, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp790 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp789);
    if ($tmp790.value) {
    {
        start788 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start788 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp791, start788, self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp793 = $tmp791.start.value;
    panda$core$Int64 i792 = { $tmp793 };
    int64_t $tmp795 = $tmp791.end.value;
    int64_t $tmp796 = $tmp791.step.value;
    bool $tmp797 = $tmp791.inclusive.value;
    bool $tmp804 = $tmp796 > 0;
    if ($tmp804) goto $l802; else goto $l803;
    $l802:;
    if ($tmp797) goto $l805; else goto $l806;
    $l805:;
    if ($tmp793 <= $tmp795) goto $l798; else goto $l800;
    $l806:;
    if ($tmp793 < $tmp795) goto $l798; else goto $l800;
    $l803:;
    if ($tmp797) goto $l807; else goto $l808;
    $l807:;
    if ($tmp793 >= $tmp795) goto $l798; else goto $l800;
    $l808:;
    if ($tmp793 > $tmp795) goto $l798; else goto $l800;
    $l798:;
    {
        panda$core$Int64 $tmp811 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i792.value].value) }), ((panda$core$Int64) { 48 }));
        digit810 = $tmp811;
        panda$core$Bit $tmp813 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit810, ((panda$core$Int64) { 0 }));
        bool $tmp812 = $tmp813.value;
        if ($tmp812) goto $l814;
        panda$core$Bit $tmp815 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit810, ((panda$core$Int64) { 9 }));
        $tmp812 = $tmp815.value;
        $l814:;
        panda$core$Bit $tmp816 = { $tmp812 };
        if ($tmp816.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp817 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result787, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp818 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp817, digit810);
        result787 = $tmp818;
    }
    $l801:;
    if ($tmp804) goto $l820; else goto $l821;
    $l820:;
    int64_t $tmp822 = $tmp795 - i792.value;
    if ($tmp797) goto $l823; else goto $l824;
    $l823:;
    if ($tmp822 >= $tmp796) goto $l819; else goto $l800;
    $l824:;
    if ($tmp822 > $tmp796) goto $l819; else goto $l800;
    $l821:;
    int64_t $tmp826 = i792.value - $tmp795;
    if ($tmp797) goto $l827; else goto $l828;
    $l827:;
    if ($tmp826 >= -$tmp796) goto $l819; else goto $l800;
    $l828:;
    if ($tmp826 > -$tmp796) goto $l819; else goto $l800;
    $l819:;
    i792.value += $tmp796;
    goto $l798;
    $l800:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp830, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp831 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp830);
    if ($tmp831.value) {
    {
        panda$core$Int64 $tmp832 = panda$core$Int64$$SUB$R$panda$core$Int64(result787);
        result787 = $tmp832;
    }
    }
    return ((panda$core$Int64$nullable) { result787, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result834;
    panda$core$Range$LTpanda$core$Int64$GT $tmp835;
    panda$core$UInt64 digit854;
    panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp833.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result834 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp835, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp837 = $tmp835.start.value;
    panda$core$Int64 i836 = { $tmp837 };
    int64_t $tmp839 = $tmp835.end.value;
    int64_t $tmp840 = $tmp835.step.value;
    bool $tmp841 = $tmp835.inclusive.value;
    bool $tmp848 = $tmp840 > 0;
    if ($tmp848) goto $l846; else goto $l847;
    $l846:;
    if ($tmp841) goto $l849; else goto $l850;
    $l849:;
    if ($tmp837 <= $tmp839) goto $l842; else goto $l844;
    $l850:;
    if ($tmp837 < $tmp839) goto $l842; else goto $l844;
    $l847:;
    if ($tmp841) goto $l851; else goto $l852;
    $l851:;
    if ($tmp837 >= $tmp839) goto $l842; else goto $l844;
    $l852:;
    if ($tmp837 > $tmp839) goto $l842; else goto $l844;
    $l842:;
    {
        panda$core$UInt64 $tmp855 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i836.value].value) }), ((panda$core$UInt64) { 48 }));
        digit854 = $tmp855;
        panda$core$Bit $tmp857 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit854, ((panda$core$UInt64) { 0 }));
        bool $tmp856 = $tmp857.value;
        if ($tmp856) goto $l858;
        panda$core$Bit $tmp859 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit854, ((panda$core$UInt64) { 9 }));
        $tmp856 = $tmp859.value;
        $l858:;
        panda$core$Bit $tmp860 = { $tmp856 };
        if ($tmp860.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp861 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result834, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp862 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp861, digit854);
        result834 = $tmp862;
    }
    $l845:;
    if ($tmp848) goto $l864; else goto $l865;
    $l864:;
    int64_t $tmp866 = $tmp839 - i836.value;
    if ($tmp841) goto $l867; else goto $l868;
    $l867:;
    if ($tmp866 >= $tmp840) goto $l863; else goto $l844;
    $l868:;
    if ($tmp866 > $tmp840) goto $l863; else goto $l844;
    $l865:;
    int64_t $tmp870 = i836.value - $tmp839;
    if ($tmp841) goto $l871; else goto $l872;
    $l871:;
    if ($tmp870 >= -$tmp840) goto $l863; else goto $l844;
    $l872:;
    if ($tmp870 > -$tmp840) goto $l863; else goto $l844;
    $l863:;
    i836.value += $tmp840;
    goto $l842;
    $l844:;
    return ((panda$core$UInt64$nullable) { result834, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result874;
    panda$core$Range$LTpanda$core$Int64$GT $tmp875;
    result874 = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp875, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp877 = $tmp875.start.value;
    panda$core$Int64 i876 = { $tmp877 };
    int64_t $tmp879 = $tmp875.end.value;
    int64_t $tmp880 = $tmp875.step.value;
    bool $tmp881 = $tmp875.inclusive.value;
    bool $tmp888 = $tmp880 > 0;
    if ($tmp888) goto $l886; else goto $l887;
    $l886:;
    if ($tmp881) goto $l889; else goto $l890;
    $l889:;
    if ($tmp877 <= $tmp879) goto $l882; else goto $l884;
    $l890:;
    if ($tmp877 < $tmp879) goto $l882; else goto $l884;
    $l887:;
    if ($tmp881) goto $l891; else goto $l892;
    $l891:;
    if ($tmp877 >= $tmp879) goto $l882; else goto $l884;
    $l892:;
    if ($tmp877 > $tmp879) goto $l882; else goto $l884;
    $l882:;
    {
        panda$core$Int64 $tmp894 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result874, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp895 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp894, ((panda$core$Int64) { ((int64_t) self->data[i876.value].value) }));
        result874 = $tmp895;
    }
    $l885:;
    if ($tmp888) goto $l897; else goto $l898;
    $l897:;
    int64_t $tmp899 = $tmp879 - i876.value;
    if ($tmp881) goto $l900; else goto $l901;
    $l900:;
    if ($tmp899 >= $tmp880) goto $l896; else goto $l884;
    $l901:;
    if ($tmp899 > $tmp880) goto $l896; else goto $l884;
    $l898:;
    int64_t $tmp903 = i876.value - $tmp879;
    if ($tmp881) goto $l904; else goto $l905;
    $l904:;
    if ($tmp903 >= -$tmp880) goto $l896; else goto $l884;
    $l905:;
    if ($tmp903 > -$tmp880) goto $l896; else goto $l884;
    $l896:;
    i876.value += $tmp880;
    goto $l882;
    $l884:;
    return result874;
}

