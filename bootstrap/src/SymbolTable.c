#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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

typedef void (*$fn9)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef panda$core$Object* (*$fn11)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn13)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn22)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn29)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$Position* (*$fn34)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn37)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn38)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn44)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn50)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn56)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn58)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn62)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn63)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn82)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn88)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn93)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn109)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn132)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn137)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn149)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Symbol* (*$fn151)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6C\x69\x63\x61\x74\x65\x20\x73\x79\x6D\x62\x6F\x6C\x20\x27", 18 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6F\x75\x73\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x77\x61\x73\x20\x61\x74\x20", 31 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6D\x62\x6F\x6C\x54\x61\x62\x6C\x65\x3C\x70\x61\x72\x65\x6E\x74\x73\x28", 20 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20\x73\x79\x6D\x62\x6F\x6C\x73\x3D", 11 };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };

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
    (($fn9) self->$class->vtable[3])(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old10;
    panda$core$Int64 $match$65715;
    panda$collections$Array* methods17;
    panda$collections$Array* methods24;
    panda$core$Object* $tmp12 = (($fn11) self->symbols->$class->vtable[3])(self->symbols, ((panda$core$Object*) ((panda$collections$Key*) p_name)));
    old10 = ((org$pandalanguage$pandac$Symbol*) $tmp12);
    if (((panda$core$Bit) { old10 == NULL }).value) {
    {
        (($fn13) self->symbols->$class->vtable[5])(self->symbols, ((panda$core$Object*) ((panda$collections$Key*) p_name)), ((panda$core$Object*) p_s));
        return;
    }
    }
    panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp14.value) {
    {
        {
            $match$65715 = old10->kind;
            panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$65715, ((panda$core$Int64) { 204 }));
            if ($tmp16.value) {
            {
                panda$collections$Array* $tmp18 = (panda$collections$Array*) malloc(40);
                $tmp18->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp18->refCount.value = 1;
                panda$collections$Array$init($tmp18);
                methods17 = $tmp18;
                panda$collections$Array$add$panda$collections$Array$T(methods17, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods17, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old10)));
                org$pandalanguage$pandac$Methods* $tmp20 = (org$pandalanguage$pandac$Methods*) malloc(48);
                $tmp20->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp20->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp20, ((panda$collections$ListView*) methods17));
                (($fn22) self->symbols->$class->vtable[5])(self->symbols, ((panda$core$Object*) ((panda$collections$Key*) p_name)), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp20)));
                return;
            }
            }
            else {
            panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$65715, ((panda$core$Int64) { 205 }));
            if ($tmp23.value) {
            {
                panda$collections$Array* $tmp25 = (panda$collections$Array*) malloc(40);
                $tmp25->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp25->refCount.value = 1;
                panda$collections$Array$init($tmp25);
                methods24 = $tmp25;
                panda$collections$Array$add$panda$collections$Array$T(methods24, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods24, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old10)->methods));
                org$pandalanguage$pandac$Methods* $tmp27 = (org$pandalanguage$pandac$Methods*) malloc(48);
                $tmp27->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp27->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp27, ((panda$collections$ListView*) methods24));
                (($fn29) self->symbols->$class->vtable[5])(self->symbols, ((panda$core$Object*) ((panda$collections$Key*) p_name)), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp27)));
                return;
            }
            }
            }
        }
    }
    }
    panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s30, p_name);
    panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, &$s32);
    org$pandalanguage$pandac$Position* $tmp35 = (($fn34) self->compiler->$class->vtable[94])(self->compiler, old10->offset);
    panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp33, ((panda$core$Object*) $tmp35));
    (($fn37) self->compiler->$class->vtable[95])(self->compiler, p_s->offset, $tmp36);
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter41;
    org$pandalanguage$pandac$MethodDecl* test53;
    panda$core$Bit $tmp39 = (($fn38) p_m->$class->vtable[2])(p_m);
    panda$core$Bit $tmp40 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp39);
    if ($tmp40.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp42 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp42->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp42 = $tmp42->next;
        }
        $fn44 $tmp43 = $tmp42->methods[0];
        panda$collections$Iterator* $tmp45 = $tmp43(((panda$collections$Iterable*) p_methods));
        test$Iter41 = $tmp45;
        $l46:;
        ITable* $tmp48 = test$Iter41->$class->itable;
        while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp48 = $tmp48->next;
        }
        $fn50 $tmp49 = $tmp48->methods[0];
        panda$core$Bit $tmp51 = $tmp49(test$Iter41);
        panda$core$Bit $tmp52 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp51);
        if (!$tmp52.value) goto $l47;
        {
            ITable* $tmp54 = test$Iter41->$class->itable;
            while ($tmp54->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp54 = $tmp54->next;
            }
            $fn56 $tmp55 = $tmp54->methods[1];
            panda$core$Object* $tmp57 = $tmp55(test$Iter41);
            test53 = ((org$pandalanguage$pandac$MethodDecl*) $tmp57);
            org$pandalanguage$pandac$MethodDecl* $tmp59 = (($fn58) self->compiler->$class->vtable[17])(self->compiler, test53);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp59) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l46;
        $l47:;
    }
    ITable* $tmp60 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp60->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp60 = $tmp60->next;
    }
    $fn62 $tmp61 = $tmp60->methods[0];
    $tmp61(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$core$Int64 $match$210266;
    panda$core$Int64 $match$217568;
    panda$collections$Array* methods70;
    panda$collections$Iterator* m$Iter73;
    org$pandalanguage$pandac$MethodDecl* m85;
    panda$collections$Array* methods95;
    panda$core$Int64 $match$3201101;
    panda$collections$Array* methods103;
    panda$collections$Iterator* m$Iter106;
    org$pandalanguage$pandac$MethodDecl* m118;
    panda$collections$Array* methods126;
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
    panda$core$Bit $tmp64 = (($fn63) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp65 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp64);
    if ($tmp65.value) {
    {
        return p_symbol;
    }
    }
    {
        $match$210266 = p_symbol->kind;
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210266, ((panda$core$Int64) { 204 }));
        if ($tmp67.value) {
        {
            {
                $match$217568 = p_inherited->kind;
                panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$217568, ((panda$core$Int64) { 205 }));
                if ($tmp69.value) {
                {
                    panda$collections$Array* $tmp71 = (panda$collections$Array*) malloc(40);
                    $tmp71->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp71->refCount.value = 1;
                    panda$collections$Array$init($tmp71);
                    methods70 = $tmp71;
                    panda$collections$Array$add$panda$collections$Array$T(methods70, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp74 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp74 = $tmp74->next;
                        }
                        $fn76 $tmp75 = $tmp74->methods[0];
                        panda$collections$Iterator* $tmp77 = $tmp75(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter73 = $tmp77;
                        $l78:;
                        ITable* $tmp80 = m$Iter73->$class->itable;
                        while ($tmp80->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp80 = $tmp80->next;
                        }
                        $fn82 $tmp81 = $tmp80->methods[0];
                        panda$core$Bit $tmp83 = $tmp81(m$Iter73);
                        panda$core$Bit $tmp84 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp83);
                        if (!$tmp84.value) goto $l79;
                        {
                            ITable* $tmp86 = m$Iter73->$class->itable;
                            while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp86 = $tmp86->next;
                            }
                            $fn88 $tmp87 = $tmp86->methods[1];
                            panda$core$Object* $tmp89 = $tmp87(m$Iter73);
                            m85 = ((org$pandalanguage$pandac$MethodDecl*) $tmp89);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m85, ((panda$collections$List*) methods70));
                        }
                        goto $l78;
                        $l79:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp90 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp90->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp90->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp90, ((panda$collections$ListView*) methods70));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp90);
                }
                }
                else {
                panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$217568, ((panda$core$Int64) { 204 }));
                if ($tmp92.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp94 = (($fn93) self->compiler->$class->vtable[17])(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp94) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp96 = (panda$collections$Array*) malloc(40);
                    $tmp96->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp96->refCount.value = 1;
                    panda$collections$Array$init($tmp96);
                    methods95 = $tmp96;
                    panda$collections$Array$add$panda$collections$Array$T(methods95, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods95, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp98 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp98->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp98->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp98, ((panda$collections$ListView*) methods95));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp98);
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
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210266, ((panda$core$Int64) { 205 }));
        if ($tmp100.value) {
        {
            {
                $match$3201101 = p_inherited->kind;
                panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3201101, ((panda$core$Int64) { 205 }));
                if ($tmp102.value) {
                {
                    panda$collections$Array* $tmp104 = (panda$collections$Array*) malloc(40);
                    $tmp104->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp104->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp104, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods103 = $tmp104;
                    {
                        ITable* $tmp107 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp107 = $tmp107->next;
                        }
                        $fn109 $tmp108 = $tmp107->methods[0];
                        panda$collections$Iterator* $tmp110 = $tmp108(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter106 = $tmp110;
                        $l111:;
                        ITable* $tmp113 = m$Iter106->$class->itable;
                        while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp113 = $tmp113->next;
                        }
                        $fn115 $tmp114 = $tmp113->methods[0];
                        panda$core$Bit $tmp116 = $tmp114(m$Iter106);
                        panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
                        if (!$tmp117.value) goto $l112;
                        {
                            ITable* $tmp119 = m$Iter106->$class->itable;
                            while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp119 = $tmp119->next;
                            }
                            $fn121 $tmp120 = $tmp119->methods[1];
                            panda$core$Object* $tmp122 = $tmp120(m$Iter106);
                            m118 = ((org$pandalanguage$pandac$MethodDecl*) $tmp122);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m118, ((panda$collections$List*) methods103));
                        }
                        goto $l111;
                        $l112:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp123 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp123->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp123, ((panda$collections$ListView*) methods103));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp123);
                }
                }
                else {
                panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3201101, ((panda$core$Int64) { 204 }));
                if ($tmp125.value) {
                {
                    panda$collections$Array* $tmp127 = (panda$collections$Array*) malloc(40);
                    $tmp127->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp127->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp127, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods126 = $tmp127;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods126));
                    org$pandalanguage$pandac$Methods* $tmp129 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp129->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp129->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp129, ((panda$collections$ListView*) methods126));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp129);
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
    org$pandalanguage$pandac$Symbol* result131;
    panda$collections$Iterator* p$Iter134;
    org$pandalanguage$pandac$SymbolTable* p146;
    panda$core$Object* $tmp133 = (($fn132) self->symbols->$class->vtable[3])(self->symbols, ((panda$core$Object*) ((panda$collections$Key*) p_name)));
    result131 = ((org$pandalanguage$pandac$Symbol*) $tmp133);
    {
        ITable* $tmp135 = ((panda$collections$Iterable*) self->parents)->$class->itable;
        while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp135 = $tmp135->next;
        }
        $fn137 $tmp136 = $tmp135->methods[0];
        panda$collections$Iterator* $tmp138 = $tmp136(((panda$collections$Iterable*) self->parents));
        p$Iter134 = $tmp138;
        $l139:;
        ITable* $tmp141 = p$Iter134->$class->itable;
        while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp141 = $tmp141->next;
        }
        $fn143 $tmp142 = $tmp141->methods[0];
        panda$core$Bit $tmp144 = $tmp142(p$Iter134);
        panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
        if (!$tmp145.value) goto $l140;
        {
            ITable* $tmp147 = p$Iter134->$class->itable;
            while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp147 = $tmp147->next;
            }
            $fn149 $tmp148 = $tmp147->methods[1];
            panda$core$Object* $tmp150 = $tmp148(p$Iter134);
            p146 = ((org$pandalanguage$pandac$SymbolTable*) $tmp150);
            org$pandalanguage$pandac$Symbol* $tmp152 = (($fn151) p146->$class->vtable[6])(p146, p_name);
            org$pandalanguage$pandac$Symbol* $tmp153 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result131, $tmp152);
            result131 = $tmp153;
        }
        goto $l139;
        $l140:;
    }
    return result131;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp155 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s154, ((panda$core$Object*) wrap_panda$core$Int64($tmp155)));
    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
    panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp158, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, &$s160);
    return $tmp161;
}

