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
#include "panda/io/OutputStream.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream/LineIterator.h"

static panda$core$String $s1;
panda$io$InputStream$class_type panda$io$InputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$cleanup, NULL, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn9)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn16)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn20)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$UInt8$nullable (*$fn48)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn53)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn62)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn67)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn75)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn80)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn89)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn105)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn136)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn142)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };

panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i2;
    panda$core$Int64 $tmp3;
    panda$core$UInt8$nullable next8;
    panda$core$Int64 $tmp11;
    panda$core$Int64 $returnValue13;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    i2 = $tmp3;
    $l4:;
    panda$core$Bit $tmp7 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i2, p_max);
    bool $tmp6 = $tmp7.value;
    if (!$tmp6) goto $l5;
    {
        panda$core$UInt8$nullable $tmp10 = (($fn9) self->$class->vtable[2])(self);
        next8 = $tmp10;
        if (((panda$core$Bit) { !next8.nonnull }).value) {
        {
            goto $l5;
        }
        }
        p_buffer[i2.value] = ((panda$core$UInt8) next8.value);
        panda$core$Int64$init$builtin_int64(&$tmp11, 1);
        panda$core$Int64 $tmp12 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i2, $tmp11);
        i2 = $tmp12;
    }
    goto $l4;
    $l5:;
    $returnValue13 = i2;
    return $returnValue13;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue15;
    panda$core$Int64 $tmp17 = (($fn16) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue15 = $tmp17;
    return $returnValue15;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue19;
    panda$core$Int64 $tmp21 = (($fn20) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $returnValue19 = $tmp21;
    return $returnValue19;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE26;
    panda$core$Int64 $tmp27;
    panda$core$MutableString* result28 = NULL;
    panda$core$MutableString* $tmp29;
    panda$core$MutableString* $tmp30;
    panda$core$Int8* buffer32;
    panda$core$Int64 count35;
    panda$core$Int64 $tmp37;
    panda$core$Int64 $tmp39;
    panda$core$String* $returnValue40;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    int $tmp25;
    {
        panda$core$Int64$init$builtin_int64(&$tmp27, 2048);
        BUFFER_SIZE26 = $tmp27;
        panda$core$MutableString* $tmp31 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp31);
        $tmp30 = $tmp31;
        $tmp29 = $tmp30;
        result28 = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        buffer32 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE26.value * 1));
        $l33:;
        while (true) {
        {
            panda$core$Int64 $tmp36 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer32, BUFFER_SIZE26);
            count35 = $tmp36;
            panda$core$Int64$init$builtin_int64(&$tmp37, 0);
            panda$core$Bit $tmp38 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count35, $tmp37);
            if ($tmp38.value) {
            {
                goto $l34;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp39, 0);
            panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result28, ((panda$core$Char8*) buffer32), $tmp39, count35);
        }
        }
        $l34:;
        pandaFree(buffer32);
        panda$core$String* $tmp43 = panda$core$MutableString$finish$R$panda$core$String(result28);
        $tmp42 = $tmp43;
        $tmp41 = $tmp42;
        $returnValue40 = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        $tmp25 = 0;
        goto $l23;
        $l44:;
        return $returnValue40;
    }
    $l23:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result28));
    result28 = NULL;
    switch ($tmp25) {
        case 0: goto $l44;
    }
    $l46:;
    abort();
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a47;
    panda$core$Int16$nullable $returnValue50;
    panda$core$UInt8$nullable b52;
    panda$core$UInt8 $tmp56;
    panda$core$UInt8$nullable $tmp49 = (($fn48) self->$class->vtable[2])(self);
    a47 = $tmp49;
    if (((panda$core$Bit) { !a47.nonnull }).value) {
    {
        $returnValue50 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue50;
    }
    }
    panda$core$UInt8$nullable $tmp54 = (($fn53) self->$class->vtable[2])(self);
    b52 = $tmp54;
    if (((panda$core$Bit) { !b52.nonnull }).value) {
    {
        $returnValue50 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue50;
    }
    }
    panda$core$UInt8$init$builtin_uint8(&$tmp56, 8);
    panda$core$UInt32 $tmp57 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a47.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { $tmp56, true }).value));
    panda$core$UInt32 $tmp58 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp57, ((panda$core$UInt8) b52.value));
    panda$core$Int16 $tmp59 = panda$core$UInt32$convert$R$panda$core$Int16($tmp58);
    $returnValue50 = ((panda$core$Int16$nullable) { $tmp59, true });
    return $returnValue50;
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a61;
    panda$core$Int32$nullable $returnValue64;
    panda$core$Int16$nullable b66;
    panda$core$Int16 $tmp70;
    panda$core$Int16$nullable $tmp63 = (($fn62) self->$class->vtable[7])(self);
    a61 = $tmp63;
    if (((panda$core$Bit) { !a61.nonnull }).value) {
    {
        $returnValue64 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue64;
    }
    }
    panda$core$Int16$nullable $tmp68 = (($fn67) self->$class->vtable[7])(self);
    b66 = $tmp68;
    if (((panda$core$Bit) { !b66.nonnull }).value) {
    {
        $returnValue64 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue64;
    }
    }
    panda$core$Int16$init$builtin_int16(&$tmp70, 16);
    panda$core$Int32 $tmp71 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a61.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { $tmp70, true }).value));
    panda$core$Int32 $tmp72 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp71, ((panda$core$Int16) b66.value));
    $returnValue64 = ((panda$core$Int32$nullable) { $tmp72, true });
    return $returnValue64;
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a74;
    panda$core$Int64$nullable $returnValue77;
    panda$core$Int32$nullable b79;
    panda$core$Int64 $tmp83;
    panda$core$Int64 $tmp84;
    panda$core$Int32$nullable $tmp76 = (($fn75) self->$class->vtable[8])(self);
    a74 = $tmp76;
    if (((panda$core$Bit) { !a74.nonnull }).value) {
    {
        $returnValue77 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue77;
    }
    }
    panda$core$Int32$nullable $tmp81 = (($fn80) self->$class->vtable[8])(self);
    b79 = $tmp81;
    if (((panda$core$Bit) { !b79.nonnull }).value) {
    {
        $returnValue77 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue77;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp83, ((int64_t) ((panda$core$Int32) a74.value).value));
    panda$core$Int64$init$builtin_int64(&$tmp84, 32);
    panda$core$Int64 $tmp85 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp83, $tmp84);
    panda$core$Int64 $tmp86 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp85, ((panda$core$Int32) b79.value));
    $returnValue77 = ((panda$core$Int64$nullable) { $tmp86, true });
    return $returnValue77;
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result88;
    panda$core$Char8$nullable $returnValue91;
    panda$core$Char8 $tmp92;
    panda$core$UInt8$nullable $tmp90 = (($fn89) self->$class->vtable[2])(self);
    result88 = $tmp90;
    if (((panda$core$Bit) { result88.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp92, ((panda$core$UInt8) result88.value));
        $returnValue91 = ((panda$core$Char8$nullable) { $tmp92, true });
        return $returnValue91;
    }
    }
    $returnValue91 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $returnValue91;
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result98 = NULL;
    panda$core$MutableString* $tmp99;
    panda$core$MutableString* $tmp100;
    panda$core$Char8$nullable c104;
    panda$core$Int64 $tmp107;
    panda$core$String* $returnValue109;
    panda$core$String* $tmp110;
    panda$core$Char8$nullable $tmp113;
    panda$core$Char8 $tmp118;
    panda$core$UInt8 $tmp119;
    panda$core$Bit $tmp121;
    panda$core$String* $tmp122;
    panda$core$String* $tmp123;
    int $tmp97;
    {
        panda$core$MutableString* $tmp101 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp101);
        $tmp100 = $tmp101;
        $tmp99 = $tmp100;
        result98 = $tmp99;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
        $l102:;
        while (true) {
        {
            panda$core$Char8$nullable $tmp106 = (($fn105) self->$class->vtable[10])(self);
            c104 = $tmp106;
            if (((panda$core$Bit) { !c104.nonnull }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp107, 0);
                panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result98->length, $tmp107);
                if ($tmp108.value) {
                {
                    $tmp110 = NULL;
                    $returnValue109 = $tmp110;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
                    $tmp97 = 0;
                    goto $l95;
                    $l111:;
                    return $returnValue109;
                }
                }
                goto $l103;
            }
            }
            $tmp113 = c104;
            panda$core$Bit $tmp117;
            if (((panda$core$Bit) { $tmp113.nonnull }).value) goto $l114; else goto $l115;
            $l114:;
            panda$core$UInt8$init$builtin_uint8(&$tmp119, 10);
            panda$core$Char8$init$panda$core$UInt8(&$tmp118, $tmp119);
            panda$core$Bit $tmp120 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp113.value), $tmp118);
            $tmp117 = $tmp120;
            goto $l116;
            $l115:;
            panda$core$Bit$init$builtin_bit(&$tmp121, false);
            $tmp117 = $tmp121;
            goto $l116;
            $l116:;
            if ($tmp117.value) {
            {
                goto $l103;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result98, ((panda$core$Char8) c104.value));
        }
        }
        $l103:;
        panda$core$String* $tmp124 = panda$core$MutableString$finish$R$panda$core$String(result98);
        $tmp123 = $tmp124;
        $tmp122 = $tmp123;
        $returnValue109 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
        $tmp97 = 1;
        goto $l95;
        $l125:;
        return $returnValue109;
    }
    $l95:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result98));
    result98 = NULL;
    switch ($tmp97) {
        case 0: goto $l111;
        case 1: goto $l125;
    }
    $l127:;
    abort();
}
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* self, panda$io$OutputStream* p_out) {
    panda$core$Int64 total128;
    panda$core$Int64 $tmp129;
    panda$core$Int64 BUFFER_SIZE130;
    panda$core$Int64 $tmp131;
    panda$core$UInt8* buffer132;
    panda$core$Int64 count135;
    panda$core$Int64 $tmp138;
    panda$core$Int64 $tmp141;
    panda$core$Int64 $returnValue143;
    panda$core$Int64$init$builtin_int64(&$tmp129, 0);
    total128 = $tmp129;
    panda$core$Int64$init$builtin_int64(&$tmp131, 2048);
    BUFFER_SIZE130 = $tmp131;
    buffer132 = ((panda$core$UInt8*) pandaZAlloc(BUFFER_SIZE130.value * 1));
    $l133:;
    while (true) {
    {
        panda$core$Int64 $tmp137 = (($fn136) self->$class->vtable[3])(self, buffer132, BUFFER_SIZE130);
        count135 = $tmp137;
        panda$core$Int64$init$builtin_int64(&$tmp138, 0);
        panda$core$Bit $tmp139 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count135, $tmp138);
        if ($tmp139.value) {
        {
            goto $l134;
        }
        }
        panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(total128, count135);
        total128 = $tmp140;
        panda$core$Int64$init$builtin_int64(&$tmp141, 0);
        (($fn142) p_out->$class->vtable[4])(p_out, buffer132, $tmp141, count135);
    }
    }
    $l134:;
    pandaFree(buffer132);
    $returnValue143 = total128;
    return $returnValue143;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$collections$Iterator* $returnValue145;
    panda$collections$Iterator* $tmp146;
    panda$io$InputStream$LineIterator* $tmp147;
    panda$io$InputStream$LineIterator* $tmp148 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp148, self);
    $tmp147 = $tmp148;
    $tmp146 = ((panda$collections$Iterator*) $tmp147);
    $returnValue145 = $tmp146;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
    return $returnValue145;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    int $tmp152;
    {
    }
    $tmp152 = -1;
    goto $l150;
    $l150:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp152) {
        case -1: goto $l153;
    }
    $l153:;
}

