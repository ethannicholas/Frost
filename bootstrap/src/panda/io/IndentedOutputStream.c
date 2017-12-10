#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "panda/core/String.h"


panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$IndentedOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn2)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn22)(panda$io$IndentedOutputStream*, panda$core$UInt8);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* self, panda$io$OutputStream* p_out) {
    self->level = ((panda$core$Int64) { 0 });
    self->indentSize = ((panda$core$Int64) { 4 });
    self->atLineStart = ((panda$core$Bit) { true });
    self->out = p_out;
}
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* self, panda$core$UInt8 p_b) {
    panda$core$Bit $tmp1 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_b, ((panda$core$UInt8) { 10 }));
    if ($tmp1.value) {
    {
        self->atLineStart = ((panda$core$Bit) { true });
    }
    }
    else {
    {
        panda$io$IndentedOutputStream$indentIfNeeded(self);
    }
    }
    (($fn2) self->out->$class->vtable[2])(self->out, p_b);
}
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$IndentedOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3;
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3, p_offset, $tmp4, ((panda$core$Bit) { false }));
    int64_t $tmp6 = $tmp3.min.value;
    panda$core$Int64 i5 = { $tmp6 };
    int64_t $tmp8 = $tmp3.max.value;
    bool $tmp9 = $tmp3.inclusive.value;
    bool $tmp16 = 1 > 0;
    if ($tmp16) goto $l14; else goto $l15;
    $l14:;
    if ($tmp9) goto $l17; else goto $l18;
    $l17:;
    if ($tmp6 <= $tmp8) goto $l10; else goto $l12;
    $l18:;
    if ($tmp6 < $tmp8) goto $l10; else goto $l12;
    $l15:;
    if ($tmp9) goto $l19; else goto $l20;
    $l19:;
    if ($tmp6 >= $tmp8) goto $l10; else goto $l12;
    $l20:;
    if ($tmp6 > $tmp8) goto $l10; else goto $l12;
    $l10:;
    {
        (($fn22) self->$class->vtable[2])(self, p_ptr[i5.value]);
    }
    $l13:;
    if ($tmp16) goto $l24; else goto $l25;
    $l24:;
    int64_t $tmp26 = $tmp8 - i5.value;
    if ($tmp9) goto $l27; else goto $l28;
    $l27:;
    if ($tmp26 >= 1) goto $l23; else goto $l12;
    $l28:;
    if ($tmp26 > 1) goto $l23; else goto $l12;
    $l25:;
    int64_t $tmp30 = i5.value - $tmp8;
    if ($tmp9) goto $l31; else goto $l32;
    $l31:;
    if ($tmp30 >= -1) goto $l23; else goto $l12;
    $l32:;
    if ($tmp30 > -1) goto $l23; else goto $l12;
    $l23:;
    i5.value += 1;
    goto $l10;
    $l12:;
}
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self) {
    if (self->atLineStart.value) {
    {
        self->atLineStart = ((panda$core$Bit) { false });
        panda$core$Int64 $tmp35 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
        panda$core$String* $tmp36 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s34, $tmp35);
        (($fn37) ((panda$io$OutputStream*) self)->$class->vtable[16])(((panda$io$OutputStream*) self), $tmp36);
    }
    }
}

