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
typedef panda$core$Bit (*$fn154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn161)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn313)(panda$core$Object*);
typedef panda$core$String* (*$fn355)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$String* $finallyReturn36;
    panda$core$String* $tmp38;
    $tmp38 = self;
    $finallyReturn36 = $tmp38;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
    return $finallyReturn36;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$263_943 = NULL;
    panda$core$String* $tmp44;
    panda$core$String* $finallyReturn46;
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
    panda$core$String* $finallyReturn112;
    panda$core$String* $tmp114;
    panda$core$String* $tmp115;
    int $tmp42;
    {
        $tmp44 = p_fmt;
        $match$263_943 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Bit $tmp46 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$263_943, &$s45);
        if ($tmp46.value) {
        {
            $tmp48 = self;
            $finallyReturn46 = $tmp48;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
            $tmp42 = 0;
            goto $l40;
            $l49:;
            return $finallyReturn46;
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
                panda$core$String* $tmp116 = panda$core$MutableString$finish$R$panda$core$String(result56);
                $tmp115 = $tmp116;
                $tmp114 = $tmp115;
                $finallyReturn112 = $tmp114;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
                $tmp55 = 0;
                goto $l53;
                $l117:;
                $tmp42 = 1;
                goto $l40;
                $l118:;
                return $finallyReturn112;
            }
            $l53:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result56));
            result56 = NULL;
            switch ($tmp55) {
                case 0: goto $l117;
            }
            $l120:;
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
        case 1: goto $l118;
        case -1: goto $l121;
        case 0: goto $l49;
    }
    $l121:;
}
void panda$core$String$cleanup(panda$core$String* self) {
    int $tmp124;
    {
        if (((panda$core$Bit) { self->owner == NULL }).value) {
        {
            pandaFree(self->data);
        }
        }
    }
    $tmp124 = -1;
    goto $l122;
    $l122:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp124) {
        case -1: goto $l125;
    }
    $l125:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$collections$ListView* $finallyReturn125;
    panda$collections$ListView* $tmp127;
    panda$core$String$UTF8List* $tmp128;
    panda$core$String$UTF8List* $tmp129 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp129, self);
    $tmp128 = $tmp129;
    $tmp127 = ((panda$collections$ListView*) $tmp128);
    $finallyReturn125 = $tmp127;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    return $finallyReturn125;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$collections$Iterator* $finallyReturn130;
    panda$collections$Iterator* $tmp132;
    panda$core$String$UTF16Iterator* $tmp133;
    panda$core$String$UTF16Iterator* $tmp134 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp134, self);
    $tmp133 = $tmp134;
    $tmp132 = ((panda$collections$Iterator*) $tmp133);
    $finallyReturn130 = $tmp132;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
    return $finallyReturn130;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$collections$Iterator* $finallyReturn135;
    panda$collections$Iterator* $tmp137;
    panda$core$String$UTF32Iterator* $tmp138;
    panda$core$String$UTF32Iterator* $tmp139 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp139, self);
    $tmp138 = $tmp139;
    $tmp137 = ((panda$collections$Iterator*) $tmp138);
    $finallyReturn135 = $tmp137;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
    return $finallyReturn135;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count144;
    panda$collections$Iterator* iter145 = NULL;
    panda$collections$Iterator* $tmp146;
    panda$collections$Iterator* $tmp147;
    panda$core$Object* $tmp158;
    panda$core$Int64 $finallyReturn162;
    int $tmp143;
    {
        count144 = ((panda$core$Int64) { 0 });
        panda$collections$Iterator* $tmp148 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
        $tmp147 = $tmp148;
        $tmp146 = $tmp147;
        iter145 = $tmp146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
        $l149:;
        ITable* $tmp152 = iter145->$class->itable;
        while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp152 = $tmp152->next;
        }
        $fn154 $tmp153 = $tmp152->methods[0];
        panda$core$Bit $tmp155 = $tmp153(iter145);
        panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
        bool $tmp151 = $tmp156.value;
        if (!$tmp151) goto $l150;
        {
            panda$core$Int64 $tmp157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count144, ((panda$core$Int64) { 1 }));
            count144 = $tmp157;
            ITable* $tmp159 = iter145->$class->itable;
            while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp159 = $tmp159->next;
            }
            $fn161 $tmp160 = $tmp159->methods[1];
            panda$core$Object* $tmp162 = $tmp160(iter145);
            $tmp158 = $tmp162;
            panda$core$Panda$unref$panda$core$Object($tmp158);
        }
        goto $l149;
        $l150:;
        $finallyReturn162 = count144;
        $tmp143 = 0;
        goto $l141;
        $l164:;
        return $finallyReturn162;
    }
    $l141:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter145));
    iter145 = NULL;
    switch ($tmp143) {
        case 0: goto $l164;
    }
    $l166:;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $finallyReturn166;
    $finallyReturn166 = self->_length;
    return $finallyReturn166;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $finallyReturn169;
    panda$core$Range$LTpanda$core$Int64$GT $tmp172;
    panda$core$Bit $finallyReturn186;
    panda$core$Bit $finallyReturn194;
    panda$core$Bit $tmp169 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp169.value) {
    {
        $finallyReturn169 = ((panda$core$Bit) { false });
        return $finallyReturn169;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp172, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
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
        panda$core$Bit $tmp186 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i173.value], p_other->data[i173.value]);
        if ($tmp186.value) {
        {
            $finallyReturn186 = ((panda$core$Bit) { false });
            return $finallyReturn186;
        }
        }
    }
    $l181:;
    int64_t $tmp190 = $tmp176 - i173.value;
    if ($tmp177) goto $l191; else goto $l192;
    $l191:;
    if ((uint64_t) $tmp190 >= 1) goto $l189; else goto $l180;
    $l192:;
    if ((uint64_t) $tmp190 > 1) goto $l189; else goto $l180;
    $l189:;
    i173.value += 1;
    goto $l178;
    $l180:;
    $finallyReturn194 = ((panda$core$Bit) { true });
    return $finallyReturn194;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $finallyReturn197;
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
    panda$core$Bit $finallyReturn216;
    panda$core$Bit $finallyReturn224;
    panda$core$Bit $tmp197 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp197.value) {
    {
        $finallyReturn197 = ((panda$core$Bit) { false });
        return $finallyReturn197;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp200, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
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
        panda$core$Int64 $tmp214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp215 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp214, i201);
        panda$core$Bit $tmp216 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp215.value], p_other->data[i201.value]);
        if ($tmp216.value) {
        {
            $finallyReturn216 = ((panda$core$Bit) { false });
            return $finallyReturn216;
        }
        }
    }
    $l209:;
    int64_t $tmp220 = $tmp204 - i201.value;
    if ($tmp205) goto $l221; else goto $l222;
    $l221:;
    if ((uint64_t) $tmp220 >= 1) goto $l219; else goto $l208;
    $l222:;
    if ((uint64_t) $tmp220 > 1) goto $l219; else goto $l208;
    $l219:;
    i201.value += 1;
    goto $l206;
    $l208:;
    $finallyReturn224 = ((panda$core$Bit) { true });
    return $finallyReturn224;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $finallyReturn227;
    panda$core$String* $tmp229;
    panda$core$Int64 start231;
    panda$core$Int64 end241;
    panda$core$String* $finallyReturn251;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp255;
    panda$core$String$Index $tmp256;
    panda$core$String$Index $tmp257;
    panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp227.value) {
    {
        $tmp229 = self;
        $finallyReturn227 = $tmp229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
        return $finallyReturn227;
    }
    }
    start231 = ((panda$core$Int64) { 0 });
    $l232:;
    panda$core$Bit $tmp236 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start231, self->_length);
    bool $tmp235 = $tmp236.value;
    if (!$tmp235) goto $l237;
    panda$core$Bit $tmp238 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start231.value]);
    $tmp235 = $tmp238.value;
    $l237:;
    panda$core$Bit $tmp239 = { $tmp235 };
    bool $tmp234 = $tmp239.value;
    if (!$tmp234) goto $l233;
    {
        panda$core$Int64 $tmp240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start231, ((panda$core$Int64) { 1 }));
        start231 = $tmp240;
    }
    goto $l232;
    $l233:;
    panda$core$Int64 $tmp242 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end241 = $tmp242;
    $l243:;
    panda$core$Bit $tmp247 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end241, start231);
    bool $tmp246 = $tmp247.value;
    if (!$tmp246) goto $l248;
    panda$core$Bit $tmp249 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end241.value]);
    $tmp246 = $tmp249.value;
    $l248:;
    panda$core$Bit $tmp250 = { $tmp246 };
    bool $tmp245 = $tmp250.value;
    if (!$tmp245) goto $l244;
    {
        panda$core$Int64 $tmp251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end241, ((panda$core$Int64) { 1 }));
        end241 = $tmp251;
    }
    goto $l243;
    $l244:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp256, start231);
    panda$core$String$Index$init$panda$core$Int64(&$tmp257, end241);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp255, $tmp256, $tmp257, ((panda$core$Bit) { true }));
    panda$core$String* $tmp258 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp255);
    $tmp254 = $tmp258;
    $tmp253 = $tmp254;
    $finallyReturn251 = $tmp253;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    return $finallyReturn251;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result260;
    panda$core$Range$LTpanda$core$Int64$GT $tmp262;
    panda$core$Range$LTpanda$core$Int64$GT $tmp282;
    panda$core$String* $finallyReturn302;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    panda$core$Int64 $tmp261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result260 = ((panda$core$Char8*) pandaZAlloc($tmp261.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp262, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp264 = $tmp262.min.value;
    panda$core$Int64 i263 = { $tmp264 };
    int64_t $tmp266 = $tmp262.max.value;
    bool $tmp267 = $tmp262.inclusive.value;
    if ($tmp267) goto $l274; else goto $l275;
    $l274:;
    if ($tmp264 <= $tmp266) goto $l268; else goto $l270;
    $l275:;
    if ($tmp264 < $tmp266) goto $l268; else goto $l270;
    $l268:;
    {
        result260[i263.value] = self->data[i263.value];
    }
    $l271:;
    int64_t $tmp277 = $tmp266 - i263.value;
    if ($tmp267) goto $l278; else goto $l279;
    $l278:;
    if ((uint64_t) $tmp277 >= 1) goto $l276; else goto $l270;
    $l279:;
    if ((uint64_t) $tmp277 > 1) goto $l276; else goto $l270;
    $l276:;
    i263.value += 1;
    goto $l268;
    $l270:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp282, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp284 = $tmp282.min.value;
    panda$core$Int64 i283 = { $tmp284 };
    int64_t $tmp286 = $tmp282.max.value;
    bool $tmp287 = $tmp282.inclusive.value;
    if ($tmp287) goto $l294; else goto $l295;
    $l294:;
    if ($tmp284 <= $tmp286) goto $l288; else goto $l290;
    $l295:;
    if ($tmp284 < $tmp286) goto $l288; else goto $l290;
    $l288:;
    {
        panda$core$Int64 $tmp296 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i283);
        result260[$tmp296.value] = p_other->data[i283.value];
    }
    $l291:;
    int64_t $tmp298 = $tmp286 - i283.value;
    if ($tmp287) goto $l299; else goto $l300;
    $l299:;
    if ((uint64_t) $tmp298 >= 1) goto $l297; else goto $l290;
    $l300:;
    if ((uint64_t) $tmp298 > 1) goto $l297; else goto $l290;
    $l297:;
    i283.value += 1;
    goto $l288;
    $l290:;
    panda$core$String* $tmp306 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp307 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp306, result260, $tmp307);
    $tmp305 = $tmp306;
    $tmp304 = $tmp305;
    $finallyReturn302 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    return $finallyReturn302;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $finallyReturn308;
    panda$core$String* $tmp310;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$String* $tmp314 = (($fn313) p_other->$class->vtable[0])(p_other);
    $tmp312 = $tmp314;
    panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp312);
    $tmp311 = $tmp315;
    $tmp310 = $tmp311;
    $finallyReturn308 = $tmp310;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp310));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $finallyReturn308;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result320 = NULL;
    panda$core$MutableString* $tmp321;
    panda$core$MutableString* $tmp322;
    panda$core$Range$LTpanda$core$Int64$GT $tmp324;
    panda$core$String* $finallyReturn343;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    int $tmp319;
    {
        panda$core$MutableString* $tmp323 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp323);
        $tmp322 = $tmp323;
        $tmp321 = $tmp322;
        result320 = $tmp321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp324, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp326 = $tmp324.min.value;
        panda$core$Int64 i325 = { $tmp326 };
        int64_t $tmp328 = $tmp324.max.value;
        bool $tmp329 = $tmp324.inclusive.value;
        if ($tmp329) goto $l336; else goto $l337;
        $l336:;
        if ($tmp326 <= $tmp328) goto $l330; else goto $l332;
        $l337:;
        if ($tmp326 < $tmp328) goto $l330; else goto $l332;
        $l330:;
        {
            panda$core$MutableString$append$panda$core$String(result320, self);
        }
        $l333:;
        int64_t $tmp339 = $tmp328 - i325.value;
        if ($tmp329) goto $l340; else goto $l341;
        $l340:;
        if ((uint64_t) $tmp339 >= 1) goto $l338; else goto $l332;
        $l341:;
        if ((uint64_t) $tmp339 > 1) goto $l338; else goto $l332;
        $l338:;
        i325.value += 1;
        goto $l330;
        $l332:;
        panda$core$String* $tmp347 = panda$core$MutableString$finish$R$panda$core$String(result320);
        $tmp346 = $tmp347;
        $tmp345 = $tmp346;
        $finallyReturn343 = $tmp345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
        $tmp319 = 0;
        goto $l317;
        $l348:;
        return $finallyReturn343;
    }
    $l317:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result320));
    result320 = NULL;
    switch ($tmp319) {
        case 0: goto $l348;
    }
    $l350:;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $finallyReturn350;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp356 = (($fn355) p_o->$class->vtable[0])(p_o);
    $tmp354 = $tmp356;
    panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, p_s);
    $tmp353 = $tmp357;
    $tmp352 = $tmp353;
    $finallyReturn350 = $tmp352;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
    return $finallyReturn350;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $finallyReturn359;
    panda$core$Range$LTpanda$core$Int64$GT $tmp362;
    panda$core$Bit $finallyReturn376;
    panda$core$Bit $finallyReturn384;
    panda$core$Bit $tmp359 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp359.value) {
    {
        $finallyReturn359 = ((panda$core$Bit) { false });
        return $finallyReturn359;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp362, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp364 = $tmp362.min.value;
    panda$core$Int64 i363 = { $tmp364 };
    int64_t $tmp366 = $tmp362.max.value;
    bool $tmp367 = $tmp362.inclusive.value;
    if ($tmp367) goto $l374; else goto $l375;
    $l374:;
    if ($tmp364 <= $tmp366) goto $l368; else goto $l370;
    $l375:;
    if ($tmp364 < $tmp366) goto $l368; else goto $l370;
    $l368:;
    {
        panda$core$Bit $tmp376 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i363.value], p_other->data[i363.value]);
        if ($tmp376.value) {
        {
            $finallyReturn376 = ((panda$core$Bit) { false });
            return $finallyReturn376;
        }
        }
    }
    $l371:;
    int64_t $tmp380 = $tmp366 - i363.value;
    if ($tmp367) goto $l381; else goto $l382;
    $l381:;
    if ((uint64_t) $tmp380 >= 1) goto $l379; else goto $l370;
    $l382:;
    if ((uint64_t) $tmp380 > 1) goto $l379; else goto $l370;
    $l379:;
    i363.value += 1;
    goto $l368;
    $l370:;
    $finallyReturn384 = ((panda$core$Bit) { true });
    return $finallyReturn384;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $finallyReturn386;
    panda$core$Bit $tmp388 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
    $finallyReturn386 = $tmp389;
    return $finallyReturn386;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx391;
    panda$core$Char8 c392;
    panda$core$Int32 result393;
    panda$core$Char32 $finallyReturn396;
    panda$core$Char32 $tmp398;
    panda$core$Char32 $finallyReturn409;
    panda$core$Char32 $tmp411;
    panda$core$Char32 $finallyReturn427;
    panda$core$Char32 $tmp429;
    panda$core$Char32 $finallyReturn448;
    panda$core$Char32 $tmp450;
    idx391 = p_index.value;
    c392 = self->data[idx391.value];
    panda$core$Int32 $tmp394 = panda$core$Char8$convert$R$panda$core$Int32(c392);
    result393 = $tmp394;
    int64_t $tmp395 = ((int64_t) c392.value) & 255;
    bool $tmp396 = $tmp395 < 192;
    if (((panda$core$Bit) { $tmp396 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp398, result393);
        $finallyReturn396 = $tmp398;
        return $finallyReturn396;
    }
    }
    int64_t $tmp400 = ((int64_t) c392.value) & 255;
    bool $tmp401 = $tmp400 < 224;
    if (((panda$core$Bit) { $tmp401 }).value) {
    {
        panda$core$Int64 $tmp402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp403 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp402, self->_length);
        PANDA_ASSERT($tmp403.value);
        panda$core$Int32 $tmp404 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result393, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp405 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp404, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp406 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp407 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp406.value]);
        panda$core$Int32 $tmp408 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp407, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp409 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp405, $tmp408);
        result393 = $tmp409;
        panda$core$Char32$init$panda$core$Int32(&$tmp411, result393);
        $finallyReturn409 = $tmp411;
        return $finallyReturn409;
    }
    }
    int64_t $tmp413 = ((int64_t) c392.value) & 255;
    bool $tmp414 = $tmp413 < 240;
    if (((panda$core$Bit) { $tmp414 }).value) {
    {
        panda$core$Int64 $tmp415 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp416 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp415, self->_length);
        PANDA_ASSERT($tmp416.value);
        panda$core$Int32 $tmp417 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result393, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp418 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp417, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp419 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp420 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp419.value]);
        panda$core$Int32 $tmp421 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp420, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp422 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp421, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp423 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp418, $tmp422);
        panda$core$Int64 $tmp424 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp425 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp424.value]);
        panda$core$Int32 $tmp426 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp425, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp427 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp423, $tmp426);
        result393 = $tmp427;
        panda$core$Char32$init$panda$core$Int32(&$tmp429, result393);
        $finallyReturn427 = $tmp429;
        return $finallyReturn427;
    }
    }
    panda$core$Int64 $tmp431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp432 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp431, self->_length);
    PANDA_ASSERT($tmp432.value);
    panda$core$Int32 $tmp433 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result393, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp434 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp433, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp435 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp436 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp435.value]);
    panda$core$Int32 $tmp437 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp436, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp438 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp437, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp439 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp434, $tmp438);
    panda$core$Int64 $tmp440 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp441 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp440.value]);
    panda$core$Int32 $tmp442 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp441, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp443 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp442, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp444 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp439, $tmp443);
    panda$core$Int64 $tmp445 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp446 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp445.value]);
    panda$core$Int32 $tmp447 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp446, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp448 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp444, $tmp447);
    result393 = $tmp448;
    panda$core$Char32$init$panda$core$Int32(&$tmp450, result393);
    $finallyReturn448 = $tmp450;
    return $finallyReturn448;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $finallyReturn451;
    panda$core$String$Index $tmp453 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp454 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp453, p_index);
    panda$core$Char32 $tmp455 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp454);
    $finallyReturn451 = $tmp455;
    return $finallyReturn451;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $finallyReturn456;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp461 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp460, (self->data + p_r.min.value.value), $tmp461, self);
    $tmp459 = $tmp460;
    $tmp458 = $tmp459;
    $finallyReturn456 = $tmp458;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
    return $finallyReturn456;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min463;
    panda$core$String$Index max465;
    panda$core$String* $finallyReturn467;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp471;
    memset(&min463, 0, sizeof(min463));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min463 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp464 = panda$core$String$start$R$panda$core$String$Index(self);
        min463 = $tmp464;
    }
    }
    memset(&max465, 0, sizeof(max465));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max465 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp466 = panda$core$String$end$R$panda$core$String$Index(self);
        max465 = $tmp466;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp467 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max465);
            max465 = $tmp467;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp471, min463, max465, p_r.inclusive);
    panda$core$String* $tmp472 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp471);
    $tmp470 = $tmp472;
    $tmp469 = $tmp470;
    $finallyReturn467 = $tmp469;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
    return $finallyReturn467;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current477;
    panda$core$MutableString* result478 = NULL;
    panda$core$MutableString* $tmp479;
    panda$core$MutableString* $tmp480;
    panda$core$Int64 max482;
    panda$core$Char8 c488;
    panda$core$String* $finallyReturn498;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    int $tmp476;
    {
        current477 = p_r.min.value;
        panda$core$MutableString* $tmp481 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp481);
        $tmp480 = $tmp481;
        $tmp479 = $tmp480;
        result478 = $tmp479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        max482 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp483 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max482, ((panda$core$Int64) { 1 }));
            max482 = $tmp483;
        }
        }
        $l484:;
        panda$core$Bit $tmp487 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current477, max482);
        bool $tmp486 = $tmp487.value;
        if (!$tmp486) goto $l485;
        {
            c488 = self->data[current477.value];
            panda$core$MutableString$append$panda$core$Char8(result478, c488);
            panda$core$Int64 $tmp489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current477, ((panda$core$Int64) { 1 }));
            current477 = $tmp489;
            int64_t $tmp490 = ((int64_t) c488.value) & 255;
            bool $tmp491 = $tmp490 >= 192;
            if (((panda$core$Bit) { $tmp491 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result478, self->data[current477.value]);
                panda$core$Int64 $tmp492 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current477, ((panda$core$Int64) { 1 }));
                current477 = $tmp492;
            }
            }
            int64_t $tmp493 = ((int64_t) c488.value) & 255;
            bool $tmp494 = $tmp493 >= 224;
            if (((panda$core$Bit) { $tmp494 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result478, self->data[current477.value]);
                panda$core$Int64 $tmp495 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current477, ((panda$core$Int64) { 1 }));
                current477 = $tmp495;
            }
            }
            int64_t $tmp496 = ((int64_t) c488.value) & 255;
            bool $tmp497 = $tmp496 >= 240;
            if (((panda$core$Bit) { $tmp497 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result478, self->data[current477.value]);
                panda$core$Int64 $tmp498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current477, ((panda$core$Int64) { 1 }));
                current477 = $tmp498;
            }
            }
        }
        goto $l484;
        $l485:;
        panda$core$String* $tmp502 = panda$core$MutableString$finish$R$panda$core$String(result478);
        $tmp501 = $tmp502;
        $tmp500 = $tmp501;
        $finallyReturn498 = $tmp500;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
        $tmp476 = 0;
        goto $l474;
        $l503:;
        return $finallyReturn498;
    }
    $l474:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result478));
    result478 = NULL;
    switch ($tmp476) {
        case 0: goto $l503;
    }
    $l505:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String* $finallyReturn506;
    panda$core$String* $tmp508;
    panda$core$String$Index min511;
    panda$core$String$Index max513;
    panda$core$String* $finallyReturn515;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp519;
    panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp506.value) {
    {
        $tmp508 = &$s509;
        $finallyReturn506 = $tmp508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
        return $finallyReturn506;
    }
    }
    memset(&min511, 0, sizeof(min511));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min511 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp512 = panda$core$String$start$R$panda$core$String$Index(self);
        min511 = $tmp512;
    }
    }
    memset(&max513, 0, sizeof(max513));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max513 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp514 = panda$core$String$end$R$panda$core$String$Index(self);
        max513 = $tmp514;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp515 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max513);
            max513 = $tmp515;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp519, min511, max513, p_r.inclusive);
    panda$core$String* $tmp520 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp519);
    $tmp518 = $tmp520;
    $tmp517 = $tmp518;
    $finallyReturn515 = $tmp517;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
    return $finallyReturn515;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String* $finallyReturn525;
    panda$core$String* $tmp527;
    panda$core$Int64 step531;
    panda$core$Int64 current532;
    panda$core$Int64 end537;
    panda$core$MutableString* result541 = NULL;
    panda$core$MutableString* $tmp542;
    panda$core$MutableString* $tmp543;
    panda$core$Char8 c550;
    panda$core$Range$LTpanda$core$Int64$GT $tmp561;
    panda$core$String* $finallyReturn575;
    panda$core$String* $tmp577;
    panda$core$String* $tmp578;
    panda$core$String$Index $tmp582;
    panda$core$Char8 c595;
    panda$core$Int64 old596;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp617;
    panda$core$String* $finallyReturn636;
    panda$core$String* $tmp638;
    panda$core$String* $tmp639;
    panda$core$String$Index $tmp643;
    panda$core$Char8 c667;
    panda$core$String* $finallyReturn676;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    int $tmp524;
    {
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
        if ($tmp525.value) {
        {
            $tmp527 = &$s528;
            $finallyReturn525 = $tmp527;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
            $tmp524 = 0;
            goto $l522;
            $l529:;
            return $finallyReturn525;
        }
        }
        step531 = p_r.step;
        memset(&current532, 0, sizeof(current532));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current532 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Bit $tmp533 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step531, ((panda$core$Int64) { 0 }));
        if ($tmp533.value) {
        {
            panda$core$String$Index $tmp534 = panda$core$String$start$R$panda$core$String$Index(self);
            current532 = $tmp534.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp535 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp536 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp535);
            current532 = $tmp536.value;
        }
        }
        }
        memset(&end537, 0, sizeof(end537));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end537 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Bit $tmp538 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step531, ((panda$core$Int64) { 0 }));
        if ($tmp538.value) {
        {
            panda$core$String$Index $tmp539 = panda$core$String$end$R$panda$core$String$Index(self);
            end537 = $tmp539.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp540 = panda$core$String$start$R$panda$core$String$Index(self);
            end537 = $tmp540.value;
        }
        }
        }
        panda$core$MutableString* $tmp544 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp544);
        $tmp543 = $tmp544;
        $tmp542 = $tmp543;
        result541 = $tmp542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Bit $tmp545 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp545.value) {
        {
            $l546:;
            panda$core$Bit $tmp549 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current532, end537);
            bool $tmp548 = $tmp549.value;
            if (!$tmp548) goto $l547;
            {
                c550 = self->data[current532.value];
                panda$core$MutableString$append$panda$core$Char8(result541, c550);
                panda$core$Int64 $tmp551 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                current532 = $tmp551;
                int64_t $tmp552 = ((int64_t) c550.value) & 255;
                bool $tmp553 = $tmp552 >= 192;
                if (((panda$core$Bit) { $tmp553 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                    panda$core$Int64 $tmp554 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                    current532 = $tmp554;
                }
                }
                int64_t $tmp555 = ((int64_t) c550.value) & 255;
                bool $tmp556 = $tmp555 >= 224;
                if (((panda$core$Bit) { $tmp556 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                    panda$core$Int64 $tmp557 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                    current532 = $tmp557;
                }
                }
                int64_t $tmp558 = ((int64_t) c550.value) & 255;
                bool $tmp559 = $tmp558 >= 240;
                if (((panda$core$Bit) { $tmp559 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                    panda$core$Int64 $tmp560 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                    current532 = $tmp560;
                }
                }
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp561, ((panda$core$Int64) { 1 }), step531, ((panda$core$Bit) { false }));
                int64_t $tmp563 = $tmp561.min.value;
                panda$core$Int64 i562 = { $tmp563 };
                int64_t $tmp565 = $tmp561.max.value;
                bool $tmp566 = $tmp561.inclusive.value;
                if ($tmp566) goto $l573; else goto $l574;
                $l573:;
                if ($tmp563 <= $tmp565) goto $l567; else goto $l569;
                $l574:;
                if ($tmp563 < $tmp565) goto $l567; else goto $l569;
                $l567:;
                {
                    panda$core$Bit $tmp575 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current532, end537);
                    if ($tmp575.value) {
                    {
                        panda$core$String* $tmp579 = panda$core$MutableString$convert$R$panda$core$String(result541);
                        $tmp578 = $tmp579;
                        $tmp577 = $tmp578;
                        $finallyReturn575 = $tmp577;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                        $tmp524 = 1;
                        goto $l522;
                        $l580:;
                        return $finallyReturn575;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp582, current532);
                    panda$core$String$Index $tmp583 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp582);
                    current532 = $tmp583.value;
                }
                $l570:;
                int64_t $tmp585 = $tmp565 - i562.value;
                if ($tmp566) goto $l586; else goto $l587;
                $l586:;
                if ((uint64_t) $tmp585 >= 1) goto $l584; else goto $l569;
                $l587:;
                if ((uint64_t) $tmp585 > 1) goto $l584; else goto $l569;
                $l584:;
                i562.value += 1;
                goto $l567;
                $l569:;
            }
            goto $l546;
            $l547:;
        }
        }
        else {
        {
            panda$core$Bit $tmp590 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp590.value);
            $l591:;
            panda$core$Bit $tmp594 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current532, end537);
            bool $tmp593 = $tmp594.value;
            if (!$tmp593) goto $l592;
            {
                c595 = self->data[current532.value];
                panda$core$MutableString$append$panda$core$Char8(result541, c595);
                old596 = current532;
                panda$core$Int64 $tmp597 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                current532 = $tmp597;
                int64_t $tmp598 = ((int64_t) c595.value) & 255;
                bool $tmp599 = $tmp598 >= 192;
                if (((panda$core$Bit) { $tmp599 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                    panda$core$Int64 $tmp600 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                    current532 = $tmp600;
                }
                }
                int64_t $tmp601 = ((int64_t) c595.value) & 255;
                bool $tmp602 = $tmp601 >= 224;
                if (((panda$core$Bit) { $tmp602 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                    panda$core$Int64 $tmp603 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                    current532 = $tmp603;
                }
                }
                int64_t $tmp604 = ((int64_t) c595.value) & 255;
                bool $tmp605 = $tmp604 >= 240;
                if (((panda$core$Bit) { $tmp605 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                }
                }
                panda$core$Int64 $tmp606 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old596, ((panda$core$Int64) { 1 }));
                current532 = $tmp606;
                $l607:;
                int64_t $tmp611 = ((int64_t) self->data[current532.value].value) & 255;
                bool $tmp612 = $tmp611 >= 128;
                bool $tmp610 = $tmp612;
                if (!$tmp610) goto $l613;
                int64_t $tmp614 = ((int64_t) self->data[current532.value].value) & 255;
                bool $tmp615 = $tmp614 < 192;
                $tmp610 = $tmp615;
                $l613:;
                bool $tmp609 = ((panda$core$Bit) { $tmp610 }).value;
                if (!$tmp609) goto $l608;
                {
                    panda$core$Int64 $tmp616 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                    current532 = $tmp616;
                }
                goto $l607;
                $l608:;
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp617, ((panda$core$Int64) { -1 }), step531, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
                int64_t $tmp619 = $tmp617.start.value;
                panda$core$Int64 i618 = { $tmp619 };
                int64_t $tmp621 = $tmp617.end.value;
                int64_t $tmp622 = $tmp617.step.value;
                bool $tmp623 = $tmp617.inclusive.value;
                bool $tmp630 = $tmp622 > 0;
                if ($tmp630) goto $l628; else goto $l629;
                $l628:;
                if ($tmp623) goto $l631; else goto $l632;
                $l631:;
                if ($tmp619 <= $tmp621) goto $l624; else goto $l626;
                $l632:;
                if ($tmp619 < $tmp621) goto $l624; else goto $l626;
                $l629:;
                if ($tmp623) goto $l633; else goto $l634;
                $l633:;
                if ($tmp619 >= $tmp621) goto $l624; else goto $l626;
                $l634:;
                if ($tmp619 > $tmp621) goto $l624; else goto $l626;
                $l624:;
                {
                    panda$core$Bit $tmp636 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current532, end537);
                    if ($tmp636.value) {
                    {
                        panda$core$String* $tmp640 = panda$core$MutableString$convert$R$panda$core$String(result541);
                        $tmp639 = $tmp640;
                        $tmp638 = $tmp639;
                        $finallyReturn636 = $tmp638;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                        $tmp524 = 2;
                        goto $l522;
                        $l641:;
                        return $finallyReturn636;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp643, current532);
                    panda$core$String$Index $tmp644 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp643);
                    current532 = $tmp644.value;
                }
                $l627:;
                if ($tmp630) goto $l646; else goto $l647;
                $l646:;
                int64_t $tmp648 = $tmp621 - i618.value;
                if ($tmp623) goto $l649; else goto $l650;
                $l649:;
                if ((uint64_t) $tmp648 >= $tmp622) goto $l645; else goto $l626;
                $l650:;
                if ((uint64_t) $tmp648 > $tmp622) goto $l645; else goto $l626;
                $l647:;
                int64_t $tmp652 = i618.value - $tmp621;
                if ($tmp623) goto $l653; else goto $l654;
                $l653:;
                if ((uint64_t) $tmp652 >= -$tmp622) goto $l645; else goto $l626;
                $l654:;
                if ((uint64_t) $tmp652 > -$tmp622) goto $l645; else goto $l626;
                $l645:;
                i618.value += $tmp622;
                goto $l624;
                $l626:;
            }
            goto $l591;
            $l592:;
        }
        }
        bool $tmp658 = p_r.inclusive.value;
        if ($tmp658) goto $l659;
        $tmp658 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l659:;
        panda$core$Bit $tmp660 = { $tmp658 };
        bool $tmp657 = $tmp660.value;
        if (!$tmp657) goto $l661;
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current532, end537);
        $tmp657 = $tmp662.value;
        $l661:;
        panda$core$Bit $tmp663 = { $tmp657 };
        bool $tmp656 = $tmp663.value;
        if (!$tmp656) goto $l664;
        panda$core$Bit $tmp665 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end537, self->_length);
        $tmp656 = $tmp665.value;
        $l664:;
        panda$core$Bit $tmp666 = { $tmp656 };
        if ($tmp666.value) {
        {
            c667 = self->data[current532.value];
            panda$core$MutableString$append$panda$core$Char8(result541, c667);
            panda$core$Int64 $tmp668 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
            current532 = $tmp668;
            int64_t $tmp669 = ((int64_t) c667.value) & 255;
            bool $tmp670 = $tmp669 >= 192;
            if (((panda$core$Bit) { $tmp670 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                panda$core$Int64 $tmp671 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                current532 = $tmp671;
            }
            }
            int64_t $tmp672 = ((int64_t) c667.value) & 255;
            bool $tmp673 = $tmp672 >= 224;
            if (((panda$core$Bit) { $tmp673 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
                panda$core$Int64 $tmp674 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current532, ((panda$core$Int64) { 1 }));
                current532 = $tmp674;
            }
            }
            int64_t $tmp675 = ((int64_t) c667.value) & 255;
            bool $tmp676 = $tmp675 >= 240;
            if (((panda$core$Bit) { $tmp676 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result541, self->data[current532.value]);
            }
            }
        }
        }
        panda$core$String* $tmp680 = panda$core$MutableString$finish$R$panda$core$String(result541);
        $tmp679 = $tmp680;
        $tmp678 = $tmp679;
        $finallyReturn676 = $tmp678;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        $tmp524 = 3;
        goto $l522;
        $l681:;
        return $finallyReturn676;
    }
    $l522:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result541));
    result541 = NULL;
    switch ($tmp524) {
        case 3: goto $l681;
        case 2: goto $l641;
        case 1: goto $l580;
        case 0: goto $l529;
    }
    $l683:;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start684;
    panda$core$String$Index$nullable end687;
    panda$core$String* $finallyReturn689;
    panda$core$String* $tmp691;
    panda$core$String* $tmp692;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp693;
    memset(&start684, 0, sizeof(start684));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp685 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp686 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp685, ((panda$core$Int64) p_r.min.value));
        start684 = ((panda$core$String$Index$nullable) { $tmp686, true });
    }
    }
    else {
    {
        start684 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end687, 0, sizeof(end687));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp688 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp689 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp688, ((panda$core$Int64) p_r.max.value));
        end687 = ((panda$core$String$Index$nullable) { $tmp689, true });
    }
    }
    else {
    {
        end687 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp693, start684, end687, p_r.inclusive);
    panda$core$String* $tmp694 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp693);
    $tmp692 = $tmp694;
    $tmp691 = $tmp692;
    $finallyReturn689 = $tmp691;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
    return $finallyReturn689;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start696;
    panda$core$String$Index$nullable end699;
    panda$core$String* $finallyReturn701;
    panda$core$String* $tmp703;
    panda$core$String* $tmp704;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp705;
    memset(&start696, 0, sizeof(start696));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp697 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp698 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp697, ((panda$core$Int64) p_r.start.value));
        start696 = ((panda$core$String$Index$nullable) { $tmp698, true });
    }
    }
    else {
    {
        start696 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end699, 0, sizeof(end699));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp700 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp701 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp700, ((panda$core$Int64) p_r.end.value));
        end699 = ((panda$core$String$Index$nullable) { $tmp701, true });
    }
    }
    else {
    {
        end699 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp705, start696, end699, p_r.step, p_r.inclusive);
    panda$core$String* $tmp706 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp705);
    $tmp704 = $tmp706;
    $tmp703 = $tmp704;
    $finallyReturn701 = $tmp703;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp703));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
    return $finallyReturn701;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp708;
    panda$core$Bit $finallyReturn722;
    panda$core$Bit $finallyReturn730;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp708, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp710 = $tmp708.min.value;
    panda$core$Int64 i709 = { $tmp710 };
    int64_t $tmp712 = $tmp708.max.value;
    bool $tmp713 = $tmp708.inclusive.value;
    if ($tmp713) goto $l720; else goto $l721;
    $l720:;
    if ($tmp710 <= $tmp712) goto $l714; else goto $l716;
    $l721:;
    if ($tmp710 < $tmp712) goto $l714; else goto $l716;
    $l714:;
    {
        panda$core$Bit $tmp722 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i709.value], p_c);
        if ($tmp722.value) {
        {
            $finallyReturn722 = ((panda$core$Bit) { true });
            return $finallyReturn722;
        }
        }
    }
    $l717:;
    int64_t $tmp726 = $tmp712 - i709.value;
    if ($tmp713) goto $l727; else goto $l728;
    $l727:;
    if ((uint64_t) $tmp726 >= 1) goto $l725; else goto $l716;
    $l728:;
    if ((uint64_t) $tmp726 > 1) goto $l725; else goto $l716;
    $l725:;
    i709.value += 1;
    goto $l714;
    $l716:;
    $finallyReturn730 = ((panda$core$Bit) { false });
    return $finallyReturn730;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $finallyReturn732;
    panda$core$String$Index$nullable $tmp734 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $finallyReturn732 = ((panda$core$Bit) { $tmp734.nonnull });
    return $finallyReturn732;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $finallyReturn735;
    panda$core$String$Index $tmp737 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp738 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp737);
    $finallyReturn735 = $tmp738;
    return $finallyReturn735;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $finallyReturn740;
    panda$core$Range$LTpanda$core$Int64$GT $tmp743;
    panda$core$Range$LTpanda$core$Int64$GT $tmp758;
    panda$core$String$Index$nullable $finallyReturn779;
    panda$core$String$Index $tmp781;
    panda$core$String$Index$nullable $finallyReturn788;
    panda$core$Bit $tmp740 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp740.value) {
    {
        $finallyReturn740 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $finallyReturn740;
    }
    }
    panda$core$Int64 $tmp744 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp743, p_start.value, $tmp744, ((panda$core$Bit) { true }));
    int64_t $tmp746 = $tmp743.min.value;
    panda$core$Int64 i745 = { $tmp746 };
    int64_t $tmp748 = $tmp743.max.value;
    bool $tmp749 = $tmp743.inclusive.value;
    if ($tmp749) goto $l756; else goto $l757;
    $l756:;
    if ($tmp746 <= $tmp748) goto $l750; else goto $l752;
    $l757:;
    if ($tmp746 < $tmp748) goto $l750; else goto $l752;
    $l750:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp758, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp760 = $tmp758.min.value;
        panda$core$Int64 j759 = { $tmp760 };
        int64_t $tmp762 = $tmp758.max.value;
        bool $tmp763 = $tmp758.inclusive.value;
        if ($tmp763) goto $l770; else goto $l771;
        $l770:;
        if ($tmp760 <= $tmp762) goto $l764; else goto $l766;
        $l771:;
        if ($tmp760 < $tmp762) goto $l764; else goto $l766;
        $l764:;
        {
            panda$core$Int64 $tmp772 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i745, j759);
            panda$core$Bit $tmp773 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp772.value], p_s->data[j759.value]);
            if ($tmp773.value) {
            {
                goto $l753;
            }
            }
        }
        $l767:;
        int64_t $tmp775 = $tmp762 - j759.value;
        if ($tmp763) goto $l776; else goto $l777;
        $l776:;
        if ((uint64_t) $tmp775 >= 1) goto $l774; else goto $l766;
        $l777:;
        if ((uint64_t) $tmp775 > 1) goto $l774; else goto $l766;
        $l774:;
        j759.value += 1;
        goto $l764;
        $l766:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp781, i745);
        $finallyReturn779 = ((panda$core$String$Index$nullable) { $tmp781, true });
        return $finallyReturn779;
    }
    $l753:;
    int64_t $tmp784 = $tmp748 - i745.value;
    if ($tmp749) goto $l785; else goto $l786;
    $l785:;
    if ((uint64_t) $tmp784 >= 1) goto $l783; else goto $l752;
    $l786:;
    if ((uint64_t) $tmp784 > 1) goto $l783; else goto $l752;
    $l783:;
    i745.value += 1;
    goto $l750;
    $l752:;
    $finallyReturn788 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $finallyReturn788;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $finallyReturn790;
    panda$core$String$Index $tmp792 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp793 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp792);
    $finallyReturn790 = $tmp793;
    return $finallyReturn790;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $finallyReturn795;
    panda$core$Int64 startPos798;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp801;
    panda$core$Range$LTpanda$core$Int64$GT $tmp820;
    panda$core$String$Index$nullable $finallyReturn841;
    panda$core$String$Index $tmp843;
    panda$core$String$Index$nullable $finallyReturn855;
    panda$core$Bit $tmp795 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp795.value) {
    {
        $finallyReturn795 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $finallyReturn795;
    }
    }
    panda$core$Int64 $tmp799 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp800 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp799);
    startPos798 = $tmp800;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp801, startPos798, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp803 = $tmp801.start.value;
    panda$core$Int64 i802 = { $tmp803 };
    int64_t $tmp805 = $tmp801.end.value;
    int64_t $tmp806 = $tmp801.step.value;
    bool $tmp807 = $tmp801.inclusive.value;
    bool $tmp814 = $tmp806 > 0;
    if ($tmp814) goto $l812; else goto $l813;
    $l812:;
    if ($tmp807) goto $l815; else goto $l816;
    $l815:;
    if ($tmp803 <= $tmp805) goto $l808; else goto $l810;
    $l816:;
    if ($tmp803 < $tmp805) goto $l808; else goto $l810;
    $l813:;
    if ($tmp807) goto $l817; else goto $l818;
    $l817:;
    if ($tmp803 >= $tmp805) goto $l808; else goto $l810;
    $l818:;
    if ($tmp803 > $tmp805) goto $l808; else goto $l810;
    $l808:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp820, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp822 = $tmp820.min.value;
        panda$core$Int64 j821 = { $tmp822 };
        int64_t $tmp824 = $tmp820.max.value;
        bool $tmp825 = $tmp820.inclusive.value;
        if ($tmp825) goto $l832; else goto $l833;
        $l832:;
        if ($tmp822 <= $tmp824) goto $l826; else goto $l828;
        $l833:;
        if ($tmp822 < $tmp824) goto $l826; else goto $l828;
        $l826:;
        {
            panda$core$Int64 $tmp834 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i802, j821);
            panda$core$Bit $tmp835 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp834.value], p_s->data[j821.value]);
            if ($tmp835.value) {
            {
                goto $l811;
            }
            }
        }
        $l829:;
        int64_t $tmp837 = $tmp824 - j821.value;
        if ($tmp825) goto $l838; else goto $l839;
        $l838:;
        if ((uint64_t) $tmp837 >= 1) goto $l836; else goto $l828;
        $l839:;
        if ((uint64_t) $tmp837 > 1) goto $l836; else goto $l828;
        $l836:;
        j821.value += 1;
        goto $l826;
        $l828:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp843, i802);
        $finallyReturn841 = ((panda$core$String$Index$nullable) { $tmp843, true });
        return $finallyReturn841;
    }
    $l811:;
    if ($tmp814) goto $l846; else goto $l847;
    $l846:;
    int64_t $tmp848 = $tmp805 - i802.value;
    if ($tmp807) goto $l849; else goto $l850;
    $l849:;
    if ((uint64_t) $tmp848 >= $tmp806) goto $l845; else goto $l810;
    $l850:;
    if ((uint64_t) $tmp848 > $tmp806) goto $l845; else goto $l810;
    $l847:;
    int64_t $tmp852 = i802.value - $tmp805;
    if ($tmp807) goto $l853; else goto $l854;
    $l853:;
    if ((uint64_t) $tmp852 >= -$tmp806) goto $l845; else goto $l810;
    $l854:;
    if ((uint64_t) $tmp852 > -$tmp806) goto $l845; else goto $l810;
    $l845:;
    i802.value += $tmp806;
    goto $l808;
    $l810:;
    $finallyReturn855 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $finallyReturn855;
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result861 = NULL;
    panda$core$MutableString* $tmp862;
    panda$core$MutableString* $tmp863;
    panda$core$String$Index index865;
    panda$core$String$Index$nullable nextIndex869;
    panda$core$String* $tmp871;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp872;
    panda$core$String* $tmp874;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp875;
    panda$core$String$Index $tmp877;
    panda$core$String* $finallyReturn878;
    panda$core$String* $tmp880;
    panda$core$String* $tmp881;
    int $tmp860;
    {
        panda$core$MutableString* $tmp864 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp864);
        $tmp863 = $tmp864;
        $tmp862 = $tmp863;
        result861 = $tmp862;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
        panda$core$String$Index $tmp866 = panda$core$String$start$R$panda$core$String$Index(self);
        index865 = $tmp866;
        $l867:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp870 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index865);
            nextIndex869 = $tmp870;
            if (((panda$core$Bit) { !nextIndex869.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp872, ((panda$core$String$Index$nullable) { index865, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp873 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp872);
                $tmp871 = $tmp873;
                panda$core$MutableString$append$panda$core$String(result861, $tmp871);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                goto $l868;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp875, index865, ((panda$core$String$Index) nextIndex869.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp876 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp875);
            $tmp874 = $tmp876;
            panda$core$MutableString$append$panda$core$String(result861, $tmp874);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
            panda$core$MutableString$append$panda$core$String(result861, p_replacement);
            panda$core$Int64 $tmp878 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex869.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp877, $tmp878);
            index865 = $tmp877;
        }
        }
        $l868:;
        panda$core$String* $tmp882 = panda$core$MutableString$finish$R$panda$core$String(result861);
        $tmp881 = $tmp882;
        $tmp880 = $tmp881;
        $finallyReturn878 = $tmp880;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp880));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
        $tmp860 = 0;
        goto $l858;
        $l883:;
        return $finallyReturn878;
    }
    $l858:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result861));
    result861 = NULL;
    switch ($tmp860) {
        case 0: goto $l883;
    }
    $l885:;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $finallyReturn885;
    panda$core$String$Index $tmp887;
    panda$core$String$Index$init$panda$core$Int64(&$tmp887, ((panda$core$Int64) { 0 }));
    $finallyReturn885 = $tmp887;
    return $finallyReturn885;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $finallyReturn888;
    panda$core$String$Index $tmp890;
    panda$core$String$Index$init$panda$core$Int64(&$tmp890, self->_length);
    $finallyReturn888 = $tmp890;
    return $finallyReturn888;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c893;
    panda$core$String$Index $finallyReturn895;
    panda$core$String$Index $tmp897;
    panda$core$String$Index $finallyReturn900;
    panda$core$String$Index $tmp902;
    panda$core$String$Index $finallyReturn905;
    panda$core$String$Index $tmp907;
    panda$core$String$Index $finallyReturn909;
    panda$core$String$Index $tmp911;
    panda$core$Bit $tmp892 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    PANDA_ASSERT($tmp892.value);
    int64_t $tmp894 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c893 = $tmp894;
    bool $tmp895 = c893 >= 240;
    if (((panda$core$Bit) { $tmp895 }).value) {
    {
        panda$core$Int64 $tmp898 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp897, $tmp898);
        $finallyReturn895 = $tmp897;
        return $finallyReturn895;
    }
    }
    bool $tmp900 = c893 >= 224;
    if (((panda$core$Bit) { $tmp900 }).value) {
    {
        panda$core$Int64 $tmp903 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp902, $tmp903);
        $finallyReturn900 = $tmp902;
        return $finallyReturn900;
    }
    }
    bool $tmp905 = c893 >= 192;
    if (((panda$core$Bit) { $tmp905 }).value) {
    {
        panda$core$Int64 $tmp908 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp907, $tmp908);
        $finallyReturn905 = $tmp907;
        return $finallyReturn905;
    }
    }
    panda$core$Int64 $tmp912 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp911, $tmp912);
    $finallyReturn909 = $tmp911;
    return $finallyReturn909;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue915;
    panda$core$String$Index $finallyReturn926;
    panda$core$String$Index $tmp928;
    panda$core$Bit $tmp914 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp914.value);
    panda$core$Int64 $tmp916 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue915 = $tmp916;
    $l917:;
    int64_t $tmp921 = ((int64_t) self->data[newValue915.value].value) & 255;
    bool $tmp922 = $tmp921 >= 128;
    bool $tmp920 = $tmp922;
    if (!$tmp920) goto $l923;
    int64_t $tmp924 = ((int64_t) self->data[newValue915.value].value) & 255;
    bool $tmp925 = $tmp924 < 192;
    $tmp920 = $tmp925;
    $l923:;
    bool $tmp919 = ((panda$core$Bit) { $tmp920 }).value;
    if (!$tmp919) goto $l918;
    {
        panda$core$Int64 $tmp926 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue915, ((panda$core$Int64) { 1 }));
        newValue915 = $tmp926;
    }
    goto $l917;
    $l918:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp928, newValue915);
    $finallyReturn926 = $tmp928;
    return $finallyReturn926;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result930;
    panda$core$Range$LTpanda$core$Int64$GT $tmp932;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp953;
    panda$core$String$Index $finallyReturn983;
    result930 = p_index;
    panda$core$Bit $tmp931 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp931.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp932, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp934 = $tmp932.min.value;
        panda$core$Int64 i933 = { $tmp934 };
        int64_t $tmp936 = $tmp932.max.value;
        bool $tmp937 = $tmp932.inclusive.value;
        if ($tmp937) goto $l944; else goto $l945;
        $l944:;
        if ($tmp934 <= $tmp936) goto $l938; else goto $l940;
        $l945:;
        if ($tmp934 < $tmp936) goto $l938; else goto $l940;
        $l938:;
        {
            panda$core$String$Index $tmp946 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result930);
            result930 = $tmp946;
        }
        $l941:;
        int64_t $tmp948 = $tmp936 - i933.value;
        if ($tmp937) goto $l949; else goto $l950;
        $l949:;
        if ((uint64_t) $tmp948 >= 1) goto $l947; else goto $l940;
        $l950:;
        if ((uint64_t) $tmp948 > 1) goto $l947; else goto $l940;
        $l947:;
        i933.value += 1;
        goto $l938;
        $l940:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp953, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp955 = $tmp953.start.value;
        panda$core$Int64 i954 = { $tmp955 };
        int64_t $tmp957 = $tmp953.end.value;
        int64_t $tmp958 = $tmp953.step.value;
        bool $tmp959 = $tmp953.inclusive.value;
        bool $tmp966 = $tmp958 > 0;
        if ($tmp966) goto $l964; else goto $l965;
        $l964:;
        if ($tmp959) goto $l967; else goto $l968;
        $l967:;
        if ($tmp955 <= $tmp957) goto $l960; else goto $l962;
        $l968:;
        if ($tmp955 < $tmp957) goto $l960; else goto $l962;
        $l965:;
        if ($tmp959) goto $l969; else goto $l970;
        $l969:;
        if ($tmp955 >= $tmp957) goto $l960; else goto $l962;
        $l970:;
        if ($tmp955 > $tmp957) goto $l960; else goto $l962;
        $l960:;
        {
            panda$core$String$Index $tmp972 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result930);
            result930 = $tmp972;
        }
        $l963:;
        if ($tmp966) goto $l974; else goto $l975;
        $l974:;
        int64_t $tmp976 = $tmp957 - i954.value;
        if ($tmp959) goto $l977; else goto $l978;
        $l977:;
        if ((uint64_t) $tmp976 >= $tmp958) goto $l973; else goto $l962;
        $l978:;
        if ((uint64_t) $tmp976 > $tmp958) goto $l973; else goto $l962;
        $l975:;
        int64_t $tmp980 = i954.value - $tmp957;
        if ($tmp959) goto $l981; else goto $l982;
        $l981:;
        if ((uint64_t) $tmp980 >= -$tmp958) goto $l973; else goto $l962;
        $l982:;
        if ((uint64_t) $tmp980 > -$tmp958) goto $l973; else goto $l962;
        $l973:;
        i954.value += $tmp958;
        goto $l960;
        $l962:;
    }
    }
    $finallyReturn983 = result930;
    return $finallyReturn983;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $finallyReturn985;
    panda$core$String* $tmp987;
    panda$core$String* $tmp988;
    panda$core$Char32 $tmp989;
    panda$core$Char32$init$panda$core$Int32(&$tmp989, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp990 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp989);
    $tmp988 = $tmp990;
    $tmp987 = $tmp988;
    $finallyReturn985 = $tmp987;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
    return $finallyReturn985;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $finallyReturn993;
    panda$core$String* $tmp995;
    panda$core$String* $finallyReturn996;
    panda$core$String* $tmp998;
    panda$core$String* $tmp999;
    panda$core$String* $tmp1000;
    panda$core$Int64 $tmp992 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp993 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp992, p_width);
    if ($tmp993.value) {
    {
        $tmp995 = self;
        $finallyReturn993 = $tmp995;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
        return $finallyReturn993;
    }
    }
    panda$core$Int64 $tmp1001 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1002 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1001);
    panda$core$String* $tmp1003 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1002);
    $tmp1000 = $tmp1003;
    panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1000);
    $tmp999 = $tmp1004;
    $tmp998 = $tmp999;
    $finallyReturn996 = $tmp998;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
    return $finallyReturn996;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $finallyReturn1005;
    panda$core$String* $tmp1007;
    panda$core$String* $tmp1008;
    panda$core$Char32 $tmp1009;
    panda$core$Char32$init$panda$core$Int32(&$tmp1009, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1010 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1009);
    $tmp1008 = $tmp1010;
    $tmp1007 = $tmp1008;
    $finallyReturn1005 = $tmp1007;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
    return $finallyReturn1005;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $finallyReturn1013;
    panda$core$String* $tmp1015;
    panda$core$String* $finallyReturn1016;
    panda$core$String* $tmp1018;
    panda$core$String* $tmp1019;
    panda$core$String* $tmp1020;
    panda$core$Int64 $tmp1012 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1013 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1012, p_width);
    if ($tmp1013.value) {
    {
        $tmp1015 = self;
        $finallyReturn1013 = $tmp1015;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1015));
        return $finallyReturn1013;
    }
    }
    panda$core$Int64 $tmp1021 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1022 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1021);
    panda$core$String* $tmp1023 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1022);
    $tmp1020 = $tmp1023;
    panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, self);
    $tmp1019 = $tmp1024;
    $tmp1018 = $tmp1019;
    $finallyReturn1016 = $tmp1018;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
    return $finallyReturn1016;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $finallyReturn1025;
    panda$core$String* $tmp1027;
    panda$core$String* $tmp1028;
    panda$core$Char32 $tmp1029;
    panda$core$Char32$init$panda$core$Int32(&$tmp1029, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1030 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1029);
    $tmp1028 = $tmp1030;
    $tmp1027 = $tmp1028;
    $finallyReturn1025 = $tmp1027;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
    return $finallyReturn1025;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $finallyReturn1033;
    panda$core$String* $tmp1035;
    panda$core$Int64 pad1037;
    panda$core$Int64 left1040;
    panda$core$Int64 right1042;
    panda$core$String* $finallyReturn1043;
    panda$core$String* $tmp1045;
    panda$core$String* $tmp1046;
    panda$core$String* $tmp1047;
    panda$core$String* $tmp1048;
    panda$core$String* $tmp1051;
    panda$core$Int64 $tmp1032 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1033 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1032, p_width);
    if ($tmp1033.value) {
    {
        $tmp1035 = self;
        $finallyReturn1033 = $tmp1035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
        return $finallyReturn1033;
    }
    }
    panda$core$Int64 $tmp1038 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1039 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1038);
    pad1037 = $tmp1039;
    panda$core$Int64 $tmp1041 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1037, ((panda$core$Int64) { 2 }));
    left1040 = $tmp1041;
    panda$core$Int64 $tmp1043 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1037, left1040);
    right1042 = $tmp1043;
    panda$core$String* $tmp1049 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1040);
    $tmp1048 = $tmp1049;
    panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, self);
    $tmp1047 = $tmp1050;
    panda$core$String* $tmp1052 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1042);
    $tmp1051 = $tmp1052;
    panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, $tmp1051);
    $tmp1046 = $tmp1053;
    $tmp1045 = $tmp1046;
    $finallyReturn1043 = $tmp1045;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
    return $finallyReturn1043;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $finallyReturn1054;
    panda$collections$Array* $tmp1056;
    panda$collections$Array* $tmp1057;
    panda$collections$Array* $tmp1058 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1057 = $tmp1058;
    $tmp1056 = $tmp1057;
    $finallyReturn1054 = $tmp1056;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1057));
    return $finallyReturn1054;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1063 = NULL;
    panda$collections$Array* $tmp1064;
    panda$collections$Array* $tmp1065;
    panda$core$String$Index index1067;
    panda$core$String$Index$nullable nextIndex1071;
    panda$core$String* $tmp1080;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1081;
    panda$core$String* $tmp1083;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1084;
    panda$core$String$Index $tmp1086;
    panda$collections$Array* $finallyReturn1087;
    panda$collections$Array* $tmp1089;
    int $tmp1062;
    {
        panda$collections$Array* $tmp1066 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1066);
        $tmp1065 = $tmp1066;
        $tmp1064 = $tmp1065;
        result1063 = $tmp1064;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
        panda$core$String$Index $tmp1068 = panda$core$String$start$R$panda$core$String$Index(self);
        index1067 = $tmp1068;
        $l1069:;
        while (true) {
        {
            memset(&nextIndex1071, 0, sizeof(nextIndex1071));
            panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1072.value) {
            {
                panda$core$String$Index $tmp1073 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1067);
                nextIndex1071 = ((panda$core$String$Index$nullable) { $tmp1073, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1074 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1067);
                nextIndex1071 = $tmp1074;
            }
            }
            bool $tmp1075 = ((panda$core$Bit) { !nextIndex1071.nonnull }).value;
            if ($tmp1075) goto $l1076;
            panda$core$Int64 $tmp1077 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1063->count, $tmp1077);
            $tmp1075 = $tmp1078.value;
            $l1076:;
            panda$core$Bit $tmp1079 = { $tmp1075 };
            if ($tmp1079.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1081, ((panda$core$String$Index$nullable) { index1067, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1082 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1081);
                $tmp1080 = $tmp1082;
                panda$collections$Array$add$panda$collections$Array$T(result1063, ((panda$core$Object*) $tmp1080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1080));
                goto $l1070;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1084, index1067, ((panda$core$String$Index) nextIndex1071.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1085 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1084);
            $tmp1083 = $tmp1085;
            panda$collections$Array$add$panda$collections$Array$T(result1063, ((panda$core$Object*) $tmp1083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
            panda$core$Int64 $tmp1087 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1071.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1086, $tmp1087);
            index1067 = $tmp1086;
        }
        }
        $l1070:;
        $tmp1089 = result1063;
        $finallyReturn1087 = $tmp1089;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1089));
        $tmp1062 = 0;
        goto $l1060;
        $l1090:;
        return $finallyReturn1087;
    }
    $l1060:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1063));
    result1063 = NULL;
    switch ($tmp1062) {
        case 0: goto $l1090;
    }
    $l1092:;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $finallyReturn1093;
    panda$core$Int64 result1096;
    panda$core$Int64 start1097;
    panda$core$Char8 $tmp1098;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1100;
    panda$core$Int64 digit1114;
    panda$core$Int64$nullable $finallyReturn1120;
    panda$core$Char8 $tmp1131;
    panda$core$Int64$nullable $finallyReturn1133;
    panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1093.value) {
    {
        $finallyReturn1093 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $finallyReturn1093;
    }
    }
    result1096 = ((panda$core$Int64) { 0 });
    memset(&start1097, 0, sizeof(start1097));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1098, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1099 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1098);
    if ($tmp1099.value) {
    {
        start1097 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1097 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1100, start1097, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1102 = $tmp1100.min.value;
    panda$core$Int64 i1101 = { $tmp1102 };
    int64_t $tmp1104 = $tmp1100.max.value;
    bool $tmp1105 = $tmp1100.inclusive.value;
    if ($tmp1105) goto $l1112; else goto $l1113;
    $l1112:;
    if ($tmp1102 <= $tmp1104) goto $l1106; else goto $l1108;
    $l1113:;
    if ($tmp1102 < $tmp1104) goto $l1106; else goto $l1108;
    $l1106:;
    {
        panda$core$Int64 $tmp1115 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1101.value].value) }), ((panda$core$Int64) { 48 }));
        digit1114 = $tmp1115;
        panda$core$Bit $tmp1117 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1114, ((panda$core$Int64) { 0 }));
        bool $tmp1116 = $tmp1117.value;
        if ($tmp1116) goto $l1118;
        panda$core$Bit $tmp1119 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1114, ((panda$core$Int64) { 9 }));
        $tmp1116 = $tmp1119.value;
        $l1118:;
        panda$core$Bit $tmp1120 = { $tmp1116 };
        if ($tmp1120.value) {
        {
            $finallyReturn1120 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $finallyReturn1120;
        }
        }
        panda$core$Int64 $tmp1123 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1096, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1124 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1123, digit1114);
        result1096 = $tmp1124;
    }
    $l1109:;
    int64_t $tmp1126 = $tmp1104 - i1101.value;
    if ($tmp1105) goto $l1127; else goto $l1128;
    $l1127:;
    if ((uint64_t) $tmp1126 >= 1) goto $l1125; else goto $l1108;
    $l1128:;
    if ((uint64_t) $tmp1126 > 1) goto $l1125; else goto $l1108;
    $l1125:;
    i1101.value += 1;
    goto $l1106;
    $l1108:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1131, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1132 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1131);
    if ($tmp1132.value) {
    {
        panda$core$Int64 $tmp1133 = panda$core$Int64$$SUB$R$panda$core$Int64(result1096);
        result1096 = $tmp1133;
    }
    }
    $finallyReturn1133 = ((panda$core$Int64$nullable) { result1096, true });
    return $finallyReturn1133;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $finallyReturn1136;
    panda$core$UInt64 result1139;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1140;
    panda$core$UInt64 digit1154;
    panda$core$UInt64$nullable $finallyReturn1160;
    panda$core$UInt64$nullable $finallyReturn1170;
    panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1136.value) {
    {
        $finallyReturn1136 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $finallyReturn1136;
    }
    }
    result1139 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1140, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1142 = $tmp1140.min.value;
    panda$core$Int64 i1141 = { $tmp1142 };
    int64_t $tmp1144 = $tmp1140.max.value;
    bool $tmp1145 = $tmp1140.inclusive.value;
    if ($tmp1145) goto $l1152; else goto $l1153;
    $l1152:;
    if ($tmp1142 <= $tmp1144) goto $l1146; else goto $l1148;
    $l1153:;
    if ($tmp1142 < $tmp1144) goto $l1146; else goto $l1148;
    $l1146:;
    {
        panda$core$UInt64 $tmp1155 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1141.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1154 = $tmp1155;
        panda$core$Bit $tmp1157 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1154, ((panda$core$UInt64) { 0 }));
        bool $tmp1156 = $tmp1157.value;
        if ($tmp1156) goto $l1158;
        panda$core$Bit $tmp1159 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1154, ((panda$core$UInt64) { 9 }));
        $tmp1156 = $tmp1159.value;
        $l1158:;
        panda$core$Bit $tmp1160 = { $tmp1156 };
        if ($tmp1160.value) {
        {
            $finallyReturn1160 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $finallyReturn1160;
        }
        }
        panda$core$UInt64 $tmp1163 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1139, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1164 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1163, digit1154);
        result1139 = $tmp1164;
    }
    $l1149:;
    int64_t $tmp1166 = $tmp1144 - i1141.value;
    if ($tmp1145) goto $l1167; else goto $l1168;
    $l1167:;
    if ((uint64_t) $tmp1166 >= 1) goto $l1165; else goto $l1148;
    $l1168:;
    if ((uint64_t) $tmp1166 > 1) goto $l1165; else goto $l1148;
    $l1165:;
    i1141.value += 1;
    goto $l1146;
    $l1148:;
    $finallyReturn1170 = ((panda$core$UInt64$nullable) { result1139, true });
    return $finallyReturn1170;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1174;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1175;
    panda$core$Int64 $finallyReturn1196;
    panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1173.value) {
    {
        h1174 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1175, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1177 = $tmp1175.min.value;
        panda$core$Int64 i1176 = { $tmp1177 };
        int64_t $tmp1179 = $tmp1175.max.value;
        bool $tmp1180 = $tmp1175.inclusive.value;
        if ($tmp1180) goto $l1187; else goto $l1188;
        $l1187:;
        if ($tmp1177 <= $tmp1179) goto $l1181; else goto $l1183;
        $l1188:;
        if ($tmp1177 < $tmp1179) goto $l1181; else goto $l1183;
        $l1181:;
        {
            panda$core$Int64 $tmp1189 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1174, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1189, ((panda$core$Int64) { ((int64_t) self->data[i1176.value].value) }));
            h1174 = $tmp1190;
        }
        $l1184:;
        int64_t $tmp1192 = $tmp1179 - i1176.value;
        if ($tmp1180) goto $l1193; else goto $l1194;
        $l1193:;
        if ((uint64_t) $tmp1192 >= 1) goto $l1191; else goto $l1183;
        $l1194:;
        if ((uint64_t) $tmp1192 > 1) goto $l1191; else goto $l1183;
        $l1191:;
        i1176.value += 1;
        goto $l1181;
        $l1183:;
        self->_hash = h1174;
    }
    }
    $finallyReturn1196 = self->_hash;
    return $finallyReturn1196;
}

