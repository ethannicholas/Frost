#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/Panda.h"


panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$IndentedOutputStream$cleanup, panda$io$IndentedOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn3)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn12)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn14)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn17)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn23)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* self, panda$io$OutputStream* p_out) {
    self->indent = NULL;
    self->level = ((panda$core$Int64) { 0 });
    self->indentSize = ((panda$core$Int64) { 4 });
    self->indent = &$s1;
    self->atLineStart = ((panda$core$Bit) { true });
    {
        self->out = p_out;
    }
}
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* self, panda$core$UInt8 p_b) {
    panda$core$Bit $tmp2 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_b, ((panda$core$UInt8) { 10 }));
    if ($tmp2.value) {
    {
        self->atLineStart = ((panda$core$Bit) { true });
    }
    }
    else {
    {
        panda$io$IndentedOutputStream$indentIfNeeded(self);
    }
    }
    (($fn3) self->out->$class->vtable[2])(self->out, p_b);
}
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$IndentedOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Int64 start4;
    panda$core$Int64 current5;
    start4 = p_offset;
    current5 = start4;
    $l6:;
    panda$core$Int64 $tmp8 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Bit $tmp9 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current5, $tmp8);
    if (!$tmp9.value) goto $l7;
    {
        panda$core$Bit $tmp10 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_ptr[current5.value], ((panda$core$UInt8) { 10 }));
        if ($tmp10.value) {
        {
            panda$core$Int64 $tmp11 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current5, start4);
            (($fn12) self->out->$class->vtable[4])(self->out, p_ptr, start4, $tmp11);
            start4 = current5;
            self->atLineStart = ((panda$core$Bit) { true });
        }
        }
        else {
        if (self->atLineStart.value) {
        {
            panda$core$Int64 $tmp13 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current5, start4);
            (($fn14) self->out->$class->vtable[4])(self->out, p_ptr, start4, $tmp13);
            start4 = current5;
            panda$io$IndentedOutputStream$indentIfNeeded(self);
        }
        }
        }
        panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current5, ((panda$core$Int64) { 1 }));
        current5 = $tmp15;
    }
    goto $l6;
    $l7:;
    panda$core$Int64 $tmp16 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current5, start4);
    (($fn17) self->out->$class->vtable[4])(self->out, p_ptr, start4, $tmp16);
}
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self) {
    if (self->atLineStart.value) {
    {
        self->atLineStart = ((panda$core$Bit) { false });
        panda$core$Int64 $tmp18 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
        panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->indent->_length, $tmp18);
        if ($tmp19.value) {
        {
            {
                panda$core$Int64 $tmp21 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
                panda$core$String* $tmp22 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s20, $tmp21);
                self->indent = $tmp22;
            }
        }
        }
        (($fn23) ((panda$io$OutputStream*) self)->$class->vtable[16])(((panda$io$OutputStream*) self), self->indent);
    }
    }
}
void panda$io$IndentedOutputStream$cleanup(panda$io$IndentedOutputStream* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->indent));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
}

