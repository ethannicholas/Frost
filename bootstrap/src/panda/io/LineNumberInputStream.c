#include "panda/io/LineNumberInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$LineNumberInputStream$cleanup, panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn5)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };

void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* self, panda$io$InputStream* p_source) {
    panda$io$InputStream* $tmp2;
    panda$io$InputStream* $tmp3;
    self->source = NULL;
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    {
        $tmp2 = self->source;
        $tmp3 = p_source;
        self->source = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* self) {
    panda$core$UInt8$nullable result4;
    panda$core$UInt8$nullable $finallyReturn6;
    panda$core$UInt8$nullable $match$37_139;
    panda$core$UInt8$nullable $finallyReturn16;
    panda$core$UInt8$nullable $tmp6 = (($fn5) self->source->$class->vtable[2])(self->source);
    result4 = $tmp6;
    if (((panda$core$Bit) { !result4.nonnull }).value) {
    {
        $finallyReturn6 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $finallyReturn6;
    }
    }
    {
        $match$37_139 = result4;
        panda$core$Bit $tmp10 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$37_139.value), ((panda$core$UInt8) { 10 }));
        if ($tmp10.value) {
        {
            panda$core$Int64 $tmp11 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
            self->line = $tmp11;
            self->column = ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp12 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$37_139.value), ((panda$core$UInt8) { 9 }));
        if ($tmp12.value) {
        {
            panda$core$Int64 $tmp13 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp13);
            panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp14);
            self->column = $tmp15;
        }
        }
        else {
        {
            panda$core$Int64 $tmp16 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
            self->column = $tmp16;
        }
        }
        }
    }
    $finallyReturn16 = result4;
    return $finallyReturn16;
}
void panda$io$LineNumberInputStream$cleanup(panda$io$LineNumberInputStream* self) {
    int $tmp21;
    {
    }
    $tmp21 = -1;
    goto $l19;
    $l19:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp21) {
        case -1: goto $l22;
    }
    $l22:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

