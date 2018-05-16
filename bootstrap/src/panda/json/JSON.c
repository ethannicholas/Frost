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
typedef panda$core$Bit (*$fn474)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn485)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn500)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn546)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn553)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn564)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };

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
    panda$json$JSON* $match$199_9334 = NULL;
    panda$json$JSON* $tmp335;
    panda$core$Int64 value337;
    panda$core$Int64 $finallyReturn338;
    int $tmp333;
    {
        $tmp335 = self;
        $match$199_9334 = $tmp335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9334->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp336.value) {
        {
            panda$core$Int64* $tmp338 = ((panda$core$Int64*) ((char*) $match$199_9334->$data + 0));
            value337 = *$tmp338;
            $finallyReturn338 = value337;
            $tmp333 = 0;
            goto $l331;
            $l340:;
            return $finallyReturn338;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp333 = -1;
    goto $l331;
    $l331:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    switch ($tmp333) {
        case -1: goto $l342;
        case 0: goto $l340;
    }
    $l342:;
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$json$JSON* $match$209_9346 = NULL;
    panda$json$JSON* $tmp347;
    panda$core$Real64 value349;
    panda$core$Real64 $finallyReturn350;
    int $tmp345;
    {
        $tmp347 = self;
        $match$209_9346 = $tmp347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9346->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp348.value) {
        {
            panda$core$Real64* $tmp350 = ((panda$core$Real64*) ((char*) $match$209_9346->$data + 0));
            value349 = *$tmp350;
            $finallyReturn350 = value349;
            $tmp345 = 0;
            goto $l343;
            $l352:;
            return $finallyReturn350;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp345 = -1;
    goto $l343;
    $l343:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
    switch ($tmp345) {
        case -1: goto $l354;
        case 0: goto $l352;
    }
    $l354:;
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$219_9358 = NULL;
    panda$json$JSON* $tmp359;
    panda$core$String* value361 = NULL;
    panda$core$String* $finallyReturn362;
    panda$core$String* $tmp364;
    int $tmp357;
    {
        $tmp359 = self;
        $match$219_9358 = $tmp359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp359));
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9358->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp360.value) {
        {
            panda$core$String** $tmp362 = ((panda$core$String**) ((char*) $match$219_9358->$data + 0));
            value361 = *$tmp362;
            $tmp364 = value361;
            $finallyReturn362 = $tmp364;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
            $tmp357 = 0;
            goto $l355;
            $l365:;
            return $finallyReturn362;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp357 = -1;
    goto $l355;
    $l355:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
    switch ($tmp357) {
        case -1: goto $l367;
        case 0: goto $l365;
    }
    $l367:;
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$json$JSON* $match$229_9371 = NULL;
    panda$json$JSON* $tmp372;
    panda$core$Bit value374;
    panda$core$Bit $finallyReturn375;
    int $tmp370;
    {
        $tmp372 = self;
        $match$229_9371 = $tmp372;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9371->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp373.value) {
        {
            panda$core$Bit* $tmp375 = ((panda$core$Bit*) ((char*) $match$229_9371->$data + 0));
            value374 = *$tmp375;
            $finallyReturn375 = value374;
            $tmp370 = 0;
            goto $l368;
            $l377:;
            return $finallyReturn375;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp370 = -1;
    goto $l368;
    $l368:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
    switch ($tmp370) {
        case -1: goto $l379;
        case 0: goto $l377;
    }
    $l379:;
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$239_9383 = NULL;
    panda$json$JSON* $tmp384;
    panda$collections$ImmutableHashMap* value386 = NULL;
    panda$collections$MapView* $finallyReturn387;
    panda$collections$MapView* $tmp389;
    int $tmp382;
    {
        $tmp384 = self;
        $match$239_9383 = $tmp384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9383->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp385.value) {
        {
            panda$collections$ImmutableHashMap** $tmp387 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9383->$data + 0));
            value386 = *$tmp387;
            $tmp389 = ((panda$collections$MapView*) value386);
            $finallyReturn387 = $tmp389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
            $tmp382 = 0;
            goto $l380;
            $l390:;
            return $finallyReturn387;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp382 = -1;
    goto $l380;
    $l380:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
    switch ($tmp382) {
        case -1: goto $l392;
        case 0: goto $l390;
    }
    $l392:;
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$249_9396 = NULL;
    panda$json$JSON* $tmp397;
    panda$collections$ImmutableArray* value399 = NULL;
    panda$collections$ListView* $finallyReturn400;
    panda$collections$ListView* $tmp402;
    int $tmp395;
    {
        $tmp397 = self;
        $match$249_9396 = $tmp397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9396->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp398.value) {
        {
            panda$collections$ImmutableArray** $tmp400 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9396->$data + 0));
            value399 = *$tmp400;
            $tmp402 = ((panda$collections$ListView*) value399);
            $finallyReturn400 = $tmp402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
            $tmp395 = 0;
            goto $l393;
            $l403:;
            return $finallyReturn400;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp395 = -1;
    goto $l393;
    $l393:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
    switch ($tmp395) {
        case -1: goto $l405;
        case 0: goto $l403;
    }
    $l405:;
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9409 = NULL;
    panda$json$JSON* $tmp410;
    panda$core$Int64 value412;
    panda$core$String* $finallyReturn413;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$Real64 value421;
    panda$core$String* $finallyReturn422;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* value430 = NULL;
    panda$core$String* $finallyReturn431;
    panda$core$String* $tmp433;
    panda$core$String* $tmp434;
    panda$core$Bit value440;
    panda$core$String* $finallyReturn441;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$collections$ImmutableHashMap* fields449 = NULL;
    panda$core$MutableString* result454 = NULL;
    panda$core$MutableString* $tmp455;
    panda$core$MutableString* $tmp456;
    panda$core$String* separator459 = NULL;
    panda$core$String* $tmp460;
    panda$collections$Iterator* Iter$271$17465 = NULL;
    panda$collections$Iterator* $tmp466;
    panda$collections$Iterator* $tmp467;
    panda$core$String* k480 = NULL;
    panda$core$String* $tmp481;
    panda$core$Object* $tmp482;
    panda$core$String* $tmp487;
    panda$core$String* $tmp488;
    panda$core$String* $tmp489;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$String* $tmp496;
    panda$core$Object* $tmp505;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $finallyReturn515;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    panda$collections$ImmutableArray* nodes525 = NULL;
    panda$core$MutableString* result530 = NULL;
    panda$core$MutableString* $tmp531;
    panda$core$MutableString* $tmp532;
    panda$core$String* separator535 = NULL;
    panda$core$String* $tmp536;
    panda$collections$Iterator* Iter$280$17541 = NULL;
    panda$collections$Iterator* $tmp542;
    panda$collections$Iterator* $tmp543;
    panda$json$JSON* n559 = NULL;
    panda$json$JSON* $tmp560;
    panda$core$Object* $tmp561;
    panda$core$String* $tmp566;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    panda$core$String* $tmp576;
    panda$core$String* $tmp577;
    panda$core$Char8 $tmp581;
    panda$core$String* $finallyReturn581;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $finallyReturn590;
    panda$core$String* $tmp592;
    int $tmp408;
    {
        $tmp410 = self;
        $match$259_9409 = $tmp410;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp411.value) {
        {
            panda$core$Int64* $tmp413 = ((panda$core$Int64*) ((char*) $match$259_9409->$data + 0));
            value412 = *$tmp413;
            panda$core$String* $tmp417 = panda$core$Int64$convert$R$panda$core$String(value412);
            $tmp416 = $tmp417;
            $tmp415 = $tmp416;
            $finallyReturn413 = $tmp415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
            $tmp408 = 0;
            goto $l406;
            $l418:;
            return $finallyReturn413;
        }
        }
        else {
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp420.value) {
        {
            panda$core$Real64* $tmp422 = ((panda$core$Real64*) ((char*) $match$259_9409->$data + 0));
            value421 = *$tmp422;
            panda$core$String* $tmp426 = panda$core$Real64$convert$R$panda$core$String(value421);
            $tmp425 = $tmp426;
            $tmp424 = $tmp425;
            $finallyReturn422 = $tmp424;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
            $tmp408 = 1;
            goto $l406;
            $l427:;
            return $finallyReturn422;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp429.value) {
        {
            panda$core$String** $tmp431 = ((panda$core$String**) ((char*) $match$259_9409->$data + 0));
            value430 = *$tmp431;
            panda$core$String* $tmp436 = panda$core$String$format$panda$core$String$R$panda$core$String(value430, &$s435);
            $tmp434 = $tmp436;
            $tmp433 = $tmp434;
            $finallyReturn431 = $tmp433;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
            $tmp408 = 2;
            goto $l406;
            $l437:;
            return $finallyReturn431;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp439.value) {
        {
            panda$core$Bit* $tmp441 = ((panda$core$Bit*) ((char*) $match$259_9409->$data + 0));
            value440 = *$tmp441;
            panda$core$String* $tmp445 = panda$core$Bit$convert$R$panda$core$String(value440);
            $tmp444 = $tmp445;
            $tmp443 = $tmp444;
            $finallyReturn441 = $tmp443;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
            $tmp408 = 3;
            goto $l406;
            $l446:;
            return $finallyReturn441;
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp448.value) {
        {
            panda$collections$ImmutableHashMap** $tmp450 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9409->$data + 0));
            fields449 = *$tmp450;
            int $tmp453;
            {
                panda$core$MutableString* $tmp457 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp457, &$s458);
                $tmp456 = $tmp457;
                $tmp455 = $tmp456;
                result454 = $tmp455;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                $tmp460 = &$s461;
                separator459 = $tmp460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
                {
                    int $tmp464;
                    {
                        panda$collections$Iterator* $tmp468 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields449);
                        $tmp467 = $tmp468;
                        $tmp466 = $tmp467;
                        Iter$271$17465 = $tmp466;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                        $l469:;
                        ITable* $tmp472 = Iter$271$17465->$class->itable;
                        while ($tmp472->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp472 = $tmp472->next;
                        }
                        $fn474 $tmp473 = $tmp472->methods[0];
                        panda$core$Bit $tmp475 = $tmp473(Iter$271$17465);
                        panda$core$Bit $tmp476 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp475);
                        bool $tmp471 = $tmp476.value;
                        if (!$tmp471) goto $l470;
                        {
                            int $tmp479;
                            {
                                ITable* $tmp483 = Iter$271$17465->$class->itable;
                                while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp483 = $tmp483->next;
                                }
                                $fn485 $tmp484 = $tmp483->methods[1];
                                panda$core$Object* $tmp486 = $tmp484(Iter$271$17465);
                                $tmp482 = $tmp486;
                                $tmp481 = ((panda$core$String*) $tmp482);
                                k480 = $tmp481;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
                                panda$core$Panda$unref$panda$core$Object($tmp482);
                                panda$core$String* $tmp493 = panda$core$String$convert$R$panda$core$String(separator459);
                                $tmp492 = $tmp493;
                                panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s494);
                                $tmp491 = $tmp495;
                                ITable* $tmp498 = ((panda$core$Formattable*) k480)->$class->itable;
                                while ($tmp498->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp498 = $tmp498->next;
                                }
                                $fn500 $tmp499 = $tmp498->methods[0];
                                panda$core$String* $tmp501 = $tmp499(((panda$core$Formattable*) k480), &$s497);
                                $tmp496 = $tmp501;
                                panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp491, $tmp496);
                                $tmp490 = $tmp502;
                                panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s503);
                                $tmp489 = $tmp504;
                                panda$core$Object* $tmp506 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields449, ((panda$collections$Key*) k480));
                                $tmp505 = $tmp506;
                                panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp489, ((panda$core$Object*) ((panda$json$JSON*) $tmp505)));
                                $tmp488 = $tmp507;
                                panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s508);
                                $tmp487 = $tmp509;
                                panda$core$MutableString$append$panda$core$String(result454, $tmp487);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                                panda$core$Panda$unref$panda$core$Object($tmp505);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
                                {
                                    $tmp510 = separator459;
                                    $tmp511 = &$s512;
                                    separator459 = $tmp511;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
                                }
                            }
                            $tmp479 = -1;
                            goto $l477;
                            $l477:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k480));
                            k480 = NULL;
                            switch ($tmp479) {
                                case -1: goto $l513;
                            }
                            $l513:;
                        }
                        goto $l469;
                        $l470:;
                    }
                    $tmp464 = -1;
                    goto $l462;
                    $l462:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17465));
                    Iter$271$17465 = NULL;
                    switch ($tmp464) {
                        case -1: goto $l514;
                    }
                    $l514:;
                }
                panda$core$MutableString$append$panda$core$String(result454, &$s515);
                panda$core$String* $tmp519 = panda$core$MutableString$finish$R$panda$core$String(result454);
                $tmp518 = $tmp519;
                $tmp517 = $tmp518;
                $finallyReturn515 = $tmp517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
                $tmp453 = 0;
                goto $l451;
                $l520:;
                $tmp408 = 4;
                goto $l406;
                $l521:;
                return $finallyReturn515;
            }
            $l451:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result454));
            result454 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator459));
            separator459 = NULL;
            switch ($tmp453) {
                case 0: goto $l520;
            }
            $l523:;
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp524.value) {
        {
            panda$collections$ImmutableArray** $tmp526 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9409->$data + 0));
            nodes525 = *$tmp526;
            int $tmp529;
            {
                panda$core$MutableString* $tmp533 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp533, &$s534);
                $tmp532 = $tmp533;
                $tmp531 = $tmp532;
                result530 = $tmp531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
                $tmp536 = &$s537;
                separator535 = $tmp536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
                {
                    int $tmp540;
                    {
                        ITable* $tmp544 = ((panda$collections$Iterable*) nodes525)->$class->itable;
                        while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp544 = $tmp544->next;
                        }
                        $fn546 $tmp545 = $tmp544->methods[0];
                        panda$collections$Iterator* $tmp547 = $tmp545(((panda$collections$Iterable*) nodes525));
                        $tmp543 = $tmp547;
                        $tmp542 = $tmp543;
                        Iter$280$17541 = $tmp542;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                        $l548:;
                        ITable* $tmp551 = Iter$280$17541->$class->itable;
                        while ($tmp551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp551 = $tmp551->next;
                        }
                        $fn553 $tmp552 = $tmp551->methods[0];
                        panda$core$Bit $tmp554 = $tmp552(Iter$280$17541);
                        panda$core$Bit $tmp555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp554);
                        bool $tmp550 = $tmp555.value;
                        if (!$tmp550) goto $l549;
                        {
                            int $tmp558;
                            {
                                ITable* $tmp562 = Iter$280$17541->$class->itable;
                                while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp562 = $tmp562->next;
                                }
                                $fn564 $tmp563 = $tmp562->methods[1];
                                panda$core$Object* $tmp565 = $tmp563(Iter$280$17541);
                                $tmp561 = $tmp565;
                                $tmp560 = ((panda$json$JSON*) $tmp561);
                                n559 = $tmp560;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
                                panda$core$Panda$unref$panda$core$Object($tmp561);
                                panda$core$String* $tmp570 = panda$core$String$convert$R$panda$core$String(separator535);
                                $tmp569 = $tmp570;
                                panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s571);
                                $tmp568 = $tmp572;
                                panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp568, ((panda$core$Object*) n559));
                                $tmp567 = $tmp573;
                                panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s574);
                                $tmp566 = $tmp575;
                                panda$core$MutableString$append$panda$core$String(result530, $tmp566);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                                {
                                    $tmp576 = separator535;
                                    $tmp577 = &$s578;
                                    separator535 = $tmp577;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                                }
                            }
                            $tmp558 = -1;
                            goto $l556;
                            $l556:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n559));
                            n559 = NULL;
                            switch ($tmp558) {
                                case -1: goto $l579;
                            }
                            $l579:;
                        }
                        goto $l548;
                        $l549:;
                    }
                    $tmp540 = -1;
                    goto $l538;
                    $l538:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17541));
                    Iter$280$17541 = NULL;
                    switch ($tmp540) {
                        case -1: goto $l580;
                    }
                    $l580:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp581, ((panda$core$UInt8) { 93 }));
                panda$core$MutableString$append$panda$core$Char8(result530, $tmp581);
                panda$core$String* $tmp585 = panda$core$MutableString$finish$R$panda$core$String(result530);
                $tmp584 = $tmp585;
                $tmp583 = $tmp584;
                $finallyReturn581 = $tmp583;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                $tmp529 = 0;
                goto $l527;
                $l586:;
                $tmp408 = 5;
                goto $l406;
                $l587:;
                return $finallyReturn581;
            }
            $l527:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result530));
            result530 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator535));
            separator535 = NULL;
            switch ($tmp529) {
                case 0: goto $l586;
            }
            $l589:;
        }
        }
        else {
        panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9409->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp590.value) {
        {
            $tmp592 = &$s593;
            $finallyReturn590 = $tmp592;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
            $tmp408 = 6;
            goto $l406;
            $l594:;
            return $finallyReturn590;
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
    $tmp408 = -1;
    goto $l406;
    $l406:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
    switch ($tmp408) {
        case 3: goto $l446;
        case 1: goto $l427;
        case 6: goto $l594;
        case 5: goto $l587;
        case 4: goto $l521;
        case 0: goto $l418;
        case -1: goto $l596;
        case 2: goto $l437;
    }
    $l596:;
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1603 = NULL;
    panda$json$JSON* $tmp604;
    panda$core$Int64 _f0606;
    panda$core$Real64 _f0609;
    panda$core$String* _f0612 = NULL;
    panda$core$Bit _f0615;
    panda$collections$ImmutableHashMap* _f0618 = NULL;
    panda$collections$ImmutableArray* _f0621 = NULL;
    int $tmp599;
    {
        int $tmp602;
        {
            $tmp604 = self;
            $match$5_1603 = $tmp604;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
            panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp605.value) {
            {
                panda$core$Int64* $tmp607 = ((panda$core$Int64*) ((char*) $match$5_1603->$data + 0));
                _f0606 = *$tmp607;
            }
            }
            else {
            panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp608.value) {
            {
                panda$core$Real64* $tmp610 = ((panda$core$Real64*) ((char*) $match$5_1603->$data + 0));
                _f0609 = *$tmp610;
            }
            }
            else {
            panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp611.value) {
            {
                panda$core$String** $tmp613 = ((panda$core$String**) ((char*) $match$5_1603->$data + 0));
                _f0612 = *$tmp613;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0612));
            }
            }
            else {
            panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp614.value) {
            {
                panda$core$Bit* $tmp616 = ((panda$core$Bit*) ((char*) $match$5_1603->$data + 0));
                _f0615 = *$tmp616;
            }
            }
            else {
            panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp617.value) {
            {
                panda$collections$ImmutableHashMap** $tmp619 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1603->$data + 0));
                _f0618 = *$tmp619;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0618));
            }
            }
            else {
            panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp620.value) {
            {
                panda$collections$ImmutableArray** $tmp622 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1603->$data + 0));
                _f0621 = *$tmp622;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0621));
            }
            }
            else {
            panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1603->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp623.value) {
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
        $tmp602 = -1;
        goto $l600;
        $l600:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
        switch ($tmp602) {
            case -1: goto $l624;
        }
        $l624:;
    }
    $tmp599 = -1;
    goto $l597;
    $l597:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp599) {
        case -1: goto $l625;
    }
    $l625:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp626 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp626 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp627 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp627 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp628;
    panda$core$String* $tmp631;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp629 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp628 = *$tmp629;
        panda$core$String** $tmp630 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp631 = p_f0;
        *$tmp630 = $tmp631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp632 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp632 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp633;
    panda$collections$ImmutableHashMap* $tmp636;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp634 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp633 = *$tmp634;
        panda$collections$ImmutableHashMap** $tmp635 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp636 = p_f0;
        *$tmp635 = $tmp636;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp637;
    panda$collections$ImmutableArray* $tmp640;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp638 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp637 = *$tmp638;
        panda$collections$ImmutableArray** $tmp639 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp640 = p_f0;
        *$tmp639 = $tmp640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

