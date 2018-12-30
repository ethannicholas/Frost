#include "org/pandalanguage/pandac/pandadoc/LinkResolver.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/RegularExpression.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/io/File.h"
#include "panda/io/Console.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "panda/collections/ImmutableArray.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$LinkResolver$class_type org$pandalanguage$pandac$pandadoc$LinkResolver$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup, org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q} };

typedef panda$core$Int64 (*$fn15)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn27)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn56)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn60)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn97)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn119)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn136)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn162)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn182)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn207)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn213)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn236)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn260)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn303)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn320)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn326)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn338)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn344)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn359)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn411)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn471)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn476)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn496)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn501)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn507)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn512)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x70\x61\x6e\x64\x61", 18, -5316688844377566465, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x6c\x69\x6e\x6b\x54\x6f\x28\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, 8511965622435595822, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Compiler* param1, panda$core$String* param2) {

// line 23
org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, param2, ((org$pandalanguage$pandac$ClassDecl*) NULL));
return;

}
void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Compiler* param1, panda$core$String* param2, org$pandalanguage$pandac$ClassDecl* param3) {

// line 27
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 28
panda$core$String** $tmp5 = &param0->apiRelativePath;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// line 29
org$pandalanguage$pandac$ClassDecl** $tmp8 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$MethodDecl* param1, panda$collections$ListView* param2) {

panda$core$Int64 local0;
// line 33
panda$collections$Array** $tmp11 = &param1->parameters;
panda$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((panda$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
panda$core$Int64 $tmp16 = $tmp14(((panda$collections$CollectionView*) $tmp12));
ITable* $tmp17 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) param2));
panda$core$Bit $tmp21 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp16, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 34
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(false);
return $tmp23;
block2:;
// line 36
panda$core$Int64 $tmp24 = (panda$core$Int64) {0};
ITable* $tmp25 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
panda$core$Int64 $tmp28 = $tmp26(((panda$collections$CollectionView*) param2));
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp30 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp24, $tmp28, $tmp29);
panda$core$Int64 $tmp31 = $tmp30.min;
*(&local0) = $tmp31;
panda$core$Int64 $tmp32 = $tmp30.max;
panda$core$Bit $tmp33 = $tmp30.inclusive;
bool $tmp34 = $tmp33.value;
panda$core$Int64 $tmp35 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp36 = panda$core$Int64$convert$R$panda$core$UInt64($tmp35);
if ($tmp34) goto block6; else goto block7;
block6:;
int64_t $tmp37 = $tmp31.value;
int64_t $tmp38 = $tmp32.value;
bool $tmp39 = $tmp37 <= $tmp38;
panda$core$Bit $tmp40 = (panda$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block3; else goto block4;
block7:;
int64_t $tmp42 = $tmp31.value;
int64_t $tmp43 = $tmp32.value;
bool $tmp44 = $tmp42 < $tmp43;
panda$core$Bit $tmp45 = (panda$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block3; else goto block4;
block3:;
// line 37
panda$collections$Array** $tmp47 = &param1->parameters;
panda$collections$Array* $tmp48 = *$tmp47;
panda$core$Int64 $tmp49 = *(&local0);
panda$core$Object* $tmp50 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp48, $tmp49);
org$pandalanguage$pandac$Type** $tmp51 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp50)->type;
org$pandalanguage$pandac$Type* $tmp52 = *$tmp51;
panda$core$Int64 $tmp53 = *(&local0);
ITable* $tmp54 = param2->$class->itable;
while ($tmp54->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
panda$core$Object* $tmp57 = $tmp55(param2, $tmp53);
ITable* $tmp58 = ((panda$core$Equatable*) $tmp52)->$class->itable;
while ($tmp58->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[1];
panda$core$Bit $tmp61 = $tmp59(((panda$core$Equatable*) $tmp52), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Type*) $tmp57)));
panda$core$Panda$unref$panda$core$Object$Q($tmp50);
panda$core$Panda$unref$panda$core$Object$Q($tmp57);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block8; else goto block9;
block8:;
// line 38
panda$core$Bit $tmp63 = panda$core$Bit$init$builtin_bit(false);
return $tmp63;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp64 = *(&local0);
int64_t $tmp65 = $tmp32.value;
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65 - $tmp66;
panda$core$Int64 $tmp68 = (panda$core$Int64) {$tmp67};
panda$core$UInt64 $tmp69 = panda$core$Int64$convert$R$panda$core$UInt64($tmp68);
if ($tmp34) goto block11; else goto block12;
block11:;
uint64_t $tmp70 = $tmp69.value;
uint64_t $tmp71 = $tmp36.value;
bool $tmp72 = $tmp70 >= $tmp71;
panda$core$Bit $tmp73 = (panda$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block10; else goto block4;
block12:;
uint64_t $tmp75 = $tmp69.value;
uint64_t $tmp76 = $tmp36.value;
bool $tmp77 = $tmp75 > $tmp76;
panda$core$Bit $tmp78 = (panda$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block10; else goto block4;
block10:;
int64_t $tmp80 = $tmp64.value;
int64_t $tmp81 = $tmp35.value;
int64_t $tmp82 = $tmp80 + $tmp81;
panda$core$Int64 $tmp83 = (panda$core$Int64) {$tmp82};
*(&local0) = $tmp83;
goto block3;
block4:;
// line 41
panda$core$Bit $tmp84 = panda$core$Bit$init$builtin_bit(true);
return $tmp84;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
// line 45
*(&local0) = ((panda$core$String*) NULL);
// line 46
org$pandalanguage$pandac$ClassDecl** $tmp85 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp86 = *$tmp85;
panda$core$Bit $tmp87 = panda$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block1; else goto block3;
block1:;
// line 47
org$pandalanguage$pandac$ClassDecl** $tmp89 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp90 = *$tmp89;
panda$core$String** $tmp91 = &$tmp90->name;
panda$core$String* $tmp92 = *$tmp91;
panda$collections$Iterator* $tmp93 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT($tmp92, &$s94);
ITable* $tmp95 = $tmp93->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[2];
panda$core$Int64 $tmp98 = $tmp96($tmp93);
panda$core$String* $tmp99 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s100, $tmp98);
panda$core$String* $tmp101 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
*(&local0) = $tmp99;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
goto block2;
block3:;
// line 1
// line 50
panda$core$String** $tmp102 = &param0->apiRelativePath;
panda$core$String* $tmp103 = *$tmp102;
panda$core$String* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
*(&local0) = $tmp103;
goto block2;
block2:;
// line 52
panda$core$String* $tmp105 = *(&local0);
panda$core$String** $tmp106 = &param1->name;
panda$core$String* $tmp107 = *$tmp106;
panda$core$String* $tmp108 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp107, &$s109, &$s110);
panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, $tmp108);
panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s113);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$String* $tmp114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return $tmp112;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$FieldDecl* param1) {

// line 56
panda$core$Weak** $tmp115 = &param1->owner;
panda$core$Weak* $tmp116 = *$tmp115;
panda$core$Object* $tmp117 = panda$core$Weak$get$R$panda$core$Weak$T($tmp116);
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
$fn119 $tmp118 = ($fn119) param0->$class->vtable[3];
panda$core$String* $tmp120 = $tmp118(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp117));
panda$core$String** $tmp121 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp122 = *$tmp121;
panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s124, $tmp122);
panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s126);
panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, $tmp125);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
return $tmp127;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 60
org$pandalanguage$pandac$Compiler** $tmp128 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp129 = *$tmp128;
panda$core$Bit $tmp130 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit($tmp129, param1);
// line 61
panda$core$MutableString* $tmp131 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Weak** $tmp132 = &param1->owner;
panda$core$Weak* $tmp133 = *$tmp132;
panda$core$Object* $tmp134 = panda$core$Weak$get$R$panda$core$Weak$T($tmp133);
panda$core$Panda$unref$panda$core$Object$Q($tmp134);
$fn136 $tmp135 = ($fn136) param0->$class->vtable[3];
panda$core$String* $tmp137 = $tmp135(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp134));
panda$core$MutableString$init$panda$core$String($tmp131, $tmp137);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp138 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
*(&local0) = $tmp131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// line 62
panda$core$MutableString* $tmp139 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp139, &$s140);
// line 63
panda$core$MutableString* $tmp141 = *(&local0);
panda$core$String** $tmp142 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp143 = *$tmp142;
panda$core$MutableString$append$panda$core$String($tmp141, $tmp143);
// line 64
panda$core$MutableString* $tmp144 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp144, &$s145);
// line 65
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp146 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s147));
*(&local1) = &$s148;
// line 66
panda$collections$Array** $tmp149 = &param1->parameters;
panda$collections$Array* $tmp150 = *$tmp149;
ITable* $tmp151 = ((panda$collections$Iterable*) $tmp150)->$class->itable;
while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
panda$collections$Iterator* $tmp154 = $tmp152(((panda$collections$Iterable*) $tmp150));
goto block1;
block1:;
ITable* $tmp155 = $tmp154->$class->itable;
while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
panda$core$Bit $tmp158 = $tmp156($tmp154);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp160 = $tmp154->$class->itable;
while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[1];
panda$core$Object* $tmp163 = $tmp161($tmp154);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp164 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp163)));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp163);
// line 67
panda$core$MutableString* $tmp165 = *(&local0);
panda$core$String* $tmp166 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp165, $tmp166);
// line 68
panda$core$MutableString* $tmp167 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp168 = *(&local2);
org$pandalanguage$pandac$Type** $tmp169 = &$tmp168->type;
org$pandalanguage$pandac$Type* $tmp170 = *$tmp169;
panda$core$MutableString$append$panda$core$Object($tmp167, ((panda$core$Object*) $tmp170));
// line 69
panda$core$String* $tmp171 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s172));
*(&local1) = &$s173;
panda$core$Panda$unref$panda$core$Object$Q($tmp163);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp174 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// line 71
panda$core$MutableString* $tmp175 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp175, &$s176);
// line 72
org$pandalanguage$pandac$Type** $tmp177 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp178 = *$tmp177;
org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp180 = ((panda$core$Equatable*) $tmp178)->$class->itable;
while ($tmp180->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[1];
panda$core$Bit $tmp183 = $tmp181(((panda$core$Equatable*) $tmp178), ((panda$core$Equatable*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block4; else goto block5;
block4:;
// line 73
panda$core$MutableString* $tmp185 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp185, &$s186);
// line 74
panda$core$MutableString* $tmp187 = *(&local0);
org$pandalanguage$pandac$Type** $tmp188 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp189 = *$tmp188;
panda$core$MutableString$append$panda$core$Object($tmp187, ((panda$core$Object*) $tmp189));
goto block5;
block5:;
// line 76
panda$core$MutableString* $tmp190 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp190, &$s191, &$s192);
// line 77
panda$core$MutableString* $tmp193 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp193, &$s194, &$s195);
// line 78
panda$core$MutableString* $tmp196 = *(&local0);
panda$core$String* $tmp197 = panda$core$MutableString$finish$R$panda$core$String($tmp196);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$String* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp199 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp197;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Symbol* param1) {

// line 82
org$pandalanguage$pandac$Symbol$Kind* $tmp200 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp201 = *$tmp200;
panda$core$Int64 $tmp202 = $tmp201.$rawValue;
panda$core$Int64 $tmp203 = (panda$core$Int64) {2};
panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block2; else goto block3;
block2:;
// line 83
$fn207 $tmp206 = ($fn207) param0->$class->vtable[4];
panda$core$String* $tmp208 = $tmp206(param0, ((org$pandalanguage$pandac$FieldDecl*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
return $tmp208;
block3:;
panda$core$Int64 $tmp209 = (panda$core$Int64) {4};
panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block4; else goto block5;
block4:;
// line 84
$fn213 $tmp212 = ($fn213) param0->$class->vtable[5];
panda$core$String* $tmp214 = $tmp212(param0, ((org$pandalanguage$pandac$MethodDecl*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
return $tmp214;
block5:;
// line 86
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit(false);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp217 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, panda$core$String* param1) {

panda$core$Bit local0;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$Bit local2;
org$pandalanguage$pandac$Symbol* local3 = NULL;
panda$core$String$Index$nullable local4;
org$pandalanguage$pandac$Symbol* local5 = NULL;
panda$collections$ListView* local6 = NULL;
panda$collections$Array* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
org$pandalanguage$pandac$Type* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$core$String* local11 = NULL;
panda$core$String$Index$nullable local12;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$Symbol* local14 = NULL;
org$pandalanguage$pandac$MethodDecl* local15 = NULL;
// line 91
panda$core$Bit $tmp220 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param1, &$s221);
bool $tmp222 = $tmp220.value;
if ($tmp222) goto block1; else goto block2;
block1:;
*(&local0) = $tmp220;
goto block3;
block2:;
panda$core$Bit $tmp223 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param1, &$s224);
*(&local0) = $tmp223;
goto block3;
block3:;
panda$core$Bit $tmp225 = *(&local0);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block4; else goto block5;
block4:;
// line 92
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block5:;
// line 94
org$pandalanguage$pandac$Compiler** $tmp227 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp228 = *$tmp227;
org$pandalanguage$pandac$ClassDecl* $tmp229 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp228, param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp230 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local1) = $tmp229;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// line 95
org$pandalanguage$pandac$ClassDecl* $tmp231 = *(&local1);
panda$core$Bit $tmp232 = panda$core$Bit$init$builtin_bit($tmp231 != NULL);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block6; else goto block7;
block6:;
// line 96
org$pandalanguage$pandac$ClassDecl* $tmp234 = *(&local1);
$fn236 $tmp235 = ($fn236) param0->$class->vtable[3];
panda$core$String* $tmp237 = $tmp235(param0, $tmp234);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
org$pandalanguage$pandac$ClassDecl* $tmp238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp237;
block7:;
// line 98
org$pandalanguage$pandac$ClassDecl** $tmp239 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp240 = *$tmp239;
panda$core$Bit $tmp241 = panda$core$Bit$init$builtin_bit($tmp240 != NULL);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block8; else goto block9;
block8:;
panda$core$RegularExpression* $tmp243 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp243, &$s244);
panda$core$Bit $tmp245 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(param1, $tmp243);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
*(&local2) = $tmp245;
goto block10;
block9:;
*(&local2) = $tmp241;
goto block10;
block10:;
panda$core$Bit $tmp246 = *(&local2);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block11; else goto block12;
block11:;
// line 99
org$pandalanguage$pandac$Compiler** $tmp248 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp249 = *$tmp248;
org$pandalanguage$pandac$ClassDecl** $tmp250 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp251 = *$tmp250;
org$pandalanguage$pandac$SymbolTable* $tmp252 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp249, $tmp251);
org$pandalanguage$pandac$Symbol* $tmp253 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp252, param1);
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$Symbol* $tmp254 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local3) = $tmp253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// line 100
org$pandalanguage$pandac$Symbol* $tmp255 = *(&local3);
panda$core$Bit $tmp256 = panda$core$Bit$init$builtin_bit($tmp255 != NULL);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block13; else goto block14;
block13:;
// line 101
org$pandalanguage$pandac$Symbol* $tmp258 = *(&local3);
$fn260 $tmp259 = ($fn260) param0->$class->vtable[6];
panda$core$String* $tmp261 = $tmp259(param0, $tmp258);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
org$pandalanguage$pandac$Symbol* $tmp262 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp263 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp261;
block14:;
org$pandalanguage$pandac$Symbol* $tmp264 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
goto block12;
block12:;
// line 104
panda$core$RegularExpression* $tmp265 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp265, &$s266);
panda$core$Bit $tmp267 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(param1, $tmp265);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block15; else goto block16;
block15:;
// line 105
panda$core$String$Index$nullable $tmp269 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(param1, &$s270);
*(&local4) = $tmp269;
// line 106
panda$core$String$Index$nullable $tmp271 = *(&local4);
panda$core$Bit $tmp272 = panda$core$Bit$init$builtin_bit($tmp271.nonnull);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block17; else goto block18;
block17:;
// line 107
org$pandalanguage$pandac$Compiler** $tmp274 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp275 = *$tmp274;
panda$core$String$Index$nullable $tmp276 = *(&local4);
panda$core$Bit $tmp277 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp278 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp276, $tmp277);
panda$core$String* $tmp279 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp278);
org$pandalanguage$pandac$ClassDecl* $tmp280 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp275, $tmp279);
org$pandalanguage$pandac$ClassDecl* $tmp281 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
*(&local1) = $tmp280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// line 108
org$pandalanguage$pandac$ClassDecl* $tmp282 = *(&local1);
panda$core$Bit $tmp283 = panda$core$Bit$init$builtin_bit($tmp282 != NULL);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block19; else goto block20;
block19:;
// line 109
org$pandalanguage$pandac$Compiler** $tmp285 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp286 = *$tmp285;
org$pandalanguage$pandac$ClassDecl* $tmp287 = *(&local1);
org$pandalanguage$pandac$SymbolTable* $tmp288 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp286, $tmp287);
panda$core$String$Index$nullable $tmp289 = *(&local4);
panda$core$String$Index $tmp290 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, ((panda$core$String$Index) $tmp289.value));
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp292 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp290, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp291);
panda$core$String* $tmp293 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp292);
org$pandalanguage$pandac$Symbol* $tmp294 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp288, $tmp293);
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$Symbol* $tmp295 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
*(&local5) = $tmp294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// line 110
org$pandalanguage$pandac$Symbol* $tmp296 = *(&local5);
panda$core$Bit $tmp297 = panda$core$Bit$init$builtin_bit($tmp296 == NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block21; else goto block22;
block21:;
// line 111
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp299 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp300 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block22:;
// line 113
org$pandalanguage$pandac$Symbol* $tmp301 = *(&local5);
$fn303 $tmp302 = ($fn303) param0->$class->vtable[6];
panda$core$String* $tmp304 = $tmp302(param0, $tmp301);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
org$pandalanguage$pandac$Symbol* $tmp305 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp306 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp304;
block20:;
goto block18;
block18:;
goto block16;
block16:;
// line 117
panda$core$RegularExpression* $tmp307 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp307, &$s308);
panda$collections$ListView* $tmp309 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(param1, $tmp307);
*(&local6) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp310 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
*(&local6) = $tmp309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// line 118
panda$collections$ListView* $tmp311 = *(&local6);
panda$core$Bit $tmp312 = panda$core$Bit$init$builtin_bit($tmp311 != NULL);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block23; else goto block24;
block23:;
// line 119
panda$collections$Array* $tmp314 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp314);
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp315 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
*(&local7) = $tmp314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// line 120
panda$collections$ListView* $tmp316 = *(&local6);
panda$core$Int64 $tmp317 = (panda$core$Int64) {1};
ITable* $tmp318 = $tmp316->$class->itable;
while ($tmp318->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
panda$core$Object* $tmp321 = $tmp319($tmp316, $tmp317);
panda$core$String* $tmp322 = panda$core$String$get_trimmed$R$panda$core$String(((panda$core$String*) $tmp321));
ITable* $tmp324 = ((panda$core$Equatable*) $tmp322)->$class->itable;
while ($tmp324->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
panda$core$Bit $tmp327 = $tmp325(((panda$core$Equatable*) $tmp322), ((panda$core$Equatable*) &$s323));
panda$core$Panda$unref$panda$core$Object$Q($tmp321);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block25; else goto block26;
block25:;
// line 121
org$pandalanguage$pandac$Compiler** $tmp329 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp330 = *$tmp329;
org$pandalanguage$pandac$parser$Parser** $tmp331 = &$tmp330->parser;
org$pandalanguage$pandac$parser$Parser* $tmp332 = *$tmp331;
panda$io$File* $tmp333 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$collections$ListView* $tmp334 = *(&local6);
panda$core$Int64 $tmp335 = (panda$core$Int64) {1};
ITable* $tmp336 = $tmp334->$class->itable;
while ($tmp336->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp336 = $tmp336->next;
}
$fn338 $tmp337 = $tmp336->methods[0];
panda$core$Object* $tmp339 = $tmp337($tmp334, $tmp335);
panda$io$File$init$panda$core$String($tmp333, ((panda$core$String*) $tmp339));
panda$collections$ListView* $tmp340 = *(&local6);
panda$core$Int64 $tmp341 = (panda$core$Int64) {1};
ITable* $tmp342 = $tmp340->$class->itable;
while ($tmp342->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
panda$core$Object* $tmp345 = $tmp343($tmp340, $tmp341);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp332, $tmp333, ((panda$core$String*) $tmp345));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$unref$panda$core$Object$Q($tmp339);
panda$core$Panda$unref$panda$core$Object$Q($tmp345);
// line 122
goto block27;
block27:;
// line 123
org$pandalanguage$pandac$Compiler** $tmp346 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp347 = *$tmp346;
org$pandalanguage$pandac$parser$Parser** $tmp348 = &$tmp347->parser;
org$pandalanguage$pandac$parser$Parser* $tmp349 = *$tmp348;
org$pandalanguage$pandac$ASTNode* $tmp350 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q($tmp349);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp351 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
*(&local8) = $tmp350;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// line 124
org$pandalanguage$pandac$ASTNode* $tmp352 = *(&local8);
panda$core$Bit $tmp353 = panda$core$Bit$init$builtin_bit($tmp352 == NULL);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block29; else goto block30;
block29:;
// line 125
panda$collections$ListView* $tmp355 = *(&local6);
panda$core$Int64 $tmp356 = (panda$core$Int64) {1};
ITable* $tmp357 = $tmp355->$class->itable;
while ($tmp357->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp357 = $tmp357->next;
}
$fn359 $tmp358 = $tmp357->methods[0];
panda$core$Object* $tmp360 = $tmp358($tmp355, $tmp356);
panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s362, ((panda$core$String*) $tmp360));
panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s364);
panda$io$Console$printLine$panda$core$String($tmp363);
panda$core$Panda$unref$panda$core$Object$Q($tmp360);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// line 126
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp365 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp366 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp367 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp368 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block30:;
// line 128
org$pandalanguage$pandac$Compiler** $tmp369 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp370 = *$tmp369;
org$pandalanguage$pandac$Scanner** $tmp371 = &$tmp370->scanner;
org$pandalanguage$pandac$Scanner* $tmp372 = *$tmp371;
org$pandalanguage$pandac$ASTNode* $tmp373 = *(&local8);
org$pandalanguage$pandac$Type* $tmp374 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp372, $tmp373);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp375 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
*(&local9) = $tmp374;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// line 129
org$pandalanguage$pandac$Compiler** $tmp376 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp377 = *$tmp376;
org$pandalanguage$pandac$Type* $tmp378 = *(&local9);
org$pandalanguage$pandac$Type* $tmp379 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q($tmp377, $tmp378);
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp380 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
*(&local10) = $tmp379;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// line 130
org$pandalanguage$pandac$Type* $tmp381 = *(&local10);
panda$core$Bit $tmp382 = panda$core$Bit$init$builtin_bit($tmp381 == NULL);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block31; else goto block32;
block31:;
// line 131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Type* $tmp384 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp385 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp386 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp387 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp388 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp389 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block32:;
// line 133
panda$collections$Array* $tmp390 = *(&local7);
org$pandalanguage$pandac$Type* $tmp391 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp390, ((panda$core$Object*) $tmp391));
// line 134
org$pandalanguage$pandac$Compiler** $tmp392 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp393 = *$tmp392;
org$pandalanguage$pandac$parser$Parser** $tmp394 = &$tmp393->parser;
org$pandalanguage$pandac$parser$Parser* $tmp395 = *$tmp394;
panda$core$Int64 $tmp396 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp397 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp396);
org$pandalanguage$pandac$parser$Token$nullable $tmp398 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q($tmp395, $tmp397);
panda$core$Bit $tmp399 = panda$core$Bit$init$builtin_bit(!$tmp398.nonnull);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block33; else goto block34;
block33:;
// line 135
org$pandalanguage$pandac$Type* $tmp401 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp402 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp403 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block34:;
org$pandalanguage$pandac$Type* $tmp404 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp405 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp406 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block27;
block28:;
goto block26;
block26:;
// line 139
panda$collections$ListView* $tmp407 = *(&local6);
panda$core$Int64 $tmp408 = (panda$core$Int64) {0};
ITable* $tmp409 = $tmp407->$class->itable;
while ($tmp409->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[0];
panda$core$Object* $tmp412 = $tmp410($tmp407, $tmp408);
*(&local11) = ((panda$core$String*) NULL);
panda$core$String* $tmp413 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp412)));
*(&local11) = ((panda$core$String*) $tmp412);
panda$core$Panda$unref$panda$core$Object$Q($tmp412);
// line 140
panda$core$String* $tmp414 = *(&local11);
panda$core$String$Index$nullable $tmp415 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp414, &$s416);
*(&local12) = $tmp415;
// line 141
*(&local13) = ((panda$core$String*) NULL);
// line 142
panda$core$String$Index$nullable $tmp417 = *(&local12);
panda$core$Bit $tmp418 = panda$core$Bit$init$builtin_bit($tmp417.nonnull);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block35; else goto block37;
block35:;
// line 143
org$pandalanguage$pandac$Compiler** $tmp420 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp421 = *$tmp420;
panda$core$String* $tmp422 = *(&local11);
panda$core$String$Index$nullable $tmp423 = *(&local12);
panda$core$Bit $tmp424 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp425 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp423, $tmp424);
panda$core$String* $tmp426 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp422, $tmp425);
org$pandalanguage$pandac$ClassDecl* $tmp427 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp421, $tmp426);
org$pandalanguage$pandac$ClassDecl* $tmp428 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
*(&local1) = $tmp427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// line 144
panda$core$String* $tmp429 = *(&local11);
panda$core$String* $tmp430 = *(&local11);
panda$core$String$Index$nullable $tmp431 = *(&local12);
panda$core$String$Index $tmp432 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp430, ((panda$core$String$Index) $tmp431.value));
panda$core$Bit $tmp433 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp434 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp432, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp433);
panda$core$String* $tmp435 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp429, $tmp434);
panda$core$String* $tmp436 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
*(&local13) = $tmp435;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
goto block36;
block37:;
// line 1
// line 147
org$pandalanguage$pandac$ClassDecl** $tmp437 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp438 = *$tmp437;
org$pandalanguage$pandac$ClassDecl* $tmp439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
*(&local1) = $tmp438;
// line 148
panda$core$String* $tmp440 = *(&local11);
panda$core$String* $tmp441 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
*(&local13) = $tmp440;
goto block36;
block36:;
// line 150
org$pandalanguage$pandac$ClassDecl* $tmp442 = *(&local1);
panda$core$Bit $tmp443 = panda$core$Bit$init$builtin_bit($tmp442 != NULL);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block38; else goto block39;
block38:;
// line 151
org$pandalanguage$pandac$Compiler** $tmp445 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp446 = *$tmp445;
org$pandalanguage$pandac$ClassDecl* $tmp447 = *(&local1);
org$pandalanguage$pandac$SymbolTable* $tmp448 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp446, $tmp447);
panda$core$String* $tmp449 = *(&local13);
org$pandalanguage$pandac$Symbol* $tmp450 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp448, $tmp449);
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$Symbol* $tmp451 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
*(&local14) = $tmp450;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
// line 152
org$pandalanguage$pandac$Symbol* $tmp452 = *(&local14);
panda$core$Bit $tmp453 = panda$core$Bit$init$builtin_bit($tmp452 == NULL);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block40; else goto block41;
block40:;
// line 153
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp455 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp456 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp457 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp458 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp459 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp460 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block41:;
// line 155
org$pandalanguage$pandac$Symbol* $tmp461 = *(&local14);
org$pandalanguage$pandac$Symbol$Kind* $tmp462 = &$tmp461->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp463 = *$tmp462;
panda$core$Int64 $tmp464 = $tmp463.$rawValue;
panda$core$Int64 $tmp465 = (panda$core$Int64) {4};
panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp464, $tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block43; else goto block44;
block43:;
// line 157
org$pandalanguage$pandac$Symbol* $tmp468 = *(&local14);
panda$collections$Array* $tmp469 = *(&local7);
$fn471 $tmp470 = ($fn471) param0->$class->vtable[2];
panda$core$Bit $tmp472 = $tmp470(param0, ((org$pandalanguage$pandac$MethodDecl*) $tmp468), ((panda$collections$ListView*) $tmp469));
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block45; else goto block46;
block45:;
// line 158
org$pandalanguage$pandac$Symbol* $tmp474 = *(&local14);
$fn476 $tmp475 = ($fn476) param0->$class->vtable[6];
panda$core$String* $tmp477 = $tmp475(param0, $tmp474);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
org$pandalanguage$pandac$Symbol* $tmp478 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp479 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp480 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp481 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp482 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp483 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp477;
block46:;
goto block42;
block44:;
panda$core$Int64 $tmp484 = (panda$core$Int64) {5};
panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp464, $tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block47; else goto block42;
block47:;
// line 161
org$pandalanguage$pandac$Symbol* $tmp487 = *(&local14);
panda$collections$ImmutableArray** $tmp488 = &((org$pandalanguage$pandac$Methods*) $tmp487)->methods;
panda$collections$ImmutableArray* $tmp489 = *$tmp488;
ITable* $tmp490 = ((panda$collections$Iterable*) $tmp489)->$class->itable;
while ($tmp490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp490 = $tmp490->next;
}
$fn492 $tmp491 = $tmp490->methods[0];
panda$collections$Iterator* $tmp493 = $tmp491(((panda$collections$Iterable*) $tmp489));
goto block48;
block48:;
ITable* $tmp494 = $tmp493->$class->itable;
while ($tmp494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
panda$core$Bit $tmp497 = $tmp495($tmp493);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block50; else goto block49;
block49:;
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp499 = $tmp493->$class->itable;
while ($tmp499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp499 = $tmp499->next;
}
$fn501 $tmp500 = $tmp499->methods[1];
panda$core$Object* $tmp502 = $tmp500($tmp493);
org$pandalanguage$pandac$MethodDecl* $tmp503 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp502)));
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) $tmp502);
// line 162
org$pandalanguage$pandac$MethodDecl* $tmp504 = *(&local15);
panda$collections$Array* $tmp505 = *(&local7);
$fn507 $tmp506 = ($fn507) param0->$class->vtable[2];
panda$core$Bit $tmp508 = $tmp506(param0, $tmp504, ((panda$collections$ListView*) $tmp505));
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block51; else goto block52;
block51:;
// line 163
org$pandalanguage$pandac$MethodDecl* $tmp510 = *(&local15);
$fn512 $tmp511 = ($fn512) param0->$class->vtable[5];
panda$core$String* $tmp513 = $tmp511(param0, $tmp510);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
org$pandalanguage$pandac$MethodDecl* $tmp514 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp515 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp516 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp517 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp518 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp519 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp520 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp513;
block52:;
panda$core$Panda$unref$panda$core$Object$Q($tmp502);
org$pandalanguage$pandac$MethodDecl* $tmp521 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block48;
block50:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
goto block42;
block42:;
// line 167
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp522 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp523 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp524 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp525 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp526 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp527 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block39:;
panda$core$String* $tmp528 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp529 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp530 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
goto block24;
block24:;
// line 170
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$collections$ListView* $tmp531 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp532 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);

}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* param0) {

org$pandalanguage$pandac$Compiler** $tmp533 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp534 = *$tmp533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
panda$core$String** $tmp535 = &param0->apiRelativePath;
panda$core$String* $tmp536 = *$tmp535;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
org$pandalanguage$pandac$ClassDecl** $tmp537 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp538 = *$tmp537;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
return;

}

