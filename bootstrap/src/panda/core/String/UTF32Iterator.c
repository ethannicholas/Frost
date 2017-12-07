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
    panda$core$Char8 c2;
    panda$core$Int32 result3;
    panda$core$Char32 $tmp8;
    panda$core$Char32 $tmp18;
    panda$core$Char32 $tmp33;
    panda$core$Char32 $tmp51;
    c2 = self->str->data[self->index.value];
    panda$core$Int32 $tmp4 = panda$core$Char8$convert$R$panda$core$Int32(c2);
    result3 = $tmp4;
    int64_t $tmp5 = ((int64_t) c2.value) & 255;
    bool $tmp6 = $tmp5 < 128;
    if (((panda$core$Bit) { $tmp6 }).value) {
    {
        panda$core$Int64 $tmp7 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp7;
        panda$core$Char32$init$panda$core$Int32(&$tmp8, result3);
        return $tmp8;
    }
    }
    int64_t $tmp9 = ((int64_t) c2.value) & 255;
    bool $tmp10 = $tmp9 < 192;
    if (((panda$core$Bit) { $tmp10 }).value) {
    {
        panda$core$Int32 $tmp11 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result3, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp12 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp11, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp13 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp14 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp13.value]);
        panda$core$Int32 $tmp15 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp14, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp16 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp12, $tmp15);
        result3 = $tmp16;
        panda$core$Int64 $tmp17 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp17;
        panda$core$Char32$init$panda$core$Int32(&$tmp18, result3);
        return $tmp18;
    }
    }
    int64_t $tmp19 = ((int64_t) c2.value) & 255;
    bool $tmp20 = $tmp19 < 224;
    if (((panda$core$Bit) { $tmp20 }).value) {
    {
        panda$core$Int32 $tmp21 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result3, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp22 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp21, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp24 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp23.value]);
        panda$core$Int32 $tmp25 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp24, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp26 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp25, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp27 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp22, $tmp26);
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp29 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp28.value]);
        panda$core$Int32 $tmp30 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp29, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp31 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp27, $tmp30);
        result3 = $tmp31;
        panda$core$Int64 $tmp32 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp32;
        panda$core$Char32$init$panda$core$Int32(&$tmp33, result3);
        return $tmp33;
    }
    }
    panda$core$Int32 $tmp34 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result3, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp35 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp34, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp37 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp36.value]);
    panda$core$Int32 $tmp38 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp37, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp39 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp38, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp40 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp35, $tmp39);
    panda$core$Int64 $tmp41 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp42 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp41.value]);
    panda$core$Int32 $tmp43 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp42, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp44 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp43, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp45 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp40, $tmp44);
    panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp47 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp46.value]);
    panda$core$Int32 $tmp48 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp47, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp49 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp45, $tmp48);
    result3 = $tmp49;
    panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp50;
    panda$core$Char32$init$panda$core$Int32(&$tmp51, result3);
    return $tmp51;
}

