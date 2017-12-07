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

typedef panda$collections$Iterator* (*$fn36)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);
typedef void (*$fn53)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn54)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn67)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn99)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn111)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn126)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn138)(panda$collections$Iterator*);

static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6C\x69\x63\x61\x74\x65\x20\x73\x79\x6D\x62\x6F\x6C\x20\x27", 18, 1 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6F\x75\x73\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1 };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6D\x62\x6F\x6C\x54\x61\x62\x6C\x65\x3C\x70\x61\x72\x65\x6E\x74\x73\x28", 20, 1 };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20\x73\x79\x6D\x62\x6F\x6C\x73\x3D", 11, 1 };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

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
    panda$core$Int64 $match$66412;
    panda$collections$Array* methods14;
    panda$collections$Array* methods20;
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
        {
            $match$66412 = old9->kind;
            panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66412, ((panda$core$Int64) { 204 }));
            if ($tmp13.value) {
            {
                panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
                $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp15->refCount.value = 1;
                panda$collections$Array$init($tmp15);
                methods14 = $tmp15;
                panda$collections$Array$add$panda$collections$Array$T(methods14, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods14, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old9)));
                org$pandalanguage$pandac$Methods* $tmp17 = (org$pandalanguage$pandac$Methods*) malloc(48);
                $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp17->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp17, ((panda$collections$ListView*) methods14));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp17)));
                return;
            }
            }
            else {
            panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66412, ((panda$core$Int64) { 205 }));
            if ($tmp19.value) {
            {
                panda$collections$Array* $tmp21 = (panda$collections$Array*) malloc(40);
                $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp21->refCount.value = 1;
                panda$collections$Array$init($tmp21);
                methods20 = $tmp21;
                panda$collections$Array$add$panda$collections$Array$T(methods20, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods20, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old9)->methods));
                org$pandalanguage$pandac$Methods* $tmp23 = (org$pandalanguage$pandac$Methods*) malloc(48);
                $tmp23->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp23->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp23, ((panda$collections$ListView*) methods20));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp23)));
                return;
            }
            }
            }
        }
    }
    }
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s25, p_name);
    panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s27);
    org$pandalanguage$pandac$Position* $tmp29 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, old9->offset);
    panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp28, ((panda$core$Object*) $tmp29));
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self->compiler, p_s->offset, $tmp30);
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter33;
    org$pandalanguage$pandac$MethodDecl* test45;
    panda$core$Bit $tmp31 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp32 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp31);
    if ($tmp32.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp34 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[0];
        panda$collections$Iterator* $tmp37 = $tmp35(((panda$collections$Iterable*) p_methods));
        test$Iter33 = $tmp37;
        $l38:;
        ITable* $tmp40 = test$Iter33->$class->itable;
        while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp40 = $tmp40->next;
        }
        $fn42 $tmp41 = $tmp40->methods[0];
        panda$core$Bit $tmp43 = $tmp41(test$Iter33);
        panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
        if (!$tmp44.value) goto $l39;
        {
            ITable* $tmp46 = test$Iter33->$class->itable;
            while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp46 = $tmp46->next;
            }
            $fn48 $tmp47 = $tmp46->methods[1];
            panda$core$Object* $tmp49 = $tmp47(test$Iter33);
            test45 = ((org$pandalanguage$pandac$MethodDecl*) $tmp49);
            org$pandalanguage$pandac$MethodDecl* $tmp50 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test45);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp50) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l38;
        $l39:;
    }
    ITable* $tmp51 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp51->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp51 = $tmp51->next;
    }
    $fn53 $tmp52 = $tmp51->methods[0];
    $tmp52(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$core$Int64 $match$210957;
    panda$core$Int64 $match$218259;
    panda$collections$Array* methods61;
    panda$collections$Iterator* m$Iter64;
    org$pandalanguage$pandac$MethodDecl* m76;
    panda$collections$Array* methods85;
    panda$core$Int64 $match$320891;
    panda$collections$Array* methods93;
    panda$collections$Iterator* m$Iter96;
    org$pandalanguage$pandac$MethodDecl* m108;
    panda$collections$Array* methods116;
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
    panda$core$Bit $tmp55 = (($fn54) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp56 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp55);
    if ($tmp56.value) {
    {
        return p_symbol;
    }
    }
    {
        $match$210957 = p_symbol->kind;
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210957, ((panda$core$Int64) { 204 }));
        if ($tmp58.value) {
        {
            {
                $match$218259 = p_inherited->kind;
                panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$218259, ((panda$core$Int64) { 205 }));
                if ($tmp60.value) {
                {
                    panda$collections$Array* $tmp62 = (panda$collections$Array*) malloc(40);
                    $tmp62->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp62->refCount.value = 1;
                    panda$collections$Array$init($tmp62);
                    methods61 = $tmp62;
                    panda$collections$Array$add$panda$collections$Array$T(methods61, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp65 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp65 = $tmp65->next;
                        }
                        $fn67 $tmp66 = $tmp65->methods[0];
                        panda$collections$Iterator* $tmp68 = $tmp66(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter64 = $tmp68;
                        $l69:;
                        ITable* $tmp71 = m$Iter64->$class->itable;
                        while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp71 = $tmp71->next;
                        }
                        $fn73 $tmp72 = $tmp71->methods[0];
                        panda$core$Bit $tmp74 = $tmp72(m$Iter64);
                        panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
                        if (!$tmp75.value) goto $l70;
                        {
                            ITable* $tmp77 = m$Iter64->$class->itable;
                            while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp77 = $tmp77->next;
                            }
                            $fn79 $tmp78 = $tmp77->methods[1];
                            panda$core$Object* $tmp80 = $tmp78(m$Iter64);
                            m76 = ((org$pandalanguage$pandac$MethodDecl*) $tmp80);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m76, ((panda$collections$List*) methods61));
                        }
                        goto $l69;
                        $l70:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp81 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp81->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp81, ((panda$collections$ListView*) methods61));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp81);
                }
                }
                else {
                panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$218259, ((panda$core$Int64) { 204 }));
                if ($tmp83.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp84 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp84) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp86 = (panda$collections$Array*) malloc(40);
                    $tmp86->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp86->refCount.value = 1;
                    panda$collections$Array$init($tmp86);
                    methods85 = $tmp86;
                    panda$collections$Array$add$panda$collections$Array$T(methods85, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods85, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp88 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp88->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp88->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp88, ((panda$collections$ListView*) methods85));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp88);
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
        panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210957, ((panda$core$Int64) { 205 }));
        if ($tmp90.value) {
        {
            {
                $match$320891 = p_inherited->kind;
                panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$320891, ((panda$core$Int64) { 205 }));
                if ($tmp92.value) {
                {
                    panda$collections$Array* $tmp94 = (panda$collections$Array*) malloc(40);
                    $tmp94->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp94->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp94, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods93 = $tmp94;
                    {
                        ITable* $tmp97 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp97 = $tmp97->next;
                        }
                        $fn99 $tmp98 = $tmp97->methods[0];
                        panda$collections$Iterator* $tmp100 = $tmp98(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter96 = $tmp100;
                        $l101:;
                        ITable* $tmp103 = m$Iter96->$class->itable;
                        while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp103 = $tmp103->next;
                        }
                        $fn105 $tmp104 = $tmp103->methods[0];
                        panda$core$Bit $tmp106 = $tmp104(m$Iter96);
                        panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
                        if (!$tmp107.value) goto $l102;
                        {
                            ITable* $tmp109 = m$Iter96->$class->itable;
                            while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp109 = $tmp109->next;
                            }
                            $fn111 $tmp110 = $tmp109->methods[1];
                            panda$core$Object* $tmp112 = $tmp110(m$Iter96);
                            m108 = ((org$pandalanguage$pandac$MethodDecl*) $tmp112);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m108, ((panda$collections$List*) methods93));
                        }
                        goto $l101;
                        $l102:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp113 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp113->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp113, ((panda$collections$ListView*) methods93));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp113);
                }
                }
                else {
                panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$320891, ((panda$core$Int64) { 204 }));
                if ($tmp115.value) {
                {
                    panda$collections$Array* $tmp117 = (panda$collections$Array*) malloc(40);
                    $tmp117->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp117->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp117, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods116 = $tmp117;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods116));
                    org$pandalanguage$pandac$Methods* $tmp119 = (org$pandalanguage$pandac$Methods*) malloc(48);
                    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp119->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp119, ((panda$collections$ListView*) methods116));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp119);
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
    org$pandalanguage$pandac$Symbol* result121;
    panda$collections$Iterator* p$Iter123;
    org$pandalanguage$pandac$SymbolTable* p135;
    panda$core$Object* $tmp122 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    result121 = ((org$pandalanguage$pandac$Symbol*) $tmp122);
    {
        ITable* $tmp124 = ((panda$collections$Iterable*) self->parents)->$class->itable;
        while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp124 = $tmp124->next;
        }
        $fn126 $tmp125 = $tmp124->methods[0];
        panda$collections$Iterator* $tmp127 = $tmp125(((panda$collections$Iterable*) self->parents));
        p$Iter123 = $tmp127;
        $l128:;
        ITable* $tmp130 = p$Iter123->$class->itable;
        while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp130 = $tmp130->next;
        }
        $fn132 $tmp131 = $tmp130->methods[0];
        panda$core$Bit $tmp133 = $tmp131(p$Iter123);
        panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp133);
        if (!$tmp134.value) goto $l129;
        {
            ITable* $tmp136 = p$Iter123->$class->itable;
            while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp136 = $tmp136->next;
            }
            $fn138 $tmp137 = $tmp136->methods[1];
            panda$core$Object* $tmp139 = $tmp137(p$Iter123);
            p135 = ((org$pandalanguage$pandac$SymbolTable*) $tmp139);
            org$pandalanguage$pandac$Symbol* $tmp140 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p135, p_name);
            org$pandalanguage$pandac$Symbol* $tmp141 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result121, $tmp140);
            result121 = $tmp141;
        }
        goto $l128;
        $l129:;
    }
    return result121;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp143 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s142, ((panda$core$Object*) wrap_panda$core$Int64($tmp143)));
    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s145);
    panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp146, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
    return $tmp149;
}

