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
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn88)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn102)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn130)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn202)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn218)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn258)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn294)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn320)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn339)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn377)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn403)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 3365467049159589290, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706163497198630678, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8441503548806107873, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };

frost$core$Int64 org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:17
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:18
frost$core$Int64 $tmp14 = (frost$core$Int64) {8};
return $tmp14;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:20
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:21
frost$core$Int64 $tmp27 = (frost$core$Int64) {16};
return $tmp27;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:23
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:24
frost$core$Int64 $tmp40 = (frost$core$Int64) {32};
return $tmp40;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:26
frost$core$Int64 $tmp41 = (frost$core$Int64) {64};
return $tmp41;

}
frost$core$Int64 org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:31
frost$core$UInt64 $tmp42 = (frost$core$UInt64) {255};
uint64_t $tmp43 = param0.value;
uint64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 <= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:32
frost$core$Int64 $tmp48 = (frost$core$Int64) {8};
return $tmp48;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:34
frost$core$UInt64 $tmp49 = (frost$core$UInt64) {65535};
uint64_t $tmp50 = param0.value;
uint64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 <= $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:35
frost$core$Int64 $tmp55 = (frost$core$Int64) {16};
return $tmp55;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:37
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {4294967295};
uint64_t $tmp57 = param0.value;
uint64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 <= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:38
frost$core$Int64 $tmp62 = (frost$core$Int64) {32};
return $tmp62;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:40
frost$core$Int64 $tmp63 = (frost$core$Int64) {64};
return $tmp63;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:46
frost$core$Int64* $tmp64 = &param3->$rawValue;
frost$core$Int64 $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IntLiteral.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 == $tmp68;
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit($tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp72 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp73 = *$tmp72;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$Type* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local0) = $tmp73;
frost$core$Bit* $tmp75 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp76 = *$tmp75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:48
org$frostlang$frostc$Type* $tmp77 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp78 = &$tmp77->typeKind;
org$frostlang$frostc$Type$Kind $tmp79 = *$tmp78;
org$frostlang$frostc$Type$Kind$wrapper* $tmp80;
$tmp80 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp80->value = $tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp82 = &(&local2)->$rawValue;
*$tmp82 = $tmp81;
org$frostlang$frostc$Type$Kind $tmp83 = *(&local2);
*(&local1) = $tmp83;
org$frostlang$frostc$Type$Kind $tmp84 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp85;
$tmp85 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp85->value = $tmp84;
ITable* $tmp86 = ((frost$core$Equatable*) $tmp80)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$core$Bit $tmp89 = $tmp87(((frost$core$Equatable*) $tmp80), ((frost$core$Equatable*) $tmp85));
bool $tmp90 = $tmp89.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp85)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp80)));
if ($tmp90) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type* $tmp91 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp92 = &$tmp91->typeKind;
org$frostlang$frostc$Type$Kind $tmp93 = *$tmp92;
org$frostlang$frostc$Type$Kind$wrapper* $tmp94;
$tmp94 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp94->value = $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp96 = &(&local4)->$rawValue;
*$tmp96 = $tmp95;
org$frostlang$frostc$Type$Kind $tmp97 = *(&local4);
*(&local3) = $tmp97;
org$frostlang$frostc$Type$Kind $tmp98 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((frost$core$Equatable*) $tmp94)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Bit $tmp103 = $tmp101(((frost$core$Equatable*) $tmp94), ((frost$core$Equatable*) $tmp99));
bool $tmp104 = $tmp103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp94)));
if ($tmp104) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:49
frost$core$Int64 $tmp105 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int64(param2);
org$frostlang$frostc$Type* $tmp106 = *(&local0);
frost$core$Int64 $tmp107 = org$frostlang$frostc$Type$get_size$R$frost$core$Int64($tmp106);
int64_t $tmp108 = $tmp105.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 <= $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:50
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp113 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp114 = (frost$core$Int64) {1};
org$frostlang$frostc$Type* $tmp115 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp113, $tmp114, param2, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$Type* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp113;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:53
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:54
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:57
org$frostlang$frostc$Type* $tmp119 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp120 = &$tmp119->typeKind;
org$frostlang$frostc$Type$Kind $tmp121 = *$tmp120;
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from IntLiteral.frost:57:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp124 = &(&local6)->$rawValue;
*$tmp124 = $tmp123;
org$frostlang$frostc$Type$Kind $tmp125 = *(&local6);
*(&local5) = $tmp125;
org$frostlang$frostc$Type$Kind $tmp126 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp127;
$tmp127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp127->value = $tmp126;
ITable* $tmp128 = ((frost$core$Equatable*) $tmp122)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$core$Bit $tmp131 = $tmp129(((frost$core$Equatable*) $tmp122), ((frost$core$Equatable*) $tmp127));
bool $tmp132 = $tmp131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp127)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
if ($tmp132) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:58
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp133 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp134 = (frost$core$Int64) {6};
frost$core$Real64 $tmp135 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp136 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp133, $tmp134, $tmp135, $tmp136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$Type* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp133;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:60
org$frostlang$frostc$Type* $tmp138 = *(&local0);
frost$core$Bit $tmp139 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:61
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp141 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp142 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp143 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp141, $tmp142, $tmp143);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp144 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp145 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp144, $tmp145);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp146 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp147 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp146, $tmp147, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp144, ((frost$core$Object*) $tmp146));
org$frostlang$frostc$IR$Value* $tmp148 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp141, ((frost$collections$ListView*) $tmp144), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$Type* $tmp149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp148;
block16:;
org$frostlang$frostc$Type* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:66
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp151 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp152 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from IntLiteral.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp153 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp154 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp155 = &(&local8)->$rawValue;
*$tmp155 = $tmp154;
org$frostlang$frostc$Type$Kind $tmp156 = *(&local8);
*(&local7) = $tmp156;
org$frostlang$frostc$Type$Kind $tmp157 = *(&local7);
org$frostlang$frostc$Position $tmp158 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp153, &$s160, $tmp157, $tmp158, $tmp159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp151, $tmp152, $tmp153, $tmp161);
org$frostlang$frostc$IR$Value* $tmp162 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp151);
org$frostlang$frostc$IR$Value* $tmp163 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp162, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
return $tmp163;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$ClassDecl* local7 = NULL;
org$frostlang$frostc$MethodDecl* local8 = NULL;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$MethodDecl$Kind local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:73
frost$core$Int64 $tmp164 = (frost$core$Int64) {9223372036854775807};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:73:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp165 = $tmp164.value;
frost$core$UInt64 $tmp166 = (frost$core$UInt64) {((uint64_t) $tmp165)};
frost$core$UInt64 $tmp167 = (frost$core$UInt64) {1};
uint64_t $tmp168 = $tmp166.value;
uint64_t $tmp169 = $tmp167.value;
uint64_t $tmp170 = $tmp168 + $tmp169;
frost$core$UInt64 $tmp171 = (frost$core$UInt64) {$tmp170};
uint64_t $tmp172 = param2.value;
uint64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 > $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:74
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s177);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:75
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:77
frost$core$Int64* $tmp178 = &param3->$rawValue;
frost$core$Int64 $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IntLiteral.frost:78:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 == $tmp182;
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Type** $tmp186 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp187 = *$tmp186;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
org$frostlang$frostc$Type* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = $tmp187;
frost$core$Bit* $tmp189 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp190 = *$tmp189;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:79
org$frostlang$frostc$Type* $tmp191 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp192 = &$tmp191->typeKind;
org$frostlang$frostc$Type$Kind $tmp193 = *$tmp192;
org$frostlang$frostc$Type$Kind$wrapper* $tmp194;
$tmp194 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp194->value = $tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from IntLiteral.frost:79:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp196 = &(&local2)->$rawValue;
*$tmp196 = $tmp195;
org$frostlang$frostc$Type$Kind $tmp197 = *(&local2);
*(&local1) = $tmp197;
org$frostlang$frostc$Type$Kind $tmp198 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp199;
$tmp199 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp199->value = $tmp198;
ITable* $tmp200 = ((frost$core$Equatable*) $tmp194)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
frost$core$Bit $tmp203 = $tmp201(((frost$core$Equatable*) $tmp194), ((frost$core$Equatable*) $tmp199));
bool $tmp204 = $tmp203.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp199)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp194)));
if ($tmp204) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:80
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s205);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:83
org$frostlang$frostc$Type* $tmp207 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp208 = &$tmp207->typeKind;
org$frostlang$frostc$Type$Kind $tmp209 = *$tmp208;
org$frostlang$frostc$Type$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp210->value = $tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from IntLiteral.frost:83:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp212 = &(&local4)->$rawValue;
*$tmp212 = $tmp211;
org$frostlang$frostc$Type$Kind $tmp213 = *(&local4);
*(&local3) = $tmp213;
org$frostlang$frostc$Type$Kind $tmp214 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp215;
$tmp215 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp215->value = $tmp214;
ITable* $tmp216 = ((frost$core$Equatable*) $tmp210)->$class->itable;
while ($tmp216->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[0];
frost$core$Bit $tmp219 = $tmp217(((frost$core$Equatable*) $tmp210), ((frost$core$Equatable*) $tmp215));
bool $tmp220 = $tmp219.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp215)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp210)));
if ($tmp220) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:84
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:84:43
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp221 = param2.value;
frost$core$Int64 $tmp222 = (frost$core$Int64) {((int64_t) $tmp221)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:84:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp223 = $tmp222.value;
int64_t $tmp224 = -$tmp223;
frost$core$Int64 $tmp225 = (frost$core$Int64) {$tmp224};
frost$core$Int64 $tmp226 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int64($tmp225);
org$frostlang$frostc$Type* $tmp227 = *(&local0);
frost$core$Int64 $tmp228 = org$frostlang$frostc$Type$get_size$R$frost$core$Int64($tmp227);
int64_t $tmp229 = $tmp226.value;
int64_t $tmp230 = $tmp228.value;
bool $tmp231 = $tmp229 <= $tmp230;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:85
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp234 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp235 = (frost$core$Int64) {1};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:85:52
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp236 = param2.value;
frost$core$Int64 $tmp237 = (frost$core$Int64) {((int64_t) $tmp236)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:85:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp238 = $tmp237.value;
int64_t $tmp239 = -$tmp238;
frost$core$Int64 $tmp240 = (frost$core$Int64) {$tmp239};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:85:61
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp241 = $tmp240.value;
frost$core$UInt64 $tmp242 = (frost$core$UInt64) {((uint64_t) $tmp241)};
org$frostlang$frostc$Type* $tmp243 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp234, $tmp235, $tmp242, $tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$Type* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp234;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:88
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s245);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp246 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:92
org$frostlang$frostc$Type* $tmp247 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp248 = &$tmp247->typeKind;
org$frostlang$frostc$Type$Kind $tmp249 = *$tmp248;
org$frostlang$frostc$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp250->value = $tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from IntLiteral.frost:92:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp252 = &(&local6)->$rawValue;
*$tmp252 = $tmp251;
org$frostlang$frostc$Type$Kind $tmp253 = *(&local6);
*(&local5) = $tmp253;
org$frostlang$frostc$Type$Kind $tmp254 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp255;
$tmp255 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp255->value = $tmp254;
ITable* $tmp256 = ((frost$core$Equatable*) $tmp250)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Bit $tmp259 = $tmp257(((frost$core$Equatable*) $tmp250), ((frost$core$Equatable*) $tmp255));
bool $tmp260 = $tmp259.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp250)));
if ($tmp260) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:93
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp261 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp262 = (frost$core$Int64) {6};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:93:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp263 = param2.value;
frost$core$Int64 $tmp264 = (frost$core$Int64) {((int64_t) $tmp263)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:93:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp265 = $tmp264.value;
int64_t $tmp266 = -$tmp265;
frost$core$Int64 $tmp267 = (frost$core$Int64) {$tmp266};
frost$core$Real64 $tmp268 = frost$core$Real64$init$frost$core$Int64($tmp267);
org$frostlang$frostc$Type* $tmp269 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp261, $tmp262, $tmp268, $tmp269);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
org$frostlang$frostc$Type* $tmp270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp261;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:95
org$frostlang$frostc$Type* $tmp271 = *(&local0);
frost$core$Bit $tmp272 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:96
org$frostlang$frostc$Type* $tmp274 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp275 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp274);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$ClassDecl* $tmp276 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local7) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:97
org$frostlang$frostc$ClassDecl* $tmp277 = *(&local7);
frost$core$Bit $tmp278 = frost$core$Bit$init$builtin_bit($tmp277 != NULL);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp280 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s281, $tmp280);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:98
org$frostlang$frostc$ClassDecl* $tmp282 = *(&local7);
frost$collections$Array** $tmp283 = &$tmp282->methods;
frost$collections$Array* $tmp284 = *$tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IntLiteral.frost:98:40
frost$core$Int64 $tmp286 = (frost$core$Int64) {0};
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 >= $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block33; else goto block32;
block33:;
ITable* $tmp292 = ((frost$collections$CollectionView*) $tmp284)->$class->itable;
while ($tmp292->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[0];
frost$core$Int64 $tmp295 = $tmp293(((frost$collections$CollectionView*) $tmp284));
int64_t $tmp296 = $tmp285.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 < $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp301 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s302, $tmp301, &$s303);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp304 = &$tmp284->data;
frost$core$Object** $tmp305 = *$tmp304;
int64_t $tmp306 = $tmp285.value;
frost$core$Object* $tmp307 = $tmp305[$tmp306];
frost$core$Frost$ref$frost$core$Object$Q($tmp307);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp307)));
org$frostlang$frostc$MethodDecl* $tmp308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) $tmp307);
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:99
org$frostlang$frostc$MethodDecl* $tmp309 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind* $tmp310 = &$tmp309->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp311 = *$tmp310;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp312;
$tmp312 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp312->value = $tmp311;
frost$core$Int64 $tmp313 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from IntLiteral.frost:99:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp314 = &(&local10)->$rawValue;
*$tmp314 = $tmp313;
org$frostlang$frostc$MethodDecl$Kind $tmp315 = *(&local10);
*(&local9) = $tmp315;
org$frostlang$frostc$MethodDecl$Kind $tmp316 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp317;
$tmp317 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp317->value = $tmp316;
ITable* $tmp318 = ((frost$core$Equatable*) $tmp312)->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$core$Bit $tmp321 = $tmp319(((frost$core$Equatable*) $tmp312), ((frost$core$Equatable*) $tmp317));
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp323 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s324, $tmp323);
abort(); // unreachable
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp317)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp312)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:100
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp325 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp326 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp327 = *(&local8);
frost$collections$Array** $tmp328 = &$tmp327->parameters;
frost$collections$Array* $tmp329 = *$tmp328;
frost$core$Int64 $tmp330 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IntLiteral.frost:101:58
frost$core$Int64 $tmp331 = (frost$core$Int64) {0};
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331.value;
bool $tmp334 = $tmp332 >= $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block40; else goto block39;
block40:;
ITable* $tmp337 = ((frost$collections$CollectionView*) $tmp329)->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
frost$core$Int64 $tmp340 = $tmp338(((frost$collections$CollectionView*) $tmp329));
int64_t $tmp341 = $tmp330.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 < $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp346 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s347, $tmp346, &$s348);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp349 = &$tmp329->data;
frost$core$Object** $tmp350 = *$tmp349;
int64_t $tmp351 = $tmp330.value;
frost$core$Object* $tmp352 = $tmp350[$tmp351];
frost$core$Frost$ref$frost$core$Object$Q($tmp352);
org$frostlang$frostc$Type** $tmp353 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp352)->type;
org$frostlang$frostc$Type* $tmp354 = *$tmp353;
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp325, $tmp326, $tmp354, $tmp355);
org$frostlang$frostc$IR$Value* $tmp356 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp325);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$IR$Value* $tmp357 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local11) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q($tmp352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:102
org$frostlang$frostc$IR** $tmp358 = &param0->ir;
org$frostlang$frostc$IR* $tmp359 = *$tmp358;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp360 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp361 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl* $tmp362 = *(&local8);
frost$core$Weak** $tmp363 = &$tmp362->owner;
frost$core$Weak* $tmp364 = *$tmp363;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:103:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp365 = &$tmp364->_valid;
frost$core$Bit $tmp366 = *$tmp365;
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp368 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s369, $tmp368);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp370 = &$tmp364->value;
frost$core$Object* $tmp371 = *$tmp370;
frost$core$Frost$ref$frost$core$Object$Q($tmp371);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp372 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp373 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp372, $tmp373);
org$frostlang$frostc$IR$Value* $tmp374 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp372, ((frost$core$Object*) $tmp374));
org$frostlang$frostc$FixedArray* $tmp375 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp372);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp360, $tmp361, param1, ((org$frostlang$frostc$ClassDecl*) $tmp371), $tmp375);
$fn377 $tmp376 = ($fn377) $tmp359->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp378 = $tmp376($tmp359, $tmp360);
*(&local12) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q($tmp371);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:104
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp379 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp380 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp381 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp382 = *(&local8);
frost$core$Weak** $tmp383 = &$tmp382->owner;
frost$core$Weak* $tmp384 = *$tmp383;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:104:76
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp385 = &$tmp384->_valid;
frost$core$Bit $tmp386 = *$tmp385;
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s389, $tmp388);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp390 = &$tmp384->value;
frost$core$Object* $tmp391 = *$tmp390;
frost$core$Frost$ref$frost$core$Object$Q($tmp391);
org$frostlang$frostc$Type** $tmp392 = &((org$frostlang$frostc$ClassDecl*) $tmp391)->type;
org$frostlang$frostc$Type* $tmp393 = *$tmp392;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp379, $tmp380, $tmp381, $tmp393);
org$frostlang$frostc$Type* $tmp394 = *(&local0);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from IntLiteral.frost:104:43
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp395 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp396 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp397 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp396);
org$frostlang$frostc$Position $tmp398 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp399 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp395, &$s400, $tmp397, $tmp398, $tmp399);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
ITable* $tmp401 = ((frost$core$Equatable*) $tmp394)->$class->itable;
while ($tmp401->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp401 = $tmp401->next;
}
$fn403 $tmp402 = $tmp401->methods[1];
frost$core$Bit $tmp404 = $tmp402(((frost$core$Equatable*) $tmp394), ((frost$core$Equatable*) $tmp395));
bool $tmp405 = $tmp404.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
if ($tmp405) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp406 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s407, $tmp406, &$s408);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp410 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp379, $tmp394, $tmp409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q($tmp391);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
org$frostlang$frostc$IR$Value* $tmp411 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp412 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp413 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp410;
block27:;
org$frostlang$frostc$Type* $tmp415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:108
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp416 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp417 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from IntLiteral.frost:109:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp418 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp419 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp420 = &(&local14)->$rawValue;
*$tmp420 = $tmp419;
org$frostlang$frostc$Type$Kind $tmp421 = *(&local14);
*(&local13) = $tmp421;
org$frostlang$frostc$Type$Kind $tmp422 = *(&local13);
org$frostlang$frostc$Position $tmp423 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp424 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp418, &$s425, $tmp422, $tmp423, $tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Bit $tmp426 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp416, $tmp417, $tmp418, $tmp426);
org$frostlang$frostc$IR$Value* $tmp427 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp416);
org$frostlang$frostc$IR$Value* $tmp428 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp427, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
return $tmp428;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

