#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Maybe.h"
#include "panda/core/Int64.h"
#include "panda/core/Error.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/Index.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ListView.h"
#include "panda/core/Comparable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$dumpReport, panda$core$Panda$countTrace$panda$core$String} };

typedef panda$core$Bit (*$fn89)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn100)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn134)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn145)(panda$collections$Iterator*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn207)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn279)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn397)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn472)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$core$Panda$init(panda$core$Panda* self) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    panda$collections$HashMap* $tmp5;
    panda$collections$HashMap* $tmp6;
    self->allocations = NULL;
    self->traces = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->allocations = $tmp2;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->traces = $tmp5;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
}
panda$core$Maybe* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$Object* p_o) {
    panda$core$Maybe* $returnValue8;
    panda$core$Maybe* $tmp9;
    panda$core$Maybe* $tmp10;
    panda$core$Int64 $tmp12;
    panda$core$Maybe* $tmp11 = (panda$core$Maybe*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
    panda$core$Int64$init$builtin_int64(&$tmp12, 0);
    panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T($tmp11, $tmp12, p_o);
    $tmp10 = $tmp11;
    $tmp9 = $tmp10;
    $returnValue8 = $tmp9;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
    return $returnValue8;
}
panda$core$Maybe* panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$String* p_msg) {
    panda$core$Maybe* $returnValue14;
    panda$core$Maybe* $tmp15;
    panda$core$Maybe* $tmp16;
    panda$core$Int64 $tmp18;
    panda$core$Error* $tmp19;
    panda$core$Maybe* $tmp17 = (panda$core$Maybe*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
    panda$core$Int64$init$builtin_int64(&$tmp18, 1);
    panda$core$Error* $tmp20 = (panda$core$Error*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Error$class);
    panda$core$Error$init$panda$core$String($tmp20, p_msg);
    $tmp19 = $tmp20;
    panda$core$Maybe$init$panda$core$Int64$panda$core$Error($tmp17, $tmp18, $tmp19);
    $tmp16 = $tmp17;
    $tmp15 = $tmp16;
    $returnValue14 = $tmp15;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
    return $returnValue14;
}
panda$core$String* panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(panda$core$Class* p_cl) {
    panda$core$String* $returnValue29;
    panda$core$String* $tmp30;
    panda$core$String* $tmp40;
    panda$core$String* $tmp43;
    panda$core$Bit $tmp24 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s23);
    bool $tmp22 = $tmp24.value;
    if ($tmp22) goto $l25;
    panda$core$Bit $tmp27 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s26);
    $tmp22 = $tmp27.value;
    $l25:;
    panda$core$Bit $tmp28 = { $tmp22 };
    if ($tmp28.value) {
    {
        $tmp30 = &$s31;
        $returnValue29 = $tmp30;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
        return $returnValue29;
    }
    }
    panda$core$Bit $tmp35 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s34);
    bool $tmp33 = $tmp35.value;
    if ($tmp33) goto $l36;
    panda$core$Bit $tmp38 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s37);
    $tmp33 = $tmp38.value;
    $l36:;
    panda$core$Bit $tmp39 = { $tmp33 };
    if ($tmp39.value) {
    {
        $tmp40 = &$s41;
        $returnValue29 = $tmp40;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
        return $returnValue29;
    }
    }
    $tmp43 = p_cl->name;
    $returnValue29 = $tmp43;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
    return $returnValue29;
}
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name48 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $tmp50;
    panda$core$Int64$nullable old52;
    panda$core$Object* $tmp53;
    panda$core$Int64 $tmp55;
    panda$core$Object* $tmp56;
    panda$core$Int64 $tmp57;
    int $tmp47;
    {
        panda$core$String* $tmp51 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp50 = $tmp51;
        $tmp49 = $tmp50;
        name48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
        panda$core$Object* $tmp54 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name48));
        $tmp53 = $tmp54;
        old52 = ($tmp53 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp53)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object$Q($tmp53);
        if (((panda$core$Bit) { !old52.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp55, 0);
            old52 = ((panda$core$Int64$nullable) { $tmp55, true });
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp57, 1);
        panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old52.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp57, true }).value));
        panda$core$Int64$wrapper* $tmp59;
        $tmp59 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp59->value = $tmp58;
        $tmp56 = ((panda$core$Object*) $tmp59);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name48), $tmp56);
        panda$core$Panda$unref$panda$core$Object$Q($tmp56);
    }
    $tmp47 = -1;
    goto $l45;
    $l45:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name48));
    name48 = NULL;
    switch ($tmp47) {
        case -1: goto $l60;
    }
    $l60:;
}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name64 = NULL;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$Int64$nullable old68;
    panda$core$Object* $tmp69;
    panda$core$Int64 $tmp71;
    panda$core$Object* $tmp72;
    panda$core$Int64 $tmp73;
    int $tmp63;
    {
        panda$core$String* $tmp67 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp66 = $tmp67;
        $tmp65 = $tmp66;
        name64 = $tmp65;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
        panda$core$Object* $tmp70 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name64));
        $tmp69 = $tmp70;
        old68 = ($tmp69 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp69)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object$Q($tmp69);
        if (((panda$core$Bit) { !old68.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp71, 0);
            old68 = ((panda$core$Int64$nullable) { $tmp71, true });
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp73, 1);
        panda$core$Int64 $tmp74 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old68.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp73, true }).value));
        panda$core$Int64$wrapper* $tmp75;
        $tmp75 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp75->value = $tmp74;
        $tmp72 = ((panda$core$Object*) $tmp75);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name64), $tmp72);
        panda$core$Panda$unref$panda$core$Object$Q($tmp72);
    }
    $tmp63 = -1;
    goto $l61;
    $l61:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name64));
    name64 = NULL;
    switch ($tmp63) {
        case -1: goto $l76;
    }
    $l76:;
}
void panda$core$Panda$dumpReport(panda$core$Panda* self) {
    panda$collections$Iterator* Iter$61$980 = NULL;
    panda$collections$Iterator* $tmp81;
    panda$collections$Iterator* $tmp82;
    panda$core$String* k95 = NULL;
    panda$core$String* $tmp96;
    panda$core$Object* $tmp97;
    panda$core$Object* $tmp102;
    panda$core$Int64 $tmp104;
    panda$core$String* $tmp106;
    panda$core$String* $tmp107;
    panda$core$String* $tmp108;
    panda$core$String* $tmp109;
    panda$core$Object* $tmp113;
    panda$core$Object* $tmp114;
    panda$collections$Iterator* Iter$66$9125 = NULL;
    panda$collections$Iterator* $tmp126;
    panda$collections$Iterator* $tmp127;
    panda$core$String* k140 = NULL;
    panda$core$String* $tmp141;
    panda$core$Object* $tmp142;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$Object* $tmp154;
    panda$core$Object* $tmp155;
    {
        int $tmp79;
        {
            panda$collections$Iterator* $tmp83 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->allocations);
            $tmp82 = $tmp83;
            $tmp81 = $tmp82;
            Iter$61$980 = $tmp81;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
            $l84:;
            ITable* $tmp87 = Iter$61$980->$class->itable;
            while ($tmp87->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp87 = $tmp87->next;
            }
            $fn89 $tmp88 = $tmp87->methods[0];
            panda$core$Bit $tmp90 = $tmp88(Iter$61$980);
            panda$core$Bit $tmp91 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp90);
            bool $tmp86 = $tmp91.value;
            if (!$tmp86) goto $l85;
            {
                int $tmp94;
                {
                    ITable* $tmp98 = Iter$61$980->$class->itable;
                    while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp98 = $tmp98->next;
                    }
                    $fn100 $tmp99 = $tmp98->methods[1];
                    panda$core$Object* $tmp101 = $tmp99(Iter$61$980);
                    $tmp97 = $tmp101;
                    $tmp96 = ((panda$core$String*) $tmp97);
                    k95 = $tmp96;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp97);
                    panda$core$Object* $tmp103 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k95));
                    $tmp102 = $tmp103;
                    panda$core$Int64$init$builtin_int64(&$tmp104, 0);
                    panda$core$Bit $tmp105 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) ($tmp102 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp102)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value), $tmp104);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp102);
                    if ($tmp105.value) {
                    {
                        panda$core$String* $tmp110 = panda$core$String$convert$R$panda$core$String(k95);
                        $tmp109 = $tmp110;
                        panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s111);
                        $tmp108 = $tmp112;
                        panda$core$Object* $tmp115 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k95));
                        $tmp114 = $tmp115;
                        panda$core$Int64$wrapper* $tmp116;
                        $tmp116 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                        $tmp116->value = ((panda$core$Int64) ($tmp114 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp114)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                        $tmp113 = ((panda$core$Object*) $tmp116);
                        panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp108, $tmp113);
                        $tmp107 = $tmp117;
                        panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s118);
                        $tmp106 = $tmp119;
                        panda$io$Console$printLine$panda$core$String($tmp106);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp113);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp114);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
                    }
                    }
                }
                $tmp94 = -1;
                goto $l92;
                $l92:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) k95));
                k95 = NULL;
                switch ($tmp94) {
                    case -1: goto $l120;
                }
                $l120:;
            }
            goto $l84;
            $l85:;
        }
        $tmp79 = -1;
        goto $l77;
        $l77:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$61$980));
        Iter$61$980 = NULL;
        switch ($tmp79) {
            case -1: goto $l121;
        }
        $l121:;
    }
    {
        int $tmp124;
        {
            panda$collections$Iterator* $tmp128 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->traces);
            $tmp127 = $tmp128;
            $tmp126 = $tmp127;
            Iter$66$9125 = $tmp126;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
            $l129:;
            ITable* $tmp132 = Iter$66$9125->$class->itable;
            while ($tmp132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp132 = $tmp132->next;
            }
            $fn134 $tmp133 = $tmp132->methods[0];
            panda$core$Bit $tmp135 = $tmp133(Iter$66$9125);
            panda$core$Bit $tmp136 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp135);
            bool $tmp131 = $tmp136.value;
            if (!$tmp131) goto $l130;
            {
                int $tmp139;
                {
                    ITable* $tmp143 = Iter$66$9125->$class->itable;
                    while ($tmp143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp143 = $tmp143->next;
                    }
                    $fn145 $tmp144 = $tmp143->methods[1];
                    panda$core$Object* $tmp146 = $tmp144(Iter$66$9125);
                    $tmp142 = $tmp146;
                    $tmp141 = ((panda$core$String*) $tmp142);
                    k140 = $tmp141;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp142);
                    panda$core$String* $tmp151 = panda$core$String$convert$R$panda$core$String(k140);
                    $tmp150 = $tmp151;
                    panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s152);
                    $tmp149 = $tmp153;
                    panda$core$Object* $tmp156 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) k140));
                    $tmp155 = $tmp156;
                    panda$core$Int64$wrapper* $tmp157;
                    $tmp157 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp157->value = ((panda$core$Int64) ($tmp155 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp155)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                    $tmp154 = ((panda$core$Object*) $tmp157);
                    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp149, $tmp154);
                    $tmp148 = $tmp158;
                    panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s159);
                    $tmp147 = $tmp160;
                    panda$io$Console$printLine$panda$core$String($tmp147);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp154);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp155);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
                }
                $tmp139 = -1;
                goto $l137;
                $l137:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) k140));
                k140 = NULL;
                switch ($tmp139) {
                    case -1: goto $l161;
                }
                $l161:;
            }
            goto $l129;
            $l130:;
        }
        $tmp124 = -1;
        goto $l122;
        $l122:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$66$9125));
        Iter$66$9125 = NULL;
        switch ($tmp124) {
            case -1: goto $l162;
        }
        $l162:;
    }
}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* self, panda$core$String* p_s) {
    panda$core$Int64$nullable old163;
    panda$core$Object* $tmp164;
    panda$core$Int64 $tmp166;
    panda$core$Object* $tmp167;
    panda$core$Int64 $tmp168;
    panda$core$Object* $tmp165 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) p_s));
    $tmp164 = $tmp165;
    old163 = ($tmp164 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp164)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
    panda$core$Panda$unref$panda$core$Object$Q($tmp164);
    if (((panda$core$Bit) { !old163.nonnull }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp166, 0);
        old163 = ((panda$core$Int64$nullable) { $tmp166, true });
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp168, 1);
    panda$core$Int64 $tmp169 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old163.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp168, true }).value));
    panda$core$Int64$wrapper* $tmp170;
    $tmp170 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp170->value = $tmp169;
    $tmp167 = ((panda$core$Object*) $tmp170);
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->traces, ((panda$collections$Key*) p_s), $tmp167);
    panda$core$Panda$unref$panda$core$Object$Q($tmp167);
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp171;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$Object* $tmp181;
    panda$io$OutputStream* $tmp172 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp171 = $tmp172;
    panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, p_file);
    $tmp176 = $tmp178;
    panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s179);
    $tmp175 = $tmp180;
    panda$core$Int64$wrapper* $tmp182;
    $tmp182 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp182->value = p_line;
    $tmp181 = ((panda$core$Object*) $tmp182);
    panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp175, $tmp181);
    $tmp174 = $tmp183;
    panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s184);
    $tmp173 = $tmp185;
    (($fn186) $tmp171->$class->vtable[19])($tmp171, $tmp173);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
    panda$core$Panda$unref$panda$core$Object$Q($tmp181);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp187;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$Object* $tmp199;
    panda$io$OutputStream* $tmp188 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp187 = $tmp188;
    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s195, p_file);
    $tmp194 = $tmp196;
    panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s197);
    $tmp193 = $tmp198;
    panda$core$Int64$wrapper* $tmp200;
    $tmp200 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp200->value = p_line;
    $tmp199 = ((panda$core$Object*) $tmp200);
    panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp193, $tmp199);
    $tmp192 = $tmp201;
    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s202);
    $tmp191 = $tmp203;
    panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, p_msg);
    $tmp190 = $tmp204;
    panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s205);
    $tmp189 = $tmp206;
    (($fn207) $tmp187->$class->vtable[19])($tmp187, $tmp189);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
    panda$core$Panda$unref$panda$core$Object$Q($tmp199);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp209;
    panda$core$Int32 $tmp210;
    panda$core$Char32 $tmp213;
    panda$core$Int32 $tmp214;
    panda$core$UInt64$nullable $returnValue217;
    panda$core$Char8 $tmp219;
    panda$core$UInt8 $tmp220;
    panda$core$Char32 $tmp225;
    panda$core$Int32 $tmp226;
    panda$core$Char32 $tmp229;
    panda$core$Int32 $tmp230;
    panda$core$Char8 $tmp234;
    panda$core$UInt8 $tmp235;
    panda$core$UInt64 $tmp238;
    panda$core$Char32 $tmp242;
    panda$core$Int32 $tmp243;
    panda$core$Char32 $tmp246;
    panda$core$Int32 $tmp247;
    panda$core$Char8 $tmp251;
    panda$core$UInt8 $tmp252;
    panda$core$UInt64 $tmp255;
    panda$core$Int32$init$builtin_int32(&$tmp210, 48);
    panda$core$Char32$init$panda$core$Int32(&$tmp209, $tmp210);
    panda$core$Bit $tmp211 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp209);
    bool $tmp208 = $tmp211.value;
    if (!$tmp208) goto $l212;
    panda$core$Int32$init$builtin_int32(&$tmp214, 57);
    panda$core$Char32$init$panda$core$Int32(&$tmp213, $tmp214);
    panda$core$Bit $tmp215 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp213);
    $tmp208 = $tmp215.value;
    $l212:;
    panda$core$Bit $tmp216 = { $tmp208 };
    if ($tmp216.value) {
    {
        panda$core$UInt64 $tmp218 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp220, 48);
        panda$core$Char8$init$panda$core$UInt8(&$tmp219, $tmp220);
        panda$core$UInt64 $tmp221 = panda$core$Char8$convert$R$panda$core$UInt64($tmp219);
        panda$core$UInt64 $tmp222 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp218, $tmp221);
        $returnValue217 = ((panda$core$UInt64$nullable) { $tmp222, true });
        return $returnValue217;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp226, 65);
    panda$core$Char32$init$panda$core$Int32(&$tmp225, $tmp226);
    panda$core$Bit $tmp227 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp225);
    bool $tmp224 = $tmp227.value;
    if (!$tmp224) goto $l228;
    panda$core$Int32$init$builtin_int32(&$tmp230, 90);
    panda$core$Char32$init$panda$core$Int32(&$tmp229, $tmp230);
    panda$core$Bit $tmp231 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp229);
    $tmp224 = $tmp231.value;
    $l228:;
    panda$core$Bit $tmp232 = { $tmp224 };
    if ($tmp232.value) {
    {
        panda$core$UInt64 $tmp233 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp235, 65);
        panda$core$Char8$init$panda$core$UInt8(&$tmp234, $tmp235);
        panda$core$UInt64 $tmp236 = panda$core$Char8$convert$R$panda$core$UInt64($tmp234);
        panda$core$UInt64 $tmp237 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp233, $tmp236);
        panda$core$UInt64$init$builtin_uint64(&$tmp238, 10);
        panda$core$UInt64 $tmp239 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp237, $tmp238);
        $returnValue217 = ((panda$core$UInt64$nullable) { $tmp239, true });
        return $returnValue217;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp243, 97);
    panda$core$Char32$init$panda$core$Int32(&$tmp242, $tmp243);
    panda$core$Bit $tmp244 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp242);
    bool $tmp241 = $tmp244.value;
    if (!$tmp241) goto $l245;
    panda$core$Int32$init$builtin_int32(&$tmp247, 122);
    panda$core$Char32$init$panda$core$Int32(&$tmp246, $tmp247);
    panda$core$Bit $tmp248 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp246);
    $tmp241 = $tmp248.value;
    $l245:;
    panda$core$Bit $tmp249 = { $tmp241 };
    if ($tmp249.value) {
    {
        panda$core$UInt64 $tmp250 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp252, 97);
        panda$core$Char8$init$panda$core$UInt8(&$tmp251, $tmp252);
        panda$core$UInt64 $tmp253 = panda$core$Char8$convert$R$panda$core$UInt64($tmp251);
        panda$core$UInt64 $tmp254 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp250, $tmp253);
        panda$core$UInt64$init$builtin_uint64(&$tmp255, 10);
        panda$core$UInt64 $tmp256 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp254, $tmp255);
        $returnValue217 = ((panda$core$UInt64$nullable) { $tmp256, true });
        return $returnValue217;
    }
    }
    $returnValue217 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $returnValue217;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $returnValue261;
    panda$core$UInt64 result263;
    panda$core$UInt64 $tmp264;
    panda$core$UInt64 radix265;
    panda$core$String$Index index267;
    panda$core$Equatable* $tmp272;
    panda$core$Equatable* $tmp274;
    panda$core$UInt64$nullable value281;
    panda$core$Bit $tmp260 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s259);
    if ($tmp260.value) {
    {
        $returnValue261 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue261;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp264, 0);
    result263 = $tmp264;
    panda$core$UInt64 $tmp266 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix265 = $tmp266;
    panda$core$String$Index $tmp268 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index267 = $tmp268;
    $l269:;
    panda$core$String$Index$wrapper* $tmp273;
    $tmp273 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp273->value = index267;
    $tmp272 = ((panda$core$Equatable*) $tmp273);
    panda$core$String$Index $tmp275 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$String$Index$wrapper* $tmp276;
    $tmp276 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp276->value = $tmp275;
    $tmp274 = ((panda$core$Equatable*) $tmp276);
    ITable* $tmp277 = $tmp272->$class->itable;
    while ($tmp277->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp277 = $tmp277->next;
    }
    $fn279 $tmp278 = $tmp277->methods[1];
    panda$core$Bit $tmp280 = $tmp278($tmp272, $tmp274);
    bool $tmp271 = $tmp280.value;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
    if (!$tmp271) goto $l270;
    {
        panda$core$Char32 $tmp282 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index267);
        panda$core$UInt64$nullable $tmp283 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp282);
        value281 = $tmp283;
        bool $tmp284 = ((panda$core$Bit) { !value281.nonnull }).value;
        if ($tmp284) goto $l285;
        panda$core$Bit $tmp286 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value281.value), radix265);
        $tmp284 = $tmp286.value;
        $l285:;
        panda$core$Bit $tmp287 = { $tmp284 };
        if ($tmp287.value) {
        {
            $returnValue261 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue261;
        }
        }
        panda$core$UInt64 $tmp289 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result263, radix265);
        panda$core$UInt64 $tmp290 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp289, ((panda$core$UInt64) value281.value));
        result263 = $tmp290;
        panda$core$String$Index $tmp291 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index267);
        index267 = $tmp291;
    }
    goto $l269;
    $l270:;
    $returnValue261 = ((panda$core$UInt64$nullable) { result263, true });
    return $returnValue261;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$Int64 $tmp294;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$String$Index index305;
    panda$core$Char32 $match$176_9308;
    panda$core$Char32 $tmp312;
    panda$core$Int32 $tmp313;
    panda$core$Char32 $tmp316;
    panda$core$Int32 $tmp317;
    panda$core$Char32 $tmp321;
    panda$core$Int32 $tmp322;
    panda$core$Int64 width326;
    panda$core$String* $tmp327;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp328;
    panda$core$Bit $tmp330;
    panda$core$Char32 fill333;
    panda$core$Char32 $tmp336;
    panda$core$Int32 $tmp337;
    panda$core$Char32 $match$189_9340;
    panda$core$Char32 $tmp342;
    panda$core$Int32 $tmp343;
    panda$core$String* $returnValue345;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$Char32 $tmp350;
    panda$core$Int32 $tmp351;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$Char32 $tmp357;
    panda$core$Int32 $tmp358;
    panda$core$String* $tmp360;
    panda$core$String* $tmp361;
    panda$core$Bit $tmp364;
    panda$core$String* $tmp368;
    panda$core$String* $tmp369;
    panda$core$Int64 $tmp293 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Int64$init$builtin_int64(&$tmp294, 2);
    panda$core$Bit $tmp295 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp293, $tmp294);
    if ($tmp295.value) goto $l296; else goto $l297;
    $l297:;
    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s301, p_specifier);
    $tmp300 = $tmp302;
    panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, &$s303);
    $tmp299 = $tmp304;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s298, (panda$core$Int64) { 174 }, $tmp299);
    abort();
    $l296:;
    panda$core$String$Index $tmp306 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp307 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp306);
    index305 = $tmp307;
    {
        panda$core$Char32 $tmp309 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index305);
        $match$176_9308 = $tmp309;
        panda$core$Int32$init$builtin_int32(&$tmp313, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp312, $tmp313);
        panda$core$Bit $tmp314 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$176_9308, $tmp312);
        bool $tmp311 = $tmp314.value;
        if ($tmp311) goto $l315;
        panda$core$Int32$init$builtin_int32(&$tmp317, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp316, $tmp317);
        panda$core$Bit $tmp318 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$176_9308, $tmp316);
        $tmp311 = $tmp318.value;
        $l315:;
        panda$core$Bit $tmp319 = { $tmp311 };
        bool $tmp310 = $tmp319.value;
        if ($tmp310) goto $l320;
        panda$core$Int32$init$builtin_int32(&$tmp322, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp321, $tmp322);
        panda$core$Bit $tmp323 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$176_9308, $tmp321);
        $tmp310 = $tmp323.value;
        $l320:;
        panda$core$Bit $tmp324 = { $tmp310 };
        if ($tmp324.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp325 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index305 = $tmp325;
        }
        }
    }
    panda$core$String$Index $tmp329 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index305);
    panda$core$Bit$init$builtin_bit(&$tmp330, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp328, ((panda$core$String$Index$nullable) { $tmp329, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp330);
    panda$core$String* $tmp331 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp328);
    $tmp327 = $tmp331;
    panda$core$Int64$nullable $tmp332 = panda$core$String$convert$R$panda$core$Int64$Q($tmp327);
    width326 = ((panda$core$Int64) $tmp332.value);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
    memset(&fill333, 0, sizeof(fill333));
    panda$core$String$Index $tmp334 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp335 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index305, $tmp334);
    if ($tmp335.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp337, 32);
        panda$core$Char32$init$panda$core$Int32(&$tmp336, $tmp337);
        fill333 = $tmp336;
    }
    }
    else {
    {
        panda$core$String$Index $tmp338 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp339 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp338);
        fill333 = $tmp339;
    }
    }
    {
        panda$core$Char32 $tmp341 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index305);
        $match$189_9340 = $tmp341;
        panda$core$Int32$init$builtin_int32(&$tmp343, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp342, $tmp343);
        panda$core$Bit $tmp344 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$189_9340, $tmp342);
        if ($tmp344.value) {
        {
            panda$core$String* $tmp348 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width326, fill333);
            $tmp347 = $tmp348;
            $tmp346 = $tmp347;
            $returnValue345 = $tmp346;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
            return $returnValue345;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp351, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp350, $tmp351);
        panda$core$Bit $tmp352 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$189_9340, $tmp350);
        if ($tmp352.value) {
        {
            panda$core$String* $tmp355 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width326, fill333);
            $tmp354 = $tmp355;
            $tmp353 = $tmp354;
            $returnValue345 = $tmp353;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
            return $returnValue345;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp358, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp357, $tmp358);
        panda$core$Bit $tmp359 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$189_9340, $tmp357);
        if ($tmp359.value) {
        {
            panda$core$String* $tmp362 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width326, fill333);
            $tmp361 = $tmp362;
            $tmp360 = $tmp361;
            $returnValue345 = $tmp360;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
            return $returnValue345;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp364, false);
            if ($tmp364.value) goto $l365; else goto $l366;
            $l366:;
            panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s370, p_specifier);
            $tmp369 = $tmp371;
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s372);
            $tmp368 = $tmp373;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s367, (panda$core$Int64) { 194 }, $tmp368);
            abort();
            $l365:;
        }
        }
        }
        }
    }
    if (false) goto $l374; else goto $l375;
    $l375:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s376, (panda$core$Int64) { 173 }, &$s377);
    abort();
    $l374:;
    abort();
}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index381;
    panda$core$UInt64 base383;
    panda$core$UInt64 $tmp384;
    panda$collections$ListView* digits385 = NULL;
    panda$collections$ListView* $tmp386;
    panda$collections$ListView* $tmp387;
    panda$core$Comparable* $tmp390;
    panda$core$Comparable* $tmp392;
    panda$core$Char32 $match$212_13399;
    panda$core$Char32 $tmp402;
    panda$core$Int32 $tmp403;
    panda$core$Char32 $tmp406;
    panda$core$Int32 $tmp407;
    panda$core$UInt64 $tmp410;
    panda$core$Char32 $tmp412;
    panda$core$Int32 $tmp413;
    panda$core$Char32 $tmp416;
    panda$core$Int32 $tmp417;
    panda$core$UInt64 $tmp420;
    panda$core$Char32 $tmp422;
    panda$core$Int32 $tmp423;
    panda$core$Char32 $tmp426;
    panda$core$Int32 $tmp427;
    panda$core$UInt64 $tmp430;
    panda$core$Char32 $tmp431;
    panda$core$Int32 $tmp432;
    panda$core$UInt64 $tmp434;
    panda$core$Char32 $tmp435;
    panda$core$Int32 $tmp436;
    panda$core$UInt64 $tmp438;
    panda$collections$ListView* $tmp439;
    panda$collections$ListView* $tmp440;
    panda$collections$ListView* $tmp441;
    panda$core$Bit $tmp444;
    panda$core$UInt64 value449;
    panda$core$UInt64 $tmp452;
    panda$core$Int64 max459;
    panda$core$Int64 $tmp460;
    panda$core$Char8* chars461;
    panda$core$Int64 charIndex462;
    panda$core$Int64 $tmp463;
    panda$core$Object* $tmp467;
    panda$core$Int64 $tmp475;
    panda$core$UInt64 $tmp478;
    panda$core$UInt64 $tmp482;
    panda$core$Char8 $tmp485;
    panda$core$UInt8 $tmp486;
    panda$core$Int64 $tmp487;
    panda$core$Int64 $tmp489;
    panda$core$Int64 size491;
    panda$core$Range$LTpanda$core$Int64$GT $tmp493;
    panda$core$Int64 $tmp494;
    panda$core$Bit $tmp495;
    panda$core$String* $returnValue516;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    int $tmp380;
    {
        panda$core$String$Index $tmp382 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index381 = $tmp382;
        panda$core$UInt64$init$builtin_uint64(&$tmp384, 10);
        base383 = $tmp384;
        panda$collections$ListView* $tmp389 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s388);
        $tmp387 = $tmp389;
        $tmp386 = $tmp387;
        digits385 = $tmp386;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
        panda$core$String$Index$wrapper* $tmp391;
        $tmp391 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp391->value = index381;
        $tmp390 = ((panda$core$Comparable*) $tmp391);
        panda$core$String$Index $tmp393 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$String$Index$wrapper* $tmp394;
        $tmp394 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp394->value = $tmp393;
        $tmp392 = ((panda$core$Comparable*) $tmp394);
        ITable* $tmp395 = $tmp390->$class->itable;
        while ($tmp395->$class != (panda$core$Class*) &panda$core$Comparable$class) {
            $tmp395 = $tmp395->next;
        }
        $fn397 $tmp396 = $tmp395->methods[1];
        panda$core$Bit $tmp398 = $tmp396($tmp390, $tmp392);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
        if ($tmp398.value) {
        {
            {
                panda$core$Char32 $tmp400 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index381);
                $match$212_13399 = $tmp400;
                panda$core$Int32$init$builtin_int32(&$tmp403, 98);
                panda$core$Char32$init$panda$core$Int32(&$tmp402, $tmp403);
                panda$core$Bit $tmp404 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp402);
                bool $tmp401 = $tmp404.value;
                if ($tmp401) goto $l405;
                panda$core$Int32$init$builtin_int32(&$tmp407, 66);
                panda$core$Char32$init$panda$core$Int32(&$tmp406, $tmp407);
                panda$core$Bit $tmp408 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp406);
                $tmp401 = $tmp408.value;
                $l405:;
                panda$core$Bit $tmp409 = { $tmp401 };
                if ($tmp409.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp410, 2);
                    base383 = $tmp410;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp413, 111);
                panda$core$Char32$init$panda$core$Int32(&$tmp412, $tmp413);
                panda$core$Bit $tmp414 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp412);
                bool $tmp411 = $tmp414.value;
                if ($tmp411) goto $l415;
                panda$core$Int32$init$builtin_int32(&$tmp417, 79);
                panda$core$Char32$init$panda$core$Int32(&$tmp416, $tmp417);
                panda$core$Bit $tmp418 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp416);
                $tmp411 = $tmp418.value;
                $l415:;
                panda$core$Bit $tmp419 = { $tmp411 };
                if ($tmp419.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp420, 8);
                    base383 = $tmp420;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp423, 100);
                panda$core$Char32$init$panda$core$Int32(&$tmp422, $tmp423);
                panda$core$Bit $tmp424 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp422);
                bool $tmp421 = $tmp424.value;
                if ($tmp421) goto $l425;
                panda$core$Int32$init$builtin_int32(&$tmp427, 68);
                panda$core$Char32$init$panda$core$Int32(&$tmp426, $tmp427);
                panda$core$Bit $tmp428 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp426);
                $tmp421 = $tmp428.value;
                $l425:;
                panda$core$Bit $tmp429 = { $tmp421 };
                if ($tmp429.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp430, 10);
                    base383 = $tmp430;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp432, 120);
                panda$core$Char32$init$panda$core$Int32(&$tmp431, $tmp432);
                panda$core$Bit $tmp433 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp431);
                if ($tmp433.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp434, 16);
                    base383 = $tmp434;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp436, 88);
                panda$core$Char32$init$panda$core$Int32(&$tmp435, $tmp436);
                panda$core$Bit $tmp437 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13399, $tmp435);
                if ($tmp437.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp438, 16);
                    base383 = $tmp438;
                    {
                        $tmp439 = digits385;
                        panda$collections$ListView* $tmp443 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s442);
                        $tmp441 = $tmp443;
                        $tmp440 = $tmp441;
                        digits385 = $tmp440;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp444, false);
                    if ($tmp444.value) goto $l445; else goto $l446;
                    $l446:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s447, (panda$core$Int64) { 225 }, &$s448);
                    abort();
                    $l445:;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        memset(&value449, 0, sizeof(value449));
        bool $tmp450 = p_sign.value;
        if (!$tmp450) goto $l451;
        panda$core$UInt64$init$builtin_uint64(&$tmp452, 10);
        panda$core$Bit $tmp453 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base383, $tmp452);
        $tmp450 = $tmp453.value;
        $l451:;
        panda$core$Bit $tmp454 = { $tmp450 };
        if ($tmp454.value) {
        {
            panda$core$Int64 $tmp455 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp456 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp455);
            panda$core$UInt64 $tmp457 = panda$core$Int64$convert$R$panda$core$UInt64($tmp456);
            panda$core$UInt64 $tmp458 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp457, p_mask);
            value449 = $tmp458;
        }
        }
        else {
        {
            value449 = p_rawValue;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp460, 64);
        max459 = $tmp460;
        chars461 = ((panda$core$Char8*) pandaZAlloc(max459.value * 1));
        panda$core$Int64$init$builtin_int64(&$tmp463, 1);
        panda$core$Int64 $tmp464 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max459, $tmp463);
        charIndex462 = $tmp464;
        $l465:;
        {
            panda$core$UInt64 $tmp468 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value449, base383);
            panda$core$Int64 $tmp469 = panda$core$UInt64$convert$R$panda$core$Int64($tmp468);
            ITable* $tmp470 = digits385->$class->itable;
            while ($tmp470->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp470 = $tmp470->next;
            }
            $fn472 $tmp471 = $tmp470->methods[0];
            panda$core$Object* $tmp473 = $tmp471(digits385, $tmp469);
            $tmp467 = $tmp473;
            chars461[charIndex462.value] = ((panda$core$Char8$wrapper*) $tmp467)->value;
            panda$core$Panda$unref$panda$core$Object$Q($tmp467);
            panda$core$UInt64 $tmp474 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value449, base383);
            value449 = $tmp474;
            panda$core$Int64$init$builtin_int64(&$tmp475, 1);
            panda$core$Int64 $tmp476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex462, $tmp475);
            charIndex462 = $tmp476;
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp478, 0);
        panda$core$Bit $tmp479 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value449, $tmp478);
        bool $tmp477 = $tmp479.value;
        if ($tmp477) goto $l465;
        $l466:;
        bool $tmp480 = p_sign.value;
        if (!$tmp480) goto $l481;
        panda$core$UInt64$init$builtin_uint64(&$tmp482, 10);
        panda$core$Bit $tmp483 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base383, $tmp482);
        $tmp480 = $tmp483.value;
        $l481:;
        panda$core$Bit $tmp484 = { $tmp480 };
        if ($tmp484.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp486, 45);
            panda$core$Char8$init$panda$core$UInt8(&$tmp485, $tmp486);
            chars461[charIndex462.value] = $tmp485;
            panda$core$Int64$init$builtin_int64(&$tmp487, 1);
            panda$core$Int64 $tmp488 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex462, $tmp487);
            charIndex462 = $tmp488;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp489, 1);
        panda$core$Int64 $tmp490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex462, $tmp489);
        charIndex462 = $tmp490;
        panda$core$Int64 $tmp492 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max459, charIndex462);
        size491 = $tmp492;
        panda$core$Int64$init$builtin_int64(&$tmp494, 0);
        panda$core$Bit$init$builtin_bit(&$tmp495, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp493, $tmp494, size491, $tmp495);
        int64_t $tmp497 = $tmp493.min.value;
        panda$core$Int64 i496 = { $tmp497 };
        int64_t $tmp499 = $tmp493.max.value;
        bool $tmp500 = $tmp493.inclusive.value;
        if ($tmp500) goto $l507; else goto $l508;
        $l507:;
        if ($tmp497 <= $tmp499) goto $l501; else goto $l503;
        $l508:;
        if ($tmp497 < $tmp499) goto $l501; else goto $l503;
        $l501:;
        {
            panda$core$Int64 $tmp509 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i496, charIndex462);
            chars461[i496.value] = chars461[$tmp509.value];
        }
        $l504:;
        int64_t $tmp511 = $tmp499 - i496.value;
        if ($tmp500) goto $l512; else goto $l513;
        $l512:;
        if ((uint64_t) $tmp511 >= 1) goto $l510; else goto $l503;
        $l513:;
        if ((uint64_t) $tmp511 > 1) goto $l510; else goto $l503;
        $l510:;
        i496.value += 1;
        goto $l501;
        $l503:;
        panda$core$String* $tmp519 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp519, chars461, size491);
        $tmp518 = $tmp519;
        $tmp517 = $tmp518;
        $returnValue516 = $tmp517;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
        $tmp380 = 0;
        goto $l378;
        $l520:;
        return $returnValue516;
    }
    $l378:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) digits385));
    digits385 = NULL;
    switch ($tmp380) {
        case 0: goto $l520;
    }
    $l522:;
    if (false) goto $l523; else goto $l524;
    $l524:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s525, (panda$core$Int64) { 207 }, &$s526);
    abort();
    $l523:;
    abort();
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp529;
    {
    }
    $tmp529 = -1;
    goto $l527;
    $l527:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp529) {
        case -1: goto $l530;
    }
    $l530:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->allocations));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->traces));
}

