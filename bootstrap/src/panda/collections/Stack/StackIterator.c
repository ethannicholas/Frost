#include "panda/collections/Stack/StackIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim(panda$collections$Stack$StackIterator* p0) {
    panda$core$Object* result = panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Stack$StackIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$StackIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Stack$StackIterator$cleanup, panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 4888538230325112768, NULL };

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* self, panda$collections$Stack* p_stack) {
    panda$core$Int64 $tmp2;
    panda$collections$Stack* $tmp3;
    panda$collections$Stack* $tmp4;
    self->stack = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->index = $tmp2;
    {
        $tmp3 = self->stack;
        $tmp4 = p_stack;
        self->stack = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* self) {
    panda$core$Bit $returnValue5;
    panda$core$Int64 $tmp6 = panda$collections$Stack$get_count$R$panda$core$Int64(self->stack);
    panda$core$Bit $tmp7 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp6);
    $returnValue5 = $tmp7;
    return $returnValue5;
}
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* self) {
    panda$core$Object* result12 = NULL;
    panda$core$Object* $tmp13;
    panda$core$Object* $tmp14;
    panda$core$Int64 $tmp16;
    panda$core$Object* $returnValue18;
    panda$core$Object* $tmp19;
    int $tmp11;
    {
        panda$core$Object* $tmp15 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, self->index);
        $tmp14 = $tmp15;
        $tmp13 = $tmp14;
        result12 = $tmp13;
        panda$core$Panda$ref$panda$core$Object($tmp13);
        panda$core$Panda$unref$panda$core$Object($tmp14);
        panda$core$Int64$init$builtin_int64(&$tmp16, 1);
        panda$core$Int64 $tmp17 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp16);
        self->index = $tmp17;
        $tmp19 = result12;
        $returnValue18 = $tmp19;
        panda$core$Panda$ref$panda$core$Object($tmp19);
        $tmp11 = 0;
        goto $l9;
        $l20:;
        return $returnValue18;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(result12);
    result12 = NULL;
    switch ($tmp11) {
        case 0: goto $l20;
    }
    $l22:;
    abort();
}
void panda$collections$Stack$StackIterator$cleanup(panda$collections$Stack$StackIterator* self) {
    int $tmp25;
    {
    }
    $tmp25 = -1;
    goto $l23;
    $l23:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp25) {
        case -1: goto $l26;
    }
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
}





