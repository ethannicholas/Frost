#include "org/frostlang/frostc/statement/Try.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Try$class_type org$frostlang$frostc$statement$Try$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Try$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn9)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn41)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn74)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn80)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn107)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn111)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn116)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn125)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn134)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn139)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn150)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn154)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn159)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn167)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn176)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn181)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -8546630798215162542, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, 23387625596074996, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 231560649457195, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$Compiler$AutoScope* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Variable* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$Compiler$AutoContext* local6 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local9 = NULL;
org$frostlang$frostc$ASTNode* local10 = NULL;
// line 18
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoScope* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 19
org$frostlang$frostc$IR** $tmp4 = &param0->ir;
org$frostlang$frostc$IR* $tmp5 = *$tmp4;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR* $tmp6 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local1) = $tmp5;
// line 20
org$frostlang$frostc$IR* $tmp7 = *(&local1);
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp10 = $tmp8($tmp7, &$s11);
*(&local2) = $tmp10;
// line 21
org$frostlang$frostc$IR* $tmp12 = *(&local1);
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp15 = $tmp13($tmp12, &$s16);
*(&local3) = $tmp15;
// line 22
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
// line 23
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// line 24
frost$core$Int64* $tmp19 = &param3->$rawValue;
frost$core$Int64 $tmp20 = *$tmp19;
frost$core$Int64 $tmp21 = (frost$core$Int64) {22};
frost$core$Bit $tmp22 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp20, $tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp24 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp25 = *$tmp24;
frost$core$String** $tmp26 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp27 = *$tmp26;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$String* $tmp28 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local5) = $tmp27;
// line 26
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp29 = (org$frostlang$frostc$Variable*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp31 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp30);
frost$core$String* $tmp32 = *(&local5);
org$frostlang$frostc$Type* $tmp33 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp34 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
org$frostlang$frostc$IR* $tmp36 = *(&local1);
frost$collections$Array** $tmp37 = &$tmp36->locals;
frost$collections$Array* $tmp38 = *$tmp37;
ITable* $tmp39 = ((frost$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$core$Int64 $tmp42 = $tmp40(((frost$collections$CollectionView*) $tmp38));
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp34, $tmp35, $tmp42);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp29, param1, $tmp31, $tmp32, $tmp33, $tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$Variable* $tmp43 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local4) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// line 28
org$frostlang$frostc$Variable* $tmp44 = *(&local4);
frost$collections$Stack** $tmp45 = &param0->currentMethod;
frost$collections$Stack* $tmp46 = *$tmp45;
frost$core$Int64 $tmp47 = (frost$core$Int64) {0};
frost$core$Object* $tmp48 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp46, $tmp47);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp49 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp49, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp48)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Weak** $tmp50 = &$tmp44->owner;
frost$core$Weak* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Weak** $tmp52 = &$tmp44->owner;
*$tmp52 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
// line 29
org$frostlang$frostc$Variable* $tmp53 = *(&local4);
org$frostlang$frostc$Type** $tmp54 = &$tmp53->type;
org$frostlang$frostc$Type* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block7; else goto block8;
block7:;
// line 30
org$frostlang$frostc$IR* $tmp58 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp59 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp60 = (frost$core$Int64) {27};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp61 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp62 = (frost$core$Int64) {4};
org$frostlang$frostc$Variable* $tmp63 = *(&local4);
org$frostlang$frostc$Type** $tmp64 = &$tmp63->type;
org$frostlang$frostc$Type* $tmp65 = *$tmp64;
org$frostlang$frostc$Type* $tmp66 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp65);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp61, $tmp62, $tmp66);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp67 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp68 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp69 = *(&local1);
frost$collections$Array** $tmp70 = &$tmp69->locals;
frost$collections$Array* $tmp71 = *$tmp70;
ITable* $tmp72 = ((frost$collections$CollectionView*) $tmp71)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Int64 $tmp75 = $tmp73(((frost$collections$CollectionView*) $tmp71));
org$frostlang$frostc$Variable* $tmp76 = *(&local4);
org$frostlang$frostc$Type** $tmp77 = &$tmp76->type;
org$frostlang$frostc$Type* $tmp78 = *$tmp77;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp67, $tmp68, $tmp75, $tmp78);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp59, $tmp60, param1, $tmp61, $tmp67);
$fn80 $tmp79 = ($fn80) $tmp58->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp81 = $tmp79($tmp58, $tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// line 32
frost$collections$Stack** $tmp82 = &param0->enclosingContexts;
frost$collections$Stack* $tmp83 = *$tmp82;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp84 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp85 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable* $tmp86 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp84, $tmp85, $tmp86);
frost$collections$Stack$push$frost$collections$Stack$T($tmp83, ((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
goto block8;
block8:;
// line 34
org$frostlang$frostc$IR* $tmp87 = *(&local1);
frost$collections$Array** $tmp88 = &$tmp87->locals;
frost$collections$Array* $tmp89 = *$tmp88;
org$frostlang$frostc$Variable* $tmp90 = *(&local4);
org$frostlang$frostc$Type** $tmp91 = &$tmp90->type;
org$frostlang$frostc$Type* $tmp92 = *$tmp91;
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) $tmp92));
frost$core$String* $tmp93 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 37
frost$core$Int64 $tmp94 = (frost$core$Int64) {37};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s95, $tmp94);
abort(); // unreachable
block4:;
goto block2;
block3:;
// line 1
// line 42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp96 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// line 1
// line 45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp97 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp98 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp99 = (frost$core$Int64) {4};
org$frostlang$frostc$IR$Block$ID $tmp100 = *(&local2);
org$frostlang$frostc$Variable* $tmp101 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp98, $tmp99, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp100, true }), $tmp101);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp97, param0, $tmp98);
*(&local6) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
org$frostlang$frostc$Compiler$AutoContext* $tmp102 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local6) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// line 47
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp103 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp103, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$Compiler$AutoScope* $tmp104 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local7) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// line 48
ITable* $tmp105 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$collections$Iterator* $tmp108 = $tmp106(((frost$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp109 = $tmp108->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Bit $tmp112 = $tmp110($tmp108);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block11; else goto block10;
block10:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp114 = $tmp108->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
frost$core$Object* $tmp117 = $tmp115($tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp117)));
org$frostlang$frostc$ASTNode* $tmp118 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp117);
// line 49
org$frostlang$frostc$ASTNode* $tmp119 = *(&local8);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp119);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
org$frostlang$frostc$ASTNode* $tmp120 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$Compiler$AutoScope* $tmp121 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp122 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local6) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// line 52
org$frostlang$frostc$IR* $tmp123 = *(&local1);
$fn125 $tmp124 = ($fn125) $tmp123->$class->vtable[5];
frost$core$Bit $tmp126 = $tmp124($tmp123);
frost$core$Bit $tmp127 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block12; else goto block13;
block12:;
// line 53
org$frostlang$frostc$IR* $tmp129 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp130 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp131 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp132 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp130, $tmp131, param1, $tmp132);
$fn134 $tmp133 = ($fn134) $tmp129->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp135 = $tmp133($tmp129, $tmp130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
goto block13;
block13:;
// line 55
org$frostlang$frostc$IR* $tmp136 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp137 = *(&local2);
$fn139 $tmp138 = ($fn139) $tmp136->$class->vtable[4];
$tmp138($tmp136, $tmp137);
// line 1
// line 1
// line 58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp140 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp140, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$Compiler$AutoScope* $tmp141 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local9) = $tmp140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// line 59
org$frostlang$frostc$Variable* $tmp142 = *(&local4);
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142 != NULL);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block14; else goto block15;
block14:;
// line 60
org$frostlang$frostc$SymbolTable** $tmp145 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp146 = *$tmp145;
org$frostlang$frostc$Variable* $tmp147 = *(&local4);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp146, ((org$frostlang$frostc$Symbol*) $tmp147));
goto block15;
block15:;
// line 62
ITable* $tmp148 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
frost$collections$Iterator* $tmp151 = $tmp149(((frost$collections$Iterable*) param4));
goto block16;
block16:;
ITable* $tmp152 = $tmp151->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[0];
frost$core$Bit $tmp155 = $tmp153($tmp151);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block18; else goto block17;
block17:;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp157 = $tmp151->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[1];
frost$core$Object* $tmp160 = $tmp158($tmp151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp160)));
org$frostlang$frostc$ASTNode* $tmp161 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local10) = ((org$frostlang$frostc$ASTNode*) $tmp160);
// line 63
org$frostlang$frostc$ASTNode* $tmp162 = *(&local10);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp162);
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
org$frostlang$frostc$ASTNode* $tmp163 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
org$frostlang$frostc$Compiler$AutoScope* $tmp164 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 66
org$frostlang$frostc$IR* $tmp165 = *(&local1);
$fn167 $tmp166 = ($fn167) $tmp165->$class->vtable[5];
frost$core$Bit $tmp168 = $tmp166($tmp165);
frost$core$Bit $tmp169 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block19; else goto block20;
block19:;
// line 67
org$frostlang$frostc$IR* $tmp171 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp172 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp173 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp174 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp172, $tmp173, param1, $tmp174);
$fn176 $tmp175 = ($fn176) $tmp171->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp177 = $tmp175($tmp171, $tmp172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
goto block20;
block20:;
// line 70
org$frostlang$frostc$IR* $tmp178 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp179 = *(&local3);
$fn181 $tmp180 = ($fn181) $tmp178->$class->vtable[4];
$tmp180($tmp178, $tmp179);
org$frostlang$frostc$Variable* $tmp182 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return;

}
void org$frostlang$frostc$statement$Try$init(org$frostlang$frostc$statement$Try* param0) {

return;

}
void org$frostlang$frostc$statement$Try$cleanup(org$frostlang$frostc$statement$Try* param0) {

// line 14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






