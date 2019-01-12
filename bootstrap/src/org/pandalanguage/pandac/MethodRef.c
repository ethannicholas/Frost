#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Equatable.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/GenericParameter.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn65)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn89)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn100)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Bit (*$fn143)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn177)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn188)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn221)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn253)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 28
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param1, param2, param3, ((panda$collections$ListView*) NULL));
return;

}
void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3, panda$collections$ListView* param4) {

panda$core$Bit local0;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
panda$core$Bit local4;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$Type$Kind local6;
panda$core$Bit local7;
org$pandalanguage$pandac$Type$Kind local8;
org$pandalanguage$pandac$Type* local9 = NULL;
panda$core$String* local10 = NULL;
panda$collections$HashMap* local11 = NULL;
panda$core$Int64 local12;
// line 35
org$pandalanguage$pandac$Compiler$Resolution* $tmp2 = &param3->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp3 = *$tmp2;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp6 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp5);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((panda$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) $tmp4), ((panda$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s14, $tmp13);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 36
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block4;
block3:;
panda$collections$Array** $tmp17 = &param3->genericParameters;
panda$collections$Array* $tmp18 = *$tmp17;
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit($tmp18 != NULL);
*(&local0) = $tmp19;
goto block5;
block4:;
*(&local0) = $tmp15;
goto block5;
block5:;
panda$core$Bit $tmp20 = *(&local0);
panda$core$Bit* $tmp21 = &param0->requiresTypeInference;
*$tmp21 = $tmp20;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp22 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
org$pandalanguage$pandac$MethodDecl** $tmp24 = &param0->value;
*$tmp24 = param3;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp25 = &param0->target;
org$pandalanguage$pandac$Type* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Type** $tmp27 = &param0->target;
*$tmp27 = param2;
// line 39
panda$core$Weak** $tmp28 = &param3->owner;
panda$core$Weak* $tmp29 = *$tmp28;
panda$core$Object* $tmp30 = panda$core$Weak$get$R$panda$core$Weak$T($tmp29);
org$pandalanguage$pandac$Type* $tmp31 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param1, param2, ((org$pandalanguage$pandac$ClassDecl*) $tmp30));
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
org$pandalanguage$pandac$Type* $tmp32 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
*(&local1) = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($61:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp30);
// unreffing REF($59:panda.core.Weak.T)
// line 40
org$pandalanguage$pandac$Type* $tmp33 = *(&local1);
panda$core$Bit $tmp34 = panda$core$Bit$init$builtin_bit($tmp33 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {40};
panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s38, ((panda$core$Object*) param2));
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s40);
panda$core$Weak** $tmp41 = &param3->owner;
panda$core$Weak* $tmp42 = *$tmp41;
panda$core$Object* $tmp43 = panda$core$Weak$get$R$panda$core$Weak$T($tmp42);
panda$core$String** $tmp44 = &((org$pandalanguage$pandac$ClassDecl*) $tmp43)->name;
panda$core$String* $tmp45 = *$tmp44;
panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, $tmp45);
panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s48);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s49, $tmp36, $tmp47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp43);
// unreffing REF($88:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($83:panda.core.String)
abort(); // unreachable
block6:;
// line 41
org$pandalanguage$pandac$Type* $tmp50 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(param3);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
org$pandalanguage$pandac$Type* $tmp51 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
*(&local2) = $tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($112:org.pandalanguage.pandac.Type)
// line 42
org$pandalanguage$pandac$Annotations** $tmp52 = &param3->annotations;
org$pandalanguage$pandac$Annotations* $tmp53 = *$tmp52;
panda$core$Bit $tmp54 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp53);
panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp57 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp58 = *$tmp57;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp59;
$tmp59 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp59->value = $tmp58;
panda$core$Int64 $tmp60 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp61 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp60);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp62;
$tmp62 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp62->value = $tmp61;
ITable* $tmp63 = ((panda$core$Equatable*) $tmp59)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[1];
panda$core$Bit $tmp66 = $tmp64(((panda$core$Equatable*) $tmp59), ((panda$core$Equatable*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp62)));
// unreffing REF($136:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp59)));
// unreffing REF($132:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local4) = $tmp66;
goto block12;
block11:;
*(&local4) = $tmp55;
goto block12;
block12:;
panda$core$Bit $tmp67 = *(&local4);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block13; else goto block14;
block13:;
panda$core$Bit $tmp69 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param2);
*(&local3) = $tmp69;
goto block15;
block14:;
*(&local3) = $tmp67;
goto block15;
block15:;
panda$core$Bit $tmp70 = *(&local3);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block8; else goto block16;
block8:;
// line 44
panda$collections$Array* $tmp72 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp72);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$collections$Array* $tmp73 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local5) = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($161:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 45
panda$collections$Array* $tmp74 = *(&local5);
org$pandalanguage$pandac$FixedArray** $tmp75 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp76 = *$tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {1};
panda$core$Object* $tmp78 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp76, $tmp77);
panda$collections$Array$add$panda$collections$Array$T($tmp74, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp78)));
panda$core$Panda$unref$panda$core$Object$Q($tmp78);
// unreffing REF($182:org.pandalanguage.pandac.FixedArray.T)
// line 46
panda$collections$Array* $tmp79 = *(&local5);
org$pandalanguage$pandac$Type* $tmp80 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp81 = &$tmp80->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp82 = *$tmp81;
panda$core$Int64 $tmp83 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp84 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp85 = &$tmp84->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp86 = *$tmp85;
ITable* $tmp87 = ((panda$collections$CollectionView*) $tmp86)->$class->itable;
while ($tmp87->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
panda$core$Int64 $tmp90 = $tmp88(((panda$collections$CollectionView*) $tmp86));
panda$core$Int64 $tmp91 = (panda$core$Int64) {1};
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92 - $tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {$tmp94};
panda$core$Bit $tmp96 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp97 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp83, $tmp95, $tmp96);
ITable* $tmp98 = ((panda$collections$ListView*) $tmp82)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$collections$ListView* $tmp101 = $tmp99(((panda$collections$ListView*) $tmp82), $tmp97);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp79, ((panda$collections$CollectionView*) $tmp101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($212:panda.collections.ListView<panda.collections.ListView.T>)
// line 47
// line 48
org$pandalanguage$pandac$MethodDecl$Kind* $tmp102 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp103 = *$tmp102;
panda$core$Int64 $tmp104 = $tmp103.$rawValue;
panda$core$Int64 $tmp105 = (panda$core$Int64) {0};
panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block18; else goto block19;
block18:;
// line 50
panda$core$Int64 $tmp108 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp109 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp108);
*(&local6) = $tmp109;
goto block17;
block19:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {1};
panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block20; else goto block21;
block20:;
// line 53
panda$core$Int64 $tmp113 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp114 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp113);
*(&local6) = $tmp114;
goto block17;
block21:;
// line 56
panda$core$Bit $tmp115 = panda$core$Bit$init$builtin_bit(false);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp117 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s118, $tmp117);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 59
org$pandalanguage$pandac$Type* $tmp119 = *(&local2);
org$pandalanguage$pandac$Position* $tmp120 = &((org$pandalanguage$pandac$Symbol*) $tmp119)->position;
org$pandalanguage$pandac$Position $tmp121 = *$tmp120;
org$pandalanguage$pandac$Type$Kind $tmp122 = *(&local6);
panda$collections$Array* $tmp123 = *(&local5);
org$pandalanguage$pandac$Type* $tmp124 = *(&local2);
org$pandalanguage$pandac$Type* $tmp125 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp124);
org$pandalanguage$pandac$Type* $tmp126 = *(&local2);
panda$core$Int64* $tmp127 = &$tmp126->priority;
panda$core$Int64 $tmp128 = *$tmp127;
org$pandalanguage$pandac$Type* $tmp129 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp121, $tmp122, ((panda$collections$ListView*) $tmp123), $tmp125, $tmp128);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
org$pandalanguage$pandac$Type* $tmp130 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
*(&local2) = $tmp129;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing REF($264:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($260:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp131 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing parameterTypes
*(&local5) = ((panda$collections$Array*) NULL);
goto block9;
block16:;
// line 62
panda$core$Bit $tmp132 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, param2);
panda$core$Bit $tmp133 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp135 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp136 = *$tmp135;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp137;
$tmp137 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp137->value = $tmp136;
panda$core$Int64 $tmp138 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp139 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp138);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp140;
$tmp140 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp140->value = $tmp139;
ITable* $tmp141 = ((panda$core$Equatable*) $tmp137)->$class->itable;
while ($tmp141->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[1];
panda$core$Bit $tmp144 = $tmp142(((panda$core$Equatable*) $tmp137), ((panda$core$Equatable*) $tmp140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp140)));
// unreffing REF($294:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp137)));
// unreffing REF($290:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local7) = $tmp144;
goto block28;
block27:;
*(&local7) = $tmp133;
goto block28;
block28:;
panda$core$Bit $tmp145 = *(&local7);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block24; else goto block25;
block24:;
// line 63
// line 64
org$pandalanguage$pandac$MethodDecl$Kind* $tmp147 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp148 = *$tmp147;
panda$core$Int64 $tmp149 = $tmp148.$rawValue;
panda$core$Int64 $tmp150 = (panda$core$Int64) {0};
panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block30; else goto block31;
block30:;
// line 66
panda$core$Int64 $tmp153 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp154 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp153);
*(&local8) = $tmp154;
goto block29;
block31:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {1};
panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block32; else goto block33;
block32:;
// line 69
panda$core$Int64 $tmp158 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp159 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp158);
*(&local8) = $tmp159;
goto block29;
block33:;
// line 72
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit(false);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp162 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s163, $tmp162);
abort(); // unreachable
block34:;
goto block29;
block29:;
// line 75
org$pandalanguage$pandac$Type* $tmp164 = *(&local2);
org$pandalanguage$pandac$Position* $tmp165 = &((org$pandalanguage$pandac$Symbol*) $tmp164)->position;
org$pandalanguage$pandac$Position $tmp166 = *$tmp165;
org$pandalanguage$pandac$Type$Kind $tmp167 = *(&local8);
org$pandalanguage$pandac$Type* $tmp168 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp169 = &$tmp168->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp170 = *$tmp169;
panda$core$Int64 $tmp171 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp172 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp173 = &$tmp172->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp174 = *$tmp173;
ITable* $tmp175 = ((panda$collections$CollectionView*) $tmp174)->$class->itable;
while ($tmp175->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
panda$core$Int64 $tmp178 = $tmp176(((panda$collections$CollectionView*) $tmp174));
panda$core$Int64 $tmp179 = (panda$core$Int64) {1};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
panda$core$Int64 $tmp183 = (panda$core$Int64) {$tmp182};
panda$core$Bit $tmp184 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp185 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp171, $tmp183, $tmp184);
ITable* $tmp186 = ((panda$collections$ListView*) $tmp170)->$class->itable;
while ($tmp186->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[1];
panda$collections$ListView* $tmp189 = $tmp187(((panda$collections$ListView*) $tmp170), $tmp185);
org$pandalanguage$pandac$Type* $tmp190 = *(&local2);
org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp190);
org$pandalanguage$pandac$Type* $tmp192 = *(&local2);
panda$core$Int64* $tmp193 = &$tmp192->priority;
panda$core$Int64 $tmp194 = *$tmp193;
org$pandalanguage$pandac$Type* $tmp195 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp166, $tmp167, $tmp189, $tmp191, $tmp194);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
org$pandalanguage$pandac$Type* $tmp196 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
*(&local2) = $tmp195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($374:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($370:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($367:panda.collections.ListView<panda.collections.ListView.T>)
goto block25;
block25:;
goto block9;
block9:;
// line 79
org$pandalanguage$pandac$Type* $tmp197 = *(&local1);
org$pandalanguage$pandac$Type* $tmp198 = *(&local2);
org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp197, $tmp198);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
org$pandalanguage$pandac$Type* $tmp200 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
*(&local9) = $tmp199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing REF($396:org.pandalanguage.pandac.Type)
// line 80
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block36; else goto block38;
block36:;
// line 81
panda$core$Weak** $tmp203 = &param3->owner;
panda$core$Weak* $tmp204 = *$tmp203;
panda$core$Object* $tmp205 = panda$core$Weak$get$R$panda$core$Weak$T($tmp204);
panda$core$String** $tmp206 = &((org$pandalanguage$pandac$ClassDecl*) $tmp205)->name;
panda$core$String* $tmp207 = *$tmp206;
panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s209);
panda$core$String** $tmp210 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp211 = *$tmp210;
panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, $tmp211);
panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s214);
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$String* $tmp215 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
*(&local10) = $tmp213;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($425:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($424:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing REF($420:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp205);
// unreffing REF($416:panda.core.Weak.T)
// line 82
panda$collections$HashMap* $tmp216 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp216);
*(&local11) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
panda$collections$HashMap* $tmp217 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
*(&local11) = $tmp216;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing REF($446:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Type>)
// line 83
panda$core$Int64 $tmp218 = (panda$core$Int64) {0};
ITable* $tmp219 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp219->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
panda$core$Int64 $tmp222 = $tmp220(((panda$collections$CollectionView*) param4));
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp224 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp218, $tmp222, $tmp223);
panda$core$Int64 $tmp225 = $tmp224.min;
*(&local12) = $tmp225;
panda$core$Int64 $tmp226 = $tmp224.max;
panda$core$Bit $tmp227 = $tmp224.inclusive;
bool $tmp228 = $tmp227.value;
panda$core$Int64 $tmp229 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp230 = panda$core$Int64$convert$R$panda$core$UInt64($tmp229);
if ($tmp228) goto block42; else goto block43;
block42:;
int64_t $tmp231 = $tmp225.value;
int64_t $tmp232 = $tmp226.value;
bool $tmp233 = $tmp231 <= $tmp232;
panda$core$Bit $tmp234 = (panda$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block39; else goto block40;
block43:;
int64_t $tmp236 = $tmp225.value;
int64_t $tmp237 = $tmp226.value;
bool $tmp238 = $tmp236 < $tmp237;
panda$core$Bit $tmp239 = (panda$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block39; else goto block40;
block39:;
// line 84
panda$collections$HashMap* $tmp241 = *(&local11);
panda$core$String* $tmp242 = *(&local10);
panda$collections$Array** $tmp243 = &param3->genericParameters;
panda$collections$Array* $tmp244 = *$tmp243;
panda$core$Int64 $tmp245 = *(&local12);
panda$core$Object* $tmp246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp244, $tmp245);
panda$core$String** $tmp247 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp246))->name;
panda$core$String* $tmp248 = *$tmp247;
panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, $tmp248);
panda$core$Int64 $tmp250 = *(&local12);
ITable* $tmp251 = param4->$class->itable;
while ($tmp251->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
panda$core$Object* $tmp254 = $tmp252(param4, $tmp250);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp241, ((panda$collections$Key*) $tmp249), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp254)));
panda$core$Panda$unref$panda$core$Object$Q($tmp254);
// unreffing REF($506:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
// unreffing REF($500:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp246);
// unreffing REF($495:panda.collections.Array.T)
goto block41;
block41:;
panda$core$Int64 $tmp255 = *(&local12);
int64_t $tmp256 = $tmp226.value;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256 - $tmp257;
panda$core$Int64 $tmp259 = (panda$core$Int64) {$tmp258};
panda$core$UInt64 $tmp260 = panda$core$Int64$convert$R$panda$core$UInt64($tmp259);
if ($tmp228) goto block45; else goto block46;
block45:;
uint64_t $tmp261 = $tmp260.value;
uint64_t $tmp262 = $tmp230.value;
bool $tmp263 = $tmp261 >= $tmp262;
panda$core$Bit $tmp264 = (panda$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block44; else goto block40;
block46:;
uint64_t $tmp266 = $tmp260.value;
uint64_t $tmp267 = $tmp230.value;
bool $tmp268 = $tmp266 > $tmp267;
panda$core$Bit $tmp269 = (panda$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block44; else goto block40;
block44:;
int64_t $tmp271 = $tmp255.value;
int64_t $tmp272 = $tmp229.value;
int64_t $tmp273 = $tmp271 + $tmp272;
panda$core$Int64 $tmp274 = (panda$core$Int64) {$tmp273};
*(&local12) = $tmp274;
goto block39;
block40:;
// line 86
org$pandalanguage$pandac$Type* $tmp275 = *(&local9);
panda$collections$HashMap* $tmp276 = *(&local11);
org$pandalanguage$pandac$Type* $tmp277 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp275, $tmp276);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
org$pandalanguage$pandac$Type** $tmp278 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp279 = *$tmp278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
org$pandalanguage$pandac$Type** $tmp280 = &param0->effectiveType;
*$tmp280 = $tmp277;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($548:org.pandalanguage.pandac.Type)
panda$collections$HashMap* $tmp281 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing map
*(&local11) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp282 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing prefix
*(&local10) = ((panda$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 89
org$pandalanguage$pandac$Type* $tmp283 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
org$pandalanguage$pandac$Type** $tmp284 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp285 = *$tmp284;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
org$pandalanguage$pandac$Type** $tmp286 = &param0->effectiveType;
*$tmp286 = $tmp283;
goto block37;
block37:;
org$pandalanguage$pandac$Type* $tmp287 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing effectiveType
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp288 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing methodType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp289 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing found
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* param0) {

// line 94
org$pandalanguage$pandac$Type** $tmp290 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp291 = *$tmp290;
panda$core$Int64 $tmp292 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp291);
return $tmp292;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0, panda$core$Int64 param1) {

// line 98
org$pandalanguage$pandac$Type** $tmp293 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp294 = *$tmp293;
org$pandalanguage$pandac$FixedArray** $tmp295 = &$tmp294->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp296 = *$tmp295;
panda$core$Object* $tmp297 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp296, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp297)));
panda$core$Panda$unref$panda$core$Object$Q($tmp297);
// unreffing REF($7:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp297);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0) {

// line 102
org$pandalanguage$pandac$Type** $tmp298 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp299 = *$tmp298;
org$pandalanguage$pandac$Type* $tmp300 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp299);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing REF($3:org.pandalanguage.pandac.Type)
return $tmp300;

}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* param0) {

// line 107
org$pandalanguage$pandac$MethodDecl** $tmp301 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp302 = *$tmp301;
panda$core$String* $tmp303 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp302);
panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s305, $tmp303);
panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s307);
org$pandalanguage$pandac$Type** $tmp308 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp309 = *$tmp308;
panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp306, ((panda$core$Object*) $tmp309));
panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp310, &$s312);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($3:panda.core.String)
return $tmp311;

}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type** $tmp313 = &param0->target;
org$pandalanguage$pandac$Type* $tmp314 = *$tmp313;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
org$pandalanguage$pandac$MethodDecl** $tmp315 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp316 = *$tmp315;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
org$pandalanguage$pandac$Type** $tmp317 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp318 = *$tmp317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
return;

}

