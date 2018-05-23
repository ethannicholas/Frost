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
typedef panda$core$Object* (*$fn282)(panda$collections$ListView*, panda$core$Int64);

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
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };

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
    panda$core$UInt64$nullable $returnValue105;
    panda$core$Char8 $tmp107;
    panda$core$Char32 $tmp112;
    panda$core$Char32 $tmp115;
    panda$core$Char8 $tmp119;
    panda$core$Char32 $tmp125;
    panda$core$Char32 $tmp128;
    panda$core$Char8 $tmp132;
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
        $returnValue105 = ((panda$core$UInt64$nullable) { $tmp109, true });
        return $returnValue105;
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
        panda$core$UInt64 $tmp118 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp119, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp120 = panda$core$Char8$convert$R$panda$core$UInt64($tmp119);
        panda$core$UInt64 $tmp121 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp118, $tmp120);
        panda$core$UInt64 $tmp122 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp121, ((panda$core$UInt64) { 10 }));
        $returnValue105 = ((panda$core$UInt64$nullable) { $tmp122, true });
        return $returnValue105;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp125, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp126 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp125);
    bool $tmp124 = $tmp126.value;
    if (!$tmp124) goto $l127;
    panda$core$Char32$init$panda$core$Int32(&$tmp128, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp129 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp128);
    $tmp124 = $tmp129.value;
    $l127:;
    panda$core$Bit $tmp130 = { $tmp124 };
    if ($tmp130.value) {
    {
        panda$core$UInt64 $tmp131 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp132, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp133 = panda$core$Char8$convert$R$panda$core$UInt64($tmp132);
        panda$core$UInt64 $tmp134 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp131, $tmp133);
        panda$core$UInt64 $tmp135 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp134, ((panda$core$UInt64) { 10 }));
        $returnValue105 = ((panda$core$UInt64$nullable) { $tmp135, true });
        return $returnValue105;
    }
    }
    $returnValue105 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $returnValue105;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $returnValue140;
    panda$core$UInt64 result142;
    panda$core$UInt64 radix143;
    panda$core$String$Index index145;
    panda$core$UInt64$nullable value152;
    panda$core$Bit $tmp139 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s138);
    if ($tmp139.value) {
    {
        $returnValue140 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue140;
    }
    }
    result142 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp144 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix143 = $tmp144;
    panda$core$String$Index $tmp146 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index145 = $tmp146;
    $l147:;
    panda$core$String$Index $tmp150 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp151 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index145, $tmp150);
    bool $tmp149 = $tmp151.value;
    if (!$tmp149) goto $l148;
    {
        panda$core$Char32 $tmp153 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index145);
        panda$core$UInt64$nullable $tmp154 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp153);
        value152 = $tmp154;
        bool $tmp155 = ((panda$core$Bit) { !value152.nonnull }).value;
        if ($tmp155) goto $l156;
        panda$core$Bit $tmp157 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value152.value), radix143);
        $tmp155 = $tmp157.value;
        $l156:;
        panda$core$Bit $tmp158 = { $tmp155 };
        if ($tmp158.value) {
        {
            $returnValue140 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue140;
        }
        }
        panda$core$UInt64 $tmp160 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result142, radix143);
        panda$core$UInt64 $tmp161 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp160, ((panda$core$UInt64) value152.value));
        result142 = $tmp161;
        panda$core$String$Index $tmp162 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index145);
        index145 = $tmp162;
    }
    goto $l147;
    $l148:;
    $returnValue140 = ((panda$core$UInt64$nullable) { result142, true });
    return $returnValue140;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index166;
    panda$core$Char32 $match$133_9169;
    panda$core$Char32 $tmp173;
    panda$core$Char32 $tmp176;
    panda$core$Char32 $tmp180;
    panda$core$Int64 width184;
    panda$core$String* $tmp185;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp186;
    panda$core$Char32 fill190;
    panda$core$Char32 $tmp193;
    panda$core$Char32 $match$146_9196;
    panda$core$Char32 $tmp198;
    panda$core$String* $returnValue200;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$Char32 $tmp205;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$Char32 $tmp211;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$Int64 $tmp164 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp165 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp164, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp165.value);
    panda$core$String$Index $tmp167 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp168 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp167);
    index166 = $tmp168;
    {
        panda$core$Char32 $tmp170 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index166);
        $match$133_9169 = $tmp170;
        panda$core$Char32$init$panda$core$Int32(&$tmp173, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp174 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$133_9169, $tmp173);
        bool $tmp172 = $tmp174.value;
        if ($tmp172) goto $l175;
        panda$core$Char32$init$panda$core$Int32(&$tmp176, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp177 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$133_9169, $tmp176);
        $tmp172 = $tmp177.value;
        $l175:;
        panda$core$Bit $tmp178 = { $tmp172 };
        bool $tmp171 = $tmp178.value;
        if ($tmp171) goto $l179;
        panda$core$Char32$init$panda$core$Int32(&$tmp180, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp181 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$133_9169, $tmp180);
        $tmp171 = $tmp181.value;
        $l179:;
        panda$core$Bit $tmp182 = { $tmp171 };
        if ($tmp182.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp183 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index166 = $tmp183;
        }
        }
    }
    panda$core$String$Index $tmp187 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index166);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp186, ((panda$core$String$Index$nullable) { $tmp187, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp188 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp186);
    $tmp185 = $tmp188;
    panda$core$Int64$nullable $tmp189 = panda$core$String$convert$R$panda$core$Int64$Q($tmp185);
    width184 = ((panda$core$Int64) $tmp189.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
    memset(&fill190, 0, sizeof(fill190));
    panda$core$String$Index $tmp191 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp192 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index166, $tmp191);
    if ($tmp192.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp193, ((panda$core$Int32) { 32 }));
        fill190 = $tmp193;
    }
    }
    else {
    {
        panda$core$String$Index $tmp194 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp195 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp194);
        fill190 = $tmp195;
    }
    }
    {
        panda$core$Char32 $tmp197 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index166);
        $match$146_9196 = $tmp197;
        panda$core$Char32$init$panda$core$Int32(&$tmp198, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp199 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$146_9196, $tmp198);
        if ($tmp199.value) {
        {
            panda$core$String* $tmp203 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width184, fill190);
            $tmp202 = $tmp203;
            $tmp201 = $tmp202;
            $returnValue200 = $tmp201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            return $returnValue200;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp205, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp206 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$146_9196, $tmp205);
        if ($tmp206.value) {
        {
            panda$core$String* $tmp209 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width184, fill190);
            $tmp208 = $tmp209;
            $tmp207 = $tmp208;
            $returnValue200 = $tmp207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
            return $returnValue200;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp211, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp212 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$146_9196, $tmp211);
        if ($tmp212.value) {
        {
            panda$core$String* $tmp215 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width184, fill190);
            $tmp214 = $tmp215;
            $tmp213 = $tmp214;
            $returnValue200 = $tmp213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
            return $returnValue200;
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
    panda$core$String$Index index220;
    panda$core$UInt64 base222;
    panda$collections$ListView* digits223 = NULL;
    panda$collections$ListView* $tmp224;
    panda$collections$ListView* $tmp225;
    panda$core$Char32 $match$169_13230;
    panda$core$Char32 $tmp233;
    panda$core$Char32 $tmp236;
    panda$core$Char32 $tmp240;
    panda$core$Char32 $tmp243;
    panda$core$Char32 $tmp247;
    panda$core$Char32 $tmp250;
    panda$core$Char32 $tmp253;
    panda$core$Char32 $tmp255;
    panda$collections$ListView* $tmp257;
    panda$collections$ListView* $tmp258;
    panda$collections$ListView* $tmp259;
    panda$core$UInt64 value262;
    panda$core$Int64 max271;
    panda$core$Char8* chars272;
    panda$core$Int64 charIndex273;
    panda$core$Object* $tmp277;
    panda$core$Char8 $tmp292;
    panda$core$Int64 size295;
    panda$core$Range$LTpanda$core$Int64$GT $tmp297;
    panda$core$String* $returnValue318;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    int $tmp219;
    {
        panda$core$String$Index $tmp221 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index220 = $tmp221;
        base222 = ((panda$core$UInt64) { 10 });
        panda$collections$ListView* $tmp227 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s226);
        $tmp225 = $tmp227;
        $tmp224 = $tmp225;
        digits223 = $tmp224;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
        panda$core$String$Index $tmp228 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$Bit $tmp229 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index220, $tmp228);
        if ($tmp229.value) {
        {
            {
                panda$core$Char32 $tmp231 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index220);
                $match$169_13230 = $tmp231;
                panda$core$Char32$init$panda$core$Int32(&$tmp233, ((panda$core$Int32) { 98 }));
                panda$core$Bit $tmp234 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp233);
                bool $tmp232 = $tmp234.value;
                if ($tmp232) goto $l235;
                panda$core$Char32$init$panda$core$Int32(&$tmp236, ((panda$core$Int32) { 66 }));
                panda$core$Bit $tmp237 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp236);
                $tmp232 = $tmp237.value;
                $l235:;
                panda$core$Bit $tmp238 = { $tmp232 };
                if ($tmp238.value) {
                {
                    base222 = ((panda$core$UInt64) { 2 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp240, ((panda$core$Int32) { 111 }));
                panda$core$Bit $tmp241 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp240);
                bool $tmp239 = $tmp241.value;
                if ($tmp239) goto $l242;
                panda$core$Char32$init$panda$core$Int32(&$tmp243, ((panda$core$Int32) { 79 }));
                panda$core$Bit $tmp244 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp243);
                $tmp239 = $tmp244.value;
                $l242:;
                panda$core$Bit $tmp245 = { $tmp239 };
                if ($tmp245.value) {
                {
                    base222 = ((panda$core$UInt64) { 8 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp247, ((panda$core$Int32) { 100 }));
                panda$core$Bit $tmp248 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp247);
                bool $tmp246 = $tmp248.value;
                if ($tmp246) goto $l249;
                panda$core$Char32$init$panda$core$Int32(&$tmp250, ((panda$core$Int32) { 68 }));
                panda$core$Bit $tmp251 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp250);
                $tmp246 = $tmp251.value;
                $l249:;
                panda$core$Bit $tmp252 = { $tmp246 };
                if ($tmp252.value) {
                {
                    base222 = ((panda$core$UInt64) { 10 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp253, ((panda$core$Int32) { 120 }));
                panda$core$Bit $tmp254 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp253);
                if ($tmp254.value) {
                {
                    base222 = ((panda$core$UInt64) { 16 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp255, ((panda$core$Int32) { 88 }));
                panda$core$Bit $tmp256 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$169_13230, $tmp255);
                if ($tmp256.value) {
                {
                    base222 = ((panda$core$UInt64) { 16 });
                    {
                        $tmp257 = digits223;
                        panda$collections$ListView* $tmp261 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s260);
                        $tmp259 = $tmp261;
                        $tmp258 = $tmp259;
                        digits223 = $tmp258;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
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
        memset(&value262, 0, sizeof(value262));
        bool $tmp263 = p_sign.value;
        if (!$tmp263) goto $l264;
        panda$core$Bit $tmp265 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base222, ((panda$core$UInt64) { 10 }));
        $tmp263 = $tmp265.value;
        $l264:;
        panda$core$Bit $tmp266 = { $tmp263 };
        if ($tmp266.value) {
        {
            panda$core$Int64 $tmp267 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp268 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp267);
            panda$core$UInt64 $tmp269 = panda$core$Int64$convert$R$panda$core$UInt64($tmp268);
            panda$core$UInt64 $tmp270 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp269, p_mask);
            value262 = $tmp270;
        }
        }
        else {
        {
            value262 = p_rawValue;
        }
        }
        max271 = ((panda$core$Int64) { 64 });
        chars272 = ((panda$core$Char8*) pandaZAlloc(max271.value * 1));
        panda$core$Int64 $tmp274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max271, ((panda$core$Int64) { 1 }));
        charIndex273 = $tmp274;
        $l275:;
        {
            panda$core$UInt64 $tmp278 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value262, base222);
            panda$core$Int64 $tmp279 = panda$core$UInt64$convert$R$panda$core$Int64($tmp278);
            ITable* $tmp280 = digits223->$class->itable;
            while ($tmp280->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp280 = $tmp280->next;
            }
            $fn282 $tmp281 = $tmp280->methods[0];
            panda$core$Object* $tmp283 = $tmp281(digits223, $tmp279);
            $tmp277 = $tmp283;
            chars272[charIndex273.value] = ((panda$core$Char8$wrapper*) $tmp277)->value;
            panda$core$Panda$unref$panda$core$Object($tmp277);
            panda$core$UInt64 $tmp284 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value262, base222);
            value262 = $tmp284;
            panda$core$Int64 $tmp285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex273, ((panda$core$Int64) { 1 }));
            charIndex273 = $tmp285;
        }
        panda$core$Bit $tmp287 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value262, ((panda$core$UInt64) { 0 }));
        bool $tmp286 = $tmp287.value;
        if ($tmp286) goto $l275;
        $l276:;
        bool $tmp288 = p_sign.value;
        if (!$tmp288) goto $l289;
        panda$core$Bit $tmp290 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base222, ((panda$core$UInt64) { 10 }));
        $tmp288 = $tmp290.value;
        $l289:;
        panda$core$Bit $tmp291 = { $tmp288 };
        if ($tmp291.value) {
        {
            panda$core$Char8$init$panda$core$UInt8(&$tmp292, ((panda$core$UInt8) { 45 }));
            chars272[charIndex273.value] = $tmp292;
            panda$core$Int64 $tmp293 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex273, ((panda$core$Int64) { 1 }));
            charIndex273 = $tmp293;
        }
        }
        panda$core$Int64 $tmp294 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex273, ((panda$core$Int64) { 1 }));
        charIndex273 = $tmp294;
        panda$core$Int64 $tmp296 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max271, charIndex273);
        size295 = $tmp296;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp297, ((panda$core$Int64) { 0 }), size295, ((panda$core$Bit) { false }));
        int64_t $tmp299 = $tmp297.min.value;
        panda$core$Int64 i298 = { $tmp299 };
        int64_t $tmp301 = $tmp297.max.value;
        bool $tmp302 = $tmp297.inclusive.value;
        if ($tmp302) goto $l309; else goto $l310;
        $l309:;
        if ($tmp299 <= $tmp301) goto $l303; else goto $l305;
        $l310:;
        if ($tmp299 < $tmp301) goto $l303; else goto $l305;
        $l303:;
        {
            panda$core$Int64 $tmp311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i298, charIndex273);
            chars272[i298.value] = chars272[$tmp311.value];
        }
        $l306:;
        int64_t $tmp313 = $tmp301 - i298.value;
        if ($tmp302) goto $l314; else goto $l315;
        $l314:;
        if ((uint64_t) $tmp313 >= 1) goto $l312; else goto $l305;
        $l315:;
        if ((uint64_t) $tmp313 > 1) goto $l312; else goto $l305;
        $l312:;
        i298.value += 1;
        goto $l303;
        $l305:;
        panda$core$String* $tmp321 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp321, chars272, size295);
        $tmp320 = $tmp321;
        $tmp319 = $tmp320;
        $returnValue318 = $tmp319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
        $tmp219 = 0;
        goto $l217;
        $l322:;
        return $returnValue318;
    }
    $l217:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits223));
    digits223 = NULL;
    switch ($tmp219) {
        case 0: goto $l322;
    }
    $l324:;
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp327;
    {
    }
    $tmp327 = -1;
    goto $l325;
    $l325:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp327) {
        case -1: goto $l328;
    }
    $l328:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->allocations));
}

