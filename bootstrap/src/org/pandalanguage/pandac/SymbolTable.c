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

typedef panda$collections$Iterator* (*$fn41)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn47)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn53)(panda$collections$Iterator*);
typedef void (*$fn58)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn59)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn72)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn84)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn116)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn144)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp2->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp2->refCount.value = 1;
    panda$collections$HashMap$init($tmp2);
    self->symbols = $tmp2;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp4->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp4->refCount.value = 1;
    panda$collections$HashMap$init($tmp4);
    self->merged = $tmp4;
    panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp6->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6->refCount.value = 1;
    panda$collections$Array$init($tmp6);
    self->parents = $tmp6;
    {
        self->compiler = p_compiler;
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp8 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp8->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp8->refCount.value = 1;
    panda$collections$HashMap$init($tmp8);
    self->symbols = $tmp8;
    panda$collections$HashMap* $tmp10 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp10->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp10->refCount.value = 1;
    panda$collections$HashMap$init($tmp10);
    self->merged = $tmp10;
    panda$collections$Array* $tmp12 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp12->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp12->refCount.value = 1;
    panda$collections$Array$init($tmp12);
    self->parents = $tmp12;
    {
        self->compiler = p_parent->compiler;
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old14;
    panda$core$Int64 $match$38_1717;
    panda$collections$Array* methods19;
    panda$collections$Array* methods25;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp15 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    old14 = ((org$pandalanguage$pandac$Symbol*) $tmp15);
    if (((panda$core$Bit) { old14 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old14));
            return;
        }
    }
    }
    panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp16.value) {
    {
        {
            $match$38_1717 = old14->kind;
            panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1717, ((panda$core$Int64) { 204 }));
            if ($tmp18.value) {
            {
                panda$collections$Array* $tmp20 = (panda$collections$Array*) pandaZAlloc(40);
                $tmp20->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp20->refCount.value = 1;
                panda$collections$Array$init($tmp20);
                methods19 = $tmp20;
                panda$collections$Array$add$panda$collections$Array$T(methods19, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods19, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old14)));
                org$pandalanguage$pandac$Methods* $tmp22 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                $tmp22->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp22->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp22, ((panda$collections$ListView*) methods19));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp22)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old14));
                    return;
                }
            }
            }
            else {
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1717, ((panda$core$Int64) { 205 }));
            if ($tmp24.value) {
            {
                panda$collections$Array* $tmp26 = (panda$collections$Array*) pandaZAlloc(40);
                $tmp26->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp26->refCount.value = 1;
                panda$collections$Array$init($tmp26);
                methods25 = $tmp26;
                panda$collections$Array$add$panda$collections$Array$T(methods25, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods25, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old14)->methods));
                org$pandalanguage$pandac$Methods* $tmp28 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                $tmp28->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp28->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp28, ((panda$collections$ListView*) methods25));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp28)));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old14));
                    return;
                }
            }
            }
            }
        }
    }
    }
    panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s30, p_name);
    panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, &$s32);
    org$pandalanguage$pandac$Position$wrapper* $tmp34;
    $tmp34 = (org$pandalanguage$pandac$Position$wrapper*) pandaZAlloc(32);
    $tmp34->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp34->refCount = 1;
    $tmp34->value = old14->position;
    panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp33, ((panda$core$Object*) $tmp34));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp35);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old14));
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter38;
    org$pandalanguage$pandac$MethodDecl* test50;
    panda$core$Bit $tmp36 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
    if ($tmp37.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp39 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp39->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp39 = $tmp39->next;
        }
        $fn41 $tmp40 = $tmp39->methods[0];
        panda$collections$Iterator* $tmp42 = $tmp40(((panda$collections$Iterable*) p_methods));
        test$Iter38 = $tmp42;
        $l43:;
        ITable* $tmp45 = test$Iter38->$class->itable;
        while ($tmp45->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp45 = $tmp45->next;
        }
        $fn47 $tmp46 = $tmp45->methods[0];
        panda$core$Bit $tmp48 = $tmp46(test$Iter38);
        panda$core$Bit $tmp49 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp48);
        if (!$tmp49.value) goto $l44;
        {
            ITable* $tmp51 = test$Iter38->$class->itable;
            while ($tmp51->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp51 = $tmp51->next;
            }
            $fn53 $tmp52 = $tmp51->methods[1];
            panda$core$Object* $tmp54 = $tmp52(test$Iter38);
            test50 = ((org$pandalanguage$pandac$MethodDecl*) $tmp54);
            org$pandalanguage$pandac$MethodDecl* $tmp55 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test50);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp55) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l43;
        $l44:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    }
    ITable* $tmp56 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp56->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp56 = $tmp56->next;
    }
    $fn58 $tmp57 = $tmp56->methods[0];
    $tmp57(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$core$Int64 $match$84_1362;
    panda$core$Int64 $match$86_2164;
    panda$collections$Array* methods66;
    panda$collections$Iterator* m$Iter69;
    org$pandalanguage$pandac$MethodDecl* m81;
    panda$collections$Array* methods90;
    panda$core$Int64 $match$107_2196;
    panda$collections$Array* methods98;
    panda$collections$Iterator* m$Iter101;
    org$pandalanguage$pandac$MethodDecl* m113;
    panda$collections$Array* methods121;
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
    panda$core$Bit $tmp60 = (($fn59) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp61 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp60);
    if ($tmp61.value) {
    {
        return p_symbol;
    }
    }
    {
        $match$84_1362 = p_symbol->kind;
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1362, ((panda$core$Int64) { 204 }));
        if ($tmp63.value) {
        {
            {
                $match$86_2164 = p_inherited->kind;
                panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2164, ((panda$core$Int64) { 205 }));
                if ($tmp65.value) {
                {
                    panda$collections$Array* $tmp67 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp67->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp67->refCount.value = 1;
                    panda$collections$Array$init($tmp67);
                    methods66 = $tmp67;
                    panda$collections$Array$add$panda$collections$Array$T(methods66, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp70 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp70 = $tmp70->next;
                        }
                        $fn72 $tmp71 = $tmp70->methods[0];
                        panda$collections$Iterator* $tmp73 = $tmp71(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter69 = $tmp73;
                        $l74:;
                        ITable* $tmp76 = m$Iter69->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$core$Bit $tmp79 = $tmp77(m$Iter69);
                        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
                        if (!$tmp80.value) goto $l75;
                        {
                            ITable* $tmp82 = m$Iter69->$class->itable;
                            while ($tmp82->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp82 = $tmp82->next;
                            }
                            $fn84 $tmp83 = $tmp82->methods[1];
                            panda$core$Object* $tmp85 = $tmp83(m$Iter69);
                            m81 = ((org$pandalanguage$pandac$MethodDecl*) $tmp85);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m81, ((panda$collections$List*) methods66));
                        }
                        goto $l74;
                        $l75:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
                    }
                    org$pandalanguage$pandac$Methods* $tmp86 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp86->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp86->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp86, ((panda$collections$ListView*) methods66));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp86);
                }
                }
                else {
                panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2164, ((panda$core$Int64) { 204 }));
                if ($tmp88.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp89 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp89) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp91 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp91->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp91->refCount.value = 1;
                    panda$collections$Array$init($tmp91);
                    methods90 = $tmp91;
                    panda$collections$Array$add$panda$collections$Array$T(methods90, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods90, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp93 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp93->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp93->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp93, ((panda$collections$ListView*) methods90));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp93);
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
        panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1362, ((panda$core$Int64) { 205 }));
        if ($tmp95.value) {
        {
            {
                $match$107_2196 = p_inherited->kind;
                panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_2196, ((panda$core$Int64) { 205 }));
                if ($tmp97.value) {
                {
                    panda$collections$Array* $tmp99 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp99->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp99->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp99, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods98 = $tmp99;
                    {
                        ITable* $tmp102 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp102 = $tmp102->next;
                        }
                        $fn104 $tmp103 = $tmp102->methods[0];
                        panda$collections$Iterator* $tmp105 = $tmp103(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter101 = $tmp105;
                        $l106:;
                        ITable* $tmp108 = m$Iter101->$class->itable;
                        while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp108 = $tmp108->next;
                        }
                        $fn110 $tmp109 = $tmp108->methods[0];
                        panda$core$Bit $tmp111 = $tmp109(m$Iter101);
                        panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
                        if (!$tmp112.value) goto $l107;
                        {
                            ITable* $tmp114 = m$Iter101->$class->itable;
                            while ($tmp114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp114 = $tmp114->next;
                            }
                            $fn116 $tmp115 = $tmp114->methods[1];
                            panda$core$Object* $tmp117 = $tmp115(m$Iter101);
                            m113 = ((org$pandalanguage$pandac$MethodDecl*) $tmp117);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m113, ((panda$collections$List*) methods98));
                        }
                        goto $l106;
                        $l107:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
                    }
                    org$pandalanguage$pandac$Methods* $tmp118 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp118->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp118->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp118, ((panda$collections$ListView*) methods98));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp118);
                }
                }
                else {
                panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_2196, ((panda$core$Int64) { 204 }));
                if ($tmp120.value) {
                {
                    panda$collections$Array* $tmp122 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp122->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp122->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp122, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods121 = $tmp122;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods121));
                    org$pandalanguage$pandac$Methods* $tmp124 = (org$pandalanguage$pandac$Methods*) pandaZAlloc(64);
                    $tmp124->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp124->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp124, ((panda$collections$ListView*) methods121));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp124);
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
    org$pandalanguage$pandac$Symbol* result126;
    panda$collections$Iterator* p$Iter129;
    org$pandalanguage$pandac$SymbolTable* p141;
    org$pandalanguage$pandac$Symbol* tmp1148;
    panda$core$Object* $tmp127 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result126 = ((org$pandalanguage$pandac$Symbol*) $tmp127);
    if (((panda$core$Bit) { result126 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result126));
            panda$core$Object* $tmp128 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            result126 = ((org$pandalanguage$pandac$Symbol*) $tmp128);
        }
        {
            ITable* $tmp130 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp130 = $tmp130->next;
            }
            $fn132 $tmp131 = $tmp130->methods[0];
            panda$collections$Iterator* $tmp133 = $tmp131(((panda$collections$Iterable*) self->parents));
            p$Iter129 = $tmp133;
            $l134:;
            ITable* $tmp136 = p$Iter129->$class->itable;
            while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp136 = $tmp136->next;
            }
            $fn138 $tmp137 = $tmp136->methods[0];
            panda$core$Bit $tmp139 = $tmp137(p$Iter129);
            panda$core$Bit $tmp140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp139);
            if (!$tmp140.value) goto $l135;
            {
                ITable* $tmp142 = p$Iter129->$class->itable;
                while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp142 = $tmp142->next;
                }
                $fn144 $tmp143 = $tmp142->methods[1];
                panda$core$Object* $tmp145 = $tmp143(p$Iter129);
                p141 = ((org$pandalanguage$pandac$SymbolTable*) $tmp145);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result126));
                    org$pandalanguage$pandac$Symbol* $tmp146 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p141, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp147 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result126, $tmp146);
                    result126 = $tmp147;
                }
            }
            goto $l134;
            $l135:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result126));
    }
    }
    {
        tmp1148 = result126;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result126));
        return tmp1148;
    }
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp150 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp151;
    $tmp151 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp151->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp151->refCount = 1;
    $tmp151->value = $tmp150;
    panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s149, ((panda$core$Object*) $tmp151));
    panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s153);
    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp154, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
    return $tmp157;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

