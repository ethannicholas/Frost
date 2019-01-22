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
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn105)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn182)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn193)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn228)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn239)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn285)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn296)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn333)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn365)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, 3424382132411029242, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, -7848168754699295719, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 28
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$Bit local10;
org$frostlang$frostc$Type* local11 = NULL;
frost$core$String* local12 = NULL;
frost$collections$HashMap* local13 = NULL;
frost$core$Int64 local14;
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
if ($tmp61) goto block10; else goto block11;
block10:;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp67)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp64)));
*(&local4) = $tmp71;
goto block12;
block11:;
*(&local4) = $tmp60;
goto block12;
block12:;
frost$core$Bit $tmp72 = *(&local4);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block13; else goto block14;
block13:;
frost$core$Bit $tmp74 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param2);
*(&local3) = $tmp74;
goto block15;
block14:;
*(&local3) = $tmp72;
goto block15;
block15:;
frost$core$Bit $tmp75 = *(&local3);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block8; else goto block16;
block8:;
// line 45
frost$collections$Array* $tmp77 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp77);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$Array* $tmp78 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local5) = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 46
frost$collections$Array* $tmp79 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp80 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp81 = *$tmp80;
frost$core$Int64 $tmp82 = (frost$core$Int64) {1};
frost$core$Object* $tmp83 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp81, $tmp82);
frost$collections$Array$add$frost$collections$Array$T($tmp79, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp83)));
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
// line 47
frost$collections$Array* $tmp84 = *(&local5);
org$frostlang$frostc$Type* $tmp85 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp86 = &$tmp85->subtypes;
org$frostlang$frostc$FixedArray* $tmp87 = *$tmp86;
frost$core$Int64 $tmp88 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp89 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp90 = &$tmp89->subtypes;
org$frostlang$frostc$FixedArray* $tmp91 = *$tmp90;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp91));
frost$core$Int64 $tmp96 = (frost$core$Int64) {1};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 - $tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp102 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp88, $tmp100, $tmp101);
ITable* $tmp103 = ((frost$collections$ListView*) $tmp87)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[1];
frost$collections$ListView* $tmp106 = $tmp104(((frost$collections$ListView*) $tmp87), $tmp102);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp84, ((frost$collections$CollectionView*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// line 48
// line 49
org$frostlang$frostc$MethodDecl$Kind* $tmp107 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp108 = *$tmp107;
frost$core$Int64 $tmp109 = $tmp108.$rawValue;
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block18; else goto block19;
block18:;
// line 51
frost$core$Int64 $tmp113 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp114 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp113);
*(&local6) = $tmp114;
goto block17;
block19:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {1};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block20; else goto block21;
block20:;
// line 54
frost$core$Int64 $tmp118 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp119 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp118);
*(&local6) = $tmp119;
goto block17;
block21:;
// line 57
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit(false);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s123, $tmp122);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 60
org$frostlang$frostc$Type* $tmp124 = *(&local2);
org$frostlang$frostc$Position* $tmp125 = &((org$frostlang$frostc$Symbol*) $tmp124)->position;
org$frostlang$frostc$Position $tmp126 = *$tmp125;
org$frostlang$frostc$Type$Kind $tmp127 = *(&local6);
frost$collections$Array* $tmp128 = *(&local5);
org$frostlang$frostc$Type* $tmp129 = *(&local2);
org$frostlang$frostc$Type* $tmp130 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp129);
org$frostlang$frostc$Type* $tmp131 = *(&local2);
frost$core$Int64* $tmp132 = &$tmp131->priority;
frost$core$Int64 $tmp133 = *$tmp132;
org$frostlang$frostc$Type* $tmp134 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp126, $tmp127, ((frost$collections$ListView*) $tmp128), $tmp130, $tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Type* $tmp135 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local2) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$collections$Array* $tmp136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local5) = ((frost$collections$Array*) NULL);
goto block9;
block16:;
// line 63
frost$core$Bit $tmp137 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
frost$core$Bit $tmp138 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block26; else goto block27;
block26:;
org$frostlang$frostc$MethodDecl$Kind* $tmp140 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp141 = *$tmp140;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp142;
$tmp142 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp142->value = $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp144 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp143);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp145;
$tmp145 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((frost$core$Equatable*) $tmp142)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[1];
frost$core$Bit $tmp149 = $tmp147(((frost$core$Equatable*) $tmp142), ((frost$core$Equatable*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
*(&local7) = $tmp149;
goto block28;
block27:;
*(&local7) = $tmp138;
goto block28;
block28:;
frost$core$Bit $tmp150 = *(&local7);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block24; else goto block25;
block24:;
// line 64
// line 65
org$frostlang$frostc$MethodDecl$Kind* $tmp152 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp153 = *$tmp152;
frost$core$Int64 $tmp154 = $tmp153.$rawValue;
frost$core$Int64 $tmp155 = (frost$core$Int64) {0};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp154, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block30; else goto block31;
block30:;
// line 67
frost$core$Int64 $tmp158 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp159 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp158);
*(&local8) = $tmp159;
goto block29;
block31:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {1};
frost$core$Bit $tmp161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp154, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block32; else goto block33;
block32:;
// line 70
frost$core$Int64 $tmp163 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp164 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp163);
*(&local8) = $tmp164;
goto block29;
block33:;
// line 73
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit(false);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp167 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s168, $tmp167);
abort(); // unreachable
block34:;
goto block29;
block29:;
// line 76
org$frostlang$frostc$Type* $tmp169 = *(&local2);
org$frostlang$frostc$Position* $tmp170 = &((org$frostlang$frostc$Symbol*) $tmp169)->position;
org$frostlang$frostc$Position $tmp171 = *$tmp170;
org$frostlang$frostc$Type$Kind $tmp172 = *(&local8);
org$frostlang$frostc$Type* $tmp173 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp174 = &$tmp173->subtypes;
org$frostlang$frostc$FixedArray* $tmp175 = *$tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp177 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp178 = &$tmp177->subtypes;
org$frostlang$frostc$FixedArray* $tmp179 = *$tmp178;
ITable* $tmp180 = ((frost$collections$CollectionView*) $tmp179)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Int64 $tmp183 = $tmp181(((frost$collections$CollectionView*) $tmp179));
frost$core$Int64 $tmp184 = (frost$core$Int64) {1};
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185 - $tmp186;
frost$core$Int64 $tmp188 = (frost$core$Int64) {$tmp187};
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp190 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp176, $tmp188, $tmp189);
ITable* $tmp191 = ((frost$collections$ListView*) $tmp175)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
frost$collections$ListView* $tmp194 = $tmp192(((frost$collections$ListView*) $tmp175), $tmp190);
org$frostlang$frostc$Type* $tmp195 = *(&local2);
org$frostlang$frostc$Type* $tmp196 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp195);
org$frostlang$frostc$Type* $tmp197 = *(&local2);
frost$core$Int64* $tmp198 = &$tmp197->priority;
frost$core$Int64 $tmp199 = *$tmp198;
org$frostlang$frostc$Type* $tmp200 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp171, $tmp172, $tmp194, $tmp196, $tmp199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
org$frostlang$frostc$Type* $tmp201 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local2) = $tmp200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
goto block25;
block25:;
goto block9;
block9:;
// line 80
org$frostlang$frostc$Pair* $tmp202 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param1);
frost$core$Bit $tmp203 = frost$core$Bit$init$builtin_bit($tmp202 != NULL);
bool $tmp204 = $tmp203.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
if ($tmp204) goto block36; else goto block37;
block36:;
// line 81
org$frostlang$frostc$Type* $tmp205 = *(&local2);
org$frostlang$frostc$Type* $tmp206 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp205);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$Type* $tmp207 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local9) = $tmp206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// line 82
org$frostlang$frostc$Type* $tmp208 = *(&local9);
org$frostlang$frostc$Type* $tmp209 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp210 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp209);
frost$core$Bit $tmp211 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp208, $tmp210);
bool $tmp212 = $tmp211.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
if ($tmp212) goto block38; else goto block40;
block38:;
// line 83
org$frostlang$frostc$Type* $tmp213 = *(&local2);
org$frostlang$frostc$Position* $tmp214 = &((org$frostlang$frostc$Symbol*) $tmp213)->position;
org$frostlang$frostc$Position $tmp215 = *$tmp214;
org$frostlang$frostc$Type* $tmp216 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp217 = &$tmp216->typeKind;
org$frostlang$frostc$Type$Kind $tmp218 = *$tmp217;
org$frostlang$frostc$Type* $tmp219 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp220 = &$tmp219->subtypes;
org$frostlang$frostc$FixedArray* $tmp221 = *$tmp220;
frost$core$Int64 $tmp222 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp223 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp224 = &$tmp223->subtypes;
org$frostlang$frostc$FixedArray* $tmp225 = *$tmp224;
ITable* $tmp226 = ((frost$collections$CollectionView*) $tmp225)->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
frost$core$Int64 $tmp229 = $tmp227(((frost$collections$CollectionView*) $tmp225));
frost$core$Int64 $tmp230 = (frost$core$Int64) {1};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 - $tmp232;
frost$core$Int64 $tmp234 = (frost$core$Int64) {$tmp233};
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp236 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp222, $tmp234, $tmp235);
ITable* $tmp237 = ((frost$collections$ListView*) $tmp221)->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[1];
frost$collections$ListView* $tmp240 = $tmp238(((frost$collections$ListView*) $tmp221), $tmp236);
org$frostlang$frostc$Type* $tmp241 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp242 = *(&local2);
frost$core$Int64* $tmp243 = &$tmp242->priority;
frost$core$Int64 $tmp244 = *$tmp243;
org$frostlang$frostc$Type* $tmp245 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp215, $tmp218, $tmp240, $tmp241, $tmp244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
org$frostlang$frostc$Type* $tmp246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local2) = $tmp245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
goto block39;
block40:;
// line 87
org$frostlang$frostc$Type* $tmp247 = *(&local9);
org$frostlang$frostc$Type$Kind* $tmp248 = &$tmp247->typeKind;
org$frostlang$frostc$Type$Kind $tmp249 = *$tmp248;
org$frostlang$frostc$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp250->value = $tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp252 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp251);
org$frostlang$frostc$Type$Kind$wrapper* $tmp253;
$tmp253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp253->value = $tmp252;
ITable* $tmp254 = ((frost$core$Equatable*) $tmp250)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Bit $tmp257 = $tmp255(((frost$core$Equatable*) $tmp250), ((frost$core$Equatable*) $tmp253));
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block43; else goto block44;
block43:;
org$frostlang$frostc$Type* $tmp259 = *(&local9);
org$frostlang$frostc$FixedArray** $tmp260 = &$tmp259->subtypes;
org$frostlang$frostc$FixedArray* $tmp261 = *$tmp260;
frost$core$Int64 $tmp262 = (frost$core$Int64) {0};
frost$core$Object* $tmp263 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp261, $tmp262);
frost$core$String** $tmp264 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp263))->name;
frost$core$String* $tmp265 = *$tmp264;
frost$core$Bit $tmp266 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s267);
frost$core$Frost$unref$frost$core$Object$Q($tmp263);
*(&local10) = $tmp266;
goto block45;
block44:;
*(&local10) = $tmp257;
goto block45;
block45:;
frost$core$Bit $tmp268 = *(&local10);
bool $tmp269 = $tmp268.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp250)));
if ($tmp269) goto block41; else goto block42;
block41:;
// line 89
org$frostlang$frostc$Type* $tmp270 = *(&local2);
org$frostlang$frostc$Position* $tmp271 = &((org$frostlang$frostc$Symbol*) $tmp270)->position;
org$frostlang$frostc$Position $tmp272 = *$tmp271;
org$frostlang$frostc$Type* $tmp273 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp274 = &$tmp273->typeKind;
org$frostlang$frostc$Type$Kind $tmp275 = *$tmp274;
org$frostlang$frostc$Type* $tmp276 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp277 = &$tmp276->subtypes;
org$frostlang$frostc$FixedArray* $tmp278 = *$tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp280 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp281 = &$tmp280->subtypes;
org$frostlang$frostc$FixedArray* $tmp282 = *$tmp281;
ITable* $tmp283 = ((frost$collections$CollectionView*) $tmp282)->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Int64 $tmp286 = $tmp284(((frost$collections$CollectionView*) $tmp282));
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 - $tmp289;
frost$core$Int64 $tmp291 = (frost$core$Int64) {$tmp290};
frost$core$Bit $tmp292 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp293 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp279, $tmp291, $tmp292);
ITable* $tmp294 = ((frost$collections$ListView*) $tmp278)->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[1];
frost$collections$ListView* $tmp297 = $tmp295(((frost$collections$ListView*) $tmp278), $tmp293);
org$frostlang$frostc$Type* $tmp298 = *(&local9);
org$frostlang$frostc$FixedArray** $tmp299 = &$tmp298->subtypes;
org$frostlang$frostc$FixedArray* $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {1};
frost$core$Object* $tmp302 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp300, $tmp301);
org$frostlang$frostc$Type* $tmp303 = *(&local2);
frost$core$Int64* $tmp304 = &$tmp303->priority;
frost$core$Int64 $tmp305 = *$tmp304;
org$frostlang$frostc$Type* $tmp306 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp272, $tmp275, $tmp297, ((org$frostlang$frostc$Type*) $tmp302), $tmp305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
org$frostlang$frostc$Type* $tmp307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local2) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
goto block42;
block42:;
goto block39;
block39:;
org$frostlang$frostc$Type* $tmp308 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block37;
block37:;
// line 94
org$frostlang$frostc$Type* $tmp309 = *(&local1);
org$frostlang$frostc$Type* $tmp310 = *(&local2);
org$frostlang$frostc$Type* $tmp311 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp309, $tmp310);
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
org$frostlang$frostc$Type* $tmp312 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local11) = $tmp311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// line 95
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block46; else goto block48;
block46:;
// line 96
frost$core$Weak** $tmp315 = &param3->owner;
frost$core$Weak* $tmp316 = *$tmp315;
frost$core$Object* $tmp317 = frost$core$Weak$get$R$frost$core$Weak$T($tmp316);
frost$core$String** $tmp318 = &((org$frostlang$frostc$ClassDecl*) $tmp317)->name;
frost$core$String* $tmp319 = *$tmp318;
frost$core$String* $tmp320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp319, &$s321);
frost$core$String** $tmp322 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp323 = *$tmp322;
frost$core$String* $tmp324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp320, $tmp323);
frost$core$String* $tmp325 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp324, &$s326);
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$String* $tmp327 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local12) = $tmp325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
// line 97
frost$collections$HashMap* $tmp328 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp328);
*(&local13) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$collections$HashMap* $tmp329 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local13) = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// line 98
frost$core$Int64 $tmp330 = (frost$core$Int64) {0};
ITable* $tmp331 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp331 = $tmp331->next;
}
$fn333 $tmp332 = $tmp331->methods[0];
frost$core$Int64 $tmp334 = $tmp332(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp336 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp330, $tmp334, $tmp335);
frost$core$Int64 $tmp337 = $tmp336.min;
*(&local14) = $tmp337;
frost$core$Int64 $tmp338 = $tmp336.max;
frost$core$Bit $tmp339 = $tmp336.inclusive;
bool $tmp340 = $tmp339.value;
frost$core$Int64 $tmp341 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp342 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp341);
if ($tmp340) goto block52; else goto block53;
block52:;
int64_t $tmp343 = $tmp337.value;
int64_t $tmp344 = $tmp338.value;
bool $tmp345 = $tmp343 <= $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block49; else goto block50;
block53:;
int64_t $tmp348 = $tmp337.value;
int64_t $tmp349 = $tmp338.value;
bool $tmp350 = $tmp348 < $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block49; else goto block50;
block49:;
// line 99
frost$collections$HashMap* $tmp353 = *(&local13);
frost$core$String* $tmp354 = *(&local12);
frost$collections$Array** $tmp355 = &param3->genericParameters;
frost$collections$Array* $tmp356 = *$tmp355;
frost$core$Int64 $tmp357 = *(&local14);
frost$core$Object* $tmp358 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp356, $tmp357);
frost$core$String** $tmp359 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp358))->name;
frost$core$String* $tmp360 = *$tmp359;
frost$core$String* $tmp361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp354, $tmp360);
frost$core$Int64 $tmp362 = *(&local14);
ITable* $tmp363 = param4->$class->itable;
while ($tmp363->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp363 = $tmp363->next;
}
$fn365 $tmp364 = $tmp363->methods[0];
frost$core$Object* $tmp366 = $tmp364(param4, $tmp362);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp353, ((frost$collections$Key*) $tmp361), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp366)));
frost$core$Frost$unref$frost$core$Object$Q($tmp366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q($tmp358);
goto block51;
block51:;
frost$core$Int64 $tmp367 = *(&local14);
int64_t $tmp368 = $tmp338.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 - $tmp369;
frost$core$Int64 $tmp371 = (frost$core$Int64) {$tmp370};
frost$core$UInt64 $tmp372 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp371);
if ($tmp340) goto block55; else goto block56;
block55:;
uint64_t $tmp373 = $tmp372.value;
uint64_t $tmp374 = $tmp342.value;
bool $tmp375 = $tmp373 >= $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block54; else goto block50;
block56:;
uint64_t $tmp378 = $tmp372.value;
uint64_t $tmp379 = $tmp342.value;
bool $tmp380 = $tmp378 > $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block54; else goto block50;
block54:;
int64_t $tmp383 = $tmp367.value;
int64_t $tmp384 = $tmp341.value;
int64_t $tmp385 = $tmp383 + $tmp384;
frost$core$Int64 $tmp386 = (frost$core$Int64) {$tmp385};
*(&local14) = $tmp386;
goto block49;
block50:;
// line 101
org$frostlang$frostc$Type* $tmp387 = *(&local11);
frost$collections$HashMap* $tmp388 = *(&local13);
org$frostlang$frostc$Type* $tmp389 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp387, $tmp388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$Type** $tmp390 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp391 = *$tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
org$frostlang$frostc$Type** $tmp392 = &param0->effectiveType;
*$tmp392 = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$collections$HashMap* $tmp393 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local13) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp394 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local12) = ((frost$core$String*) NULL);
goto block47;
block48:;
// line 1
// line 104
org$frostlang$frostc$Type* $tmp395 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$Type** $tmp396 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp397 = *$tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
org$frostlang$frostc$Type** $tmp398 = &param0->effectiveType;
*$tmp398 = $tmp395;
goto block47;
block47:;
org$frostlang$frostc$Type* $tmp399 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp400 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp401 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$MethodRef* param0) {

// line 109
org$frostlang$frostc$Type** $tmp402 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp403 = *$tmp402;
frost$core$Int64 $tmp404 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp403);
return $tmp404;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int64 param1) {

// line 113
org$frostlang$frostc$Type** $tmp405 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp406 = *$tmp405;
org$frostlang$frostc$FixedArray** $tmp407 = &$tmp406->subtypes;
org$frostlang$frostc$FixedArray* $tmp408 = *$tmp407;
frost$core$Object* $tmp409 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp408, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp409)));
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
return ((org$frostlang$frostc$Type*) $tmp409);

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

// line 117
org$frostlang$frostc$Type** $tmp410 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp411 = *$tmp410;
org$frostlang$frostc$Type* $tmp412 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
return $tmp412;

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// line 122
org$frostlang$frostc$MethodDecl** $tmp413 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp414 = *$tmp413;
frost$core$String* $tmp415 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp414);
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s417, $tmp415);
frost$core$String* $tmp418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp416, &$s419);
org$frostlang$frostc$Type** $tmp420 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp421 = *$tmp420;
frost$core$String* $tmp422 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp418, ((frost$core$Object*) $tmp421));
frost$core$String* $tmp423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp422, &$s424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
return $tmp423;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp425 = &param0->target;
org$frostlang$frostc$Type* $tmp426 = *$tmp425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
org$frostlang$frostc$MethodDecl** $tmp427 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp428 = *$tmp427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
org$frostlang$frostc$Type** $tmp429 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp430 = *$tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
return;

}

