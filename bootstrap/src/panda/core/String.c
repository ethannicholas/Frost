#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "panda/core/String/UTF8List.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/SimpleRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.Q.GT.h"
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

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp4;
    self->data = ((panda$core$Char8*) malloc(self->_length.value * 1));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp59;
    panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp58.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp59, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp90;
    panda$core$Bit $tmp89 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp89.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp90, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
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
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp142;
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
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp142, ((panda$core$String$Index$nullable) { $tmp143, true }), ((panda$core$String$Index$nullable) { $tmp144, true }), ((panda$core$Bit) { true }));
    panda$core$String* $tmp145 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp142);
    return $tmp145;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result146;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp148;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp177;
    panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result146 = ((panda$core$Char8*) malloc($tmp147.value * 1));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp148, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp177, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp216;
    panda$core$MutableString* $tmp214 = (panda$core$MutableString*) malloc(40);
    $tmp214->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp214->refCount.value = 1;
    panda$core$MutableString$init($tmp214);
    result213 = $tmp214;
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp216, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp250;
    panda$core$Bit $tmp249 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp249.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp250, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
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
panda$core$String* panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 step338;
    panda$core$Int64 current339;
    panda$core$Int64 end344;
    panda$core$MutableString* result348;
    panda$core$Char8 c354;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp365;
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
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp365, ((panda$core$Int64) { 1 }), step338, ((panda$core$Bit) { false }));
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
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 step420;
    panda$core$Int64 current421;
    panda$core$Int64 end426;
    panda$core$MutableString* result430;
    panda$core$Char8 c437;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp448;
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
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp448, ((panda$core$Int64) { 1 }), step420, ((panda$core$Bit) { false }));
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
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step562;
    panda$core$Int64 current563;
    panda$core$Int64 end568;
    panda$core$MutableString* result572;
    panda$core$Char8 c579;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp590;
    panda$core$String$Index $tmp610;
    panda$core$Char8 c627;
    panda$core$Int64 old628;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp648;
    panda$core$String$Index $tmp669;
    panda$core$Char8 c693;
    step562 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current563 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp564 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step562, ((panda$core$Int64) { 0 }));
    if ($tmp564.value) {
    {
        panda$core$String$Index $tmp565 = panda$core$String$start$R$panda$core$String$Index(self);
        current563 = $tmp565.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp566 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp567 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp566);
        current563 = $tmp567.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end568 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp569 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step562, ((panda$core$Int64) { 0 }));
    if ($tmp569.value) {
    {
        panda$core$String$Index $tmp570 = panda$core$String$end$R$panda$core$String$Index(self);
        end568 = $tmp570.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp571 = panda$core$String$start$R$panda$core$String$Index(self);
        end568 = $tmp571.value;
    }
    }
    }
    panda$core$MutableString* $tmp573 = (panda$core$MutableString*) malloc(40);
    $tmp573->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp573->refCount.value = 1;
    panda$core$MutableString$init($tmp573);
    result572 = $tmp573;
    panda$core$Bit $tmp575 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp575.value) {
    {
        $l576:;
        panda$core$Bit $tmp578 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current563, end568);
        if (!$tmp578.value) goto $l577;
        {
            c579 = self->data[current563.value];
            panda$core$MutableString$append$panda$core$Char8(result572, c579);
            panda$core$Int64 $tmp580 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
            current563 = $tmp580;
            int64_t $tmp581 = ((int64_t) c579.value) & 255;
            bool $tmp582 = $tmp581 >= 192;
            if (((panda$core$Bit) { $tmp582 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
                panda$core$Int64 $tmp583 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
                current563 = $tmp583;
            }
            }
            int64_t $tmp584 = ((int64_t) c579.value) & 255;
            bool $tmp585 = $tmp584 >= 224;
            if (((panda$core$Bit) { $tmp585 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
                panda$core$Int64 $tmp586 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
                current563 = $tmp586;
            }
            }
            int64_t $tmp587 = ((int64_t) c579.value) & 255;
            bool $tmp588 = $tmp587 >= 240;
            if (((panda$core$Bit) { $tmp588 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
                panda$core$Int64 $tmp589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
                current563 = $tmp589;
            }
            }
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp590, ((panda$core$Int64) { 1 }), step562, ((panda$core$Bit) { false }));
            int64_t $tmp592 = $tmp590.min.value;
            panda$core$Int64 i591 = { $tmp592 };
            int64_t $tmp594 = $tmp590.max.value;
            bool $tmp595 = $tmp590.inclusive.value;
            bool $tmp602 = 1 > 0;
            if ($tmp602) goto $l600; else goto $l601;
            $l600:;
            if ($tmp595) goto $l603; else goto $l604;
            $l603:;
            if ($tmp592 <= $tmp594) goto $l596; else goto $l598;
            $l604:;
            if ($tmp592 < $tmp594) goto $l596; else goto $l598;
            $l601:;
            if ($tmp595) goto $l605; else goto $l606;
            $l605:;
            if ($tmp592 >= $tmp594) goto $l596; else goto $l598;
            $l606:;
            if ($tmp592 > $tmp594) goto $l596; else goto $l598;
            $l596:;
            {
                panda$core$Bit $tmp608 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current563, end568);
                if ($tmp608.value) {
                {
                    panda$core$String* $tmp609 = panda$core$MutableString$convert$R$panda$core$String(result572);
                    return $tmp609;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp610, current563);
                panda$core$String$Index $tmp611 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp610);
                current563 = $tmp611.value;
            }
            $l599:;
            if ($tmp602) goto $l613; else goto $l614;
            $l613:;
            int64_t $tmp615 = $tmp594 - i591.value;
            if ($tmp595) goto $l616; else goto $l617;
            $l616:;
            if ($tmp615 >= 1) goto $l612; else goto $l598;
            $l617:;
            if ($tmp615 > 1) goto $l612; else goto $l598;
            $l614:;
            int64_t $tmp619 = i591.value - $tmp594;
            if ($tmp595) goto $l620; else goto $l621;
            $l620:;
            if ($tmp619 >= -1) goto $l612; else goto $l598;
            $l621:;
            if ($tmp619 > -1) goto $l612; else goto $l598;
            $l612:;
            i591.value += 1;
            goto $l596;
            $l598:;
        }
        goto $l576;
        $l577:;
    }
    }
    else {
    {
        panda$core$Bit $tmp623 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp623.value);
        $l624:;
        panda$core$Bit $tmp626 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current563, end568);
        if (!$tmp626.value) goto $l625;
        {
            c627 = self->data[current563.value];
            panda$core$MutableString$append$panda$core$Char8(result572, c627);
            old628 = current563;
            panda$core$Int64 $tmp629 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
            current563 = $tmp629;
            int64_t $tmp630 = ((int64_t) c627.value) & 255;
            bool $tmp631 = $tmp630 >= 192;
            if (((panda$core$Bit) { $tmp631 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
                panda$core$Int64 $tmp632 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
                current563 = $tmp632;
            }
            }
            int64_t $tmp633 = ((int64_t) c627.value) & 255;
            bool $tmp634 = $tmp633 >= 224;
            if (((panda$core$Bit) { $tmp634 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
                panda$core$Int64 $tmp635 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
                current563 = $tmp635;
            }
            }
            int64_t $tmp636 = ((int64_t) c627.value) & 255;
            bool $tmp637 = $tmp636 >= 240;
            if (((panda$core$Bit) { $tmp637 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
            }
            }
            panda$core$Int64 $tmp638 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old628, ((panda$core$Int64) { 1 }));
            current563 = $tmp638;
            $l639:;
            int64_t $tmp642 = ((int64_t) self->data[current563.value].value) & 255;
            bool $tmp643 = $tmp642 >= 128;
            bool $tmp641 = $tmp643;
            if (!$tmp641) goto $l644;
            int64_t $tmp645 = ((int64_t) self->data[current563.value].value) & 255;
            bool $tmp646 = $tmp645 < 192;
            $tmp641 = $tmp646;
            $l644:;
            if (!((panda$core$Bit) { $tmp641 }).value) goto $l640;
            {
                panda$core$Int64 $tmp647 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
                current563 = $tmp647;
            }
            goto $l639;
            $l640:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp648, ((panda$core$Int64) { -1 }), step562, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp650 = $tmp648.start.value;
            panda$core$Int64 i649 = { $tmp650 };
            int64_t $tmp652 = $tmp648.end.value;
            int64_t $tmp653 = $tmp648.step.value;
            bool $tmp654 = $tmp648.inclusive.value;
            bool $tmp661 = $tmp653 > 0;
            if ($tmp661) goto $l659; else goto $l660;
            $l659:;
            if ($tmp654) goto $l662; else goto $l663;
            $l662:;
            if ($tmp650 <= $tmp652) goto $l655; else goto $l657;
            $l663:;
            if ($tmp650 < $tmp652) goto $l655; else goto $l657;
            $l660:;
            if ($tmp654) goto $l664; else goto $l665;
            $l664:;
            if ($tmp650 >= $tmp652) goto $l655; else goto $l657;
            $l665:;
            if ($tmp650 > $tmp652) goto $l655; else goto $l657;
            $l655:;
            {
                panda$core$Bit $tmp667 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current563, end568);
                if ($tmp667.value) {
                {
                    panda$core$String* $tmp668 = panda$core$MutableString$convert$R$panda$core$String(result572);
                    return $tmp668;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp669, current563);
                panda$core$String$Index $tmp670 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp669);
                current563 = $tmp670.value;
            }
            $l658:;
            if ($tmp661) goto $l672; else goto $l673;
            $l672:;
            int64_t $tmp674 = $tmp652 - i649.value;
            if ($tmp654) goto $l675; else goto $l676;
            $l675:;
            if ($tmp674 >= $tmp653) goto $l671; else goto $l657;
            $l676:;
            if ($tmp674 > $tmp653) goto $l671; else goto $l657;
            $l673:;
            int64_t $tmp678 = i649.value - $tmp652;
            if ($tmp654) goto $l679; else goto $l680;
            $l679:;
            if ($tmp678 >= -$tmp653) goto $l671; else goto $l657;
            $l680:;
            if ($tmp678 > -$tmp653) goto $l671; else goto $l657;
            $l671:;
            i649.value += $tmp653;
            goto $l655;
            $l657:;
        }
        goto $l624;
        $l625:;
    }
    }
    bool $tmp684 = p_r.inclusive.value;
    if ($tmp684) goto $l685;
    $tmp684 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l685:;
    panda$core$Bit $tmp686 = { $tmp684 };
    bool $tmp683 = $tmp686.value;
    if (!$tmp683) goto $l687;
    panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current563, end568);
    $tmp683 = $tmp688.value;
    $l687:;
    panda$core$Bit $tmp689 = { $tmp683 };
    bool $tmp682 = $tmp689.value;
    if (!$tmp682) goto $l690;
    panda$core$Bit $tmp691 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end568, self->_length);
    $tmp682 = $tmp691.value;
    $l690:;
    panda$core$Bit $tmp692 = { $tmp682 };
    if ($tmp692.value) {
    {
        c693 = self->data[current563.value];
        panda$core$MutableString$append$panda$core$Char8(result572, c693);
        panda$core$Int64 $tmp694 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
        current563 = $tmp694;
        int64_t $tmp695 = ((int64_t) c693.value) & 255;
        bool $tmp696 = $tmp695 >= 192;
        if (((panda$core$Bit) { $tmp696 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
            panda$core$Int64 $tmp697 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
            current563 = $tmp697;
        }
        }
        int64_t $tmp698 = ((int64_t) c693.value) & 255;
        bool $tmp699 = $tmp698 >= 224;
        if (((panda$core$Bit) { $tmp699 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
            panda$core$Int64 $tmp700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current563, ((panda$core$Int64) { 1 }));
            current563 = $tmp700;
        }
        }
        int64_t $tmp701 = ((int64_t) c693.value) & 255;
        bool $tmp702 = $tmp701 >= 240;
        if (((panda$core$Bit) { $tmp702 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result572, self->data[current563.value]);
        }
        }
    }
    }
    panda$core$String* $tmp703 = panda$core$MutableString$convert$R$panda$core$String(result572);
    return $tmp703;
}
panda$core$String* panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$SimpleRange$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start704;
    panda$core$String$Index$nullable end707;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp710;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp705 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp706 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp705, ((panda$core$Int64) p_r.min.value));
        start704 = ((panda$core$String$Index$nullable) { $tmp706, true });
    }
    }
    else {
    {
        start704 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp708 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp709 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp708, ((panda$core$Int64) p_r.max.value));
        end707 = ((panda$core$String$Index$nullable) { $tmp709, true });
    }
    }
    else {
    {
        end707 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp710, start704, end707, ((panda$core$Int64) { 1 }), p_r.inclusive);
    panda$core$String* $tmp711 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp710);
    return $tmp711;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start712;
    panda$core$String$Index$nullable end715;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp718;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp713 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp714 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp713, ((panda$core$Int64) p_r.start.value));
        start712 = ((panda$core$String$Index$nullable) { $tmp714, true });
    }
    }
    else {
    {
        start712 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp716 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp717 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp716, ((panda$core$Int64) p_r.end.value));
        end715 = ((panda$core$String$Index$nullable) { $tmp717, true });
    }
    }
    else {
    {
        end715 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp718, start712, end715, p_r.step, p_r.inclusive);
    panda$core$String* $tmp719 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp718);
    return $tmp719;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start720;
    panda$core$String$Index$nullable end723;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp726;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp721 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp722 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp721, ((panda$core$Int64) p_r.start.value));
        start720 = ((panda$core$String$Index$nullable) { $tmp722, true });
    }
    }
    else {
    {
        start720 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp724 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp725 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp724, ((panda$core$Int64) p_r.end.value));
        end723 = ((panda$core$String$Index$nullable) { $tmp725, true });
    }
    }
    else {
    {
        end723 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp726, start720, end723, p_r.step, p_r.inclusive);
    panda$core$String* $tmp727 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp726);
    return $tmp727;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp728;
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp728, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp730 = $tmp728.min.value;
    panda$core$Int64 i729 = { $tmp730 };
    int64_t $tmp732 = $tmp728.max.value;
    bool $tmp733 = $tmp728.inclusive.value;
    bool $tmp740 = 1 > 0;
    if ($tmp740) goto $l738; else goto $l739;
    $l738:;
    if ($tmp733) goto $l741; else goto $l742;
    $l741:;
    if ($tmp730 <= $tmp732) goto $l734; else goto $l736;
    $l742:;
    if ($tmp730 < $tmp732) goto $l734; else goto $l736;
    $l739:;
    if ($tmp733) goto $l743; else goto $l744;
    $l743:;
    if ($tmp730 >= $tmp732) goto $l734; else goto $l736;
    $l744:;
    if ($tmp730 > $tmp732) goto $l734; else goto $l736;
    $l734:;
    {
        panda$core$Bit $tmp746 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i729.value], p_c);
        if ($tmp746.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l737:;
    if ($tmp740) goto $l748; else goto $l749;
    $l748:;
    int64_t $tmp750 = $tmp732 - i729.value;
    if ($tmp733) goto $l751; else goto $l752;
    $l751:;
    if ($tmp750 >= 1) goto $l747; else goto $l736;
    $l752:;
    if ($tmp750 > 1) goto $l747; else goto $l736;
    $l749:;
    int64_t $tmp754 = i729.value - $tmp732;
    if ($tmp733) goto $l755; else goto $l756;
    $l755:;
    if ($tmp754 >= -1) goto $l747; else goto $l736;
    $l756:;
    if ($tmp754 > -1) goto $l747; else goto $l736;
    $l747:;
    i729.value += 1;
    goto $l734;
    $l736:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp758 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp758.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp759 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp760 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp759);
    return $tmp760;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp762;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp781;
    panda$core$String$Index $tmp812;
    panda$core$Bit $tmp761 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp761.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp763 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp762, p_start.value, $tmp763, ((panda$core$Bit) { true }));
    int64_t $tmp765 = $tmp762.min.value;
    panda$core$Int64 i764 = { $tmp765 };
    int64_t $tmp767 = $tmp762.max.value;
    bool $tmp768 = $tmp762.inclusive.value;
    bool $tmp775 = 1 > 0;
    if ($tmp775) goto $l773; else goto $l774;
    $l773:;
    if ($tmp768) goto $l776; else goto $l777;
    $l776:;
    if ($tmp765 <= $tmp767) goto $l769; else goto $l771;
    $l777:;
    if ($tmp765 < $tmp767) goto $l769; else goto $l771;
    $l774:;
    if ($tmp768) goto $l778; else goto $l779;
    $l778:;
    if ($tmp765 >= $tmp767) goto $l769; else goto $l771;
    $l779:;
    if ($tmp765 > $tmp767) goto $l769; else goto $l771;
    $l769:;
    {
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp781, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp783 = $tmp781.min.value;
        panda$core$Int64 j782 = { $tmp783 };
        int64_t $tmp785 = $tmp781.max.value;
        bool $tmp786 = $tmp781.inclusive.value;
        bool $tmp793 = 1 > 0;
        if ($tmp793) goto $l791; else goto $l792;
        $l791:;
        if ($tmp786) goto $l794; else goto $l795;
        $l794:;
        if ($tmp783 <= $tmp785) goto $l787; else goto $l789;
        $l795:;
        if ($tmp783 < $tmp785) goto $l787; else goto $l789;
        $l792:;
        if ($tmp786) goto $l796; else goto $l797;
        $l796:;
        if ($tmp783 >= $tmp785) goto $l787; else goto $l789;
        $l797:;
        if ($tmp783 > $tmp785) goto $l787; else goto $l789;
        $l787:;
        {
            panda$core$Int64 $tmp799 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i764, j782);
            panda$core$Bit $tmp800 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp799.value], p_s->data[j782.value]);
            if ($tmp800.value) {
            {
                goto $l772;
            }
            }
        }
        $l790:;
        if ($tmp793) goto $l802; else goto $l803;
        $l802:;
        int64_t $tmp804 = $tmp785 - j782.value;
        if ($tmp786) goto $l805; else goto $l806;
        $l805:;
        if ($tmp804 >= 1) goto $l801; else goto $l789;
        $l806:;
        if ($tmp804 > 1) goto $l801; else goto $l789;
        $l803:;
        int64_t $tmp808 = j782.value - $tmp785;
        if ($tmp786) goto $l809; else goto $l810;
        $l809:;
        if ($tmp808 >= -1) goto $l801; else goto $l789;
        $l810:;
        if ($tmp808 > -1) goto $l801; else goto $l789;
        $l801:;
        j782.value += 1;
        goto $l787;
        $l789:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp812, i764);
        return ((panda$core$String$Index$nullable) { $tmp812, true });
    }
    $l772:;
    if ($tmp775) goto $l814; else goto $l815;
    $l814:;
    int64_t $tmp816 = $tmp767 - i764.value;
    if ($tmp768) goto $l817; else goto $l818;
    $l817:;
    if ($tmp816 >= 1) goto $l813; else goto $l771;
    $l818:;
    if ($tmp816 > 1) goto $l813; else goto $l771;
    $l815:;
    int64_t $tmp820 = i764.value - $tmp767;
    if ($tmp768) goto $l821; else goto $l822;
    $l821:;
    if ($tmp820 >= -1) goto $l813; else goto $l771;
    $l822:;
    if ($tmp820 > -1) goto $l813; else goto $l771;
    $l813:;
    i764.value += 1;
    goto $l769;
    $l771:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp824 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp825 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp824);
    return $tmp825;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos827;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp830;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp849;
    panda$core$String$Index $tmp880;
    panda$core$Bit $tmp826 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp826.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp828 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp829 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp828);
    startPos827 = $tmp829;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp830, startPos827, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp832 = $tmp830.start.value;
    panda$core$Int64 i831 = { $tmp832 };
    int64_t $tmp834 = $tmp830.end.value;
    int64_t $tmp835 = $tmp830.step.value;
    bool $tmp836 = $tmp830.inclusive.value;
    bool $tmp843 = $tmp835 > 0;
    if ($tmp843) goto $l841; else goto $l842;
    $l841:;
    if ($tmp836) goto $l844; else goto $l845;
    $l844:;
    if ($tmp832 <= $tmp834) goto $l837; else goto $l839;
    $l845:;
    if ($tmp832 < $tmp834) goto $l837; else goto $l839;
    $l842:;
    if ($tmp836) goto $l846; else goto $l847;
    $l846:;
    if ($tmp832 >= $tmp834) goto $l837; else goto $l839;
    $l847:;
    if ($tmp832 > $tmp834) goto $l837; else goto $l839;
    $l837:;
    {
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp849, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp851 = $tmp849.min.value;
        panda$core$Int64 j850 = { $tmp851 };
        int64_t $tmp853 = $tmp849.max.value;
        bool $tmp854 = $tmp849.inclusive.value;
        bool $tmp861 = 1 > 0;
        if ($tmp861) goto $l859; else goto $l860;
        $l859:;
        if ($tmp854) goto $l862; else goto $l863;
        $l862:;
        if ($tmp851 <= $tmp853) goto $l855; else goto $l857;
        $l863:;
        if ($tmp851 < $tmp853) goto $l855; else goto $l857;
        $l860:;
        if ($tmp854) goto $l864; else goto $l865;
        $l864:;
        if ($tmp851 >= $tmp853) goto $l855; else goto $l857;
        $l865:;
        if ($tmp851 > $tmp853) goto $l855; else goto $l857;
        $l855:;
        {
            panda$core$Int64 $tmp867 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i831, j850);
            panda$core$Bit $tmp868 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp867.value], p_s->data[j850.value]);
            if ($tmp868.value) {
            {
                goto $l840;
            }
            }
        }
        $l858:;
        if ($tmp861) goto $l870; else goto $l871;
        $l870:;
        int64_t $tmp872 = $tmp853 - j850.value;
        if ($tmp854) goto $l873; else goto $l874;
        $l873:;
        if ($tmp872 >= 1) goto $l869; else goto $l857;
        $l874:;
        if ($tmp872 > 1) goto $l869; else goto $l857;
        $l871:;
        int64_t $tmp876 = j850.value - $tmp853;
        if ($tmp854) goto $l877; else goto $l878;
        $l877:;
        if ($tmp876 >= -1) goto $l869; else goto $l857;
        $l878:;
        if ($tmp876 > -1) goto $l869; else goto $l857;
        $l869:;
        j850.value += 1;
        goto $l855;
        $l857:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp880, i831);
        return ((panda$core$String$Index$nullable) { $tmp880, true });
    }
    $l840:;
    if ($tmp843) goto $l882; else goto $l883;
    $l882:;
    int64_t $tmp884 = $tmp834 - i831.value;
    if ($tmp836) goto $l885; else goto $l886;
    $l885:;
    if ($tmp884 >= $tmp835) goto $l881; else goto $l839;
    $l886:;
    if ($tmp884 > $tmp835) goto $l881; else goto $l839;
    $l883:;
    int64_t $tmp888 = i831.value - $tmp834;
    if ($tmp836) goto $l889; else goto $l890;
    $l889:;
    if ($tmp888 >= -$tmp835) goto $l881; else goto $l839;
    $l890:;
    if ($tmp888 > -$tmp835) goto $l881; else goto $l839;
    $l881:;
    i831.value += $tmp835;
    goto $l837;
    $l839:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result892;
    panda$core$String$Index index895;
    panda$core$String$Index$nullable nextIndex899;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp901;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp903;
    panda$core$String$Index $tmp905;
    panda$core$MutableString* $tmp893 = (panda$core$MutableString*) malloc(40);
    $tmp893->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp893->refCount.value = 1;
    panda$core$MutableString$init($tmp893);
    result892 = $tmp893;
    panda$core$String$Index $tmp896 = panda$core$String$start$R$panda$core$String$Index(self);
    index895 = $tmp896;
    $l897:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp900 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index895);
        nextIndex899 = $tmp900;
        if (((panda$core$Bit) { !nextIndex899.nonnull }).value) {
        {
            panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp901, ((panda$core$String$Index$nullable) { index895, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp902 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp901);
            panda$core$MutableString$append$panda$core$String(result892, $tmp902);
            goto $l898;
        }
        }
        panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp903, ((panda$core$String$Index$nullable) { index895, true }), nextIndex899, ((panda$core$Bit) { false }));
        panda$core$String* $tmp904 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp903);
        panda$core$MutableString$append$panda$core$String(result892, $tmp904);
        panda$core$MutableString$append$panda$core$String(result892, p_replacement);
        panda$core$Int64 $tmp906 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex899.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp905, $tmp906);
        index895 = $tmp905;
    }
    }
    $l898:;
    panda$core$String* $tmp907 = panda$core$MutableString$convert$R$panda$core$String(result892);
    return $tmp907;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp908;
    panda$core$String$Index$init$panda$core$Int64(&$tmp908, ((panda$core$Int64) { 0 }));
    return $tmp908;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp909;
    panda$core$String$Index$init$panda$core$Int64(&$tmp909, self->_length);
    return $tmp909;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c911;
    panda$core$String$Index $tmp914;
    panda$core$String$Index $tmp917;
    panda$core$String$Index $tmp920;
    panda$core$String$Index $tmp922;
    panda$core$Bit $tmp910 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp910.value);
    int64_t $tmp912 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c911 = $tmp912;
    bool $tmp913 = c911 >= 240;
    if (((panda$core$Bit) { $tmp913 }).value) {
    {
        panda$core$Int64 $tmp915 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp914, $tmp915);
        return $tmp914;
    }
    }
    bool $tmp916 = c911 >= 224;
    if (((panda$core$Bit) { $tmp916 }).value) {
    {
        panda$core$Int64 $tmp918 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp917, $tmp918);
        return $tmp917;
    }
    }
    bool $tmp919 = c911 >= 192;
    if (((panda$core$Bit) { $tmp919 }).value) {
    {
        panda$core$Int64 $tmp921 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp920, $tmp921);
        return $tmp920;
    }
    }
    panda$core$Int64 $tmp923 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp922, $tmp923);
    return $tmp922;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue925;
    panda$core$String$Index $tmp936;
    panda$core$Bit $tmp924 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp924.value);
    panda$core$Int64 $tmp926 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue925 = $tmp926;
    $l927:;
    int64_t $tmp930 = ((int64_t) self->data[newValue925.value].value) & 255;
    bool $tmp931 = $tmp930 >= 128;
    bool $tmp929 = $tmp931;
    if (!$tmp929) goto $l932;
    int64_t $tmp933 = ((int64_t) self->data[newValue925.value].value) & 255;
    bool $tmp934 = $tmp933 < 192;
    $tmp929 = $tmp934;
    $l932:;
    if (!((panda$core$Bit) { $tmp929 }).value) goto $l928;
    {
        panda$core$Int64 $tmp935 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue925, ((panda$core$Int64) { 1 }));
        newValue925 = $tmp935;
    }
    goto $l927;
    $l928:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp936, newValue925);
    return $tmp936;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result937;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp939;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp969;
    result937 = p_index;
    panda$core$Bit $tmp938 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp938.value) {
    {
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp939, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp941 = $tmp939.min.value;
        panda$core$Int64 i940 = { $tmp941 };
        int64_t $tmp943 = $tmp939.max.value;
        bool $tmp944 = $tmp939.inclusive.value;
        bool $tmp951 = 1 > 0;
        if ($tmp951) goto $l949; else goto $l950;
        $l949:;
        if ($tmp944) goto $l952; else goto $l953;
        $l952:;
        if ($tmp941 <= $tmp943) goto $l945; else goto $l947;
        $l953:;
        if ($tmp941 < $tmp943) goto $l945; else goto $l947;
        $l950:;
        if ($tmp944) goto $l954; else goto $l955;
        $l954:;
        if ($tmp941 >= $tmp943) goto $l945; else goto $l947;
        $l955:;
        if ($tmp941 > $tmp943) goto $l945; else goto $l947;
        $l945:;
        {
            panda$core$String$Index $tmp957 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result937);
            result937 = $tmp957;
        }
        $l948:;
        if ($tmp951) goto $l959; else goto $l960;
        $l959:;
        int64_t $tmp961 = $tmp943 - i940.value;
        if ($tmp944) goto $l962; else goto $l963;
        $l962:;
        if ($tmp961 >= 1) goto $l958; else goto $l947;
        $l963:;
        if ($tmp961 > 1) goto $l958; else goto $l947;
        $l960:;
        int64_t $tmp965 = i940.value - $tmp943;
        if ($tmp944) goto $l966; else goto $l967;
        $l966:;
        if ($tmp965 >= -1) goto $l958; else goto $l947;
        $l967:;
        if ($tmp965 > -1) goto $l958; else goto $l947;
        $l958:;
        i940.value += 1;
        goto $l945;
        $l947:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp969, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp971 = $tmp969.start.value;
        panda$core$Int64 i970 = { $tmp971 };
        int64_t $tmp973 = $tmp969.end.value;
        int64_t $tmp974 = $tmp969.step.value;
        bool $tmp975 = $tmp969.inclusive.value;
        bool $tmp982 = $tmp974 > 0;
        if ($tmp982) goto $l980; else goto $l981;
        $l980:;
        if ($tmp975) goto $l983; else goto $l984;
        $l983:;
        if ($tmp971 <= $tmp973) goto $l976; else goto $l978;
        $l984:;
        if ($tmp971 < $tmp973) goto $l976; else goto $l978;
        $l981:;
        if ($tmp975) goto $l985; else goto $l986;
        $l985:;
        if ($tmp971 >= $tmp973) goto $l976; else goto $l978;
        $l986:;
        if ($tmp971 > $tmp973) goto $l976; else goto $l978;
        $l976:;
        {
            panda$core$String$Index $tmp988 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result937);
            result937 = $tmp988;
        }
        $l979:;
        if ($tmp982) goto $l990; else goto $l991;
        $l990:;
        int64_t $tmp992 = $tmp973 - i970.value;
        if ($tmp975) goto $l993; else goto $l994;
        $l993:;
        if ($tmp992 >= $tmp974) goto $l989; else goto $l978;
        $l994:;
        if ($tmp992 > $tmp974) goto $l989; else goto $l978;
        $l991:;
        int64_t $tmp996 = i970.value - $tmp973;
        if ($tmp975) goto $l997; else goto $l998;
        $l997:;
        if ($tmp996 >= -$tmp974) goto $l989; else goto $l978;
        $l998:;
        if ($tmp996 > -$tmp974) goto $l989; else goto $l978;
        $l989:;
        i970.value += $tmp974;
        goto $l976;
        $l978:;
    }
    }
    return result937;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp1000 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp1000;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1001;
    panda$core$String$Index index1004;
    panda$core$String$Index$nullable nextIndex1008;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp1017;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp1019;
    panda$collections$Array* $tmp1002 = (panda$collections$Array*) malloc(40);
    $tmp1002->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1002->refCount.value = 1;
    panda$collections$Array$init($tmp1002);
    result1001 = $tmp1002;
    panda$core$String$Index $tmp1005 = panda$core$String$start$R$panda$core$String$Index(self);
    index1004 = $tmp1005;
    $l1006:;
    while (true) {
    {
        panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp1009.value) {
        {
            panda$core$String$Index $tmp1010 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1004);
            nextIndex1008 = ((panda$core$String$Index$nullable) { $tmp1010, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp1011 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1004);
            nextIndex1008 = $tmp1011;
        }
        }
        bool $tmp1012 = ((panda$core$Bit) { !nextIndex1008.nonnull }).value;
        if ($tmp1012) goto $l1013;
        panda$core$Int64 $tmp1014 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp1015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1001->count, $tmp1014);
        $tmp1012 = $tmp1015.value;
        $l1013:;
        panda$core$Bit $tmp1016 = { $tmp1012 };
        if ($tmp1016.value) {
        {
            panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1017, ((panda$core$String$Index$nullable) { index1004, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1018 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1017);
            panda$collections$Array$add$panda$collections$Array$T(result1001, ((panda$core$Object*) $tmp1018));
            goto $l1007;
        }
        }
        panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1019, ((panda$core$String$Index$nullable) { index1004, true }), nextIndex1008, ((panda$core$Bit) { false }));
        panda$core$String* $tmp1020 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1019);
        panda$collections$Array$add$panda$collections$Array$T(result1001, ((panda$core$Object*) $tmp1020));
        panda$core$String$Index $tmp1021 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex1008.value), p_delimiter->_length);
        index1004 = $tmp1021;
    }
    }
    $l1007:;
    return result1001;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result1023;
    panda$core$Int64 start1024;
    panda$core$Char8 $tmp1025;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1027;
    panda$core$Int64 digit1045;
    panda$core$Char8 $tmp1065;
    panda$core$Bit $tmp1022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1022.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1023 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp1025, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1026 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1025);
    if ($tmp1026.value) {
    {
        start1024 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1024 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1027, start1024, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1029 = $tmp1027.min.value;
    panda$core$Int64 i1028 = { $tmp1029 };
    int64_t $tmp1031 = $tmp1027.max.value;
    bool $tmp1032 = $tmp1027.inclusive.value;
    bool $tmp1039 = 1 > 0;
    if ($tmp1039) goto $l1037; else goto $l1038;
    $l1037:;
    if ($tmp1032) goto $l1040; else goto $l1041;
    $l1040:;
    if ($tmp1029 <= $tmp1031) goto $l1033; else goto $l1035;
    $l1041:;
    if ($tmp1029 < $tmp1031) goto $l1033; else goto $l1035;
    $l1038:;
    if ($tmp1032) goto $l1042; else goto $l1043;
    $l1042:;
    if ($tmp1029 >= $tmp1031) goto $l1033; else goto $l1035;
    $l1043:;
    if ($tmp1029 > $tmp1031) goto $l1033; else goto $l1035;
    $l1033:;
    {
        panda$core$Int64 $tmp1046 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1028.value].value) }), ((panda$core$Int64) { 48 }));
        digit1045 = $tmp1046;
        panda$core$Bit $tmp1048 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1045, ((panda$core$Int64) { 0 }));
        bool $tmp1047 = $tmp1048.value;
        if ($tmp1047) goto $l1049;
        panda$core$Bit $tmp1050 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1045, ((panda$core$Int64) { 9 }));
        $tmp1047 = $tmp1050.value;
        $l1049:;
        panda$core$Bit $tmp1051 = { $tmp1047 };
        if ($tmp1051.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1052 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1023, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1053 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1052, digit1045);
        result1023 = $tmp1053;
    }
    $l1036:;
    if ($tmp1039) goto $l1055; else goto $l1056;
    $l1055:;
    int64_t $tmp1057 = $tmp1031 - i1028.value;
    if ($tmp1032) goto $l1058; else goto $l1059;
    $l1058:;
    if ($tmp1057 >= 1) goto $l1054; else goto $l1035;
    $l1059:;
    if ($tmp1057 > 1) goto $l1054; else goto $l1035;
    $l1056:;
    int64_t $tmp1061 = i1028.value - $tmp1031;
    if ($tmp1032) goto $l1062; else goto $l1063;
    $l1062:;
    if ($tmp1061 >= -1) goto $l1054; else goto $l1035;
    $l1063:;
    if ($tmp1061 > -1) goto $l1054; else goto $l1035;
    $l1054:;
    i1028.value += 1;
    goto $l1033;
    $l1035:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1065, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1066 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1065);
    if ($tmp1066.value) {
    {
        panda$core$Int64 $tmp1067 = panda$core$Int64$$SUB$R$panda$core$Int64(result1023);
        result1023 = $tmp1067;
    }
    }
    return ((panda$core$Int64$nullable) { result1023, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result1069;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1070;
    panda$core$UInt64 digit1088;
    panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1068.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result1069 = ((panda$core$UInt64) { 0 });
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1070, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1072 = $tmp1070.min.value;
    panda$core$Int64 i1071 = { $tmp1072 };
    int64_t $tmp1074 = $tmp1070.max.value;
    bool $tmp1075 = $tmp1070.inclusive.value;
    bool $tmp1082 = 1 > 0;
    if ($tmp1082) goto $l1080; else goto $l1081;
    $l1080:;
    if ($tmp1075) goto $l1083; else goto $l1084;
    $l1083:;
    if ($tmp1072 <= $tmp1074) goto $l1076; else goto $l1078;
    $l1084:;
    if ($tmp1072 < $tmp1074) goto $l1076; else goto $l1078;
    $l1081:;
    if ($tmp1075) goto $l1085; else goto $l1086;
    $l1085:;
    if ($tmp1072 >= $tmp1074) goto $l1076; else goto $l1078;
    $l1086:;
    if ($tmp1072 > $tmp1074) goto $l1076; else goto $l1078;
    $l1076:;
    {
        panda$core$UInt64 $tmp1089 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i1071.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1088 = $tmp1089;
        panda$core$Bit $tmp1091 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1088, ((panda$core$UInt64) { 0 }));
        bool $tmp1090 = $tmp1091.value;
        if ($tmp1090) goto $l1092;
        panda$core$Bit $tmp1093 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1088, ((panda$core$UInt64) { 9 }));
        $tmp1090 = $tmp1093.value;
        $l1092:;
        panda$core$Bit $tmp1094 = { $tmp1090 };
        if ($tmp1094.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp1095 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1069, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1096 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1095, digit1088);
        result1069 = $tmp1096;
    }
    $l1079:;
    if ($tmp1082) goto $l1098; else goto $l1099;
    $l1098:;
    int64_t $tmp1100 = $tmp1074 - i1071.value;
    if ($tmp1075) goto $l1101; else goto $l1102;
    $l1101:;
    if ($tmp1100 >= 1) goto $l1097; else goto $l1078;
    $l1102:;
    if ($tmp1100 > 1) goto $l1097; else goto $l1078;
    $l1099:;
    int64_t $tmp1104 = i1071.value - $tmp1074;
    if ($tmp1075) goto $l1105; else goto $l1106;
    $l1105:;
    if ($tmp1104 >= -1) goto $l1097; else goto $l1078;
    $l1106:;
    if ($tmp1104 > -1) goto $l1097; else goto $l1078;
    $l1097:;
    i1071.value += 1;
    goto $l1076;
    $l1078:;
    return ((panda$core$UInt64$nullable) { result1069, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result1108;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1109;
    result1108 = ((panda$core$Int64) { 0 });
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1109, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1111 = $tmp1109.min.value;
    panda$core$Int64 i1110 = { $tmp1111 };
    int64_t $tmp1113 = $tmp1109.max.value;
    bool $tmp1114 = $tmp1109.inclusive.value;
    bool $tmp1121 = 1 > 0;
    if ($tmp1121) goto $l1119; else goto $l1120;
    $l1119:;
    if ($tmp1114) goto $l1122; else goto $l1123;
    $l1122:;
    if ($tmp1111 <= $tmp1113) goto $l1115; else goto $l1117;
    $l1123:;
    if ($tmp1111 < $tmp1113) goto $l1115; else goto $l1117;
    $l1120:;
    if ($tmp1114) goto $l1124; else goto $l1125;
    $l1124:;
    if ($tmp1111 >= $tmp1113) goto $l1115; else goto $l1117;
    $l1125:;
    if ($tmp1111 > $tmp1113) goto $l1115; else goto $l1117;
    $l1115:;
    {
        panda$core$Int64 $tmp1127 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1108, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp1128 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1127, ((panda$core$Int64) { ((int64_t) self->data[i1110.value].value) }));
        result1108 = $tmp1128;
    }
    $l1118:;
    if ($tmp1121) goto $l1130; else goto $l1131;
    $l1130:;
    int64_t $tmp1132 = $tmp1113 - i1110.value;
    if ($tmp1114) goto $l1133; else goto $l1134;
    $l1133:;
    if ($tmp1132 >= 1) goto $l1129; else goto $l1117;
    $l1134:;
    if ($tmp1132 > 1) goto $l1129; else goto $l1117;
    $l1131:;
    int64_t $tmp1136 = i1110.value - $tmp1113;
    if ($tmp1114) goto $l1137; else goto $l1138;
    $l1137:;
    if ($tmp1136 >= -1) goto $l1129; else goto $l1117;
    $l1138:;
    if ($tmp1136 > -1) goto $l1129; else goto $l1117;
    $l1129:;
    i1110.value += 1;
    goto $l1115;
    $l1117:;
    return result1108;
}

