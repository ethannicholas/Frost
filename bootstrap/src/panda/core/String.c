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
#include "panda/core/String/MatchIterator.h"
#include "panda/core/String/RegexMatchIterator.h"
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
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

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
    panda$core$String* $match$364_943 = NULL;
    panda$core$String* $tmp44;
    panda$core$String* $returnValue47;
    panda$core$String* $tmp48;
    panda$core$MutableString* result56 = NULL;
    panda$core$MutableString* $tmp57;
    panda$core$MutableString* $tmp58;
    panda$collections$Iterator* Iter$369$1764 = NULL;
    panda$collections$Iterator* $tmp65;
    panda$collections$Iterator* $tmp66;
    panda$collections$ListView* $tmp67;
    panda$core$Char8 c81;
    panda$core$Object* $tmp82;
    panda$core$Char8 $match$370_2187;
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
        $match$364_943 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Bit $tmp46 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$364_943, &$s45);
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
        panda$core$Bit $tmp52 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$364_943, &$s51);
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
                        Iter$369$1764 = $tmp65;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
                        $l73:;
                        ITable* $tmp76 = Iter$369$1764->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$core$Bit $tmp79 = $tmp77(Iter$369$1764);
                        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
                        bool $tmp75 = $tmp80.value;
                        if (!$tmp75) goto $l74;
                        {
                            ITable* $tmp83 = Iter$369$1764->$class->itable;
                            while ($tmp83->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp83 = $tmp83->next;
                            }
                            $fn85 $tmp84 = $tmp83->methods[1];
                            panda$core$Object* $tmp86 = $tmp84(Iter$369$1764);
                            $tmp82 = $tmp86;
                            c81 = ((panda$core$Char8$wrapper*) $tmp82)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp82);
                            {
                                $match$370_2187 = c81;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp89 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp88);
                                if ($tmp89.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s90);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp92 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp91);
                                if ($tmp92.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s93);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp94, ((panda$core$UInt8) { 10 }));
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp94);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s96);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { 13 }));
                                panda$core$Bit $tmp98 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp97);
                                if ($tmp98.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s99);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp100, ((panda$core$UInt8) { 9 }));
                                panda$core$Bit $tmp101 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp100);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$369$1764));
                    Iter$369$1764 = NULL;
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
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1043;
    panda$collections$Iterator* $tmp1044;
    panda$collections$Iterator* $tmp1045;
    panda$collections$Iterator* $tmp1046 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, ((panda$core$Bit) { false }));
    $tmp1045 = $tmp1046;
    $tmp1044 = $tmp1045;
    $returnValue1043 = $tmp1044;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
    return $returnValue1043;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1048;
    panda$collections$Iterator* $tmp1049;
    panda$core$String$MatchIterator* $tmp1050;
    panda$core$String$MatchIterator* $tmp1051 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1051, self, p_needle, p_overlapping);
    $tmp1050 = $tmp1051;
    $tmp1049 = ((panda$collections$Iterator*) $tmp1050);
    $returnValue1048 = $tmp1049;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
    return $returnValue1048;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1053;
    panda$collections$Iterator* $tmp1054;
    panda$collections$Iterator* $tmp1055;
    panda$collections$Iterator* $tmp1056 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, ((panda$core$Bit) { false }));
    $tmp1055 = $tmp1056;
    $tmp1054 = $tmp1055;
    $returnValue1053 = $tmp1054;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
    return $returnValue1053;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1058;
    panda$collections$Iterator* $tmp1059;
    panda$core$String$RegexMatchIterator* $tmp1060;
    panda$core$String$RegexMatchIterator* $tmp1061 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1061, self, p_needle, p_overlapping);
    $tmp1060 = $tmp1061;
    $tmp1059 = ((panda$collections$Iterator*) $tmp1060);
    $returnValue1058 = $tmp1059;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1059));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
    return $returnValue1058;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1063;
    panda$core$String$Index $tmp1064;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1064, ((panda$core$Int64) { 0 }));
    $returnValue1063 = $tmp1064;
    return $returnValue1063;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1066;
    panda$core$String$Index $tmp1067;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1067, self->_length);
    $returnValue1066 = $tmp1067;
    return $returnValue1066;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1070;
    panda$core$String$Index $returnValue1073;
    panda$core$String$Index $tmp1074;
    panda$core$String$Index $tmp1078;
    panda$core$String$Index $tmp1082;
    panda$core$String$Index $tmp1085;
    panda$core$Bit $tmp1069 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp1069.value);
    int64_t $tmp1071 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1070 = $tmp1071;
    bool $tmp1072 = c1070 >= 240;
    if (((panda$core$Bit) { $tmp1072 }).value) {
    {
        panda$core$Int64 $tmp1075 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1074, $tmp1075);
        $returnValue1073 = $tmp1074;
        return $returnValue1073;
    }
    }
    bool $tmp1077 = c1070 >= 224;
    if (((panda$core$Bit) { $tmp1077 }).value) {
    {
        panda$core$Int64 $tmp1079 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1078, $tmp1079);
        $returnValue1073 = $tmp1078;
        return $returnValue1073;
    }
    }
    bool $tmp1081 = c1070 >= 192;
    if (((panda$core$Bit) { $tmp1081 }).value) {
    {
        panda$core$Int64 $tmp1083 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1082, $tmp1083);
        $returnValue1073 = $tmp1082;
        return $returnValue1073;
    }
    }
    panda$core$Int64 $tmp1086 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp1085, $tmp1086);
    $returnValue1073 = $tmp1085;
    return $returnValue1073;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue1089;
    panda$core$String$Index $returnValue1101;
    panda$core$String$Index $tmp1102;
    panda$core$Bit $tmp1088 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1088.value);
    panda$core$Int64 $tmp1090 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue1089 = $tmp1090;
    $l1091:;
    int64_t $tmp1095 = ((int64_t) self->data[newValue1089.value].value) & 255;
    bool $tmp1096 = $tmp1095 >= 128;
    bool $tmp1094 = $tmp1096;
    if (!$tmp1094) goto $l1097;
    int64_t $tmp1098 = ((int64_t) self->data[newValue1089.value].value) & 255;
    bool $tmp1099 = $tmp1098 < 192;
    $tmp1094 = $tmp1099;
    $l1097:;
    bool $tmp1093 = ((panda$core$Bit) { $tmp1094 }).value;
    if (!$tmp1093) goto $l1092;
    {
        panda$core$Int64 $tmp1100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1089, ((panda$core$Int64) { 1 }));
        newValue1089 = $tmp1100;
    }
    goto $l1091;
    $l1092:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1102, newValue1089);
    $returnValue1101 = $tmp1102;
    return $returnValue1101;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1104;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1106;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1127;
    panda$core$String$Index $returnValue1158;
    result1104 = p_index;
    panda$core$Bit $tmp1105 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp1105.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1106, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp1108 = $tmp1106.min.value;
        panda$core$Int64 i1107 = { $tmp1108 };
        int64_t $tmp1110 = $tmp1106.max.value;
        bool $tmp1111 = $tmp1106.inclusive.value;
        if ($tmp1111) goto $l1118; else goto $l1119;
        $l1118:;
        if ($tmp1108 <= $tmp1110) goto $l1112; else goto $l1114;
        $l1119:;
        if ($tmp1108 < $tmp1110) goto $l1112; else goto $l1114;
        $l1112:;
        {
            panda$core$String$Index $tmp1120 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1104);
            result1104 = $tmp1120;
        }
        $l1115:;
        int64_t $tmp1122 = $tmp1110 - i1107.value;
        if ($tmp1111) goto $l1123; else goto $l1124;
        $l1123:;
        if ((uint64_t) $tmp1122 >= 1) goto $l1121; else goto $l1114;
        $l1124:;
        if ((uint64_t) $tmp1122 > 1) goto $l1121; else goto $l1114;
        $l1121:;
        i1107.value += 1;
        goto $l1112;
        $l1114:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1127, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp1129 = $tmp1127.start.value;
        panda$core$Int64 i1128 = { $tmp1129 };
        int64_t $tmp1131 = $tmp1127.end.value;
        int64_t $tmp1132 = $tmp1127.step.value;
        bool $tmp1133 = $tmp1127.inclusive.value;
        bool $tmp1140 = $tmp1132 > 0;
        if ($tmp1140) goto $l1138; else goto $l1139;
        $l1138:;
        if ($tmp1133) goto $l1141; else goto $l1142;
        $l1141:;
        if ($tmp1129 <= $tmp1131) goto $l1134; else goto $l1136;
        $l1142:;
        if ($tmp1129 < $tmp1131) goto $l1134; else goto $l1136;
        $l1139:;
        if ($tmp1133) goto $l1143; else goto $l1144;
        $l1143:;
        if ($tmp1129 >= $tmp1131) goto $l1134; else goto $l1136;
        $l1144:;
        if ($tmp1129 > $tmp1131) goto $l1134; else goto $l1136;
        $l1134:;
        {
            panda$core$String$Index $tmp1146 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1104);
            result1104 = $tmp1146;
        }
        $l1137:;
        if ($tmp1140) goto $l1148; else goto $l1149;
        $l1148:;
        int64_t $tmp1150 = $tmp1131 - i1128.value;
        if ($tmp1133) goto $l1151; else goto $l1152;
        $l1151:;
        if ((uint64_t) $tmp1150 >= $tmp1132) goto $l1147; else goto $l1136;
        $l1152:;
        if ((uint64_t) $tmp1150 > $tmp1132) goto $l1147; else goto $l1136;
        $l1149:;
        int64_t $tmp1154 = i1128.value - $tmp1131;
        if ($tmp1133) goto $l1155; else goto $l1156;
        $l1155:;
        if ((uint64_t) $tmp1154 >= -$tmp1132) goto $l1147; else goto $l1136;
        $l1156:;
        if ((uint64_t) $tmp1154 > -$tmp1132) goto $l1147; else goto $l1136;
        $l1147:;
        i1128.value += $tmp1132;
        goto $l1134;
        $l1136:;
    }
    }
    $returnValue1158 = result1104;
    return $returnValue1158;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1160;
    panda$core$String* $tmp1161;
    panda$core$String* $tmp1162;
    panda$core$Char32 $tmp1163;
    panda$core$Char32$init$panda$core$Int32(&$tmp1163, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1164 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1163);
    $tmp1162 = $tmp1164;
    $tmp1161 = $tmp1162;
    $returnValue1160 = $tmp1161;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
    return $returnValue1160;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1168;
    panda$core$String* $tmp1169;
    panda$core$String* $tmp1171;
    panda$core$String* $tmp1172;
    panda$core$String* $tmp1173;
    panda$core$Int64 $tmp1166 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1167 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1166, p_width);
    if ($tmp1167.value) {
    {
        $tmp1169 = self;
        $returnValue1168 = $tmp1169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
        return $returnValue1168;
    }
    }
    panda$core$Int64 $tmp1174 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1175 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1174);
    panda$core$String* $tmp1176 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1175);
    $tmp1173 = $tmp1176;
    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1173);
    $tmp1172 = $tmp1177;
    $tmp1171 = $tmp1172;
    $returnValue1168 = $tmp1171;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1173));
    return $returnValue1168;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1179;
    panda$core$String* $tmp1180;
    panda$core$String* $tmp1181;
    panda$core$Char32 $tmp1182;
    panda$core$Char32$init$panda$core$Int32(&$tmp1182, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1183 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1182);
    $tmp1181 = $tmp1183;
    $tmp1180 = $tmp1181;
    $returnValue1179 = $tmp1180;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
    return $returnValue1179;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1187;
    panda$core$String* $tmp1188;
    panda$core$String* $tmp1190;
    panda$core$String* $tmp1191;
    panda$core$String* $tmp1192;
    panda$core$Int64 $tmp1185 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1186 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1185, p_width);
    if ($tmp1186.value) {
    {
        $tmp1188 = self;
        $returnValue1187 = $tmp1188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
        return $returnValue1187;
    }
    }
    panda$core$Int64 $tmp1193 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1193);
    panda$core$String* $tmp1195 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1194);
    $tmp1192 = $tmp1195;
    panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, self);
    $tmp1191 = $tmp1196;
    $tmp1190 = $tmp1191;
    $returnValue1187 = $tmp1190;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
    return $returnValue1187;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1198;
    panda$core$String* $tmp1199;
    panda$core$String* $tmp1200;
    panda$core$Char32 $tmp1201;
    panda$core$Char32$init$panda$core$Int32(&$tmp1201, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1202 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1201);
    $tmp1200 = $tmp1202;
    $tmp1199 = $tmp1200;
    $returnValue1198 = $tmp1199;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
    return $returnValue1198;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1206;
    panda$core$String* $tmp1207;
    panda$core$Int64 pad1209;
    panda$core$Int64 left1212;
    panda$core$Int64 right1214;
    panda$core$String* $tmp1216;
    panda$core$String* $tmp1217;
    panda$core$String* $tmp1218;
    panda$core$String* $tmp1219;
    panda$core$String* $tmp1222;
    panda$core$Int64 $tmp1204 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1205 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1204, p_width);
    if ($tmp1205.value) {
    {
        $tmp1207 = self;
        $returnValue1206 = $tmp1207;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
        return $returnValue1206;
    }
    }
    panda$core$Int64 $tmp1210 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1210);
    pad1209 = $tmp1211;
    panda$core$Int64 $tmp1213 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1209, ((panda$core$Int64) { 2 }));
    left1212 = $tmp1213;
    panda$core$Int64 $tmp1215 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1209, left1212);
    right1214 = $tmp1215;
    panda$core$String* $tmp1220 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1212);
    $tmp1219 = $tmp1220;
    panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1219, self);
    $tmp1218 = $tmp1221;
    panda$core$String* $tmp1223 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1214);
    $tmp1222 = $tmp1223;
    panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, $tmp1222);
    $tmp1217 = $tmp1224;
    $tmp1216 = $tmp1217;
    $returnValue1206 = $tmp1216;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1222));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
    return $returnValue1206;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1226;
    panda$collections$Array* $tmp1227;
    panda$collections$Array* $tmp1228;
    panda$collections$Array* $tmp1229 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1228 = $tmp1229;
    $tmp1227 = $tmp1228;
    $returnValue1226 = $tmp1227;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1227));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
    return $returnValue1226;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1234 = NULL;
    panda$collections$Array* $tmp1235;
    panda$collections$Array* $tmp1236;
    panda$core$String$Index index1238;
    panda$core$String$Index$nullable nextIndex1242;
    panda$core$String* $tmp1251;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1252;
    panda$core$String* $tmp1254;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1255;
    panda$core$String$Index $tmp1257;
    panda$collections$Array* $returnValue1259;
    panda$collections$Array* $tmp1260;
    int $tmp1233;
    {
        panda$collections$Array* $tmp1237 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1237);
        $tmp1236 = $tmp1237;
        $tmp1235 = $tmp1236;
        result1234 = $tmp1235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
        panda$core$String$Index $tmp1239 = panda$core$String$start$R$panda$core$String$Index(self);
        index1238 = $tmp1239;
        $l1240:;
        while (true) {
        {
            memset(&nextIndex1242, 0, sizeof(nextIndex1242));
            panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1243.value) {
            {
                panda$core$String$Index $tmp1244 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1238);
                nextIndex1242 = ((panda$core$String$Index$nullable) { $tmp1244, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1245 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1238);
                nextIndex1242 = $tmp1245;
            }
            }
            bool $tmp1246 = ((panda$core$Bit) { !nextIndex1242.nonnull }).value;
            if ($tmp1246) goto $l1247;
            panda$core$Int64 $tmp1248 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1234->count, $tmp1248);
            $tmp1246 = $tmp1249.value;
            $l1247:;
            panda$core$Bit $tmp1250 = { $tmp1246 };
            if ($tmp1250.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1252, ((panda$core$String$Index$nullable) { index1238, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1253 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1252);
                $tmp1251 = $tmp1253;
                panda$collections$Array$add$panda$collections$Array$T(result1234, ((panda$core$Object*) $tmp1251));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1251));
                goto $l1241;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1255, index1238, ((panda$core$String$Index) nextIndex1242.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1256 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1255);
            $tmp1254 = $tmp1256;
            panda$collections$Array$add$panda$collections$Array$T(result1234, ((panda$core$Object*) $tmp1254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
            panda$core$Int64 $tmp1258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1242.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1257, $tmp1258);
            index1238 = $tmp1257;
        }
        }
        $l1241:;
        $tmp1260 = result1234;
        $returnValue1259 = $tmp1260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
        $tmp1233 = 0;
        goto $l1231;
        $l1261:;
        return $returnValue1259;
    }
    $l1231:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1234));
    result1234 = NULL;
    switch ($tmp1233) {
        case 0: goto $l1261;
    }
    $l1263:;
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1268 = NULL;
    panda$collections$Array* $tmp1269;
    panda$collections$Array* $tmp1270;
    panda$core$Matcher* matcher1272 = NULL;
    panda$core$Matcher* $tmp1273;
    panda$core$Matcher* $tmp1274;
    panda$core$String$Index index1276;
    panda$core$Bit found1280;
    panda$core$String* $tmp1288;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1289;
    panda$core$String$Index start1291;
    panda$core$String$Index $tmp1292;
    panda$core$String* $tmp1293;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1294;
    panda$core$String$Index $tmp1296;
    panda$core$String$Index $tmp1297;
    panda$collections$ListView* $returnValue1299;
    panda$collections$ListView* $tmp1300;
    panda$core$Bit $tmp1264 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp1264.value);
    int $tmp1267;
    {
        panda$collections$Array* $tmp1271 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1271);
        $tmp1270 = $tmp1271;
        $tmp1269 = $tmp1270;
        result1268 = $tmp1269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
        panda$core$Matcher* $tmp1275 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1274 = $tmp1275;
        $tmp1273 = $tmp1274;
        matcher1272 = $tmp1273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
        panda$core$String$Index $tmp1277 = panda$core$String$start$R$panda$core$String$Index(self);
        index1276 = $tmp1277;
        $l1278:;
        while (true) {
        {
            panda$core$Bit $tmp1281 = panda$core$Matcher$find$R$panda$core$Bit(matcher1272);
            found1280 = $tmp1281;
            panda$core$Bit $tmp1283 = panda$core$Bit$$NOT$R$panda$core$Bit(found1280);
            bool $tmp1282 = $tmp1283.value;
            if ($tmp1282) goto $l1284;
            panda$core$Int64 $tmp1285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1268->count, $tmp1285);
            $tmp1282 = $tmp1286.value;
            $l1284:;
            panda$core$Bit $tmp1287 = { $tmp1282 };
            if ($tmp1287.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1289, ((panda$core$String$Index$nullable) { index1276, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1290 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1289);
                $tmp1288 = $tmp1290;
                panda$collections$Array$add$panda$collections$Array$T(result1268, ((panda$core$Object*) $tmp1288));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                goto $l1279;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1292, matcher1272);
            start1291 = $tmp1292;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1294, index1276, start1291, ((panda$core$Bit) { false }));
            panda$core$String* $tmp1295 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1294);
            $tmp1293 = $tmp1295;
            panda$collections$Array$add$panda$collections$Array$T(result1268, ((panda$core$Object*) $tmp1293));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1297, matcher1272);
            panda$core$Int64 $tmp1298 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1291.value, $tmp1297.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1296, $tmp1298);
            index1276 = $tmp1296;
        }
        }
        $l1279:;
        $tmp1300 = ((panda$collections$ListView*) result1268);
        $returnValue1299 = $tmp1300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
        $tmp1267 = 0;
        goto $l1265;
        $l1301:;
        return $returnValue1299;
    }
    $l1265:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1272));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1268));
    result1268 = NULL;
    matcher1272 = NULL;
    switch ($tmp1267) {
        case 0: goto $l1301;
    }
    $l1303:;
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1304;
    panda$collections$ListView* $tmp1305;
    panda$collections$ListView* $tmp1306;
    panda$collections$ListView* $tmp1307 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1306 = $tmp1307;
    $tmp1305 = $tmp1306;
    $returnValue1304 = $tmp1305;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
    return $returnValue1304;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $returnValue1310;
    panda$core$Int64 result1312;
    panda$core$Int64 start1313;
    panda$core$Char8 $tmp1314;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1316;
    panda$core$Int64 digit1330;
    panda$core$Char8 $tmp1346;
    panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1309.value) {
    {
        $returnValue1310 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1310;
    }
    }
    result1312 = ((panda$core$Int64) { 0 });
    memset(&start1313, 0, sizeof(start1313));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1314, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1315 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1314);
    if ($tmp1315.value) {
    {
        start1313 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1313 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1316, start1313, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1318 = $tmp1316.min.value;
    panda$core$Int64 i1317 = { $tmp1318 };
    int64_t $tmp1320 = $tmp1316.max.value;
    bool $tmp1321 = $tmp1316.inclusive.value;
    if ($tmp1321) goto $l1328; else goto $l1329;
    $l1328:;
    if ($tmp1318 <= $tmp1320) goto $l1322; else goto $l1324;
    $l1329:;
    if ($tmp1318 < $tmp1320) goto $l1322; else goto $l1324;
    $l1322:;
    {
        panda$core$Int64 $tmp1331 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1317.value].value) }), ((panda$core$Int64) { 48 }));
        digit1330 = $tmp1331;
        panda$core$Bit $tmp1333 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1330, ((panda$core$Int64) { 0 }));
        bool $tmp1332 = $tmp1333.value;
        if ($tmp1332) goto $l1334;
        panda$core$Bit $tmp1335 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1330, ((panda$core$Int64) { 9 }));
        $tmp1332 = $tmp1335.value;
        $l1334:;
        panda$core$Bit $tmp1336 = { $tmp1332 };
        if ($tmp1336.value) {
        {
            $returnValue1310 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1310;
        }
        }
        panda$core$Int64 $tmp1338 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1312, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1338, digit1330);
        result1312 = $tmp1339;
    }
    $l1325:;
    int64_t $tmp1341 = $tmp1320 - i1317.value;
    if ($tmp1321) goto $l1342; else goto $l1343;
    $l1342:;
    if ((uint64_t) $tmp1341 >= 1) goto $l1340; else goto $l1324;
    $l1343:;
    if ((uint64_t) $tmp1341 > 1) goto $l1340; else goto $l1324;
    $l1340:;
    i1317.value += 1;
    goto $l1322;
    $l1324:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1346, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1347 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1346);
    if ($tmp1347.value) {
    {
        panda$core$Int64 $tmp1348 = panda$core$Int64$$SUB$R$panda$core$Int64(result1312);
        result1312 = $tmp1348;
    }
    }
    $returnValue1310 = ((panda$core$Int64$nullable) { result1312, true });
    return $returnValue1310;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $returnValue1351;
    panda$core$UInt64 result1353;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1354;
    panda$core$UInt64 digit1368;
    panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1350.value) {
    {
        $returnValue1351 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1351;
    }
    }
    result1353 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1354, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1356 = $tmp1354.min.value;
    panda$core$Int64 i1355 = { $tmp1356 };
    int64_t $tmp1358 = $tmp1354.max.value;
    bool $tmp1359 = $tmp1354.inclusive.value;
    if ($tmp1359) goto $l1366; else goto $l1367;
    $l1366:;
    if ($tmp1356 <= $tmp1358) goto $l1360; else goto $l1362;
    $l1367:;
    if ($tmp1356 < $tmp1358) goto $l1360; else goto $l1362;
    $l1360:;
    {
        panda$core$UInt64 $tmp1369 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1355.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1368 = $tmp1369;
        panda$core$Bit $tmp1371 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1368, ((panda$core$UInt64) { 0 }));
        bool $tmp1370 = $tmp1371.value;
        if ($tmp1370) goto $l1372;
        panda$core$Bit $tmp1373 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1368, ((panda$core$UInt64) { 9 }));
        $tmp1370 = $tmp1373.value;
        $l1372:;
        panda$core$Bit $tmp1374 = { $tmp1370 };
        if ($tmp1374.value) {
        {
            $returnValue1351 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1351;
        }
        }
        panda$core$UInt64 $tmp1376 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1353, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1377 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1376, digit1368);
        result1353 = $tmp1377;
    }
    $l1363:;
    int64_t $tmp1379 = $tmp1358 - i1355.value;
    if ($tmp1359) goto $l1380; else goto $l1381;
    $l1380:;
    if ((uint64_t) $tmp1379 >= 1) goto $l1378; else goto $l1362;
    $l1381:;
    if ((uint64_t) $tmp1379 > 1) goto $l1378; else goto $l1362;
    $l1378:;
    i1355.value += 1;
    goto $l1360;
    $l1362:;
    $returnValue1351 = ((panda$core$UInt64$nullable) { result1353, true });
    return $returnValue1351;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1386;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1387;
    panda$core$Int64 $returnValue1409;
    panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1385.value) {
    {
        h1386 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1387, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1389 = $tmp1387.min.value;
        panda$core$Int64 i1388 = { $tmp1389 };
        int64_t $tmp1391 = $tmp1387.max.value;
        bool $tmp1392 = $tmp1387.inclusive.value;
        if ($tmp1392) goto $l1399; else goto $l1400;
        $l1399:;
        if ($tmp1389 <= $tmp1391) goto $l1393; else goto $l1395;
        $l1400:;
        if ($tmp1389 < $tmp1391) goto $l1393; else goto $l1395;
        $l1393:;
        {
            panda$core$Int64 $tmp1401 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1386, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1401, ((panda$core$Int64) { ((int64_t) self->data[i1388.value].value) }));
            h1386 = $tmp1402;
        }
        $l1396:;
        int64_t $tmp1404 = $tmp1391 - i1388.value;
        if ($tmp1392) goto $l1405; else goto $l1406;
        $l1405:;
        if ((uint64_t) $tmp1404 >= 1) goto $l1403; else goto $l1395;
        $l1406:;
        if ((uint64_t) $tmp1404 > 1) goto $l1403; else goto $l1395;
        $l1403:;
        i1388.value += 1;
        goto $l1393;
        $l1395:;
        self->_hash = h1386;
    }
    }
    $returnValue1409 = self->_hash;
    return $returnValue1409;
}

