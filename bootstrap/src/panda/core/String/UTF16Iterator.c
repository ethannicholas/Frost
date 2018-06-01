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
panda$core$Object* panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim(panda$core$String$UTF16Iterator* p0) {
    panda$core$Char16 result = panda$core$String$UTF16Iterator$next$R$panda$core$Char16(p0);

    panda$core$Char16$wrapper* $tmp2;
    $tmp2 = (panda$core$Char16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Char16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF16Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF16Iterator$class_type panda$core$String$UTF16Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF16Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF16Iterator$cleanup, panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -7181782867719721369, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };

void panda$core$String$UTF16Iterator$init$panda$core$String(panda$core$String$UTF16Iterator* self, panda$core$String* p_str) {
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    self->str = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        $tmp3 = self->str;
        $tmp4 = p_str;
        self->str = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    if (((panda$core$Bit) { false }).value) goto $l5; else goto $l6;
    $l6:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, (panda$core$Int64) { 154 }, &$s8);
    abort();
    $l5:;
}
panda$core$Bit panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF16Iterator* self) {
    panda$core$Bit $returnValue9;
    panda$core$Bit $tmp10 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    $returnValue9 = $tmp10;
    return $returnValue9;
}
panda$core$Char16 panda$core$String$UTF16Iterator$next$R$panda$core$Char16(panda$core$String$UTF16Iterator* self) {
    panda$core$Char16 $returnValue13;
    panda$core$Char16 $tmp14;
    panda$core$Int64 $tmp12 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp12;
    panda$core$Char16$init$panda$core$UInt16(&$tmp14, ((panda$core$UInt16) { 1 }));
    $returnValue13 = $tmp14;
    return $returnValue13;
}
void panda$core$String$UTF16Iterator$cleanup(panda$core$String$UTF16Iterator* self) {
    int $tmp18;
    {
    }
    $tmp18 = -1;
    goto $l16;
    $l16:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp18) {
        case -1: goto $l19;
    }
    $l19:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

