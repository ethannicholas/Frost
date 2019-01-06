#include "org/pandalanguage/pandac/Compiler/CoercionKey.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Compiler$CoercionKey$$EQ$org$pandalanguage$pandac$Compiler$CoercionKey$R$panda$core$Bit$shim(org$pandalanguage$pandac$Compiler$CoercionKey* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Compiler$CoercionKey$$EQ$org$pandalanguage$pandac$Compiler$CoercionKey$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Compiler$CoercionKey*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$CoercionKey$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Compiler$CoercionKey$get_hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Compiler$CoercionKey$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Compiler$CoercionKey$_panda$collections$Key, { org$pandalanguage$pandac$Compiler$CoercionKey$$EQ$org$pandalanguage$pandac$Compiler$CoercionKey$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$CoercionKey$class_type org$pandalanguage$pandac$Compiler$CoercionKey$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$CoercionKey$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$CoercionKey$cleanup, org$pandalanguage$pandac$Compiler$CoercionKey$$EQ$org$pandalanguage$pandac$Compiler$CoercionKey$R$panda$core$Bit$shim, org$pandalanguage$pandac$Compiler$CoercionKey$get_hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn28)(panda$collections$Key*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x6f\x65\x72\x63\x69\x6f\x6e\x4b\x65\x79", 45, -765441630454664574, NULL };

void org$pandalanguage$pandac$Compiler$CoercionKey$init$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$CoercionKey* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$Type* param2) {

// line 271
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$ASTNode** $tmp2 = &param0->expr;
org$pandalanguage$pandac$ASTNode* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$ASTNode** $tmp4 = &param0->expr;
*$tmp4 = param1;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp5 = &param0->target;
org$pandalanguage$pandac$Type* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
org$pandalanguage$pandac$Type** $tmp7 = &param0->target;
*$tmp7 = param2;
return;

}
panda$core$Bit org$pandalanguage$pandac$Compiler$CoercionKey$$EQ$org$pandalanguage$pandac$Compiler$CoercionKey$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$CoercionKey* param0, org$pandalanguage$pandac$Compiler$CoercionKey* param1) {

panda$core$Bit local0;
// line 277
org$pandalanguage$pandac$ASTNode** $tmp8 = &param0->expr;
org$pandalanguage$pandac$ASTNode* $tmp9 = *$tmp8;
org$pandalanguage$pandac$ASTNode** $tmp10 = &param1->expr;
org$pandalanguage$pandac$ASTNode* $tmp11 = *$tmp10;
bool $tmp12 = $tmp9 == $tmp11;
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit($tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type** $tmp15 = &param0->target;
org$pandalanguage$pandac$Type* $tmp16 = *$tmp15;
org$pandalanguage$pandac$Type** $tmp17 = &param1->target;
org$pandalanguage$pandac$Type* $tmp18 = *$tmp17;
panda$core$Bit $tmp19 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp16, $tmp18);
*(&local0) = $tmp19;
goto block3;
block2:;
*(&local0) = $tmp13;
goto block3;
block3:;
panda$core$Bit $tmp20 = *(&local0);
return $tmp20;

}
panda$core$Int64 org$pandalanguage$pandac$Compiler$CoercionKey$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Compiler$CoercionKey* param0) {

// line 282
org$pandalanguage$pandac$ASTNode** $tmp21 = &param0->expr;
org$pandalanguage$pandac$ASTNode* $tmp22 = *$tmp21;
panda$core$Int64 $tmp23;
panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp23, ((panda$core$Object*) $tmp22));
org$pandalanguage$pandac$Type** $tmp24 = &param0->target;
org$pandalanguage$pandac$Type* $tmp25 = *$tmp24;
ITable* $tmp26 = ((panda$collections$Key*) $tmp25)->$class->itable;
while ($tmp26->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
panda$core$Int64 $tmp29 = $tmp27(((panda$collections$Key*) $tmp25));
panda$core$Int64 $tmp30 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp23, $tmp29);
return $tmp30;

}
void org$pandalanguage$pandac$Compiler$CoercionKey$cleanup(org$pandalanguage$pandac$Compiler$CoercionKey* param0) {

// line 265
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$ASTNode** $tmp31 = &param0->expr;
org$pandalanguage$pandac$ASTNode* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
org$pandalanguage$pandac$Type** $tmp33 = &param0->target;
org$pandalanguage$pandac$Type* $tmp34 = *$tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
return;

}

