#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/Key.h"
#include "panda/collections/ListView.h"
#include "panda/collections/MapView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$convert$R$panda$core$String, panda$json$JSON$cleanup, panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q, panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q, panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q, panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q, panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q, panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q, panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q, panda$json$JSON$asInt$R$panda$core$Int64, panda$json$JSON$asReal$R$panda$core$Real64, panda$json$JSON$asString$R$panda$core$String, panda$json$JSON$asBit$R$panda$core$Bit, panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT, panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT} };

typedef panda$json$JSON* (*$fn169)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn198)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn227)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn256)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn288)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn320)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn500)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn515)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn561)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn568)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn579)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };

void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp2 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp3 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp3 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp4;
    panda$core$String* $tmp7;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp5 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp4 = *$tmp5;
        panda$core$String** $tmp6 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp7 = p_f0;
        *$tmp6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp8 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp8 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp9;
    panda$collections$ImmutableHashMap* $tmp12;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp10 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp9 = *$tmp10;
        panda$collections$ImmutableHashMap** $tmp11 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp12 = p_f0;
        *$tmp11 = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp13;
    panda$collections$ImmutableArray* $tmp16;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp14 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp13 = *$tmp14;
        panda$collections$ImmutableArray** $tmp15 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp16 = p_f0;
        *$tmp15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$23_917;
    panda$core$Char32 $tmp19;
    panda$core$String$Index end21;
    panda$core$String$Index fieldStart23;
    panda$core$String$Index index25;
    panda$core$Char32 c28;
    panda$core$Char32 $tmp31;
    panda$core$Char32 $tmp34;
    panda$json$JSON$PathKey* $finallyReturn40;
    panda$json$JSON$PathKey* $tmp42;
    panda$json$JSON$PathKey* $finallyReturn43;
    panda$json$JSON$PathKey* $tmp45;
    panda$json$JSON$PathKey* $tmp46;
    panda$core$String* $tmp48;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp49;
    panda$core$Char32 $tmp52;
    panda$core$String$Index indexStart54;
    panda$core$String$Index index56;
    panda$core$Char32 $tmp61;
    panda$core$Int64$nullable parsed64;
    panda$core$String* $tmp65;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp66;
    panda$json$JSON$PathKey* $finallyReturn68;
    panda$json$JSON$PathKey* $tmp70;
    panda$json$JSON$PathKey* $finallyReturn71;
    panda$json$JSON$PathKey* $tmp73;
    panda$json$JSON$PathKey* $tmp74;
    panda$json$JSON$PathKey* $finallyReturn77;
    panda$json$JSON$PathKey* $tmp79;
    {
        panda$core$Char32 $tmp18 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, p_start);
        $match$23_917 = $tmp18;
        panda$core$Char32$init$panda$core$Int32(&$tmp19, ((panda$core$Int32) { 47 }));
        panda$core$Bit $tmp20 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_917, $tmp19);
        if ($tmp20.value) {
        {
            panda$core$String$Index $tmp22 = panda$core$String$end$R$panda$core$String$Index(p_path);
            end21 = $tmp22;
            panda$core$String$Index $tmp24 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            fieldStart23 = $tmp24;
            index25 = fieldStart23;
            $l26:;
            {
                panda$core$Char32 $tmp29 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index25);
                c28 = $tmp29;
                panda$core$Char32$init$panda$core$Int32(&$tmp31, ((panda$core$Int32) { 47 }));
                panda$core$Bit $tmp32 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c28, $tmp31);
                bool $tmp30 = $tmp32.value;
                if ($tmp30) goto $l33;
                panda$core$Char32$init$panda$core$Int32(&$tmp34, ((panda$core$Int32) { 91 }));
                panda$core$Bit $tmp35 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c28, $tmp34);
                $tmp30 = $tmp35.value;
                $l33:;
                panda$core$Bit $tmp36 = { $tmp30 };
                if ($tmp36.value) {
                {
                    goto $l27;
                }
                }
                panda$core$String$Index $tmp37 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index25);
                index25 = $tmp37;
            }
            panda$core$Bit $tmp39 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index25, end21);
            bool $tmp38 = $tmp39.value;
            if ($tmp38) goto $l26;
            $l27:;
            panda$core$Bit $tmp40 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(fieldStart23, index25);
            if ($tmp40.value) {
            {
                $tmp42 = NULL;
                $finallyReturn40 = $tmp42;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
                return $finallyReturn40;
            }
            }
            panda$json$JSON$PathKey* $tmp47 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp49, fieldStart23, index25, ((panda$core$Bit) { false }));
            panda$core$String* $tmp50 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp49);
            $tmp48 = $tmp50;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp47, ((panda$core$Int64) { 0 }), $tmp48, index25);
            $tmp46 = $tmp47;
            $tmp45 = $tmp46;
            $finallyReturn43 = $tmp45;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            return $finallyReturn43;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp52, ((panda$core$Int32) { 91 }));
        panda$core$Bit $tmp53 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_917, $tmp52);
        if ($tmp53.value) {
        {
            panda$core$String$Index $tmp55 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart54 = $tmp55;
            index56 = indexStart54;
            $l57:;
            panda$core$Char32 $tmp60 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index56);
            panda$core$Char32$init$panda$core$Int32(&$tmp61, ((panda$core$Int32) { 93 }));
            panda$core$Bit $tmp62 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp60, $tmp61);
            bool $tmp59 = $tmp62.value;
            if (!$tmp59) goto $l58;
            {
                panda$core$String$Index $tmp63 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index56);
                index56 = $tmp63;
            }
            goto $l57;
            $l58:;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp66, indexStart54, index56, ((panda$core$Bit) { false }));
            panda$core$String* $tmp67 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp66);
            $tmp65 = $tmp67;
            panda$core$Int64$nullable $tmp68 = panda$core$String$convert$R$panda$core$Int64$Q($tmp65);
            parsed64 = $tmp68;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
            if (((panda$core$Bit) { !parsed64.nonnull }).value) {
            {
                $tmp70 = NULL;
                $finallyReturn68 = $tmp70;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                return $finallyReturn68;
            }
            }
            panda$json$JSON$PathKey* $tmp75 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$String$Index $tmp76 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index56);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp75, ((panda$core$Int64) { 1 }), ((panda$core$Int64) parsed64.value), $tmp76);
            $tmp74 = $tmp75;
            $tmp73 = $tmp74;
            $finallyReturn71 = $tmp73;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
            return $finallyReturn71;
        }
        }
        else {
        {
            $tmp79 = NULL;
            $finallyReturn77 = $tmp79;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
            return $finallyReturn77;
        }
        }
        }
    }
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index84;
    panda$core$String$Index end86;
    panda$json$JSON* current88;
    panda$json$JSON* $tmp89;
    panda$json$JSON$PathKey* $tmp94;
    panda$json$JSON$PathKey* $match$76_1399;
    panda$json$JSON$PathKey* $tmp100;
    panda$json$JSON$PathKey* $tmp101;
    panda$core$String* field104;
    panda$core$String$Index next106;
    panda$json$JSON* $match$78_21111;
    panda$json$JSON* $tmp112;
    panda$collections$ImmutableHashMap* fields114;
    panda$json$JSON* $tmp116;
    panda$json$JSON* $tmp117;
    panda$core$Object* $tmp118;
    panda$json$JSON* $finallyReturn119;
    panda$json$JSON* $tmp121;
    panda$json$JSON* $finallyReturn125;
    panda$json$JSON* $tmp127;
    panda$core$Int64 key134;
    panda$core$String$Index next136;
    panda$json$JSON* $match$89_21141;
    panda$json$JSON* $tmp142;
    panda$collections$ImmutableArray* nodes144;
    panda$json$JSON* $tmp146;
    panda$json$JSON* $tmp147;
    panda$core$Object* $tmp148;
    panda$json$JSON* $finallyReturn149;
    panda$json$JSON* $tmp151;
    panda$json$JSON* $finallyReturn157;
    panda$json$JSON* $tmp159;
    int $tmp83;
    {
        panda$core$String$Index $tmp85 = panda$core$String$start$R$panda$core$String$Index(p_path);
        index84 = $tmp85;
        panda$core$String$Index $tmp87 = panda$core$String$end$R$panda$core$String$Index(p_path);
        end86 = $tmp87;
        $tmp89 = self;
        current88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        $l90:;
        panda$core$Bit $tmp93 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index84, end86);
        bool $tmp92 = $tmp93.value;
        if (!$tmp92) goto $l91;
        {
            panda$json$JSON$PathKey* $tmp95 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index84);
            $tmp94 = $tmp95;
            PANDA_ASSERT(((panda$core$Bit) { $tmp94 != NULL }).value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
            int $tmp98;
            {
                panda$json$JSON$PathKey* $tmp102 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index84);
                $tmp101 = $tmp102;
                $tmp100 = $tmp101;
                $match$76_1399 = $tmp100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1399->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp103.value) {
                {
                    panda$core$String** $tmp105 = ((panda$core$String**) ((char*) $match$76_1399->$data + 0));
                    field104 = *$tmp105;
                    panda$core$String$Index* $tmp107 = ((panda$core$String$Index*) ((char*) $match$76_1399->$data + 8));
                    next106 = *$tmp107;
                    int $tmp110;
                    {
                        $tmp112 = current88;
                        $match$78_21111 = $tmp112;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
                        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_21111->$rawValue, ((panda$core$Int64) { 4 }));
                        if ($tmp113.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp115 = ((panda$collections$ImmutableHashMap**) ((char*) $match$78_21111->$data + 0));
                            fields114 = *$tmp115;
                            {
                                $tmp116 = current88;
                                panda$core$Object* $tmp119 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields114, ((panda$collections$Key*) field104));
                                $tmp118 = $tmp119;
                                $tmp117 = ((panda$json$JSON*) $tmp118);
                                current88 = $tmp117;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
                                panda$core$Panda$unref$panda$core$Object($tmp118);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
                            }
                            if (((panda$core$Bit) { current88 == NULL }).value) {
                            {
                                $tmp121 = NULL;
                                $finallyReturn119 = $tmp121;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                                $tmp110 = 0;
                                goto $l108;
                                $l122:;
                                $tmp98 = 0;
                                goto $l96;
                                $l123:;
                                $tmp83 = 0;
                                goto $l81;
                                $l124:;
                                return $finallyReturn119;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp127 = NULL;
                            $finallyReturn125 = $tmp127;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                            $tmp110 = 1;
                            goto $l108;
                            $l128:;
                            $tmp98 = 1;
                            goto $l96;
                            $l129:;
                            $tmp83 = 1;
                            goto $l81;
                            $l130:;
                            return $finallyReturn125;
                        }
                        }
                    }
                    $tmp110 = -1;
                    goto $l108;
                    $l108:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
                    switch ($tmp110) {
                        case -1: goto $l132;
                        case 0: goto $l122;
                        case 1: goto $l128;
                    }
                    $l132:;
                    index84 = next106;
                }
                }
                else {
                panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1399->$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp133.value) {
                {
                    panda$core$Int64* $tmp135 = ((panda$core$Int64*) ((char*) $match$76_1399->$data + 0));
                    key134 = *$tmp135;
                    panda$core$String$Index* $tmp137 = ((panda$core$String$Index*) ((char*) $match$76_1399->$data + 8));
                    next136 = *$tmp137;
                    int $tmp140;
                    {
                        $tmp142 = current88;
                        $match$89_21141 = $tmp142;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$89_21141->$rawValue, ((panda$core$Int64) { 5 }));
                        if ($tmp143.value) {
                        {
                            panda$collections$ImmutableArray** $tmp145 = ((panda$collections$ImmutableArray**) ((char*) $match$89_21141->$data + 0));
                            nodes144 = *$tmp145;
                            {
                                $tmp146 = current88;
                                panda$core$Object* $tmp149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes144, key134);
                                $tmp148 = $tmp149;
                                $tmp147 = ((panda$json$JSON*) $tmp148);
                                current88 = $tmp147;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                                panda$core$Panda$unref$panda$core$Object($tmp148);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                            }
                        }
                        }
                        else {
                        {
                            $tmp151 = NULL;
                            $finallyReturn149 = $tmp151;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                            $tmp140 = 0;
                            goto $l138;
                            $l152:;
                            $tmp98 = 2;
                            goto $l96;
                            $l153:;
                            $tmp83 = 2;
                            goto $l81;
                            $l154:;
                            return $finallyReturn149;
                        }
                        }
                    }
                    $tmp140 = -1;
                    goto $l138;
                    $l138:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
                    switch ($tmp140) {
                        case 0: goto $l152;
                        case -1: goto $l156;
                    }
                    $l156:;
                    index84 = next136;
                }
                }
                }
            }
            $tmp98 = -1;
            goto $l96;
            $l96:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
            switch ($tmp98) {
                case 1: goto $l129;
                case 2: goto $l153;
                case -1: goto $l157;
                case 0: goto $l123;
            }
            $l157:;
        }
        goto $l90;
        $l91:;
        $tmp159 = current88;
        $finallyReturn157 = $tmp159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
        $tmp83 = 3;
        goto $l81;
        $l160:;
        return $finallyReturn157;
    }
    $l81:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current88));
    switch ($tmp83) {
        case 3: goto $l160;
        case 1: goto $l130;
        case 2: goto $l154;
        case 0: goto $l124;
    }
    $l162:;
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result166;
    panda$json$JSON* $tmp167;
    panda$json$JSON* $tmp168;
    panda$core$Int64$nullable $finallyReturn170;
    panda$json$JSON* $match$109_9177;
    panda$json$JSON* $tmp178;
    panda$core$Int64 value180;
    panda$core$Int64$nullable $finallyReturn181;
    panda$core$Int64$nullable $finallyReturn185;
    int $tmp165;
    {
        panda$json$JSON* $tmp170 = (($fn169) self->$class->vtable[2])(self, p_path);
        $tmp168 = $tmp170;
        $tmp167 = $tmp168;
        result166 = $tmp167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
        if (((panda$core$Bit) { result166 == NULL }).value) {
        {
            $finallyReturn170 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp165 = 0;
            goto $l163;
            $l172:;
            return $finallyReturn170;
        }
        }
        int $tmp176;
        {
            $tmp178 = result166;
            $match$109_9177 = $tmp178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
            panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_9177->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp179.value) {
            {
                panda$core$Int64* $tmp181 = ((panda$core$Int64*) ((char*) $match$109_9177->$data + 0));
                value180 = *$tmp181;
                $finallyReturn181 = ((panda$core$Int64$nullable) { value180, true });
                $tmp176 = 0;
                goto $l174;
                $l183:;
                $tmp165 = 1;
                goto $l163;
                $l184:;
                return $finallyReturn181;
            }
            }
            else {
            {
                $finallyReturn185 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp176 = 1;
                goto $l174;
                $l187:;
                $tmp165 = 2;
                goto $l163;
                $l188:;
                return $finallyReturn185;
            }
            }
        }
        $tmp176 = -1;
        goto $l174;
        $l174:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        switch ($tmp176) {
            case 1: goto $l187;
            case 0: goto $l183;
            case -1: goto $l190;
        }
        $l190:;
    }
    $tmp165 = -1;
    goto $l163;
    $l163:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result166));
    switch ($tmp165) {
        case 1: goto $l184;
        case -1: goto $l191;
        case 2: goto $l188;
        case 0: goto $l172;
    }
    $l191:;
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result195;
    panda$json$JSON* $tmp196;
    panda$json$JSON* $tmp197;
    panda$core$Real64$nullable $finallyReturn199;
    panda$json$JSON* $match$125_9206;
    panda$json$JSON* $tmp207;
    panda$core$Real64 value209;
    panda$core$Real64$nullable $finallyReturn210;
    panda$core$Real64$nullable $finallyReturn214;
    int $tmp194;
    {
        panda$json$JSON* $tmp199 = (($fn198) self->$class->vtable[2])(self, p_path);
        $tmp197 = $tmp199;
        $tmp196 = $tmp197;
        result195 = $tmp196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
        if (((panda$core$Bit) { result195 == NULL }).value) {
        {
            $finallyReturn199 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp194 = 0;
            goto $l192;
            $l201:;
            return $finallyReturn199;
        }
        }
        int $tmp205;
        {
            $tmp207 = result195;
            $match$125_9206 = $tmp207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
            panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9206->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp208.value) {
            {
                panda$core$Real64* $tmp210 = ((panda$core$Real64*) ((char*) $match$125_9206->$data + 0));
                value209 = *$tmp210;
                $finallyReturn210 = ((panda$core$Real64$nullable) { value209, true });
                $tmp205 = 0;
                goto $l203;
                $l212:;
                $tmp194 = 1;
                goto $l192;
                $l213:;
                return $finallyReturn210;
            }
            }
            else {
            {
                $finallyReturn214 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp205 = 1;
                goto $l203;
                $l216:;
                $tmp194 = 2;
                goto $l192;
                $l217:;
                return $finallyReturn214;
            }
            }
        }
        $tmp205 = -1;
        goto $l203;
        $l203:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
        switch ($tmp205) {
            case 0: goto $l212;
            case 1: goto $l216;
            case -1: goto $l219;
        }
        $l219:;
    }
    $tmp194 = -1;
    goto $l192;
    $l192:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result195));
    switch ($tmp194) {
        case 1: goto $l213;
        case -1: goto $l220;
        case 2: goto $l217;
        case 0: goto $l201;
    }
    $l220:;
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result224;
    panda$json$JSON* $tmp225;
    panda$json$JSON* $tmp226;
    panda$core$Bit$nullable $finallyReturn228;
    panda$json$JSON* $match$141_9235;
    panda$json$JSON* $tmp236;
    panda$core$Bit value238;
    panda$core$Bit$nullable $finallyReturn239;
    panda$core$Bit$nullable $finallyReturn243;
    int $tmp223;
    {
        panda$json$JSON* $tmp228 = (($fn227) self->$class->vtable[2])(self, p_path);
        $tmp226 = $tmp228;
        $tmp225 = $tmp226;
        result224 = $tmp225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
        if (((panda$core$Bit) { result224 == NULL }).value) {
        {
            $finallyReturn228 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp223 = 0;
            goto $l221;
            $l230:;
            return $finallyReturn228;
        }
        }
        int $tmp234;
        {
            $tmp236 = result224;
            $match$141_9235 = $tmp236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
            panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9235->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp237.value) {
            {
                panda$core$Bit* $tmp239 = ((panda$core$Bit*) ((char*) $match$141_9235->$data + 0));
                value238 = *$tmp239;
                $finallyReturn239 = ((panda$core$Bit$nullable) { value238, true });
                $tmp234 = 0;
                goto $l232;
                $l241:;
                $tmp223 = 1;
                goto $l221;
                $l242:;
                return $finallyReturn239;
            }
            }
            else {
            {
                $finallyReturn243 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp234 = 1;
                goto $l232;
                $l245:;
                $tmp223 = 2;
                goto $l221;
                $l246:;
                return $finallyReturn243;
            }
            }
        }
        $tmp234 = -1;
        goto $l232;
        $l232:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        switch ($tmp234) {
            case 0: goto $l241;
            case 1: goto $l245;
            case -1: goto $l248;
        }
        $l248:;
    }
    $tmp223 = -1;
    goto $l221;
    $l221:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result224));
    switch ($tmp223) {
        case 1: goto $l242;
        case -1: goto $l249;
        case 2: goto $l246;
        case 0: goto $l230;
    }
    $l249:;
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result253;
    panda$json$JSON* $tmp254;
    panda$json$JSON* $tmp255;
    panda$core$String* $finallyReturn257;
    panda$core$String* $tmp259;
    panda$json$JSON* $match$157_9265;
    panda$json$JSON* $tmp266;
    panda$core$String* value268;
    panda$core$String* $finallyReturn269;
    panda$core$String* $tmp271;
    panda$core$String* $finallyReturn274;
    panda$core$String* $tmp276;
    int $tmp252;
    {
        panda$json$JSON* $tmp257 = (($fn256) self->$class->vtable[2])(self, p_path);
        $tmp255 = $tmp257;
        $tmp254 = $tmp255;
        result253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        if (((panda$core$Bit) { result253 == NULL }).value) {
        {
            $tmp259 = NULL;
            $finallyReturn257 = $tmp259;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
            $tmp252 = 0;
            goto $l250;
            $l260:;
            return $finallyReturn257;
        }
        }
        int $tmp264;
        {
            $tmp266 = result253;
            $match$157_9265 = $tmp266;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
            panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_9265->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp267.value) {
            {
                panda$core$String** $tmp269 = ((panda$core$String**) ((char*) $match$157_9265->$data + 0));
                value268 = *$tmp269;
                $tmp271 = value268;
                $finallyReturn269 = $tmp271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                $tmp264 = 0;
                goto $l262;
                $l272:;
                $tmp252 = 1;
                goto $l250;
                $l273:;
                return $finallyReturn269;
            }
            }
            else {
            {
                $tmp276 = NULL;
                $finallyReturn274 = $tmp276;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
                $tmp264 = 1;
                goto $l262;
                $l277:;
                $tmp252 = 2;
                goto $l250;
                $l278:;
                return $finallyReturn274;
            }
            }
        }
        $tmp264 = -1;
        goto $l262;
        $l262:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
        switch ($tmp264) {
            case -1: goto $l280;
            case 1: goto $l277;
            case 0: goto $l272;
        }
        $l280:;
    }
    $tmp252 = -1;
    goto $l250;
    $l250:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result253));
    switch ($tmp252) {
        case 2: goto $l278;
        case 1: goto $l273;
        case -1: goto $l281;
        case 0: goto $l260;
    }
    $l281:;
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result285;
    panda$json$JSON* $tmp286;
    panda$json$JSON* $tmp287;
    panda$collections$ListView* $finallyReturn289;
    panda$collections$ListView* $tmp291;
    panda$json$JSON* $match$173_9297;
    panda$json$JSON* $tmp298;
    panda$collections$ImmutableArray* value300;
    panda$collections$ListView* $finallyReturn301;
    panda$collections$ListView* $tmp303;
    panda$collections$ListView* $finallyReturn306;
    panda$collections$ListView* $tmp308;
    int $tmp284;
    {
        panda$json$JSON* $tmp289 = (($fn288) self->$class->vtable[2])(self, p_path);
        $tmp287 = $tmp289;
        $tmp286 = $tmp287;
        result285 = $tmp286;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
        if (((panda$core$Bit) { result285 == NULL }).value) {
        {
            $tmp291 = NULL;
            $finallyReturn289 = $tmp291;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
            $tmp284 = 0;
            goto $l282;
            $l292:;
            return $finallyReturn289;
        }
        }
        int $tmp296;
        {
            $tmp298 = result285;
            $match$173_9297 = $tmp298;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
            panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9297->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp299.value) {
            {
                panda$collections$ImmutableArray** $tmp301 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9297->$data + 0));
                value300 = *$tmp301;
                $tmp303 = ((panda$collections$ListView*) value300);
                $finallyReturn301 = $tmp303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                $tmp296 = 0;
                goto $l294;
                $l304:;
                $tmp284 = 1;
                goto $l282;
                $l305:;
                return $finallyReturn301;
            }
            }
            else {
            {
                $tmp308 = NULL;
                $finallyReturn306 = $tmp308;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                $tmp296 = 1;
                goto $l294;
                $l309:;
                $tmp284 = 2;
                goto $l282;
                $l310:;
                return $finallyReturn306;
            }
            }
        }
        $tmp296 = -1;
        goto $l294;
        $l294:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
        switch ($tmp296) {
            case 0: goto $l304;
            case 1: goto $l309;
            case -1: goto $l312;
        }
        $l312:;
    }
    $tmp284 = -1;
    goto $l282;
    $l282:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result285));
    switch ($tmp284) {
        case 2: goto $l310;
        case 1: goto $l305;
        case 0: goto $l292;
        case -1: goto $l313;
    }
    $l313:;
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result317;
    panda$json$JSON* $tmp318;
    panda$json$JSON* $tmp319;
    panda$collections$MapView* $finallyReturn321;
    panda$collections$MapView* $tmp323;
    panda$json$JSON* $match$189_9329;
    panda$json$JSON* $tmp330;
    panda$collections$ImmutableHashMap* value332;
    panda$collections$MapView* $finallyReturn333;
    panda$collections$MapView* $tmp335;
    panda$collections$MapView* $finallyReturn338;
    panda$collections$MapView* $tmp340;
    int $tmp316;
    {
        panda$json$JSON* $tmp321 = (($fn320) self->$class->vtable[2])(self, p_path);
        $tmp319 = $tmp321;
        $tmp318 = $tmp319;
        result317 = $tmp318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
        if (((panda$core$Bit) { result317 == NULL }).value) {
        {
            $tmp323 = NULL;
            $finallyReturn321 = $tmp323;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
            $tmp316 = 0;
            goto $l314;
            $l324:;
            return $finallyReturn321;
        }
        }
        int $tmp328;
        {
            $tmp330 = result317;
            $match$189_9329 = $tmp330;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
            panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9329->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp331.value) {
            {
                panda$collections$ImmutableHashMap** $tmp333 = ((panda$collections$ImmutableHashMap**) ((char*) $match$189_9329->$data + 0));
                value332 = *$tmp333;
                $tmp335 = ((panda$collections$MapView*) value332);
                $finallyReturn333 = $tmp335;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
                $tmp328 = 0;
                goto $l326;
                $l336:;
                $tmp316 = 1;
                goto $l314;
                $l337:;
                return $finallyReturn333;
            }
            }
            else {
            {
                $tmp340 = NULL;
                $finallyReturn338 = $tmp340;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
                $tmp328 = 1;
                goto $l326;
                $l341:;
                $tmp316 = 2;
                goto $l314;
                $l342:;
                return $finallyReturn338;
            }
            }
        }
        $tmp328 = -1;
        goto $l326;
        $l326:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
        switch ($tmp328) {
            case 1: goto $l341;
            case 0: goto $l336;
            case -1: goto $l344;
        }
        $l344:;
    }
    $tmp316 = -1;
    goto $l314;
    $l314:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result317));
    switch ($tmp316) {
        case -1: goto $l345;
        case 1: goto $l337;
        case 2: goto $l342;
        case 0: goto $l324;
    }
    $l345:;
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$json$JSON* $match$199_9349;
    panda$json$JSON* $tmp350;
    panda$core$Int64 value352;
    panda$core$Int64 $finallyReturn353;
    int $tmp348;
    {
        $tmp350 = self;
        $match$199_9349 = $tmp350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9349->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp351.value) {
        {
            panda$core$Int64* $tmp353 = ((panda$core$Int64*) ((char*) $match$199_9349->$data + 0));
            value352 = *$tmp353;
            $finallyReturn353 = value352;
            $tmp348 = 0;
            goto $l346;
            $l355:;
            return $finallyReturn353;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp348 = -1;
    goto $l346;
    $l346:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    switch ($tmp348) {
        case -1: goto $l357;
        case 0: goto $l355;
    }
    $l357:;
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$json$JSON* $match$209_9361;
    panda$json$JSON* $tmp362;
    panda$core$Real64 value364;
    panda$core$Real64 $finallyReturn365;
    int $tmp360;
    {
        $tmp362 = self;
        $match$209_9361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9361->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp363.value) {
        {
            panda$core$Real64* $tmp365 = ((panda$core$Real64*) ((char*) $match$209_9361->$data + 0));
            value364 = *$tmp365;
            $finallyReturn365 = value364;
            $tmp360 = 0;
            goto $l358;
            $l367:;
            return $finallyReturn365;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp360 = -1;
    goto $l358;
    $l358:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
    switch ($tmp360) {
        case -1: goto $l369;
        case 0: goto $l367;
    }
    $l369:;
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$219_9373;
    panda$json$JSON* $tmp374;
    panda$core$String* value376;
    panda$core$String* $finallyReturn377;
    panda$core$String* $tmp379;
    int $tmp372;
    {
        $tmp374 = self;
        $match$219_9373 = $tmp374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9373->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp375.value) {
        {
            panda$core$String** $tmp377 = ((panda$core$String**) ((char*) $match$219_9373->$data + 0));
            value376 = *$tmp377;
            $tmp379 = value376;
            $finallyReturn377 = $tmp379;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
            $tmp372 = 0;
            goto $l370;
            $l380:;
            return $finallyReturn377;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp372 = -1;
    goto $l370;
    $l370:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
    switch ($tmp372) {
        case 0: goto $l380;
        case -1: goto $l382;
    }
    $l382:;
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$json$JSON* $match$229_9386;
    panda$json$JSON* $tmp387;
    panda$core$Bit value389;
    panda$core$Bit $finallyReturn390;
    int $tmp385;
    {
        $tmp387 = self;
        $match$229_9386 = $tmp387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9386->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp388.value) {
        {
            panda$core$Bit* $tmp390 = ((panda$core$Bit*) ((char*) $match$229_9386->$data + 0));
            value389 = *$tmp390;
            $finallyReturn390 = value389;
            $tmp385 = 0;
            goto $l383;
            $l392:;
            return $finallyReturn390;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp385 = -1;
    goto $l383;
    $l383:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
    switch ($tmp385) {
        case -1: goto $l394;
        case 0: goto $l392;
    }
    $l394:;
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$239_9398;
    panda$json$JSON* $tmp399;
    panda$collections$ImmutableHashMap* value401;
    panda$collections$MapView* $finallyReturn402;
    panda$collections$MapView* $tmp404;
    int $tmp397;
    {
        $tmp399 = self;
        $match$239_9398 = $tmp399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9398->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp400.value) {
        {
            panda$collections$ImmutableHashMap** $tmp402 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9398->$data + 0));
            value401 = *$tmp402;
            $tmp404 = ((panda$collections$MapView*) value401);
            $finallyReturn402 = $tmp404;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
            $tmp397 = 0;
            goto $l395;
            $l405:;
            return $finallyReturn402;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp397 = -1;
    goto $l395;
    $l395:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
    switch ($tmp397) {
        case -1: goto $l407;
        case 0: goto $l405;
    }
    $l407:;
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$249_9411;
    panda$json$JSON* $tmp412;
    panda$collections$ImmutableArray* value414;
    panda$collections$ListView* $finallyReturn415;
    panda$collections$ListView* $tmp417;
    int $tmp410;
    {
        $tmp412 = self;
        $match$249_9411 = $tmp412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9411->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp413.value) {
        {
            panda$collections$ImmutableArray** $tmp415 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9411->$data + 0));
            value414 = *$tmp415;
            $tmp417 = ((panda$collections$ListView*) value414);
            $finallyReturn415 = $tmp417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp417));
            $tmp410 = 0;
            goto $l408;
            $l418:;
            return $finallyReturn415;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp410 = -1;
    goto $l408;
    $l408:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
    switch ($tmp410) {
        case -1: goto $l420;
        case 0: goto $l418;
    }
    $l420:;
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9424;
    panda$json$JSON* $tmp425;
    panda$core$Int64 value427;
    panda$core$String* $finallyReturn428;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    panda$core$Real64 value436;
    panda$core$String* $finallyReturn437;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$String* value445;
    panda$core$String* $finallyReturn446;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$Bit value455;
    panda$core$String* $finallyReturn456;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$collections$ImmutableHashMap* fields464;
    panda$core$MutableString* result469;
    panda$core$MutableString* $tmp470;
    panda$core$MutableString* $tmp471;
    panda$core$String* separator474;
    panda$core$String* $tmp475;
    panda$collections$Iterator* Iter$271$17480;
    panda$collections$Iterator* $tmp481;
    panda$collections$Iterator* $tmp482;
    panda$core$String* k495;
    panda$core$String* $tmp496;
    panda$core$Object* $tmp497;
    panda$core$String* $tmp502;
    panda$core$String* $tmp503;
    panda$core$String* $tmp504;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$String* $tmp511;
    panda$core$Object* $tmp520;
    panda$core$String* $tmp525;
    panda$core$String* $tmp526;
    panda$core$String* $finallyReturn530;
    panda$core$String* $tmp532;
    panda$core$String* $tmp533;
    panda$collections$ImmutableArray* nodes540;
    panda$core$MutableString* result545;
    panda$core$MutableString* $tmp546;
    panda$core$MutableString* $tmp547;
    panda$core$String* separator550;
    panda$core$String* $tmp551;
    panda$collections$Iterator* Iter$280$17556;
    panda$collections$Iterator* $tmp557;
    panda$collections$Iterator* $tmp558;
    panda$json$JSON* n574;
    panda$json$JSON* $tmp575;
    panda$core$Object* $tmp576;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $tmp591;
    panda$core$String* $tmp592;
    panda$core$Char8 $tmp596;
    panda$core$String* $finallyReturn596;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $finallyReturn605;
    panda$core$String* $tmp607;
    int $tmp423;
    {
        $tmp425 = self;
        $match$259_9424 = $tmp425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
        panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp426.value) {
        {
            panda$core$Int64* $tmp428 = ((panda$core$Int64*) ((char*) $match$259_9424->$data + 0));
            value427 = *$tmp428;
            panda$core$String* $tmp432 = panda$core$Int64$convert$R$panda$core$String(value427);
            $tmp431 = $tmp432;
            $tmp430 = $tmp431;
            $finallyReturn428 = $tmp430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
            $tmp423 = 0;
            goto $l421;
            $l433:;
            return $finallyReturn428;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp435.value) {
        {
            panda$core$Real64* $tmp437 = ((panda$core$Real64*) ((char*) $match$259_9424->$data + 0));
            value436 = *$tmp437;
            panda$core$String* $tmp441 = panda$core$Real64$convert$R$panda$core$String(value436);
            $tmp440 = $tmp441;
            $tmp439 = $tmp440;
            $finallyReturn437 = $tmp439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
            $tmp423 = 1;
            goto $l421;
            $l442:;
            return $finallyReturn437;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp444.value) {
        {
            panda$core$String** $tmp446 = ((panda$core$String**) ((char*) $match$259_9424->$data + 0));
            value445 = *$tmp446;
            panda$core$String* $tmp451 = panda$core$String$format$panda$core$String$R$panda$core$String(value445, &$s450);
            $tmp449 = $tmp451;
            $tmp448 = $tmp449;
            $finallyReturn446 = $tmp448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
            $tmp423 = 2;
            goto $l421;
            $l452:;
            return $finallyReturn446;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp454.value) {
        {
            panda$core$Bit* $tmp456 = ((panda$core$Bit*) ((char*) $match$259_9424->$data + 0));
            value455 = *$tmp456;
            panda$core$String* $tmp460 = panda$core$Bit$convert$R$panda$core$String(value455);
            $tmp459 = $tmp460;
            $tmp458 = $tmp459;
            $finallyReturn456 = $tmp458;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
            $tmp423 = 3;
            goto $l421;
            $l461:;
            return $finallyReturn456;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp463.value) {
        {
            panda$collections$ImmutableHashMap** $tmp465 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9424->$data + 0));
            fields464 = *$tmp465;
            int $tmp468;
            {
                panda$core$MutableString* $tmp472 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp472, &$s473);
                $tmp471 = $tmp472;
                $tmp470 = $tmp471;
                result469 = $tmp470;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
                $tmp475 = &$s476;
                separator474 = $tmp475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
                {
                    int $tmp479;
                    {
                        panda$collections$Iterator* $tmp483 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields464);
                        $tmp482 = $tmp483;
                        $tmp481 = $tmp482;
                        Iter$271$17480 = $tmp481;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                        $l484:;
                        ITable* $tmp487 = Iter$271$17480->$class->itable;
                        while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp487 = $tmp487->next;
                        }
                        $fn489 $tmp488 = $tmp487->methods[0];
                        panda$core$Bit $tmp490 = $tmp488(Iter$271$17480);
                        panda$core$Bit $tmp491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp490);
                        bool $tmp486 = $tmp491.value;
                        if (!$tmp486) goto $l485;
                        {
                            int $tmp494;
                            {
                                ITable* $tmp498 = Iter$271$17480->$class->itable;
                                while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp498 = $tmp498->next;
                                }
                                $fn500 $tmp499 = $tmp498->methods[1];
                                panda$core$Object* $tmp501 = $tmp499(Iter$271$17480);
                                $tmp497 = $tmp501;
                                $tmp496 = ((panda$core$String*) $tmp497);
                                k495 = $tmp496;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
                                panda$core$Panda$unref$panda$core$Object($tmp497);
                                panda$core$String* $tmp508 = panda$core$String$convert$R$panda$core$String(separator474);
                                $tmp507 = $tmp508;
                                panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s509);
                                $tmp506 = $tmp510;
                                ITable* $tmp513 = ((panda$core$Formattable*) k495)->$class->itable;
                                while ($tmp513->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp513 = $tmp513->next;
                                }
                                $fn515 $tmp514 = $tmp513->methods[0];
                                panda$core$String* $tmp516 = $tmp514(((panda$core$Formattable*) k495), &$s512);
                                $tmp511 = $tmp516;
                                panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, $tmp511);
                                $tmp505 = $tmp517;
                                panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp505, &$s518);
                                $tmp504 = $tmp519;
                                panda$core$Object* $tmp521 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields464, ((panda$collections$Key*) k495));
                                $tmp520 = $tmp521;
                                panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp504, ((panda$core$Object*) ((panda$json$JSON*) $tmp520)));
                                $tmp503 = $tmp522;
                                panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s523);
                                $tmp502 = $tmp524;
                                panda$core$MutableString$append$panda$core$String(result469, $tmp502);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
                                panda$core$Panda$unref$panda$core$Object($tmp520);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
                                {
                                    $tmp525 = separator474;
                                    $tmp526 = &$s527;
                                    separator474 = $tmp526;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
                                }
                            }
                            $tmp494 = -1;
                            goto $l492;
                            $l492:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k495));
                            switch ($tmp494) {
                                case -1: goto $l528;
                            }
                            $l528:;
                        }
                        goto $l484;
                        $l485:;
                    }
                    $tmp479 = -1;
                    goto $l477;
                    $l477:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17480));
                    switch ($tmp479) {
                        case -1: goto $l529;
                    }
                    $l529:;
                }
                panda$core$MutableString$append$panda$core$String(result469, &$s530);
                panda$core$String* $tmp534 = panda$core$MutableString$finish$R$panda$core$String(result469);
                $tmp533 = $tmp534;
                $tmp532 = $tmp533;
                $finallyReturn530 = $tmp532;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
                $tmp468 = 0;
                goto $l466;
                $l535:;
                $tmp423 = 4;
                goto $l421;
                $l536:;
                return $finallyReturn530;
            }
            $l466:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator474));
            switch ($tmp468) {
                case 0: goto $l535;
            }
            $l538:;
        }
        }
        else {
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp539.value) {
        {
            panda$collections$ImmutableArray** $tmp541 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9424->$data + 0));
            nodes540 = *$tmp541;
            int $tmp544;
            {
                panda$core$MutableString* $tmp548 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp548, &$s549);
                $tmp547 = $tmp548;
                $tmp546 = $tmp547;
                result545 = $tmp546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                $tmp551 = &$s552;
                separator550 = $tmp551;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                {
                    int $tmp555;
                    {
                        ITable* $tmp559 = ((panda$collections$Iterable*) nodes540)->$class->itable;
                        while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp559 = $tmp559->next;
                        }
                        $fn561 $tmp560 = $tmp559->methods[0];
                        panda$collections$Iterator* $tmp562 = $tmp560(((panda$collections$Iterable*) nodes540));
                        $tmp558 = $tmp562;
                        $tmp557 = $tmp558;
                        Iter$280$17556 = $tmp557;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
                        $l563:;
                        ITable* $tmp566 = Iter$280$17556->$class->itable;
                        while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp566 = $tmp566->next;
                        }
                        $fn568 $tmp567 = $tmp566->methods[0];
                        panda$core$Bit $tmp569 = $tmp567(Iter$280$17556);
                        panda$core$Bit $tmp570 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp569);
                        bool $tmp565 = $tmp570.value;
                        if (!$tmp565) goto $l564;
                        {
                            int $tmp573;
                            {
                                ITable* $tmp577 = Iter$280$17556->$class->itable;
                                while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp577 = $tmp577->next;
                                }
                                $fn579 $tmp578 = $tmp577->methods[1];
                                panda$core$Object* $tmp580 = $tmp578(Iter$280$17556);
                                $tmp576 = $tmp580;
                                $tmp575 = ((panda$json$JSON*) $tmp576);
                                n574 = $tmp575;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                                panda$core$Panda$unref$panda$core$Object($tmp576);
                                panda$core$String* $tmp585 = panda$core$String$convert$R$panda$core$String(separator550);
                                $tmp584 = $tmp585;
                                panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s586);
                                $tmp583 = $tmp587;
                                panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp583, ((panda$core$Object*) n574));
                                $tmp582 = $tmp588;
                                panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s589);
                                $tmp581 = $tmp590;
                                panda$core$MutableString$append$panda$core$String(result545, $tmp581);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                                {
                                    $tmp591 = separator550;
                                    $tmp592 = &$s593;
                                    separator550 = $tmp592;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                                }
                            }
                            $tmp573 = -1;
                            goto $l571;
                            $l571:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n574));
                            switch ($tmp573) {
                                case -1: goto $l594;
                            }
                            $l594:;
                        }
                        goto $l563;
                        $l564:;
                    }
                    $tmp555 = -1;
                    goto $l553;
                    $l553:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17556));
                    switch ($tmp555) {
                        case -1: goto $l595;
                    }
                    $l595:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp596, ((panda$core$UInt8) { 93 }));
                panda$core$MutableString$append$panda$core$Char8(result545, $tmp596);
                panda$core$String* $tmp600 = panda$core$MutableString$finish$R$panda$core$String(result545);
                $tmp599 = $tmp600;
                $tmp598 = $tmp599;
                $finallyReturn596 = $tmp598;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                $tmp544 = 0;
                goto $l542;
                $l601:;
                $tmp423 = 5;
                goto $l421;
                $l602:;
                return $finallyReturn596;
            }
            $l542:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result545));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator550));
            switch ($tmp544) {
                case 0: goto $l601;
            }
            $l604:;
        }
        }
        else {
        panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9424->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp605.value) {
        {
            $tmp607 = &$s608;
            $finallyReturn605 = $tmp607;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
            $tmp423 = 6;
            goto $l421;
            $l609:;
            return $finallyReturn605;
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
        }
        }
        }
    }
    $tmp423 = -1;
    goto $l421;
    $l421:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
    switch ($tmp423) {
        case 5: goto $l602;
        case 6: goto $l609;
        case 4: goto $l536;
        case 1: goto $l442;
        case 3: goto $l461;
        case 2: goto $l452;
        case -1: goto $l611;
        case 0: goto $l433;
    }
    $l611:;
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1618;
    panda$json$JSON* $tmp619;
    panda$core$Int64 _f0621;
    panda$core$Real64 _f0624;
    panda$core$String* _f0627;
    panda$core$Bit _f0630;
    panda$collections$ImmutableHashMap* _f0633;
    panda$collections$ImmutableArray* _f0636;
    int $tmp614;
    {
        int $tmp617;
        {
            $tmp619 = self;
            $match$5_1618 = $tmp619;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
            panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp620.value) {
            {
                panda$core$Int64* $tmp622 = ((panda$core$Int64*) ((char*) $match$5_1618->$data + 0));
                _f0621 = *$tmp622;
            }
            }
            else {
            panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp623.value) {
            {
                panda$core$Real64* $tmp625 = ((panda$core$Real64*) ((char*) $match$5_1618->$data + 0));
                _f0624 = *$tmp625;
            }
            }
            else {
            panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp626.value) {
            {
                panda$core$String** $tmp628 = ((panda$core$String**) ((char*) $match$5_1618->$data + 0));
                _f0627 = *$tmp628;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0627));
            }
            }
            else {
            panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp629.value) {
            {
                panda$core$Bit* $tmp631 = ((panda$core$Bit*) ((char*) $match$5_1618->$data + 0));
                _f0630 = *$tmp631;
            }
            }
            else {
            panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp632.value) {
            {
                panda$collections$ImmutableHashMap** $tmp634 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1618->$data + 0));
                _f0633 = *$tmp634;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0633));
            }
            }
            else {
            panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp635.value) {
            {
                panda$collections$ImmutableArray** $tmp637 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1618->$data + 0));
                _f0636 = *$tmp637;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0636));
            }
            }
            else {
            panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1618->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp638.value) {
            {
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp617 = -1;
        goto $l615;
        $l615:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        switch ($tmp617) {
            case -1: goto $l639;
        }
        $l639:;
    }
    $tmp614 = -1;
    goto $l612;
    $l612:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp614) {
        case -1: goto $l640;
    }
    $l640:;
}

