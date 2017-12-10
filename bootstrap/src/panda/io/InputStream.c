#include "panda/io/InputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int32.h"
#include "panda/core/Char8.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream/LineIterator.h"


panda$io$InputStream$class_type panda$io$InputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn6)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn9)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn11)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$UInt8$nullable (*$fn25)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn28)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn34)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn37)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn42)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn45)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn50)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn59)(panda$io$InputStream*);


panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i1;
    panda$core$UInt8$nullable next5;
    i1 = ((panda$core$Int64) { 0 });
    $l2:;
    panda$core$Bit $tmp4 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i1, p_max);
    if (!$tmp4.value) goto $l3;
    {
        panda$core$UInt8$nullable $tmp7 = (($fn6) self->$class->vtable[2])(self);
        next5 = $tmp7;
        if (((panda$core$Bit) { !next5.nonnull }).value) {
        {
            goto $l3;
        }
        }
        p_buffer[i1.value] = ((panda$core$UInt8) next5.value);
        panda$core$Int64 $tmp8 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i1, ((panda$core$Int64) { 1 }));
        i1 = $tmp8;
    }
    goto $l2;
    $l3:;
    return i1;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp10 = (($fn9) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    return $tmp10;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp12 = (($fn11) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    return $tmp12;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE13;
    panda$core$MutableString* result14;
    panda$core$Int8* buffer17;
    panda$core$Int64 count20;
    BUFFER_SIZE13 = ((panda$core$Int64) { 2048 });
    panda$core$MutableString* $tmp15 = (panda$core$MutableString*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp15->refCount.value = 1;
    panda$core$MutableString$init($tmp15);
    result14 = $tmp15;
    buffer17 = ((panda$core$Int8*) malloc(BUFFER_SIZE13.value * 1));
    $l18:;
    while (true) {
    {
        panda$core$Int64 $tmp21 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer17, BUFFER_SIZE13);
        count20 = $tmp21;
        panda$core$Bit $tmp22 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count20, ((panda$core$Int64) { 0 }));
        if ($tmp22.value) {
        {
            goto $l19;
        }
        }
        panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result14, ((panda$core$Char8*) buffer17), ((panda$core$Int64) { 0 }), count20);
    }
    }
    $l19:;
    free(buffer17);
    panda$core$String* $tmp23 = panda$core$MutableString$finish$R$panda$core$String(result14);
    return $tmp23;
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a24;
    panda$core$UInt8$nullable b27;
    panda$core$UInt8$nullable $tmp26 = (($fn25) self->$class->vtable[2])(self);
    a24 = $tmp26;
    if (((panda$core$Bit) { !a24.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt8$nullable $tmp29 = (($fn28) self->$class->vtable[2])(self);
    b27 = $tmp29;
    if (((panda$core$Bit) { !b27.nonnull }).value) {
    {
        return ((panda$core$Int16$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt32 $tmp30 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a24.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp31 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp30, ((panda$core$UInt8) b27.value));
    panda$core$Int16 $tmp32 = panda$core$UInt32$convert$R$panda$core$Int16($tmp31);
    return ((panda$core$Int16$nullable) { $tmp32, true });
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a33;
    panda$core$Int16$nullable b36;
    panda$core$Int16$nullable $tmp35 = (($fn34) self->$class->vtable[7])(self);
    a33 = $tmp35;
    if (((panda$core$Bit) { !a33.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int16$nullable $tmp38 = (($fn37) self->$class->vtable[7])(self);
    b36 = $tmp38;
    if (((panda$core$Bit) { !b36.nonnull }).value) {
    {
        return ((panda$core$Int32$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32 $tmp39 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a33.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp40 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp39, ((panda$core$Int16) b36.value));
    return ((panda$core$Int32$nullable) { $tmp40, true });
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a41;
    panda$core$Int32$nullable b44;
    panda$core$Int32$nullable $tmp43 = (($fn42) self->$class->vtable[8])(self);
    a41 = $tmp43;
    if (((panda$core$Bit) { !a41.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int32$nullable $tmp46 = (($fn45) self->$class->vtable[8])(self);
    b44 = $tmp46;
    if (((panda$core$Bit) { !b44.nonnull }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp47 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a41.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp48 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp47, ((panda$core$Int32) b44.value));
    return ((panda$core$Int64$nullable) { $tmp48, true });
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result49;
    panda$core$Char8 $tmp52;
    panda$core$UInt8$nullable $tmp51 = (($fn50) self->$class->vtable[2])(self);
    result49 = $tmp51;
    if (((panda$core$Bit) { result49.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp52, ((panda$core$UInt8) result49.value));
        return ((panda$core$Char8$nullable) { $tmp52, true });
    }
    }
    return ((panda$core$Char8$nullable) { .nonnull = false });
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result53;
    panda$core$Char8$nullable c58;
    panda$core$Char8 $tmp62;
    panda$core$MutableString* $tmp54 = (panda$core$MutableString*) malloc(40);
    $tmp54->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp54->refCount.value = 1;
    panda$core$MutableString$init($tmp54);
    result53 = $tmp54;
    $l56:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp60 = (($fn59) self->$class->vtable[10])(self);
        c58 = $tmp60;
        if (((panda$core$Bit) { !c58.nonnull }).value) {
        {
            panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result53->length, ((panda$core$Int64) { 0 }));
            if ($tmp61.value) {
            {
                return NULL;
            }
            }
            goto $l57;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp62, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp63 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c58.value), $tmp62);
        if ($tmp63.value) {
        {
            goto $l57;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result53, ((panda$core$Char8) c58.value));
    }
    }
    $l57:;
    panda$core$String* $tmp64 = panda$core$MutableString$finish$R$panda$core$String(result53);
    return $tmp64;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp65 = (panda$io$InputStream$LineIterator*) malloc(32);
    $tmp65->$class = (panda$core$Class*) &panda$io$InputStream$LineIterator$class;
    $tmp65->refCount.value = 1;
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp65, self);
    return ((panda$collections$Iterator*) $tmp65);
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}

