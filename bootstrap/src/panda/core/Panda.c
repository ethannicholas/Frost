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

typedef panda$core$Bit (*$fn71)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn82)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn126)(panda$collections$Iterator*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn393)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
    panda$core$Object* $tmp41;
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
            old38 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old38.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
        panda$core$Int64$wrapper* $tmp43;
        $tmp43 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp43->value = $tmp42;
        $tmp41 = ((panda$core$Object*) $tmp43);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name34), $tmp41);
        panda$core$Panda$unref$panda$core$Object($tmp41);
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name34));
    name34 = NULL;
    switch ($tmp33) {
        case -1: goto $l44;
    }
    $l44:;
}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$String* name48 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $tmp50;
    panda$core$Int64$nullable old52;
    panda$core$Object* $tmp53;
    panda$core$Object* $tmp55;
    int $tmp47;
    {
        panda$core$String* $tmp51 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(p_cl);
        $tmp50 = $tmp51;
        $tmp49 = $tmp50;
        name48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
        panda$core$Object* $tmp54 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) name48));
        $tmp53 = $tmp54;
        old52 = ($tmp53 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp53)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
        panda$core$Panda$unref$panda$core$Object($tmp53);
        if (((panda$core$Bit) { !old52.nonnull }).value) {
        {
            old52 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        panda$core$Int64 $tmp56 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old52.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
        panda$core$Int64$wrapper* $tmp57;
        $tmp57 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp57->value = $tmp56;
        $tmp55 = ((panda$core$Object*) $tmp57);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) name48), $tmp55);
        panda$core$Panda$unref$panda$core$Object($tmp55);
    }
    $tmp47 = -1;
    goto $l45;
    $l45:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name48));
    name48 = NULL;
    switch ($tmp47) {
        case -1: goto $l58;
    }
    $l58:;
}
void panda$core$Panda$dumpReport(panda$core$Panda* self) {
    panda$collections$Iterator* Iter$49$962 = NULL;
    panda$collections$Iterator* $tmp63;
    panda$collections$Iterator* $tmp64;
    panda$core$String* k77 = NULL;
    panda$core$String* $tmp78;
    panda$core$Object* $tmp79;
    panda$core$Object* $tmp84;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$Object* $tmp94;
    panda$core$Object* $tmp95;
    panda$collections$Iterator* Iter$54$9106 = NULL;
    panda$collections$Iterator* $tmp107;
    panda$collections$Iterator* $tmp108;
    panda$core$String* k121 = NULL;
    panda$core$String* $tmp122;
    panda$core$Object* $tmp123;
    panda$core$String* $tmp128;
    panda$core$String* $tmp129;
    panda$core$String* $tmp130;
    panda$core$String* $tmp131;
    panda$core$Object* $tmp135;
    panda$core$Object* $tmp136;
    {
        int $tmp61;
        {
            panda$collections$Iterator* $tmp65 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->allocations);
            $tmp64 = $tmp65;
            $tmp63 = $tmp64;
            Iter$49$962 = $tmp63;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
            $l66:;
            ITable* $tmp69 = Iter$49$962->$class->itable;
            while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp69 = $tmp69->next;
            }
            $fn71 $tmp70 = $tmp69->methods[0];
            panda$core$Bit $tmp72 = $tmp70(Iter$49$962);
            panda$core$Bit $tmp73 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp72);
            bool $tmp68 = $tmp73.value;
            if (!$tmp68) goto $l67;
            {
                int $tmp76;
                {
                    ITable* $tmp80 = Iter$49$962->$class->itable;
                    while ($tmp80->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp80 = $tmp80->next;
                    }
                    $fn82 $tmp81 = $tmp80->methods[1];
                    panda$core$Object* $tmp83 = $tmp81(Iter$49$962);
                    $tmp79 = $tmp83;
                    $tmp78 = ((panda$core$String*) $tmp79);
                    k77 = $tmp78;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
                    panda$core$Panda$unref$panda$core$Object($tmp79);
                    panda$core$Object* $tmp85 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k77));
                    $tmp84 = $tmp85;
                    panda$core$Bit $tmp86 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) ($tmp84 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp84)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value), ((panda$core$Int64) { 0 }));
                    panda$core$Panda$unref$panda$core$Object($tmp84);
                    if ($tmp86.value) {
                    {
                        panda$core$String* $tmp91 = panda$core$String$convert$R$panda$core$String(k77);
                        $tmp90 = $tmp91;
                        panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s92);
                        $tmp89 = $tmp93;
                        panda$core$Object* $tmp96 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k77));
                        $tmp95 = $tmp96;
                        panda$core$Int64$wrapper* $tmp97;
                        $tmp97 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                        $tmp97->value = ((panda$core$Int64) ($tmp95 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp95)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                        $tmp94 = ((panda$core$Object*) $tmp97);
                        panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp89, $tmp94);
                        $tmp88 = $tmp98;
                        panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s99);
                        $tmp87 = $tmp100;
                        panda$io$Console$printLine$panda$core$String($tmp87);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
                        panda$core$Panda$unref$panda$core$Object($tmp94);
                        panda$core$Panda$unref$panda$core$Object($tmp95);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
                    }
                    }
                }
                $tmp76 = -1;
                goto $l74;
                $l74:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k77));
                k77 = NULL;
                switch ($tmp76) {
                    case -1: goto $l101;
                }
                $l101:;
            }
            goto $l66;
            $l67:;
        }
        $tmp61 = -1;
        goto $l59;
        $l59:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$49$962));
        Iter$49$962 = NULL;
        switch ($tmp61) {
            case -1: goto $l102;
        }
        $l102:;
    }
    {
        int $tmp105;
        {
            panda$collections$Iterator* $tmp109 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->traces);
            $tmp108 = $tmp109;
            $tmp107 = $tmp108;
            Iter$54$9106 = $tmp107;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
            $l110:;
            ITable* $tmp113 = Iter$54$9106->$class->itable;
            while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp113 = $tmp113->next;
            }
            $fn115 $tmp114 = $tmp113->methods[0];
            panda$core$Bit $tmp116 = $tmp114(Iter$54$9106);
            panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
            bool $tmp112 = $tmp117.value;
            if (!$tmp112) goto $l111;
            {
                int $tmp120;
                {
                    ITable* $tmp124 = Iter$54$9106->$class->itable;
                    while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp124 = $tmp124->next;
                    }
                    $fn126 $tmp125 = $tmp124->methods[1];
                    panda$core$Object* $tmp127 = $tmp125(Iter$54$9106);
                    $tmp123 = $tmp127;
                    $tmp122 = ((panda$core$String*) $tmp123);
                    k121 = $tmp122;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
                    panda$core$Panda$unref$panda$core$Object($tmp123);
                    panda$core$String* $tmp132 = panda$core$String$convert$R$panda$core$String(k121);
                    $tmp131 = $tmp132;
                    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s133);
                    $tmp130 = $tmp134;
                    panda$core$Object* $tmp137 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) k121));
                    $tmp136 = $tmp137;
                    panda$core$Int64$wrapper* $tmp138;
                    $tmp138 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp138->value = ((panda$core$Int64) ($tmp136 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp136)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                    $tmp135 = ((panda$core$Object*) $tmp138);
                    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp130, $tmp135);
                    $tmp129 = $tmp139;
                    panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, &$s140);
                    $tmp128 = $tmp141;
                    panda$io$Console$printLine$panda$core$String($tmp128);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
                    panda$core$Panda$unref$panda$core$Object($tmp135);
                    panda$core$Panda$unref$panda$core$Object($tmp136);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                }
                $tmp120 = -1;
                goto $l118;
                $l118:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k121));
                k121 = NULL;
                switch ($tmp120) {
                    case -1: goto $l142;
                }
                $l142:;
            }
            goto $l110;
            $l111:;
        }
        $tmp105 = -1;
        goto $l103;
        $l103:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$9106));
        Iter$54$9106 = NULL;
        switch ($tmp105) {
            case -1: goto $l143;
        }
        $l143:;
    }
}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* self, panda$core$String* p_s) {
    panda$core$Int64$nullable old144;
    panda$core$Object* $tmp145;
    panda$core$Object* $tmp147;
    panda$core$Object* $tmp146 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->traces, ((panda$collections$Key*) p_s));
    $tmp145 = $tmp146;
    old144 = ($tmp145 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp145)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
    panda$core$Panda$unref$panda$core$Object($tmp145);
    if (((panda$core$Bit) { !old144.nonnull }).value) {
    {
        old144 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    panda$core$Int64 $tmp148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old144.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
    panda$core$Int64$wrapper* $tmp149;
    $tmp149 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp149->value = $tmp148;
    $tmp147 = ((panda$core$Object*) $tmp149);
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->traces, ((panda$collections$Key*) p_s), $tmp147);
    panda$core$Panda$unref$panda$core$Object($tmp147);
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp150;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    panda$core$Object* $tmp160;
    panda$io$OutputStream* $tmp151 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp150 = $tmp151;
    panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s156, p_file);
    $tmp155 = $tmp157;
    panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s158);
    $tmp154 = $tmp159;
    panda$core$Int64$wrapper* $tmp161;
    $tmp161 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp161->value = p_line;
    $tmp160 = ((panda$core$Object*) $tmp161);
    panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp154, $tmp160);
    $tmp153 = $tmp162;
    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, &$s163);
    $tmp152 = $tmp164;
    (($fn165) $tmp150->$class->vtable[19])($tmp150, $tmp152);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
    panda$core$Panda$unref$panda$core$Object($tmp160);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp166;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$Object* $tmp178;
    panda$io$OutputStream* $tmp167 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp166 = $tmp167;
    panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s174, p_file);
    $tmp173 = $tmp175;
    panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s176);
    $tmp172 = $tmp177;
    panda$core$Int64$wrapper* $tmp179;
    $tmp179 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp179->value = p_line;
    $tmp178 = ((panda$core$Object*) $tmp179);
    panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp172, $tmp178);
    $tmp171 = $tmp180;
    panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s181);
    $tmp170 = $tmp182;
    panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, p_msg);
    $tmp169 = $tmp183;
    panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s184);
    $tmp168 = $tmp185;
    (($fn186) $tmp166->$class->vtable[19])($tmp166, $tmp168);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
    panda$core$Panda$unref$panda$core$Object($tmp178);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp188;
    panda$core$Char32 $tmp191;
    panda$core$UInt64$nullable $returnValue194;
    panda$core$Char8 $tmp196;
    panda$core$Char32 $tmp201;
    panda$core$Char32 $tmp204;
    panda$core$Char8 $tmp208;
    panda$core$Char32 $tmp214;
    panda$core$Char32 $tmp217;
    panda$core$Char8 $tmp221;
    panda$core$Char32$init$panda$core$Int32(&$tmp188, ((panda$core$Int32) { 48 }));
    panda$core$Bit $tmp189 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp188);
    bool $tmp187 = $tmp189.value;
    if (!$tmp187) goto $l190;
    panda$core$Char32$init$panda$core$Int32(&$tmp191, ((panda$core$Int32) { 57 }));
    panda$core$Bit $tmp192 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp191);
    $tmp187 = $tmp192.value;
    $l190:;
    panda$core$Bit $tmp193 = { $tmp187 };
    if ($tmp193.value) {
    {
        panda$core$UInt64 $tmp195 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp196, ((panda$core$UInt8) { 48 }));
        panda$core$UInt64 $tmp197 = panda$core$Char8$convert$R$panda$core$UInt64($tmp196);
        panda$core$UInt64 $tmp198 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp195, $tmp197);
        $returnValue194 = ((panda$core$UInt64$nullable) { $tmp198, true });
        return $returnValue194;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp201, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp202 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp201);
    bool $tmp200 = $tmp202.value;
    if (!$tmp200) goto $l203;
    panda$core$Char32$init$panda$core$Int32(&$tmp204, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp205 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp204);
    $tmp200 = $tmp205.value;
    $l203:;
    panda$core$Bit $tmp206 = { $tmp200 };
    if ($tmp206.value) {
    {
        panda$core$UInt64 $tmp207 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp208, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp209 = panda$core$Char8$convert$R$panda$core$UInt64($tmp208);
        panda$core$UInt64 $tmp210 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp207, $tmp209);
        panda$core$UInt64 $tmp211 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp210, ((panda$core$UInt64) { 10 }));
        $returnValue194 = ((panda$core$UInt64$nullable) { $tmp211, true });
        return $returnValue194;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp214, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp215 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp214);
    bool $tmp213 = $tmp215.value;
    if (!$tmp213) goto $l216;
    panda$core$Char32$init$panda$core$Int32(&$tmp217, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp218 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp217);
    $tmp213 = $tmp218.value;
    $l216:;
    panda$core$Bit $tmp219 = { $tmp213 };
    if ($tmp219.value) {
    {
        panda$core$UInt64 $tmp220 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp222 = panda$core$Char8$convert$R$panda$core$UInt64($tmp221);
        panda$core$UInt64 $tmp223 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp220, $tmp222);
        panda$core$UInt64 $tmp224 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp223, ((panda$core$UInt64) { 10 }));
        $returnValue194 = ((panda$core$UInt64$nullable) { $tmp224, true });
        return $returnValue194;
    }
    }
    $returnValue194 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $returnValue194;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $returnValue229;
    panda$core$UInt64 result231;
    panda$core$UInt64 radix232;
    panda$core$String$Index index234;
    panda$core$UInt64$nullable value241;
    panda$core$Bit $tmp228 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s227);
    if ($tmp228.value) {
    {
        $returnValue229 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue229;
    }
    }
    result231 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp233 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix232 = $tmp233;
    panda$core$String$Index $tmp235 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index234 = $tmp235;
    $l236:;
    panda$core$String$Index $tmp239 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp240 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index234, $tmp239);
    bool $tmp238 = $tmp240.value;
    if (!$tmp238) goto $l237;
    {
        panda$core$Char32 $tmp242 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index234);
        panda$core$UInt64$nullable $tmp243 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp242);
        value241 = $tmp243;
        bool $tmp244 = ((panda$core$Bit) { !value241.nonnull }).value;
        if ($tmp244) goto $l245;
        panda$core$Bit $tmp246 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value241.value), radix232);
        $tmp244 = $tmp246.value;
        $l245:;
        panda$core$Bit $tmp247 = { $tmp244 };
        if ($tmp247.value) {
        {
            $returnValue229 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue229;
        }
        }
        panda$core$UInt64 $tmp249 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result231, radix232);
        panda$core$UInt64 $tmp250 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp249, ((panda$core$UInt64) value241.value));
        result231 = $tmp250;
        panda$core$String$Index $tmp251 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index234);
        index234 = $tmp251;
    }
    goto $l236;
    $l237:;
    $returnValue229 = ((panda$core$UInt64$nullable) { result231, true });
    return $returnValue229;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$String$Index index264;
    panda$core$Char32 $match$164_9267;
    panda$core$Char32 $tmp271;
    panda$core$Char32 $tmp274;
    panda$core$Char32 $tmp278;
    panda$core$Int64 width282;
    panda$core$String* $tmp283;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp284;
    panda$core$Char32 fill288;
    panda$core$Char32 $tmp291;
    panda$core$Char32 $match$177_9294;
    panda$core$Char32 $tmp296;
    panda$core$String* $returnValue298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$Char32 $tmp303;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$Char32 $tmp309;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$Int64 $tmp253 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp254 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp253, ((panda$core$Int64) { 2 }));
    if ($tmp254.value) goto $l255; else goto $l256;
    $l256:;
    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s260, p_specifier);
    $tmp259 = $tmp261;
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s262);
    $tmp258 = $tmp263;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s257, (panda$core$Int64) { 162 }, $tmp258);
    abort();
    $l255:;
    panda$core$String$Index $tmp265 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp266 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp265);
    index264 = $tmp266;
    {
        panda$core$Char32 $tmp268 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index264);
        $match$164_9267 = $tmp268;
        panda$core$Char32$init$panda$core$Int32(&$tmp271, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp272 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9267, $tmp271);
        bool $tmp270 = $tmp272.value;
        if ($tmp270) goto $l273;
        panda$core$Char32$init$panda$core$Int32(&$tmp274, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp275 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9267, $tmp274);
        $tmp270 = $tmp275.value;
        $l273:;
        panda$core$Bit $tmp276 = { $tmp270 };
        bool $tmp269 = $tmp276.value;
        if ($tmp269) goto $l277;
        panda$core$Char32$init$panda$core$Int32(&$tmp278, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp279 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$164_9267, $tmp278);
        $tmp269 = $tmp279.value;
        $l277:;
        panda$core$Bit $tmp280 = { $tmp269 };
        if ($tmp280.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp281 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index264 = $tmp281;
        }
        }
    }
    panda$core$String$Index $tmp285 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index264);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp284, ((panda$core$String$Index$nullable) { $tmp285, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp286 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp284);
    $tmp283 = $tmp286;
    panda$core$Int64$nullable $tmp287 = panda$core$String$convert$R$panda$core$Int64$Q($tmp283);
    width282 = ((panda$core$Int64) $tmp287.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
    memset(&fill288, 0, sizeof(fill288));
    panda$core$String$Index $tmp289 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp290 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index264, $tmp289);
    if ($tmp290.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp291, ((panda$core$Int32) { 32 }));
        fill288 = $tmp291;
    }
    }
    else {
    {
        panda$core$String$Index $tmp292 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp293 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp292);
        fill288 = $tmp293;
    }
    }
    {
        panda$core$Char32 $tmp295 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index264);
        $match$177_9294 = $tmp295;
        panda$core$Char32$init$panda$core$Int32(&$tmp296, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp297 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9294, $tmp296);
        if ($tmp297.value) {
        {
            panda$core$String* $tmp301 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width282, fill288);
            $tmp300 = $tmp301;
            $tmp299 = $tmp300;
            $returnValue298 = $tmp299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
            return $returnValue298;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp303, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp304 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9294, $tmp303);
        if ($tmp304.value) {
        {
            panda$core$String* $tmp307 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width282, fill288);
            $tmp306 = $tmp307;
            $tmp305 = $tmp306;
            $returnValue298 = $tmp305;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
            return $returnValue298;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp309, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp310 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$177_9294, $tmp309);
        if ($tmp310.value) {
        {
            panda$core$String* $tmp313 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width282, fill288);
            $tmp312 = $tmp313;
            $tmp311 = $tmp312;
            $returnValue298 = $tmp311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
            return $returnValue298;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l315; else goto $l316;
            $l316:;
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s320, p_specifier);
            $tmp319 = $tmp321;
            panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s322);
            $tmp318 = $tmp323;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s317, (panda$core$Int64) { 182 }, $tmp318);
            abort();
            $l315:;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index327;
    panda$core$UInt64 base329;
    panda$collections$ListView* digits330 = NULL;
    panda$collections$ListView* $tmp331;
    panda$collections$ListView* $tmp332;
    panda$core$Char32 $match$200_13337;
    panda$core$Char32 $tmp340;
    panda$core$Char32 $tmp343;
    panda$core$Char32 $tmp347;
    panda$core$Char32 $tmp350;
    panda$core$Char32 $tmp354;
    panda$core$Char32 $tmp357;
    panda$core$Char32 $tmp360;
    panda$core$Char32 $tmp362;
    panda$collections$ListView* $tmp364;
    panda$collections$ListView* $tmp365;
    panda$collections$ListView* $tmp366;
    panda$core$UInt64 value373;
    panda$core$Int64 max382;
    panda$core$Char8* chars383;
    panda$core$Int64 charIndex384;
    panda$core$Object* $tmp388;
    panda$core$Char8 $tmp403;
    panda$core$Int64 size406;
    panda$core$Range$LTpanda$core$Int64$GT $tmp408;
    panda$core$String* $returnValue429;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    int $tmp326;
    {
        panda$core$String$Index $tmp328 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index327 = $tmp328;
        base329 = ((panda$core$UInt64) { 10 });
        panda$collections$ListView* $tmp334 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s333);
        $tmp332 = $tmp334;
        $tmp331 = $tmp332;
        digits330 = $tmp331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
        panda$core$String$Index $tmp335 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$Bit $tmp336 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index327, $tmp335);
        if ($tmp336.value) {
        {
            {
                panda$core$Char32 $tmp338 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index327);
                $match$200_13337 = $tmp338;
                panda$core$Char32$init$panda$core$Int32(&$tmp340, ((panda$core$Int32) { 98 }));
                panda$core$Bit $tmp341 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp340);
                bool $tmp339 = $tmp341.value;
                if ($tmp339) goto $l342;
                panda$core$Char32$init$panda$core$Int32(&$tmp343, ((panda$core$Int32) { 66 }));
                panda$core$Bit $tmp344 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp343);
                $tmp339 = $tmp344.value;
                $l342:;
                panda$core$Bit $tmp345 = { $tmp339 };
                if ($tmp345.value) {
                {
                    base329 = ((panda$core$UInt64) { 2 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp347, ((panda$core$Int32) { 111 }));
                panda$core$Bit $tmp348 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp347);
                bool $tmp346 = $tmp348.value;
                if ($tmp346) goto $l349;
                panda$core$Char32$init$panda$core$Int32(&$tmp350, ((panda$core$Int32) { 79 }));
                panda$core$Bit $tmp351 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp350);
                $tmp346 = $tmp351.value;
                $l349:;
                panda$core$Bit $tmp352 = { $tmp346 };
                if ($tmp352.value) {
                {
                    base329 = ((panda$core$UInt64) { 8 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp354, ((panda$core$Int32) { 100 }));
                panda$core$Bit $tmp355 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp354);
                bool $tmp353 = $tmp355.value;
                if ($tmp353) goto $l356;
                panda$core$Char32$init$panda$core$Int32(&$tmp357, ((panda$core$Int32) { 68 }));
                panda$core$Bit $tmp358 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp357);
                $tmp353 = $tmp358.value;
                $l356:;
                panda$core$Bit $tmp359 = { $tmp353 };
                if ($tmp359.value) {
                {
                    base329 = ((panda$core$UInt64) { 10 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp360, ((panda$core$Int32) { 120 }));
                panda$core$Bit $tmp361 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp360);
                if ($tmp361.value) {
                {
                    base329 = ((panda$core$UInt64) { 16 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp362, ((panda$core$Int32) { 88 }));
                panda$core$Bit $tmp363 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$200_13337, $tmp362);
                if ($tmp363.value) {
                {
                    base329 = ((panda$core$UInt64) { 16 });
                    {
                        $tmp364 = digits330;
                        panda$collections$ListView* $tmp368 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s367);
                        $tmp366 = $tmp368;
                        $tmp365 = $tmp366;
                        digits330 = $tmp365;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                    }
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l369; else goto $l370;
                    $l370:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s371, (panda$core$Int64) { 213 }, &$s372);
                    abort();
                    $l369:;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        memset(&value373, 0, sizeof(value373));
        bool $tmp374 = p_sign.value;
        if (!$tmp374) goto $l375;
        panda$core$Bit $tmp376 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base329, ((panda$core$UInt64) { 10 }));
        $tmp374 = $tmp376.value;
        $l375:;
        panda$core$Bit $tmp377 = { $tmp374 };
        if ($tmp377.value) {
        {
            panda$core$Int64 $tmp378 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp379 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp378);
            panda$core$UInt64 $tmp380 = panda$core$Int64$convert$R$panda$core$UInt64($tmp379);
            panda$core$UInt64 $tmp381 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp380, p_mask);
            value373 = $tmp381;
        }
        }
        else {
        {
            value373 = p_rawValue;
        }
        }
        max382 = ((panda$core$Int64) { 64 });
        chars383 = ((panda$core$Char8*) pandaZAlloc(max382.value * 1));
        panda$core$Int64 $tmp385 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max382, ((panda$core$Int64) { 1 }));
        charIndex384 = $tmp385;
        $l386:;
        {
            panda$core$UInt64 $tmp389 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value373, base329);
            panda$core$Int64 $tmp390 = panda$core$UInt64$convert$R$panda$core$Int64($tmp389);
            ITable* $tmp391 = digits330->$class->itable;
            while ($tmp391->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp391 = $tmp391->next;
            }
            $fn393 $tmp392 = $tmp391->methods[0];
            panda$core$Object* $tmp394 = $tmp392(digits330, $tmp390);
            $tmp388 = $tmp394;
            chars383[charIndex384.value] = ((panda$core$Char8$wrapper*) $tmp388)->value;
            panda$core$Panda$unref$panda$core$Object($tmp388);
            panda$core$UInt64 $tmp395 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value373, base329);
            value373 = $tmp395;
            panda$core$Int64 $tmp396 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex384, ((panda$core$Int64) { 1 }));
            charIndex384 = $tmp396;
        }
        panda$core$Bit $tmp398 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value373, ((panda$core$UInt64) { 0 }));
        bool $tmp397 = $tmp398.value;
        if ($tmp397) goto $l386;
        $l387:;
        bool $tmp399 = p_sign.value;
        if (!$tmp399) goto $l400;
        panda$core$Bit $tmp401 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base329, ((panda$core$UInt64) { 10 }));
        $tmp399 = $tmp401.value;
        $l400:;
        panda$core$Bit $tmp402 = { $tmp399 };
        if ($tmp402.value) {
        {
            panda$core$Char8$init$panda$core$UInt8(&$tmp403, ((panda$core$UInt8) { 45 }));
            chars383[charIndex384.value] = $tmp403;
            panda$core$Int64 $tmp404 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex384, ((panda$core$Int64) { 1 }));
            charIndex384 = $tmp404;
        }
        }
        panda$core$Int64 $tmp405 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex384, ((panda$core$Int64) { 1 }));
        charIndex384 = $tmp405;
        panda$core$Int64 $tmp407 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max382, charIndex384);
        size406 = $tmp407;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp408, ((panda$core$Int64) { 0 }), size406, ((panda$core$Bit) { false }));
        int64_t $tmp410 = $tmp408.min.value;
        panda$core$Int64 i409 = { $tmp410 };
        int64_t $tmp412 = $tmp408.max.value;
        bool $tmp413 = $tmp408.inclusive.value;
        if ($tmp413) goto $l420; else goto $l421;
        $l420:;
        if ($tmp410 <= $tmp412) goto $l414; else goto $l416;
        $l421:;
        if ($tmp410 < $tmp412) goto $l414; else goto $l416;
        $l414:;
        {
            panda$core$Int64 $tmp422 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i409, charIndex384);
            chars383[i409.value] = chars383[$tmp422.value];
        }
        $l417:;
        int64_t $tmp424 = $tmp412 - i409.value;
        if ($tmp413) goto $l425; else goto $l426;
        $l425:;
        if ((uint64_t) $tmp424 >= 1) goto $l423; else goto $l416;
        $l426:;
        if ((uint64_t) $tmp424 > 1) goto $l423; else goto $l416;
        $l423:;
        i409.value += 1;
        goto $l414;
        $l416:;
        panda$core$String* $tmp432 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp432, chars383, size406);
        $tmp431 = $tmp432;
        $tmp430 = $tmp431;
        $returnValue429 = $tmp430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
        $tmp326 = 0;
        goto $l324;
        $l433:;
        return $returnValue429;
    }
    $l324:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits330));
    digits330 = NULL;
    switch ($tmp326) {
        case 0: goto $l433;
    }
    $l435:;
    abort();
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp438;
    {
    }
    $tmp438 = -1;
    goto $l436;
    $l436:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp438) {
        case -1: goto $l439;
    }
    $l439:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->allocations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->traces));
}

