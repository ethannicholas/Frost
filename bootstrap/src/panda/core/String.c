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

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

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
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp142;
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
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp142, ((panda$core$String$Index$nullable) { $tmp143, true }), ((panda$core$String$Index$nullable) { $tmp144, true }), ((panda$core$Bit) { true }));
    panda$core$String* $tmp145 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp142);
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
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 step338;
    panda$core$Int64 current339;
    panda$core$Int64 end344;
    panda$core$MutableString* result348;
    panda$core$Char8 c354;
    panda$core$Range$LTpanda$core$Int64$GT $tmp365;
    panda$core$String$Index $tmp385;
    panda$core$Char8 c409;
    step338 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        current339 = ((panda$core$String$Index) p_r.min.value).value;
    }
    }
    else {
    panda$core$Bit $tmp340 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step338, ((panda$core$Int64) { 0 }));
    if ($tmp340.value) {
    {
        panda$core$String$Index $tmp341 = panda$core$String$start$R$panda$core$String$Index(self);
        current339 = $tmp341.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp342 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp343 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp342);
        current339 = $tmp343.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end344 = ((panda$core$String$Index) p_r.max.value).value;
    }
    }
    else {
    panda$core$Bit $tmp345 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step338, ((panda$core$Int64) { 0 }));
    if ($tmp345.value) {
    {
        panda$core$String$Index $tmp346 = panda$core$String$end$R$panda$core$String$Index(self);
        end344 = $tmp346.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp347 = panda$core$String$start$R$panda$core$String$Index(self);
        end344 = $tmp347.value;
    }
    }
    }
    panda$core$MutableString* $tmp349 = (panda$core$MutableString*) malloc(40);
    $tmp349->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp349->refCount.value = 1;
    panda$core$MutableString$init($tmp349);
    result348 = $tmp349;
    $l351:;
    panda$core$Bit $tmp353 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current339, end344);
    if (!$tmp353.value) goto $l352;
    {
        c354 = self->data[current339.value];
        panda$core$MutableString$append$panda$core$Char8(result348, c354);
        panda$core$Int64 $tmp355 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
        current339 = $tmp355;
        int64_t $tmp356 = ((int64_t) c354.value) & 255;
        bool $tmp357 = $tmp356 >= 192;
        if (((panda$core$Bit) { $tmp357 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result348, self->data[current339.value]);
            panda$core$Int64 $tmp358 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
            current339 = $tmp358;
        }
        }
        int64_t $tmp359 = ((int64_t) c354.value) & 255;
        bool $tmp360 = $tmp359 >= 224;
        if (((panda$core$Bit) { $tmp360 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result348, self->data[current339.value]);
            panda$core$Int64 $tmp361 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
            current339 = $tmp361;
        }
        }
        int64_t $tmp362 = ((int64_t) c354.value) & 255;
        bool $tmp363 = $tmp362 >= 240;
        if (((panda$core$Bit) { $tmp363 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result348, self->data[current339.value]);
            panda$core$Int64 $tmp364 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
            current339 = $tmp364;
        }
        }
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp365, ((panda$core$Int64) { 1 }), step338, ((panda$core$Bit) { false }));
        int64_t $tmp367 = $tmp365.min.value;
        panda$core$Int64 i366 = { $tmp367 };
        int64_t $tmp369 = $tmp365.max.value;
        bool $tmp370 = $tmp365.inclusive.value;
        bool $tmp377 = 1 > 0;
        if ($tmp377) goto $l375; else goto $l376;
        $l375:;
        if ($tmp370) goto $l378; else goto $l379;
        $l378:;
        if ($tmp367 <= $tmp369) goto $l371; else goto $l373;
        $l379:;
        if ($tmp367 < $tmp369) goto $l371; else goto $l373;
        $l376:;
        if ($tmp370) goto $l380; else goto $l381;
        $l380:;
        if ($tmp367 >= $tmp369) goto $l371; else goto $l373;
        $l381:;
        if ($tmp367 > $tmp369) goto $l371; else goto $l373;
        $l371:;
        {
            panda$core$Bit $tmp383 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current339, end344);
            if ($tmp383.value) {
            {
                panda$core$String* $tmp384 = panda$core$MutableString$convert$R$panda$core$String(result348);
                return $tmp384;
            }
            }
            panda$core$String$Index$init$panda$core$Int64(&$tmp385, current339);
            panda$core$String$Index $tmp386 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp385);
            current339 = $tmp386.value;
        }
        $l374:;
        if ($tmp377) goto $l388; else goto $l389;
        $l388:;
        int64_t $tmp390 = $tmp369 - i366.value;
        if ($tmp370) goto $l391; else goto $l392;
        $l391:;
        if ($tmp390 >= 1) goto $l387; else goto $l373;
        $l392:;
        if ($tmp390 > 1) goto $l387; else goto $l373;
        $l389:;
        int64_t $tmp394 = i366.value - $tmp369;
        if ($tmp370) goto $l395; else goto $l396;
        $l395:;
        if ($tmp394 >= -1) goto $l387; else goto $l373;
        $l396:;
        if ($tmp394 > -1) goto $l387; else goto $l373;
        $l387:;
        i366.value += 1;
        goto $l371;
        $l373:;
    }
    goto $l351;
    $l352:;
    bool $tmp400 = p_r.inclusive.value;
    if ($tmp400) goto $l401;
    $tmp400 = ((panda$core$Bit) { !p_r.max.nonnull }).value;
    $l401:;
    panda$core$Bit $tmp402 = { $tmp400 };
    bool $tmp399 = $tmp402.value;
    if (!$tmp399) goto $l403;
    panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current339, end344);
    $tmp399 = $tmp404.value;
    $l403:;
    panda$core$Bit $tmp405 = { $tmp399 };
    bool $tmp398 = $tmp405.value;
    if (!$tmp398) goto $l406;
    panda$core$Bit $tmp407 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end344, self->_length);
    $tmp398 = $tmp407.value;
    $l406:;
    panda$core$Bit $tmp408 = { $tmp398 };
    if ($tmp408.value) {
    {
        c409 = self->data[current339.value];
        panda$core$MutableString$append$panda$core$Char8(result348, c409);
        panda$core$Int64 $tmp410 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
        current339 = $tmp410;
        int64_t $tmp411 = ((int64_t) c409.value) & 255;
        bool $tmp412 = $tmp411 >= 192;
        if (((panda$core$Bit) { $tmp412 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result348, self->data[current339.value]);
            panda$core$Int64 $tmp413 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
            current339 = $tmp413;
        }
        }
        int64_t $tmp414 = ((int64_t) c409.value) & 255;
        bool $tmp415 = $tmp414 >= 224;
        if (((panda$core$Bit) { $tmp415 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result348, self->data[current339.value]);
            panda$core$Int64 $tmp416 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current339, ((panda$core$Int64) { 1 }));
            current339 = $tmp416;
        }
        }
        int64_t $tmp417 = ((int64_t) c409.value) & 255;
        bool $tmp418 = $tmp417 >= 240;
        if (((panda$core$Bit) { $tmp418 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result348, self->data[current339.value]);
        }
        }
    }
    }
    panda$core$String* $tmp419 = panda$core$MutableString$convert$R$panda$core$String(result348);
    return $tmp419;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step420;
    panda$core$Int64 current421;
    panda$core$Int64 end426;
    panda$core$MutableString* result430;
    panda$core$Char8 c437;
    panda$core$Range$LTpanda$core$Int64$GT $tmp448;
    panda$core$String$Index $tmp468;
    panda$core$Char8 c485;
    panda$core$Int64 old486;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp506;
    panda$core$String$Index $tmp527;
    panda$core$Char8 c551;
    step420 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current421 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp422 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step420, ((panda$core$Int64) { 0 }));
    if ($tmp422.value) {
    {
        panda$core$String$Index $tmp423 = panda$core$String$start$R$panda$core$String$Index(self);
        current421 = $tmp423.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp424 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp425 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp424);
        current421 = $tmp425.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end426 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp427 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step420, ((panda$core$Int64) { 0 }));
    if ($tmp427.value) {
    {
        panda$core$String$Index $tmp428 = panda$core$String$end$R$panda$core$String$Index(self);
        end426 = $tmp428.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp429 = panda$core$String$start$R$panda$core$String$Index(self);
        end426 = $tmp429.value;
    }
    }
    }
    panda$core$MutableString* $tmp431 = (panda$core$MutableString*) malloc(40);
    $tmp431->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp431->refCount.value = 1;
    panda$core$MutableString$init($tmp431);
    result430 = $tmp431;
    panda$core$Bit $tmp433 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp433.value) {
    {
        $l434:;
        panda$core$Bit $tmp436 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current421, end426);
        if (!$tmp436.value) goto $l435;
        {
            c437 = self->data[current421.value];
            panda$core$MutableString$append$panda$core$Char8(result430, c437);
            panda$core$Int64 $tmp438 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
            current421 = $tmp438;
            int64_t $tmp439 = ((int64_t) c437.value) & 255;
            bool $tmp440 = $tmp439 >= 192;
            if (((panda$core$Bit) { $tmp440 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
                panda$core$Int64 $tmp441 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
                current421 = $tmp441;
            }
            }
            int64_t $tmp442 = ((int64_t) c437.value) & 255;
            bool $tmp443 = $tmp442 >= 224;
            if (((panda$core$Bit) { $tmp443 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
                panda$core$Int64 $tmp444 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
                current421 = $tmp444;
            }
            }
            int64_t $tmp445 = ((int64_t) c437.value) & 255;
            bool $tmp446 = $tmp445 >= 240;
            if (((panda$core$Bit) { $tmp446 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
                panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
                current421 = $tmp447;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp448, ((panda$core$Int64) { 1 }), step420, ((panda$core$Bit) { false }));
            int64_t $tmp450 = $tmp448.min.value;
            panda$core$Int64 i449 = { $tmp450 };
            int64_t $tmp452 = $tmp448.max.value;
            bool $tmp453 = $tmp448.inclusive.value;
            bool $tmp460 = 1 > 0;
            if ($tmp460) goto $l458; else goto $l459;
            $l458:;
            if ($tmp453) goto $l461; else goto $l462;
            $l461:;
            if ($tmp450 <= $tmp452) goto $l454; else goto $l456;
            $l462:;
            if ($tmp450 < $tmp452) goto $l454; else goto $l456;
            $l459:;
            if ($tmp453) goto $l463; else goto $l464;
            $l463:;
            if ($tmp450 >= $tmp452) goto $l454; else goto $l456;
            $l464:;
            if ($tmp450 > $tmp452) goto $l454; else goto $l456;
            $l454:;
            {
                panda$core$Bit $tmp466 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current421, end426);
                if ($tmp466.value) {
                {
                    panda$core$String* $tmp467 = panda$core$MutableString$convert$R$panda$core$String(result430);
                    return $tmp467;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp468, current421);
                panda$core$String$Index $tmp469 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp468);
                current421 = $tmp469.value;
            }
            $l457:;
            if ($tmp460) goto $l471; else goto $l472;
            $l471:;
            int64_t $tmp473 = $tmp452 - i449.value;
            if ($tmp453) goto $l474; else goto $l475;
            $l474:;
            if ($tmp473 >= 1) goto $l470; else goto $l456;
            $l475:;
            if ($tmp473 > 1) goto $l470; else goto $l456;
            $l472:;
            int64_t $tmp477 = i449.value - $tmp452;
            if ($tmp453) goto $l478; else goto $l479;
            $l478:;
            if ($tmp477 >= -1) goto $l470; else goto $l456;
            $l479:;
            if ($tmp477 > -1) goto $l470; else goto $l456;
            $l470:;
            i449.value += 1;
            goto $l454;
            $l456:;
        }
        goto $l434;
        $l435:;
    }
    }
    else {
    {
        panda$core$Bit $tmp481 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp481.value);
        $l482:;
        panda$core$Bit $tmp484 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current421, end426);
        if (!$tmp484.value) goto $l483;
        {
            c485 = self->data[current421.value];
            panda$core$MutableString$append$panda$core$Char8(result430, c485);
            old486 = current421;
            panda$core$Int64 $tmp487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
            current421 = $tmp487;
            int64_t $tmp488 = ((int64_t) c485.value) & 255;
            bool $tmp489 = $tmp488 >= 192;
            if (((panda$core$Bit) { $tmp489 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
                panda$core$Int64 $tmp490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
                current421 = $tmp490;
            }
            }
            int64_t $tmp491 = ((int64_t) c485.value) & 255;
            bool $tmp492 = $tmp491 >= 224;
            if (((panda$core$Bit) { $tmp492 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
                panda$core$Int64 $tmp493 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
                current421 = $tmp493;
            }
            }
            int64_t $tmp494 = ((int64_t) c485.value) & 255;
            bool $tmp495 = $tmp494 >= 240;
            if (((panda$core$Bit) { $tmp495 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
            }
            }
            panda$core$Int64 $tmp496 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old486, ((panda$core$Int64) { 1 }));
            current421 = $tmp496;
            $l497:;
            int64_t $tmp500 = ((int64_t) self->data[current421.value].value) & 255;
            bool $tmp501 = $tmp500 >= 128;
            bool $tmp499 = $tmp501;
            if (!$tmp499) goto $l502;
            int64_t $tmp503 = ((int64_t) self->data[current421.value].value) & 255;
            bool $tmp504 = $tmp503 < 192;
            $tmp499 = $tmp504;
            $l502:;
            if (!((panda$core$Bit) { $tmp499 }).value) goto $l498;
            {
                panda$core$Int64 $tmp505 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
                current421 = $tmp505;
            }
            goto $l497;
            $l498:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp506, ((panda$core$Int64) { -1 }), step420, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp508 = $tmp506.start.value;
            panda$core$Int64 i507 = { $tmp508 };
            int64_t $tmp510 = $tmp506.end.value;
            int64_t $tmp511 = $tmp506.step.value;
            bool $tmp512 = $tmp506.inclusive.value;
            bool $tmp519 = $tmp511 > 0;
            if ($tmp519) goto $l517; else goto $l518;
            $l517:;
            if ($tmp512) goto $l520; else goto $l521;
            $l520:;
            if ($tmp508 <= $tmp510) goto $l513; else goto $l515;
            $l521:;
            if ($tmp508 < $tmp510) goto $l513; else goto $l515;
            $l518:;
            if ($tmp512) goto $l522; else goto $l523;
            $l522:;
            if ($tmp508 >= $tmp510) goto $l513; else goto $l515;
            $l523:;
            if ($tmp508 > $tmp510) goto $l513; else goto $l515;
            $l513:;
            {
                panda$core$Bit $tmp525 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current421, end426);
                if ($tmp525.value) {
                {
                    panda$core$String* $tmp526 = panda$core$MutableString$convert$R$panda$core$String(result430);
                    return $tmp526;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp527, current421);
                panda$core$String$Index $tmp528 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp527);
                current421 = $tmp528.value;
            }
            $l516:;
            if ($tmp519) goto $l530; else goto $l531;
            $l530:;
            int64_t $tmp532 = $tmp510 - i507.value;
            if ($tmp512) goto $l533; else goto $l534;
            $l533:;
            if ($tmp532 >= $tmp511) goto $l529; else goto $l515;
            $l534:;
            if ($tmp532 > $tmp511) goto $l529; else goto $l515;
            $l531:;
            int64_t $tmp536 = i507.value - $tmp510;
            if ($tmp512) goto $l537; else goto $l538;
            $l537:;
            if ($tmp536 >= -$tmp511) goto $l529; else goto $l515;
            $l538:;
            if ($tmp536 > -$tmp511) goto $l529; else goto $l515;
            $l529:;
            i507.value += $tmp511;
            goto $l513;
            $l515:;
        }
        goto $l482;
        $l483:;
    }
    }
    bool $tmp542 = p_r.inclusive.value;
    if ($tmp542) goto $l543;
    $tmp542 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l543:;
    panda$core$Bit $tmp544 = { $tmp542 };
    bool $tmp541 = $tmp544.value;
    if (!$tmp541) goto $l545;
    panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current421, end426);
    $tmp541 = $tmp546.value;
    $l545:;
    panda$core$Bit $tmp547 = { $tmp541 };
    bool $tmp540 = $tmp547.value;
    if (!$tmp540) goto $l548;
    panda$core$Bit $tmp549 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end426, self->_length);
    $tmp540 = $tmp549.value;
    $l548:;
    panda$core$Bit $tmp550 = { $tmp540 };
    if ($tmp550.value) {
    {
        c551 = self->data[current421.value];
        panda$core$MutableString$append$panda$core$Char8(result430, c551);
        panda$core$Int64 $tmp552 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
        current421 = $tmp552;
        int64_t $tmp553 = ((int64_t) c551.value) & 255;
        bool $tmp554 = $tmp553 >= 192;
        if (((panda$core$Bit) { $tmp554 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
            panda$core$Int64 $tmp555 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
            current421 = $tmp555;
        }
        }
        int64_t $tmp556 = ((int64_t) c551.value) & 255;
        bool $tmp557 = $tmp556 >= 224;
        if (((panda$core$Bit) { $tmp557 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
            panda$core$Int64 $tmp558 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current421, ((panda$core$Int64) { 1 }));
            current421 = $tmp558;
        }
        }
        int64_t $tmp559 = ((int64_t) c551.value) & 255;
        bool $tmp560 = $tmp559 >= 240;
        if (((panda$core$Bit) { $tmp560 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result430, self->data[current421.value]);
        }
        }
    }
    }
    panda$core$String* $tmp561 = panda$core$MutableString$convert$R$panda$core$String(result430);
    return $tmp561;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start562;
    panda$core$String$Index$nullable end565;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp568;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp563 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp564 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp563, ((panda$core$Int64) p_r.min.value));
        start562 = ((panda$core$String$Index$nullable) { $tmp564, true });
    }
    }
    else {
    {
        start562 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp566 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp567 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp566, ((panda$core$Int64) p_r.max.value));
        end565 = ((panda$core$String$Index$nullable) { $tmp567, true });
    }
    }
    else {
    {
        end565 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp568, start562, end565, p_r.inclusive);
    panda$core$String* $tmp569 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp568);
    return $tmp569;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start570;
    panda$core$String$Index$nullable end573;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp576;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp571 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp572 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp571, ((panda$core$Int64) p_r.start.value));
        start570 = ((panda$core$String$Index$nullable) { $tmp572, true });
    }
    }
    else {
    {
        start570 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp574 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp575 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp574, ((panda$core$Int64) p_r.end.value));
        end573 = ((panda$core$String$Index$nullable) { $tmp575, true });
    }
    }
    else {
    {
        end573 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp576, start570, end573, p_r.step, p_r.inclusive);
    panda$core$String* $tmp577 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp576);
    return $tmp577;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp578;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp578, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp580 = $tmp578.min.value;
    panda$core$Int64 i579 = { $tmp580 };
    int64_t $tmp582 = $tmp578.max.value;
    bool $tmp583 = $tmp578.inclusive.value;
    bool $tmp590 = 1 > 0;
    if ($tmp590) goto $l588; else goto $l589;
    $l588:;
    if ($tmp583) goto $l591; else goto $l592;
    $l591:;
    if ($tmp580 <= $tmp582) goto $l584; else goto $l586;
    $l592:;
    if ($tmp580 < $tmp582) goto $l584; else goto $l586;
    $l589:;
    if ($tmp583) goto $l593; else goto $l594;
    $l593:;
    if ($tmp580 >= $tmp582) goto $l584; else goto $l586;
    $l594:;
    if ($tmp580 > $tmp582) goto $l584; else goto $l586;
    $l584:;
    {
        panda$core$Bit $tmp596 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i579.value], p_c);
        if ($tmp596.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l587:;
    if ($tmp590) goto $l598; else goto $l599;
    $l598:;
    int64_t $tmp600 = $tmp582 - i579.value;
    if ($tmp583) goto $l601; else goto $l602;
    $l601:;
    if ($tmp600 >= 1) goto $l597; else goto $l586;
    $l602:;
    if ($tmp600 > 1) goto $l597; else goto $l586;
    $l599:;
    int64_t $tmp604 = i579.value - $tmp582;
    if ($tmp583) goto $l605; else goto $l606;
    $l605:;
    if ($tmp604 >= -1) goto $l597; else goto $l586;
    $l606:;
    if ($tmp604 > -1) goto $l597; else goto $l586;
    $l597:;
    i579.value += 1;
    goto $l584;
    $l586:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp608 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp608.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp609 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp610 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp609);
    return $tmp610;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp612;
    panda$core$Range$LTpanda$core$Int64$GT $tmp631;
    panda$core$String$Index $tmp662;
    panda$core$Bit $tmp611 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp611.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp613 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp612, p_start.value, $tmp613, ((panda$core$Bit) { true }));
    int64_t $tmp615 = $tmp612.min.value;
    panda$core$Int64 i614 = { $tmp615 };
    int64_t $tmp617 = $tmp612.max.value;
    bool $tmp618 = $tmp612.inclusive.value;
    bool $tmp625 = 1 > 0;
    if ($tmp625) goto $l623; else goto $l624;
    $l623:;
    if ($tmp618) goto $l626; else goto $l627;
    $l626:;
    if ($tmp615 <= $tmp617) goto $l619; else goto $l621;
    $l627:;
    if ($tmp615 < $tmp617) goto $l619; else goto $l621;
    $l624:;
    if ($tmp618) goto $l628; else goto $l629;
    $l628:;
    if ($tmp615 >= $tmp617) goto $l619; else goto $l621;
    $l629:;
    if ($tmp615 > $tmp617) goto $l619; else goto $l621;
    $l619:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp631, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp633 = $tmp631.min.value;
        panda$core$Int64 j632 = { $tmp633 };
        int64_t $tmp635 = $tmp631.max.value;
        bool $tmp636 = $tmp631.inclusive.value;
        bool $tmp643 = 1 > 0;
        if ($tmp643) goto $l641; else goto $l642;
        $l641:;
        if ($tmp636) goto $l644; else goto $l645;
        $l644:;
        if ($tmp633 <= $tmp635) goto $l637; else goto $l639;
        $l645:;
        if ($tmp633 < $tmp635) goto $l637; else goto $l639;
        $l642:;
        if ($tmp636) goto $l646; else goto $l647;
        $l646:;
        if ($tmp633 >= $tmp635) goto $l637; else goto $l639;
        $l647:;
        if ($tmp633 > $tmp635) goto $l637; else goto $l639;
        $l637:;
        {
            panda$core$Int64 $tmp649 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i614, j632);
            panda$core$Bit $tmp650 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp649.value], p_s->data[j632.value]);
            if ($tmp650.value) {
            {
                goto $l622;
            }
            }
        }
        $l640:;
        if ($tmp643) goto $l652; else goto $l653;
        $l652:;
        int64_t $tmp654 = $tmp635 - j632.value;
        if ($tmp636) goto $l655; else goto $l656;
        $l655:;
        if ($tmp654 >= 1) goto $l651; else goto $l639;
        $l656:;
        if ($tmp654 > 1) goto $l651; else goto $l639;
        $l653:;
        int64_t $tmp658 = j632.value - $tmp635;
        if ($tmp636) goto $l659; else goto $l660;
        $l659:;
        if ($tmp658 >= -1) goto $l651; else goto $l639;
        $l660:;
        if ($tmp658 > -1) goto $l651; else goto $l639;
        $l651:;
        j632.value += 1;
        goto $l637;
        $l639:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp662, i614);
        return ((panda$core$String$Index$nullable) { $tmp662, true });
    }
    $l622:;
    if ($tmp625) goto $l664; else goto $l665;
    $l664:;
    int64_t $tmp666 = $tmp617 - i614.value;
    if ($tmp618) goto $l667; else goto $l668;
    $l667:;
    if ($tmp666 >= 1) goto $l663; else goto $l621;
    $l668:;
    if ($tmp666 > 1) goto $l663; else goto $l621;
    $l665:;
    int64_t $tmp670 = i614.value - $tmp617;
    if ($tmp618) goto $l671; else goto $l672;
    $l671:;
    if ($tmp670 >= -1) goto $l663; else goto $l621;
    $l672:;
    if ($tmp670 > -1) goto $l663; else goto $l621;
    $l663:;
    i614.value += 1;
    goto $l619;
    $l621:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp674 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp675 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp674);
    return $tmp675;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos677;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp680;
    panda$core$Range$LTpanda$core$Int64$GT $tmp699;
    panda$core$String$Index $tmp730;
    panda$core$Bit $tmp676 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp676.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp678 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp679 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp678);
    startPos677 = $tmp679;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp680, startPos677, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp682 = $tmp680.start.value;
    panda$core$Int64 i681 = { $tmp682 };
    int64_t $tmp684 = $tmp680.end.value;
    int64_t $tmp685 = $tmp680.step.value;
    bool $tmp686 = $tmp680.inclusive.value;
    bool $tmp693 = $tmp685 > 0;
    if ($tmp693) goto $l691; else goto $l692;
    $l691:;
    if ($tmp686) goto $l694; else goto $l695;
    $l694:;
    if ($tmp682 <= $tmp684) goto $l687; else goto $l689;
    $l695:;
    if ($tmp682 < $tmp684) goto $l687; else goto $l689;
    $l692:;
    if ($tmp686) goto $l696; else goto $l697;
    $l696:;
    if ($tmp682 >= $tmp684) goto $l687; else goto $l689;
    $l697:;
    if ($tmp682 > $tmp684) goto $l687; else goto $l689;
    $l687:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp699, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp701 = $tmp699.min.value;
        panda$core$Int64 j700 = { $tmp701 };
        int64_t $tmp703 = $tmp699.max.value;
        bool $tmp704 = $tmp699.inclusive.value;
        bool $tmp711 = 1 > 0;
        if ($tmp711) goto $l709; else goto $l710;
        $l709:;
        if ($tmp704) goto $l712; else goto $l713;
        $l712:;
        if ($tmp701 <= $tmp703) goto $l705; else goto $l707;
        $l713:;
        if ($tmp701 < $tmp703) goto $l705; else goto $l707;
        $l710:;
        if ($tmp704) goto $l714; else goto $l715;
        $l714:;
        if ($tmp701 >= $tmp703) goto $l705; else goto $l707;
        $l715:;
        if ($tmp701 > $tmp703) goto $l705; else goto $l707;
        $l705:;
        {
            panda$core$Int64 $tmp717 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i681, j700);
            panda$core$Bit $tmp718 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp717.value], p_s->data[j700.value]);
            if ($tmp718.value) {
            {
                goto $l690;
            }
            }
        }
        $l708:;
        if ($tmp711) goto $l720; else goto $l721;
        $l720:;
        int64_t $tmp722 = $tmp703 - j700.value;
        if ($tmp704) goto $l723; else goto $l724;
        $l723:;
        if ($tmp722 >= 1) goto $l719; else goto $l707;
        $l724:;
        if ($tmp722 > 1) goto $l719; else goto $l707;
        $l721:;
        int64_t $tmp726 = j700.value - $tmp703;
        if ($tmp704) goto $l727; else goto $l728;
        $l727:;
        if ($tmp726 >= -1) goto $l719; else goto $l707;
        $l728:;
        if ($tmp726 > -1) goto $l719; else goto $l707;
        $l719:;
        j700.value += 1;
        goto $l705;
        $l707:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp730, i681);
        return ((panda$core$String$Index$nullable) { $tmp730, true });
    }
    $l690:;
    if ($tmp693) goto $l732; else goto $l733;
    $l732:;
    int64_t $tmp734 = $tmp684 - i681.value;
    if ($tmp686) goto $l735; else goto $l736;
    $l735:;
    if ($tmp734 >= $tmp685) goto $l731; else goto $l689;
    $l736:;
    if ($tmp734 > $tmp685) goto $l731; else goto $l689;
    $l733:;
    int64_t $tmp738 = i681.value - $tmp684;
    if ($tmp686) goto $l739; else goto $l740;
    $l739:;
    if ($tmp738 >= -$tmp685) goto $l731; else goto $l689;
    $l740:;
    if ($tmp738 > -$tmp685) goto $l731; else goto $l689;
    $l731:;
    i681.value += $tmp685;
    goto $l687;
    $l689:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result742;
    panda$core$String$Index index745;
    panda$core$String$Index$nullable nextIndex749;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp751;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp753;
    panda$core$String$Index $tmp755;
    panda$core$MutableString* $tmp743 = (panda$core$MutableString*) malloc(40);
    $tmp743->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp743->refCount.value = 1;
    panda$core$MutableString$init($tmp743);
    result742 = $tmp743;
    panda$core$String$Index $tmp746 = panda$core$String$start$R$panda$core$String$Index(self);
    index745 = $tmp746;
    $l747:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp750 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index745);
        nextIndex749 = $tmp750;
        if (((panda$core$Bit) { !nextIndex749.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp751, ((panda$core$String$Index$nullable) { index745, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp752 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp751);
            panda$core$MutableString$append$panda$core$String(result742, $tmp752);
            goto $l748;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp753, ((panda$core$String$Index$nullable) { index745, true }), nextIndex749, ((panda$core$Bit) { false }));
        panda$core$String* $tmp754 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp753);
        panda$core$MutableString$append$panda$core$String(result742, $tmp754);
        panda$core$MutableString$append$panda$core$String(result742, p_replacement);
        panda$core$Int64 $tmp756 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex749.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp755, $tmp756);
        index745 = $tmp755;
    }
    }
    $l748:;
    panda$core$String* $tmp757 = panda$core$MutableString$convert$R$panda$core$String(result742);
    return $tmp757;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp758;
    panda$core$String$Index$init$panda$core$Int64(&$tmp758, ((panda$core$Int64) { 0 }));
    return $tmp758;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp759;
    panda$core$String$Index$init$panda$core$Int64(&$tmp759, self->_length);
    return $tmp759;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c761;
    panda$core$String$Index $tmp764;
    panda$core$String$Index $tmp767;
    panda$core$String$Index $tmp770;
    panda$core$String$Index $tmp772;
    panda$core$Bit $tmp760 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp760.value);
    int64_t $tmp762 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c761 = $tmp762;
    bool $tmp763 = c761 >= 240;
    if (((panda$core$Bit) { $tmp763 }).value) {
    {
        panda$core$Int64 $tmp765 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp764, $tmp765);
        return $tmp764;
    }
    }
    bool $tmp766 = c761 >= 224;
    if (((panda$core$Bit) { $tmp766 }).value) {
    {
        panda$core$Int64 $tmp768 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp767, $tmp768);
        return $tmp767;
    }
    }
    bool $tmp769 = c761 >= 192;
    if (((panda$core$Bit) { $tmp769 }).value) {
    {
        panda$core$Int64 $tmp771 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp770, $tmp771);
        return $tmp770;
    }
    }
    panda$core$Int64 $tmp773 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp772, $tmp773);
    return $tmp772;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue775;
    panda$core$String$Index $tmp786;
    panda$core$Bit $tmp774 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp774.value);
    panda$core$Int64 $tmp776 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue775 = $tmp776;
    $l777:;
    int64_t $tmp780 = ((int64_t) self->data[newValue775.value].value) & 255;
    bool $tmp781 = $tmp780 >= 128;
    bool $tmp779 = $tmp781;
    if (!$tmp779) goto $l782;
    int64_t $tmp783 = ((int64_t) self->data[newValue775.value].value) & 255;
    bool $tmp784 = $tmp783 < 192;
    $tmp779 = $tmp784;
    $l782:;
    if (!((panda$core$Bit) { $tmp779 }).value) goto $l778;
    {
        panda$core$Int64 $tmp785 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue775, ((panda$core$Int64) { 1 }));
        newValue775 = $tmp785;
    }
    goto $l777;
    $l778:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp786, newValue775);
    return $tmp786;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result787;
    panda$core$Range$LTpanda$core$Int64$GT $tmp789;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp819;
    result787 = p_index;
    panda$core$Bit $tmp788 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp788.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp789, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp791 = $tmp789.min.value;
        panda$core$Int64 i790 = { $tmp791 };
        int64_t $tmp793 = $tmp789.max.value;
        bool $tmp794 = $tmp789.inclusive.value;
        bool $tmp801 = 1 > 0;
        if ($tmp801) goto $l799; else goto $l800;
        $l799:;
        if ($tmp794) goto $l802; else goto $l803;
        $l802:;
        if ($tmp791 <= $tmp793) goto $l795; else goto $l797;
        $l803:;
        if ($tmp791 < $tmp793) goto $l795; else goto $l797;
        $l800:;
        if ($tmp794) goto $l804; else goto $l805;
        $l804:;
        if ($tmp791 >= $tmp793) goto $l795; else goto $l797;
        $l805:;
        if ($tmp791 > $tmp793) goto $l795; else goto $l797;
        $l795:;
        {
            panda$core$String$Index $tmp807 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result787);
            result787 = $tmp807;
        }
        $l798:;
        if ($tmp801) goto $l809; else goto $l810;
        $l809:;
        int64_t $tmp811 = $tmp793 - i790.value;
        if ($tmp794) goto $l812; else goto $l813;
        $l812:;
        if ($tmp811 >= 1) goto $l808; else goto $l797;
        $l813:;
        if ($tmp811 > 1) goto $l808; else goto $l797;
        $l810:;
        int64_t $tmp815 = i790.value - $tmp793;
        if ($tmp794) goto $l816; else goto $l817;
        $l816:;
        if ($tmp815 >= -1) goto $l808; else goto $l797;
        $l817:;
        if ($tmp815 > -1) goto $l808; else goto $l797;
        $l808:;
        i790.value += 1;
        goto $l795;
        $l797:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp819, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp821 = $tmp819.start.value;
        panda$core$Int64 i820 = { $tmp821 };
        int64_t $tmp823 = $tmp819.end.value;
        int64_t $tmp824 = $tmp819.step.value;
        bool $tmp825 = $tmp819.inclusive.value;
        bool $tmp832 = $tmp824 > 0;
        if ($tmp832) goto $l830; else goto $l831;
        $l830:;
        if ($tmp825) goto $l833; else goto $l834;
        $l833:;
        if ($tmp821 <= $tmp823) goto $l826; else goto $l828;
        $l834:;
        if ($tmp821 < $tmp823) goto $l826; else goto $l828;
        $l831:;
        if ($tmp825) goto $l835; else goto $l836;
        $l835:;
        if ($tmp821 >= $tmp823) goto $l826; else goto $l828;
        $l836:;
        if ($tmp821 > $tmp823) goto $l826; else goto $l828;
        $l826:;
        {
            panda$core$String$Index $tmp838 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result787);
            result787 = $tmp838;
        }
        $l829:;
        if ($tmp832) goto $l840; else goto $l841;
        $l840:;
        int64_t $tmp842 = $tmp823 - i820.value;
        if ($tmp825) goto $l843; else goto $l844;
        $l843:;
        if ($tmp842 >= $tmp824) goto $l839; else goto $l828;
        $l844:;
        if ($tmp842 > $tmp824) goto $l839; else goto $l828;
        $l841:;
        int64_t $tmp846 = i820.value - $tmp823;
        if ($tmp825) goto $l847; else goto $l848;
        $l847:;
        if ($tmp846 >= -$tmp824) goto $l839; else goto $l828;
        $l848:;
        if ($tmp846 > -$tmp824) goto $l839; else goto $l828;
        $l839:;
        i820.value += $tmp824;
        goto $l826;
        $l828:;
    }
    }
    return result787;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp850 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp850;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result851;
    panda$core$String$Index index854;
    panda$core$String$Index$nullable nextIndex858;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp867;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp869;
    panda$collections$Array* $tmp852 = (panda$collections$Array*) malloc(40);
    $tmp852->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp852->refCount.value = 1;
    panda$collections$Array$init($tmp852);
    result851 = $tmp852;
    panda$core$String$Index $tmp855 = panda$core$String$start$R$panda$core$String$Index(self);
    index854 = $tmp855;
    $l856:;
    while (true) {
    {
        panda$core$Bit $tmp859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp859.value) {
        {
            panda$core$String$Index $tmp860 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index854);
            nextIndex858 = ((panda$core$String$Index$nullable) { $tmp860, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp861 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index854);
            nextIndex858 = $tmp861;
        }
        }
        bool $tmp862 = ((panda$core$Bit) { !nextIndex858.nonnull }).value;
        if ($tmp862) goto $l863;
        panda$core$Int64 $tmp864 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result851->count, $tmp864);
        $tmp862 = $tmp865.value;
        $l863:;
        panda$core$Bit $tmp866 = { $tmp862 };
        if ($tmp866.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp867, ((panda$core$String$Index$nullable) { index854, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp868 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp867);
            panda$collections$Array$add$panda$collections$Array$T(result851, ((panda$core$Object*) $tmp868));
            goto $l857;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp869, ((panda$core$String$Index$nullable) { index854, true }), nextIndex858, ((panda$core$Bit) { false }));
        panda$core$String* $tmp870 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp869);
        panda$collections$Array$add$panda$collections$Array$T(result851, ((panda$core$Object*) $tmp870));
        panda$core$String$Index $tmp871 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex858.value), p_delimiter->_length);
        index854 = $tmp871;
    }
    }
    $l857:;
    return result851;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result873;
    panda$core$Int64 start874;
    panda$core$Char8 $tmp875;
    panda$core$Range$LTpanda$core$Int64$GT $tmp877;
    panda$core$Int64 digit895;
    panda$core$Char8 $tmp915;
    panda$core$Bit $tmp872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp872.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result873 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp875, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp876 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp875);
    if ($tmp876.value) {
    {
        start874 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start874 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp877, start874, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp879 = $tmp877.min.value;
    panda$core$Int64 i878 = { $tmp879 };
    int64_t $tmp881 = $tmp877.max.value;
    bool $tmp882 = $tmp877.inclusive.value;
    bool $tmp889 = 1 > 0;
    if ($tmp889) goto $l887; else goto $l888;
    $l887:;
    if ($tmp882) goto $l890; else goto $l891;
    $l890:;
    if ($tmp879 <= $tmp881) goto $l883; else goto $l885;
    $l891:;
    if ($tmp879 < $tmp881) goto $l883; else goto $l885;
    $l888:;
    if ($tmp882) goto $l892; else goto $l893;
    $l892:;
    if ($tmp879 >= $tmp881) goto $l883; else goto $l885;
    $l893:;
    if ($tmp879 > $tmp881) goto $l883; else goto $l885;
    $l883:;
    {
        panda$core$Int64 $tmp896 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i878.value].value) }), ((panda$core$Int64) { 48 }));
        digit895 = $tmp896;
        panda$core$Bit $tmp898 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit895, ((panda$core$Int64) { 0 }));
        bool $tmp897 = $tmp898.value;
        if ($tmp897) goto $l899;
        panda$core$Bit $tmp900 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit895, ((panda$core$Int64) { 9 }));
        $tmp897 = $tmp900.value;
        $l899:;
        panda$core$Bit $tmp901 = { $tmp897 };
        if ($tmp901.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp902 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result873, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp903 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp902, digit895);
        result873 = $tmp903;
    }
    $l886:;
    if ($tmp889) goto $l905; else goto $l906;
    $l905:;
    int64_t $tmp907 = $tmp881 - i878.value;
    if ($tmp882) goto $l908; else goto $l909;
    $l908:;
    if ($tmp907 >= 1) goto $l904; else goto $l885;
    $l909:;
    if ($tmp907 > 1) goto $l904; else goto $l885;
    $l906:;
    int64_t $tmp911 = i878.value - $tmp881;
    if ($tmp882) goto $l912; else goto $l913;
    $l912:;
    if ($tmp911 >= -1) goto $l904; else goto $l885;
    $l913:;
    if ($tmp911 > -1) goto $l904; else goto $l885;
    $l904:;
    i878.value += 1;
    goto $l883;
    $l885:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp915, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp916 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp915);
    if ($tmp916.value) {
    {
        panda$core$Int64 $tmp917 = panda$core$Int64$$SUB$R$panda$core$Int64(result873);
        result873 = $tmp917;
    }
    }
    return ((panda$core$Int64$nullable) { result873, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result919;
    panda$core$Range$LTpanda$core$Int64$GT $tmp920;
    panda$core$UInt64 digit938;
    panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp918.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result919 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp920, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp922 = $tmp920.min.value;
    panda$core$Int64 i921 = { $tmp922 };
    int64_t $tmp924 = $tmp920.max.value;
    bool $tmp925 = $tmp920.inclusive.value;
    bool $tmp932 = 1 > 0;
    if ($tmp932) goto $l930; else goto $l931;
    $l930:;
    if ($tmp925) goto $l933; else goto $l934;
    $l933:;
    if ($tmp922 <= $tmp924) goto $l926; else goto $l928;
    $l934:;
    if ($tmp922 < $tmp924) goto $l926; else goto $l928;
    $l931:;
    if ($tmp925) goto $l935; else goto $l936;
    $l935:;
    if ($tmp922 >= $tmp924) goto $l926; else goto $l928;
    $l936:;
    if ($tmp922 > $tmp924) goto $l926; else goto $l928;
    $l926:;
    {
        panda$core$UInt64 $tmp939 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i921.value].value) }), ((panda$core$UInt64) { 48 }));
        digit938 = $tmp939;
        panda$core$Bit $tmp941 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit938, ((panda$core$UInt64) { 0 }));
        bool $tmp940 = $tmp941.value;
        if ($tmp940) goto $l942;
        panda$core$Bit $tmp943 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit938, ((panda$core$UInt64) { 9 }));
        $tmp940 = $tmp943.value;
        $l942:;
        panda$core$Bit $tmp944 = { $tmp940 };
        if ($tmp944.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp945 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result919, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp946 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp945, digit938);
        result919 = $tmp946;
    }
    $l929:;
    if ($tmp932) goto $l948; else goto $l949;
    $l948:;
    int64_t $tmp950 = $tmp924 - i921.value;
    if ($tmp925) goto $l951; else goto $l952;
    $l951:;
    if ($tmp950 >= 1) goto $l947; else goto $l928;
    $l952:;
    if ($tmp950 > 1) goto $l947; else goto $l928;
    $l949:;
    int64_t $tmp954 = i921.value - $tmp924;
    if ($tmp925) goto $l955; else goto $l956;
    $l955:;
    if ($tmp954 >= -1) goto $l947; else goto $l928;
    $l956:;
    if ($tmp954 > -1) goto $l947; else goto $l928;
    $l947:;
    i921.value += 1;
    goto $l926;
    $l928:;
    return ((panda$core$UInt64$nullable) { result919, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result958;
    panda$core$Range$LTpanda$core$Int64$GT $tmp959;
    result958 = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp959, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp961 = $tmp959.min.value;
    panda$core$Int64 i960 = { $tmp961 };
    int64_t $tmp963 = $tmp959.max.value;
    bool $tmp964 = $tmp959.inclusive.value;
    bool $tmp971 = 1 > 0;
    if ($tmp971) goto $l969; else goto $l970;
    $l969:;
    if ($tmp964) goto $l972; else goto $l973;
    $l972:;
    if ($tmp961 <= $tmp963) goto $l965; else goto $l967;
    $l973:;
    if ($tmp961 < $tmp963) goto $l965; else goto $l967;
    $l970:;
    if ($tmp964) goto $l974; else goto $l975;
    $l974:;
    if ($tmp961 >= $tmp963) goto $l965; else goto $l967;
    $l975:;
    if ($tmp961 > $tmp963) goto $l965; else goto $l967;
    $l965:;
    {
        panda$core$Int64 $tmp977 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result958, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp978 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp977, ((panda$core$Int64) { ((int64_t) self->data[i960.value].value) }));
        result958 = $tmp978;
    }
    $l968:;
    if ($tmp971) goto $l980; else goto $l981;
    $l980:;
    int64_t $tmp982 = $tmp963 - i960.value;
    if ($tmp964) goto $l983; else goto $l984;
    $l983:;
    if ($tmp982 >= 1) goto $l979; else goto $l967;
    $l984:;
    if ($tmp982 > 1) goto $l979; else goto $l967;
    $l981:;
    int64_t $tmp986 = i960.value - $tmp963;
    if ($tmp964) goto $l987; else goto $l988;
    $l987:;
    if ($tmp986 >= -1) goto $l979; else goto $l967;
    $l988:;
    if ($tmp986 > -1) goto $l979; else goto $l967;
    $l979:;
    i960.value += 1;
    goto $l965;
    $l967:;
    return result958;
}

