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
typedef org$frostlang$frostc$Type* (*$fn144)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn181)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn206)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn209)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn216)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn219)(frost$core$Object*);
typedef frost$core$Int (*$fn284)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn306)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$Type* (*$fn335)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, 2733503844731485070, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, 5442801271376830411, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20", 3, -6214412130393370758, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };

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
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120 != NULL};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block11; else goto block12;
block12:;
frost$core$Int $tmp123 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Object* $tmp126 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp120, $tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp126)));
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Bit $tmp127 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp106, $tmp107, ((org$frostlang$frostc$Type*) $tmp126), $tmp127);
org$frostlang$frostc$IR$Value* $tmp128 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp103, $tmp105, $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
org$frostlang$frostc$IR$Value** $tmp129 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp130 = *$tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$IR$Value** $tmp131 = &param0->index;
*$tmp131 = $tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp126)));
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
goto block5;
block5:;
org$frostlang$frostc$Pair* $tmp132 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:58
org$frostlang$frostc$IR$Value** $tmp133 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp134 = *$tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134 == NULL};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp137 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp138 = (frost$core$Int) {7u};
frost$core$Int $tmp139 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:59:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp140 = &(&local4)->value;
*$tmp140 = $tmp139;
org$frostlang$frostc$IR$Statement$ID $tmp141 = *(&local4);
*(&local3) = $tmp141;
org$frostlang$frostc$IR$Statement$ID $tmp142 = *(&local3);
$fn144 $tmp143 = ($fn144) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp145 = $tmp143(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp137, $tmp138, $tmp142, $tmp145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
org$frostlang$frostc$IR$Value** $tmp146 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp147 = *$tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$IR$Value** $tmp148 = &param0->index;
*$tmp148 = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:62
org$frostlang$frostc$Compiler** $tmp149 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp150 = *$tmp149;
org$frostlang$frostc$Position* $tmp151 = &param0->position;
org$frostlang$frostc$Position $tmp152 = *$tmp151;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp153 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp154 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp155 = &param0->position;
org$frostlang$frostc$Position $tmp156 = *$tmp155;
org$frostlang$frostc$IR$Value** $tmp157 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp158 = *$tmp157;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp153, $tmp154, $tmp156, $tmp158);
frost$core$Int $tmp159 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp160 = &(&local6)->$rawValue;
*$tmp160 = $tmp159;
org$frostlang$frostc$expression$Binary$Operator $tmp161 = *(&local6);
*(&local5) = $tmp161;
org$frostlang$frostc$expression$Binary$Operator $tmp162 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp163 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp164 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp165 = &param0->position;
org$frostlang$frostc$Position $tmp166 = *$tmp165;
org$frostlang$frostc$IR$Value** $tmp167 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp168 = *$tmp167;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp163, $tmp164, $tmp166, $tmp168);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp169 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp170 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp169, $tmp170);
org$frostlang$frostc$IR$Value* $tmp171 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp150, $tmp152, $tmp153, $tmp162, $tmp163, $tmp169);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
return $tmp171;

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
org$frostlang$frostc$IR$Value** $tmp172 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp173 = *$tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173 == NULL};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:70
org$frostlang$frostc$Compiler** $tmp176 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp177 = *$tmp176;
org$frostlang$frostc$IR$Value** $tmp178 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp179 = *$tmp178;
$fn181 $tmp180 = ($fn181) $tmp179->$class->vtable[2];
org$frostlang$frostc$Type* $tmp182 = $tmp180($tmp179);
org$frostlang$frostc$ClassDecl* $tmp183 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q($tmp177, $tmp182);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local0) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:71
org$frostlang$frostc$ClassDecl* $tmp185 = *(&local0);
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185 == NULL};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:72
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:74
org$frostlang$frostc$Compiler** $tmp189 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp190 = *$tmp189;
org$frostlang$frostc$ClassDecl* $tmp191 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp192 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp190, $tmp191);
org$frostlang$frostc$Symbol* $tmp193 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp192, &$s194);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$Symbol* $tmp195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local1) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:75
org$frostlang$frostc$Symbol* $tmp196 = *(&local1);
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196 == NULL};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:76
org$frostlang$frostc$Compiler** $tmp199 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp200 = *$tmp199;
org$frostlang$frostc$Position* $tmp201 = &param0->position;
org$frostlang$frostc$Position $tmp202 = *$tmp201;
org$frostlang$frostc$IR$Value** $tmp203 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp204 = *$tmp203;
$fn206 $tmp205 = ($fn206) $tmp204->$class->vtable[2];
org$frostlang$frostc$Type* $tmp207 = $tmp205($tmp204);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn209 $tmp208 = ($fn209) ((frost$core$Object*) $tmp207)->$class->vtable[0];
frost$core$String* $tmp210 = $tmp208(((frost$core$Object*) $tmp207));
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s212, $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp211, &$s214);
$fn216 $tmp215 = ($fn216) param1->$class->vtable[2];
org$frostlang$frostc$Type* $tmp217 = $tmp215(param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:77:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn219 $tmp218 = ($fn219) ((frost$core$Object*) $tmp217)->$class->vtable[0];
frost$core$String* $tmp220 = $tmp218(((frost$core$Object*) $tmp217));
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s222, $tmp220);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp221, &$s224);
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp213, $tmp223);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp200, $tmp202, $tmp225);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:78
org$frostlang$frostc$Symbol* $tmp226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:80
*(&local2) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:81
org$frostlang$frostc$Symbol* $tmp228 = *(&local1);
org$frostlang$frostc$Symbol$Kind* $tmp229 = &$tmp228->kind;
org$frostlang$frostc$Symbol$Kind $tmp230 = *$tmp229;
frost$core$Int $tmp231 = $tmp230.$rawValue;
frost$core$Int $tmp232 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:82:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232.value;
bool $tmp235 = $tmp233 == $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:83
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp238 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp238)));
frost$collections$ListView* $tmp239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local2) = ((frost$collections$ListView*) $tmp238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:84
frost$collections$ListView* $tmp240 = *(&local2);
org$frostlang$frostc$Symbol* $tmp241 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp240), ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp241)));
goto block9;
block11:;
frost$core$Int $tmp242 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:86:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp243 = $tmp231.value;
int64_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 == $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:87
org$frostlang$frostc$Symbol* $tmp248 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp249 = &((org$frostlang$frostc$Methods*) $tmp248)->methods;
org$frostlang$frostc$FixedArray* $tmp250 = *$tmp249;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp250)));
frost$collections$ListView* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = ((frost$collections$ListView*) $tmp250);
goto block9;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:90
frost$core$Int $tmp252 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s253, $tmp252);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:93
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp254 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp254);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$collections$Array* $tmp255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local3) = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:94
frost$collections$Array* $tmp256 = *(&local3);
org$frostlang$frostc$ASTNode** $tmp257 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp258 = *$tmp257;
frost$collections$Array$add$frost$collections$Array$T($tmp256, ((frost$core$Object*) $tmp258));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:95
frost$collections$Array* $tmp259 = *(&local3);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp260 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp261 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp262 = &param0->position;
org$frostlang$frostc$Position $tmp263 = *$tmp262;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp260, $tmp261, $tmp263, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp259, ((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:96
org$frostlang$frostc$Compiler** $tmp264 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp265 = *$tmp264;
org$frostlang$frostc$Position* $tmp266 = &param0->position;
org$frostlang$frostc$Position $tmp267 = *$tmp266;
org$frostlang$frostc$IR$Value** $tmp268 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp269 = *$tmp268;
frost$collections$ListView* $tmp270 = *(&local2);
frost$collections$Array* $tmp271 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp272 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp273 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp272, $tmp273);
org$frostlang$frostc$Pair* $tmp274 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q($tmp265, $tmp267, $tmp269, $tmp270, ((frost$collections$ListView*) $tmp271), $tmp272);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$Pair* $tmp275 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local4) = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:98
org$frostlang$frostc$Pair* $tmp276 = *(&local4);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276 != NULL};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:99
org$frostlang$frostc$Pair* $tmp279 = *(&local4);
frost$core$Object** $tmp280 = &$tmp279->first;
frost$core$Object* $tmp281 = *$tmp280;
ITable* $tmp282 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp281))->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Int $tmp285 = $tmp283(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp281)));
frost$core$Int $tmp286 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:99:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 == $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block19; else goto block20;
block20:;
frost$core$Int $tmp292 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s293, $tmp292);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:100
org$frostlang$frostc$Compiler** $tmp294 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp295 = *$tmp294;
org$frostlang$frostc$ASTNode** $tmp296 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp297 = *$tmp296;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp298 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp299 = (frost$core$Int) {3u};
org$frostlang$frostc$Pair* $tmp300 = *(&local4);
frost$core$Object** $tmp301 = &$tmp300->first;
frost$core$Object* $tmp302 = *$tmp301;
frost$core$Int $tmp303 = (frost$core$Int) {0u};
ITable* $tmp304 = ((frost$collections$ListView*) $tmp302)->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$Object* $tmp307 = $tmp305(((frost$collections$ListView*) $tmp302), $tmp303);
frost$core$Int $tmp308 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:101:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp309 = &((org$frostlang$frostc$MethodRef*) $tmp307)->effectiveType;
org$frostlang$frostc$Type* $tmp310 = *$tmp309;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp311 = &$tmp310->_subtypes;
org$frostlang$frostc$FixedArray* $tmp312 = *$tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312 != NULL};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block23; else goto block24;
block24:;
frost$core$Int $tmp315 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Object* $tmp318 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp312, $tmp308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp318)));
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Bit $tmp319 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp298, $tmp299, ((org$frostlang$frostc$Type*) $tmp318), $tmp319);
org$frostlang$frostc$IR$Value* $tmp320 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp295, $tmp297, $tmp298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
org$frostlang$frostc$IR$Value** $tmp321 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp322 = *$tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$IR$Value** $tmp323 = &param0->index;
*$tmp323 = $tmp320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp318)));
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:103
org$frostlang$frostc$IR$Value** $tmp324 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp325 = *$tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325 == NULL};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:105
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp328 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp329 = (frost$core$Int) {7u};
frost$core$Int $tmp330 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:105:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp331 = &(&local6)->value;
*$tmp331 = $tmp330;
org$frostlang$frostc$IR$Statement$ID $tmp332 = *(&local6);
*(&local5) = $tmp332;
org$frostlang$frostc$IR$Statement$ID $tmp333 = *(&local5);
$fn335 $tmp334 = ($fn335) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp336 = $tmp334(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp328, $tmp329, $tmp333, $tmp336);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
org$frostlang$frostc$IR$Value** $tmp337 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp338 = *$tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
org$frostlang$frostc$IR$Value** $tmp339 = &param0->index;
*$tmp339 = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
goto block26;
block26:;
org$frostlang$frostc$Pair* $tmp340 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp341 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp342 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Symbol* $tmp343 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp344 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:108
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp345 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp345);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$collections$Array* $tmp346 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local7) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:109
frost$collections$Array* $tmp347 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp348 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp349 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp350 = &param0->position;
org$frostlang$frostc$Position $tmp351 = *$tmp350;
org$frostlang$frostc$IR$Value** $tmp352 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp353 = *$tmp352;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp348, $tmp349, $tmp351, $tmp353);
frost$collections$Array$add$frost$collections$Array$T($tmp347, ((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:110
frost$collections$Array* $tmp354 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp355 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp356 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp357 = &param0->position;
org$frostlang$frostc$Position $tmp358 = *$tmp357;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp355, $tmp356, $tmp358, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp354, ((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:111
org$frostlang$frostc$Compiler** $tmp359 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp360 = *$tmp359;
org$frostlang$frostc$Position* $tmp361 = &param0->position;
org$frostlang$frostc$Position $tmp362 = *$tmp361;
org$frostlang$frostc$IR$Value** $tmp363 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp364 = *$tmp363;
frost$collections$Array* $tmp365 = *(&local7);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp366 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp367 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp366, $tmp367);
org$frostlang$frostc$IR$Value* $tmp368 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp360, $tmp362, $tmp364, &$s369, ((frost$collections$ListView*) $tmp365), $tmp366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$collections$Array* $tmp370 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local7) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(org$frostlang$frostc$lvalue$IndexLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp371 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp372 = *$tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$IR$Value** $tmp373 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp374 = *$tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlang$frostc$ASTNode** $tmp375 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp376 = *$tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$IR$Value** $tmp377 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp378 = *$tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
return;

}

