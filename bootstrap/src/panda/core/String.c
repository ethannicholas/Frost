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

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

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
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp338 = (panda$core$String*) malloc(33);
    $tmp338->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp338->refCount.value = 1;
    panda$core$Int64 $tmp340 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp338, (self->data + p_r.min.value.value), $tmp340, ((panda$core$Bit) { false }));
    return $tmp338;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min341;
    panda$core$String$Index max343;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp346;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min341 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp342 = panda$core$String$start$R$panda$core$String$Index(self);
        min341 = $tmp342;
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max343 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp344 = panda$core$String$end$R$panda$core$String$Index(self);
        max343 = $tmp344;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp345 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, max343, ((panda$core$Int64) { -1 }));
            max343 = $tmp345;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp346, min341, max343, p_r.inclusive);
    panda$core$String* $tmp347 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp346);
    return $tmp347;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current348;
    panda$core$MutableString* result349;
    panda$core$Int64 max352;
    panda$core$Char8 c357;
    current348 = p_r.min.value;
    panda$core$MutableString* $tmp350 = (panda$core$MutableString*) malloc(40);
    $tmp350->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp350->refCount.value = 1;
    panda$core$MutableString$init($tmp350);
    result349 = $tmp350;
    max352 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp353 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max352, ((panda$core$Int64) { 1 }));
        max352 = $tmp353;
    }
    }
    $l354:;
    panda$core$Bit $tmp356 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current348, max352);
    if (!$tmp356.value) goto $l355;
    {
        c357 = self->data[current348.value];
        panda$core$MutableString$append$panda$core$Char8(result349, c357);
        panda$core$Int64 $tmp358 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current348, ((panda$core$Int64) { 1 }));
        current348 = $tmp358;
        int64_t $tmp359 = ((int64_t) c357.value) & 255;
        bool $tmp360 = $tmp359 >= 192;
        if (((panda$core$Bit) { $tmp360 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result349, self->data[current348.value]);
            panda$core$Int64 $tmp361 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current348, ((panda$core$Int64) { 1 }));
            current348 = $tmp361;
        }
        }
        int64_t $tmp362 = ((int64_t) c357.value) & 255;
        bool $tmp363 = $tmp362 >= 224;
        if (((panda$core$Bit) { $tmp363 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result349, self->data[current348.value]);
            panda$core$Int64 $tmp364 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current348, ((panda$core$Int64) { 1 }));
            current348 = $tmp364;
        }
        }
        int64_t $tmp365 = ((int64_t) c357.value) & 255;
        bool $tmp366 = $tmp365 >= 240;
        if (((panda$core$Bit) { $tmp366 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result349, self->data[current348.value]);
            panda$core$Int64 $tmp367 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current348, ((panda$core$Int64) { 1 }));
            current348 = $tmp367;
        }
        }
    }
    goto $l354;
    $l355:;
    panda$core$String* $tmp368 = panda$core$MutableString$convert$R$panda$core$String(result349);
    return $tmp368;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min369;
    panda$core$String$Index max371;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp374;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min369 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp370 = panda$core$String$start$R$panda$core$String$Index(self);
        min369 = $tmp370;
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max371 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp372 = panda$core$String$end$R$panda$core$String$Index(self);
        max371 = $tmp372;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp373 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, max371, ((panda$core$Int64) { -1 }));
            max371 = $tmp373;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp374, min369, max371, p_r.inclusive);
    panda$core$String* $tmp375 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp374);
    return $tmp375;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step376;
    panda$core$Int64 current377;
    panda$core$Int64 end382;
    panda$core$MutableString* result386;
    panda$core$Char8 c393;
    panda$core$Range$LTpanda$core$Int64$GT $tmp404;
    panda$core$String$Index $tmp424;
    panda$core$Char8 c441;
    panda$core$Int64 old442;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp462;
    panda$core$String$Index $tmp483;
    panda$core$Char8 c507;
    step376 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current377 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp378 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step376, ((panda$core$Int64) { 0 }));
    if ($tmp378.value) {
    {
        panda$core$String$Index $tmp379 = panda$core$String$start$R$panda$core$String$Index(self);
        current377 = $tmp379.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp380 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp381 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp380);
        current377 = $tmp381.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end382 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp383 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step376, ((panda$core$Int64) { 0 }));
    if ($tmp383.value) {
    {
        panda$core$String$Index $tmp384 = panda$core$String$end$R$panda$core$String$Index(self);
        end382 = $tmp384.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp385 = panda$core$String$start$R$panda$core$String$Index(self);
        end382 = $tmp385.value;
    }
    }
    }
    panda$core$MutableString* $tmp387 = (panda$core$MutableString*) malloc(40);
    $tmp387->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp387->refCount.value = 1;
    panda$core$MutableString$init($tmp387);
    result386 = $tmp387;
    panda$core$Bit $tmp389 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp389.value) {
    {
        $l390:;
        panda$core$Bit $tmp392 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current377, end382);
        if (!$tmp392.value) goto $l391;
        {
            c393 = self->data[current377.value];
            panda$core$MutableString$append$panda$core$Char8(result386, c393);
            panda$core$Int64 $tmp394 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
            current377 = $tmp394;
            int64_t $tmp395 = ((int64_t) c393.value) & 255;
            bool $tmp396 = $tmp395 >= 192;
            if (((panda$core$Bit) { $tmp396 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
                panda$core$Int64 $tmp397 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
                current377 = $tmp397;
            }
            }
            int64_t $tmp398 = ((int64_t) c393.value) & 255;
            bool $tmp399 = $tmp398 >= 224;
            if (((panda$core$Bit) { $tmp399 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
                panda$core$Int64 $tmp400 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
                current377 = $tmp400;
            }
            }
            int64_t $tmp401 = ((int64_t) c393.value) & 255;
            bool $tmp402 = $tmp401 >= 240;
            if (((panda$core$Bit) { $tmp402 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
                panda$core$Int64 $tmp403 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
                current377 = $tmp403;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp404, ((panda$core$Int64) { 1 }), step376, ((panda$core$Bit) { false }));
            int64_t $tmp406 = $tmp404.min.value;
            panda$core$Int64 i405 = { $tmp406 };
            int64_t $tmp408 = $tmp404.max.value;
            bool $tmp409 = $tmp404.inclusive.value;
            bool $tmp416 = 1 > 0;
            if ($tmp416) goto $l414; else goto $l415;
            $l414:;
            if ($tmp409) goto $l417; else goto $l418;
            $l417:;
            if ($tmp406 <= $tmp408) goto $l410; else goto $l412;
            $l418:;
            if ($tmp406 < $tmp408) goto $l410; else goto $l412;
            $l415:;
            if ($tmp409) goto $l419; else goto $l420;
            $l419:;
            if ($tmp406 >= $tmp408) goto $l410; else goto $l412;
            $l420:;
            if ($tmp406 > $tmp408) goto $l410; else goto $l412;
            $l410:;
            {
                panda$core$Bit $tmp422 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current377, end382);
                if ($tmp422.value) {
                {
                    panda$core$String* $tmp423 = panda$core$MutableString$convert$R$panda$core$String(result386);
                    return $tmp423;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp424, current377);
                panda$core$String$Index $tmp425 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp424);
                current377 = $tmp425.value;
            }
            $l413:;
            if ($tmp416) goto $l427; else goto $l428;
            $l427:;
            int64_t $tmp429 = $tmp408 - i405.value;
            if ($tmp409) goto $l430; else goto $l431;
            $l430:;
            if ($tmp429 >= 1) goto $l426; else goto $l412;
            $l431:;
            if ($tmp429 > 1) goto $l426; else goto $l412;
            $l428:;
            int64_t $tmp433 = i405.value - $tmp408;
            if ($tmp409) goto $l434; else goto $l435;
            $l434:;
            if ($tmp433 >= -1) goto $l426; else goto $l412;
            $l435:;
            if ($tmp433 > -1) goto $l426; else goto $l412;
            $l426:;
            i405.value += 1;
            goto $l410;
            $l412:;
        }
        goto $l390;
        $l391:;
    }
    }
    else {
    {
        panda$core$Bit $tmp437 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp437.value);
        $l438:;
        panda$core$Bit $tmp440 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current377, end382);
        if (!$tmp440.value) goto $l439;
        {
            c441 = self->data[current377.value];
            panda$core$MutableString$append$panda$core$Char8(result386, c441);
            old442 = current377;
            panda$core$Int64 $tmp443 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
            current377 = $tmp443;
            int64_t $tmp444 = ((int64_t) c441.value) & 255;
            bool $tmp445 = $tmp444 >= 192;
            if (((panda$core$Bit) { $tmp445 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
                panda$core$Int64 $tmp446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
                current377 = $tmp446;
            }
            }
            int64_t $tmp447 = ((int64_t) c441.value) & 255;
            bool $tmp448 = $tmp447 >= 224;
            if (((panda$core$Bit) { $tmp448 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
                panda$core$Int64 $tmp449 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
                current377 = $tmp449;
            }
            }
            int64_t $tmp450 = ((int64_t) c441.value) & 255;
            bool $tmp451 = $tmp450 >= 240;
            if (((panda$core$Bit) { $tmp451 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
            }
            }
            panda$core$Int64 $tmp452 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old442, ((panda$core$Int64) { 1 }));
            current377 = $tmp452;
            $l453:;
            int64_t $tmp456 = ((int64_t) self->data[current377.value].value) & 255;
            bool $tmp457 = $tmp456 >= 128;
            bool $tmp455 = $tmp457;
            if (!$tmp455) goto $l458;
            int64_t $tmp459 = ((int64_t) self->data[current377.value].value) & 255;
            bool $tmp460 = $tmp459 < 192;
            $tmp455 = $tmp460;
            $l458:;
            if (!((panda$core$Bit) { $tmp455 }).value) goto $l454;
            {
                panda$core$Int64 $tmp461 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
                current377 = $tmp461;
            }
            goto $l453;
            $l454:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp462, ((panda$core$Int64) { -1 }), step376, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp464 = $tmp462.start.value;
            panda$core$Int64 i463 = { $tmp464 };
            int64_t $tmp466 = $tmp462.end.value;
            int64_t $tmp467 = $tmp462.step.value;
            bool $tmp468 = $tmp462.inclusive.value;
            bool $tmp475 = $tmp467 > 0;
            if ($tmp475) goto $l473; else goto $l474;
            $l473:;
            if ($tmp468) goto $l476; else goto $l477;
            $l476:;
            if ($tmp464 <= $tmp466) goto $l469; else goto $l471;
            $l477:;
            if ($tmp464 < $tmp466) goto $l469; else goto $l471;
            $l474:;
            if ($tmp468) goto $l478; else goto $l479;
            $l478:;
            if ($tmp464 >= $tmp466) goto $l469; else goto $l471;
            $l479:;
            if ($tmp464 > $tmp466) goto $l469; else goto $l471;
            $l469:;
            {
                panda$core$Bit $tmp481 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current377, end382);
                if ($tmp481.value) {
                {
                    panda$core$String* $tmp482 = panda$core$MutableString$convert$R$panda$core$String(result386);
                    return $tmp482;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp483, current377);
                panda$core$String$Index $tmp484 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp483);
                current377 = $tmp484.value;
            }
            $l472:;
            if ($tmp475) goto $l486; else goto $l487;
            $l486:;
            int64_t $tmp488 = $tmp466 - i463.value;
            if ($tmp468) goto $l489; else goto $l490;
            $l489:;
            if ($tmp488 >= $tmp467) goto $l485; else goto $l471;
            $l490:;
            if ($tmp488 > $tmp467) goto $l485; else goto $l471;
            $l487:;
            int64_t $tmp492 = i463.value - $tmp466;
            if ($tmp468) goto $l493; else goto $l494;
            $l493:;
            if ($tmp492 >= -$tmp467) goto $l485; else goto $l471;
            $l494:;
            if ($tmp492 > -$tmp467) goto $l485; else goto $l471;
            $l485:;
            i463.value += $tmp467;
            goto $l469;
            $l471:;
        }
        goto $l438;
        $l439:;
    }
    }
    bool $tmp498 = p_r.inclusive.value;
    if ($tmp498) goto $l499;
    $tmp498 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l499:;
    panda$core$Bit $tmp500 = { $tmp498 };
    bool $tmp497 = $tmp500.value;
    if (!$tmp497) goto $l501;
    panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current377, end382);
    $tmp497 = $tmp502.value;
    $l501:;
    panda$core$Bit $tmp503 = { $tmp497 };
    bool $tmp496 = $tmp503.value;
    if (!$tmp496) goto $l504;
    panda$core$Bit $tmp505 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end382, self->_length);
    $tmp496 = $tmp505.value;
    $l504:;
    panda$core$Bit $tmp506 = { $tmp496 };
    if ($tmp506.value) {
    {
        c507 = self->data[current377.value];
        panda$core$MutableString$append$panda$core$Char8(result386, c507);
        panda$core$Int64 $tmp508 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
        current377 = $tmp508;
        int64_t $tmp509 = ((int64_t) c507.value) & 255;
        bool $tmp510 = $tmp509 >= 192;
        if (((panda$core$Bit) { $tmp510 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
            panda$core$Int64 $tmp511 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
            current377 = $tmp511;
        }
        }
        int64_t $tmp512 = ((int64_t) c507.value) & 255;
        bool $tmp513 = $tmp512 >= 224;
        if (((panda$core$Bit) { $tmp513 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
            panda$core$Int64 $tmp514 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current377, ((panda$core$Int64) { 1 }));
            current377 = $tmp514;
        }
        }
        int64_t $tmp515 = ((int64_t) c507.value) & 255;
        bool $tmp516 = $tmp515 >= 240;
        if (((panda$core$Bit) { $tmp516 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result386, self->data[current377.value]);
        }
        }
    }
    }
    panda$core$String* $tmp517 = panda$core$MutableString$convert$R$panda$core$String(result386);
    return $tmp517;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start518;
    panda$core$String$Index$nullable end521;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp524;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp519 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp520 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp519, ((panda$core$Int64) p_r.min.value));
        start518 = ((panda$core$String$Index$nullable) { $tmp520, true });
    }
    }
    else {
    {
        start518 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp522 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp523 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp522, ((panda$core$Int64) p_r.max.value));
        end521 = ((panda$core$String$Index$nullable) { $tmp523, true });
    }
    }
    else {
    {
        end521 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp524, start518, end521, p_r.inclusive);
    panda$core$String* $tmp525 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp524);
    return $tmp525;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start526;
    panda$core$String$Index$nullable end529;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp532;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp527 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp528 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp527, ((panda$core$Int64) p_r.start.value));
        start526 = ((panda$core$String$Index$nullable) { $tmp528, true });
    }
    }
    else {
    {
        start526 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp530 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp531 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp530, ((panda$core$Int64) p_r.end.value));
        end529 = ((panda$core$String$Index$nullable) { $tmp531, true });
    }
    }
    else {
    {
        end529 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp532, start526, end529, p_r.step, p_r.inclusive);
    panda$core$String* $tmp533 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp532);
    return $tmp533;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp534;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp534, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp536 = $tmp534.min.value;
    panda$core$Int64 i535 = { $tmp536 };
    int64_t $tmp538 = $tmp534.max.value;
    bool $tmp539 = $tmp534.inclusive.value;
    bool $tmp546 = 1 > 0;
    if ($tmp546) goto $l544; else goto $l545;
    $l544:;
    if ($tmp539) goto $l547; else goto $l548;
    $l547:;
    if ($tmp536 <= $tmp538) goto $l540; else goto $l542;
    $l548:;
    if ($tmp536 < $tmp538) goto $l540; else goto $l542;
    $l545:;
    if ($tmp539) goto $l549; else goto $l550;
    $l549:;
    if ($tmp536 >= $tmp538) goto $l540; else goto $l542;
    $l550:;
    if ($tmp536 > $tmp538) goto $l540; else goto $l542;
    $l540:;
    {
        panda$core$Bit $tmp552 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i535.value], p_c);
        if ($tmp552.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l543:;
    if ($tmp546) goto $l554; else goto $l555;
    $l554:;
    int64_t $tmp556 = $tmp538 - i535.value;
    if ($tmp539) goto $l557; else goto $l558;
    $l557:;
    if ($tmp556 >= 1) goto $l553; else goto $l542;
    $l558:;
    if ($tmp556 > 1) goto $l553; else goto $l542;
    $l555:;
    int64_t $tmp560 = i535.value - $tmp538;
    if ($tmp539) goto $l561; else goto $l562;
    $l561:;
    if ($tmp560 >= -1) goto $l553; else goto $l542;
    $l562:;
    if ($tmp560 > -1) goto $l553; else goto $l542;
    $l553:;
    i535.value += 1;
    goto $l540;
    $l542:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp564 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp564.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp565 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp566 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp565);
    return $tmp566;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp568;
    panda$core$Range$LTpanda$core$Int64$GT $tmp587;
    panda$core$String$Index $tmp618;
    panda$core$Bit $tmp567 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp567.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp569 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp568, p_start.value, $tmp569, ((panda$core$Bit) { true }));
    int64_t $tmp571 = $tmp568.min.value;
    panda$core$Int64 i570 = { $tmp571 };
    int64_t $tmp573 = $tmp568.max.value;
    bool $tmp574 = $tmp568.inclusive.value;
    bool $tmp581 = 1 > 0;
    if ($tmp581) goto $l579; else goto $l580;
    $l579:;
    if ($tmp574) goto $l582; else goto $l583;
    $l582:;
    if ($tmp571 <= $tmp573) goto $l575; else goto $l577;
    $l583:;
    if ($tmp571 < $tmp573) goto $l575; else goto $l577;
    $l580:;
    if ($tmp574) goto $l584; else goto $l585;
    $l584:;
    if ($tmp571 >= $tmp573) goto $l575; else goto $l577;
    $l585:;
    if ($tmp571 > $tmp573) goto $l575; else goto $l577;
    $l575:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp587, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp589 = $tmp587.min.value;
        panda$core$Int64 j588 = { $tmp589 };
        int64_t $tmp591 = $tmp587.max.value;
        bool $tmp592 = $tmp587.inclusive.value;
        bool $tmp599 = 1 > 0;
        if ($tmp599) goto $l597; else goto $l598;
        $l597:;
        if ($tmp592) goto $l600; else goto $l601;
        $l600:;
        if ($tmp589 <= $tmp591) goto $l593; else goto $l595;
        $l601:;
        if ($tmp589 < $tmp591) goto $l593; else goto $l595;
        $l598:;
        if ($tmp592) goto $l602; else goto $l603;
        $l602:;
        if ($tmp589 >= $tmp591) goto $l593; else goto $l595;
        $l603:;
        if ($tmp589 > $tmp591) goto $l593; else goto $l595;
        $l593:;
        {
            panda$core$Int64 $tmp605 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i570, j588);
            panda$core$Bit $tmp606 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp605.value], p_s->data[j588.value]);
            if ($tmp606.value) {
            {
                goto $l578;
            }
            }
        }
        $l596:;
        if ($tmp599) goto $l608; else goto $l609;
        $l608:;
        int64_t $tmp610 = $tmp591 - j588.value;
        if ($tmp592) goto $l611; else goto $l612;
        $l611:;
        if ($tmp610 >= 1) goto $l607; else goto $l595;
        $l612:;
        if ($tmp610 > 1) goto $l607; else goto $l595;
        $l609:;
        int64_t $tmp614 = j588.value - $tmp591;
        if ($tmp592) goto $l615; else goto $l616;
        $l615:;
        if ($tmp614 >= -1) goto $l607; else goto $l595;
        $l616:;
        if ($tmp614 > -1) goto $l607; else goto $l595;
        $l607:;
        j588.value += 1;
        goto $l593;
        $l595:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp618, i570);
        return ((panda$core$String$Index$nullable) { $tmp618, true });
    }
    $l578:;
    if ($tmp581) goto $l620; else goto $l621;
    $l620:;
    int64_t $tmp622 = $tmp573 - i570.value;
    if ($tmp574) goto $l623; else goto $l624;
    $l623:;
    if ($tmp622 >= 1) goto $l619; else goto $l577;
    $l624:;
    if ($tmp622 > 1) goto $l619; else goto $l577;
    $l621:;
    int64_t $tmp626 = i570.value - $tmp573;
    if ($tmp574) goto $l627; else goto $l628;
    $l627:;
    if ($tmp626 >= -1) goto $l619; else goto $l577;
    $l628:;
    if ($tmp626 > -1) goto $l619; else goto $l577;
    $l619:;
    i570.value += 1;
    goto $l575;
    $l577:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp630 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp631 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp630);
    return $tmp631;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos633;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp636;
    panda$core$Range$LTpanda$core$Int64$GT $tmp655;
    panda$core$String$Index $tmp686;
    panda$core$Bit $tmp632 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp632.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp634 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp635 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp634);
    startPos633 = $tmp635;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp636, startPos633, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp638 = $tmp636.start.value;
    panda$core$Int64 i637 = { $tmp638 };
    int64_t $tmp640 = $tmp636.end.value;
    int64_t $tmp641 = $tmp636.step.value;
    bool $tmp642 = $tmp636.inclusive.value;
    bool $tmp649 = $tmp641 > 0;
    if ($tmp649) goto $l647; else goto $l648;
    $l647:;
    if ($tmp642) goto $l650; else goto $l651;
    $l650:;
    if ($tmp638 <= $tmp640) goto $l643; else goto $l645;
    $l651:;
    if ($tmp638 < $tmp640) goto $l643; else goto $l645;
    $l648:;
    if ($tmp642) goto $l652; else goto $l653;
    $l652:;
    if ($tmp638 >= $tmp640) goto $l643; else goto $l645;
    $l653:;
    if ($tmp638 > $tmp640) goto $l643; else goto $l645;
    $l643:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp655, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp657 = $tmp655.min.value;
        panda$core$Int64 j656 = { $tmp657 };
        int64_t $tmp659 = $tmp655.max.value;
        bool $tmp660 = $tmp655.inclusive.value;
        bool $tmp667 = 1 > 0;
        if ($tmp667) goto $l665; else goto $l666;
        $l665:;
        if ($tmp660) goto $l668; else goto $l669;
        $l668:;
        if ($tmp657 <= $tmp659) goto $l661; else goto $l663;
        $l669:;
        if ($tmp657 < $tmp659) goto $l661; else goto $l663;
        $l666:;
        if ($tmp660) goto $l670; else goto $l671;
        $l670:;
        if ($tmp657 >= $tmp659) goto $l661; else goto $l663;
        $l671:;
        if ($tmp657 > $tmp659) goto $l661; else goto $l663;
        $l661:;
        {
            panda$core$Int64 $tmp673 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i637, j656);
            panda$core$Bit $tmp674 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp673.value], p_s->data[j656.value]);
            if ($tmp674.value) {
            {
                goto $l646;
            }
            }
        }
        $l664:;
        if ($tmp667) goto $l676; else goto $l677;
        $l676:;
        int64_t $tmp678 = $tmp659 - j656.value;
        if ($tmp660) goto $l679; else goto $l680;
        $l679:;
        if ($tmp678 >= 1) goto $l675; else goto $l663;
        $l680:;
        if ($tmp678 > 1) goto $l675; else goto $l663;
        $l677:;
        int64_t $tmp682 = j656.value - $tmp659;
        if ($tmp660) goto $l683; else goto $l684;
        $l683:;
        if ($tmp682 >= -1) goto $l675; else goto $l663;
        $l684:;
        if ($tmp682 > -1) goto $l675; else goto $l663;
        $l675:;
        j656.value += 1;
        goto $l661;
        $l663:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp686, i637);
        return ((panda$core$String$Index$nullable) { $tmp686, true });
    }
    $l646:;
    if ($tmp649) goto $l688; else goto $l689;
    $l688:;
    int64_t $tmp690 = $tmp640 - i637.value;
    if ($tmp642) goto $l691; else goto $l692;
    $l691:;
    if ($tmp690 >= $tmp641) goto $l687; else goto $l645;
    $l692:;
    if ($tmp690 > $tmp641) goto $l687; else goto $l645;
    $l689:;
    int64_t $tmp694 = i637.value - $tmp640;
    if ($tmp642) goto $l695; else goto $l696;
    $l695:;
    if ($tmp694 >= -$tmp641) goto $l687; else goto $l645;
    $l696:;
    if ($tmp694 > -$tmp641) goto $l687; else goto $l645;
    $l687:;
    i637.value += $tmp641;
    goto $l643;
    $l645:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result698;
    panda$core$String$Index index701;
    panda$core$String$Index$nullable nextIndex705;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp707;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp709;
    panda$core$String$Index $tmp711;
    panda$core$MutableString* $tmp699 = (panda$core$MutableString*) malloc(40);
    $tmp699->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp699->refCount.value = 1;
    panda$core$MutableString$init($tmp699);
    result698 = $tmp699;
    panda$core$String$Index $tmp702 = panda$core$String$start$R$panda$core$String$Index(self);
    index701 = $tmp702;
    $l703:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp706 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index701);
        nextIndex705 = $tmp706;
        if (((panda$core$Bit) { !nextIndex705.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp707, ((panda$core$String$Index$nullable) { index701, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp708 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp707);
            panda$core$MutableString$append$panda$core$String(result698, $tmp708);
            goto $l704;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp709, index701, ((panda$core$String$Index) nextIndex705.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp710 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp709);
        panda$core$MutableString$append$panda$core$String(result698, $tmp710);
        panda$core$MutableString$append$panda$core$String(result698, p_replacement);
        panda$core$Int64 $tmp712 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex705.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp711, $tmp712);
        index701 = $tmp711;
    }
    }
    $l704:;
    panda$core$String* $tmp713 = panda$core$MutableString$convert$R$panda$core$String(result698);
    return $tmp713;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp714;
    panda$core$String$Index$init$panda$core$Int64(&$tmp714, ((panda$core$Int64) { 0 }));
    return $tmp714;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp715;
    panda$core$String$Index$init$panda$core$Int64(&$tmp715, self->_length);
    return $tmp715;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c717;
    panda$core$String$Index $tmp720;
    panda$core$String$Index $tmp723;
    panda$core$String$Index $tmp726;
    panda$core$String$Index $tmp728;
    panda$core$Bit $tmp716 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp716.value);
    int64_t $tmp718 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c717 = $tmp718;
    bool $tmp719 = c717 >= 240;
    if (((panda$core$Bit) { $tmp719 }).value) {
    {
        panda$core$Int64 $tmp721 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp720, $tmp721);
        return $tmp720;
    }
    }
    bool $tmp722 = c717 >= 224;
    if (((panda$core$Bit) { $tmp722 }).value) {
    {
        panda$core$Int64 $tmp724 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp723, $tmp724);
        return $tmp723;
    }
    }
    bool $tmp725 = c717 >= 192;
    if (((panda$core$Bit) { $tmp725 }).value) {
    {
        panda$core$Int64 $tmp727 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp726, $tmp727);
        return $tmp726;
    }
    }
    panda$core$Int64 $tmp729 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp728, $tmp729);
    return $tmp728;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue731;
    panda$core$String$Index $tmp742;
    panda$core$Bit $tmp730 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp730.value);
    panda$core$Int64 $tmp732 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue731 = $tmp732;
    $l733:;
    int64_t $tmp736 = ((int64_t) self->data[newValue731.value].value) & 255;
    bool $tmp737 = $tmp736 >= 128;
    bool $tmp735 = $tmp737;
    if (!$tmp735) goto $l738;
    int64_t $tmp739 = ((int64_t) self->data[newValue731.value].value) & 255;
    bool $tmp740 = $tmp739 < 192;
    $tmp735 = $tmp740;
    $l738:;
    if (!((panda$core$Bit) { $tmp735 }).value) goto $l734;
    {
        panda$core$Int64 $tmp741 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue731, ((panda$core$Int64) { 1 }));
        newValue731 = $tmp741;
    }
    goto $l733;
    $l734:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp742, newValue731);
    return $tmp742;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result743;
    panda$core$Range$LTpanda$core$Int64$GT $tmp745;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp775;
    result743 = p_index;
    panda$core$Bit $tmp744 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp744.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp745, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp747 = $tmp745.min.value;
        panda$core$Int64 i746 = { $tmp747 };
        int64_t $tmp749 = $tmp745.max.value;
        bool $tmp750 = $tmp745.inclusive.value;
        bool $tmp757 = 1 > 0;
        if ($tmp757) goto $l755; else goto $l756;
        $l755:;
        if ($tmp750) goto $l758; else goto $l759;
        $l758:;
        if ($tmp747 <= $tmp749) goto $l751; else goto $l753;
        $l759:;
        if ($tmp747 < $tmp749) goto $l751; else goto $l753;
        $l756:;
        if ($tmp750) goto $l760; else goto $l761;
        $l760:;
        if ($tmp747 >= $tmp749) goto $l751; else goto $l753;
        $l761:;
        if ($tmp747 > $tmp749) goto $l751; else goto $l753;
        $l751:;
        {
            panda$core$String$Index $tmp763 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result743);
            result743 = $tmp763;
        }
        $l754:;
        if ($tmp757) goto $l765; else goto $l766;
        $l765:;
        int64_t $tmp767 = $tmp749 - i746.value;
        if ($tmp750) goto $l768; else goto $l769;
        $l768:;
        if ($tmp767 >= 1) goto $l764; else goto $l753;
        $l769:;
        if ($tmp767 > 1) goto $l764; else goto $l753;
        $l766:;
        int64_t $tmp771 = i746.value - $tmp749;
        if ($tmp750) goto $l772; else goto $l773;
        $l772:;
        if ($tmp771 >= -1) goto $l764; else goto $l753;
        $l773:;
        if ($tmp771 > -1) goto $l764; else goto $l753;
        $l764:;
        i746.value += 1;
        goto $l751;
        $l753:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp775, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp777 = $tmp775.start.value;
        panda$core$Int64 i776 = { $tmp777 };
        int64_t $tmp779 = $tmp775.end.value;
        int64_t $tmp780 = $tmp775.step.value;
        bool $tmp781 = $tmp775.inclusive.value;
        bool $tmp788 = $tmp780 > 0;
        if ($tmp788) goto $l786; else goto $l787;
        $l786:;
        if ($tmp781) goto $l789; else goto $l790;
        $l789:;
        if ($tmp777 <= $tmp779) goto $l782; else goto $l784;
        $l790:;
        if ($tmp777 < $tmp779) goto $l782; else goto $l784;
        $l787:;
        if ($tmp781) goto $l791; else goto $l792;
        $l791:;
        if ($tmp777 >= $tmp779) goto $l782; else goto $l784;
        $l792:;
        if ($tmp777 > $tmp779) goto $l782; else goto $l784;
        $l782:;
        {
            panda$core$String$Index $tmp794 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result743);
            result743 = $tmp794;
        }
        $l785:;
        if ($tmp788) goto $l796; else goto $l797;
        $l796:;
        int64_t $tmp798 = $tmp779 - i776.value;
        if ($tmp781) goto $l799; else goto $l800;
        $l799:;
        if ($tmp798 >= $tmp780) goto $l795; else goto $l784;
        $l800:;
        if ($tmp798 > $tmp780) goto $l795; else goto $l784;
        $l797:;
        int64_t $tmp802 = i776.value - $tmp779;
        if ($tmp781) goto $l803; else goto $l804;
        $l803:;
        if ($tmp802 >= -$tmp780) goto $l795; else goto $l784;
        $l804:;
        if ($tmp802 > -$tmp780) goto $l795; else goto $l784;
        $l795:;
        i776.value += $tmp780;
        goto $l782;
        $l784:;
    }
    }
    return result743;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp806 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp806;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result807;
    panda$core$String$Index index810;
    panda$core$String$Index$nullable nextIndex814;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp823;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp825;
    panda$collections$Array* $tmp808 = (panda$collections$Array*) malloc(40);
    $tmp808->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp808->refCount.value = 1;
    panda$collections$Array$init($tmp808);
    result807 = $tmp808;
    panda$core$String$Index $tmp811 = panda$core$String$start$R$panda$core$String$Index(self);
    index810 = $tmp811;
    $l812:;
    while (true) {
    {
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp815.value) {
        {
            panda$core$String$Index $tmp816 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index810);
            nextIndex814 = ((panda$core$String$Index$nullable) { $tmp816, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp817 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index810);
            nextIndex814 = $tmp817;
        }
        }
        bool $tmp818 = ((panda$core$Bit) { !nextIndex814.nonnull }).value;
        if ($tmp818) goto $l819;
        panda$core$Int64 $tmp820 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result807->count, $tmp820);
        $tmp818 = $tmp821.value;
        $l819:;
        panda$core$Bit $tmp822 = { $tmp818 };
        if ($tmp822.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp823, ((panda$core$String$Index$nullable) { index810, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp824 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp823);
            panda$collections$Array$add$panda$collections$Array$T(result807, ((panda$core$Object*) $tmp824));
            goto $l813;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp825, index810, ((panda$core$String$Index) nextIndex814.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp826 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp825);
        panda$collections$Array$add$panda$collections$Array$T(result807, ((panda$core$Object*) $tmp826));
        panda$core$String$Index $tmp827 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex814.value), p_delimiter->_length);
        index810 = $tmp827;
    }
    }
    $l813:;
    return result807;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result829;
    panda$core$Int64 start830;
    panda$core$Char8 $tmp831;
    panda$core$Range$LTpanda$core$Int64$GT $tmp833;
    panda$core$Int64 digit851;
    panda$core$Char8 $tmp871;
    panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp828.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result829 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp831, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp832 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp831);
    if ($tmp832.value) {
    {
        start830 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start830 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp833, start830, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp835 = $tmp833.min.value;
    panda$core$Int64 i834 = { $tmp835 };
    int64_t $tmp837 = $tmp833.max.value;
    bool $tmp838 = $tmp833.inclusive.value;
    bool $tmp845 = 1 > 0;
    if ($tmp845) goto $l843; else goto $l844;
    $l843:;
    if ($tmp838) goto $l846; else goto $l847;
    $l846:;
    if ($tmp835 <= $tmp837) goto $l839; else goto $l841;
    $l847:;
    if ($tmp835 < $tmp837) goto $l839; else goto $l841;
    $l844:;
    if ($tmp838) goto $l848; else goto $l849;
    $l848:;
    if ($tmp835 >= $tmp837) goto $l839; else goto $l841;
    $l849:;
    if ($tmp835 > $tmp837) goto $l839; else goto $l841;
    $l839:;
    {
        panda$core$Int64 $tmp852 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i834.value].value) }), ((panda$core$Int64) { 48 }));
        digit851 = $tmp852;
        panda$core$Bit $tmp854 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit851, ((panda$core$Int64) { 0 }));
        bool $tmp853 = $tmp854.value;
        if ($tmp853) goto $l855;
        panda$core$Bit $tmp856 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit851, ((panda$core$Int64) { 9 }));
        $tmp853 = $tmp856.value;
        $l855:;
        panda$core$Bit $tmp857 = { $tmp853 };
        if ($tmp857.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp858 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result829, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp859 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp858, digit851);
        result829 = $tmp859;
    }
    $l842:;
    if ($tmp845) goto $l861; else goto $l862;
    $l861:;
    int64_t $tmp863 = $tmp837 - i834.value;
    if ($tmp838) goto $l864; else goto $l865;
    $l864:;
    if ($tmp863 >= 1) goto $l860; else goto $l841;
    $l865:;
    if ($tmp863 > 1) goto $l860; else goto $l841;
    $l862:;
    int64_t $tmp867 = i834.value - $tmp837;
    if ($tmp838) goto $l868; else goto $l869;
    $l868:;
    if ($tmp867 >= -1) goto $l860; else goto $l841;
    $l869:;
    if ($tmp867 > -1) goto $l860; else goto $l841;
    $l860:;
    i834.value += 1;
    goto $l839;
    $l841:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp871, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp872 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp871);
    if ($tmp872.value) {
    {
        panda$core$Int64 $tmp873 = panda$core$Int64$$SUB$R$panda$core$Int64(result829);
        result829 = $tmp873;
    }
    }
    return ((panda$core$Int64$nullable) { result829, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result875;
    panda$core$Range$LTpanda$core$Int64$GT $tmp876;
    panda$core$UInt64 digit894;
    panda$core$Bit $tmp874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp874.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result875 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp876, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp878 = $tmp876.min.value;
    panda$core$Int64 i877 = { $tmp878 };
    int64_t $tmp880 = $tmp876.max.value;
    bool $tmp881 = $tmp876.inclusive.value;
    bool $tmp888 = 1 > 0;
    if ($tmp888) goto $l886; else goto $l887;
    $l886:;
    if ($tmp881) goto $l889; else goto $l890;
    $l889:;
    if ($tmp878 <= $tmp880) goto $l882; else goto $l884;
    $l890:;
    if ($tmp878 < $tmp880) goto $l882; else goto $l884;
    $l887:;
    if ($tmp881) goto $l891; else goto $l892;
    $l891:;
    if ($tmp878 >= $tmp880) goto $l882; else goto $l884;
    $l892:;
    if ($tmp878 > $tmp880) goto $l882; else goto $l884;
    $l882:;
    {
        panda$core$UInt64 $tmp895 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i877.value].value) }), ((panda$core$UInt64) { 48 }));
        digit894 = $tmp895;
        panda$core$Bit $tmp897 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit894, ((panda$core$UInt64) { 0 }));
        bool $tmp896 = $tmp897.value;
        if ($tmp896) goto $l898;
        panda$core$Bit $tmp899 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit894, ((panda$core$UInt64) { 9 }));
        $tmp896 = $tmp899.value;
        $l898:;
        panda$core$Bit $tmp900 = { $tmp896 };
        if ($tmp900.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp901 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result875, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp902 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp901, digit894);
        result875 = $tmp902;
    }
    $l885:;
    if ($tmp888) goto $l904; else goto $l905;
    $l904:;
    int64_t $tmp906 = $tmp880 - i877.value;
    if ($tmp881) goto $l907; else goto $l908;
    $l907:;
    if ($tmp906 >= 1) goto $l903; else goto $l884;
    $l908:;
    if ($tmp906 > 1) goto $l903; else goto $l884;
    $l905:;
    int64_t $tmp910 = i877.value - $tmp880;
    if ($tmp881) goto $l911; else goto $l912;
    $l911:;
    if ($tmp910 >= -1) goto $l903; else goto $l884;
    $l912:;
    if ($tmp910 > -1) goto $l903; else goto $l884;
    $l903:;
    i877.value += 1;
    goto $l882;
    $l884:;
    return ((panda$core$UInt64$nullable) { result875, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result914;
    panda$core$Range$LTpanda$core$Int64$GT $tmp915;
    result914 = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp915, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp917 = $tmp915.min.value;
    panda$core$Int64 i916 = { $tmp917 };
    int64_t $tmp919 = $tmp915.max.value;
    bool $tmp920 = $tmp915.inclusive.value;
    bool $tmp927 = 1 > 0;
    if ($tmp927) goto $l925; else goto $l926;
    $l925:;
    if ($tmp920) goto $l928; else goto $l929;
    $l928:;
    if ($tmp917 <= $tmp919) goto $l921; else goto $l923;
    $l929:;
    if ($tmp917 < $tmp919) goto $l921; else goto $l923;
    $l926:;
    if ($tmp920) goto $l930; else goto $l931;
    $l930:;
    if ($tmp917 >= $tmp919) goto $l921; else goto $l923;
    $l931:;
    if ($tmp917 > $tmp919) goto $l921; else goto $l923;
    $l921:;
    {
        panda$core$Int64 $tmp933 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result914, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp934 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp933, ((panda$core$Int64) { ((int64_t) self->data[i916.value].value) }));
        result914 = $tmp934;
    }
    $l924:;
    if ($tmp927) goto $l936; else goto $l937;
    $l936:;
    int64_t $tmp938 = $tmp919 - i916.value;
    if ($tmp920) goto $l939; else goto $l940;
    $l939:;
    if ($tmp938 >= 1) goto $l935; else goto $l923;
    $l940:;
    if ($tmp938 > 1) goto $l935; else goto $l923;
    $l937:;
    int64_t $tmp942 = i916.value - $tmp919;
    if ($tmp920) goto $l943; else goto $l944;
    $l943:;
    if ($tmp942 >= -1) goto $l935; else goto $l923;
    $l944:;
    if ($tmp942 > -1) goto $l935; else goto $l923;
    $l935:;
    i916.value += 1;
    goto $l921;
    $l923:;
    return result914;
}

