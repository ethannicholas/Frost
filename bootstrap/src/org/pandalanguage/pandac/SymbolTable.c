#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/String.h"
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


org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$collections$Iterator* (*$fn37)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn49)(panda$collections$Iterator*);
typedef void (*$fn54)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn55)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn64)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn76)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn92)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn98)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn104)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn131)(panda$collections$Iterator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->symbols = $tmp1;
    panda$collections$HashMap* $tmp3 = (panda$collections$HashMap*) malloc(56);
    $tmp3->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp3->refCount.value = 1;
    panda$collections$HashMap$init($tmp3);
    self->merged = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) malloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->parents = $tmp5;
    self->compiler = p_compiler;
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) malloc(56);
    $tmp7->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp7->refCount.value = 1;
    panda$collections$HashMap$init($tmp7);
    self->symbols = $tmp7;
    panda$collections$HashMap* $tmp9 = (panda$collections$HashMap*) malloc(56);
    $tmp9->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp9->refCount.value = 1;
    panda$collections$HashMap$init($tmp9);
    self->merged = $tmp9;
    panda$collections$Array* $tmp11 = (panda$collections$Array*) malloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    self->parents = $tmp11;
    self->compiler = p_parent->compiler;
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old13;
    panda$collections$Array* methods16;
    panda$collections$Array* methods21;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp14 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    old13 = ((org$pandalanguage$pandac$Symbol*) $tmp14);
    if (((panda$core$Bit) { old13 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        return;
    }
    }
    panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp15.value) {
    {
        switch (old13->kind.value) {
            case 204:
            {
                panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
                $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp17->refCount.value = 1;
                panda$collections$Array$init($tmp17);
                methods16 = $tmp17;
                panda$collections$Array$add$panda$collections$Array$T(methods16, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods16, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old13)));
                org$pandalanguage$pandac$Methods* $tmp19 = (org$pandalanguage$pandac$Methods*) malloc(64);
                $tmp19->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp19->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp19, ((panda$collections$ListView*) methods16));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp19)));
                return;
            }
            break;
            case 205:
            {
                panda$collections$Array* $tmp22 = (panda$collections$Array*) malloc(40);
                $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp22->refCount.value = 1;
                panda$collections$Array$init($tmp22);
                methods21 = $tmp22;
                panda$collections$Array$add$panda$collections$Array$T(methods21, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods21, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old13)->methods));
                org$pandalanguage$pandac$Methods* $tmp24 = (org$pandalanguage$pandac$Methods*) malloc(64);
                $tmp24->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp24->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp24, ((panda$collections$ListView*) methods21));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp24)));
                return;
            }
            break;
        }
    }
    }
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s26, p_name);
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s28);
    org$pandalanguage$pandac$Position$wrapper* $tmp30;
    $tmp30 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    $tmp30->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp30->refCount = 1;
    $tmp30->value = old13->position;
    panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp29, ((panda$core$Object*) $tmp30));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp31);
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter34;
    org$pandalanguage$pandac$MethodDecl* test46;
    panda$core$Bit $tmp32 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp33 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp32);
    if ($tmp33.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp35 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$collections$Iterator* $tmp38 = $tmp36(((panda$collections$Iterable*) p_methods));
        test$Iter34 = $tmp38;
        $l39:;
        ITable* $tmp41 = test$Iter34->$class->itable;
        while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp41 = $tmp41->next;
        }
        $fn43 $tmp42 = $tmp41->methods[0];
        panda$core$Bit $tmp44 = $tmp42(test$Iter34);
        panda$core$Bit $tmp45 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp44);
        if (!$tmp45.value) goto $l40;
        {
            ITable* $tmp47 = test$Iter34->$class->itable;
            while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp47 = $tmp47->next;
            }
            $fn49 $tmp48 = $tmp47->methods[1];
            panda$core$Object* $tmp50 = $tmp48(test$Iter34);
            test46 = ((org$pandalanguage$pandac$MethodDecl*) $tmp50);
            org$pandalanguage$pandac$MethodDecl* $tmp51 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test46);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp51) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l39;
        $l40:;
    }
    ITable* $tmp52 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp52->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp52 = $tmp52->next;
    }
    $fn54 $tmp53 = $tmp52->methods[0];
    $tmp53(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$collections$Array* methods58;
    panda$collections$Iterator* m$Iter61;
    org$pandalanguage$pandac$MethodDecl* m73;
    panda$collections$Array* methods81;
    panda$collections$Array* methods86;
    panda$collections$Iterator* m$Iter89;
    org$pandalanguage$pandac$MethodDecl* m101;
    panda$collections$Array* methods108;
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
    panda$core$Bit $tmp56 = (($fn55) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp57 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp56);
    if ($tmp57.value) {
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
                    panda$collections$Array* $tmp59 = (panda$collections$Array*) malloc(40);
                    $tmp59->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp59->refCount.value = 1;
                    panda$collections$Array$init($tmp59);
                    methods58 = $tmp59;
                    panda$collections$Array$add$panda$collections$Array$T(methods58, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp62 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp62 = $tmp62->next;
                        }
                        $fn64 $tmp63 = $tmp62->methods[0];
                        panda$collections$Iterator* $tmp65 = $tmp63(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter61 = $tmp65;
                        $l66:;
                        ITable* $tmp68 = m$Iter61->$class->itable;
                        while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp68 = $tmp68->next;
                        }
                        $fn70 $tmp69 = $tmp68->methods[0];
                        panda$core$Bit $tmp71 = $tmp69(m$Iter61);
                        panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
                        if (!$tmp72.value) goto $l67;
                        {
                            ITable* $tmp74 = m$Iter61->$class->itable;
                            while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp74 = $tmp74->next;
                            }
                            $fn76 $tmp75 = $tmp74->methods[1];
                            panda$core$Object* $tmp77 = $tmp75(m$Iter61);
                            m73 = ((org$pandalanguage$pandac$MethodDecl*) $tmp77);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m73, ((panda$collections$List*) methods58));
                        }
                        goto $l66;
                        $l67:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp78 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp78->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp78->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp78, ((panda$collections$ListView*) methods58));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp78);
                }
                break;
                case 204:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp80 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp80) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp82 = (panda$collections$Array*) malloc(40);
                    $tmp82->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp82->refCount.value = 1;
                    panda$collections$Array$init($tmp82);
                    methods81 = $tmp82;
                    panda$collections$Array$add$panda$collections$Array$T(methods81, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods81, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp84 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp84->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp84->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp84, ((panda$collections$ListView*) methods81));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp84);
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
                    panda$collections$Array* $tmp87 = (panda$collections$Array*) malloc(40);
                    $tmp87->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp87->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp87, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods86 = $tmp87;
                    {
                        ITable* $tmp90 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp90 = $tmp90->next;
                        }
                        $fn92 $tmp91 = $tmp90->methods[0];
                        panda$collections$Iterator* $tmp93 = $tmp91(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter89 = $tmp93;
                        $l94:;
                        ITable* $tmp96 = m$Iter89->$class->itable;
                        while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp96 = $tmp96->next;
                        }
                        $fn98 $tmp97 = $tmp96->methods[0];
                        panda$core$Bit $tmp99 = $tmp97(m$Iter89);
                        panda$core$Bit $tmp100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp99);
                        if (!$tmp100.value) goto $l95;
                        {
                            ITable* $tmp102 = m$Iter89->$class->itable;
                            while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp102 = $tmp102->next;
                            }
                            $fn104 $tmp103 = $tmp102->methods[1];
                            panda$core$Object* $tmp105 = $tmp103(m$Iter89);
                            m101 = ((org$pandalanguage$pandac$MethodDecl*) $tmp105);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m101, ((panda$collections$List*) methods86));
                        }
                        goto $l94;
                        $l95:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp106 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp106->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp106->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp106, ((panda$collections$ListView*) methods86));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp106);
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp109 = (panda$collections$Array*) malloc(40);
                    $tmp109->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp109->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp109, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods108 = $tmp109;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods108));
                    org$pandalanguage$pandac$Methods* $tmp111 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp111->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp111->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp111, ((panda$collections$ListView*) methods108));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp111);
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
    org$pandalanguage$pandac$Symbol* result113;
    panda$collections$Iterator* p$Iter116;
    org$pandalanguage$pandac$SymbolTable* p128;
    panda$core$Object* $tmp114 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result113 = ((org$pandalanguage$pandac$Symbol*) $tmp114);
    if (((panda$core$Bit) { result113 == NULL }).value) {
    {
        panda$core$Object* $tmp115 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
        result113 = ((org$pandalanguage$pandac$Symbol*) $tmp115);
        {
            ITable* $tmp117 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp117 = $tmp117->next;
            }
            $fn119 $tmp118 = $tmp117->methods[0];
            panda$collections$Iterator* $tmp120 = $tmp118(((panda$collections$Iterable*) self->parents));
            p$Iter116 = $tmp120;
            $l121:;
            ITable* $tmp123 = p$Iter116->$class->itable;
            while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp123 = $tmp123->next;
            }
            $fn125 $tmp124 = $tmp123->methods[0];
            panda$core$Bit $tmp126 = $tmp124(p$Iter116);
            panda$core$Bit $tmp127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp126);
            if (!$tmp127.value) goto $l122;
            {
                ITable* $tmp129 = p$Iter116->$class->itable;
                while ($tmp129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp129 = $tmp129->next;
                }
                $fn131 $tmp130 = $tmp129->methods[1];
                panda$core$Object* $tmp132 = $tmp130(p$Iter116);
                p128 = ((org$pandalanguage$pandac$SymbolTable*) $tmp132);
                org$pandalanguage$pandac$Symbol* $tmp133 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p128, p_name);
                org$pandalanguage$pandac$Symbol* $tmp134 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result113, $tmp133);
                result113 = $tmp134;
            }
            goto $l121;
            $l122:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result113));
    }
    }
    return result113;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp136 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp137;
    $tmp137 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp137->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp137->refCount = 1;
    $tmp137->value = $tmp136;
    panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s135, ((panda$core$Object*) $tmp137));
    panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s139);
    panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp140, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
    return $tmp143;
}

