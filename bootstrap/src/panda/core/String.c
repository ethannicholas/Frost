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
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$matchCount$panda$core$Char32$R$panda$core$Int64, panda$core$String$matchCount$panda$core$String$R$panda$core$Int64, panda$core$String$matchCount$panda$core$String$panda$core$Bit$R$panda$core$Int64, panda$core$String$matchCount$panda$core$RegularExpression$R$panda$core$Int64, panda$core$String$matchCount$panda$core$RegularExpression$panda$core$Bit$R$panda$core$Int64, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn85)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn160)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn308)(panda$core$Object*);
typedef panda$core$String* (*$fn351)(panda$core$Object*);
typedef panda$core$Object* (*$fn973)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn974)(panda$core$String*);
typedef panda$core$String* (*$fn975)(panda$core$Object*);
typedef panda$core$Object* (*$fn1032)(panda$collections$ListView*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1033)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1034)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1053)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1060)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1067)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x69\x6e\x67\x20\x2b", 8, 23282469135167439, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Char8* result255;
    panda$core$Range$LTpanda$core$Int64$GT $tmp257;
    panda$core$Range$LTpanda$core$Int64$GT $tmp277;
    panda$core$String* $returnValue298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$Panda$trace$panda$core$String(&$s254);
    panda$core$Int64 $tmp256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result255 = ((panda$core$Char8*) pandaZAlloc($tmp256.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp257, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp259 = $tmp257.min.value;
    panda$core$Int64 i258 = { $tmp259 };
    int64_t $tmp261 = $tmp257.max.value;
    bool $tmp262 = $tmp257.inclusive.value;
    if ($tmp262) goto $l269; else goto $l270;
    $l269:;
    if ($tmp259 <= $tmp261) goto $l263; else goto $l265;
    $l270:;
    if ($tmp259 < $tmp261) goto $l263; else goto $l265;
    $l263:;
    {
        result255[i258.value] = self->data[i258.value];
    }
    $l266:;
    int64_t $tmp272 = $tmp261 - i258.value;
    if ($tmp262) goto $l273; else goto $l274;
    $l273:;
    if ((uint64_t) $tmp272 >= 1) goto $l271; else goto $l265;
    $l274:;
    if ((uint64_t) $tmp272 > 1) goto $l271; else goto $l265;
    $l271:;
    i258.value += 1;
    goto $l263;
    $l265:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp277, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp279 = $tmp277.min.value;
    panda$core$Int64 i278 = { $tmp279 };
    int64_t $tmp281 = $tmp277.max.value;
    bool $tmp282 = $tmp277.inclusive.value;
    if ($tmp282) goto $l289; else goto $l290;
    $l289:;
    if ($tmp279 <= $tmp281) goto $l283; else goto $l285;
    $l290:;
    if ($tmp279 < $tmp281) goto $l283; else goto $l285;
    $l283:;
    {
        panda$core$Int64 $tmp291 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i278);
        result255[$tmp291.value] = p_other->data[i278.value];
    }
    $l286:;
    int64_t $tmp293 = $tmp281 - i278.value;
    if ($tmp282) goto $l294; else goto $l295;
    $l294:;
    if ((uint64_t) $tmp293 >= 1) goto $l292; else goto $l285;
    $l295:;
    if ((uint64_t) $tmp293 > 1) goto $l292; else goto $l285;
    $l292:;
    i278.value += 1;
    goto $l283;
    $l285:;
    panda$core$String* $tmp301 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp301, result255, $tmp302);
    $tmp300 = $tmp301;
    $tmp299 = $tmp300;
    $returnValue298 = $tmp299;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
    return $returnValue298;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue304;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp307;
    panda$core$String* $tmp309 = (($fn308) p_other->$class->vtable[0])(p_other);
    $tmp307 = $tmp309;
    panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp307);
    $tmp306 = $tmp310;
    $tmp305 = $tmp306;
    $returnValue304 = $tmp305;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
    return $returnValue304;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result316 = NULL;
    panda$core$MutableString* $tmp317;
    panda$core$MutableString* $tmp318;
    panda$core$Range$LTpanda$core$Int64$GT $tmp320;
    panda$core$String* $returnValue340;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$core$Bit $tmp312 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp312.value);
    int $tmp315;
    {
        panda$core$MutableString* $tmp319 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp319);
        $tmp318 = $tmp319;
        $tmp317 = $tmp318;
        result316 = $tmp317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp320, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp322 = $tmp320.min.value;
        panda$core$Int64 i321 = { $tmp322 };
        int64_t $tmp324 = $tmp320.max.value;
        bool $tmp325 = $tmp320.inclusive.value;
        if ($tmp325) goto $l332; else goto $l333;
        $l332:;
        if ($tmp322 <= $tmp324) goto $l326; else goto $l328;
        $l333:;
        if ($tmp322 < $tmp324) goto $l326; else goto $l328;
        $l326:;
        {
            panda$core$MutableString$append$panda$core$String(result316, self);
        }
        $l329:;
        int64_t $tmp335 = $tmp324 - i321.value;
        if ($tmp325) goto $l336; else goto $l337;
        $l336:;
        if ((uint64_t) $tmp335 >= 1) goto $l334; else goto $l328;
        $l337:;
        if ((uint64_t) $tmp335 > 1) goto $l334; else goto $l328;
        $l334:;
        i321.value += 1;
        goto $l326;
        $l328:;
        panda$core$String* $tmp343 = panda$core$MutableString$finish$R$panda$core$String(result316);
        $tmp342 = $tmp343;
        $tmp341 = $tmp342;
        $returnValue340 = $tmp341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
        $tmp315 = 0;
        goto $l313;
        $l344:;
        return $returnValue340;
    }
    $l313:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result316));
    result316 = NULL;
    switch ($tmp315) {
        case 0: goto $l344;
    }
    $l346:;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue347;
    panda$core$String* $tmp348;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350;
    panda$core$String* $tmp352 = (($fn351) p_o->$class->vtable[0])(p_o);
    $tmp350 = $tmp352;
    panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, p_s);
    $tmp349 = $tmp353;
    $tmp348 = $tmp349;
    $returnValue347 = $tmp348;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    return $returnValue347;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue356;
    panda$core$Range$LTpanda$core$Int64$GT $tmp358;
    panda$core$Bit $tmp355 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp355.value) {
    {
        $returnValue356 = ((panda$core$Bit) { false });
        return $returnValue356;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp358, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp360 = $tmp358.min.value;
    panda$core$Int64 i359 = { $tmp360 };
    int64_t $tmp362 = $tmp358.max.value;
    bool $tmp363 = $tmp358.inclusive.value;
    if ($tmp363) goto $l370; else goto $l371;
    $l370:;
    if ($tmp360 <= $tmp362) goto $l364; else goto $l366;
    $l371:;
    if ($tmp360 < $tmp362) goto $l364; else goto $l366;
    $l364:;
    {
        panda$core$Bit $tmp372 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i359.value], p_other->data[i359.value]);
        if ($tmp372.value) {
        {
            $returnValue356 = ((panda$core$Bit) { false });
            return $returnValue356;
        }
        }
    }
    $l367:;
    int64_t $tmp375 = $tmp362 - i359.value;
    if ($tmp363) goto $l376; else goto $l377;
    $l376:;
    if ((uint64_t) $tmp375 >= 1) goto $l374; else goto $l366;
    $l377:;
    if ((uint64_t) $tmp375 > 1) goto $l374; else goto $l366;
    $l374:;
    i359.value += 1;
    goto $l364;
    $l366:;
    $returnValue356 = ((panda$core$Bit) { true });
    return $returnValue356;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue381;
    panda$core$Bit $tmp382 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
    $returnValue381 = $tmp383;
    return $returnValue381;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx385;
    panda$core$Char8 c386;
    panda$core$Int32 result387;
    panda$core$Char32 $returnValue391;
    panda$core$Char32 $tmp392;
    panda$core$Char32 $tmp404;
    panda$core$Char32 $tmp421;
    panda$core$Char32 $tmp441;
    idx385 = p_index.value;
    c386 = self->data[idx385.value];
    panda$core$Int32 $tmp388 = panda$core$Char8$convert$R$panda$core$Int32(c386);
    result387 = $tmp388;
    int64_t $tmp389 = ((int64_t) c386.value) & 255;
    bool $tmp390 = $tmp389 < 192;
    if (((panda$core$Bit) { $tmp390 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp392, result387);
        $returnValue391 = $tmp392;
        return $returnValue391;
    }
    }
    int64_t $tmp394 = ((int64_t) c386.value) & 255;
    bool $tmp395 = $tmp394 < 224;
    if (((panda$core$Bit) { $tmp395 }).value) {
    {
        panda$core$Int64 $tmp396 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp397 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp396, self->_length);
        PANDA_ASSERT($tmp397.value);
        panda$core$Int32 $tmp398 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result387, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp399 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp398, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp400 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp401 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp400.value]);
        panda$core$Int32 $tmp402 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp401, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp403 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp399, $tmp402);
        result387 = $tmp403;
        panda$core$Char32$init$panda$core$Int32(&$tmp404, result387);
        $returnValue391 = $tmp404;
        return $returnValue391;
    }
    }
    int64_t $tmp406 = ((int64_t) c386.value) & 255;
    bool $tmp407 = $tmp406 < 240;
    if (((panda$core$Bit) { $tmp407 }).value) {
    {
        panda$core$Int64 $tmp408 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp409 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp408, self->_length);
        PANDA_ASSERT($tmp409.value);
        panda$core$Int32 $tmp410 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result387, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp411 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp410, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp412 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp413 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp412.value]);
        panda$core$Int32 $tmp414 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp413, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp415 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp414, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp416 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp411, $tmp415);
        panda$core$Int64 $tmp417 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp418 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp417.value]);
        panda$core$Int32 $tmp419 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp418, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp420 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp416, $tmp419);
        result387 = $tmp420;
        panda$core$Char32$init$panda$core$Int32(&$tmp421, result387);
        $returnValue391 = $tmp421;
        return $returnValue391;
    }
    }
    panda$core$Int64 $tmp423 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp424 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp423, self->_length);
    PANDA_ASSERT($tmp424.value);
    panda$core$Int32 $tmp425 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result387, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp426 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp425, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp428 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp427.value]);
    panda$core$Int32 $tmp429 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp428, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp430 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp429, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp431 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp426, $tmp430);
    panda$core$Int64 $tmp432 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp433 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp432.value]);
    panda$core$Int32 $tmp434 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp433, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp435 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp434, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp436 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp431, $tmp435);
    panda$core$Int64 $tmp437 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx385, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp438 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp437.value]);
    panda$core$Int32 $tmp439 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp438, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp440 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp436, $tmp439);
    result387 = $tmp440;
    panda$core$Char32$init$panda$core$Int32(&$tmp441, result387);
    $returnValue391 = $tmp441;
    return $returnValue391;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue443;
    panda$core$String$Index $tmp444 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp445 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp444, p_index);
    panda$core$Char32 $tmp446 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp445);
    $returnValue443 = $tmp446;
    return $returnValue443;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $returnValue448;
    panda$core$String* $tmp449;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp452 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp451, (self->data + p_r.min.value.value), $tmp452, self);
    $tmp450 = $tmp451;
    $tmp449 = $tmp450;
    $returnValue448 = $tmp449;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
    return $returnValue448;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min454;
    panda$core$String$Index max456;
    panda$core$String* $returnValue459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp461;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp462;
    memset(&min454, 0, sizeof(min454));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min454 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp455 = panda$core$String$start$R$panda$core$String$Index(self);
        min454 = $tmp455;
    }
    }
    memset(&max456, 0, sizeof(max456));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max456 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp457 = panda$core$String$end$R$panda$core$String$Index(self);
        max456 = $tmp457;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp458 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max456);
            max456 = $tmp458;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp462, min454, max456, p_r.inclusive);
    panda$core$String* $tmp463 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp462);
    $tmp461 = $tmp463;
    $tmp460 = $tmp461;
    $returnValue459 = $tmp460;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    return $returnValue459;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current468;
    panda$core$MutableString* result469 = NULL;
    panda$core$MutableString* $tmp470;
    panda$core$MutableString* $tmp471;
    panda$core$Int64 max473;
    panda$core$Char8 c479;
    panda$core$String* $returnValue490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    int $tmp467;
    {
        current468 = p_r.min.value;
        panda$core$MutableString* $tmp472 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp472);
        $tmp471 = $tmp472;
        $tmp470 = $tmp471;
        result469 = $tmp470;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
        max473 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp474 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max473, ((panda$core$Int64) { 1 }));
            max473 = $tmp474;
        }
        }
        $l475:;
        panda$core$Bit $tmp478 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current468, max473);
        bool $tmp477 = $tmp478.value;
        if (!$tmp477) goto $l476;
        {
            c479 = self->data[current468.value];
            panda$core$MutableString$append$panda$core$Char8(result469, c479);
            panda$core$Int64 $tmp480 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current468, ((panda$core$Int64) { 1 }));
            current468 = $tmp480;
            int64_t $tmp481 = ((int64_t) c479.value) & 255;
            bool $tmp482 = $tmp481 >= 192;
            if (((panda$core$Bit) { $tmp482 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result469, self->data[current468.value]);
                panda$core$Int64 $tmp483 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current468, ((panda$core$Int64) { 1 }));
                current468 = $tmp483;
            }
            }
            int64_t $tmp484 = ((int64_t) c479.value) & 255;
            bool $tmp485 = $tmp484 >= 224;
            if (((panda$core$Bit) { $tmp485 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result469, self->data[current468.value]);
                panda$core$Int64 $tmp486 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current468, ((panda$core$Int64) { 1 }));
                current468 = $tmp486;
            }
            }
            int64_t $tmp487 = ((int64_t) c479.value) & 255;
            bool $tmp488 = $tmp487 >= 240;
            if (((panda$core$Bit) { $tmp488 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result469, self->data[current468.value]);
                panda$core$Int64 $tmp489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current468, ((panda$core$Int64) { 1 }));
                current468 = $tmp489;
            }
            }
        }
        goto $l475;
        $l476:;
        panda$core$String* $tmp493 = panda$core$MutableString$finish$R$panda$core$String(result469);
        $tmp492 = $tmp493;
        $tmp491 = $tmp492;
        $returnValue490 = $tmp491;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        $tmp467 = 0;
        goto $l465;
        $l494:;
        return $returnValue490;
    }
    $l465:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result469));
    result469 = NULL;
    switch ($tmp467) {
        case 0: goto $l494;
    }
    $l496:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String* $returnValue498;
    panda$core$String* $tmp499;
    panda$core$String$Index min502;
    panda$core$String$Index max504;
    panda$core$String* $tmp507;
    panda$core$String* $tmp508;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp509;
    panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp497.value) {
    {
        $tmp499 = &$s500;
        $returnValue498 = $tmp499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
        return $returnValue498;
    }
    }
    memset(&min502, 0, sizeof(min502));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min502 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp503 = panda$core$String$start$R$panda$core$String$Index(self);
        min502 = $tmp503;
    }
    }
    memset(&max504, 0, sizeof(max504));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max504 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp505 = panda$core$String$end$R$panda$core$String$Index(self);
        max504 = $tmp505;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp506 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max504);
            max504 = $tmp506;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp509, min502, max504, p_r.inclusive);
    panda$core$String* $tmp510 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp509);
    $tmp508 = $tmp510;
    $tmp507 = $tmp508;
    $returnValue498 = $tmp507;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp507));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
    return $returnValue498;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String* $returnValue516;
    panda$core$String* $tmp517;
    panda$core$Int64 step521;
    panda$core$Int64 current522;
    panda$core$Int64 end527;
    panda$core$MutableString* result531 = NULL;
    panda$core$MutableString* $tmp532;
    panda$core$MutableString* $tmp533;
    panda$core$Char8 c540;
    panda$core$Range$LTpanda$core$Int64$GT $tmp551;
    panda$core$String* $tmp566;
    panda$core$String* $tmp567;
    panda$core$String$Index $tmp571;
    panda$core$Char8 c584;
    panda$core$Int64 old585;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp606;
    panda$core$String* $tmp626;
    panda$core$String* $tmp627;
    panda$core$String$Index $tmp631;
    panda$core$Char8 c655;
    panda$core$String* $tmp665;
    panda$core$String* $tmp666;
    int $tmp514;
    {
        panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
        if ($tmp515.value) {
        {
            $tmp517 = &$s518;
            $returnValue516 = $tmp517;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
            $tmp514 = 0;
            goto $l512;
            $l519:;
            return $returnValue516;
        }
        }
        step521 = p_r.step;
        memset(&current522, 0, sizeof(current522));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current522 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step521, ((panda$core$Int64) { 0 }));
        if ($tmp523.value) {
        {
            panda$core$String$Index $tmp524 = panda$core$String$start$R$panda$core$String$Index(self);
            current522 = $tmp524.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp525 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp526 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp525);
            current522 = $tmp526.value;
        }
        }
        }
        memset(&end527, 0, sizeof(end527));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end527 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Bit $tmp528 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step521, ((panda$core$Int64) { 0 }));
        if ($tmp528.value) {
        {
            panda$core$String$Index $tmp529 = panda$core$String$end$R$panda$core$String$Index(self);
            end527 = $tmp529.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp530 = panda$core$String$start$R$panda$core$String$Index(self);
            end527 = $tmp530.value;
        }
        }
        }
        panda$core$MutableString* $tmp534 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp534);
        $tmp533 = $tmp534;
        $tmp532 = $tmp533;
        result531 = $tmp532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Bit $tmp535 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp535.value) {
        {
            $l536:;
            panda$core$Bit $tmp539 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current522, end527);
            bool $tmp538 = $tmp539.value;
            if (!$tmp538) goto $l537;
            {
                c540 = self->data[current522.value];
                panda$core$MutableString$append$panda$core$Char8(result531, c540);
                panda$core$Int64 $tmp541 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                current522 = $tmp541;
                int64_t $tmp542 = ((int64_t) c540.value) & 255;
                bool $tmp543 = $tmp542 >= 192;
                if (((panda$core$Bit) { $tmp543 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                    panda$core$Int64 $tmp544 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                    current522 = $tmp544;
                }
                }
                int64_t $tmp545 = ((int64_t) c540.value) & 255;
                bool $tmp546 = $tmp545 >= 224;
                if (((panda$core$Bit) { $tmp546 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                    panda$core$Int64 $tmp547 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                    current522 = $tmp547;
                }
                }
                int64_t $tmp548 = ((int64_t) c540.value) & 255;
                bool $tmp549 = $tmp548 >= 240;
                if (((panda$core$Bit) { $tmp549 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                    panda$core$Int64 $tmp550 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                    current522 = $tmp550;
                }
                }
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp551, ((panda$core$Int64) { 1 }), step521, ((panda$core$Bit) { false }));
                int64_t $tmp553 = $tmp551.min.value;
                panda$core$Int64 i552 = { $tmp553 };
                int64_t $tmp555 = $tmp551.max.value;
                bool $tmp556 = $tmp551.inclusive.value;
                if ($tmp556) goto $l563; else goto $l564;
                $l563:;
                if ($tmp553 <= $tmp555) goto $l557; else goto $l559;
                $l564:;
                if ($tmp553 < $tmp555) goto $l557; else goto $l559;
                $l557:;
                {
                    panda$core$Bit $tmp565 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current522, end527);
                    if ($tmp565.value) {
                    {
                        panda$core$String* $tmp568 = panda$core$MutableString$convert$R$panda$core$String(result531);
                        $tmp567 = $tmp568;
                        $tmp566 = $tmp567;
                        $returnValue516 = $tmp566;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp566));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                        $tmp514 = 1;
                        goto $l512;
                        $l569:;
                        return $returnValue516;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp571, current522);
                    panda$core$String$Index $tmp572 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp571);
                    current522 = $tmp572.value;
                }
                $l560:;
                int64_t $tmp574 = $tmp555 - i552.value;
                if ($tmp556) goto $l575; else goto $l576;
                $l575:;
                if ((uint64_t) $tmp574 >= 1) goto $l573; else goto $l559;
                $l576:;
                if ((uint64_t) $tmp574 > 1) goto $l573; else goto $l559;
                $l573:;
                i552.value += 1;
                goto $l557;
                $l559:;
            }
            goto $l536;
            $l537:;
        }
        }
        else {
        {
            panda$core$Bit $tmp579 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp579.value);
            $l580:;
            panda$core$Bit $tmp583 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current522, end527);
            bool $tmp582 = $tmp583.value;
            if (!$tmp582) goto $l581;
            {
                c584 = self->data[current522.value];
                panda$core$MutableString$append$panda$core$Char8(result531, c584);
                old585 = current522;
                panda$core$Int64 $tmp586 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                current522 = $tmp586;
                int64_t $tmp587 = ((int64_t) c584.value) & 255;
                bool $tmp588 = $tmp587 >= 192;
                if (((panda$core$Bit) { $tmp588 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                    panda$core$Int64 $tmp589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                    current522 = $tmp589;
                }
                }
                int64_t $tmp590 = ((int64_t) c584.value) & 255;
                bool $tmp591 = $tmp590 >= 224;
                if (((panda$core$Bit) { $tmp591 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                    panda$core$Int64 $tmp592 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                    current522 = $tmp592;
                }
                }
                int64_t $tmp593 = ((int64_t) c584.value) & 255;
                bool $tmp594 = $tmp593 >= 240;
                if (((panda$core$Bit) { $tmp594 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                }
                }
                panda$core$Int64 $tmp595 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old585, ((panda$core$Int64) { 1 }));
                current522 = $tmp595;
                $l596:;
                int64_t $tmp600 = ((int64_t) self->data[current522.value].value) & 255;
                bool $tmp601 = $tmp600 >= 128;
                bool $tmp599 = $tmp601;
                if (!$tmp599) goto $l602;
                int64_t $tmp603 = ((int64_t) self->data[current522.value].value) & 255;
                bool $tmp604 = $tmp603 < 192;
                $tmp599 = $tmp604;
                $l602:;
                bool $tmp598 = ((panda$core$Bit) { $tmp599 }).value;
                if (!$tmp598) goto $l597;
                {
                    panda$core$Int64 $tmp605 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                    current522 = $tmp605;
                }
                goto $l596;
                $l597:;
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp606, ((panda$core$Int64) { -1 }), step521, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
                int64_t $tmp608 = $tmp606.start.value;
                panda$core$Int64 i607 = { $tmp608 };
                int64_t $tmp610 = $tmp606.end.value;
                int64_t $tmp611 = $tmp606.step.value;
                bool $tmp612 = $tmp606.inclusive.value;
                bool $tmp619 = $tmp611 > 0;
                if ($tmp619) goto $l617; else goto $l618;
                $l617:;
                if ($tmp612) goto $l620; else goto $l621;
                $l620:;
                if ($tmp608 <= $tmp610) goto $l613; else goto $l615;
                $l621:;
                if ($tmp608 < $tmp610) goto $l613; else goto $l615;
                $l618:;
                if ($tmp612) goto $l622; else goto $l623;
                $l622:;
                if ($tmp608 >= $tmp610) goto $l613; else goto $l615;
                $l623:;
                if ($tmp608 > $tmp610) goto $l613; else goto $l615;
                $l613:;
                {
                    panda$core$Bit $tmp625 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current522, end527);
                    if ($tmp625.value) {
                    {
                        panda$core$String* $tmp628 = panda$core$MutableString$convert$R$panda$core$String(result531);
                        $tmp627 = $tmp628;
                        $tmp626 = $tmp627;
                        $returnValue516 = $tmp626;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                        $tmp514 = 2;
                        goto $l512;
                        $l629:;
                        return $returnValue516;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp631, current522);
                    panda$core$String$Index $tmp632 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp631);
                    current522 = $tmp632.value;
                }
                $l616:;
                if ($tmp619) goto $l634; else goto $l635;
                $l634:;
                int64_t $tmp636 = $tmp610 - i607.value;
                if ($tmp612) goto $l637; else goto $l638;
                $l637:;
                if ((uint64_t) $tmp636 >= $tmp611) goto $l633; else goto $l615;
                $l638:;
                if ((uint64_t) $tmp636 > $tmp611) goto $l633; else goto $l615;
                $l635:;
                int64_t $tmp640 = i607.value - $tmp610;
                if ($tmp612) goto $l641; else goto $l642;
                $l641:;
                if ((uint64_t) $tmp640 >= -$tmp611) goto $l633; else goto $l615;
                $l642:;
                if ((uint64_t) $tmp640 > -$tmp611) goto $l633; else goto $l615;
                $l633:;
                i607.value += $tmp611;
                goto $l613;
                $l615:;
            }
            goto $l580;
            $l581:;
        }
        }
        bool $tmp646 = p_r.inclusive.value;
        if ($tmp646) goto $l647;
        $tmp646 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l647:;
        panda$core$Bit $tmp648 = { $tmp646 };
        bool $tmp645 = $tmp648.value;
        if (!$tmp645) goto $l649;
        panda$core$Bit $tmp650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current522, end527);
        $tmp645 = $tmp650.value;
        $l649:;
        panda$core$Bit $tmp651 = { $tmp645 };
        bool $tmp644 = $tmp651.value;
        if (!$tmp644) goto $l652;
        panda$core$Bit $tmp653 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end527, self->_length);
        $tmp644 = $tmp653.value;
        $l652:;
        panda$core$Bit $tmp654 = { $tmp644 };
        if ($tmp654.value) {
        {
            c655 = self->data[current522.value];
            panda$core$MutableString$append$panda$core$Char8(result531, c655);
            panda$core$Int64 $tmp656 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
            current522 = $tmp656;
            int64_t $tmp657 = ((int64_t) c655.value) & 255;
            bool $tmp658 = $tmp657 >= 192;
            if (((panda$core$Bit) { $tmp658 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                panda$core$Int64 $tmp659 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                current522 = $tmp659;
            }
            }
            int64_t $tmp660 = ((int64_t) c655.value) & 255;
            bool $tmp661 = $tmp660 >= 224;
            if (((panda$core$Bit) { $tmp661 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
                panda$core$Int64 $tmp662 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current522, ((panda$core$Int64) { 1 }));
                current522 = $tmp662;
            }
            }
            int64_t $tmp663 = ((int64_t) c655.value) & 255;
            bool $tmp664 = $tmp663 >= 240;
            if (((panda$core$Bit) { $tmp664 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result531, self->data[current522.value]);
            }
            }
        }
        }
        panda$core$String* $tmp667 = panda$core$MutableString$finish$R$panda$core$String(result531);
        $tmp666 = $tmp667;
        $tmp665 = $tmp666;
        $returnValue516 = $tmp665;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
        $tmp514 = 3;
        goto $l512;
        $l668:;
        return $returnValue516;
    }
    $l512:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result531));
    result531 = NULL;
    switch ($tmp514) {
        case 1: goto $l569;
        case 3: goto $l668;
        case 2: goto $l629;
        case 0: goto $l519;
    }
    $l670:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start671;
    panda$core$String$Index$nullable end674;
    panda$core$String* $returnValue677;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp680;
    memset(&start671, 0, sizeof(start671));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp672 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp673 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp672, ((panda$core$Int64) p_r.min.value));
        start671 = ((panda$core$String$Index$nullable) { $tmp673, true });
    }
    }
    else {
    {
        start671 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end674, 0, sizeof(end674));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp675 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp676 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp675, ((panda$core$Int64) p_r.max.value));
        end674 = ((panda$core$String$Index$nullable) { $tmp676, true });
    }
    }
    else {
    {
        end674 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp680, start671, end674, p_r.inclusive);
    panda$core$String* $tmp681 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp680);
    $tmp679 = $tmp681;
    $tmp678 = $tmp679;
    $returnValue677 = $tmp678;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
    return $returnValue677;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start683;
    panda$core$String$Index$nullable end686;
    panda$core$String* $returnValue689;
    panda$core$String* $tmp690;
    panda$core$String* $tmp691;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp692;
    memset(&start683, 0, sizeof(start683));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp684 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp685 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp684, ((panda$core$Int64) p_r.start.value));
        start683 = ((panda$core$String$Index$nullable) { $tmp685, true });
    }
    }
    else {
    {
        start683 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end686, 0, sizeof(end686));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp687 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp688 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp687, ((panda$core$Int64) p_r.end.value));
        end686 = ((panda$core$String$Index$nullable) { $tmp688, true });
    }
    }
    else {
    {
        end686 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp692, start683, end686, p_r.step, p_r.inclusive);
    panda$core$String* $tmp693 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp692);
    $tmp691 = $tmp693;
    $tmp690 = $tmp691;
    $returnValue689 = $tmp690;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
    return $returnValue689;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp695;
    panda$core$Bit $returnValue710;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp695, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp697 = $tmp695.min.value;
    panda$core$Int64 i696 = { $tmp697 };
    int64_t $tmp699 = $tmp695.max.value;
    bool $tmp700 = $tmp695.inclusive.value;
    if ($tmp700) goto $l707; else goto $l708;
    $l707:;
    if ($tmp697 <= $tmp699) goto $l701; else goto $l703;
    $l708:;
    if ($tmp697 < $tmp699) goto $l701; else goto $l703;
    $l701:;
    {
        panda$core$Bit $tmp709 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i696.value], p_c);
        if ($tmp709.value) {
        {
            $returnValue710 = ((panda$core$Bit) { true });
            return $returnValue710;
        }
        }
    }
    $l704:;
    int64_t $tmp713 = $tmp699 - i696.value;
    if ($tmp700) goto $l714; else goto $l715;
    $l714:;
    if ((uint64_t) $tmp713 >= 1) goto $l712; else goto $l703;
    $l715:;
    if ((uint64_t) $tmp713 > 1) goto $l712; else goto $l703;
    $l712:;
    i696.value += 1;
    goto $l701;
    $l703:;
    $returnValue710 = ((panda$core$Bit) { false });
    return $returnValue710;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue719;
    panda$core$String$Index$nullable $tmp720 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue719 = ((panda$core$Bit) { $tmp720.nonnull });
    return $returnValue719;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue722;
    panda$core$String$Index $tmp723 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp724 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp723);
    $returnValue722 = $tmp724;
    return $returnValue722;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue727;
    panda$core$Range$LTpanda$core$Int64$GT $tmp729;
    panda$core$Range$LTpanda$core$Int64$GT $tmp744;
    panda$core$String$Index $tmp766;
    panda$core$Bit $tmp726 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp726.value) {
    {
        $returnValue727 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue727;
    }
    }
    panda$core$Int64 $tmp730 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp729, p_start.value, $tmp730, ((panda$core$Bit) { true }));
    int64_t $tmp732 = $tmp729.min.value;
    panda$core$Int64 i731 = { $tmp732 };
    int64_t $tmp734 = $tmp729.max.value;
    bool $tmp735 = $tmp729.inclusive.value;
    if ($tmp735) goto $l742; else goto $l743;
    $l742:;
    if ($tmp732 <= $tmp734) goto $l736; else goto $l738;
    $l743:;
    if ($tmp732 < $tmp734) goto $l736; else goto $l738;
    $l736:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp744, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp746 = $tmp744.min.value;
        panda$core$Int64 j745 = { $tmp746 };
        int64_t $tmp748 = $tmp744.max.value;
        bool $tmp749 = $tmp744.inclusive.value;
        if ($tmp749) goto $l756; else goto $l757;
        $l756:;
        if ($tmp746 <= $tmp748) goto $l750; else goto $l752;
        $l757:;
        if ($tmp746 < $tmp748) goto $l750; else goto $l752;
        $l750:;
        {
            panda$core$Int64 $tmp758 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i731, j745);
            panda$core$Bit $tmp759 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp758.value], p_s->data[j745.value]);
            if ($tmp759.value) {
            {
                goto $l739;
            }
            }
        }
        $l753:;
        int64_t $tmp761 = $tmp748 - j745.value;
        if ($tmp749) goto $l762; else goto $l763;
        $l762:;
        if ((uint64_t) $tmp761 >= 1) goto $l760; else goto $l752;
        $l763:;
        if ((uint64_t) $tmp761 > 1) goto $l760; else goto $l752;
        $l760:;
        j745.value += 1;
        goto $l750;
        $l752:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp766, i731);
        $returnValue727 = ((panda$core$String$Index$nullable) { $tmp766, true });
        return $returnValue727;
    }
    $l739:;
    int64_t $tmp769 = $tmp734 - i731.value;
    if ($tmp735) goto $l770; else goto $l771;
    $l770:;
    if ((uint64_t) $tmp769 >= 1) goto $l768; else goto $l738;
    $l771:;
    if ((uint64_t) $tmp769 > 1) goto $l768; else goto $l738;
    $l768:;
    i731.value += 1;
    goto $l736;
    $l738:;
    $returnValue727 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue727;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue775;
    panda$core$String$Index $tmp776 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp777 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp776);
    $returnValue775 = $tmp777;
    return $returnValue775;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue780;
    panda$core$Int64 startPos782;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp785;
    panda$core$Range$LTpanda$core$Int64$GT $tmp804;
    panda$core$String$Index $tmp826;
    panda$core$Bit $tmp779 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp779.value) {
    {
        $returnValue780 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue780;
    }
    }
    panda$core$Int64 $tmp783 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp784 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp783);
    startPos782 = $tmp784;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp785, startPos782, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp787 = $tmp785.start.value;
    panda$core$Int64 i786 = { $tmp787 };
    int64_t $tmp789 = $tmp785.end.value;
    int64_t $tmp790 = $tmp785.step.value;
    bool $tmp791 = $tmp785.inclusive.value;
    bool $tmp798 = $tmp790 > 0;
    if ($tmp798) goto $l796; else goto $l797;
    $l796:;
    if ($tmp791) goto $l799; else goto $l800;
    $l799:;
    if ($tmp787 <= $tmp789) goto $l792; else goto $l794;
    $l800:;
    if ($tmp787 < $tmp789) goto $l792; else goto $l794;
    $l797:;
    if ($tmp791) goto $l801; else goto $l802;
    $l801:;
    if ($tmp787 >= $tmp789) goto $l792; else goto $l794;
    $l802:;
    if ($tmp787 > $tmp789) goto $l792; else goto $l794;
    $l792:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp804, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp806 = $tmp804.min.value;
        panda$core$Int64 j805 = { $tmp806 };
        int64_t $tmp808 = $tmp804.max.value;
        bool $tmp809 = $tmp804.inclusive.value;
        if ($tmp809) goto $l816; else goto $l817;
        $l816:;
        if ($tmp806 <= $tmp808) goto $l810; else goto $l812;
        $l817:;
        if ($tmp806 < $tmp808) goto $l810; else goto $l812;
        $l810:;
        {
            panda$core$Int64 $tmp818 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i786, j805);
            panda$core$Bit $tmp819 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp818.value], p_s->data[j805.value]);
            if ($tmp819.value) {
            {
                goto $l795;
            }
            }
        }
        $l813:;
        int64_t $tmp821 = $tmp808 - j805.value;
        if ($tmp809) goto $l822; else goto $l823;
        $l822:;
        if ((uint64_t) $tmp821 >= 1) goto $l820; else goto $l812;
        $l823:;
        if ((uint64_t) $tmp821 > 1) goto $l820; else goto $l812;
        $l820:;
        j805.value += 1;
        goto $l810;
        $l812:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp826, i786);
        $returnValue780 = ((panda$core$String$Index$nullable) { $tmp826, true });
        return $returnValue780;
    }
    $l795:;
    if ($tmp798) goto $l829; else goto $l830;
    $l829:;
    int64_t $tmp831 = $tmp789 - i786.value;
    if ($tmp791) goto $l832; else goto $l833;
    $l832:;
    if ((uint64_t) $tmp831 >= $tmp790) goto $l828; else goto $l794;
    $l833:;
    if ((uint64_t) $tmp831 > $tmp790) goto $l828; else goto $l794;
    $l830:;
    int64_t $tmp835 = i786.value - $tmp789;
    if ($tmp791) goto $l836; else goto $l837;
    $l836:;
    if ((uint64_t) $tmp835 >= -$tmp790) goto $l828; else goto $l794;
    $l837:;
    if ((uint64_t) $tmp835 > -$tmp790) goto $l828; else goto $l794;
    $l828:;
    i786.value += $tmp790;
    goto $l792;
    $l794:;
    $returnValue780 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue780;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue840;
    panda$core$Matcher* $tmp841;
    panda$core$Bit $tmp843;
    panda$core$Matcher* $tmp842 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp841 = $tmp842;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp843, $tmp841);
    $returnValue840 = $tmp843;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp841));
    return $returnValue840;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue845;
    panda$core$Matcher* $tmp846;
    panda$core$Matcher* $tmp847 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp846 = $tmp847;
    panda$core$Bit $tmp848 = panda$core$Matcher$find$R$panda$core$Bit($tmp846);
    $returnValue845 = $tmp848;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
    return $returnValue845;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher853 = NULL;
    panda$core$Matcher* $tmp854;
    panda$core$Matcher* $tmp855;
    panda$core$Bit $tmp857;
    panda$collections$Array* result861 = NULL;
    panda$collections$Array* $tmp862;
    panda$collections$Array* $tmp863;
    panda$core$Range$LTpanda$core$Int64$GT $tmp865;
    panda$core$Int64 $tmp866;
    panda$core$String* $tmp880;
    panda$collections$ListView* $returnValue888;
    panda$collections$ListView* $tmp889;
    panda$collections$ListView* $tmp894;
    int $tmp852;
    {
        panda$core$Matcher* $tmp856 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp855 = $tmp856;
        $tmp854 = $tmp855;
        matcher853 = $tmp854;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp857, matcher853);
        if ($tmp857.value) {
        {
            int $tmp860;
            {
                panda$collections$Array* $tmp864 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp864);
                $tmp863 = $tmp864;
                $tmp862 = $tmp863;
                result861 = $tmp862;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp866, matcher853);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp865, ((panda$core$Int64) { 1 }), $tmp866, ((panda$core$Bit) { false }));
                int64_t $tmp868 = $tmp865.min.value;
                panda$core$Int64 i867 = { $tmp868 };
                int64_t $tmp870 = $tmp865.max.value;
                bool $tmp871 = $tmp865.inclusive.value;
                if ($tmp871) goto $l878; else goto $l879;
                $l878:;
                if ($tmp868 <= $tmp870) goto $l872; else goto $l874;
                $l879:;
                if ($tmp868 < $tmp870) goto $l872; else goto $l874;
                $l872:;
                {
                    panda$core$String* $tmp881 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher853, i867);
                    $tmp880 = $tmp881;
                    panda$collections$Array$add$panda$collections$Array$T(result861, ((panda$core$Object*) $tmp880));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                }
                $l875:;
                int64_t $tmp883 = $tmp870 - i867.value;
                if ($tmp871) goto $l884; else goto $l885;
                $l884:;
                if ((uint64_t) $tmp883 >= 1) goto $l882; else goto $l874;
                $l885:;
                if ((uint64_t) $tmp883 > 1) goto $l882; else goto $l874;
                $l882:;
                i867.value += 1;
                goto $l872;
                $l874:;
                $tmp889 = ((panda$collections$ListView*) result861);
                $returnValue888 = $tmp889;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp889));
                $tmp860 = 0;
                goto $l858;
                $l890:;
                $tmp852 = 0;
                goto $l850;
                $l891:;
                return $returnValue888;
            }
            $l858:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result861));
            result861 = NULL;
            switch ($tmp860) {
                case 0: goto $l890;
            }
            $l893:;
        }
        }
        $tmp894 = NULL;
        $returnValue888 = $tmp894;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
        $tmp852 = 1;
        goto $l850;
        $l895:;
        return $returnValue888;
    }
    $l850:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher853));
    matcher853 = NULL;
    switch ($tmp852) {
        case 1: goto $l895;
        case 0: goto $l891;
    }
    $l897:;
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue903;
    panda$core$String* $tmp904;
    panda$core$MutableString* result907 = NULL;
    panda$core$MutableString* $tmp908;
    panda$core$MutableString* $tmp909;
    panda$core$String$Index index911;
    panda$core$String$Index$nullable nextIndex915;
    panda$core$String* $tmp917;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp918;
    panda$core$String* $tmp920;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp921;
    panda$core$String$Index $tmp923;
    panda$core$String* $tmp925;
    panda$core$String* $tmp926;
    int $tmp900;
    {
        panda$core$Bit $tmp902 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s901);
        if ($tmp902.value) {
        {
            $tmp904 = self;
            $returnValue903 = $tmp904;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp904));
            $tmp900 = 0;
            goto $l898;
            $l905:;
            return $returnValue903;
        }
        }
        panda$core$MutableString* $tmp910 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp910);
        $tmp909 = $tmp910;
        $tmp908 = $tmp909;
        result907 = $tmp908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
        panda$core$String$Index $tmp912 = panda$core$String$start$R$panda$core$String$Index(self);
        index911 = $tmp912;
        $l913:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp916 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index911);
            nextIndex915 = $tmp916;
            if (((panda$core$Bit) { !nextIndex915.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp918, ((panda$core$String$Index$nullable) { index911, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp919 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp918);
                $tmp917 = $tmp919;
                panda$core$MutableString$append$panda$core$String(result907, $tmp917);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
                goto $l914;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp921, index911, ((panda$core$String$Index) nextIndex915.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp922 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp921);
            $tmp920 = $tmp922;
            panda$core$MutableString$append$panda$core$String(result907, $tmp920);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
            panda$core$MutableString$append$panda$core$String(result907, p_replacement);
            panda$core$Int64 $tmp924 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex915.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp923, $tmp924);
            index911 = $tmp923;
        }
        }
        $l914:;
        panda$core$String* $tmp927 = panda$core$MutableString$finish$R$panda$core$String(result907);
        $tmp926 = $tmp927;
        $tmp925 = $tmp926;
        $returnValue903 = $tmp925;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
        $tmp900 = 1;
        goto $l898;
        $l928:;
        return $returnValue903;
    }
    $l898:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
    result907 = NULL;
    switch ($tmp900) {
        case 1: goto $l928;
        case 0: goto $l905;
    }
    $l930:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result934 = NULL;
    panda$core$MutableString* $tmp935;
    panda$core$MutableString* $tmp936;
    panda$core$Matcher* matcher938 = NULL;
    panda$core$Matcher* $tmp939;
    panda$core$Matcher* $tmp940;
    panda$core$String* $returnValue946;
    panda$core$String* $tmp947;
    panda$core$String* $tmp948;
    int $tmp933;
    {
        panda$core$MutableString* $tmp937 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp937);
        $tmp936 = $tmp937;
        $tmp935 = $tmp936;
        result934 = $tmp935;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
        panda$core$Matcher* $tmp941 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp940 = $tmp941;
        $tmp939 = $tmp940;
        matcher938 = $tmp939;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp940));
        $l942:;
        panda$core$Bit $tmp945 = panda$core$Matcher$find$R$panda$core$Bit(matcher938);
        bool $tmp944 = $tmp945.value;
        if (!$tmp944) goto $l943;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(matcher938, result934, p_replacement);
        }
        goto $l942;
        $l943:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher938, result934);
        panda$core$String* $tmp949 = panda$core$MutableString$finish$R$panda$core$String(result934);
        $tmp948 = $tmp949;
        $tmp947 = $tmp948;
        $returnValue946 = $tmp947;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
        $tmp933 = 0;
        goto $l931;
        $l950:;
        return $returnValue946;
    }
    $l931:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result934));
    result934 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher938));
    matcher938 = NULL;
    switch ($tmp933) {
        case 0: goto $l950;
    }
    $l952:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result956 = NULL;
    panda$core$MutableString* $tmp957;
    panda$core$MutableString* $tmp958;
    panda$core$Matcher* matcher960 = NULL;
    panda$core$Matcher* $tmp961;
    panda$core$Matcher* $tmp962;
    panda$core$String* $tmp968;
    panda$core$Object* $tmp969;
    panda$core$String* $tmp970;
    panda$core$Object* $tmp972;
    panda$core$String* $returnValue977;
    panda$core$String* $tmp978;
    panda$core$String* $tmp979;
    int $tmp955;
    {
        panda$core$MutableString* $tmp959 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp959);
        $tmp958 = $tmp959;
        $tmp957 = $tmp958;
        result956 = $tmp957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
        panda$core$Matcher* $tmp963 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp962 = $tmp963;
        $tmp961 = $tmp962;
        matcher960 = $tmp961;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
        $l964:;
        panda$core$Bit $tmp967 = panda$core$Matcher$find$R$panda$core$Bit(matcher960);
        bool $tmp966 = $tmp967.value;
        if (!$tmp966) goto $l965;
        {
            panda$core$String* $tmp971 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher960, ((panda$core$Int64) { 0 }));
            $tmp970 = $tmp971;
            if (p_replacement->target) {
                $tmp972 = (($fn973) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp970);
            } else {
                $tmp972 = (($fn974) p_replacement->pointer)($tmp970);
            }
            $tmp969 = $tmp972;
            panda$core$String* $tmp976 = (($fn975) $tmp969->$class->vtable[0])($tmp969);
            $tmp968 = $tmp976;
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher960, result956, $tmp968, ((panda$core$Bit) { false }));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object($tmp969);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
        }
        goto $l964;
        $l965:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher960, result956);
        panda$core$String* $tmp980 = panda$core$MutableString$convert$R$panda$core$String(result956);
        $tmp979 = $tmp980;
        $tmp978 = $tmp979;
        $returnValue977 = $tmp978;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
        $tmp955 = 0;
        goto $l953;
        $l981:;
        return $returnValue977;
    }
    $l953:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result956));
    result956 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher960));
    matcher960 = NULL;
    switch ($tmp955) {
        case 0: goto $l981;
    }
    $l983:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result987 = NULL;
    panda$core$MutableString* $tmp988;
    panda$core$MutableString* $tmp989;
    panda$core$Matcher* matcher991 = NULL;
    panda$core$Matcher* $tmp992;
    panda$core$Matcher* $tmp993;
    panda$collections$Array* groups1002 = NULL;
    panda$collections$Array* $tmp1003;
    panda$collections$Array* $tmp1004;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1006;
    panda$core$Int64 $tmp1007;
    panda$core$String* $tmp1021;
    panda$core$String* $tmp1029;
    panda$core$Object* $tmp1030;
    panda$core$Object* $tmp1031;
    panda$core$String* $returnValue1037;
    panda$core$String* $tmp1038;
    panda$core$String* $tmp1039;
    int $tmp986;
    {
        panda$core$MutableString* $tmp990 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp990);
        $tmp989 = $tmp990;
        $tmp988 = $tmp989;
        result987 = $tmp988;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
        panda$core$Matcher* $tmp994 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp993 = $tmp994;
        $tmp992 = $tmp993;
        matcher991 = $tmp992;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
        $l995:;
        panda$core$Bit $tmp998 = panda$core$Matcher$find$R$panda$core$Bit(matcher991);
        bool $tmp997 = $tmp998.value;
        if (!$tmp997) goto $l996;
        {
            int $tmp1001;
            {
                panda$collections$Array* $tmp1005 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1005);
                $tmp1004 = $tmp1005;
                $tmp1003 = $tmp1004;
                groups1002 = $tmp1003;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1007, matcher991);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1006, ((panda$core$Int64) { 0 }), $tmp1007, ((panda$core$Bit) { false }));
                int64_t $tmp1009 = $tmp1006.min.value;
                panda$core$Int64 i1008 = { $tmp1009 };
                int64_t $tmp1011 = $tmp1006.max.value;
                bool $tmp1012 = $tmp1006.inclusive.value;
                if ($tmp1012) goto $l1019; else goto $l1020;
                $l1019:;
                if ($tmp1009 <= $tmp1011) goto $l1013; else goto $l1015;
                $l1020:;
                if ($tmp1009 < $tmp1011) goto $l1013; else goto $l1015;
                $l1013:;
                {
                    panda$core$String* $tmp1022 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher991, i1008);
                    $tmp1021 = $tmp1022;
                    panda$collections$Array$add$panda$collections$Array$T(groups1002, ((panda$core$Object*) $tmp1021));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
                }
                $l1016:;
                int64_t $tmp1024 = $tmp1011 - i1008.value;
                if ($tmp1012) goto $l1025; else goto $l1026;
                $l1025:;
                if ((uint64_t) $tmp1024 >= 1) goto $l1023; else goto $l1015;
                $l1026:;
                if ((uint64_t) $tmp1024 > 1) goto $l1023; else goto $l1015;
                $l1023:;
                i1008.value += 1;
                goto $l1013;
                $l1015:;
                if (p_replacement->target) {
                    $tmp1031 = (($fn1032) p_replacement->pointer)(((panda$collections$ListView*) p_replacement->target), ((panda$collections$ListView*) groups1002));
                } else {
                    $tmp1031 = (($fn1033) p_replacement->pointer)(((panda$collections$ListView*) groups1002));
                }
                $tmp1030 = $tmp1031;
                panda$core$String* $tmp1035 = (($fn1034) $tmp1030->$class->vtable[0])($tmp1030);
                $tmp1029 = $tmp1035;
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher991, result987, $tmp1029, ((panda$core$Bit) { false }));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1029));
                panda$core$Panda$unref$panda$core$Object($tmp1030);
            }
            $tmp1001 = -1;
            goto $l999;
            $l999:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1002));
            groups1002 = NULL;
            switch ($tmp1001) {
                case -1: goto $l1036;
            }
            $l1036:;
        }
        goto $l995;
        $l996:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher991, result987);
        panda$core$String* $tmp1040 = panda$core$MutableString$convert$R$panda$core$String(result987);
        $tmp1039 = $tmp1040;
        $tmp1038 = $tmp1039;
        $returnValue1037 = $tmp1038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
        $tmp986 = 0;
        goto $l984;
        $l1041:;
        return $returnValue1037;
    }
    $l984:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result987));
    result987 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher991));
    matcher991 = NULL;
    switch ($tmp986) {
        case 0: goto $l1041;
    }
    $l1043:;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$Char32$R$panda$core$Int64(panda$core$String* self, panda$core$Char32 p_needle) {
    panda$core$Int64 count1044;
    panda$collections$Iterator* Iter$988$91048 = NULL;
    panda$collections$Iterator* $tmp1049;
    panda$collections$Iterator* $tmp1050;
    panda$core$Char32 c1063;
    panda$core$Object* $tmp1064;
    panda$core$Int64 $returnValue1072;
    count1044 = ((panda$core$Int64) { 0 });
    {
        int $tmp1047;
        {
            ITable* $tmp1051 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1051 = $tmp1051->next;
            }
            $fn1053 $tmp1052 = $tmp1051->methods[0];
            panda$collections$Iterator* $tmp1054 = $tmp1052(((panda$collections$Iterable*) self));
            $tmp1050 = $tmp1054;
            $tmp1049 = $tmp1050;
            Iter$988$91048 = $tmp1049;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
            $l1055:;
            ITable* $tmp1058 = Iter$988$91048->$class->itable;
            while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1058 = $tmp1058->next;
            }
            $fn1060 $tmp1059 = $tmp1058->methods[0];
            panda$core$Bit $tmp1061 = $tmp1059(Iter$988$91048);
            panda$core$Bit $tmp1062 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1061);
            bool $tmp1057 = $tmp1062.value;
            if (!$tmp1057) goto $l1056;
            {
                ITable* $tmp1065 = Iter$988$91048->$class->itable;
                while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1065 = $tmp1065->next;
                }
                $fn1067 $tmp1066 = $tmp1065->methods[1];
                panda$core$Object* $tmp1068 = $tmp1066(Iter$988$91048);
                $tmp1064 = $tmp1068;
                c1063 = ((panda$core$Char32$wrapper*) $tmp1064)->value;
                panda$core$Panda$unref$panda$core$Object($tmp1064);
                panda$core$Bit $tmp1069 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c1063, p_needle);
                if ($tmp1069.value) {
                {
                    panda$core$Int64 $tmp1070 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count1044, ((panda$core$Int64) { 1 }));
                    count1044 = $tmp1070;
                }
                }
            }
            goto $l1055;
            $l1056:;
        }
        $tmp1047 = -1;
        goto $l1045;
        $l1045:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$988$91048));
        Iter$988$91048 = NULL;
        switch ($tmp1047) {
            case -1: goto $l1071;
        }
        $l1071:;
    }
    $returnValue1072 = count1044;
    return $returnValue1072;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$String$R$panda$core$Int64(panda$core$String* self, panda$core$String* p_needle) {
    panda$core$Int64 $returnValue1074;
    panda$core$Int64 $tmp1075 = panda$core$String$matchCount$panda$core$String$panda$core$Bit$R$panda$core$Int64(self, p_needle, ((panda$core$Bit) { false }));
    $returnValue1074 = $tmp1075;
    return $returnValue1074;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$String$panda$core$Bit$R$panda$core$Int64(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$core$Int64 count1077;
    panda$core$String$Index$nullable i1078;
    panda$core$Int64 needleLength1080;
    panda$core$Int64 $returnValue1092;
    count1077 = ((panda$core$Int64) { 0 });
    panda$core$String$Index $tmp1079 = panda$core$String$start$R$panda$core$String$Index(self);
    i1078 = ((panda$core$String$Index$nullable) { $tmp1079, true });
    panda$core$Int64 $tmp1081 = panda$core$String$length$R$panda$core$Int64(p_needle);
    needleLength1080 = $tmp1081;
    $l1082:;
    panda$core$String$Index $tmp1085 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$Bit $tmp1086 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(((panda$core$String$Index) i1078.value), $tmp1085);
    bool $tmp1084 = $tmp1086.value;
    if (!$tmp1084) goto $l1083;
    {
        panda$core$String$Index$nullable $tmp1087 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_needle, ((panda$core$String$Index) i1078.value));
        i1078 = $tmp1087;
        if (((panda$core$Bit) { !i1078.nonnull }).value) {
        {
            goto $l1083;
        }
        }
        panda$core$Int64 $tmp1088 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count1077, ((panda$core$Int64) { 1 }));
        count1077 = $tmp1088;
        if (p_overlapping.value) {
        {
            panda$core$String$Index $tmp1089 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, ((panda$core$String$Index) i1078.value));
            i1078 = ((panda$core$String$Index$nullable) { $tmp1089, true });
        }
        }
        else {
        {
            panda$core$Int64 $tmp1090 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(needleLength1080, ((panda$core$Int64) { 1 }));
            panda$core$String$Index $tmp1091 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) i1078.value), $tmp1090);
            i1078 = ((panda$core$String$Index$nullable) { $tmp1091, true });
        }
        }
    }
    goto $l1082;
    $l1083:;
    $returnValue1092 = count1077;
    return $returnValue1092;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$RegularExpression$R$panda$core$Int64(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Int64 $returnValue1094;
    panda$core$Int64 $tmp1095 = panda$core$String$matchCount$panda$core$RegularExpression$panda$core$Bit$R$panda$core$Int64(self, p_needle, ((panda$core$Bit) { false }));
    $returnValue1094 = $tmp1095;
    return $returnValue1094;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$RegularExpression$panda$core$Bit$R$panda$core$Int64(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$core$Int64 count1100;
    panda$core$String$Index i1101;
    panda$core$Matcher* matcher1103 = NULL;
    panda$core$Matcher* $tmp1104;
    panda$core$Matcher* $tmp1105;
    panda$core$String$Index $tmp1117;
    panda$core$String$Index matchEnd1119;
    panda$core$String$Index $tmp1120;
    panda$core$Int64 $returnValue1123;
    int $tmp1099;
    {
        count1100 = ((panda$core$Int64) { 0 });
        panda$core$String$Index $tmp1102 = panda$core$String$start$R$panda$core$String$Index(self);
        i1101 = $tmp1102;
        panda$core$Matcher* $tmp1106 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
        $tmp1105 = $tmp1106;
        $tmp1104 = $tmp1105;
        matcher1103 = $tmp1104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
        $l1107:;
        panda$core$String$Index $tmp1111 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$Bit $tmp1112 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(i1101, $tmp1111);
        bool $tmp1110 = $tmp1112.value;
        if (!$tmp1110) goto $l1113;
        panda$core$Bit $tmp1114 = panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(matcher1103, i1101);
        $tmp1110 = $tmp1114.value;
        $l1113:;
        panda$core$Bit $tmp1115 = { $tmp1110 };
        bool $tmp1109 = $tmp1115.value;
        if (!$tmp1109) goto $l1108;
        {
            panda$core$Int64 $tmp1116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count1100, ((panda$core$Int64) { 1 }));
            count1100 = $tmp1116;
            if (p_overlapping.value) {
            {
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1117, matcher1103);
                panda$core$String$Index $tmp1118 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp1117);
                i1101 = $tmp1118;
            }
            }
            else {
            {
                panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1120, matcher1103);
                matchEnd1119 = $tmp1120;
                panda$core$Bit $tmp1121 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(i1101, matchEnd1119);
                if ($tmp1121.value) {
                {
                    i1101 = matchEnd1119;
                }
                }
                else {
                {
                    panda$core$String$Index $tmp1122 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, i1101);
                    i1101 = $tmp1122;
                }
                }
            }
            }
        }
        goto $l1107;
        $l1108:;
        $returnValue1123 = count1100;
        $tmp1099 = 0;
        goto $l1097;
        $l1124:;
        return $returnValue1123;
    }
    $l1097:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1103));
    matcher1103 = NULL;
    switch ($tmp1099) {
        case 0: goto $l1124;
    }
    $l1126:;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1127;
    panda$core$String$Index $tmp1128;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1128, ((panda$core$Int64) { 0 }));
    $returnValue1127 = $tmp1128;
    return $returnValue1127;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1130;
    panda$core$String$Index $tmp1131;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1131, self->_length);
    $returnValue1130 = $tmp1131;
    return $returnValue1130;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1134;
    panda$core$String$Index $returnValue1137;
    panda$core$String$Index $tmp1138;
    panda$core$String$Index $tmp1142;
    panda$core$String$Index $tmp1146;
    panda$core$String$Index $tmp1149;
    panda$core$Bit $tmp1133 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp1133.value);
    int64_t $tmp1135 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1134 = $tmp1135;
    bool $tmp1136 = c1134 >= 240;
    if (((panda$core$Bit) { $tmp1136 }).value) {
    {
        panda$core$Int64 $tmp1139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1138, $tmp1139);
        $returnValue1137 = $tmp1138;
        return $returnValue1137;
    }
    }
    bool $tmp1141 = c1134 >= 224;
    if (((panda$core$Bit) { $tmp1141 }).value) {
    {
        panda$core$Int64 $tmp1143 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1142, $tmp1143);
        $returnValue1137 = $tmp1142;
        return $returnValue1137;
    }
    }
    bool $tmp1145 = c1134 >= 192;
    if (((panda$core$Bit) { $tmp1145 }).value) {
    {
        panda$core$Int64 $tmp1147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1146, $tmp1147);
        $returnValue1137 = $tmp1146;
        return $returnValue1137;
    }
    }
    panda$core$Int64 $tmp1150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp1149, $tmp1150);
    $returnValue1137 = $tmp1149;
    return $returnValue1137;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue1153;
    panda$core$String$Index $returnValue1165;
    panda$core$String$Index $tmp1166;
    panda$core$Bit $tmp1152 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1152.value);
    panda$core$Int64 $tmp1154 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue1153 = $tmp1154;
    $l1155:;
    int64_t $tmp1159 = ((int64_t) self->data[newValue1153.value].value) & 255;
    bool $tmp1160 = $tmp1159 >= 128;
    bool $tmp1158 = $tmp1160;
    if (!$tmp1158) goto $l1161;
    int64_t $tmp1162 = ((int64_t) self->data[newValue1153.value].value) & 255;
    bool $tmp1163 = $tmp1162 < 192;
    $tmp1158 = $tmp1163;
    $l1161:;
    bool $tmp1157 = ((panda$core$Bit) { $tmp1158 }).value;
    if (!$tmp1157) goto $l1156;
    {
        panda$core$Int64 $tmp1164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1153, ((panda$core$Int64) { 1 }));
        newValue1153 = $tmp1164;
    }
    goto $l1155;
    $l1156:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1166, newValue1153);
    $returnValue1165 = $tmp1166;
    return $returnValue1165;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1168;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1170;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1191;
    panda$core$String$Index $returnValue1222;
    result1168 = p_index;
    panda$core$Bit $tmp1169 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp1169.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1170, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp1172 = $tmp1170.min.value;
        panda$core$Int64 i1171 = { $tmp1172 };
        int64_t $tmp1174 = $tmp1170.max.value;
        bool $tmp1175 = $tmp1170.inclusive.value;
        if ($tmp1175) goto $l1182; else goto $l1183;
        $l1182:;
        if ($tmp1172 <= $tmp1174) goto $l1176; else goto $l1178;
        $l1183:;
        if ($tmp1172 < $tmp1174) goto $l1176; else goto $l1178;
        $l1176:;
        {
            panda$core$String$Index $tmp1184 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1168);
            result1168 = $tmp1184;
        }
        $l1179:;
        int64_t $tmp1186 = $tmp1174 - i1171.value;
        if ($tmp1175) goto $l1187; else goto $l1188;
        $l1187:;
        if ((uint64_t) $tmp1186 >= 1) goto $l1185; else goto $l1178;
        $l1188:;
        if ((uint64_t) $tmp1186 > 1) goto $l1185; else goto $l1178;
        $l1185:;
        i1171.value += 1;
        goto $l1176;
        $l1178:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1191, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp1193 = $tmp1191.start.value;
        panda$core$Int64 i1192 = { $tmp1193 };
        int64_t $tmp1195 = $tmp1191.end.value;
        int64_t $tmp1196 = $tmp1191.step.value;
        bool $tmp1197 = $tmp1191.inclusive.value;
        bool $tmp1204 = $tmp1196 > 0;
        if ($tmp1204) goto $l1202; else goto $l1203;
        $l1202:;
        if ($tmp1197) goto $l1205; else goto $l1206;
        $l1205:;
        if ($tmp1193 <= $tmp1195) goto $l1198; else goto $l1200;
        $l1206:;
        if ($tmp1193 < $tmp1195) goto $l1198; else goto $l1200;
        $l1203:;
        if ($tmp1197) goto $l1207; else goto $l1208;
        $l1207:;
        if ($tmp1193 >= $tmp1195) goto $l1198; else goto $l1200;
        $l1208:;
        if ($tmp1193 > $tmp1195) goto $l1198; else goto $l1200;
        $l1198:;
        {
            panda$core$String$Index $tmp1210 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1168);
            result1168 = $tmp1210;
        }
        $l1201:;
        if ($tmp1204) goto $l1212; else goto $l1213;
        $l1212:;
        int64_t $tmp1214 = $tmp1195 - i1192.value;
        if ($tmp1197) goto $l1215; else goto $l1216;
        $l1215:;
        if ((uint64_t) $tmp1214 >= $tmp1196) goto $l1211; else goto $l1200;
        $l1216:;
        if ((uint64_t) $tmp1214 > $tmp1196) goto $l1211; else goto $l1200;
        $l1213:;
        int64_t $tmp1218 = i1192.value - $tmp1195;
        if ($tmp1197) goto $l1219; else goto $l1220;
        $l1219:;
        if ((uint64_t) $tmp1218 >= -$tmp1196) goto $l1211; else goto $l1200;
        $l1220:;
        if ((uint64_t) $tmp1218 > -$tmp1196) goto $l1211; else goto $l1200;
        $l1211:;
        i1192.value += $tmp1196;
        goto $l1198;
        $l1200:;
    }
    }
    $returnValue1222 = result1168;
    return $returnValue1222;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1224;
    panda$core$String* $tmp1225;
    panda$core$String* $tmp1226;
    panda$core$Char32 $tmp1227;
    panda$core$Char32$init$panda$core$Int32(&$tmp1227, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1228 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1227);
    $tmp1226 = $tmp1228;
    $tmp1225 = $tmp1226;
    $returnValue1224 = $tmp1225;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1225));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
    return $returnValue1224;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1232;
    panda$core$String* $tmp1233;
    panda$core$String* $tmp1235;
    panda$core$String* $tmp1236;
    panda$core$String* $tmp1237;
    panda$core$Int64 $tmp1230 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1231 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1230, p_width);
    if ($tmp1231.value) {
    {
        $tmp1233 = self;
        $returnValue1232 = $tmp1233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
        return $returnValue1232;
    }
    }
    panda$core$Int64 $tmp1238 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1239 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1238);
    panda$core$String* $tmp1240 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1239);
    $tmp1237 = $tmp1240;
    panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1237);
    $tmp1236 = $tmp1241;
    $tmp1235 = $tmp1236;
    $returnValue1232 = $tmp1235;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
    return $returnValue1232;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1243;
    panda$core$String* $tmp1244;
    panda$core$String* $tmp1245;
    panda$core$Char32 $tmp1246;
    panda$core$Char32$init$panda$core$Int32(&$tmp1246, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1247 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1246);
    $tmp1245 = $tmp1247;
    $tmp1244 = $tmp1245;
    $returnValue1243 = $tmp1244;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1245));
    return $returnValue1243;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1251;
    panda$core$String* $tmp1252;
    panda$core$String* $tmp1254;
    panda$core$String* $tmp1255;
    panda$core$String* $tmp1256;
    panda$core$Int64 $tmp1249 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1250 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1249, p_width);
    if ($tmp1250.value) {
    {
        $tmp1252 = self;
        $returnValue1251 = $tmp1252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
        return $returnValue1251;
    }
    }
    panda$core$Int64 $tmp1257 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1258 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1257);
    panda$core$String* $tmp1259 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1258);
    $tmp1256 = $tmp1259;
    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, self);
    $tmp1255 = $tmp1260;
    $tmp1254 = $tmp1255;
    $returnValue1251 = $tmp1254;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1254));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
    return $returnValue1251;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1262;
    panda$core$String* $tmp1263;
    panda$core$String* $tmp1264;
    panda$core$Char32 $tmp1265;
    panda$core$Char32$init$panda$core$Int32(&$tmp1265, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1266 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1265);
    $tmp1264 = $tmp1266;
    $tmp1263 = $tmp1264;
    $returnValue1262 = $tmp1263;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1263));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1264));
    return $returnValue1262;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1270;
    panda$core$String* $tmp1271;
    panda$core$Int64 pad1273;
    panda$core$Int64 left1276;
    panda$core$Int64 right1278;
    panda$core$String* $tmp1280;
    panda$core$String* $tmp1281;
    panda$core$String* $tmp1282;
    panda$core$String* $tmp1283;
    panda$core$String* $tmp1286;
    panda$core$Int64 $tmp1268 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1269 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1268, p_width);
    if ($tmp1269.value) {
    {
        $tmp1271 = self;
        $returnValue1270 = $tmp1271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
        return $returnValue1270;
    }
    }
    panda$core$Int64 $tmp1274 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1275 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1274);
    pad1273 = $tmp1275;
    panda$core$Int64 $tmp1277 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1273, ((panda$core$Int64) { 2 }));
    left1276 = $tmp1277;
    panda$core$Int64 $tmp1279 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1273, left1276);
    right1278 = $tmp1279;
    panda$core$String* $tmp1284 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1276);
    $tmp1283 = $tmp1284;
    panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, self);
    $tmp1282 = $tmp1285;
    panda$core$String* $tmp1287 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1278);
    $tmp1286 = $tmp1287;
    panda$core$String* $tmp1288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, $tmp1286);
    $tmp1281 = $tmp1288;
    $tmp1280 = $tmp1281;
    $returnValue1270 = $tmp1280;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
    return $returnValue1270;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1290;
    panda$collections$Array* $tmp1291;
    panda$collections$Array* $tmp1292;
    panda$collections$Array* $tmp1293 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1292 = $tmp1293;
    $tmp1291 = $tmp1292;
    $returnValue1290 = $tmp1291;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1291));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1292));
    return $returnValue1290;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1298 = NULL;
    panda$collections$Array* $tmp1299;
    panda$collections$Array* $tmp1300;
    panda$core$String$Index index1302;
    panda$core$String$Index$nullable nextIndex1306;
    panda$core$String* $tmp1315;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1316;
    panda$core$String* $tmp1318;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1319;
    panda$core$String$Index $tmp1321;
    panda$collections$Array* $returnValue1323;
    panda$collections$Array* $tmp1324;
    int $tmp1297;
    {
        panda$collections$Array* $tmp1301 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1301);
        $tmp1300 = $tmp1301;
        $tmp1299 = $tmp1300;
        result1298 = $tmp1299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
        panda$core$String$Index $tmp1303 = panda$core$String$start$R$panda$core$String$Index(self);
        index1302 = $tmp1303;
        $l1304:;
        while (true) {
        {
            memset(&nextIndex1306, 0, sizeof(nextIndex1306));
            panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1307.value) {
            {
                panda$core$String$Index $tmp1308 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1302);
                nextIndex1306 = ((panda$core$String$Index$nullable) { $tmp1308, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1309 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1302);
                nextIndex1306 = $tmp1309;
            }
            }
            bool $tmp1310 = ((panda$core$Bit) { !nextIndex1306.nonnull }).value;
            if ($tmp1310) goto $l1311;
            panda$core$Int64 $tmp1312 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1298->count, $tmp1312);
            $tmp1310 = $tmp1313.value;
            $l1311:;
            panda$core$Bit $tmp1314 = { $tmp1310 };
            if ($tmp1314.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1316, ((panda$core$String$Index$nullable) { index1302, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1317 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1316);
                $tmp1315 = $tmp1317;
                panda$collections$Array$add$panda$collections$Array$T(result1298, ((panda$core$Object*) $tmp1315));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
                goto $l1305;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1319, index1302, ((panda$core$String$Index) nextIndex1306.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1320 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1319);
            $tmp1318 = $tmp1320;
            panda$collections$Array$add$panda$collections$Array$T(result1298, ((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Int64 $tmp1322 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1306.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1321, $tmp1322);
            index1302 = $tmp1321;
        }
        }
        $l1305:;
        $tmp1324 = result1298;
        $returnValue1323 = $tmp1324;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1324));
        $tmp1297 = 0;
        goto $l1295;
        $l1325:;
        return $returnValue1323;
    }
    $l1295:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1298));
    result1298 = NULL;
    switch ($tmp1297) {
        case 0: goto $l1325;
    }
    $l1327:;
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1332 = NULL;
    panda$collections$Array* $tmp1333;
    panda$collections$Array* $tmp1334;
    panda$core$Matcher* matcher1336 = NULL;
    panda$core$Matcher* $tmp1337;
    panda$core$Matcher* $tmp1338;
    panda$core$String$Index index1340;
    panda$core$Bit found1344;
    panda$core$String* $tmp1352;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1353;
    panda$core$String$Index start1355;
    panda$core$String$Index $tmp1356;
    panda$core$String* $tmp1357;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1358;
    panda$core$String$Index $tmp1360;
    panda$core$String$Index $tmp1361;
    panda$collections$ListView* $returnValue1363;
    panda$collections$ListView* $tmp1364;
    panda$core$Bit $tmp1328 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1328.value);
    int $tmp1331;
    {
        panda$collections$Array* $tmp1335 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1335);
        $tmp1334 = $tmp1335;
        $tmp1333 = $tmp1334;
        result1332 = $tmp1333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
        panda$core$Matcher* $tmp1339 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1338 = $tmp1339;
        $tmp1337 = $tmp1338;
        matcher1336 = $tmp1337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
        panda$core$String$Index $tmp1341 = panda$core$String$start$R$panda$core$String$Index(self);
        index1340 = $tmp1341;
        $l1342:;
        while (true) {
        {
            panda$core$Bit $tmp1345 = panda$core$Matcher$find$R$panda$core$Bit(matcher1336);
            found1344 = $tmp1345;
            panda$core$Bit $tmp1347 = panda$core$Bit$$NOT$R$panda$core$Bit(found1344);
            bool $tmp1346 = $tmp1347.value;
            if ($tmp1346) goto $l1348;
            panda$core$Int64 $tmp1349 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1332->count, $tmp1349);
            $tmp1346 = $tmp1350.value;
            $l1348:;
            panda$core$Bit $tmp1351 = { $tmp1346 };
            if ($tmp1351.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1353, ((panda$core$String$Index$nullable) { index1340, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1354 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1353);
                $tmp1352 = $tmp1354;
                panda$collections$Array$add$panda$collections$Array$T(result1332, ((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                goto $l1343;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1356, matcher1336);
            start1355 = $tmp1356;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1358, index1340, start1355, ((panda$core$Bit) { false }));
            panda$core$String* $tmp1359 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1358);
            $tmp1357 = $tmp1359;
            panda$collections$Array$add$panda$collections$Array$T(result1332, ((panda$core$Object*) $tmp1357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1361, matcher1336);
            panda$core$Int64 $tmp1362 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1355.value, $tmp1361.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1360, $tmp1362);
            index1340 = $tmp1360;
        }
        }
        $l1343:;
        $tmp1364 = ((panda$collections$ListView*) result1332);
        $returnValue1363 = $tmp1364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
        $tmp1331 = 0;
        goto $l1329;
        $l1365:;
        return $returnValue1363;
    }
    $l1329:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1332));
    result1332 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1336));
    matcher1336 = NULL;
    switch ($tmp1331) {
        case 0: goto $l1365;
    }
    $l1367:;
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1368;
    panda$collections$ListView* $tmp1369;
    panda$collections$ListView* $tmp1370;
    panda$collections$ListView* $tmp1371 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1370 = $tmp1371;
    $tmp1369 = $tmp1370;
    $returnValue1368 = $tmp1369;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
    return $returnValue1368;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $returnValue1374;
    panda$core$Int64 result1376;
    panda$core$Int64 start1377;
    panda$core$Char8 $tmp1378;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1380;
    panda$core$Int64 digit1394;
    panda$core$Char8 $tmp1410;
    panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1373.value) {
    {
        $returnValue1374 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1374;
    }
    }
    result1376 = ((panda$core$Int64) { 0 });
    memset(&start1377, 0, sizeof(start1377));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1378, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1379 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1378);
    if ($tmp1379.value) {
    {
        start1377 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1377 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1380, start1377, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1382 = $tmp1380.min.value;
    panda$core$Int64 i1381 = { $tmp1382 };
    int64_t $tmp1384 = $tmp1380.max.value;
    bool $tmp1385 = $tmp1380.inclusive.value;
    if ($tmp1385) goto $l1392; else goto $l1393;
    $l1392:;
    if ($tmp1382 <= $tmp1384) goto $l1386; else goto $l1388;
    $l1393:;
    if ($tmp1382 < $tmp1384) goto $l1386; else goto $l1388;
    $l1386:;
    {
        panda$core$Int64 $tmp1395 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1381.value].value) }), ((panda$core$Int64) { 48 }));
        digit1394 = $tmp1395;
        panda$core$Bit $tmp1397 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1394, ((panda$core$Int64) { 0 }));
        bool $tmp1396 = $tmp1397.value;
        if ($tmp1396) goto $l1398;
        panda$core$Bit $tmp1399 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1394, ((panda$core$Int64) { 9 }));
        $tmp1396 = $tmp1399.value;
        $l1398:;
        panda$core$Bit $tmp1400 = { $tmp1396 };
        if ($tmp1400.value) {
        {
            $returnValue1374 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1374;
        }
        }
        panda$core$Int64 $tmp1402 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1376, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1403 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1402, digit1394);
        result1376 = $tmp1403;
    }
    $l1389:;
    int64_t $tmp1405 = $tmp1384 - i1381.value;
    if ($tmp1385) goto $l1406; else goto $l1407;
    $l1406:;
    if ((uint64_t) $tmp1405 >= 1) goto $l1404; else goto $l1388;
    $l1407:;
    if ((uint64_t) $tmp1405 > 1) goto $l1404; else goto $l1388;
    $l1404:;
    i1381.value += 1;
    goto $l1386;
    $l1388:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1410, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1411 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1410);
    if ($tmp1411.value) {
    {
        panda$core$Int64 $tmp1412 = panda$core$Int64$$SUB$R$panda$core$Int64(result1376);
        result1376 = $tmp1412;
    }
    }
    $returnValue1374 = ((panda$core$Int64$nullable) { result1376, true });
    return $returnValue1374;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $returnValue1415;
    panda$core$UInt64 result1417;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1418;
    panda$core$UInt64 digit1432;
    panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1414.value) {
    {
        $returnValue1415 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1415;
    }
    }
    result1417 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1418, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1420 = $tmp1418.min.value;
    panda$core$Int64 i1419 = { $tmp1420 };
    int64_t $tmp1422 = $tmp1418.max.value;
    bool $tmp1423 = $tmp1418.inclusive.value;
    if ($tmp1423) goto $l1430; else goto $l1431;
    $l1430:;
    if ($tmp1420 <= $tmp1422) goto $l1424; else goto $l1426;
    $l1431:;
    if ($tmp1420 < $tmp1422) goto $l1424; else goto $l1426;
    $l1424:;
    {
        panda$core$UInt64 $tmp1433 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1419.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1432 = $tmp1433;
        panda$core$Bit $tmp1435 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1432, ((panda$core$UInt64) { 0 }));
        bool $tmp1434 = $tmp1435.value;
        if ($tmp1434) goto $l1436;
        panda$core$Bit $tmp1437 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1432, ((panda$core$UInt64) { 9 }));
        $tmp1434 = $tmp1437.value;
        $l1436:;
        panda$core$Bit $tmp1438 = { $tmp1434 };
        if ($tmp1438.value) {
        {
            $returnValue1415 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1415;
        }
        }
        panda$core$UInt64 $tmp1440 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1417, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1441 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1440, digit1432);
        result1417 = $tmp1441;
    }
    $l1427:;
    int64_t $tmp1443 = $tmp1422 - i1419.value;
    if ($tmp1423) goto $l1444; else goto $l1445;
    $l1444:;
    if ((uint64_t) $tmp1443 >= 1) goto $l1442; else goto $l1426;
    $l1445:;
    if ((uint64_t) $tmp1443 > 1) goto $l1442; else goto $l1426;
    $l1442:;
    i1419.value += 1;
    goto $l1424;
    $l1426:;
    $returnValue1415 = ((panda$core$UInt64$nullable) { result1417, true });
    return $returnValue1415;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1450;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1451;
    panda$core$Int64 $returnValue1473;
    panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1449.value) {
    {
        h1450 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1451, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1453 = $tmp1451.min.value;
        panda$core$Int64 i1452 = { $tmp1453 };
        int64_t $tmp1455 = $tmp1451.max.value;
        bool $tmp1456 = $tmp1451.inclusive.value;
        if ($tmp1456) goto $l1463; else goto $l1464;
        $l1463:;
        if ($tmp1453 <= $tmp1455) goto $l1457; else goto $l1459;
        $l1464:;
        if ($tmp1453 < $tmp1455) goto $l1457; else goto $l1459;
        $l1457:;
        {
            panda$core$Int64 $tmp1465 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1450, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1466 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1465, ((panda$core$Int64) { ((int64_t) self->data[i1452.value].value) }));
            h1450 = $tmp1466;
        }
        $l1460:;
        int64_t $tmp1468 = $tmp1455 - i1452.value;
        if ($tmp1456) goto $l1469; else goto $l1470;
        $l1469:;
        if ((uint64_t) $tmp1468 >= 1) goto $l1467; else goto $l1459;
        $l1470:;
        if ((uint64_t) $tmp1468 > 1) goto $l1467; else goto $l1459;
        $l1467:;
        i1452.value += 1;
        goto $l1457;
        $l1459:;
        self->_hash = h1450;
    }
    }
    $returnValue1473 = self->_hash;
    return $returnValue1473;
}

