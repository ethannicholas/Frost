#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Call.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$IndexLValue$class_type org$frostlang$frostc$lvalue$IndexLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$IndexLValue$cleanup, org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$Int64 (*$fn38)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn48)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn52)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn64)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn101)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn120)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn155)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn180)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn187)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn248)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn267)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn285)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, -2527705490156128088, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, -3727949445279175429, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ASTNode* param4) {

// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 31
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp6 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp9 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$IndexLValue* param0) {

frost$collections$CollectionView* local0 = NULL;
// line 38
org$frostlang$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp13 = *$tmp12;
org$frostlang$frostc$ASTNode* $tmp14 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {5};
org$frostlang$frostc$Position* $tmp16 = &param0->position;
org$frostlang$frostc$Position $tmp17 = *$tmp16;
org$frostlang$frostc$ASTNode* $tmp18 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp19 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp20 = &param0->position;
org$frostlang$frostc$Position $tmp21 = *$tmp20;
org$frostlang$frostc$IR$Value** $tmp22 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp23 = *$tmp22;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
frost$core$Int64 $tmp24 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp25 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp24);
org$frostlang$frostc$ASTNode** $tmp26 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp27 = *$tmp26;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp25, $tmp27);
frost$collections$CollectionView* $tmp28 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q($tmp13, $tmp14);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$collections$CollectionView* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// line 40
frost$collections$CollectionView* $tmp30 = *(&local0);
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block1:;
// line 41
org$frostlang$frostc$Type* $tmp33 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$collections$CollectionView* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp33;
block2:;
// line 43
frost$collections$CollectionView* $tmp35 = *(&local0);
ITable* $tmp36 = $tmp35->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[0];
frost$core$Int64 $tmp39 = $tmp37($tmp35);
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$Bit $tmp41 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp39, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s44, $tmp43);
abort(); // unreachable
block3:;
// line 44
frost$collections$CollectionView* $tmp45 = *(&local0);
ITable* $tmp46 = ((frost$collections$Iterable*) $tmp45)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$collections$Iterator* $tmp49 = $tmp47(((frost$collections$Iterable*) $tmp45));
ITable* $tmp50 = $tmp49->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[1];
frost$core$Object* $tmp53 = $tmp51($tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp53)));
frost$core$Frost$unref$frost$core$Object$Q($tmp53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$CollectionView* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Type*) $tmp53);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$IndexLValue* param0) {

org$frostlang$frostc$Pair* local0 = NULL;
// line 49
org$frostlang$frostc$IR$Value** $tmp55 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp56 = *$tmp55;
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit($tmp56 == NULL);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block1:;
// line 50
org$frostlang$frostc$Compiler** $tmp59 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp60 = *$tmp59;
org$frostlang$frostc$IR$Value** $tmp61 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp62 = *$tmp61;
$fn64 $tmp63 = ($fn64) $tmp62->$class->vtable[2];
org$frostlang$frostc$Type* $tmp65 = $tmp63($tmp62);
frost$core$Int64 $tmp66 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp67 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp66);
org$frostlang$frostc$ASTNode** $tmp68 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp69 = *$tmp68;
org$frostlang$frostc$Compiler$TypeContext* $tmp70 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp70, $tmp71);
org$frostlang$frostc$Pair* $tmp72 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp60, $tmp65, $tmp67, $tmp69, $tmp70);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Pair* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// line 52
org$frostlang$frostc$Pair* $tmp74 = *(&local0);
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit($tmp74 != NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block3; else goto block4;
block3:;
// line 53
org$frostlang$frostc$Pair* $tmp77 = *(&local0);
frost$core$Object** $tmp78 = &$tmp77->first;
frost$core$Object* $tmp79 = *$tmp78;
ITable* $tmp80 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp79))->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Int64 $tmp83 = $tmp81(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp79)));
frost$core$Int64 $tmp84 = (frost$core$Int64) {1};
frost$core$Bit $tmp85 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp83, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s88, $tmp87);
abort(); // unreachable
block5:;
// line 54
org$frostlang$frostc$Compiler** $tmp89 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp90 = *$tmp89;
org$frostlang$frostc$ASTNode** $tmp91 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp92 = *$tmp91;
org$frostlang$frostc$Compiler$TypeContext* $tmp93 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp94 = (frost$core$Int64) {3};
org$frostlang$frostc$Pair* $tmp95 = *(&local0);
frost$core$Object** $tmp96 = &$tmp95->first;
frost$core$Object* $tmp97 = *$tmp96;
frost$core$Int64 $tmp98 = (frost$core$Int64) {0};
ITable* $tmp99 = ((frost$collections$ListView*) $tmp97)->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Object* $tmp102 = $tmp100(((frost$collections$ListView*) $tmp97), $tmp98);
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp104 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(((org$frostlang$frostc$MethodRef*) $tmp102), $tmp103);
frost$core$Bit $tmp105 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp93, $tmp94, $tmp104, $tmp105);
org$frostlang$frostc$IR$Value* $tmp106 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp90, $tmp92, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$IR$Value** $tmp107 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$IR$Value** $tmp109 = &param0->index;
*$tmp109 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
goto block4;
block4:;
org$frostlang$frostc$Pair* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// line 58
org$frostlang$frostc$IR$Value** $tmp111 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 == NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block7; else goto block8;
block7:;
// line 59
org$frostlang$frostc$IR$Value* $tmp115 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp116 = (frost$core$Int64) {7};
frost$core$Int64 $tmp117 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp118 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp117);
$fn120 $tmp119 = ($fn120) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp121 = $tmp119(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp115, $tmp116, $tmp118, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$IR$Value** $tmp122 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp123 = *$tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Value** $tmp124 = &param0->index;
*$tmp124 = $tmp115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// line 60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 62
org$frostlang$frostc$Compiler** $tmp125 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp126 = *$tmp125;
org$frostlang$frostc$Position* $tmp127 = &param0->position;
org$frostlang$frostc$Position $tmp128 = *$tmp127;
org$frostlang$frostc$ASTNode* $tmp129 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp130 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp131 = &param0->position;
org$frostlang$frostc$Position $tmp132 = *$tmp131;
org$frostlang$frostc$IR$Value** $tmp133 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp134 = *$tmp133;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp129, $tmp130, $tmp132, $tmp134);
frost$core$Int64 $tmp135 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp136 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp135);
org$frostlang$frostc$ASTNode* $tmp137 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp138 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp139 = &param0->position;
org$frostlang$frostc$Position $tmp140 = *$tmp139;
org$frostlang$frostc$IR$Value** $tmp141 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp142 = *$tmp141;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp137, $tmp138, $tmp140, $tmp142);
org$frostlang$frostc$Compiler$TypeContext* $tmp143 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp144 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp143, $tmp144);
org$frostlang$frostc$IR$Value* $tmp145 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp126, $tmp128, $tmp129, $tmp136, $tmp137, $tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
return $tmp145;

}
void org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$Array* local5 = NULL;
// line 69
org$frostlang$frostc$IR$Value** $tmp146 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp147 = *$tmp146;
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147 == NULL);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block1; else goto block2;
block1:;
// line 70
org$frostlang$frostc$Compiler** $tmp150 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp151 = *$tmp150;
org$frostlang$frostc$IR$Value** $tmp152 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp153 = *$tmp152;
$fn155 $tmp154 = ($fn155) $tmp153->$class->vtable[2];
org$frostlang$frostc$Type* $tmp156 = $tmp154($tmp153);
org$frostlang$frostc$ClassDecl* $tmp157 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q($tmp151, $tmp156);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$ClassDecl* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// line 71
org$frostlang$frostc$ClassDecl* $tmp159 = *(&local0);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159 == NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block3; else goto block4;
block3:;
// line 72
org$frostlang$frostc$ClassDecl* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// line 74
org$frostlang$frostc$Compiler** $tmp163 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp164 = *$tmp163;
org$frostlang$frostc$ClassDecl* $tmp165 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp166 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp164, $tmp165);
org$frostlang$frostc$Symbol* $tmp167 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp166, &$s168);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$Symbol* $tmp169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local1) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// line 75
org$frostlang$frostc$Symbol* $tmp170 = *(&local1);
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit($tmp170 == NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block5; else goto block6;
block5:;
// line 76
org$frostlang$frostc$Compiler** $tmp173 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp174 = *$tmp173;
org$frostlang$frostc$Position* $tmp175 = &param0->position;
org$frostlang$frostc$Position $tmp176 = *$tmp175;
org$frostlang$frostc$IR$Value** $tmp177 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp178 = *$tmp177;
$fn180 $tmp179 = ($fn180) $tmp178->$class->vtable[2];
org$frostlang$frostc$Type* $tmp181 = $tmp179($tmp178);
frost$core$String* $tmp182 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s183, ((frost$core$Object*) $tmp181));
frost$core$String* $tmp184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp182, &$s185);
$fn187 $tmp186 = ($fn187) param1->$class->vtable[2];
org$frostlang$frostc$Type* $tmp188 = $tmp186(param1);
frost$core$String* $tmp189 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s190, ((frost$core$Object*) $tmp188));
frost$core$String* $tmp191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp189, &$s192);
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp184, $tmp191);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp174, $tmp176, $tmp193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// line 78
org$frostlang$frostc$Symbol* $tmp194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block6:;
// line 80
*(&local2) = ((frost$collections$ListView*) NULL);
// line 81
org$frostlang$frostc$Symbol* $tmp196 = *(&local1);
org$frostlang$frostc$Symbol$Kind* $tmp197 = &$tmp196->kind;
org$frostlang$frostc$Symbol$Kind $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = $tmp198.$rawValue;
frost$core$Int64 $tmp200 = (frost$core$Int64) {5};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp199, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block8; else goto block9;
block8:;
// line 83
frost$collections$Array* $tmp203 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp203)));
frost$collections$ListView* $tmp204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local2) = ((frost$collections$ListView*) $tmp203);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// line 84
frost$collections$ListView* $tmp205 = *(&local2);
org$frostlang$frostc$Symbol* $tmp206 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp205), ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp206)));
goto block7;
block9:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {6};
frost$core$Bit $tmp208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp199, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block10; else goto block11;
block10:;
// line 87
org$frostlang$frostc$Symbol* $tmp210 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp211 = &((org$frostlang$frostc$Methods*) $tmp210)->methods;
org$frostlang$frostc$FixedArray* $tmp212 = *$tmp211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp212)));
frost$collections$ListView* $tmp213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local2) = ((frost$collections$ListView*) $tmp212);
goto block7;
block11:;
// line 90
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp216 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s217, $tmp216);
abort(); // unreachable
block12:;
goto block7;
block7:;
// line 93
frost$collections$Array* $tmp218 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp218);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$collections$Array* $tmp219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local3) = $tmp218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// line 94
frost$collections$Array* $tmp220 = *(&local3);
org$frostlang$frostc$ASTNode** $tmp221 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp222 = *$tmp221;
frost$collections$Array$add$frost$collections$Array$T($tmp220, ((frost$core$Object*) $tmp222));
// line 95
frost$collections$Array* $tmp223 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp224 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp225 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp226 = &param0->position;
org$frostlang$frostc$Position $tmp227 = *$tmp226;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp224, $tmp225, $tmp227, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp223, ((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// line 96
org$frostlang$frostc$Compiler** $tmp228 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp229 = *$tmp228;
org$frostlang$frostc$Position* $tmp230 = &param0->position;
org$frostlang$frostc$Position $tmp231 = *$tmp230;
org$frostlang$frostc$IR$Value** $tmp232 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp233 = *$tmp232;
frost$collections$ListView* $tmp234 = *(&local2);
frost$collections$Array* $tmp235 = *(&local3);
org$frostlang$frostc$Compiler$TypeContext* $tmp236 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp237 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp236, $tmp237);
org$frostlang$frostc$Pair* $tmp238 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp229, $tmp231, $tmp233, $tmp234, ((frost$collections$ListView*) $tmp235), $tmp236);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$Pair* $tmp239 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local4) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// line 98
org$frostlang$frostc$Pair* $tmp240 = *(&local4);
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit($tmp240 != NULL);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block14; else goto block15;
block14:;
// line 99
org$frostlang$frostc$Pair* $tmp243 = *(&local4);
frost$core$Object** $tmp244 = &$tmp243->first;
frost$core$Object* $tmp245 = *$tmp244;
ITable* $tmp246 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp245))->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Int64 $tmp249 = $tmp247(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp245)));
frost$core$Int64 $tmp250 = (frost$core$Int64) {1};
frost$core$Bit $tmp251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp249, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s254, $tmp253);
abort(); // unreachable
block16:;
// line 100
org$frostlang$frostc$Compiler** $tmp255 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp256 = *$tmp255;
org$frostlang$frostc$ASTNode** $tmp257 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp258 = *$tmp257;
org$frostlang$frostc$Compiler$TypeContext* $tmp259 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp260 = (frost$core$Int64) {3};
org$frostlang$frostc$Pair* $tmp261 = *(&local4);
frost$core$Object** $tmp262 = &$tmp261->first;
frost$core$Object* $tmp263 = *$tmp262;
frost$core$Int64 $tmp264 = (frost$core$Int64) {0};
ITable* $tmp265 = ((frost$collections$ListView*) $tmp263)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Object* $tmp268 = $tmp266(((frost$collections$ListView*) $tmp263), $tmp264);
frost$core$Int64 $tmp269 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp270 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(((org$frostlang$frostc$MethodRef*) $tmp268), $tmp269);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp259, $tmp260, $tmp270, $tmp271);
org$frostlang$frostc$IR$Value* $tmp272 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp256, $tmp258, $tmp259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$frostc$IR$Value** $tmp273 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp274 = *$tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$IR$Value** $tmp275 = &param0->index;
*$tmp275 = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q($tmp268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
goto block15;
block15:;
// line 103
org$frostlang$frostc$IR$Value** $tmp276 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp277 = *$tmp276;
frost$core$Bit $tmp278 = frost$core$Bit$init$builtin_bit($tmp277 == NULL);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block18; else goto block19;
block18:;
// line 105
org$frostlang$frostc$IR$Value* $tmp280 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp281 = (frost$core$Int64) {7};
frost$core$Int64 $tmp282 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp283 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp282);
$fn285 $tmp284 = ($fn285) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp286 = $tmp284(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp280, $tmp281, $tmp283, $tmp286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
org$frostlang$frostc$IR$Value** $tmp287 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp288 = *$tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
org$frostlang$frostc$IR$Value** $tmp289 = &param0->index;
*$tmp289 = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
goto block19;
block19:;
org$frostlang$frostc$Pair* $tmp290 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Symbol* $tmp293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 108
frost$collections$Array* $tmp295 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp295);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$collections$Array* $tmp296 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local5) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// line 109
frost$collections$Array* $tmp297 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp298 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp299 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp300 = &param0->position;
org$frostlang$frostc$Position $tmp301 = *$tmp300;
org$frostlang$frostc$IR$Value** $tmp302 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp303 = *$tmp302;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp298, $tmp299, $tmp301, $tmp303);
frost$collections$Array$add$frost$collections$Array$T($tmp297, ((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// line 110
frost$collections$Array* $tmp304 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp305 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp306 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp307 = &param0->position;
org$frostlang$frostc$Position $tmp308 = *$tmp307;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp305, $tmp306, $tmp308, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp304, ((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// line 111
org$frostlang$frostc$Compiler** $tmp309 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp310 = *$tmp309;
org$frostlang$frostc$Position* $tmp311 = &param0->position;
org$frostlang$frostc$Position $tmp312 = *$tmp311;
org$frostlang$frostc$IR$Value** $tmp313 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp314 = *$tmp313;
frost$collections$Array* $tmp315 = *(&local5);
org$frostlang$frostc$Compiler$TypeContext* $tmp316 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp317 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp316, $tmp317);
org$frostlang$frostc$IR$Value* $tmp318 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp310, $tmp312, $tmp314, &$s319, ((frost$collections$ListView*) $tmp315), $tmp316);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$collections$Array* $tmp320 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local5) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(org$frostlang$frostc$lvalue$IndexLValue* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp321 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp322 = *$tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$IR$Value** $tmp323 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp324 = *$tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$ASTNode** $tmp325 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp326 = *$tmp325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
org$frostlang$frostc$IR$Value** $tmp327 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp328 = *$tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
return;

}

