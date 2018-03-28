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

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn164)(panda$core$Object*);
typedef panda$core$String* (*$fn191)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        self->owner = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        self->owner = p_owner;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp5;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp8 = $tmp6.min.value;
    panda$core$Int64 i7 = { $tmp8 };
    int64_t $tmp10 = $tmp6.max.value;
    bool $tmp11 = $tmp6.inclusive.value;
    if ($tmp11) goto $l18; else goto $l19;
    $l18:;
    if ($tmp8 <= $tmp10) goto $l12; else goto $l14;
    $l19:;
    if ($tmp8 < $tmp10) goto $l12; else goto $l14;
    $l12:;
    {
        ITable* $tmp20 = p_chars->$class->itable;
        while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp20 = $tmp20->next;
        }
        $fn22 $tmp21 = $tmp20->methods[0];
        panda$core$Object* $tmp23 = $tmp21(p_chars, i7);
        self->data[i7.value] = ((panda$core$Char8$wrapper*) $tmp23)->value;
    }
    $l15:;
    int64_t $tmp25 = $tmp10 - i7.value;
    if ($tmp11) goto $l26; else goto $l27;
    $l26:;
    if ((uint64_t) $tmp25 >= 1) goto $l24; else goto $l14;
    $l27:;
    if ((uint64_t) $tmp25 > 1) goto $l24; else goto $l14;
    $l24:;
    i7.value += 1;
    goto $l12;
    $l14:;
    {
        self->owner = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    if (((panda$core$Bit) { self->owner == NULL }).value) {
    {
        pandaFree(self->data);
    }
    }
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp30 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp30, self);
    return ((panda$collections$ListView*) $tmp30);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp31 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp31, self);
    return ((panda$collections$Iterator*) $tmp31);
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp32 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp32, self);
    return ((panda$collections$Iterator*) $tmp32);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count33;
    panda$collections$Iterator* iter34;
    panda$core$Int64 tmp148;
    count33 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp35 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    iter34 = $tmp35;
    $l36:;
    ITable* $tmp38 = iter34->$class->itable;
    while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp38 = $tmp38->next;
    }
    $fn40 $tmp39 = $tmp38->methods[0];
    panda$core$Bit $tmp41 = $tmp39(iter34);
    panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
    if (!$tmp42.value) goto $l37;
    {
        panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count33, ((panda$core$Int64) { 1 }));
        count33 = $tmp43;
        ITable* $tmp44 = iter34->$class->itable;
        while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp44 = $tmp44->next;
        }
        $fn46 $tmp45 = $tmp44->methods[1];
        panda$core$Object* $tmp47 = $tmp45(iter34);
    }
    goto $l36;
    $l37:;
    {
        tmp148 = count33;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter34));
        return tmp148;
    }
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
    result119 = ((panda$core$Char8*) pandaZAlloc($tmp120.value * 1));
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
    panda$core$String* $tmp162 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp163 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp162, result119, $tmp163);
    return $tmp162;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp165 = (($fn164) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp165);
    return $tmp166;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result167;
    panda$core$Range$LTpanda$core$Int64$GT $tmp169;
    panda$core$String* tmp2189;
    panda$core$MutableString* $tmp168 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp168);
    result167 = $tmp168;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp169, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp171 = $tmp169.min.value;
    panda$core$Int64 i170 = { $tmp171 };
    int64_t $tmp173 = $tmp169.max.value;
    bool $tmp174 = $tmp169.inclusive.value;
    if ($tmp174) goto $l181; else goto $l182;
    $l181:;
    if ($tmp171 <= $tmp173) goto $l175; else goto $l177;
    $l182:;
    if ($tmp171 < $tmp173) goto $l175; else goto $l177;
    $l175:;
    {
        panda$core$MutableString$append$panda$core$String(result167, self);
    }
    $l178:;
    int64_t $tmp184 = $tmp173 - i170.value;
    if ($tmp174) goto $l185; else goto $l186;
    $l185:;
    if ((uint64_t) $tmp184 >= 1) goto $l183; else goto $l177;
    $l186:;
    if ((uint64_t) $tmp184 > 1) goto $l183; else goto $l177;
    $l183:;
    i170.value += 1;
    goto $l175;
    $l177:;
    {
        panda$core$String* $tmp190 = panda$core$MutableString$finish$R$panda$core$String(result167);
        tmp2189 = $tmp190;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result167));
        return tmp2189;
    }
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp192 = (($fn191) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, p_s);
    return $tmp193;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp195;
    panda$core$Bit $tmp194 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp194.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp195, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp197 = $tmp195.min.value;
    panda$core$Int64 i196 = { $tmp197 };
    int64_t $tmp199 = $tmp195.max.value;
    bool $tmp200 = $tmp195.inclusive.value;
    if ($tmp200) goto $l207; else goto $l208;
    $l207:;
    if ($tmp197 <= $tmp199) goto $l201; else goto $l203;
    $l208:;
    if ($tmp197 < $tmp199) goto $l201; else goto $l203;
    $l201:;
    {
        panda$core$Bit $tmp209 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i196.value], p_other->data[i196.value]);
        if ($tmp209.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l204:;
    int64_t $tmp211 = $tmp199 - i196.value;
    if ($tmp200) goto $l212; else goto $l213;
    $l212:;
    if ((uint64_t) $tmp211 >= 1) goto $l210; else goto $l203;
    $l213:;
    if ((uint64_t) $tmp211 > 1) goto $l210; else goto $l203;
    $l210:;
    i196.value += 1;
    goto $l201;
    $l203:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp216);
    return $tmp217;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx218;
    panda$core$Char8 c219;
    panda$core$Int32 result220;
    panda$core$Char32 $tmp224;
    panda$core$Char32 $tmp235;
    panda$core$Char32 $tmp251;
    panda$core$Char32 $tmp270;
    idx218 = p_index.value;
    c219 = self->data[idx218.value];
    panda$core$Int32 $tmp221 = panda$core$Char8$convert$R$panda$core$Int32(c219);
    result220 = $tmp221;
    int64_t $tmp222 = ((int64_t) c219.value) & 255;
    bool $tmp223 = $tmp222 < 192;
    if (((panda$core$Bit) { $tmp223 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp224, result220);
        return $tmp224;
    }
    }
    int64_t $tmp225 = ((int64_t) c219.value) & 255;
    bool $tmp226 = $tmp225 < 224;
    if (((panda$core$Bit) { $tmp226 }).value) {
    {
        panda$core$Int64 $tmp227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp228 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp227, self->_length);
        PANDA_ASSERT($tmp228.value);
        panda$core$Int32 $tmp229 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result220, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp230 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp229, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp232 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp231.value]);
        panda$core$Int32 $tmp233 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp232, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp234 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp230, $tmp233);
        result220 = $tmp234;
        panda$core$Char32$init$panda$core$Int32(&$tmp235, result220);
        return $tmp235;
    }
    }
    int64_t $tmp236 = ((int64_t) c219.value) & 255;
    bool $tmp237 = $tmp236 < 240;
    if (((panda$core$Bit) { $tmp237 }).value) {
    {
        panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp239 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp238, self->_length);
        PANDA_ASSERT($tmp239.value);
        panda$core$Int32 $tmp240 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result220, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp241 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp240, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp243 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp242.value]);
        panda$core$Int32 $tmp244 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp243, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp245 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp244, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp246 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp241, $tmp245);
        panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp248 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp247.value]);
        panda$core$Int32 $tmp249 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp248, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp250 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp246, $tmp249);
        result220 = $tmp250;
        panda$core$Char32$init$panda$core$Int32(&$tmp251, result220);
        return $tmp251;
    }
    }
    panda$core$Int64 $tmp252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp253 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp252, self->_length);
    PANDA_ASSERT($tmp253.value);
    panda$core$Int32 $tmp254 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result220, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp255 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp254, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp257 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp256.value]);
    panda$core$Int32 $tmp258 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp257, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp259 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp258, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp260 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp255, $tmp259);
    panda$core$Int64 $tmp261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp262 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp261.value]);
    panda$core$Int32 $tmp263 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp262, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp264 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp263, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp265 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp260, $tmp264);
    panda$core$Int64 $tmp266 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx218, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp267 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp266.value]);
    panda$core$Int32 $tmp268 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp267, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp269 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp265, $tmp268);
    result220 = $tmp269;
    panda$core$Char32$init$panda$core$Int32(&$tmp270, result220);
    return $tmp270;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp271 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp272 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp271, p_index);
    panda$core$Char32 $tmp273 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp272);
    return $tmp273;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp274 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp275 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp274, (self->data + p_r.min.value.value), $tmp275, self);
    return $tmp274;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min276;
    panda$core$String$Index max278;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp281;
    memset(&min276, 0, sizeof(min276));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min276 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp277 = panda$core$String$start$R$panda$core$String$Index(self);
        min276 = $tmp277;
    }
    }
    memset(&max278, 0, sizeof(max278));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max278 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp279 = panda$core$String$end$R$panda$core$String$Index(self);
        max278 = $tmp279;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp280 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max278);
            max278 = $tmp280;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp281, min276, max278, p_r.inclusive);
    panda$core$String* $tmp282 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp281);
    return $tmp282;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current283;
    panda$core$MutableString* result284;
    panda$core$Int64 max286;
    panda$core$Char8 c291;
    panda$core$String* tmp3302;
    current283 = p_r.min.value;
    panda$core$MutableString* $tmp285 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp285);
    result284 = $tmp285;
    max286 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp287 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max286, ((panda$core$Int64) { 1 }));
        max286 = $tmp287;
    }
    }
    $l288:;
    panda$core$Bit $tmp290 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current283, max286);
    if (!$tmp290.value) goto $l289;
    {
        c291 = self->data[current283.value];
        panda$core$MutableString$append$panda$core$Char8(result284, c291);
        panda$core$Int64 $tmp292 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current283, ((panda$core$Int64) { 1 }));
        current283 = $tmp292;
        int64_t $tmp293 = ((int64_t) c291.value) & 255;
        bool $tmp294 = $tmp293 >= 192;
        if (((panda$core$Bit) { $tmp294 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result284, self->data[current283.value]);
            panda$core$Int64 $tmp295 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current283, ((panda$core$Int64) { 1 }));
            current283 = $tmp295;
        }
        }
        int64_t $tmp296 = ((int64_t) c291.value) & 255;
        bool $tmp297 = $tmp296 >= 224;
        if (((panda$core$Bit) { $tmp297 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result284, self->data[current283.value]);
            panda$core$Int64 $tmp298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current283, ((panda$core$Int64) { 1 }));
            current283 = $tmp298;
        }
        }
        int64_t $tmp299 = ((int64_t) c291.value) & 255;
        bool $tmp300 = $tmp299 >= 240;
        if (((panda$core$Bit) { $tmp300 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result284, self->data[current283.value]);
            panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current283, ((panda$core$Int64) { 1 }));
            current283 = $tmp301;
        }
        }
    }
    goto $l288;
    $l289:;
    {
        panda$core$String* $tmp303 = panda$core$MutableString$finish$R$panda$core$String(result284);
        tmp3302 = $tmp303;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result284));
        return tmp3302;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min306;
    panda$core$String$Index max308;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp311;
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp304.value) {
    {
        return &$s305;
    }
    }
    memset(&min306, 0, sizeof(min306));
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
    memset(&max308, 0, sizeof(max308));
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
            panda$core$String$Index $tmp310 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max308);
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
    panda$core$Int64 step315;
    panda$core$Int64 current316;
    panda$core$Int64 end321;
    panda$core$MutableString* result325;
    panda$core$Char8 c331;
    panda$core$Range$LTpanda$core$Int64$GT $tmp342;
    panda$core$String* tmp4357;
    panda$core$String$Index $tmp359;
    panda$core$Char8 c371;
    panda$core$Int64 old372;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp392;
    panda$core$String* tmp5412;
    panda$core$String$Index $tmp414;
    panda$core$Char8 c438;
    panda$core$String* tmp6448;
    panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp313.value) {
    {
        return &$s314;
    }
    }
    step315 = p_r.step;
    memset(&current316, 0, sizeof(current316));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current316 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp317 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step315, ((panda$core$Int64) { 0 }));
    if ($tmp317.value) {
    {
        panda$core$String$Index $tmp318 = panda$core$String$start$R$panda$core$String$Index(self);
        current316 = $tmp318.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp319 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp320 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp319);
        current316 = $tmp320.value;
    }
    }
    }
    memset(&end321, 0, sizeof(end321));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end321 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp322 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step315, ((panda$core$Int64) { 0 }));
    if ($tmp322.value) {
    {
        panda$core$String$Index $tmp323 = panda$core$String$end$R$panda$core$String$Index(self);
        end321 = $tmp323.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp324 = panda$core$String$start$R$panda$core$String$Index(self);
        end321 = $tmp324.value;
    }
    }
    }
    panda$core$MutableString* $tmp326 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp326);
    result325 = $tmp326;
    panda$core$Bit $tmp327 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp327.value) {
    {
        $l328:;
        panda$core$Bit $tmp330 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current316, end321);
        if (!$tmp330.value) goto $l329;
        {
            c331 = self->data[current316.value];
            panda$core$MutableString$append$panda$core$Char8(result325, c331);
            panda$core$Int64 $tmp332 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
            current316 = $tmp332;
            int64_t $tmp333 = ((int64_t) c331.value) & 255;
            bool $tmp334 = $tmp333 >= 192;
            if (((panda$core$Bit) { $tmp334 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
                panda$core$Int64 $tmp335 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
                current316 = $tmp335;
            }
            }
            int64_t $tmp336 = ((int64_t) c331.value) & 255;
            bool $tmp337 = $tmp336 >= 224;
            if (((panda$core$Bit) { $tmp337 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
                panda$core$Int64 $tmp338 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
                current316 = $tmp338;
            }
            }
            int64_t $tmp339 = ((int64_t) c331.value) & 255;
            bool $tmp340 = $tmp339 >= 240;
            if (((panda$core$Bit) { $tmp340 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
                panda$core$Int64 $tmp341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
                current316 = $tmp341;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp342, ((panda$core$Int64) { 1 }), step315, ((panda$core$Bit) { false }));
            int64_t $tmp344 = $tmp342.min.value;
            panda$core$Int64 i343 = { $tmp344 };
            int64_t $tmp346 = $tmp342.max.value;
            bool $tmp347 = $tmp342.inclusive.value;
            if ($tmp347) goto $l354; else goto $l355;
            $l354:;
            if ($tmp344 <= $tmp346) goto $l348; else goto $l350;
            $l355:;
            if ($tmp344 < $tmp346) goto $l348; else goto $l350;
            $l348:;
            {
                panda$core$Bit $tmp356 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current316, end321);
                if ($tmp356.value) {
                {
                    {
                        panda$core$String* $tmp358 = panda$core$MutableString$convert$R$panda$core$String(result325);
                        tmp4357 = $tmp358;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result325));
                        return tmp4357;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp359, current316);
                panda$core$String$Index $tmp360 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp359);
                current316 = $tmp360.value;
            }
            $l351:;
            int64_t $tmp362 = $tmp346 - i343.value;
            if ($tmp347) goto $l363; else goto $l364;
            $l363:;
            if ((uint64_t) $tmp362 >= 1) goto $l361; else goto $l350;
            $l364:;
            if ((uint64_t) $tmp362 > 1) goto $l361; else goto $l350;
            $l361:;
            i343.value += 1;
            goto $l348;
            $l350:;
        }
        goto $l328;
        $l329:;
    }
    }
    else {
    {
        panda$core$Bit $tmp367 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp367.value);
        $l368:;
        panda$core$Bit $tmp370 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current316, end321);
        if (!$tmp370.value) goto $l369;
        {
            c371 = self->data[current316.value];
            panda$core$MutableString$append$panda$core$Char8(result325, c371);
            old372 = current316;
            panda$core$Int64 $tmp373 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
            current316 = $tmp373;
            int64_t $tmp374 = ((int64_t) c371.value) & 255;
            bool $tmp375 = $tmp374 >= 192;
            if (((panda$core$Bit) { $tmp375 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
                panda$core$Int64 $tmp376 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
                current316 = $tmp376;
            }
            }
            int64_t $tmp377 = ((int64_t) c371.value) & 255;
            bool $tmp378 = $tmp377 >= 224;
            if (((panda$core$Bit) { $tmp378 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
                panda$core$Int64 $tmp379 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
                current316 = $tmp379;
            }
            }
            int64_t $tmp380 = ((int64_t) c371.value) & 255;
            bool $tmp381 = $tmp380 >= 240;
            if (((panda$core$Bit) { $tmp381 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
            }
            }
            panda$core$Int64 $tmp382 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old372, ((panda$core$Int64) { 1 }));
            current316 = $tmp382;
            $l383:;
            int64_t $tmp386 = ((int64_t) self->data[current316.value].value) & 255;
            bool $tmp387 = $tmp386 >= 128;
            bool $tmp385 = $tmp387;
            if (!$tmp385) goto $l388;
            int64_t $tmp389 = ((int64_t) self->data[current316.value].value) & 255;
            bool $tmp390 = $tmp389 < 192;
            $tmp385 = $tmp390;
            $l388:;
            if (!((panda$core$Bit) { $tmp385 }).value) goto $l384;
            {
                panda$core$Int64 $tmp391 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
                current316 = $tmp391;
            }
            goto $l383;
            $l384:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp392, ((panda$core$Int64) { -1 }), step315, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp394 = $tmp392.start.value;
            panda$core$Int64 i393 = { $tmp394 };
            int64_t $tmp396 = $tmp392.end.value;
            int64_t $tmp397 = $tmp392.step.value;
            bool $tmp398 = $tmp392.inclusive.value;
            bool $tmp405 = $tmp397 > 0;
            if ($tmp405) goto $l403; else goto $l404;
            $l403:;
            if ($tmp398) goto $l406; else goto $l407;
            $l406:;
            if ($tmp394 <= $tmp396) goto $l399; else goto $l401;
            $l407:;
            if ($tmp394 < $tmp396) goto $l399; else goto $l401;
            $l404:;
            if ($tmp398) goto $l408; else goto $l409;
            $l408:;
            if ($tmp394 >= $tmp396) goto $l399; else goto $l401;
            $l409:;
            if ($tmp394 > $tmp396) goto $l399; else goto $l401;
            $l399:;
            {
                panda$core$Bit $tmp411 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current316, end321);
                if ($tmp411.value) {
                {
                    {
                        panda$core$String* $tmp413 = panda$core$MutableString$convert$R$panda$core$String(result325);
                        tmp5412 = $tmp413;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result325));
                        return tmp5412;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp414, current316);
                panda$core$String$Index $tmp415 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp414);
                current316 = $tmp415.value;
            }
            $l402:;
            if ($tmp405) goto $l417; else goto $l418;
            $l417:;
            int64_t $tmp419 = $tmp396 - i393.value;
            if ($tmp398) goto $l420; else goto $l421;
            $l420:;
            if ((uint64_t) $tmp419 >= $tmp397) goto $l416; else goto $l401;
            $l421:;
            if ((uint64_t) $tmp419 > $tmp397) goto $l416; else goto $l401;
            $l418:;
            int64_t $tmp423 = i393.value - $tmp396;
            if ($tmp398) goto $l424; else goto $l425;
            $l424:;
            if ((uint64_t) $tmp423 >= -$tmp397) goto $l416; else goto $l401;
            $l425:;
            if ((uint64_t) $tmp423 > -$tmp397) goto $l416; else goto $l401;
            $l416:;
            i393.value += $tmp397;
            goto $l399;
            $l401:;
        }
        goto $l368;
        $l369:;
    }
    }
    bool $tmp429 = p_r.inclusive.value;
    if ($tmp429) goto $l430;
    $tmp429 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l430:;
    panda$core$Bit $tmp431 = { $tmp429 };
    bool $tmp428 = $tmp431.value;
    if (!$tmp428) goto $l432;
    panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current316, end321);
    $tmp428 = $tmp433.value;
    $l432:;
    panda$core$Bit $tmp434 = { $tmp428 };
    bool $tmp427 = $tmp434.value;
    if (!$tmp427) goto $l435;
    panda$core$Bit $tmp436 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end321, self->_length);
    $tmp427 = $tmp436.value;
    $l435:;
    panda$core$Bit $tmp437 = { $tmp427 };
    if ($tmp437.value) {
    {
        c438 = self->data[current316.value];
        panda$core$MutableString$append$panda$core$Char8(result325, c438);
        panda$core$Int64 $tmp439 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
        current316 = $tmp439;
        int64_t $tmp440 = ((int64_t) c438.value) & 255;
        bool $tmp441 = $tmp440 >= 192;
        if (((panda$core$Bit) { $tmp441 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
            panda$core$Int64 $tmp442 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
            current316 = $tmp442;
        }
        }
        int64_t $tmp443 = ((int64_t) c438.value) & 255;
        bool $tmp444 = $tmp443 >= 224;
        if (((panda$core$Bit) { $tmp444 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
            panda$core$Int64 $tmp445 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current316, ((panda$core$Int64) { 1 }));
            current316 = $tmp445;
        }
        }
        int64_t $tmp446 = ((int64_t) c438.value) & 255;
        bool $tmp447 = $tmp446 >= 240;
        if (((panda$core$Bit) { $tmp447 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result325, self->data[current316.value]);
        }
        }
    }
    }
    {
        panda$core$String* $tmp449 = panda$core$MutableString$finish$R$panda$core$String(result325);
        tmp6448 = $tmp449;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result325));
        return tmp6448;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start450;
    panda$core$String$Index$nullable end453;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp456;
    memset(&start450, 0, sizeof(start450));
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
    memset(&end453, 0, sizeof(end453));
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
    memset(&start458, 0, sizeof(start458));
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
    memset(&end461, 0, sizeof(end461));
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
    panda$core$String$Index index596;
    panda$core$String$Index$nullable nextIndex600;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp602;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp604;
    panda$core$String$Index $tmp606;
    panda$core$String* tmp7608;
    panda$core$MutableString* $tmp595 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp595);
    result594 = $tmp595;
    panda$core$String$Index $tmp597 = panda$core$String$start$R$panda$core$String$Index(self);
    index596 = $tmp597;
    $l598:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp601 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index596);
        nextIndex600 = $tmp601;
        if (((panda$core$Bit) { !nextIndex600.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp602, ((panda$core$String$Index$nullable) { index596, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp603 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp602);
            panda$core$MutableString$append$panda$core$String(result594, $tmp603);
            goto $l599;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp604, index596, ((panda$core$String$Index) nextIndex600.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp605 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp604);
        panda$core$MutableString$append$panda$core$String(result594, $tmp605);
        panda$core$MutableString$append$panda$core$String(result594, p_replacement);
        panda$core$Int64 $tmp607 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex600.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp606, $tmp607);
        index596 = $tmp606;
    }
    }
    $l599:;
    {
        panda$core$String* $tmp609 = panda$core$MutableString$finish$R$panda$core$String(result594);
        tmp7608 = $tmp609;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result594));
        return tmp7608;
    }
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
    panda$core$String$Index index727;
    panda$core$String$Index$nullable nextIndex731;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp740;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp742;
    panda$core$String$Index $tmp744;
    panda$collections$Array* tmp8746;
    panda$collections$Array* $tmp726 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp726);
    result725 = $tmp726;
    panda$core$String$Index $tmp728 = panda$core$String$start$R$panda$core$String$Index(self);
    index727 = $tmp728;
    $l729:;
    while (true) {
    {
        memset(&nextIndex731, 0, sizeof(nextIndex731));
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp732.value) {
        {
            panda$core$String$Index $tmp733 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index727);
            nextIndex731 = ((panda$core$String$Index$nullable) { $tmp733, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp734 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index727);
            nextIndex731 = $tmp734;
        }
        }
        bool $tmp735 = ((panda$core$Bit) { !nextIndex731.nonnull }).value;
        if ($tmp735) goto $l736;
        panda$core$Int64 $tmp737 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result725->count, $tmp737);
        $tmp735 = $tmp738.value;
        $l736:;
        panda$core$Bit $tmp739 = { $tmp735 };
        if ($tmp739.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp740, ((panda$core$String$Index$nullable) { index727, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp741 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp740);
            panda$collections$Array$add$panda$collections$Array$T(result725, ((panda$core$Object*) $tmp741));
            goto $l730;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp742, index727, ((panda$core$String$Index) nextIndex731.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp743 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp742);
        panda$collections$Array$add$panda$collections$Array$T(result725, ((panda$core$Object*) $tmp743));
        panda$core$Int64 $tmp745 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex731.value).value, p_delimiter->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp744, $tmp745);
        index727 = $tmp744;
    }
    }
    $l730:;
    {
        tmp8746 = result725;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result725));
        return tmp8746;
    }
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result748;
    panda$core$Int64 start749;
    panda$core$Char8 $tmp750;
    panda$core$Range$LTpanda$core$Int64$GT $tmp752;
    panda$core$Int64 digit766;
    panda$core$Char8 $tmp781;
    panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp747.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result748 = ((panda$core$Int64) { 0 });
    memset(&start749, 0, sizeof(start749));
    panda$core$Char8$init$panda$core$UInt8(&$tmp750, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp751 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp750);
    if ($tmp751.value) {
    {
        start749 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start749 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp752, start749, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp754 = $tmp752.min.value;
    panda$core$Int64 i753 = { $tmp754 };
    int64_t $tmp756 = $tmp752.max.value;
    bool $tmp757 = $tmp752.inclusive.value;
    if ($tmp757) goto $l764; else goto $l765;
    $l764:;
    if ($tmp754 <= $tmp756) goto $l758; else goto $l760;
    $l765:;
    if ($tmp754 < $tmp756) goto $l758; else goto $l760;
    $l758:;
    {
        panda$core$Int64 $tmp767 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i753.value].value) }), ((panda$core$Int64) { 48 }));
        digit766 = $tmp767;
        panda$core$Bit $tmp769 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit766, ((panda$core$Int64) { 0 }));
        bool $tmp768 = $tmp769.value;
        if ($tmp768) goto $l770;
        panda$core$Bit $tmp771 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit766, ((panda$core$Int64) { 9 }));
        $tmp768 = $tmp771.value;
        $l770:;
        panda$core$Bit $tmp772 = { $tmp768 };
        if ($tmp772.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp773 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result748, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp774 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp773, digit766);
        result748 = $tmp774;
    }
    $l761:;
    int64_t $tmp776 = $tmp756 - i753.value;
    if ($tmp757) goto $l777; else goto $l778;
    $l777:;
    if ((uint64_t) $tmp776 >= 1) goto $l775; else goto $l760;
    $l778:;
    if ((uint64_t) $tmp776 > 1) goto $l775; else goto $l760;
    $l775:;
    i753.value += 1;
    goto $l758;
    $l760:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp781, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp782 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp781);
    if ($tmp782.value) {
    {
        panda$core$Int64 $tmp783 = panda$core$Int64$$SUB$R$panda$core$Int64(result748);
        result748 = $tmp783;
    }
    }
    return ((panda$core$Int64$nullable) { result748, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result785;
    panda$core$Range$LTpanda$core$Int64$GT $tmp786;
    panda$core$UInt64 digit800;
    panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp784.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result785 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp786, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp788 = $tmp786.min.value;
    panda$core$Int64 i787 = { $tmp788 };
    int64_t $tmp790 = $tmp786.max.value;
    bool $tmp791 = $tmp786.inclusive.value;
    if ($tmp791) goto $l798; else goto $l799;
    $l798:;
    if ($tmp788 <= $tmp790) goto $l792; else goto $l794;
    $l799:;
    if ($tmp788 < $tmp790) goto $l792; else goto $l794;
    $l792:;
    {
        panda$core$UInt64 $tmp801 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i787.value].value) }), ((panda$core$UInt64) { 48 }));
        digit800 = $tmp801;
        panda$core$Bit $tmp803 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit800, ((panda$core$UInt64) { 0 }));
        bool $tmp802 = $tmp803.value;
        if ($tmp802) goto $l804;
        panda$core$Bit $tmp805 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit800, ((panda$core$UInt64) { 9 }));
        $tmp802 = $tmp805.value;
        $l804:;
        panda$core$Bit $tmp806 = { $tmp802 };
        if ($tmp806.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp807 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result785, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp808 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp807, digit800);
        result785 = $tmp808;
    }
    $l795:;
    int64_t $tmp810 = $tmp790 - i787.value;
    if ($tmp791) goto $l811; else goto $l812;
    $l811:;
    if ((uint64_t) $tmp810 >= 1) goto $l809; else goto $l794;
    $l812:;
    if ((uint64_t) $tmp810 > 1) goto $l809; else goto $l794;
    $l809:;
    i787.value += 1;
    goto $l792;
    $l794:;
    return ((panda$core$UInt64$nullable) { result785, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h816;
    panda$core$Range$LTpanda$core$Int64$GT $tmp817;
    panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp815.value) {
    {
        h816 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp817, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp819 = $tmp817.min.value;
        panda$core$Int64 i818 = { $tmp819 };
        int64_t $tmp821 = $tmp817.max.value;
        bool $tmp822 = $tmp817.inclusive.value;
        if ($tmp822) goto $l829; else goto $l830;
        $l829:;
        if ($tmp819 <= $tmp821) goto $l823; else goto $l825;
        $l830:;
        if ($tmp819 < $tmp821) goto $l823; else goto $l825;
        $l823:;
        {
            panda$core$Int64 $tmp831 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h816, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp832 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp831, ((panda$core$Int64) { ((int64_t) self->data[i818.value].value) }));
            h816 = $tmp832;
        }
        $l826:;
        int64_t $tmp834 = $tmp821 - i818.value;
        if ($tmp822) goto $l835; else goto $l836;
        $l835:;
        if ((uint64_t) $tmp834 >= 1) goto $l833; else goto $l825;
        $l836:;
        if ((uint64_t) $tmp834 > 1) goto $l833; else goto $l825;
        $l833:;
        i818.value += 1;
        goto $l823;
        $l825:;
        self->_hash = h816;
    }
    }
    return self->_hash;
}

