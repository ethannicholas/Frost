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
panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$IndentedOutputStream$cleanup, panda$io$IndentedOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$OutputStream$flush, panda$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn12)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn23)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn26)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn30)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn40)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 1042140495667569485, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* self, panda$io$OutputStream* p_out) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$String* $tmp4;
    panda$core$Bit $tmp6;
    panda$io$OutputStream* $tmp7;
    panda$io$OutputStream* $tmp8;
    self->indent = NULL;
    self->out = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->level = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 4);
    self->indentSize = $tmp3;
    $tmp4 = &$s5;
    self->indent = $tmp4;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$core$Bit$init$builtin_bit(&$tmp6, true);
    self->atLineStart = $tmp6;
    {
        $tmp7 = self->out;
        $tmp8 = p_out;
        self->out = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
}
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* self, panda$core$UInt8 p_b) {
    panda$core$UInt8 $tmp9;
    panda$core$Bit $tmp11;
    panda$core$UInt8$init$builtin_uint8(&$tmp9, 10);
    panda$core$Bit $tmp10 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_b, $tmp9);
    if ($tmp10.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp11, true);
        self->atLineStart = $tmp11;
    }
    }
    else {
    {
        panda$io$IndentedOutputStream$indentIfNeeded(self);
    }
    }
    (($fn12) self->out->$class->vtable[2])(self->out, p_b);
}
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$IndentedOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_count) {
    panda$core$Int64 start13;
    panda$core$Int64 $tmp14;
    panda$core$Int64 current15;
    panda$core$UInt8 $tmp20;
    panda$core$Bit $tmp24;
    panda$core$Int64 $tmp27;
    panda$core$Int64$init$builtin_int64(&$tmp14, 0);
    start13 = $tmp14;
    current15 = start13;
    $l16:;
    panda$core$Bit $tmp19 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current15, p_count);
    bool $tmp18 = $tmp19.value;
    if (!$tmp18) goto $l17;
    {
        panda$core$UInt8$init$builtin_uint8(&$tmp20, 10);
        panda$core$Bit $tmp21 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(p_ptr[current15.value], $tmp20);
        if ($tmp21.value) {
        {
            panda$core$Int64 $tmp22 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current15, start13);
            (($fn23) self->out->$class->vtable[4])(self->out, (p_ptr + start13.value), $tmp22);
            start13 = current15;
            panda$core$Bit$init$builtin_bit(&$tmp24, true);
            self->atLineStart = $tmp24;
        }
        }
        else {
        if (self->atLineStart.value) {
        {
            panda$core$Int64 $tmp25 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current15, start13);
            (($fn26) self->out->$class->vtable[4])(self->out, (p_ptr + start13.value), $tmp25);
            start13 = current15;
            panda$io$IndentedOutputStream$indentIfNeeded(self);
        }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current15, $tmp27);
        current15 = $tmp28;
    }
    goto $l16;
    $l17:;
    panda$core$Int64 $tmp29 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current15, start13);
    (($fn30) self->out->$class->vtable[4])(self->out, (p_ptr + start13.value), $tmp29);
}
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* self) {
    panda$core$Bit $tmp31;
    panda$core$String* $tmp34;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    if (self->atLineStart.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp31, false);
        self->atLineStart = $tmp31;
        panda$core$Int64 $tmp32 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
        panda$core$Bit $tmp33 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->indent->_length, $tmp32);
        if ($tmp33.value) {
        {
            {
                $tmp34 = self->indent;
                panda$core$Int64 $tmp38 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->indentSize, self->level);
                panda$core$String* $tmp39 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s37, $tmp38);
                $tmp36 = $tmp39;
                $tmp35 = $tmp36;
                self->indent = $tmp35;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
            }
        }
        }
        (($fn40) ((panda$io$OutputStream*) self)->$class->vtable[18])(((panda$io$OutputStream*) self), self->indent);
    }
    }
}
void panda$io$IndentedOutputStream$cleanup(panda$io$IndentedOutputStream* self) {
    int $tmp43;
    {
    }
    $tmp43 = -1;
    goto $l41;
    $l41:;
    panda$io$OutputStream$cleanup(((panda$io$OutputStream*) self));
    switch ($tmp43) {
        case -1: goto $l44;
    }
    $l44:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->indent));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
}





