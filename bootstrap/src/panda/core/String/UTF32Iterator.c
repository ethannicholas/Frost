#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char32.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/Int32.h"
panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* self) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(self);
    panda$core$Char32$wrapper* $tmp2;
    $tmp2 = (panda$core$Char32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };

void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str) {
    self->str = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        self->str = p_str;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
    }
}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self) {
    panda$core$Bit $tmp3 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    return $tmp3;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c5;
    panda$core$Int32 result6;
    panda$core$Char32 $tmp11;
    panda$core$Char32 $tmp23;
    panda$core$Char32 $tmp40;
    panda$core$Char32 $tmp60;
    panda$core$Bit $tmp4 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    PANDA_ASSERT($tmp4.value);
    c5 = self->str->data[self->index.value];
    panda$core$Int32 $tmp7 = panda$core$Char8$convert$R$panda$core$Int32(c5);
    result6 = $tmp7;
    int64_t $tmp8 = ((int64_t) c5.value) & 255;
    bool $tmp9 = $tmp8 < 128;
    if (((panda$core$Bit) { $tmp9 }).value) {
    {
        panda$core$Int64 $tmp10 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp10;
        panda$core$Char32$init$panda$core$Int32(&$tmp11, result6);
        return $tmp11;
    }
    }
    int64_t $tmp12 = ((int64_t) c5.value) & 255;
    bool $tmp13 = $tmp12 < 192;
    if (((panda$core$Bit) { $tmp13 }).value) {
    {
        panda$core$Int64 $tmp14 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp15 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp14, self->str->_length);
        PANDA_ASSERT($tmp15.value);
        panda$core$Int32 $tmp16 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result6, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp17 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp16, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp18 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp19 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp18.value]);
        panda$core$Int32 $tmp20 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp19, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp21 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp17, $tmp20);
        result6 = $tmp21;
        panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp22;
        panda$core$Char32$init$panda$core$Int32(&$tmp23, result6);
        return $tmp23;
    }
    }
    int64_t $tmp24 = ((int64_t) c5.value) & 255;
    bool $tmp25 = $tmp24 < 224;
    if (((panda$core$Bit) { $tmp25 }).value) {
    {
        panda$core$Int64 $tmp26 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp27 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp26, self->str->_length);
        PANDA_ASSERT($tmp27.value);
        panda$core$Int32 $tmp28 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result6, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp29 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp28, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp30 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp31 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp30.value]);
        panda$core$Int32 $tmp32 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp31, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp33 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp32, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp34 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp29, $tmp33);
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp36 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp35.value]);
        panda$core$Int32 $tmp37 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp36, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp38 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp34, $tmp37);
        result6 = $tmp38;
        panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp39;
        panda$core$Char32$init$panda$core$Int32(&$tmp40, result6);
        return $tmp40;
    }
    }
    panda$core$Int64 $tmp41 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp42 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp41, self->str->_length);
    PANDA_ASSERT($tmp42.value);
    panda$core$Int32 $tmp43 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result6, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp44 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp43, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp46 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp45.value]);
    panda$core$Int32 $tmp47 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp46, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp48 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp47, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp49 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp44, $tmp48);
    panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp51 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp50.value]);
    panda$core$Int32 $tmp52 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp51, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp53 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp52, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp54 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp49, $tmp53);
    panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp56 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp55.value]);
    panda$core$Int32 $tmp57 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp56, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp58 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp54, $tmp57);
    result6 = $tmp58;
    panda$core$Int64 $tmp59 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp59;
    panda$core$Char32$init$panda$core$Int32(&$tmp60, result6);
    return $tmp60;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

