#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$IndentedOutputStream$cleanup, panda$io$IndentedOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn7)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn17)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn19)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn22)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn31)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 1042140495667569485, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* self, panda$io$OutputStream* p_out) {
    self->indent = NULL;
    self->out = NULL;
    self->level = ((panda$core$Int64) { 0 });
    self->indentSize = ((panda$core$Int64) { 4 });
    panda$core$String* $tmp2 = &$s3;
    self->indent = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    self->atLineStart = ((panda$core$Bit) { true });
    {
        panda$io$OutputStream* $tmp4 = self->out;
        panda$io$OutputStream* $tmp5 = p_out;
        self->out = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* self, panda$core$UInt8 p_b) {
    panda$core$Bit $tmp6 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_b, ((panda$core$UInt8) { 10 }));
    if ($tmp6.value) {
    {
        self->atLineStart = ((panda$core$Bit) { true });
    }
    }
    else {
    {
        panda$io$IndentedOutputStream$indentIfNeeded(self);
    }
    }
    (($fn7) self->out->$class->vtable[2])(self->out, p_b);
}
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$IndentedOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Int64 start8;
    panda$core$Int64 current9;
    start8 = p_offset;
    current9 = start8;
    $l10:;
    panda$core$Int64 $tmp13 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Bit $tmp14 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current9, $tmp13);
    bool $tmp12 = $tmp14.value;
    if (!$tmp12) goto $l11;
    {
        panda$core$Bit $tmp15 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_ptr[current9.value], ((panda$core$UInt8) { 10 }));
        if ($tmp15.value) {
        {
            panda$core$Int64 $tmp16 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current9, start8);
            (($fn17) self->out->$class->vtable[4])(self->out, p_ptr, start8, $tmp16);
            start8 = current9;
            self->atLineStart = ((panda$core$Bit) { true });
        }
        }
        else {
        if (self->atLineStart.value) {
        {
            panda$core$Int64 $tmp18 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current9, start8);
            (($fn19) self->out->$class->vtable[4])(self->out, p_ptr, start8, $tmp18);
            start8 = current9;
            panda$io$IndentedOutputStream$indentIfNeeded(self);
        }
        }
        }
        panda$core$Int64 $tmp20 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current9, ((panda$core$Int64) { 1 }));
        current9 = $tmp20;
    }
    goto $l10;
    $l11:;
    panda$core$Int64 $tmp21 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current9, start8);
    (($fn22) self->out->$class->vtable[4])(self->out, p_ptr, start8, $tmp21);
}
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self) {
    if (self->atLineStart.value) {
    {
        self->atLineStart = ((panda$core$Bit) { false });
        panda$core$Int64 $tmp23 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
        panda$core$Bit $tmp24 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->indent->_length, $tmp23);
        if ($tmp24.value) {
        {
            {
                panda$core$String* $tmp25 = self->indent;
                panda$core$Int64 $tmp29 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
                panda$core$String* $tmp30 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s28, $tmp29);
                panda$core$String* $tmp27 = $tmp30;
                panda$core$String* $tmp26 = $tmp27;
                self->indent = $tmp26;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
            }
        }
        }
        (($fn31) ((panda$io$OutputStream*) self)->$class->vtable[16])(((panda$io$OutputStream*) self), self->indent);
    }
    }
}
void panda$io$IndentedOutputStream$cleanup(panda$io$IndentedOutputStream* self) {
    panda$io$OutputStream$cleanup(((panda$io$OutputStream*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->indent));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
}

