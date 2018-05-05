#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
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
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
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


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn58)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn65)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn133)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn273)(panda$core$Object*);
typedef panda$core$String* (*$fn309)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        panda$core$String* $tmp2 = self->owner;
        panda$core$String* $tmp3 = NULL;
        self->owner = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        panda$core$String* $tmp4 = self->owner;
        panda$core$String* $tmp5 = p_owner;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    ITable* $tmp6 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp9;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp10, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp12 = $tmp10.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp10.max.value;
    bool $tmp15 = $tmp10.inclusive.value;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        ITable* $tmp25 = p_chars->$class->itable;
        while ($tmp25->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp25 = $tmp25->next;
        }
        $fn27 $tmp26 = $tmp25->methods[0];
        panda$core$Object* $tmp28 = $tmp26(p_chars, i11);
        panda$core$Object* $tmp24 = $tmp28;
        self->data[i11.value] = ((panda$core$Char8$wrapper*) $tmp24)->value;
        panda$core$Panda$unref$panda$core$Object($tmp24);
    }
    $l19:;
    int64_t $tmp30 = $tmp14 - i11.value;
    if ($tmp15) goto $l31; else goto $l32;
    $l31:;
    if ((uint64_t) $tmp30 >= 1) goto $l29; else goto $l18;
    $l32:;
    if ((uint64_t) $tmp30 > 1) goto $l29; else goto $l18;
    $l29:;
    i11.value += 1;
    goto $l16;
    $l18:;
    {
        panda$core$String* $tmp35 = self->owner;
        panda$core$String* $tmp36 = NULL;
        self->owner = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $tmp38 = self;
    panda$core$String* $tmp37 = $tmp38;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
    return $tmp37;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$231_939;
    panda$core$MutableString* result46;
    panda$collections$Iterator* Iter$236$1751;
    panda$core$Char8 c68;
    panda$core$Char8 $match$237_2174;
    panda$core$Char8 $tmp75;
    panda$core$Char8 $tmp78;
    panda$core$Char8 $tmp81;
    panda$core$Char8 $tmp84;
    panda$core$Char8 $tmp87;
    panda$core$Char8 $tmp97;
    panda$core$Char8 $tmp98;
    panda$core$String* tmp199;
    {
        $match$231_939 = p_fmt;
        panda$core$Bit $tmp41 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$231_939, &$s40);
        if ($tmp41.value) {
        {
            panda$core$String* $tmp43 = self;
            panda$core$String* $tmp42 = $tmp43;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
            return $tmp42;
        }
        }
        else {
        panda$core$Bit $tmp45 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$231_939, &$s44);
        if ($tmp45.value) {
        {
            panda$core$MutableString* $tmp49 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp49, &$s50);
            panda$core$MutableString* $tmp48 = $tmp49;
            panda$core$MutableString* $tmp47 = $tmp48;
            result46 = $tmp47;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            {
                panda$collections$ListView* $tmp55 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(self);
                panda$collections$ListView* $tmp54 = $tmp55;
                ITable* $tmp56 = ((panda$collections$Iterable*) $tmp54)->$class->itable;
                while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp56 = $tmp56->next;
                }
                $fn58 $tmp57 = $tmp56->methods[0];
                panda$collections$Iterator* $tmp59 = $tmp57(((panda$collections$Iterable*) $tmp54));
                panda$collections$Iterator* $tmp53 = $tmp59;
                panda$collections$Iterator* $tmp52 = $tmp53;
                Iter$236$1751 = $tmp52;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                $l60:;
                ITable* $tmp63 = Iter$236$1751->$class->itable;
                while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp63 = $tmp63->next;
                }
                $fn65 $tmp64 = $tmp63->methods[0];
                panda$core$Bit $tmp66 = $tmp64(Iter$236$1751);
                panda$core$Bit $tmp67 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp66);
                bool $tmp62 = $tmp67.value;
                if (!$tmp62) goto $l61;
                {
                    ITable* $tmp70 = Iter$236$1751->$class->itable;
                    while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp70 = $tmp70->next;
                    }
                    $fn72 $tmp71 = $tmp70->methods[1];
                    panda$core$Object* $tmp73 = $tmp71(Iter$236$1751);
                    panda$core$Object* $tmp69 = $tmp73;
                    c68 = ((panda$core$Char8$wrapper*) $tmp69)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp69);
                    {
                        $match$237_2174 = c68;
                        panda$core$Char8$init$panda$core$UInt8(&$tmp75, ((panda$core$UInt8) { 34 }));
                        panda$core$Bit $tmp76 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$237_2174, $tmp75);
                        if ($tmp76.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result46, &$s77);
                        }
                        }
                        else {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp78, ((panda$core$UInt8) { 92 }));
                        panda$core$Bit $tmp79 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$237_2174, $tmp78);
                        if ($tmp79.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result46, &$s80);
                        }
                        }
                        else {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp81, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp82 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$237_2174, $tmp81);
                        if ($tmp82.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result46, &$s83);
                        }
                        }
                        else {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp84, ((panda$core$UInt8) { 13 }));
                        panda$core$Bit $tmp85 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$237_2174, $tmp84);
                        if ($tmp85.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result46, &$s86);
                        }
                        }
                        else {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp87, ((panda$core$UInt8) { 9 }));
                        panda$core$Bit $tmp88 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$237_2174, $tmp87);
                        if ($tmp88.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result46, &$s89);
                        }
                        }
                        else {
                        {
                            panda$core$UInt8 $tmp91 = panda$core$Char8$convert$R$panda$core$UInt8(c68);
                            panda$core$Bit $tmp92 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit($tmp91, ((panda$core$UInt8) { 32 }));
                            bool $tmp90 = $tmp92.value;
                            if (!$tmp90) goto $l93;
                            panda$core$UInt8 $tmp94 = panda$core$Char8$convert$R$panda$core$UInt8(c68);
                            panda$core$Bit $tmp95 = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit($tmp94, ((panda$core$UInt8) { 126 }));
                            $tmp90 = $tmp95.value;
                            $l93:;
                            panda$core$Bit $tmp96 = { $tmp90 };
                            if ($tmp96.value) {
                            {
                                panda$core$MutableString$append$panda$core$Char8(result46, c68);
                            }
                            }
                            else {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { 63 }));
                                panda$core$MutableString$append$panda$core$Char8(result46, $tmp97);
                            }
                            }
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                }
                goto $l60;
                $l61:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$236$1751));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp98, ((panda$core$UInt8) { 34 }));
            panda$core$MutableString$append$panda$core$Char8(result46, $tmp98);
            {
                panda$core$String* $tmp102 = panda$core$MutableString$finish$R$panda$core$String(result46);
                panda$core$String* $tmp101 = $tmp102;
                panda$core$String* $tmp100 = $tmp101;
                tmp199 = $tmp100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result46));
                panda$core$String* $tmp103 = tmp199;
                return $tmp103;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
    }
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
    panda$core$String$UTF8List* $tmp107 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp107, self);
    panda$core$String$UTF8List* $tmp106 = $tmp107;
    panda$collections$ListView* $tmp105 = ((panda$collections$ListView*) $tmp106);
    panda$collections$ListView* $tmp104 = $tmp105;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    return $tmp104;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp111 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp111, self);
    panda$core$String$UTF16Iterator* $tmp110 = $tmp111;
    panda$collections$Iterator* $tmp109 = ((panda$collections$Iterator*) $tmp110);
    panda$collections$Iterator* $tmp108 = $tmp109;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    return $tmp108;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp115 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp115, self);
    panda$core$String$UTF32Iterator* $tmp114 = $tmp115;
    panda$collections$Iterator* $tmp113 = ((panda$collections$Iterator*) $tmp114);
    panda$collections$Iterator* $tmp112 = $tmp113;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    return $tmp112;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count116;
    panda$collections$Iterator* iter117;
    panda$core$Int64 tmp2135;
    count116 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp120 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    panda$collections$Iterator* $tmp119 = $tmp120;
    panda$collections$Iterator* $tmp118 = $tmp119;
    iter117 = $tmp118;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    $l121:;
    ITable* $tmp124 = iter117->$class->itable;
    while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp124 = $tmp124->next;
    }
    $fn126 $tmp125 = $tmp124->methods[0];
    panda$core$Bit $tmp127 = $tmp125(iter117);
    panda$core$Bit $tmp128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp127);
    bool $tmp123 = $tmp128.value;
    if (!$tmp123) goto $l122;
    {
        panda$core$Int64 $tmp129 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count116, ((panda$core$Int64) { 1 }));
        count116 = $tmp129;
        ITable* $tmp131 = iter117->$class->itable;
        while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp131 = $tmp131->next;
        }
        $fn133 $tmp132 = $tmp131->methods[1];
        panda$core$Object* $tmp134 = $tmp132(iter117);
        panda$core$Object* $tmp130 = $tmp134;
        panda$core$Panda$unref$panda$core$Object($tmp130);
    }
    goto $l121;
    $l122:;
    {
        tmp2135 = count116;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter117));
        panda$core$Int64 $tmp136 = tmp2135;
        return $tmp136;
    }
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp137 = self->_length;
    return $tmp137;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp140;
    panda$core$Bit $tmp138 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp138.value) {
    {
        panda$core$Bit $tmp139 = ((panda$core$Bit) { false });
        return $tmp139;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp140, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp142 = $tmp140.min.value;
    panda$core$Int64 i141 = { $tmp142 };
    int64_t $tmp144 = $tmp140.max.value;
    bool $tmp145 = $tmp140.inclusive.value;
    if ($tmp145) goto $l152; else goto $l153;
    $l152:;
    if ($tmp142 <= $tmp144) goto $l146; else goto $l148;
    $l153:;
    if ($tmp142 < $tmp144) goto $l146; else goto $l148;
    $l146:;
    {
        panda$core$Bit $tmp154 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i141.value], p_other->data[i141.value]);
        if ($tmp154.value) {
        {
            panda$core$Bit $tmp155 = ((panda$core$Bit) { false });
            return $tmp155;
        }
        }
    }
    $l149:;
    int64_t $tmp157 = $tmp144 - i141.value;
    if ($tmp145) goto $l158; else goto $l159;
    $l158:;
    if ((uint64_t) $tmp157 >= 1) goto $l156; else goto $l148;
    $l159:;
    if ((uint64_t) $tmp157 > 1) goto $l156; else goto $l148;
    $l156:;
    i141.value += 1;
    goto $l146;
    $l148:;
    panda$core$Bit $tmp162 = ((panda$core$Bit) { true });
    return $tmp162;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp165;
    panda$core$Bit $tmp163 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp163.value) {
    {
        panda$core$Bit $tmp164 = ((panda$core$Bit) { false });
        return $tmp164;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp165, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp167 = $tmp165.min.value;
    panda$core$Int64 i166 = { $tmp167 };
    int64_t $tmp169 = $tmp165.max.value;
    bool $tmp170 = $tmp165.inclusive.value;
    if ($tmp170) goto $l177; else goto $l178;
    $l177:;
    if ($tmp167 <= $tmp169) goto $l171; else goto $l173;
    $l178:;
    if ($tmp167 < $tmp169) goto $l171; else goto $l173;
    $l171:;
    {
        panda$core$Int64 $tmp179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp180 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp179, i166);
        panda$core$Bit $tmp181 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp180.value], p_other->data[i166.value]);
        if ($tmp181.value) {
        {
            panda$core$Bit $tmp182 = ((panda$core$Bit) { false });
            return $tmp182;
        }
        }
    }
    $l174:;
    int64_t $tmp184 = $tmp169 - i166.value;
    if ($tmp170) goto $l185; else goto $l186;
    $l185:;
    if ((uint64_t) $tmp184 >= 1) goto $l183; else goto $l173;
    $l186:;
    if ((uint64_t) $tmp184 > 1) goto $l183; else goto $l173;
    $l183:;
    i166.value += 1;
    goto $l171;
    $l173:;
    panda$core$Bit $tmp189 = ((panda$core$Bit) { true });
    return $tmp189;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start193;
    panda$core$Int64 end203;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp217;
    panda$core$String$Index $tmp218;
    panda$core$String$Index $tmp219;
    panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp190.value) {
    {
        panda$core$String* $tmp192 = self;
        panda$core$String* $tmp191 = $tmp192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
        return $tmp191;
    }
    }
    start193 = ((panda$core$Int64) { 0 });
    $l194:;
    panda$core$Bit $tmp198 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start193, self->_length);
    bool $tmp197 = $tmp198.value;
    if (!$tmp197) goto $l199;
    panda$core$Bit $tmp200 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start193.value]);
    $tmp197 = $tmp200.value;
    $l199:;
    panda$core$Bit $tmp201 = { $tmp197 };
    bool $tmp196 = $tmp201.value;
    if (!$tmp196) goto $l195;
    {
        panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start193, ((panda$core$Int64) { 1 }));
        start193 = $tmp202;
    }
    goto $l194;
    $l195:;
    panda$core$Int64 $tmp204 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end203 = $tmp204;
    $l205:;
    panda$core$Bit $tmp209 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end203, start193);
    bool $tmp208 = $tmp209.value;
    if (!$tmp208) goto $l210;
    panda$core$Bit $tmp211 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end203.value]);
    $tmp208 = $tmp211.value;
    $l210:;
    panda$core$Bit $tmp212 = { $tmp208 };
    bool $tmp207 = $tmp212.value;
    if (!$tmp207) goto $l206;
    {
        panda$core$Int64 $tmp213 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end203, ((panda$core$Int64) { 1 }));
        end203 = $tmp213;
    }
    goto $l205;
    $l206:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp218, start193);
    panda$core$String$Index$init$panda$core$Int64(&$tmp219, end203);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp217, $tmp218, $tmp219, ((panda$core$Bit) { true }));
    panda$core$String* $tmp220 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp217);
    panda$core$String* $tmp216 = $tmp220;
    panda$core$String* $tmp215 = $tmp216;
    panda$core$String* $tmp214 = $tmp215;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
    return $tmp214;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result221;
    panda$core$Range$LTpanda$core$Int64$GT $tmp223;
    panda$core$Range$LTpanda$core$Int64$GT $tmp243;
    panda$core$Int64 $tmp222 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result221 = ((panda$core$Char8*) pandaZAlloc($tmp222.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp223, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp225 = $tmp223.min.value;
    panda$core$Int64 i224 = { $tmp225 };
    int64_t $tmp227 = $tmp223.max.value;
    bool $tmp228 = $tmp223.inclusive.value;
    if ($tmp228) goto $l235; else goto $l236;
    $l235:;
    if ($tmp225 <= $tmp227) goto $l229; else goto $l231;
    $l236:;
    if ($tmp225 < $tmp227) goto $l229; else goto $l231;
    $l229:;
    {
        result221[i224.value] = self->data[i224.value];
    }
    $l232:;
    int64_t $tmp238 = $tmp227 - i224.value;
    if ($tmp228) goto $l239; else goto $l240;
    $l239:;
    if ((uint64_t) $tmp238 >= 1) goto $l237; else goto $l231;
    $l240:;
    if ((uint64_t) $tmp238 > 1) goto $l237; else goto $l231;
    $l237:;
    i224.value += 1;
    goto $l229;
    $l231:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp243, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp245 = $tmp243.min.value;
    panda$core$Int64 i244 = { $tmp245 };
    int64_t $tmp247 = $tmp243.max.value;
    bool $tmp248 = $tmp243.inclusive.value;
    if ($tmp248) goto $l255; else goto $l256;
    $l255:;
    if ($tmp245 <= $tmp247) goto $l249; else goto $l251;
    $l256:;
    if ($tmp245 < $tmp247) goto $l249; else goto $l251;
    $l249:;
    {
        panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i244);
        result221[$tmp257.value] = p_other->data[i244.value];
    }
    $l252:;
    int64_t $tmp259 = $tmp247 - i244.value;
    if ($tmp248) goto $l260; else goto $l261;
    $l260:;
    if ((uint64_t) $tmp259 >= 1) goto $l258; else goto $l251;
    $l261:;
    if ((uint64_t) $tmp259 > 1) goto $l258; else goto $l251;
    $l258:;
    i244.value += 1;
    goto $l249;
    $l251:;
    panda$core$String* $tmp267 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp267, result221, $tmp268);
    panda$core$String* $tmp266 = $tmp267;
    panda$core$String* $tmp265 = $tmp266;
    panda$core$String* $tmp264 = $tmp265;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    return $tmp264;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp274 = (($fn273) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp272 = $tmp274;
    panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp272);
    panda$core$String* $tmp271 = $tmp275;
    panda$core$String* $tmp270 = $tmp271;
    panda$core$String* $tmp269 = $tmp270;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
    return $tmp269;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result276;
    panda$core$Range$LTpanda$core$Int64$GT $tmp280;
    panda$core$String* tmp3300;
    panda$core$MutableString* $tmp279 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp279);
    panda$core$MutableString* $tmp278 = $tmp279;
    panda$core$MutableString* $tmp277 = $tmp278;
    result276 = $tmp277;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp280, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp282 = $tmp280.min.value;
    panda$core$Int64 i281 = { $tmp282 };
    int64_t $tmp284 = $tmp280.max.value;
    bool $tmp285 = $tmp280.inclusive.value;
    if ($tmp285) goto $l292; else goto $l293;
    $l292:;
    if ($tmp282 <= $tmp284) goto $l286; else goto $l288;
    $l293:;
    if ($tmp282 < $tmp284) goto $l286; else goto $l288;
    $l286:;
    {
        panda$core$MutableString$append$panda$core$String(result276, self);
    }
    $l289:;
    int64_t $tmp295 = $tmp284 - i281.value;
    if ($tmp285) goto $l296; else goto $l297;
    $l296:;
    if ((uint64_t) $tmp295 >= 1) goto $l294; else goto $l288;
    $l297:;
    if ((uint64_t) $tmp295 > 1) goto $l294; else goto $l288;
    $l294:;
    i281.value += 1;
    goto $l286;
    $l288:;
    {
        panda$core$String* $tmp303 = panda$core$MutableString$finish$R$panda$core$String(result276);
        panda$core$String* $tmp302 = $tmp303;
        panda$core$String* $tmp301 = $tmp302;
        tmp3300 = $tmp301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result276));
        panda$core$String* $tmp304 = tmp3300;
        return $tmp304;
    }
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp310 = (($fn309) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp308 = $tmp310;
    panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, p_s);
    panda$core$String* $tmp307 = $tmp311;
    panda$core$String* $tmp306 = $tmp307;
    panda$core$String* $tmp305 = $tmp306;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
    return $tmp305;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp314;
    panda$core$Bit $tmp312 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp312.value) {
    {
        panda$core$Bit $tmp313 = ((panda$core$Bit) { false });
        return $tmp313;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp314, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp316 = $tmp314.min.value;
    panda$core$Int64 i315 = { $tmp316 };
    int64_t $tmp318 = $tmp314.max.value;
    bool $tmp319 = $tmp314.inclusive.value;
    if ($tmp319) goto $l326; else goto $l327;
    $l326:;
    if ($tmp316 <= $tmp318) goto $l320; else goto $l322;
    $l327:;
    if ($tmp316 < $tmp318) goto $l320; else goto $l322;
    $l320:;
    {
        panda$core$Bit $tmp328 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i315.value], p_other->data[i315.value]);
        if ($tmp328.value) {
        {
            panda$core$Bit $tmp329 = ((panda$core$Bit) { false });
            return $tmp329;
        }
        }
    }
    $l323:;
    int64_t $tmp331 = $tmp318 - i315.value;
    if ($tmp319) goto $l332; else goto $l333;
    $l332:;
    if ((uint64_t) $tmp331 >= 1) goto $l330; else goto $l322;
    $l333:;
    if ((uint64_t) $tmp331 > 1) goto $l330; else goto $l322;
    $l330:;
    i315.value += 1;
    goto $l320;
    $l322:;
    panda$core$Bit $tmp336 = ((panda$core$Bit) { true });
    return $tmp336;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp339 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp338);
    panda$core$Bit $tmp337 = $tmp339;
    return $tmp337;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx340;
    panda$core$Char8 c341;
    panda$core$Int32 result342;
    panda$core$Char32 $tmp347;
    panda$core$Char32 $tmp359;
    panda$core$Char32 $tmp376;
    panda$core$Char32 $tmp396;
    idx340 = p_index.value;
    c341 = self->data[idx340.value];
    panda$core$Int32 $tmp343 = panda$core$Char8$convert$R$panda$core$Int32(c341);
    result342 = $tmp343;
    int64_t $tmp344 = ((int64_t) c341.value) & 255;
    bool $tmp345 = $tmp344 < 192;
    if (((panda$core$Bit) { $tmp345 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp347, result342);
        panda$core$Char32 $tmp346 = $tmp347;
        return $tmp346;
    }
    }
    int64_t $tmp348 = ((int64_t) c341.value) & 255;
    bool $tmp349 = $tmp348 < 224;
    if (((panda$core$Bit) { $tmp349 }).value) {
    {
        panda$core$Int64 $tmp350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp351 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp350, self->_length);
        PANDA_ASSERT($tmp351.value);
        panda$core$Int32 $tmp352 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result342, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp353 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp352, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp354 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp355 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp354.value]);
        panda$core$Int32 $tmp356 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp355, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp357 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp353, $tmp356);
        result342 = $tmp357;
        panda$core$Char32$init$panda$core$Int32(&$tmp359, result342);
        panda$core$Char32 $tmp358 = $tmp359;
        return $tmp358;
    }
    }
    int64_t $tmp360 = ((int64_t) c341.value) & 255;
    bool $tmp361 = $tmp360 < 240;
    if (((panda$core$Bit) { $tmp361 }).value) {
    {
        panda$core$Int64 $tmp362 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp363 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp362, self->_length);
        PANDA_ASSERT($tmp363.value);
        panda$core$Int32 $tmp364 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result342, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp365 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp364, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp367 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp366.value]);
        panda$core$Int32 $tmp368 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp367, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp369 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp368, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp370 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp365, $tmp369);
        panda$core$Int64 $tmp371 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp372 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp371.value]);
        panda$core$Int32 $tmp373 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp372, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp374 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp370, $tmp373);
        result342 = $tmp374;
        panda$core$Char32$init$panda$core$Int32(&$tmp376, result342);
        panda$core$Char32 $tmp375 = $tmp376;
        return $tmp375;
    }
    }
    panda$core$Int64 $tmp377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp378 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp377, self->_length);
    PANDA_ASSERT($tmp378.value);
    panda$core$Int32 $tmp379 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result342, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp380 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp379, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp381 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp382 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp381.value]);
    panda$core$Int32 $tmp383 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp382, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp384 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp383, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp385 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp380, $tmp384);
    panda$core$Int64 $tmp386 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp387 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp386.value]);
    panda$core$Int32 $tmp388 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp387, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp389 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp388, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp390 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp385, $tmp389);
    panda$core$Int64 $tmp391 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx340, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp392 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp391.value]);
    panda$core$Int32 $tmp393 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp392, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp394 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp390, $tmp393);
    result342 = $tmp394;
    panda$core$Char32$init$panda$core$Int32(&$tmp396, result342);
    panda$core$Char32 $tmp395 = $tmp396;
    return $tmp395;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp398 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp399 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp398, p_index);
    panda$core$Char32 $tmp400 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp399);
    panda$core$Char32 $tmp397 = $tmp400;
    return $tmp397;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $tmp404 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp405 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp404, (self->data + p_r.min.value.value), $tmp405, self);
    panda$core$String* $tmp403 = $tmp404;
    panda$core$String* $tmp402 = $tmp403;
    panda$core$String* $tmp401 = $tmp402;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    return $tmp401;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min406;
    panda$core$String$Index max408;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp414;
    memset(&min406, 0, sizeof(min406));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min406 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp407 = panda$core$String$start$R$panda$core$String$Index(self);
        min406 = $tmp407;
    }
    }
    memset(&max408, 0, sizeof(max408));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max408 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp409 = panda$core$String$end$R$panda$core$String$Index(self);
        max408 = $tmp409;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp410 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max408);
            max408 = $tmp410;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp414, min406, max408, p_r.inclusive);
    panda$core$String* $tmp415 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp414);
    panda$core$String* $tmp413 = $tmp415;
    panda$core$String* $tmp412 = $tmp413;
    panda$core$String* $tmp411 = $tmp412;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
    return $tmp411;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current416;
    panda$core$MutableString* result417;
    panda$core$Int64 max421;
    panda$core$Char8 c427;
    panda$core$String* tmp4438;
    current416 = p_r.min.value;
    panda$core$MutableString* $tmp420 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp420);
    panda$core$MutableString* $tmp419 = $tmp420;
    panda$core$MutableString* $tmp418 = $tmp419;
    result417 = $tmp418;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
    max421 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp422 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max421, ((panda$core$Int64) { 1 }));
        max421 = $tmp422;
    }
    }
    $l423:;
    panda$core$Bit $tmp426 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current416, max421);
    bool $tmp425 = $tmp426.value;
    if (!$tmp425) goto $l424;
    {
        c427 = self->data[current416.value];
        panda$core$MutableString$append$panda$core$Char8(result417, c427);
        panda$core$Int64 $tmp428 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current416, ((panda$core$Int64) { 1 }));
        current416 = $tmp428;
        int64_t $tmp429 = ((int64_t) c427.value) & 255;
        bool $tmp430 = $tmp429 >= 192;
        if (((panda$core$Bit) { $tmp430 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result417, self->data[current416.value]);
            panda$core$Int64 $tmp431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current416, ((panda$core$Int64) { 1 }));
            current416 = $tmp431;
        }
        }
        int64_t $tmp432 = ((int64_t) c427.value) & 255;
        bool $tmp433 = $tmp432 >= 224;
        if (((panda$core$Bit) { $tmp433 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result417, self->data[current416.value]);
            panda$core$Int64 $tmp434 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current416, ((panda$core$Int64) { 1 }));
            current416 = $tmp434;
        }
        }
        int64_t $tmp435 = ((int64_t) c427.value) & 255;
        bool $tmp436 = $tmp435 >= 240;
        if (((panda$core$Bit) { $tmp436 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result417, self->data[current416.value]);
            panda$core$Int64 $tmp437 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current416, ((panda$core$Int64) { 1 }));
            current416 = $tmp437;
        }
        }
    }
    goto $l423;
    $l424:;
    {
        panda$core$String* $tmp441 = panda$core$MutableString$finish$R$panda$core$String(result417);
        panda$core$String* $tmp440 = $tmp441;
        panda$core$String* $tmp439 = $tmp440;
        tmp4438 = $tmp439;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result417));
        panda$core$String* $tmp442 = tmp4438;
        return $tmp442;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min447;
    panda$core$String$Index max449;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp455;
    panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp443.value) {
    {
        panda$core$String* $tmp445 = &$s446;
        panda$core$String* $tmp444 = $tmp445;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
        return $tmp444;
    }
    }
    memset(&min447, 0, sizeof(min447));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min447 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp448 = panda$core$String$start$R$panda$core$String$Index(self);
        min447 = $tmp448;
    }
    }
    memset(&max449, 0, sizeof(max449));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max449 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp450 = panda$core$String$end$R$panda$core$String$Index(self);
        max449 = $tmp450;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp451 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max449);
            max449 = $tmp451;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp455, min447, max449, p_r.inclusive);
    panda$core$String* $tmp456 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp455);
    panda$core$String* $tmp454 = $tmp456;
    panda$core$String* $tmp453 = $tmp454;
    panda$core$String* $tmp452 = $tmp453;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
    return $tmp452;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step461;
    panda$core$Int64 current462;
    panda$core$Int64 end467;
    panda$core$MutableString* result471;
    panda$core$Char8 c480;
    panda$core$Range$LTpanda$core$Int64$GT $tmp491;
    panda$core$String* tmp5506;
    panda$core$String$Index $tmp511;
    panda$core$Char8 c524;
    panda$core$Int64 old525;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp546;
    panda$core$String* tmp6566;
    panda$core$String$Index $tmp571;
    panda$core$Char8 c595;
    panda$core$String* tmp7605;
    panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp457.value) {
    {
        panda$core$String* $tmp459 = &$s460;
        panda$core$String* $tmp458 = $tmp459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
        return $tmp458;
    }
    }
    step461 = p_r.step;
    memset(&current462, 0, sizeof(current462));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current462 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp463 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step461, ((panda$core$Int64) { 0 }));
    if ($tmp463.value) {
    {
        panda$core$String$Index $tmp464 = panda$core$String$start$R$panda$core$String$Index(self);
        current462 = $tmp464.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp465 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp466 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp465);
        current462 = $tmp466.value;
    }
    }
    }
    memset(&end467, 0, sizeof(end467));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end467 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp468 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step461, ((panda$core$Int64) { 0 }));
    if ($tmp468.value) {
    {
        panda$core$String$Index $tmp469 = panda$core$String$end$R$panda$core$String$Index(self);
        end467 = $tmp469.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp470 = panda$core$String$start$R$panda$core$String$Index(self);
        end467 = $tmp470.value;
    }
    }
    }
    panda$core$MutableString* $tmp474 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp474);
    panda$core$MutableString* $tmp473 = $tmp474;
    panda$core$MutableString* $tmp472 = $tmp473;
    result471 = $tmp472;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
    panda$core$Bit $tmp475 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp475.value) {
    {
        $l476:;
        panda$core$Bit $tmp479 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current462, end467);
        bool $tmp478 = $tmp479.value;
        if (!$tmp478) goto $l477;
        {
            c480 = self->data[current462.value];
            panda$core$MutableString$append$panda$core$Char8(result471, c480);
            panda$core$Int64 $tmp481 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
            current462 = $tmp481;
            int64_t $tmp482 = ((int64_t) c480.value) & 255;
            bool $tmp483 = $tmp482 >= 192;
            if (((panda$core$Bit) { $tmp483 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
                panda$core$Int64 $tmp484 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
                current462 = $tmp484;
            }
            }
            int64_t $tmp485 = ((int64_t) c480.value) & 255;
            bool $tmp486 = $tmp485 >= 224;
            if (((panda$core$Bit) { $tmp486 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
                panda$core$Int64 $tmp487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
                current462 = $tmp487;
            }
            }
            int64_t $tmp488 = ((int64_t) c480.value) & 255;
            bool $tmp489 = $tmp488 >= 240;
            if (((panda$core$Bit) { $tmp489 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
                panda$core$Int64 $tmp490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
                current462 = $tmp490;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp491, ((panda$core$Int64) { 1 }), step461, ((panda$core$Bit) { false }));
            int64_t $tmp493 = $tmp491.min.value;
            panda$core$Int64 i492 = { $tmp493 };
            int64_t $tmp495 = $tmp491.max.value;
            bool $tmp496 = $tmp491.inclusive.value;
            if ($tmp496) goto $l503; else goto $l504;
            $l503:;
            if ($tmp493 <= $tmp495) goto $l497; else goto $l499;
            $l504:;
            if ($tmp493 < $tmp495) goto $l497; else goto $l499;
            $l497:;
            {
                panda$core$Bit $tmp505 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current462, end467);
                if ($tmp505.value) {
                {
                    {
                        panda$core$String* $tmp509 = panda$core$MutableString$convert$R$panda$core$String(result471);
                        panda$core$String* $tmp508 = $tmp509;
                        panda$core$String* $tmp507 = $tmp508;
                        tmp5506 = $tmp507;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp507));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result471));
                        panda$core$String* $tmp510 = tmp5506;
                        return $tmp510;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp511, current462);
                panda$core$String$Index $tmp512 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp511);
                current462 = $tmp512.value;
            }
            $l500:;
            int64_t $tmp514 = $tmp495 - i492.value;
            if ($tmp496) goto $l515; else goto $l516;
            $l515:;
            if ((uint64_t) $tmp514 >= 1) goto $l513; else goto $l499;
            $l516:;
            if ((uint64_t) $tmp514 > 1) goto $l513; else goto $l499;
            $l513:;
            i492.value += 1;
            goto $l497;
            $l499:;
        }
        goto $l476;
        $l477:;
    }
    }
    else {
    {
        panda$core$Bit $tmp519 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp519.value);
        $l520:;
        panda$core$Bit $tmp523 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current462, end467);
        bool $tmp522 = $tmp523.value;
        if (!$tmp522) goto $l521;
        {
            c524 = self->data[current462.value];
            panda$core$MutableString$append$panda$core$Char8(result471, c524);
            old525 = current462;
            panda$core$Int64 $tmp526 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
            current462 = $tmp526;
            int64_t $tmp527 = ((int64_t) c524.value) & 255;
            bool $tmp528 = $tmp527 >= 192;
            if (((panda$core$Bit) { $tmp528 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
                panda$core$Int64 $tmp529 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
                current462 = $tmp529;
            }
            }
            int64_t $tmp530 = ((int64_t) c524.value) & 255;
            bool $tmp531 = $tmp530 >= 224;
            if (((panda$core$Bit) { $tmp531 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
                panda$core$Int64 $tmp532 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
                current462 = $tmp532;
            }
            }
            int64_t $tmp533 = ((int64_t) c524.value) & 255;
            bool $tmp534 = $tmp533 >= 240;
            if (((panda$core$Bit) { $tmp534 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
            }
            }
            panda$core$Int64 $tmp535 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old525, ((panda$core$Int64) { 1 }));
            current462 = $tmp535;
            $l536:;
            int64_t $tmp540 = ((int64_t) self->data[current462.value].value) & 255;
            bool $tmp541 = $tmp540 >= 128;
            bool $tmp539 = $tmp541;
            if (!$tmp539) goto $l542;
            int64_t $tmp543 = ((int64_t) self->data[current462.value].value) & 255;
            bool $tmp544 = $tmp543 < 192;
            $tmp539 = $tmp544;
            $l542:;
            bool $tmp538 = ((panda$core$Bit) { $tmp539 }).value;
            if (!$tmp538) goto $l537;
            {
                panda$core$Int64 $tmp545 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
                current462 = $tmp545;
            }
            goto $l536;
            $l537:;
            panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp546, ((panda$core$Int64) { -1 }), step461, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
            int64_t $tmp548 = $tmp546.start.value;
            panda$core$Int64 i547 = { $tmp548 };
            int64_t $tmp550 = $tmp546.end.value;
            int64_t $tmp551 = $tmp546.step.value;
            bool $tmp552 = $tmp546.inclusive.value;
            bool $tmp559 = $tmp551 > 0;
            if ($tmp559) goto $l557; else goto $l558;
            $l557:;
            if ($tmp552) goto $l560; else goto $l561;
            $l560:;
            if ($tmp548 <= $tmp550) goto $l553; else goto $l555;
            $l561:;
            if ($tmp548 < $tmp550) goto $l553; else goto $l555;
            $l558:;
            if ($tmp552) goto $l562; else goto $l563;
            $l562:;
            if ($tmp548 >= $tmp550) goto $l553; else goto $l555;
            $l563:;
            if ($tmp548 > $tmp550) goto $l553; else goto $l555;
            $l553:;
            {
                panda$core$Bit $tmp565 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current462, end467);
                if ($tmp565.value) {
                {
                    {
                        panda$core$String* $tmp569 = panda$core$MutableString$convert$R$panda$core$String(result471);
                        panda$core$String* $tmp568 = $tmp569;
                        panda$core$String* $tmp567 = $tmp568;
                        tmp6566 = $tmp567;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result471));
                        panda$core$String* $tmp570 = tmp6566;
                        return $tmp570;
                    }
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp571, current462);
                panda$core$String$Index $tmp572 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp571);
                current462 = $tmp572.value;
            }
            $l556:;
            if ($tmp559) goto $l574; else goto $l575;
            $l574:;
            int64_t $tmp576 = $tmp550 - i547.value;
            if ($tmp552) goto $l577; else goto $l578;
            $l577:;
            if ((uint64_t) $tmp576 >= $tmp551) goto $l573; else goto $l555;
            $l578:;
            if ((uint64_t) $tmp576 > $tmp551) goto $l573; else goto $l555;
            $l575:;
            int64_t $tmp580 = i547.value - $tmp550;
            if ($tmp552) goto $l581; else goto $l582;
            $l581:;
            if ((uint64_t) $tmp580 >= -$tmp551) goto $l573; else goto $l555;
            $l582:;
            if ((uint64_t) $tmp580 > -$tmp551) goto $l573; else goto $l555;
            $l573:;
            i547.value += $tmp551;
            goto $l553;
            $l555:;
        }
        goto $l520;
        $l521:;
    }
    }
    bool $tmp586 = p_r.inclusive.value;
    if ($tmp586) goto $l587;
    $tmp586 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l587:;
    panda$core$Bit $tmp588 = { $tmp586 };
    bool $tmp585 = $tmp588.value;
    if (!$tmp585) goto $l589;
    panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current462, end467);
    $tmp585 = $tmp590.value;
    $l589:;
    panda$core$Bit $tmp591 = { $tmp585 };
    bool $tmp584 = $tmp591.value;
    if (!$tmp584) goto $l592;
    panda$core$Bit $tmp593 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end467, self->_length);
    $tmp584 = $tmp593.value;
    $l592:;
    panda$core$Bit $tmp594 = { $tmp584 };
    if ($tmp594.value) {
    {
        c595 = self->data[current462.value];
        panda$core$MutableString$append$panda$core$Char8(result471, c595);
        panda$core$Int64 $tmp596 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
        current462 = $tmp596;
        int64_t $tmp597 = ((int64_t) c595.value) & 255;
        bool $tmp598 = $tmp597 >= 192;
        if (((panda$core$Bit) { $tmp598 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
            panda$core$Int64 $tmp599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
            current462 = $tmp599;
        }
        }
        int64_t $tmp600 = ((int64_t) c595.value) & 255;
        bool $tmp601 = $tmp600 >= 224;
        if (((panda$core$Bit) { $tmp601 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
            panda$core$Int64 $tmp602 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current462, ((panda$core$Int64) { 1 }));
            current462 = $tmp602;
        }
        }
        int64_t $tmp603 = ((int64_t) c595.value) & 255;
        bool $tmp604 = $tmp603 >= 240;
        if (((panda$core$Bit) { $tmp604 }).value) {
        {
            panda$core$MutableString$append$panda$core$Char8(result471, self->data[current462.value]);
        }
        }
    }
    }
    {
        panda$core$String* $tmp608 = panda$core$MutableString$finish$R$panda$core$String(result471);
        panda$core$String* $tmp607 = $tmp608;
        panda$core$String* $tmp606 = $tmp607;
        tmp7605 = $tmp606;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result471));
        panda$core$String* $tmp609 = tmp7605;
        return $tmp609;
    }
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start610;
    panda$core$String$Index$nullable end613;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp619;
    memset(&start610, 0, sizeof(start610));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp611 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp612 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp611, ((panda$core$Int64) p_r.min.value));
        start610 = ((panda$core$String$Index$nullable) { $tmp612, true });
    }
    }
    else {
    {
        start610 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end613, 0, sizeof(end613));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp614 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp615 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp614, ((panda$core$Int64) p_r.max.value));
        end613 = ((panda$core$String$Index$nullable) { $tmp615, true });
    }
    }
    else {
    {
        end613 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp619, start610, end613, p_r.inclusive);
    panda$core$String* $tmp620 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp619);
    panda$core$String* $tmp618 = $tmp620;
    panda$core$String* $tmp617 = $tmp618;
    panda$core$String* $tmp616 = $tmp617;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
    return $tmp616;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start621;
    panda$core$String$Index$nullable end624;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp630;
    memset(&start621, 0, sizeof(start621));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp622 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp623 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp622, ((panda$core$Int64) p_r.start.value));
        start621 = ((panda$core$String$Index$nullable) { $tmp623, true });
    }
    }
    else {
    {
        start621 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end624, 0, sizeof(end624));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp625 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp626 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp625, ((panda$core$Int64) p_r.end.value));
        end624 = ((panda$core$String$Index$nullable) { $tmp626, true });
    }
    }
    else {
    {
        end624 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp630, start621, end624, p_r.step, p_r.inclusive);
    panda$core$String* $tmp631 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp630);
    panda$core$String* $tmp629 = $tmp631;
    panda$core$String* $tmp628 = $tmp629;
    panda$core$String* $tmp627 = $tmp628;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
    return $tmp627;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp632;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp632, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp634 = $tmp632.min.value;
    panda$core$Int64 i633 = { $tmp634 };
    int64_t $tmp636 = $tmp632.max.value;
    bool $tmp637 = $tmp632.inclusive.value;
    if ($tmp637) goto $l644; else goto $l645;
    $l644:;
    if ($tmp634 <= $tmp636) goto $l638; else goto $l640;
    $l645:;
    if ($tmp634 < $tmp636) goto $l638; else goto $l640;
    $l638:;
    {
        panda$core$Bit $tmp646 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i633.value], p_c);
        if ($tmp646.value) {
        {
            panda$core$Bit $tmp647 = ((panda$core$Bit) { true });
            return $tmp647;
        }
        }
    }
    $l641:;
    int64_t $tmp649 = $tmp636 - i633.value;
    if ($tmp637) goto $l650; else goto $l651;
    $l650:;
    if ((uint64_t) $tmp649 >= 1) goto $l648; else goto $l640;
    $l651:;
    if ((uint64_t) $tmp649 > 1) goto $l648; else goto $l640;
    $l648:;
    i633.value += 1;
    goto $l638;
    $l640:;
    panda$core$Bit $tmp654 = ((panda$core$Bit) { false });
    return $tmp654;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp656 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    panda$core$Bit $tmp655 = ((panda$core$Bit) { $tmp656.nonnull });
    return $tmp655;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp658 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp659 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp658);
    panda$core$String$Index$nullable $tmp657 = $tmp659;
    return $tmp657;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp662;
    panda$core$Range$LTpanda$core$Int64$GT $tmp677;
    panda$core$String$Index $tmp700;
    panda$core$Bit $tmp660 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp660.value) {
    {
        panda$core$String$Index$nullable $tmp661 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $tmp661;
    }
    }
    panda$core$Int64 $tmp663 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp662, p_start.value, $tmp663, ((panda$core$Bit) { true }));
    int64_t $tmp665 = $tmp662.min.value;
    panda$core$Int64 i664 = { $tmp665 };
    int64_t $tmp667 = $tmp662.max.value;
    bool $tmp668 = $tmp662.inclusive.value;
    if ($tmp668) goto $l675; else goto $l676;
    $l675:;
    if ($tmp665 <= $tmp667) goto $l669; else goto $l671;
    $l676:;
    if ($tmp665 < $tmp667) goto $l669; else goto $l671;
    $l669:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp677, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp679 = $tmp677.min.value;
        panda$core$Int64 j678 = { $tmp679 };
        int64_t $tmp681 = $tmp677.max.value;
        bool $tmp682 = $tmp677.inclusive.value;
        if ($tmp682) goto $l689; else goto $l690;
        $l689:;
        if ($tmp679 <= $tmp681) goto $l683; else goto $l685;
        $l690:;
        if ($tmp679 < $tmp681) goto $l683; else goto $l685;
        $l683:;
        {
            panda$core$Int64 $tmp691 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i664, j678);
            panda$core$Bit $tmp692 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp691.value], p_s->data[j678.value]);
            if ($tmp692.value) {
            {
                goto $l672;
            }
            }
        }
        $l686:;
        int64_t $tmp694 = $tmp681 - j678.value;
        if ($tmp682) goto $l695; else goto $l696;
        $l695:;
        if ((uint64_t) $tmp694 >= 1) goto $l693; else goto $l685;
        $l696:;
        if ((uint64_t) $tmp694 > 1) goto $l693; else goto $l685;
        $l693:;
        j678.value += 1;
        goto $l683;
        $l685:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp700, i664);
        panda$core$String$Index$nullable $tmp699 = ((panda$core$String$Index$nullable) { $tmp700, true });
        return $tmp699;
    }
    $l672:;
    int64_t $tmp702 = $tmp667 - i664.value;
    if ($tmp668) goto $l703; else goto $l704;
    $l703:;
    if ((uint64_t) $tmp702 >= 1) goto $l701; else goto $l671;
    $l704:;
    if ((uint64_t) $tmp702 > 1) goto $l701; else goto $l671;
    $l701:;
    i664.value += 1;
    goto $l669;
    $l671:;
    panda$core$String$Index$nullable $tmp707 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $tmp707;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp709 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp710 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp709);
    panda$core$String$Index$nullable $tmp708 = $tmp710;
    return $tmp708;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos713;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp716;
    panda$core$Range$LTpanda$core$Int64$GT $tmp735;
    panda$core$String$Index $tmp758;
    panda$core$Bit $tmp711 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp711.value) {
    {
        panda$core$String$Index$nullable $tmp712 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $tmp712;
    }
    }
    panda$core$Int64 $tmp714 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp715 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp714);
    startPos713 = $tmp715;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp716, startPos713, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp718 = $tmp716.start.value;
    panda$core$Int64 i717 = { $tmp718 };
    int64_t $tmp720 = $tmp716.end.value;
    int64_t $tmp721 = $tmp716.step.value;
    bool $tmp722 = $tmp716.inclusive.value;
    bool $tmp729 = $tmp721 > 0;
    if ($tmp729) goto $l727; else goto $l728;
    $l727:;
    if ($tmp722) goto $l730; else goto $l731;
    $l730:;
    if ($tmp718 <= $tmp720) goto $l723; else goto $l725;
    $l731:;
    if ($tmp718 < $tmp720) goto $l723; else goto $l725;
    $l728:;
    if ($tmp722) goto $l732; else goto $l733;
    $l732:;
    if ($tmp718 >= $tmp720) goto $l723; else goto $l725;
    $l733:;
    if ($tmp718 > $tmp720) goto $l723; else goto $l725;
    $l723:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp735, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp737 = $tmp735.min.value;
        panda$core$Int64 j736 = { $tmp737 };
        int64_t $tmp739 = $tmp735.max.value;
        bool $tmp740 = $tmp735.inclusive.value;
        if ($tmp740) goto $l747; else goto $l748;
        $l747:;
        if ($tmp737 <= $tmp739) goto $l741; else goto $l743;
        $l748:;
        if ($tmp737 < $tmp739) goto $l741; else goto $l743;
        $l741:;
        {
            panda$core$Int64 $tmp749 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i717, j736);
            panda$core$Bit $tmp750 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp749.value], p_s->data[j736.value]);
            if ($tmp750.value) {
            {
                goto $l726;
            }
            }
        }
        $l744:;
        int64_t $tmp752 = $tmp739 - j736.value;
        if ($tmp740) goto $l753; else goto $l754;
        $l753:;
        if ((uint64_t) $tmp752 >= 1) goto $l751; else goto $l743;
        $l754:;
        if ((uint64_t) $tmp752 > 1) goto $l751; else goto $l743;
        $l751:;
        j736.value += 1;
        goto $l741;
        $l743:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp758, i717);
        panda$core$String$Index$nullable $tmp757 = ((panda$core$String$Index$nullable) { $tmp758, true });
        return $tmp757;
    }
    $l726:;
    if ($tmp729) goto $l760; else goto $l761;
    $l760:;
    int64_t $tmp762 = $tmp720 - i717.value;
    if ($tmp722) goto $l763; else goto $l764;
    $l763:;
    if ((uint64_t) $tmp762 >= $tmp721) goto $l759; else goto $l725;
    $l764:;
    if ((uint64_t) $tmp762 > $tmp721) goto $l759; else goto $l725;
    $l761:;
    int64_t $tmp766 = i717.value - $tmp720;
    if ($tmp722) goto $l767; else goto $l768;
    $l767:;
    if ((uint64_t) $tmp766 >= -$tmp721) goto $l759; else goto $l725;
    $l768:;
    if ((uint64_t) $tmp766 > -$tmp721) goto $l759; else goto $l725;
    $l759:;
    i717.value += $tmp721;
    goto $l723;
    $l725:;
    panda$core$String$Index$nullable $tmp770 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $tmp770;
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result771;
    panda$core$String$Index index775;
    panda$core$String$Index$nullable nextIndex779;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp782;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp785;
    panda$core$String$Index $tmp787;
    panda$core$String* tmp8789;
    panda$core$MutableString* $tmp774 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp774);
    panda$core$MutableString* $tmp773 = $tmp774;
    panda$core$MutableString* $tmp772 = $tmp773;
    result771 = $tmp772;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
    panda$core$String$Index $tmp776 = panda$core$String$start$R$panda$core$String$Index(self);
    index775 = $tmp776;
    $l777:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp780 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index775);
        nextIndex779 = $tmp780;
        if (((panda$core$Bit) { !nextIndex779.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp782, ((panda$core$String$Index$nullable) { index775, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp783 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp782);
            panda$core$String* $tmp781 = $tmp783;
            panda$core$MutableString$append$panda$core$String(result771, $tmp781);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp781));
            goto $l778;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp785, index775, ((panda$core$String$Index) nextIndex779.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp786 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp785);
        panda$core$String* $tmp784 = $tmp786;
        panda$core$MutableString$append$panda$core$String(result771, $tmp784);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
        panda$core$MutableString$append$panda$core$String(result771, p_replacement);
        panda$core$Int64 $tmp788 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex779.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp787, $tmp788);
        index775 = $tmp787;
    }
    }
    $l778:;
    {
        panda$core$String* $tmp792 = panda$core$MutableString$finish$R$panda$core$String(result771);
        panda$core$String* $tmp791 = $tmp792;
        panda$core$String* $tmp790 = $tmp791;
        tmp8789 = $tmp790;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp790));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result771));
        panda$core$String* $tmp793 = tmp8789;
        return $tmp793;
    }
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp795;
    panda$core$String$Index$init$panda$core$Int64(&$tmp795, ((panda$core$Int64) { 0 }));
    panda$core$String$Index $tmp794 = $tmp795;
    return $tmp794;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp797;
    panda$core$String$Index$init$panda$core$Int64(&$tmp797, self->_length);
    panda$core$String$Index $tmp796 = $tmp797;
    return $tmp796;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c799;
    panda$core$String$Index $tmp803;
    panda$core$String$Index $tmp807;
    panda$core$String$Index $tmp811;
    panda$core$String$Index $tmp814;
    panda$core$Bit $tmp798 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp798.value);
    int64_t $tmp800 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c799 = $tmp800;
    bool $tmp801 = c799 >= 240;
    if (((panda$core$Bit) { $tmp801 }).value) {
    {
        panda$core$Int64 $tmp804 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp803, $tmp804);
        panda$core$String$Index $tmp802 = $tmp803;
        return $tmp802;
    }
    }
    bool $tmp805 = c799 >= 224;
    if (((panda$core$Bit) { $tmp805 }).value) {
    {
        panda$core$Int64 $tmp808 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp807, $tmp808);
        panda$core$String$Index $tmp806 = $tmp807;
        return $tmp806;
    }
    }
    bool $tmp809 = c799 >= 192;
    if (((panda$core$Bit) { $tmp809 }).value) {
    {
        panda$core$Int64 $tmp812 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp811, $tmp812);
        panda$core$String$Index $tmp810 = $tmp811;
        return $tmp810;
    }
    }
    panda$core$Int64 $tmp815 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp814, $tmp815);
    panda$core$String$Index $tmp813 = $tmp814;
    return $tmp813;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue817;
    panda$core$String$Index $tmp830;
    panda$core$Bit $tmp816 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp816.value);
    panda$core$Int64 $tmp818 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue817 = $tmp818;
    $l819:;
    int64_t $tmp823 = ((int64_t) self->data[newValue817.value].value) & 255;
    bool $tmp824 = $tmp823 >= 128;
    bool $tmp822 = $tmp824;
    if (!$tmp822) goto $l825;
    int64_t $tmp826 = ((int64_t) self->data[newValue817.value].value) & 255;
    bool $tmp827 = $tmp826 < 192;
    $tmp822 = $tmp827;
    $l825:;
    bool $tmp821 = ((panda$core$Bit) { $tmp822 }).value;
    if (!$tmp821) goto $l820;
    {
        panda$core$Int64 $tmp828 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue817, ((panda$core$Int64) { 1 }));
        newValue817 = $tmp828;
    }
    goto $l819;
    $l820:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp830, newValue817);
    panda$core$String$Index $tmp829 = $tmp830;
    return $tmp829;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result831;
    panda$core$Range$LTpanda$core$Int64$GT $tmp833;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp854;
    result831 = p_index;
    panda$core$Bit $tmp832 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp832.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp833, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp835 = $tmp833.min.value;
        panda$core$Int64 i834 = { $tmp835 };
        int64_t $tmp837 = $tmp833.max.value;
        bool $tmp838 = $tmp833.inclusive.value;
        if ($tmp838) goto $l845; else goto $l846;
        $l845:;
        if ($tmp835 <= $tmp837) goto $l839; else goto $l841;
        $l846:;
        if ($tmp835 < $tmp837) goto $l839; else goto $l841;
        $l839:;
        {
            panda$core$String$Index $tmp847 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result831);
            result831 = $tmp847;
        }
        $l842:;
        int64_t $tmp849 = $tmp837 - i834.value;
        if ($tmp838) goto $l850; else goto $l851;
        $l850:;
        if ((uint64_t) $tmp849 >= 1) goto $l848; else goto $l841;
        $l851:;
        if ((uint64_t) $tmp849 > 1) goto $l848; else goto $l841;
        $l848:;
        i834.value += 1;
        goto $l839;
        $l841:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp854, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp856 = $tmp854.start.value;
        panda$core$Int64 i855 = { $tmp856 };
        int64_t $tmp858 = $tmp854.end.value;
        int64_t $tmp859 = $tmp854.step.value;
        bool $tmp860 = $tmp854.inclusive.value;
        bool $tmp867 = $tmp859 > 0;
        if ($tmp867) goto $l865; else goto $l866;
        $l865:;
        if ($tmp860) goto $l868; else goto $l869;
        $l868:;
        if ($tmp856 <= $tmp858) goto $l861; else goto $l863;
        $l869:;
        if ($tmp856 < $tmp858) goto $l861; else goto $l863;
        $l866:;
        if ($tmp860) goto $l870; else goto $l871;
        $l870:;
        if ($tmp856 >= $tmp858) goto $l861; else goto $l863;
        $l871:;
        if ($tmp856 > $tmp858) goto $l861; else goto $l863;
        $l861:;
        {
            panda$core$String$Index $tmp873 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result831);
            result831 = $tmp873;
        }
        $l864:;
        if ($tmp867) goto $l875; else goto $l876;
        $l875:;
        int64_t $tmp877 = $tmp858 - i855.value;
        if ($tmp860) goto $l878; else goto $l879;
        $l878:;
        if ((uint64_t) $tmp877 >= $tmp859) goto $l874; else goto $l863;
        $l879:;
        if ((uint64_t) $tmp877 > $tmp859) goto $l874; else goto $l863;
        $l876:;
        int64_t $tmp881 = i855.value - $tmp858;
        if ($tmp860) goto $l882; else goto $l883;
        $l882:;
        if ((uint64_t) $tmp881 >= -$tmp859) goto $l874; else goto $l863;
        $l883:;
        if ((uint64_t) $tmp881 > -$tmp859) goto $l874; else goto $l863;
        $l874:;
        i855.value += $tmp859;
        goto $l861;
        $l863:;
    }
    }
    panda$core$String$Index $tmp885 = result831;
    return $tmp885;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp889;
    panda$core$Char32$init$panda$core$Int32(&$tmp889, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp890 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp889);
    panda$core$String* $tmp888 = $tmp890;
    panda$core$String* $tmp887 = $tmp888;
    panda$core$String* $tmp886 = $tmp887;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
    return $tmp886;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp891 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp892 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp891, p_width);
    if ($tmp892.value) {
    {
        panda$core$String* $tmp894 = self;
        panda$core$String* $tmp893 = $tmp894;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
        return $tmp893;
    }
    }
    panda$core$Int64 $tmp899 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp900 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp899);
    panda$core$String* $tmp901 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp900);
    panda$core$String* $tmp898 = $tmp901;
    panda$core$String* $tmp902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp898);
    panda$core$String* $tmp897 = $tmp902;
    panda$core$String* $tmp896 = $tmp897;
    panda$core$String* $tmp895 = $tmp896;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
    return $tmp895;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp906;
    panda$core$Char32$init$panda$core$Int32(&$tmp906, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp907 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp906);
    panda$core$String* $tmp905 = $tmp907;
    panda$core$String* $tmp904 = $tmp905;
    panda$core$String* $tmp903 = $tmp904;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp904));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
    return $tmp903;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 $tmp908 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp909 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp908, p_width);
    if ($tmp909.value) {
    {
        panda$core$String* $tmp911 = self;
        panda$core$String* $tmp910 = $tmp911;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
        return $tmp910;
    }
    }
    panda$core$Int64 $tmp916 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp917 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp916);
    panda$core$String* $tmp918 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp917);
    panda$core$String* $tmp915 = $tmp918;
    panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp915, self);
    panda$core$String* $tmp914 = $tmp919;
    panda$core$String* $tmp913 = $tmp914;
    panda$core$String* $tmp912 = $tmp913;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
    return $tmp912;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$Char32 $tmp923;
    panda$core$Char32$init$panda$core$Int32(&$tmp923, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp924 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp923);
    panda$core$String* $tmp922 = $tmp924;
    panda$core$String* $tmp921 = $tmp922;
    panda$core$String* $tmp920 = $tmp921;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
    return $tmp920;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$Int64 pad929;
    panda$core$Int64 left932;
    panda$core$Int64 right934;
    panda$core$Int64 $tmp925 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp926 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp925, p_width);
    if ($tmp926.value) {
    {
        panda$core$String* $tmp928 = self;
        panda$core$String* $tmp927 = $tmp928;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp928));
        return $tmp927;
    }
    }
    panda$core$Int64 $tmp930 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp931 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp930);
    pad929 = $tmp931;
    panda$core$Int64 $tmp933 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad929, ((panda$core$Int64) { 2 }));
    left932 = $tmp933;
    panda$core$Int64 $tmp935 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad929, left932);
    right934 = $tmp935;
    panda$core$String* $tmp941 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left932);
    panda$core$String* $tmp940 = $tmp941;
    panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, self);
    panda$core$String* $tmp939 = $tmp942;
    panda$core$String* $tmp944 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right934);
    panda$core$String* $tmp943 = $tmp944;
    panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp939, $tmp943);
    panda$core$String* $tmp938 = $tmp945;
    panda$core$String* $tmp937 = $tmp938;
    panda$core$String* $tmp936 = $tmp937;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp943));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp940));
    return $tmp936;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp949 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    panda$collections$Array* $tmp948 = $tmp949;
    panda$collections$Array* $tmp947 = $tmp948;
    panda$collections$Array* $tmp946 = $tmp947;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
    return $tmp946;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result950;
    panda$core$String$Index index954;
    panda$core$String$Index$nullable nextIndex958;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp968;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp971;
    panda$core$String$Index $tmp973;
    panda$collections$Array* tmp9975;
    panda$collections$Array* $tmp953 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp953);
    panda$collections$Array* $tmp952 = $tmp953;
    panda$collections$Array* $tmp951 = $tmp952;
    result950 = $tmp951;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp951));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
    panda$core$String$Index $tmp955 = panda$core$String$start$R$panda$core$String$Index(self);
    index954 = $tmp955;
    $l956:;
    while (true) {
    {
        memset(&nextIndex958, 0, sizeof(nextIndex958));
        panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp959.value) {
        {
            panda$core$String$Index $tmp960 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index954);
            nextIndex958 = ((panda$core$String$Index$nullable) { $tmp960, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp961 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index954);
            nextIndex958 = $tmp961;
        }
        }
        bool $tmp962 = ((panda$core$Bit) { !nextIndex958.nonnull }).value;
        if ($tmp962) goto $l963;
        panda$core$Int64 $tmp964 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result950->count, $tmp964);
        $tmp962 = $tmp965.value;
        $l963:;
        panda$core$Bit $tmp966 = { $tmp962 };
        if ($tmp966.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp968, ((panda$core$String$Index$nullable) { index954, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp969 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp968);
            panda$core$String* $tmp967 = $tmp969;
            panda$collections$Array$add$panda$collections$Array$T(result950, ((panda$core$Object*) $tmp967));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
            goto $l957;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp971, index954, ((panda$core$String$Index) nextIndex958.value), ((panda$core$Bit) { false }));
        panda$core$String* $tmp972 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp971);
        panda$core$String* $tmp970 = $tmp972;
        panda$collections$Array$add$panda$collections$Array$T(result950, ((panda$core$Object*) $tmp970));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
        panda$core$Int64 $tmp974 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex958.value).value, p_delimiter->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp973, $tmp974);
        index954 = $tmp973;
    }
    }
    $l957:;
    {
        panda$collections$Array* $tmp976 = result950;
        tmp9975 = $tmp976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
        panda$collections$Array* $tmp977 = tmp9975;
        return $tmp977;
    }
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result980;
    panda$core$Int64 start981;
    panda$core$Char8 $tmp982;
    panda$core$Range$LTpanda$core$Int64$GT $tmp984;
    panda$core$Int64 digit998;
    panda$core$Char8 $tmp1014;
    panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp978.value) {
    {
        panda$core$Int64$nullable $tmp979 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $tmp979;
    }
    }
    result980 = ((panda$core$Int64) { 0 });
    memset(&start981, 0, sizeof(start981));
    panda$core$Char8$init$panda$core$UInt8(&$tmp982, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp983 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp982);
    if ($tmp983.value) {
    {
        start981 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start981 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp984, start981, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp986 = $tmp984.min.value;
    panda$core$Int64 i985 = { $tmp986 };
    int64_t $tmp988 = $tmp984.max.value;
    bool $tmp989 = $tmp984.inclusive.value;
    if ($tmp989) goto $l996; else goto $l997;
    $l996:;
    if ($tmp986 <= $tmp988) goto $l990; else goto $l992;
    $l997:;
    if ($tmp986 < $tmp988) goto $l990; else goto $l992;
    $l990:;
    {
        panda$core$Int64 $tmp999 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i985.value].value) }), ((panda$core$Int64) { 48 }));
        digit998 = $tmp999;
        panda$core$Bit $tmp1001 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit998, ((panda$core$Int64) { 0 }));
        bool $tmp1000 = $tmp1001.value;
        if ($tmp1000) goto $l1002;
        panda$core$Bit $tmp1003 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit998, ((panda$core$Int64) { 9 }));
        $tmp1000 = $tmp1003.value;
        $l1002:;
        panda$core$Bit $tmp1004 = { $tmp1000 };
        if ($tmp1004.value) {
        {
            panda$core$Int64$nullable $tmp1005 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $tmp1005;
        }
        }
        panda$core$Int64 $tmp1006 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result980, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1007 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1006, digit998);
        result980 = $tmp1007;
    }
    $l993:;
    int64_t $tmp1009 = $tmp988 - i985.value;
    if ($tmp989) goto $l1010; else goto $l1011;
    $l1010:;
    if ((uint64_t) $tmp1009 >= 1) goto $l1008; else goto $l992;
    $l1011:;
    if ((uint64_t) $tmp1009 > 1) goto $l1008; else goto $l992;
    $l1008:;
    i985.value += 1;
    goto $l990;
    $l992:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1014, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1015 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1014);
    if ($tmp1015.value) {
    {
        panda$core$Int64 $tmp1016 = panda$core$Int64$$SUB$R$panda$core$Int64(result980);
        result980 = $tmp1016;
    }
    }
    panda$core$Int64$nullable $tmp1017 = ((panda$core$Int64$nullable) { result980, true });
    return $tmp1017;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result1020;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1021;
    panda$core$UInt64 digit1035;
    panda$core$Bit $tmp1018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1018.value) {
    {
        panda$core$UInt64$nullable $tmp1019 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $tmp1019;
    }
    }
    result1020 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1021, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1023 = $tmp1021.min.value;
    panda$core$Int64 i1022 = { $tmp1023 };
    int64_t $tmp1025 = $tmp1021.max.value;
    bool $tmp1026 = $tmp1021.inclusive.value;
    if ($tmp1026) goto $l1033; else goto $l1034;
    $l1033:;
    if ($tmp1023 <= $tmp1025) goto $l1027; else goto $l1029;
    $l1034:;
    if ($tmp1023 < $tmp1025) goto $l1027; else goto $l1029;
    $l1027:;
    {
        panda$core$UInt64 $tmp1036 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1022.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1035 = $tmp1036;
        panda$core$Bit $tmp1038 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1035, ((panda$core$UInt64) { 0 }));
        bool $tmp1037 = $tmp1038.value;
        if ($tmp1037) goto $l1039;
        panda$core$Bit $tmp1040 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1035, ((panda$core$UInt64) { 9 }));
        $tmp1037 = $tmp1040.value;
        $l1039:;
        panda$core$Bit $tmp1041 = { $tmp1037 };
        if ($tmp1041.value) {
        {
            panda$core$UInt64$nullable $tmp1042 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $tmp1042;
        }
        }
        panda$core$UInt64 $tmp1043 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1020, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1044 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1043, digit1035);
        result1020 = $tmp1044;
    }
    $l1030:;
    int64_t $tmp1046 = $tmp1025 - i1022.value;
    if ($tmp1026) goto $l1047; else goto $l1048;
    $l1047:;
    if ((uint64_t) $tmp1046 >= 1) goto $l1045; else goto $l1029;
    $l1048:;
    if ((uint64_t) $tmp1046 > 1) goto $l1045; else goto $l1029;
    $l1045:;
    i1022.value += 1;
    goto $l1027;
    $l1029:;
    panda$core$UInt64$nullable $tmp1051 = ((panda$core$UInt64$nullable) { result1020, true });
    return $tmp1051;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1053;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1054;
    panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1052.value) {
    {
        h1053 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1054, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1056 = $tmp1054.min.value;
        panda$core$Int64 i1055 = { $tmp1056 };
        int64_t $tmp1058 = $tmp1054.max.value;
        bool $tmp1059 = $tmp1054.inclusive.value;
        if ($tmp1059) goto $l1066; else goto $l1067;
        $l1066:;
        if ($tmp1056 <= $tmp1058) goto $l1060; else goto $l1062;
        $l1067:;
        if ($tmp1056 < $tmp1058) goto $l1060; else goto $l1062;
        $l1060:;
        {
            panda$core$Int64 $tmp1068 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1053, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1069 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1068, ((panda$core$Int64) { ((int64_t) self->data[i1055.value].value) }));
            h1053 = $tmp1069;
        }
        $l1063:;
        int64_t $tmp1071 = $tmp1058 - i1055.value;
        if ($tmp1059) goto $l1072; else goto $l1073;
        $l1072:;
        if ((uint64_t) $tmp1071 >= 1) goto $l1070; else goto $l1062;
        $l1073:;
        if ((uint64_t) $tmp1071 > 1) goto $l1070; else goto $l1062;
        $l1070:;
        i1055.value += 1;
        goto $l1060;
        $l1062:;
        self->_hash = h1053;
    }
    }
    panda$core$Int64 $tmp1076 = self->_hash;
    return $tmp1076;
}

