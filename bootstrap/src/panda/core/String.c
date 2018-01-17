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
#include "panda/core/Panda.h"
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
typedef panda$core$String* (*$fn166)(panda$core$Object*);
typedef panda$core$String* (*$fn194)(panda$core$Object*);

static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        self->owner = NULL;
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        self->owner = p_owner;
    }
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
    self->data = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
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
    {
        self->owner = NULL;
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    pandaFree(self->data);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp29 = (panda$core$String$UTF8List*) pandaZAlloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp29->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp29, self);
    return ((panda$collections$ListView*) $tmp29);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp31 = (panda$core$String$UTF16Iterator*) pandaZAlloc(32);
    $tmp31->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp31->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp31, self);
    return ((panda$collections$Iterator*) $tmp31);
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp33 = (panda$core$String$UTF32Iterator*) pandaZAlloc(32);
    $tmp33->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp33->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp33, self);
    return ((panda$collections$Iterator*) $tmp33);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count35;
    panda$collections$Iterator* iter36;
    panda$core$Int64 tmp149;
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
    {
        tmp149 = count35;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter36));
        return tmp149;
    }
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    return self->_length;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp51;
    panda$core$Bit $tmp50 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp50.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp51, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp53 = $tmp51.min.value;
    panda$core$Int64 i52 = { $tmp53 };
    int64_t $tmp55 = $tmp51.max.value;
    bool $tmp56 = $tmp51.inclusive.value;
    if ($tmp56) goto $l63; else goto $l64;
    $l63:;
    if ($tmp53 <= $tmp55) goto $l57; else goto $l59;
    $l64:;
    if ($tmp53 < $tmp55) goto $l57; else goto $l59;
    $l57:;
    {
        panda$core$Bit $tmp65 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i52.value], p_other->data[i52.value]);
        if ($tmp65.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l60:;
    int64_t $tmp67 = $tmp55 - i52.value;
    if ($tmp56) goto $l68; else goto $l69;
    $l68:;
    if ((uint64_t) $tmp67 >= 1) goto $l66; else goto $l59;
    $l69:;
    if ((uint64_t) $tmp67 > 1) goto $l66; else goto $l59;
    $l66:;
    i52.value += 1;
    goto $l57;
    $l59:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp73;
    panda$core$Bit $tmp72 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp72.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp73, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp75 = $tmp73.min.value;
    panda$core$Int64 i74 = { $tmp75 };
    int64_t $tmp77 = $tmp73.max.value;
    bool $tmp78 = $tmp73.inclusive.value;
    if ($tmp78) goto $l85; else goto $l86;
    $l85:;
    if ($tmp75 <= $tmp77) goto $l79; else goto $l81;
    $l86:;
    if ($tmp75 < $tmp77) goto $l79; else goto $l81;
    $l79:;
    {
        panda$core$Int64 $tmp87 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp87, i74);
        panda$core$Bit $tmp89 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp88.value], p_other->data[i74.value]);
        if ($tmp89.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l82:;
    int64_t $tmp91 = $tmp77 - i74.value;
    if ($tmp78) goto $l92; else goto $l93;
    $l92:;
    if ((uint64_t) $tmp91 >= 1) goto $l90; else goto $l81;
    $l93:;
    if ((uint64_t) $tmp91 > 1) goto $l90; else goto $l81;
    $l90:;
    i74.value += 1;
    goto $l79;
    $l81:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start97;
    panda$core$Int64 end106;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp116;
    panda$core$String$Index $tmp117;
    panda$core$String$Index $tmp118;
    panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp96.value) {
    {
        return self;
    }
    }
    start97 = ((panda$core$Int64) { 0 });
    $l98:;
    panda$core$Bit $tmp101 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start97, self->_length);
    bool $tmp100 = $tmp101.value;
    if (!$tmp100) goto $l102;
    panda$core$Bit $tmp103 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start97.value]);
    $tmp100 = $tmp103.value;
    $l102:;
    panda$core$Bit $tmp104 = { $tmp100 };
    if (!$tmp104.value) goto $l99;
    {
        panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start97, ((panda$core$Int64) { 1 }));
        start97 = $tmp105;
    }
    goto $l98;
    $l99:;
    panda$core$Int64 $tmp107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end106 = $tmp107;
    $l108:;
    panda$core$Bit $tmp111 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end106, start97);
    bool $tmp110 = $tmp111.value;
    if (!$tmp110) goto $l112;
    panda$core$Bit $tmp113 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end106.value]);
    $tmp110 = $tmp113.value;
    $l112:;
    panda$core$Bit $tmp114 = { $tmp110 };
    if (!$tmp114.value) goto $l109;
    {
        panda$core$Int64 $tmp115 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end106, ((panda$core$Int64) { 1 }));
        end106 = $tmp115;
    }
    goto $l108;
    $l109:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp117, start97);
    panda$core$String$Index$init$panda$core$Int64(&$tmp118, end106);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp116, $tmp117, $tmp118, ((panda$core$Bit) { true }));
    panda$core$String* $tmp119 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp116);
    return $tmp119;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result120;
    panda$core$Range$LTpanda$core$Int64$GT $tmp122;
    panda$core$Range$LTpanda$core$Int64$GT $tmp142;
    panda$core$Int64 $tmp121 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result120 = ((panda$core$Char8*) pandaZAlloc($tmp121.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp122, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp124 = $tmp122.min.value;
    panda$core$Int64 i123 = { $tmp124 };
    int64_t $tmp126 = $tmp122.max.value;
    bool $tmp127 = $tmp122.inclusive.value;
    if ($tmp127) goto $l134; else goto $l135;
    $l134:;
    if ($tmp124 <= $tmp126) goto $l128; else goto $l130;
    $l135:;
    if ($tmp124 < $tmp126) goto $l128; else goto $l130;
    $l128:;
    {
        result120[i123.value] = self->data[i123.value];
    }
    $l131:;
    int64_t $tmp137 = $tmp126 - i123.value;
    if ($tmp127) goto $l138; else goto $l139;
    $l138:;
    if ((uint64_t) $tmp137 >= 1) goto $l136; else goto $l130;
    $l139:;
    if ((uint64_t) $tmp137 > 1) goto $l136; else goto $l130;
    $l136:;
    i123.value += 1;
    goto $l128;
    $l130:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp142, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp144 = $tmp142.min.value;
    panda$core$Int64 i143 = { $tmp144 };
    int64_t $tmp146 = $tmp142.max.value;
    bool $tmp147 = $tmp142.inclusive.value;
    if ($tmp147) goto $l154; else goto $l155;
    $l154:;
    if ($tmp144 <= $tmp146) goto $l148; else goto $l150;
    $l155:;
    if ($tmp144 < $tmp146) goto $l148; else goto $l150;
    $l148:;
    {
        panda$core$Int64 $tmp156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i143);
        result120[$tmp156.value] = p_other->data[i143.value];
    }
    $l151:;
    int64_t $tmp158 = $tmp146 - i143.value;
    if ($tmp147) goto $l159; else goto $l160;
    $l159:;
    if ((uint64_t) $tmp158 >= 1) goto $l157; else goto $l150;
    $l160:;
    if ((uint64_t) $tmp158 > 1) goto $l157; else goto $l150;
    $l157:;
    i143.value += 1;
    goto $l148;
    $l150:;
    panda$core$String* $tmp163 = (panda$core$String*) pandaZAlloc(48);
    $tmp163->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp163->refCount.value = 1;
    panda$core$Int64 $tmp165 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp163, result120, $tmp165);
    return $tmp163;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp167 = (($fn166) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp167);
    return $tmp168;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result169;
    panda$core$Range$LTpanda$core$Int64$GT $tmp172;
    panda$core$String* tmp2192;
    panda$core$MutableString* $tmp170 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp170->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp170->refCount.value = 1;
    panda$core$MutableString$init($tmp170);
    result169 = $tmp170;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp172, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp174 = $tmp172.min.value;
    panda$core$Int64 i173 = { $tmp174 };
    int64_t $tmp176 = $tmp172.max.value;
    bool $tmp177 = $tmp172.inclusive.value;
    if ($tmp177) goto $l184; else goto $l185;
    $l184:;
    if ($tmp174 <= $tmp176) goto $l178; else goto $l180;
    $l185:;
    if ($tmp174 < $tmp176) goto $l178; else goto $l180;
    $l178:;
    {
        panda$core$MutableString$append$panda$core$String(result169, self);
    }
    $l181:;
    int64_t $tmp187 = $tmp176 - i173.value;
    if ($tmp177) goto $l188; else goto $l189;
    $l188:;
    if ((uint64_t) $tmp187 >= 1) goto $l186; else goto $l180;
    $l189:;
    if ((uint64_t) $tmp187 > 1) goto $l186; else goto $l180;
    $l186:;
    i173.value += 1;
    goto $l178;
    $l180:;
    {
        panda$core$String* $tmp193 = panda$core$MutableString$finish$R$panda$core$String(result169);
        tmp2192 = $tmp193;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
        return tmp2192;
    }
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp195 = (($fn194) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, p_s);
    return $tmp196;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp198;
    panda$core$Bit $tmp197 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp197.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp198, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp200 = $tmp198.min.value;
    panda$core$Int64 i199 = { $tmp200 };
    int64_t $tmp202 = $tmp198.max.value;
    bool $tmp203 = $tmp198.inclusive.value;
    if ($tmp203) goto $l210; else goto $l211;
    $l210:;
    if ($tmp200 <= $tmp202) goto $l204; else goto $l206;
    $l211:;
    if ($tmp200 < $tmp202) goto $l204; else goto $l206;
    $l204:;
    {
        panda$core$Bit $tmp212 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i199.value], p_other->data[i199.value]);
        if ($tmp212.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l207:;
    int64_t $tmp214 = $tmp202 - i199.value;
    if ($tmp203) goto $l215; else goto $l216;
    $l215:;
    if ((uint64_t) $tmp214 >= 1) goto $l213; else goto $l206;
    $l216:;
    if ((uint64_t) $tmp214 > 1) goto $l213; else goto $l206;
    $l213:;
    i199.value += 1;
    goto $l204;
    $l206:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp219 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp219);
    return $tmp220;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx221;
    panda$core$Char8 c222;
    panda$core$Int32 result223;
    panda$core$Char32 $tmp227;
    panda$core$Char32 $tmp238;
    panda$core$Char32 $tmp254;
    panda$core$Char32 $tmp273;
    idx221 = p_index.value;
    c222 = self->data[idx221.value];
    panda$core$Int32 $tmp224 = panda$core$Char8$convert$R$panda$core$Int32(c222);
    result223 = $tmp224;
    int64_t $tmp225 = ((int64_t) c222.value) & 255;
    bool $tmp226 = $tmp225 < 192;
    if (((panda$core$Bit) { $tmp226 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp227, result223);
        return $tmp227;
    }
    }
    int64_t $tmp228 = ((int64_t) c222.value) & 255;
    bool $tmp229 = $tmp228 < 224;
    if (((panda$core$Bit) { $tmp229 }).value) {
    {
        panda$core$Int64 $tmp230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp231 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp230, self->_length);
        PANDA_ASSERT($tmp231.value);
        panda$core$Int32 $tmp232 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result223, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp233 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp232, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp235 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp234.value]);
        panda$core$Int32 $tmp236 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp235, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp237 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp233, $tmp236);
        result223 = $tmp237;
        panda$core$Char32$init$panda$core$Int32(&$tmp238, result223);
        return $tmp238;
    }
    }
    int64_t $tmp239 = ((int64_t) c222.value) & 255;
    bool $tmp240 = $tmp239 < 240;
    if (((panda$core$Bit) { $tmp240 }).value) {
    {
        panda$core$Int64 $tmp241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp242 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp241, self->_length);
        PANDA_ASSERT($tmp242.value);
        panda$core$Int32 $tmp243 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result223, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp244 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp243, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp245 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp246 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp245.value]);
        panda$core$Int32 $tmp247 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp246, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp248 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp247, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp249 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp244, $tmp248);
        panda$core$Int64 $tmp250 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp251 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp250.value]);
        panda$core$Int32 $tmp252 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp251, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp253 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp249, $tmp252);
        result223 = $tmp253;
        panda$core$Char32$init$panda$core$Int32(&$tmp254, result223);
        return $tmp254;
    }
    }
    panda$core$Int64 $tmp255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp256 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp255, self->_length);
    PANDA_ASSERT($tmp256.value);
    panda$core$Int32 $tmp257 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result223, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp258 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp257, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp259 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp260 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp259.value]);
    panda$core$Int32 $tmp261 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp260, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp262 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp261, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp263 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp258, $tmp262);
    panda$core$Int64 $tmp264 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp265 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp264.value]);
    panda$core$Int32 $tmp266 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp265, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp267 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp266, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp268 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp263, $tmp267);
    panda$core$Int64 $tmp269 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx221, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp270 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp269.value]);
    panda$core$Int32 $tmp271 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp270, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp272 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp268, $tmp271);
    result223 = $tmp272;
    panda$core$Char32$init$panda$core$Int32(&$tmp273, result223);
    return $tmp273;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp274 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp275 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp274, p_index);
    panda$core$Char32 $tmp276 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp275);
    return $tmp276;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp277 = (panda$core$String*) pandaZAlloc(48);
    $tmp277->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp277->refCount.value = 1;
    panda$core$Int64 $tmp279 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp277, (self->data + p_r.min.value.value), $tmp279, self);
    return $tmp277;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min280;
    panda$core$String$Index max282;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp285;
    memset(&min280, 0, sizeof(min280));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min280 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp281 = panda$core$String$start$R$panda$core$String$Index(self);
        min280 = $tmp281;
    }
    }
    memset(&max282, 0, sizeof(max282));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max282 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp283 = panda$core$String$end$R$panda$core$String$Index(self);
        max282 = $tmp283;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp284 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max282);
            max282 = $tmp284;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp285, min280, max282, p_r.inclusive);
    panda$core$String* $tmp286 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp285);
    return $tmp286;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current287;
    panda$core$MutableString* result288;
    panda$core$Int64 max291;
    panda$core$Char8 c296;
    panda$core$String* tmp3307;
    current287 = p_r.min.value;
    panda$core$MutableString* $tmp289 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp289->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp289->refCount.value = 1;
    panda$core$MutableString$init($tmp289);
    result288 = $tmp289;
    max291 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp292 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max291, ((panda$core$Int64) { 1 }));
        max291 = $tmp292;
    }
    }
    $l293:;
    panda$core$Bit $tmp295 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current287, max291);
    if (!$tmp295.value) goto $l294;
    {
        c296 = self->data[current287.value];
        panda$core$MutableString$append$panda$core$Char8(result288, c296);
        panda$core$Int64 $tmp297 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current287, ((panda$core$Int64) { 1 }));
        current287 = $tmp297;
        int64_t $tmp298 = ((int64_t) c296.value) & 255;
        bool $tmp299 = $tmp298 >= 192;
        if (((panda$core$Bit) { $tmp299 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result288, self->data[current287.value]);
            panda$core$Int64 $tmp300 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current287, ((panda$core$Int64) { 1 }));
            current287 = $tmp300;
        }
        }
        int64_t $tmp301 = ((int64_t) c296.value) & 255;
        bool $tmp302 = $tmp301 >= 224;
        if (((panda$core$Bit) { $tmp302 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result288, self->data[current287.value]);
            panda$core$Int64 $tmp303 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current287, ((panda$core$Int64) { 1 }));
            current287 = $tmp303;
        }
        }
        int64_t $tmp304 = ((int64_t) c296.value) & 255;
        bool $tmp305 = $tmp304 >= 240;
        if (((panda$core$Bit) { $tmp305 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result288, self->data[current287.value]);
            panda$core$Int64 $tmp306 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current287, ((panda$core$Int64) { 1 }));
            current287 = $tmp306;
        }
        }
    }
    goto $l293;
    $l294:;
    {
        panda$core$String* $tmp308 = panda$core$MutableString$finish$R$panda$core$String(result288);
        tmp3307 = $tmp308;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result288));
        return tmp3307;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min311;
    panda$core$String$Index max313;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp316;
    panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp309.value) {
    {
        return &$s310;
    }
    }
    memset(&min311, 0, sizeof(min311));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min311 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp312 = panda$core$String$start$R$panda$core$String$Index(self);
        min311 = $tmp312;
    }
    }
    memset(&max313, 0, sizeof(max313));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max313 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp314 = panda$core$String$end$R$panda$core$String$Index(self);
        max313 = $tmp314;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp315 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max313);
            max313 = $tmp315;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp316, min311, max313, p_r.inclusive);
    panda$core$String* $tmp317 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp316);
    return $tmp317;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step320;
    panda$core$Int64 current321;
    panda$core$Int64 end326;
    panda$core$MutableString* result330;
    panda$core$Char8 c337;
    panda$core$Range$LTpanda$core$Int64$GT $tmp348;
    panda$core$String* tmp4363;
    panda$core$String$Index $tmp365;
    panda$core$Char8 c377;
    panda$core$Int64 old378;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp398;
    panda$core$String* tmp5418;
    panda$core$String$Index $tmp420;
    panda$core$Char8 c444;
    panda$core$String* tmp6454;
    panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp318.value) {
    {
        return &$s319;
    }
    }
    step320 = p_r.step;
    memset(&current321, 0, sizeof(current321));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current321 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp322 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step320, ((panda$core$Int64) { 0 }));
    if ($tmp322.value) {
    {
        panda$core$String$Index $tmp323 = panda$core$String$start$R$panda$core$String$Index(self);
        current321 = $tmp323.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp324 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp325 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp324);
        current321 = $tmp325.value;
    }
    }
    }
    memset(&end326, 0, sizeof(end326));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end326 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp327 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step320, ((panda$core$Int64) { 0 }));
    if ($tmp327.value) {
    {
        panda$core$String$Index $tmp328 = panda$core$String$end$R$panda$core$String$Index(self);
        end326 = $tmp328.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp329 = panda$core$String$start$R$panda$core$String$Index(self);
        end326 = $tmp329.value;
    }
    }
    }
    panda$core$MutableString* $tmp331 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp331->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp331->refCount.value = 1;
    panda$core$MutableString$init($tmp331);
    result330 = $tmp331;
    panda$core$Bit $tmp333 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp333.value) {
    {
        $l334:;
        panda$core$Bit $tmp336 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current321, end326);
        if (!$tmp336.value) goto $l335;
        {
            c337 = self->data[current321.value];
            panda$core$MutableString$append$panda$core$Char8(result330, c337);
            panda$core$Int64 $tmp338 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
            current321 = $tmp338;
            int64_t $tmp339 = ((int64_t) c337.value) & 255;
            bool $tmp340 = $tmp339 >= 192;
            if (((panda$core$Bit) { $tmp340 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
                panda$core$Int64 $tmp341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
                current321 = $tmp341;
            }
            }
            int64_t $tmp342 = ((int64_t) c337.value) & 255;
            bool $tmp343 = $tmp342 >= 224;
            if (((panda$core$Bit) { $tmp343 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
                panda$core$Int64 $tmp344 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
                current321 = $tmp344;
            }
            }
            int64_t $tmp345 = ((int64_t) c337.value) & 255;
            bool $tmp346 = $tmp345 >= 240;
            if (((panda$core$Bit) { $tmp346 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
                panda$core$Int64 $tmp347 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
                current321 = $tmp347;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp348, ((panda$core$Int64) { 1 }), step320, ((panda$core$Bit) { false }));
            int64_t $tmp350 = $tmp348.min.value;
            panda$core$Int64 i349 = { $tmp350 };
            int64_t $tmp352 = $tmp348.max.value;
            bool $tmp353 = $tmp348.inclusive.value;
            if ($tmp353) goto $l360; else goto $l361;
            $l360:;
            if ($tmp350 <= $tmp352) goto $l354; else goto $l356;
            $l361:;
            if ($tmp350 < $tmp352) goto $l354; else goto $l356;
            $l354:;
            {
                panda$core$Bit $tmp362 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current321, end326);
                if ($tmp362.value) {
                {
                    {
                        panda$core$String* $tmp364 = panda$core$MutableString$convert$R$panda$core$String(result330);
                        tmp4363 = $tmp364;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result330));
                        return tmp4363;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp365, current321);
                panda$core$String$Index $tmp366 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp365);
                current321 = $tmp366.value;
            }
            $l357:;
            int64_t $tmp368 = $tmp352 - i349.value;
            if ($tmp353) goto $l369; else goto $l370;
            $l369:;
            if ((uint64_t) $tmp368 >= 1) goto $l367; else goto $l356;
            $l370:;
            if ((uint64_t) $tmp368 > 1) goto $l367; else goto $l356;
            $l367:;
            i349.value += 1;
            goto $l354;
            $l356:;
        }
        goto $l334;
        $l335:;
    }
    }
    else {
    {
        panda$core$Bit $tmp373 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp373.value);
        $l374:;
        panda$core$Bit $tmp376 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current321, end326);
        if (!$tmp376.value) goto $l375;
        {
            c377 = self->data[current321.value];
            panda$core$MutableString$append$panda$core$Char8(result330, c377);
            old378 = current321;
            panda$core$Int64 $tmp379 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
            current321 = $tmp379;
            int64_t $tmp380 = ((int64_t) c377.value) & 255;
            bool $tmp381 = $tmp380 >= 192;
            if (((panda$core$Bit) { $tmp381 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
                panda$core$Int64 $tmp382 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
                current321 = $tmp382;
            }
            }
            int64_t $tmp383 = ((int64_t) c377.value) & 255;
            bool $tmp384 = $tmp383 >= 224;
            if (((panda$core$Bit) { $tmp384 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
                panda$core$Int64 $tmp385 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
                current321 = $tmp385;
            }
            }
            int64_t $tmp386 = ((int64_t) c377.value) & 255;
            bool $tmp387 = $tmp386 >= 240;
            if (((panda$core$Bit) { $tmp387 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
            }
            }
            panda$core$Int64 $tmp388 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old378, ((panda$core$Int64) { 1 }));
            current321 = $tmp388;
            $l389:;
            int64_t $tmp392 = ((int64_t) self->data[current321.value].value) & 255;
            bool $tmp393 = $tmp392 >= 128;
            bool $tmp391 = $tmp393;
            if (!$tmp391) goto $l394;
            int64_t $tmp395 = ((int64_t) self->data[current321.value].value) & 255;
            bool $tmp396 = $tmp395 < 192;
            $tmp391 = $tmp396;
            $l394:;
            if (!((panda$core$Bit) { $tmp391 }).value) goto $l390;
            {
                panda$core$Int64 $tmp397 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
                current321 = $tmp397;
            }
            goto $l389;
            $l390:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp398, ((panda$core$Int64) { -1 }), step320, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp400 = $tmp398.start.value;
            panda$core$Int64 i399 = { $tmp400 };
            int64_t $tmp402 = $tmp398.end.value;
            int64_t $tmp403 = $tmp398.step.value;
            bool $tmp404 = $tmp398.inclusive.value;
            bool $tmp411 = $tmp403 > 0;
            if ($tmp411) goto $l409; else goto $l410;
            $l409:;
            if ($tmp404) goto $l412; else goto $l413;
            $l412:;
            if ($tmp400 <= $tmp402) goto $l405; else goto $l407;
            $l413:;
            if ($tmp400 < $tmp402) goto $l405; else goto $l407;
            $l410:;
            if ($tmp404) goto $l414; else goto $l415;
            $l414:;
            if ($tmp400 >= $tmp402) goto $l405; else goto $l407;
            $l415:;
            if ($tmp400 > $tmp402) goto $l405; else goto $l407;
            $l405:;
            {
                panda$core$Bit $tmp417 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current321, end326);
                if ($tmp417.value) {
                {
                    {
                        panda$core$String* $tmp419 = panda$core$MutableString$convert$R$panda$core$String(result330);
                        tmp5418 = $tmp419;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result330));
                        return tmp5418;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp420, current321);
                panda$core$String$Index $tmp421 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp420);
                current321 = $tmp421.value;
            }
            $l408:;
            if ($tmp411) goto $l423; else goto $l424;
            $l423:;
            int64_t $tmp425 = $tmp402 - i399.value;
            if ($tmp404) goto $l426; else goto $l427;
            $l426:;
            if ((uint64_t) $tmp425 >= $tmp403) goto $l422; else goto $l407;
            $l427:;
            if ((uint64_t) $tmp425 > $tmp403) goto $l422; else goto $l407;
            $l424:;
            int64_t $tmp429 = i399.value - $tmp402;
            if ($tmp404) goto $l430; else goto $l431;
            $l430:;
            if ((uint64_t) $tmp429 >= -$tmp403) goto $l422; else goto $l407;
            $l431:;
            if ((uint64_t) $tmp429 > -$tmp403) goto $l422; else goto $l407;
            $l422:;
            i399.value += $tmp403;
            goto $l405;
            $l407:;
        }
        goto $l374;
        $l375:;
    }
    }
    bool $tmp435 = p_r.inclusive.value;
    if ($tmp435) goto $l436;
    $tmp435 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l436:;
    panda$core$Bit $tmp437 = { $tmp435 };
    bool $tmp434 = $tmp437.value;
    if (!$tmp434) goto $l438;
    panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current321, end326);
    $tmp434 = $tmp439.value;
    $l438:;
    panda$core$Bit $tmp440 = { $tmp434 };
    bool $tmp433 = $tmp440.value;
    if (!$tmp433) goto $l441;
    panda$core$Bit $tmp442 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end326, self->_length);
    $tmp433 = $tmp442.value;
    $l441:;
    panda$core$Bit $tmp443 = { $tmp433 };
    if ($tmp443.value) {
    {
        c444 = self->data[current321.value];
        panda$core$MutableString$append$panda$core$Char8(result330, c444);
        panda$core$Int64 $tmp445 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
        current321 = $tmp445;
        int64_t $tmp446 = ((int64_t) c444.value) & 255;
        bool $tmp447 = $tmp446 >= 192;
        if (((panda$core$Bit) { $tmp447 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
            panda$core$Int64 $tmp448 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
            current321 = $tmp448;
        }
        }
        int64_t $tmp449 = ((int64_t) c444.value) & 255;
        bool $tmp450 = $tmp449 >= 224;
        if (((panda$core$Bit) { $tmp450 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
            panda$core$Int64 $tmp451 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current321, ((panda$core$Int64) { 1 }));
            current321 = $tmp451;
        }
        }
        int64_t $tmp452 = ((int64_t) c444.value) & 255;
        bool $tmp453 = $tmp452 >= 240;
        if (((panda$core$Bit) { $tmp453 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result330, self->data[current321.value]);
        }
        }
    }
    }
    {
        panda$core$String* $tmp455 = panda$core$MutableString$finish$R$panda$core$String(result330);
        tmp6454 = $tmp455;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result330));
        return tmp6454;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start456;
    panda$core$String$Index$nullable end459;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp462;
    memset(&start456, 0, sizeof(start456));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp457 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp458 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp457, ((panda$core$Int64) p_r.min.value));
        start456 = ((panda$core$String$Index$nullable) { $tmp458, true });
    }
    }
    else {
    {
        start456 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end459, 0, sizeof(end459));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp460 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp461 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp460, ((panda$core$Int64) p_r.max.value));
        end459 = ((panda$core$String$Index$nullable) { $tmp461, true });
    }
    }
    else {
    {
        end459 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp462, start456, end459, p_r.inclusive);
    panda$core$String* $tmp463 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp462);
    return $tmp463;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start464;
    panda$core$String$Index$nullable end467;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp470;
    memset(&start464, 0, sizeof(start464));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp465 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp466 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp465, ((panda$core$Int64) p_r.start.value));
        start464 = ((panda$core$String$Index$nullable) { $tmp466, true });
    }
    }
    else {
    {
        start464 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end467, 0, sizeof(end467));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp468 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp469 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp468, ((panda$core$Int64) p_r.end.value));
        end467 = ((panda$core$String$Index$nullable) { $tmp469, true });
    }
    }
    else {
    {
        end467 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp470, start464, end467, p_r.step, p_r.inclusive);
    panda$core$String* $tmp471 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp470);
    return $tmp471;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp472;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp472, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp474 = $tmp472.min.value;
    panda$core$Int64 i473 = { $tmp474 };
    int64_t $tmp476 = $tmp472.max.value;
    bool $tmp477 = $tmp472.inclusive.value;
    if ($tmp477) goto $l484; else goto $l485;
    $l484:;
    if ($tmp474 <= $tmp476) goto $l478; else goto $l480;
    $l485:;
    if ($tmp474 < $tmp476) goto $l478; else goto $l480;
    $l478:;
    {
        panda$core$Bit $tmp486 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i473.value], p_c);
        if ($tmp486.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l481:;
    int64_t $tmp488 = $tmp476 - i473.value;
    if ($tmp477) goto $l489; else goto $l490;
    $l489:;
    if ((uint64_t) $tmp488 >= 1) goto $l487; else goto $l480;
    $l490:;
    if ((uint64_t) $tmp488 > 1) goto $l487; else goto $l480;
    $l487:;
    i473.value += 1;
    goto $l478;
    $l480:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp493 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp493.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp494 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp495 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp494);
    return $tmp495;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp497;
    panda$core$Range$LTpanda$core$Int64$GT $tmp512;
    panda$core$String$Index $tmp534;
    panda$core$Bit $tmp496 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp496.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp498 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp497, p_start.value, $tmp498, ((panda$core$Bit) { true }));
    int64_t $tmp500 = $tmp497.min.value;
    panda$core$Int64 i499 = { $tmp500 };
    int64_t $tmp502 = $tmp497.max.value;
    bool $tmp503 = $tmp497.inclusive.value;
    if ($tmp503) goto $l510; else goto $l511;
    $l510:;
    if ($tmp500 <= $tmp502) goto $l504; else goto $l506;
    $l511:;
    if ($tmp500 < $tmp502) goto $l504; else goto $l506;
    $l504:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp512, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp514 = $tmp512.min.value;
        panda$core$Int64 j513 = { $tmp514 };
        int64_t $tmp516 = $tmp512.max.value;
        bool $tmp517 = $tmp512.inclusive.value;
        if ($tmp517) goto $l524; else goto $l525;
        $l524:;
        if ($tmp514 <= $tmp516) goto $l518; else goto $l520;
        $l525:;
        if ($tmp514 < $tmp516) goto $l518; else goto $l520;
        $l518:;
        {
            panda$core$Int64 $tmp526 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i499, j513);
            panda$core$Bit $tmp527 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp526.value], p_s->data[j513.value]);
            if ($tmp527.value) {
            {
                goto $l507;
            }
            }
        }
        $l521:;
        int64_t $tmp529 = $tmp516 - j513.value;
        if ($tmp517) goto $l530; else goto $l531;
        $l530:;
        if ((uint64_t) $tmp529 >= 1) goto $l528; else goto $l520;
        $l531:;
        if ((uint64_t) $tmp529 > 1) goto $l528; else goto $l520;
        $l528:;
        j513.value += 1;
        goto $l518;
        $l520:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp534, i499);
        return ((panda$core$String$Index$nullable) { $tmp534, true });
    }
    $l507:;
    int64_t $tmp536 = $tmp502 - i499.value;
    if ($tmp503) goto $l537; else goto $l538;
    $l537:;
    if ((uint64_t) $tmp536 >= 1) goto $l535; else goto $l506;
    $l538:;
    if ((uint64_t) $tmp536 > 1) goto $l535; else goto $l506;
    $l535:;
    i499.value += 1;
    goto $l504;
    $l506:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp541 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp542 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp541);
    return $tmp542;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos544;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp547;
    panda$core$Range$LTpanda$core$Int64$GT $tmp566;
    panda$core$String$Index $tmp588;
    panda$core$Bit $tmp543 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp543.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp545 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp546 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp545);
    startPos544 = $tmp546;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp547, startPos544, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp549 = $tmp547.start.value;
    panda$core$Int64 i548 = { $tmp549 };
    int64_t $tmp551 = $tmp547.end.value;
    int64_t $tmp552 = $tmp547.step.value;
    bool $tmp553 = $tmp547.inclusive.value;
    bool $tmp560 = $tmp552 > 0;
    if ($tmp560) goto $l558; else goto $l559;
    $l558:;
    if ($tmp553) goto $l561; else goto $l562;
    $l561:;
    if ($tmp549 <= $tmp551) goto $l554; else goto $l556;
    $l562:;
    if ($tmp549 < $tmp551) goto $l554; else goto $l556;
    $l559:;
    if ($tmp553) goto $l563; else goto $l564;
    $l563:;
    if ($tmp549 >= $tmp551) goto $l554; else goto $l556;
    $l564:;
    if ($tmp549 > $tmp551) goto $l554; else goto $l556;
    $l554:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp566, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp568 = $tmp566.min.value;
        panda$core$Int64 j567 = { $tmp568 };
        int64_t $tmp570 = $tmp566.max.value;
        bool $tmp571 = $tmp566.inclusive.value;
        if ($tmp571) goto $l578; else goto $l579;
        $l578:;
        if ($tmp568 <= $tmp570) goto $l572; else goto $l574;
        $l579:;
        if ($tmp568 < $tmp570) goto $l572; else goto $l574;
        $l572:;
        {
            panda$core$Int64 $tmp580 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i548, j567);
            panda$core$Bit $tmp581 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp580.value], p_s->data[j567.value]);
            if ($tmp581.value) {
            {
                goto $l557;
            }
            }
        }
        $l575:;
        int64_t $tmp583 = $tmp570 - j567.value;
        if ($tmp571) goto $l584; else goto $l585;
        $l584:;
        if ((uint64_t) $tmp583 >= 1) goto $l582; else goto $l574;
        $l585:;
        if ((uint64_t) $tmp583 > 1) goto $l582; else goto $l574;
        $l582:;
        j567.value += 1;
        goto $l572;
        $l574:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp588, i548);
        return ((panda$core$String$Index$nullable) { $tmp588, true });
    }
    $l557:;
    if ($tmp560) goto $l590; else goto $l591;
    $l590:;
    int64_t $tmp592 = $tmp551 - i548.value;
    if ($tmp553) goto $l593; else goto $l594;
    $l593:;
    if ((uint64_t) $tmp592 >= $tmp552) goto $l589; else goto $l556;
    $l594:;
    if ((uint64_t) $tmp592 > $tmp552) goto $l589; else goto $l556;
    $l591:;
    int64_t $tmp596 = i548.value - $tmp551;
    if ($tmp553) goto $l597; else goto $l598;
    $l597:;
    if ((uint64_t) $tmp596 >= -$tmp552) goto $l589; else goto $l556;
    $l598:;
    if ((uint64_t) $tmp596 > -$tmp552) goto $l589; else goto $l556;
    $l589:;
    i548.value += $tmp552;
    goto $l554;
    $l556:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result600;
    panda$core$String$Index index603;
    panda$core$String$Index$nullable nextIndex607;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp609;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp611;
    panda$core$String$Index $tmp613;
    panda$core$String* tmp7615;
    panda$core$MutableString* $tmp601 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp601->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp601->refCount.value = 1;
    panda$core$MutableString$init($tmp601);
    result600 = $tmp601;
    panda$core$String$Index $tmp604 = panda$core$String$start$R$panda$core$String$Index(self);
    index603 = $tmp604;
    $l605:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp608 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index603);
        nextIndex607 = $tmp608;
        if (((panda$core$Bit) { !nextIndex607.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp609, ((panda$core$String$Index$nullable) { index603, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp610 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp609);
            panda$core$MutableString$append$panda$core$String(result600, $tmp610);
            goto $l606;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp611, index603, ((panda$core$String$Index) nextIndex607.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp612 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp611);
        panda$core$MutableString$append$panda$core$String(result600, $tmp612);
        panda$core$MutableString$append$panda$core$String(result600, p_replacement);
        panda$core$Int64 $tmp614 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex607.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp613, $tmp614);
        index603 = $tmp613;
    }
    }
    $l606:;
    {
        panda$core$String* $tmp616 = panda$core$MutableString$finish$R$panda$core$String(result600);
        tmp7615 = $tmp616;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result600));
        return tmp7615;
    }
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp617;
    panda$core$String$Index$init$panda$core$Int64(&$tmp617, ((panda$core$Int64) { 0 }));
    return $tmp617;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp618;
    panda$core$String$Index$init$panda$core$Int64(&$tmp618, self->_length);
    return $tmp618;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c620;
    panda$core$String$Index $tmp623;
    panda$core$String$Index $tmp626;
    panda$core$String$Index $tmp629;
    panda$core$String$Index $tmp631;
    panda$core$Bit $tmp619 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp619.value);
    int64_t $tmp621 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c620 = $tmp621;
    bool $tmp622 = c620 >= 240;
    if (((panda$core$Bit) { $tmp622 }).value) {
    {
        panda$core$Int64 $tmp624 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp623, $tmp624);
        return $tmp623;
    }
    }
    bool $tmp625 = c620 >= 224;
    if (((panda$core$Bit) { $tmp625 }).value) {
    {
        panda$core$Int64 $tmp627 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp626, $tmp627);
        return $tmp626;
    }
    }
    bool $tmp628 = c620 >= 192;
    if (((panda$core$Bit) { $tmp628 }).value) {
    {
        panda$core$Int64 $tmp630 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp629, $tmp630);
        return $tmp629;
    }
    }
    panda$core$Int64 $tmp632 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp631, $tmp632);
    return $tmp631;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue634;
    panda$core$String$Index $tmp645;
    panda$core$Bit $tmp633 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp633.value);
    panda$core$Int64 $tmp635 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue634 = $tmp635;
    $l636:;
    int64_t $tmp639 = ((int64_t) self->data[newValue634.value].value) & 255;
    bool $tmp640 = $tmp639 >= 128;
    bool $tmp638 = $tmp640;
    if (!$tmp638) goto $l641;
    int64_t $tmp642 = ((int64_t) self->data[newValue634.value].value) & 255;
    bool $tmp643 = $tmp642 < 192;
    $tmp638 = $tmp643;
    $l641:;
    if (!((panda$core$Bit) { $tmp638 }).value) goto $l637;
    {
        panda$core$Int64 $tmp644 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue634, ((panda$core$Int64) { 1 }));
        newValue634 = $tmp644;
    }
    goto $l636;
    $l637:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp645, newValue634);
    return $tmp645;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result646;
    panda$core$Range$LTpanda$core$Int64$GT $tmp648;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp669;
    result646 = p_index;
    panda$core$Bit $tmp647 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp647.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp648, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp650 = $tmp648.min.value;
        panda$core$Int64 i649 = { $tmp650 };
        int64_t $tmp652 = $tmp648.max.value;
        bool $tmp653 = $tmp648.inclusive.value;
        if ($tmp653) goto $l660; else goto $l661;
        $l660:;
        if ($tmp650 <= $tmp652) goto $l654; else goto $l656;
        $l661:;
        if ($tmp650 < $tmp652) goto $l654; else goto $l656;
        $l654:;
        {
            panda$core$String$Index $tmp662 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result646);
            result646 = $tmp662;
        }
        $l657:;
        int64_t $tmp664 = $tmp652 - i649.value;
        if ($tmp653) goto $l665; else goto $l666;
        $l665:;
        if ((uint64_t) $tmp664 >= 1) goto $l663; else goto $l656;
        $l666:;
        if ((uint64_t) $tmp664 > 1) goto $l663; else goto $l656;
        $l663:;
        i649.value += 1;
        goto $l654;
        $l656:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp669, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp671 = $tmp669.start.value;
        panda$core$Int64 i670 = { $tmp671 };
        int64_t $tmp673 = $tmp669.end.value;
        int64_t $tmp674 = $tmp669.step.value;
        bool $tmp675 = $tmp669.inclusive.value;
        bool $tmp682 = $tmp674 > 0;
        if ($tmp682) goto $l680; else goto $l681;
        $l680:;
        if ($tmp675) goto $l683; else goto $l684;
        $l683:;
        if ($tmp671 <= $tmp673) goto $l676; else goto $l678;
        $l684:;
        if ($tmp671 < $tmp673) goto $l676; else goto $l678;
        $l681:;
        if ($tmp675) goto $l685; else goto $l686;
        $l685:;
        if ($tmp671 >= $tmp673) goto $l676; else goto $l678;
        $l686:;
        if ($tmp671 > $tmp673) goto $l676; else goto $l678;
        $l676:;
        {
            panda$core$String$Index $tmp688 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result646);
            result646 = $tmp688;
        }
        $l679:;
        if ($tmp682) goto $l690; else goto $l691;
        $l690:;
        int64_t $tmp692 = $tmp673 - i670.value;
        if ($tmp675) goto $l693; else goto $l694;
        $l693:;
        if ((uint64_t) $tmp692 >= $tmp674) goto $l689; else goto $l678;
        $l694:;
        if ((uint64_t) $tmp692 > $tmp674) goto $l689; else goto $l678;
        $l691:;
        int64_t $tmp696 = i670.value - $tmp673;
        if ($tmp675) goto $l697; else goto $l698;
        $l697:;
        if ((uint64_t) $tmp696 >= -$tmp674) goto $l689; else goto $l678;
        $l698:;
        if ((uint64_t) $tmp696 > -$tmp674) goto $l689; else goto $l678;
        $l689:;
        i670.value += $tmp674;
        goto $l676;
        $l678:;
    }
    }
    return result646;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp700;
    panda$core$Char32$init$panda$core$Int32(&$tmp700, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp701 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp700);
    return $tmp701;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp702 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp703 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp702, p_width);
    if ($tmp703.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp704 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp705 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp704);
    panda$core$String* $tmp706 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp705);
    panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp706);
    return $tmp707;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp708;
    panda$core$Char32$init$panda$core$Int32(&$tmp708, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp709 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp708);
    return $tmp709;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp710 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp711 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp710, p_width);
    if ($tmp711.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp712 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp713 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp712);
    panda$core$String* $tmp714 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp713);
    panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, self);
    return $tmp715;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp716;
    panda$core$Char32$init$panda$core$Int32(&$tmp716, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp717 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp716);
    return $tmp717;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 pad720;
    panda$core$Int64 left723;
    panda$core$Int64 right725;
    panda$core$Int64 $tmp718 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp719 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp718, p_width);
    if ($tmp719.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp721 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp722 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp721);
    pad720 = $tmp722;
    panda$core$Int64 $tmp724 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad720, ((panda$core$Int64) { 2 }));
    left723 = $tmp724;
    panda$core$Int64 $tmp726 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad720, left723);
    right725 = $tmp726;
    panda$core$String* $tmp727 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left723);
    panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, self);
    panda$core$String* $tmp729 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right725);
    panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, $tmp729);
    return $tmp730;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp731 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp731;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result732;
    panda$core$String$Index index735;
    panda$core$String$Index$nullable nextIndex739;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp748;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp750;
    panda$core$String$Index $tmp752;
    panda$collections$Array* tmp8754;
    panda$collections$Array* $tmp733 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp733->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp733->refCount.value = 1;
    panda$collections$Array$init($tmp733);
    result732 = $tmp733;
    panda$core$String$Index $tmp736 = panda$core$String$start$R$panda$core$String$Index(self);
    index735 = $tmp736;
    $l737:;
    while (true) {
    {
        memset(&nextIndex739, 0, sizeof(nextIndex739));
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp740.value) {
        {
            panda$core$String$Index $tmp741 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index735);
            nextIndex739 = ((panda$core$String$Index$nullable) { $tmp741, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp742 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index735);
            nextIndex739 = $tmp742;
        }
        }
        bool $tmp743 = ((panda$core$Bit) { !nextIndex739.nonnull }).value;
        if ($tmp743) goto $l744;
        panda$core$Int64 $tmp745 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result732->count, $tmp745);
        $tmp743 = $tmp746.value;
        $l744:;
        panda$core$Bit $tmp747 = { $tmp743 };
        if ($tmp747.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp748, ((panda$core$String$Index$nullable) { index735, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp749 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp748);
            panda$collections$Array$add$panda$collections$Array$T(result732, ((panda$core$Object*) $tmp749));
            goto $l738;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp750, index735, ((panda$core$String$Index) nextIndex739.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp751 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp750);
        panda$collections$Array$add$panda$collections$Array$T(result732, ((panda$core$Object*) $tmp751));
        panda$core$Int64 $tmp753 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex739.value).value, p_delimiter->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp752, $tmp753);
        index735 = $tmp752;
    }
    }
    $l738:;
    {
        tmp8754 = result732;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result732));
        return tmp8754;
    }
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

