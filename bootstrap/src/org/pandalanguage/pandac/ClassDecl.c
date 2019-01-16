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
typedef panda$core$Int64 (*$fn163)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn185)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn251)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn282)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn295)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn304)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn317)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn326)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 574, -1893327939731735360, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 85, 1438438597437898972, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* param0, panda$io$File* param1, org$pandalanguage$pandac$Position param2, panda$collections$MapView* param3, panda$core$String* param4, org$pandalanguage$pandac$Annotations* param5, org$pandalanguage$pandac$ClassDecl$Kind param6, org$pandalanguage$pandac$Type* param7, panda$collections$ListView* param8, panda$collections$Array* param9, org$pandalanguage$pandac$SymbolTable* param10) {

org$pandalanguage$pandac$ClassDecl$GenericParameter* local0 = NULL;
// line 81
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) NULL)));
org$pandalanguage$pandac$Type** $tmp2 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Type** $tmp4 = &param0->rawSuper;
*$tmp4 = ((org$pandalanguage$pandac$Type*) NULL);
// line 86
panda$collections$Array* $tmp5 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$collections$Array** $tmp6 = &param0->rawInterfaces;
panda$collections$Array* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$collections$Array** $tmp8 = &param0->rawInterfaces;
*$tmp8 = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($10:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 90
panda$collections$Array* $tmp9 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$collections$Array** $tmp10 = &param0->fields;
panda$collections$Array* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$collections$Array** $tmp12 = &param0->fields;
*$tmp12 = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($25:panda.collections.Array<org.pandalanguage.pandac.FieldDecl>)
// line 92
panda$collections$Array* $tmp13 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$collections$Array** $tmp14 = &param0->methods;
panda$collections$Array* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$collections$Array** $tmp16 = &param0->methods;
*$tmp16 = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($40:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 94
panda$collections$Array* $tmp17 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$collections$Array** $tmp18 = &param0->classes;
panda$collections$Array* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$collections$Array** $tmp20 = &param0->classes;
*$tmp20 = $tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($55:panda.collections.Array<org.pandalanguage.pandac.ClassDecl>)
// line 96
panda$collections$Array* $tmp21 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp21);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$collections$Array** $tmp22 = &param0->choiceCases;
panda$collections$Array* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$collections$Array** $tmp24 = &param0->choiceCases;
*$tmp24 = $tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($70:panda.collections.Array<org.pandalanguage.pandac.ChoiceCase>)
// line 99
panda$core$Weak* $tmp25 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp25, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Weak** $tmp26 = &param0->owner;
panda$core$Weak* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
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
panda$collections$Array* $tmp33 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp33);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$collections$Array** $tmp34 = &param0->virtualMethods;
panda$collections$Array* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$collections$Array** $tmp36 = &param0->virtualMethods;
*$tmp36 = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($109:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 110
panda$collections$HashMap* $tmp37 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$collections$HashMap** $tmp38 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$String** $tmp50 = &param0->name;
panda$core$String* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$String** $tmp52 = &param0->name;
*$tmp52 = $tmp49;
// line 120
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$Type** $tmp53 = &param0->type;
org$pandalanguage$pandac$Type* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$Type** $tmp55 = &param0->type;
*$tmp55 = param7;
// line 121
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp56 = &param0->source;
panda$io$File* $tmp57 = *$tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$io$File** $tmp58 = &param0->source;
*$tmp58 = param1;
// line 122
panda$collections$HashMap* $tmp59 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp59, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) $tmp59)));
panda$collections$MapView** $tmp60 = &param0->aliases;
panda$collections$MapView* $tmp61 = *$tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$collections$MapView** $tmp62 = &param0->aliases;
*$tmp62 = ((panda$collections$MapView*) $tmp59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($179:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 123
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp63 = &param0->doccomment;
panda$core$String* $tmp64 = *$tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$String** $tmp65 = &param0->doccomment;
*$tmp65 = param4;
// line 124
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Annotations** $tmp66 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
org$pandalanguage$pandac$Annotations** $tmp68 = &param0->annotations;
*$tmp68 = param5;
// line 125
org$pandalanguage$pandac$ClassDecl$Kind* $tmp69 = &param0->classKind;
*$tmp69 = param6;
// line 126
panda$collections$Array* $tmp70 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp70, ((panda$collections$CollectionView*) param8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$collections$Array** $tmp71 = &param0->declaredSupers;
panda$collections$Array* $tmp72 = *$tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$collections$Array** $tmp73 = &param0->declaredSupers;
*$tmp73 = $tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($217:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 127
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$List*) param9)));
panda$collections$List** $tmp74 = &param0->parameters;
panda$collections$List* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$collections$List** $tmp76 = &param0->parameters;
*$tmp76 = ((panda$collections$List*) param9);
// line 128
org$pandalanguage$pandac$SymbolTable* $tmp77 = (org$pandalanguage$pandac$SymbolTable*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp77, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
org$pandalanguage$pandac$SymbolTable** $tmp78 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp103)));
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
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
org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit($tmp149.nonnull);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp152 = (panda$core$Int64) {150};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block3:;
panda$core$String$Index $tmp155 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp148, ((panda$core$String$Index) $tmp149.value));
panda$core$Bit $tmp156 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp157 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp155, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp156);
panda$core$String* $tmp158 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp146, $tmp157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing REF($35:panda.core.String)
return $tmp158;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ClassDecl$GenericParameter* local1 = NULL;
// line 154
panda$collections$List** $tmp159 = &param0->parameters;
panda$collections$List* $tmp160 = *$tmp159;
ITable* $tmp161 = ((panda$collections$CollectionView*) $tmp160)->$class->itable;
while ($tmp161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
panda$core$Int64 $tmp164 = $tmp162(((panda$collections$CollectionView*) $tmp160));
panda$core$Int64 $tmp165 = (panda$core$Int64) {0};
panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block1; else goto block2;
block1:;
// line 155
org$pandalanguage$pandac$Type** $tmp168 = &param0->type;
org$pandalanguage$pandac$Type* $tmp169 = *$tmp168;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
return $tmp169;
block2:;
// line 157
panda$collections$Array* $tmp170 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp170);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
panda$collections$Array* $tmp171 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
*(&local0) = $tmp170;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($17:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 158
panda$collections$List** $tmp172 = &param0->parameters;
panda$collections$List* $tmp173 = *$tmp172;
ITable* $tmp174 = ((panda$collections$Iterable*) $tmp173)->$class->itable;
while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
panda$collections$Iterator* $tmp177 = $tmp175(((panda$collections$Iterable*) $tmp173));
goto block3;
block3:;
ITable* $tmp178 = $tmp177->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
panda$core$Bit $tmp181 = $tmp179($tmp177);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
ITable* $tmp183 = $tmp177->$class->itable;
while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
panda$core$Object* $tmp186 = $tmp184($tmp177);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp186)));
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp187 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp186);
// line 159
panda$collections$Array* $tmp188 = *(&local0);
org$pandalanguage$pandac$Type* $tmp189 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp190 = *(&local1);
org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp189, $tmp190);
panda$collections$Array$add$panda$collections$Array$T($tmp188, ((panda$core$Object*) $tmp189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($58:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
// unreffing REF($47:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp191 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($36:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 161
org$pandalanguage$pandac$Type** $tmp192 = &param0->type;
org$pandalanguage$pandac$Type* $tmp193 = *$tmp192;
panda$collections$Array* $tmp194 = *(&local0);
org$pandalanguage$pandac$Type* $tmp195 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp193, ((panda$collections$ListView*) $tmp194));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($83:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing finalParameters
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp195;

}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* param0) {

// line 165
panda$core$String** $tmp197 = &param0->name;
panda$core$String* $tmp198 = *$tmp197;
panda$core$Bit $tmp199 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp198, &$s200);
return $tmp199;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$FieldDecl* local4 = NULL;
org$pandalanguage$pandac$MethodDecl* local5 = NULL;
// line 170
panda$core$MutableString* $tmp201 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Annotations** $tmp202 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp203 = *$tmp202;
panda$core$String* $tmp204 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp203);
panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s206);
panda$core$String** $tmp207 = &param0->name;
panda$core$String* $tmp208 = *$tmp207;
panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, $tmp208);
panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s211);
panda$core$MutableString$init$panda$core$String($tmp201, $tmp210);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$MutableString* $tmp212 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
*(&local0) = $tmp201;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($1:panda.core.MutableString)
// line 171
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s213));
panda$core$String* $tmp214 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
*(&local1) = &$s215;
// line 172
org$pandalanguage$pandac$Type** $tmp216 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp217 = *$tmp216;
panda$core$Bit $tmp218 = panda$core$Bit$init$builtin_bit($tmp217 != NULL);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block1; else goto block2;
block1:;
// line 173
panda$core$MutableString* $tmp220 = *(&local0);
panda$core$String* $tmp221 = *(&local1);
panda$core$String* $tmp222 = panda$core$String$convert$R$panda$core$String($tmp221);
panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s224);
org$pandalanguage$pandac$Type** $tmp225 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp226 = *$tmp225;
panda$core$Bit $tmp227 = panda$core$Bit$init$builtin_bit($tmp226 != NULL);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp229 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block3:;
panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp223, ((panda$core$Object*) $tmp226));
panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s234);
panda$core$MutableString$append$panda$core$String($tmp220, $tmp233);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing REF($64:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($51:panda.core.String)
// line 174
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s235));
panda$core$String* $tmp236 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
*(&local1) = &$s237;
goto block2;
block2:;
// line 176
panda$collections$Array** $tmp238 = &param0->rawInterfaces;
panda$collections$Array* $tmp239 = *$tmp238;
ITable* $tmp240 = ((panda$collections$Iterable*) $tmp239)->$class->itable;
while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
panda$collections$Iterator* $tmp243 = $tmp241(((panda$collections$Iterable*) $tmp239));
goto block5;
block5:;
ITable* $tmp244 = $tmp243->$class->itable;
while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
panda$core$Bit $tmp247 = $tmp245($tmp243);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block7; else goto block6;
block6:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp249 = $tmp243->$class->itable;
while ($tmp249->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[1];
panda$core$Object* $tmp252 = $tmp250($tmp243);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp252)));
org$pandalanguage$pandac$Type* $tmp253 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp252);
// line 177
panda$core$MutableString* $tmp254 = *(&local0);
panda$core$String* $tmp255 = *(&local1);
panda$core$String* $tmp256 = panda$core$String$convert$R$panda$core$String($tmp255);
panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s258);
org$pandalanguage$pandac$Type* $tmp259 = *(&local2);
panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp257, ((panda$core$Object*) $tmp259));
panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, &$s262);
panda$core$MutableString$append$panda$core$String($tmp254, $tmp261);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($119:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing REF($118:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($115:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($114:panda.core.String)
// line 178
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s263));
panda$core$String* $tmp264 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
*(&local1) = &$s265;
panda$core$Panda$unref$panda$core$Object$Q($tmp252);
// unreffing REF($103:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp266 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($92:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 180
panda$core$MutableString* $tmp267 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp267, &$s268);
// line 181
panda$collections$Array** $tmp269 = &param0->classes;
panda$collections$Array* $tmp270 = *$tmp269;
ITable* $tmp271 = ((panda$collections$Iterable*) $tmp270)->$class->itable;
while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
panda$collections$Iterator* $tmp274 = $tmp272(((panda$collections$Iterable*) $tmp270));
goto block8;
block8:;
ITable* $tmp275 = $tmp274->$class->itable;
while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
panda$core$Bit $tmp278 = $tmp276($tmp274);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block10; else goto block9;
block9:;
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp280 = $tmp274->$class->itable;
while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[1];
panda$core$Object* $tmp283 = $tmp281($tmp274);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp283)));
org$pandalanguage$pandac$ClassDecl* $tmp284 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) $tmp283);
// line 182
panda$core$MutableString* $tmp285 = *(&local0);
org$pandalanguage$pandac$ClassDecl* $tmp286 = *(&local3);
panda$core$String* $tmp287 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String($tmp286);
panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp287, &$s289);
panda$core$MutableString$append$panda$core$String($tmp285, $tmp288);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp283);
// unreffing REF($172:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp290 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing REF($161:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 184
panda$collections$Array** $tmp291 = &param0->fields;
panda$collections$Array* $tmp292 = *$tmp291;
ITable* $tmp293 = ((panda$collections$Iterable*) $tmp292)->$class->itable;
while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[0];
panda$collections$Iterator* $tmp296 = $tmp294(((panda$collections$Iterable*) $tmp292));
goto block11;
block11:;
ITable* $tmp297 = $tmp296->$class->itable;
while ($tmp297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
panda$core$Bit $tmp300 = $tmp298($tmp296);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block13; else goto block12;
block12:;
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp302 = $tmp296->$class->itable;
while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[1];
panda$core$Object* $tmp305 = $tmp303($tmp296);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp305)));
org$pandalanguage$pandac$FieldDecl* $tmp306 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) $tmp305);
// line 185
panda$core$MutableString* $tmp307 = *(&local0);
org$pandalanguage$pandac$FieldDecl* $tmp308 = *(&local4);
panda$core$String* $tmp309 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String($tmp308);
panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s311);
panda$core$MutableString$append$panda$core$String($tmp307, $tmp310);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($233:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($232:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp305);
// unreffing REF($221:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp312 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing f
*(&local4) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block11;
block13:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($210:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 187
panda$collections$Array** $tmp313 = &param0->methods;
panda$collections$Array* $tmp314 = *$tmp313;
ITable* $tmp315 = ((panda$collections$Iterable*) $tmp314)->$class->itable;
while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
panda$collections$Iterator* $tmp318 = $tmp316(((panda$collections$Iterable*) $tmp314));
goto block14;
block14:;
ITable* $tmp319 = $tmp318->$class->itable;
while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
panda$core$Bit $tmp322 = $tmp320($tmp318);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block16; else goto block15;
block15:;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp324 = $tmp318->$class->itable;
while ($tmp324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
panda$core$Object* $tmp327 = $tmp325($tmp318);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp327)));
org$pandalanguage$pandac$MethodDecl* $tmp328 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) $tmp327);
// line 188
panda$core$MutableString* $tmp329 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp330 = *(&local5);
panda$core$String* $tmp331 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String($tmp330);
panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s333);
panda$core$MutableString$append$panda$core$String($tmp329, $tmp332);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing REF($282:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($281:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp327);
// unreffing REF($270:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp334 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing m
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($259:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 190
panda$core$MutableString* $tmp335 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp335, &$s336);
// line 191
panda$core$MutableString* $tmp337 = *(&local0);
panda$core$String* $tmp338 = panda$core$MutableString$finish$R$panda$core$String($tmp337);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($307:panda.core.String)
panda$core$String* $tmp339 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp340 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp338;

}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp341 = &param0->source;
panda$io$File* $tmp342 = *$tmp341;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$String** $tmp343 = &param0->name;
panda$core$String* $tmp344 = *$tmp343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
org$pandalanguage$pandac$Type** $tmp345 = &param0->type;
org$pandalanguage$pandac$Type* $tmp346 = *$tmp345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
panda$collections$MapView** $tmp347 = &param0->aliases;
panda$collections$MapView* $tmp348 = *$tmp347;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
panda$core$String** $tmp349 = &param0->doccomment;
panda$core$String* $tmp350 = *$tmp349;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
org$pandalanguage$pandac$Annotations** $tmp351 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp352 = *$tmp351;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
panda$collections$Array** $tmp353 = &param0->declaredSupers;
panda$collections$Array* $tmp354 = *$tmp353;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
org$pandalanguage$pandac$Type** $tmp355 = &param0->rawSuper;
org$pandalanguage$pandac$Type* $tmp356 = *$tmp355;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
panda$collections$Array** $tmp357 = &param0->rawInterfaces;
panda$collections$Array* $tmp358 = *$tmp357;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$collections$List** $tmp359 = &param0->parameters;
panda$collections$List* $tmp360 = *$tmp359;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
panda$collections$Array** $tmp361 = &param0->fields;
panda$collections$Array* $tmp362 = *$tmp361;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
panda$collections$Array** $tmp363 = &param0->methods;
panda$collections$Array* $tmp364 = *$tmp363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
panda$collections$Array** $tmp365 = &param0->classes;
panda$collections$Array* $tmp366 = *$tmp365;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
panda$collections$Array** $tmp367 = &param0->choiceCases;
panda$collections$Array* $tmp368 = *$tmp367;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
panda$core$Weak** $tmp369 = &param0->owner;
panda$core$Weak* $tmp370 = *$tmp369;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
org$pandalanguage$pandac$SymbolTable** $tmp371 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp372 = *$tmp371;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
panda$collections$Array** $tmp373 = &param0->virtualMethods;
panda$collections$Array* $tmp374 = *$tmp373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
panda$collections$HashMap** $tmp375 = &param0->classResolutionCache;
panda$collections$HashMap* $tmp376 = *$tmp375;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
return;

}

