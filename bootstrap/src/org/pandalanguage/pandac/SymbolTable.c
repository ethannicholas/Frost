#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
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

typedef panda$collections$Iterator* (*$fn28)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn40)(panda$collections$Iterator*);
typedef void (*$fn45)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn46)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn54)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn60)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn66)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn80)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn86)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn92)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn106)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn118)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old8;
    panda$collections$Array* methods11;
    panda$collections$Array* methods14;
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
        switch (old8->kind.value) {
            case 204:
            {
                panda$collections$Array* $tmp12 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp12);
                methods11 = $tmp12;
                panda$collections$Array$add$panda$collections$Array$T(methods11, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods11, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old8)));
                org$pandalanguage$pandac$Methods* $tmp13 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp13, ((panda$collections$ListView*) methods11));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp13)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods11));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
                        return;
                    }
                }
            }
            break;
            case 205:
            {
                panda$collections$Array* $tmp15 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp15);
                methods14 = $tmp15;
                panda$collections$Array$add$panda$collections$Array$T(methods14, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods14, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old8)->methods));
                org$pandalanguage$pandac$Methods* $tmp16 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp16, ((panda$collections$ListView*) methods14));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp16)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods14));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
                        return;
                    }
                }
            }
            break;
        }
    }
    }
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s17, p_name);
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s19);
    org$pandalanguage$pandac$Position$wrapper* $tmp21;
    $tmp21 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
    $tmp21->value = old8->position;
    panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp20, ((panda$core$Object*) $tmp21));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp22);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old8));
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$61$925;
    org$pandalanguage$pandac$MethodDecl* test37;
    panda$core$Bit $tmp23 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
    if ($tmp24.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp26 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp26 = $tmp26->next;
        }
        $fn28 $tmp27 = $tmp26->methods[0];
        panda$collections$Iterator* $tmp29 = $tmp27(((panda$collections$Iterable*) p_methods));
        Iter$61$925 = $tmp29;
        $l30:;
        ITable* $tmp32 = Iter$61$925->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(Iter$61$925);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if (!$tmp36.value) goto $l31;
        {
            ITable* $tmp38 = Iter$61$925->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[1];
            panda$core$Object* $tmp41 = $tmp39(Iter$61$925);
            test37 = ((org$pandalanguage$pandac$MethodDecl*) $tmp41);
            org$pandalanguage$pandac$MethodDecl* $tmp42 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test37);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp42) == ((panda$core$Object*) p_m) }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test37));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$925));
                        return;
                    }
                }
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test37));
        }
        goto $l30;
        $l31:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$925));
    }
    ITable* $tmp43 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp43->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp43 = $tmp43->next;
    }
    $fn45 $tmp44 = $tmp43->methods[0];
    $tmp44(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$collections$Array* methods49;
    panda$collections$Iterator* Iter$89$2551;
    org$pandalanguage$pandac$MethodDecl* m63;
    org$pandalanguage$pandac$Symbol* tmp168;
    panda$collections$Array* methods71;
    org$pandalanguage$pandac$Symbol* tmp273;
    panda$collections$Array* methods75;
    panda$collections$Iterator* Iter$109$2577;
    org$pandalanguage$pandac$MethodDecl* m89;
    org$pandalanguage$pandac$Symbol* tmp394;
    panda$collections$Array* methods96;
    org$pandalanguage$pandac$Symbol* tmp498;
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
    panda$core$Bit $tmp47 = (($fn46) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
    if ($tmp48.value) {
    {
        return p_symbol;
    }
    }
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    panda$collections$Array* $tmp50 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp50);
                    methods49 = $tmp50;
                    panda$collections$Array$add$panda$collections$Array$T(methods49, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp52 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp52 = $tmp52->next;
                        }
                        $fn54 $tmp53 = $tmp52->methods[0];
                        panda$collections$Iterator* $tmp55 = $tmp53(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        Iter$89$2551 = $tmp55;
                        $l56:;
                        ITable* $tmp58 = Iter$89$2551->$class->itable;
                        while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp58 = $tmp58->next;
                        }
                        $fn60 $tmp59 = $tmp58->methods[0];
                        panda$core$Bit $tmp61 = $tmp59(Iter$89$2551);
                        panda$core$Bit $tmp62 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp61);
                        if (!$tmp62.value) goto $l57;
                        {
                            ITable* $tmp64 = Iter$89$2551->$class->itable;
                            while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp64 = $tmp64->next;
                            }
                            $fn66 $tmp65 = $tmp64->methods[1];
                            panda$core$Object* $tmp67 = $tmp65(Iter$89$2551);
                            m63 = ((org$pandalanguage$pandac$MethodDecl*) $tmp67);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m63, ((panda$collections$List*) methods49));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m63));
                        }
                        goto $l56;
                        $l57:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$89$2551));
                    }
                    {
                        org$pandalanguage$pandac$Methods* $tmp69 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp69, ((panda$collections$ListView*) methods49));
                        tmp168 = ((org$pandalanguage$pandac$Symbol*) $tmp69);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods49));
                        return tmp168;
                    }
                }
                break;
                case 204:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp70 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp70) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp72 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp72);
                    methods71 = $tmp72;
                    panda$collections$Array$add$panda$collections$Array$T(methods71, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods71, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    {
                        org$pandalanguage$pandac$Methods* $tmp74 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp74, ((panda$collections$ListView*) methods71));
                        tmp273 = ((org$pandalanguage$pandac$Symbol*) $tmp74);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods71));
                        return tmp273;
                    }
                }
                break;
                default:
                {
                    return p_symbol;
                }
            }
        }
        break;
        case 205:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    panda$collections$Array* $tmp76 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp76, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods75 = $tmp76;
                    {
                        ITable* $tmp78 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp78->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp78 = $tmp78->next;
                        }
                        $fn80 $tmp79 = $tmp78->methods[0];
                        panda$collections$Iterator* $tmp81 = $tmp79(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        Iter$109$2577 = $tmp81;
                        $l82:;
                        ITable* $tmp84 = Iter$109$2577->$class->itable;
                        while ($tmp84->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp84 = $tmp84->next;
                        }
                        $fn86 $tmp85 = $tmp84->methods[0];
                        panda$core$Bit $tmp87 = $tmp85(Iter$109$2577);
                        panda$core$Bit $tmp88 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp87);
                        if (!$tmp88.value) goto $l83;
                        {
                            ITable* $tmp90 = Iter$109$2577->$class->itable;
                            while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp90 = $tmp90->next;
                            }
                            $fn92 $tmp91 = $tmp90->methods[1];
                            panda$core$Object* $tmp93 = $tmp91(Iter$109$2577);
                            m89 = ((org$pandalanguage$pandac$MethodDecl*) $tmp93);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m89, ((panda$collections$List*) methods75));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m89));
                        }
                        goto $l82;
                        $l83:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$109$2577));
                    }
                    {
                        org$pandalanguage$pandac$Methods* $tmp95 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp95, ((panda$collections$ListView*) methods75));
                        tmp394 = ((org$pandalanguage$pandac$Symbol*) $tmp95);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods75));
                        return tmp394;
                    }
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp97 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp97, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods96 = $tmp97;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods96));
                    {
                        org$pandalanguage$pandac$Methods* $tmp99 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp99, ((panda$collections$ListView*) methods96));
                        tmp498 = ((org$pandalanguage$pandac$Symbol*) $tmp99);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods96));
                        return tmp498;
                    }
                }
                break;
                default:
                {
                    return p_symbol;
                }
            }
        }
        break;
        default:
        {
            return p_symbol;
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result100;
    panda$collections$Iterator* Iter$129$13103;
    org$pandalanguage$pandac$SymbolTable* p115;
    org$pandalanguage$pandac$Symbol* tmp5122;
    panda$core$Object* $tmp101 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result100 = ((org$pandalanguage$pandac$Symbol*) $tmp101);
    if (((panda$core$Bit) { result100 == NULL }).value) {
    {
        {
            panda$core$Object* $tmp102 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            result100 = ((org$pandalanguage$pandac$Symbol*) $tmp102);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result100));
        }
        {
            ITable* $tmp104 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp104 = $tmp104->next;
            }
            $fn106 $tmp105 = $tmp104->methods[0];
            panda$collections$Iterator* $tmp107 = $tmp105(((panda$collections$Iterable*) self->parents));
            Iter$129$13103 = $tmp107;
            $l108:;
            ITable* $tmp110 = Iter$129$13103->$class->itable;
            while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp110 = $tmp110->next;
            }
            $fn112 $tmp111 = $tmp110->methods[0];
            panda$core$Bit $tmp113 = $tmp111(Iter$129$13103);
            panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
            if (!$tmp114.value) goto $l109;
            {
                ITable* $tmp116 = Iter$129$13103->$class->itable;
                while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp116 = $tmp116->next;
                }
                $fn118 $tmp117 = $tmp116->methods[1];
                panda$core$Object* $tmp119 = $tmp117(Iter$129$13103);
                p115 = ((org$pandalanguage$pandac$SymbolTable*) $tmp119);
                {
                    org$pandalanguage$pandac$Symbol* $tmp120 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p115, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp121 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result100, $tmp120);
                    result100 = $tmp121;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result100));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p115));
            }
            goto $l108;
            $l109:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$129$13103));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result100));
    }
    }
    {
        tmp5122 = result100;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result100));
        return tmp5122;
    }
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp124 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp125;
    $tmp125 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp125->value = $tmp124;
    panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s123, ((panda$core$Object*) $tmp125));
    panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp126, &$s127);
    panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp128, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, &$s130);
    return $tmp131;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

