#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
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
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$reportAllocations} };

typedef panda$core$Bit (*$fn29)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn40)(panda$collections$Iterator*);
typedef void (*$fn76)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn97)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn289)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };

void panda$core$Panda$init(panda$core$Panda* self) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    self->allocations = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->allocations = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
}
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$Int64$nullable old5;
    panda$core$Object* $tmp6;
    panda$core$Object* $tmp8;
    panda$core$Object* $tmp7 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) p_cl->name));
    $tmp6 = $tmp7;
    old5 = ($tmp6 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp6)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
    panda$core$Panda$unref$panda$core$Object($tmp6);
    if (((panda$core$Bit) { !old5.nonnull }).value) {
    {
        old5 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    panda$core$Int64 $tmp9 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old5.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
    panda$core$Int64$wrapper* $tmp10;
    $tmp10 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp10->value = $tmp9;
    $tmp8 = ((panda$core$Object*) $tmp10);
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) p_cl->name), $tmp8);
    panda$core$Panda$unref$panda$core$Object($tmp8);
}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl) {
    panda$core$Int64$nullable old11;
    panda$core$Object* $tmp12;
    panda$core$Object* $tmp14;
    panda$core$Object* $tmp13 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) p_cl->name));
    $tmp12 = $tmp13;
    old11 = ($tmp12 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp12)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
    panda$core$Panda$unref$panda$core$Object($tmp12);
    if (((panda$core$Bit) { !old11.nonnull }).value) {
    {
        old11 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    panda$core$Int64 $tmp15 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) old11.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
    panda$core$Int64$wrapper* $tmp16;
    $tmp16 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp16->value = $tmp15;
    $tmp14 = ((panda$core$Object*) $tmp16);
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->allocations, ((panda$collections$Key*) p_cl->name), $tmp14);
    panda$core$Panda$unref$panda$core$Object($tmp14);
}
void panda$core$Panda$reportAllocations(panda$core$Panda* self) {
    panda$collections$Iterator* Iter$33$920 = NULL;
    panda$collections$Iterator* $tmp21;
    panda$collections$Iterator* $tmp22;
    panda$core$String* k35 = NULL;
    panda$core$String* $tmp36;
    panda$core$Object* $tmp37;
    panda$core$Object* $tmp42;
    panda$core$String* $tmp45;
    panda$core$String* $tmp46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$Object* $tmp52;
    panda$core$Object* $tmp53;
    {
        int $tmp19;
        {
            panda$collections$Iterator* $tmp23 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->allocations);
            $tmp22 = $tmp23;
            $tmp21 = $tmp22;
            Iter$33$920 = $tmp21;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
            $l24:;
            ITable* $tmp27 = Iter$33$920->$class->itable;
            while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp27 = $tmp27->next;
            }
            $fn29 $tmp28 = $tmp27->methods[0];
            panda$core$Bit $tmp30 = $tmp28(Iter$33$920);
            panda$core$Bit $tmp31 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp30);
            bool $tmp26 = $tmp31.value;
            if (!$tmp26) goto $l25;
            {
                int $tmp34;
                {
                    ITable* $tmp38 = Iter$33$920->$class->itable;
                    while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp38 = $tmp38->next;
                    }
                    $fn40 $tmp39 = $tmp38->methods[1];
                    panda$core$Object* $tmp41 = $tmp39(Iter$33$920);
                    $tmp37 = $tmp41;
                    $tmp36 = ((panda$core$String*) $tmp37);
                    k35 = $tmp36;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
                    panda$core$Panda$unref$panda$core$Object($tmp37);
                    panda$core$Object* $tmp43 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k35));
                    $tmp42 = $tmp43;
                    panda$core$Bit $tmp44 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) ($tmp42 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp42)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value), ((panda$core$Int64) { 0 }));
                    panda$core$Panda$unref$panda$core$Object($tmp42);
                    if ($tmp44.value) {
                    {
                        panda$core$String* $tmp49 = panda$core$String$convert$R$panda$core$String(k35);
                        $tmp48 = $tmp49;
                        panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s50);
                        $tmp47 = $tmp51;
                        panda$core$Object* $tmp54 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->allocations, ((panda$collections$Key*) k35));
                        $tmp53 = $tmp54;
                        panda$core$Int64$wrapper* $tmp55;
                        $tmp55 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                        $tmp55->value = ((panda$core$Int64) ($tmp53 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp53)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
                        $tmp52 = ((panda$core$Object*) $tmp55);
                        panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp47, $tmp52);
                        $tmp46 = $tmp56;
                        panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s57);
                        $tmp45 = $tmp58;
                        panda$io$Console$printLine$panda$core$String($tmp45);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
                        panda$core$Panda$unref$panda$core$Object($tmp52);
                        panda$core$Panda$unref$panda$core$Object($tmp53);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
                    }
                    }
                }
                $tmp34 = -1;
                goto $l32;
                $l32:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k35));
                k35 = NULL;
                switch ($tmp34) {
                    case -1: goto $l59;
                }
                $l59:;
            }
            goto $l24;
            $l25:;
        }
        $tmp19 = -1;
        goto $l17;
        $l17:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$33$920));
        Iter$33$920 = NULL;
        switch ($tmp19) {
            case -1: goto $l60;
        }
        $l60:;
    }
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp61;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$Object* $tmp71;
    panda$io$OutputStream* $tmp62 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp61 = $tmp62;
    panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s67, p_file);
    $tmp66 = $tmp68;
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s69);
    $tmp65 = $tmp70;
    panda$core$Int64$wrapper* $tmp72;
    $tmp72 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp72->value = p_line;
    $tmp71 = ((panda$core$Object*) $tmp72);
    panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp65, $tmp71);
    $tmp64 = $tmp73;
    panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s74);
    $tmp63 = $tmp75;
    (($fn76) $tmp61->$class->vtable[19])($tmp61, $tmp63);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$core$Panda$unref$panda$core$Object($tmp71);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp77;
    panda$core$String* $tmp79;
    panda$core$String* $tmp80;
    panda$core$String* $tmp81;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$Object* $tmp89;
    panda$io$OutputStream* $tmp78 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp77 = $tmp78;
    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s85, p_file);
    $tmp84 = $tmp86;
    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s87);
    $tmp83 = $tmp88;
    panda$core$Int64$wrapper* $tmp90;
    $tmp90 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp90->value = p_line;
    $tmp89 = ((panda$core$Object*) $tmp90);
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp83, $tmp89);
    $tmp82 = $tmp91;
    panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s92);
    $tmp81 = $tmp93;
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, p_msg);
    $tmp80 = $tmp94;
    panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s95);
    $tmp79 = $tmp96;
    (($fn97) $tmp77->$class->vtable[19])($tmp77, $tmp79);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object($tmp89);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp99;
    panda$core$Char32 $tmp102;
    panda$core$UInt64$nullable $finallyReturn104;
    panda$core$Char8 $tmp107;
    panda$core$Char32 $tmp112;
    panda$core$Char32 $tmp115;
    panda$core$UInt64$nullable $finallyReturn117;
    panda$core$Char8 $tmp120;
    panda$core$Char32 $tmp126;
    panda$core$Char32 $tmp129;
    panda$core$UInt64$nullable $finallyReturn131;
    panda$core$Char8 $tmp134;
    panda$core$UInt64$nullable $finallyReturn138;
    panda$core$Char32$init$panda$core$Int32(&$tmp99, ((panda$core$Int32) { 48 }));
    panda$core$Bit $tmp100 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp99);
    bool $tmp98 = $tmp100.value;
    if (!$tmp98) goto $l101;
    panda$core$Char32$init$panda$core$Int32(&$tmp102, ((panda$core$Int32) { 57 }));
    panda$core$Bit $tmp103 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp102);
    $tmp98 = $tmp103.value;
    $l101:;
    panda$core$Bit $tmp104 = { $tmp98 };
    if ($tmp104.value) {
    {
        panda$core$UInt64 $tmp106 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp107, ((panda$core$UInt8) { 48 }));
        panda$core$UInt64 $tmp108 = panda$core$Char8$convert$R$panda$core$UInt64($tmp107);
        panda$core$UInt64 $tmp109 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp106, $tmp108);
        $finallyReturn104 = ((panda$core$UInt64$nullable) { $tmp109, true });
        return $finallyReturn104;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp112, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp113 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp112);
    bool $tmp111 = $tmp113.value;
    if (!$tmp111) goto $l114;
    panda$core$Char32$init$panda$core$Int32(&$tmp115, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp116 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp115);
    $tmp111 = $tmp116.value;
    $l114:;
    panda$core$Bit $tmp117 = { $tmp111 };
    if ($tmp117.value) {
    {
        panda$core$UInt64 $tmp119 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp120, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp121 = panda$core$Char8$convert$R$panda$core$UInt64($tmp120);
        panda$core$UInt64 $tmp122 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp119, $tmp121);
        panda$core$UInt64 $tmp123 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp122, ((panda$core$UInt64) { 10 }));
        $finallyReturn117 = ((panda$core$UInt64$nullable) { $tmp123, true });
        return $finallyReturn117;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp126, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp127 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp126);
    bool $tmp125 = $tmp127.value;
    if (!$tmp125) goto $l128;
    panda$core$Char32$init$panda$core$Int32(&$tmp129, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp130 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp129);
    $tmp125 = $tmp130.value;
    $l128:;
    panda$core$Bit $tmp131 = { $tmp125 };
    if ($tmp131.value) {
    {
        panda$core$UInt64 $tmp133 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp134, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp135 = panda$core$Char8$convert$R$panda$core$UInt64($tmp134);
        panda$core$UInt64 $tmp136 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp133, $tmp135);
        panda$core$UInt64 $tmp137 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp136, ((panda$core$UInt64) { 10 }));
        $finallyReturn131 = ((panda$core$UInt64$nullable) { $tmp137, true });
        return $finallyReturn131;
    }
    }
    $finallyReturn138 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $finallyReturn138;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $finallyReturn142;
    panda$core$UInt64 result145;
    panda$core$UInt64 radix146;
    panda$core$String$Index index148;
    panda$core$UInt64$nullable value155;
    panda$core$UInt64$nullable $finallyReturn161;
    panda$core$UInt64$nullable $finallyReturn166;
    panda$core$Bit $tmp142 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s141);
    if ($tmp142.value) {
    {
        $finallyReturn142 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $finallyReturn142;
    }
    }
    result145 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp147 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix146 = $tmp147;
    panda$core$String$Index $tmp149 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index148 = $tmp149;
    $l150:;
    panda$core$String$Index $tmp153 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp154 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index148, $tmp153);
    bool $tmp152 = $tmp154.value;
    if (!$tmp152) goto $l151;
    {
        panda$core$Char32 $tmp156 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index148);
        panda$core$UInt64$nullable $tmp157 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp156);
        value155 = $tmp157;
        bool $tmp158 = ((panda$core$Bit) { !value155.nonnull }).value;
        if ($tmp158) goto $l159;
        panda$core$Bit $tmp160 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value155.value), radix146);
        $tmp158 = $tmp160.value;
        $l159:;
        panda$core$Bit $tmp161 = { $tmp158 };
        if ($tmp161.value) {
        {
            $finallyReturn161 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $finallyReturn161;
        }
        }
        panda$core$UInt64 $tmp164 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result145, radix146);
        panda$core$UInt64 $tmp165 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp164, ((panda$core$UInt64) value155.value));
        result145 = $tmp165;
        panda$core$String$Index $tmp166 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index148);
        index148 = $tmp166;
    }
    goto $l150;
    $l151:;
    $finallyReturn166 = ((panda$core$UInt64$nullable) { result145, true });
    return $finallyReturn166;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index171;
    panda$core$Char32 $match$129_9174;
    panda$core$Char32 $tmp178;
    panda$core$Char32 $tmp181;
    panda$core$Char32 $tmp185;
    panda$core$Int64 width189;
    panda$core$String* $tmp190;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp191;
    panda$core$Char32 fill195;
    panda$core$Char32 $tmp198;
    panda$core$Char32 $match$142_9201;
    panda$core$Char32 $tmp203;
    panda$core$String* $finallyReturn204;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$Char32 $tmp210;
    panda$core$String* $finallyReturn211;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$Char32 $tmp217;
    panda$core$String* $finallyReturn218;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    panda$core$Int64 $tmp169 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp170 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp169, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp170.value);
    panda$core$String$Index $tmp172 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp173 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp172);
    index171 = $tmp173;
    {
        panda$core$Char32 $tmp175 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index171);
        $match$129_9174 = $tmp175;
        panda$core$Char32$init$panda$core$Int32(&$tmp178, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp179 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$129_9174, $tmp178);
        bool $tmp177 = $tmp179.value;
        if ($tmp177) goto $l180;
        panda$core$Char32$init$panda$core$Int32(&$tmp181, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp182 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$129_9174, $tmp181);
        $tmp177 = $tmp182.value;
        $l180:;
        panda$core$Bit $tmp183 = { $tmp177 };
        bool $tmp176 = $tmp183.value;
        if ($tmp176) goto $l184;
        panda$core$Char32$init$panda$core$Int32(&$tmp185, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp186 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$129_9174, $tmp185);
        $tmp176 = $tmp186.value;
        $l184:;
        panda$core$Bit $tmp187 = { $tmp176 };
        if ($tmp187.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp188 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index171 = $tmp188;
        }
        }
    }
    panda$core$String$Index $tmp192 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index171);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp191, ((panda$core$String$Index$nullable) { $tmp192, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp193 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp191);
    $tmp190 = $tmp193;
    panda$core$Int64$nullable $tmp194 = panda$core$String$convert$R$panda$core$Int64$Q($tmp190);
    width189 = ((panda$core$Int64) $tmp194.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
    memset(&fill195, 0, sizeof(fill195));
    panda$core$String$Index $tmp196 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp197 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index171, $tmp196);
    if ($tmp197.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp198, ((panda$core$Int32) { 32 }));
        fill195 = $tmp198;
    }
    }
    else {
    {
        panda$core$String$Index $tmp199 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp200 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp199);
        fill195 = $tmp200;
    }
    }
    {
        panda$core$Char32 $tmp202 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index171);
        $match$142_9201 = $tmp202;
        panda$core$Char32$init$panda$core$Int32(&$tmp203, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp204 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$142_9201, $tmp203);
        if ($tmp204.value) {
        {
            panda$core$String* $tmp208 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width189, fill195);
            $tmp207 = $tmp208;
            $tmp206 = $tmp207;
            $finallyReturn204 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            return $finallyReturn204;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp210, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp211 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$142_9201, $tmp210);
        if ($tmp211.value) {
        {
            panda$core$String* $tmp215 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width189, fill195);
            $tmp214 = $tmp215;
            $tmp213 = $tmp214;
            $finallyReturn211 = $tmp213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
            return $finallyReturn211;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp217, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp218 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$142_9201, $tmp217);
        if ($tmp218.value) {
        {
            panda$core$String* $tmp222 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width189, fill195);
            $tmp221 = $tmp222;
            $tmp220 = $tmp221;
            $finallyReturn218 = $tmp220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
            return $finallyReturn218;
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
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index227;
    panda$core$UInt64 base229;
    panda$collections$ListView* digits230 = NULL;
    panda$collections$ListView* $tmp231;
    panda$collections$ListView* $tmp232;
    panda$core$Char32 $match$165_13237;
    panda$core$Char32 $tmp240;
    panda$core$Char32 $tmp243;
    panda$core$Char32 $tmp247;
    panda$core$Char32 $tmp250;
    panda$core$Char32 $tmp254;
    panda$core$Char32 $tmp257;
    panda$core$Char32 $tmp260;
    panda$core$Char32 $tmp262;
    panda$collections$ListView* $tmp264;
    panda$collections$ListView* $tmp265;
    panda$collections$ListView* $tmp266;
    panda$core$UInt64 value269;
    panda$core$Int64 max278;
    panda$core$Char8* chars279;
    panda$core$Int64 charIndex280;
    panda$core$Object* $tmp284;
    panda$core$Char8 $tmp299;
    panda$core$Int64 size302;
    panda$core$Range$LTpanda$core$Int64$GT $tmp304;
    panda$core$String* $finallyReturn324;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    int $tmp226;
    {
        panda$core$String$Index $tmp228 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index227 = $tmp228;
        base229 = ((panda$core$UInt64) { 10 });
        panda$collections$ListView* $tmp234 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s233);
        $tmp232 = $tmp234;
        $tmp231 = $tmp232;
        digits230 = $tmp231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$core$String$Index $tmp235 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$Bit $tmp236 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index227, $tmp235);
        if ($tmp236.value) {
        {
            {
                panda$core$Char32 $tmp238 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index227);
                $match$165_13237 = $tmp238;
                panda$core$Char32$init$panda$core$Int32(&$tmp240, ((panda$core$Int32) { 98 }));
                panda$core$Bit $tmp241 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp240);
                bool $tmp239 = $tmp241.value;
                if ($tmp239) goto $l242;
                panda$core$Char32$init$panda$core$Int32(&$tmp243, ((panda$core$Int32) { 66 }));
                panda$core$Bit $tmp244 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp243);
                $tmp239 = $tmp244.value;
                $l242:;
                panda$core$Bit $tmp245 = { $tmp239 };
                if ($tmp245.value) {
                {
                    base229 = ((panda$core$UInt64) { 2 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp247, ((panda$core$Int32) { 111 }));
                panda$core$Bit $tmp248 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp247);
                bool $tmp246 = $tmp248.value;
                if ($tmp246) goto $l249;
                panda$core$Char32$init$panda$core$Int32(&$tmp250, ((panda$core$Int32) { 79 }));
                panda$core$Bit $tmp251 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp250);
                $tmp246 = $tmp251.value;
                $l249:;
                panda$core$Bit $tmp252 = { $tmp246 };
                if ($tmp252.value) {
                {
                    base229 = ((panda$core$UInt64) { 8 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp254, ((panda$core$Int32) { 100 }));
                panda$core$Bit $tmp255 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp254);
                bool $tmp253 = $tmp255.value;
                if ($tmp253) goto $l256;
                panda$core$Char32$init$panda$core$Int32(&$tmp257, ((panda$core$Int32) { 68 }));
                panda$core$Bit $tmp258 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp257);
                $tmp253 = $tmp258.value;
                $l256:;
                panda$core$Bit $tmp259 = { $tmp253 };
                if ($tmp259.value) {
                {
                    base229 = ((panda$core$UInt64) { 10 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp260, ((panda$core$Int32) { 120 }));
                panda$core$Bit $tmp261 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp260);
                if ($tmp261.value) {
                {
                    base229 = ((panda$core$UInt64) { 16 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp262, ((panda$core$Int32) { 88 }));
                panda$core$Bit $tmp263 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$165_13237, $tmp262);
                if ($tmp263.value) {
                {
                    base229 = ((panda$core$UInt64) { 16 });
                    {
                        $tmp264 = digits230;
                        panda$collections$ListView* $tmp268 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s267);
                        $tmp266 = $tmp268;
                        $tmp265 = $tmp266;
                        digits230 = $tmp265;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                    }
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
        memset(&value269, 0, sizeof(value269));
        bool $tmp270 = p_sign.value;
        if (!$tmp270) goto $l271;
        panda$core$Bit $tmp272 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base229, ((panda$core$UInt64) { 10 }));
        $tmp270 = $tmp272.value;
        $l271:;
        panda$core$Bit $tmp273 = { $tmp270 };
        if ($tmp273.value) {
        {
            panda$core$Int64 $tmp274 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp275 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp274);
            panda$core$UInt64 $tmp276 = panda$core$Int64$convert$R$panda$core$UInt64($tmp275);
            panda$core$UInt64 $tmp277 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp276, p_mask);
            value269 = $tmp277;
        }
        }
        else {
        {
            value269 = p_rawValue;
        }
        }
        max278 = ((panda$core$Int64) { 64 });
        chars279 = ((panda$core$Char8*) pandaZAlloc(max278.value * 1));
        panda$core$Int64 $tmp281 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max278, ((panda$core$Int64) { 1 }));
        charIndex280 = $tmp281;
        $l282:;
        {
            panda$core$UInt64 $tmp285 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value269, base229);
            panda$core$Int64 $tmp286 = panda$core$UInt64$convert$R$panda$core$Int64($tmp285);
            ITable* $tmp287 = digits230->$class->itable;
            while ($tmp287->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp287 = $tmp287->next;
            }
            $fn289 $tmp288 = $tmp287->methods[0];
            panda$core$Object* $tmp290 = $tmp288(digits230, $tmp286);
            $tmp284 = $tmp290;
            chars279[charIndex280.value] = ((panda$core$Char8$wrapper*) $tmp284)->value;
            panda$core$Panda$unref$panda$core$Object($tmp284);
            panda$core$UInt64 $tmp291 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value269, base229);
            value269 = $tmp291;
            panda$core$Int64 $tmp292 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex280, ((panda$core$Int64) { 1 }));
            charIndex280 = $tmp292;
        }
        panda$core$Bit $tmp294 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value269, ((panda$core$UInt64) { 0 }));
        bool $tmp293 = $tmp294.value;
        if ($tmp293) goto $l282;
        $l283:;
        bool $tmp295 = p_sign.value;
        if (!$tmp295) goto $l296;
        panda$core$Bit $tmp297 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base229, ((panda$core$UInt64) { 10 }));
        $tmp295 = $tmp297.value;
        $l296:;
        panda$core$Bit $tmp298 = { $tmp295 };
        if ($tmp298.value) {
        {
            panda$core$Char8$init$panda$core$UInt8(&$tmp299, ((panda$core$UInt8) { 45 }));
            chars279[charIndex280.value] = $tmp299;
            panda$core$Int64 $tmp300 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex280, ((panda$core$Int64) { 1 }));
            charIndex280 = $tmp300;
        }
        }
        panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex280, ((panda$core$Int64) { 1 }));
        charIndex280 = $tmp301;
        panda$core$Int64 $tmp303 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max278, charIndex280);
        size302 = $tmp303;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp304, ((panda$core$Int64) { 0 }), size302, ((panda$core$Bit) { false }));
        int64_t $tmp306 = $tmp304.min.value;
        panda$core$Int64 i305 = { $tmp306 };
        int64_t $tmp308 = $tmp304.max.value;
        bool $tmp309 = $tmp304.inclusive.value;
        if ($tmp309) goto $l316; else goto $l317;
        $l316:;
        if ($tmp306 <= $tmp308) goto $l310; else goto $l312;
        $l317:;
        if ($tmp306 < $tmp308) goto $l310; else goto $l312;
        $l310:;
        {
            panda$core$Int64 $tmp318 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i305, charIndex280);
            chars279[i305.value] = chars279[$tmp318.value];
        }
        $l313:;
        int64_t $tmp320 = $tmp308 - i305.value;
        if ($tmp309) goto $l321; else goto $l322;
        $l321:;
        if ((uint64_t) $tmp320 >= 1) goto $l319; else goto $l312;
        $l322:;
        if ((uint64_t) $tmp320 > 1) goto $l319; else goto $l312;
        $l319:;
        i305.value += 1;
        goto $l310;
        $l312:;
        panda$core$String* $tmp328 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp328, chars279, size302);
        $tmp327 = $tmp328;
        $tmp326 = $tmp327;
        $finallyReturn324 = $tmp326;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
        $tmp226 = 0;
        goto $l224;
        $l329:;
        return $finallyReturn324;
    }
    $l224:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits230));
    digits230 = NULL;
    switch ($tmp226) {
        case 0: goto $l329;
    }
    $l331:;
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp334;
    {
    }
    $tmp334 = -1;
    goto $l332;
    $l332:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp334) {
        case -1: goto $l335;
    }
    $l335:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->allocations));
}

