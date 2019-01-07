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
#include "org/pandalanguage/pandac/FixedArray.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$LinkResolver$class_type org$pandalanguage$pandac$pandadoc$LinkResolver$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup, org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q} };

typedef panda$core$Int64 (*$fn15)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn30)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn59)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn63)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn100)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn122)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn139)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn185)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn210)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn216)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn239)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn263)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn306)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn323)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn329)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn341)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn347)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn362)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn414)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn474)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn479)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn495)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn499)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn504)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn510)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn515)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x70\x61\x6e\x64\x61", 18, -5316688844377566465, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x6c\x69\x6e\x6b\x54\x6f\x28\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, 8511965622435595822, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Compiler* param1, panda$core$String* param2) {

// line 23
org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, param2, ((org$pandalanguage$pandac$ClassDecl*) NULL));
return;

}
void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Compiler* param1, panda$core$String* param2, org$pandalanguage$pandac$ClassDecl* param3) {

// line 27
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 28
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp5 = &param0->apiRelativePath;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// line 29
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ClassDecl** $tmp8 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
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
int64_t $tmp21 = $tmp16.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 != $tmp22;
panda$core$Bit $tmp24 = (panda$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 34
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit(false);
return $tmp26;
block2:;
// line 36
panda$core$Int64 $tmp27 = (panda$core$Int64) {0};
ITable* $tmp28 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
panda$core$Int64 $tmp31 = $tmp29(((panda$collections$CollectionView*) param2));
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp33 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp27, $tmp31, $tmp32);
panda$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
panda$core$Int64 $tmp35 = $tmp33.max;
panda$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
panda$core$Int64 $tmp38 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp39 = panda$core$Int64$convert$R$panda$core$UInt64($tmp38);
if ($tmp37) goto block6; else goto block7;
block6:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block3; else goto block4;
block7:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
panda$core$Bit $tmp48 = (panda$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block3:;
// line 37
panda$collections$Array** $tmp50 = &param1->parameters;
panda$collections$Array* $tmp51 = *$tmp50;
panda$core$Int64 $tmp52 = *(&local0);
panda$core$Object* $tmp53 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp51, $tmp52);
org$pandalanguage$pandac$Type** $tmp54 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp53)->type;
org$pandalanguage$pandac$Type* $tmp55 = *$tmp54;
panda$core$Int64 $tmp56 = *(&local0);
ITable* $tmp57 = param2->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
panda$core$Object* $tmp60 = $tmp58(param2, $tmp56);
ITable* $tmp61 = ((panda$core$Equatable*) $tmp55)->$class->itable;
while ($tmp61->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
panda$core$Bit $tmp64 = $tmp62(((panda$core$Equatable*) $tmp55), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Type*) $tmp60)));
bool $tmp65 = $tmp64.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp60);
// unreffing REF($59:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp53);
// unreffing REF($50:panda.collections.Array.T)
if ($tmp65) goto block8; else goto block9;
block8:;
// line 38
panda$core$Bit $tmp66 = panda$core$Bit$init$builtin_bit(false);
return $tmp66;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp67 = *(&local0);
int64_t $tmp68 = $tmp35.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 - $tmp69;
panda$core$Int64 $tmp71 = (panda$core$Int64) {$tmp70};
panda$core$UInt64 $tmp72 = panda$core$Int64$convert$R$panda$core$UInt64($tmp71);
if ($tmp37) goto block11; else goto block12;
block11:;
uint64_t $tmp73 = $tmp72.value;
uint64_t $tmp74 = $tmp39.value;
bool $tmp75 = $tmp73 >= $tmp74;
panda$core$Bit $tmp76 = (panda$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block10; else goto block4;
block12:;
uint64_t $tmp78 = $tmp72.value;
uint64_t $tmp79 = $tmp39.value;
bool $tmp80 = $tmp78 > $tmp79;
panda$core$Bit $tmp81 = (panda$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block4;
block10:;
int64_t $tmp83 = $tmp67.value;
int64_t $tmp84 = $tmp38.value;
int64_t $tmp85 = $tmp83 + $tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {$tmp85};
*(&local0) = $tmp86;
goto block3;
block4:;
// line 41
panda$core$Bit $tmp87 = panda$core$Bit$init$builtin_bit(true);
return $tmp87;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
// line 45
*(&local0) = ((panda$core$String*) NULL);
// line 46
org$pandalanguage$pandac$ClassDecl** $tmp88 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp89 = *$tmp88;
panda$core$Bit $tmp90 = panda$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block3;
block1:;
// line 47
org$pandalanguage$pandac$ClassDecl** $tmp92 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp93 = *$tmp92;
panda$core$String** $tmp94 = &$tmp93->name;
panda$core$String* $tmp95 = *$tmp94;
panda$collections$Iterator* $tmp96 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT($tmp95, &$s97);
ITable* $tmp98 = $tmp96->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[2];
panda$core$Int64 $tmp101 = $tmp99($tmp96);
panda$core$String* $tmp102 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s103, $tmp101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$String* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
*(&local0) = $tmp102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($15:panda.collections.Iterator<panda.core.String.Index>)
goto block2;
block3:;
// line 1
// line 50
panda$core$String** $tmp105 = &param0->apiRelativePath;
panda$core$String* $tmp106 = *$tmp105;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$String* $tmp107 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
*(&local0) = $tmp106;
goto block2;
block2:;
// line 52
panda$core$String* $tmp108 = *(&local0);
panda$core$String** $tmp109 = &param1->name;
panda$core$String* $tmp110 = *$tmp109;
panda$core$String* $tmp111 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp110, &$s112, &$s113);
panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, $tmp111);
panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s116);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($48:panda.core.String)
panda$core$String* $tmp117 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return $tmp115;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$FieldDecl* param1) {

// line 56
panda$core$Weak** $tmp118 = &param1->owner;
panda$core$Weak* $tmp119 = *$tmp118;
panda$core$Object* $tmp120 = panda$core$Weak$get$R$panda$core$Weak$T($tmp119);
$fn122 $tmp121 = ($fn122) param0->$class->vtable[3];
panda$core$String* $tmp123 = $tmp121(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp120));
panda$core$String** $tmp124 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp125 = *$tmp124;
panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s127, $tmp125);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp126, &$s129);
panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, $tmp128);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp120);
// unreffing REF($4:panda.core.Weak.T)
return $tmp130;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 60
org$pandalanguage$pandac$Compiler** $tmp131 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp132 = *$tmp131;
panda$core$Bit $tmp133 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit($tmp132, param1);
// line 61
panda$core$MutableString* $tmp134 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Weak** $tmp135 = &param1->owner;
panda$core$Weak* $tmp136 = *$tmp135;
panda$core$Object* $tmp137 = panda$core$Weak$get$R$panda$core$Weak$T($tmp136);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[3];
panda$core$String* $tmp140 = $tmp138(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp137));
panda$core$MutableString$init$panda$core$String($tmp134, $tmp140);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$MutableString* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local0) = $tmp134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp137);
// unreffing REF($9:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($5:panda.core.MutableString)
// line 62
panda$core$MutableString* $tmp142 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp142, &$s143);
// line 63
panda$core$MutableString* $tmp144 = *(&local0);
panda$core$String** $tmp145 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp146 = *$tmp145;
panda$core$MutableString$append$panda$core$String($tmp144, $tmp146);
// line 64
panda$core$MutableString* $tmp147 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp147, &$s148);
// line 65
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s149));
panda$core$String* $tmp150 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
*(&local1) = &$s151;
// line 66
panda$collections$Array** $tmp152 = &param1->parameters;
panda$collections$Array* $tmp153 = *$tmp152;
ITable* $tmp154 = ((panda$collections$Iterable*) $tmp153)->$class->itable;
while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
panda$collections$Iterator* $tmp157 = $tmp155(((panda$collections$Iterable*) $tmp153));
goto block1;
block1:;
ITable* $tmp158 = $tmp157->$class->itable;
while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
panda$core$Bit $tmp161 = $tmp159($tmp157);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp163 = $tmp157->$class->itable;
while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[1];
panda$core$Object* $tmp166 = $tmp164($tmp157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp166)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp167 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp166);
// line 67
panda$core$MutableString* $tmp168 = *(&local0);
panda$core$String* $tmp169 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp168, $tmp169);
// line 68
panda$core$MutableString* $tmp170 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp171 = *(&local2);
org$pandalanguage$pandac$Type** $tmp172 = &$tmp171->type;
org$pandalanguage$pandac$Type* $tmp173 = *$tmp172;
panda$core$MutableString$append$panda$core$Object($tmp170, ((panda$core$Object*) $tmp173));
// line 69
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s174));
panda$core$String* $tmp175 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
*(&local1) = &$s176;
panda$core$Panda$unref$panda$core$Object$Q($tmp166);
// unreffing REF($67:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp177 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing REF($56:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 71
panda$core$MutableString* $tmp178 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp178, &$s179);
// line 72
org$pandalanguage$pandac$Type** $tmp180 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp181 = *$tmp180;
org$pandalanguage$pandac$Type* $tmp182 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp183 = ((panda$core$Equatable*) $tmp181)->$class->itable;
while ($tmp183->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
panda$core$Bit $tmp186 = $tmp184(((panda$core$Equatable*) $tmp181), ((panda$core$Equatable*) $tmp182));
bool $tmp187 = $tmp186.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing REF($113:org.pandalanguage.pandac.Type)
if ($tmp187) goto block4; else goto block5;
block4:;
// line 73
panda$core$MutableString* $tmp188 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp188, &$s189);
// line 74
panda$core$MutableString* $tmp190 = *(&local0);
org$pandalanguage$pandac$Type** $tmp191 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp192 = *$tmp191;
panda$core$MutableString$append$panda$core$Object($tmp190, ((panda$core$Object*) $tmp192));
goto block5;
block5:;
// line 76
panda$core$MutableString* $tmp193 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp193, &$s194, &$s195);
// line 77
panda$core$MutableString* $tmp196 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp196, &$s197, &$s198);
// line 78
panda$core$MutableString* $tmp199 = *(&local0);
panda$core$String* $tmp200 = panda$core$MutableString$finish$R$panda$core$String($tmp199);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing REF($140:panda.core.String)
panda$core$String* $tmp201 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp202 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp200;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* param0, org$pandalanguage$pandac$Symbol* param1) {

// line 82
org$pandalanguage$pandac$Symbol$Kind* $tmp203 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp204 = *$tmp203;
panda$core$Int64 $tmp205 = $tmp204.$rawValue;
panda$core$Int64 $tmp206 = (panda$core$Int64) {2};
panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp205, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block2; else goto block3;
block2:;
// line 84
$fn210 $tmp209 = ($fn210) param0->$class->vtable[4];
panda$core$String* $tmp211 = $tmp209(param0, ((org$pandalanguage$pandac$FieldDecl*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($11:panda.core.String?)
return $tmp211;
block3:;
panda$core$Int64 $tmp212 = (panda$core$Int64) {4};
panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp205, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block5;
block4:;
// line 87
$fn216 $tmp215 = ($fn216) param0->$class->vtable[5];
panda$core$String* $tmp217 = $tmp215(param0, ((org$pandalanguage$pandac$MethodDecl*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($25:panda.core.String?)
return $tmp217;
block5:;
// line 90
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp218 = panda$core$Bit$init$builtin_bit(false);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp220 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s221, $tmp220, &$s222);
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
// line 96
panda$core$Bit $tmp223 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param1, &$s224);
bool $tmp225 = $tmp223.value;
if ($tmp225) goto block3; else goto block4;
block3:;
*(&local0) = $tmp223;
goto block5;
block4:;
panda$core$Bit $tmp226 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param1, &$s227);
*(&local0) = $tmp226;
goto block5;
block5:;
panda$core$Bit $tmp228 = *(&local0);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 97
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 99
org$pandalanguage$pandac$Compiler** $tmp230 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp231 = *$tmp230;
org$pandalanguage$pandac$ClassDecl* $tmp232 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp231, param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
org$pandalanguage$pandac$ClassDecl* $tmp233 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
*(&local1) = $tmp232;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($20:org.pandalanguage.pandac.ClassDecl?)
// line 100
org$pandalanguage$pandac$ClassDecl* $tmp234 = *(&local1);
panda$core$Bit $tmp235 = panda$core$Bit$init$builtin_bit($tmp234 != NULL);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block6; else goto block7;
block6:;
// line 101
org$pandalanguage$pandac$ClassDecl* $tmp237 = *(&local1);
$fn239 $tmp238 = ($fn239) param0->$class->vtable[3];
panda$core$String* $tmp240 = $tmp238(param0, $tmp237);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($41:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp241 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp240;
block7:;
// line 103
org$pandalanguage$pandac$ClassDecl** $tmp242 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp243 = *$tmp242;
panda$core$Bit $tmp244 = panda$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block10; else goto block11;
block10:;
panda$core$RegularExpression* $tmp246 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp246, &$s247);
panda$core$Bit $tmp248 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(param1, $tmp246);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($61:panda.core.RegularExpression)
*(&local2) = $tmp248;
goto block12;
block11:;
*(&local2) = $tmp244;
goto block12;
block12:;
panda$core$Bit $tmp249 = *(&local2);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block8; else goto block9;
block8:;
// line 104
org$pandalanguage$pandac$Compiler** $tmp251 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp252 = *$tmp251;
org$pandalanguage$pandac$ClassDecl** $tmp253 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp254 = *$tmp253;
org$pandalanguage$pandac$SymbolTable* $tmp255 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp252, $tmp254);
org$pandalanguage$pandac$Symbol* $tmp256 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp255, param1);
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
org$pandalanguage$pandac$Symbol* $tmp257 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
*(&local3) = $tmp256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($81:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($80:org.pandalanguage.pandac.SymbolTable)
// line 105
org$pandalanguage$pandac$Symbol* $tmp258 = *(&local3);
panda$core$Bit $tmp259 = panda$core$Bit$init$builtin_bit($tmp258 != NULL);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block13; else goto block14;
block13:;
// line 106
org$pandalanguage$pandac$Symbol* $tmp261 = *(&local3);
$fn263 $tmp262 = ($fn263) param0->$class->vtable[6];
panda$core$String* $tmp264 = $tmp262(param0, $tmp261);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($105:panda.core.String?)
org$pandalanguage$pandac$Symbol* $tmp265 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp266 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp264;
block14:;
org$pandalanguage$pandac$Symbol* $tmp267 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$Symbol*) NULL);
goto block9;
block9:;
// line 109
panda$core$RegularExpression* $tmp268 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp268, &$s269);
panda$core$Bit $tmp270 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(param1, $tmp268);
bool $tmp271 = $tmp270.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($129:panda.core.RegularExpression)
if ($tmp271) goto block15; else goto block16;
block15:;
// line 110
panda$core$String$Index$nullable $tmp272 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(param1, &$s273);
*(&local4) = $tmp272;
// line 111
panda$core$String$Index$nullable $tmp274 = *(&local4);
panda$core$Bit $tmp275 = panda$core$Bit$init$builtin_bit($tmp274.nonnull);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block17; else goto block18;
block17:;
// line 112
org$pandalanguage$pandac$Compiler** $tmp277 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp278 = *$tmp277;
panda$core$String$Index$nullable $tmp279 = *(&local4);
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp281 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp279, $tmp280);
panda$core$String* $tmp282 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp281);
org$pandalanguage$pandac$ClassDecl* $tmp283 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp278, $tmp282);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
org$pandalanguage$pandac$ClassDecl* $tmp284 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
*(&local1) = $tmp283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($153:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing REF($152:panda.core.String)
// line 113
org$pandalanguage$pandac$ClassDecl* $tmp285 = *(&local1);
panda$core$Bit $tmp286 = panda$core$Bit$init$builtin_bit($tmp285 != NULL);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block19; else goto block20;
block19:;
// line 114
org$pandalanguage$pandac$Compiler** $tmp288 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp289 = *$tmp288;
org$pandalanguage$pandac$ClassDecl* $tmp290 = *(&local1);
org$pandalanguage$pandac$SymbolTable* $tmp291 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp289, $tmp290);
panda$core$String$Index$nullable $tmp292 = *(&local4);
panda$core$String$Index $tmp293 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, ((panda$core$String$Index) $tmp292.value));
panda$core$Bit $tmp294 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp295 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp293, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp294);
panda$core$String* $tmp296 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp295);
org$pandalanguage$pandac$Symbol* $tmp297 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp291, $tmp296);
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
org$pandalanguage$pandac$Symbol* $tmp298 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
*(&local5) = $tmp297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($185:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($177:org.pandalanguage.pandac.SymbolTable)
// line 115
org$pandalanguage$pandac$Symbol* $tmp299 = *(&local5);
panda$core$Bit $tmp300 = panda$core$Bit$init$builtin_bit($tmp299 == NULL);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block21; else goto block22;
block21:;
// line 116
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp302 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp303 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block22:;
// line 118
org$pandalanguage$pandac$Symbol* $tmp304 = *(&local5);
$fn306 $tmp305 = ($fn306) param0->$class->vtable[6];
panda$core$String* $tmp307 = $tmp305(param0, $tmp304);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($226:panda.core.String?)
org$pandalanguage$pandac$Symbol* $tmp308 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp309 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp307;
block20:;
goto block18;
block18:;
goto block16;
block16:;
// line 122
panda$core$RegularExpression* $tmp310 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp310, &$s311);
panda$collections$ListView* $tmp312 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(param1, $tmp310);
*(&local6) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$collections$ListView* $tmp313 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
*(&local6) = $tmp312;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing REF($248:panda.collections.ListView<panda.core.String>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($246:panda.core.RegularExpression)
// line 123
panda$collections$ListView* $tmp314 = *(&local6);
panda$core$Bit $tmp315 = panda$core$Bit$init$builtin_bit($tmp314 != NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block23; else goto block24;
block23:;
// line 124
panda$collections$Array* $tmp317 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp317);
*(&local7) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
panda$collections$Array* $tmp318 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
*(&local7) = $tmp317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing REF($269:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 125
panda$collections$ListView* $tmp319 = *(&local6);
panda$core$Int64 $tmp320 = (panda$core$Int64) {1};
ITable* $tmp321 = $tmp319->$class->itable;
while ($tmp321->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
panda$core$Object* $tmp324 = $tmp322($tmp319, $tmp320);
panda$core$String* $tmp325 = panda$core$String$get_trimmed$R$panda$core$String(((panda$core$String*) $tmp324));
ITable* $tmp327 = ((panda$core$Equatable*) $tmp325)->$class->itable;
while ($tmp327->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[1];
panda$core$Bit $tmp330 = $tmp328(((panda$core$Equatable*) $tmp325), ((panda$core$Equatable*) &$s326));
bool $tmp331 = $tmp330.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing REF($290:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp324);
// unreffing REF($288:panda.collections.ListView.T)
if ($tmp331) goto block25; else goto block26;
block25:;
// line 126
org$pandalanguage$pandac$Compiler** $tmp332 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp333 = *$tmp332;
org$pandalanguage$pandac$parser$Parser** $tmp334 = &$tmp333->parser;
org$pandalanguage$pandac$parser$Parser* $tmp335 = *$tmp334;
panda$io$File* $tmp336 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$collections$ListView* $tmp337 = *(&local6);
panda$core$Int64 $tmp338 = (panda$core$Int64) {1};
ITable* $tmp339 = $tmp337->$class->itable;
while ($tmp339->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
panda$core$Object* $tmp342 = $tmp340($tmp337, $tmp338);
panda$io$File$init$panda$core$String($tmp336, ((panda$core$String*) $tmp342));
panda$collections$ListView* $tmp343 = *(&local6);
panda$core$Int64 $tmp344 = (panda$core$Int64) {1};
ITable* $tmp345 = $tmp343->$class->itable;
while ($tmp345->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[0];
panda$core$Object* $tmp348 = $tmp346($tmp343, $tmp344);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp335, $tmp336, ((panda$core$String*) $tmp348));
panda$core$Panda$unref$panda$core$Object$Q($tmp348);
// unreffing REF($323:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp342);
// unreffing REF($315:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing REF($309:panda.io.File)
// line 127
goto block27;
block27:;
// line 128
org$pandalanguage$pandac$Compiler** $tmp349 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp350 = *$tmp349;
org$pandalanguage$pandac$parser$Parser** $tmp351 = &$tmp350->parser;
org$pandalanguage$pandac$parser$Parser* $tmp352 = *$tmp351;
org$pandalanguage$pandac$ASTNode* $tmp353 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q($tmp352);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
org$pandalanguage$pandac$ASTNode* $tmp354 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
*(&local8) = $tmp353;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
// unreffing REF($342:org.pandalanguage.pandac.ASTNode?)
// line 129
org$pandalanguage$pandac$ASTNode* $tmp355 = *(&local8);
panda$core$Bit $tmp356 = panda$core$Bit$init$builtin_bit($tmp355 == NULL);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block29; else goto block30;
block29:;
// line 130
panda$collections$ListView* $tmp358 = *(&local6);
panda$core$Int64 $tmp359 = (panda$core$Int64) {1};
ITable* $tmp360 = $tmp358->$class->itable;
while ($tmp360->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
panda$core$Object* $tmp363 = $tmp361($tmp358, $tmp359);
panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s365, ((panda$core$String*) $tmp363));
panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s367);
panda$io$Console$printLine$panda$core$String($tmp366);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($368:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($367:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp363);
// unreffing REF($365:panda.collections.ListView.T)
// line 131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp368 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp369 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp370 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp371 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block30:;
// line 133
org$pandalanguage$pandac$Compiler** $tmp372 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp373 = *$tmp372;
org$pandalanguage$pandac$Scanner** $tmp374 = &$tmp373->scanner;
org$pandalanguage$pandac$Scanner* $tmp375 = *$tmp374;
org$pandalanguage$pandac$ASTNode* $tmp376 = *(&local8);
org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp375, $tmp376);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
org$pandalanguage$pandac$Type* $tmp378 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
*(&local9) = $tmp377;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($410:org.pandalanguage.pandac.Type)
// line 134
org$pandalanguage$pandac$Compiler** $tmp379 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp380 = *$tmp379;
org$pandalanguage$pandac$Type* $tmp381 = *(&local9);
org$pandalanguage$pandac$Type* $tmp382 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q($tmp380, $tmp381);
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
org$pandalanguage$pandac$Type* $tmp383 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
*(&local10) = $tmp382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($425:org.pandalanguage.pandac.Type?)
// line 135
org$pandalanguage$pandac$Type* $tmp384 = *(&local10);
panda$core$Bit $tmp385 = panda$core$Bit$init$builtin_bit($tmp384 == NULL);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block31; else goto block32;
block31:;
// line 136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Type* $tmp387 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp388 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp389 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp390 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp391 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block32:;
// line 138
panda$collections$Array* $tmp393 = *(&local7);
org$pandalanguage$pandac$Type* $tmp394 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp393, ((panda$core$Object*) $tmp394));
// line 139
org$pandalanguage$pandac$Compiler** $tmp395 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp396 = *$tmp395;
org$pandalanguage$pandac$parser$Parser** $tmp397 = &$tmp396->parser;
org$pandalanguage$pandac$parser$Parser* $tmp398 = *$tmp397;
panda$core$Int64 $tmp399 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp400 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp399);
org$pandalanguage$pandac$parser$Token$nullable $tmp401 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q($tmp398, $tmp400);
panda$core$Bit $tmp402 = panda$core$Bit$init$builtin_bit(!$tmp401.nonnull);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block33; else goto block34;
block33:;
// line 140
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
goto block28;
block34:;
org$pandalanguage$pandac$Type* $tmp407 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing resolved
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp408 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing converted
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp409 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block27;
block28:;
goto block26;
block26:;
// line 144
panda$collections$ListView* $tmp410 = *(&local6);
panda$core$Int64 $tmp411 = (panda$core$Int64) {0};
ITable* $tmp412 = $tmp410->$class->itable;
while ($tmp412->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
panda$core$Object* $tmp415 = $tmp413($tmp410, $tmp411);
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp415)));
panda$core$String* $tmp416 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
*(&local11) = ((panda$core$String*) $tmp415);
panda$core$Panda$unref$panda$core$Object$Q($tmp415);
// unreffing REF($535:panda.collections.ListView.T)
// line 145
panda$core$String* $tmp417 = *(&local11);
panda$core$String$Index$nullable $tmp418 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp417, &$s419);
*(&local12) = $tmp418;
// line 146
*(&local13) = ((panda$core$String*) NULL);
// line 147
panda$core$String$Index$nullable $tmp420 = *(&local12);
panda$core$Bit $tmp421 = panda$core$Bit$init$builtin_bit($tmp420.nonnull);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block35; else goto block37;
block35:;
// line 148
org$pandalanguage$pandac$Compiler** $tmp423 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp424 = *$tmp423;
panda$core$String* $tmp425 = *(&local11);
panda$core$String$Index$nullable $tmp426 = *(&local12);
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp428 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp426, $tmp427);
panda$core$String* $tmp429 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp425, $tmp428);
org$pandalanguage$pandac$ClassDecl* $tmp430 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q($tmp424, $tmp429);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
org$pandalanguage$pandac$ClassDecl* $tmp431 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
*(&local1) = $tmp430;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
// unreffing REF($567:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing REF($566:panda.core.String)
// line 149
panda$core$String* $tmp432 = *(&local11);
panda$core$String* $tmp433 = *(&local11);
panda$core$String$Index$nullable $tmp434 = *(&local12);
panda$core$String$Index $tmp435 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp433, ((panda$core$String$Index) $tmp434.value));
panda$core$Bit $tmp436 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp437 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp435, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp436);
panda$core$String* $tmp438 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp432, $tmp437);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
panda$core$String* $tmp439 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
*(&local13) = $tmp438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing REF($589:panda.core.String)
goto block36;
block37:;
// line 1
// line 152
org$pandalanguage$pandac$ClassDecl** $tmp440 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp441 = *$tmp440;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
org$pandalanguage$pandac$ClassDecl* $tmp442 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
*(&local1) = $tmp441;
// line 153
panda$core$String* $tmp443 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
panda$core$String* $tmp444 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
*(&local13) = $tmp443;
goto block36;
block36:;
// line 155
org$pandalanguage$pandac$ClassDecl* $tmp445 = *(&local1);
panda$core$Bit $tmp446 = panda$core$Bit$init$builtin_bit($tmp445 != NULL);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block38; else goto block39;
block38:;
// line 156
org$pandalanguage$pandac$Compiler** $tmp448 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp449 = *$tmp448;
org$pandalanguage$pandac$ClassDecl* $tmp450 = *(&local1);
org$pandalanguage$pandac$SymbolTable* $tmp451 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp449, $tmp450);
panda$core$String* $tmp452 = *(&local13);
org$pandalanguage$pandac$Symbol* $tmp453 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp451, $tmp452);
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
org$pandalanguage$pandac$Symbol* $tmp454 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
*(&local14) = $tmp453;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// unreffing REF($632:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing REF($630:org.pandalanguage.pandac.SymbolTable)
// line 157
org$pandalanguage$pandac$Symbol* $tmp455 = *(&local14);
panda$core$Bit $tmp456 = panda$core$Bit$init$builtin_bit($tmp455 == NULL);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block40; else goto block41;
block40:;
// line 158
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp458 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp459 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp460 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp461 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp462 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp463 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block41:;
// line 160
org$pandalanguage$pandac$Symbol* $tmp464 = *(&local14);
org$pandalanguage$pandac$Symbol$Kind* $tmp465 = &$tmp464->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp466 = *$tmp465;
panda$core$Int64 $tmp467 = $tmp466.$rawValue;
panda$core$Int64 $tmp468 = (panda$core$Int64) {4};
panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp467, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block43; else goto block44;
block43:;
// line 162
org$pandalanguage$pandac$Symbol* $tmp471 = *(&local14);
panda$collections$Array* $tmp472 = *(&local7);
$fn474 $tmp473 = ($fn474) param0->$class->vtable[2];
panda$core$Bit $tmp475 = $tmp473(param0, ((org$pandalanguage$pandac$MethodDecl*) $tmp471), ((panda$collections$ListView*) $tmp472));
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block45; else goto block46;
block45:;
// line 163
org$pandalanguage$pandac$Symbol* $tmp477 = *(&local14);
$fn479 $tmp478 = ($fn479) param0->$class->vtable[6];
panda$core$String* $tmp480 = $tmp478(param0, $tmp477);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($709:panda.core.String?)
org$pandalanguage$pandac$Symbol* $tmp481 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp482 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp483 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp484 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp485 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp486 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp480;
block46:;
goto block42;
block44:;
panda$core$Int64 $tmp487 = (panda$core$Int64) {5};
panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp467, $tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block47; else goto block42;
block47:;
// line 167
org$pandalanguage$pandac$Symbol* $tmp490 = *(&local14);
org$pandalanguage$pandac$FixedArray** $tmp491 = &((org$pandalanguage$pandac$Methods*) $tmp490)->methods;
org$pandalanguage$pandac$FixedArray* $tmp492 = *$tmp491;
ITable* $tmp493 = ((panda$collections$Iterable*) $tmp492)->$class->itable;
while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
panda$collections$Iterator* $tmp496 = $tmp494(((panda$collections$Iterable*) $tmp492));
goto block48;
block48:;
ITable* $tmp497 = $tmp496->$class->itable;
while ($tmp497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
panda$core$Bit $tmp500 = $tmp498($tmp496);
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block50; else goto block49;
block49:;
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp502 = $tmp496->$class->itable;
while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[1];
panda$core$Object* $tmp505 = $tmp503($tmp496);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp505)));
org$pandalanguage$pandac$MethodDecl* $tmp506 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) $tmp505);
// line 168
org$pandalanguage$pandac$MethodDecl* $tmp507 = *(&local15);
panda$collections$Array* $tmp508 = *(&local7);
$fn510 $tmp509 = ($fn510) param0->$class->vtable[2];
panda$core$Bit $tmp511 = $tmp509(param0, $tmp507, ((panda$collections$ListView*) $tmp508));
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block51; else goto block52;
block51:;
// line 169
org$pandalanguage$pandac$MethodDecl* $tmp513 = *(&local15);
$fn515 $tmp514 = ($fn515) param0->$class->vtable[5];
panda$core$String* $tmp516 = $tmp514(param0, $tmp513);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($789:panda.core.String?)
panda$core$Panda$unref$panda$core$Object$Q($tmp505);
// unreffing REF($770:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp517 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing REF($759:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Symbol* $tmp518 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp519 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp520 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp521 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp522 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp523 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp516;
block52:;
panda$core$Panda$unref$panda$core$Object$Q($tmp505);
// unreffing REF($770:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp524 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block48;
block50:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing REF($759:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block42;
block42:;
// line 174
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp525 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing s
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp526 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp527 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp528 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp529 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp530 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);
block39:;
panda$core$String* $tmp531 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing symbolName
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp532 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp533 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing parameters
*(&local7) = ((panda$collections$Array*) NULL);
goto block24;
block24:;
// line 177
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$collections$ListView* $tmp534 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing parsed
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp535 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((panda$core$String*) NULL);

}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp536 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp537 = *$tmp536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$String** $tmp538 = &param0->apiRelativePath;
panda$core$String* $tmp539 = *$tmp538;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
org$pandalanguage$pandac$ClassDecl** $tmp540 = &param0->context;
org$pandalanguage$pandac$ClassDecl* $tmp541 = *$tmp540;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
return;

}

