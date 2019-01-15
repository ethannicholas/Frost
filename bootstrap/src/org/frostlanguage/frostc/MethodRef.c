#include "org/frostlanguage/frostc/MethodRef.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/Type/Kind.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Compiler/Resolution.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/core/UInt64.h"
#include "org/frostlanguage/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlanguage$frostc$MethodRef$class_type org$frostlanguage$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlanguage$frostc$MethodRef$convert$R$frost$core$String, org$frostlanguage$frostc$MethodRef$cleanup, org$frostlanguage$frostc$MethodRef$get_parameterCount$R$frost$core$Int64, org$frostlanguage$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$MethodRef$get_returnType$R$org$frostlanguage$frostc$Type} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn65)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn89)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn100)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn143)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn177)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn188)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn221)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn253)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -7340240072158123372, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlanguage$frostc$MethodRef$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$MethodRef* param0, org$frostlanguage$frostc$Compiler* param1, org$frostlanguage$frostc$Type* param2, org$frostlanguage$frostc$MethodDecl* param3) {

// line 28
org$frostlanguage$frostc$MethodRef$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlanguage$frostc$MethodRef$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$Q(org$frostlanguage$frostc$MethodRef* param0, org$frostlanguage$frostc$Compiler* param1, org$frostlanguage$frostc$Type* param2, org$frostlanguage$frostc$MethodDecl* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
org$frostlanguage$frostc$Type* local1 = NULL;
org$frostlanguage$frostc$Type* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlanguage$frostc$Type$Kind local6;
frost$core$Bit local7;
org$frostlanguage$frostc$Type$Kind local8;
org$frostlanguage$frostc$Type* local9 = NULL;
frost$core$String* local10 = NULL;
frost$collections$HashMap* local11 = NULL;
frost$core$Int64 local12;
// line 35
org$frostlanguage$frostc$Compiler$Resolution* $tmp2 = &param3->resolved;
org$frostlanguage$frostc$Compiler$Resolution $tmp3 = *$tmp2;
org$frostlanguage$frostc$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$frostlanguage$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$Resolution $tmp6 = org$frostlanguage$frostc$Compiler$Resolution$init$frost$core$Int64($tmp5);
org$frostlanguage$frostc$Compiler$Resolution$wrapper* $tmp7;
$tmp7 = (org$frostlanguage$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Resolution$wrapperclass);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s14, $tmp13);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// unreffing REF($3:frost.core.Equatable<org.frostlanguage.frostc.Compiler.Resolution>)
// line 36
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block4;
block3:;
frost$collections$Array** $tmp17 = &param3->genericParameters;
frost$collections$Array* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18 != NULL);
*(&local0) = $tmp19;
goto block5;
block4:;
*(&local0) = $tmp15;
goto block5;
block5:;
frost$core$Bit $tmp20 = *(&local0);
frost$core$Bit* $tmp21 = &param0->requiresTypeInference;
*$tmp21 = $tmp20;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlanguage$frostc$MethodDecl** $tmp22 = &param0->value;
org$frostlanguage$frostc$MethodDecl* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlanguage$frostc$MethodDecl** $tmp24 = &param0->value;
*$tmp24 = param3;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlanguage$frostc$Type** $tmp25 = &param0->target;
org$frostlanguage$frostc$Type* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlanguage$frostc$Type** $tmp27 = &param0->target;
*$tmp27 = param2;
// line 39
frost$core$Weak** $tmp28 = &param3->owner;
frost$core$Weak* $tmp29 = *$tmp28;
frost$core$Object* $tmp30 = frost$core$Weak$get$R$frost$core$Weak$T($tmp29);
org$frostlanguage$frostc$Type* $tmp31 = org$frostlanguage$frostc$Compiler$findType$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$Type$Q(param1, param2, ((org$frostlanguage$frostc$ClassDecl*) $tmp30));
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlanguage$frostc$Type* $tmp32 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local1) = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($61:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
// unreffing REF($59:frost.core.Weak.T)
// line 40
org$frostlanguage$frostc$Type* $tmp33 = *(&local1);
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit($tmp33 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {40};
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s38, ((frost$core$Object*) param2));
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp37, &$s40);
frost$core$Weak** $tmp41 = &param3->owner;
frost$core$Weak* $tmp42 = *$tmp41;
frost$core$Object* $tmp43 = frost$core$Weak$get$R$frost$core$Weak$T($tmp42);
frost$core$String** $tmp44 = &((org$frostlanguage$frostc$ClassDecl*) $tmp43)->name;
frost$core$String* $tmp45 = *$tmp44;
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp39, $tmp45);
frost$core$String* $tmp47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp46, &$s48);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s49, $tmp36, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($93:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
// unreffing REF($88:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($83:frost.core.String)
abort(); // unreachable
block6:;
// line 41
org$frostlanguage$frostc$Type* $tmp50 = org$frostlanguage$frostc$MethodDecl$get_type$R$org$frostlanguage$frostc$Type(param3);
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
org$frostlanguage$frostc$Type* $tmp51 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local2) = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($112:org.frostlanguage.frostc.Type)
// line 42
org$frostlanguage$frostc$Annotations** $tmp52 = &param3->annotations;
org$frostlanguage$frostc$Annotations* $tmp53 = *$tmp52;
frost$core$Bit $tmp54 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp53);
frost$core$Bit $tmp55 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block10; else goto block11;
block10:;
org$frostlanguage$frostc$MethodDecl$Kind* $tmp57 = &param3->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp58 = *$tmp57;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp59;
$tmp59 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp59->value = $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp61 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp60);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp62;
$tmp62 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp62->value = $tmp61;
ITable* $tmp63 = ((frost$core$Equatable*) $tmp59)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[1];
frost$core$Bit $tmp66 = $tmp64(((frost$core$Equatable*) $tmp59), ((frost$core$Equatable*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp62)));
// unreffing REF($136:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp59)));
// unreffing REF($132:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
*(&local4) = $tmp66;
goto block12;
block11:;
*(&local4) = $tmp55;
goto block12;
block12:;
frost$core$Bit $tmp67 = *(&local4);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block13; else goto block14;
block13:;
frost$core$Bit $tmp69 = org$frostlanguage$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param2);
*(&local3) = $tmp69;
goto block15;
block14:;
*(&local3) = $tmp67;
goto block15;
block15:;
frost$core$Bit $tmp70 = *(&local3);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block8; else goto block16;
block8:;
// line 44
frost$collections$Array* $tmp72 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp72);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$Array* $tmp73 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local5) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($161:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 45
frost$collections$Array* $tmp74 = *(&local5);
org$frostlanguage$frostc$FixedArray** $tmp75 = &param2->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp76 = *$tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {1};
frost$core$Object* $tmp78 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp76, $tmp77);
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp78)));
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
// unreffing REF($182:org.frostlanguage.frostc.FixedArray.T)
// line 46
frost$collections$Array* $tmp79 = *(&local5);
org$frostlanguage$frostc$Type* $tmp80 = *(&local2);
org$frostlanguage$frostc$FixedArray** $tmp81 = &$tmp80->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type* $tmp84 = *(&local2);
org$frostlanguage$frostc$FixedArray** $tmp85 = &$tmp84->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp86 = *$tmp85;
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
frost$core$Range$LTfrost$core$Int64$GT $tmp97 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp83, $tmp95, $tmp96);
ITable* $tmp98 = ((frost$collections$ListView*) $tmp82)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
frost$collections$ListView* $tmp101 = $tmp99(((frost$collections$ListView*) $tmp82), $tmp97);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp79, ((frost$collections$CollectionView*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($212:frost.collections.ListView<frost.collections.ListView.T>)
// line 47
// line 48
org$frostlanguage$frostc$MethodDecl$Kind* $tmp102 = &param3->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp103 = *$tmp102;
frost$core$Int64 $tmp104 = $tmp103.$rawValue;
frost$core$Int64 $tmp105 = (frost$core$Int64) {0};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block18; else goto block19;
block18:;
// line 50
frost$core$Int64 $tmp108 = (frost$core$Int64) {18};
org$frostlanguage$frostc$Type$Kind $tmp109 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp108);
*(&local6) = $tmp109;
goto block17;
block19:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block20; else goto block21;
block20:;
// line 53
frost$core$Int64 $tmp113 = (frost$core$Int64) {17};
org$frostlanguage$frostc$Type$Kind $tmp114 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp113);
*(&local6) = $tmp114;
goto block17;
block21:;
// line 56
frost$core$Bit $tmp115 = frost$core$Bit$init$builtin_bit(false);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {56};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s118, $tmp117);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 59
org$frostlanguage$frostc$Type* $tmp119 = *(&local2);
org$frostlanguage$frostc$Position* $tmp120 = &((org$frostlanguage$frostc$Symbol*) $tmp119)->position;
org$frostlanguage$frostc$Position $tmp121 = *$tmp120;
org$frostlanguage$frostc$Type$Kind $tmp122 = *(&local6);
frost$collections$Array* $tmp123 = *(&local5);
org$frostlanguage$frostc$Type* $tmp124 = *(&local2);
org$frostlanguage$frostc$Type* $tmp125 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp124);
org$frostlanguage$frostc$Type* $tmp126 = *(&local2);
frost$core$Int64* $tmp127 = &$tmp126->priority;
frost$core$Int64 $tmp128 = *$tmp127;
org$frostlanguage$frostc$Type* $tmp129 = org$frostlanguage$frostc$Type$methodType$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$Type$frost$core$Int64$R$org$frostlanguage$frostc$Type($tmp121, $tmp122, ((frost$collections$ListView*) $tmp123), $tmp125, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
org$frostlanguage$frostc$Type* $tmp130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local2) = $tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing REF($264:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($260:org.frostlanguage.frostc.Type)
frost$collections$Array* $tmp131 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing parameterTypes
*(&local5) = ((frost$collections$Array*) NULL);
goto block9;
block16:;
// line 62
frost$core$Bit $tmp132 = org$frostlanguage$frostc$Compiler$isImmutable$org$frostlanguage$frostc$Type$R$frost$core$Bit(param1, param2);
frost$core$Bit $tmp133 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block26; else goto block27;
block26:;
org$frostlanguage$frostc$MethodDecl$Kind* $tmp135 = &param3->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp136 = *$tmp135;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp137;
$tmp137 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp137->value = $tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp139 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp138);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp140;
$tmp140 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp140->value = $tmp139;
ITable* $tmp141 = ((frost$core$Equatable*) $tmp137)->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[1];
frost$core$Bit $tmp144 = $tmp142(((frost$core$Equatable*) $tmp137), ((frost$core$Equatable*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp140)));
// unreffing REF($294:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp137)));
// unreffing REF($290:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
*(&local7) = $tmp144;
goto block28;
block27:;
*(&local7) = $tmp133;
goto block28;
block28:;
frost$core$Bit $tmp145 = *(&local7);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block24; else goto block25;
block24:;
// line 63
// line 64
org$frostlanguage$frostc$MethodDecl$Kind* $tmp147 = &param3->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp148 = *$tmp147;
frost$core$Int64 $tmp149 = $tmp148.$rawValue;
frost$core$Int64 $tmp150 = (frost$core$Int64) {0};
frost$core$Bit $tmp151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp149, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block30; else goto block31;
block30:;
// line 66
frost$core$Int64 $tmp153 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Type$Kind $tmp154 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp153);
*(&local8) = $tmp154;
goto block29;
block31:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {1};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp149, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block32; else goto block33;
block32:;
// line 69
frost$core$Int64 $tmp158 = (frost$core$Int64) {15};
org$frostlanguage$frostc$Type$Kind $tmp159 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp158);
*(&local8) = $tmp159;
goto block29;
block33:;
// line 72
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(false);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s163, $tmp162);
abort(); // unreachable
block34:;
goto block29;
block29:;
// line 75
org$frostlanguage$frostc$Type* $tmp164 = *(&local2);
org$frostlanguage$frostc$Position* $tmp165 = &((org$frostlanguage$frostc$Symbol*) $tmp164)->position;
org$frostlanguage$frostc$Position $tmp166 = *$tmp165;
org$frostlanguage$frostc$Type$Kind $tmp167 = *(&local8);
org$frostlanguage$frostc$Type* $tmp168 = *(&local2);
org$frostlanguage$frostc$FixedArray** $tmp169 = &$tmp168->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp170 = *$tmp169;
frost$core$Int64 $tmp171 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Type* $tmp172 = *(&local2);
org$frostlanguage$frostc$FixedArray** $tmp173 = &$tmp172->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp174 = *$tmp173;
ITable* $tmp175 = ((frost$collections$CollectionView*) $tmp174)->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
frost$core$Int64 $tmp178 = $tmp176(((frost$collections$CollectionView*) $tmp174));
frost$core$Int64 $tmp179 = (frost$core$Int64) {1};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {$tmp182};
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp185 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp171, $tmp183, $tmp184);
ITable* $tmp186 = ((frost$collections$ListView*) $tmp170)->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[1];
frost$collections$ListView* $tmp189 = $tmp187(((frost$collections$ListView*) $tmp170), $tmp185);
org$frostlanguage$frostc$Type* $tmp190 = *(&local2);
org$frostlanguage$frostc$Type* $tmp191 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp190);
org$frostlanguage$frostc$Type* $tmp192 = *(&local2);
frost$core$Int64* $tmp193 = &$tmp192->priority;
frost$core$Int64 $tmp194 = *$tmp193;
org$frostlanguage$frostc$Type* $tmp195 = org$frostlanguage$frostc$Type$methodType$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$Type$frost$core$Int64$R$org$frostlanguage$frostc$Type($tmp166, $tmp167, $tmp189, $tmp191, $tmp194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
org$frostlanguage$frostc$Type* $tmp196 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local2) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($374:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($370:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($367:frost.collections.ListView<frost.collections.ListView.T>)
goto block25;
block25:;
goto block9;
block9:;
// line 79
org$frostlanguage$frostc$Type* $tmp197 = *(&local1);
org$frostlanguage$frostc$Type* $tmp198 = *(&local2);
org$frostlanguage$frostc$Type* $tmp199 = org$frostlanguage$frostc$Compiler$remapType$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(param1, $tmp197, $tmp198);
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
org$frostlanguage$frostc$Type* $tmp200 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local9) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($396:org.frostlanguage.frostc.Type)
// line 80
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block36; else goto block38;
block36:;
// line 81
frost$core$Weak** $tmp203 = &param3->owner;
frost$core$Weak* $tmp204 = *$tmp203;
frost$core$Object* $tmp205 = frost$core$Weak$get$R$frost$core$Weak$T($tmp204);
frost$core$String** $tmp206 = &((org$frostlanguage$frostc$ClassDecl*) $tmp205)->name;
frost$core$String* $tmp207 = *$tmp206;
frost$core$String* $tmp208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp207, &$s209);
frost$core$String** $tmp210 = &((org$frostlanguage$frostc$Symbol*) param3)->name;
frost$core$String* $tmp211 = *$tmp210;
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp208, $tmp211);
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp212, &$s214);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$String* $tmp215 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local10) = $tmp213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing REF($425:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($424:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($420:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
// unreffing REF($416:frost.core.Weak.T)
// line 82
frost$collections$HashMap* $tmp216 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp216);
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$collections$HashMap* $tmp217 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local11) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($446:frost.collections.HashMap<frost.core.String, org.frostlanguage.frostc.Type>)
// line 83
frost$core$Int64 $tmp218 = (frost$core$Int64) {0};
ITable* $tmp219 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
frost$core$Int64 $tmp222 = $tmp220(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp224 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp218, $tmp222, $tmp223);
frost$core$Int64 $tmp225 = $tmp224.min;
*(&local12) = $tmp225;
frost$core$Int64 $tmp226 = $tmp224.max;
frost$core$Bit $tmp227 = $tmp224.inclusive;
bool $tmp228 = $tmp227.value;
frost$core$Int64 $tmp229 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp230 = frost$core$Int64$convert$R$frost$core$UInt64($tmp229);
if ($tmp228) goto block42; else goto block43;
block42:;
int64_t $tmp231 = $tmp225.value;
int64_t $tmp232 = $tmp226.value;
bool $tmp233 = $tmp231 <= $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block39; else goto block40;
block43:;
int64_t $tmp236 = $tmp225.value;
int64_t $tmp237 = $tmp226.value;
bool $tmp238 = $tmp236 < $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block39; else goto block40;
block39:;
// line 84
frost$collections$HashMap* $tmp241 = *(&local11);
frost$core$String* $tmp242 = *(&local10);
frost$collections$Array** $tmp243 = &param3->genericParameters;
frost$collections$Array* $tmp244 = *$tmp243;
frost$core$Int64 $tmp245 = *(&local12);
frost$core$Object* $tmp246 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp244, $tmp245);
frost$core$String** $tmp247 = &((org$frostlanguage$frostc$Symbol*) ((org$frostlanguage$frostc$MethodDecl$GenericParameter*) $tmp246))->name;
frost$core$String* $tmp248 = *$tmp247;
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, $tmp248);
frost$core$Int64 $tmp250 = *(&local12);
ITable* $tmp251 = param4->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Object* $tmp254 = $tmp252(param4, $tmp250);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp241, ((frost$collections$Key*) $tmp249), ((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
// unreffing REF($506:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($500:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp246);
// unreffing REF($495:frost.collections.Array.T)
goto block41;
block41:;
frost$core$Int64 $tmp255 = *(&local12);
int64_t $tmp256 = $tmp226.value;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256 - $tmp257;
frost$core$Int64 $tmp259 = (frost$core$Int64) {$tmp258};
frost$core$UInt64 $tmp260 = frost$core$Int64$convert$R$frost$core$UInt64($tmp259);
if ($tmp228) goto block45; else goto block46;
block45:;
uint64_t $tmp261 = $tmp260.value;
uint64_t $tmp262 = $tmp230.value;
bool $tmp263 = $tmp261 >= $tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block44; else goto block40;
block46:;
uint64_t $tmp266 = $tmp260.value;
uint64_t $tmp267 = $tmp230.value;
bool $tmp268 = $tmp266 > $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block44; else goto block40;
block44:;
int64_t $tmp271 = $tmp255.value;
int64_t $tmp272 = $tmp229.value;
int64_t $tmp273 = $tmp271 + $tmp272;
frost$core$Int64 $tmp274 = (frost$core$Int64) {$tmp273};
*(&local12) = $tmp274;
goto block39;
block40:;
// line 86
org$frostlanguage$frostc$Type* $tmp275 = *(&local9);
frost$collections$HashMap* $tmp276 = *(&local11);
org$frostlanguage$frostc$Type* $tmp277 = org$frostlanguage$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlanguage$frostc$Type$GT$R$org$frostlanguage$frostc$Type($tmp275, $tmp276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlanguage$frostc$Type** $tmp278 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp279 = *$tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
org$frostlanguage$frostc$Type** $tmp280 = &param0->effectiveType;
*$tmp280 = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($548:org.frostlanguage.frostc.Type)
frost$collections$HashMap* $tmp281 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing map
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp282 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing prefix
*(&local10) = ((frost$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 89
org$frostlanguage$frostc$Type* $tmp283 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlanguage$frostc$Type** $tmp284 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp285 = *$tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlanguage$frostc$Type** $tmp286 = &param0->effectiveType;
*$tmp286 = $tmp283;
goto block37;
block37:;
org$frostlanguage$frostc$Type* $tmp287 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing effectiveType
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp288 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing methodType
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing found
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlanguage$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlanguage$frostc$MethodRef* param0) {

// line 94
org$frostlanguage$frostc$Type** $tmp290 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp291 = *$tmp290;
frost$core$Int64 $tmp292 = org$frostlanguage$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp291);
return $tmp292;

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodRef* param0, frost$core$Int64 param1) {

// line 98
org$frostlanguage$frostc$Type** $tmp293 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp294 = *$tmp293;
org$frostlanguage$frostc$FixedArray** $tmp295 = &$tmp294->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp296 = *$tmp295;
frost$core$Object* $tmp297 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp296, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp297)));
frost$core$Frost$unref$frost$core$Object$Q($tmp297);
// unreffing REF($7:org.frostlanguage.frostc.FixedArray.T)
return ((org$frostlanguage$frostc$Type*) $tmp297);

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$MethodRef$get_returnType$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodRef* param0) {

// line 102
org$frostlanguage$frostc$Type** $tmp298 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp299 = *$tmp298;
org$frostlanguage$frostc$Type* $tmp300 = org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type($tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($3:org.frostlanguage.frostc.Type)
return $tmp300;

}
frost$core$String* org$frostlanguage$frostc$MethodRef$convert$R$frost$core$String(org$frostlanguage$frostc$MethodRef* param0) {

// line 107
org$frostlanguage$frostc$MethodDecl** $tmp301 = &param0->value;
org$frostlanguage$frostc$MethodDecl* $tmp302 = *$tmp301;
frost$core$String* $tmp303 = org$frostlanguage$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp302);
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s305, $tmp303);
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp304, &$s307);
org$frostlanguage$frostc$Type** $tmp308 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp309 = *$tmp308;
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp306, ((frost$core$Object*) $tmp309));
frost$core$String* $tmp311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp310, &$s312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($3:frost.core.String)
return $tmp311;

}
void org$frostlanguage$frostc$MethodRef$cleanup(org$frostlanguage$frostc$MethodRef* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Type** $tmp313 = &param0->target;
org$frostlanguage$frostc$Type* $tmp314 = *$tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
org$frostlanguage$frostc$MethodDecl** $tmp315 = &param0->value;
org$frostlanguage$frostc$MethodDecl* $tmp316 = *$tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
org$frostlanguage$frostc$Type** $tmp317 = &param0->effectiveType;
org$frostlanguage$frostc$Type* $tmp318 = *$tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
return;

}

