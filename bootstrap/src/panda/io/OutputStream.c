#include "panda/io/OutputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$io$OutputStream$class_type panda$io$OutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$OutputStream$cleanup, NULL, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String} };

typedef void (*$fn3)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn20)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn27)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn28)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn29)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn33)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn35)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn41)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn43)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn45)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn49)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn53)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn55)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn57)(panda$core$Object*);
typedef void (*$fn59)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn63)(panda$io$OutputStream*, panda$core$Char8);
typedef panda$core$String* (*$fn65)(panda$core$Object*);
typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn68)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn69)(panda$io$OutputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -3689739765115213222, NULL };

void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value) {
    panda$core$UInt8 $tmp2 = panda$core$Int8$convert$R$panda$core$UInt8(p_value);
    (($fn3) self->$class->vtable[2])(self, $tmp2);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp4;
    panda$core$Bit $tmp6;
    panda$core$Int64 $tmp5 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Bit$init$builtin_bit(&$tmp6, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4, p_offset, $tmp5, $tmp6);
    int64_t $tmp8 = $tmp4.min.value;
    panda$core$Int64 i7 = { $tmp8 };
    int64_t $tmp10 = $tmp4.max.value;
    bool $tmp11 = $tmp4.inclusive.value;
    if ($tmp11) goto $l18; else goto $l19;
    $l18:;
    if ($tmp8 <= $tmp10) goto $l12; else goto $l14;
    $l19:;
    if ($tmp8 < $tmp10) goto $l12; else goto $l14;
    $l12:;
    {
        (($fn20) self->$class->vtable[2])(self, p_ptr[i7.value]);
    }
    $l15:;
    int64_t $tmp22 = $tmp10 - i7.value;
    if ($tmp11) goto $l23; else goto $l24;
    $l23:;
    if ((uint64_t) $tmp22 >= 1) goto $l21; else goto $l14;
    $l24:;
    if ((uint64_t) $tmp22 > 1) goto $l21; else goto $l14;
    $l21:;
    i7.value += 1;
    goto $l12;
    $l14:;
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn27) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn28) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn29) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_a->data), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value) {
    panda$core$UInt16 $tmp30;
    panda$core$UInt16$init$builtin_uint16(&$tmp30, 8);
    panda$core$UInt32 $tmp31 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, $tmp30);
    panda$core$UInt8 $tmp32 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp31);
    (($fn33) self->$class->vtable[2])(self, $tmp32);
    panda$core$UInt8 $tmp34 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
    (($fn35) self->$class->vtable[2])(self, $tmp34);
}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value) {
    panda$core$UInt16 $tmp36 = panda$core$Int16$convert$R$panda$core$UInt16(p_value);
    (($fn37) self->$class->vtable[8])(self, $tmp36);
}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value) {
    panda$core$UInt32 $tmp38;
    panda$core$UInt32$init$builtin_uint32(&$tmp38, 16);
    panda$core$UInt32 $tmp39 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, $tmp38);
    panda$core$UInt16 $tmp40 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp39);
    (($fn41) self->$class->vtable[8])(self, $tmp40);
    panda$core$UInt16 $tmp42 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
    (($fn43) self->$class->vtable[8])(self, $tmp42);
}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value) {
    panda$core$UInt32 $tmp44 = panda$core$Int32$convert$R$panda$core$UInt32(p_value);
    (($fn45) self->$class->vtable[10])(self, $tmp44);
}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value) {
    panda$core$UInt64 $tmp46;
    panda$core$UInt64$init$builtin_uint64(&$tmp46, 32);
    panda$core$UInt64 $tmp47 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, $tmp46);
    panda$core$UInt32 $tmp48 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp47);
    (($fn49) self->$class->vtable[10])(self, $tmp48);
    panda$core$UInt32 $tmp50 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
    (($fn51) self->$class->vtable[10])(self, $tmp50);
}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value) {
    panda$core$UInt64 $tmp52 = panda$core$Int64$convert$R$panda$core$UInt64(p_value);
    (($fn53) self->$class->vtable[12])(self, $tmp52);
}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp54;
    panda$core$UInt8$init$builtin_uint8(&$tmp54, p_c.value);
    (($fn55) self->$class->vtable[2])(self, $tmp54);
}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp56;
    panda$core$String* $tmp58 = (($fn57) p_o->$class->vtable[0])(p_o);
    $tmp56 = $tmp58;
    (($fn59) self->$class->vtable[16])(self, $tmp56);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    panda$core$Int64 $tmp60;
    panda$core$Int64$init$builtin_int64(&$tmp60, 0);
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self, p_s->data, $tmp60, p_s->_length);
}
void panda$io$OutputStream$printLine(panda$io$OutputStream* self) {
    panda$core$Char8 $tmp61;
    panda$core$UInt8 $tmp62;
    panda$core$UInt8$init$builtin_uint8(&$tmp62, 10);
    panda$core$Char8$init$panda$core$UInt8(&$tmp61, $tmp62);
    (($fn63) self->$class->vtable[14])(self, $tmp61);
}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp64;
    panda$core$String* $tmp66 = (($fn65) p_o->$class->vtable[0])(p_o);
    $tmp64 = $tmp66;
    (($fn67) self->$class->vtable[19])(self, $tmp64);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    (($fn68) self->$class->vtable[16])(self, p_s);
    (($fn69) self->$class->vtable[17])(self);
}
void panda$io$OutputStream$init(panda$io$OutputStream* self) {
}
void panda$io$OutputStream$cleanup(panda$io$OutputStream* self) {
    int $tmp72;
    {
    }
    $tmp72 = -1;
    goto $l70;
    $l70:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp72) {
        case -1: goto $l73;
    }
    $l73:;
}

