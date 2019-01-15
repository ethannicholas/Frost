#include "org/frostlanguage/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/FieldDecl.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "org/frostlanguage/frostc/FieldDecl/Kind.h"
#include "org/frostlanguage/frostc/lvalue/FieldLValue.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/IR/Statement.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$Return$class_type org$frostlanguage$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$Return$cleanup} };

typedef frost$core$Int64 (*$fn33)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn48)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn95)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn99)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn104)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn126)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$IR$Value* (*$fn145)(org$frostlanguage$frostc$lvalue$FieldLValue*);
typedef org$frostlanguage$frostc$Type* (*$fn198)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn208)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn220)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn232)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn253)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 41, 8923482127571421369, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x29", 210, -8173768178726276834, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

void org$frostlanguage$frostc$statement$Return$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2) {

org$frostlanguage$frostc$IR* local0 = NULL;
org$frostlanguage$frostc$ClassDecl* local1 = NULL;
org$frostlanguage$frostc$MethodDecl* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
org$frostlanguage$frostc$Type* local6 = NULL;
org$frostlanguage$frostc$FieldDecl* local7 = NULL;
frost$core$Bit local8;
frost$core$Bit local9;
frost$core$Bit local10;
org$frostlanguage$frostc$IR$Value* local11 = NULL;
org$frostlanguage$frostc$IR$Value* local12 = NULL;
org$frostlanguage$frostc$IR$Value** $tmp2 = &param0->returnValue;
org$frostlanguage$frostc$IR$Value* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit($tmp3 == NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp6 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// line 23
org$frostlanguage$frostc$IR** $tmp9 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp10 = *$tmp9;
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlanguage$frostc$IR* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 24
frost$collections$Stack** $tmp12 = &param0->currentClass;
frost$collections$Stack* $tmp13 = *$tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
frost$core$Object* $tmp15 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp13, $tmp14);
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) $tmp15)));
org$frostlanguage$frostc$ClassDecl* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) $tmp15);
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
// unreffing REF($24:frost.collections.Stack.T)
// line 25
frost$collections$Stack** $tmp17 = &param0->currentMethod;
frost$collections$Stack* $tmp18 = *$tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {0};
frost$core$Object* $tmp20 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp18, $tmp19);
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp20)));
org$frostlanguage$frostc$MethodDecl* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) $tmp20);
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// unreffing REF($41:frost.collections.Stack.T)
// line 26
org$frostlanguage$frostc$MethodDecl* $tmp22 = *(&local2);
frost$core$String** $tmp23 = &((org$frostlanguage$frostc$Symbol*) $tmp22)->name;
frost$core$String* $tmp24 = *$tmp23;
frost$core$Bit $tmp25 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp24, &$s26);
bool $tmp27 = $tmp25.value;
if ($tmp27) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$MethodDecl* $tmp28 = *(&local2);
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
org$frostlanguage$frostc$MethodDecl* $tmp39 = *(&local2);
frost$core$Weak** $tmp40 = &$tmp39->owner;
frost$core$Weak* $tmp41 = *$tmp40;
frost$core$Object* $tmp42 = frost$core$Weak$get$R$frost$core$Weak$T($tmp41);
frost$core$String** $tmp43 = &((org$frostlanguage$frostc$ClassDecl*) $tmp42)->name;
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
org$frostlanguage$frostc$ClassDecl* $tmp52 = *(&local1);
org$frostlanguage$frostc$Type** $tmp53 = &$tmp52->rawSuper;
org$frostlanguage$frostc$Type* $tmp54 = *$tmp53;
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit($tmp54 != NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block13; else goto block14;
block13:;
org$frostlanguage$frostc$ClassDecl* $tmp57 = *(&local1);
frost$core$Bit $tmp58 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp57);
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
org$frostlanguage$frostc$ClassDecl* $tmp62 = *(&local1);
org$frostlanguage$frostc$Type** $tmp63 = &$tmp62->type;
org$frostlanguage$frostc$Type* $tmp64 = *$tmp63;
org$frostlanguage$frostc$ClassDecl* $tmp65 = *(&local1);
org$frostlanguage$frostc$Type** $tmp66 = &$tmp65->rawSuper;
org$frostlanguage$frostc$Type* $tmp67 = *$tmp66;
org$frostlanguage$frostc$Type* $tmp68 = org$frostlanguage$frostc$Compiler$remapType$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(param0, $tmp64, $tmp67);
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
org$frostlanguage$frostc$Type* $tmp69 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local6) = $tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($126:org.frostlanguage.frostc.Type)
// line 31
org$frostlanguage$frostc$ASTNode* $tmp70 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {9};
org$frostlanguage$frostc$ASTNode* $tmp72 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp73 = (frost$core$Int64) {16};
org$frostlanguage$frostc$ASTNode* $tmp74 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {42};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp74, $tmp75, param1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp72, $tmp73, param1, $tmp74, &$s76);
org$frostlanguage$frostc$FixedArray* $tmp77 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp77);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp70, $tmp71, param1, $tmp72, $tmp77);
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, $tmp70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($146:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($142:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($140:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($138:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$Type* $tmp78 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing supertype
*(&local6) = ((org$frostlanguage$frostc$Type*) NULL);
goto block12;
block12:;
// line 35
frost$core$Bit* $tmp79 = &param0->inFieldCleanup;
frost$core$Bit $tmp80 = *$tmp79;
frost$core$Bit $tmp81 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp80);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s84, $tmp83);
abort(); // unreachable
block16:;
// line 36
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp86 = &param0->inFieldCleanup;
*$tmp86 = $tmp85;
// line 37
org$frostlanguage$frostc$MethodDecl* $tmp87 = *(&local2);
frost$core$Weak** $tmp88 = &$tmp87->owner;
frost$core$Weak* $tmp89 = *$tmp88;
frost$core$Object* $tmp90 = frost$core$Weak$get$R$frost$core$Weak$T($tmp89);
frost$collections$Array** $tmp91 = &((org$frostlanguage$frostc$ClassDecl*) $tmp90)->fields;
frost$collections$Array* $tmp92 = *$tmp91;
ITable* $tmp93 = ((frost$collections$Iterable*) $tmp92)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$collections$Iterator* $tmp96 = $tmp94(((frost$collections$Iterable*) $tmp92));
goto block18;
block18:;
ITable* $tmp97 = $tmp96->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
frost$core$Bit $tmp100 = $tmp98($tmp96);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block20; else goto block19;
block19:;
*(&local7) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
ITable* $tmp102 = $tmp96->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
frost$core$Object* $tmp105 = $tmp103($tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FieldDecl*) $tmp105)));
org$frostlanguage$frostc$FieldDecl* $tmp106 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local7) = ((org$frostlanguage$frostc$FieldDecl*) $tmp105);
// line 38
org$frostlanguage$frostc$FieldDecl* $tmp107 = *(&local7);
frost$core$Bit $tmp108 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block23; else goto block24;
block23:;
org$frostlanguage$frostc$FieldDecl* $tmp110 = *(&local7);
org$frostlanguage$frostc$Annotations** $tmp111 = &$tmp110->annotations;
org$frostlanguage$frostc$Annotations* $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp112);
frost$core$Bit $tmp114 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp113);
*(&local10) = $tmp114;
goto block25;
block24:;
*(&local10) = $tmp108;
goto block25;
block25:;
frost$core$Bit $tmp115 = *(&local10);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block26; else goto block27;
block26:;
org$frostlanguage$frostc$FieldDecl* $tmp117 = *(&local7);
org$frostlanguage$frostc$FieldDecl$Kind* $tmp118 = &$tmp117->fieldKind;
org$frostlanguage$frostc$FieldDecl$Kind $tmp119 = *$tmp118;
org$frostlanguage$frostc$FieldDecl$Kind$wrapper* $tmp120;
$tmp120 = (org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$Kind$wrapperclass);
$tmp120->value = $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {3};
org$frostlanguage$frostc$FieldDecl$Kind $tmp122 = org$frostlanguage$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp121);
org$frostlanguage$frostc$FieldDecl$Kind$wrapper* $tmp123;
$tmp123 = (org$frostlanguage$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$FieldDecl$Kind$wrapperclass);
$tmp123->value = $tmp122;
ITable* $tmp124 = ((frost$core$Equatable*) $tmp120)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
frost$core$Bit $tmp127 = $tmp125(((frost$core$Equatable*) $tmp120), ((frost$core$Equatable*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp123)));
// unreffing REF($237:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp120)));
// unreffing REF($233:frost.core.Equatable<org.frostlanguage.frostc.FieldDecl.Kind>)
*(&local9) = $tmp127;
goto block28;
block27:;
*(&local9) = $tmp115;
goto block28;
block28:;
frost$core$Bit $tmp128 = *(&local9);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block29; else goto block30;
block29:;
org$frostlanguage$frostc$FieldDecl* $tmp130 = *(&local7);
org$frostlanguage$frostc$Type** $tmp131 = &$tmp130->type;
org$frostlanguage$frostc$Type* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = org$frostlanguage$frostc$Compiler$isRefCounted$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp132);
*(&local8) = $tmp133;
goto block31;
block30:;
*(&local8) = $tmp128;
goto block31;
block31:;
frost$core$Bit $tmp134 = *(&local8);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block21; else goto block22;
block21:;
// line 40
org$frostlanguage$frostc$lvalue$FieldLValue* $tmp136 = (org$frostlanguage$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$FieldLValue$class);
org$frostlanguage$frostc$ASTNode* $tmp137 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp138 = (frost$core$Int64) {22};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp137, $tmp138, param1, &$s139);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp140 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp141 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp140, $tmp141);
org$frostlanguage$frostc$IR$Value* $tmp142 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp137, $tmp140);
org$frostlanguage$frostc$FieldDecl* $tmp143 = *(&local7);
org$frostlanguage$frostc$lvalue$FieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FieldDecl($tmp136, param0, param1, $tmp142, $tmp143);
$fn145 $tmp144 = ($fn145) $tmp136->$class->vtable[3];
org$frostlanguage$frostc$IR$Value* $tmp146 = $tmp144($tmp136);
*(&local11) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
org$frostlanguage$frostc$IR$Value* $tmp147 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local11) = $tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($276:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($272:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($269:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($266:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($265:org.frostlanguage.frostc.lvalue.FieldLValue)
// line 44
org$frostlanguage$frostc$IR$Value* $tmp148 = *(&local11);
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit($tmp148 == NULL);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block32; else goto block33;
block32:;
// line 45
org$frostlanguage$frostc$IR$Value* $tmp151 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing load
*(&local11) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing REF($205:frost.collections.Iterator.T)
org$frostlanguage$frostc$FieldDecl* $tmp152 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing f
*(&local7) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($194:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
// unreffing REF($187:frost.core.Weak.T)
org$frostlanguage$frostc$MethodDecl* $tmp153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing currentMethod
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing currentClass
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block33:;
// line 47
org$frostlanguage$frostc$IR$Value* $tmp156 = *(&local11);
org$frostlanguage$frostc$Compiler$compileUnref$org$frostlanguage$frostc$IR$Value(param0, $tmp156);
org$frostlanguage$frostc$IR$Value* $tmp157 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing load
*(&local11) = ((org$frostlanguage$frostc$IR$Value*) NULL);
goto block22;
block22:;
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing REF($205:frost.collections.Iterator.T)
org$frostlanguage$frostc$FieldDecl* $tmp158 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing f
*(&local7) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($194:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
// unreffing REF($187:frost.core.Weak.T)
// line 50
frost$core$Bit* $tmp159 = &param0->inFieldCleanup;
frost$core$Bit $tmp160 = *$tmp159;
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s163, $tmp162);
abort(); // unreachable
block34:;
// line 51
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp165 = &param0->inFieldCleanup;
*$tmp165 = $tmp164;
goto block4;
block4:;
// line 53
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block36; else goto block38;
block36:;
// line 54
org$frostlanguage$frostc$MethodDecl* $tmp168 = *(&local2);
org$frostlanguage$frostc$Type** $tmp169 = &$tmp168->returnType;
org$frostlanguage$frostc$Type* $tmp170 = *$tmp169;
org$frostlanguage$frostc$Type* $tmp171 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Bit $tmp172 = org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp170, $tmp171);
bool $tmp173 = $tmp172.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($388:org.frostlanguage.frostc.Type)
if ($tmp173) goto block39; else goto block40;
block39:;
// line 55
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s174);
// line 56
org$frostlanguage$frostc$MethodDecl* $tmp175 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing currentMethod
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing currentClass
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block40:;
// line 58
org$frostlanguage$frostc$Compiler$TypeContext* $tmp178 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp179 = (frost$core$Int64) {3};
org$frostlanguage$frostc$MethodDecl* $tmp180 = *(&local2);
org$frostlanguage$frostc$Type** $tmp181 = &$tmp180->returnType;
org$frostlanguage$frostc$Type* $tmp182 = *$tmp181;
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp178, $tmp179, $tmp182);
org$frostlanguage$frostc$IR$Value* $tmp183 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp178);
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
org$frostlanguage$frostc$IR$Value* $tmp184 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local12) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing REF($422:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($416:org.frostlanguage.frostc.Compiler.TypeContext)
// line 60
org$frostlanguage$frostc$IR$Value* $tmp185 = *(&local12);
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 == NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block41; else goto block42;
block41:;
// line 61
org$frostlanguage$frostc$IR$Value* $tmp188 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing compiled
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$MethodDecl* $tmp189 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing currentMethod
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing currentClass
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block42:;
// line 63
org$frostlanguage$frostc$IR$Value* $tmp192 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
org$frostlanguage$frostc$IR$Value** $tmp193 = &param0->returnValue;
org$frostlanguage$frostc$IR$Value* $tmp194 = *$tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlanguage$frostc$IR$Value** $tmp195 = &param0->returnValue;
*$tmp195 = $tmp192;
// line 64
org$frostlanguage$frostc$IR$Value* $tmp196 = *(&local12);
$fn198 $tmp197 = ($fn198) $tmp196->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp199 = $tmp197($tmp196);
frost$core$Bit $tmp200 = org$frostlanguage$frostc$Compiler$isRefCounted$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp199);
bool $tmp201 = $tmp200.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($478:org.frostlanguage.frostc.Type)
if ($tmp201) goto block43; else goto block44;
block43:;
// line 65
org$frostlanguage$frostc$IR$Value* $tmp202 = *(&local12);
org$frostlanguage$frostc$Compiler$compileRef$org$frostlanguage$frostc$IR$Value(param0, $tmp202);
goto block44;
block44:;
// line 67
org$frostlanguage$frostc$Compiler$leaveAllScopes(param0);
// line 68
org$frostlanguage$frostc$Compiler$compilePostconditions(param0);
// line 69
org$frostlanguage$frostc$IR* $tmp203 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp204 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp205 = (frost$core$Int64) {24};
org$frostlanguage$frostc$IR$Value* $tmp206 = *(&local12);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q($tmp204, $tmp205, param1, $tmp206);
$fn208 $tmp207 = ($fn208) $tmp203->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp209 = $tmp207($tmp203, $tmp204);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($496:org.frostlanguage.frostc.IR.Statement)
// line 70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value** $tmp210 = &param0->returnValue;
org$frostlanguage$frostc$IR$Value* $tmp211 = *$tmp210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlanguage$frostc$IR$Value** $tmp212 = &param0->returnValue;
*$tmp212 = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp213 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing compiled
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
goto block37;
block38:;
// line 1
// line 73
org$frostlanguage$frostc$MethodDecl* $tmp214 = *(&local2);
org$frostlanguage$frostc$Type** $tmp215 = &$tmp214->returnType;
org$frostlanguage$frostc$Type* $tmp216 = *$tmp215;
org$frostlanguage$frostc$Type* $tmp217 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
ITable* $tmp218 = ((frost$core$Equatable*) $tmp216)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[1];
frost$core$Bit $tmp221 = $tmp219(((frost$core$Equatable*) $tmp216), ((frost$core$Equatable*) $tmp217));
bool $tmp222 = $tmp221.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($527:org.frostlanguage.frostc.Type)
if ($tmp222) goto block45; else goto block46;
block45:;
// line 74
org$frostlanguage$frostc$MethodDecl* $tmp223 = *(&local2);
org$frostlanguage$frostc$MethodDecl$Kind* $tmp224 = &$tmp223->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp225 = *$tmp224;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp226->value = $tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp228 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp227);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp229->value = $tmp228;
ITable* $tmp230 = ((frost$core$Equatable*) $tmp226)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$core$Bit $tmp233 = $tmp231(((frost$core$Equatable*) $tmp226), ((frost$core$Equatable*) $tmp229));
bool $tmp234 = $tmp233.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp229)));
// unreffing REF($544:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp226)));
// unreffing REF($540:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp234) goto block47; else goto block48;
block47:;
// line 75
org$frostlanguage$frostc$ASTNode* $tmp235 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp236 = (frost$core$Int64) {40};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp235, $tmp236, param1);
org$frostlanguage$frostc$statement$Return$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q(param0, param1, $tmp235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($556:org.frostlanguage.frostc.ASTNode)
// line 76
org$frostlanguage$frostc$MethodDecl* $tmp237 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing currentMethod
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing currentClass
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block48:;
// line 78
org$frostlanguage$frostc$MethodDecl* $tmp240 = *(&local2);
org$frostlanguage$frostc$Type** $tmp241 = &$tmp240->returnType;
org$frostlanguage$frostc$Type* $tmp242 = *$tmp241;
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s244, ((frost$core$Object*) $tmp242));
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp243, &$s246);
frost$core$String* $tmp247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s248, $tmp245);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($588:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($587:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($586:frost.core.String)
goto block46;
block46:;
// line 81
org$frostlanguage$frostc$Compiler$leaveAllScopes(param0);
// line 82
org$frostlanguage$frostc$Compiler$compilePostconditions(param0);
// line 83
org$frostlanguage$frostc$IR* $tmp249 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp250 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp251 = (frost$core$Int64) {24};
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q($tmp250, $tmp251, param1, ((org$frostlanguage$frostc$IR$Value*) NULL));
$fn253 $tmp252 = ($fn253) $tmp249->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp254 = $tmp252($tmp249, $tmp250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($606:org.frostlanguage.frostc.IR.Statement)
goto block37;
block37:;
org$frostlanguage$frostc$MethodDecl* $tmp255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing currentMethod
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing currentClass
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR* $tmp257 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;

}
void org$frostlanguage$frostc$statement$Return$init(org$frostlanguage$frostc$statement$Return* param0) {

return;

}
void org$frostlanguage$frostc$statement$Return$cleanup(org$frostlanguage$frostc$statement$Return* param0) {

// line 19
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






