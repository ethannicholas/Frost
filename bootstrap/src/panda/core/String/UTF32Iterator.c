#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char32.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/Int32.h"
panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* self) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(self);
    return ((panda$core$Object*) wrap_panda$core$Char32(result));
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };



void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str) {
    self->index = ((panda$core$Int64) { 0 });
    self->str = p_str;
}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self) {
    panda$core$Bit $tmp1 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    return $tmp1;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c3;
    panda$core$Int32 result4;
    panda$core$Char32 $tmp9;
    panda$core$Char32 $tmp21;
    panda$core$Char32 $tmp38;
    panda$core$Char32 $tmp58;
    panda$core$Bit $tmp2 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    PANDA_ASSERT($tmp2.value);
    c3 = self->str->data[self->index.value];
    panda$core$Int32 $tmp5 = panda$core$Char8$convert$R$panda$core$Int32(c3);
    result4 = $tmp5;
    int64_t $tmp6 = ((int64_t) c3.value) & 255;
    bool $tmp7 = $tmp6 < 128;
    if (((panda$core$Bit) { $tmp7 }).value) {
    {
        panda$core$Int64 $tmp8 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp8;
        panda$core$Char32$init$panda$core$Int32(&$tmp9, result4);
        return $tmp9;
    }
    }
    int64_t $tmp10 = ((int64_t) c3.value) & 255;
    bool $tmp11 = $tmp10 < 192;
    if (((panda$core$Bit) { $tmp11 }).value) {
    {
        panda$core$Int64 $tmp12 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp13 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp12, self->str->_length);
        PANDA_ASSERT($tmp13.value);
        panda$core$Int32 $tmp14 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result4, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp15 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp14, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp16 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp17 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp16.value]);
        panda$core$Int32 $tmp18 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp17, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp19 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp15, $tmp18);
        result4 = $tmp19;
        panda$core$Int64 $tmp20 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp20;
        panda$core$Char32$init$panda$core$Int32(&$tmp21, result4);
        return $tmp21;
    }
    }
    int64_t $tmp22 = ((int64_t) c3.value) & 255;
    bool $tmp23 = $tmp22 < 224;
    if (((panda$core$Bit) { $tmp23 }).value) {
    {
        panda$core$Int64 $tmp24 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp25 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp24, self->str->_length);
        PANDA_ASSERT($tmp25.value);
        panda$core$Int32 $tmp26 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result4, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp27 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp26, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp29 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp28.value]);
        panda$core$Int32 $tmp30 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp29, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp31 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp30, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp32 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp27, $tmp31);
        panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp34 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp33.value]);
        panda$core$Int32 $tmp35 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp34, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp36 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp32, $tmp35);
        result4 = $tmp36;
        panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp37;
        panda$core$Char32$init$panda$core$Int32(&$tmp38, result4);
        return $tmp38;
    }
    }
    panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp40 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp39, self->str->_length);
    PANDA_ASSERT($tmp40.value);
    panda$core$Int32 $tmp41 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result4, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp42 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp41, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp44 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp43.value]);
    panda$core$Int32 $tmp45 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp44, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp46 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp45, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp47 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp42, $tmp46);
    panda$core$Int64 $tmp48 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp49 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp48.value]);
    panda$core$Int32 $tmp50 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp49, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp51 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp50, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp52 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp47, $tmp51);
    panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp54 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp53.value]);
    panda$core$Int32 $tmp55 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp54, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp56 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp52, $tmp55);
    result4 = $tmp56;
    panda$core$Int64 $tmp57 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp57;
    panda$core$Char32$init$panda$core$Int32(&$tmp58, result4);
    return $tmp58;
}

