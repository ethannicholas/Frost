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
#include "panda/collections/Array.h"
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
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn85)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn160)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn307)(panda$core$Object*);
typedef panda$core$String* (*$fn349)(panda$core$Object*);

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
    panda$core$String* $match$263_943 = NULL;
    panda$core$String* $tmp44;
    panda$core$String* $returnValue47;
    panda$core$String* $tmp48;
    panda$core$MutableString* result56 = NULL;
    panda$core$MutableString* $tmp57;
    panda$core$MutableString* $tmp58;
    panda$collections$Iterator* Iter$268$1764 = NULL;
    panda$collections$Iterator* $tmp65;
    panda$collections$Iterator* $tmp66;
    panda$collections$ListView* $tmp67;
    panda$core$Char8 c81;
    panda$core$Object* $tmp82;
    panda$core$Char8 $match$269_2187;
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
        $match$263_943 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Bit $tmp46 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$263_943, &$s45);
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
        panda$core$Bit $tmp52 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$263_943, &$s51);
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
                        Iter$268$1764 = $tmp65;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
                        $l73:;
                        ITable* $tmp76 = Iter$268$1764->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$core$Bit $tmp79 = $tmp77(Iter$268$1764);
                        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
                        bool $tmp75 = $tmp80.value;
                        if (!$tmp75) goto $l74;
                        {
                            ITable* $tmp83 = Iter$268$1764->$class->itable;
                            while ($tmp83->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp83 = $tmp83->next;
                            }
                            $fn85 $tmp84 = $tmp83->methods[1];
                            panda$core$Object* $tmp86 = $tmp84(Iter$268$1764);
                            $tmp82 = $tmp86;
                            c81 = ((panda$core$Char8$wrapper*) $tmp82)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp82);
                            {
                                $match$269_2187 = c81;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp89 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$269_2187, $tmp88);
                                if ($tmp89.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s90);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp92 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$269_2187, $tmp91);
                                if ($tmp92.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s93);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp94, ((panda$core$UInt8) { 10 }));
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$269_2187, $tmp94);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s96);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { 13 }));
                                panda$core$Bit $tmp98 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$269_2187, $tmp97);
                                if ($tmp98.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s99);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp100, ((panda$core$UInt8) { 9 }));
                                panda$core$Bit $tmp101 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$269_2187, $tmp100);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$1764));
                    Iter$268$1764 = NULL;
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
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result841 = NULL;
    panda$core$MutableString* $tmp842;
    panda$core$MutableString* $tmp843;
    panda$core$String$Index index845;
    panda$core$String$Index$nullable nextIndex849;
    panda$core$String* $tmp851;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp852;
    panda$core$String* $tmp854;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp855;
    panda$core$String$Index $tmp857;
    panda$core$String* $returnValue859;
    panda$core$String* $tmp860;
    panda$core$String* $tmp861;
    int $tmp840;
    {
        panda$core$MutableString* $tmp844 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp844);
        $tmp843 = $tmp844;
        $tmp842 = $tmp843;
        result841 = $tmp842;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp842));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp843));
        panda$core$String$Index $tmp846 = panda$core$String$start$R$panda$core$String$Index(self);
        index845 = $tmp846;
        $l847:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp850 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index845);
            nextIndex849 = $tmp850;
            if (((panda$core$Bit) { !nextIndex849.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp852, ((panda$core$String$Index$nullable) { index845, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp853 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp852);
                $tmp851 = $tmp853;
                panda$core$MutableString$append$panda$core$String(result841, $tmp851);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
                goto $l848;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp855, index845, ((panda$core$String$Index) nextIndex849.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp856 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp855);
            $tmp854 = $tmp856;
            panda$core$MutableString$append$panda$core$String(result841, $tmp854);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
            panda$core$MutableString$append$panda$core$String(result841, p_replacement);
            panda$core$Int64 $tmp858 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex849.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp857, $tmp858);
            index845 = $tmp857;
        }
        }
        $l848:;
        panda$core$String* $tmp862 = panda$core$MutableString$finish$R$panda$core$String(result841);
        $tmp861 = $tmp862;
        $tmp860 = $tmp861;
        $returnValue859 = $tmp860;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
        $tmp840 = 0;
        goto $l838;
        $l863:;
        return $returnValue859;
    }
    $l838:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result841));
    result841 = NULL;
    switch ($tmp840) {
        case 0: goto $l863;
    }
    $l865:;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue866;
    panda$core$String$Index $tmp867;
    panda$core$String$Index$init$panda$core$Int64(&$tmp867, ((panda$core$Int64) { 0 }));
    $returnValue866 = $tmp867;
    return $returnValue866;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue869;
    panda$core$String$Index $tmp870;
    panda$core$String$Index$init$panda$core$Int64(&$tmp870, self->_length);
    $returnValue869 = $tmp870;
    return $returnValue869;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c873;
    panda$core$String$Index $returnValue876;
    panda$core$String$Index $tmp877;
    panda$core$String$Index $tmp881;
    panda$core$String$Index $tmp885;
    panda$core$String$Index $tmp888;
    panda$core$Bit $tmp872 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp872.value);
    int64_t $tmp874 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c873 = $tmp874;
    bool $tmp875 = c873 >= 240;
    if (((panda$core$Bit) { $tmp875 }).value) {
    {
        panda$core$Int64 $tmp878 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp877, $tmp878);
        $returnValue876 = $tmp877;
        return $returnValue876;
    }
    }
    bool $tmp880 = c873 >= 224;
    if (((panda$core$Bit) { $tmp880 }).value) {
    {
        panda$core$Int64 $tmp882 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp881, $tmp882);
        $returnValue876 = $tmp881;
        return $returnValue876;
    }
    }
    bool $tmp884 = c873 >= 192;
    if (((panda$core$Bit) { $tmp884 }).value) {
    {
        panda$core$Int64 $tmp886 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp885, $tmp886);
        $returnValue876 = $tmp885;
        return $returnValue876;
    }
    }
    panda$core$Int64 $tmp889 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp888, $tmp889);
    $returnValue876 = $tmp888;
    return $returnValue876;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue892;
    panda$core$String$Index $returnValue904;
    panda$core$String$Index $tmp905;
    panda$core$Bit $tmp891 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp891.value);
    panda$core$Int64 $tmp893 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue892 = $tmp893;
    $l894:;
    int64_t $tmp898 = ((int64_t) self->data[newValue892.value].value) & 255;
    bool $tmp899 = $tmp898 >= 128;
    bool $tmp897 = $tmp899;
    if (!$tmp897) goto $l900;
    int64_t $tmp901 = ((int64_t) self->data[newValue892.value].value) & 255;
    bool $tmp902 = $tmp901 < 192;
    $tmp897 = $tmp902;
    $l900:;
    bool $tmp896 = ((panda$core$Bit) { $tmp897 }).value;
    if (!$tmp896) goto $l895;
    {
        panda$core$Int64 $tmp903 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue892, ((panda$core$Int64) { 1 }));
        newValue892 = $tmp903;
    }
    goto $l894;
    $l895:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp905, newValue892);
    $returnValue904 = $tmp905;
    return $returnValue904;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result907;
    panda$core$Range$LTpanda$core$Int64$GT $tmp909;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp930;
    panda$core$String$Index $returnValue961;
    result907 = p_index;
    panda$core$Bit $tmp908 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp908.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp909, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp911 = $tmp909.min.value;
        panda$core$Int64 i910 = { $tmp911 };
        int64_t $tmp913 = $tmp909.max.value;
        bool $tmp914 = $tmp909.inclusive.value;
        if ($tmp914) goto $l921; else goto $l922;
        $l921:;
        if ($tmp911 <= $tmp913) goto $l915; else goto $l917;
        $l922:;
        if ($tmp911 < $tmp913) goto $l915; else goto $l917;
        $l915:;
        {
            panda$core$String$Index $tmp923 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result907);
            result907 = $tmp923;
        }
        $l918:;
        int64_t $tmp925 = $tmp913 - i910.value;
        if ($tmp914) goto $l926; else goto $l927;
        $l926:;
        if ((uint64_t) $tmp925 >= 1) goto $l924; else goto $l917;
        $l927:;
        if ((uint64_t) $tmp925 > 1) goto $l924; else goto $l917;
        $l924:;
        i910.value += 1;
        goto $l915;
        $l917:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp930, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp932 = $tmp930.start.value;
        panda$core$Int64 i931 = { $tmp932 };
        int64_t $tmp934 = $tmp930.end.value;
        int64_t $tmp935 = $tmp930.step.value;
        bool $tmp936 = $tmp930.inclusive.value;
        bool $tmp943 = $tmp935 > 0;
        if ($tmp943) goto $l941; else goto $l942;
        $l941:;
        if ($tmp936) goto $l944; else goto $l945;
        $l944:;
        if ($tmp932 <= $tmp934) goto $l937; else goto $l939;
        $l945:;
        if ($tmp932 < $tmp934) goto $l937; else goto $l939;
        $l942:;
        if ($tmp936) goto $l946; else goto $l947;
        $l946:;
        if ($tmp932 >= $tmp934) goto $l937; else goto $l939;
        $l947:;
        if ($tmp932 > $tmp934) goto $l937; else goto $l939;
        $l937:;
        {
            panda$core$String$Index $tmp949 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result907);
            result907 = $tmp949;
        }
        $l940:;
        if ($tmp943) goto $l951; else goto $l952;
        $l951:;
        int64_t $tmp953 = $tmp934 - i931.value;
        if ($tmp936) goto $l954; else goto $l955;
        $l954:;
        if ((uint64_t) $tmp953 >= $tmp935) goto $l950; else goto $l939;
        $l955:;
        if ((uint64_t) $tmp953 > $tmp935) goto $l950; else goto $l939;
        $l952:;
        int64_t $tmp957 = i931.value - $tmp934;
        if ($tmp936) goto $l958; else goto $l959;
        $l958:;
        if ((uint64_t) $tmp957 >= -$tmp935) goto $l950; else goto $l939;
        $l959:;
        if ((uint64_t) $tmp957 > -$tmp935) goto $l950; else goto $l939;
        $l950:;
        i931.value += $tmp935;
        goto $l937;
        $l939:;
    }
    }
    $returnValue961 = result907;
    return $returnValue961;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue963;
    panda$core$String* $tmp964;
    panda$core$String* $tmp965;
    panda$core$Char32 $tmp966;
    panda$core$Char32$init$panda$core$Int32(&$tmp966, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp967 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp966);
    $tmp965 = $tmp967;
    $tmp964 = $tmp965;
    $returnValue963 = $tmp964;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
    return $returnValue963;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue971;
    panda$core$String* $tmp972;
    panda$core$String* $tmp974;
    panda$core$String* $tmp975;
    panda$core$String* $tmp976;
    panda$core$Int64 $tmp969 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp970 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp969, p_width);
    if ($tmp970.value) {
    {
        $tmp972 = self;
        $returnValue971 = $tmp972;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
        return $returnValue971;
    }
    }
    panda$core$Int64 $tmp977 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp978 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp977);
    panda$core$String* $tmp979 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp978);
    $tmp976 = $tmp979;
    panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp976);
    $tmp975 = $tmp980;
    $tmp974 = $tmp975;
    $returnValue971 = $tmp974;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp974));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
    return $returnValue971;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue982;
    panda$core$String* $tmp983;
    panda$core$String* $tmp984;
    panda$core$Char32 $tmp985;
    panda$core$Char32$init$panda$core$Int32(&$tmp985, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp986 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp985);
    $tmp984 = $tmp986;
    $tmp983 = $tmp984;
    $returnValue982 = $tmp983;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp983));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp984));
    return $returnValue982;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue990;
    panda$core$String* $tmp991;
    panda$core$String* $tmp993;
    panda$core$String* $tmp994;
    panda$core$String* $tmp995;
    panda$core$Int64 $tmp988 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp989 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp988, p_width);
    if ($tmp989.value) {
    {
        $tmp991 = self;
        $returnValue990 = $tmp991;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp991));
        return $returnValue990;
    }
    }
    panda$core$Int64 $tmp996 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp997 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp996);
    panda$core$String* $tmp998 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp997);
    $tmp995 = $tmp998;
    panda$core$String* $tmp999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, self);
    $tmp994 = $tmp999;
    $tmp993 = $tmp994;
    $returnValue990 = $tmp993;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp995));
    return $returnValue990;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1001;
    panda$core$String* $tmp1002;
    panda$core$String* $tmp1003;
    panda$core$Char32 $tmp1004;
    panda$core$Char32$init$panda$core$Int32(&$tmp1004, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1005 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1004);
    $tmp1003 = $tmp1005;
    $tmp1002 = $tmp1003;
    $returnValue1001 = $tmp1002;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1002));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
    return $returnValue1001;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1009;
    panda$core$String* $tmp1010;
    panda$core$Int64 pad1012;
    panda$core$Int64 left1015;
    panda$core$Int64 right1017;
    panda$core$String* $tmp1019;
    panda$core$String* $tmp1020;
    panda$core$String* $tmp1021;
    panda$core$String* $tmp1022;
    panda$core$String* $tmp1025;
    panda$core$Int64 $tmp1007 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1008 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1007, p_width);
    if ($tmp1008.value) {
    {
        $tmp1010 = self;
        $returnValue1009 = $tmp1010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
        return $returnValue1009;
    }
    }
    panda$core$Int64 $tmp1013 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1014 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1013);
    pad1012 = $tmp1014;
    panda$core$Int64 $tmp1016 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1012, ((panda$core$Int64) { 2 }));
    left1015 = $tmp1016;
    panda$core$Int64 $tmp1018 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1012, left1015);
    right1017 = $tmp1018;
    panda$core$String* $tmp1023 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1015);
    $tmp1022 = $tmp1023;
    panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, self);
    $tmp1021 = $tmp1024;
    panda$core$String* $tmp1026 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1017);
    $tmp1025 = $tmp1026;
    panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1021, $tmp1025);
    $tmp1020 = $tmp1027;
    $tmp1019 = $tmp1020;
    $returnValue1009 = $tmp1019;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1025));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
    return $returnValue1009;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1029;
    panda$collections$Array* $tmp1030;
    panda$collections$Array* $tmp1031;
    panda$collections$Array* $tmp1032 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1031 = $tmp1032;
    $tmp1030 = $tmp1031;
    $returnValue1029 = $tmp1030;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
    return $returnValue1029;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1037 = NULL;
    panda$collections$Array* $tmp1038;
    panda$collections$Array* $tmp1039;
    panda$core$String$Index index1041;
    panda$core$String$Index$nullable nextIndex1045;
    panda$core$String* $tmp1054;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1055;
    panda$core$String* $tmp1057;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1058;
    panda$core$String$Index $tmp1060;
    panda$collections$Array* $returnValue1062;
    panda$collections$Array* $tmp1063;
    int $tmp1036;
    {
        panda$collections$Array* $tmp1040 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1040);
        $tmp1039 = $tmp1040;
        $tmp1038 = $tmp1039;
        result1037 = $tmp1038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
        panda$core$String$Index $tmp1042 = panda$core$String$start$R$panda$core$String$Index(self);
        index1041 = $tmp1042;
        $l1043:;
        while (true) {
        {
            memset(&nextIndex1045, 0, sizeof(nextIndex1045));
            panda$core$Bit $tmp1046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1046.value) {
            {
                panda$core$String$Index $tmp1047 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1041);
                nextIndex1045 = ((panda$core$String$Index$nullable) { $tmp1047, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1048 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1041);
                nextIndex1045 = $tmp1048;
            }
            }
            bool $tmp1049 = ((panda$core$Bit) { !nextIndex1045.nonnull }).value;
            if ($tmp1049) goto $l1050;
            panda$core$Int64 $tmp1051 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1037->count, $tmp1051);
            $tmp1049 = $tmp1052.value;
            $l1050:;
            panda$core$Bit $tmp1053 = { $tmp1049 };
            if ($tmp1053.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1055, ((panda$core$String$Index$nullable) { index1041, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1056 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1055);
                $tmp1054 = $tmp1056;
                panda$collections$Array$add$panda$collections$Array$T(result1037, ((panda$core$Object*) $tmp1054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
                goto $l1044;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1058, index1041, ((panda$core$String$Index) nextIndex1045.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1059 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1058);
            $tmp1057 = $tmp1059;
            panda$collections$Array$add$panda$collections$Array$T(result1037, ((panda$core$Object*) $tmp1057));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1057));
            panda$core$Int64 $tmp1061 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1045.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1060, $tmp1061);
            index1041 = $tmp1060;
        }
        }
        $l1044:;
        $tmp1063 = result1037;
        $returnValue1062 = $tmp1063;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1063));
        $tmp1036 = 0;
        goto $l1034;
        $l1064:;
        return $returnValue1062;
    }
    $l1034:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1037));
    result1037 = NULL;
    switch ($tmp1036) {
        case 0: goto $l1064;
    }
    $l1066:;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $returnValue1068;
    panda$core$Int64 result1070;
    panda$core$Int64 start1071;
    panda$core$Char8 $tmp1072;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1074;
    panda$core$Int64 digit1088;
    panda$core$Char8 $tmp1104;
    panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1067.value) {
    {
        $returnValue1068 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1068;
    }
    }
    result1070 = ((panda$core$Int64) { 0 });
    memset(&start1071, 0, sizeof(start1071));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1072, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1073 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1072);
    if ($tmp1073.value) {
    {
        start1071 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1071 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1074, start1071, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1076 = $tmp1074.min.value;
    panda$core$Int64 i1075 = { $tmp1076 };
    int64_t $tmp1078 = $tmp1074.max.value;
    bool $tmp1079 = $tmp1074.inclusive.value;
    if ($tmp1079) goto $l1086; else goto $l1087;
    $l1086:;
    if ($tmp1076 <= $tmp1078) goto $l1080; else goto $l1082;
    $l1087:;
    if ($tmp1076 < $tmp1078) goto $l1080; else goto $l1082;
    $l1080:;
    {
        panda$core$Int64 $tmp1089 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1075.value].value) }), ((panda$core$Int64) { 48 }));
        digit1088 = $tmp1089;
        panda$core$Bit $tmp1091 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1088, ((panda$core$Int64) { 0 }));
        bool $tmp1090 = $tmp1091.value;
        if ($tmp1090) goto $l1092;
        panda$core$Bit $tmp1093 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1088, ((panda$core$Int64) { 9 }));
        $tmp1090 = $tmp1093.value;
        $l1092:;
        panda$core$Bit $tmp1094 = { $tmp1090 };
        if ($tmp1094.value) {
        {
            $returnValue1068 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1068;
        }
        }
        panda$core$Int64 $tmp1096 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1070, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1097 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1096, digit1088);
        result1070 = $tmp1097;
    }
    $l1083:;
    int64_t $tmp1099 = $tmp1078 - i1075.value;
    if ($tmp1079) goto $l1100; else goto $l1101;
    $l1100:;
    if ((uint64_t) $tmp1099 >= 1) goto $l1098; else goto $l1082;
    $l1101:;
    if ((uint64_t) $tmp1099 > 1) goto $l1098; else goto $l1082;
    $l1098:;
    i1075.value += 1;
    goto $l1080;
    $l1082:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1104, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1105 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1104);
    if ($tmp1105.value) {
    {
        panda$core$Int64 $tmp1106 = panda$core$Int64$$SUB$R$panda$core$Int64(result1070);
        result1070 = $tmp1106;
    }
    }
    $returnValue1068 = ((panda$core$Int64$nullable) { result1070, true });
    return $returnValue1068;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $returnValue1109;
    panda$core$UInt64 result1111;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1112;
    panda$core$UInt64 digit1126;
    panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1108.value) {
    {
        $returnValue1109 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1109;
    }
    }
    result1111 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1112, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1114 = $tmp1112.min.value;
    panda$core$Int64 i1113 = { $tmp1114 };
    int64_t $tmp1116 = $tmp1112.max.value;
    bool $tmp1117 = $tmp1112.inclusive.value;
    if ($tmp1117) goto $l1124; else goto $l1125;
    $l1124:;
    if ($tmp1114 <= $tmp1116) goto $l1118; else goto $l1120;
    $l1125:;
    if ($tmp1114 < $tmp1116) goto $l1118; else goto $l1120;
    $l1118:;
    {
        panda$core$UInt64 $tmp1127 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1113.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1126 = $tmp1127;
        panda$core$Bit $tmp1129 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1126, ((panda$core$UInt64) { 0 }));
        bool $tmp1128 = $tmp1129.value;
        if ($tmp1128) goto $l1130;
        panda$core$Bit $tmp1131 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1126, ((panda$core$UInt64) { 9 }));
        $tmp1128 = $tmp1131.value;
        $l1130:;
        panda$core$Bit $tmp1132 = { $tmp1128 };
        if ($tmp1132.value) {
        {
            $returnValue1109 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1109;
        }
        }
        panda$core$UInt64 $tmp1134 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1111, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1135 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1134, digit1126);
        result1111 = $tmp1135;
    }
    $l1121:;
    int64_t $tmp1137 = $tmp1116 - i1113.value;
    if ($tmp1117) goto $l1138; else goto $l1139;
    $l1138:;
    if ((uint64_t) $tmp1137 >= 1) goto $l1136; else goto $l1120;
    $l1139:;
    if ((uint64_t) $tmp1137 > 1) goto $l1136; else goto $l1120;
    $l1136:;
    i1113.value += 1;
    goto $l1118;
    $l1120:;
    $returnValue1109 = ((panda$core$UInt64$nullable) { result1111, true });
    return $returnValue1109;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1144;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1145;
    panda$core$Int64 $returnValue1167;
    panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1143.value) {
    {
        h1144 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1145, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1147 = $tmp1145.min.value;
        panda$core$Int64 i1146 = { $tmp1147 };
        int64_t $tmp1149 = $tmp1145.max.value;
        bool $tmp1150 = $tmp1145.inclusive.value;
        if ($tmp1150) goto $l1157; else goto $l1158;
        $l1157:;
        if ($tmp1147 <= $tmp1149) goto $l1151; else goto $l1153;
        $l1158:;
        if ($tmp1147 < $tmp1149) goto $l1151; else goto $l1153;
        $l1151:;
        {
            panda$core$Int64 $tmp1159 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1144, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1160 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1159, ((panda$core$Int64) { ((int64_t) self->data[i1146.value].value) }));
            h1144 = $tmp1160;
        }
        $l1154:;
        int64_t $tmp1162 = $tmp1149 - i1146.value;
        if ($tmp1150) goto $l1163; else goto $l1164;
        $l1163:;
        if ((uint64_t) $tmp1162 >= 1) goto $l1161; else goto $l1153;
        $l1164:;
        if ((uint64_t) $tmp1162 > 1) goto $l1161; else goto $l1153;
        $l1161:;
        i1146.value += 1;
        goto $l1151;
        $l1153:;
        self->_hash = h1144;
    }
    }
    $returnValue1167 = self->_hash;
    return $returnValue1167;
}

