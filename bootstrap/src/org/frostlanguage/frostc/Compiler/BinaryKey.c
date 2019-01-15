#include "org/frostlanguage/frostc/Compiler/BinaryKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit org$frostlanguage$frostc$Compiler$BinaryKey$$EQ$org$frostlanguage$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim(org$frostlanguage$frostc$Compiler$BinaryKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlanguage$frostc$Compiler$BinaryKey$$EQ$org$frostlanguage$frostc$Compiler$BinaryKey$R$frost$core$Bit(p0, ((org$frostlanguage$frostc$Compiler$BinaryKey*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlanguage$frostc$Compiler$BinaryKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlanguage$frostc$Compiler$BinaryKey$$EQ$org$frostlanguage$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlanguage$frostc$Compiler$BinaryKey$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlanguage$frostc$Compiler$BinaryKey$_frost$core$Equatable, { org$frostlanguage$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64} };

static frost$core$String $s1;
org$frostlanguage$frostc$Compiler$BinaryKey$class_type org$frostlanguage$frostc$Compiler$BinaryKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frostc$Compiler$BinaryKey$_frost$collections$Key, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Compiler$BinaryKey$cleanup, org$frostlanguage$frostc$Compiler$BinaryKey$$EQ$org$frostlanguage$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim, org$frostlanguage$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64} };

typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x42\x69\x6e\x61\x72\x79\x4b\x65\x79", 43, 8707631390448142525, NULL };

void org$frostlanguage$frostc$Compiler$BinaryKey$init$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Compiler$BinaryKey* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$parser$Token$Kind param2, org$frostlanguage$frostc$ASTNode* param3) {

// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$ASTNode** $tmp2 = &param0->left;
org$frostlanguage$frostc$ASTNode* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$ASTNode** $tmp4 = &param0->left;
*$tmp4 = param1;
// line 324
org$frostlanguage$frostc$parser$Token$Kind* $tmp5 = &param0->op;
*$tmp5 = param2;
// line 325
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlanguage$frostc$ASTNode** $tmp6 = &param0->right;
org$frostlanguage$frostc$ASTNode* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlanguage$frostc$ASTNode** $tmp8 = &param0->right;
*$tmp8 = param3;
return;

}
frost$core$Bit org$frostlanguage$frostc$Compiler$BinaryKey$$EQ$org$frostlanguage$frostc$Compiler$BinaryKey$R$frost$core$Bit(org$frostlanguage$frostc$Compiler$BinaryKey* param0, org$frostlanguage$frostc$Compiler$BinaryKey* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 330
org$frostlanguage$frostc$ASTNode** $tmp9 = &param0->left;
org$frostlanguage$frostc$ASTNode* $tmp10 = *$tmp9;
org$frostlanguage$frostc$ASTNode** $tmp11 = &param1->left;
org$frostlanguage$frostc$ASTNode* $tmp12 = *$tmp11;
bool $tmp13 = $tmp10 == $tmp12;
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
org$frostlanguage$frostc$parser$Token$Kind* $tmp16 = &param0->op;
org$frostlanguage$frostc$parser$Token$Kind $tmp17 = *$tmp16;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
org$frostlanguage$frostc$parser$Token$Kind* $tmp19 = &param1->op;
org$frostlanguage$frostc$parser$Token$Kind $tmp20 = *$tmp19;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
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
// unreffing REF($11:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
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
org$frostlanguage$frostc$ASTNode** $tmp28 = &param0->right;
org$frostlanguage$frostc$ASTNode* $tmp29 = *$tmp28;
org$frostlanguage$frostc$ASTNode** $tmp30 = &param1->right;
org$frostlanguage$frostc$ASTNode* $tmp31 = *$tmp30;
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
frost$core$Int64 org$frostlanguage$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Compiler$BinaryKey* param0) {

// line 335
org$frostlanguage$frostc$ASTNode** $tmp35 = &param0->left;
org$frostlanguage$frostc$ASTNode* $tmp36 = *$tmp35;
frost$core$Int64 $tmp37;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp37, ((frost$core$Object*) $tmp36));
org$frostlanguage$frostc$ASTNode** $tmp38 = &param0->right;
org$frostlanguage$frostc$ASTNode* $tmp39 = *$tmp38;
frost$core$Int64 $tmp40;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp40, ((frost$core$Object*) $tmp39));
frost$core$Int64 $tmp41 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp37, $tmp40);
return $tmp41;

}
void org$frostlanguage$frostc$Compiler$BinaryKey$cleanup(org$frostlanguage$frostc$Compiler$BinaryKey* param0) {

// line 315
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$ASTNode** $tmp42 = &param0->left;
org$frostlanguage$frostc$ASTNode* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlanguage$frostc$ASTNode** $tmp44 = &param0->right;
org$frostlanguage$frostc$ASTNode* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
return;

}

