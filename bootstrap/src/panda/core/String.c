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
typedef panda$core$String* (*$fn167)(panda$core$Object*);
typedef panda$core$String* (*$fn195)(panda$core$Object*);

static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Int64 tmp150;
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
        panda$core$Object* $tmp49 = $tmp47(iter36);
    }
    goto $l38;
    $l39:;
    {
        tmp150 = count35;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter36));
        return tmp150;
    }
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    return self->_length;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp52;
    panda$core$Bit $tmp51 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp51.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp52, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp54 = $tmp52.min.value;
    panda$core$Int64 i53 = { $tmp54 };
    int64_t $tmp56 = $tmp52.max.value;
    bool $tmp57 = $tmp52.inclusive.value;
    if ($tmp57) goto $l64; else goto $l65;
    $l64:;
    if ($tmp54 <= $tmp56) goto $l58; else goto $l60;
    $l65:;
    if ($tmp54 < $tmp56) goto $l58; else goto $l60;
    $l58:;
    {
        panda$core$Bit $tmp66 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i53.value], p_other->data[i53.value]);
        if ($tmp66.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l61:;
    int64_t $tmp68 = $tmp56 - i53.value;
    if ($tmp57) goto $l69; else goto $l70;
    $l69:;
    if ((uint64_t) $tmp68 >= 1) goto $l67; else goto $l60;
    $l70:;
    if ((uint64_t) $tmp68 > 1) goto $l67; else goto $l60;
    $l67:;
    i53.value += 1;
    goto $l58;
    $l60:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp74;
    panda$core$Bit $tmp73 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp73.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp74, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp76 = $tmp74.min.value;
    panda$core$Int64 i75 = { $tmp76 };
    int64_t $tmp78 = $tmp74.max.value;
    bool $tmp79 = $tmp74.inclusive.value;
    if ($tmp79) goto $l86; else goto $l87;
    $l86:;
    if ($tmp76 <= $tmp78) goto $l80; else goto $l82;
    $l87:;
    if ($tmp76 < $tmp78) goto $l80; else goto $l82;
    $l80:;
    {
        panda$core$Int64 $tmp88 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp89 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp88, i75);
        panda$core$Bit $tmp90 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp89.value], p_other->data[i75.value]);
        if ($tmp90.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l83:;
    int64_t $tmp92 = $tmp78 - i75.value;
    if ($tmp79) goto $l93; else goto $l94;
    $l93:;
    if ((uint64_t) $tmp92 >= 1) goto $l91; else goto $l82;
    $l94:;
    if ((uint64_t) $tmp92 > 1) goto $l91; else goto $l82;
    $l91:;
    i75.value += 1;
    goto $l80;
    $l82:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start98;
    panda$core$Int64 end107;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp117;
    panda$core$String$Index $tmp118;
    panda$core$String$Index $tmp119;
    panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp97.value) {
    {
        return self;
    }
    }
    start98 = ((panda$core$Int64) { 0 });
    $l99:;
    panda$core$Bit $tmp102 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start98, self->_length);
    bool $tmp101 = $tmp102.value;
    if (!$tmp101) goto $l103;
    panda$core$Bit $tmp104 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start98.value]);
    $tmp101 = $tmp104.value;
    $l103:;
    panda$core$Bit $tmp105 = { $tmp101 };
    if (!$tmp105.value) goto $l100;
    {
        panda$core$Int64 $tmp106 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start98, ((panda$core$Int64) { 1 }));
        start98 = $tmp106;
    }
    goto $l99;
    $l100:;
    panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end107 = $tmp108;
    $l109:;
    panda$core$Bit $tmp112 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end107, start98);
    bool $tmp111 = $tmp112.value;
    if (!$tmp111) goto $l113;
    panda$core$Bit $tmp114 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end107.value]);
    $tmp111 = $tmp114.value;
    $l113:;
    panda$core$Bit $tmp115 = { $tmp111 };
    if (!$tmp115.value) goto $l110;
    {
        panda$core$Int64 $tmp116 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end107, ((panda$core$Int64) { 1 }));
        end107 = $tmp116;
    }
    goto $l109;
    $l110:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp118, start98);
    panda$core$String$Index$init$panda$core$Int64(&$tmp119, end107);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp117, $tmp118, $tmp119, ((panda$core$Bit) { true }));
    panda$core$String* $tmp120 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp117);
    return $tmp120;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp123;
    panda$core$Range$LTpanda$core$Int64$GT $tmp143;
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result121 = ((panda$core$Char8*) pandaZAlloc($tmp122.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp123, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp125 = $tmp123.min.value;
    panda$core$Int64 i124 = { $tmp125 };
    int64_t $tmp127 = $tmp123.max.value;
    bool $tmp128 = $tmp123.inclusive.value;
    if ($tmp128) goto $l135; else goto $l136;
    $l135:;
    if ($tmp125 <= $tmp127) goto $l129; else goto $l131;
    $l136:;
    if ($tmp125 < $tmp127) goto $l129; else goto $l131;
    $l129:;
    {
        result121[i124.value] = self->data[i124.value];
    }
    $l132:;
    int64_t $tmp138 = $tmp127 - i124.value;
    if ($tmp128) goto $l139; else goto $l140;
    $l139:;
    if ((uint64_t) $tmp138 >= 1) goto $l137; else goto $l131;
    $l140:;
    if ((uint64_t) $tmp138 > 1) goto $l137; else goto $l131;
    $l137:;
    i124.value += 1;
    goto $l129;
    $l131:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp143, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp145 = $tmp143.min.value;
    panda$core$Int64 i144 = { $tmp145 };
    int64_t $tmp147 = $tmp143.max.value;
    bool $tmp148 = $tmp143.inclusive.value;
    if ($tmp148) goto $l155; else goto $l156;
    $l155:;
    if ($tmp145 <= $tmp147) goto $l149; else goto $l151;
    $l156:;
    if ($tmp145 < $tmp147) goto $l149; else goto $l151;
    $l149:;
    {
        panda$core$Int64 $tmp157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i144);
        result121[$tmp157.value] = p_other->data[i144.value];
    }
    $l152:;
    int64_t $tmp159 = $tmp147 - i144.value;
    if ($tmp148) goto $l160; else goto $l161;
    $l160:;
    if ((uint64_t) $tmp159 >= 1) goto $l158; else goto $l151;
    $l161:;
    if ((uint64_t) $tmp159 > 1) goto $l158; else goto $l151;
    $l158:;
    i144.value += 1;
    goto $l149;
    $l151:;
    panda$core$String* $tmp164 = (panda$core$String*) pandaZAlloc(48);
    $tmp164->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp164->refCount.value = 1;
    panda$core$Int64 $tmp166 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp164, result121, $tmp166);
    return $tmp164;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp168 = (($fn167) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp168);
    return $tmp169;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result170;
    panda$core$Range$LTpanda$core$Int64$GT $tmp173;
    panda$core$String* tmp2193;
    panda$core$MutableString* $tmp171 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp171->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp171->refCount.value = 1;
    panda$core$MutableString$init($tmp171);
    result170 = $tmp171;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp173, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp175 = $tmp173.min.value;
    panda$core$Int64 i174 = { $tmp175 };
    int64_t $tmp177 = $tmp173.max.value;
    bool $tmp178 = $tmp173.inclusive.value;
    if ($tmp178) goto $l185; else goto $l186;
    $l185:;
    if ($tmp175 <= $tmp177) goto $l179; else goto $l181;
    $l186:;
    if ($tmp175 < $tmp177) goto $l179; else goto $l181;
    $l179:;
    {
        panda$core$MutableString$append$panda$core$String(result170, self);
    }
    $l182:;
    int64_t $tmp188 = $tmp177 - i174.value;
    if ($tmp178) goto $l189; else goto $l190;
    $l189:;
    if ((uint64_t) $tmp188 >= 1) goto $l187; else goto $l181;
    $l190:;
    if ((uint64_t) $tmp188 > 1) goto $l187; else goto $l181;
    $l187:;
    i174.value += 1;
    goto $l179;
    $l181:;
    {
        panda$core$String* $tmp194 = panda$core$MutableString$finish$R$panda$core$String(result170);
        tmp2193 = $tmp194;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result170));
        return tmp2193;
    }
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp196 = (($fn195) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, p_s);
    return $tmp197;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp199;
    panda$core$Bit $tmp198 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp198.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp199, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp201 = $tmp199.min.value;
    panda$core$Int64 i200 = { $tmp201 };
    int64_t $tmp203 = $tmp199.max.value;
    bool $tmp204 = $tmp199.inclusive.value;
    if ($tmp204) goto $l211; else goto $l212;
    $l211:;
    if ($tmp201 <= $tmp203) goto $l205; else goto $l207;
    $l212:;
    if ($tmp201 < $tmp203) goto $l205; else goto $l207;
    $l205:;
    {
        panda$core$Bit $tmp213 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i200.value], p_other->data[i200.value]);
        if ($tmp213.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l208:;
    int64_t $tmp215 = $tmp203 - i200.value;
    if ($tmp204) goto $l216; else goto $l217;
    $l216:;
    if ((uint64_t) $tmp215 >= 1) goto $l214; else goto $l207;
    $l217:;
    if ((uint64_t) $tmp215 > 1) goto $l214; else goto $l207;
    $l214:;
    i200.value += 1;
    goto $l205;
    $l207:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp220 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp220);
    return $tmp221;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx222;
    panda$core$Char8 c223;
    panda$core$Int32 result224;
    panda$core$Char32 $tmp228;
    panda$core$Char32 $tmp239;
    panda$core$Char32 $tmp255;
    panda$core$Char32 $tmp274;
    idx222 = p_index.value;
    c223 = self->data[idx222.value];
    panda$core$Int32 $tmp225 = panda$core$Char8$convert$R$panda$core$Int32(c223);
    result224 = $tmp225;
    int64_t $tmp226 = ((int64_t) c223.value) & 255;
    bool $tmp227 = $tmp226 < 192;
    if (((panda$core$Bit) { $tmp227 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp228, result224);
        return $tmp228;
    }
    }
    int64_t $tmp229 = ((int64_t) c223.value) & 255;
    bool $tmp230 = $tmp229 < 224;
    if (((panda$core$Bit) { $tmp230 }).value) {
    {
        panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp232 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp231, self->_length);
        PANDA_ASSERT($tmp232.value);
        panda$core$Int32 $tmp233 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result224, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp234 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp233, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp236 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp235.value]);
        panda$core$Int32 $tmp237 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp236, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp238 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp234, $tmp237);
        result224 = $tmp238;
        panda$core$Char32$init$panda$core$Int32(&$tmp239, result224);
        return $tmp239;
    }
    }
    int64_t $tmp240 = ((int64_t) c223.value) & 255;
    bool $tmp241 = $tmp240 < 240;
    if (((panda$core$Bit) { $tmp241 }).value) {
    {
        panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp243 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp242, self->_length);
        PANDA_ASSERT($tmp243.value);
        panda$core$Int32 $tmp244 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result224, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp245 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp244, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp246 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp247 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp246.value]);
        panda$core$Int32 $tmp248 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp247, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp249 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp248, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp250 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp245, $tmp249);
        panda$core$Int64 $tmp251 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp252 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp251.value]);
        panda$core$Int32 $tmp253 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp252, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp254 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp250, $tmp253);
        result224 = $tmp254;
        panda$core$Char32$init$panda$core$Int32(&$tmp255, result224);
        return $tmp255;
    }
    }
    panda$core$Int64 $tmp256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp257 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp256, self->_length);
    PANDA_ASSERT($tmp257.value);
    panda$core$Int32 $tmp258 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result224, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp259 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp258, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp260 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp261 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp260.value]);
    panda$core$Int32 $tmp262 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp261, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp263 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp262, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp264 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp259, $tmp263);
    panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp266 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp265.value]);
    panda$core$Int32 $tmp267 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp266, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp268 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp267, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp269 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp264, $tmp268);
    panda$core$Int64 $tmp270 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx222, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp271 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp270.value]);
    panda$core$Int32 $tmp272 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp271, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp273 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp269, $tmp272);
    result224 = $tmp273;
    panda$core$Char32$init$panda$core$Int32(&$tmp274, result224);
    return $tmp274;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp275 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp276 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp275, p_index);
    panda$core$Char32 $tmp277 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp276);
    return $tmp277;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp278 = (panda$core$String*) pandaZAlloc(48);
    $tmp278->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp278->refCount.value = 1;
    panda$core$Int64 $tmp280 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp278, (self->data + p_r.min.value.value), $tmp280, self);
    return $tmp278;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min281;
    panda$core$String$Index max283;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp286;
    memset(&min281, 0, sizeof(min281));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min281 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp282 = panda$core$String$start$R$panda$core$String$Index(self);
        min281 = $tmp282;
    }
    }
    memset(&max283, 0, sizeof(max283));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max283 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp284 = panda$core$String$end$R$panda$core$String$Index(self);
        max283 = $tmp284;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp285 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max283);
            max283 = $tmp285;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp286, min281, max283, p_r.inclusive);
    panda$core$String* $tmp287 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp286);
    return $tmp287;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current288;
    panda$core$MutableString* result289;
    panda$core$Int64 max292;
    panda$core$Char8 c297;
    panda$core$String* tmp3308;
    current288 = p_r.min.value;
    panda$core$MutableString* $tmp290 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp290->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp290->refCount.value = 1;
    panda$core$MutableString$init($tmp290);
    result289 = $tmp290;
    max292 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp293 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max292, ((panda$core$Int64) { 1 }));
        max292 = $tmp293;
    }
    }
    $l294:;
    panda$core$Bit $tmp296 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current288, max292);
    if (!$tmp296.value) goto $l295;
    {
        c297 = self->data[current288.value];
        panda$core$MutableString$append$panda$core$Char8(result289, c297);
        panda$core$Int64 $tmp298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current288, ((panda$core$Int64) { 1 }));
        current288 = $tmp298;
        int64_t $tmp299 = ((int64_t) c297.value) & 255;
        bool $tmp300 = $tmp299 >= 192;
        if (((panda$core$Bit) { $tmp300 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result289, self->data[current288.value]);
            panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current288, ((panda$core$Int64) { 1 }));
            current288 = $tmp301;
        }
        }
        int64_t $tmp302 = ((int64_t) c297.value) & 255;
        bool $tmp303 = $tmp302 >= 224;
        if (((panda$core$Bit) { $tmp303 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result289, self->data[current288.value]);
            panda$core$Int64 $tmp304 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current288, ((panda$core$Int64) { 1 }));
            current288 = $tmp304;
        }
        }
        int64_t $tmp305 = ((int64_t) c297.value) & 255;
        bool $tmp306 = $tmp305 >= 240;
        if (((panda$core$Bit) { $tmp306 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result289, self->data[current288.value]);
            panda$core$Int64 $tmp307 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current288, ((panda$core$Int64) { 1 }));
            current288 = $tmp307;
        }
        }
    }
    goto $l294;
    $l295:;
    {
        panda$core$String* $tmp309 = panda$core$MutableString$finish$R$panda$core$String(result289);
        tmp3308 = $tmp309;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result289));
        return tmp3308;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min312;
    panda$core$String$Index max314;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp317;
    panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp310.value) {
    {
        return &$s311;
    }
    }
    memset(&min312, 0, sizeof(min312));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min312 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp313 = panda$core$String$start$R$panda$core$String$Index(self);
        min312 = $tmp313;
    }
    }
    memset(&max314, 0, sizeof(max314));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max314 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp315 = panda$core$String$end$R$panda$core$String$Index(self);
        max314 = $tmp315;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp316 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max314);
            max314 = $tmp316;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp317, min312, max314, p_r.inclusive);
    panda$core$String* $tmp318 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp317);
    return $tmp318;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step321;
    panda$core$Int64 current322;
    panda$core$Int64 end327;
    panda$core$MutableString* result331;
    panda$core$Char8 c338;
    panda$core$Range$LTpanda$core$Int64$GT $tmp349;
    panda$core$String* tmp4364;
    panda$core$String$Index $tmp366;
    panda$core$Char8 c378;
    panda$core$Int64 old379;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp399;
    panda$core$String* tmp5419;
    panda$core$String$Index $tmp421;
    panda$core$Char8 c445;
    panda$core$String* tmp6455;
    panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp319.value) {
    {
        return &$s320;
    }
    }
    step321 = p_r.step;
    memset(&current322, 0, sizeof(current322));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current322 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp323 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step321, ((panda$core$Int64) { 0 }));
    if ($tmp323.value) {
    {
        panda$core$String$Index $tmp324 = panda$core$String$start$R$panda$core$String$Index(self);
        current322 = $tmp324.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp325 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp326 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp325);
        current322 = $tmp326.value;
    }
    }
    }
    memset(&end327, 0, sizeof(end327));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end327 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp328 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step321, ((panda$core$Int64) { 0 }));
    if ($tmp328.value) {
    {
        panda$core$String$Index $tmp329 = panda$core$String$end$R$panda$core$String$Index(self);
        end327 = $tmp329.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp330 = panda$core$String$start$R$panda$core$String$Index(self);
        end327 = $tmp330.value;
    }
    }
    }
    panda$core$MutableString* $tmp332 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp332->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp332->refCount.value = 1;
    panda$core$MutableString$init($tmp332);
    result331 = $tmp332;
    panda$core$Bit $tmp334 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp334.value) {
    {
        $l335:;
        panda$core$Bit $tmp337 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current322, end327);
        if (!$tmp337.value) goto $l336;
        {
            c338 = self->data[current322.value];
            panda$core$MutableString$append$panda$core$Char8(result331, c338);
            panda$core$Int64 $tmp339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
            current322 = $tmp339;
            int64_t $tmp340 = ((int64_t) c338.value) & 255;
            bool $tmp341 = $tmp340 >= 192;
            if (((panda$core$Bit) { $tmp341 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
                panda$core$Int64 $tmp342 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
                current322 = $tmp342;
            }
            }
            int64_t $tmp343 = ((int64_t) c338.value) & 255;
            bool $tmp344 = $tmp343 >= 224;
            if (((panda$core$Bit) { $tmp344 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
                panda$core$Int64 $tmp345 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
                current322 = $tmp345;
            }
            }
            int64_t $tmp346 = ((int64_t) c338.value) & 255;
            bool $tmp347 = $tmp346 >= 240;
            if (((panda$core$Bit) { $tmp347 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
                panda$core$Int64 $tmp348 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
                current322 = $tmp348;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp349, ((panda$core$Int64) { 1 }), step321, ((panda$core$Bit) { false }));
            int64_t $tmp351 = $tmp349.min.value;
            panda$core$Int64 i350 = { $tmp351 };
            int64_t $tmp353 = $tmp349.max.value;
            bool $tmp354 = $tmp349.inclusive.value;
            if ($tmp354) goto $l361; else goto $l362;
            $l361:;
            if ($tmp351 <= $tmp353) goto $l355; else goto $l357;
            $l362:;
            if ($tmp351 < $tmp353) goto $l355; else goto $l357;
            $l355:;
            {
                panda$core$Bit $tmp363 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current322, end327);
                if ($tmp363.value) {
                {
                    {
                        panda$core$String* $tmp365 = panda$core$MutableString$convert$R$panda$core$String(result331);
                        tmp4364 = $tmp365;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result331));
                        return tmp4364;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp366, current322);
                panda$core$String$Index $tmp367 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp366);
                current322 = $tmp367.value;
            }
            $l358:;
            int64_t $tmp369 = $tmp353 - i350.value;
            if ($tmp354) goto $l370; else goto $l371;
            $l370:;
            if ((uint64_t) $tmp369 >= 1) goto $l368; else goto $l357;
            $l371:;
            if ((uint64_t) $tmp369 > 1) goto $l368; else goto $l357;
            $l368:;
            i350.value += 1;
            goto $l355;
            $l357:;
        }
        goto $l335;
        $l336:;
    }
    }
    else {
    {
        panda$core$Bit $tmp374 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp374.value);
        $l375:;
        panda$core$Bit $tmp377 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current322, end327);
        if (!$tmp377.value) goto $l376;
        {
            c378 = self->data[current322.value];
            panda$core$MutableString$append$panda$core$Char8(result331, c378);
            old379 = current322;
            panda$core$Int64 $tmp380 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
            current322 = $tmp380;
            int64_t $tmp381 = ((int64_t) c378.value) & 255;
            bool $tmp382 = $tmp381 >= 192;
            if (((panda$core$Bit) { $tmp382 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
                panda$core$Int64 $tmp383 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
                current322 = $tmp383;
            }
            }
            int64_t $tmp384 = ((int64_t) c378.value) & 255;
            bool $tmp385 = $tmp384 >= 224;
            if (((panda$core$Bit) { $tmp385 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
                panda$core$Int64 $tmp386 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
                current322 = $tmp386;
            }
            }
            int64_t $tmp387 = ((int64_t) c378.value) & 255;
            bool $tmp388 = $tmp387 >= 240;
            if (((panda$core$Bit) { $tmp388 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
            }
            }
            panda$core$Int64 $tmp389 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old379, ((panda$core$Int64) { 1 }));
            current322 = $tmp389;
            $l390:;
            int64_t $tmp393 = ((int64_t) self->data[current322.value].value) & 255;
            bool $tmp394 = $tmp393 >= 128;
            bool $tmp392 = $tmp394;
            if (!$tmp392) goto $l395;
            int64_t $tmp396 = ((int64_t) self->data[current322.value].value) & 255;
            bool $tmp397 = $tmp396 < 192;
            $tmp392 = $tmp397;
            $l395:;
            if (!((panda$core$Bit) { $tmp392 }).value) goto $l391;
            {
                panda$core$Int64 $tmp398 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
                current322 = $tmp398;
            }
            goto $l390;
            $l391:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp399, ((panda$core$Int64) { -1 }), step321, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp401 = $tmp399.start.value;
            panda$core$Int64 i400 = { $tmp401 };
            int64_t $tmp403 = $tmp399.end.value;
            int64_t $tmp404 = $tmp399.step.value;
            bool $tmp405 = $tmp399.inclusive.value;
            bool $tmp412 = $tmp404 > 0;
            if ($tmp412) goto $l410; else goto $l411;
            $l410:;
            if ($tmp405) goto $l413; else goto $l414;
            $l413:;
            if ($tmp401 <= $tmp403) goto $l406; else goto $l408;
            $l414:;
            if ($tmp401 < $tmp403) goto $l406; else goto $l408;
            $l411:;
            if ($tmp405) goto $l415; else goto $l416;
            $l415:;
            if ($tmp401 >= $tmp403) goto $l406; else goto $l408;
            $l416:;
            if ($tmp401 > $tmp403) goto $l406; else goto $l408;
            $l406:;
            {
                panda$core$Bit $tmp418 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current322, end327);
                if ($tmp418.value) {
                {
                    {
                        panda$core$String* $tmp420 = panda$core$MutableString$convert$R$panda$core$String(result331);
                        tmp5419 = $tmp420;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result331));
                        return tmp5419;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp421, current322);
                panda$core$String$Index $tmp422 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp421);
                current322 = $tmp422.value;
            }
            $l409:;
            if ($tmp412) goto $l424; else goto $l425;
            $l424:;
            int64_t $tmp426 = $tmp403 - i400.value;
            if ($tmp405) goto $l427; else goto $l428;
            $l427:;
            if ((uint64_t) $tmp426 >= $tmp404) goto $l423; else goto $l408;
            $l428:;
            if ((uint64_t) $tmp426 > $tmp404) goto $l423; else goto $l408;
            $l425:;
            int64_t $tmp430 = i400.value - $tmp403;
            if ($tmp405) goto $l431; else goto $l432;
            $l431:;
            if ((uint64_t) $tmp430 >= -$tmp404) goto $l423; else goto $l408;
            $l432:;
            if ((uint64_t) $tmp430 > -$tmp404) goto $l423; else goto $l408;
            $l423:;
            i400.value += $tmp404;
            goto $l406;
            $l408:;
        }
        goto $l375;
        $l376:;
    }
    }
    bool $tmp436 = p_r.inclusive.value;
    if ($tmp436) goto $l437;
    $tmp436 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l437:;
    panda$core$Bit $tmp438 = { $tmp436 };
    bool $tmp435 = $tmp438.value;
    if (!$tmp435) goto $l439;
    panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current322, end327);
    $tmp435 = $tmp440.value;
    $l439:;
    panda$core$Bit $tmp441 = { $tmp435 };
    bool $tmp434 = $tmp441.value;
    if (!$tmp434) goto $l442;
    panda$core$Bit $tmp443 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end327, self->_length);
    $tmp434 = $tmp443.value;
    $l442:;
    panda$core$Bit $tmp444 = { $tmp434 };
    if ($tmp444.value) {
    {
        c445 = self->data[current322.value];
        panda$core$MutableString$append$panda$core$Char8(result331, c445);
        panda$core$Int64 $tmp446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
        current322 = $tmp446;
        int64_t $tmp447 = ((int64_t) c445.value) & 255;
        bool $tmp448 = $tmp447 >= 192;
        if (((panda$core$Bit) { $tmp448 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
            panda$core$Int64 $tmp449 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
            current322 = $tmp449;
        }
        }
        int64_t $tmp450 = ((int64_t) c445.value) & 255;
        bool $tmp451 = $tmp450 >= 224;
        if (((panda$core$Bit) { $tmp451 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
            panda$core$Int64 $tmp452 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current322, ((panda$core$Int64) { 1 }));
            current322 = $tmp452;
        }
        }
        int64_t $tmp453 = ((int64_t) c445.value) & 255;
        bool $tmp454 = $tmp453 >= 240;
        if (((panda$core$Bit) { $tmp454 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result331, self->data[current322.value]);
        }
        }
    }
    }
    {
        panda$core$String* $tmp456 = panda$core$MutableString$finish$R$panda$core$String(result331);
        tmp6455 = $tmp456;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result331));
        return tmp6455;
    }
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
    panda$core$String$Index index604;
    panda$core$String$Index$nullable nextIndex608;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp610;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp612;
    panda$core$String$Index $tmp614;
    panda$core$String* tmp7616;
    panda$core$MutableString* $tmp602 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp602->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp602->refCount.value = 1;
    panda$core$MutableString$init($tmp602);
    result601 = $tmp602;
    panda$core$String$Index $tmp605 = panda$core$String$start$R$panda$core$String$Index(self);
    index604 = $tmp605;
    $l606:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp609 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index604);
        nextIndex608 = $tmp609;
        if (((panda$core$Bit) { !nextIndex608.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp610, ((panda$core$String$Index$nullable) { index604, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp611 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp610);
            panda$core$MutableString$append$panda$core$String(result601, $tmp611);
            goto $l607;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp612, index604, ((panda$core$String$Index) nextIndex608.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp613 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp612);
        panda$core$MutableString$append$panda$core$String(result601, $tmp613);
        panda$core$MutableString$append$panda$core$String(result601, p_replacement);
        panda$core$Int64 $tmp615 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex608.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp614, $tmp615);
        index604 = $tmp614;
    }
    }
    $l607:;
    {
        panda$core$String* $tmp617 = panda$core$MutableString$finish$R$panda$core$String(result601);
        tmp7616 = $tmp617;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result601));
        return tmp7616;
    }
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
    panda$core$String$Index index736;
    panda$core$String$Index$nullable nextIndex740;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp749;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp751;
    panda$core$String$Index $tmp753;
    panda$collections$Array* tmp8755;
    panda$collections$Array* $tmp734 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp734->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp734->refCount.value = 1;
    panda$collections$Array$init($tmp734);
    result733 = $tmp734;
    panda$core$String$Index $tmp737 = panda$core$String$start$R$panda$core$String$Index(self);
    index736 = $tmp737;
    $l738:;
    while (true) {
    {
        memset(&nextIndex740, 0, sizeof(nextIndex740));
        panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp741.value) {
        {
            panda$core$String$Index $tmp742 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index736);
            nextIndex740 = ((panda$core$String$Index$nullable) { $tmp742, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp743 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index736);
            nextIndex740 = $tmp743;
        }
        }
        bool $tmp744 = ((panda$core$Bit) { !nextIndex740.nonnull }).value;
        if ($tmp744) goto $l745;
        panda$core$Int64 $tmp746 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result733->count, $tmp746);
        $tmp744 = $tmp747.value;
        $l745:;
        panda$core$Bit $tmp748 = { $tmp744 };
        if ($tmp748.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp749, ((panda$core$String$Index$nullable) { index736, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp750 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp749);
            panda$collections$Array$add$panda$collections$Array$T(result733, ((panda$core$Object*) $tmp750));
            goto $l739;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp751, index736, ((panda$core$String$Index) nextIndex740.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp752 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp751);
        panda$collections$Array$add$panda$collections$Array$T(result733, ((panda$core$Object*) $tmp752));
        panda$core$Int64 $tmp754 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex740.value).value, p_delimiter->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp753, $tmp754);
        index736 = $tmp753;
    }
    }
    $l739:;
    {
        tmp8755 = result733;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result733));
        return tmp8755;
    }
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result757;
    panda$core$Int64 start758;
    panda$core$Char8 $tmp759;
    panda$core$Range$LTpanda$core$Int64$GT $tmp761;
    panda$core$Int64 digit775;
    panda$core$Char8 $tmp790;
    panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp756.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result757 = ((panda$core$Int64) { 0 });
    memset(&start758, 0, sizeof(start758));
    panda$core$Char8$init$panda$core$UInt8(&$tmp759, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp760 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp759);
    if ($tmp760.value) {
    {
        start758 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start758 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp761, start758, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp763 = $tmp761.min.value;
    panda$core$Int64 i762 = { $tmp763 };
    int64_t $tmp765 = $tmp761.max.value;
    bool $tmp766 = $tmp761.inclusive.value;
    if ($tmp766) goto $l773; else goto $l774;
    $l773:;
    if ($tmp763 <= $tmp765) goto $l767; else goto $l769;
    $l774:;
    if ($tmp763 < $tmp765) goto $l767; else goto $l769;
    $l767:;
    {
        panda$core$Int64 $tmp776 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i762.value].value) }), ((panda$core$Int64) { 48 }));
        digit775 = $tmp776;
        panda$core$Bit $tmp778 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit775, ((panda$core$Int64) { 0 }));
        bool $tmp777 = $tmp778.value;
        if ($tmp777) goto $l779;
        panda$core$Bit $tmp780 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit775, ((panda$core$Int64) { 9 }));
        $tmp777 = $tmp780.value;
        $l779:;
        panda$core$Bit $tmp781 = { $tmp777 };
        if ($tmp781.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp782 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result757, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp783 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp782, digit775);
        result757 = $tmp783;
    }
    $l770:;
    int64_t $tmp785 = $tmp765 - i762.value;
    if ($tmp766) goto $l786; else goto $l787;
    $l786:;
    if ((uint64_t) $tmp785 >= 1) goto $l784; else goto $l769;
    $l787:;
    if ((uint64_t) $tmp785 > 1) goto $l784; else goto $l769;
    $l784:;
    i762.value += 1;
    goto $l767;
    $l769:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp790, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp791 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp790);
    if ($tmp791.value) {
    {
        panda$core$Int64 $tmp792 = panda$core$Int64$$SUB$R$panda$core$Int64(result757);
        result757 = $tmp792;
    }
    }
    return ((panda$core$Int64$nullable) { result757, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result794;
    panda$core$Range$LTpanda$core$Int64$GT $tmp795;
    panda$core$UInt64 digit809;
    panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp793.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result794 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp795, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp797 = $tmp795.min.value;
    panda$core$Int64 i796 = { $tmp797 };
    int64_t $tmp799 = $tmp795.max.value;
    bool $tmp800 = $tmp795.inclusive.value;
    if ($tmp800) goto $l807; else goto $l808;
    $l807:;
    if ($tmp797 <= $tmp799) goto $l801; else goto $l803;
    $l808:;
    if ($tmp797 < $tmp799) goto $l801; else goto $l803;
    $l801:;
    {
        panda$core$UInt64 $tmp810 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i796.value].value) }), ((panda$core$UInt64) { 48 }));
        digit809 = $tmp810;
        panda$core$Bit $tmp812 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit809, ((panda$core$UInt64) { 0 }));
        bool $tmp811 = $tmp812.value;
        if ($tmp811) goto $l813;
        panda$core$Bit $tmp814 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit809, ((panda$core$UInt64) { 9 }));
        $tmp811 = $tmp814.value;
        $l813:;
        panda$core$Bit $tmp815 = { $tmp811 };
        if ($tmp815.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp816 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result794, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp817 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp816, digit809);
        result794 = $tmp817;
    }
    $l804:;
    int64_t $tmp819 = $tmp799 - i796.value;
    if ($tmp800) goto $l820; else goto $l821;
    $l820:;
    if ((uint64_t) $tmp819 >= 1) goto $l818; else goto $l803;
    $l821:;
    if ((uint64_t) $tmp819 > 1) goto $l818; else goto $l803;
    $l818:;
    i796.value += 1;
    goto $l801;
    $l803:;
    return ((panda$core$UInt64$nullable) { result794, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h825;
    panda$core$Range$LTpanda$core$Int64$GT $tmp826;
    panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp824.value) {
    {
        h825 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp826, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp828 = $tmp826.min.value;
        panda$core$Int64 i827 = { $tmp828 };
        int64_t $tmp830 = $tmp826.max.value;
        bool $tmp831 = $tmp826.inclusive.value;
        if ($tmp831) goto $l838; else goto $l839;
        $l838:;
        if ($tmp828 <= $tmp830) goto $l832; else goto $l834;
        $l839:;
        if ($tmp828 < $tmp830) goto $l832; else goto $l834;
        $l832:;
        {
            panda$core$Int64 $tmp840 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h825, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp841 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp840, ((panda$core$Int64) { ((int64_t) self->data[i827.value].value) }));
            h825 = $tmp841;
        }
        $l835:;
        int64_t $tmp843 = $tmp830 - i827.value;
        if ($tmp831) goto $l844; else goto $l845;
        $l844:;
        if ((uint64_t) $tmp843 >= 1) goto $l842; else goto $l834;
        $l845:;
        if ((uint64_t) $tmp843 > 1) goto $l842; else goto $l834;
        $l842:;
        i827.value += 1;
        goto $l832;
        $l834:;
        self->_hash = h825;
    }
    }
    return self->_hash;
}

