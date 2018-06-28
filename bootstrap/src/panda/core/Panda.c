#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Maybe.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
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

typedef panda$core$Bit (*$fn81)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn92)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn137)(panda$collections$Iterator*);
typedef void (*$fn178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn271)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn385)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn460)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->traces = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
}
panda$core$Maybe* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$Object* p_o) {
    panda$core$Maybe* $returnValue8;
    panda$core$Maybe* $tmp9;
    $tmp9 = NULL;
    $returnValue8 = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    return $returnValue8;
}
panda$core$Maybe* panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$String* p_msg) {
    panda$core$Maybe* $returnValue11;
    panda$core$Maybe* $tmp12;
    $tmp12 = NULL;
    $returnValue11 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    return $returnValue11;
}
panda$core$String* panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(panda$core$Class* p_cl) {
    panda$core$String* $returnValue21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp32;
    panda$core$String* $tmp35;
    panda$core$Bit $tmp16 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s15);
    bool $tmp14 = $tmp16.value;
    if ($tmp14) goto $l17;
    panda$core$Bit $tmp19 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s18);
    $tmp14 = $tmp19.value;
    $l17:;
    panda$core$Bit $tmp20 = { $tmp14 };
    if ($tmp20.value) {
    {
        $tmp22 = &$s23;
        $returnValue21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        return $returnValue21;
    }
    }
    panda$core$Bit $tmp27 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s26);
    bool $tmp25 = $tmp27.value;
    if ($tmp25) goto $l28;
    panda$core$Bit $tmp30 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s29);
    $tmp25 = $tmp30.value;
    $l28:;
    panda$core$Bit $tmp31 = { $tmp25 };
    if ($tmp31.value) {
    {
        $tmp32 = &$s33;
        $returnValue21 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        return $returnValue21;
    }
    }
    $tmp35 = p_cl->name;
    $returnValue21 = $tmp35;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
    return $returnValue21;
}
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name40 = NULL;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    panda$core$Int64$nullable old44;
    panda$core$Object* $tmp45;
    panda$core$Int64 $tmp47;
    panda$core$Object* $tmp48;
    panda$core$Int64 $tmp49;
    int $tmp39;
    {
        panda$core$String* $tmp43 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp42 = $tmp43;
        $tmp41 = $tmp42;
        name40 = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Object* $tmp46 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name40));
        $tmp45 = $tmp46;
        old44 = ($tmp45 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp45)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object($tmp45);
        if (((panda$core$Bit) { !old44.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp47, 0);
            old44 = ((panda$core$Int64$nullable) { $tmp47, true });
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp49, 1);
        panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old44.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp49, true }).value));
        panda$core$Int64$wrapper* $tmp51;
        $tmp51 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp51->value = $tmp50;
        $tmp48 = ((panda$core$Object*) $tmp51);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name40), $tmp48);
        panda$core$Panda$unref$panda$core$Object($tmp48);
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name40));
    name40 = NULL;
    switch ($tmp39) {
        case -1: goto $l52;
    }
    $l52:;
}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name56 = NULL;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$Int64$nullable old60;
    panda$core$Object* $tmp61;
    panda$core$Int64 $tmp63;
    panda$core$Object* $tmp64;
    panda$core$Int64 $tmp65;
    int $tmp55;
    {
        panda$core$String* $tmp59 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp58 = $tmp59;
        $tmp57 = $tmp58;
        name56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Object* $tmp62 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name56));
        $tmp61 = $tmp62;
        old60 = ($tmp61 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp61)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object($tmp61);
        if (((panda$core$Bit) { !old60.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp63, 0);
            old60 = ((panda$core$Int64$nullable) { $tmp63, true });
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp65, 1);
        panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old60.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp65, true }).value));
        panda$core$Int64$wrapper* $tmp67;
        $tmp67 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp67->value = $tmp66;
        $tmp64 = ((panda$core$Object*) $tmp67);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name56), $tmp64);
        panda$core$Panda$unref$panda$core$Object($tmp64);
    }
    $tmp55 = -1;
    goto $l53;
    $l53:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name56));
    name56 = NULL;
    switch ($tmp55) {
        case -1: goto $l68;
    }
    $l68:;
}
void panda$core$Panda$dumpReport(panda$core$Panda* self) {
    panda$collections$Iterator* Iter$61$972 = NULL;
    panda$collections$Iterator* $tmp73;
    panda$collections$Iterator* $tmp74;
    panda$core$String* k87 = NULL;
    panda$core$String* $tmp88;
    panda$core$Object* $tmp89;
    panda$core$Object* $tmp94;
    panda$core$Int64 $tmp96;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$Object* $tmp105;
    panda$core$Object* $tmp106;
    panda$collections$Iterator* Iter$66$9117 = NULL;
    panda$collections$Iterator* $tmp118;
    panda$collections$Iterator* $tmp119;
    panda$core$String* k132 = NULL;
    panda$core$String* $tmp133;
    panda$core$Object* $tmp134;
    panda$core$String* $tmp139;
    panda$core$String* $tmp140;
    panda$core$String* $tmp141;
    panda$core$String* $tmp142;
    panda$core$Object* $tmp146;
    panda$core$Object* $tmp147;
    {
        int $tmp71;
        {
            panda$collections$Iterator* $tmp75 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->allocations);
            $tmp74 = $tmp75;
            $tmp73 = $tmp74;
            Iter$61$972 = $tmp73;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
            $l76:;
            ITable* $tmp79 = Iter$61$972->$class->itable;
            while ($tmp79->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp79 = $tmp79->next;
            }
            $fn81 $tmp80 = $tmp79->methods[0];
            panda$core$Bit $tmp82 = $tmp80(Iter$61$972);
            panda$core$Bit $tmp83 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp82);
            bool $tmp78 = $tmp83.value;
            if (!$tmp78) goto $l77;
            {
                int $tmp86;
                {
                    ITable* $tmp90 = Iter$61$972->$class->itable;
                    while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp90 = $tmp90->next;
                    }
                    $fn92 $tmp91 = $tmp90->methods[1];
                    panda$core$Object* $tmp93 = $tmp91(Iter$61$972);
                    $tmp89 = $tmp93;
                    $tmp88 = ((panda$core$String*) $tmp89);
                    k87 = $tmp88;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
                    panda$core$Panda$unref$panda$core$Object($tmp89);
                    panda$core$Object* $tmp95 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k87));
                    $tmp94 = $tmp95;
                    panda$core$Int64$init$builtin_int64(&$tmp96, 0);
                    panda$core$Bit $tmp97 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) ($tmp94 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp94)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value), $tmp96);
                    panda$core$Panda$unref$panda$core$Object($tmp94);
                    if ($tmp97.value) {
                    {
                        panda$core$String* $tmp102 = panda$core$String$convert$R$panda$core$String(k87);
                        $tmp101 = $tmp102;
                        panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s103);
                        $tmp100 = $tmp104;
                        panda$core$Object* $tmp107 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k87));
                        $tmp106 = $tmp107;
                        panda$core$Int64$wrapper* $tmp108;
                        $tmp108 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                        $tmp108->value = ((panda$core$Int64) ($tmp106 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp106)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                        $tmp105 = ((panda$core$Object*) $tmp108);
                        panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp100, $tmp105);
                        $tmp99 = $tmp109;
                        panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s110);
                        $tmp98 = $tmp111;
                        panda$io$Console$printLine$panda$core$String($tmp98);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
                        panda$core$Panda$unref$panda$core$Object($tmp105);
                        panda$core$Panda$unref$panda$core$Object($tmp106);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                    }
                    }
                }
                $tmp86 = -1;
                goto $l84;
                $l84:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k87));
                k87 = NULL;
                switch ($tmp86) {
                    case -1: goto $l112;
                }
                $l112:;
            }
            goto $l76;
            $l77:;
        }
        $tmp71 = -1;
        goto $l69;
        $l69:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$972));
        Iter$61$972 = NULL;
        switch ($tmp71) {
            case -1: goto $l113;
        }
        $l113:;
    }
    {
        int $tmp116;
        {
            panda$collections$Iterator* $tmp120 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->traces);
            $tmp119 = $tmp120;
            $tmp118 = $tmp119;
            Iter$66$9117 = $tmp118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
            $l121:;
            ITable* $tmp124 = Iter$66$9117->$class->itable;
            while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp124 = $tmp124->next;
            }
            $fn126 $tmp125 = $tmp124->methods[0];
            panda$core$Bit $tmp127 = $tmp125(Iter$66$9117);
            panda$core$Bit $tmp128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp127);
            bool $tmp123 = $tmp128.value;
            if (!$tmp123) goto $l122;
            {
                int $tmp131;
                {
                    ITable* $tmp135 = Iter$66$9117->$class->itable;
                    while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp135 = $tmp135->next;
                    }
                    $fn137 $tmp136 = $tmp135->methods[1];
                    panda$core$Object* $tmp138 = $tmp136(Iter$66$9117);
                    $tmp134 = $tmp138;
                    $tmp133 = ((panda$core$String*) $tmp134);
                    k132 = $tmp133;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
                    panda$core$Panda$unref$panda$core$Object($tmp134);
                    panda$core$String* $tmp143 = panda$core$String$convert$R$panda$core$String(k132);
                    $tmp142 = $tmp143;
                    panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s144);
                    $tmp141 = $tmp145;
                    panda$core$Object* $tmp148 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) k132));
                    $tmp147 = $tmp148;
                    panda$core$Int64$wrapper* $tmp149;
                    $tmp149 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp149->value = ((panda$core$Int64) ($tmp147 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp147)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                    $tmp146 = ((panda$core$Object*) $tmp149);
                    panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp141, $tmp146);
                    $tmp140 = $tmp150;
                    panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s151);
                    $tmp139 = $tmp152;
                    panda$io$Console$printLine$panda$core$String($tmp139);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
                    panda$core$Panda$unref$panda$core$Object($tmp146);
                    panda$core$Panda$unref$panda$core$Object($tmp147);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
                }
                $tmp131 = -1;
                goto $l129;
                $l129:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k132));
                k132 = NULL;
                switch ($tmp131) {
                    case -1: goto $l153;
                }
                $l153:;
            }
            goto $l121;
            $l122:;
        }
        $tmp116 = -1;
        goto $l114;
        $l114:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$66$9117));
        Iter$66$9117 = NULL;
        switch ($tmp116) {
            case -1: goto $l154;
        }
        $l154:;
    }
}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* self, panda$core$String* p_s) {
    panda$core$Int64$nullable old155;
    panda$core$Object* $tmp156;
    panda$core$Int64 $tmp158;
    panda$core$Object* $tmp159;
    panda$core$Int64 $tmp160;
    panda$core$Object* $tmp157 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) p_s));
    $tmp156 = $tmp157;
    old155 = ($tmp156 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp156)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
    panda$core$Panda$unref$panda$core$Object($tmp156);
    if (((panda$core$Bit) { !old155.nonnull }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp158, 0);
        old155 = ((panda$core$Int64$nullable) { $tmp158, true });
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp160, 1);
    panda$core$Int64 $tmp161 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old155.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp160, true }).value));
    panda$core$Int64$wrapper* $tmp162;
    $tmp162 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp162->value = $tmp161;
    $tmp159 = ((panda$core$Object*) $tmp162);
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->traces, ((panda$collections$Key*) p_s), $tmp159);
    panda$core$Panda$unref$panda$core$Object($tmp159);
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp163;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$Object* $tmp173;
    panda$io$OutputStream* $tmp164 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp163 = $tmp164;
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s169, p_file);
    $tmp168 = $tmp170;
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s171);
    $tmp167 = $tmp172;
    panda$core$Int64$wrapper* $tmp174;
    $tmp174 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp174->value = p_line;
    $tmp173 = ((panda$core$Object*) $tmp174);
    panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp167, $tmp173);
    $tmp166 = $tmp175;
    panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s176);
    $tmp165 = $tmp177;
    (($fn178) $tmp163->$class->vtable[19])($tmp163, $tmp165);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    panda$core$Panda$unref$panda$core$Object($tmp173);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp179;
    panda$core$String* $tmp181;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$Object* $tmp191;
    panda$io$OutputStream* $tmp180 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp179 = $tmp180;
    panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s187, p_file);
    $tmp186 = $tmp188;
    panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s189);
    $tmp185 = $tmp190;
    panda$core$Int64$wrapper* $tmp192;
    $tmp192 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp192->value = p_line;
    $tmp191 = ((panda$core$Object*) $tmp192);
    panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp185, $tmp191);
    $tmp184 = $tmp193;
    panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s194);
    $tmp183 = $tmp195;
    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, p_msg);
    $tmp182 = $tmp196;
    panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s197);
    $tmp181 = $tmp198;
    (($fn199) $tmp179->$class->vtable[19])($tmp179, $tmp181);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
    panda$core$Panda$unref$panda$core$Object($tmp191);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp201;
    panda$core$Int32 $tmp202;
    panda$core$Char32 $tmp205;
    panda$core$Int32 $tmp206;
    panda$core$UInt64$nullable $returnValue209;
    panda$core$Char8 $tmp211;
    panda$core$UInt8 $tmp212;
    panda$core$Char32 $tmp217;
    panda$core$Int32 $tmp218;
    panda$core$Char32 $tmp221;
    panda$core$Int32 $tmp222;
    panda$core$Char8 $tmp226;
    panda$core$UInt8 $tmp227;
    panda$core$UInt64 $tmp230;
    panda$core$Char32 $tmp234;
    panda$core$Int32 $tmp235;
    panda$core$Char32 $tmp238;
    panda$core$Int32 $tmp239;
    panda$core$Char8 $tmp243;
    panda$core$UInt8 $tmp244;
    panda$core$UInt64 $tmp247;
    panda$core$Int32$init$builtin_int32(&$tmp202, 48);
    panda$core$Char32$init$panda$core$Int32(&$tmp201, $tmp202);
    panda$core$Bit $tmp203 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp201);
    bool $tmp200 = $tmp203.value;
    if (!$tmp200) goto $l204;
    panda$core$Int32$init$builtin_int32(&$tmp206, 57);
    panda$core$Char32$init$panda$core$Int32(&$tmp205, $tmp206);
    panda$core$Bit $tmp207 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp205);
    $tmp200 = $tmp207.value;
    $l204:;
    panda$core$Bit $tmp208 = { $tmp200 };
    if ($tmp208.value) {
    {
        panda$core$UInt64 $tmp210 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp212, 48);
        panda$core$Char8$init$panda$core$UInt8(&$tmp211, $tmp212);
        panda$core$UInt64 $tmp213 = panda$core$Char8$convert$R$panda$core$UInt64($tmp211);
        panda$core$UInt64 $tmp214 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp210, $tmp213);
        $returnValue209 = ((panda$core$UInt64$nullable) { $tmp214, true });
        return $returnValue209;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp218, 65);
    panda$core$Char32$init$panda$core$Int32(&$tmp217, $tmp218);
    panda$core$Bit $tmp219 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp217);
    bool $tmp216 = $tmp219.value;
    if (!$tmp216) goto $l220;
    panda$core$Int32$init$builtin_int32(&$tmp222, 90);
    panda$core$Char32$init$panda$core$Int32(&$tmp221, $tmp222);
    panda$core$Bit $tmp223 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp221);
    $tmp216 = $tmp223.value;
    $l220:;
    panda$core$Bit $tmp224 = { $tmp216 };
    if ($tmp224.value) {
    {
        panda$core$UInt64 $tmp225 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp227, 65);
        panda$core$Char8$init$panda$core$UInt8(&$tmp226, $tmp227);
        panda$core$UInt64 $tmp228 = panda$core$Char8$convert$R$panda$core$UInt64($tmp226);
        panda$core$UInt64 $tmp229 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp225, $tmp228);
        panda$core$UInt64$init$builtin_uint64(&$tmp230, 10);
        panda$core$UInt64 $tmp231 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp229, $tmp230);
        $returnValue209 = ((panda$core$UInt64$nullable) { $tmp231, true });
        return $returnValue209;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp235, 97);
    panda$core$Char32$init$panda$core$Int32(&$tmp234, $tmp235);
    panda$core$Bit $tmp236 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp234);
    bool $tmp233 = $tmp236.value;
    if (!$tmp233) goto $l237;
    panda$core$Int32$init$builtin_int32(&$tmp239, 122);
    panda$core$Char32$init$panda$core$Int32(&$tmp238, $tmp239);
    panda$core$Bit $tmp240 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp238);
    $tmp233 = $tmp240.value;
    $l237:;
    panda$core$Bit $tmp241 = { $tmp233 };
    if ($tmp241.value) {
    {
        panda$core$UInt64 $tmp242 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp244, 97);
        panda$core$Char8$init$panda$core$UInt8(&$tmp243, $tmp244);
        panda$core$UInt64 $tmp245 = panda$core$Char8$convert$R$panda$core$UInt64($tmp243);
        panda$core$UInt64 $tmp246 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp242, $tmp245);
        panda$core$UInt64$init$builtin_uint64(&$tmp247, 10);
        panda$core$UInt64 $tmp248 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp246, $tmp247);
        $returnValue209 = ((panda$core$UInt64$nullable) { $tmp248, true });
        return $returnValue209;
    }
    }
    $returnValue209 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $returnValue209;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $returnValue253;
    panda$core$UInt64 result255;
    panda$core$UInt64 $tmp256;
    panda$core$UInt64 radix257;
    panda$core$String$Index index259;
    panda$core$Equatable* $tmp264;
    panda$core$Equatable* $tmp266;
    panda$core$UInt64$nullable value273;
    panda$core$Bit $tmp252 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s251);
    if ($tmp252.value) {
    {
        $returnValue253 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue253;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp256, 0);
    result255 = $tmp256;
    panda$core$UInt64 $tmp258 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix257 = $tmp258;
    panda$core$String$Index $tmp260 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index259 = $tmp260;
    $l261:;
    panda$core$String$Index$wrapper* $tmp265;
    $tmp265 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp265->value = index259;
    $tmp264 = ((panda$core$Equatable*) $tmp265);
    panda$core$String$Index $tmp267 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$String$Index$wrapper* $tmp268;
    $tmp268 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp268->value = $tmp267;
    $tmp266 = ((panda$core$Equatable*) $tmp268);
    ITable* $tmp269 = $tmp264->$class->itable;
    while ($tmp269->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp269 = $tmp269->next;
    }
    $fn271 $tmp270 = $tmp269->methods[1];
    panda$core$Bit $tmp272 = $tmp270($tmp264, $tmp266);
    bool $tmp263 = $tmp272.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
    if (!$tmp263) goto $l262;
    {
        panda$core$Char32 $tmp274 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index259);
        panda$core$UInt64$nullable $tmp275 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp274);
        value273 = $tmp275;
        bool $tmp276 = ((panda$core$Bit) { !value273.nonnull }).value;
        if ($tmp276) goto $l277;
        panda$core$Bit $tmp278 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value273.value), radix257);
        $tmp276 = $tmp278.value;
        $l277:;
        panda$core$Bit $tmp279 = { $tmp276 };
        if ($tmp279.value) {
        {
            $returnValue253 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue253;
        }
        }
        panda$core$UInt64 $tmp281 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result255, radix257);
        panda$core$UInt64 $tmp282 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp281, ((panda$core$UInt64) value273.value));
        result255 = $tmp282;
        panda$core$String$Index $tmp283 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index259);
        index259 = $tmp283;
    }
    goto $l261;
    $l262:;
    $returnValue253 = ((panda$core$UInt64$nullable) { result255, true });
    return $returnValue253;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$Int64 $tmp286;
    panda$core$String* $tmp291;
    panda$core$String* $tmp292;
    panda$core$String$Index index297;
    panda$core$Char32 $match$176_9300;
    panda$core$Char32 $tmp304;
    panda$core$Int32 $tmp305;
    panda$core$Char32 $tmp308;
    panda$core$Int32 $tmp309;
    panda$core$Char32 $tmp313;
    panda$core$Int32 $tmp314;
    panda$core$Int64 width318;
    panda$core$String* $tmp319;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp320;
    panda$core$Bit $tmp322;
    panda$core$Char32 fill325;
    panda$core$Char32 $tmp328;
    panda$core$Int32 $tmp329;
    panda$core$Char32 $match$189_9332;
    panda$core$Char32 $tmp334;
    panda$core$Int32 $tmp335;
    panda$core$String* $returnValue337;
    panda$core$String* $tmp338;
    panda$core$String* $tmp339;
    panda$core$Char32 $tmp342;
    panda$core$Int32 $tmp343;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$core$Char32 $tmp349;
    panda$core$Int32 $tmp350;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$Bit $tmp356;
    panda$core$String* $tmp360;
    panda$core$String* $tmp361;
    panda$core$Int64 $tmp285 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Int64$init$builtin_int64(&$tmp286, 2);
    panda$core$Bit $tmp287 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp285, $tmp286);
    if ($tmp287.value) goto $l288; else goto $l289;
    $l289:;
    panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s293, p_specifier);
    $tmp292 = $tmp294;
    panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s295);
    $tmp291 = $tmp296;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s290, (panda$core$Int64) { 174 }, $tmp291);
    abort();
    $l288:;
    panda$core$String$Index $tmp298 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp299 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp298);
    index297 = $tmp299;
    {
        panda$core$Char32 $tmp301 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index297);
        $match$176_9300 = $tmp301;
        panda$core$Int32$init$builtin_int32(&$tmp305, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp304, $tmp305);
        panda$core$Bit $tmp306 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$176_9300, $tmp304);
        bool $tmp303 = $tmp306.value;
        if ($tmp303) goto $l307;
        panda$core$Int32$init$builtin_int32(&$tmp309, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp308, $tmp309);
        panda$core$Bit $tmp310 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$176_9300, $tmp308);
        $tmp303 = $tmp310.value;
        $l307:;
        panda$core$Bit $tmp311 = { $tmp303 };
        bool $tmp302 = $tmp311.value;
        if ($tmp302) goto $l312;
        panda$core$Int32$init$builtin_int32(&$tmp314, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp313, $tmp314);
        panda$core$Bit $tmp315 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$176_9300, $tmp313);
        $tmp302 = $tmp315.value;
        $l312:;
        panda$core$Bit $tmp316 = { $tmp302 };
        if ($tmp316.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp317 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index297 = $tmp317;
        }
        }
    }
    panda$core$String$Index $tmp321 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index297);
    panda$core$Bit$init$builtin_bit(&$tmp322, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp320, ((panda$core$String$Index$nullable) { $tmp321, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp322);
    panda$core$String* $tmp323 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp320);
    $tmp319 = $tmp323;
    panda$core$Int64$nullable $tmp324 = panda$core$String$convert$R$panda$core$Int64$Q($tmp319);
    width318 = ((panda$core$Int64) $tmp324.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    memset(&fill325, 0, sizeof(fill325));
    panda$core$String$Index $tmp326 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp327 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index297, $tmp326);
    if ($tmp327.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp329, 32);
        panda$core$Char32$init$panda$core$Int32(&$tmp328, $tmp329);
        fill325 = $tmp328;
    }
    }
    else {
    {
        panda$core$String$Index $tmp330 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp331 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp330);
        fill325 = $tmp331;
    }
    }
    {
        panda$core$Char32 $tmp333 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index297);
        $match$189_9332 = $tmp333;
        panda$core$Int32$init$builtin_int32(&$tmp335, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp334, $tmp335);
        panda$core$Bit $tmp336 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$189_9332, $tmp334);
        if ($tmp336.value) {
        {
            panda$core$String* $tmp340 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width318, fill325);
            $tmp339 = $tmp340;
            $tmp338 = $tmp339;
            $returnValue337 = $tmp338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
            return $returnValue337;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp343, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp342, $tmp343);
        panda$core$Bit $tmp344 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$189_9332, $tmp342);
        if ($tmp344.value) {
        {
            panda$core$String* $tmp347 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width318, fill325);
            $tmp346 = $tmp347;
            $tmp345 = $tmp346;
            $returnValue337 = $tmp345;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
            return $returnValue337;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp350, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp349, $tmp350);
        panda$core$Bit $tmp351 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$189_9332, $tmp349);
        if ($tmp351.value) {
        {
            panda$core$String* $tmp354 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width318, fill325);
            $tmp353 = $tmp354;
            $tmp352 = $tmp353;
            $returnValue337 = $tmp352;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
            return $returnValue337;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp356, false);
            if ($tmp356.value) goto $l357; else goto $l358;
            $l358:;
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s362, p_specifier);
            $tmp361 = $tmp363;
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s364);
            $tmp360 = $tmp365;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s359, (panda$core$Int64) { 194 }, $tmp360);
            abort();
            $l357:;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index369;
    panda$core$UInt64 base371;
    panda$core$UInt64 $tmp372;
    panda$collections$ListView* digits373 = NULL;
    panda$collections$ListView* $tmp374;
    panda$collections$ListView* $tmp375;
    panda$core$Comparable* $tmp378;
    panda$core$Comparable* $tmp380;
    panda$core$Char32 $match$212_13387;
    panda$core$Char32 $tmp390;
    panda$core$Int32 $tmp391;
    panda$core$Char32 $tmp394;
    panda$core$Int32 $tmp395;
    panda$core$UInt64 $tmp398;
    panda$core$Char32 $tmp400;
    panda$core$Int32 $tmp401;
    panda$core$Char32 $tmp404;
    panda$core$Int32 $tmp405;
    panda$core$UInt64 $tmp408;
    panda$core$Char32 $tmp410;
    panda$core$Int32 $tmp411;
    panda$core$Char32 $tmp414;
    panda$core$Int32 $tmp415;
    panda$core$UInt64 $tmp418;
    panda$core$Char32 $tmp419;
    panda$core$Int32 $tmp420;
    panda$core$UInt64 $tmp422;
    panda$core$Char32 $tmp423;
    panda$core$Int32 $tmp424;
    panda$core$UInt64 $tmp426;
    panda$collections$ListView* $tmp427;
    panda$collections$ListView* $tmp428;
    panda$collections$ListView* $tmp429;
    panda$core$Bit $tmp432;
    panda$core$UInt64 value437;
    panda$core$UInt64 $tmp440;
    panda$core$Int64 max447;
    panda$core$Int64 $tmp448;
    panda$core$Char8* chars449;
    panda$core$Int64 charIndex450;
    panda$core$Int64 $tmp451;
    panda$core$Object* $tmp455;
    panda$core$Int64 $tmp463;
    panda$core$UInt64 $tmp466;
    panda$core$UInt64 $tmp470;
    panda$core$Char8 $tmp473;
    panda$core$UInt8 $tmp474;
    panda$core$Int64 $tmp475;
    panda$core$Int64 $tmp477;
    panda$core$Int64 size479;
    panda$core$Range$LTpanda$core$Int64$GT $tmp481;
    panda$core$Int64 $tmp482;
    panda$core$Bit $tmp483;
    panda$core$String* $returnValue504;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    int $tmp368;
    {
        panda$core$String$Index $tmp370 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index369 = $tmp370;
        panda$core$UInt64$init$builtin_uint64(&$tmp372, 10);
        base371 = $tmp372;
        panda$collections$ListView* $tmp377 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s376);
        $tmp375 = $tmp377;
        $tmp374 = $tmp375;
        digits373 = $tmp374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
        panda$core$String$Index$wrapper* $tmp379;
        $tmp379 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp379->value = index369;
        $tmp378 = ((panda$core$Comparable*) $tmp379);
        panda$core$String$Index $tmp381 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$String$Index$wrapper* $tmp382;
        $tmp382 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp382->value = $tmp381;
        $tmp380 = ((panda$core$Comparable*) $tmp382);
        ITable* $tmp383 = $tmp378->$class->itable;
        while ($tmp383->$class != (panda$core$Class*) &panda$core$Comparable$class) {
            $tmp383 = $tmp383->next;
        }
        $fn385 $tmp384 = $tmp383->methods[1];
        panda$core$Bit $tmp386 = $tmp384($tmp378, $tmp380);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
        if ($tmp386.value) {
        {
            {
                panda$core$Char32 $tmp388 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index369);
                $match$212_13387 = $tmp388;
                panda$core$Int32$init$builtin_int32(&$tmp391, 98);
                panda$core$Char32$init$panda$core$Int32(&$tmp390, $tmp391);
                panda$core$Bit $tmp392 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp390);
                bool $tmp389 = $tmp392.value;
                if ($tmp389) goto $l393;
                panda$core$Int32$init$builtin_int32(&$tmp395, 66);
                panda$core$Char32$init$panda$core$Int32(&$tmp394, $tmp395);
                panda$core$Bit $tmp396 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp394);
                $tmp389 = $tmp396.value;
                $l393:;
                panda$core$Bit $tmp397 = { $tmp389 };
                if ($tmp397.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp398, 2);
                    base371 = $tmp398;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp401, 111);
                panda$core$Char32$init$panda$core$Int32(&$tmp400, $tmp401);
                panda$core$Bit $tmp402 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp400);
                bool $tmp399 = $tmp402.value;
                if ($tmp399) goto $l403;
                panda$core$Int32$init$builtin_int32(&$tmp405, 79);
                panda$core$Char32$init$panda$core$Int32(&$tmp404, $tmp405);
                panda$core$Bit $tmp406 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp404);
                $tmp399 = $tmp406.value;
                $l403:;
                panda$core$Bit $tmp407 = { $tmp399 };
                if ($tmp407.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp408, 8);
                    base371 = $tmp408;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp411, 100);
                panda$core$Char32$init$panda$core$Int32(&$tmp410, $tmp411);
                panda$core$Bit $tmp412 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp410);
                bool $tmp409 = $tmp412.value;
                if ($tmp409) goto $l413;
                panda$core$Int32$init$builtin_int32(&$tmp415, 68);
                panda$core$Char32$init$panda$core$Int32(&$tmp414, $tmp415);
                panda$core$Bit $tmp416 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp414);
                $tmp409 = $tmp416.value;
                $l413:;
                panda$core$Bit $tmp417 = { $tmp409 };
                if ($tmp417.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp418, 10);
                    base371 = $tmp418;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp420, 120);
                panda$core$Char32$init$panda$core$Int32(&$tmp419, $tmp420);
                panda$core$Bit $tmp421 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp419);
                if ($tmp421.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp422, 16);
                    base371 = $tmp422;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp424, 88);
                panda$core$Char32$init$panda$core$Int32(&$tmp423, $tmp424);
                panda$core$Bit $tmp425 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$212_13387, $tmp423);
                if ($tmp425.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp426, 16);
                    base371 = $tmp426;
                    {
                        $tmp427 = digits373;
                        panda$collections$ListView* $tmp431 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s430);
                        $tmp429 = $tmp431;
                        $tmp428 = $tmp429;
                        digits373 = $tmp428;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp432, false);
                    if ($tmp432.value) goto $l433; else goto $l434;
                    $l434:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s435, (panda$core$Int64) { 225 }, &$s436);
                    abort();
                    $l433:;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        memset(&value437, 0, sizeof(value437));
        bool $tmp438 = p_sign.value;
        if (!$tmp438) goto $l439;
        panda$core$UInt64$init$builtin_uint64(&$tmp440, 10);
        panda$core$Bit $tmp441 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base371, $tmp440);
        $tmp438 = $tmp441.value;
        $l439:;
        panda$core$Bit $tmp442 = { $tmp438 };
        if ($tmp442.value) {
        {
            panda$core$Int64 $tmp443 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp444 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp443);
            panda$core$UInt64 $tmp445 = panda$core$Int64$convert$R$panda$core$UInt64($tmp444);
            panda$core$UInt64 $tmp446 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp445, p_mask);
            value437 = $tmp446;
        }
        }
        else {
        {
            value437 = p_rawValue;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp448, 64);
        max447 = $tmp448;
        chars449 = ((panda$core$Char8*) pandaZAlloc(max447.value * 1));
        panda$core$Int64$init$builtin_int64(&$tmp451, 1);
        panda$core$Int64 $tmp452 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max447, $tmp451);
        charIndex450 = $tmp452;
        $l453:;
        {
            panda$core$UInt64 $tmp456 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value437, base371);
            panda$core$Int64 $tmp457 = panda$core$UInt64$convert$R$panda$core$Int64($tmp456);
            ITable* $tmp458 = digits373->$class->itable;
            while ($tmp458->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp458 = $tmp458->next;
            }
            $fn460 $tmp459 = $tmp458->methods[0];
            panda$core$Object* $tmp461 = $tmp459(digits373, $tmp457);
            $tmp455 = $tmp461;
            chars449[charIndex450.value] = ((panda$core$Char8$wrapper*) $tmp455)->value;
            panda$core$Panda$unref$panda$core$Object($tmp455);
            panda$core$UInt64 $tmp462 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value437, base371);
            value437 = $tmp462;
            panda$core$Int64$init$builtin_int64(&$tmp463, 1);
            panda$core$Int64 $tmp464 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex450, $tmp463);
            charIndex450 = $tmp464;
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp466, 0);
        panda$core$Bit $tmp467 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value437, $tmp466);
        bool $tmp465 = $tmp467.value;
        if ($tmp465) goto $l453;
        $l454:;
        bool $tmp468 = p_sign.value;
        if (!$tmp468) goto $l469;
        panda$core$UInt64$init$builtin_uint64(&$tmp470, 10);
        panda$core$Bit $tmp471 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base371, $tmp470);
        $tmp468 = $tmp471.value;
        $l469:;
        panda$core$Bit $tmp472 = { $tmp468 };
        if ($tmp472.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp474, 45);
            panda$core$Char8$init$panda$core$UInt8(&$tmp473, $tmp474);
            chars449[charIndex450.value] = $tmp473;
            panda$core$Int64$init$builtin_int64(&$tmp475, 1);
            panda$core$Int64 $tmp476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex450, $tmp475);
            charIndex450 = $tmp476;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp477, 1);
        panda$core$Int64 $tmp478 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex450, $tmp477);
        charIndex450 = $tmp478;
        panda$core$Int64 $tmp480 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max447, charIndex450);
        size479 = $tmp480;
        panda$core$Int64$init$builtin_int64(&$tmp482, 0);
        panda$core$Bit$init$builtin_bit(&$tmp483, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp481, $tmp482, size479, $tmp483);
        int64_t $tmp485 = $tmp481.min.value;
        panda$core$Int64 i484 = { $tmp485 };
        int64_t $tmp487 = $tmp481.max.value;
        bool $tmp488 = $tmp481.inclusive.value;
        if ($tmp488) goto $l495; else goto $l496;
        $l495:;
        if ($tmp485 <= $tmp487) goto $l489; else goto $l491;
        $l496:;
        if ($tmp485 < $tmp487) goto $l489; else goto $l491;
        $l489:;
        {
            panda$core$Int64 $tmp497 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i484, charIndex450);
            chars449[i484.value] = chars449[$tmp497.value];
        }
        $l492:;
        int64_t $tmp499 = $tmp487 - i484.value;
        if ($tmp488) goto $l500; else goto $l501;
        $l500:;
        if ((uint64_t) $tmp499 >= 1) goto $l498; else goto $l491;
        $l501:;
        if ((uint64_t) $tmp499 > 1) goto $l498; else goto $l491;
        $l498:;
        i484.value += 1;
        goto $l489;
        $l491:;
        panda$core$String* $tmp507 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp507, chars449, size479);
        $tmp506 = $tmp507;
        $tmp505 = $tmp506;
        $returnValue504 = $tmp505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
        $tmp368 = 0;
        goto $l366;
        $l508:;
        return $returnValue504;
    }
    $l366:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits373));
    digits373 = NULL;
    switch ($tmp368) {
        case 0: goto $l508;
    }
    $l510:;
    abort();
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp513;
    {
    }
    $tmp513 = -1;
    goto $l511;
    $l511:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp513) {
        case -1: goto $l514;
    }
    $l514:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->allocations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->traces));
}

