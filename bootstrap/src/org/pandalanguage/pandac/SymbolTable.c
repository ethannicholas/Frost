#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
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

typedef panda$collections$Iterator* (*$fn45)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn51)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn57)(panda$collections$Iterator*);
typedef void (*$fn62)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn63)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn77)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn89)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn117)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn148)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn154)(panda$collections$Iterator*);

static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    {
        panda$core$Object* $tmp7 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_compiler));
        self->compiler = ((org$pandalanguage$pandac$Compiler*) $tmp7);
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp8 = (panda$collections$HashMap*) malloc(56);
    $tmp8->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp8->refCount.value = 1;
    panda$collections$HashMap$init($tmp8);
    self->symbols = $tmp8;
    panda$collections$HashMap* $tmp10 = (panda$collections$HashMap*) malloc(56);
    $tmp10->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp10->refCount.value = 1;
    panda$collections$HashMap$init($tmp10);
    self->merged = $tmp10;
    panda$collections$Array* $tmp12 = (panda$collections$Array*) malloc(40);
    $tmp12->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp12->refCount.value = 1;
    panda$collections$Array$init($tmp12);
    self->parents = $tmp12;
    {
        panda$core$Object* $tmp14 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_parent->compiler));
        self->compiler = ((org$pandalanguage$pandac$Compiler*) $tmp14);
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old15;
    panda$core$Int64 $match$38_1719;
    panda$collections$Array* methods21;
    panda$collections$Array* methods28;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp16 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp17 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp16)));
    old15 = ((org$pandalanguage$pandac$Symbol*) $tmp17);
    if (((panda$core$Bit) { old15 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        return;
    }
    }
    panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp18.value) {
    {
        {
            $match$38_1719 = old15->kind;
            panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1719, ((panda$core$Int64) { 204 }));
            if ($tmp20.value) {
            {
                panda$collections$Array* $tmp22 = (panda$collections$Array*) malloc(40);
                $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp22->refCount.value = 1;
                panda$collections$Array$init($tmp22);
                panda$core$Object* $tmp24 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp22));
                methods21 = ((panda$collections$Array*) $tmp24);
                panda$collections$Array$add$panda$collections$Array$T(methods21, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods21, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old15)));
                org$pandalanguage$pandac$Methods* $tmp25 = (org$pandalanguage$pandac$Methods*) malloc(64);
                $tmp25->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp25->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp25, ((panda$collections$ListView*) methods21));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp25)));
                return;
            }
            }
            else {
            panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1719, ((panda$core$Int64) { 205 }));
            if ($tmp27.value) {
            {
                panda$collections$Array* $tmp29 = (panda$collections$Array*) malloc(40);
                $tmp29->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp29->refCount.value = 1;
                panda$collections$Array$init($tmp29);
                panda$core$Object* $tmp31 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp29));
                methods28 = ((panda$collections$Array*) $tmp31);
                panda$collections$Array$add$panda$collections$Array$T(methods28, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods28, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old15)->methods));
                org$pandalanguage$pandac$Methods* $tmp32 = (org$pandalanguage$pandac$Methods*) malloc(64);
                $tmp32->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                $tmp32->refCount.value = 1;
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp32, ((panda$collections$ListView*) methods28));
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp32)));
                return;
            }
            }
            }
        }
    }
    }
    panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s34, p_name);
    panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, &$s36);
    org$pandalanguage$pandac$Position$wrapper* $tmp38;
    $tmp38 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    $tmp38->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp38->refCount = 1;
    $tmp38->value = old15->position;
    panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp37, ((panda$core$Object*) $tmp38));
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_s->position, $tmp39);
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* test$Iter42;
    org$pandalanguage$pandac$MethodDecl* test54;
    panda$core$Bit $tmp40 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp41 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp40);
    if ($tmp41.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp43 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp43 = $tmp43->next;
        }
        $fn45 $tmp44 = $tmp43->methods[0];
        panda$collections$Iterator* $tmp46 = $tmp44(((panda$collections$Iterable*) p_methods));
        test$Iter42 = $tmp46;
        $l47:;
        ITable* $tmp49 = test$Iter42->$class->itable;
        while ($tmp49->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp49 = $tmp49->next;
        }
        $fn51 $tmp50 = $tmp49->methods[0];
        panda$core$Bit $tmp52 = $tmp50(test$Iter42);
        panda$core$Bit $tmp53 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp52);
        if (!$tmp53.value) goto $l48;
        {
            ITable* $tmp55 = test$Iter42->$class->itable;
            while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp55 = $tmp55->next;
            }
            $fn57 $tmp56 = $tmp55->methods[1];
            panda$core$Object* $tmp58 = $tmp56(test$Iter42);
            test54 = ((org$pandalanguage$pandac$MethodDecl*) $tmp58);
            org$pandalanguage$pandac$MethodDecl* $tmp59 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, test54);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp59) == ((panda$core$Object*) p_m) }).value) {
            {
                return;
            }
            }
        }
        goto $l47;
        $l48:;
    }
    ITable* $tmp60 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp60->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp60 = $tmp60->next;
    }
    $fn62 $tmp61 = $tmp60->methods[0];
    $tmp61(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$core$Int64 $match$84_1366;
    panda$core$Int64 $match$86_2168;
    panda$collections$Array* methods70;
    panda$collections$Iterator* m$Iter74;
    org$pandalanguage$pandac$MethodDecl* m86;
    panda$collections$Array* methods95;
    panda$core$Int64 $match$107_21102;
    panda$collections$Array* methods104;
    panda$collections$Iterator* m$Iter108;
    org$pandalanguage$pandac$MethodDecl* m120;
    panda$collections$Array* methods128;
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
        $match$84_1366 = p_symbol->kind;
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1366, ((panda$core$Int64) { 204 }));
        if ($tmp67.value) {
        {
            {
                $match$86_2168 = p_inherited->kind;
                panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2168, ((panda$core$Int64) { 205 }));
                if ($tmp69.value) {
                {
                    panda$collections$Array* $tmp71 = (panda$collections$Array*) malloc(40);
                    $tmp71->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp71->refCount.value = 1;
                    panda$collections$Array$init($tmp71);
                    panda$core$Object* $tmp73 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp71));
                    methods70 = ((panda$collections$Array*) $tmp73);
                    panda$collections$Array$add$panda$collections$Array$T(methods70, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp75 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp75 = $tmp75->next;
                        }
                        $fn77 $tmp76 = $tmp75->methods[0];
                        panda$collections$Iterator* $tmp78 = $tmp76(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter74 = $tmp78;
                        $l79:;
                        ITable* $tmp81 = m$Iter74->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(m$Iter74);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        if (!$tmp85.value) goto $l80;
                        {
                            ITable* $tmp87 = m$Iter74->$class->itable;
                            while ($tmp87->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp87 = $tmp87->next;
                            }
                            $fn89 $tmp88 = $tmp87->methods[1];
                            panda$core$Object* $tmp90 = $tmp88(m$Iter74);
                            m86 = ((org$pandalanguage$pandac$MethodDecl*) $tmp90);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m86, ((panda$collections$List*) methods70));
                        }
                        goto $l79;
                        $l80:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp91 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp91->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp91, ((panda$collections$ListView*) methods70));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp91);
                }
                }
                else {
                panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_2168, ((panda$core$Int64) { 204 }));
                if ($tmp93.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp94 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self->compiler, ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp94) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        return p_symbol;
                    }
                    }
                    panda$collections$Array* $tmp96 = (panda$collections$Array*) malloc(40);
                    $tmp96->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp96->refCount.value = 1;
                    panda$collections$Array$init($tmp96);
                    panda$core$Object* $tmp98 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp96));
                    methods95 = ((panda$collections$Array*) $tmp98);
                    panda$collections$Array$add$panda$collections$Array$T(methods95, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods95, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    org$pandalanguage$pandac$Methods* $tmp99 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp99->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp99->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp99, ((panda$collections$ListView*) methods95));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp99);
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
        panda$core$Bit $tmp101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_1366, ((panda$core$Int64) { 205 }));
        if ($tmp101.value) {
        {
            {
                $match$107_21102 = p_inherited->kind;
                panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_21102, ((panda$core$Int64) { 205 }));
                if ($tmp103.value) {
                {
                    panda$collections$Array* $tmp105 = (panda$collections$Array*) malloc(40);
                    $tmp105->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp105->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp105, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    panda$core$Object* $tmp107 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp105));
                    methods104 = ((panda$collections$Array*) $tmp107);
                    {
                        ITable* $tmp109 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp109 = $tmp109->next;
                        }
                        $fn111 $tmp110 = $tmp109->methods[0];
                        panda$collections$Iterator* $tmp112 = $tmp110(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        m$Iter108 = $tmp112;
                        $l113:;
                        ITable* $tmp115 = m$Iter108->$class->itable;
                        while ($tmp115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp115 = $tmp115->next;
                        }
                        $fn117 $tmp116 = $tmp115->methods[0];
                        panda$core$Bit $tmp118 = $tmp116(m$Iter108);
                        panda$core$Bit $tmp119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp118);
                        if (!$tmp119.value) goto $l114;
                        {
                            ITable* $tmp121 = m$Iter108->$class->itable;
                            while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp121 = $tmp121->next;
                            }
                            $fn123 $tmp122 = $tmp121->methods[1];
                            panda$core$Object* $tmp124 = $tmp122(m$Iter108);
                            m120 = ((org$pandalanguage$pandac$MethodDecl*) $tmp124);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m120, ((panda$collections$List*) methods104));
                        }
                        goto $l113;
                        $l114:;
                    }
                    org$pandalanguage$pandac$Methods* $tmp125 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp125->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp125->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp125, ((panda$collections$ListView*) methods104));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp125);
                }
                }
                else {
                panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_21102, ((panda$core$Int64) { 204 }));
                if ($tmp127.value) {
                {
                    panda$collections$Array* $tmp129 = (panda$collections$Array*) malloc(40);
                    $tmp129->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp129->refCount.value = 1;
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp129, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    panda$core$Object* $tmp131 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp129));
                    methods128 = ((panda$collections$Array*) $tmp131);
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods128));
                    org$pandalanguage$pandac$Methods* $tmp132 = (org$pandalanguage$pandac$Methods*) malloc(64);
                    $tmp132->$class = (panda$core$Class*) &org$pandalanguage$pandac$Methods$class;
                    $tmp132->refCount.value = 1;
                    org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp132, ((panda$collections$ListView*) methods128));
                    return ((org$pandalanguage$pandac$Symbol*) $tmp132);
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
    org$pandalanguage$pandac$Symbol* result134;
    panda$collections$Iterator* p$Iter139;
    org$pandalanguage$pandac$SymbolTable* p151;
    panda$core$Object* $tmp135 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp136 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp135)));
    result134 = ((org$pandalanguage$pandac$Symbol*) $tmp136);
    if (((panda$core$Bit) { result134 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result134));
            panda$core$Object* $tmp137 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            panda$core$Object* $tmp138 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp137)));
            result134 = ((org$pandalanguage$pandac$Symbol*) $tmp138);
        }
        {
            ITable* $tmp140 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp140 = $tmp140->next;
            }
            $fn142 $tmp141 = $tmp140->methods[0];
            panda$collections$Iterator* $tmp143 = $tmp141(((panda$collections$Iterable*) self->parents));
            p$Iter139 = $tmp143;
            $l144:;
            ITable* $tmp146 = p$Iter139->$class->itable;
            while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp146 = $tmp146->next;
            }
            $fn148 $tmp147 = $tmp146->methods[0];
            panda$core$Bit $tmp149 = $tmp147(p$Iter139);
            panda$core$Bit $tmp150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp149);
            if (!$tmp150.value) goto $l145;
            {
                ITable* $tmp152 = p$Iter139->$class->itable;
                while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp152 = $tmp152->next;
                }
                $fn154 $tmp153 = $tmp152->methods[1];
                panda$core$Object* $tmp155 = $tmp153(p$Iter139);
                p151 = ((org$pandalanguage$pandac$SymbolTable*) $tmp155);
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result134));
                    org$pandalanguage$pandac$Symbol* $tmp156 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p151, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp157 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result134, $tmp156);
                    panda$core$Object* $tmp158 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp157));
                    result134 = ((org$pandalanguage$pandac$Symbol*) $tmp158);
                }
            }
            goto $l144;
            $l145:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result134));
    }
    }
    return result134;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp160 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp161;
    $tmp161 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp161->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp161->refCount = 1;
    $tmp161->value = $tmp160;
    panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s159, ((panda$core$Object*) $tmp161));
    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s163);
    panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp164, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, &$s166);
    return $tmp167;
}

