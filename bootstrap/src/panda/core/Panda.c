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
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ListView.h"
#include "panda/core/Comparable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$dumpReport, panda$core$Panda$countTrace$panda$core$String} };

typedef panda$core$Bit (*$fn75)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn86)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn131)(panda$collections$Iterator*);
typedef void (*$fn172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn193)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn265)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn379)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn454)(panda$collections$ListView*, panda$core$Int64);

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
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
    panda$core$Equatable* $tmp258;
    panda$core$Equatable* $tmp260;
    panda$core$UInt64$nullable value267;
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
    panda$core$String$Index$wrapper* $tmp259;
    $tmp259 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp259->value = index253;
    $tmp258 = ((panda$core$Equatable*) $tmp259);
    panda$core$String$Index $tmp261 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$String$Index$wrapper* $tmp262;
    $tmp262 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp262->value = $tmp261;
    $tmp260 = ((panda$core$Equatable*) $tmp262);
    ITable* $tmp263 = $tmp258->$class->itable;
    while ($tmp263->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp263 = $tmp263->next;
    }
    $fn265 $tmp264 = $tmp263->methods[1];
    panda$core$Bit $tmp266 = $tmp264($tmp258, $tmp260);
    bool $tmp257 = $tmp266.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    if (!$tmp257) goto $l256;
    {
        panda$core$Char32 $tmp268 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index253);
        panda$core$UInt64$nullable $tmp269 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp268);
        value267 = $tmp269;
        bool $tmp270 = ((panda$core$Bit) { !value267.nonnull }).value;
        if ($tmp270) goto $l271;
        panda$core$Bit $tmp272 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value267.value), radix251);
        $tmp270 = $tmp272.value;
        $l271:;
        panda$core$Bit $tmp273 = { $tmp270 };
        if ($tmp273.value) {
        {
            $returnValue247 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue247;
        }
        }
        panda$core$UInt64 $tmp275 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result249, radix251);
        panda$core$UInt64 $tmp276 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp275, ((panda$core$UInt64) value267.value));
        result249 = $tmp276;
        panda$core$String$Index $tmp277 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index253);
        index253 = $tmp277;
    }
    goto $l255;
    $l256:;
    $returnValue247 = ((panda$core$UInt64$nullable) { result249, true });
    return $returnValue247;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$Int64 $tmp280;
    panda$core$String* $tmp285;
    panda$core$String* $tmp286;
    panda$core$String$Index index291;
    panda$core$Char32 $match$164_9294;
    panda$core$Char32 $tmp298;
    panda$core$Int32 $tmp299;
    panda$core$Char32 $tmp302;
    panda$core$Int32 $tmp303;
    panda$core$Char32 $tmp307;
    panda$core$Int32 $tmp308;
    panda$core$Int64 width312;
    panda$core$String* $tmp313;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp314;
    panda$core$Bit $tmp316;
    panda$core$Char32 fill319;
    panda$core$Char32 $tmp322;
    panda$core$Int32 $tmp323;
    panda$core$Char32 $match$177_9326;
    panda$core$Char32 $tmp328;
    panda$core$Int32 $tmp329;
    panda$core$String* $returnValue331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$Char32 $tmp336;
    panda$core$Int32 $tmp337;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$Char32 $tmp343;
    panda$core$Int32 $tmp344;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$Bit $tmp350;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    panda$core$Int64 $tmp279 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Int64$init$builtin_int64(&$tmp280, 2);
    panda$core$Bit $tmp281 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp279, $tmp280);
    if ($tmp281.value) goto $l282; else goto $l283;
    $l283:;
    panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s287, p_specifier);
    $tmp286 = $tmp288;
    panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s289);
    $tmp285 = $tmp290;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s284, (panda$core$Int64) { 162 }, $tmp285);
    abort();
    $l282:;
    panda$core$String$Index $tmp292 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp293 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp292);
    index291 = $tmp293;
    {
        panda$core$Char32 $tmp295 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index291);
        $match$164_9294 = $tmp295;
        panda$core$Int32$init$builtin_int32(&$tmp299, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp298, $tmp299);
        panda$core$Bit $tmp300 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9294, $tmp298);
        bool $tmp297 = $tmp300.value;
        if ($tmp297) goto $l301;
        panda$core$Int32$init$builtin_int32(&$tmp303, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp302, $tmp303);
        panda$core$Bit $tmp304 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9294, $tmp302);
        $tmp297 = $tmp304.value;
        $l301:;
        panda$core$Bit $tmp305 = { $tmp297 };
        bool $tmp296 = $tmp305.value;
        if ($tmp296) goto $l306;
        panda$core$Int32$init$builtin_int32(&$tmp308, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp307, $tmp308);
        panda$core$Bit $tmp309 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9294, $tmp307);
        $tmp296 = $tmp309.value;
        $l306:;
        panda$core$Bit $tmp310 = { $tmp296 };
        if ($tmp310.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp311 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index291 = $tmp311;
        }
        }
    }
    panda$core$String$Index $tmp315 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index291);
    panda$core$Bit$init$builtin_bit(&$tmp316, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp314, ((panda$core$String$Index$nullable) { $tmp315, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp316);
    panda$core$String* $tmp317 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp314);
    $tmp313 = $tmp317;
    panda$core$Int64$nullable $tmp318 = panda$core$String$convert$R$panda$core$Int64$Q($tmp313);
    width312 = ((panda$core$Int64) $tmp318.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    memset(&fill319, 0, sizeof(fill319));
    panda$core$String$Index $tmp320 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp321 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index291, $tmp320);
    if ($tmp321.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp323, 32);
        panda$core$Char32$init$panda$core$Int32(&$tmp322, $tmp323);
        fill319 = $tmp322;
    }
    }
    else {
    {
        panda$core$String$Index $tmp324 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp325 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp324);
        fill319 = $tmp325;
    }
    }
    {
        panda$core$Char32 $tmp327 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index291);
        $match$177_9326 = $tmp327;
        panda$core$Int32$init$builtin_int32(&$tmp329, 60);
        panda$core$Char32$init$panda$core$Int32(&$tmp328, $tmp329);
        panda$core$Bit $tmp330 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9326, $tmp328);
        if ($tmp330.value) {
        {
            panda$core$String* $tmp334 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width312, fill319);
            $tmp333 = $tmp334;
            $tmp332 = $tmp333;
            $returnValue331 = $tmp332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
            return $returnValue331;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp337, 94);
        panda$core$Char32$init$panda$core$Int32(&$tmp336, $tmp337);
        panda$core$Bit $tmp338 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9326, $tmp336);
        if ($tmp338.value) {
        {
            panda$core$String* $tmp341 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width312, fill319);
            $tmp340 = $tmp341;
            $tmp339 = $tmp340;
            $returnValue331 = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
            return $returnValue331;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp344, 62);
        panda$core$Char32$init$panda$core$Int32(&$tmp343, $tmp344);
        panda$core$Bit $tmp345 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9326, $tmp343);
        if ($tmp345.value) {
        {
            panda$core$String* $tmp348 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width312, fill319);
            $tmp347 = $tmp348;
            $tmp346 = $tmp347;
            $returnValue331 = $tmp346;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
            return $returnValue331;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp350, false);
            if ($tmp350.value) goto $l351; else goto $l352;
            $l352:;
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s356, p_specifier);
            $tmp355 = $tmp357;
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s358);
            $tmp354 = $tmp359;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s353, (panda$core$Int64) { 182 }, $tmp354);
            abort();
            $l351:;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index363;
    panda$core$UInt64 base365;
    panda$core$UInt64 $tmp366;
    panda$collections$ListView* digits367 = NULL;
    panda$collections$ListView* $tmp368;
    panda$collections$ListView* $tmp369;
    panda$core$Comparable* $tmp372;
    panda$core$Comparable* $tmp374;
    panda$core$Char32 $match$200_13381;
    panda$core$Char32 $tmp384;
    panda$core$Int32 $tmp385;
    panda$core$Char32 $tmp388;
    panda$core$Int32 $tmp389;
    panda$core$UInt64 $tmp392;
    panda$core$Char32 $tmp394;
    panda$core$Int32 $tmp395;
    panda$core$Char32 $tmp398;
    panda$core$Int32 $tmp399;
    panda$core$UInt64 $tmp402;
    panda$core$Char32 $tmp404;
    panda$core$Int32 $tmp405;
    panda$core$Char32 $tmp408;
    panda$core$Int32 $tmp409;
    panda$core$UInt64 $tmp412;
    panda$core$Char32 $tmp413;
    panda$core$Int32 $tmp414;
    panda$core$UInt64 $tmp416;
    panda$core$Char32 $tmp417;
    panda$core$Int32 $tmp418;
    panda$core$UInt64 $tmp420;
    panda$collections$ListView* $tmp421;
    panda$collections$ListView* $tmp422;
    panda$collections$ListView* $tmp423;
    panda$core$Bit $tmp426;
    panda$core$UInt64 value431;
    panda$core$UInt64 $tmp434;
    panda$core$Int64 max441;
    panda$core$Int64 $tmp442;
    panda$core$Char8* chars443;
    panda$core$Int64 charIndex444;
    panda$core$Int64 $tmp445;
    panda$core$Object* $tmp449;
    panda$core$Int64 $tmp457;
    panda$core$UInt64 $tmp460;
    panda$core$UInt64 $tmp464;
    panda$core$Char8 $tmp467;
    panda$core$UInt8 $tmp468;
    panda$core$Int64 $tmp469;
    panda$core$Int64 $tmp471;
    panda$core$Int64 size473;
    panda$core$Range$LTpanda$core$Int64$GT $tmp475;
    panda$core$Int64 $tmp476;
    panda$core$Bit $tmp477;
    panda$core$String* $returnValue498;
    panda$core$String* $tmp499;
    panda$core$String* $tmp500;
    int $tmp362;
    {
        panda$core$String$Index $tmp364 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index363 = $tmp364;
        panda$core$UInt64$init$builtin_uint64(&$tmp366, 10);
        base365 = $tmp366;
        panda$collections$ListView* $tmp371 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s370);
        $tmp369 = $tmp371;
        $tmp368 = $tmp369;
        digits367 = $tmp368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
        panda$core$String$Index$wrapper* $tmp373;
        $tmp373 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp373->value = index363;
        $tmp372 = ((panda$core$Comparable*) $tmp373);
        panda$core$String$Index $tmp375 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$String$Index$wrapper* $tmp376;
        $tmp376 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp376->value = $tmp375;
        $tmp374 = ((panda$core$Comparable*) $tmp376);
        ITable* $tmp377 = $tmp372->$class->itable;
        while ($tmp377->$class != (panda$core$Class*) &panda$core$Comparable$class) {
            $tmp377 = $tmp377->next;
        }
        $fn379 $tmp378 = $tmp377->methods[1];
        panda$core$Bit $tmp380 = $tmp378($tmp372, $tmp374);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
        if ($tmp380.value) {
        {
            {
                panda$core$Char32 $tmp382 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index363);
                $match$200_13381 = $tmp382;
                panda$core$Int32$init$builtin_int32(&$tmp385, 98);
                panda$core$Char32$init$panda$core$Int32(&$tmp384, $tmp385);
                panda$core$Bit $tmp386 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp384);
                bool $tmp383 = $tmp386.value;
                if ($tmp383) goto $l387;
                panda$core$Int32$init$builtin_int32(&$tmp389, 66);
                panda$core$Char32$init$panda$core$Int32(&$tmp388, $tmp389);
                panda$core$Bit $tmp390 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp388);
                $tmp383 = $tmp390.value;
                $l387:;
                panda$core$Bit $tmp391 = { $tmp383 };
                if ($tmp391.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp392, 2);
                    base365 = $tmp392;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp395, 111);
                panda$core$Char32$init$panda$core$Int32(&$tmp394, $tmp395);
                panda$core$Bit $tmp396 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp394);
                bool $tmp393 = $tmp396.value;
                if ($tmp393) goto $l397;
                panda$core$Int32$init$builtin_int32(&$tmp399, 79);
                panda$core$Char32$init$panda$core$Int32(&$tmp398, $tmp399);
                panda$core$Bit $tmp400 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp398);
                $tmp393 = $tmp400.value;
                $l397:;
                panda$core$Bit $tmp401 = { $tmp393 };
                if ($tmp401.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp402, 8);
                    base365 = $tmp402;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp405, 100);
                panda$core$Char32$init$panda$core$Int32(&$tmp404, $tmp405);
                panda$core$Bit $tmp406 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp404);
                bool $tmp403 = $tmp406.value;
                if ($tmp403) goto $l407;
                panda$core$Int32$init$builtin_int32(&$tmp409, 68);
                panda$core$Char32$init$panda$core$Int32(&$tmp408, $tmp409);
                panda$core$Bit $tmp410 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp408);
                $tmp403 = $tmp410.value;
                $l407:;
                panda$core$Bit $tmp411 = { $tmp403 };
                if ($tmp411.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp412, 10);
                    base365 = $tmp412;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp414, 120);
                panda$core$Char32$init$panda$core$Int32(&$tmp413, $tmp414);
                panda$core$Bit $tmp415 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp413);
                if ($tmp415.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp416, 16);
                    base365 = $tmp416;
                }
                }
                else {
                panda$core$Int32$init$builtin_int32(&$tmp418, 88);
                panda$core$Char32$init$panda$core$Int32(&$tmp417, $tmp418);
                panda$core$Bit $tmp419 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13381, $tmp417);
                if ($tmp419.value) {
                {
                    panda$core$UInt64$init$builtin_uint64(&$tmp420, 16);
                    base365 = $tmp420;
                    {
                        $tmp421 = digits367;
                        panda$collections$ListView* $tmp425 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s424);
                        $tmp423 = $tmp425;
                        $tmp422 = $tmp423;
                        digits367 = $tmp422;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp426, false);
                    if ($tmp426.value) goto $l427; else goto $l428;
                    $l428:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s429, (panda$core$Int64) { 213 }, &$s430);
                    abort();
                    $l427:;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        memset(&value431, 0, sizeof(value431));
        bool $tmp432 = p_sign.value;
        if (!$tmp432) goto $l433;
        panda$core$UInt64$init$builtin_uint64(&$tmp434, 10);
        panda$core$Bit $tmp435 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base365, $tmp434);
        $tmp432 = $tmp435.value;
        $l433:;
        panda$core$Bit $tmp436 = { $tmp432 };
        if ($tmp436.value) {
        {
            panda$core$Int64 $tmp437 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp438 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp437);
            panda$core$UInt64 $tmp439 = panda$core$Int64$convert$R$panda$core$UInt64($tmp438);
            panda$core$UInt64 $tmp440 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp439, p_mask);
            value431 = $tmp440;
        }
        }
        else {
        {
            value431 = p_rawValue;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp442, 64);
        max441 = $tmp442;
        chars443 = ((panda$core$Char8*) pandaZAlloc(max441.value * 1));
        panda$core$Int64$init$builtin_int64(&$tmp445, 1);
        panda$core$Int64 $tmp446 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max441, $tmp445);
        charIndex444 = $tmp446;
        $l447:;
        {
            panda$core$UInt64 $tmp450 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value431, base365);
            panda$core$Int64 $tmp451 = panda$core$UInt64$convert$R$panda$core$Int64($tmp450);
            ITable* $tmp452 = digits367->$class->itable;
            while ($tmp452->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp452 = $tmp452->next;
            }
            $fn454 $tmp453 = $tmp452->methods[0];
            panda$core$Object* $tmp455 = $tmp453(digits367, $tmp451);
            $tmp449 = $tmp455;
            chars443[charIndex444.value] = ((panda$core$Char8$wrapper*) $tmp449)->value;
            panda$core$Panda$unref$panda$core$Object($tmp449);
            panda$core$UInt64 $tmp456 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value431, base365);
            value431 = $tmp456;
            panda$core$Int64$init$builtin_int64(&$tmp457, 1);
            panda$core$Int64 $tmp458 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex444, $tmp457);
            charIndex444 = $tmp458;
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp460, 0);
        panda$core$Bit $tmp461 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value431, $tmp460);
        bool $tmp459 = $tmp461.value;
        if ($tmp459) goto $l447;
        $l448:;
        bool $tmp462 = p_sign.value;
        if (!$tmp462) goto $l463;
        panda$core$UInt64$init$builtin_uint64(&$tmp464, 10);
        panda$core$Bit $tmp465 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base365, $tmp464);
        $tmp462 = $tmp465.value;
        $l463:;
        panda$core$Bit $tmp466 = { $tmp462 };
        if ($tmp466.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp468, 45);
            panda$core$Char8$init$panda$core$UInt8(&$tmp467, $tmp468);
            chars443[charIndex444.value] = $tmp467;
            panda$core$Int64$init$builtin_int64(&$tmp469, 1);
            panda$core$Int64 $tmp470 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex444, $tmp469);
            charIndex444 = $tmp470;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp471, 1);
        panda$core$Int64 $tmp472 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex444, $tmp471);
        charIndex444 = $tmp472;
        panda$core$Int64 $tmp474 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max441, charIndex444);
        size473 = $tmp474;
        panda$core$Int64$init$builtin_int64(&$tmp476, 0);
        panda$core$Bit$init$builtin_bit(&$tmp477, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp475, $tmp476, size473, $tmp477);
        int64_t $tmp479 = $tmp475.min.value;
        panda$core$Int64 i478 = { $tmp479 };
        int64_t $tmp481 = $tmp475.max.value;
        bool $tmp482 = $tmp475.inclusive.value;
        if ($tmp482) goto $l489; else goto $l490;
        $l489:;
        if ($tmp479 <= $tmp481) goto $l483; else goto $l485;
        $l490:;
        if ($tmp479 < $tmp481) goto $l483; else goto $l485;
        $l483:;
        {
            panda$core$Int64 $tmp491 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i478, charIndex444);
            chars443[i478.value] = chars443[$tmp491.value];
        }
        $l486:;
        int64_t $tmp493 = $tmp481 - i478.value;
        if ($tmp482) goto $l494; else goto $l495;
        $l494:;
        if ((uint64_t) $tmp493 >= 1) goto $l492; else goto $l485;
        $l495:;
        if ((uint64_t) $tmp493 > 1) goto $l492; else goto $l485;
        $l492:;
        i478.value += 1;
        goto $l483;
        $l485:;
        panda$core$String* $tmp501 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp501, chars443, size473);
        $tmp500 = $tmp501;
        $tmp499 = $tmp500;
        $returnValue498 = $tmp499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        $tmp362 = 0;
        goto $l360;
        $l502:;
        return $returnValue498;
    }
    $l360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits367));
    digits367 = NULL;
    switch ($tmp362) {
        case 0: goto $l502;
    }
    $l504:;
    abort();
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp507;
    {
    }
    $tmp507 = -1;
    goto $l505;
    $l505:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp507) {
        case -1: goto $l508;
    }
    $l508:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->allocations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->traces));
}

