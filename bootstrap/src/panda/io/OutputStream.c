#include "panda/io/OutputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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
#include "panda/core/String.h"


panda$io$OutputStream$class_type panda$io$OutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String} };

typedef void (*$fn2)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn18)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn25)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn26)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn27)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn30)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn32)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn34)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn39)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn41)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn44)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn46)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn48)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn49)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn50)(panda$core$Object*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$Char8);
typedef panda$core$String* (*$fn55)(panda$core$Object*);
typedef void (*$fn57)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn59)(panda$io$OutputStream*);


void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value) {
    panda$core$UInt8 $tmp1 = panda$core$Int8$convert$R$panda$core$UInt8(p_value);
    (($fn2) self->$class->vtable[2])(self, $tmp1);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3, p_offset, $tmp4, ((panda$core$Bit) { false }));
    int64_t $tmp6 = $tmp3.min.value;
    panda$core$Int64 i5 = { $tmp6 };
    int64_t $tmp8 = $tmp3.max.value;
    bool $tmp9 = $tmp3.inclusive.value;
    if ($tmp9) goto $l16; else goto $l17;
    $l16:;
    if ($tmp6 <= $tmp8) goto $l10; else goto $l12;
    $l17:;
    if ($tmp6 < $tmp8) goto $l10; else goto $l12;
    $l10:;
    {
        (($fn18) self->$class->vtable[2])(self, p_ptr[i5.value]);
    }
    $l13:;
    int64_t $tmp20 = $tmp8 - i5.value;
    if ($tmp9) goto $l21; else goto $l22;
    $l21:;
    if ((uint64_t) $tmp20 >= 1) goto $l19; else goto $l12;
    $l22:;
    if ((uint64_t) $tmp20 > 1) goto $l19; else goto $l12;
    $l19:;
    i5.value += 1;
    goto $l10;
    $l12:;
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn25) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn26) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn27) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_a->data), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value) {
    panda$core$UInt32 $tmp28 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, ((panda$core$UInt16) { 8 }));
    panda$core$UInt8 $tmp29 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp28);
    (($fn30) self->$class->vtable[2])(self, $tmp29);
    panda$core$UInt8 $tmp31 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
    (($fn32) self->$class->vtable[2])(self, $tmp31);
}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value) {
    panda$core$UInt16 $tmp33 = panda$core$Int16$convert$R$panda$core$UInt16(p_value);
    (($fn34) self->$class->vtable[8])(self, $tmp33);
}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value) {
    panda$core$UInt32 $tmp35 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, ((panda$core$UInt32) { 16 }));
    panda$core$UInt16 $tmp36 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp35);
    (($fn37) self->$class->vtable[8])(self, $tmp36);
    panda$core$UInt16 $tmp38 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
    (($fn39) self->$class->vtable[8])(self, $tmp38);
}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value) {
    panda$core$UInt32 $tmp40 = panda$core$Int32$convert$R$panda$core$UInt32(p_value);
    (($fn41) self->$class->vtable[10])(self, $tmp40);
}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value) {
    panda$core$UInt64 $tmp42 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, ((panda$core$UInt64) { 32 }));
    panda$core$UInt32 $tmp43 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp42);
    (($fn44) self->$class->vtable[10])(self, $tmp43);
    panda$core$UInt32 $tmp45 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
    (($fn46) self->$class->vtable[10])(self, $tmp45);
}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value) {
    panda$core$UInt64 $tmp47 = panda$core$Int64$convert$R$panda$core$UInt64(p_value);
    (($fn48) self->$class->vtable[12])(self, $tmp47);
}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_c) {
    (($fn49) self->$class->vtable[2])(self, ((panda$core$UInt8) { p_c.value }));
}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp51 = (($fn50) p_o->$class->vtable[0])(p_o);
    (($fn52) self->$class->vtable[16])(self, $tmp51);
}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self, p_s->data, ((panda$core$Int64) { 0 }), p_s->_length);
}
void panda$io$OutputStream$printLine(panda$io$OutputStream* self) {
    panda$core$Char8 $tmp53;
    panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { 10 }));
    (($fn54) self->$class->vtable[14])(self, $tmp53);
}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp56 = (($fn55) p_o->$class->vtable[0])(p_o);
    (($fn57) self->$class->vtable[19])(self, $tmp56);
}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    (($fn58) self->$class->vtable[16])(self, p_s);
    (($fn59) self->$class->vtable[17])(self);
}
void panda$io$OutputStream$init(panda$io$OutputStream* self) {
}

