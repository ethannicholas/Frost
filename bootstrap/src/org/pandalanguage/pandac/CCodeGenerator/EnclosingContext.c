#include "org/pandalanguage/pandac/CCodeGenerator/EnclosingContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Map.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class_type org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 56, 6543098344347178708, NULL };

void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* param0) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$collections$Map* local4 = NULL;
panda$core$String* local5 = NULL;
// line 12
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
panda$core$String** $tmp7 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp8 = *$tmp7;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
*(&local0) = $tmp8;
panda$core$String** $tmp10 = (panda$core$String**) (param0->$data + 8);
panda$core$String* $tmp11 = *$tmp10;
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp12 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local1) = $tmp11;
panda$core$String** $tmp13 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp14 = *$tmp13;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp15 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
*(&local2) = $tmp14;
// line 1
panda$core$String* $tmp16 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// line 1
panda$core$String* $tmp17 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// line 1
panda$core$String* $tmp18 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$String* $tmp19 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing _f2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp20 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing _f1
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp21 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {1};
panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block1;
block4:;
panda$core$String** $tmp25 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp26 = *$tmp25;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp27 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
*(&local3) = $tmp26;
panda$collections$Map** $tmp28 = (panda$collections$Map**) (param0->$data + 8);
panda$collections$Map* $tmp29 = *$tmp28;
*(&local4) = ((panda$collections$Map*) NULL);
panda$collections$Map* $tmp30 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local4) = $tmp29;
panda$core$String** $tmp31 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp32 = *$tmp31;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp33 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
*(&local5) = $tmp32;
// line 1
panda$core$String* $tmp34 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// line 1
panda$collections$Map* $tmp35 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// line 1
panda$core$String* $tmp36 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$String* $tmp37 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing _f2
*(&local5) = ((panda$core$String*) NULL);
panda$collections$Map* $tmp38 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing _f1
*(&local4) = ((panda$collections$Map*) NULL);
panda$core$String* $tmp39 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing _f0
*(&local3) = ((panda$core$String*) NULL);
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* param0, panda$core$Int64 param1, panda$core$String* param2, panda$core$String* param3, panda$core$String* param4) {

// line 12
panda$core$Int64* $tmp40 = &param0->$rawValue;
*$tmp40 = param1;
// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp41 = (panda$core$String**) (param0->$data + 0);
*$tmp41 = param2;
// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp42 = (panda$core$String**) (param0->$data + 8);
*$tmp42 = param3;
// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp43 = (panda$core$String**) (param0->$data + 16);
*$tmp43 = param4;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Corg$pandalanguage$pandac$Pair$LTpanda$core$Int64$Cpanda$core$String$GT$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* param0, panda$core$Int64 param1, panda$core$String* param2, panda$collections$Map* param3, panda$core$String* param4) {

// line 12
panda$core$Int64* $tmp44 = &param0->$rawValue;
*$tmp44 = param1;
// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp45 = (panda$core$String**) (param0->$data + 0);
*$tmp45 = param2;
// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$Map** $tmp46 = (panda$collections$Map**) (param0->$data + 8);
*$tmp46 = param3;
// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp47 = (panda$core$String**) (param0->$data + 16);
*$tmp47 = param4;
return;

}

