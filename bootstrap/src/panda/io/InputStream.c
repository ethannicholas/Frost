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
typedef void (*$fn23)(panda$core$Object*);
typedef panda$core$UInt8$nullable (*$fn26)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn29)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn35)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn38)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn43)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn46)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn51)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn60)(panda$io$InputStream*);


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
    panda$core$MutableString* $tmp15 = (panda$core$MutableString*) malloc(48);
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
    (($fn23) ((panda$core$Object*) self)->$class->vtable[1])(((panda$core$Object*) self));
    panda$core$String* $tmp24 = panda$core$MutableString$finish$R$panda$core$String(result14);
    return $tmp24;
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
    panda$core$Char8$nullable c59;
    panda$core$Char8 $tmp67;
    panda$core$MutableString* $tmp55 = (panda$core$MutableString*) malloc(48);
    $tmp55->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp55->refCount.value = 1;
    panda$core$MutableString$init($tmp55);
    result54 = $tmp55;
    $l57:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp61 = (($fn60) self->$class->vtable[10])(self);
        c59 = $tmp61;
        if (((panda$core$Bit) { !c59.nonnull }).value) {
        {
            panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result54->length, ((panda$core$Int64) { 0 }));
            if ($tmp62.value) {
            {
                return NULL;
            }
            }
            goto $l58;
        }
        }
        panda$core$Bit $tmp66;
        if (((panda$core$Bit) { c59.nonnull }).value) goto $l63; else goto $l64;
        $l63:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp68 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c59.value), $tmp67);
        $tmp66 = $tmp68;
        goto $l65;
        $l64:;
        $tmp66 = ((panda$core$Bit) { false });
        goto $l65;
        $l65:;
        if ($tmp66.value) {
        {
            goto $l58;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result54, ((panda$core$Char8) c59.value));
    }
    }
    $l58:;
    panda$core$String* $tmp69 = panda$core$MutableString$finish$R$panda$core$String(result54);
    return $tmp69;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp70 = (panda$io$InputStream$LineIterator*) malloc(32);
    $tmp70->$class = (panda$core$Class*) &panda$io$InputStream$LineIterator$class;
    $tmp70->refCount.value = 1;
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp70, self);
    return ((panda$collections$Iterator*) $tmp70);
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}

