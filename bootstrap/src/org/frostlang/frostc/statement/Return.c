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
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Bit.h"
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
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int64 (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn40)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn85)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn89)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn94)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn132)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$Type* (*$fn182)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn212)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn215)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn223)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn230)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn239)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn251)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn278)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn284)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 6365785573033434727, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
frost$core$Int64 local7;
frost$core$Int64 local8;
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
if ($tmp20) goto block4; else goto block2;
block4:;
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
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block2;
block3:;
org$frostlang$frostc$MethodDecl* $tmp31 = *(&local2);
frost$core$Weak** $tmp32 = &$tmp31->owner;
frost$core$Weak* $tmp33 = *$tmp32;
frost$core$Object* $tmp34 = frost$core$Weak$get$R$frost$core$Weak$T($tmp33);
frost$core$String** $tmp35 = &((org$frostlang$frostc$ClassDecl*) $tmp34)->name;
frost$core$String* $tmp36 = *$tmp35;
ITable* $tmp38 = ((frost$core$Equatable*) $tmp36)->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[1];
frost$core$Bit $tmp41 = $tmp39(((frost$core$Equatable*) $tmp36), ((frost$core$Equatable*) &$s37));
bool $tmp42 = $tmp41.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp34);
if ($tmp42) goto block1; else goto block2;
block1:;
// line 29
org$frostlang$frostc$ClassDecl* $tmp43 = *(&local1);
org$frostlang$frostc$Type** $tmp44 = &$tmp43->rawSuper;
org$frostlang$frostc$Type* $tmp45 = *$tmp44;
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit($tmp45 != NULL);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block7; else goto block6;
block7:;
org$frostlang$frostc$ClassDecl* $tmp48 = *(&local1);
frost$core$Bit $tmp49 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp48);
frost$core$Bit $tmp50 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block5; else goto block6;
block5:;
// line 30
org$frostlang$frostc$ClassDecl* $tmp52 = *(&local1);
org$frostlang$frostc$Type** $tmp53 = &$tmp52->type;
org$frostlang$frostc$Type* $tmp54 = *$tmp53;
org$frostlang$frostc$ClassDecl* $tmp55 = *(&local1);
org$frostlang$frostc$Type** $tmp56 = &$tmp55->rawSuper;
org$frostlang$frostc$Type* $tmp57 = *$tmp56;
org$frostlang$frostc$Type* $tmp58 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp54, $tmp57);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$Type* $tmp59 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local3) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// line 31
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp60 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp61 = (frost$core$Int64) {9};
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp62 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp63 = (frost$core$Int64) {16};
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp64 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {41};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp64, $tmp65, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp62, $tmp63, param1, $tmp64, &$s66);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp67 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp67);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp60, $tmp61, param1, $tmp62, $tmp67);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$Type* $tmp68 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
// line 35
frost$core$Bit* $tmp69 = &param0->inFieldCleanup;
frost$core$Bit $tmp70 = *$tmp69;
frost$core$Bit $tmp71 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp73 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s74, $tmp73);
abort(); // unreachable
block8:;
// line 36
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp76 = &param0->inFieldCleanup;
*$tmp76 = $tmp75;
// line 37
org$frostlang$frostc$MethodDecl* $tmp77 = *(&local2);
frost$core$Weak** $tmp78 = &$tmp77->owner;
frost$core$Weak* $tmp79 = *$tmp78;
frost$core$Object* $tmp80 = frost$core$Weak$get$R$frost$core$Weak$T($tmp79);
frost$collections$Array** $tmp81 = &((org$frostlang$frostc$ClassDecl*) $tmp80)->fields;
frost$collections$Array* $tmp82 = *$tmp81;
ITable* $tmp83 = ((frost$collections$Iterable*) $tmp82)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$collections$Iterator* $tmp86 = $tmp84(((frost$collections$Iterable*) $tmp82));
goto block10;
block10:;
ITable* $tmp87 = $tmp86->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Bit $tmp90 = $tmp88($tmp86);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block12; else goto block11;
block11:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp92 = $tmp86->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[1];
frost$core$Object* $tmp95 = $tmp93($tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp95)));
org$frostlang$frostc$FieldDecl* $tmp96 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp95);
// line 38
org$frostlang$frostc$FieldDecl* $tmp97 = *(&local4);
frost$core$Bit $tmp98 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp97);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block17; else goto block14;
block17:;
org$frostlang$frostc$FieldDecl* $tmp100 = *(&local4);
org$frostlang$frostc$Annotations** $tmp101 = &$tmp100->annotations;
org$frostlang$frostc$Annotations* $tmp102 = *$tmp101;
frost$core$Bit $tmp103 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp102);
frost$core$Bit $tmp104 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block16; else goto block14;
block16:;
org$frostlang$frostc$FieldDecl* $tmp106 = *(&local4);
org$frostlang$frostc$FieldDecl$Kind* $tmp107 = &$tmp106->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp108 = *$tmp107;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp109;
$tmp109 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp109->value = $tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp111 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp110);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp109)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp109), ((frost$core$Equatable*) $tmp112));
bool $tmp117 = $tmp116.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp109)));
if ($tmp117) goto block15; else goto block14;
block15:;
org$frostlang$frostc$FieldDecl* $tmp118 = *(&local4);
org$frostlang$frostc$Type** $tmp119 = &$tmp118->type;
org$frostlang$frostc$Type* $tmp120 = *$tmp119;
frost$core$Bit $tmp121 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block13; else goto block14;
block13:;
// line 40
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp123 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp124 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp125 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp124, $tmp125, param1, &$s126);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp127 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp128 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp127, $tmp128);
org$frostlang$frostc$IR$Value* $tmp129 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp124, $tmp127);
org$frostlang$frostc$FieldDecl* $tmp130 = *(&local4);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp123, param0, param1, $tmp129, $tmp130);
$fn132 $tmp131 = ($fn132) $tmp123->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp133 = $tmp131($tmp123);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$IR$Value* $tmp134 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local5) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// line 44
org$frostlang$frostc$IR$Value* $tmp135 = *(&local5);
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135 == NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block18; else goto block19;
block18:;
// line 45
org$frostlang$frostc$IR$Value* $tmp138 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
org$frostlang$frostc$FieldDecl* $tmp139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
org$frostlang$frostc$MethodDecl* $tmp140 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block19:;
// line 47
org$frostlang$frostc$IR$Value* $tmp143 = *(&local5);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp143);
org$frostlang$frostc$IR$Value* $tmp144 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block14:;
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
org$frostlang$frostc$FieldDecl* $tmp145 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
// line 50
frost$core$Bit* $tmp146 = &param0->inFieldCleanup;
frost$core$Bit $tmp147 = *$tmp146;
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s150, $tmp149);
abort(); // unreachable
block20:;
// line 51
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp152 = &param0->inFieldCleanup;
*$tmp152 = $tmp151;
goto block2;
block2:;
// line 53
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block22; else goto block24;
block22:;
// line 54
org$frostlang$frostc$MethodDecl* $tmp155 = *(&local2);
org$frostlang$frostc$Type** $tmp156 = &$tmp155->returnType;
org$frostlang$frostc$Type* $tmp157 = *$tmp156;
org$frostlang$frostc$Type* $tmp158 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp159 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp157, $tmp158);
bool $tmp160 = $tmp159.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
if ($tmp160) goto block25; else goto block26;
block25:;
// line 55
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s161);
// line 56
org$frostlang$frostc$MethodDecl* $tmp162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// line 58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp165 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp166 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp167 = *(&local2);
org$frostlang$frostc$Type** $tmp168 = &$tmp167->returnType;
org$frostlang$frostc$Type* $tmp169 = *$tmp168;
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp165, $tmp166, $tmp169, $tmp170);
org$frostlang$frostc$IR$Value* $tmp171 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp165);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
org$frostlang$frostc$IR$Value* $tmp172 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local6) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// line 60
org$frostlang$frostc$IR$Value* $tmp173 = *(&local6);
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit($tmp173 == NULL);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block27; else goto block28;
block27:;
// line 61
org$frostlang$frostc$IR$Value* $tmp176 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block28:;
// line 63
org$frostlang$frostc$IR$Value* $tmp180 = *(&local6);
$fn182 $tmp181 = ($fn182) $tmp180->$class->vtable[2];
org$frostlang$frostc$Type* $tmp183 = $tmp181($tmp180);
frost$core$Bit $tmp184 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp183);
bool $tmp185 = $tmp184.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
if ($tmp185) goto block29; else goto block30;
block29:;
// line 64
org$frostlang$frostc$IR$Value* $tmp186 = *(&local6);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp186);
goto block30;
block30:;
// line 66
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 67
org$frostlang$frostc$Variable** $tmp187 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp188 = *$tmp187;
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit($tmp188 != NULL);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block31; else goto block33;
block31:;
// line 68
// line 69
org$frostlang$frostc$Variable** $tmp191 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp192 = *$tmp191;
org$frostlang$frostc$Variable$Storage** $tmp193 = &$tmp192->storage;
org$frostlang$frostc$Variable$Storage* $tmp194 = *$tmp193;
frost$core$Int64* $tmp195 = &$tmp194->$rawValue;
frost$core$Int64 $tmp196 = *$tmp195;
frost$core$Int64 $tmp197 = (frost$core$Int64) {0};
frost$core$Bit $tmp198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp196, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block35; else goto block34;
block35:;
frost$core$Int64* $tmp200 = (frost$core$Int64*) ($tmp194->$data + 0);
frost$core$Int64 $tmp201 = *$tmp200;
*(&local8) = $tmp201;
// line 71
frost$core$Int64 $tmp202 = *(&local8);
*(&local7) = $tmp202;
goto block34;
block34:;
// line 74
org$frostlang$frostc$IR* $tmp203 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp204 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp205 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp206 = *(&local6);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp207 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp208 = (frost$core$Int64) {2};
frost$core$Int64 $tmp209 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp210 = *(&local6);
$fn212 $tmp211 = ($fn212) $tmp210->$class->vtable[2];
org$frostlang$frostc$Type* $tmp213 = $tmp211($tmp210);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp207, $tmp208, $tmp209, $tmp213);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp204, $tmp205, param1, $tmp206, $tmp207);
$fn215 $tmp214 = ($fn215) $tmp203->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp216 = $tmp214($tmp203, $tmp204);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// line 76
org$frostlang$frostc$IR* $tmp217 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp218 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp219 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp220 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp221 = *$tmp220;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp218, $tmp219, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp221.value));
$fn223 $tmp222 = ($fn223) $tmp217->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp224 = $tmp222($tmp217, $tmp218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
goto block32;
block33:;
// line 1
// line 79
org$frostlang$frostc$IR* $tmp225 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp226 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp227 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Value* $tmp228 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp226, $tmp227, param1, $tmp228);
$fn230 $tmp229 = ($fn230) $tmp225->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp231 = $tmp229($tmp225, $tmp226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
goto block32;
block32:;
org$frostlang$frostc$IR$Value* $tmp232 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block23;
block24:;
// line 1
// line 83
org$frostlang$frostc$MethodDecl* $tmp233 = *(&local2);
org$frostlang$frostc$Type** $tmp234 = &$tmp233->returnType;
org$frostlang$frostc$Type* $tmp235 = *$tmp234;
org$frostlang$frostc$Type* $tmp236 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp237 = ((frost$core$Equatable*) $tmp235)->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[1];
frost$core$Bit $tmp240 = $tmp238(((frost$core$Equatable*) $tmp235), ((frost$core$Equatable*) $tmp236));
bool $tmp241 = $tmp240.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
if ($tmp241) goto block36; else goto block37;
block36:;
// line 84
org$frostlang$frostc$MethodDecl* $tmp242 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp243 = &$tmp242->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp244 = *$tmp243;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp245;
$tmp245 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp245->value = $tmp244;
frost$core$Int64 $tmp246 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp247 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp246);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp248;
$tmp248 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp248->value = $tmp247;
ITable* $tmp249 = ((frost$core$Equatable*) $tmp245)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Bit $tmp252 = $tmp250(((frost$core$Equatable*) $tmp245), ((frost$core$Equatable*) $tmp248));
bool $tmp253 = $tmp252.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp248)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp245)));
if ($tmp253) goto block38; else goto block39;
block38:;
// line 85
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp254 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp255 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp254, $tmp255, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// line 86
org$frostlang$frostc$MethodDecl* $tmp256 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp257 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block39:;
// line 88
org$frostlang$frostc$MethodDecl* $tmp259 = *(&local2);
org$frostlang$frostc$Type** $tmp260 = &$tmp259->returnType;
org$frostlang$frostc$Type* $tmp261 = *$tmp260;
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s263, ((frost$core$Object*) $tmp261));
frost$core$String* $tmp264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp262, &$s265);
frost$core$String* $tmp266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s267, $tmp264);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp266);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
goto block37;
block37:;
// line 91
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 92
org$frostlang$frostc$IR$Block$ID$nullable* $tmp268 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp269 = *$tmp268;
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit($tmp269.nonnull);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block40; else goto block42;
block40:;
// line 93
org$frostlang$frostc$IR* $tmp272 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp273 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp275 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp276 = *$tmp275;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp273, $tmp274, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp276.value));
$fn278 $tmp277 = ($fn278) $tmp272->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp279 = $tmp277($tmp272, $tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
goto block41;
block42:;
// line 1
// line 96
org$frostlang$frostc$IR* $tmp280 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp281 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp282 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp281, $tmp282, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn284 $tmp283 = ($fn284) $tmp280->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp285 = $tmp283($tmp280, $tmp281);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
goto block41;
block41:;
goto block23;
block23:;
org$frostlang$frostc$MethodDecl* $tmp286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp287 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp288 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
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






