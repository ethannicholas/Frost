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
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/String/Index.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn35)(org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn43)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn54)(frost$core$Object*);
typedef frost$core$Bit (*$fn71)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn117)(frost$core$Object*);
typedef frost$core$Bit (*$fn210)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn226)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn267)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn276)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn283)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn312)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn330)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn339)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn373)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn382)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn389)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn418)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn432)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn446)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn476)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn490)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn520)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn536)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn550)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn565)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn584)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn608)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn620)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn640)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn643)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 1065047121338683379, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 133, -6858303649085076227, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, -7705315543961432915, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x6e\x6f\x6e\x2d\x6e\x75\x6c\x6c", 21, -7939137719441648491, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:42
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:42:56
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
frost$collections$CollectionView* local2 = NULL;
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
*(&local2) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$collections$CollectionView* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local2) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:41
frost$collections$CollectionView* $tmp31 = *(&local2);
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31 != NULL};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:42
frost$collections$CollectionView* $tmp34 = *(&local2);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp36 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Unary.frost:42:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp37 = &$tmp36->pointer;
*$tmp37 = ((frost$core$Int8*) org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp38 = &$tmp36->target;
frost$core$Immutable* $tmp39 = *$tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Immutable** $tmp40 = &$tmp36->target;
*$tmp40 = ((frost$core$Immutable*) NULL);
ITable* $tmp41 = $tmp34->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[9];
frost$collections$Array* $tmp44 = $tmp42($tmp34, ((frost$core$MutableMethod*) $tmp36));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp44)));
frost$collections$CollectionView* $tmp45 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local2) = ((frost$collections$CollectionView*) $tmp44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:44
frost$collections$CollectionView* $tmp46 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$collections$CollectionView* $tmp47 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local2) = ((frost$collections$CollectionView*) NULL);
return $tmp46;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:46
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp48 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp49 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp50 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp51 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp52;
$tmp52 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp52->value = param2;
$fn54 $tmp53 = ($fn54) ((frost$core$Object*) $tmp52)->$class->vtable[0];
frost$core$String* $tmp55 = $tmp53(((frost$core$Object*) $tmp52));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp50, $tmp51, param1, param3, $tmp55);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp56 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp56);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp48, $tmp49, param1, $tmp50, $tmp56);
frost$collections$CollectionView* $tmp57 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
return $tmp57;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:53
org$frostlang$frostc$Type* $tmp58 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$Type* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:54
org$frostlang$frostc$Type* $tmp60 = *(&local0);
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60 != NULL};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:55
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp63->value = param2;
frost$core$Int $tmp64 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:55:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp65 = &(&local2)->$rawValue;
*$tmp65 = $tmp64;
org$frostlang$frostc$expression$Unary$Operator $tmp66 = *(&local2);
*(&local1) = $tmp66;
org$frostlang$frostc$expression$Unary$Operator $tmp67 = *(&local1);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp68;
$tmp68 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp68->value = $tmp67;
ITable* $tmp69 = ((frost$core$Equatable*) $tmp63)->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$core$Bit $tmp72 = $tmp70(((frost$core$Equatable*) $tmp63), ((frost$core$Equatable*) $tmp68));
bool $tmp73 = $tmp72.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp68)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp63)));
if ($tmp73) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:56
org$frostlang$frostc$Type* $tmp74 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:56:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp75 = &$tmp74->typeKind;
org$frostlang$frostc$Type$Kind $tmp76 = *$tmp75;
org$frostlang$frostc$Type$Kind$wrapper* $tmp77;
$tmp77 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp77->value = $tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp79 = &(&local5)->$rawValue;
*$tmp79 = $tmp78;
org$frostlang$frostc$Type$Kind $tmp80 = *(&local5);
*(&local4) = $tmp80;
org$frostlang$frostc$Type$Kind $tmp81 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp82->value = $tmp81;
ITable* $tmp83 = ((frost$core$Equatable*) $tmp77)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp77), ((frost$core$Equatable*) $tmp82));
bool $tmp87 = $tmp86.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp82)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
if ($tmp87) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local3) = $tmp74;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp88 = &$tmp74->_subtypes;
org$frostlang$frostc$FixedArray* $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89 != NULL};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block11; else goto block12;
block12:;
frost$core$Int $tmp92 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Int $tmp95 = (frost$core$Int) {0u};
frost$core$Object* $tmp96 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp89, $tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp96)));
frost$core$Frost$unref$frost$core$Object$Q($tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp96)));
goto block6;
block6:;
org$frostlang$frostc$Type* $tmp97 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
org$frostlang$frostc$Type* $tmp98 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp97;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp100 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp101 = (frost$core$Int) {7u};
frost$core$Int $tmp102 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from Unary.frost:59:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp103 = &(&local7)->value;
*$tmp103 = $tmp102;
org$frostlang$frostc$IR$Statement$ID $tmp104 = *(&local7);
*(&local6) = $tmp104;
org$frostlang$frostc$IR$Statement$ID $tmp105 = *(&local6);
org$frostlang$frostc$Type* $tmp106 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp100, $tmp101, $tmp105, $tmp106);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$IR$Value* $tmp107 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local8) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:60
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp108 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp109 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp110 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp111 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp112 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp113 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp114 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp112, $tmp113, param1, $tmp114);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp115;
$tmp115 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp115->value = param2;
$fn117 $tmp116 = ($fn117) ((frost$core$Object*) $tmp115)->$class->vtable[0];
frost$core$String* $tmp118 = $tmp116(((frost$core$Object*) $tmp115));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp110, $tmp111, param1, $tmp112, $tmp118);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp119 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp119);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp108, $tmp109, param1, $tmp110, $tmp119);
org$frostlang$frostc$Type* $tmp120 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$IR$Value* $tmp121 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp120;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$Type*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Unary$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Type* param4) {

frost$core$UInt64 local0;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:72
frost$core$Int $tmp124 = param2.$rawValue;
frost$core$Int $tmp125 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:73:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:74
frost$core$Int* $tmp131 = &param3->$rawValue;
frost$core$Int $tmp132 = *$tmp131;
frost$core$Int $tmp133 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:75:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133.value;
bool $tmp136 = $tmp134 == $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp139 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp140 = *$tmp139;
frost$core$UInt64* $tmp141 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp142 = *$tmp141;
*(&local0) = $tmp142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:76
frost$core$UInt64 $tmp143 = *(&local0);
frost$core$UInt64 $tmp144 = (frost$core$UInt64) {128u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:76:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp145 = $tmp143.value;
uint64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:77
org$frostlang$frostc$Type** $tmp150 = &param0->BUILTIN_INT8_TYPE;
org$frostlang$frostc$Type* $tmp151 = *$tmp150;
org$frostlang$frostc$Pair* $tmp152 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp151, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
return $tmp152;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:79
frost$core$UInt64 $tmp153 = *(&local0);
frost$core$UInt64 $tmp154 = (frost$core$UInt64) {32768u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:79:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp155 = $tmp153.value;
uint64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 == $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:80
org$frostlang$frostc$Type** $tmp160 = &param0->BUILTIN_INT16_TYPE;
org$frostlang$frostc$Type* $tmp161 = *$tmp160;
org$frostlang$frostc$Pair* $tmp162 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp161, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
return $tmp162;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:82
frost$core$UInt64 $tmp163 = *(&local0);
frost$core$UInt64 $tmp164 = (frost$core$UInt64) {2147483648u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:82:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp165 = $tmp163.value;
uint64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:83
org$frostlang$frostc$Type** $tmp170 = &param0->BUILTIN_INT32_TYPE;
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
org$frostlang$frostc$Pair* $tmp172 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp171, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
return $tmp172;
block15:;
goto block5;
block5:;
goto block1;
block3:;
frost$core$Int $tmp173 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:88:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp174 = $tmp124.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 == $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block17; else goto block1;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:89
org$frostlang$frostc$Type* $tmp179 = org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param1, param2, param3);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
org$frostlang$frostc$Type* $tmp180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local1) = $tmp179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:90
org$frostlang$frostc$Type* $tmp181 = *(&local1);
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181 == NULL};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:93
org$frostlang$frostc$Type* $tmp185 = *(&local1);
org$frostlang$frostc$Pair* $tmp186 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp185, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$Type* $tmp187 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp186;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:96
org$frostlang$frostc$Type* $tmp188 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$Type* $tmp189 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local2) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:97
org$frostlang$frostc$Type* $tmp190 = *(&local2);
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190 != NULL};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block23; else goto block22;
block23:;
org$frostlang$frostc$Type* $tmp193 = *(&local2);
org$frostlang$frostc$Type** $tmp194 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp195 = *$tmp194;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:97:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp196 = &((org$frostlang$frostc$Symbol*) $tmp193)->name;
frost$core$String* $tmp197 = *$tmp196;
frost$core$String** $tmp198 = &((org$frostlang$frostc$Symbol*) $tmp195)->name;
frost$core$String* $tmp199 = *$tmp198;
frost$core$Bit $tmp200 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp197, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp202 = &$tmp193->typeKind;
org$frostlang$frostc$Type$Kind $tmp203 = *$tmp202;
org$frostlang$frostc$Type$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp204->value = $tmp203;
org$frostlang$frostc$Type$Kind* $tmp205 = &$tmp195->typeKind;
org$frostlang$frostc$Type$Kind $tmp206 = *$tmp205;
org$frostlang$frostc$Type$Kind$wrapper* $tmp207;
$tmp207 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp207->value = $tmp206;
ITable* $tmp208 = ((frost$core$Equatable*) $tmp204)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[0];
frost$core$Bit $tmp211 = $tmp209(((frost$core$Equatable*) $tmp204), ((frost$core$Equatable*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp207)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp204)));
*(&local3) = $tmp211;
goto block28;
block27:;
*(&local3) = $tmp200;
goto block28;
block28:;
frost$core$Bit $tmp212 = *(&local3);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block21; else goto block24;
block24:;
org$frostlang$frostc$Type* $tmp214 = *(&local2);
frost$core$Bit $tmp215 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:99
org$frostlang$frostc$Type* $tmp217 = *(&local2);
org$frostlang$frostc$Pair* $tmp218 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp217, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
org$frostlang$frostc$Type* $tmp219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp218;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:101
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp220 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp221 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp222 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp223 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp224->value = param2;
$fn226 $tmp225 = ($fn226) ((frost$core$Object*) $tmp224)->$class->vtable[0];
frost$core$String* $tmp227 = $tmp225(((frost$core$Object*) $tmp224));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp222, $tmp223, param1, param3, $tmp227);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp228 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp228);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp220, $tmp221, param1, $tmp222, $tmp228);
org$frostlang$frostc$Pair* $tmp229 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp220, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
org$frostlang$frostc$Type* $tmp230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp229;

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
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type* local21 = NULL;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:110
org$frostlang$frostc$IR** $tmp231 = &param0->ir;
org$frostlang$frostc$IR* $tmp232 = *$tmp231;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$IR* $tmp233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = $tmp232;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:111
frost$core$Int $tmp234 = param2.$rawValue;
frost$core$Int $tmp235 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:112:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:113
frost$core$Int* $tmp241 = &param3->$rawValue;
frost$core$Int $tmp242 = *$tmp241;
frost$core$Int $tmp243 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:114:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243.value;
bool $tmp246 = $tmp244 == $tmp245;
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246};
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp249 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp250 = *$tmp249;
frost$core$UInt64* $tmp251 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp252 = *$tmp251;
*(&local1) = $tmp252;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:115
frost$core$UInt64 $tmp253 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp254 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp253, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
org$frostlang$frostc$IR* $tmp255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp254;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:119
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp256 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp257 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp256, $tmp257);
org$frostlang$frostc$IR$Value* $tmp258 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp256);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
org$frostlang$frostc$IR$Value* $tmp259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local2) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:120
org$frostlang$frostc$IR$Value* $tmp260 = *(&local2);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260 == NULL};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp263 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:123
org$frostlang$frostc$IR$Value* $tmp265 = *(&local2);
$fn267 $tmp266 = ($fn267) $tmp265->$class->vtable[2];
org$frostlang$frostc$Type* $tmp268 = $tmp266($tmp265);
frost$core$Bit $tmp269 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp268);
bool $tmp270 = $tmp269.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
if ($tmp270) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:124
org$frostlang$frostc$IR* $tmp271 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp272 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp273 = (frost$core$Int) {15u};
org$frostlang$frostc$IR$Value* $tmp274 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp272, $tmp273, param1, $tmp274);
$fn276 $tmp275 = ($fn276) $tmp271->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp277 = $tmp275($tmp271, $tmp272);
*(&local3) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:125
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp278 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp279 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp280 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp281 = *(&local2);
$fn283 $tmp282 = ($fn283) $tmp281->$class->vtable[2];
org$frostlang$frostc$Type* $tmp284 = $tmp282($tmp281);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp278, $tmp279, $tmp280, $tmp284);
org$frostlang$frostc$IR$Value* $tmp285 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp278, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$IR$Value* $tmp286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp285;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:127
org$frostlang$frostc$IR$Value* $tmp288 = *(&local2);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp289 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp290 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp289, $tmp290);
org$frostlang$frostc$IR$Value* $tmp291 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp288, &$s292, ((frost$collections$ListView*) $tmp289), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$IR$Value* $tmp293 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp291;
block3:;
frost$core$Int $tmp295 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:129:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp296 = $tmp234.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 == $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:130
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp301 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp302 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp301, $tmp302);
org$frostlang$frostc$IR$Value* $tmp303 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp301);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
org$frostlang$frostc$IR$Value* $tmp304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local4) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:131
org$frostlang$frostc$IR$Value* $tmp305 = *(&local4);
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305 == NULL};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp308 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:134
org$frostlang$frostc$IR$Value* $tmp310 = *(&local4);
$fn312 $tmp311 = ($fn312) $tmp310->$class->vtable[2];
org$frostlang$frostc$Type* $tmp313 = $tmp311($tmp310);
org$frostlang$frostc$Type** $tmp314 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp315 = *$tmp314;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:134:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp316 = &((org$frostlang$frostc$Symbol*) $tmp313)->name;
frost$core$String* $tmp317 = *$tmp316;
frost$core$String** $tmp318 = &((org$frostlang$frostc$Symbol*) $tmp315)->name;
frost$core$String* $tmp319 = *$tmp318;
frost$core$Bit $tmp320 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp317, $tmp319);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Type$Kind* $tmp322 = &$tmp313->typeKind;
org$frostlang$frostc$Type$Kind $tmp323 = *$tmp322;
org$frostlang$frostc$Type$Kind$wrapper* $tmp324;
$tmp324 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp324->value = $tmp323;
org$frostlang$frostc$Type$Kind* $tmp325 = &$tmp315->typeKind;
org$frostlang$frostc$Type$Kind $tmp326 = *$tmp325;
org$frostlang$frostc$Type$Kind$wrapper* $tmp327;
$tmp327 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp327->value = $tmp326;
ITable* $tmp328 = ((frost$core$Equatable*) $tmp324)->$class->itable;
while ($tmp328->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp328 = $tmp328->next;
}
$fn330 $tmp329 = $tmp328->methods[0];
frost$core$Bit $tmp331 = $tmp329(((frost$core$Equatable*) $tmp324), ((frost$core$Equatable*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp327)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp324)));
*(&local5) = $tmp331;
goto block22;
block21:;
*(&local5) = $tmp320;
goto block22;
block22:;
frost$core$Bit $tmp332 = *(&local5);
bool $tmp333 = $tmp332.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
if ($tmp333) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:135
org$frostlang$frostc$IR* $tmp334 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp335 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp336 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp337 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp335, $tmp336, param1, $tmp337);
$fn339 $tmp338 = ($fn339) $tmp334->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp340 = $tmp338($tmp334, $tmp335);
*(&local6) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp341 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp342 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp343 = *(&local6);
org$frostlang$frostc$Type** $tmp344 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp345 = *$tmp344;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp341, $tmp342, $tmp343, $tmp345);
org$frostlang$frostc$IR$Value* $tmp346 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp341, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
org$frostlang$frostc$IR$Value* $tmp347 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp346;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:139
org$frostlang$frostc$IR$Value* $tmp349 = *(&local4);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp350 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp351 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp350, $tmp351);
org$frostlang$frostc$IR$Value* $tmp352 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp349, &$s353, ((frost$collections$ListView*) $tmp350), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
org$frostlang$frostc$IR$Value* $tmp354 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp355 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp352;
block13:;
frost$core$Int $tmp356 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:141:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp357 = $tmp234.value;
int64_t $tmp358 = $tmp356.value;
bool $tmp359 = $tmp357 == $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:142
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp362 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp363 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp362, $tmp363);
org$frostlang$frostc$IR$Value* $tmp364 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp362);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$IR$Value* $tmp365 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local7) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:143
org$frostlang$frostc$IR$Value* $tmp366 = *(&local7);
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366 == NULL};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp369 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp370 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:146
org$frostlang$frostc$IR$Value* $tmp371 = *(&local7);
$fn373 $tmp372 = ($fn373) $tmp371->$class->vtable[2];
org$frostlang$frostc$Type* $tmp374 = $tmp372($tmp371);
frost$core$Bit $tmp375 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp374);
bool $tmp376 = $tmp375.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
if ($tmp376) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:147
org$frostlang$frostc$IR* $tmp377 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp378 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp379 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp380 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp378, $tmp379, param1, $tmp380);
$fn382 $tmp381 = ($fn382) $tmp377->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp383 = $tmp381($tmp377, $tmp378);
*(&local8) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp384 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp385 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp386 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp387 = *(&local7);
$fn389 $tmp388 = ($fn389) $tmp387->$class->vtable[2];
org$frostlang$frostc$Type* $tmp390 = $tmp388($tmp387);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp384, $tmp385, $tmp386, $tmp390);
org$frostlang$frostc$IR$Value* $tmp391 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp384, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
org$frostlang$frostc$IR$Value* $tmp392 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp393 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp391;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:150
org$frostlang$frostc$IR$Value* $tmp394 = *(&local7);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp395 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp396 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp395, $tmp396);
org$frostlang$frostc$IR$Value* $tmp397 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp394, &$s398, ((frost$collections$ListView*) $tmp395), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$IR$Value* $tmp399 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp400 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp397;
block24:;
frost$core$Int $tmp401 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:152:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp402 = $tmp234.value;
int64_t $tmp403 = $tmp401.value;
bool $tmp404 = $tmp402 == $tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block30; else goto block1;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:153
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp407 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp408 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp407, $tmp408);
org$frostlang$frostc$IR$Value* $tmp409 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp407);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
org$frostlang$frostc$IR$Value* $tmp410 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local9) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:154
org$frostlang$frostc$IR$Value* $tmp411 = *(&local9);
frost$core$Bit $tmp412 = (frost$core$Bit) {$tmp411 == NULL};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp414 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:157
org$frostlang$frostc$IR$Value* $tmp416 = *(&local9);
$fn418 $tmp417 = ($fn418) $tmp416->$class->vtable[2];
org$frostlang$frostc$Type* $tmp419 = $tmp417($tmp416);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
org$frostlang$frostc$Type* $tmp420 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local10) = $tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:158
org$frostlang$frostc$Type* $tmp421 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:158:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp422 = &$tmp421->typeKind;
org$frostlang$frostc$Type$Kind $tmp423 = *$tmp422;
org$frostlang$frostc$Type$Kind$wrapper* $tmp424;
$tmp424 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp424->value = $tmp423;
frost$core$Int $tmp425 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp426 = &(&local12)->$rawValue;
*$tmp426 = $tmp425;
org$frostlang$frostc$Type$Kind $tmp427 = *(&local12);
*(&local11) = $tmp427;
org$frostlang$frostc$Type$Kind $tmp428 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = $tmp428;
ITable* $tmp430 = ((frost$core$Equatable*) $tmp424)->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$core$Bit $tmp433 = $tmp431(((frost$core$Equatable*) $tmp424), ((frost$core$Equatable*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp429)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp424)));
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block34; else goto block38;
block38:;
org$frostlang$frostc$Type* $tmp435 = *(&local10);
org$frostlang$frostc$Type$Kind* $tmp436 = &$tmp435->typeKind;
org$frostlang$frostc$Type$Kind $tmp437 = *$tmp436;
org$frostlang$frostc$Type$Kind$wrapper* $tmp438;
$tmp438 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp438->value = $tmp437;
frost$core$Int $tmp439 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Unary.frost:159:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp440 = &(&local14)->$rawValue;
*$tmp440 = $tmp439;
org$frostlang$frostc$Type$Kind $tmp441 = *(&local14);
*(&local13) = $tmp441;
org$frostlang$frostc$Type$Kind $tmp442 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp443;
$tmp443 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp443->value = $tmp442;
ITable* $tmp444 = ((frost$core$Equatable*) $tmp438)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$core$Bit $tmp447 = $tmp445(((frost$core$Equatable*) $tmp438), ((frost$core$Equatable*) $tmp443));
bool $tmp448 = $tmp447.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp443)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp438)));
if ($tmp448) goto block41; else goto block37;
block41:;
org$frostlang$frostc$Type* $tmp449 = *(&local10);
frost$core$Weak** $tmp450 = &$tmp449->genericClassParameter;
frost$core$Weak* $tmp451 = *$tmp450;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Unary.frost:160:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp452 = &$tmp451->_valid;
frost$core$Bit $tmp453 = *$tmp452;
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block45; else goto block46;
block46:;
frost$core$Int $tmp455 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s456, $tmp455);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp457 = &$tmp451->value;
frost$core$Object* $tmp458 = *$tmp457;
frost$core$Frost$ref$frost$core$Object$Q($tmp458);
frost$core$Bit $tmp459 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp458) != NULL};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block47; else goto block48;
block48:;
frost$core$Int $tmp461 = (frost$core$Int) {160u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s462, $tmp461, &$s463);
abort(); // unreachable
block47:;
org$frostlang$frostc$Type** $tmp464 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp458)->bound;
org$frostlang$frostc$Type* $tmp465 = *$tmp464;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:160:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp466 = &$tmp465->typeKind;
org$frostlang$frostc$Type$Kind $tmp467 = *$tmp466;
org$frostlang$frostc$Type$Kind$wrapper* $tmp468;
$tmp468 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp468->value = $tmp467;
frost$core$Int $tmp469 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp470 = &(&local16)->$rawValue;
*$tmp470 = $tmp469;
org$frostlang$frostc$Type$Kind $tmp471 = *(&local16);
*(&local15) = $tmp471;
org$frostlang$frostc$Type$Kind $tmp472 = *(&local15);
org$frostlang$frostc$Type$Kind$wrapper* $tmp473;
$tmp473 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp473->value = $tmp472;
ITable* $tmp474 = ((frost$core$Equatable*) $tmp468)->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$core$Bit $tmp477 = $tmp475(((frost$core$Equatable*) $tmp468), ((frost$core$Equatable*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp473)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp468)));
bool $tmp478 = $tmp477.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp458);
if ($tmp478) goto block34; else goto block37;
block37:;
org$frostlang$frostc$Type* $tmp479 = *(&local10);
org$frostlang$frostc$Type$Kind* $tmp480 = &$tmp479->typeKind;
org$frostlang$frostc$Type$Kind $tmp481 = *$tmp480;
org$frostlang$frostc$Type$Kind$wrapper* $tmp482;
$tmp482 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp482->value = $tmp481;
frost$core$Int $tmp483 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Unary.frost:161:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp484 = &(&local18)->$rawValue;
*$tmp484 = $tmp483;
org$frostlang$frostc$Type$Kind $tmp485 = *(&local18);
*(&local17) = $tmp485;
org$frostlang$frostc$Type$Kind $tmp486 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp487;
$tmp487 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp487->value = $tmp486;
ITable* $tmp488 = ((frost$core$Equatable*) $tmp482)->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$core$Bit $tmp491 = $tmp489(((frost$core$Equatable*) $tmp482), ((frost$core$Equatable*) $tmp487));
bool $tmp492 = $tmp491.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp487)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp482)));
if ($tmp492) goto block51; else goto block36;
block51:;
org$frostlang$frostc$Type* $tmp493 = *(&local10);
frost$core$Weak** $tmp494 = &$tmp493->genericMethodParameter;
frost$core$Weak* $tmp495 = *$tmp494;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Unary.frost:162:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp496 = &$tmp495->_valid;
frost$core$Bit $tmp497 = *$tmp496;
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block55; else goto block56;
block56:;
frost$core$Int $tmp499 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s500, $tmp499);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp501 = &$tmp495->value;
frost$core$Object* $tmp502 = *$tmp501;
frost$core$Frost$ref$frost$core$Object$Q($tmp502);
frost$core$Bit $tmp503 = (frost$core$Bit) {((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp502) != NULL};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block57; else goto block58;
block58:;
frost$core$Int $tmp505 = (frost$core$Int) {162u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s506, $tmp505, &$s507);
abort(); // unreachable
block57:;
org$frostlang$frostc$Type** $tmp508 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp502)->bound;
org$frostlang$frostc$Type* $tmp509 = *$tmp508;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:162:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp510 = &$tmp509->typeKind;
org$frostlang$frostc$Type$Kind $tmp511 = *$tmp510;
org$frostlang$frostc$Type$Kind$wrapper* $tmp512;
$tmp512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp512->value = $tmp511;
frost$core$Int $tmp513 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp514 = &(&local20)->$rawValue;
*$tmp514 = $tmp513;
org$frostlang$frostc$Type$Kind $tmp515 = *(&local20);
*(&local19) = $tmp515;
org$frostlang$frostc$Type$Kind $tmp516 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp517;
$tmp517 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp517->value = $tmp516;
ITable* $tmp518 = ((frost$core$Equatable*) $tmp512)->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[0];
frost$core$Bit $tmp521 = $tmp519(((frost$core$Equatable*) $tmp512), ((frost$core$Equatable*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp517)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp512)));
bool $tmp522 = $tmp521.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp502);
if ($tmp522) goto block34; else goto block36;
block36:;
frost$collections$Stack** $tmp523 = &param0->currentClass;
frost$collections$Stack* $tmp524 = *$tmp523;
frost$core$Int $tmp525 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Unary.frost:163:46
frost$core$Int $tmp526 = (frost$core$Int) {0u};
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
bool $tmp529 = $tmp527 >= $tmp528;
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block64; else goto block63;
block64:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp532 = &$tmp524->contents;
frost$collections$Array* $tmp533 = *$tmp532;
ITable* $tmp534 = ((frost$collections$CollectionView*) $tmp533)->$class->itable;
while ($tmp534->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp534 = $tmp534->next;
}
$fn536 $tmp535 = $tmp534->methods[0];
frost$core$Int $tmp537 = $tmp535(((frost$collections$CollectionView*) $tmp533));
int64_t $tmp538 = $tmp525.value;
int64_t $tmp539 = $tmp537.value;
bool $tmp540 = $tmp538 < $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block62; else goto block63;
block63:;
frost$core$Int $tmp543 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s544, $tmp543, &$s545);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp546 = &$tmp524->contents;
frost$collections$Array* $tmp547 = *$tmp546;
ITable* $tmp548 = ((frost$collections$CollectionView*) $tmp547)->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
frost$core$Int $tmp551 = $tmp549(((frost$collections$CollectionView*) $tmp547));
int64_t $tmp552 = $tmp551.value;
int64_t $tmp553 = $tmp525.value;
bool $tmp554 = $tmp552 > $tmp553;
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554};
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block66; else goto block67;
block67:;
frost$core$Int $tmp557 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s558, $tmp557);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp559 = &$tmp524->contents;
frost$collections$Array* $tmp560 = *$tmp559;
frost$collections$Array** $tmp561 = &$tmp524->contents;
frost$collections$Array* $tmp562 = *$tmp561;
ITable* $tmp563 = ((frost$collections$CollectionView*) $tmp562)->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Int $tmp566 = $tmp564(((frost$collections$CollectionView*) $tmp562));
frost$core$Int $tmp567 = (frost$core$Int) {1u};
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 - $tmp569;
frost$core$Int $tmp571 = (frost$core$Int) {$tmp570};
int64_t $tmp572 = $tmp571.value;
int64_t $tmp573 = $tmp525.value;
int64_t $tmp574 = $tmp572 - $tmp573;
frost$core$Int $tmp575 = (frost$core$Int) {$tmp574};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp576 = (frost$core$Int) {0u};
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 >= $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block71; else goto block70;
block71:;
ITable* $tmp582 = ((frost$collections$CollectionView*) $tmp560)->$class->itable;
while ($tmp582->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
frost$core$Int $tmp585 = $tmp583(((frost$collections$CollectionView*) $tmp560));
int64_t $tmp586 = $tmp575.value;
int64_t $tmp587 = $tmp585.value;
bool $tmp588 = $tmp586 < $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block69; else goto block70;
block70:;
frost$core$Int $tmp591 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s592, $tmp591, &$s593);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp594 = &$tmp560->data;
frost$core$Object** $tmp595 = *$tmp594;
frost$core$Int64 $tmp596 = frost$core$Int64$init$frost$core$Int($tmp575);
int64_t $tmp597 = $tmp596.value;
frost$core$Object* $tmp598 = $tmp595[$tmp597];
frost$core$Frost$ref$frost$core$Object$Q($tmp598);
frost$core$Frost$ref$frost$core$Object$Q($tmp598);
frost$core$Frost$unref$frost$core$Object$Q($tmp598);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from Unary.frost:163:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp599 = &((org$frostlang$frostc$ClassDecl*) $tmp598)->name;
frost$core$String* $tmp600 = *$tmp599;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp601 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp600, &$s602);
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp601.nonnull};
bool $tmp604 = $tmp603.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp598);
if ($tmp604) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:164
org$frostlang$frostc$IR$Value* $tmp605 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp606 = *(&local9);
$fn608 $tmp607 = ($fn608) $tmp606->$class->vtable[2];
org$frostlang$frostc$Type* $tmp609 = $tmp607($tmp606);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:164:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp610 = &$tmp609->typeKind;
org$frostlang$frostc$Type$Kind $tmp611 = *$tmp610;
org$frostlang$frostc$Type$Kind$wrapper* $tmp612;
$tmp612 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp612->value = $tmp611;
frost$core$Int $tmp613 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp614 = &(&local23)->$rawValue;
*$tmp614 = $tmp613;
org$frostlang$frostc$Type$Kind $tmp615 = *(&local23);
*(&local22) = $tmp615;
org$frostlang$frostc$Type$Kind $tmp616 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp617;
$tmp617 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp617->value = $tmp616;
ITable* $tmp618 = ((frost$core$Equatable*) $tmp612)->$class->itable;
while ($tmp618->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp618 = $tmp618->next;
}
$fn620 $tmp619 = $tmp618->methods[1];
frost$core$Bit $tmp621 = $tmp619(((frost$core$Equatable*) $tmp612), ((frost$core$Equatable*) $tmp617));
bool $tmp622 = $tmp621.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp617)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp612)));
if ($tmp622) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local21) = $tmp609;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
goto block74;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp623 = &$tmp609->_subtypes;
org$frostlang$frostc$FixedArray* $tmp624 = *$tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624 != NULL};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block79; else goto block80;
block80:;
frost$core$Int $tmp627 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s628, $tmp627, &$s629);
abort(); // unreachable
block79:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Int $tmp630 = (frost$core$Int) {0u};
frost$core$Object* $tmp631 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp624, $tmp630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp631)));
frost$core$Frost$unref$frost$core$Object$Q($tmp631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local21) = ((org$frostlang$frostc$Type*) $tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp631)));
goto block74;
block74:;
org$frostlang$frostc$Type* $tmp632 = *(&local21);
org$frostlang$frostc$IR$Value* $tmp633 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp605, $tmp632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$Type* $tmp634 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local21) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
org$frostlang$frostc$Type* $tmp635 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp636 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp637 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp633;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:166
org$frostlang$frostc$IR$Value* $tmp638 = *(&local9);
$fn640 $tmp639 = ($fn640) $tmp638->$class->vtable[2];
org$frostlang$frostc$Type* $tmp641 = $tmp639($tmp638);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Unary.frost:166:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn643 $tmp642 = ($fn643) ((frost$core$Object*) $tmp641)->$class->vtable[0];
frost$core$String* $tmp644 = $tmp642(((frost$core$Object*) $tmp641));
frost$core$String* $tmp645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s646, $tmp644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$String* $tmp647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp645, &$s648);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp647);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp649 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp650 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp651 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:170
frost$core$Int $tmp652 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s653, $tmp652);
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

