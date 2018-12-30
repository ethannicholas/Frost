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

typedef panda$collections$Iterator* (*$fn95)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn99)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn104)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn147)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn160)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn169)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn230)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn261)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn274)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn296)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn300)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn305)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 574, -1893327939731735360, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };

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
bool $tmp28 = $tmp27 != ((panda$core$Weak*) NULL);
if ($tmp28) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp29 = panda$core$Weak$get$R$panda$core$Weak$T($tmp27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp29)));
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Weak** $tmp30 = &param0->owner;
*$tmp30 = $tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// line 104
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp32 = &param0->symbolTableResolved;
*$tmp32 = $tmp31;
// line 106
panda$core$Bit $tmp33 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp34 = &param0->external;
*$tmp34 = $tmp33;
// line 108
panda$collections$Array* $tmp35 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp35);
panda$collections$Array** $tmp36 = &param0->virtualMethods;
panda$collections$Array* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$collections$Array** $tmp38 = &param0->virtualMethods;
*$tmp38 = $tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// line 110
panda$collections$HashMap* $tmp39 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp39);
panda$collections$HashMap** $tmp40 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$collections$HashMap** $tmp42 = &param0->classResolutionCache;
*$tmp42 = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$Bit $tmp43 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param7);
panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp46 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s47, $tmp46, &$s48);
abort(); // unreachable
block3:;
// line 118
org$pandalanguage$pandac$Position* $tmp49 = &param0->position;
*$tmp49 = param2;
// line 119
panda$core$String** $tmp50 = &((org$pandalanguage$pandac$Symbol*) param7)->name;
panda$core$String* $tmp51 = *$tmp50;
panda$core$String** $tmp52 = &param0->name;
panda$core$String* $tmp53 = *$tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$String** $tmp54 = &param0->name;
*$tmp54 = $tmp51;
// line 120
org$pandalanguage$pandac$Type** $tmp55 = &param0->type;
org$pandalanguage$pandac$Type* $tmp56 = *$tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$Type** $tmp57 = &param0->type;
*$tmp57 = param7;
// line 121
panda$io$File** $tmp58 = &param0->source;
panda$io$File* $tmp59 = *$tmp58;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp60 = &param0->source;
*$tmp60 = param1;
// line 122
panda$collections$HashMap* $tmp61 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp61, param3);
panda$collections$MapView** $tmp62 = &param0->aliases;
panda$collections$MapView* $tmp63 = *$tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) $tmp61)));
panda$collections$MapView** $tmp64 = &param0->aliases;
*$tmp64 = ((panda$collections$MapView*) $tmp61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// line 123
panda$core$String** $tmp65 = &param0->doccomment;
panda$core$String* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp67 = &param0->doccomment;
*$tmp67 = param4;
// line 124
org$pandalanguage$pandac$Annotations** $tmp68 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Annotations** $tmp70 = &param0->annotations;
*$tmp70 = param5;
// line 125
org$pandalanguage$pandac$ClassDecl$Kind* $tmp71 = &param0->classKind;
*$tmp71 = param6;
// line 126
panda$collections$Array* $tmp72 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp72, ((panda$collections$CollectionView*) param8));
panda$collections$Array** $tmp73 = &param0->declaredSupers;
panda$collections$Array* $tmp74 = *$tmp73;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$collections$Array** $tmp75 = &param0->declaredSupers;
*$tmp75 = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// line 127
panda$collections$List** $tmp76 = &param0->parameters;
panda$collections$List* $tmp77 = *$tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$List*) param9)));
panda$collections$List** $tmp78 = &param0->parameters;
*$tmp78 = ((panda$collections$List*) param9);
// line 128
org$pandalanguage$pandac$SymbolTable* $tmp79 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp79, param10);
org$pandalanguage$pandac$SymbolTable** $tmp80 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp81 = *$tmp80;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
org$pandalanguage$pandac$SymbolTable** $tmp82 = &param0->symbolTable;
*$tmp82 = $tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// line 129
panda$core$Int64 $tmp83 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp84 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp83);
org$pandalanguage$pandac$Compiler$Resolution* $tmp85 = &param0->resolved;
*$tmp85 = $tmp84;
// line 130
org$pandalanguage$pandac$SymbolTable** $tmp86 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp87 = *$tmp86;
panda$core$Weak** $tmp88 = &$tmp87->compiler;
panda$core$Weak* $tmp89 = *$tmp88;
panda$core$Object* $tmp90 = panda$core$Weak$get$R$panda$core$Weak$T($tmp89);
panda$core$Panda$unref$panda$core$Object$Q($tmp90);
panda$collections$Stack** $tmp91 = &((org$pandalanguage$pandac$Compiler*) $tmp90)->currentClass;
panda$collections$Stack* $tmp92 = *$tmp91;
panda$collections$Stack$push$panda$collections$Stack$T($tmp92, ((panda$core$Object*) param0));
// line 131
ITable* $tmp93 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
panda$collections$Iterator* $tmp96 = $tmp94(((panda$collections$Iterable*) param9));
goto block5;
block5:;
ITable* $tmp97 = $tmp96->$class->itable;
while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
panda$core$Bit $tmp100 = $tmp98($tmp96);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block7; else goto block6;
block6:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
ITable* $tmp102 = $tmp96->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
panda$core$Object* $tmp105 = $tmp103($tmp96);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp106 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp105)));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp105);
// line 132
org$pandalanguage$pandac$SymbolTable** $tmp107 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp108 = *$tmp107;
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp109 = *(&local0);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp108, ((org$pandalanguage$pandac$Symbol*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp110 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing p
*(&local0) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// line 134
panda$collections$Array** $tmp111 = &param0->fields;
panda$collections$Array* $tmp112 = *$tmp111;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// line 135
org$pandalanguage$pandac$SymbolTable** $tmp113 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp114 = *$tmp113;
panda$core$Weak** $tmp115 = &$tmp114->compiler;
panda$core$Weak* $tmp116 = *$tmp115;
panda$core$Object* $tmp117 = panda$core$Weak$get$R$panda$core$Weak$T($tmp116);
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
panda$collections$Stack** $tmp118 = &((org$pandalanguage$pandac$Compiler*) $tmp117)->currentClass;
panda$collections$Stack* $tmp119 = *$tmp118;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp119, ((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* param0, panda$io$File* param1, org$pandalanguage$pandac$Position param2, panda$collections$MapView* param3, panda$core$String* param4, org$pandalanguage$pandac$Annotations* param5, org$pandalanguage$pandac$ClassDecl$Kind param6, panda$core$String* param7, panda$collections$ListView* param8, panda$collections$Array* param9, org$pandalanguage$pandac$SymbolTable* param10) {

// line 141
org$pandalanguage$pandac$Type* $tmp120 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp121 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp122 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp121);
org$pandalanguage$pandac$Position $tmp123 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp124 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp120, param7, $tmp122, $tmp123, $tmp124);
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp120, param8, param9, param10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
return;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$String$Index$nullable local0;
// line 146
panda$core$String** $tmp125 = &param0->name;
panda$core$String* $tmp126 = *$tmp125;
panda$core$String$Index$nullable $tmp127 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp126, &$s128);
*(&local0) = $tmp127;
// line 147
panda$core$String$Index$nullable $tmp129 = *(&local0);
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit(!$tmp129.nonnull);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block1; else goto block2;
block1:;
// line 148
panda$core$String** $tmp132 = &param0->name;
panda$core$String* $tmp133 = *$tmp132;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
return $tmp133;
block2:;
// line 150
panda$core$String** $tmp134 = &param0->name;
panda$core$String* $tmp135 = *$tmp134;
panda$core$String** $tmp136 = &param0->name;
panda$core$String* $tmp137 = *$tmp136;
panda$core$String$Index$nullable $tmp138 = *(&local0);
panda$core$String$Index $tmp139 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp137, ((panda$core$String$Index) $tmp138.value));
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp141 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp139, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp140);
panda$core$String* $tmp142 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp135, $tmp141);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
return $tmp142;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ClassDecl$GenericParameter* local1 = NULL;
// line 154
panda$collections$List** $tmp143 = &param0->parameters;
panda$collections$List* $tmp144 = *$tmp143;
ITable* $tmp145 = ((panda$collections$CollectionView*) $tmp144)->$class->itable;
while ($tmp145->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
panda$core$Int64 $tmp148 = $tmp146(((panda$collections$CollectionView*) $tmp144));
panda$core$Int64 $tmp149 = (panda$core$Int64) {0};
panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp148, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block1:;
// line 155
org$pandalanguage$pandac$Type** $tmp152 = &param0->type;
org$pandalanguage$pandac$Type* $tmp153 = *$tmp152;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
return $tmp153;
block2:;
// line 157
panda$collections$Array* $tmp154 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp154);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp155 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
*(&local0) = $tmp154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// line 158
panda$collections$List** $tmp156 = &param0->parameters;
panda$collections$List* $tmp157 = *$tmp156;
ITable* $tmp158 = ((panda$collections$Iterable*) $tmp157)->$class->itable;
while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
panda$collections$Iterator* $tmp161 = $tmp159(((panda$collections$Iterable*) $tmp157));
goto block3;
block3:;
ITable* $tmp162 = $tmp161->$class->itable;
while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
panda$core$Bit $tmp165 = $tmp163($tmp161);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
ITable* $tmp167 = $tmp161->$class->itable;
while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[1];
panda$core$Object* $tmp170 = $tmp168($tmp161);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp171 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp170)));
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp170);
// line 159
panda$collections$Array* $tmp172 = *(&local0);
org$pandalanguage$pandac$Type* $tmp173 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp174 = *(&local1);
org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp173, $tmp174);
panda$collections$Array$add$panda$collections$Array$T($tmp172, ((panda$core$Object*) $tmp173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
panda$core$Panda$unref$panda$core$Object$Q($tmp170);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp175 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// line 161
org$pandalanguage$pandac$Type** $tmp176 = &param0->type;
org$pandalanguage$pandac$Type* $tmp177 = *$tmp176;
panda$collections$Array* $tmp178 = *(&local0);
org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp177, ((panda$collections$ListView*) $tmp178));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$collections$Array* $tmp180 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing finalParameters
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp179;

}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* param0) {

// line 165
panda$core$String** $tmp181 = &param0->name;
panda$core$String* $tmp182 = *$tmp181;
panda$core$Bit $tmp183 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp182, &$s184);
return $tmp183;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$FieldDecl* local4 = NULL;
org$pandalanguage$pandac$MethodDecl* local5 = NULL;
// line 170
panda$core$MutableString* $tmp185 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Annotations** $tmp186 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp187 = *$tmp186;
panda$core$String* $tmp188 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp187);
panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s190);
panda$core$String** $tmp191 = &param0->name;
panda$core$String* $tmp192 = *$tmp191;
panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, $tmp192);
panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s195);
panda$core$MutableString$init$panda$core$String($tmp185, $tmp194);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
*(&local0) = $tmp185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// line 171
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp197 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s198));
*(&local1) = &$s199;
// line 172
org$pandalanguage$pandac$Type** $tmp200 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp201 = *$tmp200;
panda$core$Bit $tmp202 = panda$core$Bit$init$builtin_bit($tmp201 != NULL);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block1; else goto block2;
block1:;
// line 173
panda$core$MutableString* $tmp204 = *(&local0);
panda$core$String* $tmp205 = *(&local1);
panda$core$String* $tmp206 = panda$core$String$convert$R$panda$core$String($tmp205);
panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s208);
org$pandalanguage$pandac$Type** $tmp209 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp210 = *$tmp209;
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp207, ((panda$core$Object*) $tmp210));
panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s213);
panda$core$MutableString$append$panda$core$String($tmp204, $tmp212);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// line 174
panda$core$String* $tmp214 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s215));
*(&local1) = &$s216;
goto block2;
block2:;
// line 176
panda$collections$Array** $tmp217 = &param0->rawInterfaces;
panda$collections$Array* $tmp218 = *$tmp217;
ITable* $tmp219 = ((panda$collections$Iterable*) $tmp218)->$class->itable;
while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
panda$collections$Iterator* $tmp222 = $tmp220(((panda$collections$Iterable*) $tmp218));
goto block3;
block3:;
ITable* $tmp223 = $tmp222->$class->itable;
while ($tmp223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
panda$core$Bit $tmp226 = $tmp224($tmp222);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp228 = $tmp222->$class->itable;
while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[1];
panda$core$Object* $tmp231 = $tmp229($tmp222);
org$pandalanguage$pandac$Type* $tmp232 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp231)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp231);
// line 177
panda$core$MutableString* $tmp233 = *(&local0);
panda$core$String* $tmp234 = *(&local1);
panda$core$String* $tmp235 = panda$core$String$convert$R$panda$core$String($tmp234);
panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s237);
org$pandalanguage$pandac$Type* $tmp238 = *(&local2);
panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp236, ((panda$core$Object*) $tmp238));
panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s241);
panda$core$MutableString$append$panda$core$String($tmp233, $tmp240);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// line 178
panda$core$String* $tmp242 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s243));
*(&local1) = &$s244;
panda$core$Panda$unref$panda$core$Object$Q($tmp231);
org$pandalanguage$pandac$Type* $tmp245 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// line 180
panda$core$MutableString* $tmp246 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp246, &$s247);
// line 181
panda$collections$Array** $tmp248 = &param0->classes;
panda$collections$Array* $tmp249 = *$tmp248;
ITable* $tmp250 = ((panda$collections$Iterable*) $tmp249)->$class->itable;
while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
panda$collections$Iterator* $tmp253 = $tmp251(((panda$collections$Iterable*) $tmp249));
goto block6;
block6:;
ITable* $tmp254 = $tmp253->$class->itable;
while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
panda$core$Bit $tmp257 = $tmp255($tmp253);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp259 = $tmp253->$class->itable;
while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[1];
panda$core$Object* $tmp262 = $tmp260($tmp253);
org$pandalanguage$pandac$ClassDecl* $tmp263 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp262)));
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) $tmp262);
// line 182
panda$core$MutableString* $tmp264 = *(&local0);
org$pandalanguage$pandac$ClassDecl* $tmp265 = *(&local3);
panda$core$String* $tmp266 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String($tmp265);
panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s268);
panda$core$MutableString$append$panda$core$String($tmp264, $tmp267);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
panda$core$Panda$unref$panda$core$Object$Q($tmp262);
org$pandalanguage$pandac$ClassDecl* $tmp269 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// line 184
panda$collections$Array** $tmp270 = &param0->fields;
panda$collections$Array* $tmp271 = *$tmp270;
ITable* $tmp272 = ((panda$collections$Iterable*) $tmp271)->$class->itable;
while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
panda$collections$Iterator* $tmp275 = $tmp273(((panda$collections$Iterable*) $tmp271));
goto block9;
block9:;
ITable* $tmp276 = $tmp275->$class->itable;
while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
panda$core$Bit $tmp279 = $tmp277($tmp275);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp281 = $tmp275->$class->itable;
while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[1];
panda$core$Object* $tmp284 = $tmp282($tmp275);
org$pandalanguage$pandac$FieldDecl* $tmp285 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp284)));
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) $tmp284);
// line 185
panda$core$MutableString* $tmp286 = *(&local0);
org$pandalanguage$pandac$FieldDecl* $tmp287 = *(&local4);
panda$core$String* $tmp288 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String($tmp287);
panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s290);
panda$core$MutableString$append$panda$core$String($tmp286, $tmp289);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
panda$core$Panda$unref$panda$core$Object$Q($tmp284);
org$pandalanguage$pandac$FieldDecl* $tmp291 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing f
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// line 187
panda$collections$Array** $tmp292 = &param0->methods;
panda$collections$Array* $tmp293 = *$tmp292;
ITable* $tmp294 = ((panda$collections$Iterable*) $tmp293)->$class->itable;
while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
panda$collections$Iterator* $tmp297 = $tmp295(((panda$collections$Iterable*) $tmp293));
goto block12;
block12:;
ITable* $tmp298 = $tmp297->$class->itable;
while ($tmp298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
panda$core$Bit $tmp301 = $tmp299($tmp297);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block14; else goto block13;
block13:;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp303 = $tmp297->$class->itable;
while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[1];
panda$core$Object* $tmp306 = $tmp304($tmp297);
org$pandalanguage$pandac$MethodDecl* $tmp307 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp306)));
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) $tmp306);
// line 188
panda$core$MutableString* $tmp308 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp309 = *(&local5);
panda$core$String* $tmp310 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String($tmp309);
panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp310, &$s312);
panda$core$MutableString$append$panda$core$String($tmp308, $tmp311);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$Panda$unref$panda$core$Object$Q($tmp306);
org$pandalanguage$pandac$MethodDecl* $tmp313 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing m
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block12;
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// line 190
panda$core$MutableString* $tmp314 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp314, &$s315);
// line 191
panda$core$MutableString* $tmp316 = *(&local0);
panda$core$String* $tmp317 = panda$core$MutableString$finish$R$panda$core$String($tmp316);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
panda$core$String* $tmp318 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp319 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp317;

}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* param0) {

panda$io$File** $tmp320 = &param0->source;
panda$io$File* $tmp321 = *$tmp320;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
panda$core$String** $tmp322 = &param0->name;
panda$core$String* $tmp323 = *$tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
org$pandalanguage$pandac$Type** $tmp324 = &param0->type;
org$pandalanguage$pandac$Type* $tmp325 = *$tmp324;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
panda$collections$MapView** $tmp326 = &param0->aliases;
panda$collections$MapView* $tmp327 = *$tmp326;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$core$String** $tmp328 = &param0->doccomment;
panda$core$String* $tmp329 = *$tmp328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
org$pandalanguage$pandac$Annotations** $tmp330 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp331 = *$tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$collections$Array** $tmp332 = &param0->declaredSupers;
panda$collections$Array* $tmp333 = *$tmp332;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
org$pandalanguage$pandac$Type** $tmp334 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp335 = *$tmp334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
panda$collections$Array** $tmp336 = &param0->rawInterfaces;
panda$collections$Array* $tmp337 = *$tmp336;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$collections$List** $tmp338 = &param0->parameters;
panda$collections$List* $tmp339 = *$tmp338;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$collections$Array** $tmp340 = &param0->fields;
panda$collections$Array* $tmp341 = *$tmp340;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
panda$collections$Array** $tmp342 = &param0->methods;
panda$collections$Array* $tmp343 = *$tmp342;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$collections$Array** $tmp344 = &param0->classes;
panda$collections$Array* $tmp345 = *$tmp344;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
panda$collections$Array** $tmp346 = &param0->choiceCases;
panda$collections$Array* $tmp347 = *$tmp346;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$core$Weak** $tmp348 = &param0->owner;
panda$core$Weak* $tmp349 = *$tmp348;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
org$pandalanguage$pandac$SymbolTable** $tmp350 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp351 = *$tmp350;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
panda$collections$Array** $tmp352 = &param0->virtualMethods;
panda$collections$Array* $tmp353 = *$tmp352;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
panda$collections$HashMap** $tmp354 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp355 = *$tmp354;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
return;

}

