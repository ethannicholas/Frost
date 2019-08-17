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
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/expression/Call.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$IndexLValue$class_type org$frostlang$frostc$lvalue$IndexLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$IndexLValue$cleanup, org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$Int (*$fn43)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn56)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn60)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn72)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn92)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn114)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$Type* (*$fn139)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn176)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn201)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn204)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn211)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn214)(frost$core$Object*);
typedef frost$core$Int (*$fn279)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn301)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$Type* (*$fn325)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, 2733503844731485070, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, 5442801271376830411, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20", 3, -6214412130393370758, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:31
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp6 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp9 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$IndexLValue* param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
frost$collections$CollectionView* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:38
org$frostlang$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp13 = *$tmp12;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp14 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp15 = (frost$core$Int) {5u};
org$frostlang$frostc$Position* $tmp16 = &param0->position;
org$frostlang$frostc$Position $tmp17 = *$tmp16;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp18 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp19 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp20 = &param0->position;
org$frostlang$frostc$Position $tmp21 = *$tmp20;
org$frostlang$frostc$IR$Value** $tmp22 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp23 = *$tmp22;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
frost$core$Int $tmp24 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:39:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp25 = &(&local1)->$rawValue;
*$tmp25 = $tmp24;
org$frostlang$frostc$expression$Binary$Operator $tmp26 = *(&local1);
*(&local0) = $tmp26;
org$frostlang$frostc$expression$Binary$Operator $tmp27 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp28 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp29 = *$tmp28;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp27, $tmp29);
frost$collections$CollectionView* $tmp30 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q($tmp13, $tmp14);
*(&local2) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$collections$CollectionView* $tmp31 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local2) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:40
frost$collections$CollectionView* $tmp32 = *(&local2);
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32 == NULL};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:41
org$frostlang$frostc$Compiler** $tmp35 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp36 = *$tmp35;
org$frostlang$frostc$Type** $tmp37 = &$tmp36->ANY_TYPE;
org$frostlang$frostc$Type* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$collections$CollectionView* $tmp39 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local2) = ((frost$collections$CollectionView*) NULL);
return $tmp38;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:43
frost$collections$CollectionView* $tmp40 = *(&local2);
ITable* $tmp41 = $tmp40->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
frost$core$Int $tmp44 = $tmp42($tmp40);
frost$core$Int $tmp45 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:43:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block5; else goto block6;
block6:;
frost$core$Int $tmp51 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, $tmp51);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:44
frost$collections$CollectionView* $tmp53 = *(&local2);
ITable* $tmp54 = ((frost$collections$Iterable*) $tmp53)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$collections$Iterator* $tmp57 = $tmp55(((frost$collections$Iterable*) $tmp53));
ITable* $tmp58 = $tmp57->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[1];
frost$core$Object* $tmp61 = $tmp59($tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp61)));
frost$core$Frost$unref$frost$core$Object$Q($tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$collections$CollectionView* $tmp62 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local2) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Type*) $tmp61);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$IndexLValue* param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$expression$Binary$Operator local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:49
org$frostlang$frostc$IR$Value** $tmp63 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp64 = *$tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64 == NULL};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:50
org$frostlang$frostc$Compiler** $tmp67 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp68 = *$tmp67;
org$frostlang$frostc$IR$Value** $tmp69 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp70 = *$tmp69;
$fn72 $tmp71 = ($fn72) $tmp70->$class->vtable[2];
org$frostlang$frostc$Type* $tmp73 = $tmp71($tmp70);
frost$core$Int $tmp74 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:50:92
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp75 = &(&local1)->$rawValue;
*$tmp75 = $tmp74;
org$frostlang$frostc$expression$Binary$Operator $tmp76 = *(&local1);
*(&local0) = $tmp76;
org$frostlang$frostc$expression$Binary$Operator $tmp77 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp78 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp79 = *$tmp78;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp80 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp81 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp80, $tmp81);
org$frostlang$frostc$Pair* $tmp82 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q($tmp68, $tmp73, $tmp77, $tmp79, $tmp80);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$Pair* $tmp83 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local2) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:52
org$frostlang$frostc$Pair* $tmp84 = *(&local2);
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84 != NULL};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:53
org$frostlang$frostc$Pair* $tmp87 = *(&local2);
frost$core$Object** $tmp88 = &$tmp87->first;
frost$core$Object* $tmp89 = *$tmp88;
ITable* $tmp90 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp89))->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Int $tmp93 = $tmp91(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp89)));
frost$core$Int $tmp94 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:53:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 == $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block7; else goto block8;
block8:;
frost$core$Int $tmp100 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s101, $tmp100);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:54
org$frostlang$frostc$Compiler** $tmp102 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp103 = *$tmp102;
org$frostlang$frostc$ASTNode** $tmp104 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp105 = *$tmp104;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp106 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp107 = (frost$core$Int) {3u};
org$frostlang$frostc$Pair* $tmp108 = *(&local2);
frost$core$Object** $tmp109 = &$tmp108->first;
frost$core$Object* $tmp110 = *$tmp109;
frost$core$Int $tmp111 = (frost$core$Int) {0u};
ITable* $tmp112 = ((frost$collections$ListView*) $tmp110)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Object* $tmp115 = $tmp113(((frost$collections$ListView*) $tmp110), $tmp111);
frost$core$Int $tmp116 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:55:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp117 = &((org$frostlang$frostc$MethodRef*) $tmp115)->effectiveType;
org$frostlang$frostc$Type* $tmp118 = *$tmp117;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp119 = &$tmp118->_subtypes;
org$frostlang$frostc$FixedArray* $tmp120 = *$tmp119;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Object* $tmp121 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp120, $tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp121)));
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Bit $tmp122 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp106, $tmp107, ((org$frostlang$frostc$Type*) $tmp121), $tmp122);
org$frostlang$frostc$IR$Value* $tmp123 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp103, $tmp105, $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Value** $tmp124 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp125 = *$tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$IR$Value** $tmp126 = &param0->index;
*$tmp126 = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp121)));
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
goto block5;
block5:;
org$frostlang$frostc$Pair* $tmp127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:58
org$frostlang$frostc$IR$Value** $tmp128 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp129 = *$tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129 == NULL};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp132 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp133 = (frost$core$Int) {7u};
frost$core$Int $tmp134 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:59:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp135 = &(&local4)->value;
*$tmp135 = $tmp134;
org$frostlang$frostc$IR$Statement$ID $tmp136 = *(&local4);
*(&local3) = $tmp136;
org$frostlang$frostc$IR$Statement$ID $tmp137 = *(&local3);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp140 = $tmp138(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp132, $tmp133, $tmp137, $tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$IR$Value** $tmp141 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp142 = *$tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$IR$Value** $tmp143 = &param0->index;
*$tmp143 = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:62
org$frostlang$frostc$Compiler** $tmp144 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp145 = *$tmp144;
org$frostlang$frostc$Position* $tmp146 = &param0->position;
org$frostlang$frostc$Position $tmp147 = *$tmp146;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp148 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp149 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp150 = &param0->position;
org$frostlang$frostc$Position $tmp151 = *$tmp150;
org$frostlang$frostc$IR$Value** $tmp152 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp153 = *$tmp152;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp148, $tmp149, $tmp151, $tmp153);
frost$core$Int $tmp154 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp155 = &(&local6)->$rawValue;
*$tmp155 = $tmp154;
org$frostlang$frostc$expression$Binary$Operator $tmp156 = *(&local6);
*(&local5) = $tmp156;
org$frostlang$frostc$expression$Binary$Operator $tmp157 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp158 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp159 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp160 = &param0->position;
org$frostlang$frostc$Position $tmp161 = *$tmp160;
org$frostlang$frostc$IR$Value** $tmp162 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp163 = *$tmp162;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp158, $tmp159, $tmp161, $tmp163);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp164 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp165 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp164, $tmp165);
org$frostlang$frostc$IR$Value* $tmp166 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp145, $tmp147, $tmp148, $tmp157, $tmp158, $tmp164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
return $tmp166;

}
void org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Statement$ID local6;
frost$collections$Array* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:69
org$frostlang$frostc$IR$Value** $tmp167 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp168 = *$tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168 == NULL};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:70
org$frostlang$frostc$Compiler** $tmp171 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp172 = *$tmp171;
org$frostlang$frostc$IR$Value** $tmp173 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp174 = *$tmp173;
$fn176 $tmp175 = ($fn176) $tmp174->$class->vtable[2];
org$frostlang$frostc$Type* $tmp177 = $tmp175($tmp174);
org$frostlang$frostc$ClassDecl* $tmp178 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q($tmp172, $tmp177);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$ClassDecl* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:71
org$frostlang$frostc$ClassDecl* $tmp180 = *(&local0);
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180 == NULL};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:72
org$frostlang$frostc$ClassDecl* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:74
org$frostlang$frostc$Compiler** $tmp184 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp185 = *$tmp184;
org$frostlang$frostc$ClassDecl* $tmp186 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp187 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp185, $tmp186);
org$frostlang$frostc$Symbol* $tmp188 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp187, &$s189);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$Symbol* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local1) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:75
org$frostlang$frostc$Symbol* $tmp191 = *(&local1);
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191 == NULL};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:76
org$frostlang$frostc$Compiler** $tmp194 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp195 = *$tmp194;
org$frostlang$frostc$Position* $tmp196 = &param0->position;
org$frostlang$frostc$Position $tmp197 = *$tmp196;
org$frostlang$frostc$IR$Value** $tmp198 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp199 = *$tmp198;
$fn201 $tmp200 = ($fn201) $tmp199->$class->vtable[2];
org$frostlang$frostc$Type* $tmp202 = $tmp200($tmp199);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn204 $tmp203 = ($fn204) ((frost$core$Object*) $tmp202)->$class->vtable[0];
frost$core$String* $tmp205 = $tmp203(((frost$core$Object*) $tmp202));
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s207, $tmp205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$String* $tmp208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp206, &$s209);
$fn211 $tmp210 = ($fn211) param1->$class->vtable[2];
org$frostlang$frostc$Type* $tmp212 = $tmp210(param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:77:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn214 $tmp213 = ($fn214) ((frost$core$Object*) $tmp212)->$class->vtable[0];
frost$core$String* $tmp215 = $tmp213(((frost$core$Object*) $tmp212));
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s217, $tmp215);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$String* $tmp218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp216, &$s219);
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp208, $tmp218);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp195, $tmp197, $tmp220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:78
org$frostlang$frostc$Symbol* $tmp221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:80
*(&local2) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:81
org$frostlang$frostc$Symbol* $tmp223 = *(&local1);
org$frostlang$frostc$Symbol$Kind* $tmp224 = &$tmp223->kind;
org$frostlang$frostc$Symbol$Kind $tmp225 = *$tmp224;
frost$core$Int $tmp226 = $tmp225.$rawValue;
frost$core$Int $tmp227 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:82:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 == $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:83
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp233 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp233)));
frost$collections$ListView* $tmp234 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local2) = ((frost$collections$ListView*) $tmp233);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:84
frost$collections$ListView* $tmp235 = *(&local2);
org$frostlang$frostc$Symbol* $tmp236 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp235), ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp236)));
goto block9;
block11:;
frost$core$Int $tmp237 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:86:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp238 = $tmp226.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:87
org$frostlang$frostc$Symbol* $tmp243 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp244 = &((org$frostlang$frostc$Methods*) $tmp243)->methods;
org$frostlang$frostc$FixedArray* $tmp245 = *$tmp244;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp245)));
frost$collections$ListView* $tmp246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local2) = ((frost$collections$ListView*) $tmp245);
goto block9;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:90
frost$core$Int $tmp247 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s248, $tmp247);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:93
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp249 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp249);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$collections$Array* $tmp250 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local3) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:94
frost$collections$Array* $tmp251 = *(&local3);
org$frostlang$frostc$ASTNode** $tmp252 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp253 = *$tmp252;
frost$collections$Array$add$frost$collections$Array$T($tmp251, ((frost$core$Object*) $tmp253));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:95
frost$collections$Array* $tmp254 = *(&local3);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp255 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp256 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp257 = &param0->position;
org$frostlang$frostc$Position $tmp258 = *$tmp257;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp255, $tmp256, $tmp258, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp254, ((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:96
org$frostlang$frostc$Compiler** $tmp259 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp260 = *$tmp259;
org$frostlang$frostc$Position* $tmp261 = &param0->position;
org$frostlang$frostc$Position $tmp262 = *$tmp261;
org$frostlang$frostc$IR$Value** $tmp263 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp264 = *$tmp263;
frost$collections$ListView* $tmp265 = *(&local2);
frost$collections$Array* $tmp266 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp267 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp268 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp267, $tmp268);
org$frostlang$frostc$Pair* $tmp269 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q($tmp260, $tmp262, $tmp264, $tmp265, ((frost$collections$ListView*) $tmp266), $tmp267);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
org$frostlang$frostc$Pair* $tmp270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local4) = $tmp269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:98
org$frostlang$frostc$Pair* $tmp271 = *(&local4);
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271 != NULL};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:99
org$frostlang$frostc$Pair* $tmp274 = *(&local4);
frost$core$Object** $tmp275 = &$tmp274->first;
frost$core$Object* $tmp276 = *$tmp275;
ITable* $tmp277 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp276))->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[0];
frost$core$Int $tmp280 = $tmp278(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp276)));
frost$core$Int $tmp281 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:99:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 == $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block19; else goto block20;
block20:;
frost$core$Int $tmp287 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s288, $tmp287);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:100
org$frostlang$frostc$Compiler** $tmp289 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp290 = *$tmp289;
org$frostlang$frostc$ASTNode** $tmp291 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp292 = *$tmp291;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp293 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp294 = (frost$core$Int) {3u};
org$frostlang$frostc$Pair* $tmp295 = *(&local4);
frost$core$Object** $tmp296 = &$tmp295->first;
frost$core$Object* $tmp297 = *$tmp296;
frost$core$Int $tmp298 = (frost$core$Int) {0u};
ITable* $tmp299 = ((frost$collections$ListView*) $tmp297)->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[0];
frost$core$Object* $tmp302 = $tmp300(((frost$collections$ListView*) $tmp297), $tmp298);
frost$core$Int $tmp303 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:101:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp304 = &((org$frostlang$frostc$MethodRef*) $tmp302)->effectiveType;
org$frostlang$frostc$Type* $tmp305 = *$tmp304;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp306 = &$tmp305->_subtypes;
org$frostlang$frostc$FixedArray* $tmp307 = *$tmp306;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Object* $tmp308 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp307, $tmp303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp308)));
frost$core$Frost$unref$frost$core$Object$Q($tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Bit $tmp309 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp293, $tmp294, ((org$frostlang$frostc$Type*) $tmp308), $tmp309);
org$frostlang$frostc$IR$Value* $tmp310 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp290, $tmp292, $tmp293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$IR$Value** $tmp311 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp312 = *$tmp311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
org$frostlang$frostc$IR$Value** $tmp313 = &param0->index;
*$tmp313 = $tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp308)));
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:103
org$frostlang$frostc$IR$Value** $tmp314 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp315 = *$tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315 == NULL};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:105
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp318 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp319 = (frost$core$Int) {7u};
frost$core$Int $tmp320 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:105:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp321 = &(&local6)->value;
*$tmp321 = $tmp320;
org$frostlang$frostc$IR$Statement$ID $tmp322 = *(&local6);
*(&local5) = $tmp322;
org$frostlang$frostc$IR$Statement$ID $tmp323 = *(&local5);
$fn325 $tmp324 = ($fn325) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp326 = $tmp324(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp318, $tmp319, $tmp323, $tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
org$frostlang$frostc$IR$Value** $tmp327 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp328 = *$tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
org$frostlang$frostc$IR$Value** $tmp329 = &param0->index;
*$tmp329 = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
goto block24;
block24:;
org$frostlang$frostc$Pair* $tmp330 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Symbol* $tmp333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:108
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp335 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp335);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$collections$Array* $tmp336 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local7) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:109
frost$collections$Array* $tmp337 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp338 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp339 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp340 = &param0->position;
org$frostlang$frostc$Position $tmp341 = *$tmp340;
org$frostlang$frostc$IR$Value** $tmp342 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp343 = *$tmp342;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp338, $tmp339, $tmp341, $tmp343);
frost$collections$Array$add$frost$collections$Array$T($tmp337, ((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:110
frost$collections$Array* $tmp344 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp345 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp346 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp347 = &param0->position;
org$frostlang$frostc$Position $tmp348 = *$tmp347;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp345, $tmp346, $tmp348, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp344, ((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:111
org$frostlang$frostc$Compiler** $tmp349 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp350 = *$tmp349;
org$frostlang$frostc$Position* $tmp351 = &param0->position;
org$frostlang$frostc$Position $tmp352 = *$tmp351;
org$frostlang$frostc$IR$Value** $tmp353 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp354 = *$tmp353;
frost$collections$Array* $tmp355 = *(&local7);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp356 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp357 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp356, $tmp357);
org$frostlang$frostc$IR$Value* $tmp358 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp350, $tmp352, $tmp354, &$s359, ((frost$collections$ListView*) $tmp355), $tmp356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$collections$Array* $tmp360 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local7) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(org$frostlang$frostc$lvalue$IndexLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp361 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp362 = *$tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
org$frostlang$frostc$IR$Value** $tmp363 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp364 = *$tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$ASTNode** $tmp365 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp366 = *$tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
org$frostlang$frostc$IR$Value** $tmp367 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp368 = *$tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
return;

}

