#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionWriter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, org$pandalanguage$pandac$SymbolTable$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$collections$Iterator* (*$fn31)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);
typedef void (*$fn48)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn49)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn61)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn67)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn73)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn89)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn101)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn126)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp2);
    self->symbols = $tmp2;
    panda$collections$HashMap* $tmp3 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp3);
    self->merged = $tmp3;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4);
    self->parents = $tmp4;
    {
        self->compiler = p_compiler;
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp5 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp5);
    self->symbols = $tmp5;
    panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp6);
    self->merged = $tmp6;
    panda$collections$Array* $tmp7 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp7);
    self->parents = $tmp7;
    {
        self->compiler = p_parent->compiler;
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old8;
    panda$core$Int64 $match$38_1711;
    panda$collections$Array* methods13;
    panda$collections$Array* methods17;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp9 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    old8 = ((org$pandalanguage$pandac$Symbol*) $tmp9);
    if (((panda$core$Bit) { old8 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
            return;
        }
    }
    }
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp10.value) {
    {
        {
            $match$38_1711 = old8->kind;
            panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1711, ((panda$core$Int64) { 204 }));
            if ($tmp12.value) {
            {
                panda$collections$Array* $tmp14 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp14);
                methods13 = $tmp14;
                panda$collections$Array$add$panda$collections$Array$T(methods13, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods13, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old8)));
                org$pandalanguage$pandac$Methods* $tmp15 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp15, ((panda$collections$ListView*) methods13));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp15)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
                    return;
                }
            }
            }
            else {
            panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1711, ((panda$core$Int64) { 205 }));
            if ($tmp16.value) {
            {
                panda$collections$Array* $tmp18 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp18);
                methods17 = $tmp18;
                panda$collections$Array$add$panda$collections$Array$T(methods17, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods17, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old8)->methods));
                org$pandalanguage$pandac$Methods* $tmp19 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp19, ((panda$collections$ListView*) methods17));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp19)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
                    return;
                }
            }
            }
            }
        }
    }
    }
    panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s20, p_name);
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s22);
    org$pandalanguage$pandac$Position$wrapper* $tmp24;
    $tmp24 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
    $tmp24->value = old8->position;
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp23, ((panda$core$Object*) $tmp24));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp25);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter28;
    org$pandalanguage$pandac$MethodDecl* test40;
    panda$core$Bit $tmp26 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
    if ($tmp27.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp29 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$collections$Iterator* $tmp32 = $tmp30(((panda$collections$Iterable*) p_methods));
        test$Iter28 = $tmp32;
        $l33:;
        ITable* $tmp35 = test$Iter28->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$core$Bit $tmp38 = $tmp36(test$Iter28);
        panda$core$Bit $tmp39 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp38);
        if (!$tmp39.value) goto $l34;
        {
            ITable* $tmp41 = test$Iter28->$class->itable;
            while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp41 = $tmp41->next;
            }
            $fn43 $tmp42 = $tmp41->methods[1];
            panda$core$Object* $tmp44 = $tmp42(test$Iter28);
            test40 = ((org$pandalanguage$pandac$MethodDecl*) $tmp44);
            org$pandalanguage$pandac$MethodDecl* $tmp45 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test40);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp45) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l33;
        $l34:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    }
    ITable* $tmp46 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp46->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp46 = $tmp46->next;
    }
    $fn48 $tmp47 = $tmp46->methods[0];
    $tmp47(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$core$Int64 $match$84_1352;
    panda$core$Int64 $match$86_2154;
    panda$collections$Array* methods56;
    panda$collections$Iterator* m$Iter58;
    org$pandalanguage$pandac$MethodDecl* m70;
    panda$collections$Array* methods78;
    panda$core$Int64 $match$107_2182;
    panda$collections$Array* methods84;
    panda$collections$Iterator* m$Iter86;
    org$pandalanguage$pandac$MethodDecl* m98;
    panda$collections$Array* methods105;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        return p_symbol;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        return p_inherited;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        return p_symbol;
    }
    }
    panda$core$Bit $tmp50 = (($fn49) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp51 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp50);
    if ($tmp51.value) {
    {
        return p_symbol;
    }
    }
    {
        $match$84_1352 = p_symbol->kind;
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1352, ((panda$core$Int64) { 204 }));
        if ($tmp53.value) {
        {
            {
                $match$86_2154 = p_inherited->kind;
                panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2154, ((panda$core$Int64) { 205 }));
                if ($tmp55.value) {
                {
                    panda$collections$Array* $tmp57 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp57);
                    methods56 = $tmp57;
                    panda$collections$Array$add$panda$collections$Array$T(methods56, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp59 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp59 = $tmp59->next;
                        }
                        $fn61 $tmp60 = $tmp59->methods[0];
                        panda$collections$Iterator* $tmp62 = $tmp60(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter58 = $tmp62;
                        $l63:;
                        ITable* $tmp65 = m$Iter58->$class->itable;
                        while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp65 = $tmp65->next;
                        }
                        $fn67 $tmp66 = $tmp65->methods[0];
                        panda$core$Bit $tmp68 = $tmp66(m$Iter58);
                        panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
                        if (!$tmp69.value) goto $l64;
                        {
                            ITable* $tmp71 = m$Iter58->$class->itable;
                            while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp71 = $tmp71->next;
                            }
                            $fn73 $tmp72 = $tmp71->methods[1];
                            panda$core$Object* $tmp74 = $tmp72(m$Iter58);
                            m70 = ((org$pandalanguage$pandac$MethodDecl*) $tmp74);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m70, ((panda$collections$List*) methods56));
                        }
                        goto $l63;
                        $l64:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
                    }
                    org$pandalanguage$pandac$Methods* $tmp75 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp75, ((panda$collections$ListView*) methods56));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp75);
                }
                }
                else {
                panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2154, ((panda$core$Int64) { 204 }));
                if ($tmp76.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp77 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp77) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp79 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp79);
                    methods78 = $tmp79;
                    panda$collections$Array$add$panda$collections$Array$T(methods78, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods78, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp80 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp80, ((panda$collections$ListView*) methods78));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp80);
                }
                }
                else {
                {
                    return p_symbol;
                }
                }
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1352, ((panda$core$Int64) { 205 }));
        if ($tmp81.value) {
        {
            {
                $match$107_2182 = p_inherited->kind;
                panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_2182, ((panda$core$Int64) { 205 }));
                if ($tmp83.value) {
                {
                    panda$collections$Array* $tmp85 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp85, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods84 = $tmp85;
                    {
                        ITable* $tmp87 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp87->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp87 = $tmp87->next;
                        }
                        $fn89 $tmp88 = $tmp87->methods[0];
                        panda$collections$Iterator* $tmp90 = $tmp88(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter86 = $tmp90;
                        $l91:;
                        ITable* $tmp93 = m$Iter86->$class->itable;
                        while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp93 = $tmp93->next;
                        }
                        $fn95 $tmp94 = $tmp93->methods[0];
                        panda$core$Bit $tmp96 = $tmp94(m$Iter86);
                        panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
                        if (!$tmp97.value) goto $l92;
                        {
                            ITable* $tmp99 = m$Iter86->$class->itable;
                            while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp99 = $tmp99->next;
                            }
                            $fn101 $tmp100 = $tmp99->methods[1];
                            panda$core$Object* $tmp102 = $tmp100(m$Iter86);
                            m98 = ((org$pandalanguage$pandac$MethodDecl*) $tmp102);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m98, ((panda$collections$List*) methods84));
                        }
                        goto $l91;
                        $l92:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
                    }
                    org$pandalanguage$pandac$Methods* $tmp103 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp103, ((panda$collections$ListView*) methods84));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp103);
                }
                }
                else {
                panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_2182, ((panda$core$Int64) { 204 }));
                if ($tmp104.value) {
                {
                    panda$collections$Array* $tmp106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp106, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods105 = $tmp106;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods105));
                    org$pandalanguage$pandac$Methods* $tmp107 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp107, ((panda$collections$ListView*) methods105));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp107);
                }
                }
                else {
                {
                    return p_symbol;
                }
                }
                }
            }
        }
        }
        else {
        {
            return p_symbol;
        }
        }
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result108;
    panda$collections$Iterator* p$Iter111;
    org$pandalanguage$pandac$SymbolTable* p123;
    org$pandalanguage$pandac$Symbol* tmp1130;
    panda$core$Object* $tmp109 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result108 = ((org$pandalanguage$pandac$Symbol*) $tmp109);
    if (((panda$core$Bit) { result108 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result108));
            panda$core$Object* $tmp110 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            result108 = ((org$pandalanguage$pandac$Symbol*) $tmp110);
        }
        {
            ITable* $tmp112 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp112 = $tmp112->next;
            }
            $fn114 $tmp113 = $tmp112->methods[0];
            panda$collections$Iterator* $tmp115 = $tmp113(((panda$collections$Iterable*) self->parents));
            p$Iter111 = $tmp115;
            $l116:;
            ITable* $tmp118 = p$Iter111->$class->itable;
            while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp118 = $tmp118->next;
            }
            $fn120 $tmp119 = $tmp118->methods[0];
            panda$core$Bit $tmp121 = $tmp119(p$Iter111);
            panda$core$Bit $tmp122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp121);
            if (!$tmp122.value) goto $l117;
            {
                ITable* $tmp124 = p$Iter111->$class->itable;
                while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp124 = $tmp124->next;
                }
                $fn126 $tmp125 = $tmp124->methods[1];
                panda$core$Object* $tmp127 = $tmp125(p$Iter111);
                p123 = ((org$pandalanguage$pandac$SymbolTable*) $tmp127);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result108));
                    org$pandalanguage$pandac$Symbol* $tmp128 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p123, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp129 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result108, $tmp128);
                    result108 = $tmp129;
                }
            }
            goto $l116;
            $l117:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result108));
    }
    }
    {
        tmp1130 = result108;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result108));
        return tmp1130;
    }
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp132 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp133;
    $tmp133 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp133->value = $tmp132;
    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s131, ((panda$core$Object*) $tmp133));
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
    panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp136, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
    return $tmp139;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

