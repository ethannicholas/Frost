#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String, org$frostlang$frostc$MethodRef$cleanup, org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn70)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn92)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn103)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn144)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn175)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn186)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn221)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn232)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn249)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn277)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn288)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn325)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn357)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, 3424382132411029242, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, -7848168754699295719, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 28
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
frost$core$String* local8 = NULL;
frost$collections$HashMap* local9 = NULL;
frost$core$Int64 local10;
// line 35
org$frostlang$frostc$Compiler$Resolution* $tmp2 = &param3->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp3 = *$tmp2;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp6 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp5);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {35};
frost$core$String* $tmp14 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param3);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, $tmp14);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, &$s18);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s19, $tmp13, $tmp17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// line 37
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block4;
block3:;
frost$collections$Array** $tmp22 = &param3->genericParameters;
frost$collections$Array* $tmp23 = *$tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23 != NULL);
*(&local0) = $tmp24;
goto block5;
block4:;
*(&local0) = $tmp20;
goto block5;
block5:;
frost$core$Bit $tmp25 = *(&local0);
frost$core$Bit* $tmp26 = &param0->requiresTypeInference;
*$tmp26 = $tmp25;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$MethodDecl** $tmp29 = &param0->value;
*$tmp29 = param3;
// line 39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp30 = &param0->target;
org$frostlang$frostc$Type* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$Type** $tmp32 = &param0->target;
*$tmp32 = param2;
// line 40
frost$core$Weak** $tmp33 = &param3->owner;
frost$core$Weak* $tmp34 = *$tmp33;
frost$core$Object* $tmp35 = frost$core$Weak$get$R$frost$core$Weak$T($tmp34);
org$frostlang$frostc$Type* $tmp36 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, param2, ((org$frostlang$frostc$ClassDecl*) $tmp35));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Type* $tmp37 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local1) = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
// line 41
org$frostlang$frostc$Type* $tmp38 = *(&local1);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {41};
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s43, ((frost$core$Object*) param2));
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, &$s45);
frost$core$Weak** $tmp46 = &param3->owner;
frost$core$Weak* $tmp47 = *$tmp46;
frost$core$Object* $tmp48 = frost$core$Weak$get$R$frost$core$Weak$T($tmp47);
frost$core$String** $tmp49 = &((org$frostlang$frostc$ClassDecl*) $tmp48)->name;
frost$core$String* $tmp50 = *$tmp49;
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp44, $tmp50);
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp51, &$s53);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp41, $tmp52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
abort(); // unreachable
block6:;
// line 42
org$frostlang$frostc$Type* $tmp55 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type(param3);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$Type* $tmp56 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local2) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// line 43
org$frostlang$frostc$Annotations** $tmp57 = &param3->annotations;
org$frostlang$frostc$Annotations* $tmp58 = *$tmp57;
frost$core$Bit $tmp59 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp58);
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block12; else goto block10;
block12:;
org$frostlang$frostc$MethodDecl$Kind* $tmp62 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp63 = *$tmp62;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp64;
$tmp64 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp64->value = $tmp63;
frost$core$Int64 $tmp65 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp66 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp65);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp67;
$tmp67 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp67->value = $tmp66;
ITable* $tmp68 = ((frost$core$Equatable*) $tmp64)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[1];
frost$core$Bit $tmp71 = $tmp69(((frost$core$Equatable*) $tmp64), ((frost$core$Equatable*) $tmp67));
bool $tmp72 = $tmp71.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp67)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp64)));
if ($tmp72) goto block11; else goto block10;
block11:;
frost$core$Bit $tmp73 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param2);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block8; else goto block10;
block8:;
// line 45
frost$collections$Array* $tmp75 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp75);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$Array* $tmp76 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local3) = $tmp75;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// line 46
frost$collections$Array* $tmp77 = *(&local3);
org$frostlang$frostc$FixedArray** $tmp78 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp79 = *$tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {1};
frost$core$Object* $tmp81 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp79, $tmp80);
frost$collections$Array$add$frost$collections$Array$T($tmp77, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp81)));
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
// line 47
frost$collections$Array* $tmp82 = *(&local3);
org$frostlang$frostc$Type* $tmp83 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp84 = &$tmp83->subtypes;
org$frostlang$frostc$FixedArray* $tmp85 = *$tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp87 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp88 = &$tmp87->subtypes;
org$frostlang$frostc$FixedArray* $tmp89 = *$tmp88;
ITable* $tmp90 = ((frost$collections$CollectionView*) $tmp89)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Int64 $tmp93 = $tmp91(((frost$collections$CollectionView*) $tmp89));
frost$core$Int64 $tmp94 = (frost$core$Int64) {1};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 - $tmp96;
frost$core$Int64 $tmp98 = (frost$core$Int64) {$tmp97};
frost$core$Bit $tmp99 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp100 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp86, $tmp98, $tmp99);
ITable* $tmp101 = ((frost$collections$ListView*) $tmp85)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[1];
frost$collections$ListView* $tmp104 = $tmp102(((frost$collections$ListView*) $tmp85), $tmp100);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp82, ((frost$collections$CollectionView*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// line 48
// line 49
org$frostlang$frostc$MethodDecl$Kind* $tmp105 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp106 = *$tmp105;
frost$core$Int64 $tmp107 = $tmp106.$rawValue;
frost$core$Int64 $tmp108 = (frost$core$Int64) {0};
frost$core$Bit $tmp109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp107, $tmp108);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block14; else goto block15;
block14:;
// line 51
frost$core$Int64 $tmp111 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp112 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp111);
*(&local4) = $tmp112;
goto block13;
block15:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {1};
frost$core$Bit $tmp114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp107, $tmp113);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block16; else goto block17;
block16:;
// line 54
frost$core$Int64 $tmp116 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp117 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp116);
*(&local4) = $tmp117;
goto block13;
block17:;
// line 57
frost$core$Int64 $tmp118 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s119, $tmp118);
abort(); // unreachable
block13:;
// line 60
org$frostlang$frostc$Type* $tmp120 = *(&local2);
org$frostlang$frostc$Position* $tmp121 = &((org$frostlang$frostc$Symbol*) $tmp120)->position;
org$frostlang$frostc$Position $tmp122 = *$tmp121;
org$frostlang$frostc$Type$Kind $tmp123 = *(&local4);
frost$collections$Array* $tmp124 = *(&local3);
org$frostlang$frostc$Type* $tmp125 = *(&local2);
org$frostlang$frostc$Type* $tmp126 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp125);
org$frostlang$frostc$Type* $tmp127 = *(&local2);
frost$core$Int64* $tmp128 = &$tmp127->priority;
frost$core$Int64 $tmp129 = *$tmp128;
org$frostlang$frostc$Type* $tmp130 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp122, $tmp123, ((frost$collections$ListView*) $tmp124), $tmp126, $tmp129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$Type* $tmp131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local2) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$collections$Array* $tmp132 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local3) = ((frost$collections$Array*) NULL);
goto block9;
block10:;
// line 63
frost$core$Bit $tmp133 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
frost$core$Bit $tmp134 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block20; else goto block19;
block20:;
org$frostlang$frostc$MethodDecl$Kind* $tmp136 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp137 = *$tmp136;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp138->value = $tmp137;
frost$core$Int64 $tmp139 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp140 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp139);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp141;
$tmp141 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp141->value = $tmp140;
ITable* $tmp142 = ((frost$core$Equatable*) $tmp138)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[1];
frost$core$Bit $tmp145 = $tmp143(((frost$core$Equatable*) $tmp138), ((frost$core$Equatable*) $tmp141));
bool $tmp146 = $tmp145.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp141)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
if ($tmp146) goto block18; else goto block19;
block18:;
// line 64
// line 65
org$frostlang$frostc$MethodDecl$Kind* $tmp147 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp148 = *$tmp147;
frost$core$Int64 $tmp149 = $tmp148.$rawValue;
frost$core$Int64 $tmp150 = (frost$core$Int64) {0};
frost$core$Bit $tmp151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp149, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block22; else goto block23;
block22:;
// line 67
frost$core$Int64 $tmp153 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp154 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp153);
*(&local5) = $tmp154;
goto block21;
block23:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {1};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp149, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block24; else goto block25;
block24:;
// line 70
frost$core$Int64 $tmp158 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp159 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp158);
*(&local5) = $tmp159;
goto block21;
block25:;
// line 73
frost$core$Int64 $tmp160 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s161, $tmp160);
abort(); // unreachable
block21:;
// line 76
org$frostlang$frostc$Type* $tmp162 = *(&local2);
org$frostlang$frostc$Position* $tmp163 = &((org$frostlang$frostc$Symbol*) $tmp162)->position;
org$frostlang$frostc$Position $tmp164 = *$tmp163;
org$frostlang$frostc$Type$Kind $tmp165 = *(&local5);
org$frostlang$frostc$Type* $tmp166 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp167 = &$tmp166->subtypes;
org$frostlang$frostc$FixedArray* $tmp168 = *$tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp170 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp171 = &$tmp170->subtypes;
org$frostlang$frostc$FixedArray* $tmp172 = *$tmp171;
ITable* $tmp173 = ((frost$collections$CollectionView*) $tmp172)->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Int64 $tmp176 = $tmp174(((frost$collections$CollectionView*) $tmp172));
frost$core$Int64 $tmp177 = (frost$core$Int64) {1};
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178 - $tmp179;
frost$core$Int64 $tmp181 = (frost$core$Int64) {$tmp180};
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp183 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp169, $tmp181, $tmp182);
ITable* $tmp184 = ((frost$collections$ListView*) $tmp168)->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[1];
frost$collections$ListView* $tmp187 = $tmp185(((frost$collections$ListView*) $tmp168), $tmp183);
org$frostlang$frostc$Type* $tmp188 = *(&local2);
org$frostlang$frostc$Type* $tmp189 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp188);
org$frostlang$frostc$Type* $tmp190 = *(&local2);
frost$core$Int64* $tmp191 = &$tmp190->priority;
frost$core$Int64 $tmp192 = *$tmp191;
org$frostlang$frostc$Type* $tmp193 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp164, $tmp165, $tmp187, $tmp189, $tmp192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$Type* $tmp194 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local2) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
goto block19;
block19:;
goto block9;
block9:;
// line 80
org$frostlang$frostc$Pair* $tmp195 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param1);
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195 != NULL);
bool $tmp197 = $tmp196.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
if ($tmp197) goto block26; else goto block27;
block26:;
// line 81
org$frostlang$frostc$Type* $tmp198 = *(&local2);
org$frostlang$frostc$Type* $tmp199 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp198);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
org$frostlang$frostc$Type* $tmp200 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local6) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// line 82
org$frostlang$frostc$Type* $tmp201 = *(&local6);
org$frostlang$frostc$Type* $tmp202 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp203 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp202);
frost$core$Bit $tmp204 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp201, $tmp203);
bool $tmp205 = $tmp204.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
if ($tmp205) goto block28; else goto block30;
block28:;
// line 83
org$frostlang$frostc$Type* $tmp206 = *(&local2);
org$frostlang$frostc$Position* $tmp207 = &((org$frostlang$frostc$Symbol*) $tmp206)->position;
org$frostlang$frostc$Position $tmp208 = *$tmp207;
org$frostlang$frostc$Type* $tmp209 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp210 = &$tmp209->typeKind;
org$frostlang$frostc$Type$Kind $tmp211 = *$tmp210;
org$frostlang$frostc$Type* $tmp212 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp213 = &$tmp212->subtypes;
org$frostlang$frostc$FixedArray* $tmp214 = *$tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp216 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp217 = &$tmp216->subtypes;
org$frostlang$frostc$FixedArray* $tmp218 = *$tmp217;
ITable* $tmp219 = ((frost$collections$CollectionView*) $tmp218)->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
frost$core$Int64 $tmp222 = $tmp220(((frost$collections$CollectionView*) $tmp218));
frost$core$Int64 $tmp223 = (frost$core$Int64) {1};
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224 - $tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {$tmp226};
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp229 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp215, $tmp227, $tmp228);
ITable* $tmp230 = ((frost$collections$ListView*) $tmp214)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[1];
frost$collections$ListView* $tmp233 = $tmp231(((frost$collections$ListView*) $tmp214), $tmp229);
org$frostlang$frostc$Type* $tmp234 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp235 = *(&local2);
frost$core$Int64* $tmp236 = &$tmp235->priority;
frost$core$Int64 $tmp237 = *$tmp236;
org$frostlang$frostc$Type* $tmp238 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp208, $tmp211, $tmp233, $tmp234, $tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$Type* $tmp239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local2) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
goto block29;
block30:;
// line 87
org$frostlang$frostc$Type* $tmp240 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp241 = &$tmp240->typeKind;
org$frostlang$frostc$Type$Kind $tmp242 = *$tmp241;
org$frostlang$frostc$Type$Kind$wrapper* $tmp243;
$tmp243 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp243->value = $tmp242;
frost$core$Int64 $tmp244 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp245 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp244);
org$frostlang$frostc$Type$Kind$wrapper* $tmp246;
$tmp246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp246->value = $tmp245;
ITable* $tmp247 = ((frost$core$Equatable*) $tmp243)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Bit $tmp250 = $tmp248(((frost$core$Equatable*) $tmp243), ((frost$core$Equatable*) $tmp246));
bool $tmp251 = $tmp250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp243)));
if ($tmp251) goto block33; else goto block32;
block33:;
org$frostlang$frostc$Type* $tmp252 = *(&local6);
org$frostlang$frostc$FixedArray** $tmp253 = &$tmp252->subtypes;
org$frostlang$frostc$FixedArray* $tmp254 = *$tmp253;
frost$core$Int64 $tmp255 = (frost$core$Int64) {0};
frost$core$Object* $tmp256 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp254, $tmp255);
frost$core$String** $tmp257 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp256))->name;
frost$core$String* $tmp258 = *$tmp257;
frost$core$Bit $tmp259 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp258, &$s260);
bool $tmp261 = $tmp259.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
if ($tmp261) goto block31; else goto block32;
block31:;
// line 89
org$frostlang$frostc$Type* $tmp262 = *(&local2);
org$frostlang$frostc$Position* $tmp263 = &((org$frostlang$frostc$Symbol*) $tmp262)->position;
org$frostlang$frostc$Position $tmp264 = *$tmp263;
org$frostlang$frostc$Type* $tmp265 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp266 = &$tmp265->typeKind;
org$frostlang$frostc$Type$Kind $tmp267 = *$tmp266;
org$frostlang$frostc$Type* $tmp268 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp269 = &$tmp268->subtypes;
org$frostlang$frostc$FixedArray* $tmp270 = *$tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp272 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp273 = &$tmp272->subtypes;
org$frostlang$frostc$FixedArray* $tmp274 = *$tmp273;
ITable* $tmp275 = ((frost$collections$CollectionView*) $tmp274)->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
frost$core$Int64 $tmp278 = $tmp276(((frost$collections$CollectionView*) $tmp274));
frost$core$Int64 $tmp279 = (frost$core$Int64) {1};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280 - $tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {$tmp282};
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp285 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp271, $tmp283, $tmp284);
ITable* $tmp286 = ((frost$collections$ListView*) $tmp270)->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[1];
frost$collections$ListView* $tmp289 = $tmp287(((frost$collections$ListView*) $tmp270), $tmp285);
org$frostlang$frostc$Type* $tmp290 = *(&local6);
org$frostlang$frostc$FixedArray** $tmp291 = &$tmp290->subtypes;
org$frostlang$frostc$FixedArray* $tmp292 = *$tmp291;
frost$core$Int64 $tmp293 = (frost$core$Int64) {1};
frost$core$Object* $tmp294 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp292, $tmp293);
org$frostlang$frostc$Type* $tmp295 = *(&local2);
frost$core$Int64* $tmp296 = &$tmp295->priority;
frost$core$Int64 $tmp297 = *$tmp296;
org$frostlang$frostc$Type* $tmp298 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp264, $tmp267, $tmp289, ((org$frostlang$frostc$Type*) $tmp294), $tmp297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
org$frostlang$frostc$Type* $tmp299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local2) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
goto block32;
block32:;
goto block29;
block29:;
org$frostlang$frostc$Type* $tmp300 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block27;
block27:;
// line 94
org$frostlang$frostc$Type* $tmp301 = *(&local1);
org$frostlang$frostc$Type* $tmp302 = *(&local2);
org$frostlang$frostc$Type* $tmp303 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp301, $tmp302);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
org$frostlang$frostc$Type* $tmp304 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local7) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// line 95
frost$core$Bit $tmp305 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block34; else goto block36;
block34:;
// line 96
frost$core$Weak** $tmp307 = &param3->owner;
frost$core$Weak* $tmp308 = *$tmp307;
frost$core$Object* $tmp309 = frost$core$Weak$get$R$frost$core$Weak$T($tmp308);
frost$core$String** $tmp310 = &((org$frostlang$frostc$ClassDecl*) $tmp309)->name;
frost$core$String* $tmp311 = *$tmp310;
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp311, &$s313);
frost$core$String** $tmp314 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp315 = *$tmp314;
frost$core$String* $tmp316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, $tmp315);
frost$core$String* $tmp317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp316, &$s318);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$String* $tmp319 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local8) = $tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q($tmp309);
// line 97
frost$collections$HashMap* $tmp320 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp320);
*(&local9) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$collections$HashMap* $tmp321 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local9) = $tmp320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// line 98
frost$core$Int64 $tmp322 = (frost$core$Int64) {0};
ITable* $tmp323 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
frost$core$Int64 $tmp326 = $tmp324(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp328 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp322, $tmp326, $tmp327);
frost$core$Int64 $tmp329 = $tmp328.min;
*(&local10) = $tmp329;
frost$core$Int64 $tmp330 = $tmp328.max;
frost$core$Bit $tmp331 = $tmp328.inclusive;
bool $tmp332 = $tmp331.value;
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp334 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp333);
if ($tmp332) goto block40; else goto block41;
block40:;
int64_t $tmp335 = $tmp329.value;
int64_t $tmp336 = $tmp330.value;
bool $tmp337 = $tmp335 <= $tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block37; else goto block38;
block41:;
int64_t $tmp340 = $tmp329.value;
int64_t $tmp341 = $tmp330.value;
bool $tmp342 = $tmp340 < $tmp341;
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block37; else goto block38;
block37:;
// line 99
frost$collections$HashMap* $tmp345 = *(&local9);
frost$core$String* $tmp346 = *(&local8);
frost$collections$Array** $tmp347 = &param3->genericParameters;
frost$collections$Array* $tmp348 = *$tmp347;
frost$core$Int64 $tmp349 = *(&local10);
frost$core$Object* $tmp350 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp348, $tmp349);
frost$core$String** $tmp351 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp350))->name;
frost$core$String* $tmp352 = *$tmp351;
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, $tmp352);
frost$core$Int64 $tmp354 = *(&local10);
ITable* $tmp355 = param4->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp355 = $tmp355->next;
}
$fn357 $tmp356 = $tmp355->methods[0];
frost$core$Object* $tmp358 = $tmp356(param4, $tmp354);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp345, ((frost$collections$Key*) $tmp353), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp358)));
frost$core$Frost$unref$frost$core$Object$Q($tmp358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q($tmp350);
goto block39;
block39:;
frost$core$Int64 $tmp359 = *(&local10);
int64_t $tmp360 = $tmp330.value;
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360 - $tmp361;
frost$core$Int64 $tmp363 = (frost$core$Int64) {$tmp362};
frost$core$UInt64 $tmp364 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp363);
if ($tmp332) goto block43; else goto block44;
block43:;
uint64_t $tmp365 = $tmp364.value;
uint64_t $tmp366 = $tmp334.value;
bool $tmp367 = $tmp365 >= $tmp366;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block42; else goto block38;
block44:;
uint64_t $tmp370 = $tmp364.value;
uint64_t $tmp371 = $tmp334.value;
bool $tmp372 = $tmp370 > $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block42; else goto block38;
block42:;
int64_t $tmp375 = $tmp359.value;
int64_t $tmp376 = $tmp333.value;
int64_t $tmp377 = $tmp375 + $tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {$tmp377};
*(&local10) = $tmp378;
goto block37;
block38:;
// line 101
org$frostlang$frostc$Type* $tmp379 = *(&local7);
frost$collections$HashMap* $tmp380 = *(&local9);
org$frostlang$frostc$Type* $tmp381 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp379, $tmp380);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$Type** $tmp382 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp383 = *$tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$Type** $tmp384 = &param0->effectiveType;
*$tmp384 = $tmp381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$collections$HashMap* $tmp385 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local9) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp386 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local8) = ((frost$core$String*) NULL);
goto block35;
block36:;
// line 1
// line 104
org$frostlang$frostc$Type* $tmp387 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
org$frostlang$frostc$Type** $tmp388 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp389 = *$tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$Type** $tmp390 = &param0->effectiveType;
*$tmp390 = $tmp387;
goto block35;
block35:;
org$frostlang$frostc$Type* $tmp391 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp392 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$MethodRef* param0) {

// line 109
org$frostlang$frostc$Type** $tmp394 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp395 = *$tmp394;
frost$core$Int64 $tmp396 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp395);
return $tmp396;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int64 param1) {

// line 113
org$frostlang$frostc$Type** $tmp397 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp398 = *$tmp397;
org$frostlang$frostc$FixedArray** $tmp399 = &$tmp398->subtypes;
org$frostlang$frostc$FixedArray* $tmp400 = *$tmp399;
frost$core$Object* $tmp401 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp400, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp401)));
frost$core$Frost$unref$frost$core$Object$Q($tmp401);
return ((org$frostlang$frostc$Type*) $tmp401);

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

// line 117
org$frostlang$frostc$Type** $tmp402 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp403 = *$tmp402;
org$frostlang$frostc$Type* $tmp404 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
return $tmp404;

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// line 122
org$frostlang$frostc$MethodDecl** $tmp405 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp406 = *$tmp405;
frost$core$String* $tmp407 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp406);
frost$core$String* $tmp408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s409, $tmp407);
frost$core$String* $tmp410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp408, &$s411);
org$frostlang$frostc$Type** $tmp412 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp413 = *$tmp412;
frost$core$String* $tmp414 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp410, ((frost$core$Object*) $tmp413));
frost$core$String* $tmp415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp414, &$s416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
return $tmp415;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp417 = &param0->target;
org$frostlang$frostc$Type* $tmp418 = *$tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
org$frostlang$frostc$MethodDecl** $tmp419 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp420 = *$tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
org$frostlang$frostc$Type** $tmp421 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp422 = *$tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
return;

}

