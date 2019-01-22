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
org$frostlang$frostc$statement$Try$class_type org$frostlang$frostc$statement$Try$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Try$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn9)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn41)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn74)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn80)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn109)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn113)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn118)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn127)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn136)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn141)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn152)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn156)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn161)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn169)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn178)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn183)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -8546630798215162542, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, 23387625596074996, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 231560649457195, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };

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
org$frostlang$frostc$Variable* $tmp29 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp31 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp30);
frost$core$String* $tmp32 = *(&local5);
org$frostlang$frostc$Type* $tmp33 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
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
frost$core$Weak* $tmp49 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp49, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp48)));
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
org$frostlang$frostc$IR$Statement* $tmp59 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp60 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp61 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp62 = (frost$core$Int64) {4};
org$frostlang$frostc$Variable* $tmp63 = *(&local4);
org$frostlang$frostc$Type** $tmp64 = &$tmp63->type;
org$frostlang$frostc$Type* $tmp65 = *$tmp64;
org$frostlang$frostc$Type* $tmp66 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp65);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp61, $tmp62, $tmp66);
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
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit(false);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {37};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s97, $tmp96);
abort(); // unreachable
block9:;
goto block4;
block4:;
goto block2;
block3:;
// line 1
// line 42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp98 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// line 1
// line 45
org$frostlang$frostc$Compiler$AutoContext* $tmp99 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp100 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp101 = (frost$core$Int64) {4};
org$frostlang$frostc$IR$Block$ID $tmp102 = *(&local2);
org$frostlang$frostc$Variable* $tmp103 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp100, $tmp101, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp102, true }), $tmp103);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp99, param0, $tmp100);
*(&local6) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$Compiler$AutoContext* $tmp104 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local6) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// line 47
org$frostlang$frostc$Compiler$AutoScope* $tmp105 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp105, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Compiler$AutoScope* $tmp106 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local7) = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// line 48
ITable* $tmp107 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$collections$Iterator* $tmp110 = $tmp108(((frost$collections$Iterable*) param2));
goto block11;
block11:;
ITable* $tmp111 = $tmp110->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Bit $tmp114 = $tmp112($tmp110);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block13; else goto block12;
block12:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp116 = $tmp110->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
frost$core$Object* $tmp119 = $tmp117($tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp119)));
org$frostlang$frostc$ASTNode* $tmp120 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp119);
// line 49
org$frostlang$frostc$ASTNode* $tmp121 = *(&local8);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp121);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
org$frostlang$frostc$ASTNode* $tmp122 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$Compiler$AutoScope* $tmp123 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp124 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local6) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// line 52
org$frostlang$frostc$IR* $tmp125 = *(&local1);
$fn127 $tmp126 = ($fn127) $tmp125->$class->vtable[5];
frost$core$Bit $tmp128 = $tmp126($tmp125);
frost$core$Bit $tmp129 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block14; else goto block15;
block14:;
// line 53
org$frostlang$frostc$IR* $tmp131 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp132 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp133 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp134 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp132, $tmp133, param1, $tmp134);
$fn136 $tmp135 = ($fn136) $tmp131->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp137 = $tmp135($tmp131, $tmp132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
goto block15;
block15:;
// line 55
org$frostlang$frostc$IR* $tmp138 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp139 = *(&local2);
$fn141 $tmp140 = ($fn141) $tmp138->$class->vtable[4];
$tmp140($tmp138, $tmp139);
// line 1
// line 1
// line 58
org$frostlang$frostc$Compiler$AutoScope* $tmp142 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp142, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Compiler$AutoScope* $tmp143 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local9) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// line 59
org$frostlang$frostc$Variable* $tmp144 = *(&local4);
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144 != NULL);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block16; else goto block17;
block16:;
// line 60
org$frostlang$frostc$SymbolTable** $tmp147 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp148 = *$tmp147;
org$frostlang$frostc$Variable* $tmp149 = *(&local4);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp148, ((org$frostlang$frostc$Symbol*) $tmp149));
goto block17;
block17:;
// line 62
ITable* $tmp150 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
frost$collections$Iterator* $tmp153 = $tmp151(((frost$collections$Iterable*) param4));
goto block18;
block18:;
ITable* $tmp154 = $tmp153->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$core$Bit $tmp157 = $tmp155($tmp153);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block20; else goto block19;
block19:;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp159 = $tmp153->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[1];
frost$core$Object* $tmp162 = $tmp160($tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp162)));
org$frostlang$frostc$ASTNode* $tmp163 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local10) = ((org$frostlang$frostc$ASTNode*) $tmp162);
// line 63
org$frostlang$frostc$ASTNode* $tmp164 = *(&local10);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp164);
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
org$frostlang$frostc$ASTNode* $tmp165 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$Compiler$AutoScope* $tmp166 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 66
org$frostlang$frostc$IR* $tmp167 = *(&local1);
$fn169 $tmp168 = ($fn169) $tmp167->$class->vtable[5];
frost$core$Bit $tmp170 = $tmp168($tmp167);
frost$core$Bit $tmp171 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block21; else goto block22;
block21:;
// line 67
org$frostlang$frostc$IR* $tmp173 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp174 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp175 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp176 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp174, $tmp175, param1, $tmp176);
$fn178 $tmp177 = ($fn178) $tmp173->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp179 = $tmp177($tmp173, $tmp174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
goto block22;
block22:;
// line 70
org$frostlang$frostc$IR* $tmp180 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp181 = *(&local3);
$fn183 $tmp182 = ($fn183) $tmp180->$class->vtable[4];
$tmp182($tmp180, $tmp181);
org$frostlang$frostc$Variable* $tmp184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
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






