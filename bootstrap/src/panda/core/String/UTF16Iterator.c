#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char16.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt16.h"
__attribute__((weak)) panda$core$Object* panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim(panda$core$String$UTF16Iterator* p0) {
    panda$core$Char16 result = panda$core$String$UTF16Iterator$next$R$panda$core$Char16(p0);

    panda$core$Char16$wrapper* $tmp2;
    $tmp2 = (panda$core$Char16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Char16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF16Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF16Iterator$class_type panda$core$String$UTF16Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF16Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF16Iterator$cleanup, panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim} };

typedef panda$core$Bit (*$fn14)(panda$core$String$UTF16Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -7181782867719721369, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 90, 4917415208278291084, NULL };

void panda$core$String$UTF16Iterator$init$panda$core$String(panda$core$String$UTF16Iterator* self, panda$core$String* p_str) {
    panda$core$Int64 $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    panda$core$Bit $tmp6;
    self->str = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->index = $tmp3;
    {
        $tmp4 = self->str;
        $tmp5 = p_str;
        self->str = $tmp5;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    }
    panda$core$Bit$init$builtin_bit(&$tmp6, false);
    if ($tmp6.value) goto $l7; else goto $l8;
    $l8:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s9, (panda$core$Int64) { 137 }, &$s10);
    abort();
    $l7:;
}
panda$core$Bit panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF16Iterator* self) {
    panda$core$Bit $returnValue11;
    panda$core$Bit $tmp12 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    $returnValue11 = $tmp12;
    return $returnValue11;
}
panda$core$Char16 panda$core$String$UTF16Iterator$next$R$panda$core$Char16(panda$core$String$UTF16Iterator* self) {
    panda$core$String$UTF16Iterator* $tmp21;
    panda$core$Int64 $tmp22;
    panda$core$Char16 $returnValue24;
    panda$core$Char16 $tmp25;
    panda$core$UInt16 $tmp26;
    panda$core$Bit $tmp15 = (($fn14) self->$class->vtable[2])(self);
    panda$core$Bit $tmp16 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp15);
    if ($tmp16.value) goto $l17; else goto $l18;
    $l18:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s19, (panda$core$Int64) { 146 }, &$s20);
    abort();
    $l17:;
    $tmp21 = self;
    panda$core$Int64$init$builtin_int64(&$tmp22, 1);
    panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp21->index, $tmp22);
    $tmp21->index = $tmp23;
    panda$core$UInt16$init$builtin_uint16(&$tmp26, 1);
    panda$core$Char16$init$panda$core$UInt16(&$tmp25, $tmp26);
    $returnValue24 = $tmp25;
    return $returnValue24;
}
void panda$core$String$UTF16Iterator$cleanup(panda$core$String$UTF16Iterator* self) {
    int $tmp30;
    {
    }
    $tmp30 = -1;
    goto $l28;
    $l28:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp30) {
        case -1: goto $l31;
    }
    $l31:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->str));
}

