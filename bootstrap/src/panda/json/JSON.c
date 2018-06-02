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

typedef panda$json$JSON* (*$fn169)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn197)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn225)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn253)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn284)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn315)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn551)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn562)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn577)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn630)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn641)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 74, 5172637184330274798, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 76, 3649344319728702780, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 78, -1718795988612819328, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, 737367192177042396, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 122, 7181716504558141706, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 104, 5557801791232681248, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$23_92;
    panda$core$Char32 $tmp4;
    panda$core$Int32 $tmp5;
    panda$core$String$Index end7;
    panda$core$String$Index fieldStart9;
    panda$core$String$Index index11;
    panda$core$Char32 c14;
    panda$core$Char32 $tmp17;
    panda$core$Int32 $tmp18;
    panda$core$Char32 $tmp21;
    panda$core$Int32 $tmp22;
    panda$json$JSON$PathKey* $returnValue29;
    panda$json$JSON$PathKey* $tmp30;
    panda$json$JSON$PathKey* $tmp32;
    panda$json$JSON$PathKey* $tmp33;
    panda$core$Int64 $tmp35;
    panda$core$String* $tmp36;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp37;
    panda$core$Bit $tmp38;
    panda$core$Char32 $tmp41;
    panda$core$Int32 $tmp42;
    panda$core$String$Index indexStart44;
    panda$core$String$Index index46;
    panda$core$Char32 $tmp51;
    panda$core$Int32 $tmp52;
    panda$core$Int64$nullable parsed55;
    panda$core$String* $tmp56;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp57;
    panda$core$Bit $tmp58;
    panda$json$JSON$PathKey* $tmp61;
    panda$json$JSON$PathKey* $tmp63;
    panda$json$JSON$PathKey* $tmp64;
    panda$core$Int64 $tmp66;
    panda$json$JSON$PathKey* $tmp69;
    {
        panda$core$Char32 $tmp3 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, p_start);
        $match$23_92 = $tmp3;
        panda$core$Int32$init$builtin_int32(&$tmp5, 47);
        panda$core$Char32$init$panda$core$Int32(&$tmp4, $tmp5);
        panda$core$Bit $tmp6 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_92, $tmp4);
        if ($tmp6.value) {
        {
            panda$core$String$Index $tmp8 = panda$core$String$end$R$panda$core$String$Index(p_path);
            end7 = $tmp8;
            panda$core$String$Index $tmp10 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            fieldStart9 = $tmp10;
            index11 = fieldStart9;
            $l12:;
            {
                panda$core$Char32 $tmp15 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index11);
                c14 = $tmp15;
                panda$core$Int32$init$builtin_int32(&$tmp18, 47);
                panda$core$Char32$init$panda$core$Int32(&$tmp17, $tmp18);
                panda$core$Bit $tmp19 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c14, $tmp17);
                bool $tmp16 = $tmp19.value;
                if ($tmp16) goto $l20;
                panda$core$Int32$init$builtin_int32(&$tmp22, 91);
                panda$core$Char32$init$panda$core$Int32(&$tmp21, $tmp22);
                panda$core$Bit $tmp23 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c14, $tmp21);
                $tmp16 = $tmp23.value;
                $l20:;
                panda$core$Bit $tmp24 = { $tmp16 };
                if ($tmp24.value) {
                {
                    goto $l13;
                }
                }
                panda$core$String$Index $tmp25 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index11);
                index11 = $tmp25;
            }
            panda$core$Bit $tmp27 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index11, end7);
            bool $tmp26 = $tmp27.value;
            if ($tmp26) goto $l12;
            $l13:;
            panda$core$Bit $tmp28 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(fieldStart9, index11);
            if ($tmp28.value) {
            {
                $tmp30 = NULL;
                $returnValue29 = $tmp30;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
                return $returnValue29;
            }
            }
            panda$json$JSON$PathKey* $tmp34 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Int64$init$builtin_int64(&$tmp35, 0);
            panda$core$Bit$init$builtin_bit(&$tmp38, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp37, fieldStart9, index11, $tmp38);
            panda$core$String* $tmp39 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp37);
            $tmp36 = $tmp39;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp34, $tmp35, $tmp36, index11);
            $tmp33 = $tmp34;
            $tmp32 = $tmp33;
            $returnValue29 = $tmp32;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            return $returnValue29;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp42, 91);
        panda$core$Char32$init$panda$core$Int32(&$tmp41, $tmp42);
        panda$core$Bit $tmp43 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_92, $tmp41);
        if ($tmp43.value) {
        {
            panda$core$String$Index $tmp45 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart44 = $tmp45;
            index46 = indexStart44;
            $l47:;
            panda$core$Char32 $tmp50 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index46);
            panda$core$Int32$init$builtin_int32(&$tmp52, 93);
            panda$core$Char32$init$panda$core$Int32(&$tmp51, $tmp52);
            panda$core$Bit $tmp53 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp50, $tmp51);
            bool $tmp49 = $tmp53.value;
            if (!$tmp49) goto $l48;
            {
                panda$core$String$Index $tmp54 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index46);
                index46 = $tmp54;
            }
            goto $l47;
            $l48:;
            panda$core$Bit$init$builtin_bit(&$tmp58, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp57, indexStart44, index46, $tmp58);
            panda$core$String* $tmp59 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp57);
            $tmp56 = $tmp59;
            panda$core$Int64$nullable $tmp60 = panda$core$String$convert$R$panda$core$Int64$Q($tmp56);
            parsed55 = $tmp60;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
            if (((panda$core$Bit) { !parsed55.nonnull }).value) {
            {
                $tmp61 = NULL;
                $returnValue29 = $tmp61;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
                return $returnValue29;
            }
            }
            panda$json$JSON$PathKey* $tmp65 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Int64$init$builtin_int64(&$tmp66, 1);
            panda$core$String$Index $tmp67 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index46);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp65, $tmp66, ((panda$core$Int64) parsed55.value), $tmp67);
            $tmp64 = $tmp65;
            $tmp63 = $tmp64;
            $returnValue29 = $tmp63;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
            return $returnValue29;
        }
        }
        else {
        {
            $tmp69 = NULL;
            $returnValue29 = $tmp69;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
            return $returnValue29;
        }
        }
        }
    }
    abort();
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index74;
    panda$core$String$Index end76;
    panda$json$JSON* current78 = NULL;
    panda$json$JSON* $tmp79;
    panda$json$JSON$PathKey* $tmp84;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$json$JSON$PathKey* $match$76_1398 = NULL;
    panda$json$JSON$PathKey* $tmp99;
    panda$json$JSON$PathKey* $tmp100;
    panda$core$Int64 $tmp102;
    panda$core$String* field104 = NULL;
    panda$core$String$Index next106;
    panda$json$JSON* $match$78_21111 = NULL;
    panda$json$JSON* $tmp112;
    panda$core$Int64 $tmp113;
    panda$collections$ImmutableHashMap* fields115 = NULL;
    panda$json$JSON* $tmp117;
    panda$json$JSON* $tmp118;
    panda$core$Object* $tmp119;
    panda$json$JSON* $returnValue121;
    panda$json$JSON* $tmp122;
    panda$json$JSON* $tmp127;
    panda$core$Int64 $tmp133;
    panda$core$Int64 key135;
    panda$core$String$Index next137;
    panda$json$JSON* $match$89_21142 = NULL;
    panda$json$JSON* $tmp143;
    panda$core$Int64 $tmp144;
    panda$collections$ImmutableArray* nodes146 = NULL;
    panda$json$JSON* $tmp148;
    panda$json$JSON* $tmp149;
    panda$core$Object* $tmp150;
    panda$json$JSON* $tmp152;
    panda$json$JSON* $tmp159;
    int $tmp73;
    {
        panda$core$String$Index $tmp75 = panda$core$String$start$R$panda$core$String$Index(p_path);
        index74 = $tmp75;
        panda$core$String$Index $tmp77 = panda$core$String$end$R$panda$core$String$Index(p_path);
        end76 = $tmp77;
        $tmp79 = self;
        current78 = $tmp79;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
        $l80:;
        panda$core$Bit $tmp83 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index74, end76);
        bool $tmp82 = $tmp83.value;
        if (!$tmp82) goto $l81;
        {
            panda$json$JSON$PathKey* $tmp85 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index74);
            $tmp84 = $tmp85;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
            if (((panda$core$Bit) { $tmp84 != NULL }).value) goto $l86; else goto $l87;
            $l87:;
            panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s91, p_path);
            $tmp90 = $tmp92;
            panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s93);
            $tmp89 = $tmp94;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s88, (panda$core$Int64) { 75 }, $tmp89);
            abort();
            $l86:;
            int $tmp97;
            {
                panda$json$JSON$PathKey* $tmp101 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index74);
                $tmp100 = $tmp101;
                $tmp99 = $tmp100;
                $match$76_1398 = $tmp99;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                panda$core$Int64$init$builtin_int64(&$tmp102, 0);
                panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1398->$rawValue, $tmp102);
                if ($tmp103.value) {
                {
                    panda$core$String** $tmp105 = ((panda$core$String**) ((char*) $match$76_1398->$data + 0));
                    field104 = *$tmp105;
                    panda$core$String$Index* $tmp107 = ((panda$core$String$Index*) ((char*) $match$76_1398->$data + 8));
                    next106 = *$tmp107;
                    int $tmp110;
                    {
                        $tmp112 = current78;
                        $match$78_21111 = $tmp112;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
                        panda$core$Int64$init$builtin_int64(&$tmp113, 4);
                        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_21111->$rawValue, $tmp113);
                        if ($tmp114.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp116 = ((panda$collections$ImmutableHashMap**) ((char*) $match$78_21111->$data + 0));
                            fields115 = *$tmp116;
                            {
                                $tmp117 = current78;
                                panda$core$Object* $tmp120 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields115, ((panda$collections$Key*) field104));
                                $tmp119 = $tmp120;
                                $tmp118 = ((panda$json$JSON*) $tmp119);
                                current78 = $tmp118;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
                                panda$core$Panda$unref$panda$core$Object($tmp119);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
                            }
                            if (((panda$core$Bit) { current78 == NULL }).value) {
                            {
                                $tmp122 = NULL;
                                $returnValue121 = $tmp122;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
                                $tmp110 = 0;
                                goto $l108;
                                $l123:;
                                $tmp97 = 0;
                                goto $l95;
                                $l124:;
                                $tmp73 = 0;
                                goto $l71;
                                $l125:;
                                return $returnValue121;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp127 = NULL;
                            $returnValue121 = $tmp127;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                            $tmp110 = 1;
                            goto $l108;
                            $l128:;
                            $tmp97 = 1;
                            goto $l95;
                            $l129:;
                            $tmp73 = 1;
                            goto $l71;
                            $l130:;
                            return $returnValue121;
                        }
                        }
                    }
                    $tmp110 = -1;
                    goto $l108;
                    $l108:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
                    switch ($tmp110) {
                        case -1: goto $l132;
                        case 1: goto $l128;
                        case 0: goto $l123;
                    }
                    $l132:;
                    index74 = next106;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp133, 1);
                panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1398->$rawValue, $tmp133);
                if ($tmp134.value) {
                {
                    panda$core$Int64* $tmp136 = ((panda$core$Int64*) ((char*) $match$76_1398->$data + 0));
                    key135 = *$tmp136;
                    panda$core$String$Index* $tmp138 = ((panda$core$String$Index*) ((char*) $match$76_1398->$data + 8));
                    next137 = *$tmp138;
                    int $tmp141;
                    {
                        $tmp143 = current78;
                        $match$89_21142 = $tmp143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                        panda$core$Int64$init$builtin_int64(&$tmp144, 5);
                        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$89_21142->$rawValue, $tmp144);
                        if ($tmp145.value) {
                        {
                            panda$collections$ImmutableArray** $tmp147 = ((panda$collections$ImmutableArray**) ((char*) $match$89_21142->$data + 0));
                            nodes146 = *$tmp147;
                            {
                                $tmp148 = current78;
                                panda$core$Object* $tmp151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes146, key135);
                                $tmp150 = $tmp151;
                                $tmp149 = ((panda$json$JSON*) $tmp150);
                                current78 = $tmp149;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                                panda$core$Panda$unref$panda$core$Object($tmp150);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                            }
                        }
                        }
                        else {
                        {
                            $tmp152 = NULL;
                            $returnValue121 = $tmp152;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                            $tmp141 = 0;
                            goto $l139;
                            $l153:;
                            $tmp97 = 2;
                            goto $l95;
                            $l154:;
                            $tmp73 = 2;
                            goto $l71;
                            $l155:;
                            return $returnValue121;
                        }
                        }
                    }
                    $tmp141 = -1;
                    goto $l139;
                    $l139:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
                    switch ($tmp141) {
                        case 0: goto $l153;
                        case -1: goto $l157;
                    }
                    $l157:;
                    index74 = next137;
                }
                }
                }
            }
            $tmp97 = -1;
            goto $l95;
            $l95:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
            switch ($tmp97) {
                case 1: goto $l129;
                case 2: goto $l154;
                case -1: goto $l158;
                case 0: goto $l124;
            }
            $l158:;
        }
        goto $l80;
        $l81:;
        $tmp159 = current78;
        $returnValue121 = $tmp159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
        $tmp73 = 3;
        goto $l71;
        $l160:;
        return $returnValue121;
    }
    $l71:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current78));
    current78 = NULL;
    switch ($tmp73) {
        case 1: goto $l130;
        case 3: goto $l160;
        case 0: goto $l125;
        case 2: goto $l155;
    }
    $l162:;
    abort();
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result166 = NULL;
    panda$json$JSON* $tmp167;
    panda$json$JSON* $tmp168;
    panda$core$Int64$nullable $returnValue171;
    panda$json$JSON* $match$109_9177 = NULL;
    panda$json$JSON* $tmp178;
    panda$core$Int64 $tmp179;
    panda$core$Int64 value181;
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
            $returnValue171 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp165 = 0;
            goto $l163;
            $l172:;
            return $returnValue171;
        }
        }
        int $tmp176;
        {
            $tmp178 = result166;
            $match$109_9177 = $tmp178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
            panda$core$Int64$init$builtin_int64(&$tmp179, 0);
            panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_9177->$rawValue, $tmp179);
            if ($tmp180.value) {
            {
                panda$core$Int64* $tmp182 = ((panda$core$Int64*) ((char*) $match$109_9177->$data + 0));
                value181 = *$tmp182;
                $returnValue171 = ((panda$core$Int64$nullable) { value181, true });
                $tmp176 = 0;
                goto $l174;
                $l183:;
                $tmp165 = 1;
                goto $l163;
                $l184:;
                return $returnValue171;
            }
            }
            else {
            {
                $returnValue171 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp176 = 1;
                goto $l174;
                $l186:;
                $tmp165 = 2;
                goto $l163;
                $l187:;
                return $returnValue171;
            }
            }
        }
        $tmp176 = -1;
        goto $l174;
        $l174:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        switch ($tmp176) {
            case 1: goto $l186;
            case 0: goto $l183;
            case -1: goto $l189;
        }
        $l189:;
    }
    $tmp165 = -1;
    goto $l163;
    $l163:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result166));
    result166 = NULL;
    switch ($tmp165) {
        case 1: goto $l184;
        case 2: goto $l187;
        case -1: goto $l190;
        case 0: goto $l172;
    }
    $l190:;
    abort();
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result194 = NULL;
    panda$json$JSON* $tmp195;
    panda$json$JSON* $tmp196;
    panda$core$Real64$nullable $returnValue199;
    panda$json$JSON* $match$125_9205 = NULL;
    panda$json$JSON* $tmp206;
    panda$core$Int64 $tmp207;
    panda$core$Real64 value209;
    int $tmp193;
    {
        panda$json$JSON* $tmp198 = (($fn197) self->$class->vtable[2])(self, p_path);
        $tmp196 = $tmp198;
        $tmp195 = $tmp196;
        result194 = $tmp195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
        if (((panda$core$Bit) { result194 == NULL }).value) {
        {
            $returnValue199 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp193 = 0;
            goto $l191;
            $l200:;
            return $returnValue199;
        }
        }
        int $tmp204;
        {
            $tmp206 = result194;
            $match$125_9205 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Int64$init$builtin_int64(&$tmp207, 1);
            panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9205->$rawValue, $tmp207);
            if ($tmp208.value) {
            {
                panda$core$Real64* $tmp210 = ((panda$core$Real64*) ((char*) $match$125_9205->$data + 0));
                value209 = *$tmp210;
                $returnValue199 = ((panda$core$Real64$nullable) { value209, true });
                $tmp204 = 0;
                goto $l202;
                $l211:;
                $tmp193 = 1;
                goto $l191;
                $l212:;
                return $returnValue199;
            }
            }
            else {
            {
                $returnValue199 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp204 = 1;
                goto $l202;
                $l214:;
                $tmp193 = 2;
                goto $l191;
                $l215:;
                return $returnValue199;
            }
            }
        }
        $tmp204 = -1;
        goto $l202;
        $l202:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
        switch ($tmp204) {
            case 1: goto $l214;
            case -1: goto $l217;
            case 0: goto $l211;
        }
        $l217:;
    }
    $tmp193 = -1;
    goto $l191;
    $l191:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result194));
    result194 = NULL;
    switch ($tmp193) {
        case 1: goto $l212;
        case -1: goto $l218;
        case 0: goto $l200;
        case 2: goto $l215;
    }
    $l218:;
    abort();
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result222 = NULL;
    panda$json$JSON* $tmp223;
    panda$json$JSON* $tmp224;
    panda$core$Bit$nullable $returnValue227;
    panda$json$JSON* $match$141_9233 = NULL;
    panda$json$JSON* $tmp234;
    panda$core$Int64 $tmp235;
    panda$core$Bit value237;
    int $tmp221;
    {
        panda$json$JSON* $tmp226 = (($fn225) self->$class->vtable[2])(self, p_path);
        $tmp224 = $tmp226;
        $tmp223 = $tmp224;
        result222 = $tmp223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
        if (((panda$core$Bit) { result222 == NULL }).value) {
        {
            $returnValue227 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp221 = 0;
            goto $l219;
            $l228:;
            return $returnValue227;
        }
        }
        int $tmp232;
        {
            $tmp234 = result222;
            $match$141_9233 = $tmp234;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
            panda$core$Int64$init$builtin_int64(&$tmp235, 3);
            panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9233->$rawValue, $tmp235);
            if ($tmp236.value) {
            {
                panda$core$Bit* $tmp238 = ((panda$core$Bit*) ((char*) $match$141_9233->$data + 0));
                value237 = *$tmp238;
                $returnValue227 = ((panda$core$Bit$nullable) { value237, true });
                $tmp232 = 0;
                goto $l230;
                $l239:;
                $tmp221 = 1;
                goto $l219;
                $l240:;
                return $returnValue227;
            }
            }
            else {
            {
                $returnValue227 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp232 = 1;
                goto $l230;
                $l242:;
                $tmp221 = 2;
                goto $l219;
                $l243:;
                return $returnValue227;
            }
            }
        }
        $tmp232 = -1;
        goto $l230;
        $l230:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
        switch ($tmp232) {
            case 1: goto $l242;
            case -1: goto $l245;
            case 0: goto $l239;
        }
        $l245:;
    }
    $tmp221 = -1;
    goto $l219;
    $l219:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result222));
    result222 = NULL;
    switch ($tmp221) {
        case 2: goto $l243;
        case -1: goto $l246;
        case 1: goto $l240;
        case 0: goto $l228;
    }
    $l246:;
    abort();
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result250 = NULL;
    panda$json$JSON* $tmp251;
    panda$json$JSON* $tmp252;
    panda$core$String* $returnValue255;
    panda$core$String* $tmp256;
    panda$json$JSON* $match$157_9262 = NULL;
    panda$json$JSON* $tmp263;
    panda$core$Int64 $tmp264;
    panda$core$String* value266 = NULL;
    panda$core$String* $tmp268;
    panda$core$String* $tmp272;
    int $tmp249;
    {
        panda$json$JSON* $tmp254 = (($fn253) self->$class->vtable[2])(self, p_path);
        $tmp252 = $tmp254;
        $tmp251 = $tmp252;
        result250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
        if (((panda$core$Bit) { result250 == NULL }).value) {
        {
            $tmp256 = NULL;
            $returnValue255 = $tmp256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
            $tmp249 = 0;
            goto $l247;
            $l257:;
            return $returnValue255;
        }
        }
        int $tmp261;
        {
            $tmp263 = result250;
            $match$157_9262 = $tmp263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
            panda$core$Int64$init$builtin_int64(&$tmp264, 2);
            panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_9262->$rawValue, $tmp264);
            if ($tmp265.value) {
            {
                panda$core$String** $tmp267 = ((panda$core$String**) ((char*) $match$157_9262->$data + 0));
                value266 = *$tmp267;
                $tmp268 = value266;
                $returnValue255 = $tmp268;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                $tmp261 = 0;
                goto $l259;
                $l269:;
                $tmp249 = 1;
                goto $l247;
                $l270:;
                return $returnValue255;
            }
            }
            else {
            {
                $tmp272 = NULL;
                $returnValue255 = $tmp272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                $tmp261 = 1;
                goto $l259;
                $l273:;
                $tmp249 = 2;
                goto $l247;
                $l274:;
                return $returnValue255;
            }
            }
        }
        $tmp261 = -1;
        goto $l259;
        $l259:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        switch ($tmp261) {
            case -1: goto $l276;
            case 0: goto $l269;
            case 1: goto $l273;
        }
        $l276:;
    }
    $tmp249 = -1;
    goto $l247;
    $l247:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result250));
    result250 = NULL;
    switch ($tmp249) {
        case -1: goto $l277;
        case 2: goto $l274;
        case 1: goto $l270;
        case 0: goto $l257;
    }
    $l277:;
    abort();
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result281 = NULL;
    panda$json$JSON* $tmp282;
    panda$json$JSON* $tmp283;
    panda$collections$ListView* $returnValue286;
    panda$collections$ListView* $tmp287;
    panda$json$JSON* $match$173_9293 = NULL;
    panda$json$JSON* $tmp294;
    panda$core$Int64 $tmp295;
    panda$collections$ImmutableArray* value297 = NULL;
    panda$collections$ListView* $tmp299;
    panda$collections$ListView* $tmp303;
    int $tmp280;
    {
        panda$json$JSON* $tmp285 = (($fn284) self->$class->vtable[2])(self, p_path);
        $tmp283 = $tmp285;
        $tmp282 = $tmp283;
        result281 = $tmp282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
        if (((panda$core$Bit) { result281 == NULL }).value) {
        {
            $tmp287 = NULL;
            $returnValue286 = $tmp287;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
            $tmp280 = 0;
            goto $l278;
            $l288:;
            return $returnValue286;
        }
        }
        int $tmp292;
        {
            $tmp294 = result281;
            $match$173_9293 = $tmp294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
            panda$core$Int64$init$builtin_int64(&$tmp295, 5);
            panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9293->$rawValue, $tmp295);
            if ($tmp296.value) {
            {
                panda$collections$ImmutableArray** $tmp298 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9293->$data + 0));
                value297 = *$tmp298;
                $tmp299 = ((panda$collections$ListView*) value297);
                $returnValue286 = $tmp299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
                $tmp292 = 0;
                goto $l290;
                $l300:;
                $tmp280 = 1;
                goto $l278;
                $l301:;
                return $returnValue286;
            }
            }
            else {
            {
                $tmp303 = NULL;
                $returnValue286 = $tmp303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                $tmp292 = 1;
                goto $l290;
                $l304:;
                $tmp280 = 2;
                goto $l278;
                $l305:;
                return $returnValue286;
            }
            }
        }
        $tmp292 = -1;
        goto $l290;
        $l290:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
        switch ($tmp292) {
            case 0: goto $l300;
            case -1: goto $l307;
            case 1: goto $l304;
        }
        $l307:;
    }
    $tmp280 = -1;
    goto $l278;
    $l278:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
    result281 = NULL;
    switch ($tmp280) {
        case -1: goto $l308;
        case 2: goto $l305;
        case 0: goto $l288;
        case 1: goto $l301;
    }
    $l308:;
    abort();
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result312 = NULL;
    panda$json$JSON* $tmp313;
    panda$json$JSON* $tmp314;
    panda$collections$MapView* $returnValue317;
    panda$collections$MapView* $tmp318;
    panda$json$JSON* $match$189_9324 = NULL;
    panda$json$JSON* $tmp325;
    panda$core$Int64 $tmp326;
    panda$collections$ImmutableHashMap* value328 = NULL;
    panda$collections$MapView* $tmp330;
    panda$collections$MapView* $tmp334;
    int $tmp311;
    {
        panda$json$JSON* $tmp316 = (($fn315) self->$class->vtable[2])(self, p_path);
        $tmp314 = $tmp316;
        $tmp313 = $tmp314;
        result312 = $tmp313;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
        if (((panda$core$Bit) { result312 == NULL }).value) {
        {
            $tmp318 = NULL;
            $returnValue317 = $tmp318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
            $tmp311 = 0;
            goto $l309;
            $l319:;
            return $returnValue317;
        }
        }
        int $tmp323;
        {
            $tmp325 = result312;
            $match$189_9324 = $tmp325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
            panda$core$Int64$init$builtin_int64(&$tmp326, 4);
            panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9324->$rawValue, $tmp326);
            if ($tmp327.value) {
            {
                panda$collections$ImmutableHashMap** $tmp329 = ((panda$collections$ImmutableHashMap**) ((char*) $match$189_9324->$data + 0));
                value328 = *$tmp329;
                $tmp330 = ((panda$collections$MapView*) value328);
                $returnValue317 = $tmp330;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                $tmp323 = 0;
                goto $l321;
                $l331:;
                $tmp311 = 1;
                goto $l309;
                $l332:;
                return $returnValue317;
            }
            }
            else {
            {
                $tmp334 = NULL;
                $returnValue317 = $tmp334;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
                $tmp323 = 1;
                goto $l321;
                $l335:;
                $tmp311 = 2;
                goto $l309;
                $l336:;
                return $returnValue317;
            }
            }
        }
        $tmp323 = -1;
        goto $l321;
        $l321:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
        switch ($tmp323) {
            case -1: goto $l338;
            case 1: goto $l335;
            case 0: goto $l331;
        }
        $l338:;
    }
    $tmp311 = -1;
    goto $l309;
    $l309:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result312));
    result312 = NULL;
    switch ($tmp311) {
        case 2: goto $l336;
        case -1: goto $l339;
        case 1: goto $l332;
        case 0: goto $l319;
    }
    $l339:;
    abort();
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$core$Int64 $tmp340;
    panda$json$JSON* $match$199_9349 = NULL;
    panda$json$JSON* $tmp350;
    panda$core$Int64 $tmp351;
    panda$core$Int64 value353;
    panda$core$Int64 $returnValue355;
    panda$core$Bit $tmp358;
    panda$core$Int64$init$builtin_int64(&$tmp340, 0);
    panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp340);
    if ($tmp341.value) goto $l342; else goto $l343;
    $l343:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s344, (panda$core$Int64) { 198 }, &$s345);
    abort();
    $l342:;
    int $tmp348;
    {
        $tmp350 = self;
        $match$199_9349 = $tmp350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
        panda$core$Int64$init$builtin_int64(&$tmp351, 0);
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9349->$rawValue, $tmp351);
        if ($tmp352.value) {
        {
            panda$core$Int64* $tmp354 = ((panda$core$Int64*) ((char*) $match$199_9349->$data + 0));
            value353 = *$tmp354;
            $returnValue355 = value353;
            $tmp348 = 0;
            goto $l346;
            $l356:;
            return $returnValue355;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp358, false);
            if ($tmp358.value) goto $l359; else goto $l360;
            $l360:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s361, (panda$core$Int64) { 203 });
            abort();
            $l359:;
        }
        }
    }
    $tmp348 = -1;
    goto $l346;
    $l346:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    switch ($tmp348) {
        case -1: goto $l362;
        case 0: goto $l356;
    }
    $l362:;
    abort();
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$core$Int64 $tmp363;
    panda$json$JSON* $match$209_9372 = NULL;
    panda$json$JSON* $tmp373;
    panda$core$Int64 $tmp374;
    panda$core$Real64 value376;
    panda$core$Real64 $returnValue378;
    panda$core$Bit $tmp381;
    panda$core$Int64$init$builtin_int64(&$tmp363, 1);
    panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp363);
    if ($tmp364.value) goto $l365; else goto $l366;
    $l366:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s367, (panda$core$Int64) { 208 }, &$s368);
    abort();
    $l365:;
    int $tmp371;
    {
        $tmp373 = self;
        $match$209_9372 = $tmp373;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
        panda$core$Int64$init$builtin_int64(&$tmp374, 1);
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9372->$rawValue, $tmp374);
        if ($tmp375.value) {
        {
            panda$core$Real64* $tmp377 = ((panda$core$Real64*) ((char*) $match$209_9372->$data + 0));
            value376 = *$tmp377;
            $returnValue378 = value376;
            $tmp371 = 0;
            goto $l369;
            $l379:;
            return $returnValue378;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp381, false);
            if ($tmp381.value) goto $l382; else goto $l383;
            $l383:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s384, (panda$core$Int64) { 213 });
            abort();
            $l382:;
        }
        }
    }
    $tmp371 = -1;
    goto $l369;
    $l369:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
    switch ($tmp371) {
        case 0: goto $l379;
        case -1: goto $l385;
    }
    $l385:;
    abort();
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$core$Int64 $tmp386;
    panda$json$JSON* $match$219_9395 = NULL;
    panda$json$JSON* $tmp396;
    panda$core$Int64 $tmp397;
    panda$core$String* value399 = NULL;
    panda$core$String* $returnValue401;
    panda$core$String* $tmp402;
    panda$core$Bit $tmp405;
    panda$core$Int64$init$builtin_int64(&$tmp386, 2);
    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp386);
    if ($tmp387.value) goto $l388; else goto $l389;
    $l389:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s390, (panda$core$Int64) { 218 }, &$s391);
    abort();
    $l388:;
    int $tmp394;
    {
        $tmp396 = self;
        $match$219_9395 = $tmp396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
        panda$core$Int64$init$builtin_int64(&$tmp397, 2);
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9395->$rawValue, $tmp397);
        if ($tmp398.value) {
        {
            panda$core$String** $tmp400 = ((panda$core$String**) ((char*) $match$219_9395->$data + 0));
            value399 = *$tmp400;
            $tmp402 = value399;
            $returnValue401 = $tmp402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
            $tmp394 = 0;
            goto $l392;
            $l403:;
            return $returnValue401;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp405, false);
            if ($tmp405.value) goto $l406; else goto $l407;
            $l407:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s408, (panda$core$Int64) { 223 });
            abort();
            $l406:;
        }
        }
    }
    $tmp394 = -1;
    goto $l392;
    $l392:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
    switch ($tmp394) {
        case -1: goto $l409;
        case 0: goto $l403;
    }
    $l409:;
    abort();
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$core$Int64 $tmp410;
    panda$json$JSON* $match$229_9419 = NULL;
    panda$json$JSON* $tmp420;
    panda$core$Int64 $tmp421;
    panda$core$Bit value423;
    panda$core$Bit $returnValue425;
    panda$core$Bit $tmp428;
    panda$core$Int64$init$builtin_int64(&$tmp410, 3);
    panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp410);
    if ($tmp411.value) goto $l412; else goto $l413;
    $l413:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s414, (panda$core$Int64) { 228 }, &$s415);
    abort();
    $l412:;
    int $tmp418;
    {
        $tmp420 = self;
        $match$229_9419 = $tmp420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
        panda$core$Int64$init$builtin_int64(&$tmp421, 3);
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9419->$rawValue, $tmp421);
        if ($tmp422.value) {
        {
            panda$core$Bit* $tmp424 = ((panda$core$Bit*) ((char*) $match$229_9419->$data + 0));
            value423 = *$tmp424;
            $returnValue425 = value423;
            $tmp418 = 0;
            goto $l416;
            $l426:;
            return $returnValue425;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp428, false);
            if ($tmp428.value) goto $l429; else goto $l430;
            $l430:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s431, (panda$core$Int64) { 233 });
            abort();
            $l429:;
        }
        }
    }
    $tmp418 = -1;
    goto $l416;
    $l416:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
    switch ($tmp418) {
        case 0: goto $l426;
        case -1: goto $l432;
    }
    $l432:;
    abort();
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$core$Int64 $tmp433;
    panda$json$JSON* $match$239_9442 = NULL;
    panda$json$JSON* $tmp443;
    panda$core$Int64 $tmp444;
    panda$collections$ImmutableHashMap* value446 = NULL;
    panda$collections$MapView* $returnValue448;
    panda$collections$MapView* $tmp449;
    panda$core$Bit $tmp452;
    panda$core$Int64$init$builtin_int64(&$tmp433, 4);
    panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp433);
    if ($tmp434.value) goto $l435; else goto $l436;
    $l436:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s437, (panda$core$Int64) { 238 }, &$s438);
    abort();
    $l435:;
    int $tmp441;
    {
        $tmp443 = self;
        $match$239_9442 = $tmp443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$core$Int64$init$builtin_int64(&$tmp444, 4);
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9442->$rawValue, $tmp444);
        if ($tmp445.value) {
        {
            panda$collections$ImmutableHashMap** $tmp447 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9442->$data + 0));
            value446 = *$tmp447;
            $tmp449 = ((panda$collections$MapView*) value446);
            $returnValue448 = $tmp449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
            $tmp441 = 0;
            goto $l439;
            $l450:;
            return $returnValue448;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp452, false);
            if ($tmp452.value) goto $l453; else goto $l454;
            $l454:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s455, (panda$core$Int64) { 243 });
            abort();
            $l453:;
        }
        }
    }
    $tmp441 = -1;
    goto $l439;
    $l439:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
    switch ($tmp441) {
        case 0: goto $l450;
        case -1: goto $l456;
    }
    $l456:;
    abort();
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$core$Int64 $tmp457;
    panda$json$JSON* $match$249_9466 = NULL;
    panda$json$JSON* $tmp467;
    panda$core$Int64 $tmp468;
    panda$collections$ImmutableArray* value470 = NULL;
    panda$collections$ListView* $returnValue472;
    panda$collections$ListView* $tmp473;
    panda$core$Bit $tmp476;
    panda$core$Int64$init$builtin_int64(&$tmp457, 5);
    panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp457);
    if ($tmp458.value) goto $l459; else goto $l460;
    $l460:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s461, (panda$core$Int64) { 248 }, &$s462);
    abort();
    $l459:;
    int $tmp465;
    {
        $tmp467 = self;
        $match$249_9466 = $tmp467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
        panda$core$Int64$init$builtin_int64(&$tmp468, 5);
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9466->$rawValue, $tmp468);
        if ($tmp469.value) {
        {
            panda$collections$ImmutableArray** $tmp471 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9466->$data + 0));
            value470 = *$tmp471;
            $tmp473 = ((panda$collections$ListView*) value470);
            $returnValue472 = $tmp473;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
            $tmp465 = 0;
            goto $l463;
            $l474:;
            return $returnValue472;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp476, false);
            if ($tmp476.value) goto $l477; else goto $l478;
            $l478:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s479, (panda$core$Int64) { 253 });
            abort();
            $l477:;
        }
        }
    }
    $tmp465 = -1;
    goto $l463;
    $l463:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
    switch ($tmp465) {
        case -1: goto $l480;
        case 0: goto $l474;
    }
    $l480:;
    abort();
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9484 = NULL;
    panda$json$JSON* $tmp485;
    panda$core$Int64 $tmp486;
    panda$core$Int64 value488;
    panda$core$String* $returnValue490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$Int64 $tmp496;
    panda$core$Real64 value498;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    panda$core$Int64 $tmp505;
    panda$core$String* value507 = NULL;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$Int64 $tmp515;
    panda$core$Bit value517;
    panda$core$String* $tmp519;
    panda$core$String* $tmp520;
    panda$core$Int64 $tmp524;
    panda$collections$ImmutableHashMap* fields526 = NULL;
    panda$core$MutableString* result531 = NULL;
    panda$core$MutableString* $tmp532;
    panda$core$MutableString* $tmp533;
    panda$core$String* separator536 = NULL;
    panda$core$String* $tmp537;
    panda$collections$Iterator* Iter$271$17542 = NULL;
    panda$collections$Iterator* $tmp543;
    panda$collections$Iterator* $tmp544;
    panda$core$String* k557 = NULL;
    panda$core$String* $tmp558;
    panda$core$Object* $tmp559;
    panda$core$String* $tmp564;
    panda$core$String* $tmp565;
    panda$core$String* $tmp566;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    panda$core$String* $tmp573;
    panda$core$Object* $tmp582;
    panda$core$String* $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp593;
    panda$core$String* $tmp594;
    panda$core$Int64 $tmp600;
    panda$collections$ImmutableArray* nodes602 = NULL;
    panda$core$MutableString* result607 = NULL;
    panda$core$MutableString* $tmp608;
    panda$core$MutableString* $tmp609;
    panda$core$String* separator612 = NULL;
    panda$core$String* $tmp613;
    panda$collections$Iterator* Iter$280$17618 = NULL;
    panda$collections$Iterator* $tmp619;
    panda$collections$Iterator* $tmp620;
    panda$json$JSON* n636 = NULL;
    panda$json$JSON* $tmp637;
    panda$core$Object* $tmp638;
    panda$core$String* $tmp643;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$String* $tmp646;
    panda$core$String* $tmp653;
    panda$core$String* $tmp654;
    panda$core$Char8 $tmp658;
    panda$core$UInt8 $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$Int64 $tmp667;
    panda$core$String* $tmp669;
    panda$core$Bit $tmp673;
    int $tmp483;
    {
        $tmp485 = self;
        $match$259_9484 = $tmp485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Int64$init$builtin_int64(&$tmp486, 0);
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp486);
        if ($tmp487.value) {
        {
            panda$core$Int64* $tmp489 = ((panda$core$Int64*) ((char*) $match$259_9484->$data + 0));
            value488 = *$tmp489;
            panda$core$String* $tmp493 = panda$core$Int64$convert$R$panda$core$String(value488);
            $tmp492 = $tmp493;
            $tmp491 = $tmp492;
            $returnValue490 = $tmp491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
            $tmp483 = 0;
            goto $l481;
            $l494:;
            return $returnValue490;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp496, 1);
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp496);
        if ($tmp497.value) {
        {
            panda$core$Real64* $tmp499 = ((panda$core$Real64*) ((char*) $match$259_9484->$data + 0));
            value498 = *$tmp499;
            panda$core$String* $tmp502 = panda$core$Real64$convert$R$panda$core$String(value498);
            $tmp501 = $tmp502;
            $tmp500 = $tmp501;
            $returnValue490 = $tmp500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
            $tmp483 = 1;
            goto $l481;
            $l503:;
            return $returnValue490;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp505, 2);
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp505);
        if ($tmp506.value) {
        {
            panda$core$String** $tmp508 = ((panda$core$String**) ((char*) $match$259_9484->$data + 0));
            value507 = *$tmp508;
            panda$core$String* $tmp512 = panda$core$String$format$panda$core$String$R$panda$core$String(value507, &$s511);
            $tmp510 = $tmp512;
            $tmp509 = $tmp510;
            $returnValue490 = $tmp509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
            $tmp483 = 2;
            goto $l481;
            $l513:;
            return $returnValue490;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp515, 3);
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp515);
        if ($tmp516.value) {
        {
            panda$core$Bit* $tmp518 = ((panda$core$Bit*) ((char*) $match$259_9484->$data + 0));
            value517 = *$tmp518;
            panda$core$String* $tmp521 = panda$core$Bit$convert$R$panda$core$String(value517);
            $tmp520 = $tmp521;
            $tmp519 = $tmp520;
            $returnValue490 = $tmp519;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
            $tmp483 = 3;
            goto $l481;
            $l522:;
            return $returnValue490;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp524, 4);
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp524);
        if ($tmp525.value) {
        {
            panda$collections$ImmutableHashMap** $tmp527 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9484->$data + 0));
            fields526 = *$tmp527;
            int $tmp530;
            {
                panda$core$MutableString* $tmp534 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp534, &$s535);
                $tmp533 = $tmp534;
                $tmp532 = $tmp533;
                result531 = $tmp532;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
                $tmp537 = &$s538;
                separator536 = $tmp537;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
                {
                    int $tmp541;
                    {
                        panda$collections$Iterator* $tmp545 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields526);
                        $tmp544 = $tmp545;
                        $tmp543 = $tmp544;
                        Iter$271$17542 = $tmp543;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp543));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                        $l546:;
                        ITable* $tmp549 = Iter$271$17542->$class->itable;
                        while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp549 = $tmp549->next;
                        }
                        $fn551 $tmp550 = $tmp549->methods[0];
                        panda$core$Bit $tmp552 = $tmp550(Iter$271$17542);
                        panda$core$Bit $tmp553 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp552);
                        bool $tmp548 = $tmp553.value;
                        if (!$tmp548) goto $l547;
                        {
                            int $tmp556;
                            {
                                ITable* $tmp560 = Iter$271$17542->$class->itable;
                                while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp560 = $tmp560->next;
                                }
                                $fn562 $tmp561 = $tmp560->methods[1];
                                panda$core$Object* $tmp563 = $tmp561(Iter$271$17542);
                                $tmp559 = $tmp563;
                                $tmp558 = ((panda$core$String*) $tmp559);
                                k557 = $tmp558;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp558));
                                panda$core$Panda$unref$panda$core$Object($tmp559);
                                panda$core$String* $tmp570 = panda$core$String$convert$R$panda$core$String(separator536);
                                $tmp569 = $tmp570;
                                panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s571);
                                $tmp568 = $tmp572;
                                ITable* $tmp575 = ((panda$core$Formattable*) k557)->$class->itable;
                                while ($tmp575->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp575 = $tmp575->next;
                                }
                                $fn577 $tmp576 = $tmp575->methods[0];
                                panda$core$String* $tmp578 = $tmp576(((panda$core$Formattable*) k557), &$s574);
                                $tmp573 = $tmp578;
                                panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, $tmp573);
                                $tmp567 = $tmp579;
                                panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s580);
                                $tmp566 = $tmp581;
                                panda$core$Object* $tmp583 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields526, ((panda$collections$Key*) k557));
                                $tmp582 = $tmp583;
                                panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp566, ((panda$core$Object*) ((panda$json$JSON*) $tmp582)));
                                $tmp565 = $tmp584;
                                panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s585);
                                $tmp564 = $tmp586;
                                panda$core$MutableString$append$panda$core$String(result531, $tmp564);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                                panda$core$Panda$unref$panda$core$Object($tmp582);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                                {
                                    $tmp587 = separator536;
                                    $tmp588 = &$s589;
                                    separator536 = $tmp588;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                                }
                            }
                            $tmp556 = -1;
                            goto $l554;
                            $l554:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k557));
                            k557 = NULL;
                            switch ($tmp556) {
                                case -1: goto $l590;
                            }
                            $l590:;
                        }
                        goto $l546;
                        $l547:;
                    }
                    $tmp541 = -1;
                    goto $l539;
                    $l539:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17542));
                    Iter$271$17542 = NULL;
                    switch ($tmp541) {
                        case -1: goto $l591;
                    }
                    $l591:;
                }
                panda$core$MutableString$append$panda$core$String(result531, &$s592);
                panda$core$String* $tmp595 = panda$core$MutableString$finish$R$panda$core$String(result531);
                $tmp594 = $tmp595;
                $tmp593 = $tmp594;
                $returnValue490 = $tmp593;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                $tmp530 = 0;
                goto $l528;
                $l596:;
                $tmp483 = 4;
                goto $l481;
                $l597:;
                return $returnValue490;
            }
            $l528:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator536));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result531));
            result531 = NULL;
            separator536 = NULL;
            switch ($tmp530) {
                case 0: goto $l596;
            }
            $l599:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp600, 5);
        panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp600);
        if ($tmp601.value) {
        {
            panda$collections$ImmutableArray** $tmp603 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9484->$data + 0));
            nodes602 = *$tmp603;
            int $tmp606;
            {
                panda$core$MutableString* $tmp610 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp610, &$s611);
                $tmp609 = $tmp610;
                $tmp608 = $tmp609;
                result607 = $tmp608;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp608));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                $tmp613 = &$s614;
                separator612 = $tmp613;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                {
                    int $tmp617;
                    {
                        ITable* $tmp621 = ((panda$collections$Iterable*) nodes602)->$class->itable;
                        while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp621 = $tmp621->next;
                        }
                        $fn623 $tmp622 = $tmp621->methods[0];
                        panda$collections$Iterator* $tmp624 = $tmp622(((panda$collections$Iterable*) nodes602));
                        $tmp620 = $tmp624;
                        $tmp619 = $tmp620;
                        Iter$280$17618 = $tmp619;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                        $l625:;
                        ITable* $tmp628 = Iter$280$17618->$class->itable;
                        while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp628 = $tmp628->next;
                        }
                        $fn630 $tmp629 = $tmp628->methods[0];
                        panda$core$Bit $tmp631 = $tmp629(Iter$280$17618);
                        panda$core$Bit $tmp632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp631);
                        bool $tmp627 = $tmp632.value;
                        if (!$tmp627) goto $l626;
                        {
                            int $tmp635;
                            {
                                ITable* $tmp639 = Iter$280$17618->$class->itable;
                                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp639 = $tmp639->next;
                                }
                                $fn641 $tmp640 = $tmp639->methods[1];
                                panda$core$Object* $tmp642 = $tmp640(Iter$280$17618);
                                $tmp638 = $tmp642;
                                $tmp637 = ((panda$json$JSON*) $tmp638);
                                n636 = $tmp637;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
                                panda$core$Panda$unref$panda$core$Object($tmp638);
                                panda$core$String* $tmp647 = panda$core$String$convert$R$panda$core$String(separator612);
                                $tmp646 = $tmp647;
                                panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s648);
                                $tmp645 = $tmp649;
                                panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp645, ((panda$core$Object*) n636));
                                $tmp644 = $tmp650;
                                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s651);
                                $tmp643 = $tmp652;
                                panda$core$MutableString$append$panda$core$String(result607, $tmp643);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                                {
                                    $tmp653 = separator612;
                                    $tmp654 = &$s655;
                                    separator612 = $tmp654;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                                }
                            }
                            $tmp635 = -1;
                            goto $l633;
                            $l633:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n636));
                            n636 = NULL;
                            switch ($tmp635) {
                                case -1: goto $l656;
                            }
                            $l656:;
                        }
                        goto $l625;
                        $l626:;
                    }
                    $tmp617 = -1;
                    goto $l615;
                    $l615:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17618));
                    Iter$280$17618 = NULL;
                    switch ($tmp617) {
                        case -1: goto $l657;
                    }
                    $l657:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp659, 93);
                panda$core$Char8$init$panda$core$UInt8(&$tmp658, $tmp659);
                panda$core$MutableString$append$panda$core$Char8(result607, $tmp658);
                panda$core$String* $tmp662 = panda$core$MutableString$finish$R$panda$core$String(result607);
                $tmp661 = $tmp662;
                $tmp660 = $tmp661;
                $returnValue490 = $tmp660;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                $tmp606 = 0;
                goto $l604;
                $l663:;
                $tmp483 = 5;
                goto $l481;
                $l664:;
                return $returnValue490;
            }
            $l604:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result607));
            result607 = NULL;
            separator612 = NULL;
            switch ($tmp606) {
                case 0: goto $l663;
            }
            $l666:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp667, 6);
        panda$core$Bit $tmp668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9484->$rawValue, $tmp667);
        if ($tmp668.value) {
        {
            $tmp669 = &$s670;
            $returnValue490 = $tmp669;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
            $tmp483 = 6;
            goto $l481;
            $l671:;
            return $returnValue490;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp673, false);
            if ($tmp673.value) goto $l674; else goto $l675;
            $l675:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s676, (panda$core$Int64) { 289 });
            abort();
            $l674:;
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp483 = -1;
    goto $l481;
    $l481:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
    switch ($tmp483) {
        case 1: goto $l503;
        case 4: goto $l597;
        case 6: goto $l671;
        case 5: goto $l664;
        case 3: goto $l522;
        case 2: goto $l513;
        case -1: goto $l677;
        case 0: goto $l494;
    }
    $l677:;
    abort();
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1684 = NULL;
    panda$json$JSON* $tmp685;
    panda$core$Int64 $tmp686;
    panda$core$Int64 _f0688;
    panda$core$Int64 $tmp690;
    panda$core$Real64 _f0692;
    panda$core$Int64 $tmp694;
    panda$core$String* _f0696 = NULL;
    panda$core$Int64 $tmp698;
    panda$core$Bit _f0700;
    panda$core$Int64 $tmp702;
    panda$collections$ImmutableHashMap* _f0704 = NULL;
    panda$core$Int64 $tmp706;
    panda$collections$ImmutableArray* _f0708 = NULL;
    panda$core$Int64 $tmp710;
    int $tmp680;
    {
        int $tmp683;
        {
            $tmp685 = self;
            $match$5_1684 = $tmp685;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
            panda$core$Int64$init$builtin_int64(&$tmp686, 0);
            panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp686);
            if ($tmp687.value) {
            {
                panda$core$Int64* $tmp689 = ((panda$core$Int64*) ((char*) $match$5_1684->$data + 0));
                _f0688 = *$tmp689;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp690, 1);
            panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp690);
            if ($tmp691.value) {
            {
                panda$core$Real64* $tmp693 = ((panda$core$Real64*) ((char*) $match$5_1684->$data + 0));
                _f0692 = *$tmp693;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp694, 2);
            panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp694);
            if ($tmp695.value) {
            {
                panda$core$String** $tmp697 = ((panda$core$String**) ((char*) $match$5_1684->$data + 0));
                _f0696 = *$tmp697;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0696));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp698, 3);
            panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp698);
            if ($tmp699.value) {
            {
                panda$core$Bit* $tmp701 = ((panda$core$Bit*) ((char*) $match$5_1684->$data + 0));
                _f0700 = *$tmp701;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp702, 4);
            panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp702);
            if ($tmp703.value) {
            {
                panda$collections$ImmutableHashMap** $tmp705 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1684->$data + 0));
                _f0704 = *$tmp705;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0704));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp706, 5);
            panda$core$Bit $tmp707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp706);
            if ($tmp707.value) {
            {
                panda$collections$ImmutableArray** $tmp709 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1684->$data + 0));
                _f0708 = *$tmp709;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0708));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp710, 6);
            panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1684->$rawValue, $tmp710);
            if ($tmp711.value) {
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
        $tmp683 = -1;
        goto $l681;
        $l681:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
        switch ($tmp683) {
            case -1: goto $l712;
        }
        $l712:;
    }
    $tmp680 = -1;
    goto $l678;
    $l678:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp680) {
        case -1: goto $l713;
    }
    $l713:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp714 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp714 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp715 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp715 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp716;
    panda$core$String* $tmp719;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp717 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp716 = *$tmp717;
        panda$core$String** $tmp718 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp719 = p_f0;
        *$tmp718 = $tmp719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp720 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp720 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp721;
    panda$collections$ImmutableHashMap* $tmp724;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp722 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp721 = *$tmp722;
        panda$collections$ImmutableHashMap** $tmp723 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp724 = p_f0;
        *$tmp723 = $tmp724;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp721));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp725;
    panda$collections$ImmutableArray* $tmp728;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp726 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp725 = *$tmp726;
        panda$collections$ImmutableArray** $tmp727 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp728 = p_f0;
        *$tmp727 = $tmp728;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

