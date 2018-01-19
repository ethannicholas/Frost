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

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn49)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn168)(panda$core$Object*);
typedef panda$core$String* (*$fn196)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
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
    panda$core$String$UTF8List* $tmp30 = (panda$core$String$UTF8List*) pandaZAlloc(24);
    $tmp30->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp30->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp30, self);
    return ((panda$collections$ListView*) $tmp30);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp32 = (panda$core$String$UTF16Iterator*) pandaZAlloc(32);
    $tmp32->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp32->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp32, self);
    return ((panda$collections$Iterator*) $tmp32);
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp34 = (panda$core$String$UTF32Iterator*) pandaZAlloc(32);
    $tmp34->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp34->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp34, self);
    return ((panda$collections$Iterator*) $tmp34);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count36;
    panda$collections$Iterator* iter37;
    panda$core$Int64 tmp151;
    count36 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp38 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    iter37 = $tmp38;
    $l39:;
    ITable* $tmp41 = iter37->$class->itable;
    while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp41 = $tmp41->next;
    }
    $fn43 $tmp42 = $tmp41->methods[0];
    panda$core$Bit $tmp44 = $tmp42(iter37);
    panda$core$Bit $tmp45 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp44);
    if (!$tmp45.value) goto $l40;
    {
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count36, ((panda$core$Int64) { 1 }));
        count36 = $tmp46;
        ITable* $tmp47 = iter37->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[1];
        panda$core$Object* $tmp50 = $tmp48(iter37);
    }
    goto $l39;
    $l40:;
    {
        tmp151 = count36;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter37));
        return tmp151;
    }
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    return self->_length;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp53;
    panda$core$Bit $tmp52 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp52.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp53, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp55 = $tmp53.min.value;
    panda$core$Int64 i54 = { $tmp55 };
    int64_t $tmp57 = $tmp53.max.value;
    bool $tmp58 = $tmp53.inclusive.value;
    if ($tmp58) goto $l65; else goto $l66;
    $l65:;
    if ($tmp55 <= $tmp57) goto $l59; else goto $l61;
    $l66:;
    if ($tmp55 < $tmp57) goto $l59; else goto $l61;
    $l59:;
    {
        panda$core$Bit $tmp67 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i54.value], p_other->data[i54.value]);
        if ($tmp67.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l62:;
    int64_t $tmp69 = $tmp57 - i54.value;
    if ($tmp58) goto $l70; else goto $l71;
    $l70:;
    if ((uint64_t) $tmp69 >= 1) goto $l68; else goto $l61;
    $l71:;
    if ((uint64_t) $tmp69 > 1) goto $l68; else goto $l61;
    $l68:;
    i54.value += 1;
    goto $l59;
    $l61:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp75;
    panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp74.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp75, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp77 = $tmp75.min.value;
    panda$core$Int64 i76 = { $tmp77 };
    int64_t $tmp79 = $tmp75.max.value;
    bool $tmp80 = $tmp75.inclusive.value;
    if ($tmp80) goto $l87; else goto $l88;
    $l87:;
    if ($tmp77 <= $tmp79) goto $l81; else goto $l83;
    $l88:;
    if ($tmp77 < $tmp79) goto $l81; else goto $l83;
    $l81:;
    {
        panda$core$Int64 $tmp89 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp90 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp89, i76);
        panda$core$Bit $tmp91 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp90.value], p_other->data[i76.value]);
        if ($tmp91.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l84:;
    int64_t $tmp93 = $tmp79 - i76.value;
    if ($tmp80) goto $l94; else goto $l95;
    $l94:;
    if ((uint64_t) $tmp93 >= 1) goto $l92; else goto $l83;
    $l95:;
    if ((uint64_t) $tmp93 > 1) goto $l92; else goto $l83;
    $l92:;
    i76.value += 1;
    goto $l81;
    $l83:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start99;
    panda$core$Int64 end108;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp118;
    panda$core$String$Index $tmp119;
    panda$core$String$Index $tmp120;
    panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp98.value) {
    {
        return self;
    }
    }
    start99 = ((panda$core$Int64) { 0 });
    $l100:;
    panda$core$Bit $tmp103 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start99, self->_length);
    bool $tmp102 = $tmp103.value;
    if (!$tmp102) goto $l104;
    panda$core$Bit $tmp105 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start99.value]);
    $tmp102 = $tmp105.value;
    $l104:;
    panda$core$Bit $tmp106 = { $tmp102 };
    if (!$tmp106.value) goto $l101;
    {
        panda$core$Int64 $tmp107 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start99, ((panda$core$Int64) { 1 }));
        start99 = $tmp107;
    }
    goto $l100;
    $l101:;
    panda$core$Int64 $tmp109 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end108 = $tmp109;
    $l110:;
    panda$core$Bit $tmp113 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end108, start99);
    bool $tmp112 = $tmp113.value;
    if (!$tmp112) goto $l114;
    panda$core$Bit $tmp115 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end108.value]);
    $tmp112 = $tmp115.value;
    $l114:;
    panda$core$Bit $tmp116 = { $tmp112 };
    if (!$tmp116.value) goto $l111;
    {
        panda$core$Int64 $tmp117 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end108, ((panda$core$Int64) { 1 }));
        end108 = $tmp117;
    }
    goto $l110;
    $l111:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp119, start99);
    panda$core$String$Index$init$panda$core$Int64(&$tmp120, end108);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp118, $tmp119, $tmp120, ((panda$core$Bit) { true }));
    panda$core$String* $tmp121 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp118);
    return $tmp121;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result122;
    panda$core$Range$LTpanda$core$Int64$GT $tmp124;
    panda$core$Range$LTpanda$core$Int64$GT $tmp144;
    panda$core$Int64 $tmp123 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result122 = ((panda$core$Char8*) pandaZAlloc($tmp123.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp124, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp126 = $tmp124.min.value;
    panda$core$Int64 i125 = { $tmp126 };
    int64_t $tmp128 = $tmp124.max.value;
    bool $tmp129 = $tmp124.inclusive.value;
    if ($tmp129) goto $l136; else goto $l137;
    $l136:;
    if ($tmp126 <= $tmp128) goto $l130; else goto $l132;
    $l137:;
    if ($tmp126 < $tmp128) goto $l130; else goto $l132;
    $l130:;
    {
        result122[i125.value] = self->data[i125.value];
    }
    $l133:;
    int64_t $tmp139 = $tmp128 - i125.value;
    if ($tmp129) goto $l140; else goto $l141;
    $l140:;
    if ((uint64_t) $tmp139 >= 1) goto $l138; else goto $l132;
    $l141:;
    if ((uint64_t) $tmp139 > 1) goto $l138; else goto $l132;
    $l138:;
    i125.value += 1;
    goto $l130;
    $l132:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp144, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp146 = $tmp144.min.value;
    panda$core$Int64 i145 = { $tmp146 };
    int64_t $tmp148 = $tmp144.max.value;
    bool $tmp149 = $tmp144.inclusive.value;
    if ($tmp149) goto $l156; else goto $l157;
    $l156:;
    if ($tmp146 <= $tmp148) goto $l150; else goto $l152;
    $l157:;
    if ($tmp146 < $tmp148) goto $l150; else goto $l152;
    $l150:;
    {
        panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i145);
        result122[$tmp158.value] = p_other->data[i145.value];
    }
    $l153:;
    int64_t $tmp160 = $tmp148 - i145.value;
    if ($tmp149) goto $l161; else goto $l162;
    $l161:;
    if ((uint64_t) $tmp160 >= 1) goto $l159; else goto $l152;
    $l162:;
    if ((uint64_t) $tmp160 > 1) goto $l159; else goto $l152;
    $l159:;
    i145.value += 1;
    goto $l150;
    $l152:;
    panda$core$String* $tmp165 = (panda$core$String*) pandaZAlloc(48);
    $tmp165->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp165->refCount.value = 1;
    panda$core$Int64 $tmp167 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp165, result122, $tmp167);
    return $tmp165;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp169 = (($fn168) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp169);
    return $tmp170;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result171;
    panda$core$Range$LTpanda$core$Int64$GT $tmp174;
    panda$core$String* tmp2194;
    panda$core$MutableString* $tmp172 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp172->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp172->refCount.value = 1;
    panda$core$MutableString$init($tmp172);
    result171 = $tmp172;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp174, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp176 = $tmp174.min.value;
    panda$core$Int64 i175 = { $tmp176 };
    int64_t $tmp178 = $tmp174.max.value;
    bool $tmp179 = $tmp174.inclusive.value;
    if ($tmp179) goto $l186; else goto $l187;
    $l186:;
    if ($tmp176 <= $tmp178) goto $l180; else goto $l182;
    $l187:;
    if ($tmp176 < $tmp178) goto $l180; else goto $l182;
    $l180:;
    {
        panda$core$MutableString$append$panda$core$String(result171, self);
    }
    $l183:;
    int64_t $tmp189 = $tmp178 - i175.value;
    if ($tmp179) goto $l190; else goto $l191;
    $l190:;
    if ((uint64_t) $tmp189 >= 1) goto $l188; else goto $l182;
    $l191:;
    if ((uint64_t) $tmp189 > 1) goto $l188; else goto $l182;
    $l188:;
    i175.value += 1;
    goto $l180;
    $l182:;
    {
        panda$core$String* $tmp195 = panda$core$MutableString$finish$R$panda$core$String(result171);
        tmp2194 = $tmp195;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
        return tmp2194;
    }
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp197 = (($fn196) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, p_s);
    return $tmp198;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
    panda$core$Bit $tmp199 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp199.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp200, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp202 = $tmp200.min.value;
    panda$core$Int64 i201 = { $tmp202 };
    int64_t $tmp204 = $tmp200.max.value;
    bool $tmp205 = $tmp200.inclusive.value;
    if ($tmp205) goto $l212; else goto $l213;
    $l212:;
    if ($tmp202 <= $tmp204) goto $l206; else goto $l208;
    $l213:;
    if ($tmp202 < $tmp204) goto $l206; else goto $l208;
    $l206:;
    {
        panda$core$Bit $tmp214 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i201.value], p_other->data[i201.value]);
        if ($tmp214.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l209:;
    int64_t $tmp216 = $tmp204 - i201.value;
    if ($tmp205) goto $l217; else goto $l218;
    $l217:;
    if ((uint64_t) $tmp216 >= 1) goto $l215; else goto $l208;
    $l218:;
    if ((uint64_t) $tmp216 > 1) goto $l215; else goto $l208;
    $l215:;
    i201.value += 1;
    goto $l206;
    $l208:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp221 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp221);
    return $tmp222;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx223;
    panda$core$Char8 c224;
    panda$core$Int32 result225;
    panda$core$Char32 $tmp229;
    panda$core$Char32 $tmp240;
    panda$core$Char32 $tmp256;
    panda$core$Char32 $tmp275;
    idx223 = p_index.value;
    c224 = self->data[idx223.value];
    panda$core$Int32 $tmp226 = panda$core$Char8$convert$R$panda$core$Int32(c224);
    result225 = $tmp226;
    int64_t $tmp227 = ((int64_t) c224.value) & 255;
    bool $tmp228 = $tmp227 < 192;
    if (((panda$core$Bit) { $tmp228 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp229, result225);
        return $tmp229;
    }
    }
    int64_t $tmp230 = ((int64_t) c224.value) & 255;
    bool $tmp231 = $tmp230 < 224;
    if (((panda$core$Bit) { $tmp231 }).value) {
    {
        panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp233 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp232, self->_length);
        PANDA_ASSERT($tmp233.value);
        panda$core$Int32 $tmp234 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result225, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp235 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp234, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp237 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp236.value]);
        panda$core$Int32 $tmp238 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp237, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp239 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp235, $tmp238);
        result225 = $tmp239;
        panda$core$Char32$init$panda$core$Int32(&$tmp240, result225);
        return $tmp240;
    }
    }
    int64_t $tmp241 = ((int64_t) c224.value) & 255;
    bool $tmp242 = $tmp241 < 240;
    if (((panda$core$Bit) { $tmp242 }).value) {
    {
        panda$core$Int64 $tmp243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp244 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp243, self->_length);
        PANDA_ASSERT($tmp244.value);
        panda$core$Int32 $tmp245 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result225, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp246 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp245, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp248 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp247.value]);
        panda$core$Int32 $tmp249 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp248, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp250 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp249, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp251 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp246, $tmp250);
        panda$core$Int64 $tmp252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp253 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp252.value]);
        panda$core$Int32 $tmp254 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp253, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp255 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp251, $tmp254);
        result225 = $tmp255;
        panda$core$Char32$init$panda$core$Int32(&$tmp256, result225);
        return $tmp256;
    }
    }
    panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp258 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp257, self->_length);
    PANDA_ASSERT($tmp258.value);
    panda$core$Int32 $tmp259 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result225, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp260 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp259, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp262 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp261.value]);
    panda$core$Int32 $tmp263 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp262, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp264 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp263, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp265 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp260, $tmp264);
    panda$core$Int64 $tmp266 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp267 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp266.value]);
    panda$core$Int32 $tmp268 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp267, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp269 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp268, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp270 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp265, $tmp269);
    panda$core$Int64 $tmp271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx223, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp272 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp271.value]);
    panda$core$Int32 $tmp273 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp272, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp274 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp270, $tmp273);
    result225 = $tmp274;
    panda$core$Char32$init$panda$core$Int32(&$tmp275, result225);
    return $tmp275;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp276 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp277 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp276, p_index);
    panda$core$Char32 $tmp278 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp277);
    return $tmp278;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp279 = (panda$core$String*) pandaZAlloc(48);
    $tmp279->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp279->refCount.value = 1;
    panda$core$Int64 $tmp281 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp279, (self->data + p_r.min.value.value), $tmp281, self);
    return $tmp279;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min282;
    panda$core$String$Index max284;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp287;
    memset(&min282, 0, sizeof(min282));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min282 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp283 = panda$core$String$start$R$panda$core$String$Index(self);
        min282 = $tmp283;
    }
    }
    memset(&max284, 0, sizeof(max284));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max284 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp285 = panda$core$String$end$R$panda$core$String$Index(self);
        max284 = $tmp285;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp286 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max284);
            max284 = $tmp286;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp287, min282, max284, p_r.inclusive);
    panda$core$String* $tmp288 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp287);
    return $tmp288;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current289;
    panda$core$MutableString* result290;
    panda$core$Int64 max293;
    panda$core$Char8 c298;
    panda$core$String* tmp3309;
    current289 = p_r.min.value;
    panda$core$MutableString* $tmp291 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp291->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp291->refCount.value = 1;
    panda$core$MutableString$init($tmp291);
    result290 = $tmp291;
    max293 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp294 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max293, ((panda$core$Int64) { 1 }));
        max293 = $tmp294;
    }
    }
    $l295:;
    panda$core$Bit $tmp297 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current289, max293);
    if (!$tmp297.value) goto $l296;
    {
        c298 = self->data[current289.value];
        panda$core$MutableString$append$panda$core$Char8(result290, c298);
        panda$core$Int64 $tmp299 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current289, ((panda$core$Int64) { 1 }));
        current289 = $tmp299;
        int64_t $tmp300 = ((int64_t) c298.value) & 255;
        bool $tmp301 = $tmp300 >= 192;
        if (((panda$core$Bit) { $tmp301 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result290, self->data[current289.value]);
            panda$core$Int64 $tmp302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current289, ((panda$core$Int64) { 1 }));
            current289 = $tmp302;
        }
        }
        int64_t $tmp303 = ((int64_t) c298.value) & 255;
        bool $tmp304 = $tmp303 >= 224;
        if (((panda$core$Bit) { $tmp304 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result290, self->data[current289.value]);
            panda$core$Int64 $tmp305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current289, ((panda$core$Int64) { 1 }));
            current289 = $tmp305;
        }
        }
        int64_t $tmp306 = ((int64_t) c298.value) & 255;
        bool $tmp307 = $tmp306 >= 240;
        if (((panda$core$Bit) { $tmp307 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result290, self->data[current289.value]);
            panda$core$Int64 $tmp308 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current289, ((panda$core$Int64) { 1 }));
            current289 = $tmp308;
        }
        }
    }
    goto $l295;
    $l296:;
    {
        panda$core$String* $tmp310 = panda$core$MutableString$finish$R$panda$core$String(result290);
        tmp3309 = $tmp310;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result290));
        return tmp3309;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min313;
    panda$core$String$Index max315;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp318;
    panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp311.value) {
    {
        return &$s312;
    }
    }
    memset(&min313, 0, sizeof(min313));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min313 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp314 = panda$core$String$start$R$panda$core$String$Index(self);
        min313 = $tmp314;
    }
    }
    memset(&max315, 0, sizeof(max315));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max315 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp316 = panda$core$String$end$R$panda$core$String$Index(self);
        max315 = $tmp316;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp317 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max315);
            max315 = $tmp317;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp318, min313, max315, p_r.inclusive);
    panda$core$String* $tmp319 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp318);
    return $tmp319;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step322;
    panda$core$Int64 current323;
    panda$core$Int64 end328;
    panda$core$MutableString* result332;
    panda$core$Char8 c339;
    panda$core$Range$LTpanda$core$Int64$GT $tmp350;
    panda$core$String* tmp4365;
    panda$core$String$Index $tmp367;
    panda$core$Char8 c379;
    panda$core$Int64 old380;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp400;
    panda$core$String* tmp5420;
    panda$core$String$Index $tmp422;
    panda$core$Char8 c446;
    panda$core$String* tmp6456;
    panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp320.value) {
    {
        return &$s321;
    }
    }
    step322 = p_r.step;
    memset(&current323, 0, sizeof(current323));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current323 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp324 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step322, ((panda$core$Int64) { 0 }));
    if ($tmp324.value) {
    {
        panda$core$String$Index $tmp325 = panda$core$String$start$R$panda$core$String$Index(self);
        current323 = $tmp325.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp326 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp327 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp326);
        current323 = $tmp327.value;
    }
    }
    }
    memset(&end328, 0, sizeof(end328));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end328 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp329 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step322, ((panda$core$Int64) { 0 }));
    if ($tmp329.value) {
    {
        panda$core$String$Index $tmp330 = panda$core$String$end$R$panda$core$String$Index(self);
        end328 = $tmp330.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp331 = panda$core$String$start$R$panda$core$String$Index(self);
        end328 = $tmp331.value;
    }
    }
    }
    panda$core$MutableString* $tmp333 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp333->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp333->refCount.value = 1;
    panda$core$MutableString$init($tmp333);
    result332 = $tmp333;
    panda$core$Bit $tmp335 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp335.value) {
    {
        $l336:;
        panda$core$Bit $tmp338 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current323, end328);
        if (!$tmp338.value) goto $l337;
        {
            c339 = self->data[current323.value];
            panda$core$MutableString$append$panda$core$Char8(result332, c339);
            panda$core$Int64 $tmp340 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
            current323 = $tmp340;
            int64_t $tmp341 = ((int64_t) c339.value) & 255;
            bool $tmp342 = $tmp341 >= 192;
            if (((panda$core$Bit) { $tmp342 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
                panda$core$Int64 $tmp343 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
                current323 = $tmp343;
            }
            }
            int64_t $tmp344 = ((int64_t) c339.value) & 255;
            bool $tmp345 = $tmp344 >= 224;
            if (((panda$core$Bit) { $tmp345 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
                panda$core$Int64 $tmp346 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
                current323 = $tmp346;
            }
            }
            int64_t $tmp347 = ((int64_t) c339.value) & 255;
            bool $tmp348 = $tmp347 >= 240;
            if (((panda$core$Bit) { $tmp348 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
                panda$core$Int64 $tmp349 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
                current323 = $tmp349;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp350, ((panda$core$Int64) { 1 }), step322, ((panda$core$Bit) { false }));
            int64_t $tmp352 = $tmp350.min.value;
            panda$core$Int64 i351 = { $tmp352 };
            int64_t $tmp354 = $tmp350.max.value;
            bool $tmp355 = $tmp350.inclusive.value;
            if ($tmp355) goto $l362; else goto $l363;
            $l362:;
            if ($tmp352 <= $tmp354) goto $l356; else goto $l358;
            $l363:;
            if ($tmp352 < $tmp354) goto $l356; else goto $l358;
            $l356:;
            {
                panda$core$Bit $tmp364 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current323, end328);
                if ($tmp364.value) {
                {
                    {
                        panda$core$String* $tmp366 = panda$core$MutableString$convert$R$panda$core$String(result332);
                        tmp4365 = $tmp366;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result332));
                        return tmp4365;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp367, current323);
                panda$core$String$Index $tmp368 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp367);
                current323 = $tmp368.value;
            }
            $l359:;
            int64_t $tmp370 = $tmp354 - i351.value;
            if ($tmp355) goto $l371; else goto $l372;
            $l371:;
            if ((uint64_t) $tmp370 >= 1) goto $l369; else goto $l358;
            $l372:;
            if ((uint64_t) $tmp370 > 1) goto $l369; else goto $l358;
            $l369:;
            i351.value += 1;
            goto $l356;
            $l358:;
        }
        goto $l336;
        $l337:;
    }
    }
    else {
    {
        panda$core$Bit $tmp375 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp375.value);
        $l376:;
        panda$core$Bit $tmp378 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current323, end328);
        if (!$tmp378.value) goto $l377;
        {
            c379 = self->data[current323.value];
            panda$core$MutableString$append$panda$core$Char8(result332, c379);
            old380 = current323;
            panda$core$Int64 $tmp381 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
            current323 = $tmp381;
            int64_t $tmp382 = ((int64_t) c379.value) & 255;
            bool $tmp383 = $tmp382 >= 192;
            if (((panda$core$Bit) { $tmp383 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
                panda$core$Int64 $tmp384 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
                current323 = $tmp384;
            }
            }
            int64_t $tmp385 = ((int64_t) c379.value) & 255;
            bool $tmp386 = $tmp385 >= 224;
            if (((panda$core$Bit) { $tmp386 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
                panda$core$Int64 $tmp387 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
                current323 = $tmp387;
            }
            }
            int64_t $tmp388 = ((int64_t) c379.value) & 255;
            bool $tmp389 = $tmp388 >= 240;
            if (((panda$core$Bit) { $tmp389 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
            }
            }
            panda$core$Int64 $tmp390 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old380, ((panda$core$Int64) { 1 }));
            current323 = $tmp390;
            $l391:;
            int64_t $tmp394 = ((int64_t) self->data[current323.value].value) & 255;
            bool $tmp395 = $tmp394 >= 128;
            bool $tmp393 = $tmp395;
            if (!$tmp393) goto $l396;
            int64_t $tmp397 = ((int64_t) self->data[current323.value].value) & 255;
            bool $tmp398 = $tmp397 < 192;
            $tmp393 = $tmp398;
            $l396:;
            if (!((panda$core$Bit) { $tmp393 }).value) goto $l392;
            {
                panda$core$Int64 $tmp399 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
                current323 = $tmp399;
            }
            goto $l391;
            $l392:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp400, ((panda$core$Int64) { -1 }), step322, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp402 = $tmp400.start.value;
            panda$core$Int64 i401 = { $tmp402 };
            int64_t $tmp404 = $tmp400.end.value;
            int64_t $tmp405 = $tmp400.step.value;
            bool $tmp406 = $tmp400.inclusive.value;
            bool $tmp413 = $tmp405 > 0;
            if ($tmp413) goto $l411; else goto $l412;
            $l411:;
            if ($tmp406) goto $l414; else goto $l415;
            $l414:;
            if ($tmp402 <= $tmp404) goto $l407; else goto $l409;
            $l415:;
            if ($tmp402 < $tmp404) goto $l407; else goto $l409;
            $l412:;
            if ($tmp406) goto $l416; else goto $l417;
            $l416:;
            if ($tmp402 >= $tmp404) goto $l407; else goto $l409;
            $l417:;
            if ($tmp402 > $tmp404) goto $l407; else goto $l409;
            $l407:;
            {
                panda$core$Bit $tmp419 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current323, end328);
                if ($tmp419.value) {
                {
                    {
                        panda$core$String* $tmp421 = panda$core$MutableString$convert$R$panda$core$String(result332);
                        tmp5420 = $tmp421;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result332));
                        return tmp5420;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp422, current323);
                panda$core$String$Index $tmp423 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp422);
                current323 = $tmp423.value;
            }
            $l410:;
            if ($tmp413) goto $l425; else goto $l426;
            $l425:;
            int64_t $tmp427 = $tmp404 - i401.value;
            if ($tmp406) goto $l428; else goto $l429;
            $l428:;
            if ((uint64_t) $tmp427 >= $tmp405) goto $l424; else goto $l409;
            $l429:;
            if ((uint64_t) $tmp427 > $tmp405) goto $l424; else goto $l409;
            $l426:;
            int64_t $tmp431 = i401.value - $tmp404;
            if ($tmp406) goto $l432; else goto $l433;
            $l432:;
            if ((uint64_t) $tmp431 >= -$tmp405) goto $l424; else goto $l409;
            $l433:;
            if ((uint64_t) $tmp431 > -$tmp405) goto $l424; else goto $l409;
            $l424:;
            i401.value += $tmp405;
            goto $l407;
            $l409:;
        }
        goto $l376;
        $l377:;
    }
    }
    bool $tmp437 = p_r.inclusive.value;
    if ($tmp437) goto $l438;
    $tmp437 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l438:;
    panda$core$Bit $tmp439 = { $tmp437 };
    bool $tmp436 = $tmp439.value;
    if (!$tmp436) goto $l440;
    panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current323, end328);
    $tmp436 = $tmp441.value;
    $l440:;
    panda$core$Bit $tmp442 = { $tmp436 };
    bool $tmp435 = $tmp442.value;
    if (!$tmp435) goto $l443;
    panda$core$Bit $tmp444 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end328, self->_length);
    $tmp435 = $tmp444.value;
    $l443:;
    panda$core$Bit $tmp445 = { $tmp435 };
    if ($tmp445.value) {
    {
        c446 = self->data[current323.value];
        panda$core$MutableString$append$panda$core$Char8(result332, c446);
        panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
        current323 = $tmp447;
        int64_t $tmp448 = ((int64_t) c446.value) & 255;
        bool $tmp449 = $tmp448 >= 192;
        if (((panda$core$Bit) { $tmp449 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
            panda$core$Int64 $tmp450 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
            current323 = $tmp450;
        }
        }
        int64_t $tmp451 = ((int64_t) c446.value) & 255;
        bool $tmp452 = $tmp451 >= 224;
        if (((panda$core$Bit) { $tmp452 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
            panda$core$Int64 $tmp453 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current323, ((panda$core$Int64) { 1 }));
            current323 = $tmp453;
        }
        }
        int64_t $tmp454 = ((int64_t) c446.value) & 255;
        bool $tmp455 = $tmp454 >= 240;
        if (((panda$core$Bit) { $tmp455 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result332, self->data[current323.value]);
        }
        }
    }
    }
    {
        panda$core$String* $tmp457 = panda$core$MutableString$finish$R$panda$core$String(result332);
        tmp6456 = $tmp457;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result332));
        return tmp6456;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start458;
    panda$core$String$Index$nullable end461;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp464;
    memset(&start458, 0, sizeof(start458));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp459 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp460 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp459, ((panda$core$Int64) p_r.min.value));
        start458 = ((panda$core$String$Index$nullable) { $tmp460, true });
    }
    }
    else {
    {
        start458 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end461, 0, sizeof(end461));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp462 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp463 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp462, ((panda$core$Int64) p_r.max.value));
        end461 = ((panda$core$String$Index$nullable) { $tmp463, true });
    }
    }
    else {
    {
        end461 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp464, start458, end461, p_r.inclusive);
    panda$core$String* $tmp465 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp464);
    return $tmp465;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start466;
    panda$core$String$Index$nullable end469;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp472;
    memset(&start466, 0, sizeof(start466));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp467 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp468 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp467, ((panda$core$Int64) p_r.start.value));
        start466 = ((panda$core$String$Index$nullable) { $tmp468, true });
    }
    }
    else {
    {
        start466 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end469, 0, sizeof(end469));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp470 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp471 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp470, ((panda$core$Int64) p_r.end.value));
        end469 = ((panda$core$String$Index$nullable) { $tmp471, true });
    }
    }
    else {
    {
        end469 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp472, start466, end469, p_r.step, p_r.inclusive);
    panda$core$String* $tmp473 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp472);
    return $tmp473;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp474;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp474, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp476 = $tmp474.min.value;
    panda$core$Int64 i475 = { $tmp476 };
    int64_t $tmp478 = $tmp474.max.value;
    bool $tmp479 = $tmp474.inclusive.value;
    if ($tmp479) goto $l486; else goto $l487;
    $l486:;
    if ($tmp476 <= $tmp478) goto $l480; else goto $l482;
    $l487:;
    if ($tmp476 < $tmp478) goto $l480; else goto $l482;
    $l480:;
    {
        panda$core$Bit $tmp488 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i475.value], p_c);
        if ($tmp488.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l483:;
    int64_t $tmp490 = $tmp478 - i475.value;
    if ($tmp479) goto $l491; else goto $l492;
    $l491:;
    if ((uint64_t) $tmp490 >= 1) goto $l489; else goto $l482;
    $l492:;
    if ((uint64_t) $tmp490 > 1) goto $l489; else goto $l482;
    $l489:;
    i475.value += 1;
    goto $l480;
    $l482:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp495 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp495.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp496 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp497 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp496);
    return $tmp497;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp499;
    panda$core$Range$LTpanda$core$Int64$GT $tmp514;
    panda$core$String$Index $tmp536;
    panda$core$Bit $tmp498 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp498.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp500 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp499, p_start.value, $tmp500, ((panda$core$Bit) { true }));
    int64_t $tmp502 = $tmp499.min.value;
    panda$core$Int64 i501 = { $tmp502 };
    int64_t $tmp504 = $tmp499.max.value;
    bool $tmp505 = $tmp499.inclusive.value;
    if ($tmp505) goto $l512; else goto $l513;
    $l512:;
    if ($tmp502 <= $tmp504) goto $l506; else goto $l508;
    $l513:;
    if ($tmp502 < $tmp504) goto $l506; else goto $l508;
    $l506:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp514, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp516 = $tmp514.min.value;
        panda$core$Int64 j515 = { $tmp516 };
        int64_t $tmp518 = $tmp514.max.value;
        bool $tmp519 = $tmp514.inclusive.value;
        if ($tmp519) goto $l526; else goto $l527;
        $l526:;
        if ($tmp516 <= $tmp518) goto $l520; else goto $l522;
        $l527:;
        if ($tmp516 < $tmp518) goto $l520; else goto $l522;
        $l520:;
        {
            panda$core$Int64 $tmp528 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i501, j515);
            panda$core$Bit $tmp529 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp528.value], p_s->data[j515.value]);
            if ($tmp529.value) {
            {
                goto $l509;
            }
            }
        }
        $l523:;
        int64_t $tmp531 = $tmp518 - j515.value;
        if ($tmp519) goto $l532; else goto $l533;
        $l532:;
        if ((uint64_t) $tmp531 >= 1) goto $l530; else goto $l522;
        $l533:;
        if ((uint64_t) $tmp531 > 1) goto $l530; else goto $l522;
        $l530:;
        j515.value += 1;
        goto $l520;
        $l522:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp536, i501);
        return ((panda$core$String$Index$nullable) { $tmp536, true });
    }
    $l509:;
    int64_t $tmp538 = $tmp504 - i501.value;
    if ($tmp505) goto $l539; else goto $l540;
    $l539:;
    if ((uint64_t) $tmp538 >= 1) goto $l537; else goto $l508;
    $l540:;
    if ((uint64_t) $tmp538 > 1) goto $l537; else goto $l508;
    $l537:;
    i501.value += 1;
    goto $l506;
    $l508:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp543 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp544 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp543);
    return $tmp544;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos546;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp549;
    panda$core$Range$LTpanda$core$Int64$GT $tmp568;
    panda$core$String$Index $tmp590;
    panda$core$Bit $tmp545 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp545.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp547 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp548 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp547);
    startPos546 = $tmp548;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp549, startPos546, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp551 = $tmp549.start.value;
    panda$core$Int64 i550 = { $tmp551 };
    int64_t $tmp553 = $tmp549.end.value;
    int64_t $tmp554 = $tmp549.step.value;
    bool $tmp555 = $tmp549.inclusive.value;
    bool $tmp562 = $tmp554 > 0;
    if ($tmp562) goto $l560; else goto $l561;
    $l560:;
    if ($tmp555) goto $l563; else goto $l564;
    $l563:;
    if ($tmp551 <= $tmp553) goto $l556; else goto $l558;
    $l564:;
    if ($tmp551 < $tmp553) goto $l556; else goto $l558;
    $l561:;
    if ($tmp555) goto $l565; else goto $l566;
    $l565:;
    if ($tmp551 >= $tmp553) goto $l556; else goto $l558;
    $l566:;
    if ($tmp551 > $tmp553) goto $l556; else goto $l558;
    $l556:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp568, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp570 = $tmp568.min.value;
        panda$core$Int64 j569 = { $tmp570 };
        int64_t $tmp572 = $tmp568.max.value;
        bool $tmp573 = $tmp568.inclusive.value;
        if ($tmp573) goto $l580; else goto $l581;
        $l580:;
        if ($tmp570 <= $tmp572) goto $l574; else goto $l576;
        $l581:;
        if ($tmp570 < $tmp572) goto $l574; else goto $l576;
        $l574:;
        {
            panda$core$Int64 $tmp582 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i550, j569);
            panda$core$Bit $tmp583 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp582.value], p_s->data[j569.value]);
            if ($tmp583.value) {
            {
                goto $l559;
            }
            }
        }
        $l577:;
        int64_t $tmp585 = $tmp572 - j569.value;
        if ($tmp573) goto $l586; else goto $l587;
        $l586:;
        if ((uint64_t) $tmp585 >= 1) goto $l584; else goto $l576;
        $l587:;
        if ((uint64_t) $tmp585 > 1) goto $l584; else goto $l576;
        $l584:;
        j569.value += 1;
        goto $l574;
        $l576:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp590, i550);
        return ((panda$core$String$Index$nullable) { $tmp590, true });
    }
    $l559:;
    if ($tmp562) goto $l592; else goto $l593;
    $l592:;
    int64_t $tmp594 = $tmp553 - i550.value;
    if ($tmp555) goto $l595; else goto $l596;
    $l595:;
    if ((uint64_t) $tmp594 >= $tmp554) goto $l591; else goto $l558;
    $l596:;
    if ((uint64_t) $tmp594 > $tmp554) goto $l591; else goto $l558;
    $l593:;
    int64_t $tmp598 = i550.value - $tmp553;
    if ($tmp555) goto $l599; else goto $l600;
    $l599:;
    if ((uint64_t) $tmp598 >= -$tmp554) goto $l591; else goto $l558;
    $l600:;
    if ((uint64_t) $tmp598 > -$tmp554) goto $l591; else goto $l558;
    $l591:;
    i550.value += $tmp554;
    goto $l556;
    $l558:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result602;
    panda$core$String$Index index605;
    panda$core$String$Index$nullable nextIndex609;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp611;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp613;
    panda$core$String$Index $tmp615;
    panda$core$String* tmp7617;
    panda$core$MutableString* $tmp603 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp603->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp603->refCount.value = 1;
    panda$core$MutableString$init($tmp603);
    result602 = $tmp603;
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
            panda$core$MutableString$append$panda$core$String(result602, $tmp612);
            goto $l608;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp613, index605, ((panda$core$String$Index) nextIndex609.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp614 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp613);
        panda$core$MutableString$append$panda$core$String(result602, $tmp614);
        panda$core$MutableString$append$panda$core$String(result602, p_replacement);
        panda$core$Int64 $tmp616 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex609.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp615, $tmp616);
        index605 = $tmp615;
    }
    }
    $l608:;
    {
        panda$core$String* $tmp618 = panda$core$MutableString$finish$R$panda$core$String(result602);
        tmp7617 = $tmp618;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
        return tmp7617;
    }
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp619;
    panda$core$String$Index$init$panda$core$Int64(&$tmp619, ((panda$core$Int64) { 0 }));
    return $tmp619;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp620;
    panda$core$String$Index$init$panda$core$Int64(&$tmp620, self->_length);
    return $tmp620;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c622;
    panda$core$String$Index $tmp625;
    panda$core$String$Index $tmp628;
    panda$core$String$Index $tmp631;
    panda$core$String$Index $tmp633;
    panda$core$Bit $tmp621 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp621.value);
    int64_t $tmp623 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c622 = $tmp623;
    bool $tmp624 = c622 >= 240;
    if (((panda$core$Bit) { $tmp624 }).value) {
    {
        panda$core$Int64 $tmp626 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp625, $tmp626);
        return $tmp625;
    }
    }
    bool $tmp627 = c622 >= 224;
    if (((panda$core$Bit) { $tmp627 }).value) {
    {
        panda$core$Int64 $tmp629 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp628, $tmp629);
        return $tmp628;
    }
    }
    bool $tmp630 = c622 >= 192;
    if (((panda$core$Bit) { $tmp630 }).value) {
    {
        panda$core$Int64 $tmp632 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp631, $tmp632);
        return $tmp631;
    }
    }
    panda$core$Int64 $tmp634 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp633, $tmp634);
    return $tmp633;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue636;
    panda$core$String$Index $tmp647;
    panda$core$Bit $tmp635 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp635.value);
    panda$core$Int64 $tmp637 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue636 = $tmp637;
    $l638:;
    int64_t $tmp641 = ((int64_t) self->data[newValue636.value].value) & 255;
    bool $tmp642 = $tmp641 >= 128;
    bool $tmp640 = $tmp642;
    if (!$tmp640) goto $l643;
    int64_t $tmp644 = ((int64_t) self->data[newValue636.value].value) & 255;
    bool $tmp645 = $tmp644 < 192;
    $tmp640 = $tmp645;
    $l643:;
    if (!((panda$core$Bit) { $tmp640 }).value) goto $l639;
    {
        panda$core$Int64 $tmp646 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue636, ((panda$core$Int64) { 1 }));
        newValue636 = $tmp646;
    }
    goto $l638;
    $l639:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp647, newValue636);
    return $tmp647;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result648;
    panda$core$Range$LTpanda$core$Int64$GT $tmp650;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp671;
    result648 = p_index;
    panda$core$Bit $tmp649 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp649.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp650, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp652 = $tmp650.min.value;
        panda$core$Int64 i651 = { $tmp652 };
        int64_t $tmp654 = $tmp650.max.value;
        bool $tmp655 = $tmp650.inclusive.value;
        if ($tmp655) goto $l662; else goto $l663;
        $l662:;
        if ($tmp652 <= $tmp654) goto $l656; else goto $l658;
        $l663:;
        if ($tmp652 < $tmp654) goto $l656; else goto $l658;
        $l656:;
        {
            panda$core$String$Index $tmp664 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result648);
            result648 = $tmp664;
        }
        $l659:;
        int64_t $tmp666 = $tmp654 - i651.value;
        if ($tmp655) goto $l667; else goto $l668;
        $l667:;
        if ((uint64_t) $tmp666 >= 1) goto $l665; else goto $l658;
        $l668:;
        if ((uint64_t) $tmp666 > 1) goto $l665; else goto $l658;
        $l665:;
        i651.value += 1;
        goto $l656;
        $l658:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp671, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp673 = $tmp671.start.value;
        panda$core$Int64 i672 = { $tmp673 };
        int64_t $tmp675 = $tmp671.end.value;
        int64_t $tmp676 = $tmp671.step.value;
        bool $tmp677 = $tmp671.inclusive.value;
        bool $tmp684 = $tmp676 > 0;
        if ($tmp684) goto $l682; else goto $l683;
        $l682:;
        if ($tmp677) goto $l685; else goto $l686;
        $l685:;
        if ($tmp673 <= $tmp675) goto $l678; else goto $l680;
        $l686:;
        if ($tmp673 < $tmp675) goto $l678; else goto $l680;
        $l683:;
        if ($tmp677) goto $l687; else goto $l688;
        $l687:;
        if ($tmp673 >= $tmp675) goto $l678; else goto $l680;
        $l688:;
        if ($tmp673 > $tmp675) goto $l678; else goto $l680;
        $l678:;
        {
            panda$core$String$Index $tmp690 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result648);
            result648 = $tmp690;
        }
        $l681:;
        if ($tmp684) goto $l692; else goto $l693;
        $l692:;
        int64_t $tmp694 = $tmp675 - i672.value;
        if ($tmp677) goto $l695; else goto $l696;
        $l695:;
        if ((uint64_t) $tmp694 >= $tmp676) goto $l691; else goto $l680;
        $l696:;
        if ((uint64_t) $tmp694 > $tmp676) goto $l691; else goto $l680;
        $l693:;
        int64_t $tmp698 = i672.value - $tmp675;
        if ($tmp677) goto $l699; else goto $l700;
        $l699:;
        if ((uint64_t) $tmp698 >= -$tmp676) goto $l691; else goto $l680;
        $l700:;
        if ((uint64_t) $tmp698 > -$tmp676) goto $l691; else goto $l680;
        $l691:;
        i672.value += $tmp676;
        goto $l678;
        $l680:;
    }
    }
    return result648;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp702;
    panda$core$Char32$init$panda$core$Int32(&$tmp702, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp703 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp702);
    return $tmp703;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp704 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp705 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp704, p_width);
    if ($tmp705.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp706 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp707 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp706);
    panda$core$String* $tmp708 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp707);
    panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp708);
    return $tmp709;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp710;
    panda$core$Char32$init$panda$core$Int32(&$tmp710, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp711 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp710);
    return $tmp711;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp712 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp713 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp712, p_width);
    if ($tmp713.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp714 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp715 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp714);
    panda$core$String* $tmp716 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp715);
    panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp716, self);
    return $tmp717;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp718;
    panda$core$Char32$init$panda$core$Int32(&$tmp718, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp719 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp718);
    return $tmp719;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 pad722;
    panda$core$Int64 left725;
    panda$core$Int64 right727;
    panda$core$Int64 $tmp720 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp721 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp720, p_width);
    if ($tmp721.value) {
    {
        return self;
    }
    }
    panda$core$Int64 $tmp723 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp724 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp723);
    pad722 = $tmp724;
    panda$core$Int64 $tmp726 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad722, ((panda$core$Int64) { 2 }));
    left725 = $tmp726;
    panda$core$Int64 $tmp728 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad722, left725);
    right727 = $tmp728;
    panda$core$String* $tmp729 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left725);
    panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, self);
    panda$core$String* $tmp731 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right727);
    panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, $tmp731);
    return $tmp732;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp733 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp733;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result734;
    panda$core$String$Index index737;
    panda$core$String$Index$nullable nextIndex741;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp750;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp752;
    panda$core$String$Index $tmp754;
    panda$collections$Array* tmp8756;
    panda$collections$Array* $tmp735 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp735->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp735->refCount.value = 1;
    panda$collections$Array$init($tmp735);
    result734 = $tmp735;
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
        panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result734->count, $tmp747);
        $tmp745 = $tmp748.value;
        $l746:;
        panda$core$Bit $tmp749 = { $tmp745 };
        if ($tmp749.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp750, ((panda$core$String$Index$nullable) { index737, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp751 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp750);
            panda$collections$Array$add$panda$collections$Array$T(result734, ((panda$core$Object*) $tmp751));
            goto $l740;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp752, index737, ((panda$core$String$Index) nextIndex741.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp753 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp752);
        panda$collections$Array$add$panda$collections$Array$T(result734, ((panda$core$Object*) $tmp753));
        panda$core$Int64 $tmp755 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex741.value).value, p_delimiter->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp754, $tmp755);
        index737 = $tmp754;
    }
    }
    $l740:;
    {
        tmp8756 = result734;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result734));
        return tmp8756;
    }
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result758;
    panda$core$Int64 start759;
    panda$core$Char8 $tmp760;
    panda$core$Range$LTpanda$core$Int64$GT $tmp762;
    panda$core$Int64 digit776;
    panda$core$Char8 $tmp791;
    panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp757.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result758 = ((panda$core$Int64) { 0 });
    memset(&start759, 0, sizeof(start759));
    panda$core$Char8$init$panda$core$UInt8(&$tmp760, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp761 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp760);
    if ($tmp761.value) {
    {
        start759 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start759 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp762, start759, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp764 = $tmp762.min.value;
    panda$core$Int64 i763 = { $tmp764 };
    int64_t $tmp766 = $tmp762.max.value;
    bool $tmp767 = $tmp762.inclusive.value;
    if ($tmp767) goto $l774; else goto $l775;
    $l774:;
    if ($tmp764 <= $tmp766) goto $l768; else goto $l770;
    $l775:;
    if ($tmp764 < $tmp766) goto $l768; else goto $l770;
    $l768:;
    {
        panda$core$Int64 $tmp777 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i763.value].value) }), ((panda$core$Int64) { 48 }));
        digit776 = $tmp777;
        panda$core$Bit $tmp779 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit776, ((panda$core$Int64) { 0 }));
        bool $tmp778 = $tmp779.value;
        if ($tmp778) goto $l780;
        panda$core$Bit $tmp781 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit776, ((panda$core$Int64) { 9 }));
        $tmp778 = $tmp781.value;
        $l780:;
        panda$core$Bit $tmp782 = { $tmp778 };
        if ($tmp782.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp783 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result758, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp784 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp783, digit776);
        result758 = $tmp784;
    }
    $l771:;
    int64_t $tmp786 = $tmp766 - i763.value;
    if ($tmp767) goto $l787; else goto $l788;
    $l787:;
    if ((uint64_t) $tmp786 >= 1) goto $l785; else goto $l770;
    $l788:;
    if ((uint64_t) $tmp786 > 1) goto $l785; else goto $l770;
    $l785:;
    i763.value += 1;
    goto $l768;
    $l770:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp791, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp792 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp791);
    if ($tmp792.value) {
    {
        panda$core$Int64 $tmp793 = panda$core$Int64$$SUB$R$panda$core$Int64(result758);
        result758 = $tmp793;
    }
    }
    return ((panda$core$Int64$nullable) { result758, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result795;
    panda$core$Range$LTpanda$core$Int64$GT $tmp796;
    panda$core$UInt64 digit810;
    panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp794.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result795 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp796, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp798 = $tmp796.min.value;
    panda$core$Int64 i797 = { $tmp798 };
    int64_t $tmp800 = $tmp796.max.value;
    bool $tmp801 = $tmp796.inclusive.value;
    if ($tmp801) goto $l808; else goto $l809;
    $l808:;
    if ($tmp798 <= $tmp800) goto $l802; else goto $l804;
    $l809:;
    if ($tmp798 < $tmp800) goto $l802; else goto $l804;
    $l802:;
    {
        panda$core$UInt64 $tmp811 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i797.value].value) }), ((panda$core$UInt64) { 48 }));
        digit810 = $tmp811;
        panda$core$Bit $tmp813 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit810, ((panda$core$UInt64) { 0 }));
        bool $tmp812 = $tmp813.value;
        if ($tmp812) goto $l814;
        panda$core$Bit $tmp815 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit810, ((panda$core$UInt64) { 9 }));
        $tmp812 = $tmp815.value;
        $l814:;
        panda$core$Bit $tmp816 = { $tmp812 };
        if ($tmp816.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp817 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result795, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp818 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp817, digit810);
        result795 = $tmp818;
    }
    $l805:;
    int64_t $tmp820 = $tmp800 - i797.value;
    if ($tmp801) goto $l821; else goto $l822;
    $l821:;
    if ((uint64_t) $tmp820 >= 1) goto $l819; else goto $l804;
    $l822:;
    if ((uint64_t) $tmp820 > 1) goto $l819; else goto $l804;
    $l819:;
    i797.value += 1;
    goto $l802;
    $l804:;
    return ((panda$core$UInt64$nullable) { result795, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h826;
    panda$core$Range$LTpanda$core$Int64$GT $tmp827;
    panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp825.value) {
    {
        h826 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp827, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp829 = $tmp827.min.value;
        panda$core$Int64 i828 = { $tmp829 };
        int64_t $tmp831 = $tmp827.max.value;
        bool $tmp832 = $tmp827.inclusive.value;
        if ($tmp832) goto $l839; else goto $l840;
        $l839:;
        if ($tmp829 <= $tmp831) goto $l833; else goto $l835;
        $l840:;
        if ($tmp829 < $tmp831) goto $l833; else goto $l835;
        $l833:;
        {
            panda$core$Int64 $tmp841 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h826, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp842 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp841, ((panda$core$Int64) { ((int64_t) self->data[i828.value].value) }));
            h826 = $tmp842;
        }
        $l836:;
        int64_t $tmp844 = $tmp831 - i828.value;
        if ($tmp832) goto $l845; else goto $l846;
        $l845:;
        if ((uint64_t) $tmp844 >= 1) goto $l843; else goto $l835;
        $l846:;
        if ((uint64_t) $tmp844 > 1) goto $l843; else goto $l835;
        $l843:;
        i828.value += 1;
        goto $l833;
        $l835:;
        self->_hash = h826;
    }
    }
    return self->_hash;
}

