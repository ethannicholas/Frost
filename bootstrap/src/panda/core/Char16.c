#include "panda/core/Char16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Char16$wrapper* wrap_panda$core$Char16(panda$core$Char16 self) {
    panda$core$Char16$wrapper* result = (panda$core$Char16$wrapper*) malloc(14);
    result->cl = (panda$core$Class*) &panda$core$Char16$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/UInt16.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}

panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64$wrappershim(panda$core$Char16$wrapper* self) {
    return panda$core$Char16$hash$R$panda$core$Int64(self->value);
}
panda$core$String* panda$core$Char16$convert$R$panda$core$String$wrappershim(panda$core$Char16$wrapper* self) {
    return panda$core$Char16$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64} };

panda$core$Char16$class_type panda$core$Char16$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$hash$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$Int8, panda$core$Char16$convert$R$panda$core$Int16, panda$core$Char16$convert$R$panda$core$Int32, panda$core$Char16$convert$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$UInt8, panda$core$Char16$convert$R$panda$core$UInt16, panda$core$Char16$convert$R$panda$core$UInt32, panda$core$Char16$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64$wrappershim} };

panda$core$Char16$wrapperclass_type panda$core$Char16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$wrapper_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Char16$init$panda$core$UInt16(panda$core$Char16* self, panda$core$UInt16 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp1 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp1 });
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp2 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp2 });
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $tmp3 = panda$core$Char16$convert$R$panda$core$Int64(self);
    return $tmp3;
}
panda$core$Int8 panda$core$Char16$convert$R$panda$core$Int8(panda$core$Char16 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char16$convert$R$panda$core$Int16(panda$core$Char16 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Char16$convert$R$panda$core$Int32(panda$core$Char16 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$Char16$convert$R$panda$core$Int64(panda$core$Char16 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Char16$convert$R$panda$core$UInt8(panda$core$Char16 self) {
    return ((panda$core$UInt8) { ((int8_t) self.value) });
}
panda$core$UInt16 panda$core$Char16$convert$R$panda$core$UInt16(panda$core$Char16 self) {
    return ((panda$core$UInt16) { self.value });
}
panda$core$UInt32 panda$core$Char16$convert$R$panda$core$UInt32(panda$core$Char16 self) {
    return ((panda$core$UInt32) { ((int32_t) self.value) });
}
panda$core$UInt64 panda$core$Char16$convert$R$panda$core$UInt64(panda$core$Char16 self) {
    return ((panda$core$UInt64) { ((int64_t) self.value) });
}
panda$core$String* panda$core$Char16$convert$R$panda$core$String(panda$core$Char16 self) {
    panda$core$Char8* data5;
    panda$core$Char8 $tmp6;
    panda$core$Char8* data11;
    panda$core$Char8 $tmp12;
    panda$core$Char8 $tmp15;
    panda$core$Char8* data20;
    panda$core$Char8 $tmp21;
    panda$core$Char8 $tmp24;
    panda$core$Char8 $tmp28;
    bool $tmp4 = self.value < 128;
    if (((panda$core$Bit) { $tmp4 }).value) {
    {
        data5 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$UInt8 $tmp7 = panda$core$Char16$convert$R$panda$core$UInt8(self);
        panda$core$Char8$init$panda$core$UInt8(&$tmp6, $tmp7);
        data5[((panda$core$Int64) { 0 }).value] = $tmp6;
        panda$core$String* $tmp8 = (panda$core$String*) malloc(33);
        $tmp8->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp8->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp8, data5, ((panda$core$Int64) { 1 }), ((panda$core$Bit) { true }));
        return $tmp8;
    }
    }
    bool $tmp10 = self.value < 2048;
    if (((panda$core$Bit) { $tmp10 }).value) {
    {
        data11 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
        int16_t $tmp13 = self.value >> 6;
        int16_t $tmp14 = $tmp13 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp12, ((panda$core$UInt8) { ((int8_t) $tmp14) }));
        data11[((panda$core$Int64) { 0 }).value] = $tmp12;
        int16_t $tmp16 = self.value & 63;
        int16_t $tmp17 = $tmp16 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp15, ((panda$core$UInt8) { ((int8_t) $tmp17) }));
        data11[((panda$core$Int64) { 1 }).value] = $tmp15;
        panda$core$String* $tmp18 = (panda$core$String*) malloc(33);
        $tmp18->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp18->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp18, data11, ((panda$core$Int64) { 2 }), ((panda$core$Bit) { true }));
        return $tmp18;
    }
    }
    data20 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 3 }).value * 1));
    int16_t $tmp22 = self.value >> 12;
    int16_t $tmp23 = $tmp22 | 224;
    panda$core$Char8$init$panda$core$UInt8(&$tmp21, ((panda$core$UInt8) { ((int8_t) $tmp23) }));
    data20[((panda$core$Int64) { 0 }).value] = $tmp21;
    int16_t $tmp25 = self.value >> 6;
    int16_t $tmp26 = $tmp25 & 63;
    int16_t $tmp27 = $tmp26 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp24, ((panda$core$UInt8) { ((int8_t) $tmp27) }));
    data20[((panda$core$Int64) { 1 }).value] = $tmp24;
    int16_t $tmp29 = self.value & 63;
    int16_t $tmp30 = $tmp29 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp28, ((panda$core$UInt8) { ((int8_t) $tmp30) }));
    data20[((panda$core$Int64) { 2 }).value] = $tmp28;
    panda$core$String* $tmp31 = (panda$core$String*) malloc(33);
    $tmp31->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp31->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp31, data20, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
    return $tmp31;
}

