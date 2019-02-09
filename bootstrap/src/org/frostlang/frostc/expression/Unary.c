#include "org/frostlang/frostc/expression/Unary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef org$frostlang$frostc$Type* (*$fn38)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn47)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn54)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn83)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn107)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn116)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn156)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn165)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn172)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 3193902451946592297, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:46
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:47
frost$core$Int64 $tmp5 = param2.$rawValue;
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:48:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 == $tmp8;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit($tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:49
frost$core$Int64* $tmp12 = &param3->$rawValue;
frost$core$Int64 $tmp13 = *$tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp20 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp21 = *$tmp20;
frost$core$UInt64* $tmp22 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp23 = *$tmp22;
*(&local1) = $tmp23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:51
frost$core$UInt64 $tmp24 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp25 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp24, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$IR* $tmp26 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp25;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:55
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp27 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp27, $tmp28);
org$frostlang$frostc$IR$Value* $tmp29 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp27);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$IR$Value* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local2) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:56
org$frostlang$frostc$IR$Value* $tmp31 = *(&local2);
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31 == NULL);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp34 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:59
org$frostlang$frostc$IR$Value* $tmp36 = *(&local2);
$fn38 $tmp37 = ($fn38) $tmp36->$class->vtable[2];
org$frostlang$frostc$Type* $tmp39 = $tmp37($tmp36);
frost$core$Bit $tmp40 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp39);
bool $tmp41 = $tmp40.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
if ($tmp41) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:60
org$frostlang$frostc$IR* $tmp42 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp43 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp44 = (frost$core$Int64) {15};
org$frostlang$frostc$IR$Value* $tmp45 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp43, $tmp44, param1, $tmp45);
$fn47 $tmp46 = ($fn47) $tmp42->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp48 = $tmp46($tmp42, $tmp43);
*(&local3) = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:61
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp49 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp50 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp51 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) $tmp52->$class->vtable[2];
org$frostlang$frostc$Type* $tmp55 = $tmp53($tmp52);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp49, $tmp50, $tmp51, $tmp55);
org$frostlang$frostc$IR$Value* $tmp56 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp49, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
org$frostlang$frostc$IR$Value* $tmp57 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp56;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:63
org$frostlang$frostc$IR$Value* $tmp59 = *(&local2);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp60 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp60, $tmp61);
org$frostlang$frostc$IR$Value* $tmp62 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp59, &$s63, ((frost$collections$ListView*) $tmp60), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$IR$Value* $tmp64 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp62;
block3:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:65:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp67 = $tmp5.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 == $tmp68;
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit($tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:66
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp72 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp72, $tmp73);
org$frostlang$frostc$IR$Value* $tmp74 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp72);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$IR$Value* $tmp75 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local4) = $tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:67
org$frostlang$frostc$IR$Value* $tmp76 = *(&local4);
frost$core$Bit $tmp77 = frost$core$Bit$init$builtin_bit($tmp76 == NULL);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:68
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp79 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:70
org$frostlang$frostc$IR$Value* $tmp81 = *(&local4);
$fn83 $tmp82 = ($fn83) $tmp81->$class->vtable[2];
org$frostlang$frostc$Type* $tmp84 = $tmp82($tmp81);
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Unary.frost:70:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp85 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp86 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp87 = &(&local6)->$rawValue;
*$tmp87 = $tmp86;
org$frostlang$frostc$Type$Kind $tmp88 = *(&local6);
*(&local5) = $tmp88;
org$frostlang$frostc$Type$Kind $tmp89 = *(&local5);
org$frostlang$frostc$Position $tmp90 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp85, &$s92, $tmp89, $tmp90, $tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:70:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp93 = &((org$frostlang$frostc$Symbol*) $tmp84)->name;
frost$core$String* $tmp94 = *$tmp93;
frost$core$String** $tmp95 = &((org$frostlang$frostc$Symbol*) $tmp85)->name;
frost$core$String* $tmp96 = *$tmp95;
frost$core$Bit $tmp97 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp94, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp99 = &$tmp84->typeKind;
org$frostlang$frostc$Type$Kind $tmp100 = *$tmp99;
org$frostlang$frostc$Type$Kind$wrapper* $tmp101;
$tmp101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp101->value = $tmp100;
org$frostlang$frostc$Type$Kind* $tmp102 = &$tmp85->typeKind;
org$frostlang$frostc$Type$Kind $tmp103 = *$tmp102;
org$frostlang$frostc$Type$Kind$wrapper* $tmp104;
$tmp104 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp104->value = $tmp103;
ITable* $tmp105 = ((frost$core$Equatable*) $tmp101)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Bit $tmp108 = $tmp106(((frost$core$Equatable*) $tmp101), ((frost$core$Equatable*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp104)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp101)));
*(&local7) = $tmp108;
goto block24;
block23:;
*(&local7) = $tmp97;
goto block24;
block24:;
frost$core$Bit $tmp109 = *(&local7);
bool $tmp110 = $tmp109.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
if ($tmp110) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:71
org$frostlang$frostc$IR* $tmp111 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp112 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp113 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp114 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp112, $tmp113, param1, $tmp114);
$fn116 $tmp115 = ($fn116) $tmp111->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp117 = $tmp115($tmp111, $tmp112);
*(&local8) = $tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:72
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp118 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp119 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp120 = *(&local8);
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Unary.frost:72:90
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp121 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp123 = &(&local10)->$rawValue;
*$tmp123 = $tmp122;
org$frostlang$frostc$Type$Kind $tmp124 = *(&local10);
*(&local9) = $tmp124;
org$frostlang$frostc$Type$Kind $tmp125 = *(&local9);
org$frostlang$frostc$Position $tmp126 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp121, &$s128, $tmp125, $tmp126, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp118, $tmp119, $tmp120, $tmp121);
org$frostlang$frostc$IR$Value* $tmp129 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp118, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
org$frostlang$frostc$IR$Value* $tmp130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp129;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:74
org$frostlang$frostc$IR$Value* $tmp132 = *(&local4);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp133 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp133, $tmp134);
org$frostlang$frostc$IR$Value* $tmp135 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp132, &$s136, ((frost$collections$ListView*) $tmp133), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$IR$Value* $tmp137 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp135;
block13:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp140 = $tmp5.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block27; else goto block1;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:77
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp145 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp146 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp145, $tmp146);
org$frostlang$frostc$IR$Value* $tmp147 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp145);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$IR$Value* $tmp148 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local11) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:78
org$frostlang$frostc$IR$Value* $tmp149 = *(&local11);
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149 == NULL);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp152 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:81
org$frostlang$frostc$IR$Value* $tmp154 = *(&local11);
$fn156 $tmp155 = ($fn156) $tmp154->$class->vtable[2];
org$frostlang$frostc$Type* $tmp157 = $tmp155($tmp154);
frost$core$Bit $tmp158 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp157);
bool $tmp159 = $tmp158.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
if ($tmp159) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:82
org$frostlang$frostc$IR* $tmp160 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp161 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp162 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp163 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp161, $tmp162, param1, $tmp163);
$fn165 $tmp164 = ($fn165) $tmp160->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp166 = $tmp164($tmp160, $tmp161);
*(&local12) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:83
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp167 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp169 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp170 = *(&local11);
$fn172 $tmp171 = ($fn172) $tmp170->$class->vtable[2];
org$frostlang$frostc$Type* $tmp173 = $tmp171($tmp170);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp167, $tmp168, $tmp169, $tmp173);
org$frostlang$frostc$IR$Value* $tmp174 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp167, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$IR$Value* $tmp175 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp176 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp174;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:85
org$frostlang$frostc$IR$Value* $tmp177 = *(&local11);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp178 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp179 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp178, $tmp179);
org$frostlang$frostc$IR$Value* $tmp180 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp177, &$s181, ((frost$collections$ListView*) $tmp178), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$IR$Value* $tmp182 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp180;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:88
frost$core$Int64 $tmp184 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s185, $tmp184);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* param0) {

return;

}
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

