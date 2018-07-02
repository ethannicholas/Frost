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
#include "panda/collections/CollectionView.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/RegularExpression.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/io/Console.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "panda/collections/ImmutableArray.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$LinkResolver$class_type org$pandalanguage$pandac$pandadoc$LinkResolver$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup, org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q} };

typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn24)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn45)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn71)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn100)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn120)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn137)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn155)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn190)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn197)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn226)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn248)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn289)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn314)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn320)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn328)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn334)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn352)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn386)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn428)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn432)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn448)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn455)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn466)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn468)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn472)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x70\x61\x6e\x64\x61", 18, -5316688844377566465, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x70\x61\x6e\x64\x61", 18, -5316688844377566465, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x70\x61\x6e\x64\x61", 18, -5316688844377566465, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x70\x61\x6e\x64\x61", 18, -5316688844377566465, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Compiler* p_compiler, panda$core$String* p_apiRelativePath) {
    self->compiler = NULL;
    self->apiRelativePath = NULL;
    self->context = NULL;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(self, p_compiler, p_apiRelativePath, NULL);
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$panda$core$String$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Compiler* p_compiler, panda$core$String* p_apiRelativePath, org$pandalanguage$pandac$ClassDecl* p_context) {
    org$pandalanguage$pandac$Compiler* $tmp2;
    org$pandalanguage$pandac$Compiler* $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    org$pandalanguage$pandac$ClassDecl* $tmp6;
    org$pandalanguage$pandac$ClassDecl* $tmp7;
    self->compiler = NULL;
    self->apiRelativePath = NULL;
    self->context = NULL;
    {
        $tmp2 = self->compiler;
        $tmp3 = p_compiler;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->apiRelativePath;
        $tmp5 = p_apiRelativePath;
        self->apiRelativePath = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        $tmp6 = self->context;
        $tmp7 = p_context;
        self->context = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ListView* p_parameters) {
    panda$core$Bit $returnValue17;
    panda$core$Bit $tmp18;
    panda$core$Range$LTpanda$core$Int64$GT $tmp20;
    panda$core$Int64 $tmp21;
    panda$core$Bit $tmp26;
    panda$core$Object* $tmp40;
    panda$core$Object* $tmp42;
    panda$core$Bit $tmp48;
    panda$core$Bit $tmp56;
    ITable* $tmp8 = ((panda$collections$CollectionView*) p_m->parameters)->$class->itable;
    while ($tmp8->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp8 = $tmp8->next;
    }
    $fn10 $tmp9 = $tmp8->methods[0];
    panda$core$Int64 $tmp11 = $tmp9(((panda$collections$CollectionView*) p_m->parameters));
    ITable* $tmp12 = ((panda$collections$CollectionView*) p_parameters)->$class->itable;
    while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp12 = $tmp12->next;
    }
    $fn14 $tmp13 = $tmp12->methods[0];
    panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) p_parameters));
    panda$core$Bit $tmp16 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp11, $tmp15);
    if ($tmp16.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp18, false);
        $returnValue17 = $tmp18;
        return $returnValue17;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp21, 0);
    ITable* $tmp22 = ((panda$collections$CollectionView*) p_parameters)->$class->itable;
    while ($tmp22->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp22 = $tmp22->next;
    }
    $fn24 $tmp23 = $tmp22->methods[0];
    panda$core$Int64 $tmp25 = $tmp23(((panda$collections$CollectionView*) p_parameters));
    panda$core$Bit$init$builtin_bit(&$tmp26, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp20, $tmp21, $tmp25, $tmp26);
    int64_t $tmp28 = $tmp20.min.value;
    panda$core$Int64 i27 = { $tmp28 };
    int64_t $tmp30 = $tmp20.max.value;
    bool $tmp31 = $tmp20.inclusive.value;
    if ($tmp31) goto $l38; else goto $l39;
    $l38:;
    if ($tmp28 <= $tmp30) goto $l32; else goto $l34;
    $l39:;
    if ($tmp28 < $tmp30) goto $l32; else goto $l34;
    $l32:;
    {
        panda$core$Object* $tmp41 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i27);
        $tmp40 = $tmp41;
        ITable* $tmp43 = p_parameters->$class->itable;
        while ($tmp43->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp43 = $tmp43->next;
        }
        $fn45 $tmp44 = $tmp43->methods[0];
        panda$core$Object* $tmp46 = $tmp44(p_parameters, i27);
        $tmp42 = $tmp46;
        panda$core$Bit $tmp47 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp40)->type, ((org$pandalanguage$pandac$Type*) $tmp42));
        panda$core$Panda$unref$panda$core$Object($tmp42);
        panda$core$Panda$unref$panda$core$Object($tmp40);
        if ($tmp47.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp48, false);
            $returnValue17 = $tmp48;
            return $returnValue17;
        }
        }
    }
    $l35:;
    int64_t $tmp51 = $tmp30 - i27.value;
    if ($tmp31) goto $l52; else goto $l53;
    $l52:;
    if ((uint64_t) $tmp51 >= 1) goto $l50; else goto $l34;
    $l53:;
    if ((uint64_t) $tmp51 > 1) goto $l50; else goto $l34;
    $l50:;
    i27.value += 1;
    goto $l32;
    $l34:;
    panda$core$Bit$init$builtin_bit(&$tmp56, true);
    $returnValue17 = $tmp56;
    return $returnValue17;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* base61 = NULL;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$collections$Iterator* $tmp66;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $returnValue76;
    panda$core$String* $tmp77;
    panda$core$String* $tmp78;
    panda$core$String* $tmp79;
    panda$core$String* $tmp80;
    int $tmp60;
    {
        memset(&base61, 0, sizeof(base61));
        if (((panda$core$Bit) { self->context != NULL }).value) {
        {
            {
                $tmp62 = base61;
                panda$collections$Iterator* $tmp68 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self->context->name, &$s67);
                $tmp66 = $tmp68;
                ITable* $tmp69 = $tmp66->$class->itable;
                while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp69 = $tmp69->next;
                }
                $fn71 $tmp70 = $tmp69->methods[2];
                panda$core$Int64 $tmp72 = $tmp70($tmp66);
                panda$core$String* $tmp73 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s65, $tmp72);
                $tmp64 = $tmp73;
                $tmp63 = $tmp64;
                base61 = $tmp63;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
            }
        }
        }
        else {
        {
            {
                $tmp74 = base61;
                $tmp75 = self->apiRelativePath;
                base61 = $tmp75;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
            }
        }
        }
        panda$core$String* $tmp83 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s81, &$s82);
        $tmp80 = $tmp83;
        panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(base61, $tmp80);
        $tmp79 = $tmp84;
        panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, &$s85);
        $tmp78 = $tmp86;
        $tmp77 = $tmp78;
        $returnValue76 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        $tmp60 = 0;
        goto $l58;
        $l87:;
        return $returnValue76;
    }
    $l58:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base61));
    switch ($tmp60) {
        case 0: goto $l87;
    }
    $l89:;
    if (false) goto $l90; else goto $l91;
    $l91:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s92, (panda$core$Int64) { 44 }, &$s93);
    abort();
    $l90:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $returnValue94;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    panda$core$String* $tmp97;
    panda$core$Object* $tmp98;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$Object* $tmp99 = panda$core$Weak$get$R$panda$core$Weak$T(p_f->owner);
    $tmp98 = $tmp99;
    panda$core$String* $tmp101 = (($fn100) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp98));
    $tmp97 = $tmp101;
    panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s104, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    $tmp103 = $tmp105;
    panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s106);
    $tmp102 = $tmp107;
    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, $tmp102);
    $tmp96 = $tmp108;
    $tmp95 = $tmp96;
    $returnValue94 = $tmp95;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object($tmp98);
    return $returnValue94;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result113 = NULL;
    panda$core$MutableString* $tmp114;
    panda$core$MutableString* $tmp115;
    panda$core$String* $tmp117;
    panda$core$Object* $tmp118;
    panda$core$Char8 $tmp122;
    panda$core$UInt8 $tmp123;
    panda$core$Char8 $tmp124;
    panda$core$UInt8 $tmp125;
    panda$core$String* separator126 = NULL;
    panda$core$String* $tmp127;
    panda$collections$Iterator* Iter$66$9132 = NULL;
    panda$collections$Iterator* $tmp133;
    panda$collections$Iterator* $tmp134;
    org$pandalanguage$pandac$MethodDecl$Parameter* p150 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp151;
    panda$core$Object* $tmp152;
    panda$core$String* $tmp157;
    panda$core$String* $tmp158;
    panda$core$Char8 $tmp162;
    panda$core$UInt8 $tmp163;
    org$pandalanguage$pandac$Type* $tmp164;
    panda$core$Char8 $tmp167;
    panda$core$UInt8 $tmp168;
    panda$core$String* $returnValue173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    int $tmp112;
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
        panda$core$MutableString* $tmp116 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Object* $tmp119 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp118 = $tmp119;
        panda$core$String* $tmp121 = (($fn120) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp118));
        $tmp117 = $tmp121;
        panda$core$MutableString$init$panda$core$String($tmp116, $tmp117);
        $tmp115 = $tmp116;
        $tmp114 = $tmp115;
        result113 = $tmp114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object($tmp118);
        panda$core$UInt8$init$builtin_uint8(&$tmp123, 35);
        panda$core$Char8$init$panda$core$UInt8(&$tmp122, $tmp123);
        panda$core$MutableString$append$panda$core$Char8(result113, $tmp122);
        panda$core$MutableString$append$panda$core$String(result113, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp125, 40);
        panda$core$Char8$init$panda$core$UInt8(&$tmp124, $tmp125);
        panda$core$MutableString$append$panda$core$Char8(result113, $tmp124);
        $tmp127 = &$s128;
        separator126 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        {
            int $tmp131;
            {
                ITable* $tmp135 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp135 = $tmp135->next;
                }
                $fn137 $tmp136 = $tmp135->methods[0];
                panda$collections$Iterator* $tmp138 = $tmp136(((panda$collections$Iterable*) p_m->parameters));
                $tmp134 = $tmp138;
                $tmp133 = $tmp134;
                Iter$66$9132 = $tmp133;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
                $l139:;
                ITable* $tmp142 = Iter$66$9132->$class->itable;
                while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp142 = $tmp142->next;
                }
                $fn144 $tmp143 = $tmp142->methods[0];
                panda$core$Bit $tmp145 = $tmp143(Iter$66$9132);
                panda$core$Bit $tmp146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp145);
                bool $tmp141 = $tmp146.value;
                if (!$tmp141) goto $l140;
                {
                    int $tmp149;
                    {
                        ITable* $tmp153 = Iter$66$9132->$class->itable;
                        while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp153 = $tmp153->next;
                        }
                        $fn155 $tmp154 = $tmp153->methods[1];
                        panda$core$Object* $tmp156 = $tmp154(Iter$66$9132);
                        $tmp152 = $tmp156;
                        $tmp151 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp152);
                        p150 = $tmp151;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                        panda$core$Panda$unref$panda$core$Object($tmp152);
                        panda$core$MutableString$append$panda$core$String(result113, separator126);
                        panda$core$MutableString$append$panda$core$Object(result113, ((panda$core$Object*) p150->type));
                        {
                            $tmp157 = separator126;
                            $tmp158 = &$s159;
                            separator126 = $tmp158;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
                        }
                    }
                    $tmp149 = -1;
                    goto $l147;
                    $l147:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p150));
                    p150 = NULL;
                    switch ($tmp149) {
                        case -1: goto $l160;
                    }
                    $l160:;
                }
                goto $l139;
                $l140:;
            }
            $tmp131 = -1;
            goto $l129;
            $l129:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$66$9132));
            Iter$66$9132 = NULL;
            switch ($tmp131) {
                case -1: goto $l161;
            }
            $l161:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp163, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp162, $tmp163);
        panda$core$MutableString$append$panda$core$Char8(result113, $tmp162);
        org$pandalanguage$pandac$Type* $tmp165 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp164 = $tmp165;
        panda$core$Bit $tmp166 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp164);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
        if ($tmp166.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp168, 58);
            panda$core$Char8$init$panda$core$UInt8(&$tmp167, $tmp168);
            panda$core$MutableString$append$panda$core$Char8(result113, $tmp167);
            panda$core$MutableString$append$panda$core$Object(result113, ((panda$core$Object*) p_m->returnType));
        }
        }
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result113, &$s169, &$s170);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result113, &$s171, &$s172);
        panda$core$String* $tmp176 = panda$core$MutableString$finish$R$panda$core$String(result113);
        $tmp175 = $tmp176;
        $tmp174 = $tmp175;
        $returnValue173 = $tmp174;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
        $tmp112 = 0;
        goto $l110;
        $l177:;
        return $returnValue173;
    }
    $l110:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result113));
    result113 = NULL;
    separator126 = NULL;
    switch ($tmp112) {
        case 0: goto $l177;
    }
    $l179:;
    if (false) goto $l180; else goto $l181;
    $l181:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s182, (panda$core$Int64) { 59 }, &$s183);
    abort();
    $l180:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$Symbol$Kind $match$82_9184;
    panda$core$Int64 $tmp185;
    panda$core$String* $returnValue187;
    panda$core$String* $tmp188;
    panda$core$String* $tmp189;
    panda$core$Int64 $tmp193;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* $tmp200;
    {
        $match$82_9184 = p_s->kind;
        panda$core$Int64$init$builtin_int64(&$tmp185, 2);
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9184.$rawValue, $tmp185);
        if ($tmp186.value) {
        {
            panda$core$String* $tmp191 = (($fn190) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$FieldDecl*) p_s));
            $tmp189 = $tmp191;
            $tmp188 = $tmp189;
            $returnValue187 = $tmp188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp193, 4);
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9184.$rawValue, $tmp193);
        if ($tmp194.value) {
        {
            panda$core$String* $tmp198 = (($fn197) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$MethodDecl*) p_s));
            $tmp196 = $tmp198;
            $tmp195 = $tmp196;
            $returnValue187 = $tmp195;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
            return $returnValue187;
        }
        }
        else {
        {
            $tmp200 = NULL;
            $returnValue187 = $tmp200;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
            return $returnValue187;
        }
        }
        }
    }
    if (false) goto $l202; else goto $l203;
    $l203:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s204, (panda$core$Int64) { 81 }, &$s205);
    abort();
    $l202:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, panda$core$String* p_link) {
    panda$core$String* $returnValue216;
    panda$core$String* $tmp217;
    org$pandalanguage$pandac$ClassDecl* cl220 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp221;
    org$pandalanguage$pandac$ClassDecl* $tmp222;
    panda$core$String* $tmp224;
    panda$core$String* $tmp225;
    panda$core$RegularExpression* $tmp232;
    org$pandalanguage$pandac$Symbol* s240 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp241;
    org$pandalanguage$pandac$Symbol* $tmp242;
    org$pandalanguage$pandac$SymbolTable* $tmp243;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    panda$core$RegularExpression* $tmp254;
    panda$core$String$Index$nullable index258;
    org$pandalanguage$pandac$ClassDecl* $tmp261;
    org$pandalanguage$pandac$ClassDecl* $tmp262;
    org$pandalanguage$pandac$ClassDecl* $tmp263;
    panda$core$String* $tmp264;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp265;
    panda$core$Bit $tmp266;
    org$pandalanguage$pandac$Symbol* s272 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp273;
    org$pandalanguage$pandac$Symbol* $tmp274;
    org$pandalanguage$pandac$SymbolTable* $tmp275;
    panda$core$String* $tmp277;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp278;
    panda$core$Bit $tmp280;
    panda$core$String* $tmp283;
    panda$core$String* $tmp287;
    panda$core$String* $tmp288;
    panda$collections$ListView* parsed295 = NULL;
    panda$collections$ListView* $tmp296;
    panda$collections$ListView* $tmp297;
    panda$core$RegularExpression* $tmp298;
    panda$collections$Array* parameters305 = NULL;
    panda$collections$Array* $tmp306;
    panda$collections$Array* $tmp307;
    panda$core$String* $tmp309;
    panda$core$Object* $tmp310;
    panda$core$Int64 $tmp311;
    panda$io$File* $tmp322;
    panda$core$Object* $tmp324;
    panda$core$Int64 $tmp325;
    panda$core$Object* $tmp330;
    panda$core$Int64 $tmp331;
    org$pandalanguage$pandac$ASTNode* type341 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp342;
    org$pandalanguage$pandac$ASTNode* $tmp343;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$core$Object* $tmp348;
    panda$core$Int64 $tmp349;
    panda$core$String* $tmp357;
    org$pandalanguage$pandac$Type* converted362 = NULL;
    org$pandalanguage$pandac$Type* $tmp363;
    org$pandalanguage$pandac$Type* $tmp364;
    org$pandalanguage$pandac$Type* resolved366 = NULL;
    org$pandalanguage$pandac$Type* $tmp367;
    org$pandalanguage$pandac$Type* $tmp368;
    panda$core$String* $tmp370;
    org$pandalanguage$pandac$parser$Token$Kind $tmp375;
    panda$core$Int64 $tmp376;
    panda$core$String* name380 = NULL;
    panda$core$String* $tmp381;
    panda$core$Object* $tmp382;
    panda$core$Int64 $tmp383;
    panda$core$String$Index$nullable index388;
    panda$core$String* symbolName391 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp392;
    org$pandalanguage$pandac$ClassDecl* $tmp393;
    org$pandalanguage$pandac$ClassDecl* $tmp394;
    panda$core$String* $tmp395;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp396;
    panda$core$Bit $tmp397;
    panda$core$String* $tmp400;
    panda$core$String* $tmp401;
    panda$core$String* $tmp402;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp403;
    panda$core$Bit $tmp405;
    org$pandalanguage$pandac$ClassDecl* $tmp407;
    org$pandalanguage$pandac$ClassDecl* $tmp408;
    panda$core$String* $tmp409;
    panda$core$String* $tmp410;
    org$pandalanguage$pandac$Symbol* s414 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp415;
    org$pandalanguage$pandac$Symbol* $tmp416;
    org$pandalanguage$pandac$SymbolTable* $tmp417;
    panda$core$String* $tmp420;
    org$pandalanguage$pandac$Symbol$Kind $match$155_17425;
    panda$core$Int64 $tmp426;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    panda$core$Int64 $tmp438;
    panda$collections$Iterator* Iter$161$25443 = NULL;
    panda$collections$Iterator* $tmp444;
    panda$collections$Iterator* $tmp445;
    org$pandalanguage$pandac$MethodDecl* m461 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp462;
    panda$core$Object* $tmp463;
    panda$core$String* $tmp470;
    panda$core$String* $tmp471;
    panda$core$String* $tmp482;
    panda$core$String* $tmp489;
    int $tmp208;
    {
        panda$core$Bit $tmp211 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s210);
        bool $tmp209 = $tmp211.value;
        if ($tmp209) goto $l212;
        panda$core$Bit $tmp214 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s213);
        $tmp209 = $tmp214.value;
        $l212:;
        panda$core$Bit $tmp215 = { $tmp209 };
        if ($tmp215.value) {
        {
            $tmp217 = p_link;
            $returnValue216 = $tmp217;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
            $tmp208 = 0;
            goto $l206;
            $l218:;
            return $returnValue216;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp223 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_link);
        $tmp222 = $tmp223;
        $tmp221 = $tmp222;
        cl220 = $tmp221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        if (((panda$core$Bit) { cl220 != NULL }).value) {
        {
            panda$core$String* $tmp227 = (($fn226) self->$class->vtable[3])(self, cl220);
            $tmp225 = $tmp227;
            $tmp224 = $tmp225;
            $returnValue216 = $tmp224;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
            $tmp208 = 1;
            goto $l206;
            $l228:;
            return $returnValue216;
        }
        }
        bool $tmp230 = ((panda$core$Bit) { self->context != NULL }).value;
        if (!$tmp230) goto $l231;
        panda$core$RegularExpression* $tmp233 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp233, &$s234);
        $tmp232 = $tmp233;
        panda$core$Bit $tmp235 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp232);
        $tmp230 = $tmp235.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        $l231:;
        panda$core$Bit $tmp236 = { $tmp230 };
        if ($tmp236.value) {
        {
            int $tmp239;
            {
                org$pandalanguage$pandac$SymbolTable* $tmp244 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, self->context);
                $tmp243 = $tmp244;
                org$pandalanguage$pandac$Symbol* $tmp245 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp243, p_link);
                $tmp242 = $tmp245;
                $tmp241 = $tmp242;
                s240 = $tmp241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                if (((panda$core$Bit) { s240 != NULL }).value) {
                {
                    panda$core$String* $tmp249 = (($fn248) self->$class->vtable[6])(self, s240);
                    $tmp247 = $tmp249;
                    $tmp246 = $tmp247;
                    $returnValue216 = $tmp246;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                    $tmp239 = 0;
                    goto $l237;
                    $l250:;
                    $tmp208 = 2;
                    goto $l206;
                    $l251:;
                    return $returnValue216;
                }
                }
            }
            $tmp239 = -1;
            goto $l237;
            $l237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s240));
            s240 = NULL;
            switch ($tmp239) {
                case -1: goto $l253;
                case 0: goto $l250;
            }
            $l253:;
        }
        }
        panda$core$RegularExpression* $tmp255 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp255, &$s256);
        $tmp254 = $tmp255;
        panda$core$Bit $tmp257 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp254);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
        if ($tmp257.value) {
        {
            panda$core$String$Index$nullable $tmp260 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_link, &$s259);
            index258 = $tmp260;
            if (((panda$core$Bit) { index258.nonnull }).value) {
            {
                {
                    $tmp261 = cl220;
                    panda$core$Bit$init$builtin_bit(&$tmp266, false);
                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp265, ((panda$core$String$Index$nullable) { .nonnull = false }), index258, $tmp266);
                    panda$core$String* $tmp267 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp265);
                    $tmp264 = $tmp267;
                    org$pandalanguage$pandac$ClassDecl* $tmp268 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp264);
                    $tmp263 = $tmp268;
                    $tmp262 = $tmp263;
                    cl220 = $tmp262;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
                }
                if (((panda$core$Bit) { cl220 != NULL }).value) {
                {
                    int $tmp271;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp276 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl220);
                        $tmp275 = $tmp276;
                        panda$core$String$Index $tmp279 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_link, ((panda$core$String$Index) index258.value));
                        panda$core$Bit$init$builtin_bit(&$tmp280, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp278, ((panda$core$String$Index$nullable) { $tmp279, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp280);
                        panda$core$String* $tmp281 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp278);
                        $tmp277 = $tmp281;
                        org$pandalanguage$pandac$Symbol* $tmp282 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp275, $tmp277);
                        $tmp274 = $tmp282;
                        $tmp273 = $tmp274;
                        s272 = $tmp273;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                        if (((panda$core$Bit) { s272 == NULL }).value) {
                        {
                            $tmp283 = NULL;
                            $returnValue216 = $tmp283;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
                            $tmp271 = 0;
                            goto $l269;
                            $l284:;
                            $tmp208 = 3;
                            goto $l206;
                            $l285:;
                            return $returnValue216;
                        }
                        }
                        panda$core$String* $tmp290 = (($fn289) self->$class->vtable[6])(self, s272);
                        $tmp288 = $tmp290;
                        $tmp287 = $tmp288;
                        $returnValue216 = $tmp287;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                        $tmp271 = 1;
                        goto $l269;
                        $l291:;
                        $tmp208 = 4;
                        goto $l206;
                        $l292:;
                        return $returnValue216;
                    }
                    $l269:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s272));
                    s272 = NULL;
                    switch ($tmp271) {
                        case 1: goto $l291;
                        case 0: goto $l284;
                    }
                    $l294:;
                }
                }
            }
            }
        }
        }
        panda$core$RegularExpression* $tmp299 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp299, &$s300);
        $tmp298 = $tmp299;
        panda$collections$ListView* $tmp301 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_link, $tmp298);
        $tmp297 = $tmp301;
        $tmp296 = $tmp297;
        parsed295 = $tmp296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
        if (((panda$core$Bit) { parsed295 != NULL }).value) {
        {
            int $tmp304;
            {
                panda$collections$Array* $tmp308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp308);
                $tmp307 = $tmp308;
                $tmp306 = $tmp307;
                parameters305 = $tmp306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                panda$core$Int64$init$builtin_int64(&$tmp311, 1);
                ITable* $tmp312 = parsed295->$class->itable;
                while ($tmp312->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp312 = $tmp312->next;
                }
                $fn314 $tmp313 = $tmp312->methods[0];
                panda$core$Object* $tmp315 = $tmp313(parsed295, $tmp311);
                $tmp310 = $tmp315;
                panda$core$String* $tmp316 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp310));
                $tmp309 = $tmp316;
                ITable* $tmp318 = ((panda$core$Equatable*) $tmp309)->$class->itable;
                while ($tmp318->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp318 = $tmp318->next;
                }
                $fn320 $tmp319 = $tmp318->methods[1];
                panda$core$Bit $tmp321 = $tmp319(((panda$core$Equatable*) $tmp309), ((panda$core$Equatable*) &$s317));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                panda$core$Panda$unref$panda$core$Object($tmp310);
                if ($tmp321.value) {
                {
                    panda$io$File* $tmp323 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$Int64$init$builtin_int64(&$tmp325, 1);
                    ITable* $tmp326 = parsed295->$class->itable;
                    while ($tmp326->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp326 = $tmp326->next;
                    }
                    $fn328 $tmp327 = $tmp326->methods[0];
                    panda$core$Object* $tmp329 = $tmp327(parsed295, $tmp325);
                    $tmp324 = $tmp329;
                    panda$io$File$init$panda$core$String($tmp323, ((panda$core$String*) $tmp324));
                    $tmp322 = $tmp323;
                    panda$core$Int64$init$builtin_int64(&$tmp331, 1);
                    ITable* $tmp332 = parsed295->$class->itable;
                    while ($tmp332->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp332 = $tmp332->next;
                    }
                    $fn334 $tmp333 = $tmp332->methods[0];
                    panda$core$Object* $tmp335 = $tmp333(parsed295, $tmp331);
                    $tmp330 = $tmp335;
                    org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->compiler->parser, $tmp322, ((panda$core$String*) $tmp330));
                    panda$core$Panda$unref$panda$core$Object($tmp330);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                    panda$core$Panda$unref$panda$core$Object($tmp324);
                    $l336:;
                    while (true) {
                    {
                        int $tmp340;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp344 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self->compiler->parser);
                            $tmp343 = $tmp344;
                            $tmp342 = $tmp343;
                            type341 = $tmp342;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                            if (((panda$core$Bit) { type341 == NULL }).value) {
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp349, 1);
                                ITable* $tmp350 = parsed295->$class->itable;
                                while ($tmp350->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                    $tmp350 = $tmp350->next;
                                }
                                $fn352 $tmp351 = $tmp350->methods[0];
                                panda$core$Object* $tmp353 = $tmp351(parsed295, $tmp349);
                                $tmp348 = $tmp353;
                                panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s347, ((panda$core$String*) $tmp348));
                                $tmp346 = $tmp354;
                                panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s355);
                                $tmp345 = $tmp356;
                                panda$io$Console$printLine$panda$core$String($tmp345);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                                panda$core$Panda$unref$panda$core$Object($tmp348);
                                $tmp357 = NULL;
                                $returnValue216 = $tmp357;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
                                $tmp340 = 0;
                                goto $l338;
                                $l358:;
                                $tmp304 = 0;
                                goto $l302;
                                $l359:;
                                $tmp208 = 5;
                                goto $l206;
                                $l360:;
                                return $returnValue216;
                            }
                            }
                            org$pandalanguage$pandac$Type* $tmp365 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->compiler->scanner, type341);
                            $tmp364 = $tmp365;
                            $tmp363 = $tmp364;
                            converted362 = $tmp363;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                            org$pandalanguage$pandac$Type* $tmp369 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self->compiler, converted362);
                            $tmp368 = $tmp369;
                            $tmp367 = $tmp368;
                            resolved366 = $tmp367;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
                            if (((panda$core$Bit) { resolved366 == NULL }).value) {
                            {
                                $tmp370 = NULL;
                                $returnValue216 = $tmp370;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
                                $tmp340 = 1;
                                goto $l338;
                                $l371:;
                                $tmp304 = 1;
                                goto $l302;
                                $l372:;
                                $tmp208 = 6;
                                goto $l206;
                                $l373:;
                                return $returnValue216;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(parameters305, ((panda$core$Object*) resolved366));
                            panda$core$Int64$init$builtin_int64(&$tmp376, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp375, $tmp376);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp377 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self->compiler->parser, $tmp375);
                            if (((panda$core$Bit) { !$tmp377.nonnull }).value) {
                            {
                                $tmp340 = 2;
                                goto $l338;
                                $l378:;
                                goto $l337;
                            }
                            }
                        }
                        $tmp340 = -1;
                        goto $l338;
                        $l338:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resolved366));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) converted362));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type341));
                        type341 = NULL;
                        converted362 = NULL;
                        resolved366 = NULL;
                        switch ($tmp340) {
                            case 0: goto $l358;
                            case -1: goto $l379;
                            case 1: goto $l371;
                            case 2: goto $l378;
                        }
                        $l379:;
                    }
                    }
                    $l337:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp383, 0);
                ITable* $tmp384 = parsed295->$class->itable;
                while ($tmp384->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp384 = $tmp384->next;
                }
                $fn386 $tmp385 = $tmp384->methods[0];
                panda$core$Object* $tmp387 = $tmp385(parsed295, $tmp383);
                $tmp382 = $tmp387;
                $tmp381 = ((panda$core$String*) $tmp382);
                name380 = $tmp381;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
                panda$core$Panda$unref$panda$core$Object($tmp382);
                panda$core$String$Index$nullable $tmp390 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(name380, &$s389);
                index388 = $tmp390;
                memset(&symbolName391, 0, sizeof(symbolName391));
                if (((panda$core$Bit) { index388.nonnull }).value) {
                {
                    {
                        $tmp392 = cl220;
                        panda$core$Bit$init$builtin_bit(&$tmp397, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp396, ((panda$core$String$Index$nullable) { .nonnull = false }), index388, $tmp397);
                        panda$core$String* $tmp398 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name380, $tmp396);
                        $tmp395 = $tmp398;
                        org$pandalanguage$pandac$ClassDecl* $tmp399 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp395);
                        $tmp394 = $tmp399;
                        $tmp393 = $tmp394;
                        cl220 = $tmp393;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
                    }
                    {
                        $tmp400 = symbolName391;
                        panda$core$String$Index $tmp404 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(name380, ((panda$core$String$Index) index388.value));
                        panda$core$Bit$init$builtin_bit(&$tmp405, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp403, ((panda$core$String$Index$nullable) { $tmp404, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp405);
                        panda$core$String* $tmp406 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name380, $tmp403);
                        $tmp402 = $tmp406;
                        $tmp401 = $tmp402;
                        symbolName391 = $tmp401;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                    }
                }
                }
                else {
                {
                    {
                        $tmp407 = cl220;
                        $tmp408 = self->context;
                        cl220 = $tmp408;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                    }
                    {
                        $tmp409 = symbolName391;
                        $tmp410 = name380;
                        symbolName391 = $tmp410;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                    }
                }
                }
                if (((panda$core$Bit) { cl220 != NULL }).value) {
                {
                    int $tmp413;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp418 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl220);
                        $tmp417 = $tmp418;
                        org$pandalanguage$pandac$Symbol* $tmp419 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp417, symbolName391);
                        $tmp416 = $tmp419;
                        $tmp415 = $tmp416;
                        s414 = $tmp415;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                        if (((panda$core$Bit) { s414 == NULL }).value) {
                        {
                            $tmp420 = NULL;
                            $returnValue216 = $tmp420;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
                            $tmp413 = 0;
                            goto $l411;
                            $l421:;
                            $tmp304 = 2;
                            goto $l302;
                            $l422:;
                            $tmp208 = 7;
                            goto $l206;
                            $l423:;
                            return $returnValue216;
                        }
                        }
                        {
                            $match$155_17425 = s414->kind;
                            panda$core$Int64$init$builtin_int64(&$tmp426, 4);
                            panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_17425.$rawValue, $tmp426);
                            if ($tmp427.value) {
                            {
                                panda$core$Bit $tmp429 = (($fn428) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$MethodDecl*) s414), ((panda$collections$ListView*) parameters305));
                                if ($tmp429.value) {
                                {
                                    panda$core$String* $tmp433 = (($fn432) self->$class->vtable[6])(self, s414);
                                    $tmp431 = $tmp433;
                                    $tmp430 = $tmp431;
                                    $returnValue216 = $tmp430;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                                    $tmp413 = 1;
                                    goto $l411;
                                    $l434:;
                                    $tmp304 = 3;
                                    goto $l302;
                                    $l435:;
                                    $tmp208 = 8;
                                    goto $l206;
                                    $l436:;
                                    return $returnValue216;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp438, 5);
                            panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_17425.$rawValue, $tmp438);
                            if ($tmp439.value) {
                            {
                                {
                                    int $tmp442;
                                    {
                                        ITable* $tmp446 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s414)->methods)->$class->itable;
                                        while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp446 = $tmp446->next;
                                        }
                                        $fn448 $tmp447 = $tmp446->methods[0];
                                        panda$collections$Iterator* $tmp449 = $tmp447(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s414)->methods));
                                        $tmp445 = $tmp449;
                                        $tmp444 = $tmp445;
                                        Iter$161$25443 = $tmp444;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                                        $l450:;
                                        ITable* $tmp453 = Iter$161$25443->$class->itable;
                                        while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp453 = $tmp453->next;
                                        }
                                        $fn455 $tmp454 = $tmp453->methods[0];
                                        panda$core$Bit $tmp456 = $tmp454(Iter$161$25443);
                                        panda$core$Bit $tmp457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp456);
                                        bool $tmp452 = $tmp457.value;
                                        if (!$tmp452) goto $l451;
                                        {
                                            int $tmp460;
                                            {
                                                ITable* $tmp464 = Iter$161$25443->$class->itable;
                                                while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp464 = $tmp464->next;
                                                }
                                                $fn466 $tmp465 = $tmp464->methods[1];
                                                panda$core$Object* $tmp467 = $tmp465(Iter$161$25443);
                                                $tmp463 = $tmp467;
                                                $tmp462 = ((org$pandalanguage$pandac$MethodDecl*) $tmp463);
                                                m461 = $tmp462;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
                                                panda$core$Panda$unref$panda$core$Object($tmp463);
                                                panda$core$Bit $tmp469 = (($fn468) self->$class->vtable[2])(self, m461, ((panda$collections$ListView*) parameters305));
                                                if ($tmp469.value) {
                                                {
                                                    panda$core$String* $tmp473 = (($fn472) self->$class->vtable[5])(self, m461);
                                                    $tmp471 = $tmp473;
                                                    $tmp470 = $tmp471;
                                                    $returnValue216 = $tmp470;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
                                                    $tmp460 = 0;
                                                    goto $l458;
                                                    $l474:;
                                                    $tmp442 = 0;
                                                    goto $l440;
                                                    $l475:;
                                                    $tmp413 = 2;
                                                    goto $l411;
                                                    $l476:;
                                                    $tmp304 = 4;
                                                    goto $l302;
                                                    $l477:;
                                                    $tmp208 = 9;
                                                    goto $l206;
                                                    $l478:;
                                                    return $returnValue216;
                                                }
                                                }
                                            }
                                            $tmp460 = -1;
                                            goto $l458;
                                            $l458:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m461));
                                            m461 = NULL;
                                            switch ($tmp460) {
                                                case 0: goto $l474;
                                                case -1: goto $l480;
                                            }
                                            $l480:;
                                        }
                                        goto $l450;
                                        $l451:;
                                    }
                                    $tmp442 = -1;
                                    goto $l440;
                                    $l440:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$161$25443));
                                    Iter$161$25443 = NULL;
                                    switch ($tmp442) {
                                        case -1: goto $l481;
                                        case 0: goto $l475;
                                    }
                                    $l481:;
                                }
                            }
                            }
                            }
                        }
                        $tmp482 = NULL;
                        $returnValue216 = $tmp482;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
                        $tmp413 = 3;
                        goto $l411;
                        $l483:;
                        $tmp304 = 5;
                        goto $l302;
                        $l484:;
                        $tmp208 = 10;
                        goto $l206;
                        $l485:;
                        return $returnValue216;
                    }
                    $l411:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s414));
                    s414 = NULL;
                    switch ($tmp413) {
                        case 2: goto $l476;
                        case 1: goto $l434;
                        case 0: goto $l421;
                        case 3: goto $l483;
                    }
                    $l487:;
                }
                }
            }
            $tmp304 = -1;
            goto $l302;
            $l302:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) symbolName391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters305));
            parameters305 = NULL;
            name380 = NULL;
            switch ($tmp304) {
                case 2: goto $l422;
                case -1: goto $l488;
                case 3: goto $l435;
                case 4: goto $l477;
                case 0: goto $l359;
                case 1: goto $l372;
                case 5: goto $l484;
            }
            $l488:;
        }
        }
        $tmp489 = NULL;
        $returnValue216 = $tmp489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
        $tmp208 = 11;
        goto $l206;
        $l490:;
        return $returnValue216;
    }
    $l206:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed295));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl220));
    cl220 = NULL;
    parsed295 = NULL;
    switch ($tmp208) {
        case 2: goto $l251;
        case 3: goto $l285;
        case 1: goto $l228;
        case 6: goto $l373;
        case 5: goto $l360;
        case 7: goto $l423;
        case 0: goto $l218;
        case 9: goto $l478;
        case 8: goto $l436;
        case 11: goto $l490;
        case 4: goto $l292;
        case 10: goto $l485;
    }
    $l492:;
    if (false) goto $l493; else goto $l494;
    $l494:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s495, (panda$core$Int64) { 90 }, &$s496);
    abort();
    $l493:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* self) {
    int $tmp499;
    {
    }
    $tmp499 = -1;
    goto $l497;
    $l497:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp499) {
        case -1: goto $l500;
    }
    $l500:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->apiRelativePath));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->context));
}

