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
#include "panda/io/ByteOrder.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
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
typedef panda$core$Int16$nullable (*$fn56)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn61)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn79)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn84)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn104)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn120)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn135)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn139)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Char8$nullable (*$fn179)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn228)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn233)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 144, 7569956708600627293, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    if (false) goto $l51; else goto $l52;
    $l52:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, (panda$core$Int64) { 102 }, &$s54);
    abort();
    $l51:;
    abort();
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a55;
    panda$core$Int32$nullable $returnValue58;
    panda$core$Int16$nullable b60;
    panda$core$Int64 $tmp64;
    panda$core$Int16 $tmp66;
    panda$core$Int16 $tmp70;
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
    panda$core$Int64$init$builtin_int64(&$tmp64, 0);
    panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp64);
    if ($tmp65.value) {
    {
        panda$core$Int16$init$builtin_int16(&$tmp66, 16);
        panda$core$Int32 $tmp67 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) b60.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { $tmp66, true }).value));
        panda$core$Int32 $tmp68 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp67, ((panda$core$Int16) a55.value));
        $returnValue58 = ((panda$core$Int32$nullable) { $tmp68, true });
        return $returnValue58;
    }
    }
    else {
    {
        panda$core$Int16$init$builtin_int16(&$tmp70, 16);
        panda$core$Int32 $tmp71 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a55.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { $tmp70, true }).value));
        panda$core$Int32 $tmp72 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp71, ((panda$core$Int16) b60.value));
        $returnValue58 = ((panda$core$Int32$nullable) { $tmp72, true });
        return $returnValue58;
    }
    }
    if (false) goto $l74; else goto $l75;
    $l75:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, (panda$core$Int64) { 123 }, &$s77);
    abort();
    $l74:;
    abort();
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a78;
    panda$core$Int64$nullable $returnValue81;
    panda$core$Int32$nullable b83;
    panda$core$Int64 $tmp87;
    panda$core$Int64 $tmp89;
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp94;
    panda$core$Int64 $tmp95;
    panda$core$Int32$nullable $tmp80 = (($fn79) self->$class->vtable[8])(self);
    a78 = $tmp80;
    if (((panda$core$Bit) { !a78.nonnull }).value) {
    {
        $returnValue81 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue81;
    }
    }
    panda$core$Int32$nullable $tmp85 = (($fn84) self->$class->vtable[8])(self);
    b83 = $tmp85;
    if (((panda$core$Bit) { !b83.nonnull }).value) {
    {
        $returnValue81 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue81;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp87, 0);
    panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp87);
    if ($tmp88.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp89, ((int64_t) ((panda$core$Int32) b83.value).value));
        panda$core$Int64$init$builtin_int64(&$tmp90, 32);
        panda$core$Int64 $tmp91 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp89, $tmp90);
        panda$core$Int64 $tmp92 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp91, ((panda$core$Int32) a78.value));
        $returnValue81 = ((panda$core$Int64$nullable) { $tmp92, true });
        return $returnValue81;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp94, ((int64_t) ((panda$core$Int32) a78.value).value));
        panda$core$Int64$init$builtin_int64(&$tmp95, 32);
        panda$core$Int64 $tmp96 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp94, $tmp95);
        panda$core$Int64 $tmp97 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp96, ((panda$core$Int32) b83.value));
        $returnValue81 = ((panda$core$Int64$nullable) { $tmp97, true });
        return $returnValue81;
    }
    }
    if (false) goto $l99; else goto $l100;
    $l100:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s101, (panda$core$Int64) { 144 }, &$s102);
    abort();
    $l99:;
    abort();
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result103;
    panda$core$Char8$nullable $returnValue106;
    panda$core$Char8 $tmp107;
    panda$core$UInt8$nullable $tmp105 = (($fn104) self->$class->vtable[2])(self);
    result103 = $tmp105;
    if (((panda$core$Bit) { result103.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp107, ((panda$core$UInt8) result103.value));
        $returnValue106 = ((panda$core$Char8$nullable) { $tmp107, true });
        return $returnValue106;
    }
    }
    $returnValue106 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $returnValue106;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i113;
    panda$core$Int64 $tmp114;
    panda$core$UInt8$nullable next119;
    panda$core$Int64 $tmp122;
    panda$core$Int64 $returnValue124;
    panda$core$Int64 $tmp128;
    int $tmp112;
    {
        panda$core$Int64$init$builtin_int64(&$tmp114, 0);
        i113 = $tmp114;
        $l115:;
        panda$core$Bit $tmp118 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i113, p_max);
        bool $tmp117 = $tmp118.value;
        if (!$tmp117) goto $l116;
        {
            panda$core$UInt8$nullable $tmp121 = (($fn120) self->$class->vtable[2])(self);
            next119 = $tmp121;
            if (((panda$core$Bit) { !next119.nonnull }).value) {
            {
                goto $l116;
            }
            }
            p_buffer[i113.value] = ((panda$core$UInt8) next119.value);
            panda$core$Int64$init$builtin_int64(&$tmp122, 1);
            panda$core$Int64 $tmp123 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i113, $tmp122);
            i113 = $tmp123;
        }
        goto $l115;
        $l116:;
        $returnValue124 = i113;
        $tmp112 = 0;
        goto $l110;
        $l125:;
        return $returnValue124;
    }
    $l110:;
    panda$core$Int64$init$builtin_int64(&$tmp128, 0);
    panda$core$Bit $tmp129 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue124, $tmp128);
    if ($tmp129.value) goto $l130; else goto $l131;
    $l131:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s132, (panda$core$Int64) { 178 }, &$s133);
    abort();
    $l130:;
    switch ($tmp112) {
        case 0: goto $l125;
    }
    $l127:;
    abort();
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue134;
    panda$core$Int64 $tmp136 = (($fn135) self->$class->vtable[11])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue134 = $tmp136;
    return $returnValue134;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue138;
    panda$core$Int64 $tmp140 = (($fn139) self->$class->vtable[11])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue138 = $tmp140;
    return $returnValue138;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE145;
    panda$core$Int64 $tmp146;
    panda$core$MutableString* result147 = NULL;
    panda$core$MutableString* $tmp148;
    panda$core$MutableString* $tmp149;
    panda$core$Int8* buffer151;
    panda$core$Int64 count154;
    panda$core$Int64 $tmp156;
    panda$core$String* $returnValue158;
    panda$core$String* $tmp159;
    panda$core$String* $tmp160;
    int $tmp144;
    {
        panda$core$Int64$init$builtin_int64(&$tmp146, 2048);
        BUFFER_SIZE145 = $tmp146;
        panda$core$MutableString* $tmp150 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp150);
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        result147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
        buffer151 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE145.value * 1));
        $l152:;
        while (true) {
        {
            panda$core$Int64 $tmp155 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer151, BUFFER_SIZE145);
            count154 = $tmp155;
            panda$core$Int64$init$builtin_int64(&$tmp156, 0);
            panda$core$Bit $tmp157 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count154, $tmp156);
            if ($tmp157.value) {
            {
                goto $l153;
            }
            }
            panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(result147, ((panda$core$Char8*) buffer151), count154);
        }
        }
        $l153:;
        pandaFree(buffer151);
        panda$core$String* $tmp161 = panda$core$MutableString$finish$R$panda$core$String(result147);
        $tmp160 = $tmp161;
        $tmp159 = $tmp160;
        $returnValue158 = $tmp159;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
        $tmp144 = 0;
        goto $l142;
        $l162:;
        return $returnValue158;
    }
    $l142:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result147));
    result147 = NULL;
    switch ($tmp144) {
        case 0: goto $l162;
    }
    $l164:;
    if (false) goto $l165; else goto $l166;
    $l166:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s167, (panda$core$Int64) { 212 }, &$s168);
    abort();
    $l165:;
    abort();
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result172 = NULL;
    panda$core$MutableString* $tmp173;
    panda$core$MutableString* $tmp174;
    panda$core$Char8$nullable c178;
    panda$core$Int64 $tmp181;
    panda$core$String* $returnValue183;
    panda$core$String* $tmp184;
    panda$core$Char8$nullable $tmp187;
    panda$core$Char8 $tmp192;
    panda$core$UInt8 $tmp193;
    panda$core$Bit $tmp195;
    panda$core$Int64 $tmp197;
    panda$core$Int64 $tmp200;
    panda$core$Char32 $tmp203;
    panda$core$Int32 $tmp204;
    panda$core$MutableString* $tmp207;
    panda$core$Int64 $tmp208;
    panda$core$String* $tmp210;
    panda$core$String* $tmp211;
    int $tmp171;
    {
        panda$core$MutableString* $tmp175 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp175);
        $tmp174 = $tmp175;
        $tmp173 = $tmp174;
        result172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
        $l176:;
        while (true) {
        {
            panda$core$Char8$nullable $tmp180 = (($fn179) self->$class->vtable[10])(self);
            c178 = $tmp180;
            if (((panda$core$Bit) { !c178.nonnull }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp181, 0);
                panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result172->_length, $tmp181);
                if ($tmp182.value) {
                {
                    $tmp184 = NULL;
                    $returnValue183 = $tmp184;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
                    $tmp171 = 0;
                    goto $l169;
                    $l185:;
                    return $returnValue183;
                }
                }
                goto $l177;
            }
            }
            $tmp187 = c178;
            panda$core$Bit $tmp191;
            if (((panda$core$Bit) { $tmp187.nonnull }).value) goto $l188; else goto $l189;
            $l188:;
            panda$core$UInt8$init$builtin_uint8(&$tmp193, 10);
            panda$core$Char8$init$panda$core$UInt8(&$tmp192, $tmp193);
            panda$core$Bit $tmp194 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp187.value), $tmp192);
            $tmp191 = $tmp194;
            goto $l190;
            $l189:;
            panda$core$Bit$init$builtin_bit(&$tmp195, false);
            $tmp191 = $tmp195;
            goto $l190;
            $l190:;
            if ($tmp191.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp197, 0);
                panda$core$Bit $tmp198 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result172->_length, $tmp197);
                bool $tmp196 = $tmp198.value;
                if (!$tmp196) goto $l199;
                panda$core$Int64$init$builtin_int64(&$tmp200, 1);
                panda$core$Int64 $tmp201 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(result172->_length, $tmp200);
                panda$core$Char32 $tmp202 = panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(result172, $tmp201);
                panda$core$Int32$init$builtin_int32(&$tmp204, 13);
                panda$core$Char32$init$panda$core$Int32(&$tmp203, $tmp204);
                panda$core$Bit $tmp205 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp202, $tmp203);
                $tmp196 = $tmp205.value;
                $l199:;
                panda$core$Bit $tmp206 = { $tmp196 };
                if ($tmp206.value) {
                {
                    $tmp207 = result172;
                    panda$core$Int64$init$builtin_int64(&$tmp208, 1);
                    panda$core$Int64 $tmp209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp207->_length, $tmp208);
                    $tmp207->_length = $tmp209;
                }
                }
                goto $l177;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result172, ((panda$core$Char8) c178.value));
        }
        }
        $l177:;
        panda$core$String* $tmp212 = panda$core$MutableString$finish$R$panda$core$String(result172);
        $tmp211 = $tmp212;
        $tmp210 = $tmp211;
        $returnValue183 = $tmp210;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
        $tmp171 = 1;
        goto $l169;
        $l213:;
        return $returnValue183;
    }
    $l169:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result172));
    result172 = NULL;
    switch ($tmp171) {
        case 0: goto $l185;
        case 1: goto $l213;
    }
    $l215:;
    if (false) goto $l216; else goto $l217;
    $l217:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s218, (panda$core$Int64) { 231 }, &$s219);
    abort();
    $l216:;
    abort();
}
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* self, panda$io$OutputStream* p_out) {
    panda$core$Int64 total220;
    panda$core$Int64 $tmp221;
    panda$core$Int64 BUFFER_SIZE222;
    panda$core$Int64 $tmp223;
    panda$core$UInt8* buffer224;
    panda$core$Int64 count227;
    panda$core$Int64 $tmp230;
    panda$core$Int64 $returnValue234;
    panda$core$Int64$init$builtin_int64(&$tmp221, 0);
    total220 = $tmp221;
    panda$core$Int64$init$builtin_int64(&$tmp223, 2048);
    BUFFER_SIZE222 = $tmp223;
    buffer224 = ((panda$core$UInt8*) pandaZAlloc(BUFFER_SIZE222.value * 1));
    $l225:;
    while (true) {
    {
        panda$core$Int64 $tmp229 = (($fn228) self->$class->vtable[11])(self, buffer224, BUFFER_SIZE222);
        count227 = $tmp229;
        panda$core$Int64$init$builtin_int64(&$tmp230, 0);
        panda$core$Bit $tmp231 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count227, $tmp230);
        if ($tmp231.value) {
        {
            goto $l226;
        }
        }
        panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(total220, count227);
        total220 = $tmp232;
        (($fn233) p_out->$class->vtable[10])(p_out, buffer224, count227);
    }
    }
    $l226:;
    pandaFree(buffer224);
    $returnValue234 = total220;
    return $returnValue234;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$collections$Iterator* $returnValue236;
    panda$collections$Iterator* $tmp237;
    panda$io$InputStream$LineIterator* $tmp238;
    panda$io$InputStream$LineIterator* $tmp239 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp239, self);
    $tmp238 = $tmp239;
    $tmp237 = ((panda$collections$Iterator*) $tmp238);
    $returnValue236 = $tmp237;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
    return $returnValue236;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
    panda$io$ByteOrder $tmp241;
    panda$core$Int64 $tmp242;
    panda$core$Int64$init$builtin_int64(&$tmp242, 0);
    panda$io$ByteOrder$init$panda$core$Int64(&$tmp241, $tmp242);
    self->byteOrder = $tmp241;
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    int $tmp245;
    {
    }
    $tmp245 = -1;
    goto $l243;
    $l243:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp245) {
        case -1: goto $l246;
    }
    $l246:;
}

