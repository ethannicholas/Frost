#include "org/frostlang/frostc/expression/Tuple.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Tuple$class_type org$frostlang$frostc$expression$Tuple$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Tuple$cleanup} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn24)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn39)(org$frostlang$frostc$expression$Tuple$_Closure2*, org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn43)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn49)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn53)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn58)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn87)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn93)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn97)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn105)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn177)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn187)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn191)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn213)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn217)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn247)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Array* (*$fn251)(frost$collections$CollectionView*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, 3193902451849896392, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, 107411054585345478, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -2124921702849731490, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, -3424658894957592813, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$indexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$UInt64 local0;
// line 15
frost$core$Int64* $tmp2 = &param2->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {25};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp7 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp8 = *$tmp7;
frost$core$UInt64* $tmp9 = (frost$core$UInt64*) (param2->$data + 16);
frost$core$UInt64 $tmp10 = *$tmp9;
*(&local0) = $tmp10;
// line 17
frost$core$UInt64 $tmp11 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp12 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int64 $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
frost$core$UInt64 $tmp17 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp16);
uint64_t $tmp18 = $tmp11.value;
uint64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 > $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
if ($tmp22) goto block3; else goto block4;
block3:;
// line 18
$fn24 $tmp23 = ($fn24) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp25 = $tmp23(param2);
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s27, ((frost$core$Object*) param2));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, &$s29);
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp28, ((frost$core$Object*) param1));
frost$core$String* $tmp31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s32);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp25, $tmp31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
goto block4;
block4:;
// line 21
org$frostlang$frostc$FixedArray* $tmp33 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$UInt64 $tmp34 = *(&local0);
frost$core$Int64 $tmp35 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp34);
frost$core$Object* $tmp36 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp33, $tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
return ((org$frostlang$frostc$Type*) $tmp36);
block1:;
// line 24
org$frostlang$frostc$FixedArray* $tmp37 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure2));
org$frostlang$frostc$expression$Tuple$_Closure2* $tmp38 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler($tmp38, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp40 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp40, ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type), ((frost$core$Object*) $tmp38));
ITable* $tmp41 = ((frost$collections$CollectionView*) $tmp37)->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[3];
frost$core$Object* $tmp44 = $tmp42(((frost$collections$CollectionView*) $tmp37), $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp44)));
frost$core$Frost$unref$frost$core$Object$Q($tmp44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
return ((org$frostlang$frostc$Type*) $tmp44);

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// line 29
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp45 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp45);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$collections$Array* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 30
ITable* $tmp47 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$collections$Iterator* $tmp50 = $tmp48(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp51 = $tmp50->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp51 = $tmp51->next;
}
$fn53 $tmp52 = $tmp51->methods[0];
frost$core$Bit $tmp54 = $tmp52($tmp50);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp56 = $tmp50->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[1];
frost$core$Object* $tmp59 = $tmp57($tmp50);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp59)));
org$frostlang$frostc$ASTNode* $tmp60 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp59);
// line 31
org$frostlang$frostc$ASTNode* $tmp61 = *(&local1);
org$frostlang$frostc$Type* $tmp62 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp61);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$Type* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local2) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// line 32
org$frostlang$frostc$Type* $tmp64 = *(&local2);
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit($tmp64 == NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block4; else goto block5;
block4:;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) NULL)));
org$frostlang$frostc$Type* $tmp67 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
org$frostlang$frostc$ASTNode* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$collections$Array* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) NULL);
block5:;
// line 35
frost$collections$Array* $tmp70 = *(&local0);
org$frostlang$frostc$Type* $tmp71 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp70, ((frost$core$Object*) $tmp71));
org$frostlang$frostc$Type* $tmp72 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
org$frostlang$frostc$ASTNode* $tmp73 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// line 37
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp74 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp74, $tmp75);
frost$collections$Array* $tmp76 = *(&local0);
org$frostlang$frostc$Type* $tmp77 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp76));
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) $tmp77));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp74)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$collections$Array* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) $tmp74);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Tuple$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1, org$frostlang$frostc$Type* param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
org$frostlang$frostc$Pair* local2 = NULL;
frost$collections$CollectionView* local3 = NULL;
// line 43
org$frostlang$frostc$Type$Kind* $tmp79 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp80 = *$tmp79;
org$frostlang$frostc$Type$Kind$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp81->value = $tmp80;
frost$core$Int64 $tmp82 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp83 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp82);
org$frostlang$frostc$Type$Kind$wrapper* $tmp84;
$tmp84 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp84->value = $tmp83;
ITable* $tmp85 = ((frost$core$Equatable*) $tmp81)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Bit $tmp88 = $tmp86(((frost$core$Equatable*) $tmp81), ((frost$core$Equatable*) $tmp84));
bool $tmp89 = $tmp88.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp84)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
if ($tmp89) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FixedArray* $tmp90 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp91 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Int64 $tmp94 = $tmp92(((frost$collections$CollectionView*) $tmp90));
ITable* $tmp95 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Int64 $tmp98 = $tmp96(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp99 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp94, $tmp98);
bool $tmp100 = $tmp99.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
if ($tmp100) goto block1; else goto block2;
block1:;
// line 44
frost$core$Int64 $tmp101 = (frost$core$Int64) {0};
*(&local0) = $tmp101;
// line 45
frost$core$Int64 $tmp102 = (frost$core$Int64) {0};
ITable* $tmp103 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$core$Int64 $tmp106 = $tmp104(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp107 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp108 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp102, $tmp106, $tmp107);
frost$core$Int64 $tmp109 = $tmp108.min;
*(&local1) = $tmp109;
frost$core$Int64 $tmp110 = $tmp108.max;
frost$core$Bit $tmp111 = $tmp108.inclusive;
bool $tmp112 = $tmp111.value;
frost$core$Int64 $tmp113 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp114 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp113);
if ($tmp112) goto block7; else goto block8;
block7:;
int64_t $tmp115 = $tmp109.value;
int64_t $tmp116 = $tmp110.value;
bool $tmp117 = $tmp115 <= $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block8:;
int64_t $tmp120 = $tmp109.value;
int64_t $tmp121 = $tmp110.value;
bool $tmp122 = $tmp120 < $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block4; else goto block5;
block4:;
// line 46
frost$core$Int64 $tmp125 = *(&local1);
frost$core$Object* $tmp126 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param1, $tmp125);
org$frostlang$frostc$FixedArray* $tmp127 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp128 = *(&local1);
frost$core$Object* $tmp129 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp127, $tmp128);
org$frostlang$frostc$Pair* $tmp130 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp126), ((org$frostlang$frostc$Type*) $tmp129));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$Pair* $tmp131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local2) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
// line 47
org$frostlang$frostc$Pair* $tmp132 = *(&local2);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132 == NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block9; else goto block10;
block9:;
// line 48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp135 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block10:;
// line 50
frost$core$Int64 $tmp136 = *(&local0);
org$frostlang$frostc$Pair* $tmp137 = *(&local2);
frost$core$Object** $tmp138 = &$tmp137->second;
frost$core$Object* $tmp139 = *$tmp138;
int64_t $tmp140 = $tmp136.value;
int64_t $tmp141 = ((frost$core$Int64$wrapper*) $tmp139)->value.value;
int64_t $tmp142 = $tmp140 + $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {$tmp142};
*(&local0) = $tmp143;
org$frostlang$frostc$Pair* $tmp144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block6;
block6:;
frost$core$Int64 $tmp145 = *(&local1);
int64_t $tmp146 = $tmp110.value;
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146 - $tmp147;
frost$core$Int64 $tmp149 = (frost$core$Int64) {$tmp148};
frost$core$UInt64 $tmp150 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp149);
if ($tmp112) goto block12; else goto block13;
block12:;
uint64_t $tmp151 = $tmp150.value;
uint64_t $tmp152 = $tmp114.value;
bool $tmp153 = $tmp151 >= $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block11; else goto block5;
block13:;
uint64_t $tmp156 = $tmp150.value;
uint64_t $tmp157 = $tmp114.value;
bool $tmp158 = $tmp156 > $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block11; else goto block5;
block11:;
int64_t $tmp161 = $tmp145.value;
int64_t $tmp162 = $tmp113.value;
int64_t $tmp163 = $tmp161 + $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
*(&local1) = $tmp164;
goto block4;
block5:;
// line 52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp165 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Int64 $tmp166 = *(&local0);
frost$core$Int64$wrapper* $tmp167;
$tmp167 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp167->value = $tmp166;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp165, ((frost$core$Object*) param2), ((frost$core$Object*) $tmp167));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
return $tmp165;
block2:;
// line 54
frost$collections$CollectionView* $tmp168 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local3) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$collections$CollectionView* $tmp169 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local3) = $tmp168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// line 55
frost$collections$CollectionView* $tmp170 = *(&local3);
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit($tmp170 == NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block14; else goto block15;
block14:;
// line 56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp173 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local3) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block15:;
// line 58
frost$collections$CollectionView* $tmp174 = *(&local3);
ITable* $tmp175 = $tmp174->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
frost$core$Int64 $tmp178 = $tmp176($tmp174);
frost$core$Int64 $tmp179 = (frost$core$Int64) {1};
frost$core$Bit $tmp180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp178, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s183, $tmp182);
abort(); // unreachable
block16:;
// line 59
frost$collections$CollectionView* $tmp184 = *(&local3);
ITable* $tmp185 = ((frost$collections$Iterable*) $tmp184)->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[0];
frost$collections$Iterator* $tmp188 = $tmp186(((frost$collections$Iterable*) $tmp184));
ITable* $tmp189 = $tmp188->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
frost$core$Object* $tmp192 = $tmp190($tmp188);
org$frostlang$frostc$Pair* $tmp193 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp192), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q($tmp192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$collections$CollectionView* $tmp194 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local3) = ((frost$collections$CollectionView*) NULL);
return $tmp193;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$ASTNode* param0) {

// line 76
org$frostlang$frostc$Type* $tmp195 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
return $tmp195;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 65
frost$core$Int64* $tmp196 = &param3->$rawValue;
frost$core$Int64 $tmp197 = *$tmp196;
frost$core$Int64 $tmp198 = (frost$core$Int64) {3};
frost$core$Bit $tmp199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp197, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp201 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp202 = *$tmp201;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
org$frostlang$frostc$Type* $tmp203 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local0) = $tmp202;
frost$core$Bit* $tmp204 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp205 = *$tmp204;
*(&local1) = $tmp205;
// line 67
org$frostlang$frostc$Type* $tmp206 = *(&local0);
frost$core$Bit $tmp207 = org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit($tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Type* $tmp209 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp210 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp209);
ITable* $tmp211 = ((frost$collections$CollectionView*) $tmp210)->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[0];
frost$core$Int64 $tmp214 = $tmp212(((frost$collections$CollectionView*) $tmp210));
ITable* $tmp215 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
frost$core$Int64 $tmp218 = $tmp216(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp218);
bool $tmp220 = $tmp219.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
if ($tmp220) goto block3; else goto block4;
block3:;
// line 68
org$frostlang$frostc$Type* $tmp221 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp222 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp221);
org$frostlang$frostc$Type** $tmp223 = &$tmp222->type;
org$frostlang$frostc$Type* $tmp224 = *$tmp223;
org$frostlang$frostc$Type* $tmp225 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp226 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp225);
org$frostlang$frostc$Type* $tmp227 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp224, ((frost$collections$ListView*) $tmp226));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$Type* $tmp228 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local2) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// line 69
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp229 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp230 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp231 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp229, $tmp230, $tmp231);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp232 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp233 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp232, $tmp233);
org$frostlang$frostc$IR$Value* $tmp234 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp229, ((frost$collections$ListView*) param2), $tmp232);
org$frostlang$frostc$Type* $tmp235 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp236 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp234, $tmp235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
org$frostlang$frostc$Type* $tmp237 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp236;
block4:;
org$frostlang$frostc$Type* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 74
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp240 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp241 = (frost$core$Int64) {43};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp240, $tmp241, param1, param2);
org$frostlang$frostc$Type* $tmp242 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp240);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
org$frostlang$frostc$Type* $tmp243 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local3) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// line 75
org$frostlang$frostc$Type* $tmp244 = *(&local3);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244 == NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block6; else goto block7;
block6:;
// line 76
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp248 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp248, ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type), ((frost$core$Immutable*) NULL));
ITable* $tmp249 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[8];
frost$collections$Array* $tmp252 = $tmp250(((frost$collections$CollectionView*) param2), ((frost$core$MutableMethod*) $tmp248));
org$frostlang$frostc$Type* $tmp253 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp252));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$Type* $tmp254 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local3) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
goto block7;
block7:;
// line 78
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp255 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp256 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp257 = *(&local3);
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp255, $tmp256, $tmp257, $tmp258);
org$frostlang$frostc$IR$Value* $tmp259 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp255);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
org$frostlang$frostc$IR$Value* $tmp260 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local4) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// line 79
org$frostlang$frostc$IR$Value* $tmp261 = *(&local4);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261 == NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block8; else goto block9;
block8:;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// line 82
org$frostlang$frostc$IR$Value* $tmp266 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp267 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp266, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$IR$Value* $tmp268 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp269 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp267;

}
void org$frostlang$frostc$expression$Tuple$init(org$frostlang$frostc$expression$Tuple* param0) {

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(org$frostlang$frostc$expression$Tuple* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

