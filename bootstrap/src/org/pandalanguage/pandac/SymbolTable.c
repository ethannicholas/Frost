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

typedef panda$collections$Iterator* (*$fn36)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);
typedef void (*$fn53)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn54)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn63)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn69)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn75)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn91)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn97)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn103)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn118)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn130)(panda$collections$Iterator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp29, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(old13->position)));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp30);
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
    panda$collections$Array* methods57;
    panda$collections$Iterator* m$Iter60;
    org$pandalanguage$pandac$MethodDecl* m72;
    panda$collections$Array* methods80;
    panda$collections$Array* methods85;
    panda$collections$Iterator* m$Iter88;
    org$pandalanguage$pandac$MethodDecl* m100;
    panda$collections$Array* methods107;
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
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    panda$collections$Array* $tmp58 = (panda$collections$Array*) malloc(40);
                    $tmp58->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp58->refCount.value = 1;
                    panda$collections$Array$init($tmp58);
                    methods57 = $tmp58;
                    panda$collections$Array$add$panda$collections$Array$T(methods57, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp61 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp61 = $tmp61->next;
                        }
                        $fn63 $tmp62 = $tmp61->methods[0];
                        panda$collections$Iterator* $tmp64 = $tmp62(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter60 = $tmp64;
                        $l65:;
                        ITable* $tmp67 = m$Iter60->$class->itable;
                        while ($tmp67->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp67 = $tmp67->next;
                        }
                        $fn69 $tmp68 = $tmp67->methods[0];
                        panda$core$Bit $tmp70 = $tmp68(m$Iter60);
                        panda$core$Bit $tmp71 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp70);
                        if (!$tmp71.value) goto $l66;
                        {
                            ITable* $tmp73 = m$Iter60->$class->itable;
                            while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp73 = $tmp73->next;
                            }
                            $fn75 $tmp74 = $tmp73->methods[1];
                            panda$core$Object* $tmp76 = $tmp74(m$Iter60);
                            m72 = ((org$pandalanguage$pandac$MethodDecl*) $tmp76);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m72, ((panda$collections$List*) methods57));
                        }
                        goto $l65;
                        $l66:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp77 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp77->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp77->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp77, ((panda$collections$ListView*) methods57));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp77);
                }
                break;
                case 204:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp79 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp79) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp81 = (panda$collections$Array*) malloc(40);
                    $tmp81->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp81->refCount.value = 1;
                    panda$collections$Array$init($tmp81);
                    methods80 = $tmp81;
                    panda$collections$Array$add$panda$collections$Array$T(methods80, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods80, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp83 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp83->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp83->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp83, ((panda$collections$ListView*) methods80));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp83);
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
                    panda$collections$Array* $tmp86 = (panda$collections$Array*) malloc(40);
                    $tmp86->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp86->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp86, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods85 = $tmp86;
                    {
                        ITable* $tmp89 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp89 = $tmp89->next;
                        }
                        $fn91 $tmp90 = $tmp89->methods[0];
                        panda$collections$Iterator* $tmp92 = $tmp90(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter88 = $tmp92;
                        $l93:;
                        ITable* $tmp95 = m$Iter88->$class->itable;
                        while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp95 = $tmp95->next;
                        }
                        $fn97 $tmp96 = $tmp95->methods[0];
                        panda$core$Bit $tmp98 = $tmp96(m$Iter88);
                        panda$core$Bit $tmp99 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp98);
                        if (!$tmp99.value) goto $l94;
                        {
                            ITable* $tmp101 = m$Iter88->$class->itable;
                            while ($tmp101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp101 = $tmp101->next;
                            }
                            $fn103 $tmp102 = $tmp101->methods[1];
                            panda$core$Object* $tmp104 = $tmp102(m$Iter88);
                            m100 = ((org$pandalanguage$pandac$MethodDecl*) $tmp104);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m100, ((panda$collections$List*) methods85));
                        }
                        goto $l93;
                        $l94:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp105 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp105->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp105->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp105, ((panda$collections$ListView*) methods85));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp105);
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp108 = (panda$collections$Array*) malloc(40);
                    $tmp108->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp108->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp108, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    methods107 = $tmp108;
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods107));
                    org$pandalanguage$pandac$Methods* $tmp110 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp110->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp110, ((panda$collections$ListView*) methods107));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp110);
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
    org$pandalanguage$pandac$Symbol* result112;
    panda$collections$Iterator* p$Iter115;
    org$pandalanguage$pandac$SymbolTable* p127;
    panda$core$Object* $tmp113 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    result112 = ((org$pandalanguage$pandac$Symbol*) $tmp113);
    if (((panda$core$Bit) { result112 == NULL }).value) {
    {
        panda$core$Object* $tmp114 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
        result112 = ((org$pandalanguage$pandac$Symbol*) $tmp114);
        {
            ITable* $tmp116 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp116 = $tmp116->next;
            }
            $fn118 $tmp117 = $tmp116->methods[0];
            panda$collections$Iterator* $tmp119 = $tmp117(((panda$collections$Iterable*) self->parents));
            p$Iter115 = $tmp119;
            $l120:;
            ITable* $tmp122 = p$Iter115->$class->itable;
            while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp122 = $tmp122->next;
            }
            $fn124 $tmp123 = $tmp122->methods[0];
            panda$core$Bit $tmp125 = $tmp123(p$Iter115);
            panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
            if (!$tmp126.value) goto $l121;
            {
                ITable* $tmp128 = p$Iter115->$class->itable;
                while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp128 = $tmp128->next;
                }
                $fn130 $tmp129 = $tmp128->methods[1];
                panda$core$Object* $tmp131 = $tmp129(p$Iter115);
                p127 = ((org$pandalanguage$pandac$SymbolTable*) $tmp131);
                org$pandalanguage$pandac$Symbol* $tmp132 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p127, p_name);
                org$pandalanguage$pandac$Symbol* $tmp133 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result112, $tmp132);
                result112 = $tmp133;
            }
            goto $l120;
            $l121:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result112));
    }
    }
    return result112;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp135 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s134, ((panda$core$Object*) wrap_panda$core$Int64($tmp135)));
    panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s137);
    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp138, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, &$s140);
    return $tmp141;
}

