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
panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$LineNumberInputStream$cleanup, panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn8)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };

void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* self, panda$io$InputStream* p_source) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp4;
    panda$io$InputStream* $tmp5;
    panda$io$InputStream* $tmp6;
    self->source = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 1);
    self->line = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    self->column = $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp4, 4);
    self->tabSize = $tmp4;
    {
        $tmp5 = self->source;
        $tmp6 = p_source;
        self->source = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    panda$io$InputStream$init(((panda$io$InputStream*) self));
}
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* self) {
    panda$core$UInt8$nullable result7;
    panda$core$UInt8$nullable $returnValue10;
    panda$core$UInt8$nullable $match$44_1312;
    panda$core$UInt8 $tmp13;
    panda$core$Int64 $tmp15;
    panda$core$Int64 $tmp17;
    panda$core$UInt8 $tmp18;
    panda$core$Int64 $tmp23;
    panda$core$UInt8$nullable $tmp9 = (($fn8) self->source->$class->vtable[2])(self->source);
    result7 = $tmp9;
    if (((panda$core$Bit) { !result7.nonnull }).value) {
    {
        $returnValue10 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $returnValue10;
    }
    }
    {
        $match$44_1312 = result7;
        panda$core$UInt8$init$builtin_uint8(&$tmp13, 10);
        panda$core$Bit $tmp14 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$44_1312.value), $tmp13);
        if ($tmp14.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp15, 1);
            panda$core$Int64 $tmp16 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, $tmp15);
            self->line = $tmp16;
            panda$core$Int64$init$builtin_int64(&$tmp17, 1);
            self->column = $tmp17;
        }
        }
        else {
        panda$core$UInt8$init$builtin_uint8(&$tmp18, 9);
        panda$core$Bit $tmp19 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$44_1312.value), $tmp18);
        if ($tmp19.value) {
        {
            panda$core$Int64 $tmp20 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, self->tabSize);
            panda$core$Int64 $tmp21 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->tabSize, $tmp20);
            panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp21);
            self->column = $tmp22;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp23, 1);
            panda$core$Int64 $tmp24 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp23);
            self->column = $tmp24;
        }
        }
        }
    }
    $returnValue10 = result7;
    return $returnValue10;
}
void panda$io$LineNumberInputStream$cleanup(panda$io$LineNumberInputStream* self) {
    int $tmp28;
    {
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp28) {
        case -1: goto $l29;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}





