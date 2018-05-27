#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
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
#include "panda/core/RegularExpression.h"
#include "panda/core/Matcher.h"
#include "panda/collections/Array.h"
#include "panda/io/Console.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, ((panda$core$String*) p0));
    return result;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* self, panda$core$Equatable* p0) {
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
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn85)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn160)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn307)(panda$core$Object*);
typedef panda$core$String* (*$fn349)(panda$core$Object*);
typedef panda$core$Object* (*$fn977)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn978)(panda$core$String*);
typedef panda$core$String* (*$fn979)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x70\x6c\x61\x63\x65\x3a\x20", 9, 2339090519701269323, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x74\x6f\x20", 6, 1408884236407, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp2 = self->owner;
        $tmp3 = NULL;
        self->owner = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp4 = self->owner;
        $tmp5 = p_owner;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    panda$core$Object* $tmp24;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
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
        $tmp24 = $tmp28;
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
        $tmp35 = self->owner;
        $tmp36 = NULL;
        self->owner = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue37;
    panda$core$String* $tmp38;
    $tmp38 = self;
    $returnValue37 = $tmp38;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
    return $returnValue37;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$267_943 = NULL;
    panda$core$String* $tmp44;
    panda$core$String* $returnValue47;
    panda$core$String* $tmp48;
    panda$core$MutableString* result56 = NULL;
    panda$core$MutableString* $tmp57;
    panda$core$MutableString* $tmp58;
    panda$collections$Iterator* Iter$272$1764 = NULL;
    panda$collections$Iterator* $tmp65;
    panda$collections$Iterator* $tmp66;
    panda$collections$ListView* $tmp67;
    panda$core$Char8 c81;
    panda$core$Object* $tmp82;
    panda$core$Char8 $match$273_2187;
    panda$core$Char8 $tmp88;
    panda$core$Char8 $tmp91;
    panda$core$Char8 $tmp94;
    panda$core$Char8 $tmp97;
    panda$core$Char8 $tmp100;
    panda$core$Char8 $tmp110;
    panda$core$Char8 $tmp112;
    panda$core$String* $tmp113;
    panda$core$String* $tmp114;
    int $tmp42;
    {
        $tmp44 = p_fmt;
        $match$267_943 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Bit $tmp46 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$267_943, &$s45);
        if ($tmp46.value) {
        {
            $tmp48 = self;
            $returnValue47 = $tmp48;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
            $tmp42 = 0;
            goto $l40;
            $l49:;
            return $returnValue47;
        }
        }
        else {
        panda$core$Bit $tmp52 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$267_943, &$s51);
        if ($tmp52.value) {
        {
            int $tmp55;
            {
                panda$core$MutableString* $tmp59 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp59, &$s60);
                $tmp58 = $tmp59;
                $tmp57 = $tmp58;
                result56 = $tmp57;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
                {
                    int $tmp63;
                    {
                        panda$collections$ListView* $tmp68 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(self);
                        $tmp67 = $tmp68;
                        ITable* $tmp69 = ((panda$collections$Iterable*) $tmp67)->$class->itable;
                        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp69 = $tmp69->next;
                        }
                        $fn71 $tmp70 = $tmp69->methods[0];
                        panda$collections$Iterator* $tmp72 = $tmp70(((panda$collections$Iterable*) $tmp67));
                        $tmp66 = $tmp72;
                        $tmp65 = $tmp66;
                        Iter$272$1764 = $tmp65;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
                        $l73:;
                        ITable* $tmp76 = Iter$272$1764->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$core$Bit $tmp79 = $tmp77(Iter$272$1764);
                        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
                        bool $tmp75 = $tmp80.value;
                        if (!$tmp75) goto $l74;
                        {
                            ITable* $tmp83 = Iter$272$1764->$class->itable;
                            while ($tmp83->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp83 = $tmp83->next;
                            }
                            $fn85 $tmp84 = $tmp83->methods[1];
                            panda$core$Object* $tmp86 = $tmp84(Iter$272$1764);
                            $tmp82 = $tmp86;
                            c81 = ((panda$core$Char8$wrapper*) $tmp82)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp82);
                            {
                                $match$273_2187 = c81;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp89 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$273_2187, $tmp88);
                                if ($tmp89.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s90);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp92 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$273_2187, $tmp91);
                                if ($tmp92.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s93);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp94, ((panda$core$UInt8) { 10 }));
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$273_2187, $tmp94);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s96);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { 13 }));
                                panda$core$Bit $tmp98 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$273_2187, $tmp97);
                                if ($tmp98.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s99);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp100, ((panda$core$UInt8) { 9 }));
                                panda$core$Bit $tmp101 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$273_2187, $tmp100);
                                if ($tmp101.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s102);
                                }
                                }
                                else {
                                {
                                    panda$core$UInt8 $tmp104 = panda$core$Char8$convert$R$panda$core$UInt8(c81);
                                    panda$core$Bit $tmp105 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit($tmp104, ((panda$core$UInt8) { 32 }));
                                    bool $tmp103 = $tmp105.value;
                                    if (!$tmp103) goto $l106;
                                    panda$core$UInt8 $tmp107 = panda$core$Char8$convert$R$panda$core$UInt8(c81);
                                    panda$core$Bit $tmp108 = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit($tmp107, ((panda$core$UInt8) { 126 }));
                                    $tmp103 = $tmp108.value;
                                    $l106:;
                                    panda$core$Bit $tmp109 = { $tmp103 };
                                    if ($tmp109.value) {
                                    {
                                        panda$core$MutableString$append$panda$core$Char8(result56, c81);
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Char8$init$panda$core$UInt8(&$tmp110, ((panda$core$UInt8) { 63 }));
                                        panda$core$MutableString$append$panda$core$Char8(result56, $tmp110);
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
                        goto $l73;
                        $l74:;
                    }
                    $tmp63 = -1;
                    goto $l61;
                    $l61:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$1764));
                    Iter$272$1764 = NULL;
                    switch ($tmp63) {
                        case -1: goto $l111;
                    }
                    $l111:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp112, ((panda$core$UInt8) { 34 }));
                panda$core$MutableString$append$panda$core$Char8(result56, $tmp112);
                panda$core$String* $tmp115 = panda$core$MutableString$finish$R$panda$core$String(result56);
                $tmp114 = $tmp115;
                $tmp113 = $tmp114;
                $returnValue47 = $tmp113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                $tmp55 = 0;
                goto $l53;
                $l116:;
                $tmp42 = 1;
                goto $l40;
                $l117:;
                return $returnValue47;
            }
            $l53:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result56));
            result56 = NULL;
            switch ($tmp55) {
                case 0: goto $l116;
            }
            $l119:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
    }
    $tmp42 = -1;
    goto $l40;
    $l40:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    switch ($tmp42) {
        case 1: goto $l117;
        case -1: goto $l120;
        case 0: goto $l49;
    }
    $l120:;
}
void panda$core$String$cleanup(panda$core$String* self) {
    int $tmp123;
    {
        if (((panda$core$Bit) { self->owner == NULL }).value) {
        {
            pandaFree(self->data);
        }
        }
    }
    $tmp123 = -1;
    goto $l121;
    $l121:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp123) {
        case -1: goto $l124;
    }
    $l124:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$collections$ListView* $returnValue125;
    panda$collections$ListView* $tmp126;
    panda$core$String$UTF8List* $tmp127;
    panda$core$String$UTF8List* $tmp128 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp128, self);
    $tmp127 = $tmp128;
    $tmp126 = ((panda$collections$ListView*) $tmp127);
    $returnValue125 = $tmp126;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    return $returnValue125;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue130;
    panda$collections$Iterator* $tmp131;
    panda$core$String$UTF16Iterator* $tmp132;
    panda$core$String$UTF16Iterator* $tmp133 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp133, self);
    $tmp132 = $tmp133;
    $tmp131 = ((panda$collections$Iterator*) $tmp132);
    $returnValue130 = $tmp131;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
    return $returnValue130;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue135;
    panda$collections$Iterator* $tmp136;
    panda$core$String$UTF32Iterator* $tmp137;
    panda$core$String$UTF32Iterator* $tmp138 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp138, self);
    $tmp137 = $tmp138;
    $tmp136 = ((panda$collections$Iterator*) $tmp137);
    $returnValue135 = $tmp136;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
    return $returnValue135;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count143;
    panda$collections$Iterator* iter144 = NULL;
    panda$collections$Iterator* $tmp145;
    panda$collections$Iterator* $tmp146;
    panda$core$Object* $tmp157;
    panda$core$Int64 $returnValue162;
    int $tmp142;
    {
        count143 = ((panda$core$Int64) { 0 });
        panda$collections$Iterator* $tmp147 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
        $tmp146 = $tmp147;
        $tmp145 = $tmp146;
        iter144 = $tmp145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
        $l148:;
        ITable* $tmp151 = iter144->$class->itable;
        while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp151 = $tmp151->next;
        }
        $fn153 $tmp152 = $tmp151->methods[0];
        panda$core$Bit $tmp154 = $tmp152(iter144);
        panda$core$Bit $tmp155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp154);
        bool $tmp150 = $tmp155.value;
        if (!$tmp150) goto $l149;
        {
            panda$core$Int64 $tmp156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count143, ((panda$core$Int64) { 1 }));
            count143 = $tmp156;
            ITable* $tmp158 = iter144->$class->itable;
            while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp158 = $tmp158->next;
            }
            $fn160 $tmp159 = $tmp158->methods[1];
            panda$core$Object* $tmp161 = $tmp159(iter144);
            $tmp157 = $tmp161;
            panda$core$Panda$unref$panda$core$Object($tmp157);
        }
        goto $l148;
        $l149:;
        $returnValue162 = count143;
        $tmp142 = 0;
        goto $l140;
        $l163:;
        return $returnValue162;
    }
    $l140:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter144));
    iter144 = NULL;
    switch ($tmp142) {
        case 0: goto $l163;
    }
    $l165:;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue166;
    $returnValue166 = self->_length;
    return $returnValue166;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue169;
    panda$core$Range$LTpanda$core$Int64$GT $tmp171;
    panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp168.value) {
    {
        $returnValue169 = ((panda$core$Bit) { false });
        return $returnValue169;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp171, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
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
        panda$core$Bit $tmp185 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i172.value], p_other->data[i172.value]);
        if ($tmp185.value) {
        {
            $returnValue169 = ((panda$core$Bit) { false });
            return $returnValue169;
        }
        }
    }
    $l180:;
    int64_t $tmp188 = $tmp175 - i172.value;
    if ($tmp176) goto $l189; else goto $l190;
    $l189:;
    if ((uint64_t) $tmp188 >= 1) goto $l187; else goto $l179;
    $l190:;
    if ((uint64_t) $tmp188 > 1) goto $l187; else goto $l179;
    $l187:;
    i172.value += 1;
    goto $l177;
    $l179:;
    $returnValue169 = ((panda$core$Bit) { true });
    return $returnValue169;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue195;
    panda$core$Range$LTpanda$core$Int64$GT $tmp197;
    panda$core$Bit $tmp194 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp194.value) {
    {
        $returnValue195 = ((panda$core$Bit) { false });
        return $returnValue195;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp197, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp199 = $tmp197.min.value;
    panda$core$Int64 i198 = { $tmp199 };
    int64_t $tmp201 = $tmp197.max.value;
    bool $tmp202 = $tmp197.inclusive.value;
    if ($tmp202) goto $l209; else goto $l210;
    $l209:;
    if ($tmp199 <= $tmp201) goto $l203; else goto $l205;
    $l210:;
    if ($tmp199 < $tmp201) goto $l203; else goto $l205;
    $l203:;
    {
        panda$core$Int64 $tmp211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp211, i198);
        panda$core$Bit $tmp213 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp212.value], p_other->data[i198.value]);
        if ($tmp213.value) {
        {
            $returnValue195 = ((panda$core$Bit) { false });
            return $returnValue195;
        }
        }
    }
    $l206:;
    int64_t $tmp216 = $tmp201 - i198.value;
    if ($tmp202) goto $l217; else goto $l218;
    $l217:;
    if ((uint64_t) $tmp216 >= 1) goto $l215; else goto $l205;
    $l218:;
    if ((uint64_t) $tmp216 > 1) goto $l215; else goto $l205;
    $l215:;
    i198.value += 1;
    goto $l203;
    $l205:;
    $returnValue195 = ((panda$core$Bit) { true });
    return $returnValue195;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue223;
    panda$core$String* $tmp224;
    panda$core$Int64 start226;
    panda$core$Int64 end236;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp249;
    panda$core$String$Index $tmp250;
    panda$core$String$Index $tmp251;
    panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp222.value) {
    {
        $tmp224 = self;
        $returnValue223 = $tmp224;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
        return $returnValue223;
    }
    }
    start226 = ((panda$core$Int64) { 0 });
    $l227:;
    panda$core$Bit $tmp231 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start226, self->_length);
    bool $tmp230 = $tmp231.value;
    if (!$tmp230) goto $l232;
    panda$core$Bit $tmp233 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start226.value]);
    $tmp230 = $tmp233.value;
    $l232:;
    panda$core$Bit $tmp234 = { $tmp230 };
    bool $tmp229 = $tmp234.value;
    if (!$tmp229) goto $l228;
    {
        panda$core$Int64 $tmp235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start226, ((panda$core$Int64) { 1 }));
        start226 = $tmp235;
    }
    goto $l227;
    $l228:;
    panda$core$Int64 $tmp237 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end236 = $tmp237;
    $l238:;
    panda$core$Bit $tmp242 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end236, start226);
    bool $tmp241 = $tmp242.value;
    if (!$tmp241) goto $l243;
    panda$core$Bit $tmp244 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end236.value]);
    $tmp241 = $tmp244.value;
    $l243:;
    panda$core$Bit $tmp245 = { $tmp241 };
    bool $tmp240 = $tmp245.value;
    if (!$tmp240) goto $l239;
    {
        panda$core$Int64 $tmp246 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end236, ((panda$core$Int64) { 1 }));
        end236 = $tmp246;
    }
    goto $l238;
    $l239:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp250, start226);
    panda$core$String$Index$init$panda$core$Int64(&$tmp251, end236);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp249, $tmp250, $tmp251, ((panda$core$Bit) { true }));
    panda$core$String* $tmp252 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp249);
    $tmp248 = $tmp252;
    $tmp247 = $tmp248;
    $returnValue223 = $tmp247;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
    return $returnValue223;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result254;
    panda$core$Range$LTpanda$core$Int64$GT $tmp256;
    panda$core$Range$LTpanda$core$Int64$GT $tmp276;
    panda$core$String* $returnValue297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$Int64 $tmp255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result254 = ((panda$core$Char8*) pandaZAlloc($tmp255.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp256, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp258 = $tmp256.min.value;
    panda$core$Int64 i257 = { $tmp258 };
    int64_t $tmp260 = $tmp256.max.value;
    bool $tmp261 = $tmp256.inclusive.value;
    if ($tmp261) goto $l268; else goto $l269;
    $l268:;
    if ($tmp258 <= $tmp260) goto $l262; else goto $l264;
    $l269:;
    if ($tmp258 < $tmp260) goto $l262; else goto $l264;
    $l262:;
    {
        result254[i257.value] = self->data[i257.value];
    }
    $l265:;
    int64_t $tmp271 = $tmp260 - i257.value;
    if ($tmp261) goto $l272; else goto $l273;
    $l272:;
    if ((uint64_t) $tmp271 >= 1) goto $l270; else goto $l264;
    $l273:;
    if ((uint64_t) $tmp271 > 1) goto $l270; else goto $l264;
    $l270:;
    i257.value += 1;
    goto $l262;
    $l264:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp276, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp278 = $tmp276.min.value;
    panda$core$Int64 i277 = { $tmp278 };
    int64_t $tmp280 = $tmp276.max.value;
    bool $tmp281 = $tmp276.inclusive.value;
    if ($tmp281) goto $l288; else goto $l289;
    $l288:;
    if ($tmp278 <= $tmp280) goto $l282; else goto $l284;
    $l289:;
    if ($tmp278 < $tmp280) goto $l282; else goto $l284;
    $l282:;
    {
        panda$core$Int64 $tmp290 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i277);
        result254[$tmp290.value] = p_other->data[i277.value];
    }
    $l285:;
    int64_t $tmp292 = $tmp280 - i277.value;
    if ($tmp281) goto $l293; else goto $l294;
    $l293:;
    if ((uint64_t) $tmp292 >= 1) goto $l291; else goto $l284;
    $l294:;
    if ((uint64_t) $tmp292 > 1) goto $l291; else goto $l284;
    $l291:;
    i277.value += 1;
    goto $l282;
    $l284:;
    panda$core$String* $tmp300 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp300, result254, $tmp301);
    $tmp299 = $tmp300;
    $tmp298 = $tmp299;
    $returnValue297 = $tmp298;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
    return $returnValue297;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue303;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp308 = (($fn307) p_other->$class->vtable[0])(p_other);
    $tmp306 = $tmp308;
    panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp306);
    $tmp305 = $tmp309;
    $tmp304 = $tmp305;
    $returnValue303 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
    return $returnValue303;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result314 = NULL;
    panda$core$MutableString* $tmp315;
    panda$core$MutableString* $tmp316;
    panda$core$Range$LTpanda$core$Int64$GT $tmp318;
    panda$core$String* $returnValue338;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    int $tmp313;
    {
        panda$core$MutableString* $tmp317 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp317);
        $tmp316 = $tmp317;
        $tmp315 = $tmp316;
        result314 = $tmp315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp318, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp320 = $tmp318.min.value;
        panda$core$Int64 i319 = { $tmp320 };
        int64_t $tmp322 = $tmp318.max.value;
        bool $tmp323 = $tmp318.inclusive.value;
        if ($tmp323) goto $l330; else goto $l331;
        $l330:;
        if ($tmp320 <= $tmp322) goto $l324; else goto $l326;
        $l331:;
        if ($tmp320 < $tmp322) goto $l324; else goto $l326;
        $l324:;
        {
            panda$core$MutableString$append$panda$core$String(result314, self);
        }
        $l327:;
        int64_t $tmp333 = $tmp322 - i319.value;
        if ($tmp323) goto $l334; else goto $l335;
        $l334:;
        if ((uint64_t) $tmp333 >= 1) goto $l332; else goto $l326;
        $l335:;
        if ((uint64_t) $tmp333 > 1) goto $l332; else goto $l326;
        $l332:;
        i319.value += 1;
        goto $l324;
        $l326:;
        panda$core$String* $tmp341 = panda$core$MutableString$finish$R$panda$core$String(result314);
        $tmp340 = $tmp341;
        $tmp339 = $tmp340;
        $returnValue338 = $tmp339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
        $tmp313 = 0;
        goto $l311;
        $l342:;
        return $returnValue338;
    }
    $l311:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result314));
    result314 = NULL;
    switch ($tmp313) {
        case 0: goto $l342;
    }
    $l344:;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue345;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$String* $tmp350 = (($fn349) p_o->$class->vtable[0])(p_o);
    $tmp348 = $tmp350;
    panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, p_s);
    $tmp347 = $tmp351;
    $tmp346 = $tmp347;
    $returnValue345 = $tmp346;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    return $returnValue345;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue354;
    panda$core$Range$LTpanda$core$Int64$GT $tmp356;
    panda$core$Bit $tmp353 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp353.value) {
    {
        $returnValue354 = ((panda$core$Bit) { false });
        return $returnValue354;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp356, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp358 = $tmp356.min.value;
    panda$core$Int64 i357 = { $tmp358 };
    int64_t $tmp360 = $tmp356.max.value;
    bool $tmp361 = $tmp356.inclusive.value;
    if ($tmp361) goto $l368; else goto $l369;
    $l368:;
    if ($tmp358 <= $tmp360) goto $l362; else goto $l364;
    $l369:;
    if ($tmp358 < $tmp360) goto $l362; else goto $l364;
    $l362:;
    {
        panda$core$Bit $tmp370 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i357.value], p_other->data[i357.value]);
        if ($tmp370.value) {
        {
            $returnValue354 = ((panda$core$Bit) { false });
            return $returnValue354;
        }
        }
    }
    $l365:;
    int64_t $tmp373 = $tmp360 - i357.value;
    if ($tmp361) goto $l374; else goto $l375;
    $l374:;
    if ((uint64_t) $tmp373 >= 1) goto $l372; else goto $l364;
    $l375:;
    if ((uint64_t) $tmp373 > 1) goto $l372; else goto $l364;
    $l372:;
    i357.value += 1;
    goto $l362;
    $l364:;
    $returnValue354 = ((panda$core$Bit) { true });
    return $returnValue354;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue379;
    panda$core$Bit $tmp380 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp380);
    $returnValue379 = $tmp381;
    return $returnValue379;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx383;
    panda$core$Char8 c384;
    panda$core$Int32 result385;
    panda$core$Char32 $returnValue389;
    panda$core$Char32 $tmp390;
    panda$core$Char32 $tmp402;
    panda$core$Char32 $tmp419;
    panda$core$Char32 $tmp439;
    idx383 = p_index.value;
    c384 = self->data[idx383.value];
    panda$core$Int32 $tmp386 = panda$core$Char8$convert$R$panda$core$Int32(c384);
    result385 = $tmp386;
    int64_t $tmp387 = ((int64_t) c384.value) & 255;
    bool $tmp388 = $tmp387 < 192;
    if (((panda$core$Bit) { $tmp388 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp390, result385);
        $returnValue389 = $tmp390;
        return $returnValue389;
    }
    }
    int64_t $tmp392 = ((int64_t) c384.value) & 255;
    bool $tmp393 = $tmp392 < 224;
    if (((panda$core$Bit) { $tmp393 }).value) {
    {
        panda$core$Int64 $tmp394 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp395 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp394, self->_length);
        PANDA_ASSERT($tmp395.value);
        panda$core$Int32 $tmp396 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result385, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp397 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp396, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp398 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp399 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp398.value]);
        panda$core$Int32 $tmp400 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp399, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp401 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp397, $tmp400);
        result385 = $tmp401;
        panda$core$Char32$init$panda$core$Int32(&$tmp402, result385);
        $returnValue389 = $tmp402;
        return $returnValue389;
    }
    }
    int64_t $tmp404 = ((int64_t) c384.value) & 255;
    bool $tmp405 = $tmp404 < 240;
    if (((panda$core$Bit) { $tmp405 }).value) {
    {
        panda$core$Int64 $tmp406 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp407 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp406, self->_length);
        PANDA_ASSERT($tmp407.value);
        panda$core$Int32 $tmp408 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result385, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp409 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp408, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp410 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp411 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp410.value]);
        panda$core$Int32 $tmp412 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp411, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp413 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp412, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp414 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp409, $tmp413);
        panda$core$Int64 $tmp415 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp416 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp415.value]);
        panda$core$Int32 $tmp417 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp416, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp418 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp414, $tmp417);
        result385 = $tmp418;
        panda$core$Char32$init$panda$core$Int32(&$tmp419, result385);
        $returnValue389 = $tmp419;
        return $returnValue389;
    }
    }
    panda$core$Int64 $tmp421 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp422 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp421, self->_length);
    PANDA_ASSERT($tmp422.value);
    panda$core$Int32 $tmp423 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result385, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp424 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp423, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp425 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp426 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp425.value]);
    panda$core$Int32 $tmp427 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp426, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp428 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp427, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp429 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp424, $tmp428);
    panda$core$Int64 $tmp430 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp431 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp430.value]);
    panda$core$Int32 $tmp432 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp431, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp433 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp432, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp434 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp429, $tmp433);
    panda$core$Int64 $tmp435 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx383, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp436 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp435.value]);
    panda$core$Int32 $tmp437 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp436, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp438 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp434, $tmp437);
    result385 = $tmp438;
    panda$core$Char32$init$panda$core$Int32(&$tmp439, result385);
    $returnValue389 = $tmp439;
    return $returnValue389;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue441;
    panda$core$String$Index $tmp442 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp443 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp442, p_index);
    panda$core$Char32 $tmp444 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp443);
    $returnValue441 = $tmp444;
    return $returnValue441;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $returnValue446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp450 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp449, (self->data + p_r.min.value.value), $tmp450, self);
    $tmp448 = $tmp449;
    $tmp447 = $tmp448;
    $returnValue446 = $tmp447;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
    return $returnValue446;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min452;
    panda$core$String$Index max454;
    panda$core$String* $returnValue457;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp460;
    memset(&min452, 0, sizeof(min452));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min452 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp453 = panda$core$String$start$R$panda$core$String$Index(self);
        min452 = $tmp453;
    }
    }
    memset(&max454, 0, sizeof(max454));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max454 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp455 = panda$core$String$end$R$panda$core$String$Index(self);
        max454 = $tmp455;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp456 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max454);
            max454 = $tmp456;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp460, min452, max454, p_r.inclusive);
    panda$core$String* $tmp461 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp460);
    $tmp459 = $tmp461;
    $tmp458 = $tmp459;
    $returnValue457 = $tmp458;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
    return $returnValue457;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current466;
    panda$core$MutableString* result467 = NULL;
    panda$core$MutableString* $tmp468;
    panda$core$MutableString* $tmp469;
    panda$core$Int64 max471;
    panda$core$Char8 c477;
    panda$core$String* $returnValue488;
    panda$core$String* $tmp489;
    panda$core$String* $tmp490;
    int $tmp465;
    {
        current466 = p_r.min.value;
        panda$core$MutableString* $tmp470 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp470);
        $tmp469 = $tmp470;
        $tmp468 = $tmp469;
        result467 = $tmp468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        max471 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp472 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max471, ((panda$core$Int64) { 1 }));
            max471 = $tmp472;
        }
        }
        $l473:;
        panda$core$Bit $tmp476 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current466, max471);
        bool $tmp475 = $tmp476.value;
        if (!$tmp475) goto $l474;
        {
            c477 = self->data[current466.value];
            panda$core$MutableString$append$panda$core$Char8(result467, c477);
            panda$core$Int64 $tmp478 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current466, ((panda$core$Int64) { 1 }));
            current466 = $tmp478;
            int64_t $tmp479 = ((int64_t) c477.value) & 255;
            bool $tmp480 = $tmp479 >= 192;
            if (((panda$core$Bit) { $tmp480 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result467, self->data[current466.value]);
                panda$core$Int64 $tmp481 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current466, ((panda$core$Int64) { 1 }));
                current466 = $tmp481;
            }
            }
            int64_t $tmp482 = ((int64_t) c477.value) & 255;
            bool $tmp483 = $tmp482 >= 224;
            if (((panda$core$Bit) { $tmp483 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result467, self->data[current466.value]);
                panda$core$Int64 $tmp484 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current466, ((panda$core$Int64) { 1 }));
                current466 = $tmp484;
            }
            }
            int64_t $tmp485 = ((int64_t) c477.value) & 255;
            bool $tmp486 = $tmp485 >= 240;
            if (((panda$core$Bit) { $tmp486 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result467, self->data[current466.value]);
                panda$core$Int64 $tmp487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current466, ((panda$core$Int64) { 1 }));
                current466 = $tmp487;
            }
            }
        }
        goto $l473;
        $l474:;
        panda$core$String* $tmp491 = panda$core$MutableString$finish$R$panda$core$String(result467);
        $tmp490 = $tmp491;
        $tmp489 = $tmp490;
        $returnValue488 = $tmp489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        $tmp465 = 0;
        goto $l463;
        $l492:;
        return $returnValue488;
    }
    $l463:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result467));
    result467 = NULL;
    switch ($tmp465) {
        case 0: goto $l492;
    }
    $l494:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String* $returnValue496;
    panda$core$String* $tmp497;
    panda$core$String$Index min500;
    panda$core$String$Index max502;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp507;
    panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp495.value) {
    {
        $tmp497 = &$s498;
        $returnValue496 = $tmp497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
        return $returnValue496;
    }
    }
    memset(&min500, 0, sizeof(min500));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min500 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp501 = panda$core$String$start$R$panda$core$String$Index(self);
        min500 = $tmp501;
    }
    }
    memset(&max502, 0, sizeof(max502));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max502 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp503 = panda$core$String$end$R$panda$core$String$Index(self);
        max502 = $tmp503;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp504 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max502);
            max502 = $tmp504;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp507, min500, max502, p_r.inclusive);
    panda$core$String* $tmp508 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp507);
    $tmp506 = $tmp508;
    $tmp505 = $tmp506;
    $returnValue496 = $tmp505;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
    return $returnValue496;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String* $returnValue514;
    panda$core$String* $tmp515;
    panda$core$Int64 step519;
    panda$core$Int64 current520;
    panda$core$Int64 end525;
    panda$core$MutableString* result529 = NULL;
    panda$core$MutableString* $tmp530;
    panda$core$MutableString* $tmp531;
    panda$core$Char8 c538;
    panda$core$Range$LTpanda$core$Int64$GT $tmp549;
    panda$core$String* $tmp564;
    panda$core$String* $tmp565;
    panda$core$String$Index $tmp569;
    panda$core$Char8 c582;
    panda$core$Int64 old583;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp604;
    panda$core$String* $tmp624;
    panda$core$String* $tmp625;
    panda$core$String$Index $tmp629;
    panda$core$Char8 c653;
    panda$core$String* $tmp663;
    panda$core$String* $tmp664;
    int $tmp512;
    {
        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
        if ($tmp513.value) {
        {
            $tmp515 = &$s516;
            $returnValue514 = $tmp515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
            $tmp512 = 0;
            goto $l510;
            $l517:;
            return $returnValue514;
        }
        }
        step519 = p_r.step;
        memset(&current520, 0, sizeof(current520));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current520 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Bit $tmp521 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step519, ((panda$core$Int64) { 0 }));
        if ($tmp521.value) {
        {
            panda$core$String$Index $tmp522 = panda$core$String$start$R$panda$core$String$Index(self);
            current520 = $tmp522.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp523 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp524 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp523);
            current520 = $tmp524.value;
        }
        }
        }
        memset(&end525, 0, sizeof(end525));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end525 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Bit $tmp526 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step519, ((panda$core$Int64) { 0 }));
        if ($tmp526.value) {
        {
            panda$core$String$Index $tmp527 = panda$core$String$end$R$panda$core$String$Index(self);
            end525 = $tmp527.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp528 = panda$core$String$start$R$panda$core$String$Index(self);
            end525 = $tmp528.value;
        }
        }
        }
        panda$core$MutableString* $tmp532 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp532);
        $tmp531 = $tmp532;
        $tmp530 = $tmp531;
        result529 = $tmp530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
        panda$core$Bit $tmp533 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp533.value) {
        {
            $l534:;
            panda$core$Bit $tmp537 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current520, end525);
            bool $tmp536 = $tmp537.value;
            if (!$tmp536) goto $l535;
            {
                c538 = self->data[current520.value];
                panda$core$MutableString$append$panda$core$Char8(result529, c538);
                panda$core$Int64 $tmp539 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                current520 = $tmp539;
                int64_t $tmp540 = ((int64_t) c538.value) & 255;
                bool $tmp541 = $tmp540 >= 192;
                if (((panda$core$Bit) { $tmp541 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                    panda$core$Int64 $tmp542 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                    current520 = $tmp542;
                }
                }
                int64_t $tmp543 = ((int64_t) c538.value) & 255;
                bool $tmp544 = $tmp543 >= 224;
                if (((panda$core$Bit) { $tmp544 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                    panda$core$Int64 $tmp545 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                    current520 = $tmp545;
                }
                }
                int64_t $tmp546 = ((int64_t) c538.value) & 255;
                bool $tmp547 = $tmp546 >= 240;
                if (((panda$core$Bit) { $tmp547 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                    panda$core$Int64 $tmp548 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                    current520 = $tmp548;
                }
                }
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp549, ((panda$core$Int64) { 1 }), step519, ((panda$core$Bit) { false }));
                int64_t $tmp551 = $tmp549.min.value;
                panda$core$Int64 i550 = { $tmp551 };
                int64_t $tmp553 = $tmp549.max.value;
                bool $tmp554 = $tmp549.inclusive.value;
                if ($tmp554) goto $l561; else goto $l562;
                $l561:;
                if ($tmp551 <= $tmp553) goto $l555; else goto $l557;
                $l562:;
                if ($tmp551 < $tmp553) goto $l555; else goto $l557;
                $l555:;
                {
                    panda$core$Bit $tmp563 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current520, end525);
                    if ($tmp563.value) {
                    {
                        panda$core$String* $tmp566 = panda$core$MutableString$convert$R$panda$core$String(result529);
                        $tmp565 = $tmp566;
                        $tmp564 = $tmp565;
                        $returnValue514 = $tmp564;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                        $tmp512 = 1;
                        goto $l510;
                        $l567:;
                        return $returnValue514;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp569, current520);
                    panda$core$String$Index $tmp570 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp569);
                    current520 = $tmp570.value;
                }
                $l558:;
                int64_t $tmp572 = $tmp553 - i550.value;
                if ($tmp554) goto $l573; else goto $l574;
                $l573:;
                if ((uint64_t) $tmp572 >= 1) goto $l571; else goto $l557;
                $l574:;
                if ((uint64_t) $tmp572 > 1) goto $l571; else goto $l557;
                $l571:;
                i550.value += 1;
                goto $l555;
                $l557:;
            }
            goto $l534;
            $l535:;
        }
        }
        else {
        {
            panda$core$Bit $tmp577 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp577.value);
            $l578:;
            panda$core$Bit $tmp581 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current520, end525);
            bool $tmp580 = $tmp581.value;
            if (!$tmp580) goto $l579;
            {
                c582 = self->data[current520.value];
                panda$core$MutableString$append$panda$core$Char8(result529, c582);
                old583 = current520;
                panda$core$Int64 $tmp584 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                current520 = $tmp584;
                int64_t $tmp585 = ((int64_t) c582.value) & 255;
                bool $tmp586 = $tmp585 >= 192;
                if (((panda$core$Bit) { $tmp586 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                    panda$core$Int64 $tmp587 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                    current520 = $tmp587;
                }
                }
                int64_t $tmp588 = ((int64_t) c582.value) & 255;
                bool $tmp589 = $tmp588 >= 224;
                if (((panda$core$Bit) { $tmp589 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                    panda$core$Int64 $tmp590 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                    current520 = $tmp590;
                }
                }
                int64_t $tmp591 = ((int64_t) c582.value) & 255;
                bool $tmp592 = $tmp591 >= 240;
                if (((panda$core$Bit) { $tmp592 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                }
                }
                panda$core$Int64 $tmp593 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old583, ((panda$core$Int64) { 1 }));
                current520 = $tmp593;
                $l594:;
                int64_t $tmp598 = ((int64_t) self->data[current520.value].value) & 255;
                bool $tmp599 = $tmp598 >= 128;
                bool $tmp597 = $tmp599;
                if (!$tmp597) goto $l600;
                int64_t $tmp601 = ((int64_t) self->data[current520.value].value) & 255;
                bool $tmp602 = $tmp601 < 192;
                $tmp597 = $tmp602;
                $l600:;
                bool $tmp596 = ((panda$core$Bit) { $tmp597 }).value;
                if (!$tmp596) goto $l595;
                {
                    panda$core$Int64 $tmp603 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                    current520 = $tmp603;
                }
                goto $l594;
                $l595:;
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp604, ((panda$core$Int64) { -1 }), step519, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
                int64_t $tmp606 = $tmp604.start.value;
                panda$core$Int64 i605 = { $tmp606 };
                int64_t $tmp608 = $tmp604.end.value;
                int64_t $tmp609 = $tmp604.step.value;
                bool $tmp610 = $tmp604.inclusive.value;
                bool $tmp617 = $tmp609 > 0;
                if ($tmp617) goto $l615; else goto $l616;
                $l615:;
                if ($tmp610) goto $l618; else goto $l619;
                $l618:;
                if ($tmp606 <= $tmp608) goto $l611; else goto $l613;
                $l619:;
                if ($tmp606 < $tmp608) goto $l611; else goto $l613;
                $l616:;
                if ($tmp610) goto $l620; else goto $l621;
                $l620:;
                if ($tmp606 >= $tmp608) goto $l611; else goto $l613;
                $l621:;
                if ($tmp606 > $tmp608) goto $l611; else goto $l613;
                $l611:;
                {
                    panda$core$Bit $tmp623 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current520, end525);
                    if ($tmp623.value) {
                    {
                        panda$core$String* $tmp626 = panda$core$MutableString$convert$R$panda$core$String(result529);
                        $tmp625 = $tmp626;
                        $tmp624 = $tmp625;
                        $returnValue514 = $tmp624;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                        $tmp512 = 2;
                        goto $l510;
                        $l627:;
                        return $returnValue514;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp629, current520);
                    panda$core$String$Index $tmp630 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp629);
                    current520 = $tmp630.value;
                }
                $l614:;
                if ($tmp617) goto $l632; else goto $l633;
                $l632:;
                int64_t $tmp634 = $tmp608 - i605.value;
                if ($tmp610) goto $l635; else goto $l636;
                $l635:;
                if ((uint64_t) $tmp634 >= $tmp609) goto $l631; else goto $l613;
                $l636:;
                if ((uint64_t) $tmp634 > $tmp609) goto $l631; else goto $l613;
                $l633:;
                int64_t $tmp638 = i605.value - $tmp608;
                if ($tmp610) goto $l639; else goto $l640;
                $l639:;
                if ((uint64_t) $tmp638 >= -$tmp609) goto $l631; else goto $l613;
                $l640:;
                if ((uint64_t) $tmp638 > -$tmp609) goto $l631; else goto $l613;
                $l631:;
                i605.value += $tmp609;
                goto $l611;
                $l613:;
            }
            goto $l578;
            $l579:;
        }
        }
        bool $tmp644 = p_r.inclusive.value;
        if ($tmp644) goto $l645;
        $tmp644 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l645:;
        panda$core$Bit $tmp646 = { $tmp644 };
        bool $tmp643 = $tmp646.value;
        if (!$tmp643) goto $l647;
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current520, end525);
        $tmp643 = $tmp648.value;
        $l647:;
        panda$core$Bit $tmp649 = { $tmp643 };
        bool $tmp642 = $tmp649.value;
        if (!$tmp642) goto $l650;
        panda$core$Bit $tmp651 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end525, self->_length);
        $tmp642 = $tmp651.value;
        $l650:;
        panda$core$Bit $tmp652 = { $tmp642 };
        if ($tmp652.value) {
        {
            c653 = self->data[current520.value];
            panda$core$MutableString$append$panda$core$Char8(result529, c653);
            panda$core$Int64 $tmp654 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
            current520 = $tmp654;
            int64_t $tmp655 = ((int64_t) c653.value) & 255;
            bool $tmp656 = $tmp655 >= 192;
            if (((panda$core$Bit) { $tmp656 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                panda$core$Int64 $tmp657 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                current520 = $tmp657;
            }
            }
            int64_t $tmp658 = ((int64_t) c653.value) & 255;
            bool $tmp659 = $tmp658 >= 224;
            if (((panda$core$Bit) { $tmp659 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
                panda$core$Int64 $tmp660 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current520, ((panda$core$Int64) { 1 }));
                current520 = $tmp660;
            }
            }
            int64_t $tmp661 = ((int64_t) c653.value) & 255;
            bool $tmp662 = $tmp661 >= 240;
            if (((panda$core$Bit) { $tmp662 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result529, self->data[current520.value]);
            }
            }
        }
        }
        panda$core$String* $tmp665 = panda$core$MutableString$finish$R$panda$core$String(result529);
        $tmp664 = $tmp665;
        $tmp663 = $tmp664;
        $returnValue514 = $tmp663;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
        $tmp512 = 3;
        goto $l510;
        $l666:;
        return $returnValue514;
    }
    $l510:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result529));
    result529 = NULL;
    switch ($tmp512) {
        case 1: goto $l567;
        case 3: goto $l666;
        case 2: goto $l627;
        case 0: goto $l517;
    }
    $l668:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start669;
    panda$core$String$Index$nullable end672;
    panda$core$String* $returnValue675;
    panda$core$String* $tmp676;
    panda$core$String* $tmp677;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp678;
    memset(&start669, 0, sizeof(start669));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp670 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp671 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp670, ((panda$core$Int64) p_r.min.value));
        start669 = ((panda$core$String$Index$nullable) { $tmp671, true });
    }
    }
    else {
    {
        start669 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end672, 0, sizeof(end672));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp673 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp674 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp673, ((panda$core$Int64) p_r.max.value));
        end672 = ((panda$core$String$Index$nullable) { $tmp674, true });
    }
    }
    else {
    {
        end672 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp678, start669, end672, p_r.inclusive);
    panda$core$String* $tmp679 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp678);
    $tmp677 = $tmp679;
    $tmp676 = $tmp677;
    $returnValue675 = $tmp676;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
    return $returnValue675;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start681;
    panda$core$String$Index$nullable end684;
    panda$core$String* $returnValue687;
    panda$core$String* $tmp688;
    panda$core$String* $tmp689;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp690;
    memset(&start681, 0, sizeof(start681));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp682 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp683 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp682, ((panda$core$Int64) p_r.start.value));
        start681 = ((panda$core$String$Index$nullable) { $tmp683, true });
    }
    }
    else {
    {
        start681 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end684, 0, sizeof(end684));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp685 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp686 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp685, ((panda$core$Int64) p_r.end.value));
        end684 = ((panda$core$String$Index$nullable) { $tmp686, true });
    }
    }
    else {
    {
        end684 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp690, start681, end684, p_r.step, p_r.inclusive);
    panda$core$String* $tmp691 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp690);
    $tmp689 = $tmp691;
    $tmp688 = $tmp689;
    $returnValue687 = $tmp688;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
    return $returnValue687;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp693;
    panda$core$Bit $returnValue708;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp693, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp695 = $tmp693.min.value;
    panda$core$Int64 i694 = { $tmp695 };
    int64_t $tmp697 = $tmp693.max.value;
    bool $tmp698 = $tmp693.inclusive.value;
    if ($tmp698) goto $l705; else goto $l706;
    $l705:;
    if ($tmp695 <= $tmp697) goto $l699; else goto $l701;
    $l706:;
    if ($tmp695 < $tmp697) goto $l699; else goto $l701;
    $l699:;
    {
        panda$core$Bit $tmp707 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i694.value], p_c);
        if ($tmp707.value) {
        {
            $returnValue708 = ((panda$core$Bit) { true });
            return $returnValue708;
        }
        }
    }
    $l702:;
    int64_t $tmp711 = $tmp697 - i694.value;
    if ($tmp698) goto $l712; else goto $l713;
    $l712:;
    if ((uint64_t) $tmp711 >= 1) goto $l710; else goto $l701;
    $l713:;
    if ((uint64_t) $tmp711 > 1) goto $l710; else goto $l701;
    $l710:;
    i694.value += 1;
    goto $l699;
    $l701:;
    $returnValue708 = ((panda$core$Bit) { false });
    return $returnValue708;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue717;
    panda$core$String$Index$nullable $tmp718 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue717 = ((panda$core$Bit) { $tmp718.nonnull });
    return $returnValue717;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue720;
    panda$core$String$Index $tmp721 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp722 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp721);
    $returnValue720 = $tmp722;
    return $returnValue720;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue725;
    panda$core$Range$LTpanda$core$Int64$GT $tmp727;
    panda$core$Range$LTpanda$core$Int64$GT $tmp742;
    panda$core$String$Index $tmp764;
    panda$core$Bit $tmp724 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp724.value) {
    {
        $returnValue725 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue725;
    }
    }
    panda$core$Int64 $tmp728 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp727, p_start.value, $tmp728, ((panda$core$Bit) { true }));
    int64_t $tmp730 = $tmp727.min.value;
    panda$core$Int64 i729 = { $tmp730 };
    int64_t $tmp732 = $tmp727.max.value;
    bool $tmp733 = $tmp727.inclusive.value;
    if ($tmp733) goto $l740; else goto $l741;
    $l740:;
    if ($tmp730 <= $tmp732) goto $l734; else goto $l736;
    $l741:;
    if ($tmp730 < $tmp732) goto $l734; else goto $l736;
    $l734:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp742, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp744 = $tmp742.min.value;
        panda$core$Int64 j743 = { $tmp744 };
        int64_t $tmp746 = $tmp742.max.value;
        bool $tmp747 = $tmp742.inclusive.value;
        if ($tmp747) goto $l754; else goto $l755;
        $l754:;
        if ($tmp744 <= $tmp746) goto $l748; else goto $l750;
        $l755:;
        if ($tmp744 < $tmp746) goto $l748; else goto $l750;
        $l748:;
        {
            panda$core$Int64 $tmp756 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i729, j743);
            panda$core$Bit $tmp757 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp756.value], p_s->data[j743.value]);
            if ($tmp757.value) {
            {
                goto $l737;
            }
            }
        }
        $l751:;
        int64_t $tmp759 = $tmp746 - j743.value;
        if ($tmp747) goto $l760; else goto $l761;
        $l760:;
        if ((uint64_t) $tmp759 >= 1) goto $l758; else goto $l750;
        $l761:;
        if ((uint64_t) $tmp759 > 1) goto $l758; else goto $l750;
        $l758:;
        j743.value += 1;
        goto $l748;
        $l750:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp764, i729);
        $returnValue725 = ((panda$core$String$Index$nullable) { $tmp764, true });
        return $returnValue725;
    }
    $l737:;
    int64_t $tmp767 = $tmp732 - i729.value;
    if ($tmp733) goto $l768; else goto $l769;
    $l768:;
    if ((uint64_t) $tmp767 >= 1) goto $l766; else goto $l736;
    $l769:;
    if ((uint64_t) $tmp767 > 1) goto $l766; else goto $l736;
    $l766:;
    i729.value += 1;
    goto $l734;
    $l736:;
    $returnValue725 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue725;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue773;
    panda$core$String$Index $tmp774 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp775 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp774);
    $returnValue773 = $tmp775;
    return $returnValue773;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue778;
    panda$core$Int64 startPos780;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp783;
    panda$core$Range$LTpanda$core$Int64$GT $tmp802;
    panda$core$String$Index $tmp824;
    panda$core$Bit $tmp777 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp777.value) {
    {
        $returnValue778 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue778;
    }
    }
    panda$core$Int64 $tmp781 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp782 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp781);
    startPos780 = $tmp782;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp783, startPos780, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp785 = $tmp783.start.value;
    panda$core$Int64 i784 = { $tmp785 };
    int64_t $tmp787 = $tmp783.end.value;
    int64_t $tmp788 = $tmp783.step.value;
    bool $tmp789 = $tmp783.inclusive.value;
    bool $tmp796 = $tmp788 > 0;
    if ($tmp796) goto $l794; else goto $l795;
    $l794:;
    if ($tmp789) goto $l797; else goto $l798;
    $l797:;
    if ($tmp785 <= $tmp787) goto $l790; else goto $l792;
    $l798:;
    if ($tmp785 < $tmp787) goto $l790; else goto $l792;
    $l795:;
    if ($tmp789) goto $l799; else goto $l800;
    $l799:;
    if ($tmp785 >= $tmp787) goto $l790; else goto $l792;
    $l800:;
    if ($tmp785 > $tmp787) goto $l790; else goto $l792;
    $l790:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp802, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp804 = $tmp802.min.value;
        panda$core$Int64 j803 = { $tmp804 };
        int64_t $tmp806 = $tmp802.max.value;
        bool $tmp807 = $tmp802.inclusive.value;
        if ($tmp807) goto $l814; else goto $l815;
        $l814:;
        if ($tmp804 <= $tmp806) goto $l808; else goto $l810;
        $l815:;
        if ($tmp804 < $tmp806) goto $l808; else goto $l810;
        $l808:;
        {
            panda$core$Int64 $tmp816 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i784, j803);
            panda$core$Bit $tmp817 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp816.value], p_s->data[j803.value]);
            if ($tmp817.value) {
            {
                goto $l793;
            }
            }
        }
        $l811:;
        int64_t $tmp819 = $tmp806 - j803.value;
        if ($tmp807) goto $l820; else goto $l821;
        $l820:;
        if ((uint64_t) $tmp819 >= 1) goto $l818; else goto $l810;
        $l821:;
        if ((uint64_t) $tmp819 > 1) goto $l818; else goto $l810;
        $l818:;
        j803.value += 1;
        goto $l808;
        $l810:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp824, i784);
        $returnValue778 = ((panda$core$String$Index$nullable) { $tmp824, true });
        return $returnValue778;
    }
    $l793:;
    if ($tmp796) goto $l827; else goto $l828;
    $l827:;
    int64_t $tmp829 = $tmp787 - i784.value;
    if ($tmp789) goto $l830; else goto $l831;
    $l830:;
    if ((uint64_t) $tmp829 >= $tmp788) goto $l826; else goto $l792;
    $l831:;
    if ((uint64_t) $tmp829 > $tmp788) goto $l826; else goto $l792;
    $l828:;
    int64_t $tmp833 = i784.value - $tmp787;
    if ($tmp789) goto $l834; else goto $l835;
    $l834:;
    if ((uint64_t) $tmp833 >= -$tmp788) goto $l826; else goto $l792;
    $l835:;
    if ((uint64_t) $tmp833 > -$tmp788) goto $l826; else goto $l792;
    $l826:;
    i784.value += $tmp788;
    goto $l790;
    $l792:;
    $returnValue778 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue778;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue838;
    panda$core$Matcher* $tmp839;
    panda$core$Bit $tmp841;
    panda$core$Matcher* $tmp840 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp839 = $tmp840;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp841, $tmp839);
    $returnValue838 = $tmp841;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
    return $returnValue838;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue843;
    panda$core$Matcher* $tmp844;
    panda$core$Matcher* $tmp845 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp844 = $tmp845;
    panda$core$Bit $tmp846 = panda$core$Matcher$find$R$panda$core$Bit($tmp844);
    $returnValue843 = $tmp846;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
    return $returnValue843;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher851 = NULL;
    panda$core$Matcher* $tmp852;
    panda$core$Matcher* $tmp853;
    panda$core$Bit $tmp855;
    panda$collections$Array* result859 = NULL;
    panda$collections$Array* $tmp860;
    panda$collections$Array* $tmp861;
    panda$core$Range$LTpanda$core$Int64$GT $tmp863;
    panda$core$Int64 $tmp864;
    panda$core$String* $tmp878;
    panda$collections$ListView* $returnValue886;
    panda$collections$ListView* $tmp887;
    panda$collections$ListView* $tmp892;
    int $tmp850;
    {
        panda$core$Matcher* $tmp854 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp853 = $tmp854;
        $tmp852 = $tmp853;
        matcher851 = $tmp852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp855, matcher851);
        if ($tmp855.value) {
        {
            int $tmp858;
            {
                panda$collections$Array* $tmp862 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp862);
                $tmp861 = $tmp862;
                $tmp860 = $tmp861;
                result859 = $tmp860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp864, matcher851);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp863, ((panda$core$Int64) { 1 }), $tmp864, ((panda$core$Bit) { false }));
                int64_t $tmp866 = $tmp863.min.value;
                panda$core$Int64 i865 = { $tmp866 };
                int64_t $tmp868 = $tmp863.max.value;
                bool $tmp869 = $tmp863.inclusive.value;
                if ($tmp869) goto $l876; else goto $l877;
                $l876:;
                if ($tmp866 <= $tmp868) goto $l870; else goto $l872;
                $l877:;
                if ($tmp866 < $tmp868) goto $l870; else goto $l872;
                $l870:;
                {
                    panda$core$String* $tmp879 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher851, i865);
                    $tmp878 = $tmp879;
                    panda$collections$Array$add$panda$collections$Array$T(result859, ((panda$core$Object*) $tmp878));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                }
                $l873:;
                int64_t $tmp881 = $tmp868 - i865.value;
                if ($tmp869) goto $l882; else goto $l883;
                $l882:;
                if ((uint64_t) $tmp881 >= 1) goto $l880; else goto $l872;
                $l883:;
                if ((uint64_t) $tmp881 > 1) goto $l880; else goto $l872;
                $l880:;
                i865.value += 1;
                goto $l870;
                $l872:;
                $tmp887 = ((panda$collections$ListView*) result859);
                $returnValue886 = $tmp887;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
                $tmp858 = 0;
                goto $l856;
                $l888:;
                $tmp850 = 0;
                goto $l848;
                $l889:;
                return $returnValue886;
            }
            $l856:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result859));
            result859 = NULL;
            switch ($tmp858) {
                case 0: goto $l888;
            }
            $l891:;
        }
        }
        $tmp892 = NULL;
        $returnValue886 = $tmp892;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
        $tmp850 = 1;
        goto $l848;
        $l893:;
        return $returnValue886;
    }
    $l848:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher851));
    matcher851 = NULL;
    switch ($tmp850) {
        case 1: goto $l893;
        case 0: goto $l889;
    }
    $l895:;
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result899 = NULL;
    panda$core$MutableString* $tmp900;
    panda$core$MutableString* $tmp901;
    panda$core$String$Index index903;
    panda$core$String$Index$nullable nextIndex907;
    panda$core$String* $tmp909;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp910;
    panda$core$String* $tmp912;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp913;
    panda$core$String$Index $tmp915;
    panda$core$String* $returnValue917;
    panda$core$String* $tmp918;
    panda$core$String* $tmp919;
    int $tmp898;
    {
        panda$core$MutableString* $tmp902 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp902);
        $tmp901 = $tmp902;
        $tmp900 = $tmp901;
        result899 = $tmp900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp900));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        panda$core$String$Index $tmp904 = panda$core$String$start$R$panda$core$String$Index(self);
        index903 = $tmp904;
        $l905:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp908 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index903);
            nextIndex907 = $tmp908;
            if (((panda$core$Bit) { !nextIndex907.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp910, ((panda$core$String$Index$nullable) { index903, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp911 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp910);
                $tmp909 = $tmp911;
                panda$core$MutableString$append$panda$core$String(result899, $tmp909);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                goto $l906;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp913, index903, ((panda$core$String$Index) nextIndex907.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp914 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp913);
            $tmp912 = $tmp914;
            panda$core$MutableString$append$panda$core$String(result899, $tmp912);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
            panda$core$MutableString$append$panda$core$String(result899, p_replacement);
            panda$core$Int64 $tmp916 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex907.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp915, $tmp916);
            index903 = $tmp915;
        }
        }
        $l906:;
        panda$core$String* $tmp920 = panda$core$MutableString$finish$R$panda$core$String(result899);
        $tmp919 = $tmp920;
        $tmp918 = $tmp919;
        $returnValue917 = $tmp918;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp918));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
        $tmp898 = 0;
        goto $l896;
        $l921:;
        return $returnValue917;
    }
    $l896:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result899));
    result899 = NULL;
    switch ($tmp898) {
        case 0: goto $l921;
    }
    $l923:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$String* $tmp927;
    panda$core$String* $tmp928;
    panda$core$String* $tmp929;
    panda$core$String* $tmp930;
    panda$core$MutableString* result938 = NULL;
    panda$core$MutableString* $tmp939;
    panda$core$MutableString* $tmp940;
    panda$core$Matcher* matcher942 = NULL;
    panda$core$Matcher* $tmp943;
    panda$core$Matcher* $tmp944;
    panda$core$String* $returnValue950;
    panda$core$String* $tmp951;
    panda$core$String* $tmp952;
    int $tmp926;
    {
        panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s931, p_replacement);
        $tmp930 = $tmp932;
        panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp930, &$s933);
        $tmp929 = $tmp934;
        panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp929, self);
        $tmp928 = $tmp935;
        panda$core$String* $tmp937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp928, &$s936);
        $tmp927 = $tmp937;
        panda$io$Console$printLine$panda$core$String($tmp927);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp929));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp930));
        panda$core$MutableString* $tmp941 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp941);
        $tmp940 = $tmp941;
        $tmp939 = $tmp940;
        result938 = $tmp939;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp940));
        panda$core$Matcher* $tmp945 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp944 = $tmp945;
        $tmp943 = $tmp944;
        matcher942 = $tmp943;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
        $l946:;
        panda$core$Bit $tmp949 = panda$core$Matcher$find$R$panda$core$Bit(matcher942);
        bool $tmp948 = $tmp949.value;
        if (!$tmp948) goto $l947;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(matcher942, result938, p_replacement);
        }
        goto $l946;
        $l947:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher942, result938);
        panda$core$String* $tmp953 = panda$core$MutableString$finish$R$panda$core$String(result938);
        $tmp952 = $tmp953;
        $tmp951 = $tmp952;
        $returnValue950 = $tmp951;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp951));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
        $tmp926 = 0;
        goto $l924;
        $l954:;
        return $returnValue950;
    }
    $l924:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result938));
    result938 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher942));
    matcher942 = NULL;
    switch ($tmp926) {
        case 0: goto $l954;
    }
    $l956:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result960 = NULL;
    panda$core$MutableString* $tmp961;
    panda$core$MutableString* $tmp962;
    panda$core$Matcher* matcher964 = NULL;
    panda$core$Matcher* $tmp965;
    panda$core$Matcher* $tmp966;
    panda$core$String* $tmp972;
    panda$core$Object* $tmp973;
    panda$core$String* $tmp974;
    panda$core$Object* $tmp976;
    panda$core$String* $returnValue981;
    panda$core$String* $tmp982;
    panda$core$String* $tmp983;
    int $tmp959;
    {
        panda$core$MutableString* $tmp963 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp963);
        $tmp962 = $tmp963;
        $tmp961 = $tmp962;
        result960 = $tmp961;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
        panda$core$Matcher* $tmp967 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp966 = $tmp967;
        $tmp965 = $tmp966;
        matcher964 = $tmp965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
        $l968:;
        panda$core$Bit $tmp971 = panda$core$Matcher$find$R$panda$core$Bit(matcher964);
        bool $tmp970 = $tmp971.value;
        if (!$tmp970) goto $l969;
        {
            panda$core$String* $tmp975 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher964, ((panda$core$Int64) { 0 }));
            $tmp974 = $tmp975;
            if (p_replacement->target) {
                $tmp976 = (($fn977) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp974);
            } else {
                $tmp976 = (($fn978) p_replacement->pointer)($tmp974);
            }
            $tmp973 = $tmp976;
            panda$core$String* $tmp980 = (($fn979) $tmp973->$class->vtable[0])($tmp973);
            $tmp972 = $tmp980;
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher964, result960, $tmp972, ((panda$core$Bit) { false }));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp972));
            panda$core$Panda$unref$panda$core$Object($tmp973);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp974));
        }
        goto $l968;
        $l969:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher964, result960);
        panda$core$String* $tmp984 = panda$core$MutableString$convert$R$panda$core$String(result960);
        $tmp983 = $tmp984;
        $tmp982 = $tmp983;
        $returnValue981 = $tmp982;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
        $tmp959 = 0;
        goto $l957;
        $l985:;
        return $returnValue981;
    }
    $l957:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result960));
    result960 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher964));
    matcher964 = NULL;
    switch ($tmp959) {
        case 0: goto $l985;
    }
    $l987:;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue988;
    panda$core$String$Index $tmp989;
    panda$core$String$Index$init$panda$core$Int64(&$tmp989, ((panda$core$Int64) { 0 }));
    $returnValue988 = $tmp989;
    return $returnValue988;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue991;
    panda$core$String$Index $tmp992;
    panda$core$String$Index$init$panda$core$Int64(&$tmp992, self->_length);
    $returnValue991 = $tmp992;
    return $returnValue991;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c995;
    panda$core$String$Index $returnValue998;
    panda$core$String$Index $tmp999;
    panda$core$String$Index $tmp1003;
    panda$core$String$Index $tmp1007;
    panda$core$String$Index $tmp1010;
    panda$core$Bit $tmp994 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp994.value);
    int64_t $tmp996 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c995 = $tmp996;
    bool $tmp997 = c995 >= 240;
    if (((panda$core$Bit) { $tmp997 }).value) {
    {
        panda$core$Int64 $tmp1000 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp999, $tmp1000);
        $returnValue998 = $tmp999;
        return $returnValue998;
    }
    }
    bool $tmp1002 = c995 >= 224;
    if (((panda$core$Bit) { $tmp1002 }).value) {
    {
        panda$core$Int64 $tmp1004 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1003, $tmp1004);
        $returnValue998 = $tmp1003;
        return $returnValue998;
    }
    }
    bool $tmp1006 = c995 >= 192;
    if (((panda$core$Bit) { $tmp1006 }).value) {
    {
        panda$core$Int64 $tmp1008 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1007, $tmp1008);
        $returnValue998 = $tmp1007;
        return $returnValue998;
    }
    }
    panda$core$Int64 $tmp1011 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp1010, $tmp1011);
    $returnValue998 = $tmp1010;
    return $returnValue998;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue1014;
    panda$core$String$Index $returnValue1026;
    panda$core$String$Index $tmp1027;
    panda$core$Bit $tmp1013 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1013.value);
    panda$core$Int64 $tmp1015 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue1014 = $tmp1015;
    $l1016:;
    int64_t $tmp1020 = ((int64_t) self->data[newValue1014.value].value) & 255;
    bool $tmp1021 = $tmp1020 >= 128;
    bool $tmp1019 = $tmp1021;
    if (!$tmp1019) goto $l1022;
    int64_t $tmp1023 = ((int64_t) self->data[newValue1014.value].value) & 255;
    bool $tmp1024 = $tmp1023 < 192;
    $tmp1019 = $tmp1024;
    $l1022:;
    bool $tmp1018 = ((panda$core$Bit) { $tmp1019 }).value;
    if (!$tmp1018) goto $l1017;
    {
        panda$core$Int64 $tmp1025 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1014, ((panda$core$Int64) { 1 }));
        newValue1014 = $tmp1025;
    }
    goto $l1016;
    $l1017:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1027, newValue1014);
    $returnValue1026 = $tmp1027;
    return $returnValue1026;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1029;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1031;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1052;
    panda$core$String$Index $returnValue1083;
    result1029 = p_index;
    panda$core$Bit $tmp1030 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp1030.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1031, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp1033 = $tmp1031.min.value;
        panda$core$Int64 i1032 = { $tmp1033 };
        int64_t $tmp1035 = $tmp1031.max.value;
        bool $tmp1036 = $tmp1031.inclusive.value;
        if ($tmp1036) goto $l1043; else goto $l1044;
        $l1043:;
        if ($tmp1033 <= $tmp1035) goto $l1037; else goto $l1039;
        $l1044:;
        if ($tmp1033 < $tmp1035) goto $l1037; else goto $l1039;
        $l1037:;
        {
            panda$core$String$Index $tmp1045 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1029);
            result1029 = $tmp1045;
        }
        $l1040:;
        int64_t $tmp1047 = $tmp1035 - i1032.value;
        if ($tmp1036) goto $l1048; else goto $l1049;
        $l1048:;
        if ((uint64_t) $tmp1047 >= 1) goto $l1046; else goto $l1039;
        $l1049:;
        if ((uint64_t) $tmp1047 > 1) goto $l1046; else goto $l1039;
        $l1046:;
        i1032.value += 1;
        goto $l1037;
        $l1039:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1052, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp1054 = $tmp1052.start.value;
        panda$core$Int64 i1053 = { $tmp1054 };
        int64_t $tmp1056 = $tmp1052.end.value;
        int64_t $tmp1057 = $tmp1052.step.value;
        bool $tmp1058 = $tmp1052.inclusive.value;
        bool $tmp1065 = $tmp1057 > 0;
        if ($tmp1065) goto $l1063; else goto $l1064;
        $l1063:;
        if ($tmp1058) goto $l1066; else goto $l1067;
        $l1066:;
        if ($tmp1054 <= $tmp1056) goto $l1059; else goto $l1061;
        $l1067:;
        if ($tmp1054 < $tmp1056) goto $l1059; else goto $l1061;
        $l1064:;
        if ($tmp1058) goto $l1068; else goto $l1069;
        $l1068:;
        if ($tmp1054 >= $tmp1056) goto $l1059; else goto $l1061;
        $l1069:;
        if ($tmp1054 > $tmp1056) goto $l1059; else goto $l1061;
        $l1059:;
        {
            panda$core$String$Index $tmp1071 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1029);
            result1029 = $tmp1071;
        }
        $l1062:;
        if ($tmp1065) goto $l1073; else goto $l1074;
        $l1073:;
        int64_t $tmp1075 = $tmp1056 - i1053.value;
        if ($tmp1058) goto $l1076; else goto $l1077;
        $l1076:;
        if ((uint64_t) $tmp1075 >= $tmp1057) goto $l1072; else goto $l1061;
        $l1077:;
        if ((uint64_t) $tmp1075 > $tmp1057) goto $l1072; else goto $l1061;
        $l1074:;
        int64_t $tmp1079 = i1053.value - $tmp1056;
        if ($tmp1058) goto $l1080; else goto $l1081;
        $l1080:;
        if ((uint64_t) $tmp1079 >= -$tmp1057) goto $l1072; else goto $l1061;
        $l1081:;
        if ((uint64_t) $tmp1079 > -$tmp1057) goto $l1072; else goto $l1061;
        $l1072:;
        i1053.value += $tmp1057;
        goto $l1059;
        $l1061:;
    }
    }
    $returnValue1083 = result1029;
    return $returnValue1083;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1085;
    panda$core$String* $tmp1086;
    panda$core$String* $tmp1087;
    panda$core$Char32 $tmp1088;
    panda$core$Char32$init$panda$core$Int32(&$tmp1088, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1089 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1088);
    $tmp1087 = $tmp1089;
    $tmp1086 = $tmp1087;
    $returnValue1085 = $tmp1086;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
    return $returnValue1085;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1093;
    panda$core$String* $tmp1094;
    panda$core$String* $tmp1096;
    panda$core$String* $tmp1097;
    panda$core$String* $tmp1098;
    panda$core$Int64 $tmp1091 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1092 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1091, p_width);
    if ($tmp1092.value) {
    {
        $tmp1094 = self;
        $returnValue1093 = $tmp1094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1094));
        return $returnValue1093;
    }
    }
    panda$core$Int64 $tmp1099 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1099);
    panda$core$String* $tmp1101 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1100);
    $tmp1098 = $tmp1101;
    panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1098);
    $tmp1097 = $tmp1102;
    $tmp1096 = $tmp1097;
    $returnValue1093 = $tmp1096;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1096));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
    return $returnValue1093;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1104;
    panda$core$String* $tmp1105;
    panda$core$String* $tmp1106;
    panda$core$Char32 $tmp1107;
    panda$core$Char32$init$panda$core$Int32(&$tmp1107, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1108 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1107);
    $tmp1106 = $tmp1108;
    $tmp1105 = $tmp1106;
    $returnValue1104 = $tmp1105;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
    return $returnValue1104;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1112;
    panda$core$String* $tmp1113;
    panda$core$String* $tmp1115;
    panda$core$String* $tmp1116;
    panda$core$String* $tmp1117;
    panda$core$Int64 $tmp1110 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1111 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1110, p_width);
    if ($tmp1111.value) {
    {
        $tmp1113 = self;
        $returnValue1112 = $tmp1113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1113));
        return $returnValue1112;
    }
    }
    panda$core$Int64 $tmp1118 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1119 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1118);
    panda$core$String* $tmp1120 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1119);
    $tmp1117 = $tmp1120;
    panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1117, self);
    $tmp1116 = $tmp1121;
    $tmp1115 = $tmp1116;
    $returnValue1112 = $tmp1115;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1117));
    return $returnValue1112;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1123;
    panda$core$String* $tmp1124;
    panda$core$String* $tmp1125;
    panda$core$Char32 $tmp1126;
    panda$core$Char32$init$panda$core$Int32(&$tmp1126, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1127 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1126);
    $tmp1125 = $tmp1127;
    $tmp1124 = $tmp1125;
    $returnValue1123 = $tmp1124;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1124));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
    return $returnValue1123;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1131;
    panda$core$String* $tmp1132;
    panda$core$Int64 pad1134;
    panda$core$Int64 left1137;
    panda$core$Int64 right1139;
    panda$core$String* $tmp1141;
    panda$core$String* $tmp1142;
    panda$core$String* $tmp1143;
    panda$core$String* $tmp1144;
    panda$core$String* $tmp1147;
    panda$core$Int64 $tmp1129 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1130 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1129, p_width);
    if ($tmp1130.value) {
    {
        $tmp1132 = self;
        $returnValue1131 = $tmp1132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
        return $returnValue1131;
    }
    }
    panda$core$Int64 $tmp1135 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1135);
    pad1134 = $tmp1136;
    panda$core$Int64 $tmp1138 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1134, ((panda$core$Int64) { 2 }));
    left1137 = $tmp1138;
    panda$core$Int64 $tmp1140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1134, left1137);
    right1139 = $tmp1140;
    panda$core$String* $tmp1145 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1137);
    $tmp1144 = $tmp1145;
    panda$core$String* $tmp1146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1144, self);
    $tmp1143 = $tmp1146;
    panda$core$String* $tmp1148 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1139);
    $tmp1147 = $tmp1148;
    panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, $tmp1147);
    $tmp1142 = $tmp1149;
    $tmp1141 = $tmp1142;
    $returnValue1131 = $tmp1141;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1141));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
    return $returnValue1131;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1151;
    panda$collections$Array* $tmp1152;
    panda$collections$Array* $tmp1153;
    panda$collections$Array* $tmp1154 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1153 = $tmp1154;
    $tmp1152 = $tmp1153;
    $returnValue1151 = $tmp1152;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
    return $returnValue1151;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1159 = NULL;
    panda$collections$Array* $tmp1160;
    panda$collections$Array* $tmp1161;
    panda$core$String$Index index1163;
    panda$core$String$Index$nullable nextIndex1167;
    panda$core$String* $tmp1176;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1177;
    panda$core$String* $tmp1179;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1180;
    panda$core$String$Index $tmp1182;
    panda$collections$Array* $returnValue1184;
    panda$collections$Array* $tmp1185;
    int $tmp1158;
    {
        panda$collections$Array* $tmp1162 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1162);
        $tmp1161 = $tmp1162;
        $tmp1160 = $tmp1161;
        result1159 = $tmp1160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1161));
        panda$core$String$Index $tmp1164 = panda$core$String$start$R$panda$core$String$Index(self);
        index1163 = $tmp1164;
        $l1165:;
        while (true) {
        {
            memset(&nextIndex1167, 0, sizeof(nextIndex1167));
            panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1168.value) {
            {
                panda$core$String$Index $tmp1169 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1163);
                nextIndex1167 = ((panda$core$String$Index$nullable) { $tmp1169, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1170 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1163);
                nextIndex1167 = $tmp1170;
            }
            }
            bool $tmp1171 = ((panda$core$Bit) { !nextIndex1167.nonnull }).value;
            if ($tmp1171) goto $l1172;
            panda$core$Int64 $tmp1173 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1159->count, $tmp1173);
            $tmp1171 = $tmp1174.value;
            $l1172:;
            panda$core$Bit $tmp1175 = { $tmp1171 };
            if ($tmp1175.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1177, ((panda$core$String$Index$nullable) { index1163, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1178 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1177);
                $tmp1176 = $tmp1178;
                panda$collections$Array$add$panda$collections$Array$T(result1159, ((panda$core$Object*) $tmp1176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
                goto $l1166;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1180, index1163, ((panda$core$String$Index) nextIndex1167.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1181 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1180);
            $tmp1179 = $tmp1181;
            panda$collections$Array$add$panda$collections$Array$T(result1159, ((panda$core$Object*) $tmp1179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1179));
            panda$core$Int64 $tmp1183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1167.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1182, $tmp1183);
            index1163 = $tmp1182;
        }
        }
        $l1166:;
        $tmp1185 = result1159;
        $returnValue1184 = $tmp1185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1185));
        $tmp1158 = 0;
        goto $l1156;
        $l1186:;
        return $returnValue1184;
    }
    $l1156:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1159));
    result1159 = NULL;
    switch ($tmp1158) {
        case 0: goto $l1186;
    }
    $l1188:;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $returnValue1190;
    panda$core$Int64 result1192;
    panda$core$Int64 start1193;
    panda$core$Char8 $tmp1194;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1196;
    panda$core$Int64 digit1210;
    panda$core$Char8 $tmp1226;
    panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1189.value) {
    {
        $returnValue1190 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1190;
    }
    }
    result1192 = ((panda$core$Int64) { 0 });
    memset(&start1193, 0, sizeof(start1193));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1194, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1195 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1194);
    if ($tmp1195.value) {
    {
        start1193 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1193 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1196, start1193, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1198 = $tmp1196.min.value;
    panda$core$Int64 i1197 = { $tmp1198 };
    int64_t $tmp1200 = $tmp1196.max.value;
    bool $tmp1201 = $tmp1196.inclusive.value;
    if ($tmp1201) goto $l1208; else goto $l1209;
    $l1208:;
    if ($tmp1198 <= $tmp1200) goto $l1202; else goto $l1204;
    $l1209:;
    if ($tmp1198 < $tmp1200) goto $l1202; else goto $l1204;
    $l1202:;
    {
        panda$core$Int64 $tmp1211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1197.value].value) }), ((panda$core$Int64) { 48 }));
        digit1210 = $tmp1211;
        panda$core$Bit $tmp1213 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1210, ((panda$core$Int64) { 0 }));
        bool $tmp1212 = $tmp1213.value;
        if ($tmp1212) goto $l1214;
        panda$core$Bit $tmp1215 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1210, ((panda$core$Int64) { 9 }));
        $tmp1212 = $tmp1215.value;
        $l1214:;
        panda$core$Bit $tmp1216 = { $tmp1212 };
        if ($tmp1216.value) {
        {
            $returnValue1190 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1190;
        }
        }
        panda$core$Int64 $tmp1218 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1192, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1218, digit1210);
        result1192 = $tmp1219;
    }
    $l1205:;
    int64_t $tmp1221 = $tmp1200 - i1197.value;
    if ($tmp1201) goto $l1222; else goto $l1223;
    $l1222:;
    if ((uint64_t) $tmp1221 >= 1) goto $l1220; else goto $l1204;
    $l1223:;
    if ((uint64_t) $tmp1221 > 1) goto $l1220; else goto $l1204;
    $l1220:;
    i1197.value += 1;
    goto $l1202;
    $l1204:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1226, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1227 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1226);
    if ($tmp1227.value) {
    {
        panda$core$Int64 $tmp1228 = panda$core$Int64$$SUB$R$panda$core$Int64(result1192);
        result1192 = $tmp1228;
    }
    }
    $returnValue1190 = ((panda$core$Int64$nullable) { result1192, true });
    return $returnValue1190;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $returnValue1231;
    panda$core$UInt64 result1233;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1234;
    panda$core$UInt64 digit1248;
    panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1230.value) {
    {
        $returnValue1231 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1231;
    }
    }
    result1233 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1234, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1236 = $tmp1234.min.value;
    panda$core$Int64 i1235 = { $tmp1236 };
    int64_t $tmp1238 = $tmp1234.max.value;
    bool $tmp1239 = $tmp1234.inclusive.value;
    if ($tmp1239) goto $l1246; else goto $l1247;
    $l1246:;
    if ($tmp1236 <= $tmp1238) goto $l1240; else goto $l1242;
    $l1247:;
    if ($tmp1236 < $tmp1238) goto $l1240; else goto $l1242;
    $l1240:;
    {
        panda$core$UInt64 $tmp1249 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1235.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1248 = $tmp1249;
        panda$core$Bit $tmp1251 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1248, ((panda$core$UInt64) { 0 }));
        bool $tmp1250 = $tmp1251.value;
        if ($tmp1250) goto $l1252;
        panda$core$Bit $tmp1253 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1248, ((panda$core$UInt64) { 9 }));
        $tmp1250 = $tmp1253.value;
        $l1252:;
        panda$core$Bit $tmp1254 = { $tmp1250 };
        if ($tmp1254.value) {
        {
            $returnValue1231 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1231;
        }
        }
        panda$core$UInt64 $tmp1256 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1233, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1257 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1256, digit1248);
        result1233 = $tmp1257;
    }
    $l1243:;
    int64_t $tmp1259 = $tmp1238 - i1235.value;
    if ($tmp1239) goto $l1260; else goto $l1261;
    $l1260:;
    if ((uint64_t) $tmp1259 >= 1) goto $l1258; else goto $l1242;
    $l1261:;
    if ((uint64_t) $tmp1259 > 1) goto $l1258; else goto $l1242;
    $l1258:;
    i1235.value += 1;
    goto $l1240;
    $l1242:;
    $returnValue1231 = ((panda$core$UInt64$nullable) { result1233, true });
    return $returnValue1231;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1267;
    panda$core$Int64 $returnValue1289;
    panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1265.value) {
    {
        h1266 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1267, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1269 = $tmp1267.min.value;
        panda$core$Int64 i1268 = { $tmp1269 };
        int64_t $tmp1271 = $tmp1267.max.value;
        bool $tmp1272 = $tmp1267.inclusive.value;
        if ($tmp1272) goto $l1279; else goto $l1280;
        $l1279:;
        if ($tmp1269 <= $tmp1271) goto $l1273; else goto $l1275;
        $l1280:;
        if ($tmp1269 < $tmp1271) goto $l1273; else goto $l1275;
        $l1273:;
        {
            panda$core$Int64 $tmp1281 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1266, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1282 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1281, ((panda$core$Int64) { ((int64_t) self->data[i1268.value].value) }));
            h1266 = $tmp1282;
        }
        $l1276:;
        int64_t $tmp1284 = $tmp1271 - i1268.value;
        if ($tmp1272) goto $l1285; else goto $l1286;
        $l1285:;
        if ((uint64_t) $tmp1284 >= 1) goto $l1283; else goto $l1275;
        $l1286:;
        if ((uint64_t) $tmp1284 > 1) goto $l1283; else goto $l1275;
        $l1283:;
        i1268.value += 1;
        goto $l1273;
        $l1275:;
        self->_hash = h1266;
    }
    }
    $returnValue1289 = self->_hash;
    return $returnValue1289;
}

