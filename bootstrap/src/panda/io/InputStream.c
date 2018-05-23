#include "panda/io/InputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int32.h"
#include "panda/core/Char8.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream/LineIterator.h"


static panda$core$String $s1;
panda$io$InputStream$class_type panda$io$InputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$cleanup, NULL, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn8)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn14)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn18)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$UInt8$nullable (*$fn43)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn48)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn56)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn61)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn68)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn73)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn80)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn96)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };

panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i2;
    panda$core$UInt8$nullable next7;
    panda$core$Int64 $returnValue11;
    i2 = ((panda$core$Int64) { 0 });
    $l3:;
    panda$core$Bit $tmp6 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i2, p_max);
    bool $tmp5 = $tmp6.value;
    if (!$tmp5) goto $l4;
    {
        panda$core$UInt8$nullable $tmp9 = (($fn8) self->$class->vtable[2])(self);
        next7 = $tmp9;
        if (((panda$core$Bit) { !next7.nonnull }).value) {
        {
            goto $l4;
        }
        }
        p_buffer[i2.value] = ((panda$core$UInt8) next7.value);
        panda$core$Int64 $tmp10 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i2, ((panda$core$Int64) { 1 }));
        i2 = $tmp10;
    }
    goto $l3;
    $l4:;
    $returnValue11 = i2;
    return $returnValue11;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue13;
    panda$core$Int64 $tmp15 = (($fn14) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue13 = $tmp15;
    return $returnValue13;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue17;
    panda$core$Int64 $tmp19 = (($fn18) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue17 = $tmp19;
    return $returnValue17;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE24;
    panda$core$MutableString* result25 = NULL;
    panda$core$MutableString* $tmp26;
    panda$core$MutableString* $tmp27;
    panda$core$Int8* buffer29;
    panda$core$Int64 count32;
    panda$core$String* $returnValue35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    int $tmp23;
    {
        BUFFER_SIZE24 = ((panda$core$Int64) { 2048 });
        panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp28);
        $tmp27 = $tmp28;
        $tmp26 = $tmp27;
        result25 = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        buffer29 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE24.value * 1));
        $l30:;
        while (true) {
        {
            panda$core$Int64 $tmp33 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer29, BUFFER_SIZE24);
            count32 = $tmp33;
            panda$core$Bit $tmp34 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count32, ((panda$core$Int64) { 0 }));
            if ($tmp34.value) {
            {
                goto $l31;
            }
            }
            panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result25, ((panda$core$Char8*) buffer29), ((panda$core$Int64) { 0 }), count32);
        }
        }
        $l31:;
        pandaFree(buffer29);
        panda$core$String* $tmp38 = panda$core$MutableString$finish$R$panda$core$String(result25);
        $tmp37 = $tmp38;
        $tmp36 = $tmp37;
        $returnValue35 = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        $tmp23 = 0;
        goto $l21;
        $l39:;
        return $returnValue35;
    }
    $l21:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result25));
    result25 = NULL;
    switch ($tmp23) {
        case 0: goto $l39;
    }
    $l41:;
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a42;
    panda$core$Int16$nullable $returnValue45;
    panda$core$UInt8$nullable b47;
    panda$core$UInt8$nullable $tmp44 = (($fn43) self->$class->vtable[2])(self);
    a42 = $tmp44;
    if (((panda$core$Bit) { !a42.nonnull }).value) {
    {
        $returnValue45 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue45;
    }
    }
    panda$core$UInt8$nullable $tmp49 = (($fn48) self->$class->vtable[2])(self);
    b47 = $tmp49;
    if (((panda$core$Bit) { !b47.nonnull }).value) {
    {
        $returnValue45 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue45;
    }
    }
    panda$core$UInt32 $tmp51 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a42.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp52 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp51, ((panda$core$UInt8) b47.value));
    panda$core$Int16 $tmp53 = panda$core$UInt32$convert$R$panda$core$Int16($tmp52);
    $returnValue45 = ((panda$core$Int16$nullable) { $tmp53, true });
    return $returnValue45;
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a55;
    panda$core$Int32$nullable $returnValue58;
    panda$core$Int16$nullable b60;
    panda$core$Int16$nullable $tmp57 = (($fn56) self->$class->vtable[7])(self);
    a55 = $tmp57;
    if (((panda$core$Bit) { !a55.nonnull }).value) {
    {
        $returnValue58 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue58;
    }
    }
    panda$core$Int16$nullable $tmp62 = (($fn61) self->$class->vtable[7])(self);
    b60 = $tmp62;
    if (((panda$core$Bit) { !b60.nonnull }).value) {
    {
        $returnValue58 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue58;
    }
    }
    panda$core$Int32 $tmp64 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a55.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp65 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp64, ((panda$core$Int16) b60.value));
    $returnValue58 = ((panda$core$Int32$nullable) { $tmp65, true });
    return $returnValue58;
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a67;
    panda$core$Int64$nullable $returnValue70;
    panda$core$Int32$nullable b72;
    panda$core$Int32$nullable $tmp69 = (($fn68) self->$class->vtable[8])(self);
    a67 = $tmp69;
    if (((panda$core$Bit) { !a67.nonnull }).value) {
    {
        $returnValue70 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue70;
    }
    }
    panda$core$Int32$nullable $tmp74 = (($fn73) self->$class->vtable[8])(self);
    b72 = $tmp74;
    if (((panda$core$Bit) { !b72.nonnull }).value) {
    {
        $returnValue70 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue70;
    }
    }
    panda$core$Int64 $tmp76 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a67.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp77 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp76, ((panda$core$Int32) b72.value));
    $returnValue70 = ((panda$core$Int64$nullable) { $tmp77, true });
    return $returnValue70;
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result79;
    panda$core$Char8$nullable $returnValue82;
    panda$core$Char8 $tmp83;
    panda$core$UInt8$nullable $tmp81 = (($fn80) self->$class->vtable[2])(self);
    result79 = $tmp81;
    if (((panda$core$Bit) { result79.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp83, ((panda$core$UInt8) result79.value));
        $returnValue82 = ((panda$core$Char8$nullable) { $tmp83, true });
        return $returnValue82;
    }
    }
    $returnValue82 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $returnValue82;
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result89 = NULL;
    panda$core$MutableString* $tmp90;
    panda$core$MutableString* $tmp91;
    panda$core$Char8$nullable c95;
    panda$core$String* $returnValue99;
    panda$core$String* $tmp100;
    panda$core$Char8$nullable $tmp103;
    panda$core$Char8 $tmp108;
    panda$core$String* $tmp110;
    panda$core$String* $tmp111;
    int $tmp88;
    {
        panda$core$MutableString* $tmp92 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp92);
        $tmp91 = $tmp92;
        $tmp90 = $tmp91;
        result89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
        $l93:;
        while (true) {
        {
            panda$core$Char8$nullable $tmp97 = (($fn96) self->$class->vtable[10])(self);
            c95 = $tmp97;
            if (((panda$core$Bit) { !c95.nonnull }).value) {
            {
                panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result89->length, ((panda$core$Int64) { 0 }));
                if ($tmp98.value) {
                {
                    $tmp100 = NULL;
                    $returnValue99 = $tmp100;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                    $tmp88 = 0;
                    goto $l86;
                    $l101:;
                    return $returnValue99;
                }
                }
                goto $l94;
            }
            }
            $tmp103 = c95;
            panda$core$Bit $tmp107;
            if (((panda$core$Bit) { $tmp103.nonnull }).value) goto $l104; else goto $l105;
            $l104:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp108, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp109 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp103.value), $tmp108);
            $tmp107 = $tmp109;
            goto $l106;
            $l105:;
            $tmp107 = ((panda$core$Bit) { false });
            goto $l106;
            $l106:;
            if ($tmp107.value) {
            {
                goto $l94;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result89, ((panda$core$Char8) c95.value));
        }
        }
        $l94:;
        panda$core$String* $tmp112 = panda$core$MutableString$finish$R$panda$core$String(result89);
        $tmp111 = $tmp112;
        $tmp110 = $tmp111;
        $returnValue99 = $tmp110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
        $tmp88 = 1;
        goto $l86;
        $l113:;
        return $returnValue99;
    }
    $l86:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result89));
    result89 = NULL;
    switch ($tmp88) {
        case 0: goto $l101;
        case 1: goto $l113;
    }
    $l115:;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$collections$Iterator* $returnValue116;
    panda$collections$Iterator* $tmp117;
    panda$io$InputStream$LineIterator* $tmp118;
    panda$io$InputStream$LineIterator* $tmp119 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp119, self);
    $tmp118 = $tmp119;
    $tmp117 = ((panda$collections$Iterator*) $tmp118);
    $returnValue116 = $tmp117;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
    return $returnValue116;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    int $tmp123;
    {
    }
    $tmp123 = -1;
    goto $l121;
    $l121:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp123) {
        case -1: goto $l124;
    }
    $l124:;
}

