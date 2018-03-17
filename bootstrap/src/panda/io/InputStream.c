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
typedef void (*$fn23)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn27)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn30)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn36)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn39)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn44)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn47)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn52)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn60)(panda$io$InputStream*);

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
    panda$core$String* tmp124;
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
    (($fn23) self->$class->vtable[1])(self);
    {
        panda$core$String* $tmp25 = panda$core$MutableString$finish$R$panda$core$String(result15);
        tmp124 = $tmp25;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result15));
        return tmp124;
    }
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a26;
    panda$core$UInt8$nullable b29;
    panda$core$UInt8$nullable $tmp28 = (($fn27) self->$class->vtable[2])(self);
    a26 = $tmp28;
    if (((panda$core$Bit) { !a26.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt8$nullable $tmp31 = (($fn30) self->$class->vtable[2])(self);
    b29 = $tmp31;
    if (((panda$core$Bit) { !b29.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt32 $tmp32 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a26.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp33 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp32, ((panda$core$UInt8) b29.value));
    panda$core$Int16 $tmp34 = panda$core$UInt32$convert$R$panda$core$Int16($tmp33);
    return ((panda$core$Int16$nullable) { $tmp34, true });
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a35;
    panda$core$Int16$nullable b38;
    panda$core$Int16$nullable $tmp37 = (($fn36) self->$class->vtable[7])(self);
    a35 = $tmp37;
    if (((panda$core$Bit) { !a35.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int16$nullable $tmp40 = (($fn39) self->$class->vtable[7])(self);
    b38 = $tmp40;
    if (((panda$core$Bit) { !b38.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32 $tmp41 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a35.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp42 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp41, ((panda$core$Int16) b38.value));
    return ((panda$core$Int32$nullable) { $tmp42, true });
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a43;
    panda$core$Int32$nullable b46;
    panda$core$Int32$nullable $tmp45 = (($fn44) self->$class->vtable[8])(self);
    a43 = $tmp45;
    if (((panda$core$Bit) { !a43.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32$nullable $tmp48 = (($fn47) self->$class->vtable[8])(self);
    b46 = $tmp48;
    if (((panda$core$Bit) { !b46.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp49 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a43.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp49, ((panda$core$Int32) b46.value));
    return ((panda$core$Int64$nullable) { $tmp50, true });
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result51;
    panda$core$Char8 $tmp54;
    panda$core$UInt8$nullable $tmp53 = (($fn52) self->$class->vtable[2])(self);
    result51 = $tmp53;
    if (((panda$core$Bit) { result51.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp54, ((panda$core$UInt8) result51.value));
        return ((panda$core$Char8$nullable) { $tmp54, true });
    }
    }
    return ((panda$core$Char8$nullable) { .nonnull = false });
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result55;
    panda$core$Char8$nullable c59;
    panda$core$String* tmp263;
    panda$core$Char8 $tmp68;
    panda$core$String* tmp370;
    panda$core$MutableString* $tmp56 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp56);
    result55 = $tmp56;
    $l57:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp61 = (($fn60) self->$class->vtable[10])(self);
        c59 = $tmp61;
        if (((panda$core$Bit) { !c59.nonnull }).value) {
        {
            panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result55->length, ((panda$core$Int64) { 0 }));
            if ($tmp62.value) {
            {
                {
                    tmp263 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result55));
                    return tmp263;
                }
            }
            }
            goto $l58;
        }
        }
        panda$core$Bit $tmp67;
        if (((panda$core$Bit) { c59.nonnull }).value) goto $l64; else goto $l65;
        $l64:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp68, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp69 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c59.value), $tmp68);
        $tmp67 = $tmp69;
        goto $l66;
        $l65:;
        $tmp67 = ((panda$core$Bit) { false });
        goto $l66;
        $l66:;
        if ($tmp67.value) {
        {
            goto $l58;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result55, ((panda$core$Char8) c59.value));
    }
    }
    $l58:;
    {
        panda$core$String* $tmp71 = panda$core$MutableString$finish$R$panda$core$String(result55);
        tmp370 = $tmp71;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result55));
        return tmp370;
    }
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp72 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp72, self);
    return ((panda$collections$Iterator*) $tmp72);
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

