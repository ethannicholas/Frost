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

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn40)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn66)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn92)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn112)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn147)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn178)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn185)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn210)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn232)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$String* (*$fn273)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn298)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn304)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn312)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn318)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn336)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn370)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn412)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn416)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn439)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn450)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn452)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ListView*);
typedef panda$core$String* (*$fn456)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);

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
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$collections$Iterator* Iter$62$9124 = NULL;
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
    panda$core$String* $returnValue165;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
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
                Iter$62$9124 = $tmp125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                $l131:;
                ITable* $tmp134 = Iter$62$9124->$class->itable;
                while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp134 = $tmp134->next;
                }
                $fn136 $tmp135 = $tmp134->methods[0];
                panda$core$Bit $tmp137 = $tmp135(Iter$62$9124);
                panda$core$Bit $tmp138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp137);
                bool $tmp133 = $tmp138.value;
                if (!$tmp133) goto $l132;
                {
                    int $tmp141;
                    {
                        ITable* $tmp145 = Iter$62$9124->$class->itable;
                        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp145 = $tmp145->next;
                        }
                        $fn147 $tmp146 = $tmp145->methods[1];
                        panda$core$Object* $tmp148 = $tmp146(Iter$62$9124);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$9124));
            Iter$62$9124 = NULL;
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
        panda$core$MutableString$replace$panda$core$String$panda$core$String(result105, &$s163, &$s164);
        panda$core$String* $tmp168 = panda$core$MutableString$finish$R$panda$core$String(result105);
        $tmp167 = $tmp168;
        $tmp166 = $tmp167;
        $returnValue165 = $tmp166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
        $tmp104 = 0;
        goto $l102;
        $l169:;
        return $returnValue165;
    }
    $l102:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result105));
    result105 = NULL;
    separator118 = NULL;
    switch ($tmp104) {
        case 0: goto $l169;
    }
    $l171:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$Symbol$Kind $match$78_9172;
    panda$core$Int64 $tmp173;
    panda$core$String* $returnValue175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$Int64 $tmp181;
    panda$core$String* $tmp183;
    panda$core$String* $tmp184;
    panda$core$String* $tmp188;
    {
        $match$78_9172 = p_s->kind;
        panda$core$Int64$init$builtin_int64(&$tmp173, 1);
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_9172.$rawValue, $tmp173);
        if ($tmp174.value) {
        {
            panda$core$String* $tmp179 = (($fn178) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$FieldDecl*) p_s));
            $tmp177 = $tmp179;
            $tmp176 = $tmp177;
            $returnValue175 = $tmp176;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
            return $returnValue175;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp181, 3);
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_9172.$rawValue, $tmp181);
        if ($tmp182.value) {
        {
            panda$core$String* $tmp186 = (($fn185) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$MethodDecl*) p_s));
            $tmp184 = $tmp186;
            $tmp183 = $tmp184;
            $returnValue175 = $tmp183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
            return $returnValue175;
        }
        }
        else {
        {
            $tmp188 = NULL;
            $returnValue175 = $tmp188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
            return $returnValue175;
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, panda$core$String* p_link) {
    panda$core$String* $returnValue200;
    panda$core$String* $tmp201;
    org$pandalanguage$pandac$ClassDecl* cl204 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp205;
    org$pandalanguage$pandac$ClassDecl* $tmp206;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$core$RegularExpression* $tmp216;
    org$pandalanguage$pandac$Symbol* s224 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp225;
    org$pandalanguage$pandac$Symbol* $tmp226;
    org$pandalanguage$pandac$SymbolTable* $tmp227;
    panda$core$String* $tmp230;
    panda$core$String* $tmp231;
    panda$core$RegularExpression* $tmp238;
    panda$core$String$Index$nullable index242;
    org$pandalanguage$pandac$ClassDecl* $tmp245;
    org$pandalanguage$pandac$ClassDecl* $tmp246;
    org$pandalanguage$pandac$ClassDecl* $tmp247;
    panda$core$String* $tmp248;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp249;
    panda$core$Bit $tmp250;
    org$pandalanguage$pandac$Symbol* s256 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp257;
    org$pandalanguage$pandac$Symbol* $tmp258;
    org$pandalanguage$pandac$SymbolTable* $tmp259;
    panda$core$String* $tmp261;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp262;
    panda$core$Bit $tmp264;
    panda$core$String* $tmp267;
    panda$core$String* $tmp271;
    panda$core$String* $tmp272;
    panda$collections$ListView* parsed279 = NULL;
    panda$collections$ListView* $tmp280;
    panda$collections$ListView* $tmp281;
    panda$core$RegularExpression* $tmp282;
    panda$collections$Array* parameters289 = NULL;
    panda$collections$Array* $tmp290;
    panda$collections$Array* $tmp291;
    panda$core$String* $tmp293;
    panda$core$Object* $tmp294;
    panda$core$Int64 $tmp295;
    panda$io$File* $tmp306;
    panda$core$Object* $tmp308;
    panda$core$Int64 $tmp309;
    panda$core$Object* $tmp314;
    panda$core$Int64 $tmp315;
    org$pandalanguage$pandac$ASTNode* type325 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp326;
    org$pandalanguage$pandac$ASTNode* $tmp327;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$Object* $tmp332;
    panda$core$Int64 $tmp333;
    panda$core$String* $tmp341;
    org$pandalanguage$pandac$Type* converted346 = NULL;
    org$pandalanguage$pandac$Type* $tmp347;
    org$pandalanguage$pandac$Type* $tmp348;
    org$pandalanguage$pandac$Type* resolved350 = NULL;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type* $tmp352;
    panda$core$String* $tmp354;
    org$pandalanguage$pandac$parser$Token$Kind $tmp359;
    panda$core$Int64 $tmp360;
    panda$core$String* name364 = NULL;
    panda$core$String* $tmp365;
    panda$core$Object* $tmp366;
    panda$core$Int64 $tmp367;
    panda$core$String$Index$nullable index372;
    panda$core$String* symbolName375 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp376;
    org$pandalanguage$pandac$ClassDecl* $tmp377;
    org$pandalanguage$pandac$ClassDecl* $tmp378;
    panda$core$String* $tmp379;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp380;
    panda$core$Bit $tmp381;
    panda$core$String* $tmp384;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp387;
    panda$core$Bit $tmp389;
    org$pandalanguage$pandac$ClassDecl* $tmp391;
    org$pandalanguage$pandac$ClassDecl* $tmp392;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    org$pandalanguage$pandac$Symbol* s398 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp399;
    org$pandalanguage$pandac$Symbol* $tmp400;
    org$pandalanguage$pandac$SymbolTable* $tmp401;
    panda$core$String* $tmp404;
    org$pandalanguage$pandac$Symbol$Kind $match$151_17409;
    panda$core$Int64 $tmp410;
    panda$core$String* $tmp414;
    panda$core$String* $tmp415;
    panda$core$Int64 $tmp422;
    panda$collections$Iterator* Iter$157$25427 = NULL;
    panda$collections$Iterator* $tmp428;
    panda$collections$Iterator* $tmp429;
    org$pandalanguage$pandac$MethodDecl* m445 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp446;
    panda$core$Object* $tmp447;
    panda$core$String* $tmp454;
    panda$core$String* $tmp455;
    panda$core$String* $tmp466;
    panda$core$String* $tmp473;
    int $tmp192;
    {
        panda$core$Bit $tmp195 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s194);
        bool $tmp193 = $tmp195.value;
        if ($tmp193) goto $l196;
        panda$core$Bit $tmp198 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_link, &$s197);
        $tmp193 = $tmp198.value;
        $l196:;
        panda$core$Bit $tmp199 = { $tmp193 };
        if ($tmp199.value) {
        {
            $tmp201 = p_link;
            $returnValue200 = $tmp201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
            $tmp192 = 0;
            goto $l190;
            $l202:;
            return $returnValue200;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp207 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_link);
        $tmp206 = $tmp207;
        $tmp205 = $tmp206;
        cl204 = $tmp205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
        if (((panda$core$Bit) { cl204 != NULL }).value) {
        {
            panda$core$String* $tmp211 = (($fn210) self->$class->vtable[3])(self, cl204);
            $tmp209 = $tmp211;
            $tmp208 = $tmp209;
            $returnValue200 = $tmp208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
            $tmp192 = 1;
            goto $l190;
            $l212:;
            return $returnValue200;
        }
        }
        bool $tmp214 = ((panda$core$Bit) { self->context != NULL }).value;
        if (!$tmp214) goto $l215;
        panda$core$RegularExpression* $tmp217 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp217, &$s218);
        $tmp216 = $tmp217;
        panda$core$Bit $tmp219 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp216);
        $tmp214 = $tmp219.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        $l215:;
        panda$core$Bit $tmp220 = { $tmp214 };
        if ($tmp220.value) {
        {
            int $tmp223;
            {
                org$pandalanguage$pandac$SymbolTable* $tmp228 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, self->context);
                $tmp227 = $tmp228;
                org$pandalanguage$pandac$Symbol* $tmp229 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp227, p_link);
                $tmp226 = $tmp229;
                $tmp225 = $tmp226;
                s224 = $tmp225;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                if (((panda$core$Bit) { s224 != NULL }).value) {
                {
                    panda$core$String* $tmp233 = (($fn232) self->$class->vtable[6])(self, s224);
                    $tmp231 = $tmp233;
                    $tmp230 = $tmp231;
                    $returnValue200 = $tmp230;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                    $tmp223 = 0;
                    goto $l221;
                    $l234:;
                    $tmp192 = 2;
                    goto $l190;
                    $l235:;
                    return $returnValue200;
                }
                }
            }
            $tmp223 = -1;
            goto $l221;
            $l221:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s224));
            s224 = NULL;
            switch ($tmp223) {
                case -1: goto $l237;
                case 0: goto $l234;
            }
            $l237:;
        }
        }
        panda$core$RegularExpression* $tmp239 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp239, &$s240);
        $tmp238 = $tmp239;
        panda$core$Bit $tmp241 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(p_link, $tmp238);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
        if ($tmp241.value) {
        {
            panda$core$String$Index$nullable $tmp244 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_link, &$s243);
            index242 = $tmp244;
            if (((panda$core$Bit) { index242.nonnull }).value) {
            {
                {
                    $tmp245 = cl204;
                    panda$core$Bit$init$builtin_bit(&$tmp250, false);
                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp249, ((panda$core$String$Index$nullable) { .nonnull = false }), index242, $tmp250);
                    panda$core$String* $tmp251 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp249);
                    $tmp248 = $tmp251;
                    org$pandalanguage$pandac$ClassDecl* $tmp252 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp248);
                    $tmp247 = $tmp252;
                    $tmp246 = $tmp247;
                    cl204 = $tmp246;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                }
                if (((panda$core$Bit) { cl204 != NULL }).value) {
                {
                    int $tmp255;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp260 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl204);
                        $tmp259 = $tmp260;
                        panda$core$String$Index $tmp263 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_link, ((panda$core$String$Index) index242.value));
                        panda$core$Bit$init$builtin_bit(&$tmp264, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp262, ((panda$core$String$Index$nullable) { $tmp263, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp264);
                        panda$core$String* $tmp265 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_link, $tmp262);
                        $tmp261 = $tmp265;
                        org$pandalanguage$pandac$Symbol* $tmp266 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp259, $tmp261);
                        $tmp258 = $tmp266;
                        $tmp257 = $tmp258;
                        s256 = $tmp257;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                        if (((panda$core$Bit) { s256 == NULL }).value) {
                        {
                            $tmp267 = NULL;
                            $returnValue200 = $tmp267;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                            $tmp255 = 0;
                            goto $l253;
                            $l268:;
                            $tmp192 = 3;
                            goto $l190;
                            $l269:;
                            return $returnValue200;
                        }
                        }
                        panda$core$String* $tmp274 = (($fn273) self->$class->vtable[6])(self, s256);
                        $tmp272 = $tmp274;
                        $tmp271 = $tmp272;
                        $returnValue200 = $tmp271;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                        $tmp255 = 1;
                        goto $l253;
                        $l275:;
                        $tmp192 = 4;
                        goto $l190;
                        $l276:;
                        return $returnValue200;
                    }
                    $l253:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s256));
                    s256 = NULL;
                    switch ($tmp255) {
                        case 1: goto $l275;
                        case 0: goto $l268;
                    }
                    $l278:;
                }
                }
            }
            }
        }
        }
        panda$core$RegularExpression* $tmp283 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp283, &$s284);
        $tmp282 = $tmp283;
        panda$collections$ListView* $tmp285 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_link, $tmp282);
        $tmp281 = $tmp285;
        $tmp280 = $tmp281;
        parsed279 = $tmp280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
        if (((panda$core$Bit) { parsed279 != NULL }).value) {
        {
            int $tmp288;
            {
                panda$collections$Array* $tmp292 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp292);
                $tmp291 = $tmp292;
                $tmp290 = $tmp291;
                parameters289 = $tmp290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                panda$core$Int64$init$builtin_int64(&$tmp295, 1);
                ITable* $tmp296 = parsed279->$class->itable;
                while ($tmp296->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp296 = $tmp296->next;
                }
                $fn298 $tmp297 = $tmp296->methods[0];
                panda$core$Object* $tmp299 = $tmp297(parsed279, $tmp295);
                $tmp294 = $tmp299;
                panda$core$String* $tmp300 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp294));
                $tmp293 = $tmp300;
                ITable* $tmp302 = ((panda$core$Equatable*) $tmp293)->$class->itable;
                while ($tmp302->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp302 = $tmp302->next;
                }
                $fn304 $tmp303 = $tmp302->methods[1];
                panda$core$Bit $tmp305 = $tmp303(((panda$core$Equatable*) $tmp293), ((panda$core$Equatable*) &$s301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                panda$core$Panda$unref$panda$core$Object($tmp294);
                if ($tmp305.value) {
                {
                    panda$io$File* $tmp307 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$Int64$init$builtin_int64(&$tmp309, 1);
                    ITable* $tmp310 = parsed279->$class->itable;
                    while ($tmp310->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp310 = $tmp310->next;
                    }
                    $fn312 $tmp311 = $tmp310->methods[0];
                    panda$core$Object* $tmp313 = $tmp311(parsed279, $tmp309);
                    $tmp308 = $tmp313;
                    panda$io$File$init$panda$core$String($tmp307, ((panda$core$String*) $tmp308));
                    $tmp306 = $tmp307;
                    panda$core$Int64$init$builtin_int64(&$tmp315, 1);
                    ITable* $tmp316 = parsed279->$class->itable;
                    while ($tmp316->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp316 = $tmp316->next;
                    }
                    $fn318 $tmp317 = $tmp316->methods[0];
                    panda$core$Object* $tmp319 = $tmp317(parsed279, $tmp315);
                    $tmp314 = $tmp319;
                    org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->compiler->parser, $tmp306, ((panda$core$String*) $tmp314));
                    panda$core$Panda$unref$panda$core$Object($tmp314);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                    panda$core$Panda$unref$panda$core$Object($tmp308);
                    $l320:;
                    while (true) {
                    {
                        int $tmp324;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp328 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self->compiler->parser);
                            $tmp327 = $tmp328;
                            $tmp326 = $tmp327;
                            type325 = $tmp326;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                            if (((panda$core$Bit) { type325 == NULL }).value) {
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp333, 1);
                                ITable* $tmp334 = parsed279->$class->itable;
                                while ($tmp334->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                    $tmp334 = $tmp334->next;
                                }
                                $fn336 $tmp335 = $tmp334->methods[0];
                                panda$core$Object* $tmp337 = $tmp335(parsed279, $tmp333);
                                $tmp332 = $tmp337;
                                panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s331, ((panda$core$String*) $tmp332));
                                $tmp330 = $tmp338;
                                panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s339);
                                $tmp329 = $tmp340;
                                panda$io$Console$printLine$panda$core$String($tmp329);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                panda$core$Panda$unref$panda$core$Object($tmp332);
                                $tmp341 = NULL;
                                $returnValue200 = $tmp341;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
                                $tmp324 = 0;
                                goto $l322;
                                $l342:;
                                $tmp288 = 0;
                                goto $l286;
                                $l343:;
                                $tmp192 = 5;
                                goto $l190;
                                $l344:;
                                return $returnValue200;
                            }
                            }
                            org$pandalanguage$pandac$Type* $tmp349 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->compiler->scanner, type325);
                            $tmp348 = $tmp349;
                            $tmp347 = $tmp348;
                            converted346 = $tmp347;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                            org$pandalanguage$pandac$Type* $tmp353 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self->compiler, converted346);
                            $tmp352 = $tmp353;
                            $tmp351 = $tmp352;
                            resolved350 = $tmp351;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                            if (((panda$core$Bit) { resolved350 == NULL }).value) {
                            {
                                $tmp354 = NULL;
                                $returnValue200 = $tmp354;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
                                $tmp324 = 1;
                                goto $l322;
                                $l355:;
                                $tmp288 = 1;
                                goto $l286;
                                $l356:;
                                $tmp192 = 6;
                                goto $l190;
                                $l357:;
                                return $returnValue200;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(parameters289, ((panda$core$Object*) resolved350));
                            panda$core$Int64$init$builtin_int64(&$tmp360, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp359, $tmp360);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp361 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self->compiler->parser, $tmp359);
                            if (((panda$core$Bit) { !$tmp361.nonnull }).value) {
                            {
                                $tmp324 = 2;
                                goto $l322;
                                $l362:;
                                goto $l321;
                            }
                            }
                        }
                        $tmp324 = -1;
                        goto $l322;
                        $l322:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resolved350));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) converted346));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type325));
                        type325 = NULL;
                        converted346 = NULL;
                        resolved350 = NULL;
                        switch ($tmp324) {
                            case 1: goto $l355;
                            case 2: goto $l362;
                            case -1: goto $l363;
                            case 0: goto $l342;
                        }
                        $l363:;
                    }
                    }
                    $l321:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp367, 0);
                ITable* $tmp368 = parsed279->$class->itable;
                while ($tmp368->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp368 = $tmp368->next;
                }
                $fn370 $tmp369 = $tmp368->methods[0];
                panda$core$Object* $tmp371 = $tmp369(parsed279, $tmp367);
                $tmp366 = $tmp371;
                $tmp365 = ((panda$core$String*) $tmp366);
                name364 = $tmp365;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
                panda$core$Panda$unref$panda$core$Object($tmp366);
                panda$core$String$Index$nullable $tmp374 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(name364, &$s373);
                index372 = $tmp374;
                memset(&symbolName375, 0, sizeof(symbolName375));
                if (((panda$core$Bit) { index372.nonnull }).value) {
                {
                    {
                        $tmp376 = cl204;
                        panda$core$Bit$init$builtin_bit(&$tmp381, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp380, ((panda$core$String$Index$nullable) { .nonnull = false }), index372, $tmp381);
                        panda$core$String* $tmp382 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name364, $tmp380);
                        $tmp379 = $tmp382;
                        org$pandalanguage$pandac$ClassDecl* $tmp383 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp379);
                        $tmp378 = $tmp383;
                        $tmp377 = $tmp378;
                        cl204 = $tmp377;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
                    }
                    {
                        $tmp384 = symbolName375;
                        panda$core$String$Index $tmp388 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(name364, ((panda$core$String$Index) index372.value));
                        panda$core$Bit$init$builtin_bit(&$tmp389, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp387, ((panda$core$String$Index$nullable) { $tmp388, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp389);
                        panda$core$String* $tmp390 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(name364, $tmp387);
                        $tmp386 = $tmp390;
                        $tmp385 = $tmp386;
                        symbolName375 = $tmp385;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                    }
                }
                }
                else {
                {
                    {
                        $tmp391 = cl204;
                        $tmp392 = self->context;
                        cl204 = $tmp392;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                    }
                    {
                        $tmp393 = symbolName375;
                        $tmp394 = name364;
                        symbolName375 = $tmp394;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                    }
                }
                }
                if (((panda$core$Bit) { cl204 != NULL }).value) {
                {
                    int $tmp397;
                    {
                        org$pandalanguage$pandac$SymbolTable* $tmp402 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self->compiler, cl204);
                        $tmp401 = $tmp402;
                        org$pandalanguage$pandac$Symbol* $tmp403 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp401, symbolName375);
                        $tmp400 = $tmp403;
                        $tmp399 = $tmp400;
                        s398 = $tmp399;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                        if (((panda$core$Bit) { s398 == NULL }).value) {
                        {
                            $tmp404 = NULL;
                            $returnValue200 = $tmp404;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
                            $tmp397 = 0;
                            goto $l395;
                            $l405:;
                            $tmp288 = 2;
                            goto $l286;
                            $l406:;
                            $tmp192 = 7;
                            goto $l190;
                            $l407:;
                            return $returnValue200;
                        }
                        }
                        {
                            $match$151_17409 = s398->kind;
                            panda$core$Int64$init$builtin_int64(&$tmp410, 3);
                            panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$151_17409.$rawValue, $tmp410);
                            if ($tmp411.value) {
                            {
                                panda$core$Bit $tmp413 = (($fn412) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$MethodDecl*) s398), ((panda$collections$ListView*) parameters289));
                                if ($tmp413.value) {
                                {
                                    panda$core$String* $tmp417 = (($fn416) self->$class->vtable[6])(self, s398);
                                    $tmp415 = $tmp417;
                                    $tmp414 = $tmp415;
                                    $returnValue200 = $tmp414;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                                    $tmp397 = 1;
                                    goto $l395;
                                    $l418:;
                                    $tmp288 = 3;
                                    goto $l286;
                                    $l419:;
                                    $tmp192 = 8;
                                    goto $l190;
                                    $l420:;
                                    return $returnValue200;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp422, 4);
                            panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$151_17409.$rawValue, $tmp422);
                            if ($tmp423.value) {
                            {
                                {
                                    int $tmp426;
                                    {
                                        ITable* $tmp430 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s398)->methods)->$class->itable;
                                        while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp430 = $tmp430->next;
                                        }
                                        $fn432 $tmp431 = $tmp430->methods[0];
                                        panda$collections$Iterator* $tmp433 = $tmp431(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s398)->methods));
                                        $tmp429 = $tmp433;
                                        $tmp428 = $tmp429;
                                        Iter$157$25427 = $tmp428;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                                        $l434:;
                                        ITable* $tmp437 = Iter$157$25427->$class->itable;
                                        while ($tmp437->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp437 = $tmp437->next;
                                        }
                                        $fn439 $tmp438 = $tmp437->methods[0];
                                        panda$core$Bit $tmp440 = $tmp438(Iter$157$25427);
                                        panda$core$Bit $tmp441 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp440);
                                        bool $tmp436 = $tmp441.value;
                                        if (!$tmp436) goto $l435;
                                        {
                                            int $tmp444;
                                            {
                                                ITable* $tmp448 = Iter$157$25427->$class->itable;
                                                while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp448 = $tmp448->next;
                                                }
                                                $fn450 $tmp449 = $tmp448->methods[1];
                                                panda$core$Object* $tmp451 = $tmp449(Iter$157$25427);
                                                $tmp447 = $tmp451;
                                                $tmp446 = ((org$pandalanguage$pandac$MethodDecl*) $tmp447);
                                                m445 = $tmp446;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
                                                panda$core$Panda$unref$panda$core$Object($tmp447);
                                                panda$core$Bit $tmp453 = (($fn452) self->$class->vtable[2])(self, m445, ((panda$collections$ListView*) parameters289));
                                                if ($tmp453.value) {
                                                {
                                                    panda$core$String* $tmp457 = (($fn456) self->$class->vtable[5])(self, m445);
                                                    $tmp455 = $tmp457;
                                                    $tmp454 = $tmp455;
                                                    $returnValue200 = $tmp454;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                                                    $tmp444 = 0;
                                                    goto $l442;
                                                    $l458:;
                                                    $tmp426 = 0;
                                                    goto $l424;
                                                    $l459:;
                                                    $tmp397 = 2;
                                                    goto $l395;
                                                    $l460:;
                                                    $tmp288 = 4;
                                                    goto $l286;
                                                    $l461:;
                                                    $tmp192 = 9;
                                                    goto $l190;
                                                    $l462:;
                                                    return $returnValue200;
                                                }
                                                }
                                            }
                                            $tmp444 = -1;
                                            goto $l442;
                                            $l442:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m445));
                                            m445 = NULL;
                                            switch ($tmp444) {
                                                case -1: goto $l464;
                                                case 0: goto $l458;
                                            }
                                            $l464:;
                                        }
                                        goto $l434;
                                        $l435:;
                                    }
                                    $tmp426 = -1;
                                    goto $l424;
                                    $l424:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$157$25427));
                                    Iter$157$25427 = NULL;
                                    switch ($tmp426) {
                                        case -1: goto $l465;
                                        case 0: goto $l459;
                                    }
                                    $l465:;
                                }
                            }
                            }
                            }
                        }
                        $tmp466 = NULL;
                        $returnValue200 = $tmp466;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                        $tmp397 = 3;
                        goto $l395;
                        $l467:;
                        $tmp288 = 5;
                        goto $l286;
                        $l468:;
                        $tmp192 = 10;
                        goto $l190;
                        $l469:;
                        return $returnValue200;
                    }
                    $l395:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s398));
                    s398 = NULL;
                    switch ($tmp397) {
                        case 3: goto $l467;
                        case 0: goto $l405;
                        case 2: goto $l460;
                        case 1: goto $l418;
                    }
                    $l471:;
                }
                }
            }
            $tmp288 = -1;
            goto $l286;
            $l286:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) symbolName375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters289));
            parameters289 = NULL;
            name364 = NULL;
            switch ($tmp288) {
                case 2: goto $l406;
                case 3: goto $l419;
                case 5: goto $l468;
                case -1: goto $l472;
                case 1: goto $l356;
                case 4: goto $l461;
                case 0: goto $l343;
            }
            $l472:;
        }
        }
        $tmp473 = NULL;
        $returnValue200 = $tmp473;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
        $tmp192 = 11;
        goto $l190;
        $l474:;
        return $returnValue200;
    }
    $l190:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl204));
    cl204 = NULL;
    parsed279 = NULL;
    switch ($tmp192) {
        case 1: goto $l212;
        case 8: goto $l420;
        case 2: goto $l235;
        case 6: goto $l357;
        case 11: goto $l474;
        case 5: goto $l344;
        case 4: goto $l276;
        case 7: goto $l407;
        case 9: goto $l462;
        case 3: goto $l269;
        case 10: goto $l469;
        case 0: goto $l202;
    }
    $l476:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* self) {
    int $tmp479;
    {
    }
    $tmp479 = -1;
    goto $l477;
    $l477:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp479) {
        case -1: goto $l480;
    }
    $l480:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->context));
}

