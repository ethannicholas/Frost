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
panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$LineNumberInputStream$cleanup, panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn7)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };

void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* self, panda$io$InputStream* p_source) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$io$InputStream* $tmp4;
    panda$io$InputStream* $tmp5;
    self->source = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 1);
    self->line = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    self->column = $tmp3;
    {
        $tmp4 = self->source;
        $tmp5 = p_source;
        self->source = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* self) {
    panda$core$UInt8$nullable result6;
    panda$core$UInt8$nullable $returnValue9;
    panda$core$UInt8$nullable $match$37_1311;
    panda$core$UInt8 $tmp12;
    panda$core$Int64 $tmp14;
    panda$core$Int64 $tmp16;
    panda$core$UInt8 $tmp17;
    panda$core$Int64 $tmp19;
    panda$core$Int64 $tmp20;
    panda$core$Int64 $tmp24;
    panda$core$UInt8$nullable $tmp8 = (($fn7) self->source->$class->vtable[2])(self->source);
    result6 = $tmp8;
    if (((panda$core$Bit) { !result6.nonnull }).value) {
    {
        $returnValue9 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $returnValue9;
    }
    }
    {
        $match$37_1311 = result6;
        panda$core$UInt8$init$builtin_uint8(&$tmp12, 10);
        panda$core$Bit $tmp13 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$37_1311.value), $tmp12);
        if ($tmp13.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp14, 1);
            panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, $tmp14);
            self->line = $tmp15;
            panda$core$Int64$init$builtin_int64(&$tmp16, 1);
            self->column = $tmp16;
        }
        }
        else {
        panda$core$UInt8$init$builtin_uint8(&$tmp17, 9);
        panda$core$Bit $tmp18 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$37_1311.value), $tmp17);
        if ($tmp18.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp19, 4);
            panda$core$Int64$init$builtin_int64(&$tmp20, 4);
            panda$core$Int64 $tmp21 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, $tmp20);
            panda$core$Int64 $tmp22 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp19, $tmp21);
            panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp22);
            self->column = $tmp23;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp24, 1);
            panda$core$Int64 $tmp25 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp24);
            self->column = $tmp25;
        }
        }
        }
    }
    $returnValue9 = result6;
    return $returnValue9;
}
void panda$io$LineNumberInputStream$cleanup(panda$io$LineNumberInputStream* self) {
    int $tmp29;
    {
    }
    $tmp29 = -1;
    goto $l27;
    $l27:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp29) {
        case -1: goto $l30;
    }
    $l30:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}





