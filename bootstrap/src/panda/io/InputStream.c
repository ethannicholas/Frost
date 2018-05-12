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

typedef panda$core$UInt8$nullable (*$fn8)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn14)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn18)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$UInt8$nullable (*$fn43)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn48)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn58)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn63)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn72)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn77)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn86)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn103)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };

panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i2;
    panda$core$UInt8$nullable next7;
    panda$core$Int64 $finallyReturn10;
    i2 = ((panda$core$Int64) { 0 });
    $l3:;
    panda$core$Bit $tmp6 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(i2, p_max);
    bool $tmp5 = $tmp6.value;
    if (!$tmp5) goto $l4;
    {
        panda$core$UInt8$nullable $tmp9 = (($fn8) self->$class->vtable[2])(self);
        next7 = $tmp9;
        if (((panda$core$Bit) { !next7.nonnull }).value) {
        {
            goto $l4;
        }
        }
        p_buffer[i2.value] = ((panda$core$UInt8) next7.value);
        panda$core$Int64 $tmp10 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i2, ((panda$core$Int64) { 1 }));
        i2 = $tmp10;
    }
    goto $l3;
    $l4:;
    $finallyReturn10 = i2;
    return $finallyReturn10;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $finallyReturn12;
    panda$core$Int64 $tmp15 = (($fn14) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $finallyReturn12 = $tmp15;
    return $finallyReturn12;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $finallyReturn16;
    panda$core$Int64 $tmp19 = (($fn18) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    $finallyReturn16 = $tmp19;
    return $finallyReturn16;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE24;
    panda$core$MutableString* result25 = NULL;
    panda$core$MutableString* $tmp26;
    panda$core$MutableString* $tmp27;
    panda$core$Int8* buffer29;
    panda$core$Int64 count32;
    panda$core$String* $finallyReturn34;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    int $tmp23;
    {
        BUFFER_SIZE24 = ((panda$core$Int64) { 2048 });
        panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp28);
        $tmp27 = $tmp28;
        $tmp26 = $tmp27;
        result25 = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        buffer29 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE24.value * 1));
        $l30:;
        while (true) {
        {
            panda$core$Int64 $tmp33 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer29, BUFFER_SIZE24);
            count32 = $tmp33;
            panda$core$Bit $tmp34 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count32, ((panda$core$Int64) { 0 }));
            if ($tmp34.value) {
            {
                goto $l31;
            }
            }
            panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result25, ((panda$core$Char8*) buffer29), ((panda$core$Int64) { 0 }), count32);
        }
        }
        $l31:;
        pandaFree(buffer29);
        panda$core$String* $tmp38 = panda$core$MutableString$finish$R$panda$core$String(result25);
        $tmp37 = $tmp38;
        $tmp36 = $tmp37;
        $finallyReturn34 = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        $tmp23 = 0;
        goto $l21;
        $l39:;
        return $finallyReturn34;
    }
    $l21:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result25));
    result25 = NULL;
    switch ($tmp23) {
        case 0: goto $l39;
    }
    $l41:;
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a42;
    panda$core$Int16$nullable $finallyReturn44;
    panda$core$UInt8$nullable b47;
    panda$core$Int16$nullable $finallyReturn49;
    panda$core$Int16$nullable $finallyReturn51;
    panda$core$UInt8$nullable $tmp44 = (($fn43) self->$class->vtable[2])(self);
    a42 = $tmp44;
    if (((panda$core$Bit) { !a42.nonnull }).value) {
    {
        $finallyReturn44 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $finallyReturn44;
    }
    }
    panda$core$UInt8$nullable $tmp49 = (($fn48) self->$class->vtable[2])(self);
    b47 = $tmp49;
    if (((panda$core$Bit) { !b47.nonnull }).value) {
    {
        $finallyReturn49 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $finallyReturn49;
    }
    }
    panda$core$UInt32 $tmp53 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a42.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp54 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp53, ((panda$core$UInt8) b47.value));
    panda$core$Int16 $tmp55 = panda$core$UInt32$convert$R$panda$core$Int16($tmp54);
    $finallyReturn51 = ((panda$core$Int16$nullable) { $tmp55, true });
    return $finallyReturn51;
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a57;
    panda$core$Int32$nullable $finallyReturn59;
    panda$core$Int16$nullable b62;
    panda$core$Int32$nullable $finallyReturn64;
    panda$core$Int32$nullable $finallyReturn66;
    panda$core$Int16$nullable $tmp59 = (($fn58) self->$class->vtable[7])(self);
    a57 = $tmp59;
    if (((panda$core$Bit) { !a57.nonnull }).value) {
    {
        $finallyReturn59 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $finallyReturn59;
    }
    }
    panda$core$Int16$nullable $tmp64 = (($fn63) self->$class->vtable[7])(self);
    b62 = $tmp64;
    if (((panda$core$Bit) { !b62.nonnull }).value) {
    {
        $finallyReturn64 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $finallyReturn64;
    }
    }
    panda$core$Int32 $tmp68 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a57.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp69 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp68, ((panda$core$Int16) b62.value));
    $finallyReturn66 = ((panda$core$Int32$nullable) { $tmp69, true });
    return $finallyReturn66;
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a71;
    panda$core$Int64$nullable $finallyReturn73;
    panda$core$Int32$nullable b76;
    panda$core$Int64$nullable $finallyReturn78;
    panda$core$Int64$nullable $finallyReturn80;
    panda$core$Int32$nullable $tmp73 = (($fn72) self->$class->vtable[8])(self);
    a71 = $tmp73;
    if (((panda$core$Bit) { !a71.nonnull }).value) {
    {
        $finallyReturn73 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $finallyReturn73;
    }
    }
    panda$core$Int32$nullable $tmp78 = (($fn77) self->$class->vtable[8])(self);
    b76 = $tmp78;
    if (((panda$core$Bit) { !b76.nonnull }).value) {
    {
        $finallyReturn78 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $finallyReturn78;
    }
    }
    panda$core$Int64 $tmp82 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a71.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp83 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp82, ((panda$core$Int32) b76.value));
    $finallyReturn80 = ((panda$core$Int64$nullable) { $tmp83, true });
    return $finallyReturn80;
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result85;
    panda$core$Char8$nullable $finallyReturn87;
    panda$core$Char8 $tmp89;
    panda$core$Char8$nullable $finallyReturn90;
    panda$core$UInt8$nullable $tmp87 = (($fn86) self->$class->vtable[2])(self);
    result85 = $tmp87;
    if (((panda$core$Bit) { result85.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp89, ((panda$core$UInt8) result85.value));
        $finallyReturn87 = ((panda$core$Char8$nullable) { $tmp89, true });
        return $finallyReturn87;
    }
    }
    $finallyReturn90 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $finallyReturn90;
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result96 = NULL;
    panda$core$MutableString* $tmp97;
    panda$core$MutableString* $tmp98;
    panda$core$Char8$nullable c102;
    panda$core$String* $finallyReturn105;
    panda$core$String* $tmp107;
    panda$core$Char8$nullable $tmp110;
    panda$core$Char8 $tmp115;
    panda$core$String* $finallyReturn116;
    panda$core$String* $tmp118;
    panda$core$String* $tmp119;
    int $tmp95;
    {
        panda$core$MutableString* $tmp99 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp99);
        $tmp98 = $tmp99;
        $tmp97 = $tmp98;
        result96 = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
        $l100:;
        while (true) {
        {
            panda$core$Char8$nullable $tmp104 = (($fn103) self->$class->vtable[10])(self);
            c102 = $tmp104;
            if (((panda$core$Bit) { !c102.nonnull }).value) {
            {
                panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result96->length, ((panda$core$Int64) { 0 }));
                if ($tmp105.value) {
                {
                    $tmp107 = NULL;
                    $finallyReturn105 = $tmp107;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
                    $tmp95 = 0;
                    goto $l93;
                    $l108:;
                    return $finallyReturn105;
                }
                }
                goto $l101;
            }
            }
            $tmp110 = c102;
            panda$core$Bit $tmp114;
            if (((panda$core$Bit) { $tmp110.nonnull }).value) goto $l111; else goto $l112;
            $l111:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp115, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp116 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp110.value), $tmp115);
            $tmp114 = $tmp116;
            goto $l113;
            $l112:;
            $tmp114 = ((panda$core$Bit) { false });
            goto $l113;
            $l113:;
            if ($tmp114.value) {
            {
                goto $l101;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result96, ((panda$core$Char8) c102.value));
        }
        }
        $l101:;
        panda$core$String* $tmp120 = panda$core$MutableString$finish$R$panda$core$String(result96);
        $tmp119 = $tmp120;
        $tmp118 = $tmp119;
        $finallyReturn116 = $tmp118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
        $tmp95 = 1;
        goto $l93;
        $l121:;
        return $finallyReturn116;
    }
    $l93:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result96));
    result96 = NULL;
    switch ($tmp95) {
        case 1: goto $l121;
        case 0: goto $l108;
    }
    $l123:;
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$collections$Iterator* $finallyReturn123;
    panda$collections$Iterator* $tmp125;
    panda$io$InputStream$LineIterator* $tmp126;
    panda$io$InputStream$LineIterator* $tmp127 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp127, self);
    $tmp126 = $tmp127;
    $tmp125 = ((panda$collections$Iterator*) $tmp126);
    $finallyReturn123 = $tmp125;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
    return $finallyReturn123;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    int $tmp131;
    {
    }
    $tmp131 = -1;
    goto $l129;
    $l129:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp131) {
        case -1: goto $l132;
    }
    $l132:;
}

