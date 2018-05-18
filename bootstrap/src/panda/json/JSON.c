#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Real64.h"
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

typedef panda$json$JSON* (*$fn154)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn183)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn212)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn241)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn273)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn305)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn491)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn506)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn552)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn559)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn570)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$23_92;
    panda$core$Char32 $tmp4;
    panda$core$String$Index end6;
    panda$core$String$Index fieldStart8;
    panda$core$String$Index index10;
    panda$core$Char32 c13;
    panda$core$Char32 $tmp16;
    panda$core$Char32 $tmp19;
    panda$json$JSON$PathKey* $finallyReturn25;
    panda$json$JSON$PathKey* $tmp27;
    panda$json$JSON$PathKey* $finallyReturn28;
    panda$json$JSON$PathKey* $tmp30;
    panda$json$JSON$PathKey* $tmp31;
    panda$core$String* $tmp33;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp34;
    panda$core$Char32 $tmp37;
    panda$core$String$Index indexStart39;
    panda$core$String$Index index41;
    panda$core$Char32 $tmp46;
    panda$core$Int64$nullable parsed49;
    panda$core$String* $tmp50;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp51;
    panda$json$JSON$PathKey* $finallyReturn53;
    panda$json$JSON$PathKey* $tmp55;
    panda$json$JSON$PathKey* $finallyReturn56;
    panda$json$JSON$PathKey* $tmp58;
    panda$json$JSON$PathKey* $tmp59;
    panda$json$JSON$PathKey* $finallyReturn62;
    panda$json$JSON$PathKey* $tmp64;
    {
        panda$core$Char32 $tmp3 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, p_start);
        $match$23_92 = $tmp3;
        panda$core$Char32$init$panda$core$Int32(&$tmp4, ((panda$core$Int32) { 47 }));
        panda$core$Bit $tmp5 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_92, $tmp4);
        if ($tmp5.value) {
        {
            panda$core$String$Index $tmp7 = panda$core$String$end$R$panda$core$String$Index(p_path);
            end6 = $tmp7;
            panda$core$String$Index $tmp9 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            fieldStart8 = $tmp9;
            index10 = fieldStart8;
            $l11:;
            {
                panda$core$Char32 $tmp14 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index10);
                c13 = $tmp14;
                panda$core$Char32$init$panda$core$Int32(&$tmp16, ((panda$core$Int32) { 47 }));
                panda$core$Bit $tmp17 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c13, $tmp16);
                bool $tmp15 = $tmp17.value;
                if ($tmp15) goto $l18;
                panda$core$Char32$init$panda$core$Int32(&$tmp19, ((panda$core$Int32) { 91 }));
                panda$core$Bit $tmp20 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c13, $tmp19);
                $tmp15 = $tmp20.value;
                $l18:;
                panda$core$Bit $tmp21 = { $tmp15 };
                if ($tmp21.value) {
                {
                    goto $l12;
                }
                }
                panda$core$String$Index $tmp22 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index10);
                index10 = $tmp22;
            }
            panda$core$Bit $tmp24 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index10, end6);
            bool $tmp23 = $tmp24.value;
            if ($tmp23) goto $l11;
            $l12:;
            panda$core$Bit $tmp25 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(fieldStart8, index10);
            if ($tmp25.value) {
            {
                $tmp27 = NULL;
                $finallyReturn25 = $tmp27;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
                return $finallyReturn25;
            }
            }
            panda$json$JSON$PathKey* $tmp32 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp34, fieldStart8, index10, ((panda$core$Bit) { false }));
            panda$core$String* $tmp35 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp34);
            $tmp33 = $tmp35;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp32, ((panda$core$Int64) { 0 }), $tmp33, index10);
            $tmp31 = $tmp32;
            $tmp30 = $tmp31;
            $finallyReturn28 = $tmp30;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
            return $finallyReturn28;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp37, ((panda$core$Int32) { 91 }));
        panda$core$Bit $tmp38 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_92, $tmp37);
        if ($tmp38.value) {
        {
            panda$core$String$Index $tmp40 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart39 = $tmp40;
            index41 = indexStart39;
            $l42:;
            panda$core$Char32 $tmp45 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index41);
            panda$core$Char32$init$panda$core$Int32(&$tmp46, ((panda$core$Int32) { 93 }));
            panda$core$Bit $tmp47 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp45, $tmp46);
            bool $tmp44 = $tmp47.value;
            if (!$tmp44) goto $l43;
            {
                panda$core$String$Index $tmp48 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index41);
                index41 = $tmp48;
            }
            goto $l42;
            $l43:;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp51, indexStart39, index41, ((panda$core$Bit) { false }));
            panda$core$String* $tmp52 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp51);
            $tmp50 = $tmp52;
            panda$core$Int64$nullable $tmp53 = panda$core$String$convert$R$panda$core$Int64$Q($tmp50);
            parsed49 = $tmp53;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
            if (((panda$core$Bit) { !parsed49.nonnull }).value) {
            {
                $tmp55 = NULL;
                $finallyReturn53 = $tmp55;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
                return $finallyReturn53;
            }
            }
            panda$json$JSON$PathKey* $tmp60 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$String$Index $tmp61 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index41);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp60, ((panda$core$Int64) { 1 }), ((panda$core$Int64) parsed49.value), $tmp61);
            $tmp59 = $tmp60;
            $tmp58 = $tmp59;
            $finallyReturn56 = $tmp58;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
            return $finallyReturn56;
        }
        }
        else {
        {
            $tmp64 = NULL;
            $finallyReturn62 = $tmp64;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
            return $finallyReturn62;
        }
        }
        }
    }
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index69;
    panda$core$String$Index end71;
    panda$json$JSON* current73 = NULL;
    panda$json$JSON* $tmp74;
    panda$json$JSON$PathKey* $tmp79;
    panda$json$JSON$PathKey* $match$76_1384 = NULL;
    panda$json$JSON$PathKey* $tmp85;
    panda$json$JSON$PathKey* $tmp86;
    panda$core$String* field89 = NULL;
    panda$core$String$Index next91;
    panda$json$JSON* $match$78_2196 = NULL;
    panda$json$JSON* $tmp97;
    panda$collections$ImmutableHashMap* fields99 = NULL;
    panda$json$JSON* $tmp101;
    panda$json$JSON* $tmp102;
    panda$core$Object* $tmp103;
    panda$json$JSON* $finallyReturn104;
    panda$json$JSON* $tmp106;
    panda$json$JSON* $finallyReturn110;
    panda$json$JSON* $tmp112;
    panda$core$Int64 key119;
    panda$core$String$Index next121;
    panda$json$JSON* $match$89_21126 = NULL;
    panda$json$JSON* $tmp127;
    panda$collections$ImmutableArray* nodes129 = NULL;
    panda$json$JSON* $tmp131;
    panda$json$JSON* $tmp132;
    panda$core$Object* $tmp133;
    panda$json$JSON* $finallyReturn134;
    panda$json$JSON* $tmp136;
    panda$json$JSON* $finallyReturn142;
    panda$json$JSON* $tmp144;
    int $tmp68;
    {
        panda$core$String$Index $tmp70 = panda$core$String$start$R$panda$core$String$Index(p_path);
        index69 = $tmp70;
        panda$core$String$Index $tmp72 = panda$core$String$end$R$panda$core$String$Index(p_path);
        end71 = $tmp72;
        $tmp74 = self;
        current73 = $tmp74;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
        $l75:;
        panda$core$Bit $tmp78 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index69, end71);
        bool $tmp77 = $tmp78.value;
        if (!$tmp77) goto $l76;
        {
            panda$json$JSON$PathKey* $tmp80 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index69);
            $tmp79 = $tmp80;
            PANDA_ASSERT(((panda$core$Bit) { $tmp79 != NULL }).value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
            int $tmp83;
            {
                panda$json$JSON$PathKey* $tmp87 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index69);
                $tmp86 = $tmp87;
                $tmp85 = $tmp86;
                $match$76_1384 = $tmp85;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
                panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1384->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp88.value) {
                {
                    panda$core$String** $tmp90 = ((panda$core$String**) ((char*) $match$76_1384->$data + 0));
                    field89 = *$tmp90;
                    panda$core$String$Index* $tmp92 = ((panda$core$String$Index*) ((char*) $match$76_1384->$data + 8));
                    next91 = *$tmp92;
                    int $tmp95;
                    {
                        $tmp97 = current73;
                        $match$78_2196 = $tmp97;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
                        panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_2196->$rawValue, ((panda$core$Int64) { 4 }));
                        if ($tmp98.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp100 = ((panda$collections$ImmutableHashMap**) ((char*) $match$78_2196->$data + 0));
                            fields99 = *$tmp100;
                            {
                                $tmp101 = current73;
                                panda$core$Object* $tmp104 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields99, ((panda$collections$Key*) field89));
                                $tmp103 = $tmp104;
                                $tmp102 = ((panda$json$JSON*) $tmp103);
                                current73 = $tmp102;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                                panda$core$Panda$unref$panda$core$Object($tmp103);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                            }
                            if (((panda$core$Bit) { current73 == NULL }).value) {
                            {
                                $tmp106 = NULL;
                                $finallyReturn104 = $tmp106;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
                                $tmp95 = 0;
                                goto $l93;
                                $l107:;
                                $tmp83 = 0;
                                goto $l81;
                                $l108:;
                                $tmp68 = 0;
                                goto $l66;
                                $l109:;
                                return $finallyReturn104;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp112 = NULL;
                            $finallyReturn110 = $tmp112;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
                            $tmp95 = 1;
                            goto $l93;
                            $l113:;
                            $tmp83 = 1;
                            goto $l81;
                            $l114:;
                            $tmp68 = 1;
                            goto $l66;
                            $l115:;
                            return $finallyReturn110;
                        }
                        }
                    }
                    $tmp95 = -1;
                    goto $l93;
                    $l93:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
                    switch ($tmp95) {
                        case 0: goto $l107;
                        case -1: goto $l117;
                        case 1: goto $l113;
                    }
                    $l117:;
                    index69 = next91;
                }
                }
                else {
                panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1384->$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp118.value) {
                {
                    panda$core$Int64* $tmp120 = ((panda$core$Int64*) ((char*) $match$76_1384->$data + 0));
                    key119 = *$tmp120;
                    panda$core$String$Index* $tmp122 = ((panda$core$String$Index*) ((char*) $match$76_1384->$data + 8));
                    next121 = *$tmp122;
                    int $tmp125;
                    {
                        $tmp127 = current73;
                        $match$89_21126 = $tmp127;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$89_21126->$rawValue, ((panda$core$Int64) { 5 }));
                        if ($tmp128.value) {
                        {
                            panda$collections$ImmutableArray** $tmp130 = ((panda$collections$ImmutableArray**) ((char*) $match$89_21126->$data + 0));
                            nodes129 = *$tmp130;
                            {
                                $tmp131 = current73;
                                panda$core$Object* $tmp134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes129, key119);
                                $tmp133 = $tmp134;
                                $tmp132 = ((panda$json$JSON*) $tmp133);
                                current73 = $tmp132;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
                                panda$core$Panda$unref$panda$core$Object($tmp133);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                            }
                        }
                        }
                        else {
                        {
                            $tmp136 = NULL;
                            $finallyReturn134 = $tmp136;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                            $tmp125 = 0;
                            goto $l123;
                            $l137:;
                            $tmp83 = 2;
                            goto $l81;
                            $l138:;
                            $tmp68 = 2;
                            goto $l66;
                            $l139:;
                            return $finallyReturn134;
                        }
                        }
                    }
                    $tmp125 = -1;
                    goto $l123;
                    $l123:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                    switch ($tmp125) {
                        case 0: goto $l137;
                        case -1: goto $l141;
                    }
                    $l141:;
                    index69 = next121;
                }
                }
                }
            }
            $tmp83 = -1;
            goto $l81;
            $l81:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
            switch ($tmp83) {
                case 2: goto $l138;
                case -1: goto $l142;
                case 0: goto $l108;
                case 1: goto $l114;
            }
            $l142:;
        }
        goto $l75;
        $l76:;
        $tmp144 = current73;
        $finallyReturn142 = $tmp144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
        $tmp68 = 3;
        goto $l66;
        $l145:;
        return $finallyReturn142;
    }
    $l66:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current73));
    current73 = NULL;
    switch ($tmp68) {
        case 3: goto $l145;
        case 0: goto $l109;
        case 2: goto $l139;
        case 1: goto $l115;
    }
    $l147:;
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result151 = NULL;
    panda$json$JSON* $tmp152;
    panda$json$JSON* $tmp153;
    panda$core$Int64$nullable $finallyReturn155;
    panda$json$JSON* $match$109_9162 = NULL;
    panda$json$JSON* $tmp163;
    panda$core$Int64 value165;
    panda$core$Int64$nullable $finallyReturn166;
    panda$core$Int64$nullable $finallyReturn170;
    int $tmp150;
    {
        panda$json$JSON* $tmp155 = (($fn154) self->$class->vtable[2])(self, p_path);
        $tmp153 = $tmp155;
        $tmp152 = $tmp153;
        result151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        if (((panda$core$Bit) { result151 == NULL }).value) {
        {
            $finallyReturn155 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp150 = 0;
            goto $l148;
            $l157:;
            return $finallyReturn155;
        }
        }
        int $tmp161;
        {
            $tmp163 = result151;
            $match$109_9162 = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_9162->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp164.value) {
            {
                panda$core$Int64* $tmp166 = ((panda$core$Int64*) ((char*) $match$109_9162->$data + 0));
                value165 = *$tmp166;
                $finallyReturn166 = ((panda$core$Int64$nullable) { value165, true });
                $tmp161 = 0;
                goto $l159;
                $l168:;
                $tmp150 = 1;
                goto $l148;
                $l169:;
                return $finallyReturn166;
            }
            }
            else {
            {
                $finallyReturn170 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp161 = 1;
                goto $l159;
                $l172:;
                $tmp150 = 2;
                goto $l148;
                $l173:;
                return $finallyReturn170;
            }
            }
        }
        $tmp161 = -1;
        goto $l159;
        $l159:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
        switch ($tmp161) {
            case -1: goto $l175;
            case 1: goto $l172;
            case 0: goto $l168;
        }
        $l175:;
    }
    $tmp150 = -1;
    goto $l148;
    $l148:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result151));
    result151 = NULL;
    switch ($tmp150) {
        case 2: goto $l173;
        case -1: goto $l176;
        case 1: goto $l169;
        case 0: goto $l157;
    }
    $l176:;
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result180 = NULL;
    panda$json$JSON* $tmp181;
    panda$json$JSON* $tmp182;
    panda$core$Real64$nullable $finallyReturn184;
    panda$json$JSON* $match$125_9191 = NULL;
    panda$json$JSON* $tmp192;
    panda$core$Real64 value194;
    panda$core$Real64$nullable $finallyReturn195;
    panda$core$Real64$nullable $finallyReturn199;
    int $tmp179;
    {
        panda$json$JSON* $tmp184 = (($fn183) self->$class->vtable[2])(self, p_path);
        $tmp182 = $tmp184;
        $tmp181 = $tmp182;
        result180 = $tmp181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
        if (((panda$core$Bit) { result180 == NULL }).value) {
        {
            $finallyReturn184 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp179 = 0;
            goto $l177;
            $l186:;
            return $finallyReturn184;
        }
        }
        int $tmp190;
        {
            $tmp192 = result180;
            $match$125_9191 = $tmp192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
            panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9191->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp193.value) {
            {
                panda$core$Real64* $tmp195 = ((panda$core$Real64*) ((char*) $match$125_9191->$data + 0));
                value194 = *$tmp195;
                $finallyReturn195 = ((panda$core$Real64$nullable) { value194, true });
                $tmp190 = 0;
                goto $l188;
                $l197:;
                $tmp179 = 1;
                goto $l177;
                $l198:;
                return $finallyReturn195;
            }
            }
            else {
            {
                $finallyReturn199 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp190 = 1;
                goto $l188;
                $l201:;
                $tmp179 = 2;
                goto $l177;
                $l202:;
                return $finallyReturn199;
            }
            }
        }
        $tmp190 = -1;
        goto $l188;
        $l188:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
        switch ($tmp190) {
            case -1: goto $l204;
            case 0: goto $l197;
            case 1: goto $l201;
        }
        $l204:;
    }
    $tmp179 = -1;
    goto $l177;
    $l177:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result180));
    result180 = NULL;
    switch ($tmp179) {
        case 2: goto $l202;
        case -1: goto $l205;
        case 1: goto $l198;
        case 0: goto $l186;
    }
    $l205:;
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result209 = NULL;
    panda$json$JSON* $tmp210;
    panda$json$JSON* $tmp211;
    panda$core$Bit$nullable $finallyReturn213;
    panda$json$JSON* $match$141_9220 = NULL;
    panda$json$JSON* $tmp221;
    panda$core$Bit value223;
    panda$core$Bit$nullable $finallyReturn224;
    panda$core$Bit$nullable $finallyReturn228;
    int $tmp208;
    {
        panda$json$JSON* $tmp213 = (($fn212) self->$class->vtable[2])(self, p_path);
        $tmp211 = $tmp213;
        $tmp210 = $tmp211;
        result209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        if (((panda$core$Bit) { result209 == NULL }).value) {
        {
            $finallyReturn213 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp208 = 0;
            goto $l206;
            $l215:;
            return $finallyReturn213;
        }
        }
        int $tmp219;
        {
            $tmp221 = result209;
            $match$141_9220 = $tmp221;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
            panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9220->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp222.value) {
            {
                panda$core$Bit* $tmp224 = ((panda$core$Bit*) ((char*) $match$141_9220->$data + 0));
                value223 = *$tmp224;
                $finallyReturn224 = ((panda$core$Bit$nullable) { value223, true });
                $tmp219 = 0;
                goto $l217;
                $l226:;
                $tmp208 = 1;
                goto $l206;
                $l227:;
                return $finallyReturn224;
            }
            }
            else {
            {
                $finallyReturn228 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp219 = 1;
                goto $l217;
                $l230:;
                $tmp208 = 2;
                goto $l206;
                $l231:;
                return $finallyReturn228;
            }
            }
        }
        $tmp219 = -1;
        goto $l217;
        $l217:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
        switch ($tmp219) {
            case -1: goto $l233;
            case 1: goto $l230;
            case 0: goto $l226;
        }
        $l233:;
    }
    $tmp208 = -1;
    goto $l206;
    $l206:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result209));
    result209 = NULL;
    switch ($tmp208) {
        case 1: goto $l227;
        case 2: goto $l231;
        case -1: goto $l234;
        case 0: goto $l215;
    }
    $l234:;
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result238 = NULL;
    panda$json$JSON* $tmp239;
    panda$json$JSON* $tmp240;
    panda$core$String* $finallyReturn242;
    panda$core$String* $tmp244;
    panda$json$JSON* $match$157_9250 = NULL;
    panda$json$JSON* $tmp251;
    panda$core$String* value253 = NULL;
    panda$core$String* $finallyReturn254;
    panda$core$String* $tmp256;
    panda$core$String* $finallyReturn259;
    panda$core$String* $tmp261;
    int $tmp237;
    {
        panda$json$JSON* $tmp242 = (($fn241) self->$class->vtable[2])(self, p_path);
        $tmp240 = $tmp242;
        $tmp239 = $tmp240;
        result238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
        if (((panda$core$Bit) { result238 == NULL }).value) {
        {
            $tmp244 = NULL;
            $finallyReturn242 = $tmp244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
            $tmp237 = 0;
            goto $l235;
            $l245:;
            return $finallyReturn242;
        }
        }
        int $tmp249;
        {
            $tmp251 = result238;
            $match$157_9250 = $tmp251;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
            panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_9250->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp252.value) {
            {
                panda$core$String** $tmp254 = ((panda$core$String**) ((char*) $match$157_9250->$data + 0));
                value253 = *$tmp254;
                $tmp256 = value253;
                $finallyReturn254 = $tmp256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                $tmp249 = 0;
                goto $l247;
                $l257:;
                $tmp237 = 1;
                goto $l235;
                $l258:;
                return $finallyReturn254;
            }
            }
            else {
            {
                $tmp261 = NULL;
                $finallyReturn259 = $tmp261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                $tmp249 = 1;
                goto $l247;
                $l262:;
                $tmp237 = 2;
                goto $l235;
                $l263:;
                return $finallyReturn259;
            }
            }
        }
        $tmp249 = -1;
        goto $l247;
        $l247:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
        switch ($tmp249) {
            case -1: goto $l265;
            case 0: goto $l257;
            case 1: goto $l262;
        }
        $l265:;
    }
    $tmp237 = -1;
    goto $l235;
    $l235:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result238));
    result238 = NULL;
    switch ($tmp237) {
        case -1: goto $l266;
        case 1: goto $l258;
        case 0: goto $l245;
        case 2: goto $l263;
    }
    $l266:;
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result270 = NULL;
    panda$json$JSON* $tmp271;
    panda$json$JSON* $tmp272;
    panda$collections$ListView* $finallyReturn274;
    panda$collections$ListView* $tmp276;
    panda$json$JSON* $match$173_9282 = NULL;
    panda$json$JSON* $tmp283;
    panda$collections$ImmutableArray* value285 = NULL;
    panda$collections$ListView* $finallyReturn286;
    panda$collections$ListView* $tmp288;
    panda$collections$ListView* $finallyReturn291;
    panda$collections$ListView* $tmp293;
    int $tmp269;
    {
        panda$json$JSON* $tmp274 = (($fn273) self->$class->vtable[2])(self, p_path);
        $tmp272 = $tmp274;
        $tmp271 = $tmp272;
        result270 = $tmp271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
        if (((panda$core$Bit) { result270 == NULL }).value) {
        {
            $tmp276 = NULL;
            $finallyReturn274 = $tmp276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
            $tmp269 = 0;
            goto $l267;
            $l277:;
            return $finallyReturn274;
        }
        }
        int $tmp281;
        {
            $tmp283 = result270;
            $match$173_9282 = $tmp283;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
            panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9282->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp284.value) {
            {
                panda$collections$ImmutableArray** $tmp286 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9282->$data + 0));
                value285 = *$tmp286;
                $tmp288 = ((panda$collections$ListView*) value285);
                $finallyReturn286 = $tmp288;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
                $tmp281 = 0;
                goto $l279;
                $l289:;
                $tmp269 = 1;
                goto $l267;
                $l290:;
                return $finallyReturn286;
            }
            }
            else {
            {
                $tmp293 = NULL;
                $finallyReturn291 = $tmp293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                $tmp281 = 1;
                goto $l279;
                $l294:;
                $tmp269 = 2;
                goto $l267;
                $l295:;
                return $finallyReturn291;
            }
            }
        }
        $tmp281 = -1;
        goto $l279;
        $l279:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
        switch ($tmp281) {
            case 0: goto $l289;
            case -1: goto $l297;
            case 1: goto $l294;
        }
        $l297:;
    }
    $tmp269 = -1;
    goto $l267;
    $l267:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
    result270 = NULL;
    switch ($tmp269) {
        case -1: goto $l298;
        case 2: goto $l295;
        case 0: goto $l277;
        case 1: goto $l290;
    }
    $l298:;
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result302 = NULL;
    panda$json$JSON* $tmp303;
    panda$json$JSON* $tmp304;
    panda$collections$MapView* $finallyReturn306;
    panda$collections$MapView* $tmp308;
    panda$json$JSON* $match$189_9314 = NULL;
    panda$json$JSON* $tmp315;
    panda$collections$ImmutableHashMap* value317 = NULL;
    panda$collections$MapView* $finallyReturn318;
    panda$collections$MapView* $tmp320;
    panda$collections$MapView* $finallyReturn323;
    panda$collections$MapView* $tmp325;
    int $tmp301;
    {
        panda$json$JSON* $tmp306 = (($fn305) self->$class->vtable[2])(self, p_path);
        $tmp304 = $tmp306;
        $tmp303 = $tmp304;
        result302 = $tmp303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
        if (((panda$core$Bit) { result302 == NULL }).value) {
        {
            $tmp308 = NULL;
            $finallyReturn306 = $tmp308;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
            $tmp301 = 0;
            goto $l299;
            $l309:;
            return $finallyReturn306;
        }
        }
        int $tmp313;
        {
            $tmp315 = result302;
            $match$189_9314 = $tmp315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
            panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9314->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp316.value) {
            {
                panda$collections$ImmutableHashMap** $tmp318 = ((panda$collections$ImmutableHashMap**) ((char*) $match$189_9314->$data + 0));
                value317 = *$tmp318;
                $tmp320 = ((panda$collections$MapView*) value317);
                $finallyReturn318 = $tmp320;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                $tmp313 = 0;
                goto $l311;
                $l321:;
                $tmp301 = 1;
                goto $l299;
                $l322:;
                return $finallyReturn318;
            }
            }
            else {
            {
                $tmp325 = NULL;
                $finallyReturn323 = $tmp325;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
                $tmp313 = 1;
                goto $l311;
                $l326:;
                $tmp301 = 2;
                goto $l299;
                $l327:;
                return $finallyReturn323;
            }
            }
        }
        $tmp313 = -1;
        goto $l311;
        $l311:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
        switch ($tmp313) {
            case 1: goto $l326;
            case 0: goto $l321;
            case -1: goto $l329;
        }
        $l329:;
    }
    $tmp301 = -1;
    goto $l299;
    $l299:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result302));
    result302 = NULL;
    switch ($tmp301) {
        case 1: goto $l322;
        case -1: goto $l330;
        case 0: goto $l309;
        case 2: goto $l327;
    }
    $l330:;
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$json$JSON* $match$199_9335 = NULL;
    panda$json$JSON* $tmp336;
    panda$core$Int64 value338;
    panda$core$Int64 $finallyReturn339;
    panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp331.value);
    int $tmp334;
    {
        $tmp336 = self;
        $match$199_9335 = $tmp336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9335->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp337.value) {
        {
            panda$core$Int64* $tmp339 = ((panda$core$Int64*) ((char*) $match$199_9335->$data + 0));
            value338 = *$tmp339;
            $finallyReturn339 = value338;
            $tmp334 = 0;
            goto $l332;
            $l341:;
            return $finallyReturn339;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp334 = -1;
    goto $l332;
    $l332:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
    switch ($tmp334) {
        case -1: goto $l343;
        case 0: goto $l341;
    }
    $l343:;
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$json$JSON* $match$209_9348 = NULL;
    panda$json$JSON* $tmp349;
    panda$core$Real64 value351;
    panda$core$Real64 $finallyReturn352;
    panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp344.value);
    int $tmp347;
    {
        $tmp349 = self;
        $match$209_9348 = $tmp349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9348->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp350.value) {
        {
            panda$core$Real64* $tmp352 = ((panda$core$Real64*) ((char*) $match$209_9348->$data + 0));
            value351 = *$tmp352;
            $finallyReturn352 = value351;
            $tmp347 = 0;
            goto $l345;
            $l354:;
            return $finallyReturn352;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp347 = -1;
    goto $l345;
    $l345:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    switch ($tmp347) {
        case 0: goto $l354;
        case -1: goto $l356;
    }
    $l356:;
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$219_9361 = NULL;
    panda$json$JSON* $tmp362;
    panda$core$String* value364 = NULL;
    panda$core$String* $finallyReturn365;
    panda$core$String* $tmp367;
    panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp357.value);
    int $tmp360;
    {
        $tmp362 = self;
        $match$219_9361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9361->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp363.value) {
        {
            panda$core$String** $tmp365 = ((panda$core$String**) ((char*) $match$219_9361->$data + 0));
            value364 = *$tmp365;
            $tmp367 = value364;
            $finallyReturn365 = $tmp367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
            $tmp360 = 0;
            goto $l358;
            $l368:;
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
        case -1: goto $l370;
        case 0: goto $l368;
    }
    $l370:;
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$json$JSON* $match$229_9375 = NULL;
    panda$json$JSON* $tmp376;
    panda$core$Bit value378;
    panda$core$Bit $finallyReturn379;
    panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp371.value);
    int $tmp374;
    {
        $tmp376 = self;
        $match$229_9375 = $tmp376;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9375->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp377.value) {
        {
            panda$core$Bit* $tmp379 = ((panda$core$Bit*) ((char*) $match$229_9375->$data + 0));
            value378 = *$tmp379;
            $finallyReturn379 = value378;
            $tmp374 = 0;
            goto $l372;
            $l381:;
            return $finallyReturn379;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp374 = -1;
    goto $l372;
    $l372:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
    switch ($tmp374) {
        case 0: goto $l381;
        case -1: goto $l383;
    }
    $l383:;
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$239_9388 = NULL;
    panda$json$JSON* $tmp389;
    panda$collections$ImmutableHashMap* value391 = NULL;
    panda$collections$MapView* $finallyReturn392;
    panda$collections$MapView* $tmp394;
    panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 4 }));
    PANDA_ASSERT($tmp384.value);
    int $tmp387;
    {
        $tmp389 = self;
        $match$239_9388 = $tmp389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9388->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp390.value) {
        {
            panda$collections$ImmutableHashMap** $tmp392 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9388->$data + 0));
            value391 = *$tmp392;
            $tmp394 = ((panda$collections$MapView*) value391);
            $finallyReturn392 = $tmp394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
            $tmp387 = 0;
            goto $l385;
            $l395:;
            return $finallyReturn392;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp387 = -1;
    goto $l385;
    $l385:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
    switch ($tmp387) {
        case 0: goto $l395;
        case -1: goto $l397;
    }
    $l397:;
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$249_9402 = NULL;
    panda$json$JSON* $tmp403;
    panda$collections$ImmutableArray* value405 = NULL;
    panda$collections$ListView* $finallyReturn406;
    panda$collections$ListView* $tmp408;
    panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp398.value);
    int $tmp401;
    {
        $tmp403 = self;
        $match$249_9402 = $tmp403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9402->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp404.value) {
        {
            panda$collections$ImmutableArray** $tmp406 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9402->$data + 0));
            value405 = *$tmp406;
            $tmp408 = ((panda$collections$ListView*) value405);
            $finallyReturn406 = $tmp408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
            $tmp401 = 0;
            goto $l399;
            $l409:;
            return $finallyReturn406;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp401 = -1;
    goto $l399;
    $l399:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    switch ($tmp401) {
        case -1: goto $l411;
        case 0: goto $l409;
    }
    $l411:;
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9415 = NULL;
    panda$json$JSON* $tmp416;
    panda$core$Int64 value418;
    panda$core$String* $finallyReturn419;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$Real64 value427;
    panda$core$String* $finallyReturn428;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    panda$core$String* value436 = NULL;
    panda$core$String* $finallyReturn437;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$Bit value446;
    panda$core$String* $finallyReturn447;
    panda$core$String* $tmp449;
    panda$core$String* $tmp450;
    panda$collections$ImmutableHashMap* fields455 = NULL;
    panda$core$MutableString* result460 = NULL;
    panda$core$MutableString* $tmp461;
    panda$core$MutableString* $tmp462;
    panda$core$String* separator465 = NULL;
    panda$core$String* $tmp466;
    panda$collections$Iterator* Iter$271$17471 = NULL;
    panda$collections$Iterator* $tmp472;
    panda$collections$Iterator* $tmp473;
    panda$core$String* k486 = NULL;
    panda$core$String* $tmp487;
    panda$core$Object* $tmp488;
    panda$core$String* $tmp493;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$String* $tmp497;
    panda$core$String* $tmp498;
    panda$core$String* $tmp502;
    panda$core$Object* $tmp511;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$String* $finallyReturn521;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$collections$ImmutableArray* nodes531 = NULL;
    panda$core$MutableString* result536 = NULL;
    panda$core$MutableString* $tmp537;
    panda$core$MutableString* $tmp538;
    panda$core$String* separator541 = NULL;
    panda$core$String* $tmp542;
    panda$collections$Iterator* Iter$280$17547 = NULL;
    panda$collections$Iterator* $tmp548;
    panda$collections$Iterator* $tmp549;
    panda$json$JSON* n565 = NULL;
    panda$json$JSON* $tmp566;
    panda$core$Object* $tmp567;
    panda$core$String* $tmp572;
    panda$core$String* $tmp573;
    panda$core$String* $tmp574;
    panda$core$String* $tmp575;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$Char8 $tmp587;
    panda$core$String* $finallyReturn587;
    panda$core$String* $tmp589;
    panda$core$String* $tmp590;
    panda$core$String* $finallyReturn596;
    panda$core$String* $tmp598;
    int $tmp414;
    {
        $tmp416 = self;
        $match$259_9415 = $tmp416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp417.value) {
        {
            panda$core$Int64* $tmp419 = ((panda$core$Int64*) ((char*) $match$259_9415->$data + 0));
            value418 = *$tmp419;
            panda$core$String* $tmp423 = panda$core$Int64$convert$R$panda$core$String(value418);
            $tmp422 = $tmp423;
            $tmp421 = $tmp422;
            $finallyReturn419 = $tmp421;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
            $tmp414 = 0;
            goto $l412;
            $l424:;
            return $finallyReturn419;
        }
        }
        else {
        panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp426.value) {
        {
            panda$core$Real64* $tmp428 = ((panda$core$Real64*) ((char*) $match$259_9415->$data + 0));
            value427 = *$tmp428;
            panda$core$String* $tmp432 = panda$core$Real64$convert$R$panda$core$String(value427);
            $tmp431 = $tmp432;
            $tmp430 = $tmp431;
            $finallyReturn428 = $tmp430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
            $tmp414 = 1;
            goto $l412;
            $l433:;
            return $finallyReturn428;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp435.value) {
        {
            panda$core$String** $tmp437 = ((panda$core$String**) ((char*) $match$259_9415->$data + 0));
            value436 = *$tmp437;
            panda$core$String* $tmp442 = panda$core$String$format$panda$core$String$R$panda$core$String(value436, &$s441);
            $tmp440 = $tmp442;
            $tmp439 = $tmp440;
            $finallyReturn437 = $tmp439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
            $tmp414 = 2;
            goto $l412;
            $l443:;
            return $finallyReturn437;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp445.value) {
        {
            panda$core$Bit* $tmp447 = ((panda$core$Bit*) ((char*) $match$259_9415->$data + 0));
            value446 = *$tmp447;
            panda$core$String* $tmp451 = panda$core$Bit$convert$R$panda$core$String(value446);
            $tmp450 = $tmp451;
            $tmp449 = $tmp450;
            $finallyReturn447 = $tmp449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
            $tmp414 = 3;
            goto $l412;
            $l452:;
            return $finallyReturn447;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp454.value) {
        {
            panda$collections$ImmutableHashMap** $tmp456 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9415->$data + 0));
            fields455 = *$tmp456;
            int $tmp459;
            {
                panda$core$MutableString* $tmp463 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp463, &$s464);
                $tmp462 = $tmp463;
                $tmp461 = $tmp462;
                result460 = $tmp461;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
                $tmp466 = &$s467;
                separator465 = $tmp466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                {
                    int $tmp470;
                    {
                        panda$collections$Iterator* $tmp474 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields455);
                        $tmp473 = $tmp474;
                        $tmp472 = $tmp473;
                        Iter$271$17471 = $tmp472;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                        $l475:;
                        ITable* $tmp478 = Iter$271$17471->$class->itable;
                        while ($tmp478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp478 = $tmp478->next;
                        }
                        $fn480 $tmp479 = $tmp478->methods[0];
                        panda$core$Bit $tmp481 = $tmp479(Iter$271$17471);
                        panda$core$Bit $tmp482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp481);
                        bool $tmp477 = $tmp482.value;
                        if (!$tmp477) goto $l476;
                        {
                            int $tmp485;
                            {
                                ITable* $tmp489 = Iter$271$17471->$class->itable;
                                while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp489 = $tmp489->next;
                                }
                                $fn491 $tmp490 = $tmp489->methods[1];
                                panda$core$Object* $tmp492 = $tmp490(Iter$271$17471);
                                $tmp488 = $tmp492;
                                $tmp487 = ((panda$core$String*) $tmp488);
                                k486 = $tmp487;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
                                panda$core$Panda$unref$panda$core$Object($tmp488);
                                panda$core$String* $tmp499 = panda$core$String$convert$R$panda$core$String(separator465);
                                $tmp498 = $tmp499;
                                panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s500);
                                $tmp497 = $tmp501;
                                ITable* $tmp504 = ((panda$core$Formattable*) k486)->$class->itable;
                                while ($tmp504->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp504 = $tmp504->next;
                                }
                                $fn506 $tmp505 = $tmp504->methods[0];
                                panda$core$String* $tmp507 = $tmp505(((panda$core$Formattable*) k486), &$s503);
                                $tmp502 = $tmp507;
                                panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, $tmp502);
                                $tmp496 = $tmp508;
                                panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp496, &$s509);
                                $tmp495 = $tmp510;
                                panda$core$Object* $tmp512 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields455, ((panda$collections$Key*) k486));
                                $tmp511 = $tmp512;
                                panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp495, ((panda$core$Object*) ((panda$json$JSON*) $tmp511)));
                                $tmp494 = $tmp513;
                                panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s514);
                                $tmp493 = $tmp515;
                                panda$core$MutableString$append$panda$core$String(result460, $tmp493);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                                panda$core$Panda$unref$panda$core$Object($tmp511);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
                                {
                                    $tmp516 = separator465;
                                    $tmp517 = &$s518;
                                    separator465 = $tmp517;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                                }
                            }
                            $tmp485 = -1;
                            goto $l483;
                            $l483:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k486));
                            k486 = NULL;
                            switch ($tmp485) {
                                case -1: goto $l519;
                            }
                            $l519:;
                        }
                        goto $l475;
                        $l476:;
                    }
                    $tmp470 = -1;
                    goto $l468;
                    $l468:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17471));
                    Iter$271$17471 = NULL;
                    switch ($tmp470) {
                        case -1: goto $l520;
                    }
                    $l520:;
                }
                panda$core$MutableString$append$panda$core$String(result460, &$s521);
                panda$core$String* $tmp525 = panda$core$MutableString$finish$R$panda$core$String(result460);
                $tmp524 = $tmp525;
                $tmp523 = $tmp524;
                $finallyReturn521 = $tmp523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
                $tmp459 = 0;
                goto $l457;
                $l526:;
                $tmp414 = 4;
                goto $l412;
                $l527:;
                return $finallyReturn521;
            }
            $l457:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result460));
            result460 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator465));
            separator465 = NULL;
            switch ($tmp459) {
                case 0: goto $l526;
            }
            $l529:;
        }
        }
        else {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp530.value) {
        {
            panda$collections$ImmutableArray** $tmp532 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9415->$data + 0));
            nodes531 = *$tmp532;
            int $tmp535;
            {
                panda$core$MutableString* $tmp539 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp539, &$s540);
                $tmp538 = $tmp539;
                $tmp537 = $tmp538;
                result536 = $tmp537;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
                $tmp542 = &$s543;
                separator541 = $tmp542;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
                {
                    int $tmp546;
                    {
                        ITable* $tmp550 = ((panda$collections$Iterable*) nodes531)->$class->itable;
                        while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp550 = $tmp550->next;
                        }
                        $fn552 $tmp551 = $tmp550->methods[0];
                        panda$collections$Iterator* $tmp553 = $tmp551(((panda$collections$Iterable*) nodes531));
                        $tmp549 = $tmp553;
                        $tmp548 = $tmp549;
                        Iter$280$17547 = $tmp548;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                        $l554:;
                        ITable* $tmp557 = Iter$280$17547->$class->itable;
                        while ($tmp557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp557 = $tmp557->next;
                        }
                        $fn559 $tmp558 = $tmp557->methods[0];
                        panda$core$Bit $tmp560 = $tmp558(Iter$280$17547);
                        panda$core$Bit $tmp561 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp560);
                        bool $tmp556 = $tmp561.value;
                        if (!$tmp556) goto $l555;
                        {
                            int $tmp564;
                            {
                                ITable* $tmp568 = Iter$280$17547->$class->itable;
                                while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp568 = $tmp568->next;
                                }
                                $fn570 $tmp569 = $tmp568->methods[1];
                                panda$core$Object* $tmp571 = $tmp569(Iter$280$17547);
                                $tmp567 = $tmp571;
                                $tmp566 = ((panda$json$JSON*) $tmp567);
                                n565 = $tmp566;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp566));
                                panda$core$Panda$unref$panda$core$Object($tmp567);
                                panda$core$String* $tmp576 = panda$core$String$convert$R$panda$core$String(separator541);
                                $tmp575 = $tmp576;
                                panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s577);
                                $tmp574 = $tmp578;
                                panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp574, ((panda$core$Object*) n565));
                                $tmp573 = $tmp579;
                                panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s580);
                                $tmp572 = $tmp581;
                                panda$core$MutableString$append$panda$core$String(result536, $tmp572);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                                {
                                    $tmp582 = separator541;
                                    $tmp583 = &$s584;
                                    separator541 = $tmp583;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                }
                            }
                            $tmp564 = -1;
                            goto $l562;
                            $l562:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n565));
                            n565 = NULL;
                            switch ($tmp564) {
                                case -1: goto $l585;
                            }
                            $l585:;
                        }
                        goto $l554;
                        $l555:;
                    }
                    $tmp546 = -1;
                    goto $l544;
                    $l544:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17547));
                    Iter$280$17547 = NULL;
                    switch ($tmp546) {
                        case -1: goto $l586;
                    }
                    $l586:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp587, ((panda$core$UInt8) { 93 }));
                panda$core$MutableString$append$panda$core$Char8(result536, $tmp587);
                panda$core$String* $tmp591 = panda$core$MutableString$finish$R$panda$core$String(result536);
                $tmp590 = $tmp591;
                $tmp589 = $tmp590;
                $finallyReturn587 = $tmp589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                $tmp535 = 0;
                goto $l533;
                $l592:;
                $tmp414 = 5;
                goto $l412;
                $l593:;
                return $finallyReturn587;
            }
            $l533:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result536));
            result536 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator541));
            separator541 = NULL;
            switch ($tmp535) {
                case 0: goto $l592;
            }
            $l595:;
        }
        }
        else {
        panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9415->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp596.value) {
        {
            $tmp598 = &$s599;
            $finallyReturn596 = $tmp598;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp598));
            $tmp414 = 6;
            goto $l412;
            $l600:;
            return $finallyReturn596;
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
    $tmp414 = -1;
    goto $l412;
    $l412:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
    switch ($tmp414) {
        case 1: goto $l433;
        case 3: goto $l452;
        case 2: goto $l443;
        case 4: goto $l527;
        case -1: goto $l602;
        case 6: goto $l600;
        case 5: goto $l593;
        case 0: goto $l424;
    }
    $l602:;
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1609 = NULL;
    panda$json$JSON* $tmp610;
    panda$core$Int64 _f0612;
    panda$core$Real64 _f0615;
    panda$core$String* _f0618 = NULL;
    panda$core$Bit _f0621;
    panda$collections$ImmutableHashMap* _f0624 = NULL;
    panda$collections$ImmutableArray* _f0627 = NULL;
    int $tmp605;
    {
        int $tmp608;
        {
            $tmp610 = self;
            $match$5_1609 = $tmp610;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
            panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp611.value) {
            {
                panda$core$Int64* $tmp613 = ((panda$core$Int64*) ((char*) $match$5_1609->$data + 0));
                _f0612 = *$tmp613;
            }
            }
            else {
            panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp614.value) {
            {
                panda$core$Real64* $tmp616 = ((panda$core$Real64*) ((char*) $match$5_1609->$data + 0));
                _f0615 = *$tmp616;
            }
            }
            else {
            panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp617.value) {
            {
                panda$core$String** $tmp619 = ((panda$core$String**) ((char*) $match$5_1609->$data + 0));
                _f0618 = *$tmp619;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0618));
            }
            }
            else {
            panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp620.value) {
            {
                panda$core$Bit* $tmp622 = ((panda$core$Bit*) ((char*) $match$5_1609->$data + 0));
                _f0621 = *$tmp622;
            }
            }
            else {
            panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp623.value) {
            {
                panda$collections$ImmutableHashMap** $tmp625 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1609->$data + 0));
                _f0624 = *$tmp625;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0624));
            }
            }
            else {
            panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp626.value) {
            {
                panda$collections$ImmutableArray** $tmp628 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1609->$data + 0));
                _f0627 = *$tmp628;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0627));
            }
            }
            else {
            panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1609->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp629.value) {
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
        $tmp608 = -1;
        goto $l606;
        $l606:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
        switch ($tmp608) {
            case -1: goto $l630;
        }
        $l630:;
    }
    $tmp605 = -1;
    goto $l603;
    $l603:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp605) {
        case -1: goto $l631;
    }
    $l631:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp632 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp632 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp633 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp633 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp634;
    panda$core$String* $tmp637;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp635 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp634 = *$tmp635;
        panda$core$String** $tmp636 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp637 = p_f0;
        *$tmp636 = $tmp637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp638 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp638 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp639;
    panda$collections$ImmutableHashMap* $tmp642;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp640 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp639 = *$tmp640;
        panda$collections$ImmutableHashMap** $tmp641 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp642 = p_f0;
        *$tmp641 = $tmp642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp643;
    panda$collections$ImmutableArray* $tmp646;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp644 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp643 = *$tmp644;
        panda$collections$ImmutableArray** $tmp645 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp646 = p_f0;
        *$tmp645 = $tmp646;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

