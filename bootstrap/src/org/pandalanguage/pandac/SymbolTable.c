#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "panda/core/Weak.h"
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

typedef panda$core$Object* (*$fn18)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn31)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn45)(panda$core$Weak*);
typedef void (*$fn50)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn51)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn59)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn65)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn71)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn75)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn93)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn99)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn125)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        self->compiler = $tmp5;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
    panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp6);
    self->symbols = $tmp6;
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    self->merged = $tmp7;
    panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp8);
    self->parents = $tmp8;
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
    org$pandalanguage$pandac$Symbol* old9;
    panda$collections$Array* methods12;
    panda$collections$Array* methods15;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp10 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    old9 = ((org$pandalanguage$pandac$Symbol*) $tmp10);
    if (((panda$core$Bit) { old9 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old9));
            return;
        }
    }
    }
    panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp11.value) {
    {
        switch (old9->kind.value) {
            case 204:
            {
                panda$collections$Array* $tmp13 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp13);
                methods12 = $tmp13;
                panda$collections$Array$add$panda$collections$Array$T(methods12, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods12, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old9)));
                org$pandalanguage$pandac$Methods* $tmp14 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp14, ((panda$collections$ListView*) methods12));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp14)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods12));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old9));
                        return;
                    }
                }
            }
            break;
            case 205:
            {
                panda$collections$Array* $tmp16 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp16);
                methods15 = $tmp16;
                panda$collections$Array$add$panda$collections$Array$T(methods15, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods15, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old9)->methods));
                org$pandalanguage$pandac$Methods* $tmp17 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp17, ((panda$collections$ListView*) methods15));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp17)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods15));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old9));
                        return;
                    }
                }
            }
            break;
        }
    }
    }
    panda$core$Object* $tmp19 = (($fn18) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s20, p_name);
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s22);
    org$pandalanguage$pandac$Position$wrapper* $tmp24;
    $tmp24 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
    $tmp24->value = old9->position;
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp23, ((panda$core$Object*) $tmp24));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp19), p_s->position, $tmp25);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old9));
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$61$928;
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
        Iter$61$928 = $tmp32;
        $l33:;
        ITable* $tmp35 = Iter$61$928->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$core$Bit $tmp38 = $tmp36(Iter$61$928);
        panda$core$Bit $tmp39 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp38);
        if (!$tmp39.value) goto $l34;
        {
            ITable* $tmp41 = Iter$61$928->$class->itable;
            while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp41 = $tmp41->next;
            }
            $fn43 $tmp42 = $tmp41->methods[1];
            panda$core$Object* $tmp44 = $tmp42(Iter$61$928);
            test40 = ((org$pandalanguage$pandac$MethodDecl*) $tmp44);
            panda$core$Object* $tmp46 = (($fn45) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$MethodDecl* $tmp47 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp46), test40);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp47) == ((panda$core$Object*) p_m) }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test40));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$928));
                        return;
                    }
                }
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test40));
        }
        goto $l33;
        $l34:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$928));
    }
    ITable* $tmp48 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp48->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp48 = $tmp48->next;
    }
    $fn50 $tmp49 = $tmp48->methods[0];
    $tmp49(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$collections$Array* methods54;
    panda$collections$Iterator* Iter$89$2556;
    org$pandalanguage$pandac$MethodDecl* m68;
    org$pandalanguage$pandac$Symbol* tmp173;
    panda$collections$Array* methods78;
    org$pandalanguage$pandac$Symbol* tmp280;
    panda$collections$Array* methods82;
    panda$collections$Iterator* Iter$109$2584;
    org$pandalanguage$pandac$MethodDecl* m96;
    org$pandalanguage$pandac$Symbol* tmp3101;
    panda$collections$Array* methods103;
    org$pandalanguage$pandac$Symbol* tmp4105;
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
    panda$core$Bit $tmp52 = (($fn51) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp53 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp52);
    if ($tmp53.value) {
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
                    panda$collections$Array* $tmp55 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp55);
                    methods54 = $tmp55;
                    panda$collections$Array$add$panda$collections$Array$T(methods54, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp57 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp57 = $tmp57->next;
                        }
                        $fn59 $tmp58 = $tmp57->methods[0];
                        panda$collections$Iterator* $tmp60 = $tmp58(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        Iter$89$2556 = $tmp60;
                        $l61:;
                        ITable* $tmp63 = Iter$89$2556->$class->itable;
                        while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp63 = $tmp63->next;
                        }
                        $fn65 $tmp64 = $tmp63->methods[0];
                        panda$core$Bit $tmp66 = $tmp64(Iter$89$2556);
                        panda$core$Bit $tmp67 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp66);
                        if (!$tmp67.value) goto $l62;
                        {
                            ITable* $tmp69 = Iter$89$2556->$class->itable;
                            while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp69 = $tmp69->next;
                            }
                            $fn71 $tmp70 = $tmp69->methods[1];
                            panda$core$Object* $tmp72 = $tmp70(Iter$89$2556);
                            m68 = ((org$pandalanguage$pandac$MethodDecl*) $tmp72);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m68, ((panda$collections$List*) methods54));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m68));
                        }
                        goto $l61;
                        $l62:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$89$2556));
                    }
                    {
                        org$pandalanguage$pandac$Methods* $tmp74 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp74, ((panda$collections$ListView*) methods54));
                        tmp173 = ((org$pandalanguage$pandac$Symbol*) $tmp74);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods54));
                        return tmp173;
                    }
                }
                break;
                case 204:
                {
                    panda$core$Object* $tmp76 = (($fn75) self->compiler->$class->vtable[2])(self->compiler);
                    org$pandalanguage$pandac$MethodDecl* $tmp77 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp76), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
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
                    {
                        org$pandalanguage$pandac$Methods* $tmp81 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp81, ((panda$collections$ListView*) methods78));
                        tmp280 = ((org$pandalanguage$pandac$Symbol*) $tmp81);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods78));
                        return tmp280;
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
                    panda$collections$Array* $tmp83 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp83, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods82 = $tmp83;
                    {
                        ITable* $tmp85 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp85 = $tmp85->next;
                        }
                        $fn87 $tmp86 = $tmp85->methods[0];
                        panda$collections$Iterator* $tmp88 = $tmp86(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        Iter$109$2584 = $tmp88;
                        $l89:;
                        ITable* $tmp91 = Iter$109$2584->$class->itable;
                        while ($tmp91->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp91 = $tmp91->next;
                        }
                        $fn93 $tmp92 = $tmp91->methods[0];
                        panda$core$Bit $tmp94 = $tmp92(Iter$109$2584);
                        panda$core$Bit $tmp95 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp94);
                        if (!$tmp95.value) goto $l90;
                        {
                            ITable* $tmp97 = Iter$109$2584->$class->itable;
                            while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp97 = $tmp97->next;
                            }
                            $fn99 $tmp98 = $tmp97->methods[1];
                            panda$core$Object* $tmp100 = $tmp98(Iter$109$2584);
                            m96 = ((org$pandalanguage$pandac$MethodDecl*) $tmp100);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m96, ((panda$collections$List*) methods82));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m96));
                        }
                        goto $l89;
                        $l90:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$109$2584));
                    }
                    {
                        org$pandalanguage$pandac$Methods* $tmp102 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp102, ((panda$collections$ListView*) methods82));
                        tmp3101 = ((org$pandalanguage$pandac$Symbol*) $tmp102);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods82));
                        return tmp3101;
                    }
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp104 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp104, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods103 = $tmp104;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods103));
                    {
                        org$pandalanguage$pandac$Methods* $tmp106 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp106, ((panda$collections$ListView*) methods103));
                        tmp4105 = ((org$pandalanguage$pandac$Symbol*) $tmp106);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods103));
                        return tmp4105;
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
    org$pandalanguage$pandac$Symbol* result107;
    panda$collections$Iterator* Iter$129$13110;
    org$pandalanguage$pandac$SymbolTable* p122;
    org$pandalanguage$pandac$Symbol* tmp5129;
    panda$core$Object* $tmp108 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result107 = ((org$pandalanguage$pandac$Symbol*) $tmp108);
    if (((panda$core$Bit) { result107 == NULL }).value) {
    {
        {
            panda$core$Object* $tmp109 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            result107 = ((org$pandalanguage$pandac$Symbol*) $tmp109);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result107));
        }
        {
            ITable* $tmp111 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp111 = $tmp111->next;
            }
            $fn113 $tmp112 = $tmp111->methods[0];
            panda$collections$Iterator* $tmp114 = $tmp112(((panda$collections$Iterable*) self->parents));
            Iter$129$13110 = $tmp114;
            $l115:;
            ITable* $tmp117 = Iter$129$13110->$class->itable;
            while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp117 = $tmp117->next;
            }
            $fn119 $tmp118 = $tmp117->methods[0];
            panda$core$Bit $tmp120 = $tmp118(Iter$129$13110);
            panda$core$Bit $tmp121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp120);
            if (!$tmp121.value) goto $l116;
            {
                ITable* $tmp123 = Iter$129$13110->$class->itable;
                while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp123 = $tmp123->next;
                }
                $fn125 $tmp124 = $tmp123->methods[1];
                panda$core$Object* $tmp126 = $tmp124(Iter$129$13110);
                p122 = ((org$pandalanguage$pandac$SymbolTable*) $tmp126);
                {
                    org$pandalanguage$pandac$Symbol* $tmp127 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p122, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp128 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result107, $tmp127);
                    result107 = $tmp128;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result107));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p122));
            }
            goto $l115;
            $l116:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$129$13110));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result107));
    }
    }
    {
        tmp5129 = result107;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result107));
        return tmp5129;
    }
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp131 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp132;
    $tmp132 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp132->value = $tmp131;
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s130, ((panda$core$Object*) $tmp132));
    panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp135, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s137);
    return $tmp138;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

