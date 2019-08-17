#include "org/frostlang/frostc/Compiler/CoercionKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$CoercionKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$CoercionKey*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$CoercionKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$CoercionKey$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Compiler$CoercionKey$_frost$core$Equatable, { org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$CoercionKey$class_type org$frostlang$frostc$Compiler$CoercionKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$CoercionKey$_frost$collections$Key, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$CoercionKey$cleanup, org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn44)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x6f\x65\x72\x63\x69\x6f\x6e\x4b\x65\x79", 41, -6870882282179802560, NULL };

void org$frostlang$frostc$Compiler$CoercionKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler$CoercionKey* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:346
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ASTNode** $tmp2 = &param0->expr;
org$frostlang$frostc$ASTNode* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$ASTNode** $tmp4 = &param0->expr;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp5 = &param0->target;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Type** $tmp7 = &param0->target;
*$tmp7 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit(org$frostlang$frostc$Compiler$CoercionKey* param0, org$frostlang$frostc$Compiler$CoercionKey* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:352
org$frostlang$frostc$ASTNode** $tmp8 = &param0->expr;
org$frostlang$frostc$ASTNode* $tmp9 = *$tmp8;
org$frostlang$frostc$ASTNode** $tmp10 = &param1->expr;
org$frostlang$frostc$ASTNode* $tmp11 = *$tmp10;
bool $tmp12 = $tmp9 == $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type** $tmp15 = &param0->target;
org$frostlang$frostc$Type* $tmp16 = *$tmp15;
org$frostlang$frostc$Type** $tmp17 = &param1->target;
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Compiler.frost:352:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp19 = &((org$frostlang$frostc$Symbol*) $tmp16)->name;
frost$core$String* $tmp20 = *$tmp19;
frost$core$String** $tmp21 = &((org$frostlang$frostc$Symbol*) $tmp18)->name;
frost$core$String* $tmp22 = *$tmp21;
frost$core$Bit $tmp23 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp20, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp25 = &$tmp16->typeKind;
org$frostlang$frostc$Type$Kind $tmp26 = *$tmp25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp27;
$tmp27 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp27->value = $tmp26;
org$frostlang$frostc$Type$Kind* $tmp28 = &$tmp18->typeKind;
org$frostlang$frostc$Type$Kind $tmp29 = *$tmp28;
org$frostlang$frostc$Type$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp30->value = $tmp29;
ITable* $tmp31 = ((frost$core$Equatable*) $tmp27)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Bit $tmp34 = $tmp32(((frost$core$Equatable*) $tmp27), ((frost$core$Equatable*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp27)));
*(&local1) = $tmp34;
goto block7;
block6:;
*(&local1) = $tmp23;
goto block7;
block7:;
frost$core$Bit $tmp35 = *(&local1);
*(&local0) = $tmp35;
goto block3;
block2:;
*(&local0) = $tmp13;
goto block3;
block3:;
frost$core$Bit $tmp36 = *(&local0);
return $tmp36;

}
frost$core$Int org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$CoercionKey* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:357
org$frostlang$frostc$ASTNode** $tmp37 = &param0->expr;
org$frostlang$frostc$ASTNode* $tmp38 = *$tmp37;
frost$core$Int $tmp39;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp39, ((frost$core$Object*) $tmp38));
org$frostlang$frostc$Type** $tmp40 = &param0->target;
org$frostlang$frostc$Type* $tmp41 = *$tmp40;
ITable* $tmp42 = ((frost$collections$Key*) $tmp41)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Int $tmp45 = $tmp43(((frost$collections$Key*) $tmp41));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:357:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp46 = $tmp39.value;
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46 ^ $tmp47;
frost$core$Int $tmp49 = (frost$core$Int) {$tmp48};
return $tmp49;

}
void org$frostlang$frostc$Compiler$CoercionKey$cleanup(org$frostlang$frostc$Compiler$CoercionKey* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:340
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$ASTNode** $tmp50 = &param0->expr;
org$frostlang$frostc$ASTNode* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
org$frostlang$frostc$Type** $tmp52 = &param0->target;
org$frostlang$frostc$Type* $tmp53 = *$tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
return;

}

