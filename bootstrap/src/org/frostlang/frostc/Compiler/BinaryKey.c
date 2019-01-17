#include "org/frostlang/frostc/Compiler/BinaryKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$BinaryKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$BinaryKey*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$BinaryKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$BinaryKey$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Compiler$BinaryKey$_frost$core$Equatable, { org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$BinaryKey$class_type org$frostlang$frostc$Compiler$BinaryKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$BinaryKey$_frost$collections$Key, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$Compiler$BinaryKey$cleanup, org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64} };

typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x42\x69\x6e\x61\x72\x79\x4b\x65\x79", 39, 1341198773752392507, NULL };

void org$frostlang$frostc$Compiler$BinaryKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler$BinaryKey* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$parser$Token$Kind param2, org$frostlang$frostc$ASTNode* param3) {

// line 325
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ASTNode** $tmp2 = &param0->left;
org$frostlang$frostc$ASTNode* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$ASTNode** $tmp4 = &param0->left;
*$tmp4 = param1;
// line 326
org$frostlang$frostc$parser$Token$Kind* $tmp5 = &param0->op;
*$tmp5 = param2;
// line 327
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp6 = &param0->right;
org$frostlang$frostc$ASTNode* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$ASTNode** $tmp8 = &param0->right;
*$tmp8 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit(org$frostlang$frostc$Compiler$BinaryKey* param0, org$frostlang$frostc$Compiler$BinaryKey* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 332
org$frostlang$frostc$ASTNode** $tmp9 = &param0->left;
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
org$frostlang$frostc$ASTNode** $tmp11 = &param1->left;
org$frostlang$frostc$ASTNode* $tmp12 = *$tmp11;
bool $tmp13 = $tmp10 == $tmp12;
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
org$frostlang$frostc$parser$Token$Kind* $tmp16 = &param0->op;
org$frostlang$frostc$parser$Token$Kind $tmp17 = *$tmp16;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
org$frostlang$frostc$parser$Token$Kind* $tmp19 = &param1->op;
org$frostlang$frostc$parser$Token$Kind $tmp20 = *$tmp19;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp21->value = $tmp20;
ITable* $tmp22 = ((frost$core$Equatable*) $tmp18)->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$core$Bit $tmp25 = $tmp23(((frost$core$Equatable*) $tmp18), ((frost$core$Equatable*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp21)));
// unreffing REF($15:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp18)));
// unreffing REF($11:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
*(&local1) = $tmp25;
goto block3;
block2:;
*(&local1) = $tmp14;
goto block3;
block3:;
frost$core$Bit $tmp26 = *(&local1);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode** $tmp28 = &param0->right;
org$frostlang$frostc$ASTNode* $tmp29 = *$tmp28;
org$frostlang$frostc$ASTNode** $tmp30 = &param1->right;
org$frostlang$frostc$ASTNode* $tmp31 = *$tmp30;
bool $tmp32 = $tmp29 == $tmp31;
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit($tmp32);
*(&local0) = $tmp33;
goto block6;
block5:;
*(&local0) = $tmp26;
goto block6;
block6:;
frost$core$Bit $tmp34 = *(&local0);
return $tmp34;

}
frost$core$Int64 org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64(org$frostlang$frostc$Compiler$BinaryKey* param0) {

// line 337
org$frostlang$frostc$ASTNode** $tmp35 = &param0->left;
org$frostlang$frostc$ASTNode* $tmp36 = *$tmp35;
frost$core$Int64 $tmp37;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp37, ((frost$core$Object*) $tmp36));
org$frostlang$frostc$ASTNode** $tmp38 = &param0->right;
org$frostlang$frostc$ASTNode* $tmp39 = *$tmp38;
frost$core$Int64 $tmp40;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp40, ((frost$core$Object*) $tmp39));
frost$core$Int64 $tmp41 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp37, $tmp40);
return $tmp41;

}
void org$frostlang$frostc$Compiler$BinaryKey$cleanup(org$frostlang$frostc$Compiler$BinaryKey* param0) {

// line 317
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$ASTNode** $tmp42 = &param0->left;
org$frostlang$frostc$ASTNode* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$ASTNode** $tmp44 = &param0->right;
org$frostlang$frostc$ASTNode* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
return;

}

