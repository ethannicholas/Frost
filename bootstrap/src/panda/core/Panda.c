#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
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
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$dumpReport, panda$core$Panda$countTrace$panda$core$String} };

typedef panda$core$Bit (*$fn75)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn86)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn131)(panda$collections$Iterator*);
typedef void (*$fn172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn193)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn440)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
panda$core$String* panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(panda$core$Class* p_cl) {
    panda$core$String* $returnValue15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp26;
    panda$core$String* $tmp29;
    panda$core$Bit $tmp10 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s9);
    bool $tmp8 = $tmp10.value;
    if ($tmp8) goto $l11;
    panda$core$Bit $tmp13 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s12);
    $tmp8 = $tmp13.value;
    $l11:;
    panda$core$Bit $tmp14 = { $tmp8 };
    if ($tmp14.value) {
    {
        $tmp16 = &$s17;
        $returnValue15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        return $returnValue15;
    }
    }
    panda$core$Bit $tmp21 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s20);
    bool $tmp19 = $tmp21.value;
    if ($tmp19) goto $l22;
    panda$core$Bit $tmp24 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s23);
    $tmp19 = $tmp24.value;
    $l22:;
    panda$core$Bit $tmp25 = { $tmp19 };
    if ($tmp25.value) {
    {
        $tmp26 = &$s27;
        $returnValue15 = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        return $returnValue15;
    }
    }
    $tmp29 = p_cl->name;
    $returnValue15 = $tmp29;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
    return $returnValue15;
}
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name34 = NULL;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$Int64$nullable old38;
    panda$core$Object* $tmp39;
    panda$core$Int64 $tmp41;
    panda$core$Object* $tmp42;
    panda$core$Int64 $tmp43;
    int $tmp33;
    {
        panda$core$String* $tmp37 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp36 = $tmp37;
        $tmp35 = $tmp36;
        name34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Object* $tmp40 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name34));
        $tmp39 = $tmp40;
        old38 = ($tmp39 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp39)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object($tmp39);
        if (((panda$core$Bit) { !old38.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp41, 0);
            old38 = ((panda$core$Int64$nullable) { $tmp41, true });
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp43, 1);
        panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old38.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp43, true }).value));
        panda$core$Int64$wrapper* $tmp45;
        $tmp45 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp45->value = $tmp44;
        $tmp42 = ((panda$core$Object*) $tmp45);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name34), $tmp42);
        panda$core$Panda$unref$panda$core$Object($tmp42);
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name34));
    name34 = NULL;
    switch ($tmp33) {
        case -1: goto $l46;
    }
    $l46:;
}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name50 = NULL;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$Int64$nullable old54;
    panda$core$Object* $tmp55;
    panda$core$Int64 $tmp57;
    panda$core$Object* $tmp58;
    panda$core$Int64 $tmp59;
    int $tmp49;
    {
        panda$core$String* $tmp53 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp52 = $tmp53;
        $tmp51 = $tmp52;
        name50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Object* $tmp56 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name50));
        $tmp55 = $tmp56;
        old54 = ($tmp55 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp55)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object($tmp55);
        if (((panda$core$Bit) { !old54.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp57, 0);
            old54 = ((panda$core$Int64$nullable) { $tmp57, true });
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp59, 1);
        panda$core$Int64 $tmp60 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old54.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp59, true }).value));
        panda$core$Int64$wrapper* $tmp61;
        $tmp61 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp61->value = $tmp60;
        $tmp58 = ((panda$core$Object*) $tmp61);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name50), $tmp58);
        panda$core$Panda$unref$panda$core$Object($tmp58);
    }
    $tmp49 = -1;
    goto $l47;
    $l47:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name50));
    name50 = NULL;
    switch ($tmp49) {
        case -1: goto $l62;
    }
    $l62:;
}
void panda$core$Panda$dumpReport(panda$core$Panda* self) {
    panda$collections$Iterator* Iter$49$966 = NULL;
    panda$collections$Iterator* $tmp67;
    panda$collections$Iterator* $tmp68;
    panda$core$String* k81 = NULL;
    panda$core$String* $tmp82;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp88;
    panda$core$Int64 $tmp90;
    panda$core$String* $tmp92;
    panda$core$String* $tmp93;
    panda$core$String* $tmp94;
    panda$core$String* $tmp95;
    panda$core$Object* $tmp99;
    panda$core$Object* $tmp100;
    panda$collections$Iterator* Iter$54$9111 = NULL;
    panda$collections$Iterator* $tmp112;
    panda$collections$Iterator* $tmp113;
    panda$core$String* k126 = NULL;
    panda$core$String* $tmp127;
    panda$core$Object* $tmp128;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    panda$core$String* $tmp135;
    panda$core$String* $tmp136;
    panda$core$Object* $tmp140;
    panda$core$Object* $tmp141;
    {
        int $tmp65;
        {
            panda$collections$Iterator* $tmp69 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->allocations);
            $tmp68 = $tmp69;
            $tmp67 = $tmp68;
            Iter$49$966 = $tmp67;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
            $l70:;
            ITable* $tmp73 = Iter$49$966->$class->itable;
            while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp73 = $tmp73->next;
            }
            $fn75 $tmp74 = $tmp73->methods[0];
            panda$core$Bit $tmp76 = $tmp74(Iter$49$966);
            panda$core$Bit $tmp77 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp76);
            bool $tmp72 = $tmp77.value;
            if (!$tmp72) goto $l71;
            {
                int $tmp80;
                {
                    ITable* $tmp84 = Iter$49$966->$class->itable;
                    while ($tmp84->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp84 = $tmp84->next;
                    }
                    $fn86 $tmp85 = $tmp84->methods[1];
                    panda$core$Object* $tmp87 = $tmp85(Iter$49$966);
                    $tmp83 = $tmp87;
                    $tmp82 = ((panda$core$String*) $tmp83);
                    k81 = $tmp82;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
                    panda$core$Panda$unref$panda$core$Object($tmp83);
                    panda$core$Object* $tmp89 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k81));
                    $tmp88 = $tmp89;
                    panda$core$Int64$init$builtin_int64(&$tmp90, 0);
                    panda$core$Bit $tmp91 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) ($tmp88 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp88)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value), $tmp90);
                    panda$core$Panda$unref$panda$core$Object($tmp88);
                    if ($tmp91.value) {
                    {
                        panda$core$String* $tmp96 = panda$core$String$convert$R$panda$core$String(k81);
                        $tmp95 = $tmp96;
                        panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s97);
                        $tmp94 = $tmp98;
                        panda$core$Object* $tmp101 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k81));
                        $tmp100 = $tmp101;
                        panda$core$Int64$wrapper* $tmp102;
                        $tmp102 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                        $tmp102->value = ((panda$core$Int64) ($tmp100 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp100)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                        $tmp99 = ((panda$core$Object*) $tmp102);
                        panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp94, $tmp99);
                        $tmp93 = $tmp103;
                        panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s104);
                        $tmp92 = $tmp105;
                        panda$io$Console$printLine$panda$core$String($tmp92);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
                        panda$core$Panda$unref$panda$core$Object($tmp99);
                        panda$core$Panda$unref$panda$core$Object($tmp100);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
                    }
                    }
                }
                $tmp80 = -1;
                goto $l78;
                $l78:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k81));
                k81 = NULL;
                switch ($tmp80) {
                    case -1: goto $l106;
                }
                $l106:;
            }
            goto $l70;
            $l71:;
        }
        $tmp65 = -1;
        goto $l63;
        $l63:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$49$966));
        Iter$49$966 = NULL;
        switch ($tmp65) {
            case -1: goto $l107;
        }
        $l107:;
    }
    {
        int $tmp110;
        {
            panda$collections$Iterator* $tmp114 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->traces);
            $tmp113 = $tmp114;
            $tmp112 = $tmp113;
            Iter$54$9111 = $tmp112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
            $l115:;
            ITable* $tmp118 = Iter$54$9111->$class->itable;
            while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp118 = $tmp118->next;
            }
            $fn120 $tmp119 = $tmp118->methods[0];
            panda$core$Bit $tmp121 = $tmp119(Iter$54$9111);
            panda$core$Bit $tmp122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp121);
            bool $tmp117 = $tmp122.value;
            if (!$tmp117) goto $l116;
            {
                int $tmp125;
                {
                    ITable* $tmp129 = Iter$54$9111->$class->itable;
                    while ($tmp129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp129 = $tmp129->next;
                    }
                    $fn131 $tmp130 = $tmp129->methods[1];
                    panda$core$Object* $tmp132 = $tmp130(Iter$54$9111);
                    $tmp128 = $tmp132;
                    $tmp127 = ((panda$core$String*) $tmp128);
                    k126 = $tmp127;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                    panda$core$Panda$unref$panda$core$Object($tmp128);
                    panda$core$String* $tmp137 = panda$core$String$convert$R$panda$core$String(k126);
                    $tmp136 = $tmp137;
                    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s138);
                    $tmp135 = $tmp139;
                    panda$core$Object* $tmp142 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) k126));
                    $tmp141 = $tmp142;
                    panda$core$Int64$wrapper* $tmp143;
                    $tmp143 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp143->value = ((panda$core$Int64) ($tmp141 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp141)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                    $tmp140 = ((panda$core$Object*) $tmp143);
                    panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp135, $tmp140);
                    $tmp134 = $tmp144;
                    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s145);
                    $tmp133 = $tmp146;
                    panda$io$Console$printLine$panda$core$String($tmp133);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
                    panda$core$Panda$unref$panda$core$Object($tmp140);
                    panda$core$Panda$unref$panda$core$Object($tmp141);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
                }
                $tmp125 = -1;
                goto $l123;
                $l123:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k126));
                k126 = NULL;
                switch ($tmp125) {
                    case -1: goto $l147;
                }
                $l147:;
            }
            goto $l115;
            $l116:;
        }
        $tmp110 = -1;
        goto $l108;
        $l108:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$9111));
        Iter$54$9111 = NULL;
        switch ($tmp110) {
            case -1: goto $l148;
        }
        $l148:;
    }
}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* self, panda$core$String* p_s) {
    panda$core$Int64$nullable old149;
    panda$core$Object* $tmp150;
    panda$core$Int64 $tmp152;
    panda$core$Object* $tmp153;
    panda$core$Int64 $tmp154;
    panda$core$Object* $tmp151 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) p_s));
    $tmp150 = $tmp151;
    old149 = ($tmp150 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp150)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
    panda$core$Panda$unref$panda$core$Object($tmp150);
    if (((panda$core$Bit) { !old149.nonnull }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp152, 0);
        old149 = ((panda$core$Int64$nullable) { $tmp152, true });
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp154, 1);
    panda$core$Int64 $tmp155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old149.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp154, true }).value));
    panda$core$Int64$wrapper* $tmp156;
    $tmp156 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp156->value = $tmp155;
    $tmp153 = ((panda$core$Object*) $tmp156);
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->traces, ((panda$collections$Key*) p_s), $tmp153);
    panda$core$Panda$unref$panda$core$Object($tmp153);
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp157;
    panda$core$String* $tmp159;
    panda$core$String* $tmp160;
    panda$core$String* $tmp161;
    panda$core$String* $tmp162;
    panda$core$Object* $tmp167;
    panda$io$OutputStream* $tmp158 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp157 = $tmp158;
    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s163, p_file);
    $tmp162 = $tmp164;
    panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s165);
    $tmp161 = $tmp166;
    panda$core$Int64$wrapper* $tmp168;
    $tmp168 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp168->value = p_line;
    $tmp167 = ((panda$core$Object*) $tmp168);
    panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp161, $tmp167);
    $tmp160 = $tmp169;
    panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s170);
    $tmp159 = $tmp171;
    (($fn172) $tmp157->$class->vtable[19])($tmp157, $tmp159);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$Panda$unref$panda$core$Object($tmp167);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp173;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$String* $tmp180;
    panda$core$Object* $tmp185;
    panda$io$OutputStream* $tmp174 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp173 = $tmp174;
    panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s181, p_file);
    $tmp180 = $tmp182;
    panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, &$s183);
    $tmp179 = $tmp184;
    panda$core$Int64$wrapper* $tmp186;
    $tmp186 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp186->value = p_line;
    $tmp185 = ((panda$core$Object*) $tmp186);
    panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp179, $tmp185);
    $tmp178 = $tmp187;
    panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s188);
    $tmp177 = $tmp189;
    panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, p_msg);
    $tmp176 = $tmp190;
    panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s191);
    $tmp175 = $tmp192;
    (($fn193) $tmp173->$class->vtable[19])($tmp173, $tmp175);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
    panda$core$Panda$unref$panda$core$Object($tmp185);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp195;
    panda$core$Int32 $tmp196;
    panda$core$Char32 $tmp199;
    panda$core$Int32 $tmp200;
    panda$core$UInt64$nullable $returnValue203;
    panda$core$Char8 $tmp205;
    panda$core$UInt8 $tmp206;
    panda$core$Char32 $tmp211;
    panda$core$Int32 $tmp212;
    panda$core$Char32 $tmp215;
    panda$core$Int32 $tmp216;
    panda$core$Char8 $tmp220;
    panda$core$UInt8 $tmp221;
    panda$core$UInt64 $tmp224;
    panda$core$Char32 $tmp228;
    panda$core$Int32 $tmp229;
    panda$core$Char32 $tmp232;
    panda$core$Int32 $tmp233;
    panda$core$Char8 $tmp237;
    panda$core$UInt8 $tmp238;
    panda$core$UInt64 $tmp241;
    panda$core$Int32$init$builtin_int32(&$tmp196, 48);
    panda$core$Char32$init$panda$core$Int32(&$tmp195, $tmp196);
    panda$core$Bit $tmp197 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp195);
    bool $tmp194 = $tmp197.value;
    if (!$tmp194) goto $l198;
    panda$core$Int32$init$builtin_int32(&$tmp200, 57);
    panda$core$Char32$init$panda$core$Int32(&$tmp199, $tmp200);
    panda$core$Bit $tmp201 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp199);
    $tmp194 = $tmp201.value;
    $l198:;
    panda$core$Bit $tmp202 = { $tmp194 };
    if ($tmp202.value) {
    {
        panda$core$UInt64 $tmp204 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp206, 48);
        panda$core$Char8$init$panda$core$UInt8(&$tmp205, $tmp206);
        panda$core$UInt64 $tmp207 = panda$core$Char8$convert$R$panda$core$UInt64($tmp205);
        panda$core$UInt64 $tmp208 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp204, $tmp207);
        $returnValue203 = ((panda$core$UInt64$nullable) { $tmp208, true });
        return $returnValue203;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp212, 65);
    panda$core$Char32$init$panda$core$Int32(&$tmp211, $tmp212);
    panda$core$Bit $tmp213 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp211);
    bool $tmp210 = $tmp213.value;
    if (!$tmp210) goto $l214;
    panda$core$Int32$init$builtin_int32(&$tmp216, 90);
    panda$core$Char32$init$panda$core$Int32(&$tmp215, $tmp216);
    panda$core$Bit $tmp217 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp215);
    $tmp210 = $tmp217.value;
    $l214:;
    panda$core$Bit $tmp218 = { $tmp210 };
    if ($tmp218.value) {
    {
        panda$core$UInt64 $tmp219 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp221, 65);
        panda$core$Char8$init$panda$core$UInt8(&$tmp220, $tmp221);
        panda$core$UInt64 $tmp222 = panda$core$Char8$convert$R$panda$core$UInt64($tmp220);
        panda$core$UInt64 $tmp223 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp219, $tmp222);
        panda$core$UInt64$init$builtin_uint64(&$tmp224, 10);
        panda$core$UInt64 $tmp225 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp223, $tmp224);
        $returnValue203 = ((panda$core$UInt64$nullable) { $tmp225, true });
        return $returnValue203;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp229, 97);
    panda$core$Char32$init$panda$core$Int32(&$tmp228, $tmp229);
    panda$core$Bit $tmp230 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp228);
    bool $tmp227 = $tmp230.value;
    if (!$tmp227) goto $l231;
    panda$core$Int32$init$builtin_int32(&$tmp233, 122);
    panda$core$Char32$init$panda$core$Int32(&$tmp232, $tmp233);
    panda$core$Bit $tmp234 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp232);
    $tmp227 = $tmp234.value;
    $l231:;
    panda$core$Bit $tmp235 = { $tmp227 };
    if ($tmp235.value) {
    {
        panda$core$UInt64 $tmp236 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$UInt8$init$builtin_uint8(&$tmp238, 97);
        panda$core$Char8$init$panda$core$UInt8(&$tmp237, $tmp238);
        panda$core$UInt64 $tmp239 = panda$core$Char8$convert$R$panda$core$UInt64($tmp237);
        panda$core$UInt64 $tmp240 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp236, $tmp239);
        panda$core$UInt64$init$builtin_uint64(&$tmp241, 10);
        panda$core$UInt64 $tmp242 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp240, $tmp241);
        $returnValue203 = ((panda$core$UInt64$nullable) { $tmp242, true });
        return $returnValue203;
    }
    }
    $returnValue203 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $returnValue203;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $returnValue247;
    panda$core$UInt64 result249;
    panda$core$UInt64 $tmp250;
    panda$core$UInt64 radix251;
    panda$core$String$Index index253;
    panda$core$UInt64$nullable value260;
    panda$core$Bit $tmp246 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s245);
    if ($tmp246.value) {
    {
        $returnValue247 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue247;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp250, 0);
    result249 = $tmp250;
    panda$core$UInt64 $tmp252 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix251 = $tmp252;
    panda$core$String$Index $tmp254 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index253 = $tmp254;
    $l255:;
    panda$core$String$Index $tmp258 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp259 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index253, $tmp258);
    bool $tmp257 = $tmp259.value;
    if (!$tmp257) goto $l256;
    {
        panda$core$Char32 $tmp261 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index253);
        panda$core$UInt64$nullable $tmp262 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp261);
        value260 = $tmp262;
        bool $tmp263 = ((panda$core$Bit) { !value260.nonnull }).value;
        if ($tmp263) goto $l264;
        panda$core$Bit $tmp265 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value260.value), radix251);
        $tmp263 = $tmp265.value;
        $l264:;
        panda$core$Bit $tmp266 = { $tmp263 };
        if ($tmp266.value) {
        {
            $returnValue247 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue247;
        }
        }
        panda$core$UInt64 $tmp268 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result249, radix251);
        panda$core$UInt64 $tmp269 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp268, ((panda$core$UInt64) value260.value));
        result249 = $tmp269;
        panda$core$String$Index $tmp270 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index253);
        index253 = $tmp270;
    }
    goto $l255;
    $l256:;
    $returnValue247 = ((panda$core$UInt64$nullable) { result249, true });
    return $returnValue247;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$Int64 $tmp273;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    panda$core$String$Index index284;
    panda$core$Char32 $match$164_9287;
    panda$core$Char32 $tmp291;
    panda$core$Int32 $tmp292;
    panda$core$Char32 $tmp295;
    panda$core$Int32 $tmp296;
    panda$core$Char32 $tmp300;
    panda$core$Int32 $tmp301;
    panda$core$Int64 width305;
    panda$core$String* $tmp306;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp307;
    panda$core$Bit $tmp309;
    panda$core$Char32 fill312;
    panda$core$Char32 $tmp315;
    panda$core$Int32 $tmp316;
    panda$core$Char32 $match$177_9319;
    panda$core$Char32 $tmp321;
    panda$core$Int32 $tmp322;
    panda$core$String* $returnValue324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$Char32 $tmp329;
    panda$core$Int32 $tmp330;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$Char32 $tmp336;
    panda$core$Int32 $tmp337;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$Bit $tmp343;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$Int64 $tmp272 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Int64$init$builtin_int64(&$tmp273, 2);
    panda$core$Bit $tmp274 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp272, $tmp273);
    if ($tmp274.value) goto $l275; else goto $l276;
    $l276:;
    panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s280, p_specifier);
    $tmp279 = $tmp281;
    panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s282);
    $tmp278 = $tmp283;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s277, (panda$core$Int64) { 162 }, $tmp278);
    abort();
    $l275:;
    panda$core$String$Index $tmp285 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp286 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp285);
    index284 = $tmp286;
    {
        panda$core$Char32 $tmp288 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index284);
        $match$164_9287 = $tmp288;
        panda$core$Int32$init$builtin_int32(&$tmp292, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp291, $tmp292);
        panda$core$Bit $tmp293 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9287, $tmp291);
        bool $tmp290 = $tmp293.value;
        if ($tmp290) goto $l294;
        panda$core$Int32$init$builtin_int32(&$tmp296, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp295, $tmp296);
        panda$core$Bit $tmp297 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9287, $tmp295);
        $tmp290 = $tmp297.value;
        $l294:;
        panda$core$Bit $tmp298 = { $tmp290 };
        bool $tmp289 = $tmp298.value;
        if ($tmp289) goto $l299;
        panda$core$Int32$init$builtin_int32(&$tmp301, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp300, $tmp301);
        panda$core$Bit $tmp302 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9287, $tmp300);
        $tmp289 = $tmp302.value;
        $l299:;
        panda$core$Bit $tmp303 = { $tmp289 };
        if ($tmp303.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp304 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index284 = $tmp304;
        }
        }
    }
    panda$core$String$Index $tmp308 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index284);
    panda$core$Bit$init$builtin_bit(&$tmp309, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp307, ((panda$core$String$Index$nullable) { $tmp308, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp309);
    panda$core$String* $tmp310 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp307);
    $tmp306 = $tmp310;
    panda$core$Int64$nullable $tmp311 = panda$core$String$convert$R$panda$core$Int64$Q($tmp306);
    width305 = ((panda$core$Int64) $tmp311.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
    memset(&fill312, 0, sizeof(fill312));
    panda$core$String$Index $tmp313 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp314 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index284, $tmp313);
    if ($tmp314.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp316, 32);
        panda$core$Char32$init$panda$core$Int32(&$tmp315, $tmp316);
        fill312 = $tmp315;
    }
    }
    else {
    {
        panda$core$String$Index $tmp317 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp318 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp317);
        fill312 = $tmp318;
    }
    }
    {
        panda$core$Char32 $tmp320 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index284);
        $match$177_9319 = $tmp320;
        panda$core$Int32$init$builtin_int32(&$tmp322, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp321, $tmp322);
        panda$core$Bit $tmp323 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9319, $tmp321);
        if ($tmp323.value) {
        {
            panda$core$String* $tmp327 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width305, fill312);
            $tmp326 = $tmp327;
            $tmp325 = $tmp326;
            $returnValue324 = $tmp325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
            return $returnValue324;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp330, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp329, $tmp330);
        panda$core$Bit $tmp331 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9319, $tmp329);
        if ($tmp331.value) {
        {
            panda$core$String* $tmp334 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width305, fill312);
            $tmp333 = $tmp334;
            $tmp332 = $tmp333;
            $returnValue324 = $tmp332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
            return $returnValue324;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp337, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp336, $tmp337);
        panda$core$Bit $tmp338 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9319, $tmp336);
        if ($tmp338.value) {
        {
            panda$core$String* $tmp341 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width305, fill312);
            $tmp340 = $tmp341;
            $tmp339 = $tmp340;
            $returnValue324 = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
            return $returnValue324;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp343, false);
            if ($tmp343.value) goto $l344; else goto $l345;
            $l345:;
            panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s349, p_specifier);
            $tmp348 = $tmp350;
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s351);
            $tmp347 = $tmp352;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s346, (panda$core$Int64) { 182 }, $tmp347);
            abort();
            $l344:;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index356;
    panda$core$UInt64 base358;
    panda$core$UInt64 $tmp359;
    panda$collections$ListView* digits360 = NULL;
    panda$collections$ListView* $tmp361;
    panda$collections$ListView* $tmp362;
    panda$core$Char32 $match$200_13367;
    panda$core$Char32 $tmp370;
    panda$core$Int32 $tmp371;
    panda$core$Char32 $tmp374;
    panda$core$Int32 $tmp375;
    panda$core$UInt64 $tmp378;
    panda$core$Char32 $tmp380;
    panda$core$Int32 $tmp381;
    panda$core$Char32 $tmp384;
    panda$core$Int32 $tmp385;
    panda$core$UInt64 $tmp388;
    panda$core$Char32 $tmp390;
    panda$core$Int32 $tmp391;
    panda$core$Char32 $tmp394;
    panda$core$Int32 $tmp395;
    panda$core$UInt64 $tmp398;
    panda$core$Char32 $tmp399;
    panda$core$Int32 $tmp400;
    panda$core$UInt64 $tmp402;
    panda$core$Char32 $tmp403;
    panda$core$Int32 $tmp404;
    panda$core$UInt64 $tmp406;
    panda$collections$ListView* $tmp407;
    panda$collections$ListView* $tmp408;
    panda$collections$ListView* $tmp409;
    panda$core$Bit $tmp412;
    panda$core$UInt64 value417;
    panda$core$UInt64 $tmp420;
    panda$core$Int64 max427;
    panda$core$Int64 $tmp428;
    panda$core$Char8* chars429;
    panda$core$Int64 charIndex430;
    panda$core$Int64 $tmp431;
    panda$core$Object* $tmp435;
    panda$core$Int64 $tmp443;
    panda$core$UInt64 $tmp446;
    panda$core$UInt64 $tmp450;
    panda$core$Char8 $tmp453;
    panda$core$UInt8 $tmp454;
    panda$core$Int64 $tmp455;
    panda$core$Int64 $tmp457;
    panda$core$Int64 size459;
    panda$core$Range$LTpanda$core$Int64$GT $tmp461;
    panda$core$Int64 $tmp462;
    panda$core$Bit $tmp463;
    panda$core$String* $returnValue484;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    int $tmp355;
    {
        panda$core$String$Index $tmp357 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index356 = $tmp357;
        panda$core$UInt64$init$builtin_uint64(&$tmp359, 10);
        base358 = $tmp359;
        panda$collections$ListView* $tmp364 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s363);
        $tmp362 = $tmp364;
        $tmp361 = $tmp362;
        digits360 = $tmp361;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$String$Index $tmp365 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$Bit $tmp366 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index356, $tmp365);
        if ($tmp366.value) {
        {
            {
                panda$core$Char32 $tmp368 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index356);
                $match$200_13367 = $tmp368;
                panda$core$Int32$init$builtin_int32(&$tmp371, 98);
                panda$core$Char32$init$panda$core$Int32(&$tmp370, $tmp371);
                panda$core$Bit $tmp372 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp370);
                bool $tmp369 = $tmp372.value;
                if ($tmp369) goto $l373;
                panda$core$Int32$init$builtin_int32(&$tmp375, 66);
                panda$core$Char32$init$panda$core$Int32(&$tmp374, $tmp375);
                panda$core$Bit $tmp376 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp374);
                $tmp369 = $tmp376.value;
                $l373:;
                panda$core$Bit $tmp377 = { $tmp369 };
                if ($tmp377.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp378, 2);
                    base358 = $tmp378;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp381, 111);
                panda$core$Char32$init$panda$core$Int32(&$tmp380, $tmp381);
                panda$core$Bit $tmp382 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp380);
                bool $tmp379 = $tmp382.value;
                if ($tmp379) goto $l383;
                panda$core$Int32$init$builtin_int32(&$tmp385, 79);
                panda$core$Char32$init$panda$core$Int32(&$tmp384, $tmp385);
                panda$core$Bit $tmp386 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp384);
                $tmp379 = $tmp386.value;
                $l383:;
                panda$core$Bit $tmp387 = { $tmp379 };
                if ($tmp387.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp388, 8);
                    base358 = $tmp388;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp391, 100);
                panda$core$Char32$init$panda$core$Int32(&$tmp390, $tmp391);
                panda$core$Bit $tmp392 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp390);
                bool $tmp389 = $tmp392.value;
                if ($tmp389) goto $l393;
                panda$core$Int32$init$builtin_int32(&$tmp395, 68);
                panda$core$Char32$init$panda$core$Int32(&$tmp394, $tmp395);
                panda$core$Bit $tmp396 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp394);
                $tmp389 = $tmp396.value;
                $l393:;
                panda$core$Bit $tmp397 = { $tmp389 };
                if ($tmp397.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp398, 10);
                    base358 = $tmp398;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp400, 120);
                panda$core$Char32$init$panda$core$Int32(&$tmp399, $tmp400);
                panda$core$Bit $tmp401 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp399);
                if ($tmp401.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp402, 16);
                    base358 = $tmp402;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp404, 88);
                panda$core$Char32$init$panda$core$Int32(&$tmp403, $tmp404);
                panda$core$Bit $tmp405 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13367, $tmp403);
                if ($tmp405.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp406, 16);
                    base358 = $tmp406;
                    {
                        $tmp407 = digits360;
                        panda$collections$ListView* $tmp411 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s410);
                        $tmp409 = $tmp411;
                        $tmp408 = $tmp409;
                        digits360 = $tmp408;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp412, false);
                    if ($tmp412.value) goto $l413; else goto $l414;
                    $l414:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s415, (panda$core$Int64) { 213 }, &$s416);
                    abort();
                    $l413:;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        memset(&value417, 0, sizeof(value417));
        bool $tmp418 = p_sign.value;
        if (!$tmp418) goto $l419;
        panda$core$UInt64$init$builtin_uint64(&$tmp420, 10);
        panda$core$Bit $tmp421 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base358, $tmp420);
        $tmp418 = $tmp421.value;
        $l419:;
        panda$core$Bit $tmp422 = { $tmp418 };
        if ($tmp422.value) {
        {
            panda$core$Int64 $tmp423 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp424 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp423);
            panda$core$UInt64 $tmp425 = panda$core$Int64$convert$R$panda$core$UInt64($tmp424);
            panda$core$UInt64 $tmp426 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp425, p_mask);
            value417 = $tmp426;
        }
        }
        else {
        {
            value417 = p_rawValue;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp428, 64);
        max427 = $tmp428;
        chars429 = ((panda$core$Char8*) pandaZAlloc(max427.value * 1));
        panda$core$Int64$init$builtin_int64(&$tmp431, 1);
        panda$core$Int64 $tmp432 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max427, $tmp431);
        charIndex430 = $tmp432;
        $l433:;
        {
            panda$core$UInt64 $tmp436 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value417, base358);
            panda$core$Int64 $tmp437 = panda$core$UInt64$convert$R$panda$core$Int64($tmp436);
            ITable* $tmp438 = digits360->$class->itable;
            while ($tmp438->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp438 = $tmp438->next;
            }
            $fn440 $tmp439 = $tmp438->methods[0];
            panda$core$Object* $tmp441 = $tmp439(digits360, $tmp437);
            $tmp435 = $tmp441;
            chars429[charIndex430.value] = ((panda$core$Char8$wrapper*) $tmp435)->value;
            panda$core$Panda$unref$panda$core$Object($tmp435);
            panda$core$UInt64 $tmp442 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value417, base358);
            value417 = $tmp442;
            panda$core$Int64$init$builtin_int64(&$tmp443, 1);
            panda$core$Int64 $tmp444 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex430, $tmp443);
            charIndex430 = $tmp444;
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp446, 0);
        panda$core$Bit $tmp447 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value417, $tmp446);
        bool $tmp445 = $tmp447.value;
        if ($tmp445) goto $l433;
        $l434:;
        bool $tmp448 = p_sign.value;
        if (!$tmp448) goto $l449;
        panda$core$UInt64$init$builtin_uint64(&$tmp450, 10);
        panda$core$Bit $tmp451 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base358, $tmp450);
        $tmp448 = $tmp451.value;
        $l449:;
        panda$core$Bit $tmp452 = { $tmp448 };
        if ($tmp452.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp454, 45);
            panda$core$Char8$init$panda$core$UInt8(&$tmp453, $tmp454);
            chars429[charIndex430.value] = $tmp453;
            panda$core$Int64$init$builtin_int64(&$tmp455, 1);
            panda$core$Int64 $tmp456 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex430, $tmp455);
            charIndex430 = $tmp456;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp457, 1);
        panda$core$Int64 $tmp458 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex430, $tmp457);
        charIndex430 = $tmp458;
        panda$core$Int64 $tmp460 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max427, charIndex430);
        size459 = $tmp460;
        panda$core$Int64$init$builtin_int64(&$tmp462, 0);
        panda$core$Bit$init$builtin_bit(&$tmp463, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp461, $tmp462, size459, $tmp463);
        int64_t $tmp465 = $tmp461.min.value;
        panda$core$Int64 i464 = { $tmp465 };
        int64_t $tmp467 = $tmp461.max.value;
        bool $tmp468 = $tmp461.inclusive.value;
        if ($tmp468) goto $l475; else goto $l476;
        $l475:;
        if ($tmp465 <= $tmp467) goto $l469; else goto $l471;
        $l476:;
        if ($tmp465 < $tmp467) goto $l469; else goto $l471;
        $l469:;
        {
            panda$core$Int64 $tmp477 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i464, charIndex430);
            chars429[i464.value] = chars429[$tmp477.value];
        }
        $l472:;
        int64_t $tmp479 = $tmp467 - i464.value;
        if ($tmp468) goto $l480; else goto $l481;
        $l480:;
        if ((uint64_t) $tmp479 >= 1) goto $l478; else goto $l471;
        $l481:;
        if ((uint64_t) $tmp479 > 1) goto $l478; else goto $l471;
        $l478:;
        i464.value += 1;
        goto $l469;
        $l471:;
        panda$core$String* $tmp487 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp487, chars429, size459);
        $tmp486 = $tmp487;
        $tmp485 = $tmp486;
        $returnValue484 = $tmp485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        $tmp355 = 0;
        goto $l353;
        $l488:;
        return $returnValue484;
    }
    $l353:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits360));
    digits360 = NULL;
    switch ($tmp355) {
        case 0: goto $l488;
    }
    $l490:;
    abort();
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp493;
    {
    }
    $tmp493 = -1;
    goto $l491;
    $l491:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp493) {
        case -1: goto $l494;
    }
    $l494:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->allocations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->traces));
}

