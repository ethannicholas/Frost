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
typedef panda$core$UInt8$nullable (*$fn47)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn52)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn61)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn66)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn74)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn79)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn88)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn104)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn135)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn140)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);

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
    panda$core$String* $returnValue39;
    panda$core$String* $tmp40;
    panda$core$String* $tmp41;
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
            panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(result28, ((panda$core$Char8*) buffer32), count35);
        }
        }
        $l34:;
        pandaFree(buffer32);
        panda$core$String* $tmp42 = panda$core$MutableString$finish$R$panda$core$String(result28);
        $tmp41 = $tmp42;
        $tmp40 = $tmp41;
        $returnValue39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        $tmp25 = 0;
        goto $l23;
        $l43:;
        return $returnValue39;
    }
    $l23:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result28));
    result28 = NULL;
    switch ($tmp25) {
        case 0: goto $l43;
    }
    $l45:;
    abort();
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a46;
    panda$core$Int16$nullable $returnValue49;
    panda$core$UInt8$nullable b51;
    panda$core$UInt8 $tmp55;
    panda$core$UInt8$nullable $tmp48 = (($fn47) self->$class->vtable[2])(self);
    a46 = $tmp48;
    if (((panda$core$Bit) { !a46.nonnull }).value) {
    {
        $returnValue49 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue49;
    }
    }
    panda$core$UInt8$nullable $tmp53 = (($fn52) self->$class->vtable[2])(self);
    b51 = $tmp53;
    if (((panda$core$Bit) { !b51.nonnull }).value) {
    {
        $returnValue49 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $returnValue49;
    }
    }
    panda$core$UInt8$init$builtin_uint8(&$tmp55, 8);
    panda$core$UInt32 $tmp56 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a46.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { $tmp55, true }).value));
    panda$core$UInt32 $tmp57 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp56, ((panda$core$UInt8) b51.value));
    panda$core$Int16 $tmp58 = panda$core$UInt32$convert$R$panda$core$Int16($tmp57);
    $returnValue49 = ((panda$core$Int16$nullable) { $tmp58, true });
    return $returnValue49;
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a60;
    panda$core$Int32$nullable $returnValue63;
    panda$core$Int16$nullable b65;
    panda$core$Int16 $tmp69;
    panda$core$Int16$nullable $tmp62 = (($fn61) self->$class->vtable[7])(self);
    a60 = $tmp62;
    if (((panda$core$Bit) { !a60.nonnull }).value) {
    {
        $returnValue63 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue63;
    }
    }
    panda$core$Int16$nullable $tmp67 = (($fn66) self->$class->vtable[7])(self);
    b65 = $tmp67;
    if (((panda$core$Bit) { !b65.nonnull }).value) {
    {
        $returnValue63 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $returnValue63;
    }
    }
    panda$core$Int16$init$builtin_int16(&$tmp69, 16);
    panda$core$Int32 $tmp70 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a60.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { $tmp69, true }).value));
    panda$core$Int32 $tmp71 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp70, ((panda$core$Int16) b65.value));
    $returnValue63 = ((panda$core$Int32$nullable) { $tmp71, true });
    return $returnValue63;
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a73;
    panda$core$Int64$nullable $returnValue76;
    panda$core$Int32$nullable b78;
    panda$core$Int64 $tmp82;
    panda$core$Int64 $tmp83;
    panda$core$Int32$nullable $tmp75 = (($fn74) self->$class->vtable[8])(self);
    a73 = $tmp75;
    if (((panda$core$Bit) { !a73.nonnull }).value) {
    {
        $returnValue76 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue76;
    }
    }
    panda$core$Int32$nullable $tmp80 = (($fn79) self->$class->vtable[8])(self);
    b78 = $tmp80;
    if (((panda$core$Bit) { !b78.nonnull }).value) {
    {
        $returnValue76 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue76;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp82, ((int64_t) ((panda$core$Int32) a73.value).value));
    panda$core$Int64$init$builtin_int64(&$tmp83, 32);
    panda$core$Int64 $tmp84 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp82, $tmp83);
    panda$core$Int64 $tmp85 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp84, ((panda$core$Int32) b78.value));
    $returnValue76 = ((panda$core$Int64$nullable) { $tmp85, true });
    return $returnValue76;
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result87;
    panda$core$Char8$nullable $returnValue90;
    panda$core$Char8 $tmp91;
    panda$core$UInt8$nullable $tmp89 = (($fn88) self->$class->vtable[2])(self);
    result87 = $tmp89;
    if (((panda$core$Bit) { result87.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) result87.value));
        $returnValue90 = ((panda$core$Char8$nullable) { $tmp91, true });
        return $returnValue90;
    }
    }
    $returnValue90 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $returnValue90;
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result97 = NULL;
    panda$core$MutableString* $tmp98;
    panda$core$MutableString* $tmp99;
    panda$core$Char8$nullable c103;
    panda$core$Int64 $tmp106;
    panda$core$String* $returnValue108;
    panda$core$String* $tmp109;
    panda$core$Char8$nullable $tmp112;
    panda$core$Char8 $tmp117;
    panda$core$UInt8 $tmp118;
    panda$core$Bit $tmp120;
    panda$core$String* $tmp121;
    panda$core$String* $tmp122;
    int $tmp96;
    {
        panda$core$MutableString* $tmp100 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp100);
        $tmp99 = $tmp100;
        $tmp98 = $tmp99;
        result97 = $tmp98;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
        $l101:;
        while (true) {
        {
            panda$core$Char8$nullable $tmp105 = (($fn104) self->$class->vtable[10])(self);
            c103 = $tmp105;
            if (((panda$core$Bit) { !c103.nonnull }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp106, 0);
                panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result97->_length, $tmp106);
                if ($tmp107.value) {
                {
                    $tmp109 = NULL;
                    $returnValue108 = $tmp109;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
                    $tmp96 = 0;
                    goto $l94;
                    $l110:;
                    return $returnValue108;
                }
                }
                goto $l102;
            }
            }
            $tmp112 = c103;
            panda$core$Bit $tmp116;
            if (((panda$core$Bit) { $tmp112.nonnull }).value) goto $l113; else goto $l114;
            $l113:;
            panda$core$UInt8$init$builtin_uint8(&$tmp118, 10);
            panda$core$Char8$init$panda$core$UInt8(&$tmp117, $tmp118);
            panda$core$Bit $tmp119 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp112.value), $tmp117);
            $tmp116 = $tmp119;
            goto $l115;
            $l114:;
            panda$core$Bit$init$builtin_bit(&$tmp120, false);
            $tmp116 = $tmp120;
            goto $l115;
            $l115:;
            if ($tmp116.value) {
            {
                goto $l102;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result97, ((panda$core$Char8) c103.value));
        }
        }
        $l102:;
        panda$core$String* $tmp123 = panda$core$MutableString$finish$R$panda$core$String(result97);
        $tmp122 = $tmp123;
        $tmp121 = $tmp122;
        $returnValue108 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
        $tmp96 = 1;
        goto $l94;
        $l124:;
        return $returnValue108;
    }
    $l94:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result97));
    result97 = NULL;
    switch ($tmp96) {
        case 0: goto $l110;
        case 1: goto $l124;
    }
    $l126:;
    abort();
}
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* self, panda$io$OutputStream* p_out) {
    panda$core$Int64 total127;
    panda$core$Int64 $tmp128;
    panda$core$Int64 BUFFER_SIZE129;
    panda$core$Int64 $tmp130;
    panda$core$UInt8* buffer131;
    panda$core$Int64 count134;
    panda$core$Int64 $tmp137;
    panda$core$Int64 $returnValue141;
    panda$core$Int64$init$builtin_int64(&$tmp128, 0);
    total127 = $tmp128;
    panda$core$Int64$init$builtin_int64(&$tmp130, 2048);
    BUFFER_SIZE129 = $tmp130;
    buffer131 = ((panda$core$UInt8*) pandaZAlloc(BUFFER_SIZE129.value * 1));
    $l132:;
    while (true) {
    {
        panda$core$Int64 $tmp136 = (($fn135) self->$class->vtable[3])(self, buffer131, BUFFER_SIZE129);
        count134 = $tmp136;
        panda$core$Int64$init$builtin_int64(&$tmp137, 0);
        panda$core$Bit $tmp138 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count134, $tmp137);
        if ($tmp138.value) {
        {
            goto $l133;
        }
        }
        panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(total127, count134);
        total127 = $tmp139;
        (($fn140) p_out->$class->vtable[4])(p_out, buffer131, count134);
    }
    }
    $l133:;
    pandaFree(buffer131);
    $returnValue141 = total127;
    return $returnValue141;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$collections$Iterator* $returnValue143;
    panda$collections$Iterator* $tmp144;
    panda$io$InputStream$LineIterator* $tmp145;
    panda$io$InputStream$LineIterator* $tmp146 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp146, self);
    $tmp145 = $tmp146;
    $tmp144 = ((panda$collections$Iterator*) $tmp145);
    $returnValue143 = $tmp144;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    return $returnValue143;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    int $tmp150;
    {
    }
    $tmp150 = -1;
    goto $l148;
    $l148:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp150) {
        case -1: goto $l151;
    }
    $l151:;
}

