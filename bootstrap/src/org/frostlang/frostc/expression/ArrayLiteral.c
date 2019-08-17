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
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$ArrayLiteral$class_type org$frostlang$frostc$expression$ArrayLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$ArrayLiteral$cleanup} };

typedef frost$core$Int (*$fn76)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn92)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn96)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn101)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 44, -2744936157929090312, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, -8359935776264034572, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x64\x64", 3, -1798129113975691692, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x6d", 4, 9188557619686916277, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$ArrayLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Pair* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:16
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:17
frost$core$Int* $tmp2 = &param3->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ArrayLiteral.frost:18:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
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
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18 == NULL};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:23
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp21 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp22 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp21, $tmp22, param1, param2);
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
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25 != NULL};
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
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31 == NULL};
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
frost$core$Int $tmp41 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp40, $tmp41, param1, param2);
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
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44 == NULL};
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
// begin inline call to method org.frostlang.frostc.Type.ArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:41:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:288
org$frostlang$frostc$Type** $tmp56 = &param0->ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp57 = *$tmp56;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp58 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp59 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp58, $tmp59);
frost$collections$Array$add$frost$collections$Array$T($tmp58, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp55)));
org$frostlang$frostc$Type* $tmp60 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp57, ((frost$collections$ListView*) $tmp58));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$Type* $tmp61 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local4) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:42
org$frostlang$frostc$Type* $tmp62 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:42:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp63 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp64 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp65 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp66 = *$tmp65;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp67 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp68 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp67, $tmp68);
frost$collections$Array$add$frost$collections$Array$T($tmp67, ((frost$core$Object*) $tmp62));
org$frostlang$frostc$Type* $tmp69 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp66, ((frost$collections$ListView*) $tmp67));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp63, $tmp64, $tmp62, $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp70 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp71 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp70, $tmp71);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp72 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp73 = (frost$core$Int) {25u};
ITable* $tmp74 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
frost$core$Int $tmp77 = $tmp75(((frost$collections$CollectionView*) param2));
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ArrayLiteral.frost:43:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp78 = $tmp77.value;
frost$core$UInt64 $tmp79 = (frost$core$UInt64) {((uint64_t) $tmp78)};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp72, $tmp73, param1, $tmp79);
frost$collections$Array$add$frost$collections$Array$T($tmp70, ((frost$core$Object*) $tmp72));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp80 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp81 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp80, $tmp81);
org$frostlang$frostc$IR$Value* $tmp82 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp63, ((frost$collections$ListView*) $tmp70), $tmp80);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$IR$Value* $tmp83 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local5) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:45
org$frostlang$frostc$IR$Value* $tmp84 = *(&local5);
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84 == NULL};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp87 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp88 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:48
ITable* $tmp90 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$collections$Iterator* $tmp93 = $tmp91(((frost$collections$Iterable*) param2));
goto block19;
block19:;
ITable* $tmp94 = $tmp93->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Bit $tmp97 = $tmp95($tmp93);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block21; else goto block20;
block20:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp99 = $tmp93->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[1];
frost$core$Object* $tmp102 = $tmp100($tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp102)));
org$frostlang$frostc$ASTNode* $tmp103 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:49
org$frostlang$frostc$IR$Value* $tmp104 = *(&local5);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp105 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp106 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp105, $tmp106);
org$frostlang$frostc$ASTNode* $tmp107 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp105, ((frost$core$Object*) $tmp107));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp108 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp109 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp108, $tmp109);
org$frostlang$frostc$IR$Value* $tmp110 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp104, &$s111, ((frost$collections$ListView*) $tmp105), $tmp108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
org$frostlang$frostc$ASTNode* $tmp112 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:51
org$frostlang$frostc$Pair* $tmp113 = *(&local0);
frost$core$Object** $tmp114 = &$tmp113->first;
frost$core$Object* $tmp115 = *$tmp114;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ArrayLiteral.frost:51:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp116 = ((frost$core$Bit$wrapper*) $tmp115)->value.value;
bool $tmp117 = !$tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:52
org$frostlang$frostc$Pair* $tmp120 = *(&local0);
frost$core$Object** $tmp121 = &$tmp120->second;
frost$core$Object* $tmp122 = *$tmp121;
// begin inline call to method org.frostlang.frostc.Type.ImmutableArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:53:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:293
org$frostlang$frostc$Type** $tmp123 = &param0->IMMUTABLE_ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp124 = *$tmp123;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp125 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp126 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp125, $tmp126);
frost$collections$Array$add$frost$collections$Array$T($tmp125, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp122)));
org$frostlang$frostc$Type* $tmp127 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp124, ((frost$collections$ListView*) $tmp125));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:53:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp128 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp129 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp130 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp131 = *$tmp130;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp132 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp133 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp132, $tmp133);
frost$collections$Array$add$frost$collections$Array$T($tmp132, ((frost$core$Object*) $tmp127));
org$frostlang$frostc$Type* $tmp134 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp131, ((frost$collections$ListView*) $tmp132));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp128, $tmp129, $tmp127, $tmp134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp135 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp136 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp135, $tmp136);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp137 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp138 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp139 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp137, $tmp138, param1, $tmp139);
frost$collections$Array$add$frost$collections$Array$T($tmp135, ((frost$core$Object*) $tmp137));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp140 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp141 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp140, $tmp141);
org$frostlang$frostc$IR$Value* $tmp142 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp128, &$s143, ((frost$collections$ListView*) $tmp135), $tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$IR$Value* $tmp144 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local5) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:55
org$frostlang$frostc$IR$Value* $tmp145 = *(&local5);
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145 == NULL};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp148 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp149 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:59
org$frostlang$frostc$IR$Value* $tmp151 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp152 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp151, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlang$frostc$IR$Value* $tmp153 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp154 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp152;

}
void org$frostlang$frostc$expression$ArrayLiteral$init(org$frostlang$frostc$expression$ArrayLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$ArrayLiteral$cleanup(org$frostlang$frostc$expression$ArrayLiteral* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






