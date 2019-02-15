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
#include "frost/core/Int64.h"
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

typedef frost$core$Int64 (*$fn43)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn56)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn60)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn72)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn92)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn114)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn145)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn182)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn207)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn210)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn217)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn220)(frost$core$Object*);
typedef frost$core$Int64 (*$fn285)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn307)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn337)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, 2733503844731485070, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, 5442801271376830411, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20", 3, -6214412130393370758, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };

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
frost$core$Int64 $tmp15 = (frost$core$Int64) {5u};
org$frostlang$frostc$Position* $tmp16 = &param0->position;
org$frostlang$frostc$Position $tmp17 = *$tmp16;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp18 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp19 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position* $tmp20 = &param0->position;
org$frostlang$frostc$Position $tmp21 = *$tmp20;
org$frostlang$frostc$IR$Value** $tmp22 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp23 = *$tmp22;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
frost$core$Int64 $tmp24 = (frost$core$Int64) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:39:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp25 = &(&local1)->$rawValue;
*$tmp25 = $tmp24;
org$frostlang$frostc$expression$Binary$Operator $tmp26 = *(&local1);
*(&local0) = $tmp26;
org$frostlang$frostc$expression$Binary$Operator $tmp27 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp28 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp29 = *$tmp28;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp27, $tmp29);
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
frost$core$Int64 $tmp44 = $tmp42($tmp40);
frost$core$Int64 $tmp45 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:43:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp51 = (frost$core$Int64) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s52, $tmp51);
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
frost$core$Int64 $tmp74 = (frost$core$Int64) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:50:92
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp75 = &(&local1)->$rawValue;
*$tmp75 = $tmp74;
org$frostlang$frostc$expression$Binary$Operator $tmp76 = *(&local1);
*(&local0) = $tmp76;
org$frostlang$frostc$expression$Binary$Operator $tmp77 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp78 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp79 = *$tmp78;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp80 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp81 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp80, $tmp81);
org$frostlang$frostc$Pair* $tmp82 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp68, $tmp73, $tmp77, $tmp79, $tmp80);
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
frost$core$Int64 $tmp93 = $tmp91(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp89)));
frost$core$Int64 $tmp94 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:53:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 == $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s101, $tmp100);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:54
org$frostlang$frostc$Compiler** $tmp102 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp103 = *$tmp102;
org$frostlang$frostc$ASTNode** $tmp104 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp105 = *$tmp104;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp106 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp107 = (frost$core$Int64) {3u};
org$frostlang$frostc$Pair* $tmp108 = *(&local2);
frost$core$Object** $tmp109 = &$tmp108->first;
frost$core$Object* $tmp110 = *$tmp109;
frost$core$Int64 $tmp111 = (frost$core$Int64) {0u};
ITable* $tmp112 = ((frost$collections$ListView*) $tmp110)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Object* $tmp115 = $tmp113(((frost$collections$ListView*) $tmp110), $tmp111);
frost$core$Int64 $tmp116 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int64):org.frostlang.frostc.Type from IndexLValue.frost:55:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp117 = &((org$frostlang$frostc$MethodRef*) $tmp115)->effectiveType;
org$frostlang$frostc$Type* $tmp118 = *$tmp117;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp119 = &$tmp118->_subtypes;
org$frostlang$frostc$FixedArray* $tmp120 = *$tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120 != NULL};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s124, $tmp123);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp125 = &$tmp118->_subtypes;
org$frostlang$frostc$FixedArray* $tmp126 = *$tmp125;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Object* $tmp127 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp126, $tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp127)));
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Bit $tmp128 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp106, $tmp107, ((org$frostlang$frostc$Type*) $tmp127), $tmp128);
org$frostlang$frostc$IR$Value* $tmp129 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp103, $tmp105, $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
org$frostlang$frostc$IR$Value** $tmp130 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp131 = *$tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlang$frostc$IR$Value** $tmp132 = &param0->index;
*$tmp132 = $tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp127)));
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
goto block5;
block5:;
org$frostlang$frostc$Pair* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:58
org$frostlang$frostc$IR$Value** $tmp134 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp135 = *$tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135 == NULL};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp138 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp139 = (frost$core$Int64) {7u};
frost$core$Int64 $tmp140 = (frost$core$Int64) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:59:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp141 = &(&local4)->value;
*$tmp141 = $tmp140;
org$frostlang$frostc$IR$Statement$ID $tmp142 = *(&local4);
*(&local3) = $tmp142;
org$frostlang$frostc$IR$Statement$ID $tmp143 = *(&local3);
$fn145 $tmp144 = ($fn145) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp146 = $tmp144(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp138, $tmp139, $tmp143, $tmp146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$IR$Value** $tmp147 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp148 = *$tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
org$frostlang$frostc$IR$Value** $tmp149 = &param0->index;
*$tmp149 = $tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:62
org$frostlang$frostc$Compiler** $tmp150 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp151 = *$tmp150;
org$frostlang$frostc$Position* $tmp152 = &param0->position;
org$frostlang$frostc$Position $tmp153 = *$tmp152;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp154 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp155 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position* $tmp156 = &param0->position;
org$frostlang$frostc$Position $tmp157 = *$tmp156;
org$frostlang$frostc$IR$Value** $tmp158 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp159 = *$tmp158;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp154, $tmp155, $tmp157, $tmp159);
frost$core$Int64 $tmp160 = (frost$core$Int64) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp161 = &(&local6)->$rawValue;
*$tmp161 = $tmp160;
org$frostlang$frostc$expression$Binary$Operator $tmp162 = *(&local6);
*(&local5) = $tmp162;
org$frostlang$frostc$expression$Binary$Operator $tmp163 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp164 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp165 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position* $tmp166 = &param0->position;
org$frostlang$frostc$Position $tmp167 = *$tmp166;
org$frostlang$frostc$IR$Value** $tmp168 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp169 = *$tmp168;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp164, $tmp165, $tmp167, $tmp169);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp170 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp171 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp170, $tmp171);
org$frostlang$frostc$IR$Value* $tmp172 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp151, $tmp153, $tmp154, $tmp163, $tmp164, $tmp170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
return $tmp172;

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
org$frostlang$frostc$IR$Value** $tmp173 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp174 = *$tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174 == NULL};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:70
org$frostlang$frostc$Compiler** $tmp177 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp178 = *$tmp177;
org$frostlang$frostc$IR$Value** $tmp179 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp180 = *$tmp179;
$fn182 $tmp181 = ($fn182) $tmp180->$class->vtable[2];
org$frostlang$frostc$Type* $tmp183 = $tmp181($tmp180);
org$frostlang$frostc$ClassDecl* $tmp184 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q($tmp178, $tmp183);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
org$frostlang$frostc$ClassDecl* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:71
org$frostlang$frostc$ClassDecl* $tmp186 = *(&local0);
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186 == NULL};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:72
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:74
org$frostlang$frostc$Compiler** $tmp190 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp191 = *$tmp190;
org$frostlang$frostc$ClassDecl* $tmp192 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp193 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp191, $tmp192);
org$frostlang$frostc$Symbol* $tmp194 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp193, &$s195);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlang$frostc$Symbol* $tmp196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local1) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:75
org$frostlang$frostc$Symbol* $tmp197 = *(&local1);
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197 == NULL};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:76
org$frostlang$frostc$Compiler** $tmp200 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp201 = *$tmp200;
org$frostlang$frostc$Position* $tmp202 = &param0->position;
org$frostlang$frostc$Position $tmp203 = *$tmp202;
org$frostlang$frostc$IR$Value** $tmp204 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp205 = *$tmp204;
$fn207 $tmp206 = ($fn207) $tmp205->$class->vtable[2];
org$frostlang$frostc$Type* $tmp208 = $tmp206($tmp205);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn210 $tmp209 = ($fn210) ((frost$core$Object*) $tmp208)->$class->vtable[0];
frost$core$String* $tmp211 = $tmp209(((frost$core$Object*) $tmp208));
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s213, $tmp211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp212, &$s215);
$fn217 $tmp216 = ($fn217) param1->$class->vtable[2];
org$frostlang$frostc$Type* $tmp218 = $tmp216(param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:77:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn220 $tmp219 = ($fn220) ((frost$core$Object*) $tmp218)->$class->vtable[0];
frost$core$String* $tmp221 = $tmp219(((frost$core$Object*) $tmp218));
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s223, $tmp221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s225);
frost$core$String* $tmp226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, $tmp224);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp201, $tmp203, $tmp226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:78
org$frostlang$frostc$Symbol* $tmp227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp228 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:80
*(&local2) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:81
org$frostlang$frostc$Symbol* $tmp229 = *(&local1);
org$frostlang$frostc$Symbol$Kind* $tmp230 = &$tmp229->kind;
org$frostlang$frostc$Symbol$Kind $tmp231 = *$tmp230;
frost$core$Int64 $tmp232 = $tmp231.$rawValue;
frost$core$Int64 $tmp233 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:82:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 == $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:83
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp239)));
frost$collections$ListView* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local2) = ((frost$collections$ListView*) $tmp239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:84
frost$collections$ListView* $tmp241 = *(&local2);
org$frostlang$frostc$Symbol* $tmp242 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp241), ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp242)));
goto block9;
block11:;
frost$core$Int64 $tmp243 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:86:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp244 = $tmp232.value;
int64_t $tmp245 = $tmp243.value;
bool $tmp246 = $tmp244 == $tmp245;
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246};
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:87
org$frostlang$frostc$Symbol* $tmp249 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp250 = &((org$frostlang$frostc$Methods*) $tmp249)->methods;
org$frostlang$frostc$FixedArray* $tmp251 = *$tmp250;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp251)));
frost$collections$ListView* $tmp252 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local2) = ((frost$collections$ListView*) $tmp251);
goto block9;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:90
frost$core$Int64 $tmp253 = (frost$core$Int64) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s254, $tmp253);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:93
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp255 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp255);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$collections$Array* $tmp256 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local3) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:94
frost$collections$Array* $tmp257 = *(&local3);
org$frostlang$frostc$ASTNode** $tmp258 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp259 = *$tmp258;
frost$collections$Array$add$frost$collections$Array$T($tmp257, ((frost$core$Object*) $tmp259));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:95
frost$collections$Array* $tmp260 = *(&local3);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp261 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp262 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position* $tmp263 = &param0->position;
org$frostlang$frostc$Position $tmp264 = *$tmp263;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp261, $tmp262, $tmp264, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp260, ((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:96
org$frostlang$frostc$Compiler** $tmp265 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp266 = *$tmp265;
org$frostlang$frostc$Position* $tmp267 = &param0->position;
org$frostlang$frostc$Position $tmp268 = *$tmp267;
org$frostlang$frostc$IR$Value** $tmp269 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp270 = *$tmp269;
frost$collections$ListView* $tmp271 = *(&local2);
frost$collections$Array* $tmp272 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp273 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp273, $tmp274);
org$frostlang$frostc$Pair* $tmp275 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp266, $tmp268, $tmp270, $tmp271, ((frost$collections$ListView*) $tmp272), $tmp273);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$Pair* $tmp276 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local4) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:98
org$frostlang$frostc$Pair* $tmp277 = *(&local4);
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277 != NULL};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:99
org$frostlang$frostc$Pair* $tmp280 = *(&local4);
frost$core$Object** $tmp281 = &$tmp280->first;
frost$core$Object* $tmp282 = *$tmp281;
ITable* $tmp283 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp282))->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Int64 $tmp286 = $tmp284(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp282)));
frost$core$Int64 $tmp287 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:99:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
bool $tmp290 = $tmp288 == $tmp289;
frost$core$Bit $tmp291 = (frost$core$Bit) {$tmp290};
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s294, $tmp293);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:100
org$frostlang$frostc$Compiler** $tmp295 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp296 = *$tmp295;
org$frostlang$frostc$ASTNode** $tmp297 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp298 = *$tmp297;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp299 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp300 = (frost$core$Int64) {3u};
org$frostlang$frostc$Pair* $tmp301 = *(&local4);
frost$core$Object** $tmp302 = &$tmp301->first;
frost$core$Object* $tmp303 = *$tmp302;
frost$core$Int64 $tmp304 = (frost$core$Int64) {0u};
ITable* $tmp305 = ((frost$collections$ListView*) $tmp303)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$core$Object* $tmp308 = $tmp306(((frost$collections$ListView*) $tmp303), $tmp304);
frost$core$Int64 $tmp309 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int64):org.frostlang.frostc.Type from IndexLValue.frost:101:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp310 = &((org$frostlang$frostc$MethodRef*) $tmp308)->effectiveType;
org$frostlang$frostc$Type* $tmp311 = *$tmp310;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp312 = &$tmp311->_subtypes;
org$frostlang$frostc$FixedArray* $tmp313 = *$tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313 != NULL};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s317, $tmp316);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp318 = &$tmp311->_subtypes;
org$frostlang$frostc$FixedArray* $tmp319 = *$tmp318;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Object* $tmp320 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp319, $tmp309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp320)));
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Bit $tmp321 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp299, $tmp300, ((org$frostlang$frostc$Type*) $tmp320), $tmp321);
org$frostlang$frostc$IR$Value* $tmp322 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp296, $tmp298, $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$IR$Value** $tmp323 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp324 = *$tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$IR$Value** $tmp325 = &param0->index;
*$tmp325 = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp320)));
frost$core$Frost$unref$frost$core$Object$Q($tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:103
org$frostlang$frostc$IR$Value** $tmp326 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp327 = *$tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327 == NULL};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:105
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp330 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp331 = (frost$core$Int64) {7u};
frost$core$Int64 $tmp332 = (frost$core$Int64) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:105:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp333 = &(&local6)->value;
*$tmp333 = $tmp332;
org$frostlang$frostc$IR$Statement$ID $tmp334 = *(&local6);
*(&local5) = $tmp334;
org$frostlang$frostc$IR$Statement$ID $tmp335 = *(&local5);
$fn337 $tmp336 = ($fn337) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp338 = $tmp336(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp330, $tmp331, $tmp335, $tmp338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
org$frostlang$frostc$IR$Value** $tmp339 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp340 = *$tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
org$frostlang$frostc$IR$Value** $tmp341 = &param0->index;
*$tmp341 = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
goto block26;
block26:;
org$frostlang$frostc$Pair* $tmp342 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp343 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Symbol* $tmp345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:108
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp347 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp347);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$collections$Array* $tmp348 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local7) = $tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:109
frost$collections$Array* $tmp349 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp350 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp351 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position* $tmp352 = &param0->position;
org$frostlang$frostc$Position $tmp353 = *$tmp352;
org$frostlang$frostc$IR$Value** $tmp354 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp355 = *$tmp354;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp350, $tmp351, $tmp353, $tmp355);
frost$collections$Array$add$frost$collections$Array$T($tmp349, ((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:110
frost$collections$Array* $tmp356 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp357 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp358 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position* $tmp359 = &param0->position;
org$frostlang$frostc$Position $tmp360 = *$tmp359;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp357, $tmp358, $tmp360, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp356, ((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:111
org$frostlang$frostc$Compiler** $tmp361 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp362 = *$tmp361;
org$frostlang$frostc$Position* $tmp363 = &param0->position;
org$frostlang$frostc$Position $tmp364 = *$tmp363;
org$frostlang$frostc$IR$Value** $tmp365 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp366 = *$tmp365;
frost$collections$Array* $tmp367 = *(&local7);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp368 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp369 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp368, $tmp369);
org$frostlang$frostc$IR$Value* $tmp370 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp362, $tmp364, $tmp366, &$s371, ((frost$collections$ListView*) $tmp367), $tmp368);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$collections$Array* $tmp372 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local7) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(org$frostlang$frostc$lvalue$IndexLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp373 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp374 = *$tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlang$frostc$IR$Value** $tmp375 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp376 = *$tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$ASTNode** $tmp377 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp378 = *$tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
org$frostlang$frostc$IR$Value** $tmp379 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp380 = *$tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
return;

}

