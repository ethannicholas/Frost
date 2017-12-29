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
#include "panda/core/Panda.h"
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

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn23)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn46)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn52)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn169)(panda$core$Object*);
typedef panda$core$String* (*$fn197)(panda$core$Object*);

static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->owner = ((panda$core$String*) $tmp1);
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_owner));
        self->owner = ((panda$core$String*) $tmp2);
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    self->_hash = ((panda$core$Int64) { 0 });
    ITable* $tmp3 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Int64 $tmp6 = $tmp4(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp6;
    self->data = ((panda$core$Char8*) pandaAlloc(self->_length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp7, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp9 = $tmp7.min.value;
    panda$core$Int64 i8 = { $tmp9 };
    int64_t $tmp11 = $tmp7.max.value;
    bool $tmp12 = $tmp7.inclusive.value;
    if ($tmp12) goto $l19; else goto $l20;
    $l19:;
    if ($tmp9 <= $tmp11) goto $l13; else goto $l15;
    $l20:;
    if ($tmp9 < $tmp11) goto $l13; else goto $l15;
    $l13:;
    {
        ITable* $tmp21 = p_chars->$class->itable;
        while ($tmp21->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp21 = $tmp21->next;
        }
        $fn23 $tmp22 = $tmp21->methods[0];
        panda$core$Object* $tmp24 = $tmp22(p_chars, i8);
        self->data[i8.value] = ((panda$core$Char8$wrapper*) $tmp24)->value;
    }
    $l16:;
    int64_t $tmp26 = $tmp11 - i8.value;
    if ($tmp12) goto $l27; else goto $l28;
    $l27:;
    if ((uint64_t) $tmp26 >= 1) goto $l25; else goto $l15;
    $l28:;
    if ((uint64_t) $tmp26 > 1) goto $l25; else goto $l15;
    $l25:;
    i8.value += 1;
    goto $l13;
    $l15:;
    {
        panda$core$Object* $tmp31 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->owner = ((panda$core$String*) $tmp31);
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    pandaFree(self->data);
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp32 = (panda$core$String$UTF8List*) pandaAlloc(24);
    $tmp32->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp32->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp32, self);
    return ((panda$collections$ListView*) $tmp32);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp34 = (panda$core$String$UTF16Iterator*) pandaAlloc(32);
    $tmp34->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp34->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp34, self);
    return ((panda$collections$Iterator*) $tmp34);
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp36 = (panda$core$String$UTF32Iterator*) pandaAlloc(32);
    $tmp36->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp36->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp36, self);
    return ((panda$collections$Iterator*) $tmp36);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count38;
    panda$collections$Iterator* iter39;
    count38 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp40 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    panda$core$Object* $tmp41 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp40));
    iter39 = ((panda$collections$Iterator*) $tmp41);
    $l42:;
    ITable* $tmp44 = iter39->$class->itable;
    while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp44 = $tmp44->next;
    }
    $fn46 $tmp45 = $tmp44->methods[0];
    panda$core$Bit $tmp47 = $tmp45(iter39);
    panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
    if (!$tmp48.value) goto $l43;
    {
        panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count38, ((panda$core$Int64) { 1 }));
        count38 = $tmp49;
        ITable* $tmp50 = iter39->$class->itable;
        while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp50 = $tmp50->next;
        }
        $fn52 $tmp51 = $tmp50->methods[1];
        $tmp51(iter39);
    }
    goto $l42;
    $l43:;
    return count38;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    return self->_length;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp54;
    panda$core$Bit $tmp53 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp53.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp54, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp56 = $tmp54.min.value;
    panda$core$Int64 i55 = { $tmp56 };
    int64_t $tmp58 = $tmp54.max.value;
    bool $tmp59 = $tmp54.inclusive.value;
    if ($tmp59) goto $l66; else goto $l67;
    $l66:;
    if ($tmp56 <= $tmp58) goto $l60; else goto $l62;
    $l67:;
    if ($tmp56 < $tmp58) goto $l60; else goto $l62;
    $l60:;
    {
        panda$core$Bit $tmp68 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i55.value], p_other->data[i55.value]);
        if ($tmp68.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l63:;
    int64_t $tmp70 = $tmp58 - i55.value;
    if ($tmp59) goto $l71; else goto $l72;
    $l71:;
    if ((uint64_t) $tmp70 >= 1) goto $l69; else goto $l62;
    $l72:;
    if ((uint64_t) $tmp70 > 1) goto $l69; else goto $l62;
    $l69:;
    i55.value += 1;
    goto $l60;
    $l62:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp76;
    panda$core$Bit $tmp75 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp75.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp76, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp78 = $tmp76.min.value;
    panda$core$Int64 i77 = { $tmp78 };
    int64_t $tmp80 = $tmp76.max.value;
    bool $tmp81 = $tmp76.inclusive.value;
    if ($tmp81) goto $l88; else goto $l89;
    $l88:;
    if ($tmp78 <= $tmp80) goto $l82; else goto $l84;
    $l89:;
    if ($tmp78 < $tmp80) goto $l82; else goto $l84;
    $l82:;
    {
        panda$core$Int64 $tmp90 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp91 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp90, i77);
        panda$core$Bit $tmp92 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp91.value], p_other->data[i77.value]);
        if ($tmp92.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l85:;
    int64_t $tmp94 = $tmp80 - i77.value;
    if ($tmp81) goto $l95; else goto $l96;
    $l95:;
    if ((uint64_t) $tmp94 >= 1) goto $l93; else goto $l84;
    $l96:;
    if ((uint64_t) $tmp94 > 1) goto $l93; else goto $l84;
    $l93:;
    i77.value += 1;
    goto $l82;
    $l84:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start100;
    panda$core$Int64 end109;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp119;
    panda$core$String$Index $tmp120;
    panda$core$String$Index $tmp121;
    panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp99.value) {
    {
        return self;
    }
    }
    start100 = ((panda$core$Int64) { 0 });
    $l101:;
    panda$core$Bit $tmp104 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start100, self->_length);
    bool $tmp103 = $tmp104.value;
    if (!$tmp103) goto $l105;
    panda$core$Bit $tmp106 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start100.value]);
    $tmp103 = $tmp106.value;
    $l105:;
    panda$core$Bit $tmp107 = { $tmp103 };
    if (!$tmp107.value) goto $l102;
    {
        panda$core$Int64 $tmp108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start100, ((panda$core$Int64) { 1 }));
        start100 = $tmp108;
    }
    goto $l101;
    $l102:;
    panda$core$Int64 $tmp110 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end109 = $tmp110;
    $l111:;
    panda$core$Bit $tmp114 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end109, start100);
    bool $tmp113 = $tmp114.value;
    if (!$tmp113) goto $l115;
    panda$core$Bit $tmp116 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end109.value]);
    $tmp113 = $tmp116.value;
    $l115:;
    panda$core$Bit $tmp117 = { $tmp113 };
    if (!$tmp117.value) goto $l112;
    {
        panda$core$Int64 $tmp118 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end109, ((panda$core$Int64) { 1 }));
        end109 = $tmp118;
    }
    goto $l111;
    $l112:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp120, start100);
    panda$core$String$Index$init$panda$core$Int64(&$tmp121, end109);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp119, $tmp120, $tmp121, ((panda$core$Bit) { true }));
    panda$core$String* $tmp122 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp119);
    return $tmp122;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result123;
    panda$core$Range$LTpanda$core$Int64$GT $tmp125;
    panda$core$Range$LTpanda$core$Int64$GT $tmp145;
    panda$core$Int64 $tmp124 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result123 = ((panda$core$Char8*) pandaAlloc($tmp124.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp125, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp127 = $tmp125.min.value;
    panda$core$Int64 i126 = { $tmp127 };
    int64_t $tmp129 = $tmp125.max.value;
    bool $tmp130 = $tmp125.inclusive.value;
    if ($tmp130) goto $l137; else goto $l138;
    $l137:;
    if ($tmp127 <= $tmp129) goto $l131; else goto $l133;
    $l138:;
    if ($tmp127 < $tmp129) goto $l131; else goto $l133;
    $l131:;
    {
        result123[i126.value] = self->data[i126.value];
    }
    $l134:;
    int64_t $tmp140 = $tmp129 - i126.value;
    if ($tmp130) goto $l141; else goto $l142;
    $l141:;
    if ((uint64_t) $tmp140 >= 1) goto $l139; else goto $l133;
    $l142:;
    if ((uint64_t) $tmp140 > 1) goto $l139; else goto $l133;
    $l139:;
    i126.value += 1;
    goto $l131;
    $l133:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp145, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp147 = $tmp145.min.value;
    panda$core$Int64 i146 = { $tmp147 };
    int64_t $tmp149 = $tmp145.max.value;
    bool $tmp150 = $tmp145.inclusive.value;
    if ($tmp150) goto $l157; else goto $l158;
    $l157:;
    if ($tmp147 <= $tmp149) goto $l151; else goto $l153;
    $l158:;
    if ($tmp147 < $tmp149) goto $l151; else goto $l153;
    $l151:;
    {
        panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i146);
        result123[$tmp159.value] = p_other->data[i146.value];
    }
    $l154:;
    int64_t $tmp161 = $tmp149 - i146.value;
    if ($tmp150) goto $l162; else goto $l163;
    $l162:;
    if ((uint64_t) $tmp161 >= 1) goto $l160; else goto $l153;
    $l163:;
    if ((uint64_t) $tmp161 > 1) goto $l160; else goto $l153;
    $l160:;
    i146.value += 1;
    goto $l151;
    $l153:;
    panda$core$String* $tmp166 = (panda$core$String*) pandaAlloc(48);
    $tmp166->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp166->refCount.value = 1;
    panda$core$Int64 $tmp168 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp166, result123, $tmp168);
    return $tmp166;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp170 = (($fn169) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp170);
    return $tmp171;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result172;
    panda$core$Range$LTpanda$core$Int64$GT $tmp176;
    panda$core$MutableString* $tmp173 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp173->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp173->refCount.value = 1;
    panda$core$MutableString$init($tmp173);
    panda$core$Object* $tmp175 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp173));
    result172 = ((panda$core$MutableString*) $tmp175);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp176, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp178 = $tmp176.min.value;
    panda$core$Int64 i177 = { $tmp178 };
    int64_t $tmp180 = $tmp176.max.value;
    bool $tmp181 = $tmp176.inclusive.value;
    if ($tmp181) goto $l188; else goto $l189;
    $l188:;
    if ($tmp178 <= $tmp180) goto $l182; else goto $l184;
    $l189:;
    if ($tmp178 < $tmp180) goto $l182; else goto $l184;
    $l182:;
    {
        panda$core$MutableString$append$panda$core$String(result172, self);
    }
    $l185:;
    int64_t $tmp191 = $tmp180 - i177.value;
    if ($tmp181) goto $l192; else goto $l193;
    $l192:;
    if ((uint64_t) $tmp191 >= 1) goto $l190; else goto $l184;
    $l193:;
    if ((uint64_t) $tmp191 > 1) goto $l190; else goto $l184;
    $l190:;
    i177.value += 1;
    goto $l182;
    $l184:;
    panda$core$String* $tmp196 = panda$core$MutableString$finish$R$panda$core$String(result172);
    return $tmp196;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp198 = (($fn197) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, p_s);
    return $tmp199;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp201;
    panda$core$Bit $tmp200 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp200.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp201, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp203 = $tmp201.min.value;
    panda$core$Int64 i202 = { $tmp203 };
    int64_t $tmp205 = $tmp201.max.value;
    bool $tmp206 = $tmp201.inclusive.value;
    if ($tmp206) goto $l213; else goto $l214;
    $l213:;
    if ($tmp203 <= $tmp205) goto $l207; else goto $l209;
    $l214:;
    if ($tmp203 < $tmp205) goto $l207; else goto $l209;
    $l207:;
    {
        panda$core$Bit $tmp215 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i202.value], p_other->data[i202.value]);
        if ($tmp215.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l210:;
    int64_t $tmp217 = $tmp205 - i202.value;
    if ($tmp206) goto $l218; else goto $l219;
    $l218:;
    if ((uint64_t) $tmp217 >= 1) goto $l216; else goto $l209;
    $l219:;
    if ((uint64_t) $tmp217 > 1) goto $l216; else goto $l209;
    $l216:;
    i202.value += 1;
    goto $l207;
    $l209:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp222 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp222);
    return $tmp223;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx224;
    panda$core$Char8 c225;
    panda$core$Int32 result226;
    panda$core$Char32 $tmp230;
    panda$core$Char32 $tmp241;
    panda$core$Char32 $tmp257;
    panda$core$Char32 $tmp276;
    idx224 = p_index.value;
    c225 = self->data[idx224.value];
    panda$core$Int32 $tmp227 = panda$core$Char8$convert$R$panda$core$Int32(c225);
    result226 = $tmp227;
    int64_t $tmp228 = ((int64_t) c225.value) & 255;
    bool $tmp229 = $tmp228 < 192;
    if (((panda$core$Bit) { $tmp229 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp230, result226);
        return $tmp230;
    }
    }
    int64_t $tmp231 = ((int64_t) c225.value) & 255;
    bool $tmp232 = $tmp231 < 224;
    if (((panda$core$Bit) { $tmp232 }).value) {
    {
        panda$core$Int64 $tmp233 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp234 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp233, self->_length);
        PANDA_ASSERT($tmp234.value);
        panda$core$Int32 $tmp235 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result226, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp236 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp235, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp237 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp238 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp237.value]);
        panda$core$Int32 $tmp239 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp238, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp240 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp236, $tmp239);
        result226 = $tmp240;
        panda$core$Char32$init$panda$core$Int32(&$tmp241, result226);
        return $tmp241;
    }
    }
    int64_t $tmp242 = ((int64_t) c225.value) & 255;
    bool $tmp243 = $tmp242 < 240;
    if (((panda$core$Bit) { $tmp243 }).value) {
    {
        panda$core$Int64 $tmp244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp245 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp244, self->_length);
        PANDA_ASSERT($tmp245.value);
        panda$core$Int32 $tmp246 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result226, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp247 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp246, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp249 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp248.value]);
        panda$core$Int32 $tmp250 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp249, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp251 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp250, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp252 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp247, $tmp251);
        panda$core$Int64 $tmp253 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp254 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp253.value]);
        panda$core$Int32 $tmp255 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp254, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp256 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp252, $tmp255);
        result226 = $tmp256;
        panda$core$Char32$init$panda$core$Int32(&$tmp257, result226);
        return $tmp257;
    }
    }
    panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp259 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp258, self->_length);
    PANDA_ASSERT($tmp259.value);
    panda$core$Int32 $tmp260 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result226, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp261 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp260, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp262 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp263 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp262.value]);
    panda$core$Int32 $tmp264 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp263, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp265 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp264, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp266 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp261, $tmp265);
    panda$core$Int64 $tmp267 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp268 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp267.value]);
    panda$core$Int32 $tmp269 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp268, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp270 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp269, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp271 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp266, $tmp270);
    panda$core$Int64 $tmp272 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx224, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp273 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp272.value]);
    panda$core$Int32 $tmp274 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp273, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp275 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp271, $tmp274);
    result226 = $tmp275;
    panda$core$Char32$init$panda$core$Int32(&$tmp276, result226);
    return $tmp276;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp277 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp278 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp277, p_index);
    panda$core$Char32 $tmp279 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp278);
    return $tmp279;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp280 = (panda$core$String*) pandaAlloc(48);
    $tmp280->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp280->refCount.value = 1;
    panda$core$Int64 $tmp282 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp280, (self->data + p_r.min.value.value), $tmp282, self);
    return $tmp280;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min283;
    panda$core$String$Index max285;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp288;
    memset(&min283, 0, sizeof(min283));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min283 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp284 = panda$core$String$start$R$panda$core$String$Index(self);
        min283 = $tmp284;
    }
    }
    memset(&max285, 0, sizeof(max285));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max285 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp286 = panda$core$String$end$R$panda$core$String$Index(self);
        max285 = $tmp286;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp287 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, max285, ((panda$core$Int64) { -1 }));
            max285 = $tmp287;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp288, min283, max285, p_r.inclusive);
    panda$core$String* $tmp289 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp288);
    return $tmp289;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current290;
    panda$core$MutableString* result291;
    panda$core$Int64 max295;
    panda$core$Char8 c300;
    current290 = p_r.min.value;
    panda$core$MutableString* $tmp292 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp292->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp292->refCount.value = 1;
    panda$core$MutableString$init($tmp292);
    panda$core$Object* $tmp294 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp292));
    result291 = ((panda$core$MutableString*) $tmp294);
    max295 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp296 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max295, ((panda$core$Int64) { 1 }));
        max295 = $tmp296;
    }
    }
    $l297:;
    panda$core$Bit $tmp299 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current290, max295);
    if (!$tmp299.value) goto $l298;
    {
        c300 = self->data[current290.value];
        panda$core$MutableString$append$panda$core$Char8(result291, c300);
        panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current290, ((panda$core$Int64) { 1 }));
        current290 = $tmp301;
        int64_t $tmp302 = ((int64_t) c300.value) & 255;
        bool $tmp303 = $tmp302 >= 192;
        if (((panda$core$Bit) { $tmp303 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result291, self->data[current290.value]);
            panda$core$Int64 $tmp304 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current290, ((panda$core$Int64) { 1 }));
            current290 = $tmp304;
        }
        }
        int64_t $tmp305 = ((int64_t) c300.value) & 255;
        bool $tmp306 = $tmp305 >= 224;
        if (((panda$core$Bit) { $tmp306 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result291, self->data[current290.value]);
            panda$core$Int64 $tmp307 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current290, ((panda$core$Int64) { 1 }));
            current290 = $tmp307;
        }
        }
        int64_t $tmp308 = ((int64_t) c300.value) & 255;
        bool $tmp309 = $tmp308 >= 240;
        if (((panda$core$Bit) { $tmp309 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result291, self->data[current290.value]);
            panda$core$Int64 $tmp310 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current290, ((panda$core$Int64) { 1 }));
            current290 = $tmp310;
        }
        }
    }
    goto $l297;
    $l298:;
    panda$core$String* $tmp311 = panda$core$MutableString$finish$R$panda$core$String(result291);
    return $tmp311;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min314;
    panda$core$String$Index max316;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp319;
    panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp312.value) {
    {
        return &$s313;
    }
    }
    memset(&min314, 0, sizeof(min314));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min314 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp315 = panda$core$String$start$R$panda$core$String$Index(self);
        min314 = $tmp315;
    }
    }
    memset(&max316, 0, sizeof(max316));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max316 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp317 = panda$core$String$end$R$panda$core$String$Index(self);
        max316 = $tmp317;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp318 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max316);
            max316 = $tmp318;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp319, min314, max316, p_r.inclusive);
    panda$core$String* $tmp320 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp319);
    return $tmp320;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step323;
    panda$core$Int64 current324;
    panda$core$Int64 end329;
    panda$core$MutableString* result333;
    panda$core$Char8 c341;
    panda$core$Range$LTpanda$core$Int64$GT $tmp352;
    panda$core$String$Index $tmp368;
    panda$core$Char8 c380;
    panda$core$Int64 old381;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp401;
    panda$core$String$Index $tmp422;
    panda$core$Char8 c446;
    panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp321.value) {
    {
        return &$s322;
    }
    }
    step323 = p_r.step;
    memset(&current324, 0, sizeof(current324));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current324 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp325 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step323, ((panda$core$Int64) { 0 }));
    if ($tmp325.value) {
    {
        panda$core$String$Index $tmp326 = panda$core$String$start$R$panda$core$String$Index(self);
        current324 = $tmp326.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp327 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp328 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp327);
        current324 = $tmp328.value;
    }
    }
    }
    memset(&end329, 0, sizeof(end329));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end329 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp330 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step323, ((panda$core$Int64) { 0 }));
    if ($tmp330.value) {
    {
        panda$core$String$Index $tmp331 = panda$core$String$end$R$panda$core$String$Index(self);
        end329 = $tmp331.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp332 = panda$core$String$start$R$panda$core$String$Index(self);
        end329 = $tmp332.value;
    }
    }
    }
    panda$core$MutableString* $tmp334 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp334->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp334->refCount.value = 1;
    panda$core$MutableString$init($tmp334);
    panda$core$Object* $tmp336 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp334));
    result333 = ((panda$core$MutableString*) $tmp336);
    panda$core$Bit $tmp337 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp337.value) {
    {
        $l338:;
        panda$core$Bit $tmp340 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current324, end329);
        if (!$tmp340.value) goto $l339;
        {
            c341 = self->data[current324.value];
            panda$core$MutableString$append$panda$core$Char8(result333, c341);
            panda$core$Int64 $tmp342 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
            current324 = $tmp342;
            int64_t $tmp343 = ((int64_t) c341.value) & 255;
            bool $tmp344 = $tmp343 >= 192;
            if (((panda$core$Bit) { $tmp344 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
                panda$core$Int64 $tmp345 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
                current324 = $tmp345;
            }
            }
            int64_t $tmp346 = ((int64_t) c341.value) & 255;
            bool $tmp347 = $tmp346 >= 224;
            if (((panda$core$Bit) { $tmp347 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
                panda$core$Int64 $tmp348 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
                current324 = $tmp348;
            }
            }
            int64_t $tmp349 = ((int64_t) c341.value) & 255;
            bool $tmp350 = $tmp349 >= 240;
            if (((panda$core$Bit) { $tmp350 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
                panda$core$Int64 $tmp351 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
                current324 = $tmp351;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp352, ((panda$core$Int64) { 1 }), step323, ((panda$core$Bit) { false }));
            int64_t $tmp354 = $tmp352.min.value;
            panda$core$Int64 i353 = { $tmp354 };
            int64_t $tmp356 = $tmp352.max.value;
            bool $tmp357 = $tmp352.inclusive.value;
            if ($tmp357) goto $l364; else goto $l365;
            $l364:;
            if ($tmp354 <= $tmp356) goto $l358; else goto $l360;
            $l365:;
            if ($tmp354 < $tmp356) goto $l358; else goto $l360;
            $l358:;
            {
                panda$core$Bit $tmp366 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current324, end329);
                if ($tmp366.value) {
                {
                    panda$core$String* $tmp367 = panda$core$MutableString$convert$R$panda$core$String(result333);
                    return $tmp367;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp368, current324);
                panda$core$String$Index $tmp369 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp368);
                current324 = $tmp369.value;
            }
            $l361:;
            int64_t $tmp371 = $tmp356 - i353.value;
            if ($tmp357) goto $l372; else goto $l373;
            $l372:;
            if ((uint64_t) $tmp371 >= 1) goto $l370; else goto $l360;
            $l373:;
            if ((uint64_t) $tmp371 > 1) goto $l370; else goto $l360;
            $l370:;
            i353.value += 1;
            goto $l358;
            $l360:;
        }
        goto $l338;
        $l339:;
    }
    }
    else {
    {
        panda$core$Bit $tmp376 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp376.value);
        $l377:;
        panda$core$Bit $tmp379 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current324, end329);
        if (!$tmp379.value) goto $l378;
        {
            c380 = self->data[current324.value];
            panda$core$MutableString$append$panda$core$Char8(result333, c380);
            old381 = current324;
            panda$core$Int64 $tmp382 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
            current324 = $tmp382;
            int64_t $tmp383 = ((int64_t) c380.value) & 255;
            bool $tmp384 = $tmp383 >= 192;
            if (((panda$core$Bit) { $tmp384 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
                panda$core$Int64 $tmp385 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
                current324 = $tmp385;
            }
            }
            int64_t $tmp386 = ((int64_t) c380.value) & 255;
            bool $tmp387 = $tmp386 >= 224;
            if (((panda$core$Bit) { $tmp387 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
                panda$core$Int64 $tmp388 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
                current324 = $tmp388;
            }
            }
            int64_t $tmp389 = ((int64_t) c380.value) & 255;
            bool $tmp390 = $tmp389 >= 240;
            if (((panda$core$Bit) { $tmp390 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
            }
            }
            panda$core$Int64 $tmp391 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old381, ((panda$core$Int64) { 1 }));
            current324 = $tmp391;
            $l392:;
            int64_t $tmp395 = ((int64_t) self->data[current324.value].value) & 255;
            bool $tmp396 = $tmp395 >= 128;
            bool $tmp394 = $tmp396;
            if (!$tmp394) goto $l397;
            int64_t $tmp398 = ((int64_t) self->data[current324.value].value) & 255;
            bool $tmp399 = $tmp398 < 192;
            $tmp394 = $tmp399;
            $l397:;
            if (!((panda$core$Bit) { $tmp394 }).value) goto $l393;
            {
                panda$core$Int64 $tmp400 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
                current324 = $tmp400;
            }
            goto $l392;
            $l393:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp401, ((panda$core$Int64) { -1 }), step323, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp403 = $tmp401.start.value;
            panda$core$Int64 i402 = { $tmp403 };
            int64_t $tmp405 = $tmp401.end.value;
            int64_t $tmp406 = $tmp401.step.value;
            bool $tmp407 = $tmp401.inclusive.value;
            bool $tmp414 = $tmp406 > 0;
            if ($tmp414) goto $l412; else goto $l413;
            $l412:;
            if ($tmp407) goto $l415; else goto $l416;
            $l415:;
            if ($tmp403 <= $tmp405) goto $l408; else goto $l410;
            $l416:;
            if ($tmp403 < $tmp405) goto $l408; else goto $l410;
            $l413:;
            if ($tmp407) goto $l417; else goto $l418;
            $l417:;
            if ($tmp403 >= $tmp405) goto $l408; else goto $l410;
            $l418:;
            if ($tmp403 > $tmp405) goto $l408; else goto $l410;
            $l408:;
            {
                panda$core$Bit $tmp420 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current324, end329);
                if ($tmp420.value) {
                {
                    panda$core$String* $tmp421 = panda$core$MutableString$convert$R$panda$core$String(result333);
                    return $tmp421;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp422, current324);
                panda$core$String$Index $tmp423 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp422);
                current324 = $tmp423.value;
            }
            $l411:;
            if ($tmp414) goto $l425; else goto $l426;
            $l425:;
            int64_t $tmp427 = $tmp405 - i402.value;
            if ($tmp407) goto $l428; else goto $l429;
            $l428:;
            if ((uint64_t) $tmp427 >= $tmp406) goto $l424; else goto $l410;
            $l429:;
            if ((uint64_t) $tmp427 > $tmp406) goto $l424; else goto $l410;
            $l426:;
            int64_t $tmp431 = i402.value - $tmp405;
            if ($tmp407) goto $l432; else goto $l433;
            $l432:;
            if ((uint64_t) $tmp431 >= -$tmp406) goto $l424; else goto $l410;
            $l433:;
            if ((uint64_t) $tmp431 > -$tmp406) goto $l424; else goto $l410;
            $l424:;
            i402.value += $tmp406;
            goto $l408;
            $l410:;
        }
        goto $l377;
        $l378:;
    }
    }
    bool $tmp437 = p_r.inclusive.value;
    if ($tmp437) goto $l438;
    $tmp437 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l438:;
    panda$core$Bit $tmp439 = { $tmp437 };
    bool $tmp436 = $tmp439.value;
    if (!$tmp436) goto $l440;
    panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current324, end329);
    $tmp436 = $tmp441.value;
    $l440:;
    panda$core$Bit $tmp442 = { $tmp436 };
    bool $tmp435 = $tmp442.value;
    if (!$tmp435) goto $l443;
    panda$core$Bit $tmp444 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end329, self->_length);
    $tmp435 = $tmp444.value;
    $l443:;
    panda$core$Bit $tmp445 = { $tmp435 };
    if ($tmp445.value) {
    {
        c446 = self->data[current324.value];
        panda$core$MutableString$append$panda$core$Char8(result333, c446);
        panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
        current324 = $tmp447;
        int64_t $tmp448 = ((int64_t) c446.value) & 255;
        bool $tmp449 = $tmp448 >= 192;
        if (((panda$core$Bit) { $tmp449 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
            panda$core$Int64 $tmp450 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
            current324 = $tmp450;
        }
        }
        int64_t $tmp451 = ((int64_t) c446.value) & 255;
        bool $tmp452 = $tmp451 >= 224;
        if (((panda$core$Bit) { $tmp452 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
            panda$core$Int64 $tmp453 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current324, ((panda$core$Int64) { 1 }));
            current324 = $tmp453;
        }
        }
        int64_t $tmp454 = ((int64_t) c446.value) & 255;
        bool $tmp455 = $tmp454 >= 240;
        if (((panda$core$Bit) { $tmp455 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result333, self->data[current324.value]);
        }
        }
    }
    }
    panda$core$String* $tmp456 = panda$core$MutableString$finish$R$panda$core$String(result333);
    return $tmp456;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start457;
    panda$core$String$Index$nullable end460;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp463;
    memset(&start457, 0, sizeof(start457));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp458 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp459 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp458, ((panda$core$Int64) p_r.min.value));
        start457 = ((panda$core$String$Index$nullable) { $tmp459, true });
    }
    }
    else {
    {
        start457 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end460, 0, sizeof(end460));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp461 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp462 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp461, ((panda$core$Int64) p_r.max.value));
        end460 = ((panda$core$String$Index$nullable) { $tmp462, true });
    }
    }
    else {
    {
        end460 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp463, start457, end460, p_r.inclusive);
    panda$core$String* $tmp464 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp463);
    return $tmp464;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start465;
    panda$core$String$Index$nullable end468;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp471;
    memset(&start465, 0, sizeof(start465));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp466 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp467 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp466, ((panda$core$Int64) p_r.start.value));
        start465 = ((panda$core$String$Index$nullable) { $tmp467, true });
    }
    }
    else {
    {
        start465 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end468, 0, sizeof(end468));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp469 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp470 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp469, ((panda$core$Int64) p_r.end.value));
        end468 = ((panda$core$String$Index$nullable) { $tmp470, true });
    }
    }
    else {
    {
        end468 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp471, start465, end468, p_r.step, p_r.inclusive);
    panda$core$String* $tmp472 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp471);
    return $tmp472;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp473;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp473, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp475 = $tmp473.min.value;
    panda$core$Int64 i474 = { $tmp475 };
    int64_t $tmp477 = $tmp473.max.value;
    bool $tmp478 = $tmp473.inclusive.value;
    if ($tmp478) goto $l485; else goto $l486;
    $l485:;
    if ($tmp475 <= $tmp477) goto $l479; else goto $l481;
    $l486:;
    if ($tmp475 < $tmp477) goto $l479; else goto $l481;
    $l479:;
    {
        panda$core$Bit $tmp487 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i474.value], p_c);
        if ($tmp487.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l482:;
    int64_t $tmp489 = $tmp477 - i474.value;
    if ($tmp478) goto $l490; else goto $l491;
    $l490:;
    if ((uint64_t) $tmp489 >= 1) goto $l488; else goto $l481;
    $l491:;
    if ((uint64_t) $tmp489 > 1) goto $l488; else goto $l481;
    $l488:;
    i474.value += 1;
    goto $l479;
    $l481:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp494 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp494.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp495 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp496 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp495);
    return $tmp496;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp498;
    panda$core$Range$LTpanda$core$Int64$GT $tmp513;
    panda$core$String$Index $tmp535;
    panda$core$Bit $tmp497 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp497.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp499 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp498, p_start.value, $tmp499, ((panda$core$Bit) { true }));
    int64_t $tmp501 = $tmp498.min.value;
    panda$core$Int64 i500 = { $tmp501 };
    int64_t $tmp503 = $tmp498.max.value;
    bool $tmp504 = $tmp498.inclusive.value;
    if ($tmp504) goto $l511; else goto $l512;
    $l511:;
    if ($tmp501 <= $tmp503) goto $l505; else goto $l507;
    $l512:;
    if ($tmp501 < $tmp503) goto $l505; else goto $l507;
    $l505:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp513, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp515 = $tmp513.min.value;
        panda$core$Int64 j514 = { $tmp515 };
        int64_t $tmp517 = $tmp513.max.value;
        bool $tmp518 = $tmp513.inclusive.value;
        if ($tmp518) goto $l525; else goto $l526;
        $l525:;
        if ($tmp515 <= $tmp517) goto $l519; else goto $l521;
        $l526:;
        if ($tmp515 < $tmp517) goto $l519; else goto $l521;
        $l519:;
        {
            panda$core$Int64 $tmp527 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i500, j514);
            panda$core$Bit $tmp528 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp527.value], p_s->data[j514.value]);
            if ($tmp528.value) {
            {
                goto $l508;
            }
            }
        }
        $l522:;
        int64_t $tmp530 = $tmp517 - j514.value;
        if ($tmp518) goto $l531; else goto $l532;
        $l531:;
        if ((uint64_t) $tmp530 >= 1) goto $l529; else goto $l521;
        $l532:;
        if ((uint64_t) $tmp530 > 1) goto $l529; else goto $l521;
        $l529:;
        j514.value += 1;
        goto $l519;
        $l521:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp535, i500);
        return ((panda$core$String$Index$nullable) { $tmp535, true });
    }
    $l508:;
    int64_t $tmp537 = $tmp503 - i500.value;
    if ($tmp504) goto $l538; else goto $l539;
    $l538:;
    if ((uint64_t) $tmp537 >= 1) goto $l536; else goto $l507;
    $l539:;
    if ((uint64_t) $tmp537 > 1) goto $l536; else goto $l507;
    $l536:;
    i500.value += 1;
    goto $l505;
    $l507:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp542 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp543 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp542);
    return $tmp543;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos545;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp548;
    panda$core$Range$LTpanda$core$Int64$GT $tmp567;
    panda$core$String$Index $tmp589;
    panda$core$Bit $tmp544 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp544.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp546 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp547 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp546);
    startPos545 = $tmp547;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp548, startPos545, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp550 = $tmp548.start.value;
    panda$core$Int64 i549 = { $tmp550 };
    int64_t $tmp552 = $tmp548.end.value;
    int64_t $tmp553 = $tmp548.step.value;
    bool $tmp554 = $tmp548.inclusive.value;
    bool $tmp561 = $tmp553 > 0;
    if ($tmp561) goto $l559; else goto $l560;
    $l559:;
    if ($tmp554) goto $l562; else goto $l563;
    $l562:;
    if ($tmp550 <= $tmp552) goto $l555; else goto $l557;
    $l563:;
    if ($tmp550 < $tmp552) goto $l555; else goto $l557;
    $l560:;
    if ($tmp554) goto $l564; else goto $l565;
    $l564:;
    if ($tmp550 >= $tmp552) goto $l555; else goto $l557;
    $l565:;
    if ($tmp550 > $tmp552) goto $l555; else goto $l557;
    $l555:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp567, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp569 = $tmp567.min.value;
        panda$core$Int64 j568 = { $tmp569 };
        int64_t $tmp571 = $tmp567.max.value;
        bool $tmp572 = $tmp567.inclusive.value;
        if ($tmp572) goto $l579; else goto $l580;
        $l579:;
        if ($tmp569 <= $tmp571) goto $l573; else goto $l575;
        $l580:;
        if ($tmp569 < $tmp571) goto $l573; else goto $l575;
        $l573:;
        {
            panda$core$Int64 $tmp581 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i549, j568);
            panda$core$Bit $tmp582 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp581.value], p_s->data[j568.value]);
            if ($tmp582.value) {
            {
                goto $l558;
            }
            }
        }
        $l576:;
        int64_t $tmp584 = $tmp571 - j568.value;
        if ($tmp572) goto $l585; else goto $l586;
        $l585:;
        if ((uint64_t) $tmp584 >= 1) goto $l583; else goto $l575;
        $l586:;
        if ((uint64_t) $tmp584 > 1) goto $l583; else goto $l575;
        $l583:;
        j568.value += 1;
        goto $l573;
        $l575:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp589, i549);
        return ((panda$core$String$Index$nullable) { $tmp589, true });
    }
    $l558:;
    if ($tmp561) goto $l591; else goto $l592;
    $l591:;
    int64_t $tmp593 = $tmp552 - i549.value;
    if ($tmp554) goto $l594; else goto $l595;
    $l594:;
    if ((uint64_t) $tmp593 >= $tmp553) goto $l590; else goto $l557;
    $l595:;
    if ((uint64_t) $tmp593 > $tmp553) goto $l590; else goto $l557;
    $l592:;
    int64_t $tmp597 = i549.value - $tmp552;
    if ($tmp554) goto $l598; else goto $l599;
    $l598:;
    if ((uint64_t) $tmp597 >= -$tmp553) goto $l590; else goto $l557;
    $l599:;
    if ((uint64_t) $tmp597 > -$tmp553) goto $l590; else goto $l557;
    $l590:;
    i549.value += $tmp553;
    goto $l555;
    $l557:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result601;
    panda$core$String$Index index605;
    panda$core$String$Index$nullable nextIndex609;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp611;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp613;
    panda$core$String$Index $tmp615;
    panda$core$MutableString* $tmp602 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp602->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp602->refCount.value = 1;
    panda$core$MutableString$init($tmp602);
    panda$core$Object* $tmp604 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp602));
    result601 = ((panda$core$MutableString*) $tmp604);
    panda$core$String$Index $tmp606 = panda$core$String$start$R$panda$core$String$Index(self);
    index605 = $tmp606;
    $l607:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp610 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index605);
        nextIndex609 = $tmp610;
        if (((panda$core$Bit) { !nextIndex609.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp611, ((panda$core$String$Index$nullable) { index605, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp612 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp611);
            panda$core$MutableString$append$panda$core$String(result601, $tmp612);
            goto $l608;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp613, index605, ((panda$core$String$Index) nextIndex609.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp614 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp613);
        panda$core$MutableString$append$panda$core$String(result601, $tmp614);
        panda$core$MutableString$append$panda$core$String(result601, p_replacement);
        panda$core$Int64 $tmp616 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex609.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp615, $tmp616);
        index605 = $tmp615;
    }
    }
    $l608:;
    panda$core$String* $tmp617 = panda$core$MutableString$finish$R$panda$core$String(result601);
    return $tmp617;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp618;
    panda$core$String$Index$init$panda$core$Int64(&$tmp618, ((panda$core$Int64) { 0 }));
    return $tmp618;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp619;
    panda$core$String$Index$init$panda$core$Int64(&$tmp619, self->_length);
    return $tmp619;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c621;
    panda$core$String$Index $tmp624;
    panda$core$String$Index $tmp627;
    panda$core$String$Index $tmp630;
    panda$core$String$Index $tmp632;
    panda$core$Bit $tmp620 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp620.value);
    int64_t $tmp622 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c621 = $tmp622;
    bool $tmp623 = c621 >= 240;
    if (((panda$core$Bit) { $tmp623 }).value) {
    {
        panda$core$Int64 $tmp625 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp624, $tmp625);
        return $tmp624;
    }
    }
    bool $tmp626 = c621 >= 224;
    if (((panda$core$Bit) { $tmp626 }).value) {
    {
        panda$core$Int64 $tmp628 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp627, $tmp628);
        return $tmp627;
    }
    }
    bool $tmp629 = c621 >= 192;
    if (((panda$core$Bit) { $tmp629 }).value) {
    {
        panda$core$Int64 $tmp631 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp630, $tmp631);
        return $tmp630;
    }
    }
    panda$core$Int64 $tmp633 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp632, $tmp633);
    return $tmp632;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue635;
    panda$core$String$Index $tmp646;
    panda$core$Bit $tmp634 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp634.value);
    panda$core$Int64 $tmp636 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue635 = $tmp636;
    $l637:;
    int64_t $tmp640 = ((int64_t) self->data[newValue635.value].value) & 255;
    bool $tmp641 = $tmp640 >= 128;
    bool $tmp639 = $tmp641;
    if (!$tmp639) goto $l642;
    int64_t $tmp643 = ((int64_t) self->data[newValue635.value].value) & 255;
    bool $tmp644 = $tmp643 < 192;
    $tmp639 = $tmp644;
    $l642:;
    if (!((panda$core$Bit) { $tmp639 }).value) goto $l638;
    {
        panda$core$Int64 $tmp645 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue635, ((panda$core$Int64) { 1 }));
        newValue635 = $tmp645;
    }
    goto $l637;
    $l638:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp646, newValue635);
    return $tmp646;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result647;
    panda$core$Range$LTpanda$core$Int64$GT $tmp649;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp670;
    result647 = p_index;
    panda$core$Bit $tmp648 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp648.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp649, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp651 = $tmp649.min.value;
        panda$core$Int64 i650 = { $tmp651 };
        int64_t $tmp653 = $tmp649.max.value;
        bool $tmp654 = $tmp649.inclusive.value;
        if ($tmp654) goto $l661; else goto $l662;
        $l661:;
        if ($tmp651 <= $tmp653) goto $l655; else goto $l657;
        $l662:;
        if ($tmp651 < $tmp653) goto $l655; else goto $l657;
        $l655:;
        {
            panda$core$String$Index $tmp663 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result647);
            result647 = $tmp663;
        }
        $l658:;
        int64_t $tmp665 = $tmp653 - i650.value;
        if ($tmp654) goto $l666; else goto $l667;
        $l666:;
        if ((uint64_t) $tmp665 >= 1) goto $l664; else goto $l657;
        $l667:;
        if ((uint64_t) $tmp665 > 1) goto $l664; else goto $l657;
        $l664:;
        i650.value += 1;
        goto $l655;
        $l657:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp670, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp672 = $tmp670.start.value;
        panda$core$Int64 i671 = { $tmp672 };
        int64_t $tmp674 = $tmp670.end.value;
        int64_t $tmp675 = $tmp670.step.value;
        bool $tmp676 = $tmp670.inclusive.value;
        bool $tmp683 = $tmp675 > 0;
        if ($tmp683) goto $l681; else goto $l682;
        $l681:;
        if ($tmp676) goto $l684; else goto $l685;
        $l684:;
        if ($tmp672 <= $tmp674) goto $l677; else goto $l679;
        $l685:;
        if ($tmp672 < $tmp674) goto $l677; else goto $l679;
        $l682:;
        if ($tmp676) goto $l686; else goto $l687;
        $l686:;
        if ($tmp672 >= $tmp674) goto $l677; else goto $l679;
        $l687:;
        if ($tmp672 > $tmp674) goto $l677; else goto $l679;
        $l677:;
        {
            panda$core$String$Index $tmp689 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result647);
            result647 = $tmp689;
        }
        $l680:;
        if ($tmp683) goto $l691; else goto $l692;
        $l691:;
        int64_t $tmp693 = $tmp674 - i671.value;
        if ($tmp676) goto $l694; else goto $l695;
        $l694:;
        if ((uint64_t) $tmp693 >= $tmp675) goto $l690; else goto $l679;
        $l695:;
        if ((uint64_t) $tmp693 > $tmp675) goto $l690; else goto $l679;
        $l692:;
        int64_t $tmp697 = i671.value - $tmp674;
        if ($tmp676) goto $l698; else goto $l699;
        $l698:;
        if ((uint64_t) $tmp697 >= -$tmp675) goto $l690; else goto $l679;
        $l699:;
        if ((uint64_t) $tmp697 > -$tmp675) goto $l690; else goto $l679;
        $l690:;
        i671.value += $tmp675;
        goto $l677;
        $l679:;
    }
    }
    return result647;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp701;
    panda$core$Char32$init$panda$core$Int32(&$tmp701, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp702 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp701);
    return $tmp702;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
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
    panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp707);
    return $tmp708;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp709;
    panda$core$Char32$init$panda$core$Int32(&$tmp709, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp710 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp709);
    return $tmp710;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp711 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp712 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp711, p_width);
    if ($tmp712.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp713 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp714 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp713);
    panda$core$String* $tmp715 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp714);
    panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp715, self);
    return $tmp716;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp717;
    panda$core$Char32$init$panda$core$Int32(&$tmp717, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp718 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp717);
    return $tmp718;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 pad721;
    panda$core$Int64 left724;
    panda$core$Int64 right726;
    panda$core$Int64 $tmp719 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp720 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp719, p_width);
    if ($tmp720.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp722 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp723 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp722);
    pad721 = $tmp723;
    panda$core$Int64 $tmp725 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad721, ((panda$core$Int64) { 2 }));
    left724 = $tmp725;
    panda$core$Int64 $tmp727 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad721, left724);
    right726 = $tmp727;
    panda$core$String* $tmp728 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left724);
    panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, self);
    panda$core$String* $tmp730 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right726);
    panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, $tmp730);
    return $tmp731;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp732 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp732;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result733;
    panda$core$String$Index index737;
    panda$core$String$Index$nullable nextIndex741;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp750;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp752;
    panda$collections$Array* $tmp734 = (panda$collections$Array*) pandaAlloc(41);
    $tmp734->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp734->refCount.value = 1;
    panda$collections$Array$init($tmp734);
    panda$core$Object* $tmp736 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp734));
    result733 = ((panda$collections$Array*) $tmp736);
    panda$core$String$Index $tmp738 = panda$core$String$start$R$panda$core$String$Index(self);
    index737 = $tmp738;
    $l739:;
    while (true) {
    {
        memset(&nextIndex741, 0, sizeof(nextIndex741));
        panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp742.value) {
        {
            panda$core$String$Index $tmp743 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index737);
            nextIndex741 = ((panda$core$String$Index$nullable) { $tmp743, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp744 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index737);
            nextIndex741 = $tmp744;
        }
        }
        bool $tmp745 = ((panda$core$Bit) { !nextIndex741.nonnull }).value;
        if ($tmp745) goto $l746;
        panda$core$Int64 $tmp747 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result733->count, $tmp747);
        $tmp745 = $tmp748.value;
        $l746:;
        panda$core$Bit $tmp749 = { $tmp745 };
        if ($tmp749.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp750, ((panda$core$String$Index$nullable) { index737, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp751 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp750);
            panda$collections$Array$add$panda$collections$Array$T(result733, ((panda$core$Object*) $tmp751));
            goto $l740;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp752, index737, ((panda$core$String$Index) nextIndex741.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp753 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp752);
        panda$collections$Array$add$panda$collections$Array$T(result733, ((panda$core$Object*) $tmp753));
        panda$core$String$Index $tmp754 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex741.value), p_delimiter->_length);
        index737 = $tmp754;
    }
    }
    $l740:;
    return result733;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result756;
    panda$core$Int64 start757;
    panda$core$Char8 $tmp758;
    panda$core$Range$LTpanda$core$Int64$GT $tmp760;
    panda$core$Int64 digit774;
    panda$core$Char8 $tmp789;
    panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp755.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result756 = ((panda$core$Int64) { 0 });
    memset(&start757, 0, sizeof(start757));
    panda$core$Char8$init$panda$core$UInt8(&$tmp758, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp759 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp758);
    if ($tmp759.value) {
    {
        start757 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start757 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp760, start757, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp762 = $tmp760.min.value;
    panda$core$Int64 i761 = { $tmp762 };
    int64_t $tmp764 = $tmp760.max.value;
    bool $tmp765 = $tmp760.inclusive.value;
    if ($tmp765) goto $l772; else goto $l773;
    $l772:;
    if ($tmp762 <= $tmp764) goto $l766; else goto $l768;
    $l773:;
    if ($tmp762 < $tmp764) goto $l766; else goto $l768;
    $l766:;
    {
        panda$core$Int64 $tmp775 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i761.value].value) }), ((panda$core$Int64) { 48 }));
        digit774 = $tmp775;
        panda$core$Bit $tmp777 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit774, ((panda$core$Int64) { 0 }));
        bool $tmp776 = $tmp777.value;
        if ($tmp776) goto $l778;
        panda$core$Bit $tmp779 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit774, ((panda$core$Int64) { 9 }));
        $tmp776 = $tmp779.value;
        $l778:;
        panda$core$Bit $tmp780 = { $tmp776 };
        if ($tmp780.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp781 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result756, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp781, digit774);
        result756 = $tmp782;
    }
    $l769:;
    int64_t $tmp784 = $tmp764 - i761.value;
    if ($tmp765) goto $l785; else goto $l786;
    $l785:;
    if ((uint64_t) $tmp784 >= 1) goto $l783; else goto $l768;
    $l786:;
    if ((uint64_t) $tmp784 > 1) goto $l783; else goto $l768;
    $l783:;
    i761.value += 1;
    goto $l766;
    $l768:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp789, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp790 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp789);
    if ($tmp790.value) {
    {
        panda$core$Int64 $tmp791 = panda$core$Int64$$SUB$R$panda$core$Int64(result756);
        result756 = $tmp791;
    }
    }
    return ((panda$core$Int64$nullable) { result756, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result793;
    panda$core$Range$LTpanda$core$Int64$GT $tmp794;
    panda$core$UInt64 digit808;
    panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp792.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result793 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp794, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp796 = $tmp794.min.value;
    panda$core$Int64 i795 = { $tmp796 };
    int64_t $tmp798 = $tmp794.max.value;
    bool $tmp799 = $tmp794.inclusive.value;
    if ($tmp799) goto $l806; else goto $l807;
    $l806:;
    if ($tmp796 <= $tmp798) goto $l800; else goto $l802;
    $l807:;
    if ($tmp796 < $tmp798) goto $l800; else goto $l802;
    $l800:;
    {
        panda$core$UInt64 $tmp809 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i795.value].value) }), ((panda$core$UInt64) { 48 }));
        digit808 = $tmp809;
        panda$core$Bit $tmp811 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit808, ((panda$core$UInt64) { 0 }));
        bool $tmp810 = $tmp811.value;
        if ($tmp810) goto $l812;
        panda$core$Bit $tmp813 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit808, ((panda$core$UInt64) { 9 }));
        $tmp810 = $tmp813.value;
        $l812:;
        panda$core$Bit $tmp814 = { $tmp810 };
        if ($tmp814.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp815 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result793, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp816 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp815, digit808);
        result793 = $tmp816;
    }
    $l803:;
    int64_t $tmp818 = $tmp798 - i795.value;
    if ($tmp799) goto $l819; else goto $l820;
    $l819:;
    if ((uint64_t) $tmp818 >= 1) goto $l817; else goto $l802;
    $l820:;
    if ((uint64_t) $tmp818 > 1) goto $l817; else goto $l802;
    $l817:;
    i795.value += 1;
    goto $l800;
    $l802:;
    return ((panda$core$UInt64$nullable) { result793, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h824;
    panda$core$Range$LTpanda$core$Int64$GT $tmp825;
    panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp823.value) {
    {
        h824 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp825, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp827 = $tmp825.min.value;
        panda$core$Int64 i826 = { $tmp827 };
        int64_t $tmp829 = $tmp825.max.value;
        bool $tmp830 = $tmp825.inclusive.value;
        if ($tmp830) goto $l837; else goto $l838;
        $l837:;
        if ($tmp827 <= $tmp829) goto $l831; else goto $l833;
        $l838:;
        if ($tmp827 < $tmp829) goto $l831; else goto $l833;
        $l831:;
        {
            panda$core$Int64 $tmp839 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h824, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp840 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp839, ((panda$core$Int64) { ((int64_t) self->data[i826.value].value) }));
            h824 = $tmp840;
        }
        $l834:;
        int64_t $tmp842 = $tmp829 - i826.value;
        if ($tmp830) goto $l843; else goto $l844;
        $l843:;
        if ((uint64_t) $tmp842 >= 1) goto $l841; else goto $l833;
        $l844:;
        if ((uint64_t) $tmp842 > 1) goto $l841; else goto $l833;
        $l841:;
        i826.value += 1;
        goto $l831;
        $l833:;
        self->_hash = h824;
    }
    }
    return self->_hash;
}

