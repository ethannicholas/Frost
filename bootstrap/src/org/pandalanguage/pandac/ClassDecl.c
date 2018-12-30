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
typedef panda$core$Int64 (*$fn143)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn257)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn274)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn279)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn292)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn301)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 574, -1893327939731735360, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };

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
panda$core$Panda$unref$panda$core$Object$Q($tmp88);
panda$collections$Stack** $tmp89 = &((org$pandalanguage$pandac$Compiler*) $tmp88)->currentClass;
panda$collections$Stack* $tmp90 = *$tmp89;
panda$collections$Stack$push$panda$collections$Stack$T($tmp90, ((panda$core$Object*) param0));
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
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing p
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// line 134
org$pandalanguage$pandac$SymbolTable** $tmp109 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp110 = *$tmp109;
panda$core$Weak** $tmp111 = &$tmp110->compiler;
panda$core$Weak* $tmp112 = *$tmp111;
panda$core$Object* $tmp113 = panda$core$Weak$get$R$panda$core$Weak$T($tmp112);
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
panda$collections$Stack** $tmp114 = &((org$pandalanguage$pandac$Compiler*) $tmp113)->currentClass;
panda$collections$Stack* $tmp115 = *$tmp114;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp115, ((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* param0, panda$io$File* param1, org$pandalanguage$pandac$Position param2, panda$collections$MapView* param3, panda$core$String* param4, org$pandalanguage$pandac$Annotations* param5, org$pandalanguage$pandac$ClassDecl$Kind param6, panda$core$String* param7, panda$collections$ListView* param8, panda$collections$Array* param9, org$pandalanguage$pandac$SymbolTable* param10) {

// line 140
org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp117 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp118 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp117);
org$pandalanguage$pandac$Position $tmp119 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp120 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp116, param7, $tmp118, $tmp119, $tmp120);
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp116, param8, param9, param10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
return;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$String$Index$nullable local0;
// line 145
panda$core$String** $tmp121 = &param0->name;
panda$core$String* $tmp122 = *$tmp121;
panda$core$String$Index$nullable $tmp123 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp122, &$s124);
*(&local0) = $tmp123;
// line 146
panda$core$String$Index$nullable $tmp125 = *(&local0);
panda$core$Bit $tmp126 = panda$core$Bit$init$builtin_bit(!$tmp125.nonnull);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block1; else goto block2;
block1:;
// line 147
panda$core$String** $tmp128 = &param0->name;
panda$core$String* $tmp129 = *$tmp128;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
return $tmp129;
block2:;
// line 149
panda$core$String** $tmp130 = &param0->name;
panda$core$String* $tmp131 = *$tmp130;
panda$core$String** $tmp132 = &param0->name;
panda$core$String* $tmp133 = *$tmp132;
panda$core$String$Index$nullable $tmp134 = *(&local0);
panda$core$String$Index $tmp135 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp133, ((panda$core$String$Index) $tmp134.value));
panda$core$Bit $tmp136 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp137 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp135, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp136);
panda$core$String* $tmp138 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp131, $tmp137);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
return $tmp138;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ClassDecl$GenericParameter* local1 = NULL;
// line 153
panda$collections$List** $tmp139 = &param0->parameters;
panda$collections$List* $tmp140 = *$tmp139;
ITable* $tmp141 = ((panda$collections$CollectionView*) $tmp140)->$class->itable;
while ($tmp141->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[0];
panda$core$Int64 $tmp144 = $tmp142(((panda$collections$CollectionView*) $tmp140));
panda$core$Int64 $tmp145 = (panda$core$Int64) {0};
panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp144, $tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block1; else goto block2;
block1:;
// line 154
org$pandalanguage$pandac$Type** $tmp148 = &param0->type;
org$pandalanguage$pandac$Type* $tmp149 = *$tmp148;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
return $tmp149;
block2:;
// line 156
panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp150);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
*(&local0) = $tmp150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// line 157
panda$collections$List** $tmp152 = &param0->parameters;
panda$collections$List* $tmp153 = *$tmp152;
ITable* $tmp154 = ((panda$collections$Iterable*) $tmp153)->$class->itable;
while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
panda$collections$Iterator* $tmp157 = $tmp155(((panda$collections$Iterable*) $tmp153));
goto block3;
block3:;
ITable* $tmp158 = $tmp157->$class->itable;
while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
panda$core$Bit $tmp161 = $tmp159($tmp157);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
ITable* $tmp163 = $tmp157->$class->itable;
while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[1];
panda$core$Object* $tmp166 = $tmp164($tmp157);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp167 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp166)));
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp166);
// line 158
panda$collections$Array* $tmp168 = *(&local0);
org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp170 = *(&local1);
org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp169, $tmp170);
panda$collections$Array$add$panda$collections$Array$T($tmp168, ((panda$core$Object*) $tmp169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$unref$panda$core$Object$Q($tmp166);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp171 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// line 160
org$pandalanguage$pandac$Type** $tmp172 = &param0->type;
org$pandalanguage$pandac$Type* $tmp173 = *$tmp172;
panda$collections$Array* $tmp174 = *(&local0);
org$pandalanguage$pandac$Type* $tmp175 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp173, ((panda$collections$ListView*) $tmp174));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$collections$Array* $tmp176 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing finalParameters
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp175;

}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* param0) {

// line 164
panda$core$String** $tmp177 = &param0->name;
panda$core$String* $tmp178 = *$tmp177;
panda$core$Bit $tmp179 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp178, &$s180);
return $tmp179;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$FieldDecl* local4 = NULL;
org$pandalanguage$pandac$MethodDecl* local5 = NULL;
// line 169
panda$core$MutableString* $tmp181 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Annotations** $tmp182 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp183 = *$tmp182;
panda$core$String* $tmp184 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp183);
panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s186);
panda$core$String** $tmp187 = &param0->name;
panda$core$String* $tmp188 = *$tmp187;
panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, $tmp188);
panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s191);
panda$core$MutableString$init$panda$core$String($tmp181, $tmp190);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp192 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
*(&local0) = $tmp181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// line 170
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp193 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s194));
*(&local1) = &$s195;
// line 171
org$pandalanguage$pandac$Type** $tmp196 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp197 = *$tmp196;
panda$core$Bit $tmp198 = panda$core$Bit$init$builtin_bit($tmp197 != NULL);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block1; else goto block2;
block1:;
// line 172
panda$core$MutableString* $tmp200 = *(&local0);
panda$core$String* $tmp201 = *(&local1);
panda$core$String* $tmp202 = panda$core$String$convert$R$panda$core$String($tmp201);
panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s204);
org$pandalanguage$pandac$Type** $tmp205 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp206 = *$tmp205;
panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp203, ((panda$core$Object*) $tmp206));
panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s209);
panda$core$MutableString$append$panda$core$String($tmp200, $tmp208);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// line 173
panda$core$String* $tmp210 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s211));
*(&local1) = &$s212;
goto block2;
block2:;
// line 175
panda$collections$Array** $tmp213 = &param0->rawInterfaces;
panda$collections$Array* $tmp214 = *$tmp213;
ITable* $tmp215 = ((panda$collections$Iterable*) $tmp214)->$class->itable;
while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
panda$collections$Iterator* $tmp218 = $tmp216(((panda$collections$Iterable*) $tmp214));
goto block3;
block3:;
ITable* $tmp219 = $tmp218->$class->itable;
while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
panda$core$Bit $tmp222 = $tmp220($tmp218);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp224 = $tmp218->$class->itable;
while ($tmp224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp224 = $tmp224->next;
}
$fn226 $tmp225 = $tmp224->methods[1];
panda$core$Object* $tmp227 = $tmp225($tmp218);
org$pandalanguage$pandac$Type* $tmp228 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp227)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp227);
// line 176
panda$core$MutableString* $tmp229 = *(&local0);
panda$core$String* $tmp230 = *(&local1);
panda$core$String* $tmp231 = panda$core$String$convert$R$panda$core$String($tmp230);
panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s233);
org$pandalanguage$pandac$Type* $tmp234 = *(&local2);
panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp232, ((panda$core$Object*) $tmp234));
panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s237);
panda$core$MutableString$append$panda$core$String($tmp229, $tmp236);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// line 177
panda$core$String* $tmp238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s239));
*(&local1) = &$s240;
panda$core$Panda$unref$panda$core$Object$Q($tmp227);
org$pandalanguage$pandac$Type* $tmp241 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// line 179
panda$core$MutableString* $tmp242 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp242, &$s243);
// line 180
panda$collections$Array** $tmp244 = &param0->classes;
panda$collections$Array* $tmp245 = *$tmp244;
ITable* $tmp246 = ((panda$collections$Iterable*) $tmp245)->$class->itable;
while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
panda$collections$Iterator* $tmp249 = $tmp247(((panda$collections$Iterable*) $tmp245));
goto block6;
block6:;
ITable* $tmp250 = $tmp249->$class->itable;
while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
panda$core$Bit $tmp253 = $tmp251($tmp249);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp255 = $tmp249->$class->itable;
while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[1];
panda$core$Object* $tmp258 = $tmp256($tmp249);
org$pandalanguage$pandac$ClassDecl* $tmp259 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp258)));
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) $tmp258);
// line 181
panda$core$MutableString* $tmp260 = *(&local0);
org$pandalanguage$pandac$ClassDecl* $tmp261 = *(&local3);
panda$core$String* $tmp262 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String($tmp261);
panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s264);
panda$core$MutableString$append$panda$core$String($tmp260, $tmp263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q($tmp258);
org$pandalanguage$pandac$ClassDecl* $tmp265 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
// line 183
panda$collections$Array** $tmp266 = &param0->fields;
panda$collections$Array* $tmp267 = *$tmp266;
ITable* $tmp268 = ((panda$collections$Iterable*) $tmp267)->$class->itable;
while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
panda$collections$Iterator* $tmp271 = $tmp269(((panda$collections$Iterable*) $tmp267));
goto block9;
block9:;
ITable* $tmp272 = $tmp271->$class->itable;
while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
panda$core$Bit $tmp275 = $tmp273($tmp271);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp277 = $tmp271->$class->itable;
while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[1];
panda$core$Object* $tmp280 = $tmp278($tmp271);
org$pandalanguage$pandac$FieldDecl* $tmp281 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp280)));
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) $tmp280);
// line 184
panda$core$MutableString* $tmp282 = *(&local0);
org$pandalanguage$pandac$FieldDecl* $tmp283 = *(&local4);
panda$core$String* $tmp284 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String($tmp283);
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s286);
panda$core$MutableString$append$panda$core$String($tmp282, $tmp285);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q($tmp280);
org$pandalanguage$pandac$FieldDecl* $tmp287 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing f
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
// line 186
panda$collections$Array** $tmp288 = &param0->methods;
panda$collections$Array* $tmp289 = *$tmp288;
ITable* $tmp290 = ((panda$collections$Iterable*) $tmp289)->$class->itable;
while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
panda$collections$Iterator* $tmp293 = $tmp291(((panda$collections$Iterable*) $tmp289));
goto block12;
block12:;
ITable* $tmp294 = $tmp293->$class->itable;
while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
panda$core$Bit $tmp297 = $tmp295($tmp293);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block14; else goto block13;
block13:;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp299 = $tmp293->$class->itable;
while ($tmp299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[1];
panda$core$Object* $tmp302 = $tmp300($tmp293);
org$pandalanguage$pandac$MethodDecl* $tmp303 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp302)));
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) $tmp302);
// line 187
panda$core$MutableString* $tmp304 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp305 = *(&local5);
panda$core$String* $tmp306 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String($tmp305);
panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp306, &$s308);
panda$core$MutableString$append$panda$core$String($tmp304, $tmp307);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$unref$panda$core$Object$Q($tmp302);
org$pandalanguage$pandac$MethodDecl* $tmp309 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing m
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block12;
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// line 189
panda$core$MutableString* $tmp310 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp310, &$s311);
// line 190
panda$core$MutableString* $tmp312 = *(&local0);
panda$core$String* $tmp313 = panda$core$MutableString$finish$R$panda$core$String($tmp312);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$String* $tmp314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp315 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp313;

}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* param0) {

panda$io$File** $tmp316 = &param0->source;
panda$io$File* $tmp317 = *$tmp316;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
panda$core$String** $tmp318 = &param0->name;
panda$core$String* $tmp319 = *$tmp318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
org$pandalanguage$pandac$Type** $tmp320 = &param0->type;
org$pandalanguage$pandac$Type* $tmp321 = *$tmp320;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
panda$collections$MapView** $tmp322 = &param0->aliases;
panda$collections$MapView* $tmp323 = *$tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
panda$core$String** $tmp324 = &param0->doccomment;
panda$core$String* $tmp325 = *$tmp324;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
org$pandalanguage$pandac$Annotations** $tmp326 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp327 = *$tmp326;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$collections$Array** $tmp328 = &param0->declaredSupers;
panda$collections$Array* $tmp329 = *$tmp328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
org$pandalanguage$pandac$Type** $tmp330 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp331 = *$tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$collections$Array** $tmp332 = &param0->rawInterfaces;
panda$collections$Array* $tmp333 = *$tmp332;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$collections$List** $tmp334 = &param0->parameters;
panda$collections$List* $tmp335 = *$tmp334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
panda$collections$Array** $tmp336 = &param0->fields;
panda$collections$Array* $tmp337 = *$tmp336;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$collections$Array** $tmp338 = &param0->methods;
panda$collections$Array* $tmp339 = *$tmp338;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$collections$Array** $tmp340 = &param0->classes;
panda$collections$Array* $tmp341 = *$tmp340;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
panda$collections$Array** $tmp342 = &param0->choiceCases;
panda$collections$Array* $tmp343 = *$tmp342;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Weak** $tmp344 = &param0->owner;
panda$core$Weak* $tmp345 = *$tmp344;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
org$pandalanguage$pandac$SymbolTable** $tmp346 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp347 = *$tmp346;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$collections$Array** $tmp348 = &param0->virtualMethods;
panda$collections$Array* $tmp349 = *$tmp348;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
panda$collections$HashMap** $tmp350 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp351 = *$tmp350;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
return;

}

