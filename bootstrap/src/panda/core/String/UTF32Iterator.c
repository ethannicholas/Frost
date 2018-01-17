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
#include "panda/core/Panda.h"
panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* self) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(self);
    panda$core$Char32$wrapper* $tmp1;
    $tmp1 = (panda$core$Char32$wrapper*) pandaZAlloc(16);
    $tmp1->cl = (panda$core$Class*) &panda$core$Char32$wrapperclass;
    $tmp1->refCount = 1;
    $tmp1->value = result;
    return ((panda$core$Object*) $tmp1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };



void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str) {
    self->index = ((panda$core$Int64) { 0 });
    {
        self->str = p_str;
    }
}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self) {
    panda$core$Bit $tmp2 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    return $tmp2;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c4;
    panda$core$Int32 result5;
    panda$core$Char32 $tmp10;
    panda$core$Char32 $tmp22;
    panda$core$Char32 $tmp39;
    panda$core$Char32 $tmp59;
    panda$core$Bit $tmp3 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    PANDA_ASSERT($tmp3.value);
    c4 = self->str->data[self->index.value];
    panda$core$Int32 $tmp6 = panda$core$Char8$convert$R$panda$core$Int32(c4);
    result5 = $tmp6;
    int64_t $tmp7 = ((int64_t) c4.value) & 255;
    bool $tmp8 = $tmp7 < 128;
    if (((panda$core$Bit) { $tmp8 }).value) {
    {
        panda$core$Int64 $tmp9 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp9;
        panda$core$Char32$init$panda$core$Int32(&$tmp10, result5);
        return $tmp10;
    }
    }
    int64_t $tmp11 = ((int64_t) c4.value) & 255;
    bool $tmp12 = $tmp11 < 192;
    if (((panda$core$Bit) { $tmp12 }).value) {
    {
        panda$core$Int64 $tmp13 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp14 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp13, self->str->_length);
        PANDA_ASSERT($tmp14.value);
        panda$core$Int32 $tmp15 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result5, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp16 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp15, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp17 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp18 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp17.value]);
        panda$core$Int32 $tmp19 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp18, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp20 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp16, $tmp19);
        result5 = $tmp20;
        panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp21;
        panda$core$Char32$init$panda$core$Int32(&$tmp22, result5);
        return $tmp22;
    }
    }
    int64_t $tmp23 = ((int64_t) c4.value) & 255;
    bool $tmp24 = $tmp23 < 224;
    if (((panda$core$Bit) { $tmp24 }).value) {
    {
        panda$core$Int64 $tmp25 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp26 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp25, self->str->_length);
        PANDA_ASSERT($tmp26.value);
        panda$core$Int32 $tmp27 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result5, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp28 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp27, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp29 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp30 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp29.value]);
        panda$core$Int32 $tmp31 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp30, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp32 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp31, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp33 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp28, $tmp32);
        panda$core$Int64 $tmp34 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp35 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp34.value]);
        panda$core$Int32 $tmp36 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp35, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp37 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp33, $tmp36);
        result5 = $tmp37;
        panda$core$Int64 $tmp38 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp38;
        panda$core$Char32$init$panda$core$Int32(&$tmp39, result5);
        return $tmp39;
    }
    }
    panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp41 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp40, self->str->_length);
    PANDA_ASSERT($tmp41.value);
    panda$core$Int32 $tmp42 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result5, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp43 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp42, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp45 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp44.value]);
    panda$core$Int32 $tmp46 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp45, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp47 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp46, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp48 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp43, $tmp47);
    panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp50 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp49.value]);
    panda$core$Int32 $tmp51 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp50, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp52 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp51, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp53 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp48, $tmp52);
    panda$core$Int64 $tmp54 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp55 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp54.value]);
    panda$core$Int32 $tmp56 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp55, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp57 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp53, $tmp56);
    result5 = $tmp57;
    panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp58;
    panda$core$Char32$init$panda$core$Int32(&$tmp59, result5);
    return $tmp59;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

