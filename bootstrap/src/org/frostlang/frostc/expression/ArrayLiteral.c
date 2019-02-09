#include "org/frostlang/frostc/expression/ArrayLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$ArrayLiteral$class_type org$frostlang$frostc$expression$ArrayLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$ArrayLiteral$cleanup} };

typedef frost$core$Int64 (*$fn80)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn96)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn100)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn105)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 44, -9212562558743098150, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, 5390391589679961556, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x6d", 4, 210325337, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$ArrayLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Pair* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:16
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:17
frost$core$Int64* $tmp2 = &param3->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ArrayLiteral.frost:18:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Type** $tmp10 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp11 = *$tmp10;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlang$frostc$Type* $tmp12 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local1) = $tmp11;
frost$core$Bit* $tmp13 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp14 = *$tmp13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:19
org$frostlang$frostc$Type* $tmp15 = *(&local1);
org$frostlang$frostc$Pair* $tmp16 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, $tmp15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Pair* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:20
org$frostlang$frostc$Pair* $tmp18 = *(&local0);
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18 == NULL);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:23
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp21 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp21, $tmp22, param1, param2);
org$frostlang$frostc$Type* $tmp23 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp21);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$Type* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:24
org$frostlang$frostc$Type* $tmp25 = *(&local2);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:25
org$frostlang$frostc$Type* $tmp28 = *(&local2);
org$frostlang$frostc$Pair* $tmp29 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, $tmp28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$Pair* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:27
org$frostlang$frostc$Pair* $tmp31 = *(&local0);
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31 == NULL);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:28
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s34);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp35 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp36 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
org$frostlang$frostc$Type* $tmp38 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
org$frostlang$frostc$Type* $tmp39 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:34
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp40 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp41 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp40, $tmp41, param1, param2);
org$frostlang$frostc$Type* $tmp42 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp40);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Type* $tmp43 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local3) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:35
org$frostlang$frostc$Type* $tmp44 = *(&local3);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp47 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:38
org$frostlang$frostc$Type* $tmp49 = *(&local3);
org$frostlang$frostc$Pair* $tmp50 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, $tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
org$frostlang$frostc$Pair* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local0) = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
org$frostlang$frostc$Type* $tmp52 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:41
org$frostlang$frostc$Pair* $tmp53 = *(&local0);
frost$core$Object** $tmp54 = &$tmp53->second;
frost$core$Object* $tmp55 = *$tmp54;
// begin inline call to method org.frostlang.frostc.Type.ArrayOf(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:41:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:502
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp56 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp56);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$collections$Array* $tmp57 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local4) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:503
frost$collections$Array* $tmp58 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp58, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp55)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:504
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp59 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:504:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp61 = &(&local6)->$rawValue;
*$tmp61 = $tmp60;
org$frostlang$frostc$Type$Kind $tmp62 = *(&local6);
*(&local5) = $tmp62;
org$frostlang$frostc$Type$Kind $tmp63 = *(&local5);
org$frostlang$frostc$Position $tmp64 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp59, &$s66, $tmp63, $tmp64, $tmp65);
frost$collections$Array* $tmp67 = *(&local4);
org$frostlang$frostc$Type* $tmp68 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp59, ((frost$collections$ListView*) $tmp67));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$collections$Array* $tmp69 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local4) = ((frost$collections$Array*) NULL);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
org$frostlang$frostc$Type* $tmp70 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local7) = $tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:42
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp71 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp72 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp73 = *(&local7);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp71, $tmp72, $tmp73);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp74 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp74, $tmp75);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp76 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp77 = (frost$core$Int64) {25};
ITable* $tmp78 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Int64 $tmp81 = $tmp79(((frost$collections$CollectionView*) param2));
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from ArrayLiteral.frost:43:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp82 = $tmp81.value;
frost$core$UInt64 $tmp83 = (frost$core$UInt64) {((uint64_t) $tmp82)};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp76, $tmp77, param1, $tmp83);
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) $tmp76));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp84 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp85 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp84, $tmp85);
org$frostlang$frostc$IR$Value* $tmp86 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp71, ((frost$collections$ListView*) $tmp74), $tmp84);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$IR$Value* $tmp87 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local8) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:45
org$frostlang$frostc$IR$Value* $tmp88 = *(&local8);
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit($tmp88 == NULL);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp91 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp92 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:48
ITable* $tmp94 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$collections$Iterator* $tmp97 = $tmp95(((frost$collections$Iterable*) param2));
goto block18;
block18:;
ITable* $tmp98 = $tmp97->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
frost$core$Bit $tmp101 = $tmp99($tmp97);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block20; else goto block19;
block19:;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp103 = $tmp97->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[1];
frost$core$Object* $tmp106 = $tmp104($tmp97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp106)));
org$frostlang$frostc$ASTNode* $tmp107 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local9) = ((org$frostlang$frostc$ASTNode*) $tmp106);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:49
org$frostlang$frostc$IR$Value* $tmp108 = *(&local8);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp109 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp109, $tmp110);
org$frostlang$frostc$ASTNode* $tmp111 = *(&local9);
frost$collections$Array$add$frost$collections$Array$T($tmp109, ((frost$core$Object*) $tmp111));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp112 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp112, $tmp113);
org$frostlang$frostc$IR$Value* $tmp114 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp108, &$s115, ((frost$collections$ListView*) $tmp109), $tmp112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q($tmp106);
org$frostlang$frostc$ASTNode* $tmp116 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:51
org$frostlang$frostc$Pair* $tmp117 = *(&local0);
frost$core$Object** $tmp118 = &$tmp117->first;
frost$core$Object* $tmp119 = *$tmp118;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ArrayLiteral.frost:51:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp120 = ((frost$core$Bit$wrapper*) $tmp119)->value.value;
bool $tmp121 = !$tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:52
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp124 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp125 = (frost$core$Int64) {14};
org$frostlang$frostc$Pair* $tmp126 = *(&local0);
frost$core$Object** $tmp127 = &$tmp126->second;
frost$core$Object* $tmp128 = *$tmp127;
// begin inline call to method org.frostlang.frostc.Type.ImmutableArrayOf(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:53:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:509
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp129 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp129);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$collections$Array* $tmp130 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local10) = $tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:510
frost$collections$Array* $tmp131 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp131, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp128)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:511
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp132 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp133 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:511:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp134 = &(&local12)->$rawValue;
*$tmp134 = $tmp133;
org$frostlang$frostc$Type$Kind $tmp135 = *(&local12);
*(&local11) = $tmp135;
org$frostlang$frostc$Type$Kind $tmp136 = *(&local11);
org$frostlang$frostc$Position $tmp137 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp132, &$s139, $tmp136, $tmp137, $tmp138);
frost$collections$Array* $tmp140 = *(&local10);
org$frostlang$frostc$Type* $tmp141 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp132, ((frost$collections$ListView*) $tmp140));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$collections$Array* $tmp142 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp124, $tmp125, $tmp141);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp143 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp144 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp143, $tmp144);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp145 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp146 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp147 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp145, $tmp146, param1, $tmp147);
frost$collections$Array$add$frost$collections$Array$T($tmp143, ((frost$core$Object*) $tmp145));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp148 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp149 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp148, $tmp149);
org$frostlang$frostc$IR$Value* $tmp150 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp124, &$s151, ((frost$collections$ListView*) $tmp143), $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
org$frostlang$frostc$IR$Value* $tmp152 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local8) = $tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:55
org$frostlang$frostc$IR$Value* $tmp153 = *(&local8);
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153 == NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp156 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp157 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:59
org$frostlang$frostc$IR$Value* $tmp159 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp160 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp159, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
org$frostlang$frostc$IR$Value* $tmp161 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp162 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp163 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp160;

}
void org$frostlang$frostc$expression$ArrayLiteral$init(org$frostlang$frostc$expression$ArrayLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$ArrayLiteral$cleanup(org$frostlang$frostc$expression$ArrayLiteral* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






