#include "org/frostlanguage/frostc/lvalue/IndexLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/lvalue/LValue.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/expression/Binary.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/MethodRef.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/Methods.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/expression/Call.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlanguage$frostc$lvalue$IndexLValue$_org$frostlanguage$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class, NULL, { org$frostlanguage$frostc$lvalue$IndexLValue$type$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q, org$frostlanguage$frostc$lvalue$IndexLValue$compileStore$org$frostlanguage$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlanguage$frostc$lvalue$IndexLValue$class_type org$frostlanguage$frostc$lvalue$IndexLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frostc$lvalue$IndexLValue$_org$frostlanguage$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$lvalue$IndexLValue$cleanup, org$frostlanguage$frostc$lvalue$IndexLValue$type$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q, org$frostlanguage$frostc$lvalue$IndexLValue$compileStore$org$frostlanguage$frostc$IR$Value} };

typedef frost$core$Int64 (*$fn38)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn48)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn52)(frost$collections$Iterator*);
typedef org$frostlanguage$frostc$Type* (*$fn64)(org$frostlanguage$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn101)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlanguage$frostc$Type* (*$fn119)(org$frostlanguage$frostc$lvalue$IndexLValue*);
typedef org$frostlanguage$frostc$Type* (*$fn154)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Type* (*$fn179)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Type* (*$fn186)(org$frostlanguage$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn247)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn266)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlanguage$frostc$Type* (*$fn283)(org$frostlanguage$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 43, 4838727126539621930, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, -3727949445279175429, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$frostlanguage$frostc$lvalue$IndexLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$lvalue$IndexLValue* param0, org$frostlanguage$frostc$Compiler* param1, org$frostlanguage$frostc$Position param2, org$frostlanguage$frostc$IR$Value* param3, org$frostlanguage$frostc$ASTNode* param4) {

// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 31
org$frostlanguage$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlanguage$frostc$IR$Value** $tmp6 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlanguage$frostc$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlanguage$frostc$ASTNode** $tmp9 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlanguage$frostc$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$IndexLValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$IndexLValue* param0) {

frost$collections$CollectionView* local0 = NULL;
// line 38
org$frostlanguage$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp13 = *$tmp12;
org$frostlanguage$frostc$ASTNode* $tmp14 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Position* $tmp16 = &param0->position;
org$frostlanguage$frostc$Position $tmp17 = *$tmp16;
org$frostlanguage$frostc$ASTNode* $tmp18 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp19 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp20 = &param0->position;
org$frostlanguage$frostc$Position $tmp21 = *$tmp20;
org$frostlanguage$frostc$IR$Value** $tmp22 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp23 = *$tmp22;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
frost$core$Int64 $tmp24 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp25 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp24);
org$frostlanguage$frostc$ASTNode** $tmp26 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp27 = *$tmp26;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp25, $tmp27);
frost$collections$CollectionView* $tmp28 = org$frostlanguage$frostc$Compiler$possibleTypes$org$frostlanguage$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Type$GT$Q($tmp13, $tmp14);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$collections$CollectionView* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($19:frost.collections.CollectionView<org.frostlanguage.frostc.Type>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($7:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($3:org.frostlanguage.frostc.ASTNode)
// line 40
frost$collections$CollectionView* $tmp30 = *(&local0);
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block1:;
// line 41
org$frostlanguage$frostc$Type* $tmp33 = org$frostlanguage$frostc$Type$Any$R$org$frostlanguage$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($43:org.frostlanguage.frostc.Type)
frost$collections$CollectionView* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing types
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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp53)));
frost$core$Frost$unref$frost$core$Object$Q($tmp53);
// unreffing REF($75:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($71:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$CollectionView* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing types
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlanguage$frostc$Type*) $tmp53);

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$IndexLValue* param0) {

org$frostlanguage$frostc$Pair* local0 = NULL;
// line 49
org$frostlanguage$frostc$IR$Value** $tmp55 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp56 = *$tmp55;
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit($tmp56 == NULL);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block1:;
// line 50
org$frostlanguage$frostc$Compiler** $tmp59 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp60 = *$tmp59;
org$frostlanguage$frostc$IR$Value** $tmp61 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp62 = *$tmp61;
$fn64 $tmp63 = ($fn64) $tmp62->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp65 = $tmp63($tmp62);
frost$core$Int64 $tmp66 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp67 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp66);
org$frostlanguage$frostc$ASTNode** $tmp68 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp69 = *$tmp68;
org$frostlanguage$frostc$Compiler$TypeContext* $tmp70 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp70, $tmp71);
org$frostlanguage$frostc$Pair* $tmp72 = org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp60, $tmp65, $tmp67, $tmp69, $tmp70);
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlanguage$frostc$Pair* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($21:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($18:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($13:org.frostlanguage.frostc.Type)
// line 52
org$frostlanguage$frostc$Pair* $tmp74 = *(&local0);
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit($tmp74 != NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block3; else goto block4;
block3:;
// line 53
org$frostlanguage$frostc$Pair* $tmp77 = *(&local0);
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
org$frostlanguage$frostc$Compiler** $tmp89 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp90 = *$tmp89;
org$frostlanguage$frostc$ASTNode** $tmp91 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp92 = *$tmp91;
org$frostlanguage$frostc$Compiler$TypeContext* $tmp93 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp94 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Pair* $tmp95 = *(&local0);
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
org$frostlanguage$frostc$Type* $tmp104 = org$frostlanguage$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type(((org$frostlanguage$frostc$MethodRef*) $tmp102), $tmp103);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp93, $tmp94, $tmp104);
org$frostlanguage$frostc$IR$Value* $tmp105 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q($tmp90, $tmp92, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlanguage$frostc$IR$Value** $tmp106 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp107 = *$tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlanguage$frostc$IR$Value** $tmp108 = &param0->index;
*$tmp108 = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($80:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($78:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
// unreffing REF($75:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($65:org.frostlanguage.frostc.Compiler.TypeContext)
goto block4;
block4:;
org$frostlanguage$frostc$Pair* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing m
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
goto block2;
block2:;
// line 58
org$frostlanguage$frostc$IR$Value** $tmp110 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111 == NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block7; else goto block8;
block7:;
// line 59
org$frostlanguage$frostc$IR$Value* $tmp114 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp115 = (frost$core$Int64) {7};
frost$core$Int64 $tmp116 = (frost$core$Int64) {18446744073709551615};
org$frostlanguage$frostc$IR$Statement$ID $tmp117 = org$frostlanguage$frostc$IR$Statement$ID$init$frost$core$Int64($tmp116);
$fn119 $tmp118 = ($fn119) param0->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp120 = $tmp118(param0);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp114, $tmp115, $tmp117, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
org$frostlanguage$frostc$IR$Value** $tmp121 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp122 = *$tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlanguage$frostc$IR$Value** $tmp123 = &param0->index;
*$tmp123 = $tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($121:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($116:org.frostlanguage.frostc.IR.Value)
// line 60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block8:;
// line 62
org$frostlanguage$frostc$Compiler** $tmp124 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp125 = *$tmp124;
org$frostlanguage$frostc$Position* $tmp126 = &param0->position;
org$frostlanguage$frostc$Position $tmp127 = *$tmp126;
org$frostlanguage$frostc$ASTNode* $tmp128 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp129 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp130 = &param0->position;
org$frostlanguage$frostc$Position $tmp131 = *$tmp130;
org$frostlanguage$frostc$IR$Value** $tmp132 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp133 = *$tmp132;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp128, $tmp129, $tmp131, $tmp133);
frost$core$Int64 $tmp134 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp135 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp134);
org$frostlanguage$frostc$ASTNode* $tmp136 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp138 = &param0->position;
org$frostlanguage$frostc$Position $tmp139 = *$tmp138;
org$frostlanguage$frostc$IR$Value** $tmp140 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp141 = *$tmp140;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp136, $tmp137, $tmp139, $tmp141);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp142 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp143 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp142, $tmp143);
org$frostlanguage$frostc$IR$Value* $tmp144 = org$frostlanguage$frostc$expression$Binary$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q($tmp125, $tmp127, $tmp128, $tmp135, $tmp136, $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($167:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($164:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($156:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($147:org.frostlanguage.frostc.ASTNode)
return $tmp144;

}
void org$frostlanguage$frostc$lvalue$IndexLValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$IndexLValue* param0, org$frostlanguage$frostc$IR$Value* param1) {

org$frostlanguage$frostc$ClassDecl* local0 = NULL;
org$frostlanguage$frostc$Symbol* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlanguage$frostc$Pair* local4 = NULL;
frost$collections$Array* local5 = NULL;
// line 69
org$frostlanguage$frostc$IR$Value** $tmp145 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp146 = *$tmp145;
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146 == NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block1; else goto block2;
block1:;
// line 70
org$frostlanguage$frostc$Compiler** $tmp149 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp150 = *$tmp149;
org$frostlanguage$frostc$IR$Value** $tmp151 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp152 = *$tmp151;
$fn154 $tmp153 = ($fn154) $tmp152->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp155 = $tmp153($tmp152);
org$frostlanguage$frostc$ClassDecl* $tmp156 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q($tmp150, $tmp155);
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
org$frostlanguage$frostc$ClassDecl* $tmp157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local0) = $tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($14:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($13:org.frostlanguage.frostc.Type)
// line 71
org$frostlanguage$frostc$ClassDecl* $tmp158 = *(&local0);
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit($tmp158 == NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block3; else goto block4;
block3:;
// line 72
org$frostlanguage$frostc$ClassDecl* $tmp161 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return;
block4:;
// line 74
org$frostlanguage$frostc$Compiler** $tmp162 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp163 = *$tmp162;
org$frostlanguage$frostc$ClassDecl* $tmp164 = *(&local0);
org$frostlanguage$frostc$SymbolTable* $tmp165 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable($tmp163, $tmp164);
org$frostlanguage$frostc$Symbol* $tmp166 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp165, &$s167);
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
org$frostlanguage$frostc$Symbol* $tmp168 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local1) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($47:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing REF($46:org.frostlanguage.frostc.SymbolTable)
// line 75
org$frostlanguage$frostc$Symbol* $tmp169 = *(&local1);
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit($tmp169 == NULL);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block5; else goto block6;
block5:;
// line 76
org$frostlanguage$frostc$Compiler** $tmp172 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp173 = *$tmp172;
org$frostlanguage$frostc$Position* $tmp174 = &param0->position;
org$frostlanguage$frostc$Position $tmp175 = *$tmp174;
org$frostlanguage$frostc$IR$Value** $tmp176 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp177 = *$tmp176;
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp180 = $tmp178($tmp177);
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s182, ((frost$core$Object*) $tmp180));
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp181, &$s184);
$fn186 $tmp185 = ($fn186) param1->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp187 = $tmp185(param1);
frost$core$String* $tmp188 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s189, ((frost$core$Object*) $tmp187));
frost$core$String* $tmp190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp188, &$s191);
frost$core$String* $tmp192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp183, $tmp190);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String($tmp173, $tmp175, $tmp192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($80:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing REF($78:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($75:org.frostlanguage.frostc.Type)
// line 78
org$frostlanguage$frostc$Symbol* $tmp193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing assignment
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return;
block6:;
// line 80
*(&local2) = ((frost$collections$ListView*) NULL);
// line 81
org$frostlanguage$frostc$Symbol* $tmp195 = *(&local1);
org$frostlanguage$frostc$Symbol$Kind* $tmp196 = &$tmp195->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp197 = *$tmp196;
frost$core$Int64 $tmp198 = $tmp197.$rawValue;
frost$core$Int64 $tmp199 = (frost$core$Int64) {5};
frost$core$Bit $tmp200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block8; else goto block9;
block8:;
// line 83
frost$collections$Array* $tmp202 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp202);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp202)));
frost$collections$ListView* $tmp203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local2) = ((frost$collections$ListView*) $tmp202);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($132:frost.collections.Array<org.frostlanguage.frostc.MethodDecl>)
// line 84
frost$collections$ListView* $tmp204 = *(&local2);
org$frostlanguage$frostc$Symbol* $tmp205 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp204), ((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp205)));
goto block7;
block9:;
frost$core$Int64 $tmp206 = (frost$core$Int64) {6};
frost$core$Bit $tmp207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block10; else goto block11;
block10:;
// line 87
org$frostlanguage$frostc$Symbol* $tmp209 = *(&local1);
org$frostlanguage$frostc$FixedArray** $tmp210 = &((org$frostlanguage$frostc$Methods*) $tmp209)->methods;
org$frostlanguage$frostc$FixedArray* $tmp211 = *$tmp210;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp211)));
frost$collections$ListView* $tmp212 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local2) = ((frost$collections$ListView*) $tmp211);
goto block7;
block11:;
// line 90
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit(false);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s216, $tmp215);
abort(); // unreachable
block12:;
goto block7;
block7:;
// line 93
frost$collections$Array* $tmp217 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp217);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$collections$Array* $tmp218 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local3) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($180:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 94
frost$collections$Array* $tmp219 = *(&local3);
org$frostlanguage$frostc$ASTNode** $tmp220 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp221 = *$tmp220;
frost$collections$Array$add$frost$collections$Array$T($tmp219, ((frost$core$Object*) $tmp221));
// line 95
frost$collections$Array* $tmp222 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp223 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp224 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp225 = &param0->position;
org$frostlanguage$frostc$Position $tmp226 = *$tmp225;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp223, $tmp224, $tmp226, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp222, ((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing REF($203:org.frostlanguage.frostc.ASTNode)
// line 96
org$frostlanguage$frostc$Compiler** $tmp227 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp228 = *$tmp227;
org$frostlanguage$frostc$Position* $tmp229 = &param0->position;
org$frostlanguage$frostc$Position $tmp230 = *$tmp229;
org$frostlanguage$frostc$IR$Value** $tmp231 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp232 = *$tmp231;
frost$collections$ListView* $tmp233 = *(&local2);
frost$collections$Array* $tmp234 = *(&local3);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp235 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp236 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp235, $tmp236);
org$frostlanguage$frostc$Pair* $tmp237 = org$frostlanguage$frostc$expression$Call$findBestMethod$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp228, $tmp230, $tmp232, $tmp233, ((frost$collections$ListView*) $tmp234), $tmp235);
*(&local4) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
org$frostlanguage$frostc$Pair* $tmp238 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local4) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($227:org.frostlanguage.frostc.Pair<frost.collections.ListView<org.frostlanguage.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($224:org.frostlanguage.frostc.Compiler.TypeContext)
// line 98
org$frostlanguage$frostc$Pair* $tmp239 = *(&local4);
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239 != NULL);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block14; else goto block15;
block14:;
// line 99
org$frostlanguage$frostc$Pair* $tmp242 = *(&local4);
frost$core$Object** $tmp243 = &$tmp242->first;
frost$core$Object* $tmp244 = *$tmp243;
ITable* $tmp245 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp244))->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Int64 $tmp248 = $tmp246(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp244)));
frost$core$Int64 $tmp249 = (frost$core$Int64) {1};
frost$core$Bit $tmp250 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp248, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s253, $tmp252);
abort(); // unreachable
block16:;
// line 100
org$frostlanguage$frostc$Compiler** $tmp254 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp255 = *$tmp254;
org$frostlanguage$frostc$ASTNode** $tmp256 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp257 = *$tmp256;
org$frostlanguage$frostc$Compiler$TypeContext* $tmp258 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp259 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Pair* $tmp260 = *(&local4);
frost$core$Object** $tmp261 = &$tmp260->first;
frost$core$Object* $tmp262 = *$tmp261;
frost$core$Int64 $tmp263 = (frost$core$Int64) {0};
ITable* $tmp264 = ((frost$collections$ListView*) $tmp262)->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$core$Object* $tmp267 = $tmp265(((frost$collections$ListView*) $tmp262), $tmp263);
frost$core$Int64 $tmp268 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type* $tmp269 = org$frostlanguage$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type(((org$frostlanguage$frostc$MethodRef*) $tmp267), $tmp268);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp258, $tmp259, $tmp269);
org$frostlanguage$frostc$IR$Value* $tmp270 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q($tmp255, $tmp257, $tmp258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
org$frostlanguage$frostc$IR$Value** $tmp271 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlanguage$frostc$IR$Value** $tmp273 = &param0->index;
*$tmp273 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($283:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($281:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
// unreffing REF($278:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($268:org.frostlanguage.frostc.Compiler.TypeContext)
goto block15;
block15:;
// line 103
org$frostlanguage$frostc$IR$Value** $tmp274 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp275 = *$tmp274;
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275 == NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block18; else goto block19;
block18:;
// line 105
org$frostlanguage$frostc$IR$Value* $tmp278 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp279 = (frost$core$Int64) {7};
frost$core$Int64 $tmp280 = (frost$core$Int64) {18446744073709551615};
org$frostlanguage$frostc$IR$Statement$ID $tmp281 = org$frostlanguage$frostc$IR$Statement$ID$init$frost$core$Int64($tmp280);
$fn283 $tmp282 = ($fn283) param0->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp284 = $tmp282(param0);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp278, $tmp279, $tmp281, $tmp284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlanguage$frostc$IR$Value** $tmp285 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp286 = *$tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
org$frostlanguage$frostc$IR$Value** $tmp287 = &param0->index;
*$tmp287 = $tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($318:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($313:org.frostlanguage.frostc.IR.Value)
goto block19;
block19:;
org$frostlanguage$frostc$Pair* $tmp288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing m
*(&local4) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$collections$Array* $tmp289 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp290 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing methods
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$Symbol* $tmp291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing assignment
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 108
frost$collections$Array* $tmp293 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp293);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$collections$Array* $tmp294 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local5) = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($363:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 109
frost$collections$Array* $tmp295 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp296 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp297 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp298 = &param0->position;
org$frostlanguage$frostc$Position $tmp299 = *$tmp298;
org$frostlanguage$frostc$IR$Value** $tmp300 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp301 = *$tmp300;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp296, $tmp297, $tmp299, $tmp301);
frost$collections$Array$add$frost$collections$Array$T($tmp295, ((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($379:org.frostlanguage.frostc.ASTNode)
// line 110
frost$collections$Array* $tmp302 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp303 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp304 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp305 = &param0->position;
org$frostlanguage$frostc$Position $tmp306 = *$tmp305;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp303, $tmp304, $tmp306, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp302, ((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($395:org.frostlanguage.frostc.ASTNode)
// line 111
org$frostlanguage$frostc$Compiler** $tmp307 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp308 = *$tmp307;
org$frostlanguage$frostc$Position* $tmp309 = &param0->position;
org$frostlanguage$frostc$Position $tmp310 = *$tmp309;
org$frostlanguage$frostc$IR$Value** $tmp311 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp312 = *$tmp311;
frost$collections$Array* $tmp313 = *(&local5);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp314 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp315 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp314, $tmp315);
org$frostlanguage$frostc$IR$Value* $tmp316 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q($tmp308, $tmp310, $tmp312, &$s317, ((frost$collections$ListView*) $tmp313), $tmp314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing REF($417:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($414:org.frostlanguage.frostc.Compiler.TypeContext)
frost$collections$Array* $tmp318 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing args
*(&local5) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlanguage$frostc$lvalue$IndexLValue$cleanup(org$frostlanguage$frostc$lvalue$IndexLValue* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Compiler** $tmp319 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp320 = *$tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
org$frostlanguage$frostc$IR$Value** $tmp321 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp322 = *$tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlanguage$frostc$ASTNode** $tmp323 = &param0->rawIndex;
org$frostlanguage$frostc$ASTNode* $tmp324 = *$tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlanguage$frostc$IR$Value** $tmp325 = &param0->index;
org$frostlanguage$frostc$IR$Value* $tmp326 = *$tmp325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
return;

}

