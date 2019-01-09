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
#include "panda/collections/CollectionView.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Equatable.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Int64 (*$fn12)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn18)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn35)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn83)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn107)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn118)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Bit (*$fn161)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn195)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn206)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn239)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn271)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x69\x6e\x69\x74\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x41\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x29", 266, -1841773625017839663, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 26
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param1, param2, param3, ((panda$collections$ListView*) NULL));
return;

}
void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3, panda$collections$ListView* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$collections$Array* local6 = NULL;
org$pandalanguage$pandac$Type$Kind local7;
panda$core$Bit local8;
org$pandalanguage$pandac$Type$Kind local9;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$core$String* local11 = NULL;
panda$collections$HashMap* local12 = NULL;
panda$core$Int64 local13;
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(param4 == NULL);
panda$collections$Array** $tmp3 = &param3->genericParameters;
panda$collections$Array* $tmp4 = *$tmp3;
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit($tmp4 == NULL);
panda$core$Bit $tmp6 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp2, $tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block5;
block4:;
*(&local1) = $tmp8;
goto block6;
block5:;
ITable* $tmp10 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp10->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
panda$core$Int64 $tmp13 = $tmp11(((panda$collections$CollectionView*) param4));
panda$collections$Array** $tmp14 = &param3->genericParameters;
panda$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((panda$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
panda$core$Int64 $tmp19 = $tmp17(((panda$collections$CollectionView*) $tmp15));
panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp13, $tmp19);
*(&local1) = $tmp20;
goto block6;
block6:;
panda$core$Bit $tmp21 = *(&local1);
*(&local0) = $tmp21;
goto block3;
block2:;
*(&local0) = $tmp6;
goto block3;
block3:;
panda$core$Bit $tmp22 = *(&local0);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {34};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block7:;
// line 35
org$pandalanguage$pandac$Compiler$Resolution* $tmp27 = &param3->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp28 = *$tmp27;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp29;
$tmp29 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp29->value = $tmp28;
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp31 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp30);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp32;
$tmp32 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp32->value = $tmp31;
ITable* $tmp33 = ((panda$core$Equatable*) $tmp29)->$class->itable;
while ($tmp33->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[1];
panda$core$Bit $tmp36 = $tmp34(((panda$core$Equatable*) $tmp29), ((panda$core$Equatable*) $tmp32));
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block9:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp32)));
// unreffing REF($44:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp29)));
// unreffing REF($40:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 36
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp40 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
org$pandalanguage$pandac$MethodDecl** $tmp42 = &param0->value;
*$tmp42 = param3;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp43 = &param0->target;
org$pandalanguage$pandac$Type* $tmp44 = *$tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
org$pandalanguage$pandac$Type** $tmp45 = &param0->target;
*$tmp45 = param2;
// line 38
panda$core$Weak** $tmp46 = &param3->owner;
panda$core$Weak* $tmp47 = *$tmp46;
panda$core$Object* $tmp48 = panda$core$Weak$get$R$panda$core$Weak$T($tmp47);
org$pandalanguage$pandac$Type* $tmp49 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param1, param2, ((org$pandalanguage$pandac$ClassDecl*) $tmp48));
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
org$pandalanguage$pandac$Type* $tmp50 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
*(&local2) = $tmp49;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($82:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
// unreffing REF($80:panda.core.Weak.T)
// line 39
org$pandalanguage$pandac$Type* $tmp51 = *(&local2);
panda$core$Bit $tmp52 = panda$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {39};
panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s56, ((panda$core$Object*) param2));
panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s58);
panda$core$Weak** $tmp59 = &param3->owner;
panda$core$Weak* $tmp60 = *$tmp59;
panda$core$Object* $tmp61 = panda$core$Weak$get$R$panda$core$Weak$T($tmp60);
panda$core$String** $tmp62 = &((org$pandalanguage$pandac$ClassDecl*) $tmp61)->name;
panda$core$String* $tmp63 = *$tmp62;
panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, $tmp63);
panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s66);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s67, $tmp54, $tmp65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp61);
// unreffing REF($109:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($105:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($104:panda.core.String)
abort(); // unreachable
block11:;
// line 40
org$pandalanguage$pandac$Type* $tmp68 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(param3);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
org$pandalanguage$pandac$Type* $tmp69 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
*(&local3) = $tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($133:org.pandalanguage.pandac.Type)
// line 41
org$pandalanguage$pandac$Annotations** $tmp70 = &param3->annotations;
org$pandalanguage$pandac$Annotations* $tmp71 = *$tmp70;
panda$core$Bit $tmp72 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp71);
panda$core$Bit $tmp73 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp75 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp76 = *$tmp75;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp77;
$tmp77 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp77->value = $tmp76;
panda$core$Int64 $tmp78 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp79 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp78);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp80;
$tmp80 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp80->value = $tmp79;
ITable* $tmp81 = ((panda$core$Equatable*) $tmp77)->$class->itable;
while ($tmp81->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
panda$core$Bit $tmp84 = $tmp82(((panda$core$Equatable*) $tmp77), ((panda$core$Equatable*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp80)));
// unreffing REF($157:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp77)));
// unreffing REF($153:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local5) = $tmp84;
goto block17;
block16:;
*(&local5) = $tmp73;
goto block17;
block17:;
panda$core$Bit $tmp85 = *(&local5);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block18; else goto block19;
block18:;
panda$core$Bit $tmp87 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param2);
*(&local4) = $tmp87;
goto block20;
block19:;
*(&local4) = $tmp85;
goto block20;
block20:;
panda$core$Bit $tmp88 = *(&local4);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block13; else goto block21;
block13:;
// line 43
panda$collections$Array* $tmp90 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp90);
*(&local6) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$collections$Array* $tmp91 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local6) = $tmp90;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($182:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 44
panda$collections$Array* $tmp92 = *(&local6);
org$pandalanguage$pandac$FixedArray** $tmp93 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp94 = *$tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {1};
panda$core$Object* $tmp96 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp94, $tmp95);
panda$collections$Array$add$panda$collections$Array$T($tmp92, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp96)));
panda$core$Panda$unref$panda$core$Object$Q($tmp96);
// unreffing REF($203:org.pandalanguage.pandac.FixedArray.T)
// line 45
panda$collections$Array* $tmp97 = *(&local6);
org$pandalanguage$pandac$Type* $tmp98 = *(&local3);
org$pandalanguage$pandac$FixedArray** $tmp99 = &$tmp98->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp100 = *$tmp99;
panda$core$Int64 $tmp101 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp102 = *(&local3);
org$pandalanguage$pandac$FixedArray** $tmp103 = &$tmp102->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp104 = *$tmp103;
ITable* $tmp105 = ((panda$collections$CollectionView*) $tmp104)->$class->itable;
while ($tmp105->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
panda$core$Int64 $tmp108 = $tmp106(((panda$collections$CollectionView*) $tmp104));
panda$core$Int64 $tmp109 = (panda$core$Int64) {1};
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110 - $tmp111;
panda$core$Int64 $tmp113 = (panda$core$Int64) {$tmp112};
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp115 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp101, $tmp113, $tmp114);
ITable* $tmp116 = ((panda$collections$ListView*) $tmp100)->$class->itable;
while ($tmp116->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
panda$collections$ListView* $tmp119 = $tmp117(((panda$collections$ListView*) $tmp100), $tmp115);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp97, ((panda$collections$CollectionView*) $tmp119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($233:panda.collections.ListView<panda.collections.ListView.T>)
// line 46
// line 47
org$pandalanguage$pandac$MethodDecl$Kind* $tmp120 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp121 = *$tmp120;
panda$core$Int64 $tmp122 = $tmp121.$rawValue;
panda$core$Int64 $tmp123 = (panda$core$Int64) {0};
panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp122, $tmp123);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block23; else goto block24;
block23:;
// line 49
panda$core$Int64 $tmp126 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp127 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp126);
*(&local7) = $tmp127;
goto block22;
block24:;
panda$core$Int64 $tmp128 = (panda$core$Int64) {1};
panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp122, $tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block25; else goto block26;
block25:;
// line 52
panda$core$Int64 $tmp131 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp132 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp131);
*(&local7) = $tmp132;
goto block22;
block26:;
// line 55
panda$core$Bit $tmp133 = panda$core$Bit$init$builtin_bit(false);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp135 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s136, $tmp135);
abort(); // unreachable
block27:;
goto block22;
block22:;
// line 58
org$pandalanguage$pandac$Type* $tmp137 = *(&local3);
org$pandalanguage$pandac$Position* $tmp138 = &((org$pandalanguage$pandac$Symbol*) $tmp137)->position;
org$pandalanguage$pandac$Position $tmp139 = *$tmp138;
org$pandalanguage$pandac$Type$Kind $tmp140 = *(&local7);
panda$collections$Array* $tmp141 = *(&local6);
org$pandalanguage$pandac$Type* $tmp142 = *(&local3);
org$pandalanguage$pandac$Type* $tmp143 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp142);
org$pandalanguage$pandac$Type* $tmp144 = *(&local3);
panda$core$Int64* $tmp145 = &$tmp144->priority;
panda$core$Int64 $tmp146 = *$tmp145;
org$pandalanguage$pandac$Type* $tmp147 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp139, $tmp140, ((panda$collections$ListView*) $tmp141), $tmp143, $tmp146);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
org$pandalanguage$pandac$Type* $tmp148 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
*(&local3) = $tmp147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($285:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($281:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp149 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing parameterTypes
*(&local6) = ((panda$collections$Array*) NULL);
goto block14;
block21:;
// line 61
panda$core$Bit $tmp150 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, param2);
panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp153 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp154 = *$tmp153;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp155;
$tmp155 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp155->value = $tmp154;
panda$core$Int64 $tmp156 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp157 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp156);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp158;
$tmp158 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp158->value = $tmp157;
ITable* $tmp159 = ((panda$core$Equatable*) $tmp155)->$class->itable;
while ($tmp159->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[1];
panda$core$Bit $tmp162 = $tmp160(((panda$core$Equatable*) $tmp155), ((panda$core$Equatable*) $tmp158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp158)));
// unreffing REF($315:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp155)));
// unreffing REF($311:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local8) = $tmp162;
goto block33;
block32:;
*(&local8) = $tmp151;
goto block33;
block33:;
panda$core$Bit $tmp163 = *(&local8);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block29; else goto block30;
block29:;
// line 62
// line 63
org$pandalanguage$pandac$MethodDecl$Kind* $tmp165 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp166 = *$tmp165;
panda$core$Int64 $tmp167 = $tmp166.$rawValue;
panda$core$Int64 $tmp168 = (panda$core$Int64) {0};
panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block35; else goto block36;
block35:;
// line 65
panda$core$Int64 $tmp171 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp172 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp171);
*(&local9) = $tmp172;
goto block34;
block36:;
panda$core$Int64 $tmp173 = (panda$core$Int64) {1};
panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block37; else goto block38;
block37:;
// line 68
panda$core$Int64 $tmp176 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp177 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp176);
*(&local9) = $tmp177;
goto block34;
block38:;
// line 71
panda$core$Bit $tmp178 = panda$core$Bit$init$builtin_bit(false);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp180 = (panda$core$Int64) {71};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s181, $tmp180);
abort(); // unreachable
block39:;
goto block34;
block34:;
// line 74
org$pandalanguage$pandac$Type* $tmp182 = *(&local3);
org$pandalanguage$pandac$Position* $tmp183 = &((org$pandalanguage$pandac$Symbol*) $tmp182)->position;
org$pandalanguage$pandac$Position $tmp184 = *$tmp183;
org$pandalanguage$pandac$Type$Kind $tmp185 = *(&local9);
org$pandalanguage$pandac$Type* $tmp186 = *(&local3);
org$pandalanguage$pandac$FixedArray** $tmp187 = &$tmp186->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp188 = *$tmp187;
panda$core$Int64 $tmp189 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp190 = *(&local3);
org$pandalanguage$pandac$FixedArray** $tmp191 = &$tmp190->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp192 = *$tmp191;
ITable* $tmp193 = ((panda$collections$CollectionView*) $tmp192)->$class->itable;
while ($tmp193->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
panda$core$Int64 $tmp196 = $tmp194(((panda$collections$CollectionView*) $tmp192));
panda$core$Int64 $tmp197 = (panda$core$Int64) {1};
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198 - $tmp199;
panda$core$Int64 $tmp201 = (panda$core$Int64) {$tmp200};
panda$core$Bit $tmp202 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp203 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp189, $tmp201, $tmp202);
ITable* $tmp204 = ((panda$collections$ListView*) $tmp188)->$class->itable;
while ($tmp204->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[1];
panda$collections$ListView* $tmp207 = $tmp205(((panda$collections$ListView*) $tmp188), $tmp203);
org$pandalanguage$pandac$Type* $tmp208 = *(&local3);
org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp208);
org$pandalanguage$pandac$Type* $tmp210 = *(&local3);
panda$core$Int64* $tmp211 = &$tmp210->priority;
panda$core$Int64 $tmp212 = *$tmp211;
org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp184, $tmp185, $tmp207, $tmp209, $tmp212);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
org$pandalanguage$pandac$Type* $tmp214 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
*(&local3) = $tmp213;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($395:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing REF($391:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing REF($388:panda.collections.ListView<panda.collections.ListView.T>)
goto block30;
block30:;
goto block14;
block14:;
// line 78
org$pandalanguage$pandac$Type* $tmp215 = *(&local2);
org$pandalanguage$pandac$Type* $tmp216 = *(&local3);
org$pandalanguage$pandac$Type* $tmp217 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp215, $tmp216);
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
org$pandalanguage$pandac$Type* $tmp218 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
*(&local10) = $tmp217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($417:org.pandalanguage.pandac.Type)
// line 79
panda$core$Bit $tmp219 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block41; else goto block43;
block41:;
// line 80
panda$core$Weak** $tmp221 = &param3->owner;
panda$core$Weak* $tmp222 = *$tmp221;
panda$core$Object* $tmp223 = panda$core$Weak$get$R$panda$core$Weak$T($tmp222);
panda$core$String** $tmp224 = &((org$pandalanguage$pandac$ClassDecl*) $tmp223)->name;
panda$core$String* $tmp225 = *$tmp224;
panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s227);
panda$core$String** $tmp228 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp229 = *$tmp228;
panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, $tmp229);
panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s232);
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$String* $tmp233 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
*(&local11) = $tmp231;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing REF($446:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing REF($445:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($441:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp223);
// unreffing REF($437:panda.core.Weak.T)
// line 81
panda$collections$HashMap* $tmp234 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp234);
*(&local12) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
panda$collections$HashMap* $tmp235 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
*(&local12) = $tmp234;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($467:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Type>)
// line 82
panda$core$Int64 $tmp236 = (panda$core$Int64) {0};
ITable* $tmp237 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp237->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[0];
panda$core$Int64 $tmp240 = $tmp238(((panda$collections$CollectionView*) param4));
panda$core$Bit $tmp241 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp242 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp236, $tmp240, $tmp241);
panda$core$Int64 $tmp243 = $tmp242.min;
*(&local13) = $tmp243;
panda$core$Int64 $tmp244 = $tmp242.max;
panda$core$Bit $tmp245 = $tmp242.inclusive;
bool $tmp246 = $tmp245.value;
panda$core$Int64 $tmp247 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp248 = panda$core$Int64$convert$R$panda$core$UInt64($tmp247);
if ($tmp246) goto block47; else goto block48;
block47:;
int64_t $tmp249 = $tmp243.value;
int64_t $tmp250 = $tmp244.value;
bool $tmp251 = $tmp249 <= $tmp250;
panda$core$Bit $tmp252 = (panda$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block44; else goto block45;
block48:;
int64_t $tmp254 = $tmp243.value;
int64_t $tmp255 = $tmp244.value;
bool $tmp256 = $tmp254 < $tmp255;
panda$core$Bit $tmp257 = (panda$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block44; else goto block45;
block44:;
// line 83
panda$collections$HashMap* $tmp259 = *(&local12);
panda$core$String* $tmp260 = *(&local11);
panda$collections$Array** $tmp261 = &param3->genericParameters;
panda$collections$Array* $tmp262 = *$tmp261;
panda$core$Int64 $tmp263 = *(&local13);
panda$core$Object* $tmp264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp262, $tmp263);
panda$core$String** $tmp265 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp264))->name;
panda$core$String* $tmp266 = *$tmp265;
panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, $tmp266);
panda$core$Int64 $tmp268 = *(&local13);
ITable* $tmp269 = param4->$class->itable;
while ($tmp269->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
panda$core$Object* $tmp272 = $tmp270(param4, $tmp268);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp259, ((panda$collections$Key*) $tmp267), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp272)));
panda$core$Panda$unref$panda$core$Object$Q($tmp272);
// unreffing REF($527:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($521:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp264);
// unreffing REF($516:panda.collections.Array.T)
goto block46;
block46:;
panda$core$Int64 $tmp273 = *(&local13);
int64_t $tmp274 = $tmp244.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 - $tmp275;
panda$core$Int64 $tmp277 = (panda$core$Int64) {$tmp276};
panda$core$UInt64 $tmp278 = panda$core$Int64$convert$R$panda$core$UInt64($tmp277);
if ($tmp246) goto block50; else goto block51;
block50:;
uint64_t $tmp279 = $tmp278.value;
uint64_t $tmp280 = $tmp248.value;
bool $tmp281 = $tmp279 >= $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block49; else goto block45;
block51:;
uint64_t $tmp284 = $tmp278.value;
uint64_t $tmp285 = $tmp248.value;
bool $tmp286 = $tmp284 > $tmp285;
panda$core$Bit $tmp287 = (panda$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block49; else goto block45;
block49:;
int64_t $tmp289 = $tmp273.value;
int64_t $tmp290 = $tmp247.value;
int64_t $tmp291 = $tmp289 + $tmp290;
panda$core$Int64 $tmp292 = (panda$core$Int64) {$tmp291};
*(&local13) = $tmp292;
goto block44;
block45:;
// line 85
org$pandalanguage$pandac$Type* $tmp293 = *(&local10);
panda$collections$HashMap* $tmp294 = *(&local12);
org$pandalanguage$pandac$Type* $tmp295 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp293, $tmp294);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
org$pandalanguage$pandac$Type** $tmp296 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp297 = *$tmp296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
org$pandalanguage$pandac$Type** $tmp298 = &param0->effectiveType;
*$tmp298 = $tmp295;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($569:org.pandalanguage.pandac.Type)
panda$collections$HashMap* $tmp299 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing map
*(&local12) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp300 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing prefix
*(&local11) = ((panda$core$String*) NULL);
goto block42;
block43:;
// line 1
// line 88
org$pandalanguage$pandac$Type* $tmp301 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
org$pandalanguage$pandac$Type** $tmp302 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp303 = *$tmp302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
org$pandalanguage$pandac$Type** $tmp304 = &param0->effectiveType;
*$tmp304 = $tmp301;
goto block42;
block42:;
org$pandalanguage$pandac$Type* $tmp305 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing effectiveType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp306 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing methodType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp307 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing found
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* param0) {

// line 93
org$pandalanguage$pandac$Type** $tmp308 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp309 = *$tmp308;
panda$core$Int64 $tmp310 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp309);
return $tmp310;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0, panda$core$Int64 param1) {

// line 97
org$pandalanguage$pandac$Type** $tmp311 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp312 = *$tmp311;
org$pandalanguage$pandac$FixedArray** $tmp313 = &$tmp312->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp314 = *$tmp313;
panda$core$Object* $tmp315 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp314, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp315)));
panda$core$Panda$unref$panda$core$Object$Q($tmp315);
// unreffing REF($7:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp315);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0) {

// line 101
org$pandalanguage$pandac$Type** $tmp316 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp317 = *$tmp316;
org$pandalanguage$pandac$Type* $tmp318 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp317);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($3:org.pandalanguage.pandac.Type)
return $tmp318;

}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* param0) {

// line 106
org$pandalanguage$pandac$MethodDecl** $tmp319 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp320 = *$tmp319;
panda$core$String* $tmp321 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp320);
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s323, $tmp321);
panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, &$s325);
org$pandalanguage$pandac$Type** $tmp326 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp327 = *$tmp326;
panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp324, ((panda$core$Object*) $tmp327));
panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp328, &$s330);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($3:panda.core.String)
return $tmp329;

}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type** $tmp331 = &param0->target;
org$pandalanguage$pandac$Type* $tmp332 = *$tmp331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
org$pandalanguage$pandac$MethodDecl** $tmp333 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp334 = *$tmp333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
org$pandalanguage$pandac$Type** $tmp335 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp336 = *$tmp335;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
return;

}

