#include "panda/io/LineNumberInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"


panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn3)(panda$io$InputStream*);


void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* self, panda$io$InputStream* p_source) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_source));
        self->source = ((panda$io$InputStream*) $tmp1);
    }
}
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* self) {
    panda$core$UInt8$nullable result2;
    panda$core$UInt8$nullable $match$37_135;
    panda$core$UInt8$nullable $tmp4 = (($fn3) self->source->$class->vtable[2])(self->source);
    result2 = $tmp4;
    if (((panda$core$Bit) { !result2.nonnull }).value) {
    {
        return ((panda$core$UInt8$nullable) { .nonnull = false });
    }
    }
    {
        $match$37_135 = result2;
        panda$core$Bit $tmp6 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$37_135.value), ((panda$core$UInt8) { 10 }));
        if ($tmp6.value) {
        {
            panda$core$Int64 $tmp7 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
            self->line = $tmp7;
            self->column = ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp8 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $match$37_135.value), ((panda$core$UInt8) { 9 }));
        if ($tmp8.value) {
        {
            panda$core$Int64 $tmp9 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp9);
            panda$core$Int64 $tmp11 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp10);
            self->column = $tmp11;
        }
        }
        else {
        {
            panda$core$Int64 $tmp12 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
            self->column = $tmp12;
        }
        }
        }
    }
    return result2;
}

