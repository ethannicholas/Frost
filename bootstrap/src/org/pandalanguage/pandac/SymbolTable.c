#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/String.h"
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


org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, org$pandalanguage$pandac$SymbolTable$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$collections$Iterator* (*$fn40)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn46)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn52)(panda$collections$Iterator*);
typedef void (*$fn57)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn58)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn77)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn115)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn143)(panda$collections$Iterator*);

static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->symbols = $tmp1;
    panda$collections$HashMap* $tmp3 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp3->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp3->refCount.value = 1;
    panda$collections$HashMap$init($tmp3);
    self->merged = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->parents = $tmp5;
    {
        self->compiler = p_compiler;
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp7->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp7->refCount.value = 1;
    panda$collections$HashMap$init($tmp7);
    self->symbols = $tmp7;
    panda$collections$HashMap* $tmp9 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp9->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp9->refCount.value = 1;
    panda$collections$HashMap$init($tmp9);
    self->merged = $tmp9;
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    self->parents = $tmp11;
    {
        self->compiler = p_parent->compiler;
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old13;
    panda$core$Int64 $match$38_1716;
    panda$collections$Array* methods18;
    panda$collections$Array* methods24;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp14 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    old13 = ((org$pandalanguage$pandac$Symbol*) $tmp14);
    if (((panda$core$Bit) { old13 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old13));
            return;
        }
    }
    }
    panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp15.value) {
    {
        {
            $match$38_1716 = old13->kind;
            panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1716, ((panda$core$Int64) { 204 }));
            if ($tmp17.value) {
            {
                panda$collections$Array* $tmp19 = (panda$collections$Array*) pandaZAlloc(40);
                $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp19->refCount.value = 1;
                panda$collections$Array$init($tmp19);
                methods18 = $tmp19;
                panda$collections$Array$add$panda$collections$Array$T(methods18, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods18, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old13)));
                org$pandalanguage$pandac$Methods* $tmp21 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                $tmp21->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp21->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp21, ((panda$collections$ListView*) methods18));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp21)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old13));
                    return;
                }
            }
            }
            else {
            panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1716, ((panda$core$Int64) { 205 }));
            if ($tmp23.value) {
            {
                panda$collections$Array* $tmp25 = (panda$collections$Array*) pandaZAlloc(40);
                $tmp25->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp25->refCount.value = 1;
                panda$collections$Array$init($tmp25);
                methods24 = $tmp25;
                panda$collections$Array$add$panda$collections$Array$T(methods24, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods24, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old13)->methods));
                org$pandalanguage$pandac$Methods* $tmp27 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                $tmp27->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp27->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp27, ((panda$collections$ListView*) methods24));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp27)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old13));
                    return;
                }
            }
            }
            }
        }
    }
    }
    panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s29, p_name);
    panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s31);
    org$pandalanguage$pandac$Position$wrapper* $tmp33;
    $tmp33 = (org$pandalanguage$pandac$Position$wrapper*) pandaZAlloc(32);
    $tmp33->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp33->refCount = 1;
    $tmp33->value = old13->position;
    panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp32, ((panda$core$Object*) $tmp33));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp34);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old13));
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter37;
    org$pandalanguage$pandac$MethodDecl* test49;
    panda$core$Bit $tmp35 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
    if ($tmp36.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp38 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$collections$Iterator* $tmp41 = $tmp39(((panda$collections$Iterable*) p_methods));
        test$Iter37 = $tmp41;
        $l42:;
        ITable* $tmp44 = test$Iter37->$class->itable;
        while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp44 = $tmp44->next;
        }
        $fn46 $tmp45 = $tmp44->methods[0];
        panda$core$Bit $tmp47 = $tmp45(test$Iter37);
        panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
        if (!$tmp48.value) goto $l43;
        {
            ITable* $tmp50 = test$Iter37->$class->itable;
            while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp50 = $tmp50->next;
            }
            $fn52 $tmp51 = $tmp50->methods[1];
            panda$core$Object* $tmp53 = $tmp51(test$Iter37);
            test49 = ((org$pandalanguage$pandac$MethodDecl*) $tmp53);
            org$pandalanguage$pandac$MethodDecl* $tmp54 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test49);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp54) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l42;
        $l43:;
    }
    ITable* $tmp55 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp55->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp55 = $tmp55->next;
    }
    $fn57 $tmp56 = $tmp55->methods[0];
    $tmp56(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$core$Int64 $match$84_1361;
    panda$core$Int64 $match$86_2163;
    panda$collections$Array* methods65;
    panda$collections$Iterator* m$Iter68;
    org$pandalanguage$pandac$MethodDecl* m80;
    panda$collections$Array* methods89;
    panda$core$Int64 $match$107_2195;
    panda$collections$Array* methods97;
    panda$collections$Iterator* m$Iter100;
    org$pandalanguage$pandac$MethodDecl* m112;
    panda$collections$Array* methods120;
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
    panda$core$Bit $tmp59 = (($fn58) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp60 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp59);
    if ($tmp60.value) {
    {
        return p_symbol;
    }
    }
    {
        $match$84_1361 = p_symbol->kind;
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1361, ((panda$core$Int64) { 204 }));
        if ($tmp62.value) {
        {
            {
                $match$86_2163 = p_inherited->kind;
                panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2163, ((panda$core$Int64) { 205 }));
                if ($tmp64.value) {
                {
                    panda$collections$Array* $tmp66 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp66->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp66->refCount.value = 1;
                    panda$collections$Array$init($tmp66);
                    methods65 = $tmp66;
                    panda$collections$Array$add$panda$collections$Array$T(methods65, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp69 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp69 = $tmp69->next;
                        }
                        $fn71 $tmp70 = $tmp69->methods[0];
                        panda$collections$Iterator* $tmp72 = $tmp70(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter68 = $tmp72;
                        $l73:;
                        ITable* $tmp75 = m$Iter68->$class->itable;
                        while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp75 = $tmp75->next;
                        }
                        $fn77 $tmp76 = $tmp75->methods[0];
                        panda$core$Bit $tmp78 = $tmp76(m$Iter68);
                        panda$core$Bit $tmp79 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp78);
                        if (!$tmp79.value) goto $l74;
                        {
                            ITable* $tmp81 = m$Iter68->$class->itable;
                            while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp81 = $tmp81->next;
                            }
                            $fn83 $tmp82 = $tmp81->methods[1];
                            panda$core$Object* $tmp84 = $tmp82(m$Iter68);
                            m80 = ((org$pandalanguage$pandac$MethodDecl*) $tmp84);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m80, ((panda$collections$List*) methods65));
                        }
                        goto $l73;
                        $l74:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp85 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp85->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp85->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp85, ((panda$collections$ListView*) methods65));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp85);
                }
                }
                else {
                panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2163, ((panda$core$Int64) { 204 }));
                if ($tmp87.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp88 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp88) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp90 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp90->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp90->refCount.value = 1;
                    panda$collections$Array$init($tmp90);
                    methods89 = $tmp90;
                    panda$collections$Array$add$panda$collections$Array$T(methods89, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods89, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp92 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp92->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp92->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp92, ((panda$collections$ListView*) methods89));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp92);
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
        panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1361, ((panda$core$Int64) { 205 }));
        if ($tmp94.value) {
        {
            {
                $match$107_2195 = p_inherited->kind;
                panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_2195, ((panda$core$Int64) { 205 }));
                if ($tmp96.value) {
                {
                    panda$collections$Array* $tmp98 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp98->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp98->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp98, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods97 = $tmp98;
                    {
                        ITable* $tmp101 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp101 = $tmp101->next;
                        }
                        $fn103 $tmp102 = $tmp101->methods[0];
                        panda$collections$Iterator* $tmp104 = $tmp102(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter100 = $tmp104;
                        $l105:;
                        ITable* $tmp107 = m$Iter100->$class->itable;
                        while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp107 = $tmp107->next;
                        }
                        $fn109 $tmp108 = $tmp107->methods[0];
                        panda$core$Bit $tmp110 = $tmp108(m$Iter100);
                        panda$core$Bit $tmp111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp110);
                        if (!$tmp111.value) goto $l106;
                        {
                            ITable* $tmp113 = m$Iter100->$class->itable;
                            while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp113 = $tmp113->next;
                            }
                            $fn115 $tmp114 = $tmp113->methods[1];
                            panda$core$Object* $tmp116 = $tmp114(m$Iter100);
                            m112 = ((org$pandalanguage$pandac$MethodDecl*) $tmp116);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m112, ((panda$collections$List*) methods97));
                        }
                        goto $l105;
                        $l106:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp117 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp117->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp117->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp117, ((panda$collections$ListView*) methods97));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp117);
                }
                }
                else {
                panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_2195, ((panda$core$Int64) { 204 }));
                if ($tmp119.value) {
                {
                    panda$collections$Array* $tmp121 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp121->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp121->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp121, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods120 = $tmp121;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods120));
                    org$pandalanguage$pandac$Methods* $tmp123 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp123->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp123, ((panda$collections$ListView*) methods120));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp123);
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
    org$pandalanguage$pandac$Symbol* result125;
    panda$collections$Iterator* p$Iter128;
    org$pandalanguage$pandac$SymbolTable* p140;
    org$pandalanguage$pandac$Symbol* tmp1147;
    panda$core$Object* $tmp126 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result125 = ((org$pandalanguage$pandac$Symbol*) $tmp126);
    if (((panda$core$Bit) { result125 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result125));
            panda$core$Object* $tmp127 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            result125 = ((org$pandalanguage$pandac$Symbol*) $tmp127);
        }
        {
            ITable* $tmp129 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp129 = $tmp129->next;
            }
            $fn131 $tmp130 = $tmp129->methods[0];
            panda$collections$Iterator* $tmp132 = $tmp130(((panda$collections$Iterable*) self->parents));
            p$Iter128 = $tmp132;
            $l133:;
            ITable* $tmp135 = p$Iter128->$class->itable;
            while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp135 = $tmp135->next;
            }
            $fn137 $tmp136 = $tmp135->methods[0];
            panda$core$Bit $tmp138 = $tmp136(p$Iter128);
            panda$core$Bit $tmp139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp138);
            if (!$tmp139.value) goto $l134;
            {
                ITable* $tmp141 = p$Iter128->$class->itable;
                while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp141 = $tmp141->next;
                }
                $fn143 $tmp142 = $tmp141->methods[1];
                panda$core$Object* $tmp144 = $tmp142(p$Iter128);
                p140 = ((org$pandalanguage$pandac$SymbolTable*) $tmp144);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result125));
                    org$pandalanguage$pandac$Symbol* $tmp145 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p140, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp146 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result125, $tmp145);
                    result125 = $tmp146;
                }
            }
            goto $l133;
            $l134:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result125));
    }
    }
    {
        tmp1147 = result125;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result125));
        return tmp1147;
    }
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp149 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp150;
    $tmp150 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp150->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp150->refCount = 1;
    $tmp150->value = $tmp149;
    panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s148, ((panda$core$Object*) $tmp150));
    panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s152);
    panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp153, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, &$s155);
    return $tmp156;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

