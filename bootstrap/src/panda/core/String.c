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
typedef panda$core$String* (*$fn307)(panda$core$Object*);
typedef panda$core$String* (*$fn350)(panda$core$Object*);
typedef panda$core$Object* (*$fn972)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn973)(panda$core$String*);
typedef panda$core$String* (*$fn974)(panda$core$Object*);
typedef panda$core$Object* (*$fn1031)(panda$collections$ListView*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1032)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1033)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1059)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1066)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$MutableString* result315 = NULL;
    panda$core$MutableString* $tmp316;
    panda$core$MutableString* $tmp317;
    panda$core$Range$LTpanda$core$Int64$GT $tmp319;
    panda$core$String* $returnValue339;
    panda$core$String* $tmp340;
    panda$core$String* $tmp341;
    panda$core$Bit $tmp311 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp311.value);
    int $tmp314;
    {
        panda$core$MutableString* $tmp318 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp318);
        $tmp317 = $tmp318;
        $tmp316 = $tmp317;
        result315 = $tmp316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp319, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp321 = $tmp319.min.value;
        panda$core$Int64 i320 = { $tmp321 };
        int64_t $tmp323 = $tmp319.max.value;
        bool $tmp324 = $tmp319.inclusive.value;
        if ($tmp324) goto $l331; else goto $l332;
        $l331:;
        if ($tmp321 <= $tmp323) goto $l325; else goto $l327;
        $l332:;
        if ($tmp321 < $tmp323) goto $l325; else goto $l327;
        $l325:;
        {
            panda$core$MutableString$append$panda$core$String(result315, self);
        }
        $l328:;
        int64_t $tmp334 = $tmp323 - i320.value;
        if ($tmp324) goto $l335; else goto $l336;
        $l335:;
        if ((uint64_t) $tmp334 >= 1) goto $l333; else goto $l327;
        $l336:;
        if ((uint64_t) $tmp334 > 1) goto $l333; else goto $l327;
        $l333:;
        i320.value += 1;
        goto $l325;
        $l327:;
        panda$core$String* $tmp342 = panda$core$MutableString$finish$R$panda$core$String(result315);
        $tmp341 = $tmp342;
        $tmp340 = $tmp341;
        $returnValue339 = $tmp340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
        $tmp314 = 0;
        goto $l312;
        $l343:;
        return $returnValue339;
    }
    $l312:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result315));
    result315 = NULL;
    switch ($tmp314) {
        case 0: goto $l343;
    }
    $l345:;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$String* $tmp349;
    panda$core$String* $tmp351 = (($fn350) p_o->$class->vtable[0])(p_o);
    $tmp349 = $tmp351;
    panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, p_s);
    $tmp348 = $tmp352;
    $tmp347 = $tmp348;
    $returnValue346 = $tmp347;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    return $returnValue346;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue355;
    panda$core$Range$LTpanda$core$Int64$GT $tmp357;
    panda$core$Bit $tmp354 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp354.value) {
    {
        $returnValue355 = ((panda$core$Bit) { false });
        return $returnValue355;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp357, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp359 = $tmp357.min.value;
    panda$core$Int64 i358 = { $tmp359 };
    int64_t $tmp361 = $tmp357.max.value;
    bool $tmp362 = $tmp357.inclusive.value;
    if ($tmp362) goto $l369; else goto $l370;
    $l369:;
    if ($tmp359 <= $tmp361) goto $l363; else goto $l365;
    $l370:;
    if ($tmp359 < $tmp361) goto $l363; else goto $l365;
    $l363:;
    {
        panda$core$Bit $tmp371 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i358.value], p_other->data[i358.value]);
        if ($tmp371.value) {
        {
            $returnValue355 = ((panda$core$Bit) { false });
            return $returnValue355;
        }
        }
    }
    $l366:;
    int64_t $tmp374 = $tmp361 - i358.value;
    if ($tmp362) goto $l375; else goto $l376;
    $l375:;
    if ((uint64_t) $tmp374 >= 1) goto $l373; else goto $l365;
    $l376:;
    if ((uint64_t) $tmp374 > 1) goto $l373; else goto $l365;
    $l373:;
    i358.value += 1;
    goto $l363;
    $l365:;
    $returnValue355 = ((panda$core$Bit) { true });
    return $returnValue355;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue380;
    panda$core$Bit $tmp381 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp382 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp381);
    $returnValue380 = $tmp382;
    return $returnValue380;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx384;
    panda$core$Char8 c385;
    panda$core$Int32 result386;
    panda$core$Char32 $returnValue390;
    panda$core$Char32 $tmp391;
    panda$core$Char32 $tmp403;
    panda$core$Char32 $tmp420;
    panda$core$Char32 $tmp440;
    idx384 = p_index.value;
    c385 = self->data[idx384.value];
    panda$core$Int32 $tmp387 = panda$core$Char8$convert$R$panda$core$Int32(c385);
    result386 = $tmp387;
    int64_t $tmp388 = ((int64_t) c385.value) & 255;
    bool $tmp389 = $tmp388 < 192;
    if (((panda$core$Bit) { $tmp389 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp391, result386);
        $returnValue390 = $tmp391;
        return $returnValue390;
    }
    }
    int64_t $tmp393 = ((int64_t) c385.value) & 255;
    bool $tmp394 = $tmp393 < 224;
    if (((panda$core$Bit) { $tmp394 }).value) {
    {
        panda$core$Int64 $tmp395 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp396 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp395, self->_length);
        PANDA_ASSERT($tmp396.value);
        panda$core$Int32 $tmp397 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result386, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp398 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp397, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp399 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp400 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp399.value]);
        panda$core$Int32 $tmp401 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp400, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp402 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp398, $tmp401);
        result386 = $tmp402;
        panda$core$Char32$init$panda$core$Int32(&$tmp403, result386);
        $returnValue390 = $tmp403;
        return $returnValue390;
    }
    }
    int64_t $tmp405 = ((int64_t) c385.value) & 255;
    bool $tmp406 = $tmp405 < 240;
    if (((panda$core$Bit) { $tmp406 }).value) {
    {
        panda$core$Int64 $tmp407 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp408 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp407, self->_length);
        PANDA_ASSERT($tmp408.value);
        panda$core$Int32 $tmp409 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result386, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp410 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp409, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp411 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp412 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp411.value]);
        panda$core$Int32 $tmp413 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp412, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp414 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp413, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp415 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp410, $tmp414);
        panda$core$Int64 $tmp416 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp417 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp416.value]);
        panda$core$Int32 $tmp418 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp417, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp419 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp415, $tmp418);
        result386 = $tmp419;
        panda$core$Char32$init$panda$core$Int32(&$tmp420, result386);
        $returnValue390 = $tmp420;
        return $returnValue390;
    }
    }
    panda$core$Int64 $tmp422 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp423 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp422, self->_length);
    PANDA_ASSERT($tmp423.value);
    panda$core$Int32 $tmp424 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result386, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp425 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp424, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp426 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp427 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp426.value]);
    panda$core$Int32 $tmp428 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp427, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp429 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp428, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp430 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp425, $tmp429);
    panda$core$Int64 $tmp431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp432 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp431.value]);
    panda$core$Int32 $tmp433 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp432, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp434 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp433, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp435 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp430, $tmp434);
    panda$core$Int64 $tmp436 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx384, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp437 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp436.value]);
    panda$core$Int32 $tmp438 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp437, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp439 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp435, $tmp438);
    result386 = $tmp439;
    panda$core$Char32$init$panda$core$Int32(&$tmp440, result386);
    $returnValue390 = $tmp440;
    return $returnValue390;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue442;
    panda$core$String$Index $tmp443 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp444 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp443, p_index);
    panda$core$Char32 $tmp445 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp444);
    $returnValue442 = $tmp445;
    return $returnValue442;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $returnValue447;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$String* $tmp450 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp451 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp450, (self->data + p_r.min.value.value), $tmp451, self);
    $tmp449 = $tmp450;
    $tmp448 = $tmp449;
    $returnValue447 = $tmp448;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
    return $returnValue447;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min453;
    panda$core$String$Index max455;
    panda$core$String* $returnValue458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp461;
    memset(&min453, 0, sizeof(min453));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min453 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp454 = panda$core$String$start$R$panda$core$String$Index(self);
        min453 = $tmp454;
    }
    }
    memset(&max455, 0, sizeof(max455));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max455 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp456 = panda$core$String$end$R$panda$core$String$Index(self);
        max455 = $tmp456;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp457 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max455);
            max455 = $tmp457;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp461, min453, max455, p_r.inclusive);
    panda$core$String* $tmp462 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp461);
    $tmp460 = $tmp462;
    $tmp459 = $tmp460;
    $returnValue458 = $tmp459;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
    return $returnValue458;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current467;
    panda$core$MutableString* result468 = NULL;
    panda$core$MutableString* $tmp469;
    panda$core$MutableString* $tmp470;
    panda$core$Int64 max472;
    panda$core$Char8 c478;
    panda$core$String* $returnValue489;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    int $tmp466;
    {
        current467 = p_r.min.value;
        panda$core$MutableString* $tmp471 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp471);
        $tmp470 = $tmp471;
        $tmp469 = $tmp470;
        result468 = $tmp469;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
        max472 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max472, ((panda$core$Int64) { 1 }));
            max472 = $tmp473;
        }
        }
        $l474:;
        panda$core$Bit $tmp477 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current467, max472);
        bool $tmp476 = $tmp477.value;
        if (!$tmp476) goto $l475;
        {
            c478 = self->data[current467.value];
            panda$core$MutableString$append$panda$core$Char8(result468, c478);
            panda$core$Int64 $tmp479 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current467, ((panda$core$Int64) { 1 }));
            current467 = $tmp479;
            int64_t $tmp480 = ((int64_t) c478.value) & 255;
            bool $tmp481 = $tmp480 >= 192;
            if (((panda$core$Bit) { $tmp481 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result468, self->data[current467.value]);
                panda$core$Int64 $tmp482 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current467, ((panda$core$Int64) { 1 }));
                current467 = $tmp482;
            }
            }
            int64_t $tmp483 = ((int64_t) c478.value) & 255;
            bool $tmp484 = $tmp483 >= 224;
            if (((panda$core$Bit) { $tmp484 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result468, self->data[current467.value]);
                panda$core$Int64 $tmp485 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current467, ((panda$core$Int64) { 1 }));
                current467 = $tmp485;
            }
            }
            int64_t $tmp486 = ((int64_t) c478.value) & 255;
            bool $tmp487 = $tmp486 >= 240;
            if (((panda$core$Bit) { $tmp487 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result468, self->data[current467.value]);
                panda$core$Int64 $tmp488 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current467, ((panda$core$Int64) { 1 }));
                current467 = $tmp488;
            }
            }
        }
        goto $l474;
        $l475:;
        panda$core$String* $tmp492 = panda$core$MutableString$finish$R$panda$core$String(result468);
        $tmp491 = $tmp492;
        $tmp490 = $tmp491;
        $returnValue489 = $tmp490;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
        $tmp466 = 0;
        goto $l464;
        $l493:;
        return $returnValue489;
    }
    $l464:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result468));
    result468 = NULL;
    switch ($tmp466) {
        case 0: goto $l493;
    }
    $l495:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String* $returnValue497;
    panda$core$String* $tmp498;
    panda$core$String$Index min501;
    panda$core$String$Index max503;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp508;
    panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp496.value) {
    {
        $tmp498 = &$s499;
        $returnValue497 = $tmp498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp498));
        return $returnValue497;
    }
    }
    memset(&min501, 0, sizeof(min501));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min501 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp502 = panda$core$String$start$R$panda$core$String$Index(self);
        min501 = $tmp502;
    }
    }
    memset(&max503, 0, sizeof(max503));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max503 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp504 = panda$core$String$end$R$panda$core$String$Index(self);
        max503 = $tmp504;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp505 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max503);
            max503 = $tmp505;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp508, min501, max503, p_r.inclusive);
    panda$core$String* $tmp509 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp508);
    $tmp507 = $tmp509;
    $tmp506 = $tmp507;
    $returnValue497 = $tmp506;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
    return $returnValue497;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String* $returnValue515;
    panda$core$String* $tmp516;
    panda$core$Int64 step520;
    panda$core$Int64 current521;
    panda$core$Int64 end526;
    panda$core$MutableString* result530 = NULL;
    panda$core$MutableString* $tmp531;
    panda$core$MutableString* $tmp532;
    panda$core$Char8 c539;
    panda$core$Range$LTpanda$core$Int64$GT $tmp550;
    panda$core$String* $tmp565;
    panda$core$String* $tmp566;
    panda$core$String$Index $tmp570;
    panda$core$Char8 c583;
    panda$core$Int64 old584;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp605;
    panda$core$String* $tmp625;
    panda$core$String* $tmp626;
    panda$core$String$Index $tmp630;
    panda$core$Char8 c654;
    panda$core$String* $tmp664;
    panda$core$String* $tmp665;
    int $tmp513;
    {
        panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
        if ($tmp514.value) {
        {
            $tmp516 = &$s517;
            $returnValue515 = $tmp516;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
            $tmp513 = 0;
            goto $l511;
            $l518:;
            return $returnValue515;
        }
        }
        step520 = p_r.step;
        memset(&current521, 0, sizeof(current521));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current521 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Bit $tmp522 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step520, ((panda$core$Int64) { 0 }));
        if ($tmp522.value) {
        {
            panda$core$String$Index $tmp523 = panda$core$String$start$R$panda$core$String$Index(self);
            current521 = $tmp523.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp524 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp525 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp524);
            current521 = $tmp525.value;
        }
        }
        }
        memset(&end526, 0, sizeof(end526));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end526 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Bit $tmp527 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step520, ((panda$core$Int64) { 0 }));
        if ($tmp527.value) {
        {
            panda$core$String$Index $tmp528 = panda$core$String$end$R$panda$core$String$Index(self);
            end526 = $tmp528.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp529 = panda$core$String$start$R$panda$core$String$Index(self);
            end526 = $tmp529.value;
        }
        }
        }
        panda$core$MutableString* $tmp533 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp533);
        $tmp532 = $tmp533;
        $tmp531 = $tmp532;
        result530 = $tmp531;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Bit $tmp534 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp534.value) {
        {
            $l535:;
            panda$core$Bit $tmp538 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current521, end526);
            bool $tmp537 = $tmp538.value;
            if (!$tmp537) goto $l536;
            {
                c539 = self->data[current521.value];
                panda$core$MutableString$append$panda$core$Char8(result530, c539);
                panda$core$Int64 $tmp540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                current521 = $tmp540;
                int64_t $tmp541 = ((int64_t) c539.value) & 255;
                bool $tmp542 = $tmp541 >= 192;
                if (((panda$core$Bit) { $tmp542 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                    panda$core$Int64 $tmp543 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                    current521 = $tmp543;
                }
                }
                int64_t $tmp544 = ((int64_t) c539.value) & 255;
                bool $tmp545 = $tmp544 >= 224;
                if (((panda$core$Bit) { $tmp545 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                    panda$core$Int64 $tmp546 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                    current521 = $tmp546;
                }
                }
                int64_t $tmp547 = ((int64_t) c539.value) & 255;
                bool $tmp548 = $tmp547 >= 240;
                if (((panda$core$Bit) { $tmp548 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                    panda$core$Int64 $tmp549 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                    current521 = $tmp549;
                }
                }
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp550, ((panda$core$Int64) { 1 }), step520, ((panda$core$Bit) { false }));
                int64_t $tmp552 = $tmp550.min.value;
                panda$core$Int64 i551 = { $tmp552 };
                int64_t $tmp554 = $tmp550.max.value;
                bool $tmp555 = $tmp550.inclusive.value;
                if ($tmp555) goto $l562; else goto $l563;
                $l562:;
                if ($tmp552 <= $tmp554) goto $l556; else goto $l558;
                $l563:;
                if ($tmp552 < $tmp554) goto $l556; else goto $l558;
                $l556:;
                {
                    panda$core$Bit $tmp564 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current521, end526);
                    if ($tmp564.value) {
                    {
                        panda$core$String* $tmp567 = panda$core$MutableString$convert$R$panda$core$String(result530);
                        $tmp566 = $tmp567;
                        $tmp565 = $tmp566;
                        $returnValue515 = $tmp565;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                        $tmp513 = 1;
                        goto $l511;
                        $l568:;
                        return $returnValue515;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp570, current521);
                    panda$core$String$Index $tmp571 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp570);
                    current521 = $tmp571.value;
                }
                $l559:;
                int64_t $tmp573 = $tmp554 - i551.value;
                if ($tmp555) goto $l574; else goto $l575;
                $l574:;
                if ((uint64_t) $tmp573 >= 1) goto $l572; else goto $l558;
                $l575:;
                if ((uint64_t) $tmp573 > 1) goto $l572; else goto $l558;
                $l572:;
                i551.value += 1;
                goto $l556;
                $l558:;
            }
            goto $l535;
            $l536:;
        }
        }
        else {
        {
            panda$core$Bit $tmp578 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp578.value);
            $l579:;
            panda$core$Bit $tmp582 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current521, end526);
            bool $tmp581 = $tmp582.value;
            if (!$tmp581) goto $l580;
            {
                c583 = self->data[current521.value];
                panda$core$MutableString$append$panda$core$Char8(result530, c583);
                old584 = current521;
                panda$core$Int64 $tmp585 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                current521 = $tmp585;
                int64_t $tmp586 = ((int64_t) c583.value) & 255;
                bool $tmp587 = $tmp586 >= 192;
                if (((panda$core$Bit) { $tmp587 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                    panda$core$Int64 $tmp588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                    current521 = $tmp588;
                }
                }
                int64_t $tmp589 = ((int64_t) c583.value) & 255;
                bool $tmp590 = $tmp589 >= 224;
                if (((panda$core$Bit) { $tmp590 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                    panda$core$Int64 $tmp591 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                    current521 = $tmp591;
                }
                }
                int64_t $tmp592 = ((int64_t) c583.value) & 255;
                bool $tmp593 = $tmp592 >= 240;
                if (((panda$core$Bit) { $tmp593 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                }
                }
                panda$core$Int64 $tmp594 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old584, ((panda$core$Int64) { 1 }));
                current521 = $tmp594;
                $l595:;
                int64_t $tmp599 = ((int64_t) self->data[current521.value].value) & 255;
                bool $tmp600 = $tmp599 >= 128;
                bool $tmp598 = $tmp600;
                if (!$tmp598) goto $l601;
                int64_t $tmp602 = ((int64_t) self->data[current521.value].value) & 255;
                bool $tmp603 = $tmp602 < 192;
                $tmp598 = $tmp603;
                $l601:;
                bool $tmp597 = ((panda$core$Bit) { $tmp598 }).value;
                if (!$tmp597) goto $l596;
                {
                    panda$core$Int64 $tmp604 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                    current521 = $tmp604;
                }
                goto $l595;
                $l596:;
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp605, ((panda$core$Int64) { -1 }), step520, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
                int64_t $tmp607 = $tmp605.start.value;
                panda$core$Int64 i606 = { $tmp607 };
                int64_t $tmp609 = $tmp605.end.value;
                int64_t $tmp610 = $tmp605.step.value;
                bool $tmp611 = $tmp605.inclusive.value;
                bool $tmp618 = $tmp610 > 0;
                if ($tmp618) goto $l616; else goto $l617;
                $l616:;
                if ($tmp611) goto $l619; else goto $l620;
                $l619:;
                if ($tmp607 <= $tmp609) goto $l612; else goto $l614;
                $l620:;
                if ($tmp607 < $tmp609) goto $l612; else goto $l614;
                $l617:;
                if ($tmp611) goto $l621; else goto $l622;
                $l621:;
                if ($tmp607 >= $tmp609) goto $l612; else goto $l614;
                $l622:;
                if ($tmp607 > $tmp609) goto $l612; else goto $l614;
                $l612:;
                {
                    panda$core$Bit $tmp624 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current521, end526);
                    if ($tmp624.value) {
                    {
                        panda$core$String* $tmp627 = panda$core$MutableString$convert$R$panda$core$String(result530);
                        $tmp626 = $tmp627;
                        $tmp625 = $tmp626;
                        $returnValue515 = $tmp625;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                        $tmp513 = 2;
                        goto $l511;
                        $l628:;
                        return $returnValue515;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp630, current521);
                    panda$core$String$Index $tmp631 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp630);
                    current521 = $tmp631.value;
                }
                $l615:;
                if ($tmp618) goto $l633; else goto $l634;
                $l633:;
                int64_t $tmp635 = $tmp609 - i606.value;
                if ($tmp611) goto $l636; else goto $l637;
                $l636:;
                if ((uint64_t) $tmp635 >= $tmp610) goto $l632; else goto $l614;
                $l637:;
                if ((uint64_t) $tmp635 > $tmp610) goto $l632; else goto $l614;
                $l634:;
                int64_t $tmp639 = i606.value - $tmp609;
                if ($tmp611) goto $l640; else goto $l641;
                $l640:;
                if ((uint64_t) $tmp639 >= -$tmp610) goto $l632; else goto $l614;
                $l641:;
                if ((uint64_t) $tmp639 > -$tmp610) goto $l632; else goto $l614;
                $l632:;
                i606.value += $tmp610;
                goto $l612;
                $l614:;
            }
            goto $l579;
            $l580:;
        }
        }
        bool $tmp645 = p_r.inclusive.value;
        if ($tmp645) goto $l646;
        $tmp645 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l646:;
        panda$core$Bit $tmp647 = { $tmp645 };
        bool $tmp644 = $tmp647.value;
        if (!$tmp644) goto $l648;
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current521, end526);
        $tmp644 = $tmp649.value;
        $l648:;
        panda$core$Bit $tmp650 = { $tmp644 };
        bool $tmp643 = $tmp650.value;
        if (!$tmp643) goto $l651;
        panda$core$Bit $tmp652 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end526, self->_length);
        $tmp643 = $tmp652.value;
        $l651:;
        panda$core$Bit $tmp653 = { $tmp643 };
        if ($tmp653.value) {
        {
            c654 = self->data[current521.value];
            panda$core$MutableString$append$panda$core$Char8(result530, c654);
            panda$core$Int64 $tmp655 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
            current521 = $tmp655;
            int64_t $tmp656 = ((int64_t) c654.value) & 255;
            bool $tmp657 = $tmp656 >= 192;
            if (((panda$core$Bit) { $tmp657 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                panda$core$Int64 $tmp658 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                current521 = $tmp658;
            }
            }
            int64_t $tmp659 = ((int64_t) c654.value) & 255;
            bool $tmp660 = $tmp659 >= 224;
            if (((panda$core$Bit) { $tmp660 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
                panda$core$Int64 $tmp661 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current521, ((panda$core$Int64) { 1 }));
                current521 = $tmp661;
            }
            }
            int64_t $tmp662 = ((int64_t) c654.value) & 255;
            bool $tmp663 = $tmp662 >= 240;
            if (((panda$core$Bit) { $tmp663 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result530, self->data[current521.value]);
            }
            }
        }
        }
        panda$core$String* $tmp666 = panda$core$MutableString$finish$R$panda$core$String(result530);
        $tmp665 = $tmp666;
        $tmp664 = $tmp665;
        $returnValue515 = $tmp664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
        $tmp513 = 3;
        goto $l511;
        $l667:;
        return $returnValue515;
    }
    $l511:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result530));
    result530 = NULL;
    switch ($tmp513) {
        case 1: goto $l568;
        case 3: goto $l667;
        case 2: goto $l628;
        case 0: goto $l518;
    }
    $l669:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start670;
    panda$core$String$Index$nullable end673;
    panda$core$String* $returnValue676;
    panda$core$String* $tmp677;
    panda$core$String* $tmp678;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp679;
    memset(&start670, 0, sizeof(start670));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp671 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp672 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp671, ((panda$core$Int64) p_r.min.value));
        start670 = ((panda$core$String$Index$nullable) { $tmp672, true });
    }
    }
    else {
    {
        start670 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end673, 0, sizeof(end673));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp674 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp675 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp674, ((panda$core$Int64) p_r.max.value));
        end673 = ((panda$core$String$Index$nullable) { $tmp675, true });
    }
    }
    else {
    {
        end673 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp679, start670, end673, p_r.inclusive);
    panda$core$String* $tmp680 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp679);
    $tmp678 = $tmp680;
    $tmp677 = $tmp678;
    $returnValue676 = $tmp677;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
    return $returnValue676;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start682;
    panda$core$String$Index$nullable end685;
    panda$core$String* $returnValue688;
    panda$core$String* $tmp689;
    panda$core$String* $tmp690;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp691;
    memset(&start682, 0, sizeof(start682));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp683 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp684 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp683, ((panda$core$Int64) p_r.start.value));
        start682 = ((panda$core$String$Index$nullable) { $tmp684, true });
    }
    }
    else {
    {
        start682 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end685, 0, sizeof(end685));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp686 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp687 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp686, ((panda$core$Int64) p_r.end.value));
        end685 = ((panda$core$String$Index$nullable) { $tmp687, true });
    }
    }
    else {
    {
        end685 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp691, start682, end685, p_r.step, p_r.inclusive);
    panda$core$String* $tmp692 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp691);
    $tmp690 = $tmp692;
    $tmp689 = $tmp690;
    $returnValue688 = $tmp689;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
    return $returnValue688;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp694;
    panda$core$Bit $returnValue709;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp694, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp696 = $tmp694.min.value;
    panda$core$Int64 i695 = { $tmp696 };
    int64_t $tmp698 = $tmp694.max.value;
    bool $tmp699 = $tmp694.inclusive.value;
    if ($tmp699) goto $l706; else goto $l707;
    $l706:;
    if ($tmp696 <= $tmp698) goto $l700; else goto $l702;
    $l707:;
    if ($tmp696 < $tmp698) goto $l700; else goto $l702;
    $l700:;
    {
        panda$core$Bit $tmp708 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i695.value], p_c);
        if ($tmp708.value) {
        {
            $returnValue709 = ((panda$core$Bit) { true });
            return $returnValue709;
        }
        }
    }
    $l703:;
    int64_t $tmp712 = $tmp698 - i695.value;
    if ($tmp699) goto $l713; else goto $l714;
    $l713:;
    if ((uint64_t) $tmp712 >= 1) goto $l711; else goto $l702;
    $l714:;
    if ((uint64_t) $tmp712 > 1) goto $l711; else goto $l702;
    $l711:;
    i695.value += 1;
    goto $l700;
    $l702:;
    $returnValue709 = ((panda$core$Bit) { false });
    return $returnValue709;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue718;
    panda$core$String$Index$nullable $tmp719 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue718 = ((panda$core$Bit) { $tmp719.nonnull });
    return $returnValue718;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue721;
    panda$core$String$Index $tmp722 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp723 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp722);
    $returnValue721 = $tmp723;
    return $returnValue721;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue726;
    panda$core$Range$LTpanda$core$Int64$GT $tmp728;
    panda$core$Range$LTpanda$core$Int64$GT $tmp743;
    panda$core$String$Index $tmp765;
    panda$core$Bit $tmp725 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp725.value) {
    {
        $returnValue726 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue726;
    }
    }
    panda$core$Int64 $tmp729 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp728, p_start.value, $tmp729, ((panda$core$Bit) { true }));
    int64_t $tmp731 = $tmp728.min.value;
    panda$core$Int64 i730 = { $tmp731 };
    int64_t $tmp733 = $tmp728.max.value;
    bool $tmp734 = $tmp728.inclusive.value;
    if ($tmp734) goto $l741; else goto $l742;
    $l741:;
    if ($tmp731 <= $tmp733) goto $l735; else goto $l737;
    $l742:;
    if ($tmp731 < $tmp733) goto $l735; else goto $l737;
    $l735:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp743, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp745 = $tmp743.min.value;
        panda$core$Int64 j744 = { $tmp745 };
        int64_t $tmp747 = $tmp743.max.value;
        bool $tmp748 = $tmp743.inclusive.value;
        if ($tmp748) goto $l755; else goto $l756;
        $l755:;
        if ($tmp745 <= $tmp747) goto $l749; else goto $l751;
        $l756:;
        if ($tmp745 < $tmp747) goto $l749; else goto $l751;
        $l749:;
        {
            panda$core$Int64 $tmp757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i730, j744);
            panda$core$Bit $tmp758 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp757.value], p_s->data[j744.value]);
            if ($tmp758.value) {
            {
                goto $l738;
            }
            }
        }
        $l752:;
        int64_t $tmp760 = $tmp747 - j744.value;
        if ($tmp748) goto $l761; else goto $l762;
        $l761:;
        if ((uint64_t) $tmp760 >= 1) goto $l759; else goto $l751;
        $l762:;
        if ((uint64_t) $tmp760 > 1) goto $l759; else goto $l751;
        $l759:;
        j744.value += 1;
        goto $l749;
        $l751:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp765, i730);
        $returnValue726 = ((panda$core$String$Index$nullable) { $tmp765, true });
        return $returnValue726;
    }
    $l738:;
    int64_t $tmp768 = $tmp733 - i730.value;
    if ($tmp734) goto $l769; else goto $l770;
    $l769:;
    if ((uint64_t) $tmp768 >= 1) goto $l767; else goto $l737;
    $l770:;
    if ((uint64_t) $tmp768 > 1) goto $l767; else goto $l737;
    $l767:;
    i730.value += 1;
    goto $l735;
    $l737:;
    $returnValue726 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue726;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue774;
    panda$core$String$Index $tmp775 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp776 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp775);
    $returnValue774 = $tmp776;
    return $returnValue774;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue779;
    panda$core$Int64 startPos781;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp784;
    panda$core$Range$LTpanda$core$Int64$GT $tmp803;
    panda$core$String$Index $tmp825;
    panda$core$Bit $tmp778 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp778.value) {
    {
        $returnValue779 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue779;
    }
    }
    panda$core$Int64 $tmp782 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp783 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp782);
    startPos781 = $tmp783;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp784, startPos781, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp786 = $tmp784.start.value;
    panda$core$Int64 i785 = { $tmp786 };
    int64_t $tmp788 = $tmp784.end.value;
    int64_t $tmp789 = $tmp784.step.value;
    bool $tmp790 = $tmp784.inclusive.value;
    bool $tmp797 = $tmp789 > 0;
    if ($tmp797) goto $l795; else goto $l796;
    $l795:;
    if ($tmp790) goto $l798; else goto $l799;
    $l798:;
    if ($tmp786 <= $tmp788) goto $l791; else goto $l793;
    $l799:;
    if ($tmp786 < $tmp788) goto $l791; else goto $l793;
    $l796:;
    if ($tmp790) goto $l800; else goto $l801;
    $l800:;
    if ($tmp786 >= $tmp788) goto $l791; else goto $l793;
    $l801:;
    if ($tmp786 > $tmp788) goto $l791; else goto $l793;
    $l791:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp803, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp805 = $tmp803.min.value;
        panda$core$Int64 j804 = { $tmp805 };
        int64_t $tmp807 = $tmp803.max.value;
        bool $tmp808 = $tmp803.inclusive.value;
        if ($tmp808) goto $l815; else goto $l816;
        $l815:;
        if ($tmp805 <= $tmp807) goto $l809; else goto $l811;
        $l816:;
        if ($tmp805 < $tmp807) goto $l809; else goto $l811;
        $l809:;
        {
            panda$core$Int64 $tmp817 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i785, j804);
            panda$core$Bit $tmp818 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp817.value], p_s->data[j804.value]);
            if ($tmp818.value) {
            {
                goto $l794;
            }
            }
        }
        $l812:;
        int64_t $tmp820 = $tmp807 - j804.value;
        if ($tmp808) goto $l821; else goto $l822;
        $l821:;
        if ((uint64_t) $tmp820 >= 1) goto $l819; else goto $l811;
        $l822:;
        if ((uint64_t) $tmp820 > 1) goto $l819; else goto $l811;
        $l819:;
        j804.value += 1;
        goto $l809;
        $l811:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp825, i785);
        $returnValue779 = ((panda$core$String$Index$nullable) { $tmp825, true });
        return $returnValue779;
    }
    $l794:;
    if ($tmp797) goto $l828; else goto $l829;
    $l828:;
    int64_t $tmp830 = $tmp788 - i785.value;
    if ($tmp790) goto $l831; else goto $l832;
    $l831:;
    if ((uint64_t) $tmp830 >= $tmp789) goto $l827; else goto $l793;
    $l832:;
    if ((uint64_t) $tmp830 > $tmp789) goto $l827; else goto $l793;
    $l829:;
    int64_t $tmp834 = i785.value - $tmp788;
    if ($tmp790) goto $l835; else goto $l836;
    $l835:;
    if ((uint64_t) $tmp834 >= -$tmp789) goto $l827; else goto $l793;
    $l836:;
    if ((uint64_t) $tmp834 > -$tmp789) goto $l827; else goto $l793;
    $l827:;
    i785.value += $tmp789;
    goto $l791;
    $l793:;
    $returnValue779 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue779;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue839;
    panda$core$Matcher* $tmp840;
    panda$core$Bit $tmp842;
    panda$core$Matcher* $tmp841 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp840 = $tmp841;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp842, $tmp840);
    $returnValue839 = $tmp842;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
    return $returnValue839;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue844;
    panda$core$Matcher* $tmp845;
    panda$core$Matcher* $tmp846 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp845 = $tmp846;
    panda$core$Bit $tmp847 = panda$core$Matcher$find$R$panda$core$Bit($tmp845);
    $returnValue844 = $tmp847;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
    return $returnValue844;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher852 = NULL;
    panda$core$Matcher* $tmp853;
    panda$core$Matcher* $tmp854;
    panda$core$Bit $tmp856;
    panda$collections$Array* result860 = NULL;
    panda$collections$Array* $tmp861;
    panda$collections$Array* $tmp862;
    panda$core$Range$LTpanda$core$Int64$GT $tmp864;
    panda$core$Int64 $tmp865;
    panda$core$String* $tmp879;
    panda$collections$ListView* $returnValue887;
    panda$collections$ListView* $tmp888;
    panda$collections$ListView* $tmp893;
    int $tmp851;
    {
        panda$core$Matcher* $tmp855 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp854 = $tmp855;
        $tmp853 = $tmp854;
        matcher852 = $tmp853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp856, matcher852);
        if ($tmp856.value) {
        {
            int $tmp859;
            {
                panda$collections$Array* $tmp863 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp863);
                $tmp862 = $tmp863;
                $tmp861 = $tmp862;
                result860 = $tmp861;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp861));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp865, matcher852);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp864, ((panda$core$Int64) { 1 }), $tmp865, ((panda$core$Bit) { false }));
                int64_t $tmp867 = $tmp864.min.value;
                panda$core$Int64 i866 = { $tmp867 };
                int64_t $tmp869 = $tmp864.max.value;
                bool $tmp870 = $tmp864.inclusive.value;
                if ($tmp870) goto $l877; else goto $l878;
                $l877:;
                if ($tmp867 <= $tmp869) goto $l871; else goto $l873;
                $l878:;
                if ($tmp867 < $tmp869) goto $l871; else goto $l873;
                $l871:;
                {
                    panda$core$String* $tmp880 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher852, i866);
                    $tmp879 = $tmp880;
                    panda$collections$Array$add$panda$collections$Array$T(result860, ((panda$core$Object*) $tmp879));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                }
                $l874:;
                int64_t $tmp882 = $tmp869 - i866.value;
                if ($tmp870) goto $l883; else goto $l884;
                $l883:;
                if ((uint64_t) $tmp882 >= 1) goto $l881; else goto $l873;
                $l884:;
                if ((uint64_t) $tmp882 > 1) goto $l881; else goto $l873;
                $l881:;
                i866.value += 1;
                goto $l871;
                $l873:;
                $tmp888 = ((panda$collections$ListView*) result860);
                $returnValue887 = $tmp888;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp888));
                $tmp859 = 0;
                goto $l857;
                $l889:;
                $tmp851 = 0;
                goto $l849;
                $l890:;
                return $returnValue887;
            }
            $l857:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result860));
            result860 = NULL;
            switch ($tmp859) {
                case 0: goto $l889;
            }
            $l892:;
        }
        }
        $tmp893 = NULL;
        $returnValue887 = $tmp893;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
        $tmp851 = 1;
        goto $l849;
        $l894:;
        return $returnValue887;
    }
    $l849:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher852));
    matcher852 = NULL;
    switch ($tmp851) {
        case 1: goto $l894;
        case 0: goto $l890;
    }
    $l896:;
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue902;
    panda$core$String* $tmp903;
    panda$core$MutableString* result906 = NULL;
    panda$core$MutableString* $tmp907;
    panda$core$MutableString* $tmp908;
    panda$core$String$Index index910;
    panda$core$String$Index$nullable nextIndex914;
    panda$core$String* $tmp916;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp917;
    panda$core$String* $tmp919;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp920;
    panda$core$String$Index $tmp922;
    panda$core$String* $tmp924;
    panda$core$String* $tmp925;
    int $tmp899;
    {
        panda$core$Bit $tmp901 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s900);
        if ($tmp901.value) {
        {
            $tmp903 = self;
            $returnValue902 = $tmp903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp903));
            $tmp899 = 0;
            goto $l897;
            $l904:;
            return $returnValue902;
        }
        }
        panda$core$MutableString* $tmp909 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp909);
        $tmp908 = $tmp909;
        $tmp907 = $tmp908;
        result906 = $tmp907;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp907));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
        panda$core$String$Index $tmp911 = panda$core$String$start$R$panda$core$String$Index(self);
        index910 = $tmp911;
        $l912:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp915 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index910);
            nextIndex914 = $tmp915;
            if (((panda$core$Bit) { !nextIndex914.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp917, ((panda$core$String$Index$nullable) { index910, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp918 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp917);
                $tmp916 = $tmp918;
                panda$core$MutableString$append$panda$core$String(result906, $tmp916);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                goto $l913;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp920, index910, ((panda$core$String$Index) nextIndex914.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp921 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp920);
            $tmp919 = $tmp921;
            panda$core$MutableString$append$panda$core$String(result906, $tmp919);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
            panda$core$MutableString$append$panda$core$String(result906, p_replacement);
            panda$core$Int64 $tmp923 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex914.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp922, $tmp923);
            index910 = $tmp922;
        }
        }
        $l913:;
        panda$core$String* $tmp926 = panda$core$MutableString$finish$R$panda$core$String(result906);
        $tmp925 = $tmp926;
        $tmp924 = $tmp925;
        $returnValue902 = $tmp924;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
        $tmp899 = 1;
        goto $l897;
        $l927:;
        return $returnValue902;
    }
    $l897:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result906));
    result906 = NULL;
    switch ($tmp899) {
        case 1: goto $l927;
        case 0: goto $l904;
    }
    $l929:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result933 = NULL;
    panda$core$MutableString* $tmp934;
    panda$core$MutableString* $tmp935;
    panda$core$Matcher* matcher937 = NULL;
    panda$core$Matcher* $tmp938;
    panda$core$Matcher* $tmp939;
    panda$core$String* $returnValue945;
    panda$core$String* $tmp946;
    panda$core$String* $tmp947;
    int $tmp932;
    {
        panda$core$MutableString* $tmp936 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp936);
        $tmp935 = $tmp936;
        $tmp934 = $tmp935;
        result933 = $tmp934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
        panda$core$Matcher* $tmp940 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp939 = $tmp940;
        $tmp938 = $tmp939;
        matcher937 = $tmp938;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
        $l941:;
        panda$core$Bit $tmp944 = panda$core$Matcher$find$R$panda$core$Bit(matcher937);
        bool $tmp943 = $tmp944.value;
        if (!$tmp943) goto $l942;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(matcher937, result933, p_replacement);
        }
        goto $l941;
        $l942:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher937, result933);
        panda$core$String* $tmp948 = panda$core$MutableString$finish$R$panda$core$String(result933);
        $tmp947 = $tmp948;
        $tmp946 = $tmp947;
        $returnValue945 = $tmp946;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
        $tmp932 = 0;
        goto $l930;
        $l949:;
        return $returnValue945;
    }
    $l930:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher937));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result933));
    result933 = NULL;
    matcher937 = NULL;
    switch ($tmp932) {
        case 0: goto $l949;
    }
    $l951:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result955 = NULL;
    panda$core$MutableString* $tmp956;
    panda$core$MutableString* $tmp957;
    panda$core$Matcher* matcher959 = NULL;
    panda$core$Matcher* $tmp960;
    panda$core$Matcher* $tmp961;
    panda$core$String* $tmp967;
    panda$core$Object* $tmp968;
    panda$core$String* $tmp969;
    panda$core$Object* $tmp971;
    panda$core$String* $returnValue976;
    panda$core$String* $tmp977;
    panda$core$String* $tmp978;
    int $tmp954;
    {
        panda$core$MutableString* $tmp958 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp958);
        $tmp957 = $tmp958;
        $tmp956 = $tmp957;
        result955 = $tmp956;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
        panda$core$Matcher* $tmp962 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp961 = $tmp962;
        $tmp960 = $tmp961;
        matcher959 = $tmp960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
        $l963:;
        panda$core$Bit $tmp966 = panda$core$Matcher$find$R$panda$core$Bit(matcher959);
        bool $tmp965 = $tmp966.value;
        if (!$tmp965) goto $l964;
        {
            panda$core$String* $tmp970 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher959, ((panda$core$Int64) { 0 }));
            $tmp969 = $tmp970;
            if (p_replacement->target) {
                $tmp971 = (($fn972) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp969);
            } else {
                $tmp971 = (($fn973) p_replacement->pointer)($tmp969);
            }
            $tmp968 = $tmp971;
            panda$core$String* $tmp975 = (($fn974) $tmp968->$class->vtable[0])($tmp968);
            $tmp967 = $tmp975;
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher959, result955, $tmp967, ((panda$core$Bit) { false }));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
            panda$core$Panda$unref$panda$core$Object($tmp968);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
        }
        goto $l963;
        $l964:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher959, result955);
        panda$core$String* $tmp979 = panda$core$MutableString$convert$R$panda$core$String(result955);
        $tmp978 = $tmp979;
        $tmp977 = $tmp978;
        $returnValue976 = $tmp977;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
        $tmp954 = 0;
        goto $l952;
        $l980:;
        return $returnValue976;
    }
    $l952:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher959));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result955));
    result955 = NULL;
    matcher959 = NULL;
    switch ($tmp954) {
        case 0: goto $l980;
    }
    $l982:;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result986 = NULL;
    panda$core$MutableString* $tmp987;
    panda$core$MutableString* $tmp988;
    panda$core$Matcher* matcher990 = NULL;
    panda$core$Matcher* $tmp991;
    panda$core$Matcher* $tmp992;
    panda$collections$Array* groups1001 = NULL;
    panda$collections$Array* $tmp1002;
    panda$collections$Array* $tmp1003;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1005;
    panda$core$Int64 $tmp1006;
    panda$core$String* $tmp1020;
    panda$core$String* $tmp1028;
    panda$core$Object* $tmp1029;
    panda$core$Object* $tmp1030;
    panda$core$String* $returnValue1036;
    panda$core$String* $tmp1037;
    panda$core$String* $tmp1038;
    int $tmp985;
    {
        panda$core$MutableString* $tmp989 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp989);
        $tmp988 = $tmp989;
        $tmp987 = $tmp988;
        result986 = $tmp987;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
        panda$core$Matcher* $tmp993 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp992 = $tmp993;
        $tmp991 = $tmp992;
        matcher990 = $tmp991;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp991));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
        $l994:;
        panda$core$Bit $tmp997 = panda$core$Matcher$find$R$panda$core$Bit(matcher990);
        bool $tmp996 = $tmp997.value;
        if (!$tmp996) goto $l995;
        {
            int $tmp1000;
            {
                panda$collections$Array* $tmp1004 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1004);
                $tmp1003 = $tmp1004;
                $tmp1002 = $tmp1003;
                groups1001 = $tmp1002;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1006, matcher990);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1005, ((panda$core$Int64) { 0 }), $tmp1006, ((panda$core$Bit) { false }));
                int64_t $tmp1008 = $tmp1005.min.value;
                panda$core$Int64 i1007 = { $tmp1008 };
                int64_t $tmp1010 = $tmp1005.max.value;
                bool $tmp1011 = $tmp1005.inclusive.value;
                if ($tmp1011) goto $l1018; else goto $l1019;
                $l1018:;
                if ($tmp1008 <= $tmp1010) goto $l1012; else goto $l1014;
                $l1019:;
                if ($tmp1008 < $tmp1010) goto $l1012; else goto $l1014;
                $l1012:;
                {
                    panda$core$String* $tmp1021 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher990, i1007);
                    $tmp1020 = $tmp1021;
                    panda$collections$Array$add$panda$collections$Array$T(groups1001, ((panda$core$Object*) $tmp1020));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
                }
                $l1015:;
                int64_t $tmp1023 = $tmp1010 - i1007.value;
                if ($tmp1011) goto $l1024; else goto $l1025;
                $l1024:;
                if ((uint64_t) $tmp1023 >= 1) goto $l1022; else goto $l1014;
                $l1025:;
                if ((uint64_t) $tmp1023 > 1) goto $l1022; else goto $l1014;
                $l1022:;
                i1007.value += 1;
                goto $l1012;
                $l1014:;
                if (p_replacement->target) {
                    $tmp1030 = (($fn1031) p_replacement->pointer)(((panda$collections$ListView*) p_replacement->target), ((panda$collections$ListView*) groups1001));
                } else {
                    $tmp1030 = (($fn1032) p_replacement->pointer)(((panda$collections$ListView*) groups1001));
                }
                $tmp1029 = $tmp1030;
                panda$core$String* $tmp1034 = (($fn1033) $tmp1029->$class->vtable[0])($tmp1029);
                $tmp1028 = $tmp1034;
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher990, result986, $tmp1028, ((panda$core$Bit) { false }));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                panda$core$Panda$unref$panda$core$Object($tmp1029);
            }
            $tmp1000 = -1;
            goto $l998;
            $l998:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1001));
            groups1001 = NULL;
            switch ($tmp1000) {
                case -1: goto $l1035;
            }
            $l1035:;
        }
        goto $l994;
        $l995:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher990, result986);
        panda$core$String* $tmp1039 = panda$core$MutableString$convert$R$panda$core$String(result986);
        $tmp1038 = $tmp1039;
        $tmp1037 = $tmp1038;
        $returnValue1036 = $tmp1037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
        $tmp985 = 0;
        goto $l983;
        $l1040:;
        return $returnValue1036;
    }
    $l983:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher990));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result986));
    result986 = NULL;
    matcher990 = NULL;
    switch ($tmp985) {
        case 0: goto $l1040;
    }
    $l1042:;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$Char32$R$panda$core$Int64(panda$core$String* self, panda$core$Char32 p_needle) {
    panda$core$Int64 count1043;
    panda$collections$Iterator* Iter$987$91047 = NULL;
    panda$collections$Iterator* $tmp1048;
    panda$collections$Iterator* $tmp1049;
    panda$core$Char32 c1062;
    panda$core$Object* $tmp1063;
    panda$core$Int64 $returnValue1071;
    count1043 = ((panda$core$Int64) { 0 });
    {
        int $tmp1046;
        {
            ITable* $tmp1050 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1050 = $tmp1050->next;
            }
            $fn1052 $tmp1051 = $tmp1050->methods[0];
            panda$collections$Iterator* $tmp1053 = $tmp1051(((panda$collections$Iterable*) self));
            $tmp1049 = $tmp1053;
            $tmp1048 = $tmp1049;
            Iter$987$91047 = $tmp1048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
            $l1054:;
            ITable* $tmp1057 = Iter$987$91047->$class->itable;
            while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1057 = $tmp1057->next;
            }
            $fn1059 $tmp1058 = $tmp1057->methods[0];
            panda$core$Bit $tmp1060 = $tmp1058(Iter$987$91047);
            panda$core$Bit $tmp1061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1060);
            bool $tmp1056 = $tmp1061.value;
            if (!$tmp1056) goto $l1055;
            {
                ITable* $tmp1064 = Iter$987$91047->$class->itable;
                while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1064 = $tmp1064->next;
                }
                $fn1066 $tmp1065 = $tmp1064->methods[1];
                panda$core$Object* $tmp1067 = $tmp1065(Iter$987$91047);
                $tmp1063 = $tmp1067;
                c1062 = ((panda$core$Char32$wrapper*) $tmp1063)->value;
                panda$core$Panda$unref$panda$core$Object($tmp1063);
                panda$core$Bit $tmp1068 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c1062, p_needle);
                if ($tmp1068.value) {
                {
                    panda$core$Int64 $tmp1069 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count1043, ((panda$core$Int64) { 1 }));
                    count1043 = $tmp1069;
                }
                }
            }
            goto $l1054;
            $l1055:;
        }
        $tmp1046 = -1;
        goto $l1044;
        $l1044:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$987$91047));
        Iter$987$91047 = NULL;
        switch ($tmp1046) {
            case -1: goto $l1070;
        }
        $l1070:;
    }
    $returnValue1071 = count1043;
    return $returnValue1071;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$String$R$panda$core$Int64(panda$core$String* self, panda$core$String* p_needle) {
    panda$core$Int64 $returnValue1073;
    panda$core$Int64 $tmp1074 = panda$core$String$matchCount$panda$core$String$panda$core$Bit$R$panda$core$Int64(self, p_needle, ((panda$core$Bit) { false }));
    $returnValue1073 = $tmp1074;
    return $returnValue1073;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$String$panda$core$Bit$R$panda$core$Int64(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$core$Int64 count1076;
    panda$core$String$Index$nullable i1077;
    panda$core$Int64 needleLength1079;
    panda$core$Int64 $returnValue1091;
    count1076 = ((panda$core$Int64) { 0 });
    panda$core$String$Index $tmp1078 = panda$core$String$start$R$panda$core$String$Index(self);
    i1077 = ((panda$core$String$Index$nullable) { $tmp1078, true });
    panda$core$Int64 $tmp1080 = panda$core$String$length$R$panda$core$Int64(p_needle);
    needleLength1079 = $tmp1080;
    $l1081:;
    panda$core$String$Index $tmp1084 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$Bit $tmp1085 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(((panda$core$String$Index) i1077.value), $tmp1084);
    bool $tmp1083 = $tmp1085.value;
    if (!$tmp1083) goto $l1082;
    {
        panda$core$String$Index$nullable $tmp1086 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_needle, ((panda$core$String$Index) i1077.value));
        i1077 = $tmp1086;
        if (((panda$core$Bit) { !i1077.nonnull }).value) {
        {
            goto $l1082;
        }
        }
        panda$core$Int64 $tmp1087 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count1076, ((panda$core$Int64) { 1 }));
        count1076 = $tmp1087;
        if (p_overlapping.value) {
        {
            panda$core$String$Index $tmp1088 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, ((panda$core$String$Index) i1077.value));
            i1077 = ((panda$core$String$Index$nullable) { $tmp1088, true });
        }
        }
        else {
        {
            panda$core$Int64 $tmp1089 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(needleLength1079, ((panda$core$Int64) { 1 }));
            panda$core$String$Index $tmp1090 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) i1077.value), $tmp1089);
            i1077 = ((panda$core$String$Index$nullable) { $tmp1090, true });
        }
        }
    }
    goto $l1081;
    $l1082:;
    $returnValue1091 = count1076;
    return $returnValue1091;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$RegularExpression$R$panda$core$Int64(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Int64 $returnValue1093;
    panda$core$Int64 $tmp1094 = panda$core$String$matchCount$panda$core$RegularExpression$panda$core$Bit$R$panda$core$Int64(self, p_needle, ((panda$core$Bit) { false }));
    $returnValue1093 = $tmp1094;
    return $returnValue1093;
}
panda$core$Int64 panda$core$String$matchCount$panda$core$RegularExpression$panda$core$Bit$R$panda$core$Int64(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$core$Int64 count1099;
    panda$core$String$Index i1100;
    panda$core$Matcher* matcher1102 = NULL;
    panda$core$Matcher* $tmp1103;
    panda$core$Matcher* $tmp1104;
    panda$core$String$Index $tmp1116;
    panda$core$String$Index matchEnd1118;
    panda$core$String$Index $tmp1119;
    panda$core$Int64 $returnValue1122;
    int $tmp1098;
    {
        count1099 = ((panda$core$Int64) { 0 });
        panda$core$String$Index $tmp1101 = panda$core$String$start$R$panda$core$String$Index(self);
        i1100 = $tmp1101;
        panda$core$Matcher* $tmp1105 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
        $tmp1104 = $tmp1105;
        $tmp1103 = $tmp1104;
        matcher1102 = $tmp1103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
        $l1106:;
        panda$core$String$Index $tmp1110 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$Bit $tmp1111 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(i1100, $tmp1110);
        bool $tmp1109 = $tmp1111.value;
        if (!$tmp1109) goto $l1112;
        panda$core$Bit $tmp1113 = panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(matcher1102, i1100);
        $tmp1109 = $tmp1113.value;
        $l1112:;
        panda$core$Bit $tmp1114 = { $tmp1109 };
        bool $tmp1108 = $tmp1114.value;
        if (!$tmp1108) goto $l1107;
        {
            panda$core$Int64 $tmp1115 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count1099, ((panda$core$Int64) { 1 }));
            count1099 = $tmp1115;
            if (p_overlapping.value) {
            {
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1116, matcher1102);
                panda$core$String$Index $tmp1117 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp1116);
                i1100 = $tmp1117;
            }
            }
            else {
            {
                panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1119, matcher1102);
                matchEnd1118 = $tmp1119;
                panda$core$Bit $tmp1120 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(i1100, matchEnd1118);
                if ($tmp1120.value) {
                {
                    i1100 = matchEnd1118;
                }
                }
                else {
                {
                    panda$core$String$Index $tmp1121 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, i1100);
                    i1100 = $tmp1121;
                }
                }
            }
            }
        }
        goto $l1106;
        $l1107:;
        $returnValue1122 = count1099;
        $tmp1098 = 0;
        goto $l1096;
        $l1123:;
        return $returnValue1122;
    }
    $l1096:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1102));
    matcher1102 = NULL;
    switch ($tmp1098) {
        case 0: goto $l1123;
    }
    $l1125:;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1126;
    panda$core$String$Index $tmp1127;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1127, ((panda$core$Int64) { 0 }));
    $returnValue1126 = $tmp1127;
    return $returnValue1126;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1129;
    panda$core$String$Index $tmp1130;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1130, self->_length);
    $returnValue1129 = $tmp1130;
    return $returnValue1129;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1133;
    panda$core$String$Index $returnValue1136;
    panda$core$String$Index $tmp1137;
    panda$core$String$Index $tmp1141;
    panda$core$String$Index $tmp1145;
    panda$core$String$Index $tmp1148;
    panda$core$Bit $tmp1132 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp1132.value);
    int64_t $tmp1134 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1133 = $tmp1134;
    bool $tmp1135 = c1133 >= 240;
    if (((panda$core$Bit) { $tmp1135 }).value) {
    {
        panda$core$Int64 $tmp1138 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1137, $tmp1138);
        $returnValue1136 = $tmp1137;
        return $returnValue1136;
    }
    }
    bool $tmp1140 = c1133 >= 224;
    if (((panda$core$Bit) { $tmp1140 }).value) {
    {
        panda$core$Int64 $tmp1142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1141, $tmp1142);
        $returnValue1136 = $tmp1141;
        return $returnValue1136;
    }
    }
    bool $tmp1144 = c1133 >= 192;
    if (((panda$core$Bit) { $tmp1144 }).value) {
    {
        panda$core$Int64 $tmp1146 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1145, $tmp1146);
        $returnValue1136 = $tmp1145;
        return $returnValue1136;
    }
    }
    panda$core$Int64 $tmp1149 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp1148, $tmp1149);
    $returnValue1136 = $tmp1148;
    return $returnValue1136;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue1152;
    panda$core$String$Index $returnValue1164;
    panda$core$String$Index $tmp1165;
    panda$core$Bit $tmp1151 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1151.value);
    panda$core$Int64 $tmp1153 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue1152 = $tmp1153;
    $l1154:;
    int64_t $tmp1158 = ((int64_t) self->data[newValue1152.value].value) & 255;
    bool $tmp1159 = $tmp1158 >= 128;
    bool $tmp1157 = $tmp1159;
    if (!$tmp1157) goto $l1160;
    int64_t $tmp1161 = ((int64_t) self->data[newValue1152.value].value) & 255;
    bool $tmp1162 = $tmp1161 < 192;
    $tmp1157 = $tmp1162;
    $l1160:;
    bool $tmp1156 = ((panda$core$Bit) { $tmp1157 }).value;
    if (!$tmp1156) goto $l1155;
    {
        panda$core$Int64 $tmp1163 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1152, ((panda$core$Int64) { 1 }));
        newValue1152 = $tmp1163;
    }
    goto $l1154;
    $l1155:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1165, newValue1152);
    $returnValue1164 = $tmp1165;
    return $returnValue1164;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1167;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1169;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1190;
    panda$core$String$Index $returnValue1221;
    result1167 = p_index;
    panda$core$Bit $tmp1168 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp1168.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1169, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp1171 = $tmp1169.min.value;
        panda$core$Int64 i1170 = { $tmp1171 };
        int64_t $tmp1173 = $tmp1169.max.value;
        bool $tmp1174 = $tmp1169.inclusive.value;
        if ($tmp1174) goto $l1181; else goto $l1182;
        $l1181:;
        if ($tmp1171 <= $tmp1173) goto $l1175; else goto $l1177;
        $l1182:;
        if ($tmp1171 < $tmp1173) goto $l1175; else goto $l1177;
        $l1175:;
        {
            panda$core$String$Index $tmp1183 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1167);
            result1167 = $tmp1183;
        }
        $l1178:;
        int64_t $tmp1185 = $tmp1173 - i1170.value;
        if ($tmp1174) goto $l1186; else goto $l1187;
        $l1186:;
        if ((uint64_t) $tmp1185 >= 1) goto $l1184; else goto $l1177;
        $l1187:;
        if ((uint64_t) $tmp1185 > 1) goto $l1184; else goto $l1177;
        $l1184:;
        i1170.value += 1;
        goto $l1175;
        $l1177:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1190, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp1192 = $tmp1190.start.value;
        panda$core$Int64 i1191 = { $tmp1192 };
        int64_t $tmp1194 = $tmp1190.end.value;
        int64_t $tmp1195 = $tmp1190.step.value;
        bool $tmp1196 = $tmp1190.inclusive.value;
        bool $tmp1203 = $tmp1195 > 0;
        if ($tmp1203) goto $l1201; else goto $l1202;
        $l1201:;
        if ($tmp1196) goto $l1204; else goto $l1205;
        $l1204:;
        if ($tmp1192 <= $tmp1194) goto $l1197; else goto $l1199;
        $l1205:;
        if ($tmp1192 < $tmp1194) goto $l1197; else goto $l1199;
        $l1202:;
        if ($tmp1196) goto $l1206; else goto $l1207;
        $l1206:;
        if ($tmp1192 >= $tmp1194) goto $l1197; else goto $l1199;
        $l1207:;
        if ($tmp1192 > $tmp1194) goto $l1197; else goto $l1199;
        $l1197:;
        {
            panda$core$String$Index $tmp1209 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1167);
            result1167 = $tmp1209;
        }
        $l1200:;
        if ($tmp1203) goto $l1211; else goto $l1212;
        $l1211:;
        int64_t $tmp1213 = $tmp1194 - i1191.value;
        if ($tmp1196) goto $l1214; else goto $l1215;
        $l1214:;
        if ((uint64_t) $tmp1213 >= $tmp1195) goto $l1210; else goto $l1199;
        $l1215:;
        if ((uint64_t) $tmp1213 > $tmp1195) goto $l1210; else goto $l1199;
        $l1212:;
        int64_t $tmp1217 = i1191.value - $tmp1194;
        if ($tmp1196) goto $l1218; else goto $l1219;
        $l1218:;
        if ((uint64_t) $tmp1217 >= -$tmp1195) goto $l1210; else goto $l1199;
        $l1219:;
        if ((uint64_t) $tmp1217 > -$tmp1195) goto $l1210; else goto $l1199;
        $l1210:;
        i1191.value += $tmp1195;
        goto $l1197;
        $l1199:;
    }
    }
    $returnValue1221 = result1167;
    return $returnValue1221;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1223;
    panda$core$String* $tmp1224;
    panda$core$String* $tmp1225;
    panda$core$Char32 $tmp1226;
    panda$core$Char32$init$panda$core$Int32(&$tmp1226, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1227 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1226);
    $tmp1225 = $tmp1227;
    $tmp1224 = $tmp1225;
    $returnValue1223 = $tmp1224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1225));
    return $returnValue1223;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1231;
    panda$core$String* $tmp1232;
    panda$core$String* $tmp1234;
    panda$core$String* $tmp1235;
    panda$core$String* $tmp1236;
    panda$core$Int64 $tmp1229 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1230 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1229, p_width);
    if ($tmp1230.value) {
    {
        $tmp1232 = self;
        $returnValue1231 = $tmp1232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1232));
        return $returnValue1231;
    }
    }
    panda$core$Int64 $tmp1237 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1237);
    panda$core$String* $tmp1239 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1238);
    $tmp1236 = $tmp1239;
    panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1236);
    $tmp1235 = $tmp1240;
    $tmp1234 = $tmp1235;
    $returnValue1231 = $tmp1234;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1234));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
    return $returnValue1231;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1242;
    panda$core$String* $tmp1243;
    panda$core$String* $tmp1244;
    panda$core$Char32 $tmp1245;
    panda$core$Char32$init$panda$core$Int32(&$tmp1245, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1246 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1245);
    $tmp1244 = $tmp1246;
    $tmp1243 = $tmp1244;
    $returnValue1242 = $tmp1243;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
    return $returnValue1242;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1250;
    panda$core$String* $tmp1251;
    panda$core$String* $tmp1253;
    panda$core$String* $tmp1254;
    panda$core$String* $tmp1255;
    panda$core$Int64 $tmp1248 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1249 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1248, p_width);
    if ($tmp1249.value) {
    {
        $tmp1251 = self;
        $returnValue1250 = $tmp1251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
        return $returnValue1250;
    }
    }
    panda$core$Int64 $tmp1256 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1256);
    panda$core$String* $tmp1258 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1257);
    $tmp1255 = $tmp1258;
    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1255, self);
    $tmp1254 = $tmp1259;
    $tmp1253 = $tmp1254;
    $returnValue1250 = $tmp1253;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
    return $returnValue1250;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1261;
    panda$core$String* $tmp1262;
    panda$core$String* $tmp1263;
    panda$core$Char32 $tmp1264;
    panda$core$Char32$init$panda$core$Int32(&$tmp1264, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1265 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1264);
    $tmp1263 = $tmp1265;
    $tmp1262 = $tmp1263;
    $returnValue1261 = $tmp1262;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
    return $returnValue1261;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1269;
    panda$core$String* $tmp1270;
    panda$core$Int64 pad1272;
    panda$core$Int64 left1275;
    panda$core$Int64 right1277;
    panda$core$String* $tmp1279;
    panda$core$String* $tmp1280;
    panda$core$String* $tmp1281;
    panda$core$String* $tmp1282;
    panda$core$String* $tmp1285;
    panda$core$Int64 $tmp1267 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1268 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1267, p_width);
    if ($tmp1268.value) {
    {
        $tmp1270 = self;
        $returnValue1269 = $tmp1270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1270));
        return $returnValue1269;
    }
    }
    panda$core$Int64 $tmp1273 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1273);
    pad1272 = $tmp1274;
    panda$core$Int64 $tmp1276 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1272, ((panda$core$Int64) { 2 }));
    left1275 = $tmp1276;
    panda$core$Int64 $tmp1278 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1272, left1275);
    right1277 = $tmp1278;
    panda$core$String* $tmp1283 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1275);
    $tmp1282 = $tmp1283;
    panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, self);
    $tmp1281 = $tmp1284;
    panda$core$String* $tmp1286 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1277);
    $tmp1285 = $tmp1286;
    panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, $tmp1285);
    $tmp1280 = $tmp1287;
    $tmp1279 = $tmp1280;
    $returnValue1269 = $tmp1279;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
    return $returnValue1269;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1289;
    panda$collections$Array* $tmp1290;
    panda$collections$Array* $tmp1291;
    panda$collections$Array* $tmp1292 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1291 = $tmp1292;
    $tmp1290 = $tmp1291;
    $returnValue1289 = $tmp1290;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1290));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
    return $returnValue1289;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1297 = NULL;
    panda$collections$Array* $tmp1298;
    panda$collections$Array* $tmp1299;
    panda$core$String$Index index1301;
    panda$core$String$Index$nullable nextIndex1305;
    panda$core$String* $tmp1314;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1315;
    panda$core$String* $tmp1317;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1318;
    panda$core$String$Index $tmp1320;
    panda$collections$Array* $returnValue1322;
    panda$collections$Array* $tmp1323;
    int $tmp1296;
    {
        panda$collections$Array* $tmp1300 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1300);
        $tmp1299 = $tmp1300;
        $tmp1298 = $tmp1299;
        result1297 = $tmp1298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
        panda$core$String$Index $tmp1302 = panda$core$String$start$R$panda$core$String$Index(self);
        index1301 = $tmp1302;
        $l1303:;
        while (true) {
        {
            memset(&nextIndex1305, 0, sizeof(nextIndex1305));
            panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1306.value) {
            {
                panda$core$String$Index $tmp1307 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1301);
                nextIndex1305 = ((panda$core$String$Index$nullable) { $tmp1307, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1308 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1301);
                nextIndex1305 = $tmp1308;
            }
            }
            bool $tmp1309 = ((panda$core$Bit) { !nextIndex1305.nonnull }).value;
            if ($tmp1309) goto $l1310;
            panda$core$Int64 $tmp1311 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1297->count, $tmp1311);
            $tmp1309 = $tmp1312.value;
            $l1310:;
            panda$core$Bit $tmp1313 = { $tmp1309 };
            if ($tmp1313.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1315, ((panda$core$String$Index$nullable) { index1301, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1316 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1315);
                $tmp1314 = $tmp1316;
                panda$collections$Array$add$panda$collections$Array$T(result1297, ((panda$core$Object*) $tmp1314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1314));
                goto $l1304;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1318, index1301, ((panda$core$String$Index) nextIndex1305.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1319 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1318);
            $tmp1317 = $tmp1319;
            panda$collections$Array$add$panda$collections$Array$T(result1297, ((panda$core$Object*) $tmp1317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
            panda$core$Int64 $tmp1321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1305.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1320, $tmp1321);
            index1301 = $tmp1320;
        }
        }
        $l1304:;
        $tmp1323 = result1297;
        $returnValue1322 = $tmp1323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
        $tmp1296 = 0;
        goto $l1294;
        $l1324:;
        return $returnValue1322;
    }
    $l1294:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1297));
    result1297 = NULL;
    switch ($tmp1296) {
        case 0: goto $l1324;
    }
    $l1326:;
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1331 = NULL;
    panda$collections$Array* $tmp1332;
    panda$collections$Array* $tmp1333;
    panda$core$Matcher* matcher1335 = NULL;
    panda$core$Matcher* $tmp1336;
    panda$core$Matcher* $tmp1337;
    panda$core$String$Index index1339;
    panda$core$Bit found1343;
    panda$core$String* $tmp1351;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1352;
    panda$core$String$Index start1354;
    panda$core$String$Index $tmp1355;
    panda$core$String* $tmp1356;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1357;
    panda$core$String$Index $tmp1359;
    panda$core$String$Index $tmp1360;
    panda$collections$ListView* $returnValue1362;
    panda$collections$ListView* $tmp1363;
    panda$core$Bit $tmp1327 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1327.value);
    int $tmp1330;
    {
        panda$collections$Array* $tmp1334 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1334);
        $tmp1333 = $tmp1334;
        $tmp1332 = $tmp1333;
        result1331 = $tmp1332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
        panda$core$Matcher* $tmp1338 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1337 = $tmp1338;
        $tmp1336 = $tmp1337;
        matcher1335 = $tmp1336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1337));
        panda$core$String$Index $tmp1340 = panda$core$String$start$R$panda$core$String$Index(self);
        index1339 = $tmp1340;
        $l1341:;
        while (true) {
        {
            panda$core$Bit $tmp1344 = panda$core$Matcher$find$R$panda$core$Bit(matcher1335);
            found1343 = $tmp1344;
            panda$core$Bit $tmp1346 = panda$core$Bit$$NOT$R$panda$core$Bit(found1343);
            bool $tmp1345 = $tmp1346.value;
            if ($tmp1345) goto $l1347;
            panda$core$Int64 $tmp1348 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1331->count, $tmp1348);
            $tmp1345 = $tmp1349.value;
            $l1347:;
            panda$core$Bit $tmp1350 = { $tmp1345 };
            if ($tmp1350.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1352, ((panda$core$String$Index$nullable) { index1339, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1353 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1352);
                $tmp1351 = $tmp1353;
                panda$collections$Array$add$panda$collections$Array$T(result1331, ((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                goto $l1342;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1355, matcher1335);
            start1354 = $tmp1355;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1357, index1339, start1354, ((panda$core$Bit) { false }));
            panda$core$String* $tmp1358 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1357);
            $tmp1356 = $tmp1358;
            panda$collections$Array$add$panda$collections$Array$T(result1331, ((panda$core$Object*) $tmp1356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1360, matcher1335);
            panda$core$Int64 $tmp1361 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1354.value, $tmp1360.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1359, $tmp1361);
            index1339 = $tmp1359;
        }
        }
        $l1342:;
        $tmp1363 = ((panda$collections$ListView*) result1331);
        $returnValue1362 = $tmp1363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1363));
        $tmp1330 = 0;
        goto $l1328;
        $l1364:;
        return $returnValue1362;
    }
    $l1328:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1335));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1331));
    result1331 = NULL;
    matcher1335 = NULL;
    switch ($tmp1330) {
        case 0: goto $l1364;
    }
    $l1366:;
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1367;
    panda$collections$ListView* $tmp1368;
    panda$collections$ListView* $tmp1369;
    panda$collections$ListView* $tmp1370 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1369 = $tmp1370;
    $tmp1368 = $tmp1369;
    $returnValue1367 = $tmp1368;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
    return $returnValue1367;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $returnValue1373;
    panda$core$Int64 result1375;
    panda$core$Int64 start1376;
    panda$core$Char8 $tmp1377;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1379;
    panda$core$Int64 digit1393;
    panda$core$Char8 $tmp1409;
    panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1372.value) {
    {
        $returnValue1373 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1373;
    }
    }
    result1375 = ((panda$core$Int64) { 0 });
    memset(&start1376, 0, sizeof(start1376));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1377, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1378 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1377);
    if ($tmp1378.value) {
    {
        start1376 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1376 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1379, start1376, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1381 = $tmp1379.min.value;
    panda$core$Int64 i1380 = { $tmp1381 };
    int64_t $tmp1383 = $tmp1379.max.value;
    bool $tmp1384 = $tmp1379.inclusive.value;
    if ($tmp1384) goto $l1391; else goto $l1392;
    $l1391:;
    if ($tmp1381 <= $tmp1383) goto $l1385; else goto $l1387;
    $l1392:;
    if ($tmp1381 < $tmp1383) goto $l1385; else goto $l1387;
    $l1385:;
    {
        panda$core$Int64 $tmp1394 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1380.value].value) }), ((panda$core$Int64) { 48 }));
        digit1393 = $tmp1394;
        panda$core$Bit $tmp1396 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1393, ((panda$core$Int64) { 0 }));
        bool $tmp1395 = $tmp1396.value;
        if ($tmp1395) goto $l1397;
        panda$core$Bit $tmp1398 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1393, ((panda$core$Int64) { 9 }));
        $tmp1395 = $tmp1398.value;
        $l1397:;
        panda$core$Bit $tmp1399 = { $tmp1395 };
        if ($tmp1399.value) {
        {
            $returnValue1373 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1373;
        }
        }
        panda$core$Int64 $tmp1401 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1375, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1401, digit1393);
        result1375 = $tmp1402;
    }
    $l1388:;
    int64_t $tmp1404 = $tmp1383 - i1380.value;
    if ($tmp1384) goto $l1405; else goto $l1406;
    $l1405:;
    if ((uint64_t) $tmp1404 >= 1) goto $l1403; else goto $l1387;
    $l1406:;
    if ((uint64_t) $tmp1404 > 1) goto $l1403; else goto $l1387;
    $l1403:;
    i1380.value += 1;
    goto $l1385;
    $l1387:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1409, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1410 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1409);
    if ($tmp1410.value) {
    {
        panda$core$Int64 $tmp1411 = panda$core$Int64$$SUB$R$panda$core$Int64(result1375);
        result1375 = $tmp1411;
    }
    }
    $returnValue1373 = ((panda$core$Int64$nullable) { result1375, true });
    return $returnValue1373;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $returnValue1414;
    panda$core$UInt64 result1416;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1417;
    panda$core$UInt64 digit1431;
    panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1413.value) {
    {
        $returnValue1414 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1414;
    }
    }
    result1416 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1417, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1419 = $tmp1417.min.value;
    panda$core$Int64 i1418 = { $tmp1419 };
    int64_t $tmp1421 = $tmp1417.max.value;
    bool $tmp1422 = $tmp1417.inclusive.value;
    if ($tmp1422) goto $l1429; else goto $l1430;
    $l1429:;
    if ($tmp1419 <= $tmp1421) goto $l1423; else goto $l1425;
    $l1430:;
    if ($tmp1419 < $tmp1421) goto $l1423; else goto $l1425;
    $l1423:;
    {
        panda$core$UInt64 $tmp1432 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1418.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1431 = $tmp1432;
        panda$core$Bit $tmp1434 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1431, ((panda$core$UInt64) { 0 }));
        bool $tmp1433 = $tmp1434.value;
        if ($tmp1433) goto $l1435;
        panda$core$Bit $tmp1436 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1431, ((panda$core$UInt64) { 9 }));
        $tmp1433 = $tmp1436.value;
        $l1435:;
        panda$core$Bit $tmp1437 = { $tmp1433 };
        if ($tmp1437.value) {
        {
            $returnValue1414 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1414;
        }
        }
        panda$core$UInt64 $tmp1439 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1416, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1440 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1439, digit1431);
        result1416 = $tmp1440;
    }
    $l1426:;
    int64_t $tmp1442 = $tmp1421 - i1418.value;
    if ($tmp1422) goto $l1443; else goto $l1444;
    $l1443:;
    if ((uint64_t) $tmp1442 >= 1) goto $l1441; else goto $l1425;
    $l1444:;
    if ((uint64_t) $tmp1442 > 1) goto $l1441; else goto $l1425;
    $l1441:;
    i1418.value += 1;
    goto $l1423;
    $l1425:;
    $returnValue1414 = ((panda$core$UInt64$nullable) { result1416, true });
    return $returnValue1414;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1449;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1450;
    panda$core$Int64 $returnValue1472;
    panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1448.value) {
    {
        h1449 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1450, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1452 = $tmp1450.min.value;
        panda$core$Int64 i1451 = { $tmp1452 };
        int64_t $tmp1454 = $tmp1450.max.value;
        bool $tmp1455 = $tmp1450.inclusive.value;
        if ($tmp1455) goto $l1462; else goto $l1463;
        $l1462:;
        if ($tmp1452 <= $tmp1454) goto $l1456; else goto $l1458;
        $l1463:;
        if ($tmp1452 < $tmp1454) goto $l1456; else goto $l1458;
        $l1456:;
        {
            panda$core$Int64 $tmp1464 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1449, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1465 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1464, ((panda$core$Int64) { ((int64_t) self->data[i1451.value].value) }));
            h1449 = $tmp1465;
        }
        $l1459:;
        int64_t $tmp1467 = $tmp1454 - i1451.value;
        if ($tmp1455) goto $l1468; else goto $l1469;
        $l1468:;
        if ((uint64_t) $tmp1467 >= 1) goto $l1466; else goto $l1458;
        $l1469:;
        if ((uint64_t) $tmp1467 > 1) goto $l1466; else goto $l1458;
        $l1466:;
        i1451.value += 1;
        goto $l1456;
        $l1458:;
        self->_hash = h1449;
    }
    }
    $returnValue1472 = self->_hash;
    return $returnValue1472;
}

