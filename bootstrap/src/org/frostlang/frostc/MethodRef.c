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
typedef frost$core$Int64 (*$fn89)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn100)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn141)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn170)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn181)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn214)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn225)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn267)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn278)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn314)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn346)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, 3424382132411029242, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, -7848168754699295719, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
org$frostlang$frostc$FixedArray* $tmp78 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp79 = (frost$core$Int64) {1};
frost$core$Object* $tmp80 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp78, $tmp79);
frost$collections$Array$add$frost$collections$Array$T($tmp77, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp80)));
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// line 47
frost$collections$Array* $tmp81 = *(&local3);
org$frostlang$frostc$Type* $tmp82 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp83 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp82);
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp85 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp86 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp85);
ITable* $tmp87 = ((frost$collections$CollectionView*) $tmp86)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Int64 $tmp90 = $tmp88(((frost$collections$CollectionView*) $tmp86));
frost$core$Int64 $tmp91 = (frost$core$Int64) {1};
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92 - $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp97 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp84, $tmp95, $tmp96);
ITable* $tmp98 = ((frost$collections$ListView*) $tmp83)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
frost$collections$ListView* $tmp101 = $tmp99(((frost$collections$ListView*) $tmp83), $tmp97);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp81, ((frost$collections$CollectionView*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// line 48
// line 49
org$frostlang$frostc$MethodDecl$Kind* $tmp102 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp103 = *$tmp102;
frost$core$Int64 $tmp104 = $tmp103.$rawValue;
frost$core$Int64 $tmp105 = (frost$core$Int64) {0};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block14; else goto block15;
block14:;
// line 51
frost$core$Int64 $tmp108 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp109 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp108);
*(&local4) = $tmp109;
goto block13;
block15:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block16; else goto block17;
block16:;
// line 54
frost$core$Int64 $tmp113 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp114 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp113);
*(&local4) = $tmp114;
goto block13;
block17:;
// line 57
frost$core$Int64 $tmp115 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s116, $tmp115);
abort(); // unreachable
block13:;
// line 60
org$frostlang$frostc$Type* $tmp117 = *(&local2);
org$frostlang$frostc$Position* $tmp118 = &((org$frostlang$frostc$Symbol*) $tmp117)->position;
org$frostlang$frostc$Position $tmp119 = *$tmp118;
org$frostlang$frostc$Type$Kind $tmp120 = *(&local4);
frost$collections$Array* $tmp121 = *(&local3);
org$frostlang$frostc$Type* $tmp122 = *(&local2);
org$frostlang$frostc$Type* $tmp123 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp122);
org$frostlang$frostc$Type* $tmp124 = *(&local2);
frost$core$Int64* $tmp125 = &$tmp124->priority;
frost$core$Int64 $tmp126 = *$tmp125;
org$frostlang$frostc$Type* $tmp127 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp119, $tmp120, ((frost$collections$ListView*) $tmp121), $tmp123, $tmp126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$Type* $tmp128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local2) = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$collections$Array* $tmp129 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local3) = ((frost$collections$Array*) NULL);
goto block9;
block10:;
// line 63
frost$core$Bit $tmp130 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
frost$core$Bit $tmp131 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block20; else goto block19;
block20:;
org$frostlang$frostc$MethodDecl$Kind* $tmp133 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp134 = *$tmp133;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp135;
$tmp135 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp135->value = $tmp134;
frost$core$Int64 $tmp136 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp137 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp136);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp138->value = $tmp137;
ITable* $tmp139 = ((frost$core$Equatable*) $tmp135)->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
frost$core$Bit $tmp142 = $tmp140(((frost$core$Equatable*) $tmp135), ((frost$core$Equatable*) $tmp138));
bool $tmp143 = $tmp142.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp135)));
if ($tmp143) goto block18; else goto block19;
block18:;
// line 64
// line 65
org$frostlang$frostc$MethodDecl$Kind* $tmp144 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = $tmp145.$rawValue;
frost$core$Int64 $tmp147 = (frost$core$Int64) {0};
frost$core$Bit $tmp148 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp146, $tmp147);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block22; else goto block23;
block22:;
// line 67
frost$core$Int64 $tmp150 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp151 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp150);
*(&local5) = $tmp151;
goto block21;
block23:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {1};
frost$core$Bit $tmp153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp146, $tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block24; else goto block25;
block24:;
// line 70
frost$core$Int64 $tmp155 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp156 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp155);
*(&local5) = $tmp156;
goto block21;
block25:;
// line 73
frost$core$Int64 $tmp157 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s158, $tmp157);
abort(); // unreachable
block21:;
// line 76
org$frostlang$frostc$Type* $tmp159 = *(&local2);
org$frostlang$frostc$Position* $tmp160 = &((org$frostlang$frostc$Symbol*) $tmp159)->position;
org$frostlang$frostc$Position $tmp161 = *$tmp160;
org$frostlang$frostc$Type$Kind $tmp162 = *(&local5);
org$frostlang$frostc$Type* $tmp163 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp164 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp163);
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp166 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp167 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp166);
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int64 $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167));
frost$core$Int64 $tmp172 = (frost$core$Int64) {1};
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173 - $tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {$tmp175};
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp178 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp165, $tmp176, $tmp177);
ITable* $tmp179 = ((frost$collections$ListView*) $tmp164)->$class->itable;
while ($tmp179->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[1];
frost$collections$ListView* $tmp182 = $tmp180(((frost$collections$ListView*) $tmp164), $tmp178);
org$frostlang$frostc$Type* $tmp183 = *(&local2);
org$frostlang$frostc$Type* $tmp184 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp183);
org$frostlang$frostc$Type* $tmp185 = *(&local2);
frost$core$Int64* $tmp186 = &$tmp185->priority;
frost$core$Int64 $tmp187 = *$tmp186;
org$frostlang$frostc$Type* $tmp188 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp161, $tmp162, $tmp182, $tmp184, $tmp187);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$Type* $tmp189 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local2) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
goto block19;
block19:;
goto block9;
block9:;
// line 80
org$frostlang$frostc$Pair* $tmp190 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param1);
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190 != NULL);
bool $tmp192 = $tmp191.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
if ($tmp192) goto block26; else goto block27;
block26:;
// line 81
org$frostlang$frostc$Type* $tmp193 = *(&local2);
org$frostlang$frostc$Type* $tmp194 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp193);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlang$frostc$Type* $tmp195 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local6) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// line 82
org$frostlang$frostc$Type* $tmp196 = *(&local6);
org$frostlang$frostc$Type* $tmp197 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp198 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp197);
frost$core$Bit $tmp199 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp196, $tmp198);
bool $tmp200 = $tmp199.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
if ($tmp200) goto block28; else goto block30;
block28:;
// line 83
org$frostlang$frostc$Type* $tmp201 = *(&local2);
org$frostlang$frostc$Position* $tmp202 = &((org$frostlang$frostc$Symbol*) $tmp201)->position;
org$frostlang$frostc$Position $tmp203 = *$tmp202;
org$frostlang$frostc$Type* $tmp204 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp205 = &$tmp204->typeKind;
org$frostlang$frostc$Type$Kind $tmp206 = *$tmp205;
org$frostlang$frostc$Type* $tmp207 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp208 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp207);
frost$core$Int64 $tmp209 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp210 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp211 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp210);
ITable* $tmp212 = ((frost$collections$CollectionView*) $tmp211)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[0];
frost$core$Int64 $tmp215 = $tmp213(((frost$collections$CollectionView*) $tmp211));
frost$core$Int64 $tmp216 = (frost$core$Int64) {1};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217 - $tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {$tmp219};
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp222 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp209, $tmp220, $tmp221);
ITable* $tmp223 = ((frost$collections$ListView*) $tmp208)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[1];
frost$collections$ListView* $tmp226 = $tmp224(((frost$collections$ListView*) $tmp208), $tmp222);
org$frostlang$frostc$Type* $tmp227 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp228 = *(&local2);
frost$core$Int64* $tmp229 = &$tmp228->priority;
frost$core$Int64 $tmp230 = *$tmp229;
org$frostlang$frostc$Type* $tmp231 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp203, $tmp206, $tmp226, $tmp227, $tmp230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$Type* $tmp232 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local2) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
goto block29;
block30:;
// line 87
org$frostlang$frostc$Type* $tmp233 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp234 = &$tmp233->typeKind;
org$frostlang$frostc$Type$Kind $tmp235 = *$tmp234;
org$frostlang$frostc$Type$Kind$wrapper* $tmp236;
$tmp236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp236->value = $tmp235;
frost$core$Int64 $tmp237 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp238 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp237);
org$frostlang$frostc$Type$Kind$wrapper* $tmp239;
$tmp239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp239->value = $tmp238;
ITable* $tmp240 = ((frost$core$Equatable*) $tmp236)->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
frost$core$Bit $tmp243 = $tmp241(((frost$core$Equatable*) $tmp236), ((frost$core$Equatable*) $tmp239));
bool $tmp244 = $tmp243.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp236)));
if ($tmp244) goto block33; else goto block32;
block33:;
org$frostlang$frostc$Type* $tmp245 = *(&local6);
org$frostlang$frostc$FixedArray* $tmp246 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp245);
frost$core$Int64 $tmp247 = (frost$core$Int64) {0};
frost$core$Object* $tmp248 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp246, $tmp247);
frost$core$String** $tmp249 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp248))->name;
frost$core$String* $tmp250 = *$tmp249;
frost$core$Bit $tmp251 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s252);
bool $tmp253 = $tmp251.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp248);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
if ($tmp253) goto block31; else goto block32;
block31:;
// line 89
org$frostlang$frostc$Type* $tmp254 = *(&local2);
org$frostlang$frostc$Position* $tmp255 = &((org$frostlang$frostc$Symbol*) $tmp254)->position;
org$frostlang$frostc$Position $tmp256 = *$tmp255;
org$frostlang$frostc$Type* $tmp257 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp258 = &$tmp257->typeKind;
org$frostlang$frostc$Type$Kind $tmp259 = *$tmp258;
org$frostlang$frostc$Type* $tmp260 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp261 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp260);
frost$core$Int64 $tmp262 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp263 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp264 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp263);
ITable* $tmp265 = ((frost$collections$CollectionView*) $tmp264)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Int64 $tmp268 = $tmp266(((frost$collections$CollectionView*) $tmp264));
frost$core$Int64 $tmp269 = (frost$core$Int64) {1};
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270 - $tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {$tmp272};
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp275 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp262, $tmp273, $tmp274);
ITable* $tmp276 = ((frost$collections$ListView*) $tmp261)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[1];
frost$collections$ListView* $tmp279 = $tmp277(((frost$collections$ListView*) $tmp261), $tmp275);
org$frostlang$frostc$Type* $tmp280 = *(&local6);
org$frostlang$frostc$FixedArray* $tmp281 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp280);
frost$core$Int64 $tmp282 = (frost$core$Int64) {1};
frost$core$Object* $tmp283 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp281, $tmp282);
org$frostlang$frostc$Type* $tmp284 = *(&local2);
frost$core$Int64* $tmp285 = &$tmp284->priority;
frost$core$Int64 $tmp286 = *$tmp285;
org$frostlang$frostc$Type* $tmp287 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp256, $tmp259, $tmp279, ((org$frostlang$frostc$Type*) $tmp283), $tmp286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
org$frostlang$frostc$Type* $tmp288 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local2) = $tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q($tmp283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
goto block32;
block32:;
goto block29;
block29:;
org$frostlang$frostc$Type* $tmp289 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block27;
block27:;
// line 94
org$frostlang$frostc$Type* $tmp290 = *(&local1);
org$frostlang$frostc$Type* $tmp291 = *(&local2);
org$frostlang$frostc$Type* $tmp292 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp290, $tmp291);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
org$frostlang$frostc$Type* $tmp293 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local7) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// line 95
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block34; else goto block36;
block34:;
// line 96
frost$core$Weak** $tmp296 = &param3->owner;
frost$core$Weak* $tmp297 = *$tmp296;
frost$core$Object* $tmp298 = frost$core$Weak$get$R$frost$core$Weak$T($tmp297);
frost$core$String** $tmp299 = &((org$frostlang$frostc$ClassDecl*) $tmp298)->name;
frost$core$String* $tmp300 = *$tmp299;
frost$core$String* $tmp301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp300, &$s302);
frost$core$String** $tmp303 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp304 = *$tmp303;
frost$core$String* $tmp305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp301, $tmp304);
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp305, &$s307);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$String* $tmp308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local8) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
// line 97
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp309 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp309);
*(&local9) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$collections$HashMap* $tmp310 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local9) = $tmp309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// line 98
frost$core$Int64 $tmp311 = (frost$core$Int64) {0};
ITable* $tmp312 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
frost$core$Int64 $tmp315 = $tmp313(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp316 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp317 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp311, $tmp315, $tmp316);
frost$core$Int64 $tmp318 = $tmp317.min;
*(&local10) = $tmp318;
frost$core$Int64 $tmp319 = $tmp317.max;
frost$core$Bit $tmp320 = $tmp317.inclusive;
bool $tmp321 = $tmp320.value;
frost$core$Int64 $tmp322 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp323 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp322);
if ($tmp321) goto block40; else goto block41;
block40:;
int64_t $tmp324 = $tmp318.value;
int64_t $tmp325 = $tmp319.value;
bool $tmp326 = $tmp324 <= $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block37; else goto block38;
block41:;
int64_t $tmp329 = $tmp318.value;
int64_t $tmp330 = $tmp319.value;
bool $tmp331 = $tmp329 < $tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block37; else goto block38;
block37:;
// line 99
frost$collections$HashMap* $tmp334 = *(&local9);
frost$core$String* $tmp335 = *(&local8);
frost$collections$Array** $tmp336 = &param3->genericParameters;
frost$collections$Array* $tmp337 = *$tmp336;
frost$core$Int64 $tmp338 = *(&local10);
frost$core$Object* $tmp339 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp337, $tmp338);
frost$core$String** $tmp340 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp339))->name;
frost$core$String* $tmp341 = *$tmp340;
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp335, $tmp341);
frost$core$Int64 $tmp343 = *(&local10);
ITable* $tmp344 = param4->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
frost$core$Object* $tmp347 = $tmp345(param4, $tmp343);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp334, ((frost$collections$Key*) $tmp342), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp347)));
frost$core$Frost$unref$frost$core$Object$Q($tmp347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q($tmp339);
goto block39;
block39:;
frost$core$Int64 $tmp348 = *(&local10);
int64_t $tmp349 = $tmp319.value;
int64_t $tmp350 = $tmp348.value;
int64_t $tmp351 = $tmp349 - $tmp350;
frost$core$Int64 $tmp352 = (frost$core$Int64) {$tmp351};
frost$core$UInt64 $tmp353 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp352);
if ($tmp321) goto block43; else goto block44;
block43:;
uint64_t $tmp354 = $tmp353.value;
uint64_t $tmp355 = $tmp323.value;
bool $tmp356 = $tmp354 >= $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block42; else goto block38;
block44:;
uint64_t $tmp359 = $tmp353.value;
uint64_t $tmp360 = $tmp323.value;
bool $tmp361 = $tmp359 > $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block42; else goto block38;
block42:;
int64_t $tmp364 = $tmp348.value;
int64_t $tmp365 = $tmp322.value;
int64_t $tmp366 = $tmp364 + $tmp365;
frost$core$Int64 $tmp367 = (frost$core$Int64) {$tmp366};
*(&local10) = $tmp367;
goto block37;
block38:;
// line 101
org$frostlang$frostc$Type* $tmp368 = *(&local7);
frost$collections$HashMap* $tmp369 = *(&local9);
org$frostlang$frostc$Type* $tmp370 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp368, $tmp369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$Type** $tmp371 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp372 = *$tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$Type** $tmp373 = &param0->effectiveType;
*$tmp373 = $tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$collections$HashMap* $tmp374 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local9) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp375 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local8) = ((frost$core$String*) NULL);
goto block35;
block36:;
// line 1
// line 104
org$frostlang$frostc$Type* $tmp376 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$Type** $tmp377 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp378 = *$tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
org$frostlang$frostc$Type** $tmp379 = &param0->effectiveType;
*$tmp379 = $tmp376;
goto block35;
block35:;
org$frostlang$frostc$Type* $tmp380 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp381 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp382 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$MethodRef* param0) {

// line 109
org$frostlang$frostc$Type** $tmp383 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp384 = *$tmp383;
frost$core$Int64 $tmp385 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp384);
return $tmp385;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int64 param1) {

// line 113
org$frostlang$frostc$Type** $tmp386 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp387 = *$tmp386;
org$frostlang$frostc$FixedArray* $tmp388 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp387);
frost$core$Object* $tmp389 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp388, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp389)));
frost$core$Frost$unref$frost$core$Object$Q($tmp389);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
return ((org$frostlang$frostc$Type*) $tmp389);

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

// line 117
org$frostlang$frostc$Type** $tmp390 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp391 = *$tmp390;
org$frostlang$frostc$Type* $tmp392 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
return $tmp392;

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// line 122
org$frostlang$frostc$MethodDecl** $tmp393 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp394 = *$tmp393;
frost$core$String* $tmp395 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp394);
frost$core$String* $tmp396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s397, $tmp395);
frost$core$String* $tmp398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp396, &$s399);
org$frostlang$frostc$Type** $tmp400 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp401 = *$tmp400;
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp398, ((frost$core$Object*) $tmp401));
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, &$s404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
return $tmp403;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp405 = &param0->target;
org$frostlang$frostc$Type* $tmp406 = *$tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
org$frostlang$frostc$MethodDecl** $tmp407 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp408 = *$tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
org$frostlang$frostc$Type** $tmp409 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp410 = *$tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
return;

}

