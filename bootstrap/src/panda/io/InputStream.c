#include "panda/io/InputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
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
typedef void (*$fn24)(panda$core$Object*);
typedef panda$core$UInt8$nullable (*$fn27)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn30)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn36)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn39)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn44)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn47)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn52)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn62)(panda$io$InputStream*);


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
    panda$core$Int8* buffer18;
    panda$core$Int64 count21;
    BUFFER_SIZE13 = ((panda$core$Int64) { 2048 });
    panda$core$MutableString* $tmp15 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp15->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp15->refCount.value = 1;
    panda$core$MutableString$init($tmp15);
    panda$core$Object* $tmp17 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp15));
    result14 = ((panda$core$MutableString*) $tmp17);
    buffer18 = ((panda$core$Int8*) pandaAlloc(BUFFER_SIZE13.value * 1));
    $l19:;
    while (true) {
    {
        panda$core$Int64 $tmp22 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer18, BUFFER_SIZE13);
        count21 = $tmp22;
        panda$core$Bit $tmp23 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count21, ((panda$core$Int64) { 0 }));
        if ($tmp23.value) {
        {
            goto $l20;
        }
        }
        panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result14, ((panda$core$Char8*) buffer18), ((panda$core$Int64) { 0 }), count21);
    }
    }
    $l20:;
    pandaFree(buffer18);
    (($fn24) ((panda$core$Object*) self)->$class->vtable[1])(((panda$core$Object*) self));
    panda$core$String* $tmp25 = panda$core$MutableString$finish$R$panda$core$String(result14);
    return $tmp25;
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
    panda$core$Char8$nullable c61;
    panda$core$Char8 $tmp69;
    panda$core$MutableString* $tmp56 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp56->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp56->refCount.value = 1;
    panda$core$MutableString$init($tmp56);
    panda$core$Object* $tmp58 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp56));
    result55 = ((panda$core$MutableString*) $tmp58);
    $l59:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp63 = (($fn62) self->$class->vtable[10])(self);
        c61 = $tmp63;
        if (((panda$core$Bit) { !c61.nonnull }).value) {
        {
            panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result55->length, ((panda$core$Int64) { 0 }));
            if ($tmp64.value) {
            {
                return NULL;
            }
            }
            goto $l60;
        }
        }
        panda$core$Bit $tmp68;
        if (((panda$core$Bit) { c61.nonnull }).value) goto $l65; else goto $l66;
        $l65:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp69, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp70 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c61.value), $tmp69);
        $tmp68 = $tmp70;
        goto $l67;
        $l66:;
        $tmp68 = ((panda$core$Bit) { false });
        goto $l67;
        $l67:;
        if ($tmp68.value) {
        {
            goto $l60;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result55, ((panda$core$Char8) c61.value));
    }
    }
    $l60:;
    panda$core$String* $tmp71 = panda$core$MutableString$finish$R$panda$core$String(result55);
    return $tmp71;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp72 = (panda$io$InputStream$LineIterator*) pandaAlloc(32);
    $tmp72->$class = (panda$core$Class*) &panda$io$InputStream$LineIterator$class;
    $tmp72->refCount.value = 1;
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp72, self);
    return ((panda$collections$Iterator*) $tmp72);
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}

