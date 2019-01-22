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
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int64 (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn41)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn88)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn92)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn97)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn119)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn138)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$Type* (*$fn188)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn218)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn221)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn229)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn236)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn284)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn290)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 6365785573033434727, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
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
frost$core$Int64 local13;
frost$core$Int64 local14;
// line 23
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 24
frost$collections$Stack** $tmp5 = &param0->currentClass;
frost$collections$Stack* $tmp6 = *$tmp5;
frost$core$Int64 $tmp7 = (frost$core$Int64) {0};
frost$core$Object* $tmp8 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp6, $tmp7);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp8)));
org$frostlang$frostc$ClassDecl* $tmp9 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp8);
frost$core$Frost$unref$frost$core$Object$Q($tmp8);
// line 25
frost$collections$Stack** $tmp10 = &param0->currentMethod;
frost$collections$Stack* $tmp11 = *$tmp10;
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Object* $tmp13 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp11, $tmp12);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp13)));
org$frostlang$frostc$MethodDecl* $tmp14 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp13);
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
// line 26
org$frostlang$frostc$MethodDecl* $tmp15 = *(&local2);
frost$core$String** $tmp16 = &((org$frostlang$frostc$Symbol*) $tmp15)->name;
frost$core$String* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp17, &$s19);
bool $tmp20 = $tmp18.value;
if ($tmp20) goto block3; else goto block4;
block3:;
org$frostlang$frostc$MethodDecl* $tmp21 = *(&local2);
frost$collections$Array** $tmp22 = &$tmp21->parameters;
frost$collections$Array* $tmp23 = *$tmp22;
ITable* $tmp24 = ((frost$collections$CollectionView*) $tmp23)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$core$Int64 $tmp27 = $tmp25(((frost$collections$CollectionView*) $tmp23));
frost$core$Int64 $tmp28 = (frost$core$Int64) {0};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp27, $tmp28);
*(&local4) = $tmp29;
goto block5;
block4:;
*(&local4) = $tmp18;
goto block5;
block5:;
frost$core$Bit $tmp30 = *(&local4);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block6; else goto block7;
block6:;
org$frostlang$frostc$MethodDecl* $tmp32 = *(&local2);
frost$core$Weak** $tmp33 = &$tmp32->owner;
frost$core$Weak* $tmp34 = *$tmp33;
frost$core$Object* $tmp35 = frost$core$Weak$get$R$frost$core$Weak$T($tmp34);
frost$core$String** $tmp36 = &((org$frostlang$frostc$ClassDecl*) $tmp35)->name;
frost$core$String* $tmp37 = *$tmp36;
ITable* $tmp39 = ((frost$core$Equatable*) $tmp37)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[1];
frost$core$Bit $tmp42 = $tmp40(((frost$core$Equatable*) $tmp37), ((frost$core$Equatable*) &$s38));
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
*(&local3) = $tmp42;
goto block8;
block7:;
*(&local3) = $tmp30;
goto block8;
block8:;
frost$core$Bit $tmp43 = *(&local3);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block1; else goto block2;
block1:;
// line 29
org$frostlang$frostc$ClassDecl* $tmp45 = *(&local1);
org$frostlang$frostc$Type** $tmp46 = &$tmp45->rawSuper;
org$frostlang$frostc$Type* $tmp47 = *$tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 != NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block11; else goto block12;
block11:;
org$frostlang$frostc$ClassDecl* $tmp50 = *(&local1);
frost$core$Bit $tmp51 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp50);
frost$core$Bit $tmp52 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp51);
*(&local5) = $tmp52;
goto block13;
block12:;
*(&local5) = $tmp48;
goto block13;
block13:;
frost$core$Bit $tmp53 = *(&local5);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block9; else goto block10;
block9:;
// line 30
org$frostlang$frostc$ClassDecl* $tmp55 = *(&local1);
org$frostlang$frostc$Type** $tmp56 = &$tmp55->type;
org$frostlang$frostc$Type* $tmp57 = *$tmp56;
org$frostlang$frostc$ClassDecl* $tmp58 = *(&local1);
org$frostlang$frostc$Type** $tmp59 = &$tmp58->rawSuper;
org$frostlang$frostc$Type* $tmp60 = *$tmp59;
org$frostlang$frostc$Type* $tmp61 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp57, $tmp60);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Type* $tmp62 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local6) = $tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// line 31
org$frostlang$frostc$ASTNode* $tmp63 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp64 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp65 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp66 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp67 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp68 = (frost$core$Int64) {41};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp67, $tmp68, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp65, $tmp66, param1, $tmp67, &$s69);
org$frostlang$frostc$FixedArray* $tmp70 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp70);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp63, $tmp64, param1, $tmp65, $tmp70);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$Type* $tmp71 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
// line 35
frost$core$Bit* $tmp72 = &param0->inFieldCleanup;
frost$core$Bit $tmp73 = *$tmp72;
frost$core$Bit $tmp74 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s77, $tmp76);
abort(); // unreachable
block14:;
// line 36
frost$core$Bit $tmp78 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp79 = &param0->inFieldCleanup;
*$tmp79 = $tmp78;
// line 37
org$frostlang$frostc$MethodDecl* $tmp80 = *(&local2);
frost$core$Weak** $tmp81 = &$tmp80->owner;
frost$core$Weak* $tmp82 = *$tmp81;
frost$core$Object* $tmp83 = frost$core$Weak$get$R$frost$core$Weak$T($tmp82);
frost$collections$Array** $tmp84 = &((org$frostlang$frostc$ClassDecl*) $tmp83)->fields;
frost$collections$Array* $tmp85 = *$tmp84;
ITable* $tmp86 = ((frost$collections$Iterable*) $tmp85)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$collections$Iterator* $tmp89 = $tmp87(((frost$collections$Iterable*) $tmp85));
goto block16;
block16:;
ITable* $tmp90 = $tmp89->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Bit $tmp93 = $tmp91($tmp89);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block18; else goto block17;
block17:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp95 = $tmp89->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[1];
frost$core$Object* $tmp98 = $tmp96($tmp89);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp98)));
org$frostlang$frostc$FieldDecl* $tmp99 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp98);
// line 38
org$frostlang$frostc$FieldDecl* $tmp100 = *(&local7);
frost$core$Bit $tmp101 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block21; else goto block22;
block21:;
org$frostlang$frostc$FieldDecl* $tmp103 = *(&local7);
org$frostlang$frostc$Annotations** $tmp104 = &$tmp103->annotations;
org$frostlang$frostc$Annotations* $tmp105 = *$tmp104;
frost$core$Bit $tmp106 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp105);
frost$core$Bit $tmp107 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp106);
*(&local10) = $tmp107;
goto block23;
block22:;
*(&local10) = $tmp101;
goto block23;
block23:;
frost$core$Bit $tmp108 = *(&local10);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block24; else goto block25;
block24:;
org$frostlang$frostc$FieldDecl* $tmp110 = *(&local7);
org$frostlang$frostc$FieldDecl$Kind* $tmp111 = &$tmp110->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp112 = *$tmp111;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp113;
$tmp113 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp113->value = $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp115 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp114);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp116;
$tmp116 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp116->value = $tmp115;
ITable* $tmp117 = ((frost$core$Equatable*) $tmp113)->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[1];
frost$core$Bit $tmp120 = $tmp118(((frost$core$Equatable*) $tmp113), ((frost$core$Equatable*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp116)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp113)));
*(&local9) = $tmp120;
goto block26;
block25:;
*(&local9) = $tmp108;
goto block26;
block26:;
frost$core$Bit $tmp121 = *(&local9);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block27; else goto block28;
block27:;
org$frostlang$frostc$FieldDecl* $tmp123 = *(&local7);
org$frostlang$frostc$Type** $tmp124 = &$tmp123->type;
org$frostlang$frostc$Type* $tmp125 = *$tmp124;
frost$core$Bit $tmp126 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp125);
*(&local8) = $tmp126;
goto block29;
block28:;
*(&local8) = $tmp121;
goto block29;
block29:;
frost$core$Bit $tmp127 = *(&local8);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block19; else goto block20;
block19:;
// line 40
org$frostlang$frostc$lvalue$FieldLValue* $tmp129 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$ASTNode* $tmp130 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp131 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp130, $tmp131, param1, &$s132);
org$frostlang$frostc$Compiler$TypeContext* $tmp133 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp133, $tmp134);
org$frostlang$frostc$IR$Value* $tmp135 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp130, $tmp133);
org$frostlang$frostc$FieldDecl* $tmp136 = *(&local7);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp129, param0, param1, $tmp135, $tmp136);
$fn138 $tmp137 = ($fn138) $tmp129->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp139 = $tmp137($tmp129);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$IR$Value* $tmp140 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local11) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// line 44
org$frostlang$frostc$IR$Value* $tmp141 = *(&local11);
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit($tmp141 == NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block30; else goto block31;
block30:;
// line 45
org$frostlang$frostc$IR$Value* $tmp144 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
org$frostlang$frostc$FieldDecl* $tmp145 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
org$frostlang$frostc$MethodDecl* $tmp146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block31:;
// line 47
org$frostlang$frostc$IR$Value* $tmp149 = *(&local11);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp149);
org$frostlang$frostc$IR$Value* $tmp150 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
org$frostlang$frostc$FieldDecl* $tmp151 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
// line 50
frost$core$Bit* $tmp152 = &param0->inFieldCleanup;
frost$core$Bit $tmp153 = *$tmp152;
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block32:;
// line 51
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp158 = &param0->inFieldCleanup;
*$tmp158 = $tmp157;
goto block2;
block2:;
// line 53
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block34; else goto block36;
block34:;
// line 54
org$frostlang$frostc$MethodDecl* $tmp161 = *(&local2);
org$frostlang$frostc$Type** $tmp162 = &$tmp161->returnType;
org$frostlang$frostc$Type* $tmp163 = *$tmp162;
org$frostlang$frostc$Type* $tmp164 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp165 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp163, $tmp164);
bool $tmp166 = $tmp165.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
if ($tmp166) goto block37; else goto block38;
block37:;
// line 55
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s167);
// line 56
org$frostlang$frostc$MethodDecl* $tmp168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block38:;
// line 58
org$frostlang$frostc$Compiler$TypeContext* $tmp171 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp172 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp173 = *(&local2);
org$frostlang$frostc$Type** $tmp174 = &$tmp173->returnType;
org$frostlang$frostc$Type* $tmp175 = *$tmp174;
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp171, $tmp172, $tmp175, $tmp176);
org$frostlang$frostc$IR$Value* $tmp177 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp171);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$IR$Value* $tmp178 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local12) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// line 60
org$frostlang$frostc$IR$Value* $tmp179 = *(&local12);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 == NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block39; else goto block40;
block39:;
// line 61
org$frostlang$frostc$IR$Value* $tmp182 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block40:;
// line 63
org$frostlang$frostc$IR$Value* $tmp186 = *(&local12);
$fn188 $tmp187 = ($fn188) $tmp186->$class->vtable[2];
org$frostlang$frostc$Type* $tmp189 = $tmp187($tmp186);
frost$core$Bit $tmp190 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp189);
bool $tmp191 = $tmp190.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
if ($tmp191) goto block41; else goto block42;
block41:;
// line 64
org$frostlang$frostc$IR$Value* $tmp192 = *(&local12);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp192);
goto block42;
block42:;
// line 66
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 67
org$frostlang$frostc$Variable** $tmp193 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp194 = *$tmp193;
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit($tmp194 != NULL);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block43; else goto block45;
block43:;
// line 68
// line 69
org$frostlang$frostc$Variable** $tmp197 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp198 = *$tmp197;
org$frostlang$frostc$Variable$Storage** $tmp199 = &$tmp198->storage;
org$frostlang$frostc$Variable$Storage* $tmp200 = *$tmp199;
frost$core$Int64* $tmp201 = &$tmp200->$rawValue;
frost$core$Int64 $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = (frost$core$Int64) {0};
frost$core$Bit $tmp204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block47; else goto block46;
block47:;
frost$core$Int64* $tmp206 = (frost$core$Int64*) ($tmp200->$data + 0);
frost$core$Int64 $tmp207 = *$tmp206;
*(&local14) = $tmp207;
// line 71
frost$core$Int64 $tmp208 = *(&local14);
*(&local13) = $tmp208;
goto block46;
block46:;
// line 74
org$frostlang$frostc$IR* $tmp209 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp210 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp211 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp212 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp213 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp214 = (frost$core$Int64) {2};
frost$core$Int64 $tmp215 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp216 = *(&local12);
$fn218 $tmp217 = ($fn218) $tmp216->$class->vtable[2];
org$frostlang$frostc$Type* $tmp219 = $tmp217($tmp216);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp213, $tmp214, $tmp215, $tmp219);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp210, $tmp211, param1, $tmp212, $tmp213);
$fn221 $tmp220 = ($fn221) $tmp209->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp222 = $tmp220($tmp209, $tmp210);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// line 76
org$frostlang$frostc$IR* $tmp223 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp224 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp225 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp226 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp227 = *$tmp226;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp224, $tmp225, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp227.value));
$fn229 $tmp228 = ($fn229) $tmp223->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp230 = $tmp228($tmp223, $tmp224);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
goto block44;
block45:;
// line 1
// line 79
org$frostlang$frostc$IR* $tmp231 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp232 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp233 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Value* $tmp234 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp232, $tmp233, param1, $tmp234);
$fn236 $tmp235 = ($fn236) $tmp231->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp237 = $tmp235($tmp231, $tmp232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
goto block44;
block44:;
org$frostlang$frostc$IR$Value* $tmp238 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block35;
block36:;
// line 1
// line 83
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
if ($tmp247) goto block48; else goto block49;
block48:;
// line 84
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp251)));
if ($tmp259) goto block50; else goto block51;
block50:;
// line 85
org$frostlang$frostc$ASTNode* $tmp260 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp260, $tmp261, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// line 86
org$frostlang$frostc$MethodDecl* $tmp262 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block51:;
// line 88
org$frostlang$frostc$MethodDecl* $tmp265 = *(&local2);
org$frostlang$frostc$Type** $tmp266 = &$tmp265->returnType;
org$frostlang$frostc$Type* $tmp267 = *$tmp266;
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s269, ((frost$core$Object*) $tmp267));
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp268, &$s271);
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s273, $tmp270);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
goto block49;
block49:;
// line 91
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 92
org$frostlang$frostc$IR$Block$ID$nullable* $tmp274 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp275 = *$tmp274;
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275.nonnull);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block52; else goto block54;
block52:;
// line 93
org$frostlang$frostc$IR* $tmp278 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp279 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp280 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp281 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp282 = *$tmp281;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp279, $tmp280, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp282.value));
$fn284 $tmp283 = ($fn284) $tmp278->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp285 = $tmp283($tmp278, $tmp279);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
goto block53;
block54:;
// line 1
// line 96
org$frostlang$frostc$IR* $tmp286 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp287 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp288 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp287, $tmp288, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn290 $tmp289 = ($fn290) $tmp286->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp291 = $tmp289($tmp286, $tmp287);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
goto block53;
block53:;
goto block35;
block35:;
org$frostlang$frostc$MethodDecl* $tmp292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Return$init(org$frostlang$frostc$statement$Return* param0) {

return;

}
void org$frostlang$frostc$statement$Return$cleanup(org$frostlang$frostc$statement$Return* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






