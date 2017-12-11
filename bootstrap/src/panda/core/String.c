#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
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

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn21)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn165)(panda$core$Object*);
typedef panda$core$String* (*$fn192)(panda$core$Object*);


void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    self->owner = NULL;
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    self->owner = p_owner;
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    self->_hash = ((panda$core$Int64) { 0 });
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
    if ($tmp10) goto $l17; else goto $l18;
    $l17:;
    if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
    $l18:;
    if ($tmp7 < $tmp9) goto $l11; else goto $l13;
    $l11:;
    {
        ITable* $tmp19 = p_chars->$class->itable;
        while ($tmp19->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp19 = $tmp19->next;
        }
        $fn21 $tmp20 = $tmp19->methods[0];
        panda$core$Object* $tmp22 = $tmp20(p_chars, i6);
        self->data[i6.value] = ((panda$core$Char8$wrapper*) $tmp22)->value;
    }
    $l14:;
    int64_t $tmp24 = $tmp9 - i6.value;
    if ($tmp10) goto $l25; else goto $l26;
    $l25:;
    if ($tmp24 >= 1) goto $l23; else goto $l13;
    $l26:;
    if ($tmp24 > 1) goto $l23; else goto $l13;
    $l23:;
    i6.value += 1;
    goto $l11;
    $l13:;
    self->owner = NULL;
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    free(self->data);
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp29 = (panda$core$String$UTF8List*) malloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp29->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp29, self);
    return ((panda$collections$ListView*) $tmp29);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp31 = (panda$core$String$UTF16Iterator*) malloc(32);
    $tmp31->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp31->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp31, self);
    return ((panda$collections$Iterator*) $tmp31);
}
panda$collections$Iterator* panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp33 = (panda$core$String$UTF32Iterator*) malloc(32);
    $tmp33->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp33->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp33, self);
    return ((panda$collections$Iterator*) $tmp33);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count35;
    panda$collections$Iterator* iter36;
    count35 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp37 = panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    iter36 = $tmp37;
    $l38:;
    ITable* $tmp40 = iter36->$class->itable;
    while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp40 = $tmp40->next;
    }
    $fn42 $tmp41 = $tmp40->methods[0];
    panda$core$Bit $tmp43 = $tmp41(iter36);
    panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
    if (!$tmp44.value) goto $l39;
    {
        panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count35, ((panda$core$Int64) { 1 }));
        count35 = $tmp45;
        ITable* $tmp46 = iter36->$class->itable;
        while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp46 = $tmp46->next;
        }
        $fn48 $tmp47 = $tmp46->methods[1];
        $tmp47(iter36);
    }
    goto $l38;
    $l39:;
    return count35;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    return self->_length;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp50;
    panda$core$Bit $tmp49 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp49.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp50, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp52 = $tmp50.min.value;
    panda$core$Int64 i51 = { $tmp52 };
    int64_t $tmp54 = $tmp50.max.value;
    bool $tmp55 = $tmp50.inclusive.value;
    if ($tmp55) goto $l62; else goto $l63;
    $l62:;
    if ($tmp52 <= $tmp54) goto $l56; else goto $l58;
    $l63:;
    if ($tmp52 < $tmp54) goto $l56; else goto $l58;
    $l56:;
    {
        panda$core$Bit $tmp64 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i51.value], p_other->data[i51.value]);
        if ($tmp64.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l59:;
    int64_t $tmp66 = $tmp54 - i51.value;
    if ($tmp55) goto $l67; else goto $l68;
    $l67:;
    if ($tmp66 >= 1) goto $l65; else goto $l58;
    $l68:;
    if ($tmp66 > 1) goto $l65; else goto $l58;
    $l65:;
    i51.value += 1;
    goto $l56;
    $l58:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp72;
    panda$core$Bit $tmp71 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp71.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp72, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp74 = $tmp72.min.value;
    panda$core$Int64 i73 = { $tmp74 };
    int64_t $tmp76 = $tmp72.max.value;
    bool $tmp77 = $tmp72.inclusive.value;
    if ($tmp77) goto $l84; else goto $l85;
    $l84:;
    if ($tmp74 <= $tmp76) goto $l78; else goto $l80;
    $l85:;
    if ($tmp74 < $tmp76) goto $l78; else goto $l80;
    $l78:;
    {
        panda$core$Int64 $tmp86 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp86, i73);
        panda$core$Bit $tmp88 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp87.value], p_other->data[i73.value]);
        if ($tmp88.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l81:;
    int64_t $tmp90 = $tmp76 - i73.value;
    if ($tmp77) goto $l91; else goto $l92;
    $l91:;
    if ($tmp90 >= 1) goto $l89; else goto $l80;
    $l92:;
    if ($tmp90 > 1) goto $l89; else goto $l80;
    $l89:;
    i73.value += 1;
    goto $l78;
    $l80:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trimmed$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start96;
    panda$core$Int64 end105;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp115;
    panda$core$String$Index $tmp116;
    panda$core$String$Index $tmp117;
    panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp95.value) {
    {
        return self;
    }
    }
    start96 = ((panda$core$Int64) { 0 });
    $l97:;
    panda$core$Bit $tmp100 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start96, self->_length);
    bool $tmp99 = $tmp100.value;
    if (!$tmp99) goto $l101;
    panda$core$Bit $tmp102 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start96.value]);
    $tmp99 = $tmp102.value;
    $l101:;
    panda$core$Bit $tmp103 = { $tmp99 };
    if (!$tmp103.value) goto $l98;
    {
        panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start96, ((panda$core$Int64) { 1 }));
        start96 = $tmp104;
    }
    goto $l97;
    $l98:;
    panda$core$Int64 $tmp106 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end105 = $tmp106;
    $l107:;
    panda$core$Bit $tmp110 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end105, start96);
    bool $tmp109 = $tmp110.value;
    if (!$tmp109) goto $l111;
    panda$core$Bit $tmp112 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end105.value]);
    $tmp109 = $tmp112.value;
    $l111:;
    panda$core$Bit $tmp113 = { $tmp109 };
    if (!$tmp113.value) goto $l108;
    {
        panda$core$Int64 $tmp114 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end105, ((panda$core$Int64) { 1 }));
        end105 = $tmp114;
    }
    goto $l107;
    $l108:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp116, start96);
    panda$core$String$Index$init$panda$core$Int64(&$tmp117, end105);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp115, $tmp116, $tmp117, ((panda$core$Bit) { true }));
    panda$core$String* $tmp118 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp115);
    return $tmp118;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result119;
    panda$core$Range$LTpanda$core$Int64$GT $tmp121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp141;
    panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result119 = ((panda$core$Char8*) malloc($tmp120.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp121, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp123 = $tmp121.min.value;
    panda$core$Int64 i122 = { $tmp123 };
    int64_t $tmp125 = $tmp121.max.value;
    bool $tmp126 = $tmp121.inclusive.value;
    if ($tmp126) goto $l133; else goto $l134;
    $l133:;
    if ($tmp123 <= $tmp125) goto $l127; else goto $l129;
    $l134:;
    if ($tmp123 < $tmp125) goto $l127; else goto $l129;
    $l127:;
    {
        result119[i122.value] = self->data[i122.value];
    }
    $l130:;
    int64_t $tmp136 = $tmp125 - i122.value;
    if ($tmp126) goto $l137; else goto $l138;
    $l137:;
    if ($tmp136 >= 1) goto $l135; else goto $l129;
    $l138:;
    if ($tmp136 > 1) goto $l135; else goto $l129;
    $l135:;
    i122.value += 1;
    goto $l127;
    $l129:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp141, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp143 = $tmp141.min.value;
    panda$core$Int64 i142 = { $tmp143 };
    int64_t $tmp145 = $tmp141.max.value;
    bool $tmp146 = $tmp141.inclusive.value;
    if ($tmp146) goto $l153; else goto $l154;
    $l153:;
    if ($tmp143 <= $tmp145) goto $l147; else goto $l149;
    $l154:;
    if ($tmp143 < $tmp145) goto $l147; else goto $l149;
    $l147:;
    {
        panda$core$Int64 $tmp155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i142);
        result119[$tmp155.value] = p_other->data[i142.value];
    }
    $l150:;
    int64_t $tmp157 = $tmp145 - i142.value;
    if ($tmp146) goto $l158; else goto $l159;
    $l158:;
    if ($tmp157 >= 1) goto $l156; else goto $l149;
    $l159:;
    if ($tmp157 > 1) goto $l156; else goto $l149;
    $l156:;
    i142.value += 1;
    goto $l147;
    $l149:;
    panda$core$String* $tmp162 = (panda$core$String*) malloc(48);
    $tmp162->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp162->refCount.value = 1;
    panda$core$Int64 $tmp164 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp162, result119, $tmp164);
    return $tmp162;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp166 = (($fn165) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp166);
    return $tmp167;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result168;
    panda$core$Range$LTpanda$core$Int64$GT $tmp171;
    panda$core$MutableString* $tmp169 = (panda$core$MutableString*) malloc(48);
    $tmp169->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp169->refCount.value = 1;
    panda$core$MutableString$init($tmp169);
    result168 = $tmp169;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp171, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp173 = $tmp171.min.value;
    panda$core$Int64 i172 = { $tmp173 };
    int64_t $tmp175 = $tmp171.max.value;
    bool $tmp176 = $tmp171.inclusive.value;
    if ($tmp176) goto $l183; else goto $l184;
    $l183:;
    if ($tmp173 <= $tmp175) goto $l177; else goto $l179;
    $l184:;
    if ($tmp173 < $tmp175) goto $l177; else goto $l179;
    $l177:;
    {
        panda$core$MutableString$append$panda$core$String(result168, self);
    }
    $l180:;
    int64_t $tmp186 = $tmp175 - i172.value;
    if ($tmp176) goto $l187; else goto $l188;
    $l187:;
    if ($tmp186 >= 1) goto $l185; else goto $l179;
    $l188:;
    if ($tmp186 > 1) goto $l185; else goto $l179;
    $l185:;
    i172.value += 1;
    goto $l177;
    $l179:;
    panda$core$String* $tmp191 = panda$core$MutableString$finish$R$panda$core$String(result168);
    return $tmp191;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp193 = (($fn192) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, p_s);
    return $tmp194;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp196;
    panda$core$Bit $tmp195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp195.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp196, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp198 = $tmp196.min.value;
    panda$core$Int64 i197 = { $tmp198 };
    int64_t $tmp200 = $tmp196.max.value;
    bool $tmp201 = $tmp196.inclusive.value;
    if ($tmp201) goto $l208; else goto $l209;
    $l208:;
    if ($tmp198 <= $tmp200) goto $l202; else goto $l204;
    $l209:;
    if ($tmp198 < $tmp200) goto $l202; else goto $l204;
    $l202:;
    {
        panda$core$Bit $tmp210 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i197.value], p_other->data[i197.value]);
        if ($tmp210.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l205:;
    int64_t $tmp212 = $tmp200 - i197.value;
    if ($tmp201) goto $l213; else goto $l214;
    $l213:;
    if ($tmp212 >= 1) goto $l211; else goto $l204;
    $l214:;
    if ($tmp212 > 1) goto $l211; else goto $l204;
    $l211:;
    i197.value += 1;
    goto $l202;
    $l204:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp217 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
    return $tmp218;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx219;
    panda$core$Char8 c220;
    panda$core$Int32 result221;
    panda$core$Char32 $tmp225;
    panda$core$Char32 $tmp236;
    panda$core$Char32 $tmp252;
    panda$core$Char32 $tmp271;
    idx219 = p_index.value;
    c220 = self->data[idx219.value];
    panda$core$Int32 $tmp222 = panda$core$Char8$convert$R$panda$core$Int32(c220);
    result221 = $tmp222;
    int64_t $tmp223 = ((int64_t) c220.value) & 255;
    bool $tmp224 = $tmp223 < 192;
    if (((panda$core$Bit) { $tmp224 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp225, result221);
        return $tmp225;
    }
    }
    int64_t $tmp226 = ((int64_t) c220.value) & 255;
    bool $tmp227 = $tmp226 < 224;
    if (((panda$core$Bit) { $tmp227 }).value) {
    {
        panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp229 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp228, self->_length);
        PANDA_ASSERT($tmp229.value);
        panda$core$Int32 $tmp230 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result221, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp231 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp230, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp233 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp232.value]);
        panda$core$Int32 $tmp234 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp233, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp235 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp231, $tmp234);
        result221 = $tmp235;
        panda$core$Char32$init$panda$core$Int32(&$tmp236, result221);
        return $tmp236;
    }
    }
    int64_t $tmp237 = ((int64_t) c220.value) & 255;
    bool $tmp238 = $tmp237 < 240;
    if (((panda$core$Bit) { $tmp238 }).value) {
    {
        panda$core$Int64 $tmp239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp240 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp239, self->_length);
        PANDA_ASSERT($tmp240.value);
        panda$core$Int32 $tmp241 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result221, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp242 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp241, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp244 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp243.value]);
        panda$core$Int32 $tmp245 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp244, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp246 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp245, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp247 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp242, $tmp246);
        panda$core$Int64 $tmp248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp249 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp248.value]);
        panda$core$Int32 $tmp250 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp249, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp251 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp247, $tmp250);
        result221 = $tmp251;
        panda$core$Char32$init$panda$core$Int32(&$tmp252, result221);
        return $tmp252;
    }
    }
    panda$core$Int64 $tmp253 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp254 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp253, self->_length);
    PANDA_ASSERT($tmp254.value);
    panda$core$Int32 $tmp255 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result221, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp256 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp255, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp258 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp257.value]);
    panda$core$Int32 $tmp259 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp258, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp260 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp259, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp261 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp256, $tmp260);
    panda$core$Int64 $tmp262 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp263 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp262.value]);
    panda$core$Int32 $tmp264 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp263, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp265 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp264, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp266 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp261, $tmp265);
    panda$core$Int64 $tmp267 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx219, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp268 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp267.value]);
    panda$core$Int32 $tmp269 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp268, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp270 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp266, $tmp269);
    result221 = $tmp270;
    panda$core$Char32$init$panda$core$Int32(&$tmp271, result221);
    return $tmp271;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp272 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp273 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp272, p_index);
    panda$core$Char32 $tmp274 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp273);
    return $tmp274;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp275 = (panda$core$String*) malloc(48);
    $tmp275->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp275->refCount.value = 1;
    panda$core$Int64 $tmp277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp275, (self->data + p_r.min.value.value), $tmp277, self);
    return $tmp275;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min278;
    panda$core$String$Index max280;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp283;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min278 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp279 = panda$core$String$start$R$panda$core$String$Index(self);
        min278 = $tmp279;
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max280 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp281 = panda$core$String$end$R$panda$core$String$Index(self);
        max280 = $tmp281;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp282 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, max280, ((panda$core$Int64) { -1 }));
            max280 = $tmp282;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp283, min278, max280, p_r.inclusive);
    panda$core$String* $tmp284 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp283);
    return $tmp284;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current285;
    panda$core$MutableString* result286;
    panda$core$Int64 max289;
    panda$core$Char8 c294;
    current285 = p_r.min.value;
    panda$core$MutableString* $tmp287 = (panda$core$MutableString*) malloc(48);
    $tmp287->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp287->refCount.value = 1;
    panda$core$MutableString$init($tmp287);
    result286 = $tmp287;
    max289 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp290 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max289, ((panda$core$Int64) { 1 }));
        max289 = $tmp290;
    }
    }
    $l291:;
    panda$core$Bit $tmp293 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current285, max289);
    if (!$tmp293.value) goto $l292;
    {
        c294 = self->data[current285.value];
        panda$core$MutableString$append$panda$core$Char8(result286, c294);
        panda$core$Int64 $tmp295 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current285, ((panda$core$Int64) { 1 }));
        current285 = $tmp295;
        int64_t $tmp296 = ((int64_t) c294.value) & 255;
        bool $tmp297 = $tmp296 >= 192;
        if (((panda$core$Bit) { $tmp297 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result286, self->data[current285.value]);
            panda$core$Int64 $tmp298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current285, ((panda$core$Int64) { 1 }));
            current285 = $tmp298;
        }
        }
        int64_t $tmp299 = ((int64_t) c294.value) & 255;
        bool $tmp300 = $tmp299 >= 224;
        if (((panda$core$Bit) { $tmp300 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result286, self->data[current285.value]);
            panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current285, ((panda$core$Int64) { 1 }));
            current285 = $tmp301;
        }
        }
        int64_t $tmp302 = ((int64_t) c294.value) & 255;
        bool $tmp303 = $tmp302 >= 240;
        if (((panda$core$Bit) { $tmp303 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result286, self->data[current285.value]);
            panda$core$Int64 $tmp304 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current285, ((panda$core$Int64) { 1 }));
            current285 = $tmp304;
        }
        }
    }
    goto $l291;
    $l292:;
    panda$core$String* $tmp305 = panda$core$MutableString$finish$R$panda$core$String(result286);
    return $tmp305;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min306;
    panda$core$String$Index max308;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp311;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min306 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp307 = panda$core$String$start$R$panda$core$String$Index(self);
        min306 = $tmp307;
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max308 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp309 = panda$core$String$end$R$panda$core$String$Index(self);
        max308 = $tmp309;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp310 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, max308, ((panda$core$Int64) { -1 }));
            max308 = $tmp310;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp311, min306, max308, p_r.inclusive);
    panda$core$String* $tmp312 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp311);
    return $tmp312;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step313;
    panda$core$Int64 current314;
    panda$core$Int64 end319;
    panda$core$MutableString* result323;
    panda$core$Char8 c330;
    panda$core$Range$LTpanda$core$Int64$GT $tmp341;
    panda$core$String$Index $tmp357;
    panda$core$Char8 c369;
    panda$core$Int64 old370;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp390;
    panda$core$String$Index $tmp411;
    panda$core$Char8 c435;
    step313 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current314 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp315 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step313, ((panda$core$Int64) { 0 }));
    if ($tmp315.value) {
    {
        panda$core$String$Index $tmp316 = panda$core$String$start$R$panda$core$String$Index(self);
        current314 = $tmp316.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp317 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp318 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp317);
        current314 = $tmp318.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end319 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp320 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step313, ((panda$core$Int64) { 0 }));
    if ($tmp320.value) {
    {
        panda$core$String$Index $tmp321 = panda$core$String$end$R$panda$core$String$Index(self);
        end319 = $tmp321.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp322 = panda$core$String$start$R$panda$core$String$Index(self);
        end319 = $tmp322.value;
    }
    }
    }
    panda$core$MutableString* $tmp324 = (panda$core$MutableString*) malloc(48);
    $tmp324->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp324->refCount.value = 1;
    panda$core$MutableString$init($tmp324);
    result323 = $tmp324;
    panda$core$Bit $tmp326 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp326.value) {
    {
        $l327:;
        panda$core$Bit $tmp329 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current314, end319);
        if (!$tmp329.value) goto $l328;
        {
            c330 = self->data[current314.value];
            panda$core$MutableString$append$panda$core$Char8(result323, c330);
            panda$core$Int64 $tmp331 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
            current314 = $tmp331;
            int64_t $tmp332 = ((int64_t) c330.value) & 255;
            bool $tmp333 = $tmp332 >= 192;
            if (((panda$core$Bit) { $tmp333 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
                panda$core$Int64 $tmp334 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
                current314 = $tmp334;
            }
            }
            int64_t $tmp335 = ((int64_t) c330.value) & 255;
            bool $tmp336 = $tmp335 >= 224;
            if (((panda$core$Bit) { $tmp336 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
                panda$core$Int64 $tmp337 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
                current314 = $tmp337;
            }
            }
            int64_t $tmp338 = ((int64_t) c330.value) & 255;
            bool $tmp339 = $tmp338 >= 240;
            if (((panda$core$Bit) { $tmp339 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
                panda$core$Int64 $tmp340 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
                current314 = $tmp340;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp341, ((panda$core$Int64) { 1 }), step313, ((panda$core$Bit) { false }));
            int64_t $tmp343 = $tmp341.min.value;
            panda$core$Int64 i342 = { $tmp343 };
            int64_t $tmp345 = $tmp341.max.value;
            bool $tmp346 = $tmp341.inclusive.value;
            if ($tmp346) goto $l353; else goto $l354;
            $l353:;
            if ($tmp343 <= $tmp345) goto $l347; else goto $l349;
            $l354:;
            if ($tmp343 < $tmp345) goto $l347; else goto $l349;
            $l347:;
            {
                panda$core$Bit $tmp355 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current314, end319);
                if ($tmp355.value) {
                {
                    panda$core$String* $tmp356 = panda$core$MutableString$convert$R$panda$core$String(result323);
                    return $tmp356;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp357, current314);
                panda$core$String$Index $tmp358 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp357);
                current314 = $tmp358.value;
            }
            $l350:;
            int64_t $tmp360 = $tmp345 - i342.value;
            if ($tmp346) goto $l361; else goto $l362;
            $l361:;
            if ($tmp360 >= 1) goto $l359; else goto $l349;
            $l362:;
            if ($tmp360 > 1) goto $l359; else goto $l349;
            $l359:;
            i342.value += 1;
            goto $l347;
            $l349:;
        }
        goto $l327;
        $l328:;
    }
    }
    else {
    {
        panda$core$Bit $tmp365 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp365.value);
        $l366:;
        panda$core$Bit $tmp368 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current314, end319);
        if (!$tmp368.value) goto $l367;
        {
            c369 = self->data[current314.value];
            panda$core$MutableString$append$panda$core$Char8(result323, c369);
            old370 = current314;
            panda$core$Int64 $tmp371 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
            current314 = $tmp371;
            int64_t $tmp372 = ((int64_t) c369.value) & 255;
            bool $tmp373 = $tmp372 >= 192;
            if (((panda$core$Bit) { $tmp373 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
                panda$core$Int64 $tmp374 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
                current314 = $tmp374;
            }
            }
            int64_t $tmp375 = ((int64_t) c369.value) & 255;
            bool $tmp376 = $tmp375 >= 224;
            if (((panda$core$Bit) { $tmp376 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
                panda$core$Int64 $tmp377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
                current314 = $tmp377;
            }
            }
            int64_t $tmp378 = ((int64_t) c369.value) & 255;
            bool $tmp379 = $tmp378 >= 240;
            if (((panda$core$Bit) { $tmp379 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
            }
            }
            panda$core$Int64 $tmp380 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old370, ((panda$core$Int64) { 1 }));
            current314 = $tmp380;
            $l381:;
            int64_t $tmp384 = ((int64_t) self->data[current314.value].value) & 255;
            bool $tmp385 = $tmp384 >= 128;
            bool $tmp383 = $tmp385;
            if (!$tmp383) goto $l386;
            int64_t $tmp387 = ((int64_t) self->data[current314.value].value) & 255;
            bool $tmp388 = $tmp387 < 192;
            $tmp383 = $tmp388;
            $l386:;
            if (!((panda$core$Bit) { $tmp383 }).value) goto $l382;
            {
                panda$core$Int64 $tmp389 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
                current314 = $tmp389;
            }
            goto $l381;
            $l382:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp390, ((panda$core$Int64) { -1 }), step313, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp392 = $tmp390.start.value;
            panda$core$Int64 i391 = { $tmp392 };
            int64_t $tmp394 = $tmp390.end.value;
            int64_t $tmp395 = $tmp390.step.value;
            bool $tmp396 = $tmp390.inclusive.value;
            bool $tmp403 = $tmp395 > 0;
            if ($tmp403) goto $l401; else goto $l402;
            $l401:;
            if ($tmp396) goto $l404; else goto $l405;
            $l404:;
            if ($tmp392 <= $tmp394) goto $l397; else goto $l399;
            $l405:;
            if ($tmp392 < $tmp394) goto $l397; else goto $l399;
            $l402:;
            if ($tmp396) goto $l406; else goto $l407;
            $l406:;
            if ($tmp392 >= $tmp394) goto $l397; else goto $l399;
            $l407:;
            if ($tmp392 > $tmp394) goto $l397; else goto $l399;
            $l397:;
            {
                panda$core$Bit $tmp409 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current314, end319);
                if ($tmp409.value) {
                {
                    panda$core$String* $tmp410 = panda$core$MutableString$convert$R$panda$core$String(result323);
                    return $tmp410;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp411, current314);
                panda$core$String$Index $tmp412 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp411);
                current314 = $tmp412.value;
            }
            $l400:;
            if ($tmp403) goto $l414; else goto $l415;
            $l414:;
            int64_t $tmp416 = $tmp394 - i391.value;
            if ($tmp396) goto $l417; else goto $l418;
            $l417:;
            if ($tmp416 >= $tmp395) goto $l413; else goto $l399;
            $l418:;
            if ($tmp416 > $tmp395) goto $l413; else goto $l399;
            $l415:;
            int64_t $tmp420 = i391.value - $tmp394;
            if ($tmp396) goto $l421; else goto $l422;
            $l421:;
            if ($tmp420 >= -$tmp395) goto $l413; else goto $l399;
            $l422:;
            if ($tmp420 > -$tmp395) goto $l413; else goto $l399;
            $l413:;
            i391.value += $tmp395;
            goto $l397;
            $l399:;
        }
        goto $l366;
        $l367:;
    }
    }
    bool $tmp426 = p_r.inclusive.value;
    if ($tmp426) goto $l427;
    $tmp426 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l427:;
    panda$core$Bit $tmp428 = { $tmp426 };
    bool $tmp425 = $tmp428.value;
    if (!$tmp425) goto $l429;
    panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current314, end319);
    $tmp425 = $tmp430.value;
    $l429:;
    panda$core$Bit $tmp431 = { $tmp425 };
    bool $tmp424 = $tmp431.value;
    if (!$tmp424) goto $l432;
    panda$core$Bit $tmp433 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end319, self->_length);
    $tmp424 = $tmp433.value;
    $l432:;
    panda$core$Bit $tmp434 = { $tmp424 };
    if ($tmp434.value) {
    {
        c435 = self->data[current314.value];
        panda$core$MutableString$append$panda$core$Char8(result323, c435);
        panda$core$Int64 $tmp436 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
        current314 = $tmp436;
        int64_t $tmp437 = ((int64_t) c435.value) & 255;
        bool $tmp438 = $tmp437 >= 192;
        if (((panda$core$Bit) { $tmp438 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
            panda$core$Int64 $tmp439 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
            current314 = $tmp439;
        }
        }
        int64_t $tmp440 = ((int64_t) c435.value) & 255;
        bool $tmp441 = $tmp440 >= 224;
        if (((panda$core$Bit) { $tmp441 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
            panda$core$Int64 $tmp442 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current314, ((panda$core$Int64) { 1 }));
            current314 = $tmp442;
        }
        }
        int64_t $tmp443 = ((int64_t) c435.value) & 255;
        bool $tmp444 = $tmp443 >= 240;
        if (((panda$core$Bit) { $tmp444 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result323, self->data[current314.value]);
        }
        }
    }
    }
    panda$core$String* $tmp445 = panda$core$MutableString$finish$R$panda$core$String(result323);
    return $tmp445;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start446;
    panda$core$String$Index$nullable end449;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp452;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp447 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp448 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp447, ((panda$core$Int64) p_r.min.value));
        start446 = ((panda$core$String$Index$nullable) { $tmp448, true });
    }
    }
    else {
    {
        start446 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp450 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp451 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp450, ((panda$core$Int64) p_r.max.value));
        end449 = ((panda$core$String$Index$nullable) { $tmp451, true });
    }
    }
    else {
    {
        end449 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp452, start446, end449, p_r.inclusive);
    panda$core$String* $tmp453 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp452);
    return $tmp453;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start454;
    panda$core$String$Index$nullable end457;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp460;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp455 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp456 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp455, ((panda$core$Int64) p_r.start.value));
        start454 = ((panda$core$String$Index$nullable) { $tmp456, true });
    }
    }
    else {
    {
        start454 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp458 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp459 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp458, ((panda$core$Int64) p_r.end.value));
        end457 = ((panda$core$String$Index$nullable) { $tmp459, true });
    }
    }
    else {
    {
        end457 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp460, start454, end457, p_r.step, p_r.inclusive);
    panda$core$String* $tmp461 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp460);
    return $tmp461;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp462;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp462, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp464 = $tmp462.min.value;
    panda$core$Int64 i463 = { $tmp464 };
    int64_t $tmp466 = $tmp462.max.value;
    bool $tmp467 = $tmp462.inclusive.value;
    if ($tmp467) goto $l474; else goto $l475;
    $l474:;
    if ($tmp464 <= $tmp466) goto $l468; else goto $l470;
    $l475:;
    if ($tmp464 < $tmp466) goto $l468; else goto $l470;
    $l468:;
    {
        panda$core$Bit $tmp476 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i463.value], p_c);
        if ($tmp476.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l471:;
    int64_t $tmp478 = $tmp466 - i463.value;
    if ($tmp467) goto $l479; else goto $l480;
    $l479:;
    if ($tmp478 >= 1) goto $l477; else goto $l470;
    $l480:;
    if ($tmp478 > 1) goto $l477; else goto $l470;
    $l477:;
    i463.value += 1;
    goto $l468;
    $l470:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp483 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp483.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp484 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp485 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp484);
    return $tmp485;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp487;
    panda$core$Range$LTpanda$core$Int64$GT $tmp502;
    panda$core$String$Index $tmp524;
    panda$core$Bit $tmp486 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp486.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp488 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp487, p_start.value, $tmp488, ((panda$core$Bit) { true }));
    int64_t $tmp490 = $tmp487.min.value;
    panda$core$Int64 i489 = { $tmp490 };
    int64_t $tmp492 = $tmp487.max.value;
    bool $tmp493 = $tmp487.inclusive.value;
    if ($tmp493) goto $l500; else goto $l501;
    $l500:;
    if ($tmp490 <= $tmp492) goto $l494; else goto $l496;
    $l501:;
    if ($tmp490 < $tmp492) goto $l494; else goto $l496;
    $l494:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp502, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp504 = $tmp502.min.value;
        panda$core$Int64 j503 = { $tmp504 };
        int64_t $tmp506 = $tmp502.max.value;
        bool $tmp507 = $tmp502.inclusive.value;
        if ($tmp507) goto $l514; else goto $l515;
        $l514:;
        if ($tmp504 <= $tmp506) goto $l508; else goto $l510;
        $l515:;
        if ($tmp504 < $tmp506) goto $l508; else goto $l510;
        $l508:;
        {
            panda$core$Int64 $tmp516 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i489, j503);
            panda$core$Bit $tmp517 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp516.value], p_s->data[j503.value]);
            if ($tmp517.value) {
            {
                goto $l497;
            }
            }
        }
        $l511:;
        int64_t $tmp519 = $tmp506 - j503.value;
        if ($tmp507) goto $l520; else goto $l521;
        $l520:;
        if ($tmp519 >= 1) goto $l518; else goto $l510;
        $l521:;
        if ($tmp519 > 1) goto $l518; else goto $l510;
        $l518:;
        j503.value += 1;
        goto $l508;
        $l510:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp524, i489);
        return ((panda$core$String$Index$nullable) { $tmp524, true });
    }
    $l497:;
    int64_t $tmp526 = $tmp492 - i489.value;
    if ($tmp493) goto $l527; else goto $l528;
    $l527:;
    if ($tmp526 >= 1) goto $l525; else goto $l496;
    $l528:;
    if ($tmp526 > 1) goto $l525; else goto $l496;
    $l525:;
    i489.value += 1;
    goto $l494;
    $l496:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp531 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp532 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp531);
    return $tmp532;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos534;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp537;
    panda$core$Range$LTpanda$core$Int64$GT $tmp556;
    panda$core$String$Index $tmp578;
    panda$core$Bit $tmp533 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp533.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp535 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp536 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp535);
    startPos534 = $tmp536;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp537, startPos534, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp539 = $tmp537.start.value;
    panda$core$Int64 i538 = { $tmp539 };
    int64_t $tmp541 = $tmp537.end.value;
    int64_t $tmp542 = $tmp537.step.value;
    bool $tmp543 = $tmp537.inclusive.value;
    bool $tmp550 = $tmp542 > 0;
    if ($tmp550) goto $l548; else goto $l549;
    $l548:;
    if ($tmp543) goto $l551; else goto $l552;
    $l551:;
    if ($tmp539 <= $tmp541) goto $l544; else goto $l546;
    $l552:;
    if ($tmp539 < $tmp541) goto $l544; else goto $l546;
    $l549:;
    if ($tmp543) goto $l553; else goto $l554;
    $l553:;
    if ($tmp539 >= $tmp541) goto $l544; else goto $l546;
    $l554:;
    if ($tmp539 > $tmp541) goto $l544; else goto $l546;
    $l544:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp556, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp558 = $tmp556.min.value;
        panda$core$Int64 j557 = { $tmp558 };
        int64_t $tmp560 = $tmp556.max.value;
        bool $tmp561 = $tmp556.inclusive.value;
        if ($tmp561) goto $l568; else goto $l569;
        $l568:;
        if ($tmp558 <= $tmp560) goto $l562; else goto $l564;
        $l569:;
        if ($tmp558 < $tmp560) goto $l562; else goto $l564;
        $l562:;
        {
            panda$core$Int64 $tmp570 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i538, j557);
            panda$core$Bit $tmp571 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp570.value], p_s->data[j557.value]);
            if ($tmp571.value) {
            {
                goto $l547;
            }
            }
        }
        $l565:;
        int64_t $tmp573 = $tmp560 - j557.value;
        if ($tmp561) goto $l574; else goto $l575;
        $l574:;
        if ($tmp573 >= 1) goto $l572; else goto $l564;
        $l575:;
        if ($tmp573 > 1) goto $l572; else goto $l564;
        $l572:;
        j557.value += 1;
        goto $l562;
        $l564:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp578, i538);
        return ((panda$core$String$Index$nullable) { $tmp578, true });
    }
    $l547:;
    if ($tmp550) goto $l580; else goto $l581;
    $l580:;
    int64_t $tmp582 = $tmp541 - i538.value;
    if ($tmp543) goto $l583; else goto $l584;
    $l583:;
    if ($tmp582 >= $tmp542) goto $l579; else goto $l546;
    $l584:;
    if ($tmp582 > $tmp542) goto $l579; else goto $l546;
    $l581:;
    int64_t $tmp586 = i538.value - $tmp541;
    if ($tmp543) goto $l587; else goto $l588;
    $l587:;
    if ($tmp586 >= -$tmp542) goto $l579; else goto $l546;
    $l588:;
    if ($tmp586 > -$tmp542) goto $l579; else goto $l546;
    $l579:;
    i538.value += $tmp542;
    goto $l544;
    $l546:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result590;
    panda$core$String$Index index593;
    panda$core$String$Index$nullable nextIndex597;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp599;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp601;
    panda$core$String$Index $tmp603;
    panda$core$MutableString* $tmp591 = (panda$core$MutableString*) malloc(48);
    $tmp591->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp591->refCount.value = 1;
    panda$core$MutableString$init($tmp591);
    result590 = $tmp591;
    panda$core$String$Index $tmp594 = panda$core$String$start$R$panda$core$String$Index(self);
    index593 = $tmp594;
    $l595:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp598 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index593);
        nextIndex597 = $tmp598;
        if (((panda$core$Bit) { !nextIndex597.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp599, ((panda$core$String$Index$nullable) { index593, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp600 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp599);
            panda$core$MutableString$append$panda$core$String(result590, $tmp600);
            goto $l596;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp601, index593, ((panda$core$String$Index) nextIndex597.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp602 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp601);
        panda$core$MutableString$append$panda$core$String(result590, $tmp602);
        panda$core$MutableString$append$panda$core$String(result590, p_replacement);
        panda$core$Int64 $tmp604 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex597.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp603, $tmp604);
        index593 = $tmp603;
    }
    }
    $l596:;
    panda$core$String* $tmp605 = panda$core$MutableString$finish$R$panda$core$String(result590);
    return $tmp605;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp606;
    panda$core$String$Index$init$panda$core$Int64(&$tmp606, ((panda$core$Int64) { 0 }));
    return $tmp606;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp607;
    panda$core$String$Index$init$panda$core$Int64(&$tmp607, self->_length);
    return $tmp607;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c609;
    panda$core$String$Index $tmp612;
    panda$core$String$Index $tmp615;
    panda$core$String$Index $tmp618;
    panda$core$String$Index $tmp620;
    panda$core$Bit $tmp608 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp608.value);
    int64_t $tmp610 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c609 = $tmp610;
    bool $tmp611 = c609 >= 240;
    if (((panda$core$Bit) { $tmp611 }).value) {
    {
        panda$core$Int64 $tmp613 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp612, $tmp613);
        return $tmp612;
    }
    }
    bool $tmp614 = c609 >= 224;
    if (((panda$core$Bit) { $tmp614 }).value) {
    {
        panda$core$Int64 $tmp616 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp615, $tmp616);
        return $tmp615;
    }
    }
    bool $tmp617 = c609 >= 192;
    if (((panda$core$Bit) { $tmp617 }).value) {
    {
        panda$core$Int64 $tmp619 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp618, $tmp619);
        return $tmp618;
    }
    }
    panda$core$Int64 $tmp621 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp620, $tmp621);
    return $tmp620;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue623;
    panda$core$String$Index $tmp634;
    panda$core$Bit $tmp622 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp622.value);
    panda$core$Int64 $tmp624 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue623 = $tmp624;
    $l625:;
    int64_t $tmp628 = ((int64_t) self->data[newValue623.value].value) & 255;
    bool $tmp629 = $tmp628 >= 128;
    bool $tmp627 = $tmp629;
    if (!$tmp627) goto $l630;
    int64_t $tmp631 = ((int64_t) self->data[newValue623.value].value) & 255;
    bool $tmp632 = $tmp631 < 192;
    $tmp627 = $tmp632;
    $l630:;
    if (!((panda$core$Bit) { $tmp627 }).value) goto $l626;
    {
        panda$core$Int64 $tmp633 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue623, ((panda$core$Int64) { 1 }));
        newValue623 = $tmp633;
    }
    goto $l625;
    $l626:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp634, newValue623);
    return $tmp634;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result635;
    panda$core$Range$LTpanda$core$Int64$GT $tmp637;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp658;
    result635 = p_index;
    panda$core$Bit $tmp636 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp636.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp637, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp639 = $tmp637.min.value;
        panda$core$Int64 i638 = { $tmp639 };
        int64_t $tmp641 = $tmp637.max.value;
        bool $tmp642 = $tmp637.inclusive.value;
        if ($tmp642) goto $l649; else goto $l650;
        $l649:;
        if ($tmp639 <= $tmp641) goto $l643; else goto $l645;
        $l650:;
        if ($tmp639 < $tmp641) goto $l643; else goto $l645;
        $l643:;
        {
            panda$core$String$Index $tmp651 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result635);
            result635 = $tmp651;
        }
        $l646:;
        int64_t $tmp653 = $tmp641 - i638.value;
        if ($tmp642) goto $l654; else goto $l655;
        $l654:;
        if ($tmp653 >= 1) goto $l652; else goto $l645;
        $l655:;
        if ($tmp653 > 1) goto $l652; else goto $l645;
        $l652:;
        i638.value += 1;
        goto $l643;
        $l645:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp658, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp660 = $tmp658.start.value;
        panda$core$Int64 i659 = { $tmp660 };
        int64_t $tmp662 = $tmp658.end.value;
        int64_t $tmp663 = $tmp658.step.value;
        bool $tmp664 = $tmp658.inclusive.value;
        bool $tmp671 = $tmp663 > 0;
        if ($tmp671) goto $l669; else goto $l670;
        $l669:;
        if ($tmp664) goto $l672; else goto $l673;
        $l672:;
        if ($tmp660 <= $tmp662) goto $l665; else goto $l667;
        $l673:;
        if ($tmp660 < $tmp662) goto $l665; else goto $l667;
        $l670:;
        if ($tmp664) goto $l674; else goto $l675;
        $l674:;
        if ($tmp660 >= $tmp662) goto $l665; else goto $l667;
        $l675:;
        if ($tmp660 > $tmp662) goto $l665; else goto $l667;
        $l665:;
        {
            panda$core$String$Index $tmp677 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result635);
            result635 = $tmp677;
        }
        $l668:;
        if ($tmp671) goto $l679; else goto $l680;
        $l679:;
        int64_t $tmp681 = $tmp662 - i659.value;
        if ($tmp664) goto $l682; else goto $l683;
        $l682:;
        if ($tmp681 >= $tmp663) goto $l678; else goto $l667;
        $l683:;
        if ($tmp681 > $tmp663) goto $l678; else goto $l667;
        $l680:;
        int64_t $tmp685 = i659.value - $tmp662;
        if ($tmp664) goto $l686; else goto $l687;
        $l686:;
        if ($tmp685 >= -$tmp663) goto $l678; else goto $l667;
        $l687:;
        if ($tmp685 > -$tmp663) goto $l678; else goto $l667;
        $l678:;
        i659.value += $tmp663;
        goto $l665;
        $l667:;
    }
    }
    return result635;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp689 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp689;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result690;
    panda$core$String$Index index693;
    panda$core$String$Index$nullable nextIndex697;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp706;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp708;
    panda$collections$Array* $tmp691 = (panda$collections$Array*) malloc(40);
    $tmp691->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp691->refCount.value = 1;
    panda$collections$Array$init($tmp691);
    result690 = $tmp691;
    panda$core$String$Index $tmp694 = panda$core$String$start$R$panda$core$String$Index(self);
    index693 = $tmp694;
    $l695:;
    while (true) {
    {
        panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp698.value) {
        {
            panda$core$String$Index $tmp699 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index693);
            nextIndex697 = ((panda$core$String$Index$nullable) { $tmp699, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp700 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index693);
            nextIndex697 = $tmp700;
        }
        }
        bool $tmp701 = ((panda$core$Bit) { !nextIndex697.nonnull }).value;
        if ($tmp701) goto $l702;
        panda$core$Int64 $tmp703 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result690->count, $tmp703);
        $tmp701 = $tmp704.value;
        $l702:;
        panda$core$Bit $tmp705 = { $tmp701 };
        if ($tmp705.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp706, ((panda$core$String$Index$nullable) { index693, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp707 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp706);
            panda$collections$Array$add$panda$collections$Array$T(result690, ((panda$core$Object*) $tmp707));
            goto $l696;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp708, index693, ((panda$core$String$Index) nextIndex697.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp709 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp708);
        panda$collections$Array$add$panda$collections$Array$T(result690, ((panda$core$Object*) $tmp709));
        panda$core$String$Index $tmp710 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex697.value), p_delimiter->_length);
        index693 = $tmp710;
    }
    }
    $l696:;
    return result690;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result712;
    panda$core$Int64 start713;
    panda$core$Char8 $tmp714;
    panda$core$Range$LTpanda$core$Int64$GT $tmp716;
    panda$core$Int64 digit730;
    panda$core$Char8 $tmp745;
    panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp711.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result712 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp714, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp715 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp714);
    if ($tmp715.value) {
    {
        start713 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start713 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp716, start713, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp718 = $tmp716.min.value;
    panda$core$Int64 i717 = { $tmp718 };
    int64_t $tmp720 = $tmp716.max.value;
    bool $tmp721 = $tmp716.inclusive.value;
    if ($tmp721) goto $l728; else goto $l729;
    $l728:;
    if ($tmp718 <= $tmp720) goto $l722; else goto $l724;
    $l729:;
    if ($tmp718 < $tmp720) goto $l722; else goto $l724;
    $l722:;
    {
        panda$core$Int64 $tmp731 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i717.value].value) }), ((panda$core$Int64) { 48 }));
        digit730 = $tmp731;
        panda$core$Bit $tmp733 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit730, ((panda$core$Int64) { 0 }));
        bool $tmp732 = $tmp733.value;
        if ($tmp732) goto $l734;
        panda$core$Bit $tmp735 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit730, ((panda$core$Int64) { 9 }));
        $tmp732 = $tmp735.value;
        $l734:;
        panda$core$Bit $tmp736 = { $tmp732 };
        if ($tmp736.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp737 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result712, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp738 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp737, digit730);
        result712 = $tmp738;
    }
    $l725:;
    int64_t $tmp740 = $tmp720 - i717.value;
    if ($tmp721) goto $l741; else goto $l742;
    $l741:;
    if ($tmp740 >= 1) goto $l739; else goto $l724;
    $l742:;
    if ($tmp740 > 1) goto $l739; else goto $l724;
    $l739:;
    i717.value += 1;
    goto $l722;
    $l724:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp745, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp746 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp745);
    if ($tmp746.value) {
    {
        panda$core$Int64 $tmp747 = panda$core$Int64$$SUB$R$panda$core$Int64(result712);
        result712 = $tmp747;
    }
    }
    return ((panda$core$Int64$nullable) { result712, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result749;
    panda$core$Range$LTpanda$core$Int64$GT $tmp750;
    panda$core$UInt64 digit764;
    panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp748.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result749 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp750, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp752 = $tmp750.min.value;
    panda$core$Int64 i751 = { $tmp752 };
    int64_t $tmp754 = $tmp750.max.value;
    bool $tmp755 = $tmp750.inclusive.value;
    if ($tmp755) goto $l762; else goto $l763;
    $l762:;
    if ($tmp752 <= $tmp754) goto $l756; else goto $l758;
    $l763:;
    if ($tmp752 < $tmp754) goto $l756; else goto $l758;
    $l756:;
    {
        panda$core$UInt64 $tmp765 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i751.value].value) }), ((panda$core$UInt64) { 48 }));
        digit764 = $tmp765;
        panda$core$Bit $tmp767 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit764, ((panda$core$UInt64) { 0 }));
        bool $tmp766 = $tmp767.value;
        if ($tmp766) goto $l768;
        panda$core$Bit $tmp769 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit764, ((panda$core$UInt64) { 9 }));
        $tmp766 = $tmp769.value;
        $l768:;
        panda$core$Bit $tmp770 = { $tmp766 };
        if ($tmp770.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp771 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result749, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp772 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp771, digit764);
        result749 = $tmp772;
    }
    $l759:;
    int64_t $tmp774 = $tmp754 - i751.value;
    if ($tmp755) goto $l775; else goto $l776;
    $l775:;
    if ($tmp774 >= 1) goto $l773; else goto $l758;
    $l776:;
    if ($tmp774 > 1) goto $l773; else goto $l758;
    $l773:;
    i751.value += 1;
    goto $l756;
    $l758:;
    return ((panda$core$UInt64$nullable) { result749, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h780;
    panda$core$Range$LTpanda$core$Int64$GT $tmp781;
    panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp779.value) {
    {
        h780 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp781, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp783 = $tmp781.min.value;
        panda$core$Int64 i782 = { $tmp783 };
        int64_t $tmp785 = $tmp781.max.value;
        bool $tmp786 = $tmp781.inclusive.value;
        if ($tmp786) goto $l793; else goto $l794;
        $l793:;
        if ($tmp783 <= $tmp785) goto $l787; else goto $l789;
        $l794:;
        if ($tmp783 < $tmp785) goto $l787; else goto $l789;
        $l787:;
        {
            panda$core$Int64 $tmp795 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h780, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp796 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp795, ((panda$core$Int64) { ((int64_t) self->data[i782.value].value) }));
            h780 = $tmp796;
        }
        $l790:;
        int64_t $tmp798 = $tmp785 - i782.value;
        if ($tmp786) goto $l799; else goto $l800;
        $l799:;
        if ($tmp798 >= 1) goto $l797; else goto $l789;
        $l800:;
        if ($tmp798 > 1) goto $l797; else goto $l789;
        $l797:;
        i782.value += 1;
        goto $l787;
        $l789:;
        self->_hash = h780;
    }
    }
    return self->_hash;
}

