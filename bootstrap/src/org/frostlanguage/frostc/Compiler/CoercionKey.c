#include "org/frostlanguage/frostc/Compiler/CoercionKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$Compiler$CoercionKey$$EQ$org$frostlanguage$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim(org$frostlanguage$frostc$Compiler$CoercionKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$Compiler$CoercionKey$$EQ$org$frostlanguage$frostc$Compiler$CoercionKey$R$frost$core$Bit(p0, ((org$frostlanguage$frostc$Compiler$CoercionKey*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$Compiler$CoercionKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Compiler$CoercionKey$$EQ$org$frostlanguage$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlanguage$frostc$Compiler$CoercionKey$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlanguage$frostc$Compiler$CoercionKey$_frost$core$Equatable, { org$frostlanguage$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int64} };

static frost$core$String $s1;
org$frostlanguage$frostc$Compiler$CoercionKey$class_type org$frostlanguage$frostc$Compiler$CoercionKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frostc$Compiler$CoercionKey$_frost$collections$Key, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Compiler$CoercionKey$cleanup, org$frostlanguage$frostc$Compiler$CoercionKey$$EQ$org$frostlanguage$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim, org$frostlanguage$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int64} };

typedef frost$core$Int64 (*$fn28)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x6f\x65\x72\x63\x69\x6f\x6e\x4b\x65\x79", 45, -6723435849346202522, NULL };

void org$frostlanguage$frostc$Compiler$CoercionKey$init$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Compiler$CoercionKey* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$Type* param2) {

// line 300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$ASTNode** $tmp2 = &param0->expr;
org$frostlanguage$frostc$ASTNode* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$ASTNode** $tmp4 = &param0->expr;
*$tmp4 = param1;
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlanguage$frostc$Type** $tmp5 = &param0->target;
org$frostlanguage$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlanguage$frostc$Type** $tmp7 = &param0->target;
*$tmp7 = param2;
return;

}
frost$core$Bit org$frostlanguage$frostc$Compiler$CoercionKey$$EQ$org$frostlanguage$frostc$Compiler$CoercionKey$R$frost$core$Bit(org$frostlanguage$frostc$Compiler$CoercionKey* param0, org$frostlanguage$frostc$Compiler$CoercionKey* param1) {

frost$core$Bit local0;
// line 306
org$frostlanguage$frostc$ASTNode** $tmp8 = &param0->expr;
org$frostlanguage$frostc$ASTNode* $tmp9 = *$tmp8;
org$frostlanguage$frostc$ASTNode** $tmp10 = &param1->expr;
org$frostlanguage$frostc$ASTNode* $tmp11 = *$tmp10;
bool $tmp12 = $tmp9 == $tmp11;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block1:;
org$frostlanguage$frostc$Type** $tmp15 = &param0->target;
org$frostlanguage$frostc$Type* $tmp16 = *$tmp15;
org$frostlanguage$frostc$Type** $tmp17 = &param1->target;
org$frostlanguage$frostc$Type* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp16, $tmp18);
*(&local0) = $tmp19;
goto block3;
block2:;
*(&local0) = $tmp13;
goto block3;
block3:;
frost$core$Bit $tmp20 = *(&local0);
return $tmp20;

}
frost$core$Int64 org$frostlanguage$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Compiler$CoercionKey* param0) {

// line 311
org$frostlanguage$frostc$ASTNode** $tmp21 = &param0->expr;
org$frostlanguage$frostc$ASTNode* $tmp22 = *$tmp21;
frost$core$Int64 $tmp23;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp23, ((frost$core$Object*) $tmp22));
org$frostlanguage$frostc$Type** $tmp24 = &param0->target;
org$frostlanguage$frostc$Type* $tmp25 = *$tmp24;
ITable* $tmp26 = ((frost$collections$Key*) $tmp25)->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$core$Int64 $tmp29 = $tmp27(((frost$collections$Key*) $tmp25));
frost$core$Int64 $tmp30 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp23, $tmp29);
return $tmp30;

}
void org$frostlanguage$frostc$Compiler$CoercionKey$cleanup(org$frostlanguage$frostc$Compiler$CoercionKey* param0) {

// line 294
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$ASTNode** $tmp31 = &param0->expr;
org$frostlanguage$frostc$ASTNode* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlanguage$frostc$Type** $tmp33 = &param0->target;
org$frostlanguage$frostc$Type* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
return;

}

