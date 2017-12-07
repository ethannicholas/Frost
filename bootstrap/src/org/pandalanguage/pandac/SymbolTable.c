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
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionWriter.h"


org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$collections$Iterator* (*$fn33)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn45)(panda$collections$Iterator*);
typedef void (*$fn50)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn51)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn60)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn66)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn72)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn94)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn100)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn126)(panda$collections$Iterator*);

static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6C\x69\x63\x61\x74\x65\x20\x73\x79\x6D\x62\x6F\x6C\x20\x27", 18, 1 };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6F\x75\x73\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6D\x62\x6F\x6C\x54\x61\x62\x6C\x65\x3C\x70\x61\x72\x65\x6E\x74\x73\x28", 20, 1 };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20\x73\x79\x6D\x62\x6F\x6C\x73\x3D", 11, 1 };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

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
                org$pandalanguage$pandac$Methods* $tmp15 = (org$pandalanguage$pandac$Methods*) malloc(48);
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
                org$pandalanguage$pandac$Methods* $tmp20 = (org$pandalanguage$pandac$Methods*) malloc(48);
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
    org$pandalanguage$pandac$Position* $tmp26 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, old9->offset);
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp25, ((panda$core$Object*) $tmp26));
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self->compiler, p_s->offset, $tmp27);
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter30;
    org$pandalanguage$pandac$MethodDecl* test42;
    panda$core$Bit $tmp28 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
    if ($tmp29.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp31 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp31 = $tmp31->next;
        }
        $fn33 $tmp32 = $tmp31->methods[0];
        panda$collections$Iterator* $tmp34 = $tmp32(((panda$collections$Iterable*) p_methods));
        test$Iter30 = $tmp34;
        $l35:;
        ITable* $tmp37 = test$Iter30->$class->itable;
        while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp37 = $tmp37->next;
        }
        $fn39 $tmp38 = $tmp37->methods[0];
        panda$core$Bit $tmp40 = $tmp38(test$Iter30);
        panda$core$Bit $tmp41 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp40);
        if (!$tmp41.value) goto $l36;
        {
            ITable* $tmp43 = test$Iter30->$class->itable;
            while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp43 = $tmp43->next;
            }
            $fn45 $tmp44 = $tmp43->methods[1];
            panda$core$Object* $tmp46 = $tmp44(test$Iter30);
            test42 = ((org$pandalanguage$pandac$MethodDecl*) $tmp46);
            org$pandalanguage$pandac$MethodDecl* $tmp47 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test42);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp47) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l35;
        $l36:;
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
    panda$collections$Iterator* m$Iter57;
    org$pandalanguage$pandac$MethodDecl* m69;
    panda$collections$Array* methods77;
    panda$collections$Array* methods82;
    panda$collections$Iterator* m$Iter85;
    org$pandalanguage$pandac$MethodDecl* m97;
    panda$collections$Array* methods104;
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
                    panda$collections$Array* $tmp55 = (panda$collections$Array*) malloc(40);
                    $tmp55->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp55->refCount.value = 1;
                    panda$collections$Array$init($tmp55);
                    methods54 = $tmp55;
                    panda$collections$Array$add$panda$collections$Array$T(methods54, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp58 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp58 = $tmp58->next;
                        }
                        $fn60 $tmp59 = $tmp58->methods[0];
                        panda$collections$Iterator* $tmp61 = $tmp59(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter57 = $tmp61;
                        $l62:;
                        ITable* $tmp64 = m$Iter57->$class->itable;
                        while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp64 = $tmp64->next;
                        }
                        $fn66 $tmp65 = $tmp64->methods[0];
                        panda$core$Bit $tmp67 = $tmp65(m$Iter57);
                        panda$core$Bit $tmp68 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp67);
                        if (!$tmp68.value) goto $l63;
                        {
                            ITable* $tmp70 = m$Iter57->$class->itable;
                            while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp70 = $tmp70->next;
                            }
                            $fn72 $tmp71 = $tmp70->methods[1];
                            panda$core$Object* $tmp73 = $tmp71(m$Iter57);
                            m69 = ((org$pandalanguage$pandac$MethodDecl*) $tmp73);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m69, ((panda$collections$List*) methods54));
                        }
                        goto $l62;
                        $l63:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp74 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp74->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp74->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp74, ((panda$collections$ListView*) methods54));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp74);
                }
                break;
                case 204:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp76 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp76) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp78 = (panda$collections$Array*) malloc(40);
                    $tmp78->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp78->refCount.value = 1;
                    panda$collections$Array$init($tmp78);
                    methods77 = $tmp78;
                    panda$collections$Array$add$panda$collections$Array$T(methods77, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods77, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp80 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp80->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp80->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp80, ((panda$collections$ListView*) methods77));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp80);
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
                    panda$collections$Array* $tmp83 = (panda$collections$Array*) malloc(40);
                    $tmp83->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp83->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp83, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods82 = $tmp83;
                    {
                        ITable* $tmp86 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp86 = $tmp86->next;
                        }
                        $fn88 $tmp87 = $tmp86->methods[0];
                        panda$collections$Iterator* $tmp89 = $tmp87(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter85 = $tmp89;
                        $l90:;
                        ITable* $tmp92 = m$Iter85->$class->itable;
                        while ($tmp92->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp92 = $tmp92->next;
                        }
                        $fn94 $tmp93 = $tmp92->methods[0];
                        panda$core$Bit $tmp95 = $tmp93(m$Iter85);
                        panda$core$Bit $tmp96 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp95);
                        if (!$tmp96.value) goto $l91;
                        {
                            ITable* $tmp98 = m$Iter85->$class->itable;
                            while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp98 = $tmp98->next;
                            }
                            $fn100 $tmp99 = $tmp98->methods[1];
                            panda$core$Object* $tmp101 = $tmp99(m$Iter85);
                            m97 = ((org$pandalanguage$pandac$MethodDecl*) $tmp101);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m97, ((panda$collections$List*) methods82));
                        }
                        goto $l90;
                        $l91:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp102 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp102->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp102->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp102, ((panda$collections$ListView*) methods82));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp102);
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp105 = (panda$collections$Array*) malloc(40);
                    $tmp105->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp105->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp105, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods104 = $tmp105;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods104));
                    org$pandalanguage$pandac$Methods* $tmp107 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp107->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp107, ((panda$collections$ListView*) methods104));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp107);
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
    org$pandalanguage$pandac$Symbol* result109;
    panda$collections$Iterator* p$Iter111;
    org$pandalanguage$pandac$SymbolTable* p123;
    panda$core$Object* $tmp110 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    result109 = ((org$pandalanguage$pandac$Symbol*) $tmp110);
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
            org$pandalanguage$pandac$Symbol* $tmp128 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p123, p_name);
            org$pandalanguage$pandac$Symbol* $tmp129 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result109, $tmp128);
            result109 = $tmp129;
        }
        goto $l116;
        $l117:;
    }
    return result109;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp131 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s130, ((panda$core$Object*) wrap_panda$core$Int64($tmp131)));
    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s133);
    panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp134, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
    return $tmp137;
}

