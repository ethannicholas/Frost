#include "org/frostlang/frostc/expression/Unary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/io/Console.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn30)(org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn38)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn77)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn110)(frost$core$Object*);
typedef frost$core$Bit (*$fn196)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn212)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn253)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn262)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn269)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn298)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn316)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn325)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn359)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn368)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn375)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn399)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn411)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn416)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn428)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn443)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn453)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn465)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn486)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn489)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 1065047121338683379, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x73\x74\x69\x6e\x67\x20\x74\x6f\x20", 11, 3799204575391144481, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x6e\x6f\x6e\x2d\x6e\x75\x6c\x6c", 21, -7939137719441648491, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:40
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:40:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp2 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp3 = *$tmp2;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int $tmp5 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp6 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
org$frostlang$frostc$FixedArray* $tmp13 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int $tmp14 = (frost$core$Int) {0u};
frost$core$Object* $tmp15 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp13, $tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp15)));
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp15)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp16 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Type* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp16;

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Unary$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$expression$Unary$Operator local0;
org$frostlang$frostc$expression$Unary$Operator local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:39
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp18->value = param2;
frost$core$Int $tmp19 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:39:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp20 = &(&local1)->$rawValue;
*$tmp20 = $tmp19;
org$frostlang$frostc$expression$Unary$Operator $tmp21 = *(&local1);
*(&local0) = $tmp21;
org$frostlang$frostc$expression$Unary$Operator $tmp22 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp23->value = $tmp22;
ITable* $tmp24 = ((frost$core$Equatable*) $tmp18)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$core$Bit $tmp27 = $tmp25(((frost$core$Equatable*) $tmp18), ((frost$core$Equatable*) $tmp23));
bool $tmp28 = $tmp27.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp18)));
if ($tmp28) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:40
frost$collections$CollectionView* $tmp29 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param3);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp31 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Unary.frost:40:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp32 = &$tmp31->pointer;
*$tmp32 = ((frost$core$Int8*) org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp33 = &$tmp31->target;
frost$core$Immutable* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Immutable** $tmp35 = &$tmp31->target;
*$tmp35 = ((frost$core$Immutable*) NULL);
ITable* $tmp36 = $tmp29->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[9];
frost$collections$Array* $tmp39 = $tmp37($tmp29, ((frost$core$MutableMethod*) $tmp31));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp39)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return ((frost$collections$CollectionView*) $tmp39);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:42
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp40 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp41 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp42 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp43 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp44->value = param2;
$fn46 $tmp45 = ($fn46) ((frost$core$Object*) $tmp44)->$class->vtable[0];
frost$core$String* $tmp47 = $tmp45(((frost$core$Object*) $tmp44));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp42, $tmp43, param1, param3, $tmp47);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp48 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp48);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp40, $tmp41, param1, $tmp42, $tmp48);
frost$collections$CollectionView* $tmp49 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return $tmp49;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$expression$Unary$Operator local1;
org$frostlang$frostc$expression$Unary$Operator local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:49
org$frostlang$frostc$Type* $tmp50 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
org$frostlang$frostc$Type* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local0) = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:50
org$frostlang$frostc$Type* $tmp52 = *(&local0);
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52 != NULL};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:51
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp55;
$tmp55 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp55->value = param2;
frost$core$Int $tmp56 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:51:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp57 = &(&local2)->$rawValue;
*$tmp57 = $tmp56;
org$frostlang$frostc$expression$Unary$Operator $tmp58 = *(&local2);
*(&local1) = $tmp58;
org$frostlang$frostc$expression$Unary$Operator $tmp59 = *(&local1);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp60->value = $tmp59;
ITable* $tmp61 = ((frost$core$Equatable*) $tmp55)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp55), ((frost$core$Equatable*) $tmp60));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp55)));
if ($tmp65) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:52
org$frostlang$frostc$Type* $tmp66 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:52:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp67 = &$tmp66->typeKind;
org$frostlang$frostc$Type$Kind $tmp68 = *$tmp67;
org$frostlang$frostc$Type$Kind$wrapper* $tmp69;
$tmp69 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp69->value = $tmp68;
frost$core$Int $tmp70 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp71 = &(&local5)->$rawValue;
*$tmp71 = $tmp70;
org$frostlang$frostc$Type$Kind $tmp72 = *(&local5);
*(&local4) = $tmp72;
org$frostlang$frostc$Type$Kind $tmp73 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp74;
$tmp74 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp74->value = $tmp73;
ITable* $tmp75 = ((frost$core$Equatable*) $tmp69)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[1];
frost$core$Bit $tmp78 = $tmp76(((frost$core$Equatable*) $tmp69), ((frost$core$Equatable*) $tmp74));
bool $tmp79 = $tmp78.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp74)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp69)));
if ($tmp79) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local3) = $tmp66;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp80 = &$tmp66->_subtypes;
org$frostlang$frostc$FixedArray* $tmp81 = *$tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81 != NULL};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block11; else goto block12;
block12:;
frost$core$Int $tmp84 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s85, $tmp84);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp86 = &$tmp66->_subtypes;
org$frostlang$frostc$FixedArray* $tmp87 = *$tmp86;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Int $tmp88 = (frost$core$Int) {0u};
frost$core$Object* $tmp89 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp87, $tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp89)));
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp89);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp89)));
goto block6;
block6:;
org$frostlang$frostc$Type* $tmp90 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$Type* $tmp91 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp90;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:55
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp93 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp94 = (frost$core$Int) {7u};
frost$core$Int $tmp95 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from Unary.frost:55:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp96 = &(&local7)->value;
*$tmp96 = $tmp95;
org$frostlang$frostc$IR$Statement$ID $tmp97 = *(&local7);
*(&local6) = $tmp97;
org$frostlang$frostc$IR$Statement$ID $tmp98 = *(&local6);
org$frostlang$frostc$Type* $tmp99 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp93, $tmp94, $tmp98, $tmp99);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$IR$Value* $tmp100 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local8) = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:56
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp101 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp102 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp103 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp104 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp105 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp106 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp107 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp105, $tmp106, param1, $tmp107);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp108;
$tmp108 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp108->value = param2;
$fn110 $tmp109 = ($fn110) ((frost$core$Object*) $tmp108)->$class->vtable[0];
frost$core$String* $tmp111 = $tmp109(((frost$core$Object*) $tmp108));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp103, $tmp104, param1, $tmp105, $tmp111);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp112 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp112);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp101, $tmp102, param1, $tmp103, $tmp112);
org$frostlang$frostc$Type* $tmp113 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$IR$Value* $tmp114 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp115 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp113;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$Type*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Unary$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Type* param4) {

frost$core$UInt64 local0;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:68
frost$core$Int $tmp117 = param2.$rawValue;
frost$core$Int $tmp118 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:69:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118.value;
bool $tmp121 = $tmp119 == $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:70
frost$core$Int* $tmp124 = &param3->$rawValue;
frost$core$Int $tmp125 = *$tmp124;
frost$core$Int $tmp126 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:71:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 == $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp132 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp133 = *$tmp132;
frost$core$UInt64* $tmp134 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp135 = *$tmp134;
*(&local0) = $tmp135;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:72
frost$core$UInt64 $tmp136 = *(&local0);
frost$core$UInt64 $tmp137 = (frost$core$UInt64) {128u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:72:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp138 = $tmp136.value;
uint64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 == $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:73
org$frostlang$frostc$Type** $tmp143 = &param0->BUILTIN_INT8_TYPE;
org$frostlang$frostc$Type* $tmp144 = *$tmp143;
org$frostlang$frostc$Pair* $tmp145 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp144, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return $tmp145;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:75
frost$core$UInt64 $tmp146 = *(&local0);
frost$core$UInt64 $tmp147 = (frost$core$UInt64) {32768u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:75:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp148 = $tmp146.value;
uint64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 == $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:76
org$frostlang$frostc$Type** $tmp153 = &param0->BUILTIN_INT16_TYPE;
org$frostlang$frostc$Type* $tmp154 = *$tmp153;
org$frostlang$frostc$Pair* $tmp155 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp154, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
return $tmp155;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:78
frost$core$UInt64 $tmp156 = *(&local0);
frost$core$UInt64 $tmp157 = (frost$core$UInt64) {2147483648u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:78:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp158 = $tmp156.value;
uint64_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 == $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:79
org$frostlang$frostc$Type** $tmp163 = &param0->BUILTIN_INT32_TYPE;
org$frostlang$frostc$Type* $tmp164 = *$tmp163;
org$frostlang$frostc$Pair* $tmp165 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp164, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
return $tmp165;
block15:;
goto block5;
block5:;
goto block1;
block3:;
frost$core$Int $tmp166 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:84:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp167 = $tmp117.value;
int64_t $tmp168 = $tmp166.value;
bool $tmp169 = $tmp167 == $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block17; else goto block1;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:85
org$frostlang$frostc$Type* $tmp172 = org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param1, param2, param3);
org$frostlang$frostc$Pair* $tmp173 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp172, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
return $tmp173;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:88
org$frostlang$frostc$Type* $tmp174 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local1) = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:89
org$frostlang$frostc$Type* $tmp176 = *(&local1);
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176 != NULL};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block21; else goto block20;
block21:;
org$frostlang$frostc$Type* $tmp179 = *(&local1);
org$frostlang$frostc$Type** $tmp180 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp181 = *$tmp180;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp182 = &((org$frostlang$frostc$Symbol*) $tmp179)->name;
frost$core$String* $tmp183 = *$tmp182;
frost$core$String** $tmp184 = &((org$frostlang$frostc$Symbol*) $tmp181)->name;
frost$core$String* $tmp185 = *$tmp184;
frost$core$Bit $tmp186 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp183, $tmp185);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp188 = &$tmp179->typeKind;
org$frostlang$frostc$Type$Kind $tmp189 = *$tmp188;
org$frostlang$frostc$Type$Kind$wrapper* $tmp190;
$tmp190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp190->value = $tmp189;
org$frostlang$frostc$Type$Kind* $tmp191 = &$tmp181->typeKind;
org$frostlang$frostc$Type$Kind $tmp192 = *$tmp191;
org$frostlang$frostc$Type$Kind$wrapper* $tmp193;
$tmp193 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp193->value = $tmp192;
ITable* $tmp194 = ((frost$core$Equatable*) $tmp190)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[0];
frost$core$Bit $tmp197 = $tmp195(((frost$core$Equatable*) $tmp190), ((frost$core$Equatable*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp190)));
*(&local2) = $tmp197;
goto block26;
block25:;
*(&local2) = $tmp186;
goto block26;
block26:;
frost$core$Bit $tmp198 = *(&local2);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block19; else goto block22;
block22:;
org$frostlang$frostc$Type* $tmp200 = *(&local1);
frost$core$Bit $tmp201 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:91
org$frostlang$frostc$Type* $tmp203 = *(&local1);
org$frostlang$frostc$Pair* $tmp204 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp203, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$Type* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp204;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:93
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp206 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp207 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp208 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp209 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp210->value = param2;
$fn212 $tmp211 = ($fn212) ((frost$core$Object*) $tmp210)->$class->vtable[0];
frost$core$String* $tmp213 = $tmp211(((frost$core$Object*) $tmp210));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp208, $tmp209, param1, param3, $tmp213);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp214 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp214);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp206, $tmp207, param1, $tmp208, $tmp214);
org$frostlang$frostc$Pair* $tmp215 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp206, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$Type* $tmp216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp215;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type* local15 = NULL;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:102
org$frostlang$frostc$IR** $tmp217 = &param0->ir;
org$frostlang$frostc$IR* $tmp218 = *$tmp217;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
org$frostlang$frostc$IR* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = $tmp218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:103
frost$core$Int $tmp220 = param2.$rawValue;
frost$core$Int $tmp221 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:104:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp222 = $tmp220.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 == $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:105
frost$core$Int* $tmp227 = &param3->$rawValue;
frost$core$Int $tmp228 = *$tmp227;
frost$core$Int $tmp229 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:106:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp228.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp235 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp236 = *$tmp235;
frost$core$UInt64* $tmp237 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp238 = *$tmp237;
*(&local1) = $tmp238;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:107
frost$core$UInt64 $tmp239 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp240 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp239, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
org$frostlang$frostc$IR* $tmp241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp240;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp242 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp243 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp242, $tmp243);
org$frostlang$frostc$IR$Value* $tmp244 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp242);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
org$frostlang$frostc$IR$Value* $tmp245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local2) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:112
org$frostlang$frostc$IR$Value* $tmp246 = *(&local2);
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246 == NULL};
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp250 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:115
org$frostlang$frostc$IR$Value* $tmp251 = *(&local2);
$fn253 $tmp252 = ($fn253) $tmp251->$class->vtable[2];
org$frostlang$frostc$Type* $tmp254 = $tmp252($tmp251);
frost$core$Bit $tmp255 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp254);
bool $tmp256 = $tmp255.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
if ($tmp256) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:116
org$frostlang$frostc$IR* $tmp257 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp258 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp259 = (frost$core$Int) {15u};
org$frostlang$frostc$IR$Value* $tmp260 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp258, $tmp259, param1, $tmp260);
$fn262 $tmp261 = ($fn262) $tmp257->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp263 = $tmp261($tmp257, $tmp258);
*(&local3) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:117
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp264 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp265 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp266 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp267 = *(&local2);
$fn269 $tmp268 = ($fn269) $tmp267->$class->vtable[2];
org$frostlang$frostc$Type* $tmp270 = $tmp268($tmp267);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp264, $tmp265, $tmp266, $tmp270);
org$frostlang$frostc$IR$Value* $tmp271 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp264, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
org$frostlang$frostc$IR$Value* $tmp272 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp271;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:119
org$frostlang$frostc$IR$Value* $tmp274 = *(&local2);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp275 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp276 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp275, $tmp276);
org$frostlang$frostc$IR$Value* $tmp277 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp274, &$s278, ((frost$collections$ListView*) $tmp275), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$IR$Value* $tmp279 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp277;
block3:;
frost$core$Int $tmp281 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:121:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp282 = $tmp220.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 == $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:122
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp287 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp288 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp287, $tmp288);
org$frostlang$frostc$IR$Value* $tmp289 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp287);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$IR$Value* $tmp290 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local4) = $tmp289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:123
org$frostlang$frostc$IR$Value* $tmp291 = *(&local4);
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291 == NULL};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp294 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:126
org$frostlang$frostc$IR$Value* $tmp296 = *(&local4);
$fn298 $tmp297 = ($fn298) $tmp296->$class->vtable[2];
org$frostlang$frostc$Type* $tmp299 = $tmp297($tmp296);
org$frostlang$frostc$Type** $tmp300 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp301 = *$tmp300;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:126:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp302 = &((org$frostlang$frostc$Symbol*) $tmp299)->name;
frost$core$String* $tmp303 = *$tmp302;
frost$core$String** $tmp304 = &((org$frostlang$frostc$Symbol*) $tmp301)->name;
frost$core$String* $tmp305 = *$tmp304;
frost$core$Bit $tmp306 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp303, $tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Type$Kind* $tmp308 = &$tmp299->typeKind;
org$frostlang$frostc$Type$Kind $tmp309 = *$tmp308;
org$frostlang$frostc$Type$Kind$wrapper* $tmp310;
$tmp310 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp310->value = $tmp309;
org$frostlang$frostc$Type$Kind* $tmp311 = &$tmp301->typeKind;
org$frostlang$frostc$Type$Kind $tmp312 = *$tmp311;
org$frostlang$frostc$Type$Kind$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp313->value = $tmp312;
ITable* $tmp314 = ((frost$core$Equatable*) $tmp310)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Bit $tmp317 = $tmp315(((frost$core$Equatable*) $tmp310), ((frost$core$Equatable*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp310)));
*(&local5) = $tmp317;
goto block22;
block21:;
*(&local5) = $tmp306;
goto block22;
block22:;
frost$core$Bit $tmp318 = *(&local5);
bool $tmp319 = $tmp318.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
if ($tmp319) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:127
org$frostlang$frostc$IR* $tmp320 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp321 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp322 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp323 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp321, $tmp322, param1, $tmp323);
$fn325 $tmp324 = ($fn325) $tmp320->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp326 = $tmp324($tmp320, $tmp321);
*(&local6) = $tmp326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp327 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp328 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp329 = *(&local6);
org$frostlang$frostc$Type** $tmp330 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp331 = *$tmp330;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp327, $tmp328, $tmp329, $tmp331);
org$frostlang$frostc$IR$Value* $tmp332 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp327, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
org$frostlang$frostc$IR$Value* $tmp333 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp332;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:131
org$frostlang$frostc$IR$Value* $tmp335 = *(&local4);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp336 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp337 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp336, $tmp337);
org$frostlang$frostc$IR$Value* $tmp338 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp335, &$s339, ((frost$collections$ListView*) $tmp336), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$IR$Value* $tmp340 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp338;
block13:;
frost$core$Int $tmp342 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:133:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp343 = $tmp220.value;
int64_t $tmp344 = $tmp342.value;
bool $tmp345 = $tmp343 == $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:134
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp348 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp349 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp348, $tmp349);
org$frostlang$frostc$IR$Value* $tmp350 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp348);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
org$frostlang$frostc$IR$Value* $tmp351 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local7) = $tmp350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:135
org$frostlang$frostc$IR$Value* $tmp352 = *(&local7);
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352 == NULL};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp355 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp356 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:138
org$frostlang$frostc$IR$Value* $tmp357 = *(&local7);
$fn359 $tmp358 = ($fn359) $tmp357->$class->vtable[2];
org$frostlang$frostc$Type* $tmp360 = $tmp358($tmp357);
frost$core$Bit $tmp361 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp360);
bool $tmp362 = $tmp361.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
if ($tmp362) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:139
org$frostlang$frostc$IR* $tmp363 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp364 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp365 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp366 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp364, $tmp365, param1, $tmp366);
$fn368 $tmp367 = ($fn368) $tmp363->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp369 = $tmp367($tmp363, $tmp364);
*(&local8) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:140
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp370 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp371 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp372 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp373 = *(&local7);
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[2];
org$frostlang$frostc$Type* $tmp376 = $tmp374($tmp373);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp370, $tmp371, $tmp372, $tmp376);
org$frostlang$frostc$IR$Value* $tmp377 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp370, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$IR$Value* $tmp378 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp379 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp377;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:142
org$frostlang$frostc$IR$Value* $tmp380 = *(&local7);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp381 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp382 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp381, $tmp382);
org$frostlang$frostc$IR$Value* $tmp383 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp380, &$s384, ((frost$collections$ListView*) $tmp381), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$IR$Value* $tmp385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp386 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp383;
block24:;
frost$core$Int $tmp387 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:144:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp388 = $tmp220.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block30; else goto block1;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:145
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp393 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp394 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp393, $tmp394);
org$frostlang$frostc$IR$Value* $tmp395 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp393);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$IR$Value* $tmp396 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local9) = $tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:146
org$frostlang$frostc$IR$Value* $tmp397 = *(&local9);
$fn399 $tmp398 = ($fn399) $tmp397->$class->vtable[2];
org$frostlang$frostc$Type* $tmp400 = $tmp398($tmp397);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:146:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp401 = &$tmp400->typeKind;
org$frostlang$frostc$Type$Kind $tmp402 = *$tmp401;
org$frostlang$frostc$Type$Kind$wrapper* $tmp403;
$tmp403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp403->value = $tmp402;
frost$core$Int $tmp404 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp405 = &(&local11)->$rawValue;
*$tmp405 = $tmp404;
org$frostlang$frostc$Type$Kind $tmp406 = *(&local11);
*(&local10) = $tmp406;
org$frostlang$frostc$Type$Kind $tmp407 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp408;
$tmp408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp408->value = $tmp407;
ITable* $tmp409 = ((frost$core$Equatable*) $tmp403)->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[0];
frost$core$Bit $tmp412 = $tmp410(((frost$core$Equatable*) $tmp403), ((frost$core$Equatable*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp403)));
bool $tmp413 = $tmp412.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
if ($tmp413) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:147
org$frostlang$frostc$IR$Value* $tmp414 = *(&local9);
$fn416 $tmp415 = ($fn416) $tmp414->$class->vtable[2];
org$frostlang$frostc$Type* $tmp417 = $tmp415($tmp414);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:147:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp418 = &$tmp417->typeKind;
org$frostlang$frostc$Type$Kind $tmp419 = *$tmp418;
org$frostlang$frostc$Type$Kind$wrapper* $tmp420;
$tmp420 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp420->value = $tmp419;
frost$core$Int $tmp421 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp422 = &(&local14)->$rawValue;
*$tmp422 = $tmp421;
org$frostlang$frostc$Type$Kind $tmp423 = *(&local14);
*(&local13) = $tmp423;
org$frostlang$frostc$Type$Kind $tmp424 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp425;
$tmp425 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp425->value = $tmp424;
ITable* $tmp426 = ((frost$core$Equatable*) $tmp420)->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[1];
frost$core$Bit $tmp429 = $tmp427(((frost$core$Equatable*) $tmp420), ((frost$core$Equatable*) $tmp425));
bool $tmp430 = $tmp429.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp425)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp420)));
if ($tmp430) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local12) = $tmp417;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp431 = &$tmp417->_subtypes;
org$frostlang$frostc$FixedArray* $tmp432 = *$tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432 != NULL};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block41; else goto block42;
block42:;
frost$core$Int $tmp435 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s436, $tmp435);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp437 = &$tmp417->_subtypes;
org$frostlang$frostc$FixedArray* $tmp438 = *$tmp437;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Int $tmp439 = (frost$core$Int) {0u};
frost$core$Object* $tmp440 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp438, $tmp439);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp440)));
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp440)));
goto block36;
block36:;
org$frostlang$frostc$Type* $tmp441 = *(&local12);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Unary.frost:147:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn443 $tmp442 = ($fn443) ((frost$core$Object*) $tmp441)->$class->vtable[0];
frost$core$String* $tmp444 = $tmp442(((frost$core$Object*) $tmp441));
frost$core$String* $tmp445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s446, $tmp444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp445, &$s448);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Unary.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp447);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s449);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:148
org$frostlang$frostc$IR$Value* $tmp450 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp451 = *(&local9);
$fn453 $tmp452 = ($fn453) $tmp451->$class->vtable[2];
org$frostlang$frostc$Type* $tmp454 = $tmp452($tmp451);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:148:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp455 = &$tmp454->typeKind;
org$frostlang$frostc$Type$Kind $tmp456 = *$tmp455;
org$frostlang$frostc$Type$Kind$wrapper* $tmp457;
$tmp457 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp457->value = $tmp456;
frost$core$Int $tmp458 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp459 = &(&local17)->$rawValue;
*$tmp459 = $tmp458;
org$frostlang$frostc$Type$Kind $tmp460 = *(&local17);
*(&local16) = $tmp460;
org$frostlang$frostc$Type$Kind $tmp461 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp462;
$tmp462 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp462->value = $tmp461;
ITable* $tmp463 = ((frost$core$Equatable*) $tmp457)->$class->itable;
while ($tmp463->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp463 = $tmp463->next;
}
$fn465 $tmp464 = $tmp463->methods[1];
frost$core$Bit $tmp466 = $tmp464(((frost$core$Equatable*) $tmp457), ((frost$core$Equatable*) $tmp462));
bool $tmp467 = $tmp466.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp462)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp457)));
if ($tmp467) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local15) = $tmp454;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
goto block46;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp468 = &$tmp454->_subtypes;
org$frostlang$frostc$FixedArray* $tmp469 = *$tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469 != NULL};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block51; else goto block52;
block52:;
frost$core$Int $tmp472 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s473, $tmp472);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp474 = &$tmp454->_subtypes;
org$frostlang$frostc$FixedArray* $tmp475 = *$tmp474;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Int $tmp476 = (frost$core$Int) {0u};
frost$core$Object* $tmp477 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp475, $tmp476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp477)));
frost$core$Frost$unref$frost$core$Object$Q($tmp477);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp477)));
goto block46;
block46:;
org$frostlang$frostc$Type* $tmp478 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp479 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp450, $tmp478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
org$frostlang$frostc$Type* $tmp480 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
org$frostlang$frostc$Type* $tmp481 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$IR$Value* $tmp482 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp479;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:150
org$frostlang$frostc$IR$Value* $tmp484 = *(&local9);
$fn486 $tmp485 = ($fn486) $tmp484->$class->vtable[2];
org$frostlang$frostc$Type* $tmp487 = $tmp485($tmp484);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Unary.frost:150:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn489 $tmp488 = ($fn489) ((frost$core$Object*) $tmp487)->$class->vtable[0];
frost$core$String* $tmp490 = $tmp488(((frost$core$Object*) $tmp487));
frost$core$String* $tmp491 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s492, $tmp490);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$String* $tmp493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp491, &$s494);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp493);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
org$frostlang$frostc$IR$Value* $tmp495 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:153
frost$core$Int $tmp496 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s497, $tmp496);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* param0) {

return;

}
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

