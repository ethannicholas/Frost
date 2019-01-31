#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn83)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn95)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn184)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn198)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn229)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn265)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn295)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 3365467049159589290, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };

frost$core$Int64 org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0) {

// line 17
frost$core$Int64 $tmp2 = (frost$core$Int64) {18446744073709551488};
int64_t $tmp3 = param0.value;
int64_t $tmp4 = $tmp2.value;
bool $tmp5 = $tmp3 >= $tmp4;
frost$core$Bit $tmp6 = (frost$core$Bit) {$tmp5};
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp8 = (frost$core$Int64) {127};
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 <= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// line 18
frost$core$Int64 $tmp14 = (frost$core$Int64) {8};
return $tmp14;
block2:;
// line 20
frost$core$Int64 $tmp15 = (frost$core$Int64) {18446744073709518848};
int64_t $tmp16 = param0.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 >= $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block5;
block6:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {32767};
int64_t $tmp22 = param0.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block4:;
// line 21
frost$core$Int64 $tmp27 = (frost$core$Int64) {16};
return $tmp27;
block5:;
// line 23
frost$core$Int64 $tmp28 = (frost$core$Int64) {18446744071562067968};
int64_t $tmp29 = param0.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 >= $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block9; else goto block8;
block9:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {2147483647};
int64_t $tmp35 = param0.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 <= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block8;
block7:;
// line 24
frost$core$Int64 $tmp40 = (frost$core$Int64) {32};
return $tmp40;
block8:;
// line 26
frost$core$Int64 $tmp41 = (frost$core$Int64) {64};
return $tmp41;

}
frost$core$Int64 org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 31
frost$core$UInt64 $tmp42 = (frost$core$UInt64) {255};
uint64_t $tmp43 = param0.value;
uint64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 <= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// line 32
frost$core$Int64 $tmp48 = (frost$core$Int64) {8};
return $tmp48;
block2:;
// line 34
frost$core$UInt64 $tmp49 = (frost$core$UInt64) {65535};
uint64_t $tmp50 = param0.value;
uint64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 <= $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block3; else goto block4;
block3:;
// line 35
frost$core$Int64 $tmp55 = (frost$core$Int64) {16};
return $tmp55;
block4:;
// line 37
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {4294967295};
uint64_t $tmp57 = param0.value;
uint64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 <= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block5; else goto block6;
block5:;
// line 38
frost$core$Int64 $tmp62 = (frost$core$Int64) {32};
return $tmp62;
block6:;
// line 40
frost$core$Int64 $tmp63 = (frost$core$Int64) {64};
return $tmp63;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
// line 46
frost$core$Int64* $tmp64 = &param3->$rawValue;
frost$core$Int64 $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {3};
frost$core$Bit $tmp67 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp65, $tmp66);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp69 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp70 = *$tmp69;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$Type* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = $tmp70;
frost$core$Bit* $tmp72 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp73 = *$tmp72;
// line 48
org$frostlang$frostc$Type* $tmp74 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp75 = &$tmp74->typeKind;
org$frostlang$frostc$Type$Kind $tmp76 = *$tmp75;
org$frostlang$frostc$Type$Kind$wrapper* $tmp77;
$tmp77 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp77->value = $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp79 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp78);
org$frostlang$frostc$Type$Kind$wrapper* $tmp80;
$tmp80 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp80->value = $tmp79;
ITable* $tmp81 = ((frost$core$Equatable*) $tmp77)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Bit $tmp84 = $tmp82(((frost$core$Equatable*) $tmp77), ((frost$core$Equatable*) $tmp80));
bool $tmp85 = $tmp84.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp80)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
if ($tmp85) goto block3; else goto block5;
block5:;
org$frostlang$frostc$Type* $tmp86 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp87 = &$tmp86->typeKind;
org$frostlang$frostc$Type$Kind $tmp88 = *$tmp87;
org$frostlang$frostc$Type$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp89->value = $tmp88;
frost$core$Int64 $tmp90 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp91 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp90);
org$frostlang$frostc$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp92->value = $tmp91;
ITable* $tmp93 = ((frost$core$Equatable*) $tmp89)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Bit $tmp96 = $tmp94(((frost$core$Equatable*) $tmp89), ((frost$core$Equatable*) $tmp92));
bool $tmp97 = $tmp96.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp92)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp89)));
if ($tmp97) goto block3; else goto block4;
block3:;
// line 49
frost$core$Int64 $tmp98 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int64(param2);
org$frostlang$frostc$Type* $tmp99 = *(&local0);
frost$core$Int64 $tmp100 = org$frostlang$frostc$Type$get_size$R$frost$core$Int64($tmp99);
int64_t $tmp101 = $tmp98.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 <= $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block6; else goto block8;
block6:;
// line 50
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp106 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp107 = (frost$core$Int64) {1};
org$frostlang$frostc$Type* $tmp108 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp106, $tmp107, param2, $tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$Type* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp106;
block8:;
// line 1
// line 53
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s110);
// line 54
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit(false);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s114, $tmp113);
abort(); // unreachable
block9:;
// line 55
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp115 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block7:;
goto block4;
block4:;
// line 58
org$frostlang$frostc$Type* $tmp116 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp117 = &$tmp116->typeKind;
org$frostlang$frostc$Type$Kind $tmp118 = *$tmp117;
org$frostlang$frostc$Type$Kind$wrapper* $tmp119;
$tmp119 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp119->value = $tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp121 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp120);
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = $tmp121;
ITable* $tmp123 = ((frost$core$Equatable*) $tmp119)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$core$Bit $tmp126 = $tmp124(((frost$core$Equatable*) $tmp119), ((frost$core$Equatable*) $tmp122));
bool $tmp127 = $tmp126.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp119)));
if ($tmp127) goto block11; else goto block12;
block11:;
// line 59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp128 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp129 = (frost$core$Int64) {6};
frost$core$Real64 $tmp130 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp131 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp128, $tmp129, $tmp130, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
org$frostlang$frostc$Type* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp128;
block12:;
// line 61
org$frostlang$frostc$Type* $tmp133 = *(&local0);
frost$core$Bit $tmp134 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block13; else goto block14;
block13:;
// line 62
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp136 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp138 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp136, $tmp137, $tmp138);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp139 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp140 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp139, $tmp140);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp141 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp142 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp141, $tmp142, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp139, ((frost$core$Object*) $tmp141));
org$frostlang$frostc$IR$Value* $tmp143 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp136, ((frost$collections$ListView*) $tmp139), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$Type* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp143;
block14:;
org$frostlang$frostc$Type* $tmp145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 67
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp146 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp147 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp148 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp146, $tmp147, $tmp148, $tmp149);
org$frostlang$frostc$IR$Value* $tmp150 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp146);
org$frostlang$frostc$IR$Value* $tmp151 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp150, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
return $tmp151;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Statement$ID local4;
// line 74
frost$core$Int64 $tmp152 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp153 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp152);
frost$core$UInt64 $tmp154 = (frost$core$UInt64) {1};
uint64_t $tmp155 = $tmp153.value;
uint64_t $tmp156 = $tmp154.value;
uint64_t $tmp157 = $tmp155 + $tmp156;
frost$core$UInt64 $tmp158 = (frost$core$UInt64) {$tmp157};
uint64_t $tmp159 = param2.value;
uint64_t $tmp160 = $tmp158.value;
bool $tmp161 = $tmp159 > $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block1:;
// line 75
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s164);
// line 76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 78
frost$core$Int64* $tmp165 = &param3->$rawValue;
frost$core$Int64 $tmp166 = *$tmp165;
frost$core$Int64 $tmp167 = (frost$core$Int64) {3};
frost$core$Bit $tmp168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp166, $tmp167);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block4; else goto block3;
block4:;
org$frostlang$frostc$Type** $tmp170 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
org$frostlang$frostc$Type* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local0) = $tmp171;
frost$core$Bit* $tmp173 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp174 = *$tmp173;
// line 80
org$frostlang$frostc$Type* $tmp175 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp176 = &$tmp175->typeKind;
org$frostlang$frostc$Type$Kind $tmp177 = *$tmp176;
org$frostlang$frostc$Type$Kind$wrapper* $tmp178;
$tmp178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp178->value = $tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp180 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp179);
org$frostlang$frostc$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp181->value = $tmp180;
ITable* $tmp182 = ((frost$core$Equatable*) $tmp178)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Bit $tmp185 = $tmp183(((frost$core$Equatable*) $tmp178), ((frost$core$Equatable*) $tmp181));
bool $tmp186 = $tmp185.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp181)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp178)));
if ($tmp186) goto block5; else goto block6;
block5:;
// line 81
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s187);
// line 82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 84
org$frostlang$frostc$Type* $tmp189 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp190 = &$tmp189->typeKind;
org$frostlang$frostc$Type$Kind $tmp191 = *$tmp190;
org$frostlang$frostc$Type$Kind$wrapper* $tmp192;
$tmp192 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp192->value = $tmp191;
frost$core$Int64 $tmp193 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp194 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp193);
org$frostlang$frostc$Type$Kind$wrapper* $tmp195;
$tmp195 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp195->value = $tmp194;
ITable* $tmp196 = ((frost$core$Equatable*) $tmp192)->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
frost$core$Bit $tmp199 = $tmp197(((frost$core$Equatable*) $tmp192), ((frost$core$Equatable*) $tmp195));
bool $tmp200 = $tmp199.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp195)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp192)));
if ($tmp200) goto block7; else goto block8;
block7:;
// line 85
frost$core$Int64 $tmp201 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param2);
frost$core$Int64 $tmp202 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp201);
frost$core$Int64 $tmp203 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int64($tmp202);
org$frostlang$frostc$Type* $tmp204 = *(&local0);
frost$core$Int64 $tmp205 = org$frostlang$frostc$Type$get_size$R$frost$core$Int64($tmp204);
int64_t $tmp206 = $tmp203.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 <= $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block9; else goto block11;
block9:;
// line 86
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp211 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp212 = (frost$core$Int64) {1};
frost$core$Int64 $tmp213 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param2);
frost$core$Int64 $tmp214 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp213);
frost$core$UInt64 $tmp215 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp214);
org$frostlang$frostc$Type* $tmp216 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp211, $tmp212, $tmp215, $tmp216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$Type* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp211;
block11:;
// line 1
// line 89
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s218);
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
goto block8;
block8:;
// line 93
org$frostlang$frostc$Type* $tmp220 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp221 = &$tmp220->typeKind;
org$frostlang$frostc$Type$Kind $tmp222 = *$tmp221;
org$frostlang$frostc$Type$Kind$wrapper* $tmp223;
$tmp223 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp223->value = $tmp222;
frost$core$Int64 $tmp224 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp225 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp224);
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = $tmp225;
ITable* $tmp227 = ((frost$core$Equatable*) $tmp223)->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[0];
frost$core$Bit $tmp230 = $tmp228(((frost$core$Equatable*) $tmp223), ((frost$core$Equatable*) $tmp226));
bool $tmp231 = $tmp230.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp226)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp223)));
if ($tmp231) goto block12; else goto block13;
block12:;
// line 94
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp232 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp233 = (frost$core$Int64) {6};
frost$core$Int64 $tmp234 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param2);
frost$core$Int64 $tmp235 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp234);
frost$core$Real64 $tmp236 = frost$core$Real64$init$frost$core$Int64($tmp235);
org$frostlang$frostc$Type* $tmp237 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp232, $tmp233, $tmp236, $tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$Type* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp232;
block13:;
// line 96
org$frostlang$frostc$Type* $tmp239 = *(&local0);
frost$core$Bit $tmp240 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block14; else goto block15;
block14:;
// line 97
org$frostlang$frostc$Type* $tmp242 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp243 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp242);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
org$frostlang$frostc$ClassDecl* $tmp244 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local1) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// line 98
org$frostlang$frostc$ClassDecl* $tmp245 = *(&local1);
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245 != NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s249, $tmp248);
abort(); // unreachable
block16:;
// line 99
org$frostlang$frostc$ClassDecl* $tmp250 = *(&local1);
frost$collections$Array** $tmp251 = &$tmp250->methods;
frost$collections$Array* $tmp252 = *$tmp251;
frost$core$Int64 $tmp253 = (frost$core$Int64) {0};
frost$core$Object* $tmp254 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp252, $tmp253);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp254)));
org$frostlang$frostc$MethodDecl* $tmp255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp254);
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
// line 100
org$frostlang$frostc$MethodDecl* $tmp256 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp257 = &$tmp256->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp258 = *$tmp257;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp259;
$tmp259 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp259->value = $tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp261 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp260);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp262->value = $tmp261;
ITable* $tmp263 = ((frost$core$Equatable*) $tmp259)->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[0];
frost$core$Bit $tmp266 = $tmp264(((frost$core$Equatable*) $tmp259), ((frost$core$Equatable*) $tmp262));
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp268 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s269, $tmp268);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp262)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp259)));
// line 101
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp270 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp271 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp272 = *(&local2);
frost$collections$Array** $tmp273 = &$tmp272->parameters;
frost$collections$Array* $tmp274 = *$tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {0};
frost$core$Object* $tmp276 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp274, $tmp275);
org$frostlang$frostc$Type** $tmp277 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp276)->type;
org$frostlang$frostc$Type* $tmp278 = *$tmp277;
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp270, $tmp271, $tmp278, $tmp279);
org$frostlang$frostc$IR$Value* $tmp280 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp270);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
org$frostlang$frostc$IR$Value* $tmp281 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local3) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 103
org$frostlang$frostc$IR** $tmp282 = &param0->ir;
org$frostlang$frostc$IR* $tmp283 = *$tmp282;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp284 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp285 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl* $tmp286 = *(&local2);
frost$core$Weak** $tmp287 = &$tmp286->owner;
frost$core$Weak* $tmp288 = *$tmp287;
frost$core$Object* $tmp289 = frost$core$Weak$get$R$frost$core$Weak$T($tmp288);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp290 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp291 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp290, $tmp291);
org$frostlang$frostc$IR$Value* $tmp292 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp290, ((frost$core$Object*) $tmp292));
org$frostlang$frostc$FixedArray* $tmp293 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp290);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp284, $tmp285, param1, ((org$frostlang$frostc$ClassDecl*) $tmp289), $tmp293);
$fn295 $tmp294 = ($fn295) $tmp283->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp296 = $tmp294($tmp283, $tmp284);
*(&local4) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q($tmp289);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// line 105
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp297 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp298 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp299 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp300 = *(&local2);
frost$core$Weak** $tmp301 = &$tmp300->owner;
frost$core$Weak* $tmp302 = *$tmp301;
frost$core$Object* $tmp303 = frost$core$Weak$get$R$frost$core$Weak$T($tmp302);
org$frostlang$frostc$Type** $tmp304 = &((org$frostlang$frostc$ClassDecl*) $tmp303)->type;
org$frostlang$frostc$Type* $tmp305 = *$tmp304;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp297, $tmp298, $tmp299, $tmp305);
org$frostlang$frostc$Type* $tmp306 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp307 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp297, $tmp306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q($tmp303);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
org$frostlang$frostc$IR$Value* $tmp308 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp309 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp307;
block15:;
org$frostlang$frostc$Type* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block3:;
// line 109
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp313 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp314 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp315 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp316 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp313, $tmp314, $tmp315, $tmp316);
org$frostlang$frostc$IR$Value* $tmp317 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp313);
org$frostlang$frostc$IR$Value* $tmp318 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp317, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
return $tmp318;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// line 14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

