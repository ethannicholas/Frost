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

typedef panda$core$UInt8$nullable (*$fn7)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn10)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn12)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$UInt8$nullable (*$fn26)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn29)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn35)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn38)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn43)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn46)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn51)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn59)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };

panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i2;
    panda$core$UInt8$nullable next6;
    i2 = ((panda$core$Int64) { 0 });
    $l3:;
    panda$core$Bit $tmp5 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i2, p_max);
    if (!$tmp5.value) goto $l4;
    {
        panda$core$UInt8$nullable $tmp8 = (($fn7) self->$class->vtable[2])(self);
        next6 = $tmp8;
        if (((panda$core$Bit) { !next6.nonnull }).value) {
        {
            goto $l4;
        }
        }
        p_buffer[i2.value] = ((panda$core$UInt8) next6.value);
        panda$core$Int64 $tmp9 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i2, ((panda$core$Int64) { 1 }));
        i2 = $tmp9;
    }
    goto $l3;
    $l4:;
    return i2;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp11 = (($fn10) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    return $tmp11;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp13 = (($fn12) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    return $tmp13;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE14;
    panda$core$MutableString* result15;
    panda$core$Int8* buffer17;
    panda$core$Int64 count20;
    panda$core$String* tmp123;
    BUFFER_SIZE14 = ((panda$core$Int64) { 2048 });
    panda$core$MutableString* $tmp16 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp16);
    result15 = $tmp16;
    buffer17 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE14.value * 1));
    $l18:;
    while (true) {
    {
        panda$core$Int64 $tmp21 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer17, BUFFER_SIZE14);
        count20 = $tmp21;
        panda$core$Bit $tmp22 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count20, ((panda$core$Int64) { 0 }));
        if ($tmp22.value) {
        {
            goto $l19;
        }
        }
        panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result15, ((panda$core$Char8*) buffer17), ((panda$core$Int64) { 0 }), count20);
    }
    }
    $l19:;
    pandaFree(buffer17);
    {
        panda$core$String* $tmp24 = panda$core$MutableString$finish$R$panda$core$String(result15);
        tmp123 = $tmp24;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result15));
        return tmp123;
    }
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a25;
    panda$core$UInt8$nullable b28;
    panda$core$UInt8$nullable $tmp27 = (($fn26) self->$class->vtable[2])(self);
    a25 = $tmp27;
    if (((panda$core$Bit) { !a25.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt8$nullable $tmp30 = (($fn29) self->$class->vtable[2])(self);
    b28 = $tmp30;
    if (((panda$core$Bit) { !b28.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt32 $tmp31 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a25.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp32 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp31, ((panda$core$UInt8) b28.value));
    panda$core$Int16 $tmp33 = panda$core$UInt32$convert$R$panda$core$Int16($tmp32);
    return ((panda$core$Int16$nullable) { $tmp33, true });
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a34;
    panda$core$Int16$nullable b37;
    panda$core$Int16$nullable $tmp36 = (($fn35) self->$class->vtable[7])(self);
    a34 = $tmp36;
    if (((panda$core$Bit) { !a34.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int16$nullable $tmp39 = (($fn38) self->$class->vtable[7])(self);
    b37 = $tmp39;
    if (((panda$core$Bit) { !b37.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32 $tmp40 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a34.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp41 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp40, ((panda$core$Int16) b37.value));
    return ((panda$core$Int32$nullable) { $tmp41, true });
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a42;
    panda$core$Int32$nullable b45;
    panda$core$Int32$nullable $tmp44 = (($fn43) self->$class->vtable[8])(self);
    a42 = $tmp44;
    if (((panda$core$Bit) { !a42.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32$nullable $tmp47 = (($fn46) self->$class->vtable[8])(self);
    b45 = $tmp47;
    if (((panda$core$Bit) { !b45.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp48 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a42.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp48, ((panda$core$Int32) b45.value));
    return ((panda$core$Int64$nullable) { $tmp49, true });
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result50;
    panda$core$Char8 $tmp53;
    panda$core$UInt8$nullable $tmp52 = (($fn51) self->$class->vtable[2])(self);
    result50 = $tmp52;
    if (((panda$core$Bit) { result50.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) result50.value));
        return ((panda$core$Char8$nullable) { $tmp53, true });
    }
    }
    return ((panda$core$Char8$nullable) { .nonnull = false });
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result54;
    panda$core$Char8$nullable c58;
    panda$core$String* tmp262;
    panda$core$Char8 $tmp67;
    panda$core$String* tmp369;
    panda$core$MutableString* $tmp55 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp55);
    result54 = $tmp55;
    $l56:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp60 = (($fn59) self->$class->vtable[10])(self);
        c58 = $tmp60;
        if (((panda$core$Bit) { !c58.nonnull }).value) {
        {
            panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result54->length, ((panda$core$Int64) { 0 }));
            if ($tmp61.value) {
            {
                {
                    tmp262 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result54));
                    return tmp262;
                }
            }
            }
            goto $l57;
        }
        }
        panda$core$Bit $tmp66;
        if (((panda$core$Bit) { c58.nonnull }).value) goto $l63; else goto $l64;
        $l63:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp68 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c58.value), $tmp67);
        $tmp66 = $tmp68;
        goto $l65;
        $l64:;
        $tmp66 = ((panda$core$Bit) { false });
        goto $l65;
        $l65:;
        if ($tmp66.value) {
        {
            goto $l57;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result54, ((panda$core$Char8) c58.value));
    }
    }
    $l57:;
    {
        panda$core$String* $tmp70 = panda$core$MutableString$finish$R$panda$core$String(result54);
        tmp369 = $tmp70;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result54));
        return tmp369;
    }
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp71 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp71, self);
    return ((panda$collections$Iterator*) $tmp71);
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

