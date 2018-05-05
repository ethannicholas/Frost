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
typedef panda$core$Int64 (*$fn13)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn16)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$UInt8$nullable (*$fn35)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn39)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn47)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn51)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn58)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn62)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn69)(panda$io$InputStream*);
typedef panda$core$Char8$nullable (*$fn81)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };

panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 i2;
    panda$core$UInt8$nullable next7;
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
    panda$core$Int64 $tmp11 = i2;
    return $tmp11;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp14 = (($fn13) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    panda$core$Int64 $tmp12 = $tmp14;
    return $tmp12;
}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp17 = (($fn16) self->$class->vtable[3])(self, ((panda$core$UInt8*) p_buffer), p_max);
    panda$core$Int64 $tmp15 = $tmp17;
    return $tmp15;
}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self) {
    panda$core$Int64 BUFFER_SIZE18;
    panda$core$MutableString* result19;
    panda$core$Int8* buffer23;
    panda$core$Int64 count26;
    panda$core$String* tmp129;
    BUFFER_SIZE18 = ((panda$core$Int64) { 2048 });
    panda$core$MutableString* $tmp22 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp22);
    panda$core$MutableString* $tmp21 = $tmp22;
    panda$core$MutableString* $tmp20 = $tmp21;
    result19 = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    buffer23 = ((panda$core$Int8*) pandaZAlloc(BUFFER_SIZE18.value * 1));
    $l24:;
    while (true) {
    {
        panda$core$Int64 $tmp27 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(self, buffer23, BUFFER_SIZE18);
        count26 = $tmp27;
        panda$core$Bit $tmp28 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(count26, ((panda$core$Int64) { 0 }));
        if ($tmp28.value) {
        {
            goto $l25;
        }
        }
        panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(result19, ((panda$core$Char8*) buffer23), ((panda$core$Int64) { 0 }), count26);
    }
    }
    $l25:;
    pandaFree(buffer23);
    {
        panda$core$String* $tmp32 = panda$core$MutableString$finish$R$panda$core$String(result19);
        panda$core$String* $tmp31 = $tmp32;
        panda$core$String* $tmp30 = $tmp31;
        tmp129 = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result19));
        panda$core$String* $tmp33 = tmp129;
        return $tmp33;
    }
}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable a34;
    panda$core$UInt8$nullable b38;
    panda$core$UInt8$nullable $tmp36 = (($fn35) self->$class->vtable[2])(self);
    a34 = $tmp36;
    if (((panda$core$Bit) { !a34.nonnull }).value) {
    {
        panda$core$Int16$nullable $tmp37 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $tmp37;
    }
    }
    panda$core$UInt8$nullable $tmp40 = (($fn39) self->$class->vtable[2])(self);
    b38 = $tmp40;
    if (((panda$core$Bit) { !b38.nonnull }).value) {
    {
        panda$core$Int16$nullable $tmp41 = ((panda$core$Int16$nullable) { .nonnull = false });
        return $tmp41;
    }
    }
    panda$core$UInt32 $tmp43 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) a34.value), ((panda$core$UInt8) ((panda$core$UInt8$nullable) { ((panda$core$UInt8) { 8 }), true }).value));
    panda$core$UInt32 $tmp44 = panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32($tmp43, ((panda$core$UInt8) b38.value));
    panda$core$Int16 $tmp45 = panda$core$UInt32$convert$R$panda$core$Int16($tmp44);
    panda$core$Int16$nullable $tmp42 = ((panda$core$Int16$nullable) { $tmp45, true });
    return $tmp42;
}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self) {
    panda$core$Int16$nullable a46;
    panda$core$Int16$nullable b50;
    panda$core$Int16$nullable $tmp48 = (($fn47) self->$class->vtable[7])(self);
    a46 = $tmp48;
    if (((panda$core$Bit) { !a46.nonnull }).value) {
    {
        panda$core$Int32$nullable $tmp49 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $tmp49;
    }
    }
    panda$core$Int16$nullable $tmp52 = (($fn51) self->$class->vtable[7])(self);
    b50 = $tmp52;
    if (((panda$core$Bit) { !b50.nonnull }).value) {
    {
        panda$core$Int32$nullable $tmp53 = ((panda$core$Int32$nullable) { .nonnull = false });
        return $tmp53;
    }
    }
    panda$core$Int32 $tmp55 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) a46.value), ((panda$core$Int16) ((panda$core$Int16$nullable) { ((panda$core$Int16) { 16 }), true }).value));
    panda$core$Int32 $tmp56 = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32($tmp55, ((panda$core$Int16) b50.value));
    panda$core$Int32$nullable $tmp54 = ((panda$core$Int32$nullable) { $tmp56, true });
    return $tmp54;
}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self) {
    panda$core$Int32$nullable a57;
    panda$core$Int32$nullable b61;
    panda$core$Int32$nullable $tmp59 = (($fn58) self->$class->vtable[8])(self);
    a57 = $tmp59;
    if (((panda$core$Bit) { !a57.nonnull }).value) {
    {
        panda$core$Int64$nullable $tmp60 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $tmp60;
    }
    }
    panda$core$Int32$nullable $tmp63 = (($fn62) self->$class->vtable[8])(self);
    b61 = $tmp63;
    if (((panda$core$Bit) { !b61.nonnull }).value) {
    {
        panda$core$Int64$nullable $tmp64 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $tmp64;
    }
    }
    panda$core$Int64 $tmp66 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) ((panda$core$Int32) a57.value).value) }), ((panda$core$Int64) { 32 }));
    panda$core$Int64 $tmp67 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64($tmp66, ((panda$core$Int32) b61.value));
    panda$core$Int64$nullable $tmp65 = ((panda$core$Int64$nullable) { $tmp67, true });
    return $tmp65;
}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self) {
    panda$core$UInt8$nullable result68;
    panda$core$Char8 $tmp72;
    panda$core$UInt8$nullable $tmp70 = (($fn69) self->$class->vtable[2])(self);
    result68 = $tmp70;
    if (((panda$core$Bit) { result68.nonnull }).value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp72, ((panda$core$UInt8) result68.value));
        panda$core$Char8$nullable $tmp71 = ((panda$core$Char8$nullable) { $tmp72, true });
        return $tmp71;
    }
    }
    panda$core$Char8$nullable $tmp73 = ((panda$core$Char8$nullable) { .nonnull = false });
    return $tmp73;
}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self) {
    panda$core$MutableString* result74;
    panda$core$Char8$nullable c80;
    panda$core$String* tmp284;
    panda$core$Char8 $tmp92;
    panda$core$String* tmp394;
    panda$core$MutableString* $tmp77 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp77);
    panda$core$MutableString* $tmp76 = $tmp77;
    panda$core$MutableString* $tmp75 = $tmp76;
    result74 = $tmp75;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
    $l78:;
    while (true) {
    {
        panda$core$Char8$nullable $tmp82 = (($fn81) self->$class->vtable[10])(self);
        c80 = $tmp82;
        if (((panda$core$Bit) { !c80.nonnull }).value) {
        {
            panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result74->length, ((panda$core$Int64) { 0 }));
            if ($tmp83.value) {
            {
                {
                    panda$core$String* $tmp85 = NULL;
                    tmp284 = $tmp85;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result74));
                    panda$core$String* $tmp86 = tmp284;
                    return $tmp86;
                }
            }
            }
            goto $l79;
        }
        }
        panda$core$Char8$nullable $tmp87 = c80;
        panda$core$Bit $tmp91;
        if (((panda$core$Bit) { $tmp87.nonnull }).value) goto $l88; else goto $l89;
        $l88:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp92, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp93 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp87.value), $tmp92);
        $tmp91 = $tmp93;
        goto $l90;
        $l89:;
        $tmp91 = ((panda$core$Bit) { false });
        goto $l90;
        $l90:;
        if ($tmp91.value) {
        {
            goto $l79;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result74, ((panda$core$Char8) c80.value));
    }
    }
    $l79:;
    {
        panda$core$String* $tmp97 = panda$core$MutableString$finish$R$panda$core$String(result74);
        panda$core$String* $tmp96 = $tmp97;
        panda$core$String* $tmp95 = $tmp96;
        tmp394 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result74));
        panda$core$String* $tmp98 = tmp394;
        return $tmp98;
    }
}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self) {
    panda$io$InputStream$LineIterator* $tmp102 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
    panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp102, self);
    panda$io$InputStream$LineIterator* $tmp101 = $tmp102;
    panda$collections$Iterator* $tmp100 = ((panda$collections$Iterator*) $tmp101);
    panda$collections$Iterator* $tmp99 = $tmp100;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    return $tmp99;
}
void panda$io$InputStream$init(panda$io$InputStream* self) {
}
void panda$io$InputStream$cleanup(panda$io$InputStream* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

