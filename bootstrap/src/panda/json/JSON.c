#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Equatable.h"
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
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$convert$R$panda$core$String, panda$json$JSON$cleanup, panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q, panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q, panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q, panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q, panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q, panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q, panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q, panda$json$JSON$asInt$R$panda$core$Int64, panda$json$JSON$asReal$R$panda$core$Real64, panda$json$JSON$asString$R$panda$core$String, panda$json$JSON$asBit$R$panda$core$Bit, panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT, panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT} };

typedef panda$core$Bit (*$fn33)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn96)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$json$JSON* (*$fn183)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn211)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn239)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn267)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn298)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn329)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn565)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn576)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn591)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn637)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 74, 5172637184330274798, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 76, 3649344319728702780, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 78, -1718795988612819328, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, 737367192177042396, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 122, 7181716504558141706, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 103, 977195741375129716, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$53_92;
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
    panda$core$Equatable* $tmp27;
    panda$core$Equatable* $tmp29;
    panda$json$JSON$PathKey* $returnValue36;
    panda$json$JSON$PathKey* $tmp37;
    panda$json$JSON$PathKey* $tmp39;
    panda$json$JSON$PathKey* $tmp40;
    panda$core$Int64 $tmp42;
    panda$core$String* $tmp43;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp44;
    panda$core$Bit $tmp45;
    panda$core$Char32 $tmp48;
    panda$core$Int32 $tmp49;
    panda$core$String$Index indexStart51;
    panda$core$String$Index index53;
    panda$core$Char32 $tmp58;
    panda$core$Int32 $tmp59;
    panda$core$Int64$nullable parsed62;
    panda$core$String* $tmp63;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp64;
    panda$core$Bit $tmp65;
    panda$json$JSON$PathKey* $tmp68;
    panda$json$JSON$PathKey* $tmp70;
    panda$json$JSON$PathKey* $tmp71;
    panda$core$Int64 $tmp73;
    panda$json$JSON$PathKey* $tmp76;
    {
        panda$core$Char32 $tmp3 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, p_start);
        $match$53_92 = $tmp3;
        panda$core$Int32$init$builtin_int32(&$tmp5, 47);
        panda$core$Char32$init$panda$core$Int32(&$tmp4, $tmp5);
        panda$core$Bit $tmp6 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$53_92, $tmp4);
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
            panda$core$String$Index$wrapper* $tmp28;
            $tmp28 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp28->value = index11;
            $tmp27 = ((panda$core$Equatable*) $tmp28);
            panda$core$String$Index$wrapper* $tmp30;
            $tmp30 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp30->value = end7;
            $tmp29 = ((panda$core$Equatable*) $tmp30);
            ITable* $tmp31 = $tmp27->$class->itable;
            while ($tmp31->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp31 = $tmp31->next;
            }
            $fn33 $tmp32 = $tmp31->methods[1];
            panda$core$Bit $tmp34 = $tmp32($tmp27, $tmp29);
            bool $tmp26 = $tmp34.value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
            if ($tmp26) goto $l12;
            $l13:;
            panda$core$Bit $tmp35 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(fieldStart9, index11);
            if ($tmp35.value) {
            {
                $tmp37 = NULL;
                $returnValue36 = $tmp37;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
                return $returnValue36;
            }
            }
            panda$json$JSON$PathKey* $tmp41 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Int64$init$builtin_int64(&$tmp42, 0);
            panda$core$Bit$init$builtin_bit(&$tmp45, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp44, fieldStart9, index11, $tmp45);
            panda$core$String* $tmp46 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp44);
            $tmp43 = $tmp46;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp41, $tmp42, $tmp43, index11);
            $tmp40 = $tmp41;
            $tmp39 = $tmp40;
            $returnValue36 = $tmp39;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
            return $returnValue36;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp49, 91);
        panda$core$Char32$init$panda$core$Int32(&$tmp48, $tmp49);
        panda$core$Bit $tmp50 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$53_92, $tmp48);
        if ($tmp50.value) {
        {
            panda$core$String$Index $tmp52 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart51 = $tmp52;
            index53 = indexStart51;
            $l54:;
            panda$core$Char32 $tmp57 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index53);
            panda$core$Int32$init$builtin_int32(&$tmp59, 93);
            panda$core$Char32$init$panda$core$Int32(&$tmp58, $tmp59);
            panda$core$Bit $tmp60 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp57, $tmp58);
            bool $tmp56 = $tmp60.value;
            if (!$tmp56) goto $l55;
            {
                panda$core$String$Index $tmp61 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index53);
                index53 = $tmp61;
            }
            goto $l54;
            $l55:;
            panda$core$Bit$init$builtin_bit(&$tmp65, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp64, indexStart51, index53, $tmp65);
            panda$core$String* $tmp66 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp64);
            $tmp63 = $tmp66;
            panda$core$Int64$nullable $tmp67 = panda$core$String$convert$R$panda$core$Int64$Q($tmp63);
            parsed62 = $tmp67;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
            if (((panda$core$Bit) { !parsed62.nonnull }).value) {
            {
                $tmp68 = NULL;
                $returnValue36 = $tmp68;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                return $returnValue36;
            }
            }
            panda$json$JSON$PathKey* $tmp72 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Int64$init$builtin_int64(&$tmp73, 1);
            panda$core$String$Index $tmp74 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index53);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp72, $tmp73, ((panda$core$Int64) parsed62.value), $tmp74);
            $tmp71 = $tmp72;
            $tmp70 = $tmp71;
            $returnValue36 = $tmp70;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
            return $returnValue36;
        }
        }
        else {
        {
            $tmp76 = NULL;
            $returnValue36 = $tmp76;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
            return $returnValue36;
        }
        }
        }
    }
    abort();
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index81;
    panda$core$String$Index end83;
    panda$json$JSON* current85 = NULL;
    panda$json$JSON* $tmp86;
    panda$core$Equatable* $tmp90;
    panda$core$Equatable* $tmp92;
    panda$json$JSON$PathKey* $tmp98;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$json$JSON$PathKey* $match$106_13112 = NULL;
    panda$json$JSON$PathKey* $tmp113;
    panda$json$JSON$PathKey* $tmp114;
    panda$core$Int64 $tmp116;
    panda$core$String* field118 = NULL;
    panda$core$String$Index next120;
    panda$json$JSON* $match$108_21125 = NULL;
    panda$json$JSON* $tmp126;
    panda$core$Int64 $tmp127;
    panda$collections$ImmutableHashMap* fields129 = NULL;
    panda$json$JSON* $tmp131;
    panda$json$JSON* $tmp132;
    panda$core$Object* $tmp133;
    panda$json$JSON* $returnValue135;
    panda$json$JSON* $tmp136;
    panda$json$JSON* $tmp141;
    panda$core$Int64 $tmp147;
    panda$core$Int64 key149;
    panda$core$String$Index next151;
    panda$json$JSON* $match$119_21156 = NULL;
    panda$json$JSON* $tmp157;
    panda$core$Int64 $tmp158;
    panda$collections$ImmutableArray* nodes160 = NULL;
    panda$json$JSON* $tmp162;
    panda$json$JSON* $tmp163;
    panda$core$Object* $tmp164;
    panda$json$JSON* $tmp166;
    panda$json$JSON* $tmp173;
    int $tmp80;
    {
        panda$core$String$Index $tmp82 = panda$core$String$start$R$panda$core$String$Index(p_path);
        index81 = $tmp82;
        panda$core$String$Index $tmp84 = panda$core$String$end$R$panda$core$String$Index(p_path);
        end83 = $tmp84;
        $tmp86 = self;
        current85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        $l87:;
        panda$core$String$Index$wrapper* $tmp91;
        $tmp91 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp91->value = index81;
        $tmp90 = ((panda$core$Equatable*) $tmp91);
        panda$core$String$Index$wrapper* $tmp93;
        $tmp93 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp93->value = end83;
        $tmp92 = ((panda$core$Equatable*) $tmp93);
        ITable* $tmp94 = $tmp90->$class->itable;
        while ($tmp94->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp94 = $tmp94->next;
        }
        $fn96 $tmp95 = $tmp94->methods[1];
        panda$core$Bit $tmp97 = $tmp95($tmp90, $tmp92);
        bool $tmp89 = $tmp97.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
        if (!$tmp89) goto $l88;
        {
            panda$json$JSON$PathKey* $tmp99 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index81);
            $tmp98 = $tmp99;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
            if (((panda$core$Bit) { $tmp98 != NULL }).value) goto $l100; else goto $l101;
            $l101:;
            panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s105, p_path);
            $tmp104 = $tmp106;
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s107);
            $tmp103 = $tmp108;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s102, (panda$core$Int64) { 105 }, $tmp103);
            abort();
            $l100:;
            int $tmp111;
            {
                panda$json$JSON$PathKey* $tmp115 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index81);
                $tmp114 = $tmp115;
                $tmp113 = $tmp114;
                $match$106_13112 = $tmp113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                panda$core$Int64$init$builtin_int64(&$tmp116, 0);
                panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_13112->$rawValue, $tmp116);
                if ($tmp117.value) {
                {
                    panda$core$String** $tmp119 = ((panda$core$String**) ((char*) $match$106_13112->$data + 0));
                    field118 = *$tmp119;
                    panda$core$String$Index* $tmp121 = ((panda$core$String$Index*) ((char*) $match$106_13112->$data + 8));
                    next120 = *$tmp121;
                    int $tmp124;
                    {
                        $tmp126 = current85;
                        $match$108_21125 = $tmp126;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                        panda$core$Int64$init$builtin_int64(&$tmp127, 4);
                        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_21125->$rawValue, $tmp127);
                        if ($tmp128.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp130 = ((panda$collections$ImmutableHashMap**) ((char*) $match$108_21125->$data + 0));
                            fields129 = *$tmp130;
                            {
                                $tmp131 = current85;
                                panda$core$Object* $tmp134 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields129, ((panda$collections$Key*) field118));
                                $tmp133 = $tmp134;
                                $tmp132 = ((panda$json$JSON*) $tmp133);
                                current85 = $tmp132;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
                                panda$core$Panda$unref$panda$core$Object($tmp133);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                            }
                            if (((panda$core$Bit) { current85 == NULL }).value) {
                            {
                                $tmp136 = NULL;
                                $returnValue135 = $tmp136;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                                $tmp124 = 0;
                                goto $l122;
                                $l137:;
                                $tmp111 = 0;
                                goto $l109;
                                $l138:;
                                $tmp80 = 0;
                                goto $l78;
                                $l139:;
                                return $returnValue135;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp141 = NULL;
                            $returnValue135 = $tmp141;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
                            $tmp124 = 1;
                            goto $l122;
                            $l142:;
                            $tmp111 = 1;
                            goto $l109;
                            $l143:;
                            $tmp80 = 1;
                            goto $l78;
                            $l144:;
                            return $returnValue135;
                        }
                        }
                    }
                    $tmp124 = -1;
                    goto $l122;
                    $l122:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                    switch ($tmp124) {
                        case 0: goto $l137;
                        case 1: goto $l142;
                        case -1: goto $l146;
                    }
                    $l146:;
                    index81 = next120;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp147, 1);
                panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_13112->$rawValue, $tmp147);
                if ($tmp148.value) {
                {
                    panda$core$Int64* $tmp150 = ((panda$core$Int64*) ((char*) $match$106_13112->$data + 0));
                    key149 = *$tmp150;
                    panda$core$String$Index* $tmp152 = ((panda$core$String$Index*) ((char*) $match$106_13112->$data + 8));
                    next151 = *$tmp152;
                    int $tmp155;
                    {
                        $tmp157 = current85;
                        $match$119_21156 = $tmp157;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
                        panda$core$Int64$init$builtin_int64(&$tmp158, 5);
                        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_21156->$rawValue, $tmp158);
                        if ($tmp159.value) {
                        {
                            panda$collections$ImmutableArray** $tmp161 = ((panda$collections$ImmutableArray**) ((char*) $match$119_21156->$data + 0));
                            nodes160 = *$tmp161;
                            {
                                $tmp162 = current85;
                                panda$core$Object* $tmp165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes160, key149);
                                $tmp164 = $tmp165;
                                $tmp163 = ((panda$json$JSON*) $tmp164);
                                current85 = $tmp163;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
                                panda$core$Panda$unref$panda$core$Object($tmp164);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                            }
                        }
                        }
                        else {
                        {
                            $tmp166 = NULL;
                            $returnValue135 = $tmp166;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                            $tmp155 = 0;
                            goto $l153;
                            $l167:;
                            $tmp111 = 2;
                            goto $l109;
                            $l168:;
                            $tmp80 = 2;
                            goto $l78;
                            $l169:;
                            return $returnValue135;
                        }
                        }
                    }
                    $tmp155 = -1;
                    goto $l153;
                    $l153:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
                    switch ($tmp155) {
                        case 0: goto $l167;
                        case -1: goto $l171;
                    }
                    $l171:;
                    index81 = next151;
                }
                }
                }
            }
            $tmp111 = -1;
            goto $l109;
            $l109:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
            switch ($tmp111) {
                case -1: goto $l172;
                case 0: goto $l138;
                case 2: goto $l168;
                case 1: goto $l143;
            }
            $l172:;
        }
        goto $l87;
        $l88:;
        $tmp173 = current85;
        $returnValue135 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        $tmp80 = 3;
        goto $l78;
        $l174:;
        return $returnValue135;
    }
    $l78:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current85));
    current85 = NULL;
    switch ($tmp80) {
        case 3: goto $l174;
        case 0: goto $l139;
        case 2: goto $l169;
        case 1: goto $l144;
    }
    $l176:;
    abort();
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result180 = NULL;
    panda$json$JSON* $tmp181;
    panda$json$JSON* $tmp182;
    panda$core$Int64$nullable $returnValue185;
    panda$json$JSON* $match$139_9191 = NULL;
    panda$json$JSON* $tmp192;
    panda$core$Int64 $tmp193;
    panda$core$Int64 value195;
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
            $returnValue185 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp179 = 0;
            goto $l177;
            $l186:;
            return $returnValue185;
        }
        }
        int $tmp190;
        {
            $tmp192 = result180;
            $match$139_9191 = $tmp192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
            panda$core$Int64$init$builtin_int64(&$tmp193, 0);
            panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9191->$rawValue, $tmp193);
            if ($tmp194.value) {
            {
                panda$core$Int64* $tmp196 = ((panda$core$Int64*) ((char*) $match$139_9191->$data + 0));
                value195 = *$tmp196;
                $returnValue185 = ((panda$core$Int64$nullable) { value195, true });
                $tmp190 = 0;
                goto $l188;
                $l197:;
                $tmp179 = 1;
                goto $l177;
                $l198:;
                return $returnValue185;
            }
            }
            else {
            {
                $returnValue185 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp190 = 1;
                goto $l188;
                $l200:;
                $tmp179 = 2;
                goto $l177;
                $l201:;
                return $returnValue185;
            }
            }
        }
        $tmp190 = -1;
        goto $l188;
        $l188:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
        switch ($tmp190) {
            case -1: goto $l203;
            case 0: goto $l197;
            case 1: goto $l200;
        }
        $l203:;
    }
    $tmp179 = -1;
    goto $l177;
    $l177:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result180));
    result180 = NULL;
    switch ($tmp179) {
        case -1: goto $l204;
        case 1: goto $l198;
        case 0: goto $l186;
        case 2: goto $l201;
    }
    $l204:;
    abort();
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result208 = NULL;
    panda$json$JSON* $tmp209;
    panda$json$JSON* $tmp210;
    panda$core$Real64$nullable $returnValue213;
    panda$json$JSON* $match$155_9219 = NULL;
    panda$json$JSON* $tmp220;
    panda$core$Int64 $tmp221;
    panda$core$Real64 value223;
    int $tmp207;
    {
        panda$json$JSON* $tmp212 = (($fn211) self->$class->vtable[2])(self, p_path);
        $tmp210 = $tmp212;
        $tmp209 = $tmp210;
        result208 = $tmp209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
        if (((panda$core$Bit) { result208 == NULL }).value) {
        {
            $returnValue213 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp207 = 0;
            goto $l205;
            $l214:;
            return $returnValue213;
        }
        }
        int $tmp218;
        {
            $tmp220 = result208;
            $match$155_9219 = $tmp220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
            panda$core$Int64$init$builtin_int64(&$tmp221, 1);
            panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_9219->$rawValue, $tmp221);
            if ($tmp222.value) {
            {
                panda$core$Real64* $tmp224 = ((panda$core$Real64*) ((char*) $match$155_9219->$data + 0));
                value223 = *$tmp224;
                $returnValue213 = ((panda$core$Real64$nullable) { value223, true });
                $tmp218 = 0;
                goto $l216;
                $l225:;
                $tmp207 = 1;
                goto $l205;
                $l226:;
                return $returnValue213;
            }
            }
            else {
            {
                $returnValue213 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp218 = 1;
                goto $l216;
                $l228:;
                $tmp207 = 2;
                goto $l205;
                $l229:;
                return $returnValue213;
            }
            }
        }
        $tmp218 = -1;
        goto $l216;
        $l216:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
        switch ($tmp218) {
            case 1: goto $l228;
            case -1: goto $l231;
            case 0: goto $l225;
        }
        $l231:;
    }
    $tmp207 = -1;
    goto $l205;
    $l205:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result208));
    result208 = NULL;
    switch ($tmp207) {
        case 1: goto $l226;
        case -1: goto $l232;
        case 2: goto $l229;
        case 0: goto $l214;
    }
    $l232:;
    abort();
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result236 = NULL;
    panda$json$JSON* $tmp237;
    panda$json$JSON* $tmp238;
    panda$core$Bit$nullable $returnValue241;
    panda$json$JSON* $match$171_9247 = NULL;
    panda$json$JSON* $tmp248;
    panda$core$Int64 $tmp249;
    panda$core$Bit value251;
    int $tmp235;
    {
        panda$json$JSON* $tmp240 = (($fn239) self->$class->vtable[2])(self, p_path);
        $tmp238 = $tmp240;
        $tmp237 = $tmp238;
        result236 = $tmp237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
        if (((panda$core$Bit) { result236 == NULL }).value) {
        {
            $returnValue241 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp235 = 0;
            goto $l233;
            $l242:;
            return $returnValue241;
        }
        }
        int $tmp246;
        {
            $tmp248 = result236;
            $match$171_9247 = $tmp248;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
            panda$core$Int64$init$builtin_int64(&$tmp249, 3);
            panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$171_9247->$rawValue, $tmp249);
            if ($tmp250.value) {
            {
                panda$core$Bit* $tmp252 = ((panda$core$Bit*) ((char*) $match$171_9247->$data + 0));
                value251 = *$tmp252;
                $returnValue241 = ((panda$core$Bit$nullable) { value251, true });
                $tmp246 = 0;
                goto $l244;
                $l253:;
                $tmp235 = 1;
                goto $l233;
                $l254:;
                return $returnValue241;
            }
            }
            else {
            {
                $returnValue241 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp246 = 1;
                goto $l244;
                $l256:;
                $tmp235 = 2;
                goto $l233;
                $l257:;
                return $returnValue241;
            }
            }
        }
        $tmp246 = -1;
        goto $l244;
        $l244:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
        switch ($tmp246) {
            case 1: goto $l256;
            case -1: goto $l259;
            case 0: goto $l253;
        }
        $l259:;
    }
    $tmp235 = -1;
    goto $l233;
    $l233:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result236));
    result236 = NULL;
    switch ($tmp235) {
        case 2: goto $l257;
        case 1: goto $l254;
        case -1: goto $l260;
        case 0: goto $l242;
    }
    $l260:;
    abort();
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result264 = NULL;
    panda$json$JSON* $tmp265;
    panda$json$JSON* $tmp266;
    panda$core$String* $returnValue269;
    panda$core$String* $tmp270;
    panda$json$JSON* $match$187_9276 = NULL;
    panda$json$JSON* $tmp277;
    panda$core$Int64 $tmp278;
    panda$core$String* value280 = NULL;
    panda$core$String* $tmp282;
    panda$core$String* $tmp286;
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
            $match$187_9276 = $tmp277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
            panda$core$Int64$init$builtin_int64(&$tmp278, 2);
            panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_9276->$rawValue, $tmp278);
            if ($tmp279.value) {
            {
                panda$core$String** $tmp281 = ((panda$core$String**) ((char*) $match$187_9276->$data + 0));
                value280 = *$tmp281;
                $tmp282 = value280;
                $returnValue269 = $tmp282;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
                $tmp275 = 0;
                goto $l273;
                $l283:;
                $tmp263 = 1;
                goto $l261;
                $l284:;
                return $returnValue269;
            }
            }
            else {
            {
                $tmp286 = NULL;
                $returnValue269 = $tmp286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                $tmp275 = 1;
                goto $l273;
                $l287:;
                $tmp263 = 2;
                goto $l261;
                $l288:;
                return $returnValue269;
            }
            }
        }
        $tmp275 = -1;
        goto $l273;
        $l273:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
        switch ($tmp275) {
            case -1: goto $l290;
            case 1: goto $l287;
            case 0: goto $l283;
        }
        $l290:;
    }
    $tmp263 = -1;
    goto $l261;
    $l261:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result264));
    result264 = NULL;
    switch ($tmp263) {
        case 2: goto $l288;
        case 1: goto $l284;
        case -1: goto $l291;
        case 0: goto $l271;
    }
    $l291:;
    abort();
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result295 = NULL;
    panda$json$JSON* $tmp296;
    panda$json$JSON* $tmp297;
    panda$collections$ListView* $returnValue300;
    panda$collections$ListView* $tmp301;
    panda$json$JSON* $match$203_9307 = NULL;
    panda$json$JSON* $tmp308;
    panda$core$Int64 $tmp309;
    panda$collections$ImmutableArray* value311 = NULL;
    panda$collections$ListView* $tmp313;
    panda$collections$ListView* $tmp317;
    int $tmp294;
    {
        panda$json$JSON* $tmp299 = (($fn298) self->$class->vtable[2])(self, p_path);
        $tmp297 = $tmp299;
        $tmp296 = $tmp297;
        result295 = $tmp296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
        if (((panda$core$Bit) { result295 == NULL }).value) {
        {
            $tmp301 = NULL;
            $returnValue300 = $tmp301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
            $tmp294 = 0;
            goto $l292;
            $l302:;
            return $returnValue300;
        }
        }
        int $tmp306;
        {
            $tmp308 = result295;
            $match$203_9307 = $tmp308;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
            panda$core$Int64$init$builtin_int64(&$tmp309, 5);
            panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_9307->$rawValue, $tmp309);
            if ($tmp310.value) {
            {
                panda$collections$ImmutableArray** $tmp312 = ((panda$collections$ImmutableArray**) ((char*) $match$203_9307->$data + 0));
                value311 = *$tmp312;
                $tmp313 = ((panda$collections$ListView*) value311);
                $returnValue300 = $tmp313;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
                $tmp306 = 0;
                goto $l304;
                $l314:;
                $tmp294 = 1;
                goto $l292;
                $l315:;
                return $returnValue300;
            }
            }
            else {
            {
                $tmp317 = NULL;
                $returnValue300 = $tmp317;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                $tmp306 = 1;
                goto $l304;
                $l318:;
                $tmp294 = 2;
                goto $l292;
                $l319:;
                return $returnValue300;
            }
            }
        }
        $tmp306 = -1;
        goto $l304;
        $l304:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
        switch ($tmp306) {
            case 1: goto $l318;
            case -1: goto $l321;
            case 0: goto $l314;
        }
        $l321:;
    }
    $tmp294 = -1;
    goto $l292;
    $l292:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result295));
    result295 = NULL;
    switch ($tmp294) {
        case 1: goto $l315;
        case 2: goto $l319;
        case -1: goto $l322;
        case 0: goto $l302;
    }
    $l322:;
    abort();
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result326 = NULL;
    panda$json$JSON* $tmp327;
    panda$json$JSON* $tmp328;
    panda$collections$MapView* $returnValue331;
    panda$collections$MapView* $tmp332;
    panda$json$JSON* $match$219_9338 = NULL;
    panda$json$JSON* $tmp339;
    panda$core$Int64 $tmp340;
    panda$collections$ImmutableHashMap* value342 = NULL;
    panda$collections$MapView* $tmp344;
    panda$collections$MapView* $tmp348;
    int $tmp325;
    {
        panda$json$JSON* $tmp330 = (($fn329) self->$class->vtable[2])(self, p_path);
        $tmp328 = $tmp330;
        $tmp327 = $tmp328;
        result326 = $tmp327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
        if (((panda$core$Bit) { result326 == NULL }).value) {
        {
            $tmp332 = NULL;
            $returnValue331 = $tmp332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
            $tmp325 = 0;
            goto $l323;
            $l333:;
            return $returnValue331;
        }
        }
        int $tmp337;
        {
            $tmp339 = result326;
            $match$219_9338 = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Int64$init$builtin_int64(&$tmp340, 4);
            panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9338->$rawValue, $tmp340);
            if ($tmp341.value) {
            {
                panda$collections$ImmutableHashMap** $tmp343 = ((panda$collections$ImmutableHashMap**) ((char*) $match$219_9338->$data + 0));
                value342 = *$tmp343;
                $tmp344 = ((panda$collections$MapView*) value342);
                $returnValue331 = $tmp344;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
                $tmp337 = 0;
                goto $l335;
                $l345:;
                $tmp325 = 1;
                goto $l323;
                $l346:;
                return $returnValue331;
            }
            }
            else {
            {
                $tmp348 = NULL;
                $returnValue331 = $tmp348;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
                $tmp337 = 1;
                goto $l335;
                $l349:;
                $tmp325 = 2;
                goto $l323;
                $l350:;
                return $returnValue331;
            }
            }
        }
        $tmp337 = -1;
        goto $l335;
        $l335:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
        switch ($tmp337) {
            case 1: goto $l349;
            case 0: goto $l345;
            case -1: goto $l352;
        }
        $l352:;
    }
    $tmp325 = -1;
    goto $l323;
    $l323:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result326));
    result326 = NULL;
    switch ($tmp325) {
        case 1: goto $l346;
        case 2: goto $l350;
        case -1: goto $l353;
        case 0: goto $l333;
    }
    $l353:;
    abort();
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$core$Int64 $tmp354;
    panda$json$JSON* $match$232_9363 = NULL;
    panda$json$JSON* $tmp364;
    panda$core$Int64 $tmp365;
    panda$core$Int64 value367;
    panda$core$Int64 $returnValue369;
    panda$core$Bit $tmp372;
    panda$core$Int64$init$builtin_int64(&$tmp354, 0);
    panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp354);
    if ($tmp355.value) goto $l356; else goto $l357;
    $l357:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s358, (panda$core$Int64) { 231 }, &$s359);
    abort();
    $l356:;
    int $tmp362;
    {
        $tmp364 = self;
        $match$232_9363 = $tmp364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
        panda$core$Int64$init$builtin_int64(&$tmp365, 0);
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$232_9363->$rawValue, $tmp365);
        if ($tmp366.value) {
        {
            panda$core$Int64* $tmp368 = ((panda$core$Int64*) ((char*) $match$232_9363->$data + 0));
            value367 = *$tmp368;
            $returnValue369 = value367;
            $tmp362 = 0;
            goto $l360;
            $l370:;
            return $returnValue369;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp372, false);
            if ($tmp372.value) goto $l373; else goto $l374;
            $l374:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s375, (panda$core$Int64) { 236 });
            abort();
            $l373:;
        }
        }
    }
    $tmp362 = -1;
    goto $l360;
    $l360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
    switch ($tmp362) {
        case 0: goto $l370;
        case -1: goto $l376;
    }
    $l376:;
    abort();
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$core$Int64 $tmp377;
    panda$json$JSON* $match$245_9386 = NULL;
    panda$json$JSON* $tmp387;
    panda$core$Int64 $tmp388;
    panda$core$Real64 value390;
    panda$core$Real64 $returnValue392;
    panda$core$Bit $tmp395;
    panda$core$Int64$init$builtin_int64(&$tmp377, 1);
    panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp377);
    if ($tmp378.value) goto $l379; else goto $l380;
    $l380:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s381, (panda$core$Int64) { 244 }, &$s382);
    abort();
    $l379:;
    int $tmp385;
    {
        $tmp387 = self;
        $match$245_9386 = $tmp387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$core$Int64$init$builtin_int64(&$tmp388, 1);
        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$245_9386->$rawValue, $tmp388);
        if ($tmp389.value) {
        {
            panda$core$Real64* $tmp391 = ((panda$core$Real64*) ((char*) $match$245_9386->$data + 0));
            value390 = *$tmp391;
            $returnValue392 = value390;
            $tmp385 = 0;
            goto $l383;
            $l393:;
            return $returnValue392;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp395, false);
            if ($tmp395.value) goto $l396; else goto $l397;
            $l397:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s398, (panda$core$Int64) { 249 });
            abort();
            $l396:;
        }
        }
    }
    $tmp385 = -1;
    goto $l383;
    $l383:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
    switch ($tmp385) {
        case 0: goto $l393;
        case -1: goto $l399;
    }
    $l399:;
    abort();
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$core$Int64 $tmp400;
    panda$json$JSON* $match$258_9409 = NULL;
    panda$json$JSON* $tmp410;
    panda$core$Int64 $tmp411;
    panda$core$String* value413 = NULL;
    panda$core$String* $returnValue415;
    panda$core$String* $tmp416;
    panda$core$Bit $tmp419;
    panda$core$Int64$init$builtin_int64(&$tmp400, 2);
    panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp400);
    if ($tmp401.value) goto $l402; else goto $l403;
    $l403:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s404, (panda$core$Int64) { 257 }, &$s405);
    abort();
    $l402:;
    int $tmp408;
    {
        $tmp410 = self;
        $match$258_9409 = $tmp410;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
        panda$core$Int64$init$builtin_int64(&$tmp411, 2);
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$258_9409->$rawValue, $tmp411);
        if ($tmp412.value) {
        {
            panda$core$String** $tmp414 = ((panda$core$String**) ((char*) $match$258_9409->$data + 0));
            value413 = *$tmp414;
            $tmp416 = value413;
            $returnValue415 = $tmp416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
            $tmp408 = 0;
            goto $l406;
            $l417:;
            return $returnValue415;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp419, false);
            if ($tmp419.value) goto $l420; else goto $l421;
            $l421:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s422, (panda$core$Int64) { 262 });
            abort();
            $l420:;
        }
        }
    }
    $tmp408 = -1;
    goto $l406;
    $l406:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
    switch ($tmp408) {
        case 0: goto $l417;
        case -1: goto $l423;
    }
    $l423:;
    abort();
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$core$Int64 $tmp424;
    panda$json$JSON* $match$271_9433 = NULL;
    panda$json$JSON* $tmp434;
    panda$core$Int64 $tmp435;
    panda$core$Bit value437;
    panda$core$Bit $returnValue439;
    panda$core$Bit $tmp442;
    panda$core$Int64$init$builtin_int64(&$tmp424, 3);
    panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp424);
    if ($tmp425.value) goto $l426; else goto $l427;
    $l427:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s428, (panda$core$Int64) { 270 }, &$s429);
    abort();
    $l426:;
    int $tmp432;
    {
        $tmp434 = self;
        $match$271_9433 = $tmp434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
        panda$core$Int64$init$builtin_int64(&$tmp435, 3);
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$271_9433->$rawValue, $tmp435);
        if ($tmp436.value) {
        {
            panda$core$Bit* $tmp438 = ((panda$core$Bit*) ((char*) $match$271_9433->$data + 0));
            value437 = *$tmp438;
            $returnValue439 = value437;
            $tmp432 = 0;
            goto $l430;
            $l440:;
            return $returnValue439;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp442, false);
            if ($tmp442.value) goto $l443; else goto $l444;
            $l444:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s445, (panda$core$Int64) { 275 });
            abort();
            $l443:;
        }
        }
    }
    $tmp432 = -1;
    goto $l430;
    $l430:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
    switch ($tmp432) {
        case -1: goto $l446;
        case 0: goto $l440;
    }
    $l446:;
    abort();
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$core$Int64 $tmp447;
    panda$json$JSON* $match$284_9456 = NULL;
    panda$json$JSON* $tmp457;
    panda$core$Int64 $tmp458;
    panda$collections$ImmutableHashMap* value460 = NULL;
    panda$collections$MapView* $returnValue462;
    panda$collections$MapView* $tmp463;
    panda$core$Bit $tmp466;
    panda$core$Int64$init$builtin_int64(&$tmp447, 4);
    panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp447);
    if ($tmp448.value) goto $l449; else goto $l450;
    $l450:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s451, (panda$core$Int64) { 283 }, &$s452);
    abort();
    $l449:;
    int $tmp455;
    {
        $tmp457 = self;
        $match$284_9456 = $tmp457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
        panda$core$Int64$init$builtin_int64(&$tmp458, 4);
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$284_9456->$rawValue, $tmp458);
        if ($tmp459.value) {
        {
            panda$collections$ImmutableHashMap** $tmp461 = ((panda$collections$ImmutableHashMap**) ((char*) $match$284_9456->$data + 0));
            value460 = *$tmp461;
            $tmp463 = ((panda$collections$MapView*) value460);
            $returnValue462 = $tmp463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
            $tmp455 = 0;
            goto $l453;
            $l464:;
            return $returnValue462;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp466, false);
            if ($tmp466.value) goto $l467; else goto $l468;
            $l468:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s469, (panda$core$Int64) { 288 });
            abort();
            $l467:;
        }
        }
    }
    $tmp455 = -1;
    goto $l453;
    $l453:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
    switch ($tmp455) {
        case 0: goto $l464;
        case -1: goto $l470;
    }
    $l470:;
    abort();
}
panda$collections$ListView* panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$core$Int64 $tmp471;
    panda$json$JSON* $match$297_9480 = NULL;
    panda$json$JSON* $tmp481;
    panda$core$Int64 $tmp482;
    panda$collections$ImmutableArray* value484 = NULL;
    panda$collections$ListView* $returnValue486;
    panda$collections$ListView* $tmp487;
    panda$core$Bit $tmp490;
    panda$core$Int64$init$builtin_int64(&$tmp471, 5);
    panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp471);
    if ($tmp472.value) goto $l473; else goto $l474;
    $l474:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s475, (panda$core$Int64) { 296 }, &$s476);
    abort();
    $l473:;
    int $tmp479;
    {
        $tmp481 = self;
        $match$297_9480 = $tmp481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Int64$init$builtin_int64(&$tmp482, 5);
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$297_9480->$rawValue, $tmp482);
        if ($tmp483.value) {
        {
            panda$collections$ImmutableArray** $tmp485 = ((panda$collections$ImmutableArray**) ((char*) $match$297_9480->$data + 0));
            value484 = *$tmp485;
            $tmp487 = ((panda$collections$ListView*) value484);
            $returnValue486 = $tmp487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
            $tmp479 = 0;
            goto $l477;
            $l488:;
            return $returnValue486;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp490, false);
            if ($tmp490.value) goto $l491; else goto $l492;
            $l492:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s493, (panda$core$Int64) { 301 });
            abort();
            $l491:;
        }
        }
    }
    $tmp479 = -1;
    goto $l477;
    $l477:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
    switch ($tmp479) {
        case -1: goto $l494;
        case 0: goto $l488;
    }
    $l494:;
    abort();
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$310_9498 = NULL;
    panda$json$JSON* $tmp499;
    panda$core$Int64 $tmp500;
    panda$core$Int64 value502;
    panda$core$String* $returnValue504;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$Int64 $tmp510;
    panda$core$Real64 value512;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$Int64 $tmp519;
    panda$core$String* value521 = NULL;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$core$Int64 $tmp529;
    panda$core$Bit value531;
    panda$core$String* $tmp533;
    panda$core$String* $tmp534;
    panda$core$Int64 $tmp538;
    panda$collections$ImmutableHashMap* fields540 = NULL;
    panda$core$MutableString* result545 = NULL;
    panda$core$MutableString* $tmp546;
    panda$core$MutableString* $tmp547;
    panda$core$String* separator550 = NULL;
    panda$core$String* $tmp551;
    panda$collections$Iterator* Iter$322$17556 = NULL;
    panda$collections$Iterator* $tmp557;
    panda$collections$Iterator* $tmp558;
    panda$core$String* k571 = NULL;
    panda$core$String* $tmp572;
    panda$core$Object* $tmp573;
    panda$core$String* $tmp578;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$String* $tmp587;
    panda$core$Object* $tmp596;
    panda$core$String* $tmp601;
    panda$core$String* $tmp602;
    panda$core$String* $tmp607;
    panda$core$String* $tmp608;
    panda$core$Int64 $tmp614;
    panda$collections$ImmutableArray* nodes616 = NULL;
    panda$core$MutableString* result621 = NULL;
    panda$core$MutableString* $tmp622;
    panda$core$MutableString* $tmp623;
    panda$core$String* separator626 = NULL;
    panda$core$String* $tmp627;
    panda$collections$Iterator* Iter$331$17632 = NULL;
    panda$collections$Iterator* $tmp633;
    panda$collections$Iterator* $tmp634;
    panda$json$JSON* n650 = NULL;
    panda$json$JSON* $tmp651;
    panda$core$Object* $tmp652;
    panda$core$String* $tmp657;
    panda$core$String* $tmp658;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp667;
    panda$core$String* $tmp668;
    panda$core$Char8 $tmp672;
    panda$core$UInt8 $tmp673;
    panda$core$String* $tmp674;
    panda$core$String* $tmp675;
    panda$core$Int64 $tmp681;
    panda$core$String* $tmp683;
    panda$core$Bit $tmp687;
    int $tmp497;
    {
        $tmp499 = self;
        $match$310_9498 = $tmp499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
        panda$core$Int64$init$builtin_int64(&$tmp500, 0);
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp500);
        if ($tmp501.value) {
        {
            panda$core$Int64* $tmp503 = ((panda$core$Int64*) ((char*) $match$310_9498->$data + 0));
            value502 = *$tmp503;
            panda$core$String* $tmp507 = panda$core$Int64$convert$R$panda$core$String(value502);
            $tmp506 = $tmp507;
            $tmp505 = $tmp506;
            $returnValue504 = $tmp505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
            $tmp497 = 0;
            goto $l495;
            $l508:;
            return $returnValue504;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp510, 1);
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp510);
        if ($tmp511.value) {
        {
            panda$core$Real64* $tmp513 = ((panda$core$Real64*) ((char*) $match$310_9498->$data + 0));
            value512 = *$tmp513;
            panda$core$String* $tmp516 = panda$core$Real64$convert$R$panda$core$String(value512);
            $tmp515 = $tmp516;
            $tmp514 = $tmp515;
            $returnValue504 = $tmp514;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp514));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
            $tmp497 = 1;
            goto $l495;
            $l517:;
            return $returnValue504;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp519, 2);
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp519);
        if ($tmp520.value) {
        {
            panda$core$String** $tmp522 = ((panda$core$String**) ((char*) $match$310_9498->$data + 0));
            value521 = *$tmp522;
            panda$core$String* $tmp526 = panda$core$String$format$panda$core$String$R$panda$core$String(value521, &$s525);
            $tmp524 = $tmp526;
            $tmp523 = $tmp524;
            $returnValue504 = $tmp523;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
            $tmp497 = 2;
            goto $l495;
            $l527:;
            return $returnValue504;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp529, 3);
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp529);
        if ($tmp530.value) {
        {
            panda$core$Bit* $tmp532 = ((panda$core$Bit*) ((char*) $match$310_9498->$data + 0));
            value531 = *$tmp532;
            panda$core$String* $tmp535 = panda$core$Bit$convert$R$panda$core$String(value531);
            $tmp534 = $tmp535;
            $tmp533 = $tmp534;
            $returnValue504 = $tmp533;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
            $tmp497 = 3;
            goto $l495;
            $l536:;
            return $returnValue504;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp538, 4);
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp538);
        if ($tmp539.value) {
        {
            panda$collections$ImmutableHashMap** $tmp541 = ((panda$collections$ImmutableHashMap**) ((char*) $match$310_9498->$data + 0));
            fields540 = *$tmp541;
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
                        panda$collections$Iterator* $tmp559 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields540);
                        $tmp558 = $tmp559;
                        $tmp557 = $tmp558;
                        Iter$322$17556 = $tmp557;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
                        $l560:;
                        ITable* $tmp563 = Iter$322$17556->$class->itable;
                        while ($tmp563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp563 = $tmp563->next;
                        }
                        $fn565 $tmp564 = $tmp563->methods[0];
                        panda$core$Bit $tmp566 = $tmp564(Iter$322$17556);
                        panda$core$Bit $tmp567 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp566);
                        bool $tmp562 = $tmp567.value;
                        if (!$tmp562) goto $l561;
                        {
                            int $tmp570;
                            {
                                ITable* $tmp574 = Iter$322$17556->$class->itable;
                                while ($tmp574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp574 = $tmp574->next;
                                }
                                $fn576 $tmp575 = $tmp574->methods[1];
                                panda$core$Object* $tmp577 = $tmp575(Iter$322$17556);
                                $tmp573 = $tmp577;
                                $tmp572 = ((panda$core$String*) $tmp573);
                                k571 = $tmp572;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
                                panda$core$Panda$unref$panda$core$Object($tmp573);
                                panda$core$String* $tmp584 = panda$core$String$convert$R$panda$core$String(separator550);
                                $tmp583 = $tmp584;
                                panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s585);
                                $tmp582 = $tmp586;
                                ITable* $tmp589 = ((panda$core$Formattable*) k571)->$class->itable;
                                while ($tmp589->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp589 = $tmp589->next;
                                }
                                $fn591 $tmp590 = $tmp589->methods[0];
                                panda$core$String* $tmp592 = $tmp590(((panda$core$Formattable*) k571), &$s588);
                                $tmp587 = $tmp592;
                                panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, $tmp587);
                                $tmp581 = $tmp593;
                                panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s594);
                                $tmp580 = $tmp595;
                                panda$core$Object* $tmp597 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields540, ((panda$collections$Key*) k571));
                                $tmp596 = $tmp597;
                                panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp580, ((panda$core$Object*) ((panda$json$JSON*) $tmp596)));
                                $tmp579 = $tmp598;
                                panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s599);
                                $tmp578 = $tmp600;
                                panda$core$MutableString$append$panda$core$String(result545, $tmp578);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                                panda$core$Panda$unref$panda$core$Object($tmp596);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                                {
                                    $tmp601 = separator550;
                                    $tmp602 = &$s603;
                                    separator550 = $tmp602;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                                }
                            }
                            $tmp570 = -1;
                            goto $l568;
                            $l568:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k571));
                            k571 = NULL;
                            switch ($tmp570) {
                                case -1: goto $l604;
                            }
                            $l604:;
                        }
                        goto $l560;
                        $l561:;
                    }
                    $tmp555 = -1;
                    goto $l553;
                    $l553:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$17556));
                    Iter$322$17556 = NULL;
                    switch ($tmp555) {
                        case -1: goto $l605;
                    }
                    $l605:;
                }
                panda$core$MutableString$append$panda$core$String(result545, &$s606);
                panda$core$String* $tmp609 = panda$core$MutableString$finish$R$panda$core$String(result545);
                $tmp608 = $tmp609;
                $tmp607 = $tmp608;
                $returnValue504 = $tmp607;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                $tmp544 = 0;
                goto $l542;
                $l610:;
                $tmp497 = 4;
                goto $l495;
                $l611:;
                return $returnValue504;
            }
            $l542:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result545));
            result545 = NULL;
            separator550 = NULL;
            switch ($tmp544) {
                case 0: goto $l610;
            }
            $l613:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp614, 5);
        panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp614);
        if ($tmp615.value) {
        {
            panda$collections$ImmutableArray** $tmp617 = ((panda$collections$ImmutableArray**) ((char*) $match$310_9498->$data + 0));
            nodes616 = *$tmp617;
            int $tmp620;
            {
                panda$core$MutableString* $tmp624 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp624, &$s625);
                $tmp623 = $tmp624;
                $tmp622 = $tmp623;
                result621 = $tmp622;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                $tmp627 = &$s628;
                separator626 = $tmp627;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                {
                    int $tmp631;
                    {
                        ITable* $tmp635 = ((panda$collections$Iterable*) nodes616)->$class->itable;
                        while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp635 = $tmp635->next;
                        }
                        $fn637 $tmp636 = $tmp635->methods[0];
                        panda$collections$Iterator* $tmp638 = $tmp636(((panda$collections$Iterable*) nodes616));
                        $tmp634 = $tmp638;
                        $tmp633 = $tmp634;
                        Iter$331$17632 = $tmp633;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                        $l639:;
                        ITable* $tmp642 = Iter$331$17632->$class->itable;
                        while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp642 = $tmp642->next;
                        }
                        $fn644 $tmp643 = $tmp642->methods[0];
                        panda$core$Bit $tmp645 = $tmp643(Iter$331$17632);
                        panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
                        bool $tmp641 = $tmp646.value;
                        if (!$tmp641) goto $l640;
                        {
                            int $tmp649;
                            {
                                ITable* $tmp653 = Iter$331$17632->$class->itable;
                                while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp653 = $tmp653->next;
                                }
                                $fn655 $tmp654 = $tmp653->methods[1];
                                panda$core$Object* $tmp656 = $tmp654(Iter$331$17632);
                                $tmp652 = $tmp656;
                                $tmp651 = ((panda$json$JSON*) $tmp652);
                                n650 = $tmp651;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
                                panda$core$Panda$unref$panda$core$Object($tmp652);
                                panda$core$String* $tmp661 = panda$core$String$convert$R$panda$core$String(separator626);
                                $tmp660 = $tmp661;
                                panda$core$String* $tmp663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s662);
                                $tmp659 = $tmp663;
                                panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp659, ((panda$core$Object*) n650));
                                $tmp658 = $tmp664;
                                panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp658, &$s665);
                                $tmp657 = $tmp666;
                                panda$core$MutableString$append$panda$core$String(result621, $tmp657);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                                {
                                    $tmp667 = separator626;
                                    $tmp668 = &$s669;
                                    separator626 = $tmp668;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp668));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
                                }
                            }
                            $tmp649 = -1;
                            goto $l647;
                            $l647:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n650));
                            n650 = NULL;
                            switch ($tmp649) {
                                case -1: goto $l670;
                            }
                            $l670:;
                        }
                        goto $l639;
                        $l640:;
                    }
                    $tmp631 = -1;
                    goto $l629;
                    $l629:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$17632));
                    Iter$331$17632 = NULL;
                    switch ($tmp631) {
                        case -1: goto $l671;
                    }
                    $l671:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp673, 93);
                panda$core$Char8$init$panda$core$UInt8(&$tmp672, $tmp673);
                panda$core$MutableString$append$panda$core$Char8(result621, $tmp672);
                panda$core$String* $tmp676 = panda$core$MutableString$finish$R$panda$core$String(result621);
                $tmp675 = $tmp676;
                $tmp674 = $tmp675;
                $returnValue504 = $tmp674;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                $tmp620 = 0;
                goto $l618;
                $l677:;
                $tmp497 = 5;
                goto $l495;
                $l678:;
                return $returnValue504;
            }
            $l618:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result621));
            result621 = NULL;
            separator626 = NULL;
            switch ($tmp620) {
                case 0: goto $l677;
            }
            $l680:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp681, 6);
        panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9498->$rawValue, $tmp681);
        if ($tmp682.value) {
        {
            $tmp683 = &$s684;
            $returnValue504 = $tmp683;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
            $tmp497 = 6;
            goto $l495;
            $l685:;
            return $returnValue504;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp687, false);
            if ($tmp687.value) goto $l688; else goto $l689;
            $l689:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s690, (panda$core$Int64) { 340 });
            abort();
            $l688:;
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp497 = -1;
    goto $l495;
    $l495:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
    switch ($tmp497) {
        case 6: goto $l685;
        case 4: goto $l611;
        case 1: goto $l517;
        case 3: goto $l536;
        case -1: goto $l691;
        case 5: goto $l678;
        case 0: goto $l508;
        case 2: goto $l527;
    }
    $l691:;
    abort();
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$8_1698 = NULL;
    panda$json$JSON* $tmp699;
    panda$core$Int64 $tmp700;
    panda$core$Int64 _f0702;
    panda$core$Int64 $tmp704;
    panda$core$Real64 _f0706;
    panda$core$Int64 $tmp708;
    panda$core$String* _f0710 = NULL;
    panda$core$Int64 $tmp712;
    panda$core$Bit _f0714;
    panda$core$Int64 $tmp716;
    panda$collections$ImmutableHashMap* _f0718 = NULL;
    panda$core$Int64 $tmp720;
    panda$collections$ImmutableArray* _f0722 = NULL;
    panda$core$Int64 $tmp724;
    int $tmp694;
    {
        int $tmp697;
        {
            $tmp699 = self;
            $match$8_1698 = $tmp699;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
            panda$core$Int64$init$builtin_int64(&$tmp700, 0);
            panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp700);
            if ($tmp701.value) {
            {
                panda$core$Int64* $tmp703 = ((panda$core$Int64*) ((char*) $match$8_1698->$data + 0));
                _f0702 = *$tmp703;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp704, 1);
            panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp704);
            if ($tmp705.value) {
            {
                panda$core$Real64* $tmp707 = ((panda$core$Real64*) ((char*) $match$8_1698->$data + 0));
                _f0706 = *$tmp707;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp708, 2);
            panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp708);
            if ($tmp709.value) {
            {
                panda$core$String** $tmp711 = ((panda$core$String**) ((char*) $match$8_1698->$data + 0));
                _f0710 = *$tmp711;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0710));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp712, 3);
            panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp712);
            if ($tmp713.value) {
            {
                panda$core$Bit* $tmp715 = ((panda$core$Bit*) ((char*) $match$8_1698->$data + 0));
                _f0714 = *$tmp715;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp716, 4);
            panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp716);
            if ($tmp717.value) {
            {
                panda$collections$ImmutableHashMap** $tmp719 = ((panda$collections$ImmutableHashMap**) ((char*) $match$8_1698->$data + 0));
                _f0718 = *$tmp719;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0718));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp720, 5);
            panda$core$Bit $tmp721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp720);
            if ($tmp721.value) {
            {
                panda$collections$ImmutableArray** $tmp723 = ((panda$collections$ImmutableArray**) ((char*) $match$8_1698->$data + 0));
                _f0722 = *$tmp723;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0722));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp724, 6);
            panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1698->$rawValue, $tmp724);
            if ($tmp725.value) {
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
        $tmp697 = -1;
        goto $l695;
        $l695:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
        switch ($tmp697) {
            case -1: goto $l726;
        }
        $l726:;
    }
    $tmp694 = -1;
    goto $l692;
    $l692:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp694) {
        case -1: goto $l727;
    }
    $l727:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp728 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp728 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp729 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp729 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp730;
    panda$core$String* $tmp733;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp731 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp730 = *$tmp731;
        panda$core$String** $tmp732 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp733 = p_f0;
        *$tmp732 = $tmp733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp734 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp734 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp735;
    panda$collections$ImmutableHashMap* $tmp738;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp736 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp735 = *$tmp736;
        panda$collections$ImmutableHashMap** $tmp737 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp738 = p_f0;
        *$tmp737 = $tmp738;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp739;
    panda$collections$ImmutableArray* $tmp742;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp740 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp739 = *$tmp740;
        panda$collections$ImmutableArray** $tmp741 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp742 = p_f0;
        *$tmp741 = $tmp742;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

