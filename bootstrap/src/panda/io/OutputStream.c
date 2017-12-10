#include "panda/io/OutputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"


panda$io$OutputStream$class_type panda$io$OutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String} };

typedef void (*$fn2)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn22)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn34)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn35)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn36)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn39)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn41)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn43)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn46)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn48)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn53)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn55)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn57)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn59)(panda$core$Object*);
typedef void (*$fn61)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn63)(panda$io$OutputStream*, panda$core$Char8);
typedef panda$core$String* (*$fn64)(panda$core$Object*);
typedef void (*$fn66)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn68)(panda$io$OutputStream*);


void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value) {
    panda$core$UInt8 $tmp1 = panda$core$Int8$convert$R$panda$core$UInt8(p_value);
    (($fn2) self->$class->vtable[2])(self, $tmp1);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
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
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn34) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn35) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn36) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_a->data), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value) {
    panda$core$UInt32 $tmp37 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, ((panda$core$UInt16) { 8 }));
    panda$core$UInt8 $tmp38 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp37);
    (($fn39) self->$class->vtable[2])(self, $tmp38);
    panda$core$UInt8 $tmp40 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
    (($fn41) self->$class->vtable[2])(self, $tmp40);
}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value) {
    panda$core$UInt16 $tmp42 = panda$core$Int16$convert$R$panda$core$UInt16(p_value);
    (($fn43) self->$class->vtable[8])(self, $tmp42);
}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value) {
    panda$core$UInt32 $tmp44 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, ((panda$core$UInt32) { 16 }));
    panda$core$UInt16 $tmp45 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp44);
    (($fn46) self->$class->vtable[8])(self, $tmp45);
    panda$core$UInt16 $tmp47 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
    (($fn48) self->$class->vtable[8])(self, $tmp47);
}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value) {
    panda$core$UInt32 $tmp49 = panda$core$Int32$convert$R$panda$core$UInt32(p_value);
    (($fn50) self->$class->vtable[10])(self, $tmp49);
}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value) {
    panda$core$UInt64 $tmp51 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, ((panda$core$UInt64) { 32 }));
    panda$core$UInt32 $tmp52 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp51);
    (($fn53) self->$class->vtable[10])(self, $tmp52);
    panda$core$UInt32 $tmp54 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
    (($fn55) self->$class->vtable[10])(self, $tmp54);
}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value) {
    panda$core$UInt64 $tmp56 = panda$core$Int64$convert$R$panda$core$UInt64(p_value);
    (($fn57) self->$class->vtable[12])(self, $tmp56);
}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_c) {
    (($fn58) self->$class->vtable[2])(self, ((panda$core$UInt8) { p_c.value }));
}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp60 = (($fn59) p_o->$class->vtable[0])(p_o);
    (($fn61) self->$class->vtable[16])(self, $tmp60);
}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self, p_s->data, ((panda$core$Int64) { 0 }), p_s->_length);
}
void panda$io$OutputStream$printLine(panda$io$OutputStream* self) {
    panda$core$Char8 $tmp62;
    panda$core$Char8$init$panda$core$UInt8(&$tmp62, ((panda$core$UInt8) { 10 }));
    (($fn63) self->$class->vtable[14])(self, $tmp62);
}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp65 = (($fn64) p_o->$class->vtable[0])(p_o);
    (($fn66) self->$class->vtable[19])(self, $tmp65);
}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    (($fn67) self->$class->vtable[16])(self, p_s);
    (($fn68) self->$class->vtable[17])(self);
}
void panda$io$OutputStream$init(panda$io$OutputStream* self) {
}

