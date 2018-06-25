#include "panda/io/InputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"
#include "panda/io/InputStream/ByteOrder.h"
#include "panda/core/Char8.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream/LineIterator.h"

static panda$core$String $s1;
panda$io$InputStream$class_type panda$io$InputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$cleanup, NULL, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$Int16$nullable (*$fn3)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn10)(panda$io$InputStream*);
typedef panda$core$Int64$nullable (*$fn17)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn24)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn31)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn36)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn52)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn57)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn71)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn76)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn92)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn108)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn123)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn127)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Char8$nullable (*$fn163)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn207)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn212)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 144, 7569956708600627293, NULL };

panda$core$UInt16$nullable panda$io$InputStream$read$R$panda$core$UInt16$Q(panda$io$InputStream* self) {
    panda$core$Int16 result2;
    panda$core$UInt16$nullable $returnValue5;
    panda$core$Int16$nullable $tmp4 = (($fn3) self->$class->vtable[7])(self);
    result2 = ((panda$core$Int16) $tmp4.value);
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$UInt16 $tmp6 = panda$core$Int16$convert$R$panda$core$UInt16(result2);
        $returnValue5 = ((panda$core$UInt16$nullable) { $tmp6, true });
        return $returnValue5;
    }
    }
    $returnValue5 = ((panda$core$UInt16$nullable) { .nonnull = false });
    return $returnValue5;
}
panda$core$UInt32$nullable panda$io$InputStream$read$R$panda$core$UInt32$Q(panda$io$InputStream* self) {
    panda$core$Int32 result9;
    panda$core$UInt32$nullable $returnValue12;
    panda$core$Int32$nullable $tmp11 = (($fn10) self->$class->vtable[8])(self);
    result9 = ((panda$core$Int32) $tmp11.value);
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$UInt32 $tmp13 = panda$core$Int32$convert$R$panda$core$UInt32(result9);
        $returnValue12 = ((panda$core$UInt32$nullable) { $tmp13, true });
        return $returnValue12;
    }
    }
    $returnValue12 = ((panda$core$UInt32$nullable) { .nonnull = false });
    return $returnValue12;
}
panda$core$UInt64$nullable panda$io$InputStream$read$R$panda$core$UInt64$Q(panda$io$InputStream* self) {
    panda$core$Int64 result16;
    panda$core$UInt64$nullable $returnValue19;
    panda$core$Int64$nullable $tmp18 = (($fn17) self->$class->vtable[9])(self);
    result16 = ((panda$core$Int64) $tmp18.value);
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$UInt64 $tmp20 = panda$core$Int64$convert$R$panda$core$UInt64(result16);
        $returnValue19 = ((panda$core$UInt64$nullable) { $tmp20, true });
        return $returnValue19;
    }
    }
    $returnValue19 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $returnValue19;
}
panda$core$Int8$nullable panda$io$InputStream$read$R$panda$core$Int8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result23;
    panda$core$Int8$nullable $returnValue26;
    panda$core$UInt8$nullable $tmp25 = (($fn24) self->$class->vtable[2])(self);
    result23 = $tmp25;
    if (((panda$core$Bit) { result23.nonnull }).value) {
    {
        panda$core$Int8 $tmp27 = panda$core$UInt8$convert$R$panda$core$Int8(((panda$core$UInt8) result23.value));
        $returnValue26 = ((panda$core$Int8$nullable) { $tmp27, true });
        return $returnValue26;
    }
    }
    $returnValue26 = ((panda$core$Int8$nullable) { .nonnull = false });
    return $returnValue26;
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a30;
    panda$core$Int16$nullable $returnValue33;
    panda$core$UInt8$nullable b35;
    panda$core$Int64 $tmp39;
    panda$core$UInt8 $tmp41;
    panda$core$UInt8 $tmp46;
    panda$core$UInt8$nullable $tmp32 = (($fn31) self->$class->vtable[2])(self);
    a30 = $tmp32;
    if (((panda$core$Bit) { !a30.nonnull }).value) {
    {
        $returnValue33 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue33;
    }
    }
    panda$core$UInt8$nullable $tmp37 = (($fn36) self->$class->vtable[2])(self);
    b35 = $tmp37;
    if (((panda$core$Bit) { !b35.nonnull }).value) {
    {
        $returnValue33 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue33;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp39, 0);
    panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp39);
    if ($tmp40.value) {
    {
        panda$core$UInt8$init$builtin_uint8(&$tmp41, 8);
        panda$core$UInt32 $tmp42 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) b35.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { $tmp41, true }).value));
        panda$core$UInt32 $tmp43 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp42, ((panda$core$UInt8) a30.value));
        panda$core$Int16 $tmp44 = panda$core$UInt32$convert$R$panda$core$Int16($tmp43);
        $returnValue33 = ((panda$core$Int16$nullable) { $tmp44, true });
        return $returnValue33;
    }
    }
    else {
    {
        panda$core$UInt8$init$builtin_uint8(&$tmp46, 8);
        panda$core$UInt32 $tmp47 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a30.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { $tmp46, true }).value));
        panda$core$UInt32 $tmp48 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp47, ((panda$core$UInt8) b35.value));
        panda$core$Int16 $tmp49 = panda$core$UInt32$convert$R$panda$core$Int16($tmp48);
        $returnValue33 = ((panda$core$Int16$nullable) { $tmp49, true });
        return $returnValue33;
    }
    }
    abort();
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a51;
    panda$core$Int32$nullable $returnValue54;
    panda$core$Int16$nullable b56;
    panda$core$Int64 $tmp60;
    panda$core$Int16 $tmp62;
    panda$core$Int16 $tmp66;
    panda$core$Int16$nullable $tmp53 = (($fn52) self->$class->vtable[7])(self);
    a51 = $tmp53;
    if (((panda$core$Bit) { !a51.nonnull }).value) {
    {
        $returnValue54 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue54;
    }
    }
    panda$core$Int16$nullable $tmp58 = (($fn57) self->$class->vtable[7])(self);
    b56 = $tmp58;
    if (((panda$core$Bit) { !b56.nonnull }).value) {
    {
        $returnValue54 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue54;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp60, 0);
    panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp60);
    if ($tmp61.value) {
    {
        panda$core$Int16$init$builtin_int16(&$tmp62, 16);
        panda$core$Int32 $tmp63 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) b56.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { $tmp62, true }).value));
        panda$core$Int32 $tmp64 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp63, ((panda$core$Int16) a51.value));
        $returnValue54 = ((panda$core$Int32$nullable) { $tmp64, true });
        return $returnValue54;
    }
    }
    else {
    {
        panda$core$Int16$init$builtin_int16(&$tmp66, 16);
        panda$core$Int32 $tmp67 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a51.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { $tmp66, true }).value));
        panda$core$Int32 $tmp68 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp67, ((panda$core$Int16) b56.value));
        $returnValue54 = ((panda$core$Int32$nullable) { $tmp68, true });
        return $returnValue54;
    }
    }
    abort();
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a70;
    panda$core$Int64$nullable $returnValue73;
    panda$core$Int32$nullable b75;
    panda$core$Int64 $tmp79;
    panda$core$Int64 $tmp81;
    panda$core$Int64 $tmp82;
    panda$core$Int64 $tmp86;
    panda$core$Int64 $tmp87;
    panda$core$Int32$nullable $tmp72 = (($fn71) self->$class->vtable[8])(self);
    a70 = $tmp72;
    if (((panda$core$Bit) { !a70.nonnull }).value) {
    {
        $returnValue73 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue73;
    }
    }
    panda$core$Int32$nullable $tmp77 = (($fn76) self->$class->vtable[8])(self);
    b75 = $tmp77;
    if (((panda$core$Bit) { !b75.nonnull }).value) {
    {
        $returnValue73 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue73;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp79, 0);
    panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp79);
    if ($tmp80.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp81, ((int64_t) ((panda$core$Int32) b75.value).value));
        panda$core$Int64$init$builtin_int64(&$tmp82, 32);
        panda$core$Int64 $tmp83 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp81, $tmp82);
        panda$core$Int64 $tmp84 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp83, ((panda$core$Int32) a70.value));
        $returnValue73 = ((panda$core$Int64$nullable) { $tmp84, true });
        return $returnValue73;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp86, ((int64_t) ((panda$core$Int32) a70.value).value));
        panda$core$Int64$init$builtin_int64(&$tmp87, 32);
        panda$core$Int64 $tmp88 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp86, $tmp87);
        panda$core$Int64 $tmp89 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp88, ((panda$core$Int32) b75.value));
        $returnValue73 = ((panda$core$Int64$nullable) { $tmp89, true });
        return $returnValue73;
    }
    }
    abort();
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result91;
    panda$core$Char8$nullable $returnValue94;
    panda$core$Char8 $tmp95;
    panda$core$UInt8$nullable $tmp93 = (($fn92) self->$class->vtable[2])(self);
    result91 = $tmp93;
    if (((panda$core$Bit) { result91.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp95, ((panda$core$UInt8) result91.value));
        $returnValue94 = ((panda$core$Char8$nullable) { $tmp95, true });
        return $returnValue94;
    }
    }
    $returnValue94 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $returnValue94;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i101;
    panda$core$Int64 $tmp102;
    panda$core$UInt8$nullable next107;
    panda$core$Int64 $tmp110;
    panda$core$Int64 $returnValue112;
    panda$core$Int64 $tmp116;
    int $tmp100;
    {
        panda$core$Int64$init$builtin_int64(&$tmp102, 0);
        i101 = $tmp102;
        $l103:;
        panda$core$Bit $tmp106 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i101, p_max);
        bool $tmp105 = $tmp106.value;
        if (!$tmp105) goto $l104;
        {
            panda$core$UInt8$nullable $tmp109 = (($fn108) self->$class->vtable[2])(self);
            next107 = $tmp109;
            if (((panda$core$Bit) { !next107.nonnull }).value) {
            {
                goto $l104;
            }
            }
            p_buffer[i101.value] = ((panda$core$UInt8) next107.value);
            panda$core$Int64$init$builtin_int64(&$tmp110, 1);
            panda$core$Int64 $tmp111 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i101, $tmp110);
            i101 = $tmp111;
        }
        goto $l103;
        $l104:;
        $returnValue112 = i101;
        $tmp100 = 0;
        goto $l98;
        $l113:;
        return $returnValue112;
    }
    $l98:;
    panda$core$Int64$init$builtin_int64(&$tmp116, 0);
    panda$core$Bit $tmp117 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue112, $tmp116);
    if ($tmp117.value) goto $l118; else goto $l119;
    $l119:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s120, (panda$core$Int64) { 183 }, &$s121);
    abort();
    $l118:;
    switch ($tmp100) {
        case 0: goto $l113;
    }
    $l115:;
    abort();
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue122;
    panda$core$Int64 $tmp124 = (($fn123) self->$class->vtable[11])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue122 = $tmp124;
    return $returnValue122;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue126;
    panda$core$Int64 $tmp128 = (($fn127) self->$class->vtable[11])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue126 = $tmp128;
    return $returnValue126;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE133;
    panda$core$Int64 $tmp134;
    panda$core$MutableString* result135 = NULL;
    panda$core$MutableString* $tmp136;
    panda$core$MutableString* $tmp137;
    panda$core$Int8* buffer139;
    panda$core$Int64 count142;
    panda$core$Int64 $tmp144;
    panda$core$String* $returnValue146;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    int $tmp132;
    {
        panda$core$Int64$init$builtin_int64(&$tmp134, 2048);
        BUFFER_SIZE133 = $tmp134;
        panda$core$MutableString* $tmp138 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp138);
        $tmp137 = $tmp138;
        $tmp136 = $tmp137;
        result135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        buffer139 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE133.value * 1));
        $l140:;
        while (true) {
        {
            panda$core$Int64 $tmp143 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer139, BUFFER_SIZE133);
            count142 = $tmp143;
            panda$core$Int64$init$builtin_int64(&$tmp144, 0);
            panda$core$Bit $tmp145 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count142, $tmp144);
            if ($tmp145.value) {
            {
                goto $l141;
            }
            }
            panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(result135, ((panda$core$Char8*) buffer139), count142);
        }
        }
        $l141:;
        pandaFree(buffer139);
        panda$core$String* $tmp149 = panda$core$MutableString$finish$R$panda$core$String(result135);
        $tmp148 = $tmp149;
        $tmp147 = $tmp148;
        $returnValue146 = $tmp147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
        $tmp132 = 0;
        goto $l130;
        $l150:;
        return $returnValue146;
    }
    $l130:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result135));
    result135 = NULL;
    switch ($tmp132) {
        case 0: goto $l150;
    }
    $l152:;
    abort();
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result156 = NULL;
    panda$core$MutableString* $tmp157;
    panda$core$MutableString* $tmp158;
    panda$core$Char8$nullable c162;
    panda$core$Int64 $tmp165;
    panda$core$String* $returnValue167;
    panda$core$String* $tmp168;
    panda$core$Char8$nullable $tmp171;
    panda$core$Char8 $tmp176;
    panda$core$UInt8 $tmp177;
    panda$core$Bit $tmp179;
    panda$core$Int64 $tmp181;
    panda$core$Int64 $tmp184;
    panda$core$Char32 $tmp187;
    panda$core$Int32 $tmp188;
    panda$core$Int64 $tmp191;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    int $tmp155;
    {
        panda$core$MutableString* $tmp159 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp159);
        $tmp158 = $tmp159;
        $tmp157 = $tmp158;
        result156 = $tmp157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
        $l160:;
        while (true) {
        {
            panda$core$Char8$nullable $tmp164 = (($fn163) self->$class->vtable[10])(self);
            c162 = $tmp164;
            if (((panda$core$Bit) { !c162.nonnull }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp165, 0);
                panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result156->_length, $tmp165);
                if ($tmp166.value) {
                {
                    $tmp168 = NULL;
                    $returnValue167 = $tmp168;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                    $tmp155 = 0;
                    goto $l153;
                    $l169:;
                    return $returnValue167;
                }
                }
                goto $l161;
            }
            }
            $tmp171 = c162;
            panda$core$Bit $tmp175;
            if (((panda$core$Bit) { $tmp171.nonnull }).value) goto $l172; else goto $l173;
            $l172:;
            panda$core$UInt8$init$builtin_uint8(&$tmp177, 10);
            panda$core$Char8$init$panda$core$UInt8(&$tmp176, $tmp177);
            panda$core$Bit $tmp178 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp171.value), $tmp176);
            $tmp175 = $tmp178;
            goto $l174;
            $l173:;
            panda$core$Bit$init$builtin_bit(&$tmp179, false);
            $tmp175 = $tmp179;
            goto $l174;
            $l174:;
            if ($tmp175.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp181, 0);
                panda$core$Bit $tmp182 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result156->_length, $tmp181);
                bool $tmp180 = $tmp182.value;
                if (!$tmp180) goto $l183;
                panda$core$Int64$init$builtin_int64(&$tmp184, 1);
                panda$core$Int64 $tmp185 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(result156->_length, $tmp184);
                panda$core$Char32 $tmp186 = panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(result156, $tmp185);
                panda$core$Int32$init$builtin_int32(&$tmp188, 13);
                panda$core$Char32$init$panda$core$Int32(&$tmp187, $tmp188);
                panda$core$Bit $tmp189 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp186, $tmp187);
                $tmp180 = $tmp189.value;
                $l183:;
                panda$core$Bit $tmp190 = { $tmp180 };
                if ($tmp190.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp191, 1);
                    panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(result156->_length, $tmp191);
                    result156->_length = $tmp192;
                }
                }
                goto $l161;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result156, ((panda$core$Char8) c162.value));
        }
        }
        $l161:;
        panda$core$String* $tmp195 = panda$core$MutableString$finish$R$panda$core$String(result156);
        $tmp194 = $tmp195;
        $tmp193 = $tmp194;
        $returnValue167 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
        $tmp155 = 1;
        goto $l153;
        $l196:;
        return $returnValue167;
    }
    $l153:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result156));
    result156 = NULL;
    switch ($tmp155) {
        case 0: goto $l169;
        case 1: goto $l196;
    }
    $l198:;
    abort();
}
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* self, panda$io$OutputStream* p_out) {
    panda$core$Int64 total199;
    panda$core$Int64 $tmp200;
    panda$core$Int64 BUFFER_SIZE201;
    panda$core$Int64 $tmp202;
    panda$core$UInt8* buffer203;
    panda$core$Int64 count206;
    panda$core$Int64 $tmp209;
    panda$core$Int64 $returnValue213;
    panda$core$Int64$init$builtin_int64(&$tmp200, 0);
    total199 = $tmp200;
    panda$core$Int64$init$builtin_int64(&$tmp202, 2048);
    BUFFER_SIZE201 = $tmp202;
    buffer203 = ((panda$core$UInt8*) pandaZAlloc(BUFFER_SIZE201.value * 1));
    $l204:;
    while (true) {
    {
        panda$core$Int64 $tmp208 = (($fn207) self->$class->vtable[11])(self, buffer203, BUFFER_SIZE201);
        count206 = $tmp208;
        panda$core$Int64$init$builtin_int64(&$tmp209, 0);
        panda$core$Bit $tmp210 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count206, $tmp209);
        if ($tmp210.value) {
        {
            goto $l205;
        }
        }
        panda$core$Int64 $tmp211 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(total199, count206);
        total199 = $tmp211;
        (($fn212) p_out->$class->vtable[10])(p_out, buffer203, count206);
    }
    }
    $l205:;
    pandaFree(buffer203);
    $returnValue213 = total199;
    return $returnValue213;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$collections$Iterator* $returnValue215;
    panda$collections$Iterator* $tmp216;
    panda$io$InputStream$LineIterator* $tmp217;
    panda$io$InputStream$LineIterator* $tmp218 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp218, self);
    $tmp217 = $tmp218;
    $tmp216 = ((panda$collections$Iterator*) $tmp217);
    $returnValue215 = $tmp216;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
    return $returnValue215;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
    panda$io$InputStream$ByteOrder $tmp220;
    panda$core$Int64 $tmp221;
    panda$core$Int64$init$builtin_int64(&$tmp221, 0);
    panda$io$InputStream$ByteOrder$init$panda$core$Int64(&$tmp220, $tmp221);
    self->byteOrder = $tmp220;
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    int $tmp224;
    {
    }
    $tmp224 = -1;
    goto $l222;
    $l222:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp224) {
        case -1: goto $l225;
    }
    $l225:;
}

