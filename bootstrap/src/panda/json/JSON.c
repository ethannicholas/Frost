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

typedef panda$json$JSON* (*$fn156)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn183)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn210)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn237)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn267)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn297)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn509)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn535)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn580)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn587)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn598)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 74, 5172637184330274798, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 76, 3649344319728702780, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 78, -1718795988612819328, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, 737367192177042396, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 122, 7181716504558141706, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 104, 5557801791232681248, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };

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
    abort();
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index65;
    panda$core$String$Index end67;
    panda$json$JSON* current69 = NULL;
    panda$json$JSON* $tmp70;
    panda$json$JSON$PathKey* $tmp75;
    panda$core$String* $tmp80;
    panda$core$String* $tmp81;
    panda$json$JSON$PathKey* $match$76_1389 = NULL;
    panda$json$JSON$PathKey* $tmp90;
    panda$json$JSON$PathKey* $tmp91;
    panda$core$String* field94 = NULL;
    panda$core$String$Index next96;
    panda$json$JSON* $match$78_21101 = NULL;
    panda$json$JSON* $tmp102;
    panda$collections$ImmutableHashMap* fields104 = NULL;
    panda$json$JSON* $tmp106;
    panda$json$JSON* $tmp107;
    panda$core$Object* $tmp108;
    panda$json$JSON* $returnValue110;
    panda$json$JSON* $tmp111;
    panda$json$JSON* $tmp116;
    panda$core$Int64 key123;
    panda$core$String$Index next125;
    panda$json$JSON* $match$89_21130 = NULL;
    panda$json$JSON* $tmp131;
    panda$collections$ImmutableArray* nodes133 = NULL;
    panda$json$JSON* $tmp135;
    panda$json$JSON* $tmp136;
    panda$core$Object* $tmp137;
    panda$json$JSON* $tmp139;
    panda$json$JSON* $tmp146;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
            if (((panda$core$Bit) { $tmp75 != NULL }).value) goto $l77; else goto $l78;
            $l78:;
            panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s82, p_path);
            $tmp81 = $tmp83;
            panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, &$s84);
            $tmp80 = $tmp85;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s79, (panda$core$Int64) { 75 }, $tmp80);
            abort();
            $l77:;
            int $tmp88;
            {
                panda$json$JSON$PathKey* $tmp92 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index65);
                $tmp91 = $tmp92;
                $tmp90 = $tmp91;
                $match$76_1389 = $tmp90;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
                panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1389->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp93.value) {
                {
                    panda$core$String** $tmp95 = ((panda$core$String**) ((char*) $match$76_1389->$data + 0));
                    field94 = *$tmp95;
                    panda$core$String$Index* $tmp97 = ((panda$core$String$Index*) ((char*) $match$76_1389->$data + 8));
                    next96 = *$tmp97;
                    int $tmp100;
                    {
                        $tmp102 = current69;
                        $match$78_21101 = $tmp102;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_21101->$rawValue, ((panda$core$Int64) { 4 }));
                        if ($tmp103.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp105 = ((panda$collections$ImmutableHashMap**) ((char*) $match$78_21101->$data + 0));
                            fields104 = *$tmp105;
                            {
                                $tmp106 = current69;
                                panda$core$Object* $tmp109 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields104, ((panda$collections$Key*) field94));
                                $tmp108 = $tmp109;
                                $tmp107 = ((panda$json$JSON*) $tmp108);
                                current69 = $tmp107;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
                                panda$core$Panda$unref$panda$core$Object($tmp108);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
                            }
                            if (((panda$core$Bit) { current69 == NULL }).value) {
                            {
                                $tmp111 = NULL;
                                $returnValue110 = $tmp111;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
                                $tmp100 = 0;
                                goto $l98;
                                $l112:;
                                $tmp88 = 0;
                                goto $l86;
                                $l113:;
                                $tmp64 = 0;
                                goto $l62;
                                $l114:;
                                return $returnValue110;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp116 = NULL;
                            $returnValue110 = $tmp116;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
                            $tmp100 = 1;
                            goto $l98;
                            $l117:;
                            $tmp88 = 1;
                            goto $l86;
                            $l118:;
                            $tmp64 = 1;
                            goto $l62;
                            $l119:;
                            return $returnValue110;
                        }
                        }
                    }
                    $tmp100 = -1;
                    goto $l98;
                    $l98:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
                    switch ($tmp100) {
                        case 0: goto $l112;
                        case -1: goto $l121;
                        case 1: goto $l117;
                    }
                    $l121:;
                    index65 = next96;
                }
                }
                else {
                panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1389->$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp122.value) {
                {
                    panda$core$Int64* $tmp124 = ((panda$core$Int64*) ((char*) $match$76_1389->$data + 0));
                    key123 = *$tmp124;
                    panda$core$String$Index* $tmp126 = ((panda$core$String$Index*) ((char*) $match$76_1389->$data + 8));
                    next125 = *$tmp126;
                    int $tmp129;
                    {
                        $tmp131 = current69;
                        $match$89_21130 = $tmp131;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
                        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$89_21130->$rawValue, ((panda$core$Int64) { 5 }));
                        if ($tmp132.value) {
                        {
                            panda$collections$ImmutableArray** $tmp134 = ((panda$collections$ImmutableArray**) ((char*) $match$89_21130->$data + 0));
                            nodes133 = *$tmp134;
                            {
                                $tmp135 = current69;
                                panda$core$Object* $tmp138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes133, key123);
                                $tmp137 = $tmp138;
                                $tmp136 = ((panda$json$JSON*) $tmp137);
                                current69 = $tmp136;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                                panda$core$Panda$unref$panda$core$Object($tmp137);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
                            }
                        }
                        }
                        else {
                        {
                            $tmp139 = NULL;
                            $returnValue110 = $tmp139;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                            $tmp129 = 0;
                            goto $l127;
                            $l140:;
                            $tmp88 = 2;
                            goto $l86;
                            $l141:;
                            $tmp64 = 2;
                            goto $l62;
                            $l142:;
                            return $returnValue110;
                        }
                        }
                    }
                    $tmp129 = -1;
                    goto $l127;
                    $l127:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                    switch ($tmp129) {
                        case 0: goto $l140;
                        case -1: goto $l144;
                    }
                    $l144:;
                    index65 = next125;
                }
                }
                }
            }
            $tmp88 = -1;
            goto $l86;
            $l86:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
            switch ($tmp88) {
                case 1: goto $l118;
                case 2: goto $l141;
                case -1: goto $l145;
                case 0: goto $l113;
            }
            $l145:;
        }
        goto $l71;
        $l72:;
        $tmp146 = current69;
        $returnValue110 = $tmp146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
        $tmp64 = 3;
        goto $l62;
        $l147:;
        return $returnValue110;
    }
    $l62:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current69));
    current69 = NULL;
    switch ($tmp64) {
        case 1: goto $l119;
        case 2: goto $l142;
        case 0: goto $l114;
        case 3: goto $l147;
    }
    $l149:;
    abort();
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result153 = NULL;
    panda$json$JSON* $tmp154;
    panda$json$JSON* $tmp155;
    panda$core$Int64$nullable $returnValue158;
    panda$json$JSON* $match$109_9164 = NULL;
    panda$json$JSON* $tmp165;
    panda$core$Int64 value167;
    int $tmp152;
    {
        panda$json$JSON* $tmp157 = (($fn156) self->$class->vtable[2])(self, p_path);
        $tmp155 = $tmp157;
        $tmp154 = $tmp155;
        result153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
        if (((panda$core$Bit) { result153 == NULL }).value) {
        {
            $returnValue158 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp152 = 0;
            goto $l150;
            $l159:;
            return $returnValue158;
        }
        }
        int $tmp163;
        {
            $tmp165 = result153;
            $match$109_9164 = $tmp165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
            panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_9164->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp166.value) {
            {
                panda$core$Int64* $tmp168 = ((panda$core$Int64*) ((char*) $match$109_9164->$data + 0));
                value167 = *$tmp168;
                $returnValue158 = ((panda$core$Int64$nullable) { value167, true });
                $tmp163 = 0;
                goto $l161;
                $l169:;
                $tmp152 = 1;
                goto $l150;
                $l170:;
                return $returnValue158;
            }
            }
            else {
            {
                $returnValue158 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp163 = 1;
                goto $l161;
                $l172:;
                $tmp152 = 2;
                goto $l150;
                $l173:;
                return $returnValue158;
            }
            }
        }
        $tmp163 = -1;
        goto $l161;
        $l161:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        switch ($tmp163) {
            case 1: goto $l172;
            case 0: goto $l169;
            case -1: goto $l175;
        }
        $l175:;
    }
    $tmp152 = -1;
    goto $l150;
    $l150:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result153));
    result153 = NULL;
    switch ($tmp152) {
        case 2: goto $l173;
        case -1: goto $l176;
        case 1: goto $l170;
        case 0: goto $l159;
    }
    $l176:;
    abort();
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result180 = NULL;
    panda$json$JSON* $tmp181;
    panda$json$JSON* $tmp182;
    panda$core$Real64$nullable $returnValue185;
    panda$json$JSON* $match$125_9191 = NULL;
    panda$json$JSON* $tmp192;
    panda$core$Real64 value194;
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
            $returnValue185 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp179 = 0;
            goto $l177;
            $l186:;
            return $returnValue185;
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
                $returnValue185 = ((panda$core$Real64$nullable) { value194, true });
                $tmp190 = 0;
                goto $l188;
                $l196:;
                $tmp179 = 1;
                goto $l177;
                $l197:;
                return $returnValue185;
            }
            }
            else {
            {
                $returnValue185 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp190 = 1;
                goto $l188;
                $l199:;
                $tmp179 = 2;
                goto $l177;
                $l200:;
                return $returnValue185;
            }
            }
        }
        $tmp190 = -1;
        goto $l188;
        $l188:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
        switch ($tmp190) {
            case 0: goto $l196;
            case 1: goto $l199;
            case -1: goto $l202;
        }
        $l202:;
    }
    $tmp179 = -1;
    goto $l177;
    $l177:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result180));
    result180 = NULL;
    switch ($tmp179) {
        case -1: goto $l203;
        case 2: goto $l200;
        case 0: goto $l186;
        case 1: goto $l197;
    }
    $l203:;
    abort();
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result207 = NULL;
    panda$json$JSON* $tmp208;
    panda$json$JSON* $tmp209;
    panda$core$Bit$nullable $returnValue212;
    panda$json$JSON* $match$141_9218 = NULL;
    panda$json$JSON* $tmp219;
    panda$core$Bit value221;
    int $tmp206;
    {
        panda$json$JSON* $tmp211 = (($fn210) self->$class->vtable[2])(self, p_path);
        $tmp209 = $tmp211;
        $tmp208 = $tmp209;
        result207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        if (((panda$core$Bit) { result207 == NULL }).value) {
        {
            $returnValue212 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp206 = 0;
            goto $l204;
            $l213:;
            return $returnValue212;
        }
        }
        int $tmp217;
        {
            $tmp219 = result207;
            $match$141_9218 = $tmp219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
            panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9218->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp220.value) {
            {
                panda$core$Bit* $tmp222 = ((panda$core$Bit*) ((char*) $match$141_9218->$data + 0));
                value221 = *$tmp222;
                $returnValue212 = ((panda$core$Bit$nullable) { value221, true });
                $tmp217 = 0;
                goto $l215;
                $l223:;
                $tmp206 = 1;
                goto $l204;
                $l224:;
                return $returnValue212;
            }
            }
            else {
            {
                $returnValue212 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp217 = 1;
                goto $l215;
                $l226:;
                $tmp206 = 2;
                goto $l204;
                $l227:;
                return $returnValue212;
            }
            }
        }
        $tmp217 = -1;
        goto $l215;
        $l215:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
        switch ($tmp217) {
            case 1: goto $l226;
            case 0: goto $l223;
            case -1: goto $l229;
        }
        $l229:;
    }
    $tmp206 = -1;
    goto $l204;
    $l204:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result207));
    result207 = NULL;
    switch ($tmp206) {
        case 1: goto $l224;
        case 2: goto $l227;
        case 0: goto $l213;
        case -1: goto $l230;
    }
    $l230:;
    abort();
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result234 = NULL;
    panda$json$JSON* $tmp235;
    panda$json$JSON* $tmp236;
    panda$core$String* $returnValue239;
    panda$core$String* $tmp240;
    panda$json$JSON* $match$157_9246 = NULL;
    panda$json$JSON* $tmp247;
    panda$core$String* value249 = NULL;
    panda$core$String* $tmp251;
    panda$core$String* $tmp255;
    int $tmp233;
    {
        panda$json$JSON* $tmp238 = (($fn237) self->$class->vtable[2])(self, p_path);
        $tmp236 = $tmp238;
        $tmp235 = $tmp236;
        result234 = $tmp235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        if (((panda$core$Bit) { result234 == NULL }).value) {
        {
            $tmp240 = NULL;
            $returnValue239 = $tmp240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
            $tmp233 = 0;
            goto $l231;
            $l241:;
            return $returnValue239;
        }
        }
        int $tmp245;
        {
            $tmp247 = result234;
            $match$157_9246 = $tmp247;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
            panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_9246->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp248.value) {
            {
                panda$core$String** $tmp250 = ((panda$core$String**) ((char*) $match$157_9246->$data + 0));
                value249 = *$tmp250;
                $tmp251 = value249;
                $returnValue239 = $tmp251;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
                $tmp245 = 0;
                goto $l243;
                $l252:;
                $tmp233 = 1;
                goto $l231;
                $l253:;
                return $returnValue239;
            }
            }
            else {
            {
                $tmp255 = NULL;
                $returnValue239 = $tmp255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
                $tmp245 = 1;
                goto $l243;
                $l256:;
                $tmp233 = 2;
                goto $l231;
                $l257:;
                return $returnValue239;
            }
            }
        }
        $tmp245 = -1;
        goto $l243;
        $l243:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
        switch ($tmp245) {
            case -1: goto $l259;
            case 1: goto $l256;
            case 0: goto $l252;
        }
        $l259:;
    }
    $tmp233 = -1;
    goto $l231;
    $l231:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result234));
    result234 = NULL;
    switch ($tmp233) {
        case 2: goto $l257;
        case 1: goto $l253;
        case -1: goto $l260;
        case 0: goto $l241;
    }
    $l260:;
    abort();
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result264 = NULL;
    panda$json$JSON* $tmp265;
    panda$json$JSON* $tmp266;
    panda$collections$ListView* $returnValue269;
    panda$collections$ListView* $tmp270;
    panda$json$JSON* $match$173_9276 = NULL;
    panda$json$JSON* $tmp277;
    panda$collections$ImmutableArray* value279 = NULL;
    panda$collections$ListView* $tmp281;
    panda$collections$ListView* $tmp285;
    int $tmp263;
    {
        panda$json$JSON* $tmp268 = (($fn267) self->$class->vtable[2])(self, p_path);
        $tmp266 = $tmp268;
        $tmp265 = $tmp266;
        result264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
        if (((panda$core$Bit) { result264 == NULL }).value) {
        {
            $tmp270 = NULL;
            $returnValue269 = $tmp270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
            $tmp263 = 0;
            goto $l261;
            $l271:;
            return $returnValue269;
        }
        }
        int $tmp275;
        {
            $tmp277 = result264;
            $match$173_9276 = $tmp277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
            panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9276->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp278.value) {
            {
                panda$collections$ImmutableArray** $tmp280 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9276->$data + 0));
                value279 = *$tmp280;
                $tmp281 = ((panda$collections$ListView*) value279);
                $returnValue269 = $tmp281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
                $tmp275 = 0;
                goto $l273;
                $l282:;
                $tmp263 = 1;
                goto $l261;
                $l283:;
                return $returnValue269;
            }
            }
            else {
            {
                $tmp285 = NULL;
                $returnValue269 = $tmp285;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                $tmp275 = 1;
                goto $l273;
                $l286:;
                $tmp263 = 2;
                goto $l261;
                $l287:;
                return $returnValue269;
            }
            }
        }
        $tmp275 = -1;
        goto $l273;
        $l273:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
        switch ($tmp275) {
            case -1: goto $l289;
            case 1: goto $l286;
            case 0: goto $l282;
        }
        $l289:;
    }
    $tmp263 = -1;
    goto $l261;
    $l261:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result264));
    result264 = NULL;
    switch ($tmp263) {
        case 2: goto $l287;
        case 1: goto $l283;
        case 0: goto $l271;
        case -1: goto $l290;
    }
    $l290:;
    abort();
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result294 = NULL;
    panda$json$JSON* $tmp295;
    panda$json$JSON* $tmp296;
    panda$collections$MapView* $returnValue299;
    panda$collections$MapView* $tmp300;
    panda$json$JSON* $match$189_9306 = NULL;
    panda$json$JSON* $tmp307;
    panda$collections$ImmutableHashMap* value309 = NULL;
    panda$collections$MapView* $tmp311;
    panda$collections$MapView* $tmp315;
    int $tmp293;
    {
        panda$json$JSON* $tmp298 = (($fn297) self->$class->vtable[2])(self, p_path);
        $tmp296 = $tmp298;
        $tmp295 = $tmp296;
        result294 = $tmp295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
        if (((panda$core$Bit) { result294 == NULL }).value) {
        {
            $tmp300 = NULL;
            $returnValue299 = $tmp300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
            $tmp293 = 0;
            goto $l291;
            $l301:;
            return $returnValue299;
        }
        }
        int $tmp305;
        {
            $tmp307 = result294;
            $match$189_9306 = $tmp307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
            panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9306->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp308.value) {
            {
                panda$collections$ImmutableHashMap** $tmp310 = ((panda$collections$ImmutableHashMap**) ((char*) $match$189_9306->$data + 0));
                value309 = *$tmp310;
                $tmp311 = ((panda$collections$MapView*) value309);
                $returnValue299 = $tmp311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                $tmp305 = 0;
                goto $l303;
                $l312:;
                $tmp293 = 1;
                goto $l291;
                $l313:;
                return $returnValue299;
            }
            }
            else {
            {
                $tmp315 = NULL;
                $returnValue299 = $tmp315;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                $tmp305 = 1;
                goto $l303;
                $l316:;
                $tmp293 = 2;
                goto $l291;
                $l317:;
                return $returnValue299;
            }
            }
        }
        $tmp305 = -1;
        goto $l303;
        $l303:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
        switch ($tmp305) {
            case 1: goto $l316;
            case -1: goto $l319;
            case 0: goto $l312;
        }
        $l319:;
    }
    $tmp293 = -1;
    goto $l291;
    $l291:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result294));
    result294 = NULL;
    switch ($tmp293) {
        case 2: goto $l317;
        case -1: goto $l320;
        case 0: goto $l301;
        case 1: goto $l313;
    }
    $l320:;
    abort();
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$json$JSON* $match$199_9329 = NULL;
    panda$json$JSON* $tmp330;
    panda$core$Int64 value332;
    panda$core$Int64 $returnValue334;
    panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 0 }));
    if ($tmp321.value) goto $l322; else goto $l323;
    $l323:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s324, (panda$core$Int64) { 198 }, &$s325);
    abort();
    $l322:;
    int $tmp328;
    {
        $tmp330 = self;
        $match$199_9329 = $tmp330;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9329->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp331.value) {
        {
            panda$core$Int64* $tmp333 = ((panda$core$Int64*) ((char*) $match$199_9329->$data + 0));
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
            if (((panda$core$Bit) { false }).value) goto $l337; else goto $l338;
            $l338:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s339, (panda$core$Int64) { 203 });
            abort();
            $l337:;
        }
        }
    }
    $tmp328 = -1;
    goto $l326;
    $l326:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
    switch ($tmp328) {
        case 0: goto $l335;
        case -1: goto $l340;
    }
    $l340:;
    abort();
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$json$JSON* $match$209_9349 = NULL;
    panda$json$JSON* $tmp350;
    panda$core$Real64 value352;
    panda$core$Real64 $returnValue354;
    panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp341.value) goto $l342; else goto $l343;
    $l343:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s344, (panda$core$Int64) { 208 }, &$s345);
    abort();
    $l342:;
    int $tmp348;
    {
        $tmp350 = self;
        $match$209_9349 = $tmp350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9349->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp351.value) {
        {
            panda$core$Real64* $tmp353 = ((panda$core$Real64*) ((char*) $match$209_9349->$data + 0));
            value352 = *$tmp353;
            $returnValue354 = value352;
            $tmp348 = 0;
            goto $l346;
            $l355:;
            return $returnValue354;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l357; else goto $l358;
            $l358:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s359, (panda$core$Int64) { 213 });
            abort();
            $l357:;
        }
        }
    }
    $tmp348 = -1;
    goto $l346;
    $l346:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    switch ($tmp348) {
        case -1: goto $l360;
        case 0: goto $l355;
    }
    $l360:;
    abort();
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$219_9369 = NULL;
    panda$json$JSON* $tmp370;
    panda$core$String* value372 = NULL;
    panda$core$String* $returnValue374;
    panda$core$String* $tmp375;
    panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp361.value) goto $l362; else goto $l363;
    $l363:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s364, (panda$core$Int64) { 218 }, &$s365);
    abort();
    $l362:;
    int $tmp368;
    {
        $tmp370 = self;
        $match$219_9369 = $tmp370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9369->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp371.value) {
        {
            panda$core$String** $tmp373 = ((panda$core$String**) ((char*) $match$219_9369->$data + 0));
            value372 = *$tmp373;
            $tmp375 = value372;
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
            if (((panda$core$Bit) { false }).value) goto $l378; else goto $l379;
            $l379:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s380, (panda$core$Int64) { 223 });
            abort();
            $l378:;
        }
        }
    }
    $tmp368 = -1;
    goto $l366;
    $l366:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
    switch ($tmp368) {
        case -1: goto $l381;
        case 0: goto $l376;
    }
    $l381:;
    abort();
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$json$JSON* $match$229_9390 = NULL;
    panda$json$JSON* $tmp391;
    panda$core$Bit value393;
    panda$core$Bit $returnValue395;
    panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 3 }));
    if ($tmp382.value) goto $l383; else goto $l384;
    $l384:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s385, (panda$core$Int64) { 228 }, &$s386);
    abort();
    $l383:;
    int $tmp389;
    {
        $tmp391 = self;
        $match$229_9390 = $tmp391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9390->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp392.value) {
        {
            panda$core$Bit* $tmp394 = ((panda$core$Bit*) ((char*) $match$229_9390->$data + 0));
            value393 = *$tmp394;
            $returnValue395 = value393;
            $tmp389 = 0;
            goto $l387;
            $l396:;
            return $returnValue395;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l398; else goto $l399;
            $l399:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s400, (panda$core$Int64) { 233 });
            abort();
            $l398:;
        }
        }
    }
    $tmp389 = -1;
    goto $l387;
    $l387:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
    switch ($tmp389) {
        case -1: goto $l401;
        case 0: goto $l396;
    }
    $l401:;
    abort();
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$239_9410 = NULL;
    panda$json$JSON* $tmp411;
    panda$collections$ImmutableHashMap* value413 = NULL;
    panda$collections$MapView* $returnValue415;
    panda$collections$MapView* $tmp416;
    panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 4 }));
    if ($tmp402.value) goto $l403; else goto $l404;
    $l404:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s405, (panda$core$Int64) { 238 }, &$s406);
    abort();
    $l403:;
    int $tmp409;
    {
        $tmp411 = self;
        $match$239_9410 = $tmp411;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9410->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp412.value) {
        {
            panda$collections$ImmutableHashMap** $tmp414 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9410->$data + 0));
            value413 = *$tmp414;
            $tmp416 = ((panda$collections$MapView*) value413);
            $returnValue415 = $tmp416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
            $tmp409 = 0;
            goto $l407;
            $l417:;
            return $returnValue415;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l419; else goto $l420;
            $l420:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s421, (panda$core$Int64) { 243 });
            abort();
            $l419:;
        }
        }
    }
    $tmp409 = -1;
    goto $l407;
    $l407:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
    switch ($tmp409) {
        case 0: goto $l417;
        case -1: goto $l422;
    }
    $l422:;
    abort();
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$249_9431 = NULL;
    panda$json$JSON* $tmp432;
    panda$collections$ImmutableArray* value434 = NULL;
    panda$collections$ListView* $returnValue436;
    panda$collections$ListView* $tmp437;
    panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, ((panda$core$Int64) { 5 }));
    if ($tmp423.value) goto $l424; else goto $l425;
    $l425:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s426, (panda$core$Int64) { 248 }, &$s427);
    abort();
    $l424:;
    int $tmp430;
    {
        $tmp432 = self;
        $match$249_9431 = $tmp432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9431->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp433.value) {
        {
            panda$collections$ImmutableArray** $tmp435 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9431->$data + 0));
            value434 = *$tmp435;
            $tmp437 = ((panda$collections$ListView*) value434);
            $returnValue436 = $tmp437;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
            $tmp430 = 0;
            goto $l428;
            $l438:;
            return $returnValue436;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l440; else goto $l441;
            $l441:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s442, (panda$core$Int64) { 253 });
            abort();
            $l440:;
        }
        }
    }
    $tmp430 = -1;
    goto $l428;
    $l428:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
    switch ($tmp430) {
        case 0: goto $l438;
        case -1: goto $l443;
    }
    $l443:;
    abort();
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9447 = NULL;
    panda$json$JSON* $tmp448;
    panda$core$Int64 value450;
    panda$core$String* $returnValue452;
    panda$core$String* $tmp453;
    panda$core$String* $tmp454;
    panda$core$Real64 value459;
    panda$core$String* $tmp461;
    panda$core$String* $tmp462;
    panda$core$String* value467 = NULL;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$Bit value476;
    panda$core$String* $tmp478;
    panda$core$String* $tmp479;
    panda$collections$ImmutableHashMap* fields484 = NULL;
    panda$core$MutableString* result489 = NULL;
    panda$core$MutableString* $tmp490;
    panda$core$MutableString* $tmp491;
    panda$core$String* separator494 = NULL;
    panda$core$String* $tmp495;
    panda$collections$Iterator* Iter$271$17500 = NULL;
    panda$collections$Iterator* $tmp501;
    panda$collections$Iterator* $tmp502;
    panda$core$String* k515 = NULL;
    panda$core$String* $tmp516;
    panda$core$Object* $tmp517;
    panda$core$String* $tmp522;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$core$String* $tmp525;
    panda$core$String* $tmp526;
    panda$core$String* $tmp527;
    panda$core$String* $tmp531;
    panda$core$Object* $tmp540;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp551;
    panda$core$String* $tmp552;
    panda$collections$ImmutableArray* nodes559 = NULL;
    panda$core$MutableString* result564 = NULL;
    panda$core$MutableString* $tmp565;
    panda$core$MutableString* $tmp566;
    panda$core$String* separator569 = NULL;
    panda$core$String* $tmp570;
    panda$collections$Iterator* Iter$280$17575 = NULL;
    panda$collections$Iterator* $tmp576;
    panda$collections$Iterator* $tmp577;
    panda$json$JSON* n593 = NULL;
    panda$json$JSON* $tmp594;
    panda$core$Object* $tmp595;
    panda$core$String* $tmp600;
    panda$core$String* $tmp601;
    panda$core$String* $tmp602;
    panda$core$String* $tmp603;
    panda$core$String* $tmp610;
    panda$core$String* $tmp611;
    panda$core$Char8 $tmp615;
    panda$core$String* $tmp616;
    panda$core$String* $tmp617;
    panda$core$String* $tmp624;
    int $tmp446;
    {
        $tmp448 = self;
        $match$259_9447 = $tmp448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp449.value) {
        {
            panda$core$Int64* $tmp451 = ((panda$core$Int64*) ((char*) $match$259_9447->$data + 0));
            value450 = *$tmp451;
            panda$core$String* $tmp455 = panda$core$Int64$convert$R$panda$core$String(value450);
            $tmp454 = $tmp455;
            $tmp453 = $tmp454;
            $returnValue452 = $tmp453;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
            $tmp446 = 0;
            goto $l444;
            $l456:;
            return $returnValue452;
        }
        }
        else {
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp458.value) {
        {
            panda$core$Real64* $tmp460 = ((panda$core$Real64*) ((char*) $match$259_9447->$data + 0));
            value459 = *$tmp460;
            panda$core$String* $tmp463 = panda$core$Real64$convert$R$panda$core$String(value459);
            $tmp462 = $tmp463;
            $tmp461 = $tmp462;
            $returnValue452 = $tmp461;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
            $tmp446 = 1;
            goto $l444;
            $l464:;
            return $returnValue452;
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp466.value) {
        {
            panda$core$String** $tmp468 = ((panda$core$String**) ((char*) $match$259_9447->$data + 0));
            value467 = *$tmp468;
            panda$core$String* $tmp472 = panda$core$String$format$panda$core$String$R$panda$core$String(value467, &$s471);
            $tmp470 = $tmp472;
            $tmp469 = $tmp470;
            $returnValue452 = $tmp469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
            $tmp446 = 2;
            goto $l444;
            $l473:;
            return $returnValue452;
        }
        }
        else {
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp475.value) {
        {
            panda$core$Bit* $tmp477 = ((panda$core$Bit*) ((char*) $match$259_9447->$data + 0));
            value476 = *$tmp477;
            panda$core$String* $tmp480 = panda$core$Bit$convert$R$panda$core$String(value476);
            $tmp479 = $tmp480;
            $tmp478 = $tmp479;
            $returnValue452 = $tmp478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
            $tmp446 = 3;
            goto $l444;
            $l481:;
            return $returnValue452;
        }
        }
        else {
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp483.value) {
        {
            panda$collections$ImmutableHashMap** $tmp485 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9447->$data + 0));
            fields484 = *$tmp485;
            int $tmp488;
            {
                panda$core$MutableString* $tmp492 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp492, &$s493);
                $tmp491 = $tmp492;
                $tmp490 = $tmp491;
                result489 = $tmp490;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
                $tmp495 = &$s496;
                separator494 = $tmp495;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                {
                    int $tmp499;
                    {
                        panda$collections$Iterator* $tmp503 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields484);
                        $tmp502 = $tmp503;
                        $tmp501 = $tmp502;
                        Iter$271$17500 = $tmp501;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                        $l504:;
                        ITable* $tmp507 = Iter$271$17500->$class->itable;
                        while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp507 = $tmp507->next;
                        }
                        $fn509 $tmp508 = $tmp507->methods[0];
                        panda$core$Bit $tmp510 = $tmp508(Iter$271$17500);
                        panda$core$Bit $tmp511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp510);
                        bool $tmp506 = $tmp511.value;
                        if (!$tmp506) goto $l505;
                        {
                            int $tmp514;
                            {
                                ITable* $tmp518 = Iter$271$17500->$class->itable;
                                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp518 = $tmp518->next;
                                }
                                $fn520 $tmp519 = $tmp518->methods[1];
                                panda$core$Object* $tmp521 = $tmp519(Iter$271$17500);
                                $tmp517 = $tmp521;
                                $tmp516 = ((panda$core$String*) $tmp517);
                                k515 = $tmp516;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
                                panda$core$Panda$unref$panda$core$Object($tmp517);
                                panda$core$String* $tmp528 = panda$core$String$convert$R$panda$core$String(separator494);
                                $tmp527 = $tmp528;
                                panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s529);
                                $tmp526 = $tmp530;
                                ITable* $tmp533 = ((panda$core$Formattable*) k515)->$class->itable;
                                while ($tmp533->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp533 = $tmp533->next;
                                }
                                $fn535 $tmp534 = $tmp533->methods[0];
                                panda$core$String* $tmp536 = $tmp534(((panda$core$Formattable*) k515), &$s532);
                                $tmp531 = $tmp536;
                                panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, $tmp531);
                                $tmp525 = $tmp537;
                                panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s538);
                                $tmp524 = $tmp539;
                                panda$core$Object* $tmp541 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields484, ((panda$collections$Key*) k515));
                                $tmp540 = $tmp541;
                                panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp524, ((panda$core$Object*) ((panda$json$JSON*) $tmp540)));
                                $tmp523 = $tmp542;
                                panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s543);
                                $tmp522 = $tmp544;
                                panda$core$MutableString$append$panda$core$String(result489, $tmp522);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
                                panda$core$Panda$unref$panda$core$Object($tmp540);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
                                {
                                    $tmp545 = separator494;
                                    $tmp546 = &$s547;
                                    separator494 = $tmp546;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
                                }
                            }
                            $tmp514 = -1;
                            goto $l512;
                            $l512:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k515));
                            k515 = NULL;
                            switch ($tmp514) {
                                case -1: goto $l548;
                            }
                            $l548:;
                        }
                        goto $l504;
                        $l505:;
                    }
                    $tmp499 = -1;
                    goto $l497;
                    $l497:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17500));
                    Iter$271$17500 = NULL;
                    switch ($tmp499) {
                        case -1: goto $l549;
                    }
                    $l549:;
                }
                panda$core$MutableString$append$panda$core$String(result489, &$s550);
                panda$core$String* $tmp553 = panda$core$MutableString$finish$R$panda$core$String(result489);
                $tmp552 = $tmp553;
                $tmp551 = $tmp552;
                $returnValue452 = $tmp551;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                $tmp488 = 0;
                goto $l486;
                $l554:;
                $tmp446 = 4;
                goto $l444;
                $l555:;
                return $returnValue452;
            }
            $l486:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator494));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result489));
            result489 = NULL;
            separator494 = NULL;
            switch ($tmp488) {
                case 0: goto $l554;
            }
            $l557:;
        }
        }
        else {
        panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp558.value) {
        {
            panda$collections$ImmutableArray** $tmp560 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9447->$data + 0));
            nodes559 = *$tmp560;
            int $tmp563;
            {
                panda$core$MutableString* $tmp567 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp567, &$s568);
                $tmp566 = $tmp567;
                $tmp565 = $tmp566;
                result564 = $tmp565;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                $tmp570 = &$s571;
                separator569 = $tmp570;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
                {
                    int $tmp574;
                    {
                        ITable* $tmp578 = ((panda$collections$Iterable*) nodes559)->$class->itable;
                        while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp578 = $tmp578->next;
                        }
                        $fn580 $tmp579 = $tmp578->methods[0];
                        panda$collections$Iterator* $tmp581 = $tmp579(((panda$collections$Iterable*) nodes559));
                        $tmp577 = $tmp581;
                        $tmp576 = $tmp577;
                        Iter$280$17575 = $tmp576;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
                        $l582:;
                        ITable* $tmp585 = Iter$280$17575->$class->itable;
                        while ($tmp585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp585 = $tmp585->next;
                        }
                        $fn587 $tmp586 = $tmp585->methods[0];
                        panda$core$Bit $tmp588 = $tmp586(Iter$280$17575);
                        panda$core$Bit $tmp589 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp588);
                        bool $tmp584 = $tmp589.value;
                        if (!$tmp584) goto $l583;
                        {
                            int $tmp592;
                            {
                                ITable* $tmp596 = Iter$280$17575->$class->itable;
                                while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp596 = $tmp596->next;
                                }
                                $fn598 $tmp597 = $tmp596->methods[1];
                                panda$core$Object* $tmp599 = $tmp597(Iter$280$17575);
                                $tmp595 = $tmp599;
                                $tmp594 = ((panda$json$JSON*) $tmp595);
                                n593 = $tmp594;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
                                panda$core$Panda$unref$panda$core$Object($tmp595);
                                panda$core$String* $tmp604 = panda$core$String$convert$R$panda$core$String(separator569);
                                $tmp603 = $tmp604;
                                panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp603, &$s605);
                                $tmp602 = $tmp606;
                                panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp602, ((panda$core$Object*) n593));
                                $tmp601 = $tmp607;
                                panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s608);
                                $tmp600 = $tmp609;
                                panda$core$MutableString$append$panda$core$String(result564, $tmp600);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                                {
                                    $tmp610 = separator569;
                                    $tmp611 = &$s612;
                                    separator569 = $tmp611;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp611));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                                }
                            }
                            $tmp592 = -1;
                            goto $l590;
                            $l590:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n593));
                            n593 = NULL;
                            switch ($tmp592) {
                                case -1: goto $l613;
                            }
                            $l613:;
                        }
                        goto $l582;
                        $l583:;
                    }
                    $tmp574 = -1;
                    goto $l572;
                    $l572:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17575));
                    Iter$280$17575 = NULL;
                    switch ($tmp574) {
                        case -1: goto $l614;
                    }
                    $l614:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp615, ((panda$core$UInt8) { 93 }));
                panda$core$MutableString$append$panda$core$Char8(result564, $tmp615);
                panda$core$String* $tmp618 = panda$core$MutableString$finish$R$panda$core$String(result564);
                $tmp617 = $tmp618;
                $tmp616 = $tmp617;
                $returnValue452 = $tmp616;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                $tmp563 = 0;
                goto $l561;
                $l619:;
                $tmp446 = 5;
                goto $l444;
                $l620:;
                return $returnValue452;
            }
            $l561:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result564));
            result564 = NULL;
            separator569 = NULL;
            switch ($tmp563) {
                case 0: goto $l619;
            }
            $l622:;
        }
        }
        else {
        panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9447->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp623.value) {
        {
            $tmp624 = &$s625;
            $returnValue452 = $tmp624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
            $tmp446 = 6;
            goto $l444;
            $l626:;
            return $returnValue452;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l628; else goto $l629;
            $l629:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s630, (panda$core$Int64) { 289 });
            abort();
            $l628:;
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp446 = -1;
    goto $l444;
    $l444:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
    switch ($tmp446) {
        case 2: goto $l473;
        case 6: goto $l626;
        case 1: goto $l464;
        case 4: goto $l555;
        case 5: goto $l620;
        case 0: goto $l456;
        case -1: goto $l631;
        case 3: goto $l481;
    }
    $l631:;
    abort();
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1638 = NULL;
    panda$json$JSON* $tmp639;
    panda$core$Int64 _f0641;
    panda$core$Real64 _f0644;
    panda$core$String* _f0647 = NULL;
    panda$core$Bit _f0650;
    panda$collections$ImmutableHashMap* _f0653 = NULL;
    panda$collections$ImmutableArray* _f0656 = NULL;
    int $tmp634;
    {
        int $tmp637;
        {
            $tmp639 = self;
            $match$5_1638 = $tmp639;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp639));
            panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp640.value) {
            {
                panda$core$Int64* $tmp642 = ((panda$core$Int64*) ((char*) $match$5_1638->$data + 0));
                _f0641 = *$tmp642;
            }
            }
            else {
            panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp643.value) {
            {
                panda$core$Real64* $tmp645 = ((panda$core$Real64*) ((char*) $match$5_1638->$data + 0));
                _f0644 = *$tmp645;
            }
            }
            else {
            panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp646.value) {
            {
                panda$core$String** $tmp648 = ((panda$core$String**) ((char*) $match$5_1638->$data + 0));
                _f0647 = *$tmp648;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0647));
            }
            }
            else {
            panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp649.value) {
            {
                panda$core$Bit* $tmp651 = ((panda$core$Bit*) ((char*) $match$5_1638->$data + 0));
                _f0650 = *$tmp651;
            }
            }
            else {
            panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp652.value) {
            {
                panda$collections$ImmutableHashMap** $tmp654 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1638->$data + 0));
                _f0653 = *$tmp654;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0653));
            }
            }
            else {
            panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp655.value) {
            {
                panda$collections$ImmutableArray** $tmp657 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1638->$data + 0));
                _f0656 = *$tmp657;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0656));
            }
            }
            else {
            panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1638->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp658.value) {
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
        $tmp637 = -1;
        goto $l635;
        $l635:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
        switch ($tmp637) {
            case -1: goto $l659;
        }
        $l659:;
    }
    $tmp634 = -1;
    goto $l632;
    $l632:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp634) {
        case -1: goto $l660;
    }
    $l660:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp661 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp661 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp662 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp662 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp663;
    panda$core$String* $tmp666;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp664 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp663 = *$tmp664;
        panda$core$String** $tmp665 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp666 = p_f0;
        *$tmp665 = $tmp666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp667 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp667 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp668;
    panda$collections$ImmutableHashMap* $tmp671;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp669 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp668 = *$tmp669;
        panda$collections$ImmutableHashMap** $tmp670 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp671 = p_f0;
        *$tmp670 = $tmp671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp672;
    panda$collections$ImmutableArray* $tmp675;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp673 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp672 = *$tmp673;
        panda$collections$ImmutableArray** $tmp674 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp675 = p_f0;
        *$tmp674 = $tmp675;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

