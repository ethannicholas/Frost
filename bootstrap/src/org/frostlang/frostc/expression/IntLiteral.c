#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
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
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/ASTNode.h"
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
typedef frost$core$Bit (*$fn201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn298)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn325)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn353)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn397)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn419)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 5701837077934559492, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };

frost$core$Int org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:17
frost$core$Int64 $tmp2 = (frost$core$Int64) {18446744073709551488u};
int64_t $tmp3 = param0.value;
int64_t $tmp4 = $tmp2.value;
bool $tmp5 = $tmp3 >= $tmp4;
frost$core$Bit $tmp6 = (frost$core$Bit) {$tmp5};
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp8 = (frost$core$Int64) {127u};
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 <= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:18
frost$core$Int $tmp14 = (frost$core$Int) {8u};
return $tmp14;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:20
frost$core$Int64 $tmp15 = (frost$core$Int64) {18446744073709518848u};
int64_t $tmp16 = param0.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 >= $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block5;
block6:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {32767u};
int64_t $tmp22 = param0.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:21
frost$core$Int $tmp27 = (frost$core$Int) {16u};
return $tmp27;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:23
frost$core$Int64 $tmp28 = (frost$core$Int64) {18446744071562067968u};
int64_t $tmp29 = param0.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 >= $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block9; else goto block8;
block9:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {2147483647u};
int64_t $tmp35 = param0.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 <= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:24
frost$core$Int $tmp40 = (frost$core$Int) {32u};
return $tmp40;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:26
frost$core$Int $tmp41 = (frost$core$Int) {64u};
return $tmp41;

}
frost$core$Int org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:31
frost$core$UInt64 $tmp42 = (frost$core$UInt64) {255u};
uint64_t $tmp43 = param0.value;
uint64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 <= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:32
frost$core$Int $tmp48 = (frost$core$Int) {8u};
return $tmp48;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:34
frost$core$UInt64 $tmp49 = (frost$core$UInt64) {65535u};
uint64_t $tmp50 = param0.value;
uint64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 <= $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:35
frost$core$Int $tmp55 = (frost$core$Int) {16u};
return $tmp55;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:37
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {4294967295u};
uint64_t $tmp57 = param0.value;
uint64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 <= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:38
frost$core$Int $tmp62 = (frost$core$Int) {32u};
return $tmp62;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:40
frost$core$Int $tmp63 = (frost$core$Int) {64u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:46
frost$core$Int* $tmp64 = &param3->$rawValue;
frost$core$Int $tmp65 = *$tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 == $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
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
frost$core$Int $tmp81 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp82 = &(&local2)->$rawValue;
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
frost$core$Int $tmp95 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp96 = &(&local4)->$rawValue;
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
frost$core$Int $tmp105 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(param2);
org$frostlang$frostc$Type* $tmp106 = *(&local0);
frost$core$Int $tmp107 = org$frostlang$frostc$Type$get_size$R$frost$core$Int($tmp106);
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
frost$core$Int $tmp114 = (frost$core$Int) {1u};
org$frostlang$frostc$Type* $tmp115 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type($tmp113, $tmp114, param2, $tmp115);
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
frost$core$Int $tmp123 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:57:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp124 = &(&local6)->$rawValue;
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
frost$core$Int $tmp134 = (frost$core$Int) {6u};
frost$core$Real64 $tmp135 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp136 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type($tmp133, $tmp134, $tmp135, $tmp136);
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
org$frostlang$frostc$Type* $tmp141 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from IntLiteral.frost:61:81
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp142 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp143 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp144 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp145 = *$tmp144;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp146 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp147 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp146, $tmp147);
frost$collections$Array$add$frost$collections$Array$T($tmp146, ((frost$core$Object*) $tmp141));
org$frostlang$frostc$Type* $tmp148 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp145, ((frost$collections$ListView*) $tmp146));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp142, $tmp143, $tmp141, $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp149 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp150 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp149, $tmp150);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp151 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp152 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp151, $tmp152, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp149, ((frost$core$Object*) $tmp151));
org$frostlang$frostc$IR$Value* $tmp153 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp142, ((frost$collections$ListView*) $tmp149), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Type* $tmp154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp153;
block16:;
org$frostlang$frostc$Type* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:66
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp156 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp157 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp158 = &param0->INT_TYPE;
org$frostlang$frostc$Type* $tmp159 = *$tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp156, $tmp157, $tmp159, $tmp160);
org$frostlang$frostc$IR$Value* $tmp161 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp156);
org$frostlang$frostc$IR$Value* $tmp162 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp161, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
return $tmp162;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:73
frost$core$Int64 $tmp163 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:73:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp164 = $tmp163.value;
frost$core$UInt64 $tmp165 = (frost$core$UInt64) {((uint64_t) $tmp164)};
frost$core$UInt64 $tmp166 = (frost$core$UInt64) {1u};
uint64_t $tmp167 = $tmp165.value;
uint64_t $tmp168 = $tmp166.value;
uint64_t $tmp169 = $tmp167 + $tmp168;
frost$core$UInt64 $tmp170 = (frost$core$UInt64) {$tmp169};
uint64_t $tmp171 = param2.value;
uint64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 > $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:74
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s176);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:75
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:77
frost$core$Int* $tmp177 = &param3->$rawValue;
frost$core$Int $tmp178 = *$tmp177;
frost$core$Int $tmp179 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:78:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 == $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Type** $tmp185 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp186 = *$tmp185;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$Type* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local0) = $tmp186;
frost$core$Bit* $tmp188 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp189 = *$tmp188;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:79
org$frostlang$frostc$Type* $tmp190 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp191 = &$tmp190->typeKind;
org$frostlang$frostc$Type$Kind $tmp192 = *$tmp191;
org$frostlang$frostc$Type$Kind$wrapper* $tmp193;
$tmp193 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp193->value = $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:79:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp195 = &(&local2)->$rawValue;
*$tmp195 = $tmp194;
org$frostlang$frostc$Type$Kind $tmp196 = *(&local2);
*(&local1) = $tmp196;
org$frostlang$frostc$Type$Kind $tmp197 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp198;
$tmp198 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp198->value = $tmp197;
ITable* $tmp199 = ((frost$core$Equatable*) $tmp193)->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[0];
frost$core$Bit $tmp202 = $tmp200(((frost$core$Equatable*) $tmp193), ((frost$core$Equatable*) $tmp198));
bool $tmp203 = $tmp202.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp198)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp193)));
if ($tmp203) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:80
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:83
org$frostlang$frostc$Type* $tmp206 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp207 = &$tmp206->typeKind;
org$frostlang$frostc$Type$Kind $tmp208 = *$tmp207;
org$frostlang$frostc$Type$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp209->value = $tmp208;
frost$core$Int $tmp210 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:83:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp211 = &(&local4)->$rawValue;
*$tmp211 = $tmp210;
org$frostlang$frostc$Type$Kind $tmp212 = *(&local4);
*(&local3) = $tmp212;
org$frostlang$frostc$Type$Kind $tmp213 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp214->value = $tmp213;
ITable* $tmp215 = ((frost$core$Equatable*) $tmp209)->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
frost$core$Bit $tmp218 = $tmp216(((frost$core$Equatable*) $tmp209), ((frost$core$Equatable*) $tmp214));
bool $tmp219 = $tmp218.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp209)));
if ($tmp219) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:84
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:84:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp220 = param2.value;
frost$core$Int64 $tmp221 = (frost$core$Int64) {((int64_t) $tmp220)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:84:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp222 = $tmp221.value;
int64_t $tmp223 = -$tmp222;
frost$core$Int64 $tmp224 = (frost$core$Int64) {$tmp223};
frost$core$Int $tmp225 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int($tmp224);
org$frostlang$frostc$Type* $tmp226 = *(&local0);
frost$core$Int $tmp227 = org$frostlang$frostc$Type$get_size$R$frost$core$Int($tmp226);
int64_t $tmp228 = $tmp225.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 <= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:85
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp233 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp234 = (frost$core$Int) {1u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:85:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp235 = param2.value;
frost$core$Int64 $tmp236 = (frost$core$Int64) {((int64_t) $tmp235)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:85:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp237 = $tmp236.value;
int64_t $tmp238 = -$tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {$tmp238};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:85:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp240 = $tmp239.value;
frost$core$UInt64 $tmp241 = (frost$core$UInt64) {((uint64_t) $tmp240)};
org$frostlang$frostc$Type* $tmp242 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type($tmp233, $tmp234, $tmp241, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$Type* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp233;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:88
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s244);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:92
org$frostlang$frostc$Type* $tmp246 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp247 = &$tmp246->typeKind;
org$frostlang$frostc$Type$Kind $tmp248 = *$tmp247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
frost$core$Int $tmp250 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:92:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp251 = &(&local6)->$rawValue;
*$tmp251 = $tmp250;
org$frostlang$frostc$Type$Kind $tmp252 = *(&local6);
*(&local5) = $tmp252;
org$frostlang$frostc$Type$Kind $tmp253 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp254->value = $tmp253;
ITable* $tmp255 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Bit $tmp258 = $tmp256(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp254));
bool $tmp259 = $tmp258.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
if ($tmp259) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:93
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp260 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp261 = (frost$core$Int) {6u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:93:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp262 = param2.value;
frost$core$Int64 $tmp263 = (frost$core$Int64) {((int64_t) $tmp262)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:93:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp264 = $tmp263.value;
int64_t $tmp265 = -$tmp264;
frost$core$Int64 $tmp266 = (frost$core$Int64) {$tmp265};
frost$core$Real64 $tmp267 = frost$core$Real64$init$frost$core$Int64($tmp266);
org$frostlang$frostc$Type* $tmp268 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type($tmp260, $tmp261, $tmp267, $tmp268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
org$frostlang$frostc$Type* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp260;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:95
org$frostlang$frostc$Type* $tmp270 = *(&local0);
frost$core$Bit $tmp271 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:96
org$frostlang$frostc$Type* $tmp273 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp274 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp273);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$ClassDecl* $tmp275 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local7) = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:97
org$frostlang$frostc$ClassDecl* $tmp276 = *(&local7);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276 != NULL};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block28; else goto block29;
block29:;
frost$core$Int $tmp279 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s280, $tmp279);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:98
org$frostlang$frostc$ClassDecl* $tmp281 = *(&local7);
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281 != NULL};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block30; else goto block31;
block31:;
frost$core$Int $tmp284 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s285, $tmp284, &$s286);
abort(); // unreachable
block30:;
frost$collections$Array** $tmp287 = &$tmp281->methods;
frost$collections$Array* $tmp288 = *$tmp287;
frost$core$Int $tmp289 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:98:40
frost$core$Int $tmp290 = (frost$core$Int) {0u};
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
bool $tmp293 = $tmp291 >= $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block35; else goto block34;
block35:;
ITable* $tmp296 = ((frost$collections$CollectionView*) $tmp288)->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
frost$core$Int $tmp299 = $tmp297(((frost$collections$CollectionView*) $tmp288));
int64_t $tmp300 = $tmp289.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 < $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block33; else goto block34;
block34:;
frost$core$Int $tmp305 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s306, $tmp305, &$s307);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp308 = &$tmp288->data;
frost$core$Object** $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = frost$core$Int64$init$frost$core$Int($tmp289);
int64_t $tmp311 = $tmp310.value;
frost$core$Object* $tmp312 = $tmp309[$tmp311];
frost$core$Frost$ref$frost$core$Object$Q($tmp312);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp312)));
org$frostlang$frostc$MethodDecl* $tmp313 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) $tmp312);
frost$core$Frost$unref$frost$core$Object$Q($tmp312);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:99
org$frostlang$frostc$MethodDecl* $tmp314 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind* $tmp315 = &$tmp314->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp316 = *$tmp315;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp317;
$tmp317 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp317->value = $tmp316;
frost$core$Int $tmp318 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from IntLiteral.frost:99:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp319 = &(&local10)->$rawValue;
*$tmp319 = $tmp318;
org$frostlang$frostc$MethodDecl$Kind $tmp320 = *(&local10);
*(&local9) = $tmp320;
org$frostlang$frostc$MethodDecl$Kind $tmp321 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp322;
$tmp322 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp322->value = $tmp321;
ITable* $tmp323 = ((frost$core$Equatable*) $tmp317)->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
frost$core$Bit $tmp326 = $tmp324(((frost$core$Equatable*) $tmp317), ((frost$core$Equatable*) $tmp322));
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block37; else goto block38;
block38:;
frost$core$Int $tmp328 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s329, $tmp328);
abort(); // unreachable
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp322)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp317)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:100
org$frostlang$frostc$MethodDecl* $tmp330 = *(&local8);
frost$core$Bit $tmp331 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp330);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IntLiteral.frost:100:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp332 = $tmp331.value;
bool $tmp333 = !$tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:101
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodDecl* $tmp336 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp338 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:103
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp339 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp340 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp341 = *(&local8);
frost$collections$Array** $tmp342 = &$tmp341->parameters;
frost$collections$Array* $tmp343 = *$tmp342;
frost$core$Int $tmp344 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:104:58
frost$core$Int $tmp345 = (frost$core$Int) {0u};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 >= $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block45; else goto block44;
block45:;
ITable* $tmp351 = ((frost$collections$CollectionView*) $tmp343)->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp351 = $tmp351->next;
}
$fn353 $tmp352 = $tmp351->methods[0];
frost$core$Int $tmp354 = $tmp352(((frost$collections$CollectionView*) $tmp343));
int64_t $tmp355 = $tmp344.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 < $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block43; else goto block44;
block44:;
frost$core$Int $tmp360 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, $tmp360, &$s362);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp363 = &$tmp343->data;
frost$core$Object** $tmp364 = *$tmp363;
frost$core$Int64 $tmp365 = frost$core$Int64$init$frost$core$Int($tmp344);
int64_t $tmp366 = $tmp365.value;
frost$core$Object* $tmp367 = $tmp364[$tmp366];
frost$core$Frost$ref$frost$core$Object$Q($tmp367);
org$frostlang$frostc$Type** $tmp368 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp367)->type;
org$frostlang$frostc$Type* $tmp369 = *$tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp339, $tmp340, $tmp369, $tmp370);
org$frostlang$frostc$IR$Value* $tmp371 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp339);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$IR$Value* $tmp372 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local11) = $tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q($tmp367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:105
org$frostlang$frostc$IR** $tmp373 = &param0->ir;
org$frostlang$frostc$IR* $tmp374 = *$tmp373;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp375 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp376 = (frost$core$Int) {7u};
org$frostlang$frostc$MethodDecl* $tmp377 = *(&local8);
frost$core$Weak** $tmp378 = &$tmp377->owner;
frost$core$Weak* $tmp379 = *$tmp378;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:106:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp380 = &$tmp379->_valid;
frost$core$Bit $tmp381 = *$tmp380;
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block48; else goto block49;
block49:;
frost$core$Int $tmp383 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s384, $tmp383);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp385 = &$tmp379->value;
frost$core$Object* $tmp386 = *$tmp385;
frost$core$Frost$ref$frost$core$Object$Q($tmp386);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp387 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp388 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp387, $tmp388);
org$frostlang$frostc$IR$Value* $tmp389 = *(&local11);
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389 != NULL};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block50; else goto block51;
block51:;
frost$core$Int $tmp392 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s393, $tmp392, &$s394);
abort(); // unreachable
block50:;
frost$collections$Array$add$frost$collections$Array$T($tmp387, ((frost$core$Object*) $tmp389));
org$frostlang$frostc$FixedArray* $tmp395 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp387);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp375, $tmp376, param1, ((org$frostlang$frostc$ClassDecl*) $tmp386), $tmp395);
$fn397 $tmp396 = ($fn397) $tmp374->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp398 = $tmp396($tmp374, $tmp375);
*(&local12) = $tmp398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q($tmp386);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:107
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp399 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp400 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp401 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp402 = *(&local8);
frost$core$Weak** $tmp403 = &$tmp402->owner;
frost$core$Weak* $tmp404 = *$tmp403;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:107:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp405 = &$tmp404->_valid;
frost$core$Bit $tmp406 = *$tmp405;
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block54; else goto block55;
block55:;
frost$core$Int $tmp408 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s409, $tmp408);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp410 = &$tmp404->value;
frost$core$Object* $tmp411 = *$tmp410;
frost$core$Frost$ref$frost$core$Object$Q($tmp411);
org$frostlang$frostc$Type** $tmp412 = &((org$frostlang$frostc$ClassDecl*) $tmp411)->type;
org$frostlang$frostc$Type* $tmp413 = *$tmp412;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp399, $tmp400, $tmp401, $tmp413);
org$frostlang$frostc$Type* $tmp414 = *(&local0);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from IntLiteral.frost:107:43
org$frostlang$frostc$Type** $tmp415 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp416 = *$tmp415;
ITable* $tmp417 = ((frost$core$Equatable*) $tmp414)->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[1];
frost$core$Bit $tmp420 = $tmp418(((frost$core$Equatable*) $tmp414), ((frost$core$Equatable*) $tmp416));
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block57; else goto block58;
block58:;
frost$core$Int $tmp422 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s423, $tmp422, &$s424);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp425 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp426 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp399, $tmp414, $tmp425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q($tmp411);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
org$frostlang$frostc$IR$Value* $tmp427 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp428 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp429 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp430 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp426;
block27:;
org$frostlang$frostc$Type* $tmp431 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp432 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp433 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp434 = &param0->INT_TYPE;
org$frostlang$frostc$Type* $tmp435 = *$tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp432, $tmp433, $tmp435, $tmp436);
org$frostlang$frostc$IR$Value* $tmp437 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp432);
org$frostlang$frostc$IR$Value* $tmp438 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp437, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
return $tmp438;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

