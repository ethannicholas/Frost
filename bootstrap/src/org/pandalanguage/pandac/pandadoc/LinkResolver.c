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
#include "org/pandalanguage/pandac/Methods.h"
#include "panda/collections/ImmutableArray.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$LinkResolver$class_type org$pandalanguage$pandac$pandadoc$LinkResolver$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup, org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q} };

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn40)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn66)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn92)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn112)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn147)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn176)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn183)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn208)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn230)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn271)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn293)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn299)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn308)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn322)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn332)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn339)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn350)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn392)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn434)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn438)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn454)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn461)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn472)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn474)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn478)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, -3781975212496513654, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = NULL;
    self->context = NULL;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q(self, p_compiler, NULL);
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ClassDecl* p_context) {
    org$pandalanguage$pandac$Compiler* $tmp2;
    org$pandalanguage$pandac$Compiler* $tmp3;
    org$pandalanguage$pandac$ClassDecl* $tmp4;
    org$pandalanguage$pandac$ClassDecl* $tmp5;
    self->compiler = NULL;
    self->context = NULL;
    {
        $tmp2 = self->compiler;
        $tmp3 = p_compiler;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->context;
        $tmp5 = p_context;
        self->context = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ListView* p_parameters) {
    panda$core$Bit $returnValue12;
    panda$core$Bit $tmp13;
    panda$core$Range$LTpanda$core$Int64$GT $tmp15;
    panda$core$Int64 $tmp16;
    panda$core$Bit $tmp21;
    panda$core$Object* $tmp35;
    panda$core$Object* $tmp37;
    panda$core$Bit $tmp43;
    panda$core$Bit $tmp51;
    panda$core$Int64 $tmp6 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    ITable* $tmp7 = ((panda$collections$CollectionView*) p_parameters)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) p_parameters));
    panda$core$Bit $tmp11 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp6, $tmp10);
    if ($tmp11.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp13, false);
        $returnValue12 = $tmp13;
        return $returnValue12;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp16, 0);
    ITable* $tmp17 = ((panda$collections$CollectionView*) p_parameters)->$class->itable;
    while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp17 = $tmp17->next;
    }
    $fn19 $tmp18 = $tmp17->methods[0];
    panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) p_parameters));
    panda$core$Bit$init$builtin_bit(&$tmp21, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp15, $tmp16, $tmp20, $tmp21);
    int64_t $tmp23 = $tmp15.min.value;
    panda$core$Int64 i22 = { $tmp23 };
    int64_t $tmp25 = $tmp15.max.value;
    bool $tmp26 = $tmp15.inclusive.value;
    if ($tmp26) goto $l33; else goto $l34;
    $l33:;
    if ($tmp23 <= $tmp25) goto $l27; else goto $l29;
    $l34:;
    if ($tmp23 < $tmp25) goto $l27; else goto $l29;
    $l27:;
    {
        panda$core$Object* $tmp36 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i22);
        $tmp35 = $tmp36;
        ITable* $tmp38 = p_parameters->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$core$Object* $tmp41 = $tmp39(p_parameters, i22);
        $tmp37 = $tmp41;
        panda$core$Bit $tmp42 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp35)->type, ((org$pandalanguage$pandac$Type*) $tmp37));
        panda$core$Panda$unref$panda$core$Object($tmp37);
        panda$core$Panda$unref$panda$core$Object($tmp35);
        if ($tmp42.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp43, false);
            $returnValue12 = $tmp43;
            return $returnValue12;
        }
        }
    }
    $l30:;
    int64_t $tmp46 = $tmp25 - i22.value;
    if ($tmp26) goto $l47; else goto $l48;
    $l47:;
    if ((uint64_t) $tmp46 >= 1) goto $l45; else goto $l29;
    $l48:;
    if ((uint64_t) $tmp46 > 1) goto $l45; else goto $l29;
    $l45:;
    i22.value += 1;
    goto $l27;
    $l29:;
    panda$core$Bit$init$builtin_bit(&$tmp51, true);
    $returnValue12 = $tmp51;
    return $returnValue12;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* base56 = NULL;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    panda$collections$Iterator* $tmp61;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    panda$core$String* $returnValue72;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp76;
    int $tmp55;
    {
        memset(&base56, 0, sizeof(base56));
        if (((panda$core$Bit) { self->context != NULL }).value) {
        {
            {
                $tmp57 = base56;
                panda$collections$Iterator* $tmp63 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self->context->name, &$s62);
                $tmp61 = $tmp63;
                ITable* $tmp64 = $tmp61->$class->itable;
                while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp64 = $tmp64->next;
                }
                $fn66 $tmp65 = $tmp64->methods[2];
                panda$core$Int64 $tmp67 = $tmp65($tmp61);
                panda$core$String* $tmp68 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s60, $tmp67);
                $tmp59 = $tmp68;
                $tmp58 = $tmp59;
                base56 = $tmp58;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
            }
        }
        }
        else {
        {
            {
                $tmp69 = base56;
                $tmp70 = &$s71;
                base56 = $tmp70;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
            }
        }
        }
        panda$core$String* $tmp79 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s77, &$s78);
        $tmp76 = $tmp79;
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(base56, $tmp76);
        $tmp75 = $tmp80;
        panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp75, &$s81);
        $tmp74 = $tmp82;
        $tmp73 = $tmp74;
        $returnValue72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        $tmp55 = 0;
        goto $l53;
        $l83:;
        return $returnValue72;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base56));
    switch ($tmp55) {
        case 0: goto $l83;
    }
    $l85:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $returnValue86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$Object* $tmp90;
    panda$core$String* $tmp94;
    panda$core$String* $tmp95;
    panda$core$Object* $tmp91 = panda$core$Weak$get$R$panda$core$Weak$T(p_f->owner);
    $tmp90 = $tmp91;
    panda$core$String* $tmp93 = (($fn92) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp90));
    $tmp89 = $tmp93;
    panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s96, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    $tmp95 = $tmp97;
    panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s98);
    $tmp94 = $tmp99;
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, $tmp94);
    $tmp88 = $tmp100;
    $tmp87 = $tmp88;
    $returnValue86 = $tmp87;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object($tmp90);
    return $returnValue86;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result105 = NULL;
    panda$core$MutableString* $tmp106;
    panda$core$MutableString* $tmp107;
    panda$core$String* $tmp109;
    panda$core$Object* $tmp110;
    panda$core$Char8 $tmp114;
    panda$core$UInt8 $tmp115;
    panda$core$Char8 $tmp116;
    panda$core$UInt8 $tmp117;
    panda$core$String* separator118 = NULL;
    panda$core$String* $tmp119;
    panda$collections$Iterator* Iter$61$9124 = NULL;
    panda$collections$Iterator* $tmp125;
    panda$collections$Iterator* $tmp126;
    org$pandalanguage$pandac$MethodDecl$Parameter* p142 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp143;
    panda$core$Object* $tmp144;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$Char8 $tmp154;
    panda$core$UInt8 $tmp155;
    org$pandalanguage$pandac$Type* $tmp156;
    panda$core$Char8 $tmp159;
    panda$core$UInt8 $tmp160;
    panda$core$String* $returnValue163;
    panda$core$String* $tmp164;
    panda$core$String* $tmp165;
    int $tmp104;
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
        panda$core$MutableString* $tmp108 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Object* $tmp111 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp110 = $tmp111;
        panda$core$String* $tmp113 = (($fn112) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp110));
        $tmp109 = $tmp113;
        panda$core$MutableString$init$panda$core$String($tmp108, $tmp109);
        $tmp107 = $tmp108;
        $tmp106 = $tmp107;
        result105 = $tmp106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$Panda$unref$panda$core$Object($tmp110);
        panda$core$UInt8$init$builtin_uint8(&$tmp115, 35);
        panda$core$Char8$init$panda$core$UInt8(&$tmp114, $tmp115);
        panda$core$MutableString$append$panda$core$Char8(result105, $tmp114);
        panda$core$MutableString$append$panda$core$String(result105, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp117, 40);
        panda$core$Char8$init$panda$core$UInt8(&$tmp116, $tmp117);
        panda$core$MutableString$append$panda$core$Char8(result105, $tmp116);
        $tmp119 = &$s120;
        separator118 = $tmp119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
        {
            int $tmp123;
            {
                ITable* $tmp127 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp127 = $tmp127->next;
                }
                $fn129 $tmp128 = $tmp127->methods[0];
                panda$collections$Iterator* $tmp130 = $tmp128(((panda$collections$Iterable*) p_m->parameters));
                $tmp126 = $tmp130;
                $tmp125 = $tmp126;
                Iter$61$9124 = $tmp125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                $l131:;
                ITable* $tmp134 = Iter$61$9124->$class->itable;
                while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp134 = $tmp134->next;
                }
                $fn136 $tmp135 = $tmp134->methods[0];
                panda$core$Bit $tmp137 = $tmp135(Iter$61$9124);
                panda$core$Bit $tmp138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp137);
                bool $tmp133 = $tmp138.value;
                if (!$tmp133) goto $l132;
                {
                    int $tmp141;
                    {
                        ITable* $tmp145 = Iter$61$9124->$class->itable;
                        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp145 = $tmp145->next;
                        }
                        $fn147 $tmp146 = $tmp145->methods[1];
                        panda$core$Object* $tmp148 = $tmp146(Iter$61$9124);
                        $tmp144 = $tmp148;
                        $tmp143 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp144);
                        p142 = $tmp143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                        panda$core$Panda$unref$panda$core$Object($tmp144);
                        panda$core$MutableString$append$panda$core$String(result105, separator118);
                        panda$core$MutableString$append$panda$core$Object(result105, ((panda$core$Object*) p142->type));
                        {
                            $tmp149 = separator118;
                            $tmp150 = &$s151;
                            separator118 = $tmp150;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
                        }
                    }
                    $tmp141 = -1;
                    goto $l139;
                    $l139:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p142));
                    p142 = NULL;
                    switch ($tmp141) {
                        case -1: goto $l152;
                    }
                    $l152:;
                }
                goto $l131;
                $l132:;
            }
            $tmp123 = -1;
            goto $l121;
            $l121:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$9124));
            Iter$61$9124 = NULL;
            switch ($tmp123) {
                case -1: goto $l153;
            }
            $l153:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp155, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp154, $tmp155);
        panda$core$MutableString$append$panda$core$Char8(result105, $tmp154);
        org$pandalanguage$pandac$Type* $tmp157 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp156 = $tmp157;
        panda$core$Bit $tmp158 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp156);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        if ($tmp158.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp160, 58);
            panda$core$Char8$init$panda$core$UInt8(&$tmp159, $tmp160);
            panda$core$MutableString$append$panda$core$Char8(result105, $tmp159);
            panda$core$MutableString$append$panda$core$Object(result105, ((panda$core$Object*) p_m->returnType));
        }
        }
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result105, &$s161, &$s162);
        panda$core$String* $tmp166 = panda$core$MutableString$finish$R$panda$core$String(result105);
        $tmp165 = $tmp166;
        $tmp164 = $tmp165;
        $returnValue163 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        $tmp104 = 0;
        goto $l102;
        $l167:;
        return $returnValue163;
    }
    $l102:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result105));
    result105 = NULL;
    separator118 = NULL;
    switch ($tmp104) {
        case 0: goto $l167;
    }
    $l169:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$Symbol$Kind $match$76_9170;
    panda$core$Int64 $tmp171;
    panda$core$String* $returnValue173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$Int64 $tmp179;
    panda$core$String* $tmp181;
    panda$core$String* $tmp182;
    panda$core$String* $tmp186;
    {
        $match$76_9170 = p_s->kind;
        panda$core$Int64$init$builtin_int64(&$tmp171, 1);
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9170.$rawValue, $tmp171);
        if ($tmp172.value) {
        {
            panda$core$String* $tmp177 = (($fn176) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$FieldDecl*) p_s));
            $tmp175 = $tmp177;
            $tmp174 = $tmp175;
            $returnValue173 = $tmp174;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
            return $returnValue173;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp179, 3);
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9170.$rawValue, $tmp179);
        if ($tmp180.value) {
        {
            panda$core$String* $tmp184 = (($fn183) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$MethodDecl*) p_s));
            $tmp182 = $tmp184;
            $tmp181 = $tmp182;
            $returnValue173 = $tmp181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
            return $returnValue173;
        }
        }
        else {
        {
            $tmp186 = NULL;
            $returnValue173 = $tmp186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
            return $returnValue173;
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, panda$core$String* p_link) {
    panda$core$String* $returnValue198;
    panda$core$String* $tmp199;
    org$pandalanguage$pandac$ClassDecl* cl202 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp203;
    org$pandalanguage$pandac$ClassDecl* $tmp204;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$RegularExpression* $tmp214;
    org$pandalanguage$pandac$Symbol* s222 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp223;
    org$pandalanguage$pandac$Symbol* $tmp224;
    org$pandalanguage$pandac$SymbolTable* $tmp225;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$core$RegularExpression* $tmp236;
    panda$core$String$Index$nullable index240;
    org$pandalanguage$pandac$ClassDecl* $tmp243;
    org$pandalanguage$pandac$ClassDecl* $tmp244;
    org$pandalanguage$pandac$ClassDecl* $tmp245;
    panda$core$String* $tmp246;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp247;
    panda$core$Bit $tmp248;
    org$pandalanguage$pandac$Symbol* s254 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp255;
    org$pandalanguage$pandac$Symbol* $tmp256;
    org$pandalanguage$pandac$SymbolTable* $tmp257;
    panda$core$String* $tmp259;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp260;
    panda$core$Bit $tmp262;
    panda$core$String* $tmp265;
    panda$core$String* $tmp269;
    panda$core$String* $tmp270;
    panda$collections$ListView* parsed277 = NULL;
    panda$collections$ListView* $tmp278;
    panda$collections$ListView* $tmp279;
    panda$core$RegularExpression* $tmp280;
    panda$collections$ListView* rawParameters287 = NULL;
    panda$core$String* $tmp288;
    panda$core$Object* $tmp289;
    panda$core$Int64 $tmp290;
    panda$collections$ListView* $tmp301;
    panda$collections$ListView* $tmp302;
    panda$collections$ListView* $tmp303;
    panda$core$Object* $tmp304;
    panda$core$Int64 $tmp305;
    panda$collections$ListView* $tmp312;
    panda$collections$ListView* $tmp313;
    panda$collections$Array* $tmp314;
    panda$collections$Array* parameters316 = NULL;
    panda$collections$Array* $tmp317;
    panda$collections$Array* $tmp318;
    panda$collections$Iterator* Iter$121$13327 = NULL;
    panda$collections$Iterator* $tmp328;
    panda$collections$Iterator* $tmp329;
    panda$core$String* p345 = NULL;
    panda$core$String* $tmp346;
    panda$core$Object* $tmp347;
    panda$io$File* $tmp352;
    org$pandalanguage$pandac$ASTNode* type354 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp355;
    org$pandalanguage$pandac$ASTNode* $tmp356;
    panda$core$String* $tmp358;
    panda$core$String* $tmp359;
    panda$core$String* $tmp364;
    org$pandalanguage$pandac$Type* converted370 = NULL;
    org$pandalanguage$pandac$Type* $tmp371;
    org$pandalanguage$pandac$Type* $tmp372;
    org$pandalanguage$pandac$Type* resolved374 = NULL;
    org$pandalanguage$pandac$Type* $tmp375;
    org$pandalanguage$pandac$Type* $tmp376;
    panda$core$String* $tmp378;
    panda$core$String* name386 = NULL;
    panda$core$String* $tmp387;
    panda$core$Object* $tmp388;
    panda$core$Int64 $tmp389;
    panda$core$String$Index$nullable index394;
    panda$core$String* symbolName397 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp398;
    org$pandalanguage$pandac$ClassDecl* $tmp399;
    org$pandalanguage$pandac$ClassDecl* $tmp400;
    panda$core$String* $tmp401;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp402;
    panda$core$Bit $tmp403;
    panda$core$String* $tmp406;
    panda$core$String* $tmp407;
    panda$core$String* $tmp408;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp409;
    panda$core$Bit $tmp411;
    org$pandalanguage$pandac$ClassDecl* $tmp413;
    org$pandalanguage$pandac$ClassDecl* $tmp414;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    org$pandalanguage$pandac$Symbol* s420 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp421;
    org$pandalanguage$pandac$Symbol* $tmp422;
    org$pandalanguage$pandac$SymbolTable* $tmp423;
    panda$core$String* $tmp426;
    org$pandalanguage$pandac$Symbol$Kind $match$151_17431;
    panda$core$Int64 $tmp432;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    panda$core$Int64 $tmp444;
    panda$collections$Iterator* Iter$157$25449 = NULL;
    panda$collections$Iterator* $tmp450;
    panda$collections$Iterator* $tmp451;
    org$pandalanguage$pandac$MethodDecl* m467 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp468;
    panda$core$Object* $tmp469;
    panda$core$String* $tmp476;
    panda$core$String* $tmp477;
    panda$core$String* $tmp488;
    panda$core$String* $tmp495;
    int $tmp190;
    {
        panda$core$Bit $tmp193 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s192);
        bool $tmp191 = $tmp193.value;
        if ($tmp191) goto $l194;
        panda$core$Bit $tmp196 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s195);
        $tmp191 = $tmp196.value;
        $l194:;
        panda$core$Bit $tmp197 = { $tmp191 };
        if ($tmp197.value) {
        {
            $tmp199 = p_link;
            $returnValue198 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            $tmp190 = 0;
            goto $l188;
            $l200:;
            return $returnValue198;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp205 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_link);
        $tmp204 = $tmp205;
        $tmp203 = $tmp204;
        cl202 = $tmp203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
        if (((panda$core$Bit) { cl202 != NULL }).value) {
        {
            panda$core$String* $tmp209 = (($fn208) self->$class->vtable[3])(self, cl202);
            $tmp207 = $tmp209;
            $tmp206 = $tmp207;
            $returnValue198 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            $tmp190 = 1;
            goto $l188;
            $l210:;
            return $returnValue198;
        }
        }
        bool $tmp212 = ((panda$core$Bit) { self->context != NULL }).value;
        if (!$tmp212) goto $l213;
        panda$core$RegularExpression* $tmp215 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp215, &$s216);
        $tmp214 = $tmp215;
        panda$core$Bit $tmp217 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp214);
        $tmp212 = $tmp217.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
        $l213:;
        panda$core$Bit $tmp218 = { $tmp212 };
        if ($tmp218.value) {
        {
            int $tmp221;
            {
                org$pandalanguage$pandac$SymbolTable* $tmp226 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, self->context);
                $tmp225 = $tmp226;
                org$pandalanguage$pandac$Symbol* $tmp227 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp225, p_link);
                $tmp224 = $tmp227;
                $tmp223 = $tmp224;
                s222 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
                if (((panda$core$Bit) { s222 != NULL }).value) {
                {
                    panda$core$String* $tmp231 = (($fn230) self->$class->vtable[6])(self, s222);
                    $tmp229 = $tmp231;
                    $tmp228 = $tmp229;
                    $returnValue198 = $tmp228;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                    $tmp221 = 0;
                    goto $l219;
                    $l232:;
                    $tmp190 = 2;
                    goto $l188;
                    $l233:;
                    return $returnValue198;
                }
                }
            }
            $tmp221 = -1;
            goto $l219;
            $l219:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s222));
            s222 = NULL;
            switch ($tmp221) {
                case 0: goto $l232;
                case -1: goto $l235;
            }
            $l235:;
        }
        }
        panda$core$RegularExpression* $tmp237 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp237, &$s238);
        $tmp236 = $tmp237;
        panda$core$Bit $tmp239 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp236);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        if ($tmp239.value) {
        {
            panda$core$String$Index$nullable $tmp242 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_link, &$s241);
            index240 = $tmp242;
            if (((panda$core$Bit) { index240.nonnull }).value) {
            {
                {
                    $tmp243 = cl202;
                    panda$core$Bit$init$builtin_bit(&$tmp248, false);
                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp247, ((panda$core$String$Index$nullable) { .nonnull = false }), index240, $tmp248);
                    panda$core$String* $tmp249 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp247);
                    $tmp246 = $tmp249;
                    org$pandalanguage$pandac$ClassDecl* $tmp250 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp246);
                    $tmp245 = $tmp250;
                    $tmp244 = $tmp245;
                    cl202 = $tmp244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                }
                if (((panda$core$Bit) { cl202 != NULL }).value) {
                {
                    int $tmp253;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp258 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl202);
                        $tmp257 = $tmp258;
                        panda$core$String$Index $tmp261 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_link, ((panda$core$String$Index) index240.value));
                        panda$core$Bit$init$builtin_bit(&$tmp262, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp260, ((panda$core$String$Index$nullable) { $tmp261, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp262);
                        panda$core$String* $tmp263 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp260);
                        $tmp259 = $tmp263;
                        org$pandalanguage$pandac$Symbol* $tmp264 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp257, $tmp259);
                        $tmp256 = $tmp264;
                        $tmp255 = $tmp256;
                        s254 = $tmp255;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                        if (((panda$core$Bit) { s254 == NULL }).value) {
                        {
                            $tmp265 = NULL;
                            $returnValue198 = $tmp265;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                            $tmp253 = 0;
                            goto $l251;
                            $l266:;
                            $tmp190 = 3;
                            goto $l188;
                            $l267:;
                            return $returnValue198;
                        }
                        }
                        panda$core$String* $tmp272 = (($fn271) self->$class->vtable[6])(self, s254);
                        $tmp270 = $tmp272;
                        $tmp269 = $tmp270;
                        $returnValue198 = $tmp269;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                        $tmp253 = 1;
                        goto $l251;
                        $l273:;
                        $tmp190 = 4;
                        goto $l188;
                        $l274:;
                        return $returnValue198;
                    }
                    $l251:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s254));
                    s254 = NULL;
                    switch ($tmp253) {
                        case 1: goto $l273;
                        case 0: goto $l266;
                    }
                    $l276:;
                }
                }
            }
            }
        }
        }
        panda$core$RegularExpression* $tmp281 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp281, &$s282);
        $tmp280 = $tmp281;
        panda$collections$ListView* $tmp283 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_link, $tmp280);
        $tmp279 = $tmp283;
        $tmp278 = $tmp279;
        parsed277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
        if (((panda$core$Bit) { parsed277 != NULL }).value) {
        {
            int $tmp286;
            {
                memset(&rawParameters287, 0, sizeof(rawParameters287));
                panda$core$Int64$init$builtin_int64(&$tmp290, 1);
                ITable* $tmp291 = parsed277->$class->itable;
                while ($tmp291->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp291 = $tmp291->next;
                }
                $fn293 $tmp292 = $tmp291->methods[0];
                panda$core$Object* $tmp294 = $tmp292(parsed277, $tmp290);
                $tmp289 = $tmp294;
                panda$core$String* $tmp295 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp289));
                $tmp288 = $tmp295;
                ITable* $tmp297 = ((panda$core$Equatable*) $tmp288)->$class->itable;
                while ($tmp297->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp297 = $tmp297->next;
                }
                $fn299 $tmp298 = $tmp297->methods[1];
                panda$core$Bit $tmp300 = $tmp298(((panda$core$Equatable*) $tmp288), ((panda$core$Equatable*) &$s296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                panda$core$Panda$unref$panda$core$Object($tmp289);
                if ($tmp300.value) {
                {
                    {
                        $tmp301 = rawParameters287;
                        panda$core$Int64$init$builtin_int64(&$tmp305, 1);
                        ITable* $tmp306 = parsed277->$class->itable;
                        while ($tmp306->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp306 = $tmp306->next;
                        }
                        $fn308 $tmp307 = $tmp306->methods[0];
                        panda$core$Object* $tmp309 = $tmp307(parsed277, $tmp305);
                        $tmp304 = $tmp309;
                        panda$collections$ListView* $tmp311 = panda$core$String$split$panda$core$String$R$panda$collections$ListView$LTpanda$core$String$GT(((panda$core$String*) $tmp304), &$s310);
                        $tmp303 = $tmp311;
                        $tmp302 = $tmp303;
                        rawParameters287 = $tmp302;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                        panda$core$Panda$unref$panda$core$Object($tmp304);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                    }
                }
                }
                else {
                {
                    {
                        $tmp312 = rawParameters287;
                        panda$collections$Array* $tmp315 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp315);
                        $tmp314 = $tmp315;
                        $tmp313 = ((panda$collections$ListView*) $tmp314);
                        rawParameters287 = $tmp313;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                    }
                }
                }
                panda$collections$Array* $tmp319 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                ITable* $tmp320 = ((panda$collections$CollectionView*) rawParameters287)->$class->itable;
                while ($tmp320->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp320 = $tmp320->next;
                }
                $fn322 $tmp321 = $tmp320->methods[0];
                panda$core$Int64 $tmp323 = $tmp321(((panda$collections$CollectionView*) rawParameters287));
                panda$collections$Array$init$panda$core$Int64($tmp319, $tmp323);
                $tmp318 = $tmp319;
                $tmp317 = $tmp318;
                parameters316 = $tmp317;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                {
                    int $tmp326;
                    {
                        ITable* $tmp330 = ((panda$collections$Iterable*) rawParameters287)->$class->itable;
                        while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp330 = $tmp330->next;
                        }
                        $fn332 $tmp331 = $tmp330->methods[0];
                        panda$collections$Iterator* $tmp333 = $tmp331(((panda$collections$Iterable*) rawParameters287));
                        $tmp329 = $tmp333;
                        $tmp328 = $tmp329;
                        Iter$121$13327 = $tmp328;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                        $l334:;
                        ITable* $tmp337 = Iter$121$13327->$class->itable;
                        while ($tmp337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp337 = $tmp337->next;
                        }
                        $fn339 $tmp338 = $tmp337->methods[0];
                        panda$core$Bit $tmp340 = $tmp338(Iter$121$13327);
                        panda$core$Bit $tmp341 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp340);
                        bool $tmp336 = $tmp341.value;
                        if (!$tmp336) goto $l335;
                        {
                            int $tmp344;
                            {
                                ITable* $tmp348 = Iter$121$13327->$class->itable;
                                while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp348 = $tmp348->next;
                                }
                                $fn350 $tmp349 = $tmp348->methods[1];
                                panda$core$Object* $tmp351 = $tmp349(Iter$121$13327);
                                $tmp347 = $tmp351;
                                $tmp346 = ((panda$core$String*) $tmp347);
                                p345 = $tmp346;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                                panda$core$Panda$unref$panda$core$Object($tmp347);
                                panda$io$File* $tmp353 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                                panda$io$File$init$panda$core$String($tmp353, p345);
                                $tmp352 = $tmp353;
                                org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->compiler->parser, $tmp352, p345);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                                org$pandalanguage$pandac$ASTNode* $tmp357 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self->compiler->parser);
                                $tmp356 = $tmp357;
                                $tmp355 = $tmp356;
                                type354 = $tmp355;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                                if (((panda$core$Bit) { type354 == NULL }).value) {
                                {
                                    panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, p345);
                                    $tmp359 = $tmp361;
                                    panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s362);
                                    $tmp358 = $tmp363;
                                    panda$io$Console$printLine$panda$core$String($tmp358);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
                                    $tmp364 = NULL;
                                    $returnValue198 = $tmp364;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
                                    $tmp344 = 0;
                                    goto $l342;
                                    $l365:;
                                    $tmp326 = 0;
                                    goto $l324;
                                    $l366:;
                                    $tmp286 = 0;
                                    goto $l284;
                                    $l367:;
                                    $tmp190 = 5;
                                    goto $l188;
                                    $l368:;
                                    return $returnValue198;
                                }
                                }
                                org$pandalanguage$pandac$Type* $tmp373 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->compiler->scanner, type354);
                                $tmp372 = $tmp373;
                                $tmp371 = $tmp372;
                                converted370 = $tmp371;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
                                org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self->compiler, converted370);
                                $tmp376 = $tmp377;
                                $tmp375 = $tmp376;
                                resolved374 = $tmp375;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
                                if (((panda$core$Bit) { resolved374 == NULL }).value) {
                                {
                                    $tmp378 = NULL;
                                    $returnValue198 = $tmp378;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                                    $tmp344 = 1;
                                    goto $l342;
                                    $l379:;
                                    $tmp326 = 1;
                                    goto $l324;
                                    $l380:;
                                    $tmp286 = 1;
                                    goto $l284;
                                    $l381:;
                                    $tmp190 = 6;
                                    goto $l188;
                                    $l382:;
                                    return $returnValue198;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(parameters316, ((panda$core$Object*) resolved374));
                            }
                            $tmp344 = -1;
                            goto $l342;
                            $l342:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resolved374));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) converted370));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type354));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p345));
                            p345 = NULL;
                            type354 = NULL;
                            converted370 = NULL;
                            resolved374 = NULL;
                            switch ($tmp344) {
                                case 1: goto $l379;
                                case 0: goto $l365;
                                case -1: goto $l384;
                            }
                            $l384:;
                        }
                        goto $l334;
                        $l335:;
                    }
                    $tmp326 = -1;
                    goto $l324;
                    $l324:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$13327));
                    Iter$121$13327 = NULL;
                    switch ($tmp326) {
                        case -1: goto $l385;
                        case 1: goto $l380;
                        case 0: goto $l366;
                    }
                    $l385:;
                }
                panda$core$Int64$init$builtin_int64(&$tmp389, 0);
                ITable* $tmp390 = parsed277->$class->itable;
                while ($tmp390->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp390 = $tmp390->next;
                }
                $fn392 $tmp391 = $tmp390->methods[0];
                panda$core$Object* $tmp393 = $tmp391(parsed277, $tmp389);
                $tmp388 = $tmp393;
                $tmp387 = ((panda$core$String*) $tmp388);
                name386 = $tmp387;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
                panda$core$Panda$unref$panda$core$Object($tmp388);
                panda$core$String$Index$nullable $tmp396 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(name386, &$s395);
                index394 = $tmp396;
                memset(&symbolName397, 0, sizeof(symbolName397));
                if (((panda$core$Bit) { index394.nonnull }).value) {
                {
                    {
                        $tmp398 = cl202;
                        panda$core$Bit$init$builtin_bit(&$tmp403, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp402, ((panda$core$String$Index$nullable) { .nonnull = false }), index394, $tmp403);
                        panda$core$String* $tmp404 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name386, $tmp402);
                        $tmp401 = $tmp404;
                        org$pandalanguage$pandac$ClassDecl* $tmp405 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp401);
                        $tmp400 = $tmp405;
                        $tmp399 = $tmp400;
                        cl202 = $tmp399;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                    }
                    {
                        $tmp406 = symbolName397;
                        panda$core$String$Index $tmp410 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(name386, ((panda$core$String$Index) index394.value));
                        panda$core$Bit$init$builtin_bit(&$tmp411, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp409, ((panda$core$String$Index$nullable) { $tmp410, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp411);
                        panda$core$String* $tmp412 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name386, $tmp409);
                        $tmp408 = $tmp412;
                        $tmp407 = $tmp408;
                        symbolName397 = $tmp407;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
                    }
                }
                }
                else {
                {
                    {
                        $tmp413 = cl202;
                        $tmp414 = self->context;
                        cl202 = $tmp414;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                    }
                    {
                        $tmp415 = symbolName397;
                        $tmp416 = name386;
                        symbolName397 = $tmp416;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                    }
                }
                }
                if (((panda$core$Bit) { cl202 != NULL }).value) {
                {
                    int $tmp419;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp424 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl202);
                        $tmp423 = $tmp424;
                        org$pandalanguage$pandac$Symbol* $tmp425 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp423, symbolName397);
                        $tmp422 = $tmp425;
                        $tmp421 = $tmp422;
                        s420 = $tmp421;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                        if (((panda$core$Bit) { s420 == NULL }).value) {
                        {
                            $tmp426 = NULL;
                            $returnValue198 = $tmp426;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
                            $tmp419 = 0;
                            goto $l417;
                            $l427:;
                            $tmp286 = 2;
                            goto $l284;
                            $l428:;
                            $tmp190 = 7;
                            goto $l188;
                            $l429:;
                            return $returnValue198;
                        }
                        }
                        {
                            $match$151_17431 = s420->kind;
                            panda$core$Int64$init$builtin_int64(&$tmp432, 3);
                            panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$151_17431.$rawValue, $tmp432);
                            if ($tmp433.value) {
                            {
                                panda$core$Bit $tmp435 = (($fn434) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$MethodDecl*) s420), ((panda$collections$ListView*) parameters316));
                                if ($tmp435.value) {
                                {
                                    panda$core$String* $tmp439 = (($fn438) self->$class->vtable[6])(self, s420);
                                    $tmp437 = $tmp439;
                                    $tmp436 = $tmp437;
                                    $returnValue198 = $tmp436;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
                                    $tmp419 = 1;
                                    goto $l417;
                                    $l440:;
                                    $tmp286 = 3;
                                    goto $l284;
                                    $l441:;
                                    $tmp190 = 8;
                                    goto $l188;
                                    $l442:;
                                    return $returnValue198;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp444, 4);
                            panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$151_17431.$rawValue, $tmp444);
                            if ($tmp445.value) {
                            {
                                {
                                    int $tmp448;
                                    {
                                        ITable* $tmp452 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s420)->methods)->$class->itable;
                                        while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp452 = $tmp452->next;
                                        }
                                        $fn454 $tmp453 = $tmp452->methods[0];
                                        panda$collections$Iterator* $tmp455 = $tmp453(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s420)->methods));
                                        $tmp451 = $tmp455;
                                        $tmp450 = $tmp451;
                                        Iter$157$25449 = $tmp450;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                                        $l456:;
                                        ITable* $tmp459 = Iter$157$25449->$class->itable;
                                        while ($tmp459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp459 = $tmp459->next;
                                        }
                                        $fn461 $tmp460 = $tmp459->methods[0];
                                        panda$core$Bit $tmp462 = $tmp460(Iter$157$25449);
                                        panda$core$Bit $tmp463 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp462);
                                        bool $tmp458 = $tmp463.value;
                                        if (!$tmp458) goto $l457;
                                        {
                                            int $tmp466;
                                            {
                                                ITable* $tmp470 = Iter$157$25449->$class->itable;
                                                while ($tmp470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp470 = $tmp470->next;
                                                }
                                                $fn472 $tmp471 = $tmp470->methods[1];
                                                panda$core$Object* $tmp473 = $tmp471(Iter$157$25449);
                                                $tmp469 = $tmp473;
                                                $tmp468 = ((org$pandalanguage$pandac$MethodDecl*) $tmp469);
                                                m467 = $tmp468;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                                                panda$core$Panda$unref$panda$core$Object($tmp469);
                                                panda$core$Bit $tmp475 = (($fn474) self->$class->vtable[2])(self, m467, ((panda$collections$ListView*) parameters316));
                                                if ($tmp475.value) {
                                                {
                                                    panda$core$String* $tmp479 = (($fn478) self->$class->vtable[5])(self, m467);
                                                    $tmp477 = $tmp479;
                                                    $tmp476 = $tmp477;
                                                    $returnValue198 = $tmp476;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
                                                    $tmp466 = 0;
                                                    goto $l464;
                                                    $l480:;
                                                    $tmp448 = 0;
                                                    goto $l446;
                                                    $l481:;
                                                    $tmp419 = 2;
                                                    goto $l417;
                                                    $l482:;
                                                    $tmp286 = 4;
                                                    goto $l284;
                                                    $l483:;
                                                    $tmp190 = 9;
                                                    goto $l188;
                                                    $l484:;
                                                    return $returnValue198;
                                                }
                                                }
                                            }
                                            $tmp466 = -1;
                                            goto $l464;
                                            $l464:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m467));
                                            m467 = NULL;
                                            switch ($tmp466) {
                                                case 0: goto $l480;
                                                case -1: goto $l486;
                                            }
                                            $l486:;
                                        }
                                        goto $l456;
                                        $l457:;
                                    }
                                    $tmp448 = -1;
                                    goto $l446;
                                    $l446:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$157$25449));
                                    Iter$157$25449 = NULL;
                                    switch ($tmp448) {
                                        case -1: goto $l487;
                                        case 0: goto $l481;
                                    }
                                    $l487:;
                                }
                            }
                            }
                            }
                        }
                        $tmp488 = NULL;
                        $returnValue198 = $tmp488;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
                        $tmp419 = 3;
                        goto $l417;
                        $l489:;
                        $tmp286 = 5;
                        goto $l284;
                        $l490:;
                        $tmp190 = 10;
                        goto $l188;
                        $l491:;
                        return $returnValue198;
                    }
                    $l417:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s420));
                    s420 = NULL;
                    switch ($tmp419) {
                        case 3: goto $l489;
                        case 2: goto $l482;
                        case 1: goto $l440;
                        case 0: goto $l427;
                    }
                    $l493:;
                }
                }
            }
            $tmp286 = -1;
            goto $l284;
            $l284:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) symbolName397));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name386));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawParameters287));
            parameters316 = NULL;
            name386 = NULL;
            switch ($tmp286) {
                case 5: goto $l490;
                case 0: goto $l367;
                case -1: goto $l494;
                case 3: goto $l441;
                case 4: goto $l483;
                case 1: goto $l381;
                case 2: goto $l428;
            }
            $l494:;
        }
        }
        $tmp495 = NULL;
        $returnValue198 = $tmp495;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
        $tmp190 = 11;
        goto $l188;
        $l496:;
        return $returnValue198;
    }
    $l188:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl202));
    cl202 = NULL;
    parsed277 = NULL;
    switch ($tmp190) {
        case 0: goto $l200;
        case 2: goto $l233;
        case 1: goto $l210;
        case 6: goto $l382;
        case 5: goto $l368;
        case 3: goto $l267;
        case 4: goto $l274;
        case 8: goto $l442;
        case 11: goto $l496;
        case 10: goto $l491;
        case 7: goto $l429;
        case 9: goto $l484;
    }
    $l498:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* self) {
    int $tmp501;
    {
    }
    $tmp501 = -1;
    goto $l499;
    $l499:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp501) {
        case -1: goto $l502;
    }
    $l502:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->context));
}

