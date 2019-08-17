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


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn30)(org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn38)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn77)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn104)(frost$core$Object*);
typedef frost$core$Bit (*$fn190)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn206)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn247)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn256)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn263)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn292)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn310)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn319)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn353)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn362)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn369)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn393)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn399)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn411)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 1065047121338683379, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:40
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:40:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp67 = &$tmp66->typeKind;
org$frostlang$frostc$Type$Kind $tmp68 = *$tmp67;
org$frostlang$frostc$Type$Kind$wrapper* $tmp69;
$tmp69 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp69->value = $tmp68;
frost$core$Int $tmp70 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local3) = $tmp66;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp80 = &$tmp66->_subtypes;
org$frostlang$frostc$FixedArray* $tmp81 = *$tmp80;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Int $tmp82 = (frost$core$Int) {0u};
frost$core$Object* $tmp83 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp81, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp83)));
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp83)));
goto block6;
block6:;
org$frostlang$frostc$Type* $tmp84 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$Type* $tmp85 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp84;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:55
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp87 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp88 = (frost$core$Int) {7u};
frost$core$Int $tmp89 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from Unary.frost:55:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp90 = &(&local7)->value;
*$tmp90 = $tmp89;
org$frostlang$frostc$IR$Statement$ID $tmp91 = *(&local7);
*(&local6) = $tmp91;
org$frostlang$frostc$IR$Statement$ID $tmp92 = *(&local6);
org$frostlang$frostc$Type* $tmp93 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp87, $tmp88, $tmp92, $tmp93);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$IR$Value* $tmp94 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local8) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:56
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp95 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp96 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp97 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp98 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp99 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp100 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp101 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp99, $tmp100, param1, $tmp101);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp102;
$tmp102 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp102->value = param2;
$fn104 $tmp103 = ($fn104) ((frost$core$Object*) $tmp102)->$class->vtable[0];
frost$core$String* $tmp105 = $tmp103(((frost$core$Object*) $tmp102));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp97, $tmp98, param1, $tmp99, $tmp105);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp106 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp106);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp95, $tmp96, param1, $tmp97, $tmp106);
org$frostlang$frostc$Type* $tmp107 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
org$frostlang$frostc$IR$Value* $tmp108 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp107;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$Type*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Unary$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Type* param4) {

frost$core$UInt64 local0;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Bit local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:68
frost$core$Int $tmp111 = param2.$rawValue;
frost$core$Int $tmp112 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:69:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 == $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:70
frost$core$Int* $tmp118 = &param3->$rawValue;
frost$core$Int $tmp119 = *$tmp118;
frost$core$Int $tmp120 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:71:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp126 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp127 = *$tmp126;
frost$core$UInt64* $tmp128 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp129 = *$tmp128;
*(&local0) = $tmp129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:72
frost$core$UInt64 $tmp130 = *(&local0);
frost$core$UInt64 $tmp131 = (frost$core$UInt64) {128u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:72:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp132 = $tmp130.value;
uint64_t $tmp133 = $tmp131.value;
bool $tmp134 = $tmp132 == $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:73
org$frostlang$frostc$Type** $tmp137 = &param0->BUILTIN_INT8_TYPE;
org$frostlang$frostc$Type* $tmp138 = *$tmp137;
org$frostlang$frostc$Pair* $tmp139 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp138, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
return $tmp139;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:75
frost$core$UInt64 $tmp140 = *(&local0);
frost$core$UInt64 $tmp141 = (frost$core$UInt64) {32768u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:75:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp142 = $tmp140.value;
uint64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 == $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:76
org$frostlang$frostc$Type** $tmp147 = &param0->BUILTIN_INT16_TYPE;
org$frostlang$frostc$Type* $tmp148 = *$tmp147;
org$frostlang$frostc$Pair* $tmp149 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp148, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
return $tmp149;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:78
frost$core$UInt64 $tmp150 = *(&local0);
frost$core$UInt64 $tmp151 = (frost$core$UInt64) {2147483648u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:78:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp152 = $tmp150.value;
uint64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 == $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:79
org$frostlang$frostc$Type** $tmp157 = &param0->BUILTIN_INT32_TYPE;
org$frostlang$frostc$Type* $tmp158 = *$tmp157;
org$frostlang$frostc$Pair* $tmp159 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp158, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
return $tmp159;
block15:;
goto block5;
block5:;
goto block1;
block3:;
frost$core$Int $tmp160 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:84:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp161 = $tmp111.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 == $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block17; else goto block1;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:85
org$frostlang$frostc$Type* $tmp166 = org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param1, param2, param3);
org$frostlang$frostc$Pair* $tmp167 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp166, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
return $tmp167;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:88
org$frostlang$frostc$Type* $tmp168 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
org$frostlang$frostc$Type* $tmp169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local1) = $tmp168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:89
org$frostlang$frostc$Type* $tmp170 = *(&local1);
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170 != NULL};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block21; else goto block20;
block21:;
org$frostlang$frostc$Type* $tmp173 = *(&local1);
org$frostlang$frostc$Type** $tmp174 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp175 = *$tmp174;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp176 = &((org$frostlang$frostc$Symbol*) $tmp173)->name;
frost$core$String* $tmp177 = *$tmp176;
frost$core$String** $tmp178 = &((org$frostlang$frostc$Symbol*) $tmp175)->name;
frost$core$String* $tmp179 = *$tmp178;
frost$core$Bit $tmp180 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp177, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp182 = &$tmp173->typeKind;
org$frostlang$frostc$Type$Kind $tmp183 = *$tmp182;
org$frostlang$frostc$Type$Kind$wrapper* $tmp184;
$tmp184 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp184->value = $tmp183;
org$frostlang$frostc$Type$Kind* $tmp185 = &$tmp175->typeKind;
org$frostlang$frostc$Type$Kind $tmp186 = *$tmp185;
org$frostlang$frostc$Type$Kind$wrapper* $tmp187;
$tmp187 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp187->value = $tmp186;
ITable* $tmp188 = ((frost$core$Equatable*) $tmp184)->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[0];
frost$core$Bit $tmp191 = $tmp189(((frost$core$Equatable*) $tmp184), ((frost$core$Equatable*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp187)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp184)));
*(&local2) = $tmp191;
goto block26;
block25:;
*(&local2) = $tmp180;
goto block26;
block26:;
frost$core$Bit $tmp192 = *(&local2);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block19; else goto block22;
block22:;
org$frostlang$frostc$Type* $tmp194 = *(&local1);
frost$core$Bit $tmp195 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:91
org$frostlang$frostc$Type* $tmp197 = *(&local1);
org$frostlang$frostc$Pair* $tmp198 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp197, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$Type* $tmp199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp198;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:93
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp200 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp201 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp202 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp203 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp204->value = param2;
$fn206 $tmp205 = ($fn206) ((frost$core$Object*) $tmp204)->$class->vtable[0];
frost$core$String* $tmp207 = $tmp205(((frost$core$Object*) $tmp204));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp202, $tmp203, param1, param3, $tmp207);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp208 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp208);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp200, $tmp201, param1, $tmp202, $tmp208);
org$frostlang$frostc$Pair* $tmp209 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp200, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
org$frostlang$frostc$Type* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp209;

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
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:102
org$frostlang$frostc$IR** $tmp211 = &param0->ir;
org$frostlang$frostc$IR* $tmp212 = *$tmp211;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
org$frostlang$frostc$IR* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = $tmp212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:103
frost$core$Int $tmp214 = param2.$rawValue;
frost$core$Int $tmp215 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:104:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 == $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:105
frost$core$Int* $tmp221 = &param3->$rawValue;
frost$core$Int $tmp222 = *$tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:106:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp229 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp230 = *$tmp229;
frost$core$UInt64* $tmp231 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp232 = *$tmp231;
*(&local1) = $tmp232;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:107
frost$core$UInt64 $tmp233 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp234 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp233, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$IR* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp234;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp236 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp237 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp236, $tmp237);
org$frostlang$frostc$IR$Value* $tmp238 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp236);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$IR$Value* $tmp239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local2) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:112
org$frostlang$frostc$IR$Value* $tmp240 = *(&local2);
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240 == NULL};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:115
org$frostlang$frostc$IR$Value* $tmp245 = *(&local2);
$fn247 $tmp246 = ($fn247) $tmp245->$class->vtable[2];
org$frostlang$frostc$Type* $tmp248 = $tmp246($tmp245);
frost$core$Bit $tmp249 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp248);
bool $tmp250 = $tmp249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
if ($tmp250) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:116
org$frostlang$frostc$IR* $tmp251 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp252 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp253 = (frost$core$Int) {15u};
org$frostlang$frostc$IR$Value* $tmp254 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp252, $tmp253, param1, $tmp254);
$fn256 $tmp255 = ($fn256) $tmp251->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp257 = $tmp255($tmp251, $tmp252);
*(&local3) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:117
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp258 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp259 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp260 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp261 = *(&local2);
$fn263 $tmp262 = ($fn263) $tmp261->$class->vtable[2];
org$frostlang$frostc$Type* $tmp264 = $tmp262($tmp261);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp258, $tmp259, $tmp260, $tmp264);
org$frostlang$frostc$IR$Value* $tmp265 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp258, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
org$frostlang$frostc$IR$Value* $tmp266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp265;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:119
org$frostlang$frostc$IR$Value* $tmp268 = *(&local2);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp269 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp270 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp269, $tmp270);
org$frostlang$frostc$IR$Value* $tmp271 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp268, &$s272, ((frost$collections$ListView*) $tmp269), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
org$frostlang$frostc$IR$Value* $tmp273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp274 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp271;
block3:;
frost$core$Int $tmp275 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:121:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp276 = $tmp214.value;
int64_t $tmp277 = $tmp275.value;
bool $tmp278 = $tmp276 == $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:122
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp281 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp282 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp281, $tmp282);
org$frostlang$frostc$IR$Value* $tmp283 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp281);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlang$frostc$IR$Value* $tmp284 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local4) = $tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:123
org$frostlang$frostc$IR$Value* $tmp285 = *(&local4);
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285 == NULL};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:126
org$frostlang$frostc$IR$Value* $tmp290 = *(&local4);
$fn292 $tmp291 = ($fn292) $tmp290->$class->vtable[2];
org$frostlang$frostc$Type* $tmp293 = $tmp291($tmp290);
org$frostlang$frostc$Type** $tmp294 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp295 = *$tmp294;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:126:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp296 = &((org$frostlang$frostc$Symbol*) $tmp293)->name;
frost$core$String* $tmp297 = *$tmp296;
frost$core$String** $tmp298 = &((org$frostlang$frostc$Symbol*) $tmp295)->name;
frost$core$String* $tmp299 = *$tmp298;
frost$core$Bit $tmp300 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp297, $tmp299);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Type$Kind* $tmp302 = &$tmp293->typeKind;
org$frostlang$frostc$Type$Kind $tmp303 = *$tmp302;
org$frostlang$frostc$Type$Kind$wrapper* $tmp304;
$tmp304 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp304->value = $tmp303;
org$frostlang$frostc$Type$Kind* $tmp305 = &$tmp295->typeKind;
org$frostlang$frostc$Type$Kind $tmp306 = *$tmp305;
org$frostlang$frostc$Type$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp307->value = $tmp306;
ITable* $tmp308 = ((frost$core$Equatable*) $tmp304)->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
frost$core$Bit $tmp311 = $tmp309(((frost$core$Equatable*) $tmp304), ((frost$core$Equatable*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp304)));
*(&local5) = $tmp311;
goto block22;
block21:;
*(&local5) = $tmp300;
goto block22;
block22:;
frost$core$Bit $tmp312 = *(&local5);
bool $tmp313 = $tmp312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
if ($tmp313) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:127
org$frostlang$frostc$IR* $tmp314 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp315 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp316 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp317 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp315, $tmp316, param1, $tmp317);
$fn319 $tmp318 = ($fn319) $tmp314->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp320 = $tmp318($tmp314, $tmp315);
*(&local6) = $tmp320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp321 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp322 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp323 = *(&local6);
org$frostlang$frostc$Type** $tmp324 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp325 = *$tmp324;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp321, $tmp322, $tmp323, $tmp325);
org$frostlang$frostc$IR$Value* $tmp326 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp321, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
org$frostlang$frostc$IR$Value* $tmp327 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp326;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:131
org$frostlang$frostc$IR$Value* $tmp329 = *(&local4);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp330 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp331 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp330, $tmp331);
org$frostlang$frostc$IR$Value* $tmp332 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp329, &$s333, ((frost$collections$ListView*) $tmp330), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
org$frostlang$frostc$IR$Value* $tmp334 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp332;
block13:;
frost$core$Int $tmp336 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:133:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp337 = $tmp214.value;
int64_t $tmp338 = $tmp336.value;
bool $tmp339 = $tmp337 == $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:134
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp342 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp343 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp342, $tmp343);
org$frostlang$frostc$IR$Value* $tmp344 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp342);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$IR$Value* $tmp345 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local7) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:135
org$frostlang$frostc$IR$Value* $tmp346 = *(&local7);
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346 == NULL};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp349 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp350 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:138
org$frostlang$frostc$IR$Value* $tmp351 = *(&local7);
$fn353 $tmp352 = ($fn353) $tmp351->$class->vtable[2];
org$frostlang$frostc$Type* $tmp354 = $tmp352($tmp351);
frost$core$Bit $tmp355 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp354);
bool $tmp356 = $tmp355.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
if ($tmp356) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:139
org$frostlang$frostc$IR* $tmp357 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp358 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp359 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp360 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp358, $tmp359, param1, $tmp360);
$fn362 $tmp361 = ($fn362) $tmp357->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp363 = $tmp361($tmp357, $tmp358);
*(&local8) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:140
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp364 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp365 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp366 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp367 = *(&local7);
$fn369 $tmp368 = ($fn369) $tmp367->$class->vtable[2];
org$frostlang$frostc$Type* $tmp370 = $tmp368($tmp367);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp364, $tmp365, $tmp366, $tmp370);
org$frostlang$frostc$IR$Value* $tmp371 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp364, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$IR$Value* $tmp372 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp371;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:142
org$frostlang$frostc$IR$Value* $tmp374 = *(&local7);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp375 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp376 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp375, $tmp376);
org$frostlang$frostc$IR$Value* $tmp377 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp374, &$s378, ((frost$collections$ListView*) $tmp375), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
org$frostlang$frostc$IR$Value* $tmp379 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp377;
block24:;
frost$core$Int $tmp381 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:144:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp382 = $tmp214.value;
int64_t $tmp383 = $tmp381.value;
bool $tmp384 = $tmp382 == $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block30; else goto block1;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:145
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp387 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp388 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp387, $tmp388);
org$frostlang$frostc$IR$Value* $tmp389 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp387);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$IR$Value* $tmp390 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local9) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:146
org$frostlang$frostc$IR$Value* $tmp391 = *(&local9);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[2];
org$frostlang$frostc$Type* $tmp394 = $tmp392($tmp391);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$Type* $tmp395 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local10) = $tmp394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:153
org$frostlang$frostc$IR$Value* $tmp396 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp397 = *(&local9);
$fn399 $tmp398 = ($fn399) $tmp397->$class->vtable[2];
org$frostlang$frostc$Type* $tmp400 = $tmp398($tmp397);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:153:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp401 = &$tmp400->typeKind;
org$frostlang$frostc$Type$Kind $tmp402 = *$tmp401;
org$frostlang$frostc$Type$Kind$wrapper* $tmp403;
$tmp403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp403->value = $tmp402;
frost$core$Int $tmp404 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp405 = &(&local13)->$rawValue;
*$tmp405 = $tmp404;
org$frostlang$frostc$Type$Kind $tmp406 = *(&local13);
*(&local12) = $tmp406;
org$frostlang$frostc$Type$Kind $tmp407 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp408;
$tmp408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp408->value = $tmp407;
ITable* $tmp409 = ((frost$core$Equatable*) $tmp403)->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[1];
frost$core$Bit $tmp412 = $tmp410(((frost$core$Equatable*) $tmp403), ((frost$core$Equatable*) $tmp408));
bool $tmp413 = $tmp412.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp403)));
if ($tmp413) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local11) = $tmp400;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
goto block32;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp414 = &$tmp400->_subtypes;
org$frostlang$frostc$FixedArray* $tmp415 = *$tmp414;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Int $tmp416 = (frost$core$Int) {0u};
frost$core$Object* $tmp417 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp415, $tmp416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp417)));
frost$core$Frost$unref$frost$core$Object$Q($tmp417);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp417)));
goto block32;
block32:;
org$frostlang$frostc$Type* $tmp418 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp419 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp396, $tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
org$frostlang$frostc$Type* $tmp420 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$Type* $tmp421 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp422 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp423 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp419;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:159
frost$core$Int $tmp424 = (frost$core$Int) {159u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s425, $tmp424);
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

