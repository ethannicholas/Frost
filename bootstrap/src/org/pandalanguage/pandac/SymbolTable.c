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
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionWriter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, org$pandalanguage$pandac$SymbolTable$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$core$Bit (*$fn65)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn124)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn133)(panda$collections$Iterator*);
typedef void (*$fn152)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn161)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn184)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn188)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn193)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn266)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn271)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn315)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn320)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn341)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 17, -5109432423674253279, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x6d\x65\x72\x67\x65\x28\x73\x79\x6d\x62\x6f\x6c\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x2c\x20\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 194, 6407275719991587696, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 5
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$collections$HashMap** $tmp3 = &param0->symbols;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp5 = &param0->symbols;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 12
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$collections$HashMap** $tmp7 = &param0->merged;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp9 = &param0->merged;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// line 15
panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp10);
panda$collections$Array** $tmp11 = &param0->parents;
panda$collections$Array* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$collections$Array** $tmp13 = &param0->parents;
*$tmp13 = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// line 18
panda$core$Weak* $tmp14 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp14, ((panda$core$Object*) param1));
panda$core$Weak** $tmp15 = &param0->compiler;
panda$core$Weak* $tmp16 = *$tmp15;
bool $tmp17 = $tmp16 != ((panda$core$Weak*) NULL);
if ($tmp17) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp18 = panda$core$Weak$get$R$panda$core$Weak$T($tmp16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp18)));
panda$core$Panda$unref$panda$core$Object$Q($tmp18);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Weak** $tmp19 = &param0->compiler;
*$tmp19 = $tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
return;

}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$SymbolTable* param1) {

// line 5
panda$collections$HashMap* $tmp20 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp20);
panda$collections$HashMap** $tmp21 = &param0->symbols;
panda$collections$HashMap* $tmp22 = *$tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$collections$HashMap** $tmp23 = &param0->symbols;
*$tmp23 = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// line 12
panda$collections$HashMap* $tmp24 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp24);
panda$collections$HashMap** $tmp25 = &param0->merged;
panda$collections$HashMap* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$collections$HashMap** $tmp27 = &param0->merged;
*$tmp27 = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// line 15
panda$collections$Array* $tmp28 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp28);
panda$collections$Array** $tmp29 = &param0->parents;
panda$collections$Array* $tmp30 = *$tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$collections$Array** $tmp31 = &param0->parents;
*$tmp31 = $tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// line 22
panda$core$Weak** $tmp32 = &param1->compiler;
panda$core$Weak* $tmp33 = *$tmp32;
panda$core$Object* $tmp34 = panda$core$Weak$get$R$panda$core$Weak$T($tmp33);
panda$core$Panda$unref$panda$core$Object$Q($tmp34);
panda$core$Weak* $tmp35 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp35, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp34)));
panda$core$Weak** $tmp36 = &param0->compiler;
panda$core$Weak* $tmp37 = *$tmp36;
bool $tmp38 = $tmp37 != ((panda$core$Weak*) NULL);
if ($tmp38) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp39 = panda$core$Weak$get$R$panda$core$Weak$T($tmp37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp39)));
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Weak** $tmp40 = &param0->compiler;
*$tmp40 = $tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// line 23
panda$collections$Array** $tmp41 = &param0->parents;
panda$collections$Array* $tmp42 = *$tmp41;
panda$collections$Array$add$panda$collections$Array$T($tmp42, ((panda$core$Object*) param1));
return;

}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1) {

// line 27
panda$core$String** $tmp43 = &param1->name;
panda$core$String* $tmp44 = *$tmp43;
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(param0, param1, $tmp44);
return;

}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1, panda$core$String* param2) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$collections$Array* local2 = NULL;
// line 31
panda$collections$HashMap** $tmp45 = &param0->merged;
panda$collections$HashMap* $tmp46 = *$tmp45;
panda$collections$HashMap$remove$panda$collections$HashMap$K($tmp46, ((panda$collections$Key*) param2));
// line 32
panda$collections$HashMap** $tmp47 = &param0->symbols;
panda$collections$HashMap* $tmp48 = *$tmp47;
panda$core$Object* $tmp49 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp48, ((panda$collections$Key*) param2));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$Symbol* $tmp50 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp49)));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp49);
panda$core$Panda$unref$panda$core$Object$Q($tmp49);
// line 33
org$pandalanguage$pandac$Symbol* $tmp51 = *(&local0);
panda$core$Bit $tmp52 = panda$core$Bit$init$builtin_bit($tmp51 == NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block1; else goto block2;
block1:;
// line 34
panda$collections$HashMap** $tmp54 = &param0->symbols;
panda$collections$HashMap* $tmp55 = *$tmp54;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp55, ((panda$collections$Key*) param2), ((panda$core$Object*) param1));
// line 35
org$pandalanguage$pandac$Symbol* $tmp56 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block2:;
// line 37
org$pandalanguage$pandac$Symbol$Kind* $tmp57 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp58 = *$tmp57;
org$pandalanguage$pandac$Symbol$Kind$wrapper* $tmp59;
$tmp59 = (org$pandalanguage$pandac$Symbol$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$Kind$wrapperclass);
$tmp59->value = $tmp58;
panda$core$Int64 $tmp60 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Symbol$Kind $tmp61 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp60);
org$pandalanguage$pandac$Symbol$Kind$wrapper* $tmp62;
$tmp62 = (org$pandalanguage$pandac$Symbol$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$Kind$wrapperclass);
$tmp62->value = $tmp61;
ITable* $tmp63 = ((panda$core$Equatable*) $tmp59)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$core$Bit $tmp66 = $tmp64(((panda$core$Equatable*) $tmp59), ((panda$core$Equatable*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp59)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp62)));
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block3; else goto block4;
block3:;
// line 38
org$pandalanguage$pandac$Symbol* $tmp68 = *(&local0);
org$pandalanguage$pandac$Symbol$Kind* $tmp69 = &$tmp68->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp70 = *$tmp69;
panda$core$Int64 $tmp71 = $tmp70.$rawValue;
panda$core$Int64 $tmp72 = (panda$core$Int64) {4};
panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block6; else goto block7;
block6:;
// line 40
panda$collections$Array* $tmp75 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp75);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp76 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
*(&local1) = $tmp75;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// line 41
panda$collections$Array* $tmp77 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp77, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 42
panda$collections$Array* $tmp78 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp79 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp79)));
// line 43
panda$collections$HashMap** $tmp80 = &param0->symbols;
panda$collections$HashMap* $tmp81 = *$tmp80;
org$pandalanguage$pandac$Methods* $tmp82 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp83 = *(&local1);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp82, ((panda$collections$ListView*) $tmp83));
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp81, ((panda$collections$Key*) param2), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp82)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// line 44
panda$collections$Array* $tmp84 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing methods
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp85 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block7:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {5};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block8; else goto block5;
block8:;
// line 46
panda$collections$Array* $tmp89 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp89);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp90 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
*(&local2) = $tmp89;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// line 47
panda$collections$Array* $tmp91 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp91, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 48
panda$collections$Array* $tmp92 = *(&local2);
org$pandalanguage$pandac$Symbol* $tmp93 = *(&local0);
panda$collections$ImmutableArray** $tmp94 = &((org$pandalanguage$pandac$Methods*) $tmp93)->methods;
panda$collections$ImmutableArray* $tmp95 = *$tmp94;
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp92, ((panda$collections$CollectionView*) $tmp95));
// line 49
panda$collections$HashMap** $tmp96 = &param0->symbols;
panda$collections$HashMap* $tmp97 = *$tmp96;
org$pandalanguage$pandac$Methods* $tmp98 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp99 = *(&local2);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp98, ((panda$collections$ListView*) $tmp99));
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp97, ((panda$collections$Key*) param2), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp98)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// line 50
panda$collections$Array* $tmp100 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing methods
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp101 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block5:;
goto block4;
block4:;
// line 53
panda$core$Weak** $tmp102 = &param0->compiler;
panda$core$Weak* $tmp103 = *$tmp102;
panda$core$Object* $tmp104 = panda$core$Weak$get$R$panda$core$Weak$T($tmp103);
panda$core$Panda$unref$panda$core$Object$Q($tmp104);
org$pandalanguage$pandac$Position* $tmp105 = &param1->position;
org$pandalanguage$pandac$Position $tmp106 = *$tmp105;
panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s108, param2);
panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s110);
org$pandalanguage$pandac$Symbol* $tmp111 = *(&local0);
org$pandalanguage$pandac$Position* $tmp112 = &$tmp111->position;
org$pandalanguage$pandac$Position $tmp113 = *$tmp112;
org$pandalanguage$pandac$Position$wrapper* $tmp114;
$tmp114 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp114->value = $tmp113;
panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp109, ((panda$core$Object*) $tmp114));
panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp115, &$s117);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp104), $tmp106, $tmp116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
org$pandalanguage$pandac$Symbol* $tmp118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;

}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$MethodDecl* param1, panda$collections$List* param2) {

org$pandalanguage$pandac$MethodDecl* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
// line 59
panda$core$Bit $tmp119 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(param1);
panda$core$Bit $tmp120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block1; else goto block2;
block1:;
// line 60
return;
block2:;
// line 62
ITable* $tmp122 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
panda$collections$Iterator* $tmp125 = $tmp123(((panda$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp126 = $tmp125->$class->itable;
while ($tmp126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[0];
panda$core$Bit $tmp129 = $tmp127($tmp125);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp131 = $tmp125->$class->itable;
while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[1];
panda$core$Object* $tmp134 = $tmp132($tmp125);
org$pandalanguage$pandac$MethodDecl* $tmp135 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp134)));
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) $tmp134);
// line 63
panda$core$Weak** $tmp136 = &param0->compiler;
panda$core$Weak* $tmp137 = *$tmp136;
panda$core$Object* $tmp138 = panda$core$Weak$get$R$panda$core$Weak$T($tmp137);
panda$core$Panda$unref$panda$core$Object$Q($tmp138);
org$pandalanguage$pandac$MethodDecl* $tmp139 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp140 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp138), $tmp139);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp141 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
*(&local1) = $tmp140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// line 64
org$pandalanguage$pandac$MethodDecl* $tmp142 = *(&local1);
bool $tmp143 = $tmp142 == param1;
panda$core$Bit $tmp144 = panda$core$Bit$init$builtin_bit($tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block6; else goto block7;
block6:;
// line 65
org$pandalanguage$pandac$MethodDecl* $tmp146 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing overridden
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp147 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return;
block7:;
panda$core$Panda$unref$panda$core$Object$Q($tmp134);
org$pandalanguage$pandac$MethodDecl* $tmp148 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing overridden
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp149 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// line 68
ITable* $tmp150 = ((panda$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp150->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
$tmp151(((panda$collections$CollectionWriter*) param2), ((panda$core$Object*) param1));
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
// line 73
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block1; else goto block2;
block1:;
// line 74
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 76
panda$core$Bit $tmp155 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block3; else goto block4;
block3:;
// line 77
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block4:;
// line 79
bool $tmp157 = param1 == param2;
panda$core$Bit $tmp158 = panda$core$Bit$init$builtin_bit($tmp157);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block5; else goto block6;
block5:;
// line 80
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block6:;
// line 82
$fn161 $tmp160 = ($fn161) param2->$class->vtable[2];
panda$core$Bit $tmp162 = $tmp160(param2);
panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block7; else goto block8;
block7:;
// line 83
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block8:;
// line 85
org$pandalanguage$pandac$Symbol$Kind* $tmp165 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp166 = *$tmp165;
panda$core$Int64 $tmp167 = $tmp166.$rawValue;
panda$core$Int64 $tmp168 = (panda$core$Int64) {4};
panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block10; else goto block11;
block10:;
// line 87
org$pandalanguage$pandac$Symbol$Kind* $tmp171 = &param2->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp172 = *$tmp171;
panda$core$Int64 $tmp173 = $tmp172.$rawValue;
panda$core$Int64 $tmp174 = (panda$core$Int64) {5};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block13; else goto block14;
block13:;
// line 89
panda$collections$Array* $tmp177 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp177);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp178 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
*(&local0) = $tmp177;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// line 90
panda$collections$Array* $tmp179 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp179, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 91
panda$collections$ImmutableArray** $tmp180 = &((org$pandalanguage$pandac$Methods*) param2)->methods;
panda$collections$ImmutableArray* $tmp181 = *$tmp180;
ITable* $tmp182 = ((panda$collections$Iterable*) $tmp181)->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
panda$collections$Iterator* $tmp185 = $tmp183(((panda$collections$Iterable*) $tmp181));
goto block15;
block15:;
ITable* $tmp186 = $tmp185->$class->itable;
while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
panda$core$Bit $tmp189 = $tmp187($tmp185);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block17; else goto block16;
block16:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp191 = $tmp185->$class->itable;
while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
panda$core$Object* $tmp194 = $tmp192($tmp185);
org$pandalanguage$pandac$MethodDecl* $tmp195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp194)));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) $tmp194);
// line 92
org$pandalanguage$pandac$MethodDecl* $tmp196 = *(&local1);
panda$collections$Array* $tmp197 = *(&local0);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp196, ((panda$collections$List*) $tmp197));
panda$core$Panda$unref$panda$core$Object$Q($tmp194);
org$pandalanguage$pandac$MethodDecl* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block15;
block17:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// line 94
org$pandalanguage$pandac$Methods* $tmp199 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp200 = *(&local0);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp199, ((panda$collections$ListView*) $tmp200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp199)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
panda$collections$Array* $tmp201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing methods
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp199);
block14:;
panda$core$Int64 $tmp202 = (panda$core$Int64) {4};
panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block18; else goto block19;
block18:;
// line 96
panda$core$Weak** $tmp205 = &param0->compiler;
panda$core$Weak* $tmp206 = *$tmp205;
panda$core$Object* $tmp207 = panda$core$Weak$get$R$panda$core$Weak$T($tmp206);
panda$core$Panda$unref$panda$core$Object$Q($tmp207);
org$pandalanguage$pandac$MethodDecl* $tmp208 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp207), ((org$pandalanguage$pandac$MethodDecl*) param2));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp209 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
*(&local2) = $tmp208;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// line 97
panda$core$Weak** $tmp210 = &param0->compiler;
panda$core$Weak* $tmp211 = *$tmp210;
panda$core$Object* $tmp212 = panda$core$Weak$get$R$panda$core$Weak$T($tmp211);
panda$core$Panda$unref$panda$core$Object$Q($tmp212);
org$pandalanguage$pandac$MethodDecl* $tmp213 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp212), ((org$pandalanguage$pandac$MethodDecl*) param1));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp214 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
*(&local3) = $tmp213;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// line 98
org$pandalanguage$pandac$MethodDecl* $tmp215 = *(&local2);
bool $tmp216 = $tmp215 == ((org$pandalanguage$pandac$MethodDecl*) param1);
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block20; else goto block21;
block20:;
*(&local5) = $tmp217;
goto block22;
block21:;
org$pandalanguage$pandac$MethodDecl* $tmp219 = *(&local3);
bool $tmp220 = $tmp219 == ((org$pandalanguage$pandac$MethodDecl*) param2);
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit($tmp220);
*(&local5) = $tmp221;
goto block22;
block22:;
panda$core$Bit $tmp222 = *(&local5);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block23; else goto block24;
block23:;
*(&local4) = $tmp222;
goto block25;
block24:;
org$pandalanguage$pandac$MethodDecl* $tmp224 = *(&local2);
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit($tmp224 != NULL);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$MethodDecl* $tmp227 = *(&local2);
org$pandalanguage$pandac$MethodDecl* $tmp228 = *(&local3);
bool $tmp229 = $tmp227 == $tmp228;
panda$core$Bit $tmp230 = panda$core$Bit$init$builtin_bit($tmp229);
*(&local6) = $tmp230;
goto block28;
block27:;
*(&local6) = $tmp225;
goto block28;
block28:;
panda$core$Bit $tmp231 = *(&local6);
*(&local4) = $tmp231;
goto block25;
block25:;
panda$core$Bit $tmp232 = *(&local4);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block29; else goto block30;
block29:;
// line 101
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$MethodDecl* $tmp234 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing overridden2
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp235 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing overridden1
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return param1;
block30:;
// line 103
panda$collections$Array* $tmp236 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp236);
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp237 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
*(&local7) = $tmp236;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// line 104
panda$collections$Array* $tmp238 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp238, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 105
panda$collections$Array* $tmp239 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp239, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param2)));
// line 106
org$pandalanguage$pandac$Methods* $tmp240 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp241 = *(&local7);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp240, ((panda$collections$ListView*) $tmp241));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp240)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$collections$Array* $tmp242 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing methods
*(&local7) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp243 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing overridden2
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp244 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing overridden1
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp240);
block19:;
// line 108
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block12:;
goto block9;
block11:;
panda$core$Int64 $tmp245 = (panda$core$Int64) {5};
panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block31; else goto block32;
block31:;
// line 111
org$pandalanguage$pandac$Symbol$Kind* $tmp248 = &param2->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp249 = *$tmp248;
panda$core$Int64 $tmp250 = $tmp249.$rawValue;
panda$core$Int64 $tmp251 = (panda$core$Int64) {5};
panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp250, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block34; else goto block35;
block34:;
// line 113
panda$collections$Array* $tmp254 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$ImmutableArray** $tmp255 = &((org$pandalanguage$pandac$Methods*) param1)->methods;
panda$collections$ImmutableArray* $tmp256 = *$tmp255;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp254, ((panda$collections$CollectionView*) $tmp256));
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp257 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
*(&local8) = $tmp254;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// line 114
panda$collections$ImmutableArray** $tmp258 = &((org$pandalanguage$pandac$Methods*) param2)->methods;
panda$collections$ImmutableArray* $tmp259 = *$tmp258;
ITable* $tmp260 = ((panda$collections$Iterable*) $tmp259)->$class->itable;
while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
panda$collections$Iterator* $tmp263 = $tmp261(((panda$collections$Iterable*) $tmp259));
goto block36;
block36:;
ITable* $tmp264 = $tmp263->$class->itable;
while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
panda$core$Bit $tmp267 = $tmp265($tmp263);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block38; else goto block37;
block37:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp269 = $tmp263->$class->itable;
while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[1];
panda$core$Object* $tmp272 = $tmp270($tmp263);
org$pandalanguage$pandac$MethodDecl* $tmp273 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp272)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp272);
// line 115
org$pandalanguage$pandac$MethodDecl* $tmp274 = *(&local9);
panda$collections$Array* $tmp275 = *(&local8);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp274, ((panda$collections$List*) $tmp275));
panda$core$Panda$unref$panda$core$Object$Q($tmp272);
org$pandalanguage$pandac$MethodDecl* $tmp276 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block36;
block38:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// line 117
org$pandalanguage$pandac$Methods* $tmp277 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp278 = *(&local8);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp277, ((panda$collections$ListView*) $tmp278));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp277)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
panda$collections$Array* $tmp279 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing methods
*(&local8) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp277);
block35:;
panda$core$Int64 $tmp280 = (panda$core$Int64) {4};
panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp250, $tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block39; else goto block40;
block39:;
// line 119
panda$collections$Array* $tmp283 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$ImmutableArray** $tmp284 = &((org$pandalanguage$pandac$Methods*) param1)->methods;
panda$collections$ImmutableArray* $tmp285 = *$tmp284;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp283, ((panda$collections$CollectionView*) $tmp285));
*(&local10) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp286 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
*(&local10) = $tmp283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// line 120
panda$collections$Array* $tmp287 = *(&local10);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, ((org$pandalanguage$pandac$MethodDecl*) param2), ((panda$collections$List*) $tmp287));
// line 121
org$pandalanguage$pandac$Methods* $tmp288 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp289 = *(&local10);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp288, ((panda$collections$ListView*) $tmp289));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp288)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$collections$Array* $tmp290 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing methods
*(&local10) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp288);
block40:;
// line 123
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block33:;
goto block9;
block32:;
// line 126
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block9:;
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit(false);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp293 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block41:;
abort(); // unreachable

}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* param0, panda$core$String* param1) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
org$pandalanguage$pandac$SymbolTable* local1 = NULL;
// line 131
panda$collections$HashMap** $tmp296 = &param0->merged;
panda$collections$HashMap* $tmp297 = *$tmp296;
panda$core$Object* $tmp298 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp297, ((panda$collections$Key*) param1));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$Symbol* $tmp299 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp298)));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp298);
panda$core$Panda$unref$panda$core$Object$Q($tmp298);
// line 132
org$pandalanguage$pandac$Symbol* $tmp300 = *(&local0);
panda$core$Bit $tmp301 = panda$core$Bit$init$builtin_bit($tmp300 == NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block1; else goto block2;
block1:;
// line 133
panda$collections$HashMap** $tmp303 = &param0->symbols;
panda$collections$HashMap* $tmp304 = *$tmp303;
panda$core$Object* $tmp305 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp304, ((panda$collections$Key*) param1));
org$pandalanguage$pandac$Symbol* $tmp306 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp305)));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp305);
panda$core$Panda$unref$panda$core$Object$Q($tmp305);
// line 134
panda$collections$Array** $tmp307 = &param0->parents;
panda$collections$Array* $tmp308 = *$tmp307;
ITable* $tmp309 = ((panda$collections$Iterable*) $tmp308)->$class->itable;
while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
panda$collections$Iterator* $tmp312 = $tmp310(((panda$collections$Iterable*) $tmp308));
goto block3;
block3:;
ITable* $tmp313 = $tmp312->$class->itable;
while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp313 = $tmp313->next;
}
$fn315 $tmp314 = $tmp313->methods[0];
panda$core$Bit $tmp316 = $tmp314($tmp312);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
ITable* $tmp318 = $tmp312->$class->itable;
while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[1];
panda$core$Object* $tmp321 = $tmp319($tmp312);
org$pandalanguage$pandac$SymbolTable* $tmp322 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$SymbolTable*) $tmp321)));
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) $tmp321);
// line 135
org$pandalanguage$pandac$Symbol* $tmp323 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp324 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp325 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp324, param1);
org$pandalanguage$pandac$Symbol* $tmp326 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(param0, $tmp323, $tmp325);
org$pandalanguage$pandac$Symbol* $tmp327 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
*(&local0) = $tmp326;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
panda$core$Panda$unref$panda$core$Object$Q($tmp321);
org$pandalanguage$pandac$SymbolTable* $tmp328 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// line 137
org$pandalanguage$pandac$Symbol* $tmp329 = *(&local0);
panda$core$Bit $tmp330 = panda$core$Bit$init$builtin_bit($tmp329 != NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block6; else goto block7;
block6:;
// line 138
panda$collections$HashMap** $tmp332 = &param0->merged;
panda$collections$HashMap* $tmp333 = *$tmp332;
org$pandalanguage$pandac$Symbol* $tmp334 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp333, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp334));
goto block7;
block7:;
goto block2;
block2:;
// line 141
org$pandalanguage$pandac$Symbol* $tmp335 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
org$pandalanguage$pandac$Symbol* $tmp336 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp335;

}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* param0) {

// line 146
panda$collections$Array** $tmp337 = &param0->parents;
panda$collections$Array* $tmp338 = *$tmp337;
ITable* $tmp339 = ((panda$collections$CollectionView*) $tmp338)->$class->itable;
while ($tmp339->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
panda$core$Int64 $tmp342 = $tmp340(((panda$collections$CollectionView*) $tmp338));
panda$core$Int64$wrapper* $tmp343;
$tmp343 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp343->value = $tmp342;
panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s345, ((panda$core$Object*) $tmp343));
panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s347);
panda$collections$HashMap** $tmp348 = &param0->symbols;
panda$collections$HashMap* $tmp349 = *$tmp348;
panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp346, ((panda$core$Object*) $tmp349));
panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s352);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
return $tmp351;

}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* param0) {

panda$collections$HashMap** $tmp353 = &param0->symbols;
panda$collections$HashMap* $tmp354 = *$tmp353;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
panda$core$Weak** $tmp355 = &param0->compiler;
panda$core$Weak* $tmp356 = *$tmp355;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
panda$collections$HashMap** $tmp357 = &param0->merged;
panda$collections$HashMap* $tmp358 = *$tmp357;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$collections$Array** $tmp359 = &param0->parents;
panda$collections$Array* $tmp360 = *$tmp359;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
return;

}






