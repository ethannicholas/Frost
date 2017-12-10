#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/String.h"


panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$IndentedOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn2)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn11)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn13)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn16)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn20)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };

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
    panda$core$Int64 start3;
    panda$core$Int64 current4;
    start3 = p_offset;
    current4 = start3;
    $l5:;
    panda$core$Int64 $tmp7 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Bit $tmp8 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current4, $tmp7);
    if (!$tmp8.value) goto $l6;
    {
        panda$core$Bit $tmp9 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_ptr[current4.value], ((panda$core$UInt8) { 10 }));
        if ($tmp9.value) {
        {
            panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current4, start3);
            (($fn11) self->out->$class->vtable[4])(self->out, p_ptr, start3, $tmp10);
            start3 = current4;
            self->atLineStart = ((panda$core$Bit) { true });
        }
        }
        else {
        if (self->atLineStart.value) {
        {
            panda$core$Int64 $tmp12 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current4, start3);
            (($fn13) self->out->$class->vtable[4])(self->out, p_ptr, start3, $tmp12);
            start3 = current4;
            panda$io$IndentedOutputStream$indentIfNeeded(self);
        }
        }
        }
        panda$core$Int64 $tmp14 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current4, ((panda$core$Int64) { 1 }));
        current4 = $tmp14;
    }
    goto $l5;
    $l6:;
    panda$core$Int64 $tmp15 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current4, start3);
    (($fn16) self->out->$class->vtable[4])(self->out, p_ptr, start3, $tmp15);
}
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self) {
    if (self->atLineStart.value) {
    {
        self->atLineStart = ((panda$core$Bit) { false });
        panda$core$Int64 $tmp18 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
        panda$core$String* $tmp19 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s17, $tmp18);
        (($fn20) ((panda$io$OutputStream*) self)->$class->vtable[16])(((panda$io$OutputStream*) self), $tmp19);
    }
    }
}

