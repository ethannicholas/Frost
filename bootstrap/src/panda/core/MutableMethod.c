#include "panda/core/MutableMethod.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
panda$core$MutableMethod$class_type panda$core$MutableMethod$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableMethod$convert$R$panda$core$String, panda$core$MutableMethod$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 1863085619830966870, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 19, 4579722321777481752, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 73, -5718129434736657571, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 1863085619830966870, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q(panda$core$MutableMethod* param0, panda$core$Int8* param1, panda$core$Object* param2) {

// line 32
panda$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// line 33
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object** $tmp3 = &param0->target;
panda$core$Object* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q($tmp4);
panda$core$Object** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
panda$core$String* panda$core$MutableMethod$convert$R$panda$core$String(panda$core$MutableMethod* param0) {

// line 38
panda$core$Object** $tmp6 = &param0->target;
panda$core$Object* $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 39
panda$core$Int8** $tmp10 = &param0->pointer;
panda$core$Int8* $tmp11 = *$tmp10;
panda$core$String* $tmp12 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) $tmp11));
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s14, $tmp12);
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s16);
panda$core$Object** $tmp17 = &param0->target;
panda$core$Object* $tmp18 = *$tmp17;
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit($tmp18 != NULL);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {39};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block3:;
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp15, $tmp18);
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($11:panda.core.String)
return $tmp25;
block2:;
// line 41
panda$core$Int8** $tmp27 = &param0->pointer;
panda$core$Int8* $tmp28 = *$tmp27;
panda$core$String* $tmp29 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) $tmp28));
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s31, $tmp29);
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($48:panda.core.String)
return $tmp32;

}
void panda$core$MutableMethod$cleanup(panda$core$MutableMethod* param0) {

// line 23
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Object** $tmp34 = &param0->target;
panda$core$Object* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q($tmp35);
return;

}






