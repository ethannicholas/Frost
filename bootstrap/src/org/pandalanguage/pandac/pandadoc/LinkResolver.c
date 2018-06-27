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
typedef panda$core$String* (*$fn96)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn116)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn140)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn151)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn182)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn189)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn214)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn236)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn277)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn302)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn308)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn316)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn322)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn340)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn374)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn416)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn420)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn436)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn443)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn454)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn456)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn460)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $returnValue90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    panda$core$String* $tmp93;
    panda$core$Object* $tmp94;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99;
    panda$core$Object* $tmp95 = panda$core$Weak$get$R$panda$core$Weak$T(p_f->owner);
    $tmp94 = $tmp95;
    panda$core$String* $tmp97 = (($fn96) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp94));
    $tmp93 = $tmp97;
    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s100, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    $tmp99 = $tmp101;
    panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s102);
    $tmp98 = $tmp103;
    panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, $tmp98);
    $tmp92 = $tmp104;
    $tmp91 = $tmp92;
    $returnValue90 = $tmp91;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object($tmp94);
    return $returnValue90;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result109 = NULL;
    panda$core$MutableString* $tmp110;
    panda$core$MutableString* $tmp111;
    panda$core$String* $tmp113;
    panda$core$Object* $tmp114;
    panda$core$Char8 $tmp118;
    panda$core$UInt8 $tmp119;
    panda$core$Char8 $tmp120;
    panda$core$UInt8 $tmp121;
    panda$core$String* separator122 = NULL;
    panda$core$String* $tmp123;
    panda$collections$Iterator* Iter$66$9128 = NULL;
    panda$collections$Iterator* $tmp129;
    panda$collections$Iterator* $tmp130;
    org$pandalanguage$pandac$MethodDecl$Parameter* p146 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp147;
    panda$core$Object* $tmp148;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$Char8 $tmp158;
    panda$core$UInt8 $tmp159;
    org$pandalanguage$pandac$Type* $tmp160;
    panda$core$Char8 $tmp163;
    panda$core$UInt8 $tmp164;
    panda$core$String* $returnValue169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    int $tmp108;
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
        panda$core$MutableString* $tmp112 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Object* $tmp115 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp114 = $tmp115;
        panda$core$String* $tmp117 = (($fn116) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp114));
        $tmp113 = $tmp117;
        panda$core$MutableString$init$panda$core$String($tmp112, $tmp113);
        $tmp111 = $tmp112;
        $tmp110 = $tmp111;
        result109 = $tmp110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object($tmp114);
        panda$core$UInt8$init$builtin_uint8(&$tmp119, 35);
        panda$core$Char8$init$panda$core$UInt8(&$tmp118, $tmp119);
        panda$core$MutableString$append$panda$core$Char8(result109, $tmp118);
        panda$core$MutableString$append$panda$core$String(result109, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp121, 40);
        panda$core$Char8$init$panda$core$UInt8(&$tmp120, $tmp121);
        panda$core$MutableString$append$panda$core$Char8(result109, $tmp120);
        $tmp123 = &$s124;
        separator122 = $tmp123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
        {
            int $tmp127;
            {
                ITable* $tmp131 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp131 = $tmp131->next;
                }
                $fn133 $tmp132 = $tmp131->methods[0];
                panda$collections$Iterator* $tmp134 = $tmp132(((panda$collections$Iterable*) p_m->parameters));
                $tmp130 = $tmp134;
                $tmp129 = $tmp130;
                Iter$66$9128 = $tmp129;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                $l135:;
                ITable* $tmp138 = Iter$66$9128->$class->itable;
                while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp138 = $tmp138->next;
                }
                $fn140 $tmp139 = $tmp138->methods[0];
                panda$core$Bit $tmp141 = $tmp139(Iter$66$9128);
                panda$core$Bit $tmp142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp141);
                bool $tmp137 = $tmp142.value;
                if (!$tmp137) goto $l136;
                {
                    int $tmp145;
                    {
                        ITable* $tmp149 = Iter$66$9128->$class->itable;
                        while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp149 = $tmp149->next;
                        }
                        $fn151 $tmp150 = $tmp149->methods[1];
                        panda$core$Object* $tmp152 = $tmp150(Iter$66$9128);
                        $tmp148 = $tmp152;
                        $tmp147 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp148);
                        p146 = $tmp147;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                        panda$core$Panda$unref$panda$core$Object($tmp148);
                        panda$core$MutableString$append$panda$core$String(result109, separator122);
                        panda$core$MutableString$append$panda$core$Object(result109, ((panda$core$Object*) p146->type));
                        {
                            $tmp153 = separator122;
                            $tmp154 = &$s155;
                            separator122 = $tmp154;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                        }
                    }
                    $tmp145 = -1;
                    goto $l143;
                    $l143:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p146));
                    p146 = NULL;
                    switch ($tmp145) {
                        case -1: goto $l156;
                    }
                    $l156:;
                }
                goto $l135;
                $l136:;
            }
            $tmp127 = -1;
            goto $l125;
            $l125:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$66$9128));
            Iter$66$9128 = NULL;
            switch ($tmp127) {
                case -1: goto $l157;
            }
            $l157:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp159, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp158, $tmp159);
        panda$core$MutableString$append$panda$core$Char8(result109, $tmp158);
        org$pandalanguage$pandac$Type* $tmp161 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp160 = $tmp161;
        panda$core$Bit $tmp162 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp160);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
        if ($tmp162.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp164, 58);
            panda$core$Char8$init$panda$core$UInt8(&$tmp163, $tmp164);
            panda$core$MutableString$append$panda$core$Char8(result109, $tmp163);
            panda$core$MutableString$append$panda$core$Object(result109, ((panda$core$Object*) p_m->returnType));
        }
        }
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result109, &$s165, &$s166);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result109, &$s167, &$s168);
        panda$core$String* $tmp172 = panda$core$MutableString$finish$R$panda$core$String(result109);
        $tmp171 = $tmp172;
        $tmp170 = $tmp171;
        $returnValue169 = $tmp170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
        $tmp108 = 0;
        goto $l106;
        $l173:;
        return $returnValue169;
    }
    $l106:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator122));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result109));
    result109 = NULL;
    separator122 = NULL;
    switch ($tmp108) {
        case 0: goto $l173;
    }
    $l175:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$Symbol$Kind $match$82_9176;
    panda$core$Int64 $tmp177;
    panda$core$String* $returnValue179;
    panda$core$String* $tmp180;
    panda$core$String* $tmp181;
    panda$core$Int64 $tmp185;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* $tmp192;
    {
        $match$82_9176 = p_s->kind;
        panda$core$Int64$init$builtin_int64(&$tmp177, 2);
        panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9176.$rawValue, $tmp177);
        if ($tmp178.value) {
        {
            panda$core$String* $tmp183 = (($fn182) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$FieldDecl*) p_s));
            $tmp181 = $tmp183;
            $tmp180 = $tmp181;
            $returnValue179 = $tmp180;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
            return $returnValue179;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp185, 4);
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9176.$rawValue, $tmp185);
        if ($tmp186.value) {
        {
            panda$core$String* $tmp190 = (($fn189) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$MethodDecl*) p_s));
            $tmp188 = $tmp190;
            $tmp187 = $tmp188;
            $returnValue179 = $tmp187;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
            return $returnValue179;
        }
        }
        else {
        {
            $tmp192 = NULL;
            $returnValue179 = $tmp192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
            return $returnValue179;
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, panda$core$String* p_link) {
    panda$core$String* $returnValue204;
    panda$core$String* $tmp205;
    org$pandalanguage$pandac$ClassDecl* cl208 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp209;
    org$pandalanguage$pandac$ClassDecl* $tmp210;
    panda$core$String* $tmp212;
    panda$core$String* $tmp213;
    panda$core$RegularExpression* $tmp220;
    org$pandalanguage$pandac$Symbol* s228 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp229;
    org$pandalanguage$pandac$Symbol* $tmp230;
    org$pandalanguage$pandac$SymbolTable* $tmp231;
    panda$core$String* $tmp234;
    panda$core$String* $tmp235;
    panda$core$RegularExpression* $tmp242;
    panda$core$String$Index$nullable index246;
    org$pandalanguage$pandac$ClassDecl* $tmp249;
    org$pandalanguage$pandac$ClassDecl* $tmp250;
    org$pandalanguage$pandac$ClassDecl* $tmp251;
    panda$core$String* $tmp252;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp253;
    panda$core$Bit $tmp254;
    org$pandalanguage$pandac$Symbol* s260 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp261;
    org$pandalanguage$pandac$Symbol* $tmp262;
    org$pandalanguage$pandac$SymbolTable* $tmp263;
    panda$core$String* $tmp265;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp266;
    panda$core$Bit $tmp268;
    panda$core$String* $tmp271;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    panda$collections$ListView* parsed283 = NULL;
    panda$collections$ListView* $tmp284;
    panda$collections$ListView* $tmp285;
    panda$core$RegularExpression* $tmp286;
    panda$collections$Array* parameters293 = NULL;
    panda$collections$Array* $tmp294;
    panda$collections$Array* $tmp295;
    panda$core$String* $tmp297;
    panda$core$Object* $tmp298;
    panda$core$Int64 $tmp299;
    panda$io$File* $tmp310;
    panda$core$Object* $tmp312;
    panda$core$Int64 $tmp313;
    panda$core$Object* $tmp318;
    panda$core$Int64 $tmp319;
    org$pandalanguage$pandac$ASTNode* type329 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp330;
    org$pandalanguage$pandac$ASTNode* $tmp331;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$core$Object* $tmp336;
    panda$core$Int64 $tmp337;
    panda$core$String* $tmp345;
    org$pandalanguage$pandac$Type* converted350 = NULL;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type* $tmp352;
    org$pandalanguage$pandac$Type* resolved354 = NULL;
    org$pandalanguage$pandac$Type* $tmp355;
    org$pandalanguage$pandac$Type* $tmp356;
    panda$core$String* $tmp358;
    org$pandalanguage$pandac$parser$Token$Kind $tmp363;
    panda$core$Int64 $tmp364;
    panda$core$String* name368 = NULL;
    panda$core$String* $tmp369;
    panda$core$Object* $tmp370;
    panda$core$Int64 $tmp371;
    panda$core$String$Index$nullable index376;
    panda$core$String* symbolName379 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp380;
    org$pandalanguage$pandac$ClassDecl* $tmp381;
    org$pandalanguage$pandac$ClassDecl* $tmp382;
    panda$core$String* $tmp383;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp384;
    panda$core$Bit $tmp385;
    panda$core$String* $tmp388;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp391;
    panda$core$Bit $tmp393;
    org$pandalanguage$pandac$ClassDecl* $tmp395;
    org$pandalanguage$pandac$ClassDecl* $tmp396;
    panda$core$String* $tmp397;
    panda$core$String* $tmp398;
    org$pandalanguage$pandac$Symbol* s402 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp403;
    org$pandalanguage$pandac$Symbol* $tmp404;
    org$pandalanguage$pandac$SymbolTable* $tmp405;
    panda$core$String* $tmp408;
    org$pandalanguage$pandac$Symbol$Kind $match$155_17413;
    panda$core$Int64 $tmp414;
    panda$core$String* $tmp418;
    panda$core$String* $tmp419;
    panda$core$Int64 $tmp426;
    panda$collections$Iterator* Iter$161$25431 = NULL;
    panda$collections$Iterator* $tmp432;
    panda$collections$Iterator* $tmp433;
    org$pandalanguage$pandac$MethodDecl* m449 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp450;
    panda$core$Object* $tmp451;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp470;
    panda$core$String* $tmp477;
    int $tmp196;
    {
        panda$core$Bit $tmp199 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s198);
        bool $tmp197 = $tmp199.value;
        if ($tmp197) goto $l200;
        panda$core$Bit $tmp202 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s201);
        $tmp197 = $tmp202.value;
        $l200:;
        panda$core$Bit $tmp203 = { $tmp197 };
        if ($tmp203.value) {
        {
            $tmp205 = p_link;
            $returnValue204 = $tmp205;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
            $tmp196 = 0;
            goto $l194;
            $l206:;
            return $returnValue204;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp211 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_link);
        $tmp210 = $tmp211;
        $tmp209 = $tmp210;
        cl208 = $tmp209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
        if (((panda$core$Bit) { cl208 != NULL }).value) {
        {
            panda$core$String* $tmp215 = (($fn214) self->$class->vtable[3])(self, cl208);
            $tmp213 = $tmp215;
            $tmp212 = $tmp213;
            $returnValue204 = $tmp212;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
            $tmp196 = 1;
            goto $l194;
            $l216:;
            return $returnValue204;
        }
        }
        bool $tmp218 = ((panda$core$Bit) { self->context != NULL }).value;
        if (!$tmp218) goto $l219;
        panda$core$RegularExpression* $tmp221 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp221, &$s222);
        $tmp220 = $tmp221;
        panda$core$Bit $tmp223 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp220);
        $tmp218 = $tmp223.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
        $l219:;
        panda$core$Bit $tmp224 = { $tmp218 };
        if ($tmp224.value) {
        {
            int $tmp227;
            {
                org$pandalanguage$pandac$SymbolTable* $tmp232 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, self->context);
                $tmp231 = $tmp232;
                org$pandalanguage$pandac$Symbol* $tmp233 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp231, p_link);
                $tmp230 = $tmp233;
                $tmp229 = $tmp230;
                s228 = $tmp229;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                if (((panda$core$Bit) { s228 != NULL }).value) {
                {
                    panda$core$String* $tmp237 = (($fn236) self->$class->vtable[6])(self, s228);
                    $tmp235 = $tmp237;
                    $tmp234 = $tmp235;
                    $returnValue204 = $tmp234;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
                    $tmp227 = 0;
                    goto $l225;
                    $l238:;
                    $tmp196 = 2;
                    goto $l194;
                    $l239:;
                    return $returnValue204;
                }
                }
            }
            $tmp227 = -1;
            goto $l225;
            $l225:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s228));
            s228 = NULL;
            switch ($tmp227) {
                case 0: goto $l238;
                case -1: goto $l241;
            }
            $l241:;
        }
        }
        panda$core$RegularExpression* $tmp243 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp243, &$s244);
        $tmp242 = $tmp243;
        panda$core$Bit $tmp245 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp242);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
        if ($tmp245.value) {
        {
            panda$core$String$Index$nullable $tmp248 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_link, &$s247);
            index246 = $tmp248;
            if (((panda$core$Bit) { index246.nonnull }).value) {
            {
                {
                    $tmp249 = cl208;
                    panda$core$Bit$init$builtin_bit(&$tmp254, false);
                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp253, ((panda$core$String$Index$nullable) { .nonnull = false }), index246, $tmp254);
                    panda$core$String* $tmp255 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp253);
                    $tmp252 = $tmp255;
                    org$pandalanguage$pandac$ClassDecl* $tmp256 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp252);
                    $tmp251 = $tmp256;
                    $tmp250 = $tmp251;
                    cl208 = $tmp250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                }
                if (((panda$core$Bit) { cl208 != NULL }).value) {
                {
                    int $tmp259;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp264 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl208);
                        $tmp263 = $tmp264;
                        panda$core$String$Index $tmp267 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_link, ((panda$core$String$Index) index246.value));
                        panda$core$Bit$init$builtin_bit(&$tmp268, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp266, ((panda$core$String$Index$nullable) { $tmp267, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp268);
                        panda$core$String* $tmp269 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp266);
                        $tmp265 = $tmp269;
                        org$pandalanguage$pandac$Symbol* $tmp270 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp263, $tmp265);
                        $tmp262 = $tmp270;
                        $tmp261 = $tmp262;
                        s260 = $tmp261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                        if (((panda$core$Bit) { s260 == NULL }).value) {
                        {
                            $tmp271 = NULL;
                            $returnValue204 = $tmp271;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                            $tmp259 = 0;
                            goto $l257;
                            $l272:;
                            $tmp196 = 3;
                            goto $l194;
                            $l273:;
                            return $returnValue204;
                        }
                        }
                        panda$core$String* $tmp278 = (($fn277) self->$class->vtable[6])(self, s260);
                        $tmp276 = $tmp278;
                        $tmp275 = $tmp276;
                        $returnValue204 = $tmp275;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                        $tmp259 = 1;
                        goto $l257;
                        $l279:;
                        $tmp196 = 4;
                        goto $l194;
                        $l280:;
                        return $returnValue204;
                    }
                    $l257:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s260));
                    s260 = NULL;
                    switch ($tmp259) {
                        case 1: goto $l279;
                        case 0: goto $l272;
                    }
                    $l282:;
                }
                }
            }
            }
        }
        }
        panda$core$RegularExpression* $tmp287 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp287, &$s288);
        $tmp286 = $tmp287;
        panda$collections$ListView* $tmp289 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_link, $tmp286);
        $tmp285 = $tmp289;
        $tmp284 = $tmp285;
        parsed283 = $tmp284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
        if (((panda$core$Bit) { parsed283 != NULL }).value) {
        {
            int $tmp292;
            {
                panda$collections$Array* $tmp296 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp296);
                $tmp295 = $tmp296;
                $tmp294 = $tmp295;
                parameters293 = $tmp294;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
                panda$core$Int64$init$builtin_int64(&$tmp299, 1);
                ITable* $tmp300 = parsed283->$class->itable;
                while ($tmp300->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp300 = $tmp300->next;
                }
                $fn302 $tmp301 = $tmp300->methods[0];
                panda$core$Object* $tmp303 = $tmp301(parsed283, $tmp299);
                $tmp298 = $tmp303;
                panda$core$String* $tmp304 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp298));
                $tmp297 = $tmp304;
                ITable* $tmp306 = ((panda$core$Equatable*) $tmp297)->$class->itable;
                while ($tmp306->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp306 = $tmp306->next;
                }
                $fn308 $tmp307 = $tmp306->methods[1];
                panda$core$Bit $tmp309 = $tmp307(((panda$core$Equatable*) $tmp297), ((panda$core$Equatable*) &$s305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                panda$core$Panda$unref$panda$core$Object($tmp298);
                if ($tmp309.value) {
                {
                    panda$io$File* $tmp311 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$Int64$init$builtin_int64(&$tmp313, 1);
                    ITable* $tmp314 = parsed283->$class->itable;
                    while ($tmp314->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp314 = $tmp314->next;
                    }
                    $fn316 $tmp315 = $tmp314->methods[0];
                    panda$core$Object* $tmp317 = $tmp315(parsed283, $tmp313);
                    $tmp312 = $tmp317;
                    panda$io$File$init$panda$core$String($tmp311, ((panda$core$String*) $tmp312));
                    $tmp310 = $tmp311;
                    panda$core$Int64$init$builtin_int64(&$tmp319, 1);
                    ITable* $tmp320 = parsed283->$class->itable;
                    while ($tmp320->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp320 = $tmp320->next;
                    }
                    $fn322 $tmp321 = $tmp320->methods[0];
                    panda$core$Object* $tmp323 = $tmp321(parsed283, $tmp319);
                    $tmp318 = $tmp323;
                    org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->compiler->parser, $tmp310, ((panda$core$String*) $tmp318));
                    panda$core$Panda$unref$panda$core$Object($tmp318);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                    panda$core$Panda$unref$panda$core$Object($tmp312);
                    $l324:;
                    while (true) {
                    {
                        int $tmp328;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp332 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self->compiler->parser);
                            $tmp331 = $tmp332;
                            $tmp330 = $tmp331;
                            type329 = $tmp330;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                            if (((panda$core$Bit) { type329 == NULL }).value) {
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp337, 1);
                                ITable* $tmp338 = parsed283->$class->itable;
                                while ($tmp338->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                    $tmp338 = $tmp338->next;
                                }
                                $fn340 $tmp339 = $tmp338->methods[0];
                                panda$core$Object* $tmp341 = $tmp339(parsed283, $tmp337);
                                $tmp336 = $tmp341;
                                panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s335, ((panda$core$String*) $tmp336));
                                $tmp334 = $tmp342;
                                panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s343);
                                $tmp333 = $tmp344;
                                panda$io$Console$printLine$panda$core$String($tmp333);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                                panda$core$Panda$unref$panda$core$Object($tmp336);
                                $tmp345 = NULL;
                                $returnValue204 = $tmp345;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
                                $tmp328 = 0;
                                goto $l326;
                                $l346:;
                                $tmp292 = 0;
                                goto $l290;
                                $l347:;
                                $tmp196 = 5;
                                goto $l194;
                                $l348:;
                                return $returnValue204;
                            }
                            }
                            org$pandalanguage$pandac$Type* $tmp353 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->compiler->scanner, type329);
                            $tmp352 = $tmp353;
                            $tmp351 = $tmp352;
                            converted350 = $tmp351;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                            org$pandalanguage$pandac$Type* $tmp357 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self->compiler, converted350);
                            $tmp356 = $tmp357;
                            $tmp355 = $tmp356;
                            resolved354 = $tmp355;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                            if (((panda$core$Bit) { resolved354 == NULL }).value) {
                            {
                                $tmp358 = NULL;
                                $returnValue204 = $tmp358;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
                                $tmp328 = 1;
                                goto $l326;
                                $l359:;
                                $tmp292 = 1;
                                goto $l290;
                                $l360:;
                                $tmp196 = 6;
                                goto $l194;
                                $l361:;
                                return $returnValue204;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(parameters293, ((panda$core$Object*) resolved354));
                            panda$core$Int64$init$builtin_int64(&$tmp364, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp363, $tmp364);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp365 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self->compiler->parser, $tmp363);
                            if (((panda$core$Bit) { !$tmp365.nonnull }).value) {
                            {
                                $tmp328 = 2;
                                goto $l326;
                                $l366:;
                                goto $l325;
                            }
                            }
                        }
                        $tmp328 = -1;
                        goto $l326;
                        $l326:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resolved354));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) converted350));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type329));
                        type329 = NULL;
                        converted350 = NULL;
                        resolved354 = NULL;
                        switch ($tmp328) {
                            case -1: goto $l367;
                            case 0: goto $l346;
                            case 1: goto $l359;
                            case 2: goto $l366;
                        }
                        $l367:;
                    }
                    }
                    $l325:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp371, 0);
                ITable* $tmp372 = parsed283->$class->itable;
                while ($tmp372->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp372 = $tmp372->next;
                }
                $fn374 $tmp373 = $tmp372->methods[0];
                panda$core$Object* $tmp375 = $tmp373(parsed283, $tmp371);
                $tmp370 = $tmp375;
                $tmp369 = ((panda$core$String*) $tmp370);
                name368 = $tmp369;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
                panda$core$Panda$unref$panda$core$Object($tmp370);
                panda$core$String$Index$nullable $tmp378 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(name368, &$s377);
                index376 = $tmp378;
                memset(&symbolName379, 0, sizeof(symbolName379));
                if (((panda$core$Bit) { index376.nonnull }).value) {
                {
                    {
                        $tmp380 = cl208;
                        panda$core$Bit$init$builtin_bit(&$tmp385, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp384, ((panda$core$String$Index$nullable) { .nonnull = false }), index376, $tmp385);
                        panda$core$String* $tmp386 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name368, $tmp384);
                        $tmp383 = $tmp386;
                        org$pandalanguage$pandac$ClassDecl* $tmp387 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp383);
                        $tmp382 = $tmp387;
                        $tmp381 = $tmp382;
                        cl208 = $tmp381;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                    }
                    {
                        $tmp388 = symbolName379;
                        panda$core$String$Index $tmp392 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(name368, ((panda$core$String$Index) index376.value));
                        panda$core$Bit$init$builtin_bit(&$tmp393, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp391, ((panda$core$String$Index$nullable) { $tmp392, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp393);
                        panda$core$String* $tmp394 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name368, $tmp391);
                        $tmp390 = $tmp394;
                        $tmp389 = $tmp390;
                        symbolName379 = $tmp389;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                    }
                }
                }
                else {
                {
                    {
                        $tmp395 = cl208;
                        $tmp396 = self->context;
                        cl208 = $tmp396;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                    }
                    {
                        $tmp397 = symbolName379;
                        $tmp398 = name368;
                        symbolName379 = $tmp398;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                    }
                }
                }
                if (((panda$core$Bit) { cl208 != NULL }).value) {
                {
                    int $tmp401;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp406 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl208);
                        $tmp405 = $tmp406;
                        org$pandalanguage$pandac$Symbol* $tmp407 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp405, symbolName379);
                        $tmp404 = $tmp407;
                        $tmp403 = $tmp404;
                        s402 = $tmp403;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
                        if (((panda$core$Bit) { s402 == NULL }).value) {
                        {
                            $tmp408 = NULL;
                            $returnValue204 = $tmp408;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                            $tmp401 = 0;
                            goto $l399;
                            $l409:;
                            $tmp292 = 2;
                            goto $l290;
                            $l410:;
                            $tmp196 = 7;
                            goto $l194;
                            $l411:;
                            return $returnValue204;
                        }
                        }
                        {
                            $match$155_17413 = s402->kind;
                            panda$core$Int64$init$builtin_int64(&$tmp414, 4);
                            panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_17413.$rawValue, $tmp414);
                            if ($tmp415.value) {
                            {
                                panda$core$Bit $tmp417 = (($fn416) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$MethodDecl*) s402), ((panda$collections$ListView*) parameters293));
                                if ($tmp417.value) {
                                {
                                    panda$core$String* $tmp421 = (($fn420) self->$class->vtable[6])(self, s402);
                                    $tmp419 = $tmp421;
                                    $tmp418 = $tmp419;
                                    $returnValue204 = $tmp418;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                                    $tmp401 = 1;
                                    goto $l399;
                                    $l422:;
                                    $tmp292 = 3;
                                    goto $l290;
                                    $l423:;
                                    $tmp196 = 8;
                                    goto $l194;
                                    $l424:;
                                    return $returnValue204;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp426, 5);
                            panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_17413.$rawValue, $tmp426);
                            if ($tmp427.value) {
                            {
                                {
                                    int $tmp430;
                                    {
                                        ITable* $tmp434 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s402)->methods)->$class->itable;
                                        while ($tmp434->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp434 = $tmp434->next;
                                        }
                                        $fn436 $tmp435 = $tmp434->methods[0];
                                        panda$collections$Iterator* $tmp437 = $tmp435(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s402)->methods));
                                        $tmp433 = $tmp437;
                                        $tmp432 = $tmp433;
                                        Iter$161$25431 = $tmp432;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                                        $l438:;
                                        ITable* $tmp441 = Iter$161$25431->$class->itable;
                                        while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp441 = $tmp441->next;
                                        }
                                        $fn443 $tmp442 = $tmp441->methods[0];
                                        panda$core$Bit $tmp444 = $tmp442(Iter$161$25431);
                                        panda$core$Bit $tmp445 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp444);
                                        bool $tmp440 = $tmp445.value;
                                        if (!$tmp440) goto $l439;
                                        {
                                            int $tmp448;
                                            {
                                                ITable* $tmp452 = Iter$161$25431->$class->itable;
                                                while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp452 = $tmp452->next;
                                                }
                                                $fn454 $tmp453 = $tmp452->methods[1];
                                                panda$core$Object* $tmp455 = $tmp453(Iter$161$25431);
                                                $tmp451 = $tmp455;
                                                $tmp450 = ((org$pandalanguage$pandac$MethodDecl*) $tmp451);
                                                m449 = $tmp450;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
                                                panda$core$Panda$unref$panda$core$Object($tmp451);
                                                panda$core$Bit $tmp457 = (($fn456) self->$class->vtable[2])(self, m449, ((panda$collections$ListView*) parameters293));
                                                if ($tmp457.value) {
                                                {
                                                    panda$core$String* $tmp461 = (($fn460) self->$class->vtable[5])(self, m449);
                                                    $tmp459 = $tmp461;
                                                    $tmp458 = $tmp459;
                                                    $returnValue204 = $tmp458;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
                                                    $tmp448 = 0;
                                                    goto $l446;
                                                    $l462:;
                                                    $tmp430 = 0;
                                                    goto $l428;
                                                    $l463:;
                                                    $tmp401 = 2;
                                                    goto $l399;
                                                    $l464:;
                                                    $tmp292 = 4;
                                                    goto $l290;
                                                    $l465:;
                                                    $tmp196 = 9;
                                                    goto $l194;
                                                    $l466:;
                                                    return $returnValue204;
                                                }
                                                }
                                            }
                                            $tmp448 = -1;
                                            goto $l446;
                                            $l446:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m449));
                                            m449 = NULL;
                                            switch ($tmp448) {
                                                case -1: goto $l468;
                                                case 0: goto $l462;
                                            }
                                            $l468:;
                                        }
                                        goto $l438;
                                        $l439:;
                                    }
                                    $tmp430 = -1;
                                    goto $l428;
                                    $l428:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$161$25431));
                                    Iter$161$25431 = NULL;
                                    switch ($tmp430) {
                                        case 0: goto $l463;
                                        case -1: goto $l469;
                                    }
                                    $l469:;
                                }
                            }
                            }
                            }
                        }
                        $tmp470 = NULL;
                        $returnValue204 = $tmp470;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
                        $tmp401 = 3;
                        goto $l399;
                        $l471:;
                        $tmp292 = 5;
                        goto $l290;
                        $l472:;
                        $tmp196 = 10;
                        goto $l194;
                        $l473:;
                        return $returnValue204;
                    }
                    $l399:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s402));
                    s402 = NULL;
                    switch ($tmp401) {
                        case 0: goto $l409;
                        case 2: goto $l464;
                        case 3: goto $l471;
                        case 1: goto $l422;
                    }
                    $l475:;
                }
                }
            }
            $tmp292 = -1;
            goto $l290;
            $l290:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) symbolName379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters293));
            parameters293 = NULL;
            name368 = NULL;
            switch ($tmp292) {
                case -1: goto $l476;
                case 3: goto $l423;
                case 1: goto $l360;
                case 4: goto $l465;
                case 0: goto $l347;
                case 5: goto $l472;
                case 2: goto $l410;
            }
            $l476:;
        }
        }
        $tmp477 = NULL;
        $returnValue204 = $tmp477;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
        $tmp196 = 11;
        goto $l194;
        $l478:;
        return $returnValue204;
    }
    $l194:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed283));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl208));
    cl208 = NULL;
    parsed283 = NULL;
    switch ($tmp196) {
        case 4: goto $l280;
        case 5: goto $l348;
        case 1: goto $l216;
        case 6: goto $l361;
        case 2: goto $l239;
        case 0: goto $l206;
        case 10: goto $l473;
        case 3: goto $l273;
        case 8: goto $l424;
        case 11: goto $l478;
        case 9: goto $l466;
        case 7: goto $l411;
    }
    $l480:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* self) {
    int $tmp483;
    {
    }
    $tmp483 = -1;
    goto $l481;
    $l481:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp483) {
        case -1: goto $l484;
    }
    $l484:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->apiRelativePath));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->context));
}

