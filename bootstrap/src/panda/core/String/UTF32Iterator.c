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
        panda$core$String* $tmp3 = self->str;
        panda$core$String* $tmp4 = p_str;
        self->str = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self) {
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    panda$core$Bit $tmp5 = $tmp6;
    return $tmp5;
}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self) {
    panda$core$Char8 c8;
    panda$core$Int32 result9;
    panda$core$Char32 $tmp15;
    panda$core$Char32 $tmp28;
    panda$core$Char32 $tmp46;
    panda$core$Char32 $tmp67;
    panda$core$Bit $tmp7 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    PANDA_ASSERT($tmp7.value);
    c8 = self->str->data[self->index.value];
    panda$core$Int32 $tmp10 = panda$core$Char8$convert$R$panda$core$Int32(c8);
    result9 = $tmp10;
    int64_t $tmp11 = ((int64_t) c8.value) & 255;
    bool $tmp12 = $tmp11 < 128;
    if (((panda$core$Bit) { $tmp12 }).value) {
    {
        panda$core$Int64 $tmp13 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp13;
        panda$core$Char32$init$panda$core$Int32(&$tmp15, result9);
        panda$core$Char32 $tmp14 = $tmp15;
        return $tmp14;
    }
    }
    int64_t $tmp16 = ((int64_t) c8.value) & 255;
    bool $tmp17 = $tmp16 < 192;
    if (((panda$core$Bit) { $tmp17 }).value) {
    {
        panda$core$Int64 $tmp18 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp19 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp18, self->str->_length);
        PANDA_ASSERT($tmp19.value);
        panda$core$Int32 $tmp20 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result9, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp21 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp20, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp23 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp22.value]);
        panda$core$Int32 $tmp24 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp23, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp25 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp21, $tmp24);
        result9 = $tmp25;
        panda$core$Int64 $tmp26 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        self->index = $tmp26;
        panda$core$Char32$init$panda$core$Int32(&$tmp28, result9);
        panda$core$Char32 $tmp27 = $tmp28;
        return $tmp27;
    }
    }
    int64_t $tmp29 = ((int64_t) c8.value) & 255;
    bool $tmp30 = $tmp29 < 224;
    if (((panda$core$Bit) { $tmp30 }).value) {
    {
        panda$core$Int64 $tmp31 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp32 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp31, self->str->_length);
        PANDA_ASSERT($tmp32.value);
        panda$core$Int32 $tmp33 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result9, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp34 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp33, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp36 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp35.value]);
        panda$core$Int32 $tmp37 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp36, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp38 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp37, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp39 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp34, $tmp38);
        panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp41 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp40.value]);
        panda$core$Int32 $tmp42 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp41, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp43 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp39, $tmp42);
        result9 = $tmp43;
        panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
        self->index = $tmp44;
        panda$core$Char32$init$panda$core$Int32(&$tmp46, result9);
        panda$core$Char32 $tmp45 = $tmp46;
        return $tmp45;
    }
    }
    panda$core$Int64 $tmp47 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp48 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp47, self->str->_length);
    PANDA_ASSERT($tmp48.value);
    panda$core$Int32 $tmp49 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result9, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp50 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp49, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp52 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp51.value]);
    panda$core$Int32 $tmp53 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp52, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp54 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp53, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp55 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp50, $tmp54);
    panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp57 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp56.value]);
    panda$core$Int32 $tmp58 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp57, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp59 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp58, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp60 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp55, $tmp59);
    panda$core$Int64 $tmp61 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp62 = panda$core$Char8$convert$R$panda$core$Int32(self->str->data[$tmp61.value]);
    panda$core$Int32 $tmp63 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp62, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp64 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp60, $tmp63);
    result9 = $tmp64;
    panda$core$Int64 $tmp65 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 4 }));
    self->index = $tmp65;
    panda$core$Char32$init$panda$core$Int32(&$tmp67, result9);
    panda$core$Char32 $tmp66 = $tmp67;
    return $tmp66;
}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

