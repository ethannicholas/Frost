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
typedef void (*$fn23)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn35)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn36)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64, panda$core$Int64);
typedef void (*$fn40)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn42)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn44)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn47)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn49)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn59)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn60)(panda$core$Object*);
typedef void (*$fn62)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn64)(panda$io$OutputStream*, panda$core$Char8);
typedef panda$core$String* (*$fn65)(panda$core$Object*);
typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn68)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn69)(panda$io$OutputStream*);


void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* self, panda$core$Int8 p_value) {
    panda$core$UInt8 $tmp1 = panda$core$Int8$convert$R$panda$core$UInt8(p_value);
    (($fn2) self->$class->vtable[2])(self, $tmp1);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_offset, p_count);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3, p_offset, $tmp4, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp6 = $tmp3.start.value;
    panda$core$Int64 i5 = { $tmp6 };
    int64_t $tmp8 = $tmp3.end.value;
    int64_t $tmp9 = $tmp3.step.value;
    bool $tmp10 = $tmp3.inclusive.value;
    bool $tmp17 = $tmp9 > 0;
    if ($tmp17) goto $l15; else goto $l16;
    $l15:;
    if ($tmp10) goto $l18; else goto $l19;
    $l18:;
    if ($tmp6 <= $tmp8) goto $l11; else goto $l13;
    $l19:;
    if ($tmp6 < $tmp8) goto $l11; else goto $l13;
    $l16:;
    if ($tmp10) goto $l20; else goto $l21;
    $l20:;
    if ($tmp6 >= $tmp8) goto $l11; else goto $l13;
    $l21:;
    if ($tmp6 > $tmp8) goto $l11; else goto $l13;
    $l11:;
    {
        (($fn23) self->$class->vtable[2])(self, p_ptr[i5.value]);
    }
    $l14:;
    if ($tmp17) goto $l25; else goto $l26;
    $l25:;
    int64_t $tmp27 = $tmp8 - i5.value;
    if ($tmp10) goto $l28; else goto $l29;
    $l28:;
    if ($tmp27 >= $tmp9) goto $l24; else goto $l13;
    $l29:;
    if ($tmp27 > $tmp9) goto $l24; else goto $l13;
    $l26:;
    int64_t $tmp31 = i5.value - $tmp8;
    if ($tmp10) goto $l32; else goto $l33;
    $l32:;
    if ($tmp31 >= -$tmp9) goto $l24; else goto $l13;
    $l33:;
    if ($tmp31 > -$tmp9) goto $l24; else goto $l13;
    $l24:;
    i5.value += $tmp9;
    goto $l11;
    $l13:;
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn35) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$core$Char8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn36) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_ptr), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$OutputStream* self, panda$collections$Array* p_a, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    (($fn37) self->$class->vtable[4])(self, ((panda$core$UInt8*) p_a->data), p_offset, p_count);
}
void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* self, panda$core$UInt16 p_value) {
    panda$core$UInt32 $tmp38 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(p_value, ((panda$core$UInt16) { 8 }));
    panda$core$UInt8 $tmp39 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp38);
    (($fn40) self->$class->vtable[2])(self, $tmp39);
    panda$core$UInt8 $tmp41 = panda$core$UInt16$convert$R$panda$core$UInt8(p_value);
    (($fn42) self->$class->vtable[2])(self, $tmp41);
}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* self, panda$core$Int16 p_value) {
    panda$core$UInt16 $tmp43 = panda$core$Int16$convert$R$panda$core$UInt16(p_value);
    (($fn44) self->$class->vtable[8])(self, $tmp43);
}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* self, panda$core$UInt32 p_value) {
    panda$core$UInt32 $tmp45 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(p_value, ((panda$core$UInt32) { 16 }));
    panda$core$UInt16 $tmp46 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp45);
    (($fn47) self->$class->vtable[8])(self, $tmp46);
    panda$core$UInt16 $tmp48 = panda$core$UInt32$convert$R$panda$core$UInt16(p_value);
    (($fn49) self->$class->vtable[8])(self, $tmp48);
}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* self, panda$core$Int32 p_value) {
    panda$core$UInt32 $tmp50 = panda$core$Int32$convert$R$panda$core$UInt32(p_value);
    (($fn51) self->$class->vtable[10])(self, $tmp50);
}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* self, panda$core$UInt64 p_value) {
    panda$core$UInt64 $tmp52 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(p_value, ((panda$core$UInt64) { 32 }));
    panda$core$UInt32 $tmp53 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp52);
    (($fn54) self->$class->vtable[10])(self, $tmp53);
    panda$core$UInt32 $tmp55 = panda$core$UInt64$convert$R$panda$core$UInt32(p_value);
    (($fn56) self->$class->vtable[10])(self, $tmp55);
}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* self, panda$core$Int64 p_value) {
    panda$core$UInt64 $tmp57 = panda$core$Int64$convert$R$panda$core$UInt64(p_value);
    (($fn58) self->$class->vtable[12])(self, $tmp57);
}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* self, panda$core$Char8 p_c) {
    (($fn59) self->$class->vtable[2])(self, ((panda$core$UInt8) { p_c.value }));
}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp61 = (($fn60) p_o->$class->vtable[0])(p_o);
    (($fn62) self->$class->vtable[16])(self, $tmp61);
}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self, p_s->data, ((panda$core$Int64) { 0 }), p_s->_length);
}
void panda$io$OutputStream$printLine(panda$io$OutputStream* self) {
    panda$core$Char8 $tmp63;
    panda$core$Char8$init$panda$core$UInt8(&$tmp63, ((panda$core$UInt8) { 10 }));
    (($fn64) self->$class->vtable[14])(self, $tmp63);
}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* self, panda$core$Object* p_o) {
    panda$core$String* $tmp66 = (($fn65) p_o->$class->vtable[0])(p_o);
    (($fn67) self->$class->vtable[19])(self, $tmp66);
}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* self, panda$core$String* p_s) {
    (($fn68) self->$class->vtable[16])(self, p_s);
    (($fn69) self->$class->vtable[17])(self);
}
void panda$io$OutputStream$init(panda$io$OutputStream* self) {
}

