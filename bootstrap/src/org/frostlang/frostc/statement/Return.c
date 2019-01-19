#include "org/frostlang/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int64 (*$fn33)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn48)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn100)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn104)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn109)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn131)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn150)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$Type* (*$fn218)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn233)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn278)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 6365785573033434727, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x29", 194, 3560770116801906870, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$FieldDecl* local7 = NULL;
frost$core$Bit local8;
frost$core$Bit local9;
frost$core$Bit local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value** $tmp2 = &param0->returnValue;
org$frostlang$frostc$IR$Value* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit($tmp3 == NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp6 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// line 23
org$frostlang$frostc$IR** $tmp9 = &param0->ir;
org$frostlang$frostc$IR* $tmp10 = *$tmp9;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$IR* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 24
frost$collections$Stack** $tmp12 = &param0->currentClass;
frost$collections$Stack* $tmp13 = *$tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
frost$core$Object* $tmp15 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp13, $tmp14);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp15)));
org$frostlang$frostc$ClassDecl* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp15);
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
// unreffing REF($24:frost.collections.Stack.T)
// line 25
frost$collections$Stack** $tmp17 = &param0->currentMethod;
frost$collections$Stack* $tmp18 = *$tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {0};
frost$core$Object* $tmp20 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp18, $tmp19);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp20)));
org$frostlang$frostc$MethodDecl* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp20);
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// unreffing REF($41:frost.collections.Stack.T)
// line 26
org$frostlang$frostc$MethodDecl* $tmp22 = *(&local2);
frost$core$String** $tmp23 = &((org$frostlang$frostc$Symbol*) $tmp22)->name;
frost$core$String* $tmp24 = *$tmp23;
frost$core$Bit $tmp25 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp24, &$s26);
bool $tmp27 = $tmp25.value;
if ($tmp27) goto block5; else goto block6;
block5:;
org$frostlang$frostc$MethodDecl* $tmp28 = *(&local2);
frost$collections$Array** $tmp29 = &$tmp28->parameters;
frost$collections$Array* $tmp30 = *$tmp29;
ITable* $tmp31 = ((frost$collections$CollectionView*) $tmp30)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Int64 $tmp34 = $tmp32(((frost$collections$CollectionView*) $tmp30));
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
frost$core$Bit $tmp36 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp34, $tmp35);
*(&local4) = $tmp36;
goto block7;
block6:;
*(&local4) = $tmp25;
goto block7;
block7:;
frost$core$Bit $tmp37 = *(&local4);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl* $tmp39 = *(&local2);
frost$core$Weak** $tmp40 = &$tmp39->owner;
frost$core$Weak* $tmp41 = *$tmp40;
frost$core$Object* $tmp42 = frost$core$Weak$get$R$frost$core$Weak$T($tmp41);
frost$core$String** $tmp43 = &((org$frostlang$frostc$ClassDecl*) $tmp42)->name;
frost$core$String* $tmp44 = *$tmp43;
ITable* $tmp46 = ((frost$core$Equatable*) $tmp44)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[1];
frost$core$Bit $tmp49 = $tmp47(((frost$core$Equatable*) $tmp44), ((frost$core$Equatable*) &$s45));
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
// unreffing REF($80:frost.core.Weak.T)
*(&local3) = $tmp49;
goto block10;
block9:;
*(&local3) = $tmp37;
goto block10;
block10:;
frost$core$Bit $tmp50 = *(&local3);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block3; else goto block4;
block3:;
// line 29
org$frostlang$frostc$ClassDecl* $tmp52 = *(&local1);
org$frostlang$frostc$Type** $tmp53 = &$tmp52->rawSuper;
org$frostlang$frostc$Type* $tmp54 = *$tmp53;
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit($tmp54 != NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block13; else goto block14;
block13:;
org$frostlang$frostc$ClassDecl* $tmp57 = *(&local1);
frost$core$Bit $tmp58 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp57);
frost$core$Bit $tmp59 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp58);
*(&local5) = $tmp59;
goto block15;
block14:;
*(&local5) = $tmp55;
goto block15;
block15:;
frost$core$Bit $tmp60 = *(&local5);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block11; else goto block12;
block11:;
// line 30
org$frostlang$frostc$ClassDecl* $tmp62 = *(&local1);
org$frostlang$frostc$Type** $tmp63 = &$tmp62->type;
org$frostlang$frostc$Type* $tmp64 = *$tmp63;
org$frostlang$frostc$ClassDecl* $tmp65 = *(&local1);
org$frostlang$frostc$Type** $tmp66 = &$tmp65->rawSuper;
org$frostlang$frostc$Type* $tmp67 = *$tmp66;
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block16:;
org$frostlang$frostc$Type* $tmp73 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp64, $tmp67);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$Type* $tmp74 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local6) = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($133:org.frostlang.frostc.Type)
// line 31
org$frostlang$frostc$ASTNode* $tmp75 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp76 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp77 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp78 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp79 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp80 = (frost$core$Int64) {42};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp79, $tmp80, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp77, $tmp78, param1, $tmp79, &$s81);
org$frostlang$frostc$FixedArray* $tmp82 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp82);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp75, $tmp76, param1, $tmp77, $tmp82);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($153:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($149:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($147:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($145:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Type* $tmp83 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing supertype
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block12;
block12:;
// line 35
frost$core$Bit* $tmp84 = &param0->inFieldCleanup;
frost$core$Bit $tmp85 = *$tmp84;
frost$core$Bit $tmp86 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s89, $tmp88);
abort(); // unreachable
block18:;
// line 36
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp91 = &param0->inFieldCleanup;
*$tmp91 = $tmp90;
// line 37
org$frostlang$frostc$MethodDecl* $tmp92 = *(&local2);
frost$core$Weak** $tmp93 = &$tmp92->owner;
frost$core$Weak* $tmp94 = *$tmp93;
frost$core$Object* $tmp95 = frost$core$Weak$get$R$frost$core$Weak$T($tmp94);
frost$collections$Array** $tmp96 = &((org$frostlang$frostc$ClassDecl*) $tmp95)->fields;
frost$collections$Array* $tmp97 = *$tmp96;
ITable* $tmp98 = ((frost$collections$Iterable*) $tmp97)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
frost$collections$Iterator* $tmp101 = $tmp99(((frost$collections$Iterable*) $tmp97));
goto block20;
block20:;
ITable* $tmp102 = $tmp101->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Bit $tmp105 = $tmp103($tmp101);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp107 = $tmp101->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[1];
frost$core$Object* $tmp110 = $tmp108($tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp110)));
org$frostlang$frostc$FieldDecl* $tmp111 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp110);
// line 38
org$frostlang$frostc$FieldDecl* $tmp112 = *(&local7);
frost$core$Bit $tmp113 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block25; else goto block26;
block25:;
org$frostlang$frostc$FieldDecl* $tmp115 = *(&local7);
org$frostlang$frostc$Annotations** $tmp116 = &$tmp115->annotations;
org$frostlang$frostc$Annotations* $tmp117 = *$tmp116;
frost$core$Bit $tmp118 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp117);
frost$core$Bit $tmp119 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp118);
*(&local10) = $tmp119;
goto block27;
block26:;
*(&local10) = $tmp113;
goto block27;
block27:;
frost$core$Bit $tmp120 = *(&local10);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block28; else goto block29;
block28:;
org$frostlang$frostc$FieldDecl* $tmp122 = *(&local7);
org$frostlang$frostc$FieldDecl$Kind* $tmp123 = &$tmp122->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp124 = *$tmp123;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp125;
$tmp125 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp125->value = $tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp127 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp126);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp128;
$tmp128 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp128->value = $tmp127;
ITable* $tmp129 = ((frost$core$Equatable*) $tmp125)->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[1];
frost$core$Bit $tmp132 = $tmp130(((frost$core$Equatable*) $tmp125), ((frost$core$Equatable*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp128)));
// unreffing REF($244:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp125)));
// unreffing REF($240:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
*(&local9) = $tmp132;
goto block30;
block29:;
*(&local9) = $tmp120;
goto block30;
block30:;
frost$core$Bit $tmp133 = *(&local9);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block31; else goto block32;
block31:;
org$frostlang$frostc$FieldDecl* $tmp135 = *(&local7);
org$frostlang$frostc$Type** $tmp136 = &$tmp135->type;
org$frostlang$frostc$Type* $tmp137 = *$tmp136;
frost$core$Bit $tmp138 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp137);
*(&local8) = $tmp138;
goto block33;
block32:;
*(&local8) = $tmp133;
goto block33;
block33:;
frost$core$Bit $tmp139 = *(&local8);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block23; else goto block24;
block23:;
// line 40
org$frostlang$frostc$lvalue$FieldLValue* $tmp141 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$ASTNode* $tmp142 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp143 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp142, $tmp143, param1, &$s144);
org$frostlang$frostc$Compiler$TypeContext* $tmp145 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp146 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp145, $tmp146);
org$frostlang$frostc$IR$Value* $tmp147 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp142, $tmp145);
org$frostlang$frostc$FieldDecl* $tmp148 = *(&local7);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp141, param0, param1, $tmp147, $tmp148);
$fn150 $tmp149 = ($fn150) $tmp141->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp151 = $tmp149($tmp141);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
org$frostlang$frostc$IR$Value* $tmp152 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local11) = $tmp151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($283:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($279:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($276:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($273:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($272:org.frostlang.frostc.lvalue.FieldLValue)
// line 44
org$frostlang$frostc$IR$Value* $tmp153 = *(&local11);
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153 == NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block34; else goto block35;
block34:;
// line 45
org$frostlang$frostc$IR$Value* $tmp156 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing load
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
// unreffing REF($212:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp157 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing f
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($201:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
// unreffing REF($194:frost.core.Weak.T)
org$frostlang$frostc$MethodDecl* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// line 47
org$frostlang$frostc$IR$Value* $tmp161 = *(&local11);
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit($tmp161 != NULL);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block36:;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp161);
org$frostlang$frostc$IR$Value* $tmp167 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing load
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block24;
block24:;
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
// unreffing REF($212:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp168 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing f
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($201:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
// unreffing REF($194:frost.core.Weak.T)
// line 50
frost$core$Bit* $tmp169 = &param0->inFieldCleanup;
frost$core$Bit $tmp170 = *$tmp169;
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s173, $tmp172);
abort(); // unreachable
block38:;
// line 51
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp175 = &param0->inFieldCleanup;
*$tmp175 = $tmp174;
goto block4;
block4:;
// line 53
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block40; else goto block42;
block40:;
// line 54
org$frostlang$frostc$MethodDecl* $tmp178 = *(&local2);
org$frostlang$frostc$Type** $tmp179 = &$tmp178->returnType;
org$frostlang$frostc$Type* $tmp180 = *$tmp179;
org$frostlang$frostc$Type* $tmp181 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp182 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp180, $tmp181);
bool $tmp183 = $tmp182.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($402:org.frostlang.frostc.Type)
if ($tmp183) goto block43; else goto block44;
block43:;
// line 55
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s184);
// line 56
org$frostlang$frostc$MethodDecl* $tmp185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block44:;
// line 58
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s191, $tmp190, &$s192);
abort(); // unreachable
block45:;
org$frostlang$frostc$Compiler$TypeContext* $tmp193 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp194 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp195 = *(&local2);
org$frostlang$frostc$Type** $tmp196 = &$tmp195->returnType;
org$frostlang$frostc$Type* $tmp197 = *$tmp196;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp193, $tmp194, $tmp197);
org$frostlang$frostc$IR$Value* $tmp198 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp193);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$IR$Value* $tmp199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local12) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($443:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($437:org.frostlang.frostc.Compiler.TypeContext)
// line 60
org$frostlang$frostc$IR$Value* $tmp200 = *(&local12);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200 == NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block47; else goto block48;
block47:;
// line 61
org$frostlang$frostc$IR$Value* $tmp203 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing compiled
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block48:;
// line 63
org$frostlang$frostc$IR$Value* $tmp207 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
org$frostlang$frostc$IR$Value** $tmp208 = &param0->returnValue;
org$frostlang$frostc$IR$Value* $tmp209 = *$tmp208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$IR$Value** $tmp210 = &param0->returnValue;
*$tmp210 = $tmp207;
// line 64
org$frostlang$frostc$IR$Value* $tmp211 = *(&local12);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211 != NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {64};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block51:;
$fn218 $tmp217 = ($fn218) $tmp211->$class->vtable[2];
org$frostlang$frostc$Type* $tmp219 = $tmp217($tmp211);
frost$core$Bit $tmp220 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp219);
bool $tmp221 = $tmp220.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($506:org.frostlang.frostc.Type)
if ($tmp221) goto block49; else goto block50;
block49:;
// line 65
org$frostlang$frostc$IR$Value* $tmp222 = *(&local12);
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit($tmp222 != NULL);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {65};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable
block53:;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp222);
goto block50;
block50:;
// line 67
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 68
org$frostlang$frostc$Compiler$compilePostconditions(param0);
// line 69
org$frostlang$frostc$IR* $tmp228 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp229 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp230 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp231 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp229, $tmp230, param1, $tmp231);
$fn233 $tmp232 = ($fn233) $tmp228->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp234 = $tmp232($tmp228, $tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing REF($531:org.frostlang.frostc.IR.Statement)
// line 70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value** $tmp235 = &param0->returnValue;
org$frostlang$frostc$IR$Value* $tmp236 = *$tmp235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
org$frostlang$frostc$IR$Value** $tmp237 = &param0->returnValue;
*$tmp237 = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp238 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing compiled
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block41;
block42:;
// line 1
// line 73
org$frostlang$frostc$MethodDecl* $tmp239 = *(&local2);
org$frostlang$frostc$Type** $tmp240 = &$tmp239->returnType;
org$frostlang$frostc$Type* $tmp241 = *$tmp240;
org$frostlang$frostc$Type* $tmp242 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp243 = ((frost$core$Equatable*) $tmp241)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[1];
frost$core$Bit $tmp246 = $tmp244(((frost$core$Equatable*) $tmp241), ((frost$core$Equatable*) $tmp242));
bool $tmp247 = $tmp246.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($562:org.frostlang.frostc.Type)
if ($tmp247) goto block55; else goto block56;
block55:;
// line 74
org$frostlang$frostc$MethodDecl* $tmp248 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp249 = &$tmp248->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp250 = *$tmp249;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp251;
$tmp251 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp251->value = $tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp253 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp252);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp254->value = $tmp253;
ITable* $tmp255 = ((frost$core$Equatable*) $tmp251)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Bit $tmp258 = $tmp256(((frost$core$Equatable*) $tmp251), ((frost$core$Equatable*) $tmp254));
bool $tmp259 = $tmp258.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
// unreffing REF($579:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp251)));
// unreffing REF($575:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp259) goto block57; else goto block58;
block57:;
// line 75
org$frostlang$frostc$ASTNode* $tmp260 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {40};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp260, $tmp261, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($591:org.frostlang.frostc.ASTNode)
// line 76
org$frostlang$frostc$MethodDecl* $tmp262 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block58:;
// line 78
org$frostlang$frostc$MethodDecl* $tmp265 = *(&local2);
org$frostlang$frostc$Type** $tmp266 = &$tmp265->returnType;
org$frostlang$frostc$Type* $tmp267 = *$tmp266;
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s269, ((frost$core$Object*) $tmp267));
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp268, &$s271);
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s273, $tmp270);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($623:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($622:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($621:frost.core.String)
goto block56;
block56:;
// line 81
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 82
org$frostlang$frostc$Compiler$compilePostconditions(param0);
// line 83
org$frostlang$frostc$IR* $tmp274 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp275 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp276 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp275, $tmp276, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn278 $tmp277 = ($fn278) $tmp274->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp279 = $tmp277($tmp274, $tmp275);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($641:org.frostlang.frostc.IR.Statement)
goto block41;
block41:;
org$frostlang$frostc$MethodDecl* $tmp280 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Return$init(org$frostlang$frostc$statement$Return* param0) {

return;

}
void org$frostlang$frostc$statement$Return$cleanup(org$frostlang$frostc$statement$Return* param0) {

// line 19
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






