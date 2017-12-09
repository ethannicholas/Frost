#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/String.h"
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

typedef panda$collections$Iterator* (*$fn32)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn38)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn44)(panda$collections$Iterator*);
typedef void (*$fn49)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn50)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn59)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn65)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn71)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn93)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn99)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn125)(panda$collections$Iterator*);

static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6C\x69\x63\x61\x74\x65\x20\x73\x79\x6D\x62\x6F\x6C\x20\x27", 18, 1 };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6F\x75\x73\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6D\x62\x6F\x6C\x54\x61\x62\x6C\x65\x3C\x70\x61\x72\x65\x6E\x74\x73\x28", 20, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20\x73\x79\x6D\x62\x6F\x6C\x73\x3D", 11, 1 };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->symbols = $tmp1;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) malloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3->refCount.value = 1;
    panda$collections$Array$init($tmp3);
    self->parents = $tmp3;
    self->compiler = p_compiler;
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp5 = (panda$collections$HashMap*) malloc(56);
    $tmp5->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp5->refCount.value = 1;
    panda$collections$HashMap$init($tmp5);
    self->symbols = $tmp5;
    panda$collections$Array* $tmp7 = (panda$collections$Array*) malloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp7->refCount.value = 1;
    panda$collections$Array$init($tmp7);
    self->parents = $tmp7;
    self->compiler = p_parent->compiler;
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old9;
    panda$collections$Array* methods12;
    panda$collections$Array* methods17;
    panda$core$Object* $tmp10 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    old9 = ((org$pandalanguage$pandac$Symbol*) $tmp10);
    if (((panda$core$Bit) { old9 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        return;
    }
    }
    panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp11.value) {
    {
        switch (old9->kind.value) {
            case 204:
            {
                panda$collections$Array* $tmp13 = (panda$collections$Array*) malloc(40);
                $tmp13->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp13->refCount.value = 1;
                panda$collections$Array$init($tmp13);
                methods12 = $tmp13;
                panda$collections$Array$add$panda$collections$Array$T(methods12, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods12, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old9)));
                org$pandalanguage$pandac$Methods* $tmp15 = (org$pandalanguage$pandac$Methods*) malloc(64);
                $tmp15->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp15->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp15, ((panda$collections$ListView*) methods12));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp15)));
                return;
            }
            break;
            case 205:
            {
                panda$collections$Array* $tmp18 = (panda$collections$Array*) malloc(40);
                $tmp18->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp18->refCount.value = 1;
                panda$collections$Array$init($tmp18);
                methods17 = $tmp18;
                panda$collections$Array$add$panda$collections$Array$T(methods17, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods17, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old9)->methods));
                org$pandalanguage$pandac$Methods* $tmp20 = (org$pandalanguage$pandac$Methods*) malloc(64);
                $tmp20->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp20->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp20, ((panda$collections$ListView*) methods17));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp20)));
                return;
            }
            break;
        }
    }
    }
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s22, p_name);
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s24);
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp25, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(old9->position)));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp26);
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter29;
    org$pandalanguage$pandac$MethodDecl* test41;
    panda$core$Bit $tmp27 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
    if ($tmp28.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp30 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp30->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp30 = $tmp30->next;
        }
        $fn32 $tmp31 = $tmp30->methods[0];
        panda$collections$Iterator* $tmp33 = $tmp31(((panda$collections$Iterable*) p_methods));
        test$Iter29 = $tmp33;
        $l34:;
        ITable* $tmp36 = test$Iter29->$class->itable;
        while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp36 = $tmp36->next;
        }
        $fn38 $tmp37 = $tmp36->methods[0];
        panda$core$Bit $tmp39 = $tmp37(test$Iter29);
        panda$core$Bit $tmp40 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp39);
        if (!$tmp40.value) goto $l35;
        {
            ITable* $tmp42 = test$Iter29->$class->itable;
            while ($tmp42->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp42 = $tmp42->next;
            }
            $fn44 $tmp43 = $tmp42->methods[1];
            panda$core$Object* $tmp45 = $tmp43(test$Iter29);
            test41 = ((org$pandalanguage$pandac$MethodDecl*) $tmp45);
            org$pandalanguage$pandac$MethodDecl* $tmp46 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test41);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp46) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l34;
        $l35:;
    }
    ITable* $tmp47 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp47 = $tmp47->next;
    }
    $fn49 $tmp48 = $tmp47->methods[0];
    $tmp48(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$collections$Array* methods53;
    panda$collections$Iterator* m$Iter56;
    org$pandalanguage$pandac$MethodDecl* m68;
    panda$collections$Array* methods76;
    panda$collections$Array* methods81;
    panda$collections$Iterator* m$Iter84;
    org$pandalanguage$pandac$MethodDecl* m96;
    panda$collections$Array* methods103;
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
    panda$core$Bit $tmp51 = (($fn50) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp52 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp51);
    if ($tmp52.value) {
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
                    panda$collections$Array* $tmp54 = (panda$collections$Array*) malloc(40);
                    $tmp54->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp54->refCount.value = 1;
                    panda$collections$Array$init($tmp54);
                    methods53 = $tmp54;
                    panda$collections$Array$add$panda$collections$Array$T(methods53, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp57 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp57 = $tmp57->next;
                        }
                        $fn59 $tmp58 = $tmp57->methods[0];
                        panda$collections$Iterator* $tmp60 = $tmp58(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter56 = $tmp60;
                        $l61:;
                        ITable* $tmp63 = m$Iter56->$class->itable;
                        while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp63 = $tmp63->next;
                        }
                        $fn65 $tmp64 = $tmp63->methods[0];
                        panda$core$Bit $tmp66 = $tmp64(m$Iter56);
                        panda$core$Bit $tmp67 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp66);
                        if (!$tmp67.value) goto $l62;
                        {
                            ITable* $tmp69 = m$Iter56->$class->itable;
                            while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp69 = $tmp69->next;
                            }
                            $fn71 $tmp70 = $tmp69->methods[1];
                            panda$core$Object* $tmp72 = $tmp70(m$Iter56);
                            m68 = ((org$pandalanguage$pandac$MethodDecl*) $tmp72);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m68, ((panda$collections$List*) methods53));
                        }
                        goto $l61;
                        $l62:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp73 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp73->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp73->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp73, ((panda$collections$ListView*) methods53));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp73);
                }
                break;
                case 204:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp75 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp75) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp77 = (panda$collections$Array*) malloc(40);
                    $tmp77->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp77->refCount.value = 1;
                    panda$collections$Array$init($tmp77);
                    methods76 = $tmp77;
                    panda$collections$Array$add$panda$collections$Array$T(methods76, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods76, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp79 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp79->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp79->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp79, ((panda$collections$ListView*) methods76));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp79);
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
                    panda$collections$Array* $tmp82 = (panda$collections$Array*) malloc(40);
                    $tmp82->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp82->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp82, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods81 = $tmp82;
                    {
                        ITable* $tmp85 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp85 = $tmp85->next;
                        }
                        $fn87 $tmp86 = $tmp85->methods[0];
                        panda$collections$Iterator* $tmp88 = $tmp86(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter84 = $tmp88;
                        $l89:;
                        ITable* $tmp91 = m$Iter84->$class->itable;
                        while ($tmp91->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp91 = $tmp91->next;
                        }
                        $fn93 $tmp92 = $tmp91->methods[0];
                        panda$core$Bit $tmp94 = $tmp92(m$Iter84);
                        panda$core$Bit $tmp95 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp94);
                        if (!$tmp95.value) goto $l90;
                        {
                            ITable* $tmp97 = m$Iter84->$class->itable;
                            while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp97 = $tmp97->next;
                            }
                            $fn99 $tmp98 = $tmp97->methods[1];
                            panda$core$Object* $tmp100 = $tmp98(m$Iter84);
                            m96 = ((org$pandalanguage$pandac$MethodDecl*) $tmp100);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m96, ((panda$collections$List*) methods81));
                        }
                        goto $l89;
                        $l90:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp101 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp101->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp101->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp101, ((panda$collections$ListView*) methods81));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp101);
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp104 = (panda$collections$Array*) malloc(40);
                    $tmp104->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp104->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp104, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods103 = $tmp104;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods103));
                    org$pandalanguage$pandac$Methods* $tmp106 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp106->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp106->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp106, ((panda$collections$ListView*) methods103));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp106);
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
    org$pandalanguage$pandac$Symbol* result108;
    panda$collections$Iterator* p$Iter110;
    org$pandalanguage$pandac$SymbolTable* p122;
    panda$core$Object* $tmp109 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    result108 = ((org$pandalanguage$pandac$Symbol*) $tmp109);
    {
        ITable* $tmp111 = ((panda$collections$Iterable*) self->parents)->$class->itable;
        while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp111 = $tmp111->next;
        }
        $fn113 $tmp112 = $tmp111->methods[0];
        panda$collections$Iterator* $tmp114 = $tmp112(((panda$collections$Iterable*) self->parents));
        p$Iter110 = $tmp114;
        $l115:;
        ITable* $tmp117 = p$Iter110->$class->itable;
        while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp117 = $tmp117->next;
        }
        $fn119 $tmp118 = $tmp117->methods[0];
        panda$core$Bit $tmp120 = $tmp118(p$Iter110);
        panda$core$Bit $tmp121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp120);
        if (!$tmp121.value) goto $l116;
        {
            ITable* $tmp123 = p$Iter110->$class->itable;
            while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp123 = $tmp123->next;
            }
            $fn125 $tmp124 = $tmp123->methods[1];
            panda$core$Object* $tmp126 = $tmp124(p$Iter110);
            p122 = ((org$pandalanguage$pandac$SymbolTable*) $tmp126);
            org$pandalanguage$pandac$Symbol* $tmp127 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p122, p_name);
            org$pandalanguage$pandac$Symbol* $tmp128 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result108, $tmp127);
            result108 = $tmp128;
        }
        goto $l115;
        $l116:;
    }
    return result108;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp130 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s129, ((panda$core$Object*) wrap_panda$core$Int64($tmp130)));
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp133, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
    return $tmp136;
}

