#include "panda/unsafe/UnsafeMessageQueue/Message.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
panda$unsafe$UnsafeMessageQueue$Message$class_type panda$unsafe$UnsafeMessageQueue$Message$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$unsafe$UnsafeMessageQueue$Message$convert$R$panda$core$String, panda$unsafe$UnsafeMessageQueue$Message$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 39, 2090529901530042854, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 138, 8904607612214751703, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$unsafe$UnsafeMessageQueue$Message$init$panda$unsafe$UnsafeMessageQueue$Message$T(panda$unsafe$UnsafeMessageQueue$Message* param0, panda$core$Object* param1) {

// line 13
panda$core$Panda$ref$panda$core$Object$Q(param1);
panda$core$Object** $tmp2 = &param0->payload;
panda$core$Object* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q($tmp3);
panda$core$Object** $tmp4 = &param0->payload;
*$tmp4 = param1;
return;

}
panda$core$String* panda$unsafe$UnsafeMessageQueue$Message$convert$R$panda$core$String(panda$unsafe$UnsafeMessageQueue$Message* param0) {

// line 18
panda$unsafe$UnsafeMessageQueue$Message** $tmp5 = &param0->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp6 = *$tmp5;
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 19
panda$core$Object** $tmp9 = &param0->payload;
panda$core$Object* $tmp10 = *$tmp9;
panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s12, $tmp10);
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s14);
panda$unsafe$UnsafeMessageQueue$Message** $tmp15 = &param0->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp16 = *$tmp15;
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {19};
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
// line 21
panda$core$Object** $tmp25 = &param0->payload;
panda$core$Object* $tmp26 = *$tmp25;
panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, $tmp26);
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s30);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($48:panda.core.String)
return $tmp29;

}
void panda$unsafe$UnsafeMessageQueue$Message$cleanup(panda$unsafe$UnsafeMessageQueue$Message* param0) {

// line 7
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Object** $tmp31 = &param0->payload;
panda$core$Object* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q($tmp32);
panda$unsafe$UnsafeMessageQueue$Message** $tmp33 = &param0->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp34 = *$tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
return;

}






