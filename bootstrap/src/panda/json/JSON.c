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
#include "panda/core/Method.h"
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

typedef panda$json$JSON* (*$fn147)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn174)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn201)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn228)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn258)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn288)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn458)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn469)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn484)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn529)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn536)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn547)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$23_92;
    panda$core$Char32 $tmp4;
    panda$core$String$Index end6;
    panda$core$String$Index fieldStart8;
    panda$core$String$Index index10;
    panda$core$Char32 c13;
    panda$core$Char32 $tmp16;
    panda$core$Char32 $tmp19;
    panda$json$JSON$PathKey* $returnValue26;
    panda$json$JSON$PathKey* $tmp27;
    panda$json$JSON$PathKey* $tmp29;
    panda$json$JSON$PathKey* $tmp30;
    panda$core$String* $tmp32;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp33;
    panda$core$Char32 $tmp36;
    panda$core$String$Index indexStart38;
    panda$core$String$Index index40;
    panda$core$Char32 $tmp45;
    panda$core$Int64$nullable parsed48;
    panda$core$String* $tmp49;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp50;
    panda$json$JSON$PathKey* $tmp53;
    panda$json$JSON$PathKey* $tmp55;
    panda$json$JSON$PathKey* $tmp56;
    panda$json$JSON$PathKey* $tmp60;
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
                $returnValue26 = $tmp27;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
                return $returnValue26;
            }
            }
            panda$json$JSON$PathKey* $tmp31 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp33, fieldStart8, index10, ((panda$core$Bit) { false }));
            panda$core$String* $tmp34 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp33);
            $tmp32 = $tmp34;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp31, ((panda$core$Int64) { 0 }), $tmp32, index10);
            $tmp30 = $tmp31;
            $tmp29 = $tmp30;
            $returnValue26 = $tmp29;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            return $returnValue26;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp36, ((panda$core$Int32) { 91 }));
        panda$core$Bit $tmp37 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_92, $tmp36);
        if ($tmp37.value) {
        {
            panda$core$String$Index $tmp39 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart38 = $tmp39;
            index40 = indexStart38;
            $l41:;
            panda$core$Char32 $tmp44 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index40);
            panda$core$Char32$init$panda$core$Int32(&$tmp45, ((panda$core$Int32) { 93 }));
            panda$core$Bit $tmp46 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp44, $tmp45);
            bool $tmp43 = $tmp46.value;
            if (!$tmp43) goto $l42;
            {
                panda$core$String$Index $tmp47 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index40);
                index40 = $tmp47;
            }
            goto $l41;
            $l42:;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp50, indexStart38, index40, ((panda$core$Bit) { false }));
            panda$core$String* $tmp51 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp50);
            $tmp49 = $tmp51;
            panda$core$Int64$nullable $tmp52 = panda$core$String$convert$R$panda$core$Int64$Q($tmp49);
            parsed48 = $tmp52;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
            if (((panda$core$Bit) { !parsed48.nonnull }).value) {
            {
                $tmp53 = NULL;
                $returnValue26 = $tmp53;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
                return $returnValue26;
            }
            }
            panda$json$JSON$PathKey* $tmp57 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$String$Index $tmp58 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index40);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp57, ((panda$core$Int64) { 1 }), ((panda$core$Int64) parsed48.value), $tmp58);
            $tmp56 = $tmp57;
            $tmp55 = $tmp56;
            $returnValue26 = $tmp55;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
            return $returnValue26;
        }
        }
        else {
        {
            $tmp60 = NULL;
            $returnValue26 = $tmp60;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
            return $returnValue26;
        }
        }
        }
    }
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index65;
    panda$core$String$Index end67;
    panda$json$JSON* current69 = NULL;
    panda$json$JSON* $tmp70;
    panda$json$JSON$PathKey* $tmp75;
    panda$json$JSON$PathKey* $match$76_1380 = NULL;
    panda$json$JSON$PathKey* $tmp81;
    panda$json$JSON$PathKey* $tmp82;
    panda$core$String* field85 = NULL;
    panda$core$String$Index next87;
    panda$json$JSON* $match$78_2192 = NULL;
    panda$json$JSON* $tmp93;
    panda$collections$ImmutableHashMap* fields95 = NULL;
    panda$json$JSON* $tmp97;
    panda$json$JSON* $tmp98;
    panda$core$Object* $tmp99;
    panda$json$JSON* $returnValue101;
    panda$json$JSON* $tmp102;
    panda$json$JSON* $tmp107;
    panda$core$Int64 key114;
    panda$core$String$Index next116;
    panda$json$JSON* $match$89_21121 = NULL;
    panda$json$JSON* $tmp122;
    panda$collections$ImmutableArray* nodes124 = NULL;
    panda$json$JSON* $tmp126;
    panda$json$JSON* $tmp127;
    panda$core$Object* $tmp128;
    panda$json$JSON* $tmp130;
    panda$json$JSON* $tmp137;
    int $tmp64;
    {
        panda$core$String$Index $tmp66 = panda$core$String$start$R$panda$core$String$Index(p_path);
        index65 = $tmp66;
        panda$core$String$Index $tmp68 = panda$core$String$end$R$panda$core$String$Index(p_path);
        end67 = $tmp68;
        $tmp70 = self;
        current69 = $tmp70;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
        $l71:;
        panda$core$Bit $tmp74 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index65, end67);
        bool $tmp73 = $tmp74.value;
        if (!$tmp73) goto $l72;
        {
            panda$json$JSON$PathKey* $tmp76 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index65);
            $tmp75 = $tmp76;
            PANDA_ASSERT(((panda$core$Bit) { $tmp75 != NULL }).value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
            int $tmp79;
            {
                panda$json$JSON$PathKey* $tmp83 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index65);
                $tmp82 = $tmp83;
                $tmp81 = $tmp82;
                $match$76_1380 = $tmp81;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
                panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1380->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp84.value) {
                {
                    panda$core$String** $tmp86 = ((panda$core$String**) ((char*) $match$76_1380->$data + 0));
                    field85 = *$tmp86;
                    panda$core$String$Index* $tmp88 = ((panda$core$String$Index*) ((char*) $match$76_1380->$data + 8));
                    next87 = *$tmp88;
                    int $tmp91;
                    {
                        $tmp93 = current69;
                        $match$78_2192 = $tmp93;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
                        panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_2192->$rawValue, ((panda$core$Int64) { 4 }));
                        if ($tmp94.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp96 = ((panda$collections$ImmutableHashMap**) ((char*) $match$78_2192->$data + 0));
                            fields95 = *$tmp96;
                            {
                                $tmp97 = current69;
                                panda$core$Object* $tmp100 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields95, ((panda$collections$Key*) field85));
                                $tmp99 = $tmp100;
                                $tmp98 = ((panda$json$JSON*) $tmp99);
                                current69 = $tmp98;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
                                panda$core$Panda$unref$panda$core$Object($tmp99);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
                            }
                            if (((panda$core$Bit) { current69 == NULL }).value) {
                            {
                                $tmp102 = NULL;
                                $returnValue101 = $tmp102;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                                $tmp91 = 0;
                                goto $l89;
                                $l103:;
                                $tmp79 = 0;
                                goto $l77;
                                $l104:;
                                $tmp64 = 0;
                                goto $l62;
                                $l105:;
                                return $returnValue101;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp107 = NULL;
                            $returnValue101 = $tmp107;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
                            $tmp91 = 1;
                            goto $l89;
                            $l108:;
                            $tmp79 = 1;
                            goto $l77;
                            $l109:;
                            $tmp64 = 1;
                            goto $l62;
                            $l110:;
                            return $returnValue101;
                        }
                        }
                    }
                    $tmp91 = -1;
                    goto $l89;
                    $l89:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
                    switch ($tmp91) {
                        case -1: goto $l112;
                        case 0: goto $l103;
                        case 1: goto $l108;
                    }
                    $l112:;
                    index65 = next87;
                }
                }
                else {
                panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1380->$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp113.value) {
                {
                    panda$core$Int64* $tmp115 = ((panda$core$Int64*) ((char*) $match$76_1380->$data + 0));
                    key114 = *$tmp115;
                    panda$core$String$Index* $tmp117 = ((panda$core$String$Index*) ((char*) $match$76_1380->$data + 8));
                    next116 = *$tmp117;
                    int $tmp120;
                    {
                        $tmp122 = current69;
                        $match$89_21121 = $tmp122;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
                        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$89_21121->$rawValue, ((panda$core$Int64) { 5 }));
                        if ($tmp123.value) {
                        {
                            panda$collections$ImmutableArray** $tmp125 = ((panda$collections$ImmutableArray**) ((char*) $match$89_21121->$data + 0));
                            nodes124 = *$tmp125;
                            {
                                $tmp126 = current69;
                                panda$core$Object* $tmp129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes124, key114);
                                $tmp128 = $tmp129;
                                $tmp127 = ((panda$json$JSON*) $tmp128);
                                current69 = $tmp127;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                                panda$core$Panda$unref$panda$core$Object($tmp128);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                            }
                        }
                        }
                        else {
                        {
                            $tmp130 = NULL;
                            $returnValue101 = $tmp130;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
                            $tmp120 = 0;
                            goto $l118;
                            $l131:;
                            $tmp79 = 2;
                            goto $l77;
                            $l132:;
                            $tmp64 = 2;
                            goto $l62;
                            $l133:;
                            return $returnValue101;
                        }
                        }
                    }
                    $tmp120 = -1;
                    goto $l118;
                    $l118:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                    switch ($tmp120) {
                        case -1: goto $l135;
                        case 0: goto $l131;
                    }
                    $l135:;
                    index65 = next116;
                }
                }
                }
            }
            $tmp79 = -1;
            goto $l77;
            $l77:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
            switch ($tmp79) {
                case 2: goto $l132;
                case 1: goto $l109;
                case -1: goto $l136;
                case 0: goto $l104;
            }
            $l136:;
        }
        goto $l71;
        $l72:;
        $tmp137 = current69;
        $returnValue101 = $tmp137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
        $tmp64 = 3;
        goto $l62;
        $l138:;
        return $returnValue101;
    }
    $l62:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current69));
    current69 = NULL;
    switch ($tmp64) {
        case 2: goto $l133;
        case 1: goto $l110;
        case 0: goto $l105;
        case 3: goto $l138;
    }
    $l140:;
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result144 = NULL;
    panda$json$JSON* $tmp145;
    panda$json$JSON* $tmp146;
    panda$core$Int64$nullable $returnValue149;
    panda$json$JSON* $match$109_9155 = NULL;
    panda$json$JSON* $tmp156;
    panda$core$Int64 value158;
    int $tmp143;
    {
        panda$json$JSON* $tmp148 = (($fn147) self->$class->vtable[2])(self, p_path);
        $tmp146 = $tmp148;
        $tmp145 = $tmp146;
        result144 = $tmp145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
        if (((panda$core$Bit) { result144 == NULL }).value) {
        {
            $returnValue149 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp143 = 0;
            goto $l141;
            $l150:;
            return $returnValue149;
        }
        }
        int $tmp154;
        {
            $tmp156 = result144;
            $match$109_9155 = $tmp156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
            panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_9155->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp157.value) {
            {
                panda$core$Int64* $tmp159 = ((panda$core$Int64*) ((char*) $match$109_9155->$data + 0));
                value158 = *$tmp159;
                $returnValue149 = ((panda$core$Int64$nullable) { value158, true });
                $tmp154 = 0;
                goto $l152;
                $l160:;
                $tmp143 = 1;
                goto $l141;
                $l161:;
                return $returnValue149;
            }
            }
            else {
            {
                $returnValue149 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp154 = 1;
                goto $l152;
                $l163:;
                $tmp143 = 2;
                goto $l141;
                $l164:;
                return $returnValue149;
            }
            }
        }
        $tmp154 = -1;
        goto $l152;
        $l152:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        switch ($tmp154) {
            case 1: goto $l163;
            case 0: goto $l160;
            case -1: goto $l166;
        }
        $l166:;
    }
    $tmp143 = -1;
    goto $l141;
    $l141:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result144));
    result144 = NULL;
    switch ($tmp143) {
        case 1: goto $l161;
        case 2: goto $l164;
        case -1: goto $l167;
        case 0: goto $l150;
    }
    $l167:;
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result171 = NULL;
    panda$json$JSON* $tmp172;
    panda$json$JSON* $tmp173;
    panda$core$Real64$nullable $returnValue176;
    panda$json$JSON* $match$125_9182 = NULL;
    panda$json$JSON* $tmp183;
    panda$core$Real64 value185;
    int $tmp170;
    {
        panda$json$JSON* $tmp175 = (($fn174) self->$class->vtable[2])(self, p_path);
        $tmp173 = $tmp175;
        $tmp172 = $tmp173;
        result171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        if (((panda$core$Bit) { result171 == NULL }).value) {
        {
            $returnValue176 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp170 = 0;
            goto $l168;
            $l177:;
            return $returnValue176;
        }
        }
        int $tmp181;
        {
            $tmp183 = result171;
            $match$125_9182 = $tmp183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
            panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9182->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp184.value) {
            {
                panda$core$Real64* $tmp186 = ((panda$core$Real64*) ((char*) $match$125_9182->$data + 0));
                value185 = *$tmp186;
                $returnValue176 = ((panda$core$Real64$nullable) { value185, true });
                $tmp181 = 0;
                goto $l179;
                $l187:;
                $tmp170 = 1;
                goto $l168;
                $l188:;
                return $returnValue176;
            }
            }
            else {
            {
                $returnValue176 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp181 = 1;
                goto $l179;
                $l190:;
                $tmp170 = 2;
                goto $l168;
                $l191:;
                return $returnValue176;
            }
            }
        }
        $tmp181 = -1;
        goto $l179;
        $l179:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
        switch ($tmp181) {
            case -1: goto $l193;
            case 1: goto $l190;
            case 0: goto $l187;
        }
        $l193:;
    }
    $tmp170 = -1;
    goto $l168;
    $l168:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
    result171 = NULL;
    switch ($tmp170) {
        case -1: goto $l194;
        case 2: goto $l191;
        case 1: goto $l188;
        case 0: goto $l177;
    }
    $l194:;
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result198 = NULL;
    panda$json$JSON* $tmp199;
    panda$json$JSON* $tmp200;
    panda$core$Bit$nullable $returnValue203;
    panda$json$JSON* $match$141_9209 = NULL;
    panda$json$JSON* $tmp210;
    panda$core$Bit value212;
    int $tmp197;
    {
        panda$json$JSON* $tmp202 = (($fn201) self->$class->vtable[2])(self, p_path);
        $tmp200 = $tmp202;
        $tmp199 = $tmp200;
        result198 = $tmp199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        if (((panda$core$Bit) { result198 == NULL }).value) {
        {
            $returnValue203 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp197 = 0;
            goto $l195;
            $l204:;
            return $returnValue203;
        }
        }
        int $tmp208;
        {
            $tmp210 = result198;
            $match$141_9209 = $tmp210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9209->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp211.value) {
            {
                panda$core$Bit* $tmp213 = ((panda$core$Bit*) ((char*) $match$141_9209->$data + 0));
                value212 = *$tmp213;
                $returnValue203 = ((panda$core$Bit$nullable) { value212, true });
                $tmp208 = 0;
                goto $l206;
                $l214:;
                $tmp197 = 1;
                goto $l195;
                $l215:;
                return $returnValue203;
            }
            }
            else {
            {
                $returnValue203 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp208 = 1;
                goto $l206;
                $l217:;
                $tmp197 = 2;
                goto $l195;
                $l218:;
                return $returnValue203;
            }
            }
        }
        $tmp208 = -1;
        goto $l206;
        $l206:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
        switch ($tmp208) {
            case 0: goto $l214;
            case -1: goto $l220;
            case 1: goto $l217;
        }
        $l220:;
    }
    $tmp197 = -1;
    goto $l195;
    $l195:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result198));
    result198 = NULL;
    switch ($tmp197) {
        case -1: goto $l221;
        case 2: goto $l218;
        case 0: goto $l204;
        case 1: goto $l215;
    }
    $l221:;
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result225 = NULL;
    panda$json$JSON* $tmp226;
    panda$json$JSON* $tmp227;
    panda$core$String* $returnValue230;
    panda$core$String* $tmp231;
    panda$json$JSON* $match$157_9237 = NULL;
    panda$json$JSON* $tmp238;
    panda$core$String* value240 = NULL;
    panda$core$String* $tmp242;
    panda$core$String* $tmp246;
    int $tmp224;
    {
        panda$json$JSON* $tmp229 = (($fn228) self->$class->vtable[2])(self, p_path);
        $tmp227 = $tmp229;
        $tmp226 = $tmp227;
        result225 = $tmp226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
        if (((panda$core$Bit) { result225 == NULL }).value) {
        {
            $tmp231 = NULL;
            $returnValue230 = $tmp231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
            $tmp224 = 0;
            goto $l222;
            $l232:;
            return $returnValue230;
        }
        }
        int $tmp236;
        {
            $tmp238 = result225;
            $match$157_9237 = $tmp238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
            panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_9237->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp239.value) {
            {
                panda$core$String** $tmp241 = ((panda$core$String**) ((char*) $match$157_9237->$data + 0));
                value240 = *$tmp241;
                $tmp242 = value240;
                $returnValue230 = $tmp242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                $tmp236 = 0;
                goto $l234;
                $l243:;
                $tmp224 = 1;
                goto $l222;
                $l244:;
                return $returnValue230;
            }
            }
            else {
            {
                $tmp246 = NULL;
                $returnValue230 = $tmp246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                $tmp236 = 1;
                goto $l234;
                $l247:;
                $tmp224 = 2;
                goto $l222;
                $l248:;
                return $returnValue230;
            }
            }
        }
        $tmp236 = -1;
        goto $l234;
        $l234:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
        switch ($tmp236) {
            case 1: goto $l247;
            case -1: goto $l250;
            case 0: goto $l243;
        }
        $l250:;
    }
    $tmp224 = -1;
    goto $l222;
    $l222:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result225));
    result225 = NULL;
    switch ($tmp224) {
        case -1: goto $l251;
        case 1: goto $l244;
        case 2: goto $l248;
        case 0: goto $l232;
    }
    $l251:;
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result255 = NULL;
    panda$json$JSON* $tmp256;
    panda$json$JSON* $tmp257;
    panda$collections$ListView* $returnValue260;
    panda$collections$ListView* $tmp261;
    panda$json$JSON* $match$173_9267 = NULL;
    panda$json$JSON* $tmp268;
    panda$collections$ImmutableArray* value270 = NULL;
    panda$collections$ListView* $tmp272;
    panda$collections$ListView* $tmp276;
    int $tmp254;
    {
        panda$json$JSON* $tmp259 = (($fn258) self->$class->vtable[2])(self, p_path);
        $tmp257 = $tmp259;
        $tmp256 = $tmp257;
        result255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
        if (((panda$core$Bit) { result255 == NULL }).value) {
        {
            $tmp261 = NULL;
            $returnValue260 = $tmp261;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
            $tmp254 = 0;
            goto $l252;
            $l262:;
            return $returnValue260;
        }
        }
        int $tmp266;
        {
            $tmp268 = result255;
            $match$173_9267 = $tmp268;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
            panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9267->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp269.value) {
            {
                panda$collections$ImmutableArray** $tmp271 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9267->$data + 0));
                value270 = *$tmp271;
                $tmp272 = ((panda$collections$ListView*) value270);
                $returnValue260 = $tmp272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                $tmp266 = 0;
                goto $l264;
                $l273:;
                $tmp254 = 1;
                goto $l252;
                $l274:;
                return $returnValue260;
            }
            }
            else {
            {
                $tmp276 = NULL;
                $returnValue260 = $tmp276;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
                $tmp266 = 1;
                goto $l264;
                $l277:;
                $tmp254 = 2;
                goto $l252;
                $l278:;
                return $returnValue260;
            }
            }
        }
        $tmp266 = -1;
        goto $l264;
        $l264:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
        switch ($tmp266) {
            case 1: goto $l277;
            case -1: goto $l280;
            case 0: goto $l273;
        }
        $l280:;
    }
    $tmp254 = -1;
    goto $l252;
    $l252:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result255));
    result255 = NULL;
    switch ($tmp254) {
        case 2: goto $l278;
        case 1: goto $l274;
        case -1: goto $l281;
        case 0: goto $l262;
    }
    $l281:;
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result285 = NULL;
    panda$json$JSON* $tmp286;
    panda$json$JSON* $tmp287;
    panda$collections$MapView* $returnValue290;
    panda$collections$MapView* $tmp291;
    panda$json$JSON* $match$189_9297 = NULL;
    panda$json$JSON* $tmp298;
    panda$collections$ImmutableHashMap* value300 = NULL;
    panda$collections$MapView* $tmp302;
    panda$collections$MapView* $tmp306;
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
            $returnValue290 = $tmp291;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
            $tmp284 = 0;
            goto $l282;
            $l292:;
            return $returnValue290;
        }
        }
        int $tmp296;
        {
            $tmp298 = result285;
            $match$189_9297 = $tmp298;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
            panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9297->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp299.value) {
            {
                panda$collections$ImmutableHashMap** $tmp301 = ((panda$collections$ImmutableHashMap**) ((char*) $match$189_9297->$data + 0));
                value300 = *$tmp301;
                $tmp302 = ((panda$collections$MapView*) value300);
                $returnValue290 = $tmp302;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                $tmp296 = 0;
                goto $l294;
                $l303:;
                $tmp284 = 1;
                goto $l282;
                $l304:;
                return $returnValue290;
            }
            }
            else {
            {
                $tmp306 = NULL;
                $returnValue290 = $tmp306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                $tmp296 = 1;
                goto $l294;
                $l307:;
                $tmp284 = 2;
                goto $l282;
                $l308:;
                return $returnValue290;
            }
            }
        }
        $tmp296 = -1;
        goto $l294;
        $l294:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
        switch ($tmp296) {
            case -1: goto $l310;
            case 0: goto $l303;
            case 1: goto $l307;
        }
        $l310:;
    }
    $tmp284 = -1;
    goto $l282;
    $l282:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result285));
    result285 = NULL;
    switch ($tmp284) {
        case 2: goto $l308;
        case -1: goto $l311;
        case 1: goto $l304;
        case 0: goto $l292;
    }
    $l311:;
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$json$JSON* $match$199_9316 = NULL;
    panda$json$JSON* $tmp317;
    panda$core$Int64 value319;
    panda$core$Int64 $returnValue321;
    panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp312.value);
    int $tmp315;
    {
        $tmp317 = self;
        $match$199_9316 = $tmp317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9316->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp318.value) {
        {
            panda$core$Int64* $tmp320 = ((panda$core$Int64*) ((char*) $match$199_9316->$data + 0));
            value319 = *$tmp320;
            $returnValue321 = value319;
            $tmp315 = 0;
            goto $l313;
            $l322:;
            return $returnValue321;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp315 = -1;
    goto $l313;
    $l313:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
    switch ($tmp315) {
        case -1: goto $l324;
        case 0: goto $l322;
    }
    $l324:;
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$json$JSON* $match$209_9329 = NULL;
    panda$json$JSON* $tmp330;
    panda$core$Real64 value332;
    panda$core$Real64 $returnValue334;
    panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp325.value);
    int $tmp328;
    {
        $tmp330 = self;
        $match$209_9329 = $tmp330;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9329->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp331.value) {
        {
            panda$core$Real64* $tmp333 = ((panda$core$Real64*) ((char*) $match$209_9329->$data + 0));
            value332 = *$tmp333;
            $returnValue334 = value332;
            $tmp328 = 0;
            goto $l326;
            $l335:;
            return $returnValue334;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp328 = -1;
    goto $l326;
    $l326:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
    switch ($tmp328) {
        case -1: goto $l337;
        case 0: goto $l335;
    }
    $l337:;
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$219_9342 = NULL;
    panda$json$JSON* $tmp343;
    panda$core$String* value345 = NULL;
    panda$core$String* $returnValue347;
    panda$core$String* $tmp348;
    panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp338.value);
    int $tmp341;
    {
        $tmp343 = self;
        $match$219_9342 = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9342->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp344.value) {
        {
            panda$core$String** $tmp346 = ((panda$core$String**) ((char*) $match$219_9342->$data + 0));
            value345 = *$tmp346;
            $tmp348 = value345;
            $returnValue347 = $tmp348;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
            $tmp341 = 0;
            goto $l339;
            $l349:;
            return $returnValue347;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp341 = -1;
    goto $l339;
    $l339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    switch ($tmp341) {
        case -1: goto $l351;
        case 0: goto $l349;
    }
    $l351:;
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$json$JSON* $match$229_9356 = NULL;
    panda$json$JSON* $tmp357;
    panda$core$Bit value359;
    panda$core$Bit $returnValue361;
    panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp352.value);
    int $tmp355;
    {
        $tmp357 = self;
        $match$229_9356 = $tmp357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9356->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp358.value) {
        {
            panda$core$Bit* $tmp360 = ((panda$core$Bit*) ((char*) $match$229_9356->$data + 0));
            value359 = *$tmp360;
            $returnValue361 = value359;
            $tmp355 = 0;
            goto $l353;
            $l362:;
            return $returnValue361;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp355 = -1;
    goto $l353;
    $l353:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
    switch ($tmp355) {
        case -1: goto $l364;
        case 0: goto $l362;
    }
    $l364:;
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$239_9369 = NULL;
    panda$json$JSON* $tmp370;
    panda$collections$ImmutableHashMap* value372 = NULL;
    panda$collections$MapView* $returnValue374;
    panda$collections$MapView* $tmp375;
    panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 4 }));
    PANDA_ASSERT($tmp365.value);
    int $tmp368;
    {
        $tmp370 = self;
        $match$239_9369 = $tmp370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9369->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp371.value) {
        {
            panda$collections$ImmutableHashMap** $tmp373 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9369->$data + 0));
            value372 = *$tmp373;
            $tmp375 = ((panda$collections$MapView*) value372);
            $returnValue374 = $tmp375;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
            $tmp368 = 0;
            goto $l366;
            $l376:;
            return $returnValue374;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp368 = -1;
    goto $l366;
    $l366:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
    switch ($tmp368) {
        case -1: goto $l378;
        case 0: goto $l376;
    }
    $l378:;
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$249_9383 = NULL;
    panda$json$JSON* $tmp384;
    panda$collections$ImmutableArray* value386 = NULL;
    panda$collections$ListView* $returnValue388;
    panda$collections$ListView* $tmp389;
    panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp379.value);
    int $tmp382;
    {
        $tmp384 = self;
        $match$249_9383 = $tmp384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9383->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp385.value) {
        {
            panda$collections$ImmutableArray** $tmp387 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9383->$data + 0));
            value386 = *$tmp387;
            $tmp389 = ((panda$collections$ListView*) value386);
            $returnValue388 = $tmp389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
            $tmp382 = 0;
            goto $l380;
            $l390:;
            return $returnValue388;
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
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9396 = NULL;
    panda$json$JSON* $tmp397;
    panda$core$Int64 value399;
    panda$core$String* $returnValue401;
    panda$core$String* $tmp402;
    panda$core$String* $tmp403;
    panda$core$Real64 value408;
    panda$core$String* $tmp410;
    panda$core$String* $tmp411;
    panda$core$String* value416 = NULL;
    panda$core$String* $tmp418;
    panda$core$String* $tmp419;
    panda$core$Bit value425;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    panda$collections$ImmutableHashMap* fields433 = NULL;
    panda$core$MutableString* result438 = NULL;
    panda$core$MutableString* $tmp439;
    panda$core$MutableString* $tmp440;
    panda$core$String* separator443 = NULL;
    panda$core$String* $tmp444;
    panda$collections$Iterator* Iter$271$17449 = NULL;
    panda$collections$Iterator* $tmp450;
    panda$collections$Iterator* $tmp451;
    panda$core$String* k464 = NULL;
    panda$core$String* $tmp465;
    panda$core$Object* $tmp466;
    panda$core$String* $tmp471;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$String* $tmp474;
    panda$core$String* $tmp475;
    panda$core$String* $tmp476;
    panda$core$String* $tmp480;
    panda$core$Object* $tmp489;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    panda$collections$ImmutableArray* nodes508 = NULL;
    panda$core$MutableString* result513 = NULL;
    panda$core$MutableString* $tmp514;
    panda$core$MutableString* $tmp515;
    panda$core$String* separator518 = NULL;
    panda$core$String* $tmp519;
    panda$collections$Iterator* Iter$280$17524 = NULL;
    panda$collections$Iterator* $tmp525;
    panda$collections$Iterator* $tmp526;
    panda$json$JSON* n542 = NULL;
    panda$json$JSON* $tmp543;
    panda$core$Object* $tmp544;
    panda$core$String* $tmp549;
    panda$core$String* $tmp550;
    panda$core$String* $tmp551;
    panda$core$String* $tmp552;
    panda$core$String* $tmp559;
    panda$core$String* $tmp560;
    panda$core$Char8 $tmp564;
    panda$core$String* $tmp565;
    panda$core$String* $tmp566;
    panda$core$String* $tmp573;
    int $tmp395;
    {
        $tmp397 = self;
        $match$259_9396 = $tmp397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp398.value) {
        {
            panda$core$Int64* $tmp400 = ((panda$core$Int64*) ((char*) $match$259_9396->$data + 0));
            value399 = *$tmp400;
            panda$core$String* $tmp404 = panda$core$Int64$convert$R$panda$core$String(value399);
            $tmp403 = $tmp404;
            $tmp402 = $tmp403;
            $returnValue401 = $tmp402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
            $tmp395 = 0;
            goto $l393;
            $l405:;
            return $returnValue401;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp407.value) {
        {
            panda$core$Real64* $tmp409 = ((panda$core$Real64*) ((char*) $match$259_9396->$data + 0));
            value408 = *$tmp409;
            panda$core$String* $tmp412 = panda$core$Real64$convert$R$panda$core$String(value408);
            $tmp411 = $tmp412;
            $tmp410 = $tmp411;
            $returnValue401 = $tmp410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
            $tmp395 = 1;
            goto $l393;
            $l413:;
            return $returnValue401;
        }
        }
        else {
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp415.value) {
        {
            panda$core$String** $tmp417 = ((panda$core$String**) ((char*) $match$259_9396->$data + 0));
            value416 = *$tmp417;
            panda$core$String* $tmp421 = panda$core$String$format$panda$core$String$R$panda$core$String(value416, &$s420);
            $tmp419 = $tmp421;
            $tmp418 = $tmp419;
            $returnValue401 = $tmp418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
            $tmp395 = 2;
            goto $l393;
            $l422:;
            return $returnValue401;
        }
        }
        else {
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp424.value) {
        {
            panda$core$Bit* $tmp426 = ((panda$core$Bit*) ((char*) $match$259_9396->$data + 0));
            value425 = *$tmp426;
            panda$core$String* $tmp429 = panda$core$Bit$convert$R$panda$core$String(value425);
            $tmp428 = $tmp429;
            $tmp427 = $tmp428;
            $returnValue401 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
            $tmp395 = 3;
            goto $l393;
            $l430:;
            return $returnValue401;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp432.value) {
        {
            panda$collections$ImmutableHashMap** $tmp434 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9396->$data + 0));
            fields433 = *$tmp434;
            int $tmp437;
            {
                panda$core$MutableString* $tmp441 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp441, &$s442);
                $tmp440 = $tmp441;
                $tmp439 = $tmp440;
                result438 = $tmp439;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                $tmp444 = &$s445;
                separator443 = $tmp444;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                {
                    int $tmp448;
                    {
                        panda$collections$Iterator* $tmp452 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields433);
                        $tmp451 = $tmp452;
                        $tmp450 = $tmp451;
                        Iter$271$17449 = $tmp450;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                        $l453:;
                        ITable* $tmp456 = Iter$271$17449->$class->itable;
                        while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp456 = $tmp456->next;
                        }
                        $fn458 $tmp457 = $tmp456->methods[0];
                        panda$core$Bit $tmp459 = $tmp457(Iter$271$17449);
                        panda$core$Bit $tmp460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp459);
                        bool $tmp455 = $tmp460.value;
                        if (!$tmp455) goto $l454;
                        {
                            int $tmp463;
                            {
                                ITable* $tmp467 = Iter$271$17449->$class->itable;
                                while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp467 = $tmp467->next;
                                }
                                $fn469 $tmp468 = $tmp467->methods[1];
                                panda$core$Object* $tmp470 = $tmp468(Iter$271$17449);
                                $tmp466 = $tmp470;
                                $tmp465 = ((panda$core$String*) $tmp466);
                                k464 = $tmp465;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                                panda$core$Panda$unref$panda$core$Object($tmp466);
                                panda$core$String* $tmp477 = panda$core$String$convert$R$panda$core$String(separator443);
                                $tmp476 = $tmp477;
                                panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s478);
                                $tmp475 = $tmp479;
                                ITable* $tmp482 = ((panda$core$Formattable*) k464)->$class->itable;
                                while ($tmp482->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp482 = $tmp482->next;
                                }
                                $fn484 $tmp483 = $tmp482->methods[0];
                                panda$core$String* $tmp485 = $tmp483(((panda$core$Formattable*) k464), &$s481);
                                $tmp480 = $tmp485;
                                panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, $tmp480);
                                $tmp474 = $tmp486;
                                panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, &$s487);
                                $tmp473 = $tmp488;
                                panda$core$Object* $tmp490 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields433, ((panda$collections$Key*) k464));
                                $tmp489 = $tmp490;
                                panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp473, ((panda$core$Object*) ((panda$json$JSON*) $tmp489)));
                                $tmp472 = $tmp491;
                                panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp472, &$s492);
                                $tmp471 = $tmp493;
                                panda$core$MutableString$append$panda$core$String(result438, $tmp471);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                                panda$core$Panda$unref$panda$core$Object($tmp489);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                                {
                                    $tmp494 = separator443;
                                    $tmp495 = &$s496;
                                    separator443 = $tmp495;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                                }
                            }
                            $tmp463 = -1;
                            goto $l461;
                            $l461:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k464));
                            k464 = NULL;
                            switch ($tmp463) {
                                case -1: goto $l497;
                            }
                            $l497:;
                        }
                        goto $l453;
                        $l454:;
                    }
                    $tmp448 = -1;
                    goto $l446;
                    $l446:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17449));
                    Iter$271$17449 = NULL;
                    switch ($tmp448) {
                        case -1: goto $l498;
                    }
                    $l498:;
                }
                panda$core$MutableString$append$panda$core$String(result438, &$s499);
                panda$core$String* $tmp502 = panda$core$MutableString$finish$R$panda$core$String(result438);
                $tmp501 = $tmp502;
                $tmp500 = $tmp501;
                $returnValue401 = $tmp500;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
                $tmp437 = 0;
                goto $l435;
                $l503:;
                $tmp395 = 4;
                goto $l393;
                $l504:;
                return $returnValue401;
            }
            $l435:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result438));
            result438 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator443));
            separator443 = NULL;
            switch ($tmp437) {
                case 0: goto $l503;
            }
            $l506:;
        }
        }
        else {
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp507.value) {
        {
            panda$collections$ImmutableArray** $tmp509 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9396->$data + 0));
            nodes508 = *$tmp509;
            int $tmp512;
            {
                panda$core$MutableString* $tmp516 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp516, &$s517);
                $tmp515 = $tmp516;
                $tmp514 = $tmp515;
                result513 = $tmp514;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
                $tmp519 = &$s520;
                separator518 = $tmp519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
                {
                    int $tmp523;
                    {
                        ITable* $tmp527 = ((panda$collections$Iterable*) nodes508)->$class->itable;
                        while ($tmp527->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp527 = $tmp527->next;
                        }
                        $fn529 $tmp528 = $tmp527->methods[0];
                        panda$collections$Iterator* $tmp530 = $tmp528(((panda$collections$Iterable*) nodes508));
                        $tmp526 = $tmp530;
                        $tmp525 = $tmp526;
                        Iter$280$17524 = $tmp525;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp525));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
                        $l531:;
                        ITable* $tmp534 = Iter$280$17524->$class->itable;
                        while ($tmp534->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp534 = $tmp534->next;
                        }
                        $fn536 $tmp535 = $tmp534->methods[0];
                        panda$core$Bit $tmp537 = $tmp535(Iter$280$17524);
                        panda$core$Bit $tmp538 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp537);
                        bool $tmp533 = $tmp538.value;
                        if (!$tmp533) goto $l532;
                        {
                            int $tmp541;
                            {
                                ITable* $tmp545 = Iter$280$17524->$class->itable;
                                while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp545 = $tmp545->next;
                                }
                                $fn547 $tmp546 = $tmp545->methods[1];
                                panda$core$Object* $tmp548 = $tmp546(Iter$280$17524);
                                $tmp544 = $tmp548;
                                $tmp543 = ((panda$json$JSON*) $tmp544);
                                n542 = $tmp543;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp543));
                                panda$core$Panda$unref$panda$core$Object($tmp544);
                                panda$core$String* $tmp553 = panda$core$String$convert$R$panda$core$String(separator518);
                                $tmp552 = $tmp553;
                                panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s554);
                                $tmp551 = $tmp555;
                                panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp551, ((panda$core$Object*) n542));
                                $tmp550 = $tmp556;
                                panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s557);
                                $tmp549 = $tmp558;
                                panda$core$MutableString$append$panda$core$String(result513, $tmp549);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                                {
                                    $tmp559 = separator518;
                                    $tmp560 = &$s561;
                                    separator518 = $tmp560;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                                }
                            }
                            $tmp541 = -1;
                            goto $l539;
                            $l539:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n542));
                            n542 = NULL;
                            switch ($tmp541) {
                                case -1: goto $l562;
                            }
                            $l562:;
                        }
                        goto $l531;
                        $l532:;
                    }
                    $tmp523 = -1;
                    goto $l521;
                    $l521:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17524));
                    Iter$280$17524 = NULL;
                    switch ($tmp523) {
                        case -1: goto $l563;
                    }
                    $l563:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp564, ((panda$core$UInt8) { 93 }));
                panda$core$MutableString$append$panda$core$Char8(result513, $tmp564);
                panda$core$String* $tmp567 = panda$core$MutableString$finish$R$panda$core$String(result513);
                $tmp566 = $tmp567;
                $tmp565 = $tmp566;
                $returnValue401 = $tmp565;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                $tmp512 = 0;
                goto $l510;
                $l568:;
                $tmp395 = 5;
                goto $l393;
                $l569:;
                return $returnValue401;
            }
            $l510:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result513));
            result513 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator518));
            separator518 = NULL;
            switch ($tmp512) {
                case 0: goto $l568;
            }
            $l571:;
        }
        }
        else {
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9396->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp572.value) {
        {
            $tmp573 = &$s574;
            $returnValue401 = $tmp573;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
            $tmp395 = 6;
            goto $l393;
            $l575:;
            return $returnValue401;
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
    $tmp395 = -1;
    goto $l393;
    $l393:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
    switch ($tmp395) {
        case 3: goto $l430;
        case 1: goto $l413;
        case 5: goto $l569;
        case 2: goto $l422;
        case 6: goto $l575;
        case 4: goto $l504;
        case -1: goto $l577;
        case 0: goto $l405;
    }
    $l577:;
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1584 = NULL;
    panda$json$JSON* $tmp585;
    panda$core$Int64 _f0587;
    panda$core$Real64 _f0590;
    panda$core$String* _f0593 = NULL;
    panda$core$Bit _f0596;
    panda$collections$ImmutableHashMap* _f0599 = NULL;
    panda$collections$ImmutableArray* _f0602 = NULL;
    int $tmp580;
    {
        int $tmp583;
        {
            $tmp585 = self;
            $match$5_1584 = $tmp585;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
            panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp586.value) {
            {
                panda$core$Int64* $tmp588 = ((panda$core$Int64*) ((char*) $match$5_1584->$data + 0));
                _f0587 = *$tmp588;
            }
            }
            else {
            panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp589.value) {
            {
                panda$core$Real64* $tmp591 = ((panda$core$Real64*) ((char*) $match$5_1584->$data + 0));
                _f0590 = *$tmp591;
            }
            }
            else {
            panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp592.value) {
            {
                panda$core$String** $tmp594 = ((panda$core$String**) ((char*) $match$5_1584->$data + 0));
                _f0593 = *$tmp594;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0593));
            }
            }
            else {
            panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp595.value) {
            {
                panda$core$Bit* $tmp597 = ((panda$core$Bit*) ((char*) $match$5_1584->$data + 0));
                _f0596 = *$tmp597;
            }
            }
            else {
            panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp598.value) {
            {
                panda$collections$ImmutableHashMap** $tmp600 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1584->$data + 0));
                _f0599 = *$tmp600;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0599));
            }
            }
            else {
            panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp601.value) {
            {
                panda$collections$ImmutableArray** $tmp603 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1584->$data + 0));
                _f0602 = *$tmp603;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0602));
            }
            }
            else {
            panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1584->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp604.value) {
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
        $tmp583 = -1;
        goto $l581;
        $l581:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
        switch ($tmp583) {
            case -1: goto $l605;
        }
        $l605:;
    }
    $tmp580 = -1;
    goto $l578;
    $l578:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp580) {
        case -1: goto $l606;
    }
    $l606:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp607 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp607 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp608 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp608 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp609;
    panda$core$String* $tmp612;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp610 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp609 = *$tmp610;
        panda$core$String** $tmp611 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp612 = p_f0;
        *$tmp611 = $tmp612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp613 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp613 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp614;
    panda$collections$ImmutableHashMap* $tmp617;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp615 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp614 = *$tmp615;
        panda$collections$ImmutableHashMap** $tmp616 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp617 = p_f0;
        *$tmp616 = $tmp617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp618;
    panda$collections$ImmutableArray* $tmp621;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp619 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp618 = *$tmp619;
        panda$collections$ImmutableArray** $tmp620 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp621 = p_f0;
        *$tmp620 = $tmp621;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

