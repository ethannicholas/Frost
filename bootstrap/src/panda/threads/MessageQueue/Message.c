#include "panda/threads/MessageQueue/Message.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$String* panda$threads$MessageQueue$Message$convert$R$panda$core$String$shim(panda$threads$MessageQueue$Message* p0) {
    panda$core$String* result = panda$threads$MessageQueue$Message$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$threads$MessageQueue$Message$cleanup$shim(panda$threads$MessageQueue$Message* p0) {
    panda$threads$MessageQueue$Message$cleanup(p0);

}

static panda$core$String $s1;
panda$threads$MessageQueue$Message$class_type panda$threads$MessageQueue$Message$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$threads$MessageQueue$Message$convert$R$panda$core$String$shim, panda$threads$MessageQueue$Message$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 34, 6517097158175616105, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 128, 3581949847500229029, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T(panda$threads$MessageQueue$Message* param0, panda$core$Immutable* param1) {

// line 19
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$Immutable** $tmp2 = &param0->payload;
panda$core$Immutable* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Immutable** $tmp4 = &param0->payload;
*$tmp4 = param1;
return;

}
panda$core$String* panda$threads$MessageQueue$Message$convert$R$panda$core$String(panda$threads$MessageQueue$Message* param0) {

// line 24
panda$threads$MessageQueue$Message** $tmp5 = &param0->next;
panda$threads$MessageQueue$Message* $tmp6 = *$tmp5;
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 25
panda$core$Immutable** $tmp9 = &param0->payload;
panda$core$Immutable* $tmp10 = *$tmp9;
panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s12, ((panda$core$Object*) $tmp10));
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s14);
panda$threads$MessageQueue$Message** $tmp15 = &param0->next;
panda$threads$MessageQueue$Message* $tmp16 = *$tmp15;
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {25};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block3:;
panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp13, ((panda$core$Object*) $tmp16));
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s24);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($27:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($13:panda.core.String)
return $tmp23;
block2:;
// line 27
panda$core$Immutable** $tmp25 = &param0->payload;
panda$core$Immutable* $tmp26 = *$tmp25;
panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) $tmp26));
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s30);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($48:panda.core.String)
return $tmp29;

}
void panda$threads$MessageQueue$Message$cleanup(panda$threads$MessageQueue$Message* param0) {

// line 13
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$Immutable** $tmp31 = &param0->payload;
panda$core$Immutable* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$threads$MessageQueue$Message** $tmp33 = &param0->next;
panda$threads$MessageQueue$Message* $tmp34 = *$tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
return;

}






