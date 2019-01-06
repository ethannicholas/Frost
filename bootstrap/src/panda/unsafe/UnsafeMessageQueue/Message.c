#include "panda/unsafe/UnsafeMessageQueue/Message.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
panda$unsafe$UnsafeMessageQueue$Message$class_type panda$unsafe$UnsafeMessageQueue$Message$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$unsafe$UnsafeMessageQueue$Message$convert$R$panda$core$String, panda$unsafe$UnsafeMessageQueue$Message$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 39, 2090529901530042854, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

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
panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp13, ((panda$core$Object*) $tmp16));
panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, &$s19);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($13:panda.core.String)
return $tmp18;
block2:;
// line 21
panda$core$Object** $tmp20 = &param0->payload;
panda$core$Object* $tmp21 = *$tmp20;
panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s23, $tmp21);
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s25);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($41:panda.core.String)
return $tmp24;

}
void panda$unsafe$UnsafeMessageQueue$Message$cleanup(panda$unsafe$UnsafeMessageQueue$Message* param0) {

// line 7
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Object** $tmp26 = &param0->payload;
panda$core$Object* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q($tmp27);
panda$unsafe$UnsafeMessageQueue$Message** $tmp28 = &param0->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
return;

}






