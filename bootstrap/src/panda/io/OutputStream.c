#include "panda/io/OutputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Method.h"
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
typedef void (*$fn19)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn26)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn27)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn28)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn31)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn33)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn35)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn38)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn40)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn42)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn45)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn47)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn49)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn52)(panda$core$Object*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$Char8);
typedef panda$core$String* (*$fn58)(panda$core$Object*);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn61)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn62)(panda$io$OutputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -3689739765115213222, NULL };

void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value) {
    panda$core$UInt8 $tmp2 = panda$core$Int8$convert$R$panda$core$UInt8(p_value);
    (($fn3) self->$class->vtable[2])(self, $tmp2);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp4;
    panda$core$Int64 $tmp5 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4, p_offset, $tmp5, ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp4.min.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp4.max.value;
    bool $tmp10 = $tmp4.inclusive.value;
    if ($tmp10) goto $l17; else goto $l18;
    $l17:;
    if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
    $l18:;
    if ($tmp7 < $tmp9) goto $l11; else goto $l13;
    $l11:;
    {
        (($fn19) self->$class->vtable[2])(self, p_ptr[i6.value]);
    }
    $l14:;
    int64_t $tmp21 = $tmp9 - i6.value;
    if ($tmp10) goto $l22; else goto $l23;
    $l22:;
    if ((uint64_t) $tmp21 >= 1) goto $l20; else goto $l13;
    $l23:;
    if ((uint64_t) $tmp21 > 1) goto $l20; else goto $l13;
    $l20:;
    i6.value += 1;
    goto $l11;
    $l13:;
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn26) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn27) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn28) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_a->data), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value) {
    panda$core$UInt32 $tmp29 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, ((panda$core$UInt16) { 8 }));
    panda$core$UInt8 $tmp30 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp29);
    (($fn31) self->$class->vtable[2])(self, $tmp30);
    panda$core$UInt8 $tmp32 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
    (($fn33) self->$class->vtable[2])(self, $tmp32);
}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value) {
    panda$core$UInt16 $tmp34 = panda$core$Int16$convert$R$panda$core$UInt16(p_value);
    (($fn35) self->$class->vtable[8])(self, $tmp34);
}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value) {
    panda$core$UInt32 $tmp36 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, ((panda$core$UInt32) { 16 }));
    panda$core$UInt16 $tmp37 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp36);
    (($fn38) self->$class->vtable[8])(self, $tmp37);
    panda$core$UInt16 $tmp39 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
    (($fn40) self->$class->vtable[8])(self, $tmp39);
}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value) {
    panda$core$UInt32 $tmp41 = panda$core$Int32$convert$R$panda$core$UInt32(p_value);
    (($fn42) self->$class->vtable[10])(self, $tmp41);
}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value) {
    panda$core$UInt64 $tmp43 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, ((panda$core$UInt64) { 32 }));
    panda$core$UInt32 $tmp44 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp43);
    (($fn45) self->$class->vtable[10])(self, $tmp44);
    panda$core$UInt32 $tmp46 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
    (($fn47) self->$class->vtable[10])(self, $tmp46);
}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value) {
    panda$core$UInt64 $tmp48 = panda$core$Int64$convert$R$panda$core$UInt64(p_value);
    (($fn49) self->$class->vtable[12])(self, $tmp48);
}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_c) {
    (($fn50) self->$class->vtable[2])(self, ((panda$core$UInt8) { p_c.value }));
}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp51;
    panda$core$String* $tmp53 = (($fn52) p_o->$class->vtable[0])(p_o);
    $tmp51 = $tmp53;
    (($fn54) self->$class->vtable[16])(self, $tmp51);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self, p_s->data, ((panda$core$Int64) { 0 }), p_s->_length);
}
void panda$io$OutputStream$printLine(panda$io$OutputStream* self) {
    panda$core$Char8 $tmp55;
    panda$core$Char8$init$panda$core$UInt8(&$tmp55, ((panda$core$UInt8) { 10 }));
    (($fn56) self->$class->vtable[14])(self, $tmp55);
}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp57;
    panda$core$String* $tmp59 = (($fn58) p_o->$class->vtable[0])(p_o);
    $tmp57 = $tmp59;
    (($fn60) self->$class->vtable[19])(self, $tmp57);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    (($fn61) self->$class->vtable[16])(self, p_s);
    (($fn62) self->$class->vtable[17])(self);
}
void panda$io$OutputStream$init(panda$io$OutputStream* self) {
}
void panda$io$OutputStream$cleanup(panda$io$OutputStream* self) {
    int $tmp65;
    {
    }
    $tmp65 = -1;
    goto $l63;
    $l63:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp65) {
        case -1: goto $l66;
    }
    $l66:;
}

