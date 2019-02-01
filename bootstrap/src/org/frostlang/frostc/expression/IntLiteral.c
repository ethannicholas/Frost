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
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn83)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn95)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn121)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn180)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn261)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn291)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 3365467049159589290, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block7:;
goto block4;
block4:;
// line 57
org$frostlang$frostc$Type* $tmp112 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp113 = &$tmp112->typeKind;
org$frostlang$frostc$Type$Kind $tmp114 = *$tmp113;
org$frostlang$frostc$Type$Kind$wrapper* $tmp115;
$tmp115 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp115->value = $tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp117 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp116);
org$frostlang$frostc$Type$Kind$wrapper* $tmp118;
$tmp118 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp118->value = $tmp117;
ITable* $tmp119 = ((frost$core$Equatable*) $tmp115)->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[0];
frost$core$Bit $tmp122 = $tmp120(((frost$core$Equatable*) $tmp115), ((frost$core$Equatable*) $tmp118));
bool $tmp123 = $tmp122.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp118)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp115)));
if ($tmp123) goto block9; else goto block10;
block9:;
// line 58
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp124 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp125 = (frost$core$Int64) {6};
frost$core$Real64 $tmp126 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp127 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp124, $tmp125, $tmp126, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$Type* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp124;
block10:;
// line 60
org$frostlang$frostc$Type* $tmp129 = *(&local0);
frost$core$Bit $tmp130 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp129);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block11; else goto block12;
block11:;
// line 61
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp132 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp133 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp134 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp132, $tmp133, $tmp134);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp135 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp136 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp135, $tmp136);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp137 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp138 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp137, $tmp138, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp135, ((frost$core$Object*) $tmp137));
org$frostlang$frostc$IR$Value* $tmp139 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp132, ((frost$collections$ListView*) $tmp135), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$Type* $tmp140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp139;
block12:;
org$frostlang$frostc$Type* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 66
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp142 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp143 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp144 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp142, $tmp143, $tmp144, $tmp145);
org$frostlang$frostc$IR$Value* $tmp146 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp142);
org$frostlang$frostc$IR$Value* $tmp147 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp146, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
return $tmp147;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Statement$ID local4;
// line 73
frost$core$Int64 $tmp148 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp149 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp148);
frost$core$UInt64 $tmp150 = (frost$core$UInt64) {1};
uint64_t $tmp151 = $tmp149.value;
uint64_t $tmp152 = $tmp150.value;
uint64_t $tmp153 = $tmp151 + $tmp152;
frost$core$UInt64 $tmp154 = (frost$core$UInt64) {$tmp153};
uint64_t $tmp155 = param2.value;
uint64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 > $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block1; else goto block2;
block1:;
// line 74
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s160);
// line 75
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 77
frost$core$Int64* $tmp161 = &param3->$rawValue;
frost$core$Int64 $tmp162 = *$tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {3};
frost$core$Bit $tmp164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp162, $tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block4; else goto block3;
block4:;
org$frostlang$frostc$Type** $tmp166 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp167 = *$tmp166;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$Type* $tmp168 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local0) = $tmp167;
frost$core$Bit* $tmp169 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp170 = *$tmp169;
// line 79
org$frostlang$frostc$Type* $tmp171 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp172 = &$tmp171->typeKind;
org$frostlang$frostc$Type$Kind $tmp173 = *$tmp172;
org$frostlang$frostc$Type$Kind$wrapper* $tmp174;
$tmp174 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp174->value = $tmp173;
frost$core$Int64 $tmp175 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp176 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp175);
org$frostlang$frostc$Type$Kind$wrapper* $tmp177;
$tmp177 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp177->value = $tmp176;
ITable* $tmp178 = ((frost$core$Equatable*) $tmp174)->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Bit $tmp181 = $tmp179(((frost$core$Equatable*) $tmp174), ((frost$core$Equatable*) $tmp177));
bool $tmp182 = $tmp181.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp177)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp174)));
if ($tmp182) goto block5; else goto block6;
block5:;
// line 80
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s183);
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 83
org$frostlang$frostc$Type* $tmp185 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp186 = &$tmp185->typeKind;
org$frostlang$frostc$Type$Kind $tmp187 = *$tmp186;
org$frostlang$frostc$Type$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp188->value = $tmp187;
frost$core$Int64 $tmp189 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp190 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp189);
org$frostlang$frostc$Type$Kind$wrapper* $tmp191;
$tmp191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp191->value = $tmp190;
ITable* $tmp192 = ((frost$core$Equatable*) $tmp188)->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
frost$core$Bit $tmp195 = $tmp193(((frost$core$Equatable*) $tmp188), ((frost$core$Equatable*) $tmp191));
bool $tmp196 = $tmp195.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp191)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp188)));
if ($tmp196) goto block7; else goto block8;
block7:;
// line 84
frost$core$Int64 $tmp197 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param2);
frost$core$Int64 $tmp198 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp197);
frost$core$Int64 $tmp199 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int64($tmp198);
org$frostlang$frostc$Type* $tmp200 = *(&local0);
frost$core$Int64 $tmp201 = org$frostlang$frostc$Type$get_size$R$frost$core$Int64($tmp200);
int64_t $tmp202 = $tmp199.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 <= $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block9; else goto block11;
block9:;
// line 85
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp207 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp208 = (frost$core$Int64) {1};
frost$core$Int64 $tmp209 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param2);
frost$core$Int64 $tmp210 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp209);
frost$core$UInt64 $tmp211 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp210);
org$frostlang$frostc$Type* $tmp212 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp207, $tmp208, $tmp211, $tmp212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
org$frostlang$frostc$Type* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp207;
block11:;
// line 1
// line 88
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s214);
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
goto block8;
block8:;
// line 92
org$frostlang$frostc$Type* $tmp216 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp217 = &$tmp216->typeKind;
org$frostlang$frostc$Type$Kind $tmp218 = *$tmp217;
org$frostlang$frostc$Type$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp219->value = $tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp221 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp220);
org$frostlang$frostc$Type$Kind$wrapper* $tmp222;
$tmp222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp222->value = $tmp221;
ITable* $tmp223 = ((frost$core$Equatable*) $tmp219)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
frost$core$Bit $tmp226 = $tmp224(((frost$core$Equatable*) $tmp219), ((frost$core$Equatable*) $tmp222));
bool $tmp227 = $tmp226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp219)));
if ($tmp227) goto block12; else goto block13;
block12:;
// line 93
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp228 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp229 = (frost$core$Int64) {6};
frost$core$Int64 $tmp230 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param2);
frost$core$Int64 $tmp231 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp230);
frost$core$Real64 $tmp232 = frost$core$Real64$init$frost$core$Int64($tmp231);
org$frostlang$frostc$Type* $tmp233 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp228, $tmp229, $tmp232, $tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$Type* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp228;
block13:;
// line 95
org$frostlang$frostc$Type* $tmp235 = *(&local0);
frost$core$Bit $tmp236 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block14; else goto block15;
block14:;
// line 96
org$frostlang$frostc$Type* $tmp238 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp239 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp238);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
org$frostlang$frostc$ClassDecl* $tmp240 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local1) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// line 97
org$frostlang$frostc$ClassDecl* $tmp241 = *(&local1);
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit($tmp241 != NULL);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s245, $tmp244);
abort(); // unreachable
block16:;
// line 98
org$frostlang$frostc$ClassDecl* $tmp246 = *(&local1);
frost$collections$Array** $tmp247 = &$tmp246->methods;
frost$collections$Array* $tmp248 = *$tmp247;
frost$core$Int64 $tmp249 = (frost$core$Int64) {0};
frost$core$Object* $tmp250 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp248, $tmp249);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp250)));
org$frostlang$frostc$MethodDecl* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp250);
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
// line 99
org$frostlang$frostc$MethodDecl* $tmp252 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp253 = &$tmp252->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp254 = *$tmp253;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp255;
$tmp255 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp255->value = $tmp254;
frost$core$Int64 $tmp256 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp257 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp256);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp258;
$tmp258 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp258->value = $tmp257;
ITable* $tmp259 = ((frost$core$Equatable*) $tmp255)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Bit $tmp262 = $tmp260(((frost$core$Equatable*) $tmp255), ((frost$core$Equatable*) $tmp258));
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp264 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s265, $tmp264);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp258)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp255)));
// line 100
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp266 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp267 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp268 = *(&local2);
frost$collections$Array** $tmp269 = &$tmp268->parameters;
frost$collections$Array* $tmp270 = *$tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {0};
frost$core$Object* $tmp272 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp270, $tmp271);
org$frostlang$frostc$Type** $tmp273 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp272)->type;
org$frostlang$frostc$Type* $tmp274 = *$tmp273;
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp266, $tmp267, $tmp274, $tmp275);
org$frostlang$frostc$IR$Value* $tmp276 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp266);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
org$frostlang$frostc$IR$Value* $tmp277 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local3) = $tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q($tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// line 102
org$frostlang$frostc$IR** $tmp278 = &param0->ir;
org$frostlang$frostc$IR* $tmp279 = *$tmp278;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp280 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp281 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl* $tmp282 = *(&local2);
frost$core$Weak** $tmp283 = &$tmp282->owner;
frost$core$Weak* $tmp284 = *$tmp283;
frost$core$Object* $tmp285 = frost$core$Weak$get$R$frost$core$Weak$T($tmp284);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp286 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp286, $tmp287);
org$frostlang$frostc$IR$Value* $tmp288 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp286, ((frost$core$Object*) $tmp288));
org$frostlang$frostc$FixedArray* $tmp289 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp286);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp280, $tmp281, param1, ((org$frostlang$frostc$ClassDecl*) $tmp285), $tmp289);
$fn291 $tmp290 = ($fn291) $tmp279->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp292 = $tmp290($tmp279, $tmp280);
*(&local4) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q($tmp285);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// line 104
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp293 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp294 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp295 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp296 = *(&local2);
frost$core$Weak** $tmp297 = &$tmp296->owner;
frost$core$Weak* $tmp298 = *$tmp297;
frost$core$Object* $tmp299 = frost$core$Weak$get$R$frost$core$Weak$T($tmp298);
org$frostlang$frostc$Type** $tmp300 = &((org$frostlang$frostc$ClassDecl*) $tmp299)->type;
org$frostlang$frostc$Type* $tmp301 = *$tmp300;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp293, $tmp294, $tmp295, $tmp301);
org$frostlang$frostc$Type* $tmp302 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp303 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp293, $tmp302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q($tmp299);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
org$frostlang$frostc$IR$Value* $tmp304 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp303;
block15:;
org$frostlang$frostc$Type* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block3:;
// line 108
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp309 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp310 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp311 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp312 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp309, $tmp310, $tmp311, $tmp312);
org$frostlang$frostc$IR$Value* $tmp313 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp309);
org$frostlang$frostc$IR$Value* $tmp314 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp313, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
return $tmp314;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// line 14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

