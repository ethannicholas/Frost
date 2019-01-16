#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionWriter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, org$pandalanguage$pandac$SymbolTable$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$core$Bit (*$fn61)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn134)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn139)(panda$collections$Iterator*);
typedef void (*$fn158)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn172)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn214)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn297)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn337)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn341)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn346)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn372)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x6d\x65\x72\x67\x65\x28\x73\x79\x6d\x62\x6f\x6c\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x2c\x20\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 194, 6407275719991587696, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 5
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp3 = &param0->symbols;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$HashMap** $tmp5 = &param0->symbols;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 12
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp7 = &param0->merged;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$collections$HashMap** $tmp9 = &param0->merged;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 15
panda$collections$Array* $tmp10 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$collections$Array** $tmp11 = &param0->parents;
panda$collections$Array* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$collections$Array** $tmp13 = &param0->parents;
*$tmp13 = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.SymbolTable>)
// line 18
panda$core$Weak* $tmp14 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp14, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Weak** $tmp15 = &param0->compiler;
panda$core$Weak* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Weak** $tmp17 = &param0->compiler;
*$tmp17 = $tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($46:panda.core.Weak<org.pandalanguage.pandac.Compiler>)
return;

}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$SymbolTable* param1) {

// line 5
panda$collections$HashMap* $tmp18 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp18);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$collections$HashMap** $tmp19 = &param0->symbols;
panda$collections$HashMap* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$collections$HashMap** $tmp21 = &param0->symbols;
*$tmp21 = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 12
panda$collections$HashMap* $tmp22 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp22);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$collections$HashMap** $tmp23 = &param0->merged;
panda$collections$HashMap* $tmp24 = *$tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$collections$HashMap** $tmp25 = &param0->merged;
*$tmp25 = $tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 15
panda$collections$Array* $tmp26 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$collections$Array** $tmp27 = &param0->parents;
panda$collections$Array* $tmp28 = *$tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$collections$Array** $tmp29 = &param0->parents;
*$tmp29 = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.SymbolTable>)
// line 22
panda$core$Weak** $tmp30 = &param1->compiler;
panda$core$Weak* $tmp31 = *$tmp30;
panda$core$Object* $tmp32 = panda$core$Weak$get$R$panda$core$Weak$T($tmp31);
panda$core$Weak* $tmp33 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp33, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp32)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Weak** $tmp34 = &param0->compiler;
panda$core$Weak* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Weak** $tmp36 = &param0->compiler;
*$tmp36 = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($51:panda.core.Weak<org.pandalanguage.pandac.Compiler>)
panda$core$Panda$unref$panda$core$Object$Q($tmp32);
// unreffing REF($49:panda.core.Weak.T)
// line 23
panda$collections$Array** $tmp37 = &param0->parents;
panda$collections$Array* $tmp38 = *$tmp37;
panda$collections$Array$add$panda$collections$Array$T($tmp38, ((panda$core$Object*) param1));
return;

}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1) {

// line 27
panda$core$String** $tmp39 = &param1->name;
panda$core$String* $tmp40 = *$tmp39;
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(param0, param1, $tmp40);
return;

}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1, panda$core$String* param2) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$collections$Array* local2 = NULL;
// line 31
panda$collections$HashMap** $tmp41 = &param0->merged;
panda$collections$HashMap* $tmp42 = *$tmp41;
panda$collections$HashMap$remove$panda$collections$HashMap$K($tmp42, ((panda$collections$Key*) param2));
// line 32
panda$collections$HashMap** $tmp43 = &param0->symbols;
panda$collections$HashMap* $tmp44 = *$tmp43;
panda$core$Object* $tmp45 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp44, ((panda$collections$Key*) param2));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp45)));
org$pandalanguage$pandac$Symbol* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp45);
panda$core$Panda$unref$panda$core$Object$Q($tmp45);
// unreffing REF($11:panda.collections.HashMap.V?)
// line 33
org$pandalanguage$pandac$Symbol* $tmp47 = *(&local0);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 34
panda$collections$HashMap** $tmp50 = &param0->symbols;
panda$collections$HashMap* $tmp51 = *$tmp50;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp51, ((panda$collections$Key*) param2), ((panda$core$Object*) param1));
// line 35
org$pandalanguage$pandac$Symbol* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block2:;
// line 37
org$pandalanguage$pandac$Symbol$Kind* $tmp53 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp54 = *$tmp53;
org$pandalanguage$pandac$Symbol$Kind$wrapper* $tmp55;
$tmp55 = (org$pandalanguage$pandac$Symbol$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$Kind$wrapperclass);
$tmp55->value = $tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Symbol$Kind $tmp57 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp56);
org$pandalanguage$pandac$Symbol$Kind$wrapper* $tmp58;
$tmp58 = (org$pandalanguage$pandac$Symbol$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$Kind$wrapperclass);
$tmp58->value = $tmp57;
ITable* $tmp59 = ((panda$core$Equatable*) $tmp55)->$class->itable;
while ($tmp59->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
panda$core$Bit $tmp62 = $tmp60(((panda$core$Equatable*) $tmp55), ((panda$core$Equatable*) $tmp58));
bool $tmp63 = $tmp62.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp58)));
// unreffing REF($50:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp55)));
// unreffing REF($46:panda.core.Equatable<org.pandalanguage.pandac.Symbol.Kind>)
if ($tmp63) goto block3; else goto block4;
block3:;
// line 38
org$pandalanguage$pandac$Symbol* $tmp64 = *(&local0);
panda$core$Bit $tmp65 = panda$core$Bit$init$builtin_bit($tmp64 != NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp67 = (panda$core$Int64) {38};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block5:;
org$pandalanguage$pandac$Symbol$Kind* $tmp70 = &$tmp64->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp71 = *$tmp70;
panda$core$Int64 $tmp72 = $tmp71.$rawValue;
panda$core$Int64 $tmp73 = (panda$core$Int64) {5};
panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp72, $tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block8; else goto block9;
block8:;
// line 40
panda$collections$Array* $tmp76 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp76);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
panda$collections$Array* $tmp77 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
*(&local1) = $tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($79:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 41
panda$collections$Array* $tmp78 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 42
panda$collections$Array* $tmp79 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp80 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp79, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp80)));
// line 43
panda$collections$HashMap** $tmp81 = &param0->symbols;
panda$collections$HashMap* $tmp82 = *$tmp81;
org$pandalanguage$pandac$Methods* $tmp83 = (org$pandalanguage$pandac$Methods*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp84 = *(&local1);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp83, ((panda$collections$ListView*) $tmp84));
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp82, ((panda$collections$Key*) param2), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp83)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($110:org.pandalanguage.pandac.Methods)
// line 44
panda$collections$Array* $tmp85 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing methods
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block9:;
panda$core$Int64 $tmp87 = (panda$core$Int64) {6};
panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp72, $tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block10; else goto block7;
block10:;
// line 47
panda$collections$Array* $tmp90 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp90);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$collections$Array* $tmp91 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local2) = $tmp90;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($137:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 48
panda$collections$Array* $tmp92 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp92, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 49
panda$collections$Array* $tmp93 = *(&local2);
org$pandalanguage$pandac$Symbol* $tmp94 = *(&local0);
org$pandalanguage$pandac$FixedArray** $tmp95 = &((org$pandalanguage$pandac$Methods*) $tmp94)->methods;
org$pandalanguage$pandac$FixedArray* $tmp96 = *$tmp95;
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp93, ((panda$collections$CollectionView*) $tmp96));
// line 50
panda$collections$HashMap** $tmp97 = &param0->symbols;
panda$collections$HashMap* $tmp98 = *$tmp97;
org$pandalanguage$pandac$Methods* $tmp99 = (org$pandalanguage$pandac$Methods*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp100 = *(&local2);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp99, ((panda$collections$ListView*) $tmp100));
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp98, ((panda$collections$Key*) param2), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp99)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing REF($171:org.pandalanguage.pandac.Methods)
// line 51
panda$collections$Array* $tmp101 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing methods
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp102 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block7:;
goto block4;
block4:;
// line 55
panda$core$Weak** $tmp103 = &param0->compiler;
panda$core$Weak* $tmp104 = *$tmp103;
panda$core$Object* $tmp105 = panda$core$Weak$get$R$panda$core$Weak$T($tmp104);
org$pandalanguage$pandac$Position* $tmp106 = &param1->position;
org$pandalanguage$pandac$Position $tmp107 = *$tmp106;
panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s109, param2);
panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s111);
org$pandalanguage$pandac$Symbol* $tmp112 = *(&local0);
panda$core$Bit $tmp113 = panda$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp115 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s116, $tmp115, &$s117);
abort(); // unreachable
block11:;
org$pandalanguage$pandac$Position* $tmp118 = &$tmp112->position;
org$pandalanguage$pandac$Position $tmp119 = *$tmp118;
org$pandalanguage$pandac$Position$wrapper* $tmp120;
$tmp120 = (org$pandalanguage$pandac$Position$wrapper*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp120->value = $tmp119;
panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp110, ((panda$core$Object*) $tmp120));
panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s123);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp105), $tmp107, $tmp122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($217:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($216:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($215:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($203:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($202:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing REF($198:panda.core.Weak.T)
org$pandalanguage$pandac$Symbol* $tmp124 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;

}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$MethodDecl* param1, panda$collections$List* param2) {

org$pandalanguage$pandac$MethodDecl* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
// line 61
panda$core$Bit $tmp125 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(param1);
panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block1; else goto block2;
block1:;
// line 62
return;
block2:;
// line 64
ITable* $tmp128 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
panda$collections$Iterator* $tmp131 = $tmp129(((panda$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp132 = $tmp131->$class->itable;
while ($tmp132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[0];
panda$core$Bit $tmp135 = $tmp133($tmp131);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp137 = $tmp131->$class->itable;
while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
panda$core$Object* $tmp140 = $tmp138($tmp131);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp140)));
org$pandalanguage$pandac$MethodDecl* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) $tmp140);
// line 65
panda$core$Weak** $tmp142 = &param0->compiler;
panda$core$Weak* $tmp143 = *$tmp142;
panda$core$Object* $tmp144 = panda$core$Weak$get$R$panda$core$Weak$T($tmp143);
org$pandalanguage$pandac$MethodDecl* $tmp145 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp146 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp144), $tmp145);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
org$pandalanguage$pandac$MethodDecl* $tmp147 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
*(&local1) = $tmp146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($37:org.pandalanguage.pandac.MethodDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp144);
// unreffing REF($34:panda.core.Weak.T)
// line 66
org$pandalanguage$pandac$MethodDecl* $tmp148 = *(&local1);
bool $tmp149 = $tmp148 == param1;
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit($tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block6; else goto block7;
block6:;
// line 67
org$pandalanguage$pandac$MethodDecl* $tmp152 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing overridden
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp140);
// unreffing REF($22:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp153 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($11:panda.collections.Iterator<panda.collections.Iterable.T>)
return;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing overridden
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp140);
// unreffing REF($22:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp155 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($11:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 70
ITable* $tmp156 = ((panda$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp156->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
$tmp157(((panda$collections$CollectionWriter*) param2), ((panda$core$Object*) param1));
return;

}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1, org$pandalanguage$pandac$Symbol* param2) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
panda$collections$Array* local7 = NULL;
panda$collections$Array* local8 = NULL;
org$pandalanguage$pandac$MethodDecl* local9 = NULL;
panda$collections$Array* local10 = NULL;
// line 75
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block1; else goto block2;
block1:;
// line 76
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 78
panda$core$Bit $tmp161 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block3; else goto block4;
block3:;
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block4:;
// line 81
bool $tmp163 = param1 == param2;
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit($tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block5; else goto block6;
block5:;
// line 82
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block6:;
// line 84
panda$core$Bit $tmp166 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp168 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s169, $tmp168, &$s170);
abort(); // unreachable
block9:;
$fn172 $tmp171 = ($fn172) param2->$class->vtable[2];
panda$core$Bit $tmp173 = $tmp171(param2);
panda$core$Bit $tmp174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block7; else goto block8;
block7:;
// line 85
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block8:;
// line 87
panda$core$Bit $tmp176 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp178 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s179, $tmp178, &$s180);
abort(); // unreachable
block11:;
org$pandalanguage$pandac$Symbol$Kind* $tmp181 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp182 = *$tmp181;
panda$core$Int64 $tmp183 = $tmp182.$rawValue;
panda$core$Int64 $tmp184 = (panda$core$Int64) {5};
panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp183, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block14; else goto block15;
block14:;
// line 89
panda$core$Bit $tmp187 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp189 = (panda$core$Int64) {89};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s190, $tmp189, &$s191);
abort(); // unreachable
block16:;
org$pandalanguage$pandac$Symbol$Kind* $tmp192 = &param2->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp193 = *$tmp192;
panda$core$Int64 $tmp194 = $tmp193.$rawValue;
panda$core$Int64 $tmp195 = (panda$core$Int64) {6};
panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp194, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block19; else goto block20;
block19:;
// line 91
panda$collections$Array* $tmp198 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp198);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
panda$collections$Array* $tmp199 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
*(&local0) = $tmp198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($78:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 92
panda$collections$Array* $tmp200 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp200, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 93
org$pandalanguage$pandac$FixedArray** $tmp201 = &((org$pandalanguage$pandac$Methods*) param2)->methods;
org$pandalanguage$pandac$FixedArray* $tmp202 = *$tmp201;
ITable* $tmp203 = ((panda$collections$Iterable*) $tmp202)->$class->itable;
while ($tmp203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[0];
panda$collections$Iterator* $tmp206 = $tmp204(((panda$collections$Iterable*) $tmp202));
goto block21;
block21:;
ITable* $tmp207 = $tmp206->$class->itable;
while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
panda$core$Bit $tmp210 = $tmp208($tmp206);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block23; else goto block22;
block22:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp212 = $tmp206->$class->itable;
while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[1];
panda$core$Object* $tmp215 = $tmp213($tmp206);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp215)));
org$pandalanguage$pandac$MethodDecl* $tmp216 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) $tmp215);
// line 94
org$pandalanguage$pandac$MethodDecl* $tmp217 = *(&local1);
panda$collections$Array* $tmp218 = *(&local0);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp217, ((panda$collections$List*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q($tmp215);
// unreffing REF($115:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp219 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($104:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 96
org$pandalanguage$pandac$Methods* $tmp220 = (org$pandalanguage$pandac$Methods*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp221 = *(&local0);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp220, ((panda$collections$ListView*) $tmp221));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp220)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing REF($141:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp222 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing methods
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp220);
block20:;
panda$core$Int64 $tmp223 = (panda$core$Int64) {5};
panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp194, $tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block24; else goto block25;
block24:;
// line 99
panda$core$Weak** $tmp226 = &param0->compiler;
panda$core$Weak* $tmp227 = *$tmp226;
panda$core$Object* $tmp228 = panda$core$Weak$get$R$panda$core$Weak$T($tmp227);
org$pandalanguage$pandac$MethodDecl* $tmp229 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp228), ((org$pandalanguage$pandac$MethodDecl*) param2));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
org$pandalanguage$pandac$MethodDecl* $tmp230 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
*(&local2) = $tmp229;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($168:org.pandalanguage.pandac.MethodDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp228);
// unreffing REF($165:panda.core.Weak.T)
// line 100
panda$core$Weak** $tmp231 = &param0->compiler;
panda$core$Weak* $tmp232 = *$tmp231;
panda$core$Object* $tmp233 = panda$core$Weak$get$R$panda$core$Weak$T($tmp232);
org$pandalanguage$pandac$MethodDecl* $tmp234 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp233), ((org$pandalanguage$pandac$MethodDecl*) param1));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
org$pandalanguage$pandac$MethodDecl* $tmp235 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
*(&local3) = $tmp234;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($189:org.pandalanguage.pandac.MethodDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp233);
// unreffing REF($186:panda.core.Weak.T)
// line 101
org$pandalanguage$pandac$MethodDecl* $tmp236 = *(&local2);
bool $tmp237 = $tmp236 == ((org$pandalanguage$pandac$MethodDecl*) param1);
panda$core$Bit $tmp238 = panda$core$Bit$init$builtin_bit($tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block28; else goto block29;
block28:;
*(&local5) = $tmp238;
goto block30;
block29:;
org$pandalanguage$pandac$MethodDecl* $tmp240 = *(&local3);
bool $tmp241 = $tmp240 == ((org$pandalanguage$pandac$MethodDecl*) param2);
panda$core$Bit $tmp242 = panda$core$Bit$init$builtin_bit($tmp241);
*(&local5) = $tmp242;
goto block30;
block30:;
panda$core$Bit $tmp243 = *(&local5);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block31; else goto block32;
block31:;
*(&local4) = $tmp243;
goto block33;
block32:;
org$pandalanguage$pandac$MethodDecl* $tmp245 = *(&local2);
panda$core$Bit $tmp246 = panda$core$Bit$init$builtin_bit($tmp245 != NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$MethodDecl* $tmp248 = *(&local2);
org$pandalanguage$pandac$MethodDecl* $tmp249 = *(&local3);
bool $tmp250 = $tmp248 == $tmp249;
panda$core$Bit $tmp251 = panda$core$Bit$init$builtin_bit($tmp250);
*(&local6) = $tmp251;
goto block36;
block35:;
*(&local6) = $tmp246;
goto block36;
block36:;
panda$core$Bit $tmp252 = *(&local6);
*(&local4) = $tmp252;
goto block33;
block33:;
panda$core$Bit $tmp253 = *(&local4);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block26; else goto block27;
block26:;
// line 104
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$MethodDecl* $tmp255 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing overridden2
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp256 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing overridden1
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return param1;
block27:;
// line 106
panda$collections$Array* $tmp257 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp257);
*(&local7) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$collections$Array* $tmp258 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
*(&local7) = $tmp257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($257:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 107
panda$collections$Array* $tmp259 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp259, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 108
panda$collections$Array* $tmp260 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp260, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param2)));
// line 109
org$pandalanguage$pandac$Methods* $tmp261 = (org$pandalanguage$pandac$Methods*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp262 = *(&local7);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp261, ((panda$collections$ListView*) $tmp262));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp261)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($283:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp263 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing methods
*(&local7) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp264 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing overridden2
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp265 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing overridden1
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp261);
block25:;
// line 112
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block18:;
goto block13;
block15:;
panda$core$Int64 $tmp266 = (panda$core$Int64) {6};
panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp183, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block37; else goto block38;
block37:;
// line 117
panda$core$Bit $tmp269 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp271 = (panda$core$Int64) {117};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s272, $tmp271, &$s273);
abort(); // unreachable
block39:;
org$pandalanguage$pandac$Symbol$Kind* $tmp274 = &param2->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp275 = *$tmp274;
panda$core$Int64 $tmp276 = $tmp275.$rawValue;
panda$core$Int64 $tmp277 = (panda$core$Int64) {6};
panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp276, $tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block42; else goto block43;
block42:;
// line 119
panda$collections$Array* $tmp280 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
org$pandalanguage$pandac$FixedArray** $tmp281 = &((org$pandalanguage$pandac$Methods*) param1)->methods;
org$pandalanguage$pandac$FixedArray* $tmp282 = *$tmp281;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp280, ((panda$collections$CollectionView*) $tmp282));
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
panda$collections$Array* $tmp283 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
*(&local8) = $tmp280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing REF($335:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 120
org$pandalanguage$pandac$FixedArray** $tmp284 = &((org$pandalanguage$pandac$Methods*) param2)->methods;
org$pandalanguage$pandac$FixedArray* $tmp285 = *$tmp284;
ITable* $tmp286 = ((panda$collections$Iterable*) $tmp285)->$class->itable;
while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
panda$collections$Iterator* $tmp289 = $tmp287(((panda$collections$Iterable*) $tmp285));
goto block44;
block44:;
ITable* $tmp290 = $tmp289->$class->itable;
while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
panda$core$Bit $tmp293 = $tmp291($tmp289);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block46; else goto block45;
block45:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp295 = $tmp289->$class->itable;
while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[1];
panda$core$Object* $tmp298 = $tmp296($tmp289);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp298)));
org$pandalanguage$pandac$MethodDecl* $tmp299 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp298);
// line 121
org$pandalanguage$pandac$MethodDecl* $tmp300 = *(&local9);
panda$collections$Array* $tmp301 = *(&local8);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp300, ((panda$collections$List*) $tmp301));
panda$core$Panda$unref$panda$core$Object$Q($tmp298);
// unreffing REF($371:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp302 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block44;
block46:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($360:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 123
org$pandalanguage$pandac$Methods* $tmp303 = (org$pandalanguage$pandac$Methods*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp304 = *(&local8);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp303, ((panda$collections$ListView*) $tmp304));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp303)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($397:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp305 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing methods
*(&local8) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp303);
block43:;
panda$core$Int64 $tmp306 = (panda$core$Int64) {5};
panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp276, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block47; else goto block48;
block47:;
// line 126
panda$collections$Array* $tmp309 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
org$pandalanguage$pandac$FixedArray** $tmp310 = &((org$pandalanguage$pandac$Methods*) param1)->methods;
org$pandalanguage$pandac$FixedArray* $tmp311 = *$tmp310;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp309, ((panda$collections$CollectionView*) $tmp311));
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
panda$collections$Array* $tmp312 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
*(&local10) = $tmp309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($418:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 127
panda$collections$Array* $tmp313 = *(&local10);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, ((org$pandalanguage$pandac$MethodDecl*) param2), ((panda$collections$List*) $tmp313));
// line 128
org$pandalanguage$pandac$Methods* $tmp314 = (org$pandalanguage$pandac$Methods*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp315 = *(&local10);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp314, ((panda$collections$ListView*) $tmp315));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp314)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($442:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp316 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing methods
*(&local10) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp314);
block48:;
// line 131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block41:;
goto block13;
block38:;
// line 136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block13:;
panda$core$Bit $tmp317 = panda$core$Bit$init$builtin_bit(false);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp319 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s320, $tmp319, &$s321);
abort(); // unreachable
block49:;
abort(); // unreachable

}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* param0, panda$core$String* param1) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
org$pandalanguage$pandac$SymbolTable* local1 = NULL;
// line 142
panda$collections$HashMap** $tmp322 = &param0->merged;
panda$collections$HashMap* $tmp323 = *$tmp322;
panda$core$Object* $tmp324 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp323, ((panda$collections$Key*) param1));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp324)));
org$pandalanguage$pandac$Symbol* $tmp325 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp324);
panda$core$Panda$unref$panda$core$Object$Q($tmp324);
// unreffing REF($5:panda.collections.HashMap.V?)
// line 143
org$pandalanguage$pandac$Symbol* $tmp326 = *(&local0);
panda$core$Bit $tmp327 = panda$core$Bit$init$builtin_bit($tmp326 == NULL);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block1; else goto block2;
block1:;
// line 144
panda$collections$HashMap** $tmp329 = &param0->symbols;
panda$collections$HashMap* $tmp330 = *$tmp329;
panda$core$Object* $tmp331 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp330, ((panda$collections$Key*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp331)));
org$pandalanguage$pandac$Symbol* $tmp332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp331);
panda$core$Panda$unref$panda$core$Object$Q($tmp331);
// unreffing REF($28:panda.collections.HashMap.V?)
// line 145
panda$collections$Array** $tmp333 = &param0->parents;
panda$collections$Array* $tmp334 = *$tmp333;
ITable* $tmp335 = ((panda$collections$Iterable*) $tmp334)->$class->itable;
while ($tmp335->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
panda$collections$Iterator* $tmp338 = $tmp336(((panda$collections$Iterable*) $tmp334));
goto block3;
block3:;
ITable* $tmp339 = $tmp338->$class->itable;
while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
panda$core$Bit $tmp342 = $tmp340($tmp338);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
ITable* $tmp344 = $tmp338->$class->itable;
while ($tmp344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[1];
panda$core$Object* $tmp347 = $tmp345($tmp338);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$SymbolTable*) $tmp347)));
org$pandalanguage$pandac$SymbolTable* $tmp348 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) $tmp347);
// line 146
org$pandalanguage$pandac$Symbol* $tmp349 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp350 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp351 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp350, param1);
org$pandalanguage$pandac$Symbol* $tmp352 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(param0, $tmp349, $tmp351);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
org$pandalanguage$pandac$Symbol* $tmp353 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
*(&local0) = $tmp352;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($68:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing REF($67:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q($tmp347);
// unreffing REF($56:panda.collections.Iterator.T)
org$pandalanguage$pandac$SymbolTable* $tmp354 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($45:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 148
org$pandalanguage$pandac$Symbol* $tmp355 = *(&local0);
panda$core$Bit $tmp356 = panda$core$Bit$init$builtin_bit($tmp355 != NULL);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block6; else goto block7;
block6:;
// line 149
panda$collections$HashMap** $tmp358 = &param0->merged;
panda$collections$HashMap* $tmp359 = *$tmp358;
org$pandalanguage$pandac$Symbol* $tmp360 = *(&local0);
panda$core$Bit $tmp361 = panda$core$Bit$init$builtin_bit($tmp360 != NULL);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp363 = (panda$core$Int64) {149};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s364, $tmp363, &$s365);
abort(); // unreachable
block8:;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp359, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp360));
goto block7;
block7:;
goto block2;
block2:;
// line 152
org$pandalanguage$pandac$Symbol* $tmp366 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
org$pandalanguage$pandac$Symbol* $tmp367 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp366;

}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* param0) {

// line 157
panda$collections$Array** $tmp368 = &param0->parents;
panda$collections$Array* $tmp369 = *$tmp368;
ITable* $tmp370 = ((panda$collections$CollectionView*) $tmp369)->$class->itable;
while ($tmp370->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
panda$core$Int64 $tmp373 = $tmp371(((panda$collections$CollectionView*) $tmp369));
panda$core$Int64$wrapper* $tmp374;
$tmp374 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp374->value = $tmp373;
panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s376, ((panda$core$Object*) $tmp374));
panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s378);
panda$collections$HashMap** $tmp379 = &param0->symbols;
panda$collections$HashMap* $tmp380 = *$tmp379;
panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp377, ((panda$core$Object*) $tmp380));
panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s383);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing REF($6:panda.core.Object)
return $tmp382;

}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp384 = &param0->symbols;
panda$collections$HashMap* $tmp385 = *$tmp384;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
panda$core$Weak** $tmp386 = &param0->compiler;
panda$core$Weak* $tmp387 = *$tmp386;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
panda$collections$HashMap** $tmp388 = &param0->merged;
panda$collections$HashMap* $tmp389 = *$tmp388;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
panda$collections$Array** $tmp390 = &param0->parents;
panda$collections$Array* $tmp391 = *$tmp390;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
return;

}






