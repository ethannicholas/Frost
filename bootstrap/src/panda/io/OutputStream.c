#include "panda/io/OutputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/io/ByteOrder.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
#include "panda/core/Char8.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$io$OutputStream$class_type panda$io$OutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$OutputStream$cleanup, NULL, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine, panda$io$OutputStream$flush} };

typedef void (*$fn5)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn9)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn13)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn15)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn19)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn23)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn27)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn29)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn33)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn41)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn43)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn45)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn47)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn49)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn68)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn75)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn76)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn77)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn79)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn81)(panda$core$Object*);
typedef void (*$fn83)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn84)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn85)(panda$io$OutputStream*);
typedef panda$core$String* (*$fn87)(panda$core$Object*);
typedef void (*$fn89)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn90)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -3689739765115213222, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value) {
    panda$core$Int64 $tmp2;
    panda$core$UInt16 $tmp6;
    panda$core$UInt16 $tmp10;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp2);
    if ($tmp3.value) {
    {
        panda$core$UInt8 $tmp4 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
        (($fn5) self->$class->vtable[2])(self, $tmp4);
        panda$core$UInt16$init$builtin_uint16(&$tmp6, 8);
        panda$core$UInt32 $tmp7 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, $tmp6);
        panda$core$UInt8 $tmp8 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp7);
        (($fn9) self->$class->vtable[2])(self, $tmp8);
    }
    }
    else {
    {
        panda$core$UInt16$init$builtin_uint16(&$tmp10, 8);
        panda$core$UInt32 $tmp11 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, $tmp10);
        panda$core$UInt8 $tmp12 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp11);
        (($fn13) self->$class->vtable[2])(self, $tmp12);
        panda$core$UInt8 $tmp14 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
        (($fn15) self->$class->vtable[2])(self, $tmp14);
    }
    }
}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value) {
    panda$core$Int64 $tmp16;
    panda$core$UInt32 $tmp20;
    panda$core$UInt32 $tmp24;
    panda$core$Int64$init$builtin_int64(&$tmp16, 0);
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp16);
    if ($tmp17.value) {
    {
        panda$core$UInt16 $tmp18 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
        (($fn19) self->$class->vtable[3])(self, $tmp18);
        panda$core$UInt32$init$builtin_uint32(&$tmp20, 16);
        panda$core$UInt32 $tmp21 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, $tmp20);
        panda$core$UInt16 $tmp22 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp21);
        (($fn23) self->$class->vtable[3])(self, $tmp22);
    }
    }
    else {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp24, 16);
        panda$core$UInt32 $tmp25 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, $tmp24);
        panda$core$UInt16 $tmp26 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp25);
        (($fn27) self->$class->vtable[3])(self, $tmp26);
        panda$core$UInt16 $tmp28 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
        (($fn29) self->$class->vtable[3])(self, $tmp28);
    }
    }
}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value) {
    panda$core$Int64 $tmp30;
    panda$core$UInt64 $tmp34;
    panda$core$UInt64 $tmp38;
    panda$core$Int64$init$builtin_int64(&$tmp30, 0);
    panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->byteOrder.$rawValue, $tmp30);
    if ($tmp31.value) {
    {
        panda$core$UInt32 $tmp32 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
        (($fn33) self->$class->vtable[4])(self, $tmp32);
        panda$core$UInt64$init$builtin_uint64(&$tmp34, 32);
        panda$core$UInt64 $tmp35 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, $tmp34);
        panda$core$UInt32 $tmp36 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp35);
        (($fn37) self->$class->vtable[4])(self, $tmp36);
    }
    }
    else {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp38, 32);
        panda$core$UInt64 $tmp39 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, $tmp38);
        panda$core$UInt32 $tmp40 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp39);
        (($fn41) self->$class->vtable[4])(self, $tmp40);
        panda$core$UInt32 $tmp42 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
        (($fn43) self->$class->vtable[4])(self, $tmp42);
    }
    }
}
void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value) {
    panda$core$UInt8 $tmp44 = panda$core$Int8$convert$R$panda$core$UInt8(p_value);
    (($fn45) self->$class->vtable[2])(self, $tmp44);
}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value) {
    panda$core$UInt16 $tmp46 = panda$core$Int16$convert$R$panda$core$UInt16(p_value);
    (($fn47) self->$class->vtable[3])(self, $tmp46);
}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value) {
    panda$core$UInt32 $tmp48 = panda$core$Int32$convert$R$panda$core$UInt32(p_value);
    (($fn49) self->$class->vtable[4])(self, $tmp48);
}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value) {
    panda$core$UInt64 $tmp50 = panda$core$Int64$convert$R$panda$core$UInt64(p_value);
    (($fn51) self->$class->vtable[5])(self, $tmp50);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp52;
    panda$core$Int64 $tmp53;
    panda$core$Bit $tmp54;
    panda$core$Int64$init$builtin_int64(&$tmp53, 0);
    panda$core$Bit$init$builtin_bit(&$tmp54, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp52, $tmp53, p_count, $tmp54);
    int64_t $tmp56 = $tmp52.min.value;
    panda$core$Int64 i55 = { $tmp56 };
    int64_t $tmp58 = $tmp52.max.value;
    bool $tmp59 = $tmp52.inclusive.value;
    if ($tmp59) goto $l66; else goto $l67;
    $l66:;
    if ($tmp56 <= $tmp58) goto $l60; else goto $l62;
    $l67:;
    if ($tmp56 < $tmp58) goto $l60; else goto $l62;
    $l60:;
    {
        (($fn68) self->$class->vtable[2])(self, p_ptr[i55.value]);
    }
    $l63:;
    int64_t $tmp70 = $tmp58 - i55.value;
    if ($tmp59) goto $l71; else goto $l72;
    $l71:;
    if ((uint64_t) $tmp70 >= 1) goto $l69; else goto $l62;
    $l72:;
    if ((uint64_t) $tmp70 > 1) goto $l69; else goto $l62;
    $l69:;
    i55.value += 1;
    goto $l60;
    $l62:;
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_count) {
    (($fn75) self->$class->vtable[10])(self, ((panda$core$UInt8*) p_ptr), p_count);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_count) {
    (($fn76) self->$class->vtable[10])(self, ((panda$core$UInt8*) p_ptr), p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_count) {
    (($fn77) self->$class->vtable[10])(self, ((panda$core$UInt8*) p_a->data), p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_count) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64(self, ((panda$core$Int8*) p_a->data), p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_count) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(self, ((panda$core$Char8*) p_a->data), p_count);
}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_value) {
    panda$core$UInt8 $tmp78;
    panda$core$UInt8$init$builtin_uint8(&$tmp78, p_value.value);
    (($fn79) self->$class->vtable[2])(self, $tmp78);
}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(self, p_s->data, p_s->_length);
}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp80;
    panda$core$String* $tmp82 = (($fn81) p_o->$class->vtable[0])(p_o);
    $tmp80 = $tmp82;
    (($fn83) self->$class->vtable[17])(self, $tmp80);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    (($fn84) self->$class->vtable[17])(self, p_s);
    (($fn85) self->$class->vtable[21])(self);
}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp86;
    panda$core$String* $tmp88 = (($fn87) p_o->$class->vtable[0])(p_o);
    $tmp86 = $tmp88;
    (($fn89) self->$class->vtable[19])(self, $tmp86);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
}
void panda$io$OutputStream$printLine(panda$io$OutputStream* self) {
    (($fn90) self->$class->vtable[17])(self, self->lineEnding);
}
void panda$io$OutputStream$flush(panda$io$OutputStream* self) {
}
void panda$io$OutputStream$init(panda$io$OutputStream* self) {
    panda$io$ByteOrder $tmp91;
    panda$core$Int64 $tmp92;
    panda$core$String* $tmp93;
    self->lineEnding = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp92, 0);
    panda$io$ByteOrder$init$panda$core$Int64(&$tmp91, $tmp92);
    self->byteOrder = $tmp91;
    $tmp93 = &$s94;
    self->lineEnding = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
}
void panda$io$OutputStream$cleanup(panda$io$OutputStream* self) {
    int $tmp97;
    {
    }
    $tmp97 = -1;
    goto $l95;
    $l95:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp97) {
        case -1: goto $l98;
    }
    $l98:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lineEnding));
}

