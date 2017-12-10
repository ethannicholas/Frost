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
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
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

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn25)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn51)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn57)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn210)(panda$core$Object*);
typedef panda$core$String* (*$fn246)(panda$core$Object*);


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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
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
        ITable* $tmp23 = p_chars->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[0];
        panda$core$Object* $tmp26 = $tmp24(p_chars, i6);
        self->data[i6.value] = ((panda$core$Char8$wrapper*) $tmp26)->value;
    }
    $l14:;
    if ($tmp17) goto $l28; else goto $l29;
    $l28:;
    int64_t $tmp30 = $tmp9 - i6.value;
    if ($tmp10) goto $l31; else goto $l32;
    $l31:;
    if ($tmp30 >= 1) goto $l27; else goto $l13;
    $l32:;
    if ($tmp30 > 1) goto $l27; else goto $l13;
    $l29:;
    int64_t $tmp34 = i6.value - $tmp9;
    if ($tmp10) goto $l35; else goto $l36;
    $l35:;
    if ($tmp34 >= -1) goto $l27; else goto $l13;
    $l36:;
    if ($tmp34 > -1) goto $l27; else goto $l13;
    $l27:;
    i6.value += 1;
    goto $l11;
    $l13:;
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    free(self->data);
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp38 = (panda$core$String$UTF8List*) malloc(24);
    $tmp38->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp38->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp38, self);
    return ((panda$collections$ListView*) $tmp38);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp40 = (panda$core$String$UTF16Iterator*) malloc(32);
    $tmp40->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp40->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp40, self);
    return ((panda$collections$Iterator*) $tmp40);
}
panda$collections$Iterator* panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp42 = (panda$core$String$UTF32Iterator*) malloc(32);
    $tmp42->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp42->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp42, self);
    return ((panda$collections$Iterator*) $tmp42);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count44;
    panda$collections$Iterator* iter45;
    count44 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp46 = panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    iter45 = $tmp46;
    $l47:;
    ITable* $tmp49 = iter45->$class->itable;
    while ($tmp49->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp49 = $tmp49->next;
    }
    $fn51 $tmp50 = $tmp49->methods[0];
    panda$core$Bit $tmp52 = $tmp50(iter45);
    panda$core$Bit $tmp53 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp52);
    if (!$tmp53.value) goto $l48;
    {
        panda$core$Int64 $tmp54 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count44, ((panda$core$Int64) { 1 }));
        count44 = $tmp54;
        ITable* $tmp55 = iter45->$class->itable;
        while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp55 = $tmp55->next;
        }
        $fn57 $tmp56 = $tmp55->methods[1];
        $tmp56(iter45);
    }
    goto $l47;
    $l48:;
    return count44;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp59;
    panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp58.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp59, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp61 = $tmp59.min.value;
    panda$core$Int64 i60 = { $tmp61 };
    int64_t $tmp63 = $tmp59.max.value;
    bool $tmp64 = $tmp59.inclusive.value;
    bool $tmp71 = 1 > 0;
    if ($tmp71) goto $l69; else goto $l70;
    $l69:;
    if ($tmp64) goto $l72; else goto $l73;
    $l72:;
    if ($tmp61 <= $tmp63) goto $l65; else goto $l67;
    $l73:;
    if ($tmp61 < $tmp63) goto $l65; else goto $l67;
    $l70:;
    if ($tmp64) goto $l74; else goto $l75;
    $l74:;
    if ($tmp61 >= $tmp63) goto $l65; else goto $l67;
    $l75:;
    if ($tmp61 > $tmp63) goto $l65; else goto $l67;
    $l65:;
    {
        panda$core$Bit $tmp77 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i60.value], p_other->data[i60.value]);
        if ($tmp77.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l68:;
    if ($tmp71) goto $l79; else goto $l80;
    $l79:;
    int64_t $tmp81 = $tmp63 - i60.value;
    if ($tmp64) goto $l82; else goto $l83;
    $l82:;
    if ($tmp81 >= 1) goto $l78; else goto $l67;
    $l83:;
    if ($tmp81 > 1) goto $l78; else goto $l67;
    $l80:;
    int64_t $tmp85 = i60.value - $tmp63;
    if ($tmp64) goto $l86; else goto $l87;
    $l86:;
    if ($tmp85 >= -1) goto $l78; else goto $l67;
    $l87:;
    if ($tmp85 > -1) goto $l78; else goto $l67;
    $l78:;
    i60.value += 1;
    goto $l65;
    $l67:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp90;
    panda$core$Bit $tmp89 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp89.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp90, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp92 = $tmp90.min.value;
    panda$core$Int64 i91 = { $tmp92 };
    int64_t $tmp94 = $tmp90.max.value;
    bool $tmp95 = $tmp90.inclusive.value;
    bool $tmp102 = 1 > 0;
    if ($tmp102) goto $l100; else goto $l101;
    $l100:;
    if ($tmp95) goto $l103; else goto $l104;
    $l103:;
    if ($tmp92 <= $tmp94) goto $l96; else goto $l98;
    $l104:;
    if ($tmp92 < $tmp94) goto $l96; else goto $l98;
    $l101:;
    if ($tmp95) goto $l105; else goto $l106;
    $l105:;
    if ($tmp92 >= $tmp94) goto $l96; else goto $l98;
    $l106:;
    if ($tmp92 > $tmp94) goto $l96; else goto $l98;
    $l96:;
    {
        panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp108, i91);
        panda$core$Bit $tmp110 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp109.value], p_other->data[i91.value]);
        if ($tmp110.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l99:;
    if ($tmp102) goto $l112; else goto $l113;
    $l112:;
    int64_t $tmp114 = $tmp94 - i91.value;
    if ($tmp95) goto $l115; else goto $l116;
    $l115:;
    if ($tmp114 >= 1) goto $l111; else goto $l98;
    $l116:;
    if ($tmp114 > 1) goto $l111; else goto $l98;
    $l113:;
    int64_t $tmp118 = i91.value - $tmp94;
    if ($tmp95) goto $l119; else goto $l120;
    $l119:;
    if ($tmp118 >= -1) goto $l111; else goto $l98;
    $l120:;
    if ($tmp118 > -1) goto $l111; else goto $l98;
    $l111:;
    i91.value += 1;
    goto $l96;
    $l98:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trimmed$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start123;
    panda$core$Int64 end132;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp142;
    panda$core$String$Index $tmp143;
    panda$core$String$Index $tmp144;
    panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp122.value) {
    {
        return self;
    }
    }
    start123 = ((panda$core$Int64) { 0 });
    $l124:;
    panda$core$Bit $tmp127 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start123, self->_length);
    bool $tmp126 = $tmp127.value;
    if (!$tmp126) goto $l128;
    panda$core$Bit $tmp129 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start123.value]);
    $tmp126 = $tmp129.value;
    $l128:;
    panda$core$Bit $tmp130 = { $tmp126 };
    if (!$tmp130.value) goto $l125;
    {
        panda$core$Int64 $tmp131 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start123, ((panda$core$Int64) { 1 }));
        start123 = $tmp131;
    }
    goto $l124;
    $l125:;
    panda$core$Int64 $tmp133 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end132 = $tmp133;
    $l134:;
    panda$core$Bit $tmp137 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end132, start123);
    bool $tmp136 = $tmp137.value;
    if (!$tmp136) goto $l138;
    panda$core$Bit $tmp139 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end132.value]);
    $tmp136 = $tmp139.value;
    $l138:;
    panda$core$Bit $tmp140 = { $tmp136 };
    if (!$tmp140.value) goto $l135;
    {
        panda$core$Int64 $tmp141 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end132, ((panda$core$Int64) { 1 }));
        end132 = $tmp141;
    }
    goto $l134;
    $l135:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp143, start123);
    panda$core$String$Index$init$panda$core$Int64(&$tmp144, end132);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp142, $tmp143, $tmp144, ((panda$core$Bit) { true }));
    panda$core$String* $tmp145 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp142);
    return $tmp145;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result146;
    panda$core$Range$LTpanda$core$Int64$GT $tmp148;
    panda$core$Range$LTpanda$core$Int64$GT $tmp177;
    panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result146 = ((panda$core$Char8*) malloc($tmp147.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp148, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp150 = $tmp148.min.value;
    panda$core$Int64 i149 = { $tmp150 };
    int64_t $tmp152 = $tmp148.max.value;
    bool $tmp153 = $tmp148.inclusive.value;
    bool $tmp160 = 1 > 0;
    if ($tmp160) goto $l158; else goto $l159;
    $l158:;
    if ($tmp153) goto $l161; else goto $l162;
    $l161:;
    if ($tmp150 <= $tmp152) goto $l154; else goto $l156;
    $l162:;
    if ($tmp150 < $tmp152) goto $l154; else goto $l156;
    $l159:;
    if ($tmp153) goto $l163; else goto $l164;
    $l163:;
    if ($tmp150 >= $tmp152) goto $l154; else goto $l156;
    $l164:;
    if ($tmp150 > $tmp152) goto $l154; else goto $l156;
    $l154:;
    {
        result146[i149.value] = self->data[i149.value];
    }
    $l157:;
    if ($tmp160) goto $l167; else goto $l168;
    $l167:;
    int64_t $tmp169 = $tmp152 - i149.value;
    if ($tmp153) goto $l170; else goto $l171;
    $l170:;
    if ($tmp169 >= 1) goto $l166; else goto $l156;
    $l171:;
    if ($tmp169 > 1) goto $l166; else goto $l156;
    $l168:;
    int64_t $tmp173 = i149.value - $tmp152;
    if ($tmp153) goto $l174; else goto $l175;
    $l174:;
    if ($tmp173 >= -1) goto $l166; else goto $l156;
    $l175:;
    if ($tmp173 > -1) goto $l166; else goto $l156;
    $l166:;
    i149.value += 1;
    goto $l154;
    $l156:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp177, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp179 = $tmp177.min.value;
    panda$core$Int64 i178 = { $tmp179 };
    int64_t $tmp181 = $tmp177.max.value;
    bool $tmp182 = $tmp177.inclusive.value;
    bool $tmp189 = 1 > 0;
    if ($tmp189) goto $l187; else goto $l188;
    $l187:;
    if ($tmp182) goto $l190; else goto $l191;
    $l190:;
    if ($tmp179 <= $tmp181) goto $l183; else goto $l185;
    $l191:;
    if ($tmp179 < $tmp181) goto $l183; else goto $l185;
    $l188:;
    if ($tmp182) goto $l192; else goto $l193;
    $l192:;
    if ($tmp179 >= $tmp181) goto $l183; else goto $l185;
    $l193:;
    if ($tmp179 > $tmp181) goto $l183; else goto $l185;
    $l183:;
    {
        panda$core$Int64 $tmp195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i178);
        result146[$tmp195.value] = p_other->data[i178.value];
    }
    $l186:;
    if ($tmp189) goto $l197; else goto $l198;
    $l197:;
    int64_t $tmp199 = $tmp181 - i178.value;
    if ($tmp182) goto $l200; else goto $l201;
    $l200:;
    if ($tmp199 >= 1) goto $l196; else goto $l185;
    $l201:;
    if ($tmp199 > 1) goto $l196; else goto $l185;
    $l198:;
    int64_t $tmp203 = i178.value - $tmp181;
    if ($tmp182) goto $l204; else goto $l205;
    $l204:;
    if ($tmp203 >= -1) goto $l196; else goto $l185;
    $l205:;
    if ($tmp203 > -1) goto $l196; else goto $l185;
    $l196:;
    i178.value += 1;
    goto $l183;
    $l185:;
    panda$core$String* $tmp207 = (panda$core$String*) malloc(33);
    $tmp207->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp207->refCount.value = 1;
    panda$core$Int64 $tmp209 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp207, result146, $tmp209, ((panda$core$Bit) { true }));
    return $tmp207;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp211 = (($fn210) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp211);
    return $tmp212;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result213;
    panda$core$Range$LTpanda$core$Int64$GT $tmp216;
    panda$core$MutableString* $tmp214 = (panda$core$MutableString*) malloc(40);
    $tmp214->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp214->refCount.value = 1;
    panda$core$MutableString$init($tmp214);
    result213 = $tmp214;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp216, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp218 = $tmp216.min.value;
    panda$core$Int64 i217 = { $tmp218 };
    int64_t $tmp220 = $tmp216.max.value;
    bool $tmp221 = $tmp216.inclusive.value;
    bool $tmp228 = 1 > 0;
    if ($tmp228) goto $l226; else goto $l227;
    $l226:;
    if ($tmp221) goto $l229; else goto $l230;
    $l229:;
    if ($tmp218 <= $tmp220) goto $l222; else goto $l224;
    $l230:;
    if ($tmp218 < $tmp220) goto $l222; else goto $l224;
    $l227:;
    if ($tmp221) goto $l231; else goto $l232;
    $l231:;
    if ($tmp218 >= $tmp220) goto $l222; else goto $l224;
    $l232:;
    if ($tmp218 > $tmp220) goto $l222; else goto $l224;
    $l222:;
    {
        panda$core$MutableString$append$panda$core$String(result213, self);
    }
    $l225:;
    if ($tmp228) goto $l235; else goto $l236;
    $l235:;
    int64_t $tmp237 = $tmp220 - i217.value;
    if ($tmp221) goto $l238; else goto $l239;
    $l238:;
    if ($tmp237 >= 1) goto $l234; else goto $l224;
    $l239:;
    if ($tmp237 > 1) goto $l234; else goto $l224;
    $l236:;
    int64_t $tmp241 = i217.value - $tmp220;
    if ($tmp221) goto $l242; else goto $l243;
    $l242:;
    if ($tmp241 >= -1) goto $l234; else goto $l224;
    $l243:;
    if ($tmp241 > -1) goto $l234; else goto $l224;
    $l234:;
    i217.value += 1;
    goto $l222;
    $l224:;
    panda$core$String* $tmp245 = panda$core$MutableString$convert$R$panda$core$String(result213);
    return $tmp245;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp247 = (($fn246) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, p_s);
    return $tmp248;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp250;
    panda$core$Bit $tmp249 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp249.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp250, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp252 = $tmp250.min.value;
    panda$core$Int64 i251 = { $tmp252 };
    int64_t $tmp254 = $tmp250.max.value;
    bool $tmp255 = $tmp250.inclusive.value;
    bool $tmp262 = 1 > 0;
    if ($tmp262) goto $l260; else goto $l261;
    $l260:;
    if ($tmp255) goto $l263; else goto $l264;
    $l263:;
    if ($tmp252 <= $tmp254) goto $l256; else goto $l258;
    $l264:;
    if ($tmp252 < $tmp254) goto $l256; else goto $l258;
    $l261:;
    if ($tmp255) goto $l265; else goto $l266;
    $l265:;
    if ($tmp252 >= $tmp254) goto $l256; else goto $l258;
    $l266:;
    if ($tmp252 > $tmp254) goto $l256; else goto $l258;
    $l256:;
    {
        panda$core$Bit $tmp268 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i251.value], p_other->data[i251.value]);
        if ($tmp268.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l259:;
    if ($tmp262) goto $l270; else goto $l271;
    $l270:;
    int64_t $tmp272 = $tmp254 - i251.value;
    if ($tmp255) goto $l273; else goto $l274;
    $l273:;
    if ($tmp272 >= 1) goto $l269; else goto $l258;
    $l274:;
    if ($tmp272 > 1) goto $l269; else goto $l258;
    $l271:;
    int64_t $tmp276 = i251.value - $tmp254;
    if ($tmp255) goto $l277; else goto $l278;
    $l277:;
    if ($tmp276 >= -1) goto $l269; else goto $l258;
    $l278:;
    if ($tmp276 > -1) goto $l269; else goto $l258;
    $l269:;
    i251.value += 1;
    goto $l256;
    $l258:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp280 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp280);
    return $tmp281;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx282;
    panda$core$Char8 c283;
    panda$core$Int32 result284;
    panda$core$Char32 $tmp288;
    panda$core$Char32 $tmp299;
    panda$core$Char32 $tmp315;
    panda$core$Char32 $tmp334;
    idx282 = p_index.value;
    c283 = self->data[idx282.value];
    panda$core$Int32 $tmp285 = panda$core$Char8$convert$R$panda$core$Int32(c283);
    result284 = $tmp285;
    int64_t $tmp286 = ((int64_t) c283.value) & 255;
    bool $tmp287 = $tmp286 < 192;
    if (((panda$core$Bit) { $tmp287 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp288, result284);
        return $tmp288;
    }
    }
    int64_t $tmp289 = ((int64_t) c283.value) & 255;
    bool $tmp290 = $tmp289 < 224;
    if (((panda$core$Bit) { $tmp290 }).value) {
    {
        panda$core$Int64 $tmp291 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp292 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp291, self->_length);
        PANDA_ASSERT($tmp292.value);
        panda$core$Int32 $tmp293 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result284, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp294 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp293, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp295 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp296 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp295.value]);
        panda$core$Int32 $tmp297 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp296, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp298 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp294, $tmp297);
        result284 = $tmp298;
        panda$core$Char32$init$panda$core$Int32(&$tmp299, result284);
        return $tmp299;
    }
    }
    int64_t $tmp300 = ((int64_t) c283.value) & 255;
    bool $tmp301 = $tmp300 < 240;
    if (((panda$core$Bit) { $tmp301 }).value) {
    {
        panda$core$Int64 $tmp302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp303 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp302, self->_length);
        PANDA_ASSERT($tmp303.value);
        panda$core$Int32 $tmp304 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result284, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp305 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp304, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp306 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp307 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp306.value]);
        panda$core$Int32 $tmp308 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp307, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp309 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp308, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp310 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp305, $tmp309);
        panda$core$Int64 $tmp311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp312 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp311.value]);
        panda$core$Int32 $tmp313 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp312, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp314 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp310, $tmp313);
        result284 = $tmp314;
        panda$core$Char32$init$panda$core$Int32(&$tmp315, result284);
        return $tmp315;
    }
    }
    panda$core$Int64 $tmp316 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp317 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp316, self->_length);
    PANDA_ASSERT($tmp317.value);
    panda$core$Int32 $tmp318 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result284, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp319 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp318, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp320 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp321 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp320.value]);
    panda$core$Int32 $tmp322 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp321, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp323 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp322, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp324 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp319, $tmp323);
    panda$core$Int64 $tmp325 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp326 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp325.value]);
    panda$core$Int32 $tmp327 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp326, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp328 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp327, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp329 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp324, $tmp328);
    panda$core$Int64 $tmp330 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx282, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp331 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp330.value]);
    panda$core$Int32 $tmp332 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp331, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp333 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp329, $tmp332);
    result284 = $tmp333;
    panda$core$Char32$init$panda$core$Int32(&$tmp334, result284);
    return $tmp334;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp335 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp336 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp335, p_index);
    panda$core$Char32 $tmp337 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp336);
    return $tmp337;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current338;
    panda$core$MutableString* result339;
    panda$core$Int64 max342;
    panda$core$Char8 c347;
    current338 = p_r.min.value;
    panda$core$MutableString* $tmp340 = (panda$core$MutableString*) malloc(40);
    $tmp340->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp340->refCount.value = 1;
    panda$core$MutableString$init($tmp340);
    result339 = $tmp340;
    max342 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp343 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max342, ((panda$core$Int64) { 1 }));
        max342 = $tmp343;
    }
    }
    $l344:;
    panda$core$Bit $tmp346 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current338, max342);
    if (!$tmp346.value) goto $l345;
    {
        c347 = self->data[current338.value];
        panda$core$MutableString$append$panda$core$Char8(result339, c347);
        panda$core$Int64 $tmp348 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current338, ((panda$core$Int64) { 1 }));
        current338 = $tmp348;
        int64_t $tmp349 = ((int64_t) c347.value) & 255;
        bool $tmp350 = $tmp349 >= 192;
        if (((panda$core$Bit) { $tmp350 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result339, self->data[current338.value]);
            panda$core$Int64 $tmp351 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current338, ((panda$core$Int64) { 1 }));
            current338 = $tmp351;
        }
        }
        int64_t $tmp352 = ((int64_t) c347.value) & 255;
        bool $tmp353 = $tmp352 >= 224;
        if (((panda$core$Bit) { $tmp353 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result339, self->data[current338.value]);
            panda$core$Int64 $tmp354 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current338, ((panda$core$Int64) { 1 }));
            current338 = $tmp354;
        }
        }
        int64_t $tmp355 = ((int64_t) c347.value) & 255;
        bool $tmp356 = $tmp355 >= 240;
        if (((panda$core$Bit) { $tmp356 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result339, self->data[current338.value]);
            panda$core$Int64 $tmp357 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current338, ((panda$core$Int64) { 1 }));
            current338 = $tmp357;
        }
        }
    }
    goto $l344;
    $l345:;
    panda$core$String* $tmp358 = panda$core$MutableString$convert$R$panda$core$String(result339);
    return $tmp358;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min359;
    panda$core$String$Index max361;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp364;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min359 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp360 = panda$core$String$start$R$panda$core$String$Index(self);
        min359 = $tmp360;
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max361 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp362 = panda$core$String$end$R$panda$core$String$Index(self);
        max361 = $tmp362;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp363 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, max361, ((panda$core$Int64) { -1 }));
            max361 = $tmp363;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp364, min359, max361, p_r.inclusive);
    panda$core$String* $tmp365 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp364);
    return $tmp365;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step366;
    panda$core$Int64 current367;
    panda$core$Int64 end372;
    panda$core$MutableString* result376;
    panda$core$Char8 c383;
    panda$core$Range$LTpanda$core$Int64$GT $tmp394;
    panda$core$String$Index $tmp414;
    panda$core$Char8 c431;
    panda$core$Int64 old432;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp452;
    panda$core$String$Index $tmp473;
    panda$core$Char8 c497;
    step366 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current367 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp368 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step366, ((panda$core$Int64) { 0 }));
    if ($tmp368.value) {
    {
        panda$core$String$Index $tmp369 = panda$core$String$start$R$panda$core$String$Index(self);
        current367 = $tmp369.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp370 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp371 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp370);
        current367 = $tmp371.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end372 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp373 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step366, ((panda$core$Int64) { 0 }));
    if ($tmp373.value) {
    {
        panda$core$String$Index $tmp374 = panda$core$String$end$R$panda$core$String$Index(self);
        end372 = $tmp374.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp375 = panda$core$String$start$R$panda$core$String$Index(self);
        end372 = $tmp375.value;
    }
    }
    }
    panda$core$MutableString* $tmp377 = (panda$core$MutableString*) malloc(40);
    $tmp377->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp377->refCount.value = 1;
    panda$core$MutableString$init($tmp377);
    result376 = $tmp377;
    panda$core$Bit $tmp379 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp379.value) {
    {
        $l380:;
        panda$core$Bit $tmp382 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current367, end372);
        if (!$tmp382.value) goto $l381;
        {
            c383 = self->data[current367.value];
            panda$core$MutableString$append$panda$core$Char8(result376, c383);
            panda$core$Int64 $tmp384 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
            current367 = $tmp384;
            int64_t $tmp385 = ((int64_t) c383.value) & 255;
            bool $tmp386 = $tmp385 >= 192;
            if (((panda$core$Bit) { $tmp386 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
                panda$core$Int64 $tmp387 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
                current367 = $tmp387;
            }
            }
            int64_t $tmp388 = ((int64_t) c383.value) & 255;
            bool $tmp389 = $tmp388 >= 224;
            if (((panda$core$Bit) { $tmp389 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
                panda$core$Int64 $tmp390 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
                current367 = $tmp390;
            }
            }
            int64_t $tmp391 = ((int64_t) c383.value) & 255;
            bool $tmp392 = $tmp391 >= 240;
            if (((panda$core$Bit) { $tmp392 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
                panda$core$Int64 $tmp393 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
                current367 = $tmp393;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp394, ((panda$core$Int64) { 1 }), step366, ((panda$core$Bit) { false }));
            int64_t $tmp396 = $tmp394.min.value;
            panda$core$Int64 i395 = { $tmp396 };
            int64_t $tmp398 = $tmp394.max.value;
            bool $tmp399 = $tmp394.inclusive.value;
            bool $tmp406 = 1 > 0;
            if ($tmp406) goto $l404; else goto $l405;
            $l404:;
            if ($tmp399) goto $l407; else goto $l408;
            $l407:;
            if ($tmp396 <= $tmp398) goto $l400; else goto $l402;
            $l408:;
            if ($tmp396 < $tmp398) goto $l400; else goto $l402;
            $l405:;
            if ($tmp399) goto $l409; else goto $l410;
            $l409:;
            if ($tmp396 >= $tmp398) goto $l400; else goto $l402;
            $l410:;
            if ($tmp396 > $tmp398) goto $l400; else goto $l402;
            $l400:;
            {
                panda$core$Bit $tmp412 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current367, end372);
                if ($tmp412.value) {
                {
                    panda$core$String* $tmp413 = panda$core$MutableString$convert$R$panda$core$String(result376);
                    return $tmp413;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp414, current367);
                panda$core$String$Index $tmp415 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp414);
                current367 = $tmp415.value;
            }
            $l403:;
            if ($tmp406) goto $l417; else goto $l418;
            $l417:;
            int64_t $tmp419 = $tmp398 - i395.value;
            if ($tmp399) goto $l420; else goto $l421;
            $l420:;
            if ($tmp419 >= 1) goto $l416; else goto $l402;
            $l421:;
            if ($tmp419 > 1) goto $l416; else goto $l402;
            $l418:;
            int64_t $tmp423 = i395.value - $tmp398;
            if ($tmp399) goto $l424; else goto $l425;
            $l424:;
            if ($tmp423 >= -1) goto $l416; else goto $l402;
            $l425:;
            if ($tmp423 > -1) goto $l416; else goto $l402;
            $l416:;
            i395.value += 1;
            goto $l400;
            $l402:;
        }
        goto $l380;
        $l381:;
    }
    }
    else {
    {
        panda$core$Bit $tmp427 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp427.value);
        $l428:;
        panda$core$Bit $tmp430 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current367, end372);
        if (!$tmp430.value) goto $l429;
        {
            c431 = self->data[current367.value];
            panda$core$MutableString$append$panda$core$Char8(result376, c431);
            old432 = current367;
            panda$core$Int64 $tmp433 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
            current367 = $tmp433;
            int64_t $tmp434 = ((int64_t) c431.value) & 255;
            bool $tmp435 = $tmp434 >= 192;
            if (((panda$core$Bit) { $tmp435 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
                panda$core$Int64 $tmp436 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
                current367 = $tmp436;
            }
            }
            int64_t $tmp437 = ((int64_t) c431.value) & 255;
            bool $tmp438 = $tmp437 >= 224;
            if (((panda$core$Bit) { $tmp438 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
                panda$core$Int64 $tmp439 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
                current367 = $tmp439;
            }
            }
            int64_t $tmp440 = ((int64_t) c431.value) & 255;
            bool $tmp441 = $tmp440 >= 240;
            if (((panda$core$Bit) { $tmp441 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
            }
            }
            panda$core$Int64 $tmp442 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old432, ((panda$core$Int64) { 1 }));
            current367 = $tmp442;
            $l443:;
            int64_t $tmp446 = ((int64_t) self->data[current367.value].value) & 255;
            bool $tmp447 = $tmp446 >= 128;
            bool $tmp445 = $tmp447;
            if (!$tmp445) goto $l448;
            int64_t $tmp449 = ((int64_t) self->data[current367.value].value) & 255;
            bool $tmp450 = $tmp449 < 192;
            $tmp445 = $tmp450;
            $l448:;
            if (!((panda$core$Bit) { $tmp445 }).value) goto $l444;
            {
                panda$core$Int64 $tmp451 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
                current367 = $tmp451;
            }
            goto $l443;
            $l444:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp452, ((panda$core$Int64) { -1 }), step366, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp454 = $tmp452.start.value;
            panda$core$Int64 i453 = { $tmp454 };
            int64_t $tmp456 = $tmp452.end.value;
            int64_t $tmp457 = $tmp452.step.value;
            bool $tmp458 = $tmp452.inclusive.value;
            bool $tmp465 = $tmp457 > 0;
            if ($tmp465) goto $l463; else goto $l464;
            $l463:;
            if ($tmp458) goto $l466; else goto $l467;
            $l466:;
            if ($tmp454 <= $tmp456) goto $l459; else goto $l461;
            $l467:;
            if ($tmp454 < $tmp456) goto $l459; else goto $l461;
            $l464:;
            if ($tmp458) goto $l468; else goto $l469;
            $l468:;
            if ($tmp454 >= $tmp456) goto $l459; else goto $l461;
            $l469:;
            if ($tmp454 > $tmp456) goto $l459; else goto $l461;
            $l459:;
            {
                panda$core$Bit $tmp471 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current367, end372);
                if ($tmp471.value) {
                {
                    panda$core$String* $tmp472 = panda$core$MutableString$convert$R$panda$core$String(result376);
                    return $tmp472;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp473, current367);
                panda$core$String$Index $tmp474 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp473);
                current367 = $tmp474.value;
            }
            $l462:;
            if ($tmp465) goto $l476; else goto $l477;
            $l476:;
            int64_t $tmp478 = $tmp456 - i453.value;
            if ($tmp458) goto $l479; else goto $l480;
            $l479:;
            if ($tmp478 >= $tmp457) goto $l475; else goto $l461;
            $l480:;
            if ($tmp478 > $tmp457) goto $l475; else goto $l461;
            $l477:;
            int64_t $tmp482 = i453.value - $tmp456;
            if ($tmp458) goto $l483; else goto $l484;
            $l483:;
            if ($tmp482 >= -$tmp457) goto $l475; else goto $l461;
            $l484:;
            if ($tmp482 > -$tmp457) goto $l475; else goto $l461;
            $l475:;
            i453.value += $tmp457;
            goto $l459;
            $l461:;
        }
        goto $l428;
        $l429:;
    }
    }
    bool $tmp488 = p_r.inclusive.value;
    if ($tmp488) goto $l489;
    $tmp488 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l489:;
    panda$core$Bit $tmp490 = { $tmp488 };
    bool $tmp487 = $tmp490.value;
    if (!$tmp487) goto $l491;
    panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current367, end372);
    $tmp487 = $tmp492.value;
    $l491:;
    panda$core$Bit $tmp493 = { $tmp487 };
    bool $tmp486 = $tmp493.value;
    if (!$tmp486) goto $l494;
    panda$core$Bit $tmp495 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end372, self->_length);
    $tmp486 = $tmp495.value;
    $l494:;
    panda$core$Bit $tmp496 = { $tmp486 };
    if ($tmp496.value) {
    {
        c497 = self->data[current367.value];
        panda$core$MutableString$append$panda$core$Char8(result376, c497);
        panda$core$Int64 $tmp498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
        current367 = $tmp498;
        int64_t $tmp499 = ((int64_t) c497.value) & 255;
        bool $tmp500 = $tmp499 >= 192;
        if (((panda$core$Bit) { $tmp500 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
            panda$core$Int64 $tmp501 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
            current367 = $tmp501;
        }
        }
        int64_t $tmp502 = ((int64_t) c497.value) & 255;
        bool $tmp503 = $tmp502 >= 224;
        if (((panda$core$Bit) { $tmp503 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
            panda$core$Int64 $tmp504 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current367, ((panda$core$Int64) { 1 }));
            current367 = $tmp504;
        }
        }
        int64_t $tmp505 = ((int64_t) c497.value) & 255;
        bool $tmp506 = $tmp505 >= 240;
        if (((panda$core$Bit) { $tmp506 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result376, self->data[current367.value]);
        }
        }
    }
    }
    panda$core$String* $tmp507 = panda$core$MutableString$convert$R$panda$core$String(result376);
    return $tmp507;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start508;
    panda$core$String$Index$nullable end511;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp514;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp509 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp510 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp509, ((panda$core$Int64) p_r.min.value));
        start508 = ((panda$core$String$Index$nullable) { $tmp510, true });
    }
    }
    else {
    {
        start508 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp512 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp513 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp512, ((panda$core$Int64) p_r.max.value));
        end511 = ((panda$core$String$Index$nullable) { $tmp513, true });
    }
    }
    else {
    {
        end511 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp514, start508, end511, p_r.inclusive);
    panda$core$String* $tmp515 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp514);
    return $tmp515;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start516;
    panda$core$String$Index$nullable end519;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp522;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp517 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp518 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp517, ((panda$core$Int64) p_r.start.value));
        start516 = ((panda$core$String$Index$nullable) { $tmp518, true });
    }
    }
    else {
    {
        start516 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp520 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp521 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp520, ((panda$core$Int64) p_r.end.value));
        end519 = ((panda$core$String$Index$nullable) { $tmp521, true });
    }
    }
    else {
    {
        end519 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp522, start516, end519, p_r.step, p_r.inclusive);
    panda$core$String* $tmp523 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp522);
    return $tmp523;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp524;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp524, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp526 = $tmp524.min.value;
    panda$core$Int64 i525 = { $tmp526 };
    int64_t $tmp528 = $tmp524.max.value;
    bool $tmp529 = $tmp524.inclusive.value;
    bool $tmp536 = 1 > 0;
    if ($tmp536) goto $l534; else goto $l535;
    $l534:;
    if ($tmp529) goto $l537; else goto $l538;
    $l537:;
    if ($tmp526 <= $tmp528) goto $l530; else goto $l532;
    $l538:;
    if ($tmp526 < $tmp528) goto $l530; else goto $l532;
    $l535:;
    if ($tmp529) goto $l539; else goto $l540;
    $l539:;
    if ($tmp526 >= $tmp528) goto $l530; else goto $l532;
    $l540:;
    if ($tmp526 > $tmp528) goto $l530; else goto $l532;
    $l530:;
    {
        panda$core$Bit $tmp542 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i525.value], p_c);
        if ($tmp542.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l533:;
    if ($tmp536) goto $l544; else goto $l545;
    $l544:;
    int64_t $tmp546 = $tmp528 - i525.value;
    if ($tmp529) goto $l547; else goto $l548;
    $l547:;
    if ($tmp546 >= 1) goto $l543; else goto $l532;
    $l548:;
    if ($tmp546 > 1) goto $l543; else goto $l532;
    $l545:;
    int64_t $tmp550 = i525.value - $tmp528;
    if ($tmp529) goto $l551; else goto $l552;
    $l551:;
    if ($tmp550 >= -1) goto $l543; else goto $l532;
    $l552:;
    if ($tmp550 > -1) goto $l543; else goto $l532;
    $l543:;
    i525.value += 1;
    goto $l530;
    $l532:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp554 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp554.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp555 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp556 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp555);
    return $tmp556;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp558;
    panda$core$Range$LTpanda$core$Int64$GT $tmp577;
    panda$core$String$Index $tmp608;
    panda$core$Bit $tmp557 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp557.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp559 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp558, p_start.value, $tmp559, ((panda$core$Bit) { true }));
    int64_t $tmp561 = $tmp558.min.value;
    panda$core$Int64 i560 = { $tmp561 };
    int64_t $tmp563 = $tmp558.max.value;
    bool $tmp564 = $tmp558.inclusive.value;
    bool $tmp571 = 1 > 0;
    if ($tmp571) goto $l569; else goto $l570;
    $l569:;
    if ($tmp564) goto $l572; else goto $l573;
    $l572:;
    if ($tmp561 <= $tmp563) goto $l565; else goto $l567;
    $l573:;
    if ($tmp561 < $tmp563) goto $l565; else goto $l567;
    $l570:;
    if ($tmp564) goto $l574; else goto $l575;
    $l574:;
    if ($tmp561 >= $tmp563) goto $l565; else goto $l567;
    $l575:;
    if ($tmp561 > $tmp563) goto $l565; else goto $l567;
    $l565:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp577, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp579 = $tmp577.min.value;
        panda$core$Int64 j578 = { $tmp579 };
        int64_t $tmp581 = $tmp577.max.value;
        bool $tmp582 = $tmp577.inclusive.value;
        bool $tmp589 = 1 > 0;
        if ($tmp589) goto $l587; else goto $l588;
        $l587:;
        if ($tmp582) goto $l590; else goto $l591;
        $l590:;
        if ($tmp579 <= $tmp581) goto $l583; else goto $l585;
        $l591:;
        if ($tmp579 < $tmp581) goto $l583; else goto $l585;
        $l588:;
        if ($tmp582) goto $l592; else goto $l593;
        $l592:;
        if ($tmp579 >= $tmp581) goto $l583; else goto $l585;
        $l593:;
        if ($tmp579 > $tmp581) goto $l583; else goto $l585;
        $l583:;
        {
            panda$core$Int64 $tmp595 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i560, j578);
            panda$core$Bit $tmp596 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp595.value], p_s->data[j578.value]);
            if ($tmp596.value) {
            {
                goto $l568;
            }
            }
        }
        $l586:;
        if ($tmp589) goto $l598; else goto $l599;
        $l598:;
        int64_t $tmp600 = $tmp581 - j578.value;
        if ($tmp582) goto $l601; else goto $l602;
        $l601:;
        if ($tmp600 >= 1) goto $l597; else goto $l585;
        $l602:;
        if ($tmp600 > 1) goto $l597; else goto $l585;
        $l599:;
        int64_t $tmp604 = j578.value - $tmp581;
        if ($tmp582) goto $l605; else goto $l606;
        $l605:;
        if ($tmp604 >= -1) goto $l597; else goto $l585;
        $l606:;
        if ($tmp604 > -1) goto $l597; else goto $l585;
        $l597:;
        j578.value += 1;
        goto $l583;
        $l585:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp608, i560);
        return ((panda$core$String$Index$nullable) { $tmp608, true });
    }
    $l568:;
    if ($tmp571) goto $l610; else goto $l611;
    $l610:;
    int64_t $tmp612 = $tmp563 - i560.value;
    if ($tmp564) goto $l613; else goto $l614;
    $l613:;
    if ($tmp612 >= 1) goto $l609; else goto $l567;
    $l614:;
    if ($tmp612 > 1) goto $l609; else goto $l567;
    $l611:;
    int64_t $tmp616 = i560.value - $tmp563;
    if ($tmp564) goto $l617; else goto $l618;
    $l617:;
    if ($tmp616 >= -1) goto $l609; else goto $l567;
    $l618:;
    if ($tmp616 > -1) goto $l609; else goto $l567;
    $l609:;
    i560.value += 1;
    goto $l565;
    $l567:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp620 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp621 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp620);
    return $tmp621;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos623;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp626;
    panda$core$Range$LTpanda$core$Int64$GT $tmp645;
    panda$core$String$Index $tmp676;
    panda$core$Bit $tmp622 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp622.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp624 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp625 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp624);
    startPos623 = $tmp625;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp626, startPos623, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp628 = $tmp626.start.value;
    panda$core$Int64 i627 = { $tmp628 };
    int64_t $tmp630 = $tmp626.end.value;
    int64_t $tmp631 = $tmp626.step.value;
    bool $tmp632 = $tmp626.inclusive.value;
    bool $tmp639 = $tmp631 > 0;
    if ($tmp639) goto $l637; else goto $l638;
    $l637:;
    if ($tmp632) goto $l640; else goto $l641;
    $l640:;
    if ($tmp628 <= $tmp630) goto $l633; else goto $l635;
    $l641:;
    if ($tmp628 < $tmp630) goto $l633; else goto $l635;
    $l638:;
    if ($tmp632) goto $l642; else goto $l643;
    $l642:;
    if ($tmp628 >= $tmp630) goto $l633; else goto $l635;
    $l643:;
    if ($tmp628 > $tmp630) goto $l633; else goto $l635;
    $l633:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp645, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp647 = $tmp645.min.value;
        panda$core$Int64 j646 = { $tmp647 };
        int64_t $tmp649 = $tmp645.max.value;
        bool $tmp650 = $tmp645.inclusive.value;
        bool $tmp657 = 1 > 0;
        if ($tmp657) goto $l655; else goto $l656;
        $l655:;
        if ($tmp650) goto $l658; else goto $l659;
        $l658:;
        if ($tmp647 <= $tmp649) goto $l651; else goto $l653;
        $l659:;
        if ($tmp647 < $tmp649) goto $l651; else goto $l653;
        $l656:;
        if ($tmp650) goto $l660; else goto $l661;
        $l660:;
        if ($tmp647 >= $tmp649) goto $l651; else goto $l653;
        $l661:;
        if ($tmp647 > $tmp649) goto $l651; else goto $l653;
        $l651:;
        {
            panda$core$Int64 $tmp663 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i627, j646);
            panda$core$Bit $tmp664 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp663.value], p_s->data[j646.value]);
            if ($tmp664.value) {
            {
                goto $l636;
            }
            }
        }
        $l654:;
        if ($tmp657) goto $l666; else goto $l667;
        $l666:;
        int64_t $tmp668 = $tmp649 - j646.value;
        if ($tmp650) goto $l669; else goto $l670;
        $l669:;
        if ($tmp668 >= 1) goto $l665; else goto $l653;
        $l670:;
        if ($tmp668 > 1) goto $l665; else goto $l653;
        $l667:;
        int64_t $tmp672 = j646.value - $tmp649;
        if ($tmp650) goto $l673; else goto $l674;
        $l673:;
        if ($tmp672 >= -1) goto $l665; else goto $l653;
        $l674:;
        if ($tmp672 > -1) goto $l665; else goto $l653;
        $l665:;
        j646.value += 1;
        goto $l651;
        $l653:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp676, i627);
        return ((panda$core$String$Index$nullable) { $tmp676, true });
    }
    $l636:;
    if ($tmp639) goto $l678; else goto $l679;
    $l678:;
    int64_t $tmp680 = $tmp630 - i627.value;
    if ($tmp632) goto $l681; else goto $l682;
    $l681:;
    if ($tmp680 >= $tmp631) goto $l677; else goto $l635;
    $l682:;
    if ($tmp680 > $tmp631) goto $l677; else goto $l635;
    $l679:;
    int64_t $tmp684 = i627.value - $tmp630;
    if ($tmp632) goto $l685; else goto $l686;
    $l685:;
    if ($tmp684 >= -$tmp631) goto $l677; else goto $l635;
    $l686:;
    if ($tmp684 > -$tmp631) goto $l677; else goto $l635;
    $l677:;
    i627.value += $tmp631;
    goto $l633;
    $l635:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result688;
    panda$core$String$Index index691;
    panda$core$String$Index$nullable nextIndex695;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp697;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp699;
    panda$core$String$Index $tmp701;
    panda$core$MutableString* $tmp689 = (panda$core$MutableString*) malloc(40);
    $tmp689->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp689->refCount.value = 1;
    panda$core$MutableString$init($tmp689);
    result688 = $tmp689;
    panda$core$String$Index $tmp692 = panda$core$String$start$R$panda$core$String$Index(self);
    index691 = $tmp692;
    $l693:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp696 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index691);
        nextIndex695 = $tmp696;
        if (((panda$core$Bit) { !nextIndex695.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp697, ((panda$core$String$Index$nullable) { index691, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp698 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp697);
            panda$core$MutableString$append$panda$core$String(result688, $tmp698);
            goto $l694;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp699, index691, ((panda$core$String$Index) nextIndex695.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp700 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp699);
        panda$core$MutableString$append$panda$core$String(result688, $tmp700);
        panda$core$MutableString$append$panda$core$String(result688, p_replacement);
        panda$core$Int64 $tmp702 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex695.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp701, $tmp702);
        index691 = $tmp701;
    }
    }
    $l694:;
    panda$core$String* $tmp703 = panda$core$MutableString$convert$R$panda$core$String(result688);
    return $tmp703;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp704;
    panda$core$String$Index$init$panda$core$Int64(&$tmp704, ((panda$core$Int64) { 0 }));
    return $tmp704;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp705;
    panda$core$String$Index$init$panda$core$Int64(&$tmp705, self->_length);
    return $tmp705;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c707;
    panda$core$String$Index $tmp710;
    panda$core$String$Index $tmp713;
    panda$core$String$Index $tmp716;
    panda$core$String$Index $tmp718;
    panda$core$Bit $tmp706 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp706.value);
    int64_t $tmp708 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c707 = $tmp708;
    bool $tmp709 = c707 >= 240;
    if (((panda$core$Bit) { $tmp709 }).value) {
    {
        panda$core$Int64 $tmp711 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp710, $tmp711);
        return $tmp710;
    }
    }
    bool $tmp712 = c707 >= 224;
    if (((panda$core$Bit) { $tmp712 }).value) {
    {
        panda$core$Int64 $tmp714 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp713, $tmp714);
        return $tmp713;
    }
    }
    bool $tmp715 = c707 >= 192;
    if (((panda$core$Bit) { $tmp715 }).value) {
    {
        panda$core$Int64 $tmp717 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp716, $tmp717);
        return $tmp716;
    }
    }
    panda$core$Int64 $tmp719 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp718, $tmp719);
    return $tmp718;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue721;
    panda$core$String$Index $tmp732;
    panda$core$Bit $tmp720 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp720.value);
    panda$core$Int64 $tmp722 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue721 = $tmp722;
    $l723:;
    int64_t $tmp726 = ((int64_t) self->data[newValue721.value].value) & 255;
    bool $tmp727 = $tmp726 >= 128;
    bool $tmp725 = $tmp727;
    if (!$tmp725) goto $l728;
    int64_t $tmp729 = ((int64_t) self->data[newValue721.value].value) & 255;
    bool $tmp730 = $tmp729 < 192;
    $tmp725 = $tmp730;
    $l728:;
    if (!((panda$core$Bit) { $tmp725 }).value) goto $l724;
    {
        panda$core$Int64 $tmp731 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue721, ((panda$core$Int64) { 1 }));
        newValue721 = $tmp731;
    }
    goto $l723;
    $l724:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp732, newValue721);
    return $tmp732;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result733;
    panda$core$Range$LTpanda$core$Int64$GT $tmp735;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp765;
    result733 = p_index;
    panda$core$Bit $tmp734 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp734.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp735, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp737 = $tmp735.min.value;
        panda$core$Int64 i736 = { $tmp737 };
        int64_t $tmp739 = $tmp735.max.value;
        bool $tmp740 = $tmp735.inclusive.value;
        bool $tmp747 = 1 > 0;
        if ($tmp747) goto $l745; else goto $l746;
        $l745:;
        if ($tmp740) goto $l748; else goto $l749;
        $l748:;
        if ($tmp737 <= $tmp739) goto $l741; else goto $l743;
        $l749:;
        if ($tmp737 < $tmp739) goto $l741; else goto $l743;
        $l746:;
        if ($tmp740) goto $l750; else goto $l751;
        $l750:;
        if ($tmp737 >= $tmp739) goto $l741; else goto $l743;
        $l751:;
        if ($tmp737 > $tmp739) goto $l741; else goto $l743;
        $l741:;
        {
            panda$core$String$Index $tmp753 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result733);
            result733 = $tmp753;
        }
        $l744:;
        if ($tmp747) goto $l755; else goto $l756;
        $l755:;
        int64_t $tmp757 = $tmp739 - i736.value;
        if ($tmp740) goto $l758; else goto $l759;
        $l758:;
        if ($tmp757 >= 1) goto $l754; else goto $l743;
        $l759:;
        if ($tmp757 > 1) goto $l754; else goto $l743;
        $l756:;
        int64_t $tmp761 = i736.value - $tmp739;
        if ($tmp740) goto $l762; else goto $l763;
        $l762:;
        if ($tmp761 >= -1) goto $l754; else goto $l743;
        $l763:;
        if ($tmp761 > -1) goto $l754; else goto $l743;
        $l754:;
        i736.value += 1;
        goto $l741;
        $l743:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp765, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp767 = $tmp765.start.value;
        panda$core$Int64 i766 = { $tmp767 };
        int64_t $tmp769 = $tmp765.end.value;
        int64_t $tmp770 = $tmp765.step.value;
        bool $tmp771 = $tmp765.inclusive.value;
        bool $tmp778 = $tmp770 > 0;
        if ($tmp778) goto $l776; else goto $l777;
        $l776:;
        if ($tmp771) goto $l779; else goto $l780;
        $l779:;
        if ($tmp767 <= $tmp769) goto $l772; else goto $l774;
        $l780:;
        if ($tmp767 < $tmp769) goto $l772; else goto $l774;
        $l777:;
        if ($tmp771) goto $l781; else goto $l782;
        $l781:;
        if ($tmp767 >= $tmp769) goto $l772; else goto $l774;
        $l782:;
        if ($tmp767 > $tmp769) goto $l772; else goto $l774;
        $l772:;
        {
            panda$core$String$Index $tmp784 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result733);
            result733 = $tmp784;
        }
        $l775:;
        if ($tmp778) goto $l786; else goto $l787;
        $l786:;
        int64_t $tmp788 = $tmp769 - i766.value;
        if ($tmp771) goto $l789; else goto $l790;
        $l789:;
        if ($tmp788 >= $tmp770) goto $l785; else goto $l774;
        $l790:;
        if ($tmp788 > $tmp770) goto $l785; else goto $l774;
        $l787:;
        int64_t $tmp792 = i766.value - $tmp769;
        if ($tmp771) goto $l793; else goto $l794;
        $l793:;
        if ($tmp792 >= -$tmp770) goto $l785; else goto $l774;
        $l794:;
        if ($tmp792 > -$tmp770) goto $l785; else goto $l774;
        $l785:;
        i766.value += $tmp770;
        goto $l772;
        $l774:;
    }
    }
    return result733;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp796 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp796;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result797;
    panda$core$String$Index index800;
    panda$core$String$Index$nullable nextIndex804;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp813;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp815;
    panda$collections$Array* $tmp798 = (panda$collections$Array*) malloc(40);
    $tmp798->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp798->refCount.value = 1;
    panda$collections$Array$init($tmp798);
    result797 = $tmp798;
    panda$core$String$Index $tmp801 = panda$core$String$start$R$panda$core$String$Index(self);
    index800 = $tmp801;
    $l802:;
    while (true) {
    {
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp805.value) {
        {
            panda$core$String$Index $tmp806 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index800);
            nextIndex804 = ((panda$core$String$Index$nullable) { $tmp806, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp807 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index800);
            nextIndex804 = $tmp807;
        }
        }
        bool $tmp808 = ((panda$core$Bit) { !nextIndex804.nonnull }).value;
        if ($tmp808) goto $l809;
        panda$core$Int64 $tmp810 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result797->count, $tmp810);
        $tmp808 = $tmp811.value;
        $l809:;
        panda$core$Bit $tmp812 = { $tmp808 };
        if ($tmp812.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp813, ((panda$core$String$Index$nullable) { index800, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp814 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp813);
            panda$collections$Array$add$panda$collections$Array$T(result797, ((panda$core$Object*) $tmp814));
            goto $l803;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp815, index800, ((panda$core$String$Index) nextIndex804.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp816 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp815);
        panda$collections$Array$add$panda$collections$Array$T(result797, ((panda$core$Object*) $tmp816));
        panda$core$String$Index $tmp817 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex804.value), p_delimiter->_length);
        index800 = $tmp817;
    }
    }
    $l803:;
    return result797;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result819;
    panda$core$Int64 start820;
    panda$core$Char8 $tmp821;
    panda$core$Range$LTpanda$core$Int64$GT $tmp823;
    panda$core$Int64 digit841;
    panda$core$Char8 $tmp861;
    panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp818.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result819 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp821, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp822 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp821);
    if ($tmp822.value) {
    {
        start820 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start820 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp823, start820, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp825 = $tmp823.min.value;
    panda$core$Int64 i824 = { $tmp825 };
    int64_t $tmp827 = $tmp823.max.value;
    bool $tmp828 = $tmp823.inclusive.value;
    bool $tmp835 = 1 > 0;
    if ($tmp835) goto $l833; else goto $l834;
    $l833:;
    if ($tmp828) goto $l836; else goto $l837;
    $l836:;
    if ($tmp825 <= $tmp827) goto $l829; else goto $l831;
    $l837:;
    if ($tmp825 < $tmp827) goto $l829; else goto $l831;
    $l834:;
    if ($tmp828) goto $l838; else goto $l839;
    $l838:;
    if ($tmp825 >= $tmp827) goto $l829; else goto $l831;
    $l839:;
    if ($tmp825 > $tmp827) goto $l829; else goto $l831;
    $l829:;
    {
        panda$core$Int64 $tmp842 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i824.value].value) }), ((panda$core$Int64) { 48 }));
        digit841 = $tmp842;
        panda$core$Bit $tmp844 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit841, ((panda$core$Int64) { 0 }));
        bool $tmp843 = $tmp844.value;
        if ($tmp843) goto $l845;
        panda$core$Bit $tmp846 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit841, ((panda$core$Int64) { 9 }));
        $tmp843 = $tmp846.value;
        $l845:;
        panda$core$Bit $tmp847 = { $tmp843 };
        if ($tmp847.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp848 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result819, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp849 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp848, digit841);
        result819 = $tmp849;
    }
    $l832:;
    if ($tmp835) goto $l851; else goto $l852;
    $l851:;
    int64_t $tmp853 = $tmp827 - i824.value;
    if ($tmp828) goto $l854; else goto $l855;
    $l854:;
    if ($tmp853 >= 1) goto $l850; else goto $l831;
    $l855:;
    if ($tmp853 > 1) goto $l850; else goto $l831;
    $l852:;
    int64_t $tmp857 = i824.value - $tmp827;
    if ($tmp828) goto $l858; else goto $l859;
    $l858:;
    if ($tmp857 >= -1) goto $l850; else goto $l831;
    $l859:;
    if ($tmp857 > -1) goto $l850; else goto $l831;
    $l850:;
    i824.value += 1;
    goto $l829;
    $l831:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp861, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp862 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp861);
    if ($tmp862.value) {
    {
        panda$core$Int64 $tmp863 = panda$core$Int64$$SUB$R$panda$core$Int64(result819);
        result819 = $tmp863;
    }
    }
    return ((panda$core$Int64$nullable) { result819, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result865;
    panda$core$Range$LTpanda$core$Int64$GT $tmp866;
    panda$core$UInt64 digit884;
    panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp864.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result865 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp866, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp868 = $tmp866.min.value;
    panda$core$Int64 i867 = { $tmp868 };
    int64_t $tmp870 = $tmp866.max.value;
    bool $tmp871 = $tmp866.inclusive.value;
    bool $tmp878 = 1 > 0;
    if ($tmp878) goto $l876; else goto $l877;
    $l876:;
    if ($tmp871) goto $l879; else goto $l880;
    $l879:;
    if ($tmp868 <= $tmp870) goto $l872; else goto $l874;
    $l880:;
    if ($tmp868 < $tmp870) goto $l872; else goto $l874;
    $l877:;
    if ($tmp871) goto $l881; else goto $l882;
    $l881:;
    if ($tmp868 >= $tmp870) goto $l872; else goto $l874;
    $l882:;
    if ($tmp868 > $tmp870) goto $l872; else goto $l874;
    $l872:;
    {
        panda$core$UInt64 $tmp885 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i867.value].value) }), ((panda$core$UInt64) { 48 }));
        digit884 = $tmp885;
        panda$core$Bit $tmp887 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit884, ((panda$core$UInt64) { 0 }));
        bool $tmp886 = $tmp887.value;
        if ($tmp886) goto $l888;
        panda$core$Bit $tmp889 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit884, ((panda$core$UInt64) { 9 }));
        $tmp886 = $tmp889.value;
        $l888:;
        panda$core$Bit $tmp890 = { $tmp886 };
        if ($tmp890.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp891 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result865, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp892 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp891, digit884);
        result865 = $tmp892;
    }
    $l875:;
    if ($tmp878) goto $l894; else goto $l895;
    $l894:;
    int64_t $tmp896 = $tmp870 - i867.value;
    if ($tmp871) goto $l897; else goto $l898;
    $l897:;
    if ($tmp896 >= 1) goto $l893; else goto $l874;
    $l898:;
    if ($tmp896 > 1) goto $l893; else goto $l874;
    $l895:;
    int64_t $tmp900 = i867.value - $tmp870;
    if ($tmp871) goto $l901; else goto $l902;
    $l901:;
    if ($tmp900 >= -1) goto $l893; else goto $l874;
    $l902:;
    if ($tmp900 > -1) goto $l893; else goto $l874;
    $l893:;
    i867.value += 1;
    goto $l872;
    $l874:;
    return ((panda$core$UInt64$nullable) { result865, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result904;
    panda$core$Range$LTpanda$core$Int64$GT $tmp905;
    result904 = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp905, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp907 = $tmp905.min.value;
    panda$core$Int64 i906 = { $tmp907 };
    int64_t $tmp909 = $tmp905.max.value;
    bool $tmp910 = $tmp905.inclusive.value;
    bool $tmp917 = 1 > 0;
    if ($tmp917) goto $l915; else goto $l916;
    $l915:;
    if ($tmp910) goto $l918; else goto $l919;
    $l918:;
    if ($tmp907 <= $tmp909) goto $l911; else goto $l913;
    $l919:;
    if ($tmp907 < $tmp909) goto $l911; else goto $l913;
    $l916:;
    if ($tmp910) goto $l920; else goto $l921;
    $l920:;
    if ($tmp907 >= $tmp909) goto $l911; else goto $l913;
    $l921:;
    if ($tmp907 > $tmp909) goto $l911; else goto $l913;
    $l911:;
    {
        panda$core$Int64 $tmp923 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result904, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp924 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp923, ((panda$core$Int64) { ((int64_t) self->data[i906.value].value) }));
        result904 = $tmp924;
    }
    $l914:;
    if ($tmp917) goto $l926; else goto $l927;
    $l926:;
    int64_t $tmp928 = $tmp909 - i906.value;
    if ($tmp910) goto $l929; else goto $l930;
    $l929:;
    if ($tmp928 >= 1) goto $l925; else goto $l913;
    $l930:;
    if ($tmp928 > 1) goto $l925; else goto $l913;
    $l927:;
    int64_t $tmp932 = i906.value - $tmp909;
    if ($tmp910) goto $l933; else goto $l934;
    $l933:;
    if ($tmp932 >= -1) goto $l925; else goto $l913;
    $l934:;
    if ($tmp932 > -1) goto $l925; else goto $l913;
    $l925:;
    i906.value += 1;
    goto $l911;
    $l913:;
    return result904;
}

