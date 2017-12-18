#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/String/UTF8List.h"
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
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* self) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn21)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn165)(panda$core$Object*);
typedef panda$core$String* (*$fn192)(panda$core$Object*);

static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    if ((uint64_t) $tmp24 >= 1) goto $l23; else goto $l13;
    $l26:;
    if ((uint64_t) $tmp24 > 1) goto $l23; else goto $l13;
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
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
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
    panda$collections$Iterator* $tmp37 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
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
    if ((uint64_t) $tmp66 >= 1) goto $l65; else goto $l58;
    $l68:;
    if ((uint64_t) $tmp66 > 1) goto $l65; else goto $l58;
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
    if ((uint64_t) $tmp90 >= 1) goto $l89; else goto $l80;
    $l92:;
    if ((uint64_t) $tmp90 > 1) goto $l89; else goto $l80;
    $l89:;
    i73.value += 1;
    goto $l78;
    $l80:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
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
    if ((uint64_t) $tmp136 >= 1) goto $l135; else goto $l129;
    $l138:;
    if ((uint64_t) $tmp136 > 1) goto $l135; else goto $l129;
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
    if ((uint64_t) $tmp157 >= 1) goto $l156; else goto $l149;
    $l159:;
    if ((uint64_t) $tmp157 > 1) goto $l156; else goto $l149;
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
    if ((uint64_t) $tmp186 >= 1) goto $l185; else goto $l179;
    $l188:;
    if ((uint64_t) $tmp186 > 1) goto $l185; else goto $l179;
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
    if ((uint64_t) $tmp212 >= 1) goto $l211; else goto $l204;
    $l214:;
    if ((uint64_t) $tmp212 > 1) goto $l211; else goto $l204;
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
    panda$core$String$Index min308;
    panda$core$String$Index max310;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp313;
    panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp306.value) {
    {
        return &$s307;
    }
    }
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min308 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp309 = panda$core$String$start$R$panda$core$String$Index(self);
        min308 = $tmp309;
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max310 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp311 = panda$core$String$end$R$panda$core$String$Index(self);
        max310 = $tmp311;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp312 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max310);
            max310 = $tmp312;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp313, min308, max310, p_r.inclusive);
    panda$core$String* $tmp314 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp313);
    return $tmp314;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step317;
    panda$core$Int64 current318;
    panda$core$Int64 end323;
    panda$core$MutableString* result327;
    panda$core$Char8 c334;
    panda$core$Range$LTpanda$core$Int64$GT $tmp345;
    panda$core$String$Index $tmp361;
    panda$core$Char8 c373;
    panda$core$Int64 old374;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp394;
    panda$core$String$Index $tmp415;
    panda$core$Char8 c439;
    panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp315.value) {
    {
        return &$s316;
    }
    }
    step317 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current318 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp319 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step317, ((panda$core$Int64) { 0 }));
    if ($tmp319.value) {
    {
        panda$core$String$Index $tmp320 = panda$core$String$start$R$panda$core$String$Index(self);
        current318 = $tmp320.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp321 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp322 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp321);
        current318 = $tmp322.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end323 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp324 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step317, ((panda$core$Int64) { 0 }));
    if ($tmp324.value) {
    {
        panda$core$String$Index $tmp325 = panda$core$String$end$R$panda$core$String$Index(self);
        end323 = $tmp325.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp326 = panda$core$String$start$R$panda$core$String$Index(self);
        end323 = $tmp326.value;
    }
    }
    }
    panda$core$MutableString* $tmp328 = (panda$core$MutableString*) malloc(48);
    $tmp328->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp328->refCount.value = 1;
    panda$core$MutableString$init($tmp328);
    result327 = $tmp328;
    panda$core$Bit $tmp330 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp330.value) {
    {
        $l331:;
        panda$core$Bit $tmp333 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current318, end323);
        if (!$tmp333.value) goto $l332;
        {
            c334 = self->data[current318.value];
            panda$core$MutableString$append$panda$core$Char8(result327, c334);
            panda$core$Int64 $tmp335 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
            current318 = $tmp335;
            int64_t $tmp336 = ((int64_t) c334.value) & 255;
            bool $tmp337 = $tmp336 >= 192;
            if (((panda$core$Bit) { $tmp337 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
                panda$core$Int64 $tmp338 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
                current318 = $tmp338;
            }
            }
            int64_t $tmp339 = ((int64_t) c334.value) & 255;
            bool $tmp340 = $tmp339 >= 224;
            if (((panda$core$Bit) { $tmp340 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
                panda$core$Int64 $tmp341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
                current318 = $tmp341;
            }
            }
            int64_t $tmp342 = ((int64_t) c334.value) & 255;
            bool $tmp343 = $tmp342 >= 240;
            if (((panda$core$Bit) { $tmp343 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
                panda$core$Int64 $tmp344 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
                current318 = $tmp344;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp345, ((panda$core$Int64) { 1 }), step317, ((panda$core$Bit) { false }));
            int64_t $tmp347 = $tmp345.min.value;
            panda$core$Int64 i346 = { $tmp347 };
            int64_t $tmp349 = $tmp345.max.value;
            bool $tmp350 = $tmp345.inclusive.value;
            if ($tmp350) goto $l357; else goto $l358;
            $l357:;
            if ($tmp347 <= $tmp349) goto $l351; else goto $l353;
            $l358:;
            if ($tmp347 < $tmp349) goto $l351; else goto $l353;
            $l351:;
            {
                panda$core$Bit $tmp359 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current318, end323);
                if ($tmp359.value) {
                {
                    panda$core$String* $tmp360 = panda$core$MutableString$convert$R$panda$core$String(result327);
                    return $tmp360;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp361, current318);
                panda$core$String$Index $tmp362 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp361);
                current318 = $tmp362.value;
            }
            $l354:;
            int64_t $tmp364 = $tmp349 - i346.value;
            if ($tmp350) goto $l365; else goto $l366;
            $l365:;
            if ((uint64_t) $tmp364 >= 1) goto $l363; else goto $l353;
            $l366:;
            if ((uint64_t) $tmp364 > 1) goto $l363; else goto $l353;
            $l363:;
            i346.value += 1;
            goto $l351;
            $l353:;
        }
        goto $l331;
        $l332:;
    }
    }
    else {
    {
        panda$core$Bit $tmp369 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp369.value);
        $l370:;
        panda$core$Bit $tmp372 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current318, end323);
        if (!$tmp372.value) goto $l371;
        {
            c373 = self->data[current318.value];
            panda$core$MutableString$append$panda$core$Char8(result327, c373);
            old374 = current318;
            panda$core$Int64 $tmp375 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
            current318 = $tmp375;
            int64_t $tmp376 = ((int64_t) c373.value) & 255;
            bool $tmp377 = $tmp376 >= 192;
            if (((panda$core$Bit) { $tmp377 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
                panda$core$Int64 $tmp378 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
                current318 = $tmp378;
            }
            }
            int64_t $tmp379 = ((int64_t) c373.value) & 255;
            bool $tmp380 = $tmp379 >= 224;
            if (((panda$core$Bit) { $tmp380 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
                panda$core$Int64 $tmp381 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
                current318 = $tmp381;
            }
            }
            int64_t $tmp382 = ((int64_t) c373.value) & 255;
            bool $tmp383 = $tmp382 >= 240;
            if (((panda$core$Bit) { $tmp383 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
            }
            }
            panda$core$Int64 $tmp384 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old374, ((panda$core$Int64) { 1 }));
            current318 = $tmp384;
            $l385:;
            int64_t $tmp388 = ((int64_t) self->data[current318.value].value) & 255;
            bool $tmp389 = $tmp388 >= 128;
            bool $tmp387 = $tmp389;
            if (!$tmp387) goto $l390;
            int64_t $tmp391 = ((int64_t) self->data[current318.value].value) & 255;
            bool $tmp392 = $tmp391 < 192;
            $tmp387 = $tmp392;
            $l390:;
            if (!((panda$core$Bit) { $tmp387 }).value) goto $l386;
            {
                panda$core$Int64 $tmp393 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
                current318 = $tmp393;
            }
            goto $l385;
            $l386:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp394, ((panda$core$Int64) { -1 }), step317, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp396 = $tmp394.start.value;
            panda$core$Int64 i395 = { $tmp396 };
            int64_t $tmp398 = $tmp394.end.value;
            int64_t $tmp399 = $tmp394.step.value;
            bool $tmp400 = $tmp394.inclusive.value;
            bool $tmp407 = $tmp399 > 0;
            if ($tmp407) goto $l405; else goto $l406;
            $l405:;
            if ($tmp400) goto $l408; else goto $l409;
            $l408:;
            if ($tmp396 <= $tmp398) goto $l401; else goto $l403;
            $l409:;
            if ($tmp396 < $tmp398) goto $l401; else goto $l403;
            $l406:;
            if ($tmp400) goto $l410; else goto $l411;
            $l410:;
            if ($tmp396 >= $tmp398) goto $l401; else goto $l403;
            $l411:;
            if ($tmp396 > $tmp398) goto $l401; else goto $l403;
            $l401:;
            {
                panda$core$Bit $tmp413 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current318, end323);
                if ($tmp413.value) {
                {
                    panda$core$String* $tmp414 = panda$core$MutableString$convert$R$panda$core$String(result327);
                    return $tmp414;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp415, current318);
                panda$core$String$Index $tmp416 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp415);
                current318 = $tmp416.value;
            }
            $l404:;
            if ($tmp407) goto $l418; else goto $l419;
            $l418:;
            int64_t $tmp420 = $tmp398 - i395.value;
            if ($tmp400) goto $l421; else goto $l422;
            $l421:;
            if ((uint64_t) $tmp420 >= $tmp399) goto $l417; else goto $l403;
            $l422:;
            if ((uint64_t) $tmp420 > $tmp399) goto $l417; else goto $l403;
            $l419:;
            int64_t $tmp424 = i395.value - $tmp398;
            if ($tmp400) goto $l425; else goto $l426;
            $l425:;
            if ((uint64_t) $tmp424 >= -$tmp399) goto $l417; else goto $l403;
            $l426:;
            if ((uint64_t) $tmp424 > -$tmp399) goto $l417; else goto $l403;
            $l417:;
            i395.value += $tmp399;
            goto $l401;
            $l403:;
        }
        goto $l370;
        $l371:;
    }
    }
    bool $tmp430 = p_r.inclusive.value;
    if ($tmp430) goto $l431;
    $tmp430 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l431:;
    panda$core$Bit $tmp432 = { $tmp430 };
    bool $tmp429 = $tmp432.value;
    if (!$tmp429) goto $l433;
    panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current318, end323);
    $tmp429 = $tmp434.value;
    $l433:;
    panda$core$Bit $tmp435 = { $tmp429 };
    bool $tmp428 = $tmp435.value;
    if (!$tmp428) goto $l436;
    panda$core$Bit $tmp437 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end323, self->_length);
    $tmp428 = $tmp437.value;
    $l436:;
    panda$core$Bit $tmp438 = { $tmp428 };
    if ($tmp438.value) {
    {
        c439 = self->data[current318.value];
        panda$core$MutableString$append$panda$core$Char8(result327, c439);
        panda$core$Int64 $tmp440 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
        current318 = $tmp440;
        int64_t $tmp441 = ((int64_t) c439.value) & 255;
        bool $tmp442 = $tmp441 >= 192;
        if (((panda$core$Bit) { $tmp442 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
            panda$core$Int64 $tmp443 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
            current318 = $tmp443;
        }
        }
        int64_t $tmp444 = ((int64_t) c439.value) & 255;
        bool $tmp445 = $tmp444 >= 224;
        if (((panda$core$Bit) { $tmp445 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
            panda$core$Int64 $tmp446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current318, ((panda$core$Int64) { 1 }));
            current318 = $tmp446;
        }
        }
        int64_t $tmp447 = ((int64_t) c439.value) & 255;
        bool $tmp448 = $tmp447 >= 240;
        if (((panda$core$Bit) { $tmp448 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result327, self->data[current318.value]);
        }
        }
    }
    }
    panda$core$String* $tmp449 = panda$core$MutableString$finish$R$panda$core$String(result327);
    return $tmp449;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start450;
    panda$core$String$Index$nullable end453;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp456;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp451 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp452 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp451, ((panda$core$Int64) p_r.min.value));
        start450 = ((panda$core$String$Index$nullable) { $tmp452, true });
    }
    }
    else {
    {
        start450 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp454 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp455 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp454, ((panda$core$Int64) p_r.max.value));
        end453 = ((panda$core$String$Index$nullable) { $tmp455, true });
    }
    }
    else {
    {
        end453 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp456, start450, end453, p_r.inclusive);
    panda$core$String* $tmp457 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp456);
    return $tmp457;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start458;
    panda$core$String$Index$nullable end461;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp464;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp459 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp460 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp459, ((panda$core$Int64) p_r.start.value));
        start458 = ((panda$core$String$Index$nullable) { $tmp460, true });
    }
    }
    else {
    {
        start458 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp462 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp463 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp462, ((panda$core$Int64) p_r.end.value));
        end461 = ((panda$core$String$Index$nullable) { $tmp463, true });
    }
    }
    else {
    {
        end461 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp464, start458, end461, p_r.step, p_r.inclusive);
    panda$core$String* $tmp465 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp464);
    return $tmp465;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp466;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp466, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp468 = $tmp466.min.value;
    panda$core$Int64 i467 = { $tmp468 };
    int64_t $tmp470 = $tmp466.max.value;
    bool $tmp471 = $tmp466.inclusive.value;
    if ($tmp471) goto $l478; else goto $l479;
    $l478:;
    if ($tmp468 <= $tmp470) goto $l472; else goto $l474;
    $l479:;
    if ($tmp468 < $tmp470) goto $l472; else goto $l474;
    $l472:;
    {
        panda$core$Bit $tmp480 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i467.value], p_c);
        if ($tmp480.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l475:;
    int64_t $tmp482 = $tmp470 - i467.value;
    if ($tmp471) goto $l483; else goto $l484;
    $l483:;
    if ((uint64_t) $tmp482 >= 1) goto $l481; else goto $l474;
    $l484:;
    if ((uint64_t) $tmp482 > 1) goto $l481; else goto $l474;
    $l481:;
    i467.value += 1;
    goto $l472;
    $l474:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp487 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp487.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp488 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp489 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp488);
    return $tmp489;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp491;
    panda$core$Range$LTpanda$core$Int64$GT $tmp506;
    panda$core$String$Index $tmp528;
    panda$core$Bit $tmp490 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp490.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp492 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp491, p_start.value, $tmp492, ((panda$core$Bit) { true }));
    int64_t $tmp494 = $tmp491.min.value;
    panda$core$Int64 i493 = { $tmp494 };
    int64_t $tmp496 = $tmp491.max.value;
    bool $tmp497 = $tmp491.inclusive.value;
    if ($tmp497) goto $l504; else goto $l505;
    $l504:;
    if ($tmp494 <= $tmp496) goto $l498; else goto $l500;
    $l505:;
    if ($tmp494 < $tmp496) goto $l498; else goto $l500;
    $l498:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp506, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp508 = $tmp506.min.value;
        panda$core$Int64 j507 = { $tmp508 };
        int64_t $tmp510 = $tmp506.max.value;
        bool $tmp511 = $tmp506.inclusive.value;
        if ($tmp511) goto $l518; else goto $l519;
        $l518:;
        if ($tmp508 <= $tmp510) goto $l512; else goto $l514;
        $l519:;
        if ($tmp508 < $tmp510) goto $l512; else goto $l514;
        $l512:;
        {
            panda$core$Int64 $tmp520 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i493, j507);
            panda$core$Bit $tmp521 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp520.value], p_s->data[j507.value]);
            if ($tmp521.value) {
            {
                goto $l501;
            }
            }
        }
        $l515:;
        int64_t $tmp523 = $tmp510 - j507.value;
        if ($tmp511) goto $l524; else goto $l525;
        $l524:;
        if ((uint64_t) $tmp523 >= 1) goto $l522; else goto $l514;
        $l525:;
        if ((uint64_t) $tmp523 > 1) goto $l522; else goto $l514;
        $l522:;
        j507.value += 1;
        goto $l512;
        $l514:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp528, i493);
        return ((panda$core$String$Index$nullable) { $tmp528, true });
    }
    $l501:;
    int64_t $tmp530 = $tmp496 - i493.value;
    if ($tmp497) goto $l531; else goto $l532;
    $l531:;
    if ((uint64_t) $tmp530 >= 1) goto $l529; else goto $l500;
    $l532:;
    if ((uint64_t) $tmp530 > 1) goto $l529; else goto $l500;
    $l529:;
    i493.value += 1;
    goto $l498;
    $l500:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp535 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp536 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp535);
    return $tmp536;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos538;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp541;
    panda$core$Range$LTpanda$core$Int64$GT $tmp560;
    panda$core$String$Index $tmp582;
    panda$core$Bit $tmp537 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp537.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp539 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp540 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp539);
    startPos538 = $tmp540;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp541, startPos538, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp543 = $tmp541.start.value;
    panda$core$Int64 i542 = { $tmp543 };
    int64_t $tmp545 = $tmp541.end.value;
    int64_t $tmp546 = $tmp541.step.value;
    bool $tmp547 = $tmp541.inclusive.value;
    bool $tmp554 = $tmp546 > 0;
    if ($tmp554) goto $l552; else goto $l553;
    $l552:;
    if ($tmp547) goto $l555; else goto $l556;
    $l555:;
    if ($tmp543 <= $tmp545) goto $l548; else goto $l550;
    $l556:;
    if ($tmp543 < $tmp545) goto $l548; else goto $l550;
    $l553:;
    if ($tmp547) goto $l557; else goto $l558;
    $l557:;
    if ($tmp543 >= $tmp545) goto $l548; else goto $l550;
    $l558:;
    if ($tmp543 > $tmp545) goto $l548; else goto $l550;
    $l548:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp560, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp562 = $tmp560.min.value;
        panda$core$Int64 j561 = { $tmp562 };
        int64_t $tmp564 = $tmp560.max.value;
        bool $tmp565 = $tmp560.inclusive.value;
        if ($tmp565) goto $l572; else goto $l573;
        $l572:;
        if ($tmp562 <= $tmp564) goto $l566; else goto $l568;
        $l573:;
        if ($tmp562 < $tmp564) goto $l566; else goto $l568;
        $l566:;
        {
            panda$core$Int64 $tmp574 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i542, j561);
            panda$core$Bit $tmp575 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp574.value], p_s->data[j561.value]);
            if ($tmp575.value) {
            {
                goto $l551;
            }
            }
        }
        $l569:;
        int64_t $tmp577 = $tmp564 - j561.value;
        if ($tmp565) goto $l578; else goto $l579;
        $l578:;
        if ((uint64_t) $tmp577 >= 1) goto $l576; else goto $l568;
        $l579:;
        if ((uint64_t) $tmp577 > 1) goto $l576; else goto $l568;
        $l576:;
        j561.value += 1;
        goto $l566;
        $l568:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp582, i542);
        return ((panda$core$String$Index$nullable) { $tmp582, true });
    }
    $l551:;
    if ($tmp554) goto $l584; else goto $l585;
    $l584:;
    int64_t $tmp586 = $tmp545 - i542.value;
    if ($tmp547) goto $l587; else goto $l588;
    $l587:;
    if ((uint64_t) $tmp586 >= $tmp546) goto $l583; else goto $l550;
    $l588:;
    if ((uint64_t) $tmp586 > $tmp546) goto $l583; else goto $l550;
    $l585:;
    int64_t $tmp590 = i542.value - $tmp545;
    if ($tmp547) goto $l591; else goto $l592;
    $l591:;
    if ((uint64_t) $tmp590 >= -$tmp546) goto $l583; else goto $l550;
    $l592:;
    if ((uint64_t) $tmp590 > -$tmp546) goto $l583; else goto $l550;
    $l583:;
    i542.value += $tmp546;
    goto $l548;
    $l550:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result594;
    panda$core$String$Index index597;
    panda$core$String$Index$nullable nextIndex601;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp603;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp605;
    panda$core$String$Index $tmp607;
    panda$core$MutableString* $tmp595 = (panda$core$MutableString*) malloc(48);
    $tmp595->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp595->refCount.value = 1;
    panda$core$MutableString$init($tmp595);
    result594 = $tmp595;
    panda$core$String$Index $tmp598 = panda$core$String$start$R$panda$core$String$Index(self);
    index597 = $tmp598;
    $l599:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp602 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index597);
        nextIndex601 = $tmp602;
        if (((panda$core$Bit) { !nextIndex601.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp603, ((panda$core$String$Index$nullable) { index597, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp604 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp603);
            panda$core$MutableString$append$panda$core$String(result594, $tmp604);
            goto $l600;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp605, index597, ((panda$core$String$Index) nextIndex601.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp606 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp605);
        panda$core$MutableString$append$panda$core$String(result594, $tmp606);
        panda$core$MutableString$append$panda$core$String(result594, p_replacement);
        panda$core$Int64 $tmp608 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex601.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp607, $tmp608);
        index597 = $tmp607;
    }
    }
    $l600:;
    panda$core$String* $tmp609 = panda$core$MutableString$finish$R$panda$core$String(result594);
    return $tmp609;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp610;
    panda$core$String$Index$init$panda$core$Int64(&$tmp610, ((panda$core$Int64) { 0 }));
    return $tmp610;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp611;
    panda$core$String$Index$init$panda$core$Int64(&$tmp611, self->_length);
    return $tmp611;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c613;
    panda$core$String$Index $tmp616;
    panda$core$String$Index $tmp619;
    panda$core$String$Index $tmp622;
    panda$core$String$Index $tmp624;
    panda$core$Bit $tmp612 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp612.value);
    int64_t $tmp614 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c613 = $tmp614;
    bool $tmp615 = c613 >= 240;
    if (((panda$core$Bit) { $tmp615 }).value) {
    {
        panda$core$Int64 $tmp617 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp616, $tmp617);
        return $tmp616;
    }
    }
    bool $tmp618 = c613 >= 224;
    if (((panda$core$Bit) { $tmp618 }).value) {
    {
        panda$core$Int64 $tmp620 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp619, $tmp620);
        return $tmp619;
    }
    }
    bool $tmp621 = c613 >= 192;
    if (((panda$core$Bit) { $tmp621 }).value) {
    {
        panda$core$Int64 $tmp623 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp622, $tmp623);
        return $tmp622;
    }
    }
    panda$core$Int64 $tmp625 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp624, $tmp625);
    return $tmp624;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue627;
    panda$core$String$Index $tmp638;
    panda$core$Bit $tmp626 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp626.value);
    panda$core$Int64 $tmp628 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue627 = $tmp628;
    $l629:;
    int64_t $tmp632 = ((int64_t) self->data[newValue627.value].value) & 255;
    bool $tmp633 = $tmp632 >= 128;
    bool $tmp631 = $tmp633;
    if (!$tmp631) goto $l634;
    int64_t $tmp635 = ((int64_t) self->data[newValue627.value].value) & 255;
    bool $tmp636 = $tmp635 < 192;
    $tmp631 = $tmp636;
    $l634:;
    if (!((panda$core$Bit) { $tmp631 }).value) goto $l630;
    {
        panda$core$Int64 $tmp637 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue627, ((panda$core$Int64) { 1 }));
        newValue627 = $tmp637;
    }
    goto $l629;
    $l630:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp638, newValue627);
    return $tmp638;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result639;
    panda$core$Range$LTpanda$core$Int64$GT $tmp641;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp662;
    result639 = p_index;
    panda$core$Bit $tmp640 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp640.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp641, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp643 = $tmp641.min.value;
        panda$core$Int64 i642 = { $tmp643 };
        int64_t $tmp645 = $tmp641.max.value;
        bool $tmp646 = $tmp641.inclusive.value;
        if ($tmp646) goto $l653; else goto $l654;
        $l653:;
        if ($tmp643 <= $tmp645) goto $l647; else goto $l649;
        $l654:;
        if ($tmp643 < $tmp645) goto $l647; else goto $l649;
        $l647:;
        {
            panda$core$String$Index $tmp655 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result639);
            result639 = $tmp655;
        }
        $l650:;
        int64_t $tmp657 = $tmp645 - i642.value;
        if ($tmp646) goto $l658; else goto $l659;
        $l658:;
        if ((uint64_t) $tmp657 >= 1) goto $l656; else goto $l649;
        $l659:;
        if ((uint64_t) $tmp657 > 1) goto $l656; else goto $l649;
        $l656:;
        i642.value += 1;
        goto $l647;
        $l649:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp662, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp664 = $tmp662.start.value;
        panda$core$Int64 i663 = { $tmp664 };
        int64_t $tmp666 = $tmp662.end.value;
        int64_t $tmp667 = $tmp662.step.value;
        bool $tmp668 = $tmp662.inclusive.value;
        bool $tmp675 = $tmp667 > 0;
        if ($tmp675) goto $l673; else goto $l674;
        $l673:;
        if ($tmp668) goto $l676; else goto $l677;
        $l676:;
        if ($tmp664 <= $tmp666) goto $l669; else goto $l671;
        $l677:;
        if ($tmp664 < $tmp666) goto $l669; else goto $l671;
        $l674:;
        if ($tmp668) goto $l678; else goto $l679;
        $l678:;
        if ($tmp664 >= $tmp666) goto $l669; else goto $l671;
        $l679:;
        if ($tmp664 > $tmp666) goto $l669; else goto $l671;
        $l669:;
        {
            panda$core$String$Index $tmp681 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result639);
            result639 = $tmp681;
        }
        $l672:;
        if ($tmp675) goto $l683; else goto $l684;
        $l683:;
        int64_t $tmp685 = $tmp666 - i663.value;
        if ($tmp668) goto $l686; else goto $l687;
        $l686:;
        if ((uint64_t) $tmp685 >= $tmp667) goto $l682; else goto $l671;
        $l687:;
        if ((uint64_t) $tmp685 > $tmp667) goto $l682; else goto $l671;
        $l684:;
        int64_t $tmp689 = i663.value - $tmp666;
        if ($tmp668) goto $l690; else goto $l691;
        $l690:;
        if ((uint64_t) $tmp689 >= -$tmp667) goto $l682; else goto $l671;
        $l691:;
        if ((uint64_t) $tmp689 > -$tmp667) goto $l682; else goto $l671;
        $l682:;
        i663.value += $tmp667;
        goto $l669;
        $l671:;
    }
    }
    return result639;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp693;
    panda$core$Char32$init$panda$core$Int32(&$tmp693, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp694 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp693);
    return $tmp694;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp695 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp696 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp695, p_width);
    if ($tmp696.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp697 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp698 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp697);
    panda$core$String* $tmp699 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp698);
    panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp699);
    return $tmp700;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp701;
    panda$core$Char32$init$panda$core$Int32(&$tmp701, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp702 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp701);
    return $tmp702;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp703 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp704 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp703, p_width);
    if ($tmp704.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp705 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp706 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp705);
    panda$core$String* $tmp707 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp706);
    panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, self);
    return $tmp708;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp709;
    panda$core$Char32$init$panda$core$Int32(&$tmp709, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp710 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp709);
    return $tmp710;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 pad713;
    panda$core$Int64 left716;
    panda$core$Int64 right718;
    panda$core$Int64 $tmp711 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp712 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp711, p_width);
    if ($tmp712.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp714 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp715 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp714);
    pad713 = $tmp715;
    panda$core$Int64 $tmp717 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad713, ((panda$core$Int64) { 2 }));
    left716 = $tmp717;
    panda$core$Int64 $tmp719 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad713, left716);
    right718 = $tmp719;
    panda$core$String* $tmp720 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left716);
    panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp720, self);
    panda$core$String* $tmp722 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right718);
    panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp721, $tmp722);
    return $tmp723;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp724 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp724;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result725;
    panda$core$String$Index index728;
    panda$core$String$Index$nullable nextIndex732;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp741;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp743;
    panda$collections$Array* $tmp726 = (panda$collections$Array*) malloc(40);
    $tmp726->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp726->refCount.value = 1;
    panda$collections$Array$init($tmp726);
    result725 = $tmp726;
    panda$core$String$Index $tmp729 = panda$core$String$start$R$panda$core$String$Index(self);
    index728 = $tmp729;
    $l730:;
    while (true) {
    {
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp733.value) {
        {
            panda$core$String$Index $tmp734 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index728);
            nextIndex732 = ((panda$core$String$Index$nullable) { $tmp734, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp735 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index728);
            nextIndex732 = $tmp735;
        }
        }
        bool $tmp736 = ((panda$core$Bit) { !nextIndex732.nonnull }).value;
        if ($tmp736) goto $l737;
        panda$core$Int64 $tmp738 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result725->count, $tmp738);
        $tmp736 = $tmp739.value;
        $l737:;
        panda$core$Bit $tmp740 = { $tmp736 };
        if ($tmp740.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp741, ((panda$core$String$Index$nullable) { index728, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp742 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp741);
            panda$collections$Array$add$panda$collections$Array$T(result725, ((panda$core$Object*) $tmp742));
            goto $l731;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp743, index728, ((panda$core$String$Index) nextIndex732.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp744 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp743);
        panda$collections$Array$add$panda$collections$Array$T(result725, ((panda$core$Object*) $tmp744));
        panda$core$String$Index $tmp745 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex732.value), p_delimiter->_length);
        index728 = $tmp745;
    }
    }
    $l731:;
    return result725;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result747;
    panda$core$Int64 start748;
    panda$core$Char8 $tmp749;
    panda$core$Range$LTpanda$core$Int64$GT $tmp751;
    panda$core$Int64 digit765;
    panda$core$Char8 $tmp780;
    panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp746.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result747 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp749, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp750 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp749);
    if ($tmp750.value) {
    {
        start748 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start748 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp751, start748, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp753 = $tmp751.min.value;
    panda$core$Int64 i752 = { $tmp753 };
    int64_t $tmp755 = $tmp751.max.value;
    bool $tmp756 = $tmp751.inclusive.value;
    if ($tmp756) goto $l763; else goto $l764;
    $l763:;
    if ($tmp753 <= $tmp755) goto $l757; else goto $l759;
    $l764:;
    if ($tmp753 < $tmp755) goto $l757; else goto $l759;
    $l757:;
    {
        panda$core$Int64 $tmp766 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i752.value].value) }), ((panda$core$Int64) { 48 }));
        digit765 = $tmp766;
        panda$core$Bit $tmp768 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit765, ((panda$core$Int64) { 0 }));
        bool $tmp767 = $tmp768.value;
        if ($tmp767) goto $l769;
        panda$core$Bit $tmp770 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit765, ((panda$core$Int64) { 9 }));
        $tmp767 = $tmp770.value;
        $l769:;
        panda$core$Bit $tmp771 = { $tmp767 };
        if ($tmp771.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp772 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result747, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp773 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp772, digit765);
        result747 = $tmp773;
    }
    $l760:;
    int64_t $tmp775 = $tmp755 - i752.value;
    if ($tmp756) goto $l776; else goto $l777;
    $l776:;
    if ((uint64_t) $tmp775 >= 1) goto $l774; else goto $l759;
    $l777:;
    if ((uint64_t) $tmp775 > 1) goto $l774; else goto $l759;
    $l774:;
    i752.value += 1;
    goto $l757;
    $l759:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp780, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp781 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp780);
    if ($tmp781.value) {
    {
        panda$core$Int64 $tmp782 = panda$core$Int64$$SUB$R$panda$core$Int64(result747);
        result747 = $tmp782;
    }
    }
    return ((panda$core$Int64$nullable) { result747, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result784;
    panda$core$Range$LTpanda$core$Int64$GT $tmp785;
    panda$core$UInt64 digit799;
    panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp783.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result784 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp785, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp787 = $tmp785.min.value;
    panda$core$Int64 i786 = { $tmp787 };
    int64_t $tmp789 = $tmp785.max.value;
    bool $tmp790 = $tmp785.inclusive.value;
    if ($tmp790) goto $l797; else goto $l798;
    $l797:;
    if ($tmp787 <= $tmp789) goto $l791; else goto $l793;
    $l798:;
    if ($tmp787 < $tmp789) goto $l791; else goto $l793;
    $l791:;
    {
        panda$core$UInt64 $tmp800 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i786.value].value) }), ((panda$core$UInt64) { 48 }));
        digit799 = $tmp800;
        panda$core$Bit $tmp802 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit799, ((panda$core$UInt64) { 0 }));
        bool $tmp801 = $tmp802.value;
        if ($tmp801) goto $l803;
        panda$core$Bit $tmp804 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit799, ((panda$core$UInt64) { 9 }));
        $tmp801 = $tmp804.value;
        $l803:;
        panda$core$Bit $tmp805 = { $tmp801 };
        if ($tmp805.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp806 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result784, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp807 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp806, digit799);
        result784 = $tmp807;
    }
    $l794:;
    int64_t $tmp809 = $tmp789 - i786.value;
    if ($tmp790) goto $l810; else goto $l811;
    $l810:;
    if ((uint64_t) $tmp809 >= 1) goto $l808; else goto $l793;
    $l811:;
    if ((uint64_t) $tmp809 > 1) goto $l808; else goto $l793;
    $l808:;
    i786.value += 1;
    goto $l791;
    $l793:;
    return ((panda$core$UInt64$nullable) { result784, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h815;
    panda$core$Range$LTpanda$core$Int64$GT $tmp816;
    panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp814.value) {
    {
        h815 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp816, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp818 = $tmp816.min.value;
        panda$core$Int64 i817 = { $tmp818 };
        int64_t $tmp820 = $tmp816.max.value;
        bool $tmp821 = $tmp816.inclusive.value;
        if ($tmp821) goto $l828; else goto $l829;
        $l828:;
        if ($tmp818 <= $tmp820) goto $l822; else goto $l824;
        $l829:;
        if ($tmp818 < $tmp820) goto $l822; else goto $l824;
        $l822:;
        {
            panda$core$Int64 $tmp830 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h815, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp831 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp830, ((panda$core$Int64) { ((int64_t) self->data[i817.value].value) }));
            h815 = $tmp831;
        }
        $l825:;
        int64_t $tmp833 = $tmp820 - i817.value;
        if ($tmp821) goto $l834; else goto $l835;
        $l834:;
        if ((uint64_t) $tmp833 >= 1) goto $l832; else goto $l824;
        $l835:;
        if ((uint64_t) $tmp833 > 1) goto $l832; else goto $l824;
        $l832:;
        i817.value += 1;
        goto $l822;
        $l824:;
        self->_hash = h815;
    }
    }
    return self->_hash;
}

