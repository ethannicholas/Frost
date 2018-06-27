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

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn21)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn42)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn68)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn93)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn113)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn148)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn179)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn186)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn211)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn233)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn274)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn299)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn305)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn313)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn319)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn337)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn371)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn413)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn417)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn433)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn440)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn451)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn453)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn457)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$core$Bit $returnValue14;
    panda$core$Bit $tmp15;
    panda$core$Range$LTpanda$core$Int64$GT $tmp17;
    panda$core$Int64 $tmp18;
    panda$core$Bit $tmp23;
    panda$core$Object* $tmp37;
    panda$core$Object* $tmp39;
    panda$core$Bit $tmp45;
    panda$core$Bit $tmp53;
    panda$core$Int64 $tmp8 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    ITable* $tmp9 = ((panda$collections$CollectionView*) p_parameters)->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[0];
    panda$core$Int64 $tmp12 = $tmp10(((panda$collections$CollectionView*) p_parameters));
    panda$core$Bit $tmp13 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp8, $tmp12);
    if ($tmp13.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp15, false);
        $returnValue14 = $tmp15;
        return $returnValue14;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp18, 0);
    ITable* $tmp19 = ((panda$collections$CollectionView*) p_parameters)->$class->itable;
    while ($tmp19->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp19 = $tmp19->next;
    }
    $fn21 $tmp20 = $tmp19->methods[0];
    panda$core$Int64 $tmp22 = $tmp20(((panda$collections$CollectionView*) p_parameters));
    panda$core$Bit$init$builtin_bit(&$tmp23, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp17, $tmp18, $tmp22, $tmp23);
    int64_t $tmp25 = $tmp17.min.value;
    panda$core$Int64 i24 = { $tmp25 };
    int64_t $tmp27 = $tmp17.max.value;
    bool $tmp28 = $tmp17.inclusive.value;
    if ($tmp28) goto $l35; else goto $l36;
    $l35:;
    if ($tmp25 <= $tmp27) goto $l29; else goto $l31;
    $l36:;
    if ($tmp25 < $tmp27) goto $l29; else goto $l31;
    $l29:;
    {
        panda$core$Object* $tmp38 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i24);
        $tmp37 = $tmp38;
        ITable* $tmp40 = p_parameters->$class->itable;
        while ($tmp40->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp40 = $tmp40->next;
        }
        $fn42 $tmp41 = $tmp40->methods[0];
        panda$core$Object* $tmp43 = $tmp41(p_parameters, i24);
        $tmp39 = $tmp43;
        panda$core$Bit $tmp44 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp37)->type, ((org$pandalanguage$pandac$Type*) $tmp39));
        panda$core$Panda$unref$panda$core$Object($tmp39);
        panda$core$Panda$unref$panda$core$Object($tmp37);
        if ($tmp44.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp45, false);
            $returnValue14 = $tmp45;
            return $returnValue14;
        }
        }
    }
    $l32:;
    int64_t $tmp48 = $tmp27 - i24.value;
    if ($tmp28) goto $l49; else goto $l50;
    $l49:;
    if ((uint64_t) $tmp48 >= 1) goto $l47; else goto $l31;
    $l50:;
    if ((uint64_t) $tmp48 > 1) goto $l47; else goto $l31;
    $l47:;
    i24.value += 1;
    goto $l29;
    $l31:;
    panda$core$Bit$init$builtin_bit(&$tmp53, true);
    $returnValue14 = $tmp53;
    return $returnValue14;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* base58 = NULL;
    panda$core$String* $tmp59;
    panda$core$String* $tmp60;
    panda$core$String* $tmp61;
    panda$collections$Iterator* $tmp63;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    panda$core$String* $returnValue73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp76;
    panda$core$String* $tmp77;
    int $tmp57;
    {
        memset(&base58, 0, sizeof(base58));
        if (((panda$core$Bit) { self->context != NULL }).value) {
        {
            {
                $tmp59 = base58;
                panda$collections$Iterator* $tmp65 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self->context->name, &$s64);
                $tmp63 = $tmp65;
                ITable* $tmp66 = $tmp63->$class->itable;
                while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp66 = $tmp66->next;
                }
                $fn68 $tmp67 = $tmp66->methods[2];
                panda$core$Int64 $tmp69 = $tmp67($tmp63);
                panda$core$String* $tmp70 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s62, $tmp69);
                $tmp61 = $tmp70;
                $tmp60 = $tmp61;
                base58 = $tmp60;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
            }
        }
        }
        else {
        {
            {
                $tmp71 = base58;
                $tmp72 = self->apiRelativePath;
                base58 = $tmp72;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
            }
        }
        }
        panda$core$String* $tmp80 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s78, &$s79);
        $tmp77 = $tmp80;
        panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(base58, $tmp77);
        $tmp76 = $tmp81;
        panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, &$s82);
        $tmp75 = $tmp83;
        $tmp74 = $tmp75;
        $returnValue73 = $tmp74;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
        $tmp57 = 0;
        goto $l55;
        $l84:;
        return $returnValue73;
    }
    $l55:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base58));
    switch ($tmp57) {
        case 0: goto $l84;
    }
    $l86:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $returnValue87;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$Object* $tmp91;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    panda$core$Object* $tmp92 = panda$core$Weak$get$R$panda$core$Weak$T(p_f->owner);
    $tmp91 = $tmp92;
    panda$core$String* $tmp94 = (($fn93) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp91));
    $tmp90 = $tmp94;
    panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s97, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    $tmp96 = $tmp98;
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, &$s99);
    $tmp95 = $tmp100;
    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, $tmp95);
    $tmp89 = $tmp101;
    $tmp88 = $tmp89;
    $returnValue87 = $tmp88;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object($tmp91);
    return $returnValue87;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result106 = NULL;
    panda$core$MutableString* $tmp107;
    panda$core$MutableString* $tmp108;
    panda$core$String* $tmp110;
    panda$core$Object* $tmp111;
    panda$core$Char8 $tmp115;
    panda$core$UInt8 $tmp116;
    panda$core$Char8 $tmp117;
    panda$core$UInt8 $tmp118;
    panda$core$String* separator119 = NULL;
    panda$core$String* $tmp120;
    panda$collections$Iterator* Iter$66$9125 = NULL;
    panda$collections$Iterator* $tmp126;
    panda$collections$Iterator* $tmp127;
    org$pandalanguage$pandac$MethodDecl$Parameter* p143 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp144;
    panda$core$Object* $tmp145;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$Char8 $tmp155;
    panda$core$UInt8 $tmp156;
    org$pandalanguage$pandac$Type* $tmp157;
    panda$core$Char8 $tmp160;
    panda$core$UInt8 $tmp161;
    panda$core$String* $returnValue166;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    int $tmp105;
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
        panda$core$MutableString* $tmp109 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Object* $tmp112 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp111 = $tmp112;
        panda$core$String* $tmp114 = (($fn113) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp111));
        $tmp110 = $tmp114;
        panda$core$MutableString$init$panda$core$String($tmp109, $tmp110);
        $tmp108 = $tmp109;
        $tmp107 = $tmp108;
        result106 = $tmp107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
        panda$core$Panda$unref$panda$core$Object($tmp111);
        panda$core$UInt8$init$builtin_uint8(&$tmp116, 35);
        panda$core$Char8$init$panda$core$UInt8(&$tmp115, $tmp116);
        panda$core$MutableString$append$panda$core$Char8(result106, $tmp115);
        panda$core$MutableString$append$panda$core$String(result106, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp118, 40);
        panda$core$Char8$init$panda$core$UInt8(&$tmp117, $tmp118);
        panda$core$MutableString$append$panda$core$Char8(result106, $tmp117);
        $tmp120 = &$s121;
        separator119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        {
            int $tmp124;
            {
                ITable* $tmp128 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp128 = $tmp128->next;
                }
                $fn130 $tmp129 = $tmp128->methods[0];
                panda$collections$Iterator* $tmp131 = $tmp129(((panda$collections$Iterable*) p_m->parameters));
                $tmp127 = $tmp131;
                $tmp126 = $tmp127;
                Iter$66$9125 = $tmp126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                $l132:;
                ITable* $tmp135 = Iter$66$9125->$class->itable;
                while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp135 = $tmp135->next;
                }
                $fn137 $tmp136 = $tmp135->methods[0];
                panda$core$Bit $tmp138 = $tmp136(Iter$66$9125);
                panda$core$Bit $tmp139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp138);
                bool $tmp134 = $tmp139.value;
                if (!$tmp134) goto $l133;
                {
                    int $tmp142;
                    {
                        ITable* $tmp146 = Iter$66$9125->$class->itable;
                        while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp146 = $tmp146->next;
                        }
                        $fn148 $tmp147 = $tmp146->methods[1];
                        panda$core$Object* $tmp149 = $tmp147(Iter$66$9125);
                        $tmp145 = $tmp149;
                        $tmp144 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp145);
                        p143 = $tmp144;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
                        panda$core$Panda$unref$panda$core$Object($tmp145);
                        panda$core$MutableString$append$panda$core$String(result106, separator119);
                        panda$core$MutableString$append$panda$core$Object(result106, ((panda$core$Object*) p143->type));
                        {
                            $tmp150 = separator119;
                            $tmp151 = &$s152;
                            separator119 = $tmp151;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                        }
                    }
                    $tmp142 = -1;
                    goto $l140;
                    $l140:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p143));
                    p143 = NULL;
                    switch ($tmp142) {
                        case -1: goto $l153;
                    }
                    $l153:;
                }
                goto $l132;
                $l133:;
            }
            $tmp124 = -1;
            goto $l122;
            $l122:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$66$9125));
            Iter$66$9125 = NULL;
            switch ($tmp124) {
                case -1: goto $l154;
            }
            $l154:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp156, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp155, $tmp156);
        panda$core$MutableString$append$panda$core$Char8(result106, $tmp155);
        org$pandalanguage$pandac$Type* $tmp158 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp157 = $tmp158;
        panda$core$Bit $tmp159 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp157);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
        if ($tmp159.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp161, 58);
            panda$core$Char8$init$panda$core$UInt8(&$tmp160, $tmp161);
            panda$core$MutableString$append$panda$core$Char8(result106, $tmp160);
            panda$core$MutableString$append$panda$core$Object(result106, ((panda$core$Object*) p_m->returnType));
        }
        }
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result106, &$s162, &$s163);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result106, &$s164, &$s165);
        panda$core$String* $tmp169 = panda$core$MutableString$finish$R$panda$core$String(result106);
        $tmp168 = $tmp169;
        $tmp167 = $tmp168;
        $returnValue166 = $tmp167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
        $tmp105 = 0;
        goto $l103;
        $l170:;
        return $returnValue166;
    }
    $l103:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator119));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
    result106 = NULL;
    separator119 = NULL;
    switch ($tmp105) {
        case 0: goto $l170;
    }
    $l172:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$Symbol$Kind $match$82_9173;
    panda$core$Int64 $tmp174;
    panda$core$String* $returnValue176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp178;
    panda$core$Int64 $tmp182;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp189;
    {
        $match$82_9173 = p_s->kind;
        panda$core$Int64$init$builtin_int64(&$tmp174, 1);
        panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9173.$rawValue, $tmp174);
        if ($tmp175.value) {
        {
            panda$core$String* $tmp180 = (($fn179) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$FieldDecl*) p_s));
            $tmp178 = $tmp180;
            $tmp177 = $tmp178;
            $returnValue176 = $tmp177;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
            return $returnValue176;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp182, 3);
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9173.$rawValue, $tmp182);
        if ($tmp183.value) {
        {
            panda$core$String* $tmp187 = (($fn186) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$MethodDecl*) p_s));
            $tmp185 = $tmp187;
            $tmp184 = $tmp185;
            $returnValue176 = $tmp184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
            return $returnValue176;
        }
        }
        else {
        {
            $tmp189 = NULL;
            $returnValue176 = $tmp189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
            return $returnValue176;
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, panda$core$String* p_link) {
    panda$core$String* $returnValue201;
    panda$core$String* $tmp202;
    org$pandalanguage$pandac$ClassDecl* cl205 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp206;
    org$pandalanguage$pandac$ClassDecl* $tmp207;
    panda$core$String* $tmp209;
    panda$core$String* $tmp210;
    panda$core$RegularExpression* $tmp217;
    org$pandalanguage$pandac$Symbol* s225 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp226;
    org$pandalanguage$pandac$Symbol* $tmp227;
    org$pandalanguage$pandac$SymbolTable* $tmp228;
    panda$core$String* $tmp231;
    panda$core$String* $tmp232;
    panda$core$RegularExpression* $tmp239;
    panda$core$String$Index$nullable index243;
    org$pandalanguage$pandac$ClassDecl* $tmp246;
    org$pandalanguage$pandac$ClassDecl* $tmp247;
    org$pandalanguage$pandac$ClassDecl* $tmp248;
    panda$core$String* $tmp249;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp250;
    panda$core$Bit $tmp251;
    org$pandalanguage$pandac$Symbol* s257 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp258;
    org$pandalanguage$pandac$Symbol* $tmp259;
    org$pandalanguage$pandac$SymbolTable* $tmp260;
    panda$core$String* $tmp262;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp263;
    panda$core$Bit $tmp265;
    panda$core$String* $tmp268;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$collections$ListView* parsed280 = NULL;
    panda$collections$ListView* $tmp281;
    panda$collections$ListView* $tmp282;
    panda$core$RegularExpression* $tmp283;
    panda$collections$Array* parameters290 = NULL;
    panda$collections$Array* $tmp291;
    panda$collections$Array* $tmp292;
    panda$core$String* $tmp294;
    panda$core$Object* $tmp295;
    panda$core$Int64 $tmp296;
    panda$io$File* $tmp307;
    panda$core$Object* $tmp309;
    panda$core$Int64 $tmp310;
    panda$core$Object* $tmp315;
    panda$core$Int64 $tmp316;
    org$pandalanguage$pandac$ASTNode* type326 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp327;
    org$pandalanguage$pandac$ASTNode* $tmp328;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$Object* $tmp333;
    panda$core$Int64 $tmp334;
    panda$core$String* $tmp342;
    org$pandalanguage$pandac$Type* converted347 = NULL;
    org$pandalanguage$pandac$Type* $tmp348;
    org$pandalanguage$pandac$Type* $tmp349;
    org$pandalanguage$pandac$Type* resolved351 = NULL;
    org$pandalanguage$pandac$Type* $tmp352;
    org$pandalanguage$pandac$Type* $tmp353;
    panda$core$String* $tmp355;
    org$pandalanguage$pandac$parser$Token$Kind $tmp360;
    panda$core$Int64 $tmp361;
    panda$core$String* name365 = NULL;
    panda$core$String* $tmp366;
    panda$core$Object* $tmp367;
    panda$core$Int64 $tmp368;
    panda$core$String$Index$nullable index373;
    panda$core$String* symbolName376 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp377;
    org$pandalanguage$pandac$ClassDecl* $tmp378;
    org$pandalanguage$pandac$ClassDecl* $tmp379;
    panda$core$String* $tmp380;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp381;
    panda$core$Bit $tmp382;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp387;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp388;
    panda$core$Bit $tmp390;
    org$pandalanguage$pandac$ClassDecl* $tmp392;
    org$pandalanguage$pandac$ClassDecl* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395;
    org$pandalanguage$pandac$Symbol* s399 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp400;
    org$pandalanguage$pandac$Symbol* $tmp401;
    org$pandalanguage$pandac$SymbolTable* $tmp402;
    panda$core$String* $tmp405;
    org$pandalanguage$pandac$Symbol$Kind $match$155_17410;
    panda$core$Int64 $tmp411;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$Int64 $tmp423;
    panda$collections$Iterator* Iter$161$25428 = NULL;
    panda$collections$Iterator* $tmp429;
    panda$collections$Iterator* $tmp430;
    org$pandalanguage$pandac$MethodDecl* m446 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp447;
    panda$core$Object* $tmp448;
    panda$core$String* $tmp455;
    panda$core$String* $tmp456;
    panda$core$String* $tmp467;
    panda$core$String* $tmp474;
    int $tmp193;
    {
        panda$core$Bit $tmp196 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s195);
        bool $tmp194 = $tmp196.value;
        if ($tmp194) goto $l197;
        panda$core$Bit $tmp199 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s198);
        $tmp194 = $tmp199.value;
        $l197:;
        panda$core$Bit $tmp200 = { $tmp194 };
        if ($tmp200.value) {
        {
            $tmp202 = p_link;
            $returnValue201 = $tmp202;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
            $tmp193 = 0;
            goto $l191;
            $l203:;
            return $returnValue201;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp208 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_link);
        $tmp207 = $tmp208;
        $tmp206 = $tmp207;
        cl205 = $tmp206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
        if (((panda$core$Bit) { cl205 != NULL }).value) {
        {
            panda$core$String* $tmp212 = (($fn211) self->$class->vtable[3])(self, cl205);
            $tmp210 = $tmp212;
            $tmp209 = $tmp210;
            $returnValue201 = $tmp209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            $tmp193 = 1;
            goto $l191;
            $l213:;
            return $returnValue201;
        }
        }
        bool $tmp215 = ((panda$core$Bit) { self->context != NULL }).value;
        if (!$tmp215) goto $l216;
        panda$core$RegularExpression* $tmp218 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp218, &$s219);
        $tmp217 = $tmp218;
        panda$core$Bit $tmp220 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp217);
        $tmp215 = $tmp220.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
        $l216:;
        panda$core$Bit $tmp221 = { $tmp215 };
        if ($tmp221.value) {
        {
            int $tmp224;
            {
                org$pandalanguage$pandac$SymbolTable* $tmp229 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, self->context);
                $tmp228 = $tmp229;
                org$pandalanguage$pandac$Symbol* $tmp230 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp228, p_link);
                $tmp227 = $tmp230;
                $tmp226 = $tmp227;
                s225 = $tmp226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
                if (((panda$core$Bit) { s225 != NULL }).value) {
                {
                    panda$core$String* $tmp234 = (($fn233) self->$class->vtable[6])(self, s225);
                    $tmp232 = $tmp234;
                    $tmp231 = $tmp232;
                    $returnValue201 = $tmp231;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
                    $tmp224 = 0;
                    goto $l222;
                    $l235:;
                    $tmp193 = 2;
                    goto $l191;
                    $l236:;
                    return $returnValue201;
                }
                }
            }
            $tmp224 = -1;
            goto $l222;
            $l222:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s225));
            s225 = NULL;
            switch ($tmp224) {
                case 0: goto $l235;
                case -1: goto $l238;
            }
            $l238:;
        }
        }
        panda$core$RegularExpression* $tmp240 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp240, &$s241);
        $tmp239 = $tmp240;
        panda$core$Bit $tmp242 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp239);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        if ($tmp242.value) {
        {
            panda$core$String$Index$nullable $tmp245 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_link, &$s244);
            index243 = $tmp245;
            if (((panda$core$Bit) { index243.nonnull }).value) {
            {
                {
                    $tmp246 = cl205;
                    panda$core$Bit$init$builtin_bit(&$tmp251, false);
                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp250, ((panda$core$String$Index$nullable) { .nonnull = false }), index243, $tmp251);
                    panda$core$String* $tmp252 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp250);
                    $tmp249 = $tmp252;
                    org$pandalanguage$pandac$ClassDecl* $tmp253 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp249);
                    $tmp248 = $tmp253;
                    $tmp247 = $tmp248;
                    cl205 = $tmp247;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                }
                if (((panda$core$Bit) { cl205 != NULL }).value) {
                {
                    int $tmp256;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp261 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl205);
                        $tmp260 = $tmp261;
                        panda$core$String$Index $tmp264 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_link, ((panda$core$String$Index) index243.value));
                        panda$core$Bit$init$builtin_bit(&$tmp265, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp263, ((panda$core$String$Index$nullable) { $tmp264, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp265);
                        panda$core$String* $tmp266 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp263);
                        $tmp262 = $tmp266;
                        org$pandalanguage$pandac$Symbol* $tmp267 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp260, $tmp262);
                        $tmp259 = $tmp267;
                        $tmp258 = $tmp259;
                        s257 = $tmp258;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
                        if (((panda$core$Bit) { s257 == NULL }).value) {
                        {
                            $tmp268 = NULL;
                            $returnValue201 = $tmp268;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                            $tmp256 = 0;
                            goto $l254;
                            $l269:;
                            $tmp193 = 3;
                            goto $l191;
                            $l270:;
                            return $returnValue201;
                        }
                        }
                        panda$core$String* $tmp275 = (($fn274) self->$class->vtable[6])(self, s257);
                        $tmp273 = $tmp275;
                        $tmp272 = $tmp273;
                        $returnValue201 = $tmp272;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                        $tmp256 = 1;
                        goto $l254;
                        $l276:;
                        $tmp193 = 4;
                        goto $l191;
                        $l277:;
                        return $returnValue201;
                    }
                    $l254:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s257));
                    s257 = NULL;
                    switch ($tmp256) {
                        case 1: goto $l276;
                        case 0: goto $l269;
                    }
                    $l279:;
                }
                }
            }
            }
        }
        }
        panda$core$RegularExpression* $tmp284 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp284, &$s285);
        $tmp283 = $tmp284;
        panda$collections$ListView* $tmp286 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_link, $tmp283);
        $tmp282 = $tmp286;
        $tmp281 = $tmp282;
        parsed280 = $tmp281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
        if (((panda$core$Bit) { parsed280 != NULL }).value) {
        {
            int $tmp289;
            {
                panda$collections$Array* $tmp293 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp293);
                $tmp292 = $tmp293;
                $tmp291 = $tmp292;
                parameters290 = $tmp291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
                panda$core$Int64$init$builtin_int64(&$tmp296, 1);
                ITable* $tmp297 = parsed280->$class->itable;
                while ($tmp297->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp297 = $tmp297->next;
                }
                $fn299 $tmp298 = $tmp297->methods[0];
                panda$core$Object* $tmp300 = $tmp298(parsed280, $tmp296);
                $tmp295 = $tmp300;
                panda$core$String* $tmp301 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp295));
                $tmp294 = $tmp301;
                ITable* $tmp303 = ((panda$core$Equatable*) $tmp294)->$class->itable;
                while ($tmp303->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp303 = $tmp303->next;
                }
                $fn305 $tmp304 = $tmp303->methods[1];
                panda$core$Bit $tmp306 = $tmp304(((panda$core$Equatable*) $tmp294), ((panda$core$Equatable*) &$s302));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                panda$core$Panda$unref$panda$core$Object($tmp295);
                if ($tmp306.value) {
                {
                    panda$io$File* $tmp308 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$Int64$init$builtin_int64(&$tmp310, 1);
                    ITable* $tmp311 = parsed280->$class->itable;
                    while ($tmp311->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp311 = $tmp311->next;
                    }
                    $fn313 $tmp312 = $tmp311->methods[0];
                    panda$core$Object* $tmp314 = $tmp312(parsed280, $tmp310);
                    $tmp309 = $tmp314;
                    panda$io$File$init$panda$core$String($tmp308, ((panda$core$String*) $tmp309));
                    $tmp307 = $tmp308;
                    panda$core$Int64$init$builtin_int64(&$tmp316, 1);
                    ITable* $tmp317 = parsed280->$class->itable;
                    while ($tmp317->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp317 = $tmp317->next;
                    }
                    $fn319 $tmp318 = $tmp317->methods[0];
                    panda$core$Object* $tmp320 = $tmp318(parsed280, $tmp316);
                    $tmp315 = $tmp320;
                    org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->compiler->parser, $tmp307, ((panda$core$String*) $tmp315));
                    panda$core$Panda$unref$panda$core$Object($tmp315);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                    panda$core$Panda$unref$panda$core$Object($tmp309);
                    $l321:;
                    while (true) {
                    {
                        int $tmp325;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp329 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self->compiler->parser);
                            $tmp328 = $tmp329;
                            $tmp327 = $tmp328;
                            type326 = $tmp327;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                            if (((panda$core$Bit) { type326 == NULL }).value) {
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp334, 1);
                                ITable* $tmp335 = parsed280->$class->itable;
                                while ($tmp335->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                    $tmp335 = $tmp335->next;
                                }
                                $fn337 $tmp336 = $tmp335->methods[0];
                                panda$core$Object* $tmp338 = $tmp336(parsed280, $tmp334);
                                $tmp333 = $tmp338;
                                panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s332, ((panda$core$String*) $tmp333));
                                $tmp331 = $tmp339;
                                panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s340);
                                $tmp330 = $tmp341;
                                panda$io$Console$printLine$panda$core$String($tmp330);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                                panda$core$Panda$unref$panda$core$Object($tmp333);
                                $tmp342 = NULL;
                                $returnValue201 = $tmp342;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                                $tmp325 = 0;
                                goto $l323;
                                $l343:;
                                $tmp289 = 0;
                                goto $l287;
                                $l344:;
                                $tmp193 = 5;
                                goto $l191;
                                $l345:;
                                return $returnValue201;
                            }
                            }
                            org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->compiler->scanner, type326);
                            $tmp349 = $tmp350;
                            $tmp348 = $tmp349;
                            converted347 = $tmp348;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                            org$pandalanguage$pandac$Type* $tmp354 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self->compiler, converted347);
                            $tmp353 = $tmp354;
                            $tmp352 = $tmp353;
                            resolved351 = $tmp352;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                            if (((panda$core$Bit) { resolved351 == NULL }).value) {
                            {
                                $tmp355 = NULL;
                                $returnValue201 = $tmp355;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
                                $tmp325 = 1;
                                goto $l323;
                                $l356:;
                                $tmp289 = 1;
                                goto $l287;
                                $l357:;
                                $tmp193 = 6;
                                goto $l191;
                                $l358:;
                                return $returnValue201;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(parameters290, ((panda$core$Object*) resolved351));
                            panda$core$Int64$init$builtin_int64(&$tmp361, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp360, $tmp361);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp362 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self->compiler->parser, $tmp360);
                            if (((panda$core$Bit) { !$tmp362.nonnull }).value) {
                            {
                                $tmp325 = 2;
                                goto $l323;
                                $l363:;
                                goto $l322;
                            }
                            }
                        }
                        $tmp325 = -1;
                        goto $l323;
                        $l323:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resolved351));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) converted347));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type326));
                        type326 = NULL;
                        converted347 = NULL;
                        resolved351 = NULL;
                        switch ($tmp325) {
                            case 1: goto $l356;
                            case 2: goto $l363;
                            case -1: goto $l364;
                            case 0: goto $l343;
                        }
                        $l364:;
                    }
                    }
                    $l322:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp368, 0);
                ITable* $tmp369 = parsed280->$class->itable;
                while ($tmp369->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp369 = $tmp369->next;
                }
                $fn371 $tmp370 = $tmp369->methods[0];
                panda$core$Object* $tmp372 = $tmp370(parsed280, $tmp368);
                $tmp367 = $tmp372;
                $tmp366 = ((panda$core$String*) $tmp367);
                name365 = $tmp366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
                panda$core$Panda$unref$panda$core$Object($tmp367);
                panda$core$String$Index$nullable $tmp375 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(name365, &$s374);
                index373 = $tmp375;
                memset(&symbolName376, 0, sizeof(symbolName376));
                if (((panda$core$Bit) { index373.nonnull }).value) {
                {
                    {
                        $tmp377 = cl205;
                        panda$core$Bit$init$builtin_bit(&$tmp382, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp381, ((panda$core$String$Index$nullable) { .nonnull = false }), index373, $tmp382);
                        panda$core$String* $tmp383 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name365, $tmp381);
                        $tmp380 = $tmp383;
                        org$pandalanguage$pandac$ClassDecl* $tmp384 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp380);
                        $tmp379 = $tmp384;
                        $tmp378 = $tmp379;
                        cl205 = $tmp378;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                    }
                    {
                        $tmp385 = symbolName376;
                        panda$core$String$Index $tmp389 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(name365, ((panda$core$String$Index) index373.value));
                        panda$core$Bit$init$builtin_bit(&$tmp390, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp388, ((panda$core$String$Index$nullable) { $tmp389, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp390);
                        panda$core$String* $tmp391 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name365, $tmp388);
                        $tmp387 = $tmp391;
                        $tmp386 = $tmp387;
                        symbolName376 = $tmp386;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                    }
                }
                }
                else {
                {
                    {
                        $tmp392 = cl205;
                        $tmp393 = self->context;
                        cl205 = $tmp393;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
                    }
                    {
                        $tmp394 = symbolName376;
                        $tmp395 = name365;
                        symbolName376 = $tmp395;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                    }
                }
                }
                if (((panda$core$Bit) { cl205 != NULL }).value) {
                {
                    int $tmp398;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp403 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl205);
                        $tmp402 = $tmp403;
                        org$pandalanguage$pandac$Symbol* $tmp404 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp402, symbolName376);
                        $tmp401 = $tmp404;
                        $tmp400 = $tmp401;
                        s399 = $tmp400;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                        if (((panda$core$Bit) { s399 == NULL }).value) {
                        {
                            $tmp405 = NULL;
                            $returnValue201 = $tmp405;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp405));
                            $tmp398 = 0;
                            goto $l396;
                            $l406:;
                            $tmp289 = 2;
                            goto $l287;
                            $l407:;
                            $tmp193 = 7;
                            goto $l191;
                            $l408:;
                            return $returnValue201;
                        }
                        }
                        {
                            $match$155_17410 = s399->kind;
                            panda$core$Int64$init$builtin_int64(&$tmp411, 3);
                            panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_17410.$rawValue, $tmp411);
                            if ($tmp412.value) {
                            {
                                panda$core$Bit $tmp414 = (($fn413) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$MethodDecl*) s399), ((panda$collections$ListView*) parameters290));
                                if ($tmp414.value) {
                                {
                                    panda$core$String* $tmp418 = (($fn417) self->$class->vtable[6])(self, s399);
                                    $tmp416 = $tmp418;
                                    $tmp415 = $tmp416;
                                    $returnValue201 = $tmp415;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                                    $tmp398 = 1;
                                    goto $l396;
                                    $l419:;
                                    $tmp289 = 3;
                                    goto $l287;
                                    $l420:;
                                    $tmp193 = 8;
                                    goto $l191;
                                    $l421:;
                                    return $returnValue201;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp423, 4);
                            panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_17410.$rawValue, $tmp423);
                            if ($tmp424.value) {
                            {
                                {
                                    int $tmp427;
                                    {
                                        ITable* $tmp431 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s399)->methods)->$class->itable;
                                        while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp431 = $tmp431->next;
                                        }
                                        $fn433 $tmp432 = $tmp431->methods[0];
                                        panda$collections$Iterator* $tmp434 = $tmp432(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s399)->methods));
                                        $tmp430 = $tmp434;
                                        $tmp429 = $tmp430;
                                        Iter$161$25428 = $tmp429;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                                        $l435:;
                                        ITable* $tmp438 = Iter$161$25428->$class->itable;
                                        while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp438 = $tmp438->next;
                                        }
                                        $fn440 $tmp439 = $tmp438->methods[0];
                                        panda$core$Bit $tmp441 = $tmp439(Iter$161$25428);
                                        panda$core$Bit $tmp442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp441);
                                        bool $tmp437 = $tmp442.value;
                                        if (!$tmp437) goto $l436;
                                        {
                                            int $tmp445;
                                            {
                                                ITable* $tmp449 = Iter$161$25428->$class->itable;
                                                while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp449 = $tmp449->next;
                                                }
                                                $fn451 $tmp450 = $tmp449->methods[1];
                                                panda$core$Object* $tmp452 = $tmp450(Iter$161$25428);
                                                $tmp448 = $tmp452;
                                                $tmp447 = ((org$pandalanguage$pandac$MethodDecl*) $tmp448);
                                                m446 = $tmp447;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                                                panda$core$Panda$unref$panda$core$Object($tmp448);
                                                panda$core$Bit $tmp454 = (($fn453) self->$class->vtable[2])(self, m446, ((panda$collections$ListView*) parameters290));
                                                if ($tmp454.value) {
                                                {
                                                    panda$core$String* $tmp458 = (($fn457) self->$class->vtable[5])(self, m446);
                                                    $tmp456 = $tmp458;
                                                    $tmp455 = $tmp456;
                                                    $returnValue201 = $tmp455;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                                                    $tmp445 = 0;
                                                    goto $l443;
                                                    $l459:;
                                                    $tmp427 = 0;
                                                    goto $l425;
                                                    $l460:;
                                                    $tmp398 = 2;
                                                    goto $l396;
                                                    $l461:;
                                                    $tmp289 = 4;
                                                    goto $l287;
                                                    $l462:;
                                                    $tmp193 = 9;
                                                    goto $l191;
                                                    $l463:;
                                                    return $returnValue201;
                                                }
                                                }
                                            }
                                            $tmp445 = -1;
                                            goto $l443;
                                            $l443:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m446));
                                            m446 = NULL;
                                            switch ($tmp445) {
                                                case -1: goto $l465;
                                                case 0: goto $l459;
                                            }
                                            $l465:;
                                        }
                                        goto $l435;
                                        $l436:;
                                    }
                                    $tmp427 = -1;
                                    goto $l425;
                                    $l425:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$161$25428));
                                    Iter$161$25428 = NULL;
                                    switch ($tmp427) {
                                        case -1: goto $l466;
                                        case 0: goto $l460;
                                    }
                                    $l466:;
                                }
                            }
                            }
                            }
                        }
                        $tmp467 = NULL;
                        $returnValue201 = $tmp467;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
                        $tmp398 = 3;
                        goto $l396;
                        $l468:;
                        $tmp289 = 5;
                        goto $l287;
                        $l469:;
                        $tmp193 = 10;
                        goto $l191;
                        $l470:;
                        return $returnValue201;
                    }
                    $l396:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s399));
                    s399 = NULL;
                    switch ($tmp398) {
                        case 0: goto $l406;
                        case 3: goto $l468;
                        case 2: goto $l461;
                        case 1: goto $l419;
                    }
                    $l472:;
                }
                }
            }
            $tmp289 = -1;
            goto $l287;
            $l287:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) symbolName376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters290));
            parameters290 = NULL;
            name365 = NULL;
            switch ($tmp289) {
                case 4: goto $l462;
                case 2: goto $l407;
                case 3: goto $l420;
                case 5: goto $l469;
                case 1: goto $l357;
                case -1: goto $l473;
                case 0: goto $l344;
            }
            $l473:;
        }
        }
        $tmp474 = NULL;
        $returnValue201 = $tmp474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
        $tmp193 = 11;
        goto $l191;
        $l475:;
        return $returnValue201;
    }
    $l191:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl205));
    cl205 = NULL;
    parsed280 = NULL;
    switch ($tmp193) {
        case 4: goto $l277;
        case 5: goto $l345;
        case 1: goto $l213;
        case 10: goto $l470;
        case 2: goto $l236;
        case 7: goto $l408;
        case 11: goto $l475;
        case 9: goto $l463;
        case 6: goto $l358;
        case 3: goto $l270;
        case 8: goto $l421;
        case 0: goto $l203;
    }
    $l477:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* self) {
    int $tmp480;
    {
    }
    $tmp480 = -1;
    goto $l478;
    $l478:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp480) {
        case -1: goto $l481;
    }
    $l481:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->apiRelativePath));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->context));
}

