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
typedef void (*$fn24)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn28)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn31)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn37)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn40)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn45)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn48)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn53)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn62)(panda$io$InputStream*);

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
    panda$core$Int8* buffer18;
    panda$core$Int64 count21;
    panda$core$String* tmp125;
    BUFFER_SIZE14 = ((panda$core$Int64) { 2048 });
    panda$core$MutableString* $tmp16 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp16->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp16->refCount.value = 1;
    panda$core$MutableString$init($tmp16);
    result15 = $tmp16;
    buffer18 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE14.value * 1));
    $l19:;
    while (true) {
    {
        panda$core$Int64 $tmp22 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer18, BUFFER_SIZE14);
        count21 = $tmp22;
        panda$core$Bit $tmp23 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count21, ((panda$core$Int64) { 0 }));
        if ($tmp23.value) {
        {
            goto $l20;
        }
        }
        panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result15, ((panda$core$Char8*) buffer18), ((panda$core$Int64) { 0 }), count21);
    }
    }
    $l20:;
    pandaFree(buffer18);
    (($fn24) self->$class->vtable[1])(self);
    {
        panda$core$String* $tmp26 = panda$core$MutableString$finish$R$panda$core$String(result15);
        tmp125 = $tmp26;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result15));
        return tmp125;
    }
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a27;
    panda$core$UInt8$nullable b30;
    panda$core$UInt8$nullable $tmp29 = (($fn28) self->$class->vtable[2])(self);
    a27 = $tmp29;
    if (((panda$core$Bit) { !a27.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt8$nullable $tmp32 = (($fn31) self->$class->vtable[2])(self);
    b30 = $tmp32;
    if (((panda$core$Bit) { !b30.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt32 $tmp33 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a27.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp34 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp33, ((panda$core$UInt8) b30.value));
    panda$core$Int16 $tmp35 = panda$core$UInt32$convert$R$panda$core$Int16($tmp34);
    return ((panda$core$Int16$nullable) { $tmp35, true });
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a36;
    panda$core$Int16$nullable b39;
    panda$core$Int16$nullable $tmp38 = (($fn37) self->$class->vtable[7])(self);
    a36 = $tmp38;
    if (((panda$core$Bit) { !a36.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int16$nullable $tmp41 = (($fn40) self->$class->vtable[7])(self);
    b39 = $tmp41;
    if (((panda$core$Bit) { !b39.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32 $tmp42 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a36.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp43 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp42, ((panda$core$Int16) b39.value));
    return ((panda$core$Int32$nullable) { $tmp43, true });
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a44;
    panda$core$Int32$nullable b47;
    panda$core$Int32$nullable $tmp46 = (($fn45) self->$class->vtable[8])(self);
    a44 = $tmp46;
    if (((panda$core$Bit) { !a44.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32$nullable $tmp49 = (($fn48) self->$class->vtable[8])(self);
    b47 = $tmp49;
    if (((panda$core$Bit) { !b47.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp50 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a44.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp50, ((panda$core$Int32) b47.value));
    return ((panda$core$Int64$nullable) { $tmp51, true });
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result52;
    panda$core$Char8 $tmp55;
    panda$core$UInt8$nullable $tmp54 = (($fn53) self->$class->vtable[2])(self);
    result52 = $tmp54;
    if (((panda$core$Bit) { result52.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp55, ((panda$core$UInt8) result52.value));
        return ((panda$core$Char8$nullable) { $tmp55, true });
    }
    }
    return ((panda$core$Char8$nullable) { .nonnull = false });
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result56;
    panda$core$Char8$nullable c61;
    panda$core$String* tmp265;
    panda$core$Char8 $tmp70;
    panda$core$String* tmp372;
    panda$core$MutableString* $tmp57 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp57->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp57->refCount.value = 1;
    panda$core$MutableString$init($tmp57);
    result56 = $tmp57;
    $l59:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp63 = (($fn62) self->$class->vtable[10])(self);
        c61 = $tmp63;
        if (((panda$core$Bit) { !c61.nonnull }).value) {
        {
            panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result56->length, ((panda$core$Int64) { 0 }));
            if ($tmp64.value) {
            {
                {
                    tmp265 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result56));
                    return tmp265;
                }
            }
            }
            goto $l60;
        }
        }
        panda$core$Bit $tmp69;
        if (((panda$core$Bit) { c61.nonnull }).value) goto $l66; else goto $l67;
        $l66:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp70, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp71 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c61.value), $tmp70);
        $tmp69 = $tmp71;
        goto $l68;
        $l67:;
        $tmp69 = ((panda$core$Bit) { false });
        goto $l68;
        $l68:;
        if ($tmp69.value) {
        {
            goto $l60;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result56, ((panda$core$Char8) c61.value));
    }
    }
    $l60:;
    {
        panda$core$String* $tmp73 = panda$core$MutableString$finish$R$panda$core$String(result56);
        tmp372 = $tmp73;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result56));
        return tmp372;
    }
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp74 = (panda$io$InputStream$LineIterator*) pandaZAlloc(32);
    $tmp74->$class = (panda$core$Class*) &panda$io$InputStream$LineIterator$class;
    $tmp74->refCount.value = 1;
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp74, self);
    return ((panda$collections$Iterator*) $tmp74);
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
}

