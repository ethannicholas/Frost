#include "panda/core/Char8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Char8$wrapper* wrap_panda$core$Char8(panda$core$Char8 self) {
    panda$core$Char8$wrapper* result = (panda$core$Char8$wrapper*) malloc(13);
    result->cl = (panda$core$Class*) &panda$core$Char8$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/UInt8.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim} };

panda$core$Char8$class_type panda$core$Char8$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$_panda$core$Equatable, { panda$core$Char8$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$isWhitespace$R$panda$core$Bit, panda$core$Char8$hash$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$Int8, panda$core$Char8$convert$R$panda$core$Int16, panda$core$Char8$convert$R$panda$core$Int32, panda$core$Char8$convert$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$UInt8, panda$core$Char8$convert$R$panda$core$UInt16, panda$core$Char8$convert$R$panda$core$UInt32, panda$core$Char8$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$wrapper_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim} };

panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Equatable, { panda$core$Char8$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Char8$init$panda$core$UInt8(panda$core$Char8* self, panda$core$UInt8 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp1 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp1 });
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp2 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp2 });
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    bool $tmp6 = self.value == 10;
    bool $tmp5 = $tmp6;
    if ($tmp5) goto $l7;
    bool $tmp8 = self.value == 13;
    $tmp5 = $tmp8;
    $l7:;
    bool $tmp4 = $tmp5;
    if ($tmp4) goto $l9;
    bool $tmp10 = self.value == 9;
    $tmp4 = $tmp10;
    $l9:;
    bool $tmp3 = $tmp4;
    if ($tmp3) goto $l11;
    bool $tmp12 = self.value == 32;
    $tmp3 = $tmp12;
    $l11:;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $tmp13 = panda$core$Char8$convert$R$panda$core$Int64(self);
    return $tmp13;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    int16_t $tmp14 = ((int16_t) self.value) & 255;
    return ((panda$core$Int16) { $tmp14 });
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    int32_t $tmp15 = ((int32_t) self.value) & 255;
    return ((panda$core$Int32) { $tmp15 });
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    int64_t $tmp16 = ((int64_t) self.value) & 255;
    return ((panda$core$Int64) { $tmp16 });
}
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self) {
    return ((panda$core$UInt8) { self.value });
}
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self) {
    return ((panda$core$UInt16) { ((int16_t) self.value) });
}
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self) {
    return ((panda$core$UInt32) { ((int32_t) self.value) });
}
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self) {
    return ((panda$core$UInt64) { ((int64_t) self.value) });
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self) {
    panda$core$Char8* data18;
    panda$core$Char8* data21;
    panda$core$Char8 $tmp22;
    panda$core$Char8 $tmp25;
    bool $tmp17 = self.value < 128;
    if (((panda$core$Bit) { $tmp17 }).value) {
    {
        data18 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        data18[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp19 = (panda$core$String*) malloc(48);
        $tmp19->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp19->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp19, data18, ((panda$core$Int64) { 1 }));
        return $tmp19;
    }
    }
    data21 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
    int16_t $tmp23 = ((int16_t) self.value) >> 6;
    int16_t $tmp24 = $tmp23 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp22, ((panda$core$UInt8) { ((int8_t) $tmp24) }));
    data21[((panda$core$Int64) { 0 }).value] = $tmp22;
    int16_t $tmp26 = ((int16_t) self.value) & 63;
    int16_t $tmp27 = $tmp26 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp25, ((panda$core$UInt8) { ((int8_t) $tmp27) }));
    data21[((panda$core$Int64) { 1 }).value] = $tmp25;
    panda$core$String* $tmp28 = (panda$core$String*) malloc(48);
    $tmp28->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp28->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp28, data21, ((panda$core$Int64) { 2 }));
    return $tmp28;
}

