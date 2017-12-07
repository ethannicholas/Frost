#include "panda/core/Char32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Char32$wrapper* wrap_panda$core$Char32(panda$core$Char32 self) {
    panda$core$Char32$wrapper* result = (panda$core$Char32$wrapper*) malloc(16);
    result->cl = (panda$core$Class*) &panda$core$Char32$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64$wrappershim(panda$core$Char32$wrapper* self) {
    return panda$core$Char32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String$wrappershim(panda$core$Char32$wrapper* self) {
    return panda$core$Char32$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

panda$core$Char32$class_type panda$core$Char32$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$_panda$core$Equatable, { panda$core$Char32$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$hash$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$Int8, panda$core$Char32$convert$R$panda$core$Int16, panda$core$Char32$convert$R$panda$core$Int32, panda$core$Char32$convert$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$wrapper_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim} };

panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Equatable, { panda$core$Char32$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Char32$init$panda$core$Int32(panda$core$Char32* self, panda$core$Int32 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp1 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp1 });
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp2 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp2 });
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp3 = panda$core$Char32$convert$R$panda$core$Int64(self);
    return $tmp3;
}
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 self) {
    return ((panda$core$Int32) { self.value });
}
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 self) {
    panda$core$Char8* data5;
    panda$core$Char8 $tmp6;
    panda$core$Char8* data10;
    panda$core$Char8 $tmp11;
    panda$core$Char8 $tmp14;
    panda$core$Char8* data20;
    panda$core$Char8 $tmp21;
    panda$core$Char8 $tmp24;
    panda$core$Char8 $tmp28;
    panda$core$Char8* data33;
    panda$core$Char8 $tmp34;
    panda$core$Char8 $tmp37;
    panda$core$Char8 $tmp41;
    panda$core$Char8 $tmp45;
    bool $tmp4 = self.value < 128;
    if (((panda$core$Bit) { $tmp4 }).value) {
    {
        data5 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp6, ((panda$core$UInt8) { ((int8_t) self.value) }));
        data5[((panda$core$Int64) { 0 }).value] = $tmp6;
        panda$core$String* $tmp7 = (panda$core$String*) malloc(33);
        $tmp7->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp7->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp7, data5, ((panda$core$Int64) { 1 }), ((panda$core$Bit) { true }));
        return $tmp7;
    }
    }
    bool $tmp9 = self.value < 2048;
    if (((panda$core$Bit) { $tmp9 }).value) {
    {
        data10 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp12 = self.value >> 6;
        int32_t $tmp13 = $tmp12 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp11, ((panda$core$UInt8) { ((int8_t) $tmp13) }));
        data10[((panda$core$Int64) { 0 }).value] = $tmp11;
        int32_t $tmp15 = self.value & 63;
        int32_t $tmp16 = $tmp15 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp14, ((panda$core$UInt8) { ((int8_t) $tmp16) }));
        data10[((panda$core$Int64) { 1 }).value] = $tmp14;
        panda$core$String* $tmp17 = (panda$core$String*) malloc(33);
        $tmp17->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp17->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp17, data10, ((panda$core$Int64) { 2 }), ((panda$core$Bit) { true }));
        return $tmp17;
    }
    }
    bool $tmp19 = self.value < 65536;
    if (((panda$core$Bit) { $tmp19 }).value) {
    {
        data20 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp22 = self.value >> 12;
        int32_t $tmp23 = $tmp22 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp21, ((panda$core$UInt8) { ((int8_t) $tmp23) }));
        data20[((panda$core$Int64) { 0 }).value] = $tmp21;
        int32_t $tmp25 = self.value >> 6;
        int32_t $tmp26 = $tmp25 & 63;
        int32_t $tmp27 = $tmp26 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp24, ((panda$core$UInt8) { ((int8_t) $tmp27) }));
        data20[((panda$core$Int64) { 1 }).value] = $tmp24;
        int32_t $tmp29 = self.value & 63;
        int32_t $tmp30 = $tmp29 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp28, ((panda$core$UInt8) { ((int8_t) $tmp30) }));
        data20[((panda$core$Int64) { 2 }).value] = $tmp28;
        panda$core$String* $tmp31 = (panda$core$String*) malloc(33);
        $tmp31->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp31->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp31, data20, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
        return $tmp31;
    }
    }
    data33 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp35 = self.value >> 18;
    int32_t $tmp36 = $tmp35 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp34, ((panda$core$UInt8) { ((int8_t) $tmp36) }));
    data33[((panda$core$Int64) { 0 }).value] = $tmp34;
    int32_t $tmp38 = self.value >> 12;
    int32_t $tmp39 = $tmp38 & 63;
    int32_t $tmp40 = $tmp39 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp37, ((panda$core$UInt8) { ((int8_t) $tmp40) }));
    data33[((panda$core$Int64) { 1 }).value] = $tmp37;
    int32_t $tmp42 = self.value >> 6;
    int32_t $tmp43 = $tmp42 & 63;
    int32_t $tmp44 = $tmp43 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp41, ((panda$core$UInt8) { ((int8_t) $tmp44) }));
    data33[((panda$core$Int64) { 2 }).value] = $tmp41;
    int32_t $tmp46 = self.value & 63;
    int32_t $tmp47 = $tmp46 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp45, ((panda$core$UInt8) { ((int8_t) $tmp47) }));
    data33[((panda$core$Int64) { 3 }).value] = $tmp45;
    panda$core$String* $tmp48 = (panda$core$String*) malloc(33);
    $tmp48->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp48->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp48, data33, ((panda$core$Int64) { 4 }), ((panda$core$Bit) { true }));
    return $tmp48;
}

