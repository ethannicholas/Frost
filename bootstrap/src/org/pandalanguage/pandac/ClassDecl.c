#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Stack.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn93)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn97)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn102)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn171)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn232)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn236)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn241)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn267)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn272)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn285)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn294)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 574, -1893327939731735360, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* param0, panda$io$File* param1, org$pandalanguage$pandac$Position param2, panda$collections$MapView* param3, panda$core$String* param4, org$pandalanguage$pandac$Annotations* param5, org$pandalanguage$pandac$ClassDecl$Kind param6, org$pandalanguage$pandac$Type* param7, panda$collections$ListView* param8, panda$collections$Array* param9, org$pandalanguage$pandac$SymbolTable* param10) {

org$pandalanguage$pandac$ClassDecl$GenericParameter* local0 = NULL;
// line 81
org$pandalanguage$pandac$Type** $tmp2 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type** $tmp4 = &param0->rawSuper;
*$tmp4 = ((org$pandalanguage$pandac$Type*) NULL);
// line 86
panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5);
panda$collections$Array** $tmp6 = &param0->rawInterfaces;
panda$collections$Array* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$collections$Array** $tmp8 = &param0->rawInterfaces;
*$tmp8 = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($10:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 90
panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp9);
panda$collections$Array** $tmp10 = &param0->fields;
panda$collections$Array* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$collections$Array** $tmp12 = &param0->fields;
*$tmp12 = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($25:panda.collections.Array<org.pandalanguage.pandac.FieldDecl>)
// line 92
panda$collections$Array* $tmp13 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp13);
panda$collections$Array** $tmp14 = &param0->methods;
panda$collections$Array* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$collections$Array** $tmp16 = &param0->methods;
*$tmp16 = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($40:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 94
panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp17);
panda$collections$Array** $tmp18 = &param0->classes;
panda$collections$Array* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$collections$Array** $tmp20 = &param0->classes;
*$tmp20 = $tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($55:panda.collections.Array<org.pandalanguage.pandac.ClassDecl>)
// line 96
panda$collections$Array* $tmp21 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp21);
panda$collections$Array** $tmp22 = &param0->choiceCases;
panda$collections$Array* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$collections$Array** $tmp24 = &param0->choiceCases;
*$tmp24 = $tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($70:panda.collections.Array<org.pandalanguage.pandac.ChoiceCase>)
// line 99
panda$core$Weak* $tmp25 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp25, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
panda$core$Weak** $tmp26 = &param0->owner;
panda$core$Weak* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Weak** $tmp28 = &param0->owner;
*$tmp28 = $tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($85:panda.core.Weak<org.pandalanguage.pandac.ClassDecl?>)
// line 104
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp30 = &param0->symbolTableResolved;
*$tmp30 = $tmp29;
// line 106
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp32 = &param0->external;
*$tmp32 = $tmp31;
// line 108
panda$collections$Array* $tmp33 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp33);
panda$collections$Array** $tmp34 = &param0->virtualMethods;
panda$collections$Array* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$collections$Array** $tmp36 = &param0->virtualMethods;
*$tmp36 = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($109:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 110
panda$collections$HashMap* $tmp37 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp37);
panda$collections$HashMap** $tmp38 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$collections$HashMap** $tmp40 = &param0->classResolutionCache;
*$tmp40 = $tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($124:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.ClassDecl.Resolution>)
panda$core$Bit $tmp41 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param7);
panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block1:;
// line 118
org$pandalanguage$pandac$Position* $tmp47 = &param0->position;
*$tmp47 = param2;
// line 119
panda$core$String** $tmp48 = &((org$pandalanguage$pandac$Symbol*) param7)->name;
panda$core$String* $tmp49 = *$tmp48;
panda$core$String** $tmp50 = &param0->name;
panda$core$String* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$String** $tmp52 = &param0->name;
*$tmp52 = $tmp49;
// line 120
org$pandalanguage$pandac$Type** $tmp53 = &param0->type;
org$pandalanguage$pandac$Type* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$Type** $tmp55 = &param0->type;
*$tmp55 = param7;
// line 121
panda$io$File** $tmp56 = &param0->source;
panda$io$File* $tmp57 = *$tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp58 = &param0->source;
*$tmp58 = param1;
// line 122
panda$collections$HashMap* $tmp59 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp59, param3);
panda$collections$MapView** $tmp60 = &param0->aliases;
panda$collections$MapView* $tmp61 = *$tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) $tmp59)));
panda$collections$MapView** $tmp62 = &param0->aliases;
*$tmp62 = ((panda$collections$MapView*) $tmp59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($179:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 123
panda$core$String** $tmp63 = &param0->doccomment;
panda$core$String* $tmp64 = *$tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp65 = &param0->doccomment;
*$tmp65 = param4;
// line 124
org$pandalanguage$pandac$Annotations** $tmp66 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Annotations** $tmp68 = &param0->annotations;
*$tmp68 = param5;
// line 125
org$pandalanguage$pandac$ClassDecl$Kind* $tmp69 = &param0->classKind;
*$tmp69 = param6;
// line 126
panda$collections$Array* $tmp70 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp70, ((panda$collections$CollectionView*) param8));
panda$collections$Array** $tmp71 = &param0->declaredSupers;
panda$collections$Array* $tmp72 = *$tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$collections$Array** $tmp73 = &param0->declaredSupers;
*$tmp73 = $tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($217:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 127
panda$collections$List** $tmp74 = &param0->parameters;
panda$collections$List* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$List*) param9)));
panda$collections$List** $tmp76 = &param0->parameters;
*$tmp76 = ((panda$collections$List*) param9);
// line 128
org$pandalanguage$pandac$SymbolTable* $tmp77 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp77, param10);
org$pandalanguage$pandac$SymbolTable** $tmp78 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
org$pandalanguage$pandac$SymbolTable** $tmp80 = &param0->symbolTable;
*$tmp80 = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($244:org.pandalanguage.pandac.SymbolTable)
// line 129
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp82 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp81);
org$pandalanguage$pandac$Compiler$Resolution* $tmp83 = &param0->resolved;
*$tmp83 = $tmp82;
// line 130
org$pandalanguage$pandac$SymbolTable** $tmp84 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp85 = *$tmp84;
panda$core$Weak** $tmp86 = &$tmp85->compiler;
panda$core$Weak* $tmp87 = *$tmp86;
panda$core$Object* $tmp88 = panda$core$Weak$get$R$panda$core$Weak$T($tmp87);
panda$collections$Stack** $tmp89 = &((org$pandalanguage$pandac$Compiler*) $tmp88)->currentClass;
panda$collections$Stack* $tmp90 = *$tmp89;
panda$collections$Stack$push$panda$collections$Stack$T($tmp90, ((panda$core$Object*) param0));
panda$core$Panda$unref$panda$core$Object$Q($tmp88);
// unreffing REF($268:panda.core.Weak.T)
// line 131
ITable* $tmp91 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp91->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
panda$collections$Iterator* $tmp94 = $tmp92(((panda$collections$Iterable*) param9));
goto block3;
block3:;
ITable* $tmp95 = $tmp94->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
panda$core$Bit $tmp98 = $tmp96($tmp94);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
ITable* $tmp100 = $tmp94->$class->itable;
while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
panda$core$Object* $tmp103 = $tmp101($tmp94);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp103)));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp103);
// line 132
org$pandalanguage$pandac$SymbolTable** $tmp105 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp106 = *$tmp105;
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp107 = *(&local0);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp106, ((org$pandalanguage$pandac$Symbol*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q($tmp103);
// unreffing REF($293:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing p
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($282:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 134
org$pandalanguage$pandac$SymbolTable** $tmp109 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp110 = *$tmp109;
panda$core$Weak** $tmp111 = &$tmp110->compiler;
panda$core$Weak* $tmp112 = *$tmp111;
panda$core$Object* $tmp113 = panda$core$Weak$get$R$panda$core$Weak$T($tmp112);
panda$collections$Stack** $tmp114 = &((org$pandalanguage$pandac$Compiler*) $tmp113)->currentClass;
panda$collections$Stack* $tmp115 = *$tmp114;
panda$core$Int64 $tmp116 = (panda$core$Int64) {0};
panda$core$Object* $tmp117 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp115, $tmp116);
bool $tmp118 = ((org$pandalanguage$pandac$ClassDecl*) $tmp117) == param0;
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit($tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {134};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s122, $tmp121);
abort(); // unreachable
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
// unreffing REF($331:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
// unreffing REF($325:panda.core.Weak.T)
// line 135
org$pandalanguage$pandac$SymbolTable** $tmp123 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp124 = *$tmp123;
panda$core$Weak** $tmp125 = &$tmp124->compiler;
panda$core$Weak* $tmp126 = *$tmp125;
panda$core$Object* $tmp127 = panda$core$Weak$get$R$panda$core$Weak$T($tmp126);
panda$collections$Stack** $tmp128 = &((org$pandalanguage$pandac$Compiler*) $tmp127)->currentClass;
panda$collections$Stack* $tmp129 = *$tmp128;
panda$core$Object* $tmp130 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp129);
panda$core$Panda$unref$panda$core$Object$Q($tmp130);
// unreffing REF($357:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing REF($352:panda.core.Weak.T)
return;

}
void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* param0, panda$io$File* param1, org$pandalanguage$pandac$Position param2, panda$collections$MapView* param3, panda$core$String* param4, org$pandalanguage$pandac$Annotations* param5, org$pandalanguage$pandac$ClassDecl$Kind param6, panda$core$String* param7, panda$collections$ListView* param8, panda$collections$Array* param9, org$pandalanguage$pandac$SymbolTable* param10) {

// line 141
org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp132 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp133 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp132);
org$pandalanguage$pandac$Position $tmp134 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp131, param7, $tmp133, $tmp134, $tmp135);
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp131, param8, param9, param10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$String$Index$nullable local0;
// line 146
panda$core$String** $tmp136 = &param0->name;
panda$core$String* $tmp137 = *$tmp136;
panda$core$String$Index$nullable $tmp138 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp137, &$s139);
*(&local0) = $tmp138;
// line 147
panda$core$String$Index$nullable $tmp140 = *(&local0);
panda$core$Bit $tmp141 = panda$core$Bit$init$builtin_bit(!$tmp140.nonnull);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block1; else goto block2;
block1:;
// line 148
panda$core$String** $tmp143 = &param0->name;
panda$core$String* $tmp144 = *$tmp143;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
return $tmp144;
block2:;
// line 150
panda$core$String** $tmp145 = &param0->name;
panda$core$String* $tmp146 = *$tmp145;
panda$core$String** $tmp147 = &param0->name;
panda$core$String* $tmp148 = *$tmp147;
panda$core$String$Index$nullable $tmp149 = *(&local0);
panda$core$String$Index $tmp150 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp148, ((panda$core$String$Index) $tmp149.value));
panda$core$Bit $tmp151 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp152 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp150, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp151);
panda$core$String* $tmp153 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp146, $tmp152);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($28:panda.core.String)
return $tmp153;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ClassDecl$GenericParameter* local1 = NULL;
// line 154
panda$collections$List** $tmp154 = &param0->parameters;
panda$collections$List* $tmp155 = *$tmp154;
ITable* $tmp156 = ((panda$collections$CollectionView*) $tmp155)->$class->itable;
while ($tmp156->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
panda$core$Int64 $tmp159 = $tmp157(((panda$collections$CollectionView*) $tmp155));
panda$core$Int64 $tmp160 = (panda$core$Int64) {0};
panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp159, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block1; else goto block2;
block1:;
// line 155
org$pandalanguage$pandac$Type** $tmp163 = &param0->type;
org$pandalanguage$pandac$Type* $tmp164 = *$tmp163;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
return $tmp164;
block2:;
// line 157
panda$collections$Array* $tmp165 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp165);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp166 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local0) = $tmp165;
// line 158
panda$collections$List** $tmp167 = &param0->parameters;
panda$collections$List* $tmp168 = *$tmp167;
ITable* $tmp169 = ((panda$collections$Iterable*) $tmp168)->$class->itable;
while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[0];
panda$collections$Iterator* $tmp172 = $tmp170(((panda$collections$Iterable*) $tmp168));
goto block3;
block3:;
ITable* $tmp173 = $tmp172->$class->itable;
while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
panda$core$Bit $tmp176 = $tmp174($tmp172);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
ITable* $tmp178 = $tmp172->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
panda$core$Object* $tmp181 = $tmp179($tmp172);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp182 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp181)));
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp181);
// line 159
panda$collections$Array* $tmp183 = *(&local0);
org$pandalanguage$pandac$Type* $tmp184 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp185 = *(&local1);
org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp184, $tmp185);
panda$collections$Array$add$panda$collections$Array$T($tmp183, ((panda$core$Object*) $tmp184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($55:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp181);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp186 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($33:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 161
org$pandalanguage$pandac$Type** $tmp187 = &param0->type;
org$pandalanguage$pandac$Type* $tmp188 = *$tmp187;
panda$collections$Array* $tmp189 = *(&local0);
org$pandalanguage$pandac$Type* $tmp190 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp188, ((panda$collections$ListView*) $tmp189));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($80:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp191 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing finalParameters
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing REF($17:panda.collections.Array<org.pandalanguage.pandac.Type>)
return $tmp190;

}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* param0) {

// line 165
panda$core$String** $tmp192 = &param0->name;
panda$core$String* $tmp193 = *$tmp192;
panda$core$Bit $tmp194 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp193, &$s195);
return $tmp194;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$FieldDecl* local4 = NULL;
org$pandalanguage$pandac$MethodDecl* local5 = NULL;
// line 170
panda$core$MutableString* $tmp196 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Annotations** $tmp197 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp198 = *$tmp197;
panda$core$String* $tmp199 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp198);
panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s201);
panda$core$String** $tmp202 = &param0->name;
panda$core$String* $tmp203 = *$tmp202;
panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, $tmp203);
panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s206);
panda$core$MutableString$init$panda$core$String($tmp196, $tmp205);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp207 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
*(&local0) = $tmp196;
// line 171
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp208 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s209));
*(&local1) = &$s210;
// line 172
org$pandalanguage$pandac$Type** $tmp211 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp212 = *$tmp211;
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block1; else goto block2;
block1:;
// line 173
panda$core$MutableString* $tmp215 = *(&local0);
panda$core$String* $tmp216 = *(&local1);
panda$core$String* $tmp217 = panda$core$String$convert$R$panda$core$String($tmp216);
panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s219);
org$pandalanguage$pandac$Type** $tmp220 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp221 = *$tmp220;
panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp218, ((panda$core$Object*) $tmp221));
panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s224);
panda$core$MutableString$append$panda$core$String($tmp215, $tmp223);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($36:panda.core.String)
// line 174
panda$core$String* $tmp225 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s226));
*(&local1) = &$s227;
goto block2;
block2:;
// line 176
panda$collections$Array** $tmp228 = &param0->rawInterfaces;
panda$collections$Array* $tmp229 = *$tmp228;
ITable* $tmp230 = ((panda$collections$Iterable*) $tmp229)->$class->itable;
while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
panda$collections$Iterator* $tmp233 = $tmp231(((panda$collections$Iterable*) $tmp229));
goto block3;
block3:;
ITable* $tmp234 = $tmp233->$class->itable;
while ($tmp234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
panda$core$Bit $tmp237 = $tmp235($tmp233);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp239 = $tmp233->$class->itable;
while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
panda$core$Object* $tmp242 = $tmp240($tmp233);
org$pandalanguage$pandac$Type* $tmp243 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp242)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp242);
// line 177
panda$core$MutableString* $tmp244 = *(&local0);
panda$core$String* $tmp245 = *(&local1);
panda$core$String* $tmp246 = panda$core$String$convert$R$panda$core$String($tmp245);
panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s248);
org$pandalanguage$pandac$Type* $tmp249 = *(&local2);
panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp247, ((panda$core$Object*) $tmp249));
panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s252);
panda$core$MutableString$append$panda$core$String($tmp244, $tmp251);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// unreffing REF($97:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($92:panda.core.String)
// line 178
panda$core$String* $tmp253 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s254));
*(&local1) = &$s255;
panda$core$Panda$unref$panda$core$Object$Q($tmp242);
// unreffing REF($81:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp256 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing REF($70:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 180
panda$core$MutableString* $tmp257 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp257, &$s258);
// line 181
panda$collections$Array** $tmp259 = &param0->classes;
panda$collections$Array* $tmp260 = *$tmp259;
ITable* $tmp261 = ((panda$collections$Iterable*) $tmp260)->$class->itable;
while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[0];
panda$collections$Iterator* $tmp264 = $tmp262(((panda$collections$Iterable*) $tmp260));
goto block6;
block6:;
ITable* $tmp265 = $tmp264->$class->itable;
while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
panda$core$Bit $tmp268 = $tmp266($tmp264);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp270 = $tmp264->$class->itable;
while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[1];
panda$core$Object* $tmp273 = $tmp271($tmp264);
org$pandalanguage$pandac$ClassDecl* $tmp274 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp273)));
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) $tmp273);
// line 182
panda$core$MutableString* $tmp275 = *(&local0);
org$pandalanguage$pandac$ClassDecl* $tmp276 = *(&local3);
panda$core$String* $tmp277 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String($tmp276);
panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s279);
panda$core$MutableString$append$panda$core$String($tmp275, $tmp278);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp273);
// unreffing REF($150:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp280 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($139:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 184
panda$collections$Array** $tmp281 = &param0->fields;
panda$collections$Array* $tmp282 = *$tmp281;
ITable* $tmp283 = ((panda$collections$Iterable*) $tmp282)->$class->itable;
while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
panda$collections$Iterator* $tmp286 = $tmp284(((panda$collections$Iterable*) $tmp282));
goto block9;
block9:;
ITable* $tmp287 = $tmp286->$class->itable;
while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
panda$core$Bit $tmp290 = $tmp288($tmp286);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp292 = $tmp286->$class->itable;
while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[1];
panda$core$Object* $tmp295 = $tmp293($tmp286);
org$pandalanguage$pandac$FieldDecl* $tmp296 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp295)));
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) $tmp295);
// line 185
panda$core$MutableString* $tmp297 = *(&local0);
org$pandalanguage$pandac$FieldDecl* $tmp298 = *(&local4);
panda$core$String* $tmp299 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String($tmp298);
panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s301);
panda$core$MutableString$append$panda$core$String($tmp297, $tmp300);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing REF($211:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing REF($210:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp295);
// unreffing REF($199:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp302 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing f
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
// unreffing REF($188:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 187
panda$collections$Array** $tmp303 = &param0->methods;
panda$collections$Array* $tmp304 = *$tmp303;
ITable* $tmp305 = ((panda$collections$Iterable*) $tmp304)->$class->itable;
while ($tmp305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
panda$collections$Iterator* $tmp308 = $tmp306(((panda$collections$Iterable*) $tmp304));
goto block12;
block12:;
ITable* $tmp309 = $tmp308->$class->itable;
while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
panda$core$Bit $tmp312 = $tmp310($tmp308);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block14; else goto block13;
block13:;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp314 = $tmp308->$class->itable;
while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[1];
panda$core$Object* $tmp317 = $tmp315($tmp308);
org$pandalanguage$pandac$MethodDecl* $tmp318 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp317)));
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) $tmp317);
// line 188
panda$core$MutableString* $tmp319 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp320 = *(&local5);
panda$core$String* $tmp321 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String($tmp320);
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s323);
panda$core$MutableString$append$panda$core$String($tmp319, $tmp322);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($260:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($259:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp317);
// unreffing REF($248:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp324 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing m
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block12;
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($237:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 190
panda$core$MutableString* $tmp325 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp325, &$s326);
// line 191
panda$core$MutableString* $tmp327 = *(&local0);
panda$core$String* $tmp328 = panda$core$MutableString$finish$R$panda$core$String($tmp327);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing REF($285:panda.core.String)
panda$core$String* $tmp329 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp330 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($1:panda.core.MutableString)
return $tmp328;

}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp331 = &param0->source;
panda$io$File* $tmp332 = *$tmp331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
panda$core$String** $tmp333 = &param0->name;
panda$core$String* $tmp334 = *$tmp333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
org$pandalanguage$pandac$Type** $tmp335 = &param0->type;
org$pandalanguage$pandac$Type* $tmp336 = *$tmp335;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
panda$collections$MapView** $tmp337 = &param0->aliases;
panda$collections$MapView* $tmp338 = *$tmp337;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
panda$core$String** $tmp339 = &param0->doccomment;
panda$core$String* $tmp340 = *$tmp339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
org$pandalanguage$pandac$Annotations** $tmp341 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp342 = *$tmp341;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$collections$Array** $tmp343 = &param0->declaredSupers;
panda$collections$Array* $tmp344 = *$tmp343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
org$pandalanguage$pandac$Type** $tmp345 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp346 = *$tmp345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
panda$collections$Array** $tmp347 = &param0->rawInterfaces;
panda$collections$Array* $tmp348 = *$tmp347;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
panda$collections$List** $tmp349 = &param0->parameters;
panda$collections$List* $tmp350 = *$tmp349;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$collections$Array** $tmp351 = &param0->fields;
panda$collections$Array* $tmp352 = *$tmp351;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
panda$collections$Array** $tmp353 = &param0->methods;
panda$collections$Array* $tmp354 = *$tmp353;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
panda$collections$Array** $tmp355 = &param0->classes;
panda$collections$Array* $tmp356 = *$tmp355;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
panda$collections$Array** $tmp357 = &param0->choiceCases;
panda$collections$Array* $tmp358 = *$tmp357;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Weak** $tmp359 = &param0->owner;
panda$core$Weak* $tmp360 = *$tmp359;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
org$pandalanguage$pandac$SymbolTable** $tmp361 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp362 = *$tmp361;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
panda$collections$Array** $tmp363 = &param0->virtualMethods;
panda$collections$Array* $tmp364 = *$tmp363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
panda$collections$HashMap** $tmp365 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp366 = *$tmp365;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
return;

}

