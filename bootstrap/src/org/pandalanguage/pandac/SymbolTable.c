#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Weak.h"
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

typedef panda$core$Object* (*$fn44)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn63)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn82)(panda$core$Weak*);
typedef void (*$fn87)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn94)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn108)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn132)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn212)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn220)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    panda$collections$HashMap* $tmp3 = $tmp4;
    panda$collections$HashMap* $tmp2 = $tmp3;
    self->symbols = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    panda$collections$HashMap* $tmp6 = $tmp7;
    panda$collections$HashMap* $tmp5 = $tmp6;
    self->merged = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp10);
    panda$collections$Array* $tmp9 = $tmp10;
    panda$collections$Array* $tmp8 = $tmp9;
    self->parents = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    {
        panda$core$Weak* $tmp11 = self->compiler;
        panda$core$Weak* $tmp14 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp14, ((panda$core$Object*) p_compiler));
        panda$core$Weak* $tmp13 = $tmp14;
        panda$core$Weak* $tmp12 = $tmp13;
        self->compiler = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
    panda$collections$HashMap* $tmp17 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp17);
    panda$collections$HashMap* $tmp16 = $tmp17;
    panda$collections$HashMap* $tmp15 = $tmp16;
    self->symbols = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$collections$HashMap* $tmp20 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp20);
    panda$collections$HashMap* $tmp19 = $tmp20;
    panda$collections$HashMap* $tmp18 = $tmp19;
    self->merged = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$collections$Array* $tmp23 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp23);
    panda$collections$Array* $tmp22 = $tmp23;
    panda$collections$Array* $tmp21 = $tmp22;
    self->parents = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    {
        panda$core$Weak* $tmp24 = self->compiler;
        panda$core$Weak* $tmp25 = p_parent->compiler;
        self->compiler = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old26;
    panda$collections$Array* methods31;
    panda$collections$Array* methods37;
    panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp29 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp28 = $tmp29;
    org$pandalanguage$pandac$Symbol* $tmp27 = ((org$pandalanguage$pandac$Symbol*) $tmp28);
    old26 = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    panda$core$Panda$unref$panda$core$Object($tmp28);
    if (((panda$core$Bit) { old26 == NULL }).value) {
    {
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old26));
            return;
        }
    }
    }
    panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
    if ($tmp30.value) {
    {
        switch (old26->kind.value) {
            case 204:
            {
                panda$collections$Array* $tmp34 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp34);
                panda$collections$Array* $tmp33 = $tmp34;
                panda$collections$Array* $tmp32 = $tmp33;
                methods31 = $tmp32;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
                panda$collections$Array$add$panda$collections$Array$T(methods31, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$add$panda$collections$Array$T(methods31, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old26)));
                org$pandalanguage$pandac$Methods* $tmp36 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp36, ((panda$collections$ListView*) methods31));
                org$pandalanguage$pandac$Methods* $tmp35 = $tmp36;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp35)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods31));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old26));
                        return;
                    }
                }
            }
            break;
            case 205:
            {
                panda$collections$Array* $tmp40 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp40);
                panda$collections$Array* $tmp39 = $tmp40;
                panda$collections$Array* $tmp38 = $tmp39;
                methods37 = $tmp38;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
                panda$collections$Array$add$panda$collections$Array$T(methods37, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods37, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old26)->methods));
                org$pandalanguage$pandac$Methods* $tmp42 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp42, ((panda$collections$ListView*) methods37));
                org$pandalanguage$pandac$Methods* $tmp41 = $tmp42;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp41)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods37));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old26));
                        return;
                    }
                }
            }
            break;
        }
    }
    }
    panda$core$Object* $tmp45 = (($fn44) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp43 = $tmp45;
    panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s49, p_name);
    panda$core$String* $tmp48 = $tmp50;
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s51);
    panda$core$String* $tmp47 = $tmp52;
    org$pandalanguage$pandac$Position$wrapper* $tmp54;
    $tmp54 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
    $tmp54->value = old26->position;
    panda$core$Object* $tmp53 = ((panda$core$Object*) $tmp54);
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp47, $tmp53);
    panda$core$String* $tmp46 = $tmp55;
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp43), p_s->position, $tmp46);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    panda$core$Panda$unref$panda$core$Object($tmp53);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    panda$core$Panda$unref$panda$core$Object($tmp43);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old26));
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$61$958;
    org$pandalanguage$pandac$MethodDecl* test73;
    panda$core$Bit $tmp56 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp57 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp56);
    if ($tmp57.value) {
    {
        return;
    }
    }
    {
        ITable* $tmp61 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp61 = $tmp61->next;
        }
        $fn63 $tmp62 = $tmp61->methods[0];
        panda$collections$Iterator* $tmp64 = $tmp62(((panda$collections$Iterable*) p_methods));
        panda$collections$Iterator* $tmp60 = $tmp64;
        panda$collections$Iterator* $tmp59 = $tmp60;
        Iter$61$958 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
        $l65:;
        ITable* $tmp68 = Iter$61$958->$class->itable;
        while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp68 = $tmp68->next;
        }
        $fn70 $tmp69 = $tmp68->methods[0];
        panda$core$Bit $tmp71 = $tmp69(Iter$61$958);
        panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
        bool $tmp67 = $tmp72.value;
        if (!$tmp67) goto $l66;
        {
            ITable* $tmp76 = Iter$61$958->$class->itable;
            while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp76 = $tmp76->next;
            }
            $fn78 $tmp77 = $tmp76->methods[1];
            panda$core$Object* $tmp79 = $tmp77(Iter$61$958);
            panda$core$Object* $tmp75 = $tmp79;
            org$pandalanguage$pandac$MethodDecl* $tmp74 = ((org$pandalanguage$pandac$MethodDecl*) $tmp75);
            test73 = $tmp74;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
            panda$core$Panda$unref$panda$core$Object($tmp75);
            panda$core$Object* $tmp83 = (($fn82) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp81 = $tmp83;
            org$pandalanguage$pandac$MethodDecl* $tmp84 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp81), test73);
            org$pandalanguage$pandac$MethodDecl* $tmp80 = $tmp84;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
            panda$core$Panda$unref$panda$core$Object($tmp81);
            if (((panda$core$Bit) { ((panda$core$Object*) $tmp80) == ((panda$core$Object*) p_m) }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test73));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$958));
                        return;
                    }
                }
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test73));
        }
        goto $l65;
        $l66:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$958));
    }
    ITable* $tmp85 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp85->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp85 = $tmp85->next;
    }
    $fn87 $tmp86 = $tmp85->methods[0];
    $tmp86(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    panda$collections$Array* methods99;
    panda$collections$Iterator* Iter$89$25103;
    org$pandalanguage$pandac$MethodDecl* m118;
    org$pandalanguage$pandac$Symbol* tmp1125;
    panda$collections$Array* methods137;
    org$pandalanguage$pandac$Symbol* tmp2141;
    panda$collections$Array* methods148;
    panda$collections$Iterator* Iter$109$25152;
    org$pandalanguage$pandac$MethodDecl* m167;
    org$pandalanguage$pandac$Symbol* tmp3174;
    panda$collections$Array* methods179;
    org$pandalanguage$pandac$Symbol* tmp4183;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp89 = p_symbol;
        org$pandalanguage$pandac$Symbol* $tmp88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        return $tmp88;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp91 = p_inherited;
        org$pandalanguage$pandac$Symbol* $tmp90 = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        return $tmp90;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp93 = p_symbol;
        org$pandalanguage$pandac$Symbol* $tmp92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        return $tmp92;
    }
    }
    panda$core$Bit $tmp95 = (($fn94) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp96 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp95);
    if ($tmp96.value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp98 = p_symbol;
        org$pandalanguage$pandac$Symbol* $tmp97 = $tmp98;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
        return $tmp97;
    }
    }
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    panda$collections$Array* $tmp102 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp102);
                    panda$collections$Array* $tmp101 = $tmp102;
                    panda$collections$Array* $tmp100 = $tmp101;
                    methods99 = $tmp100;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                    panda$collections$Array$add$panda$collections$Array$T(methods99, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    {
                        ITable* $tmp106 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp106 = $tmp106->next;
                        }
                        $fn108 $tmp107 = $tmp106->methods[0];
                        panda$collections$Iterator* $tmp109 = $tmp107(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        panda$collections$Iterator* $tmp105 = $tmp109;
                        panda$collections$Iterator* $tmp104 = $tmp105;
                        Iter$89$25103 = $tmp104;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
                        $l110:;
                        ITable* $tmp113 = Iter$89$25103->$class->itable;
                        while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp113 = $tmp113->next;
                        }
                        $fn115 $tmp114 = $tmp113->methods[0];
                        panda$core$Bit $tmp116 = $tmp114(Iter$89$25103);
                        panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
                        bool $tmp112 = $tmp117.value;
                        if (!$tmp112) goto $l111;
                        {
                            ITable* $tmp121 = Iter$89$25103->$class->itable;
                            while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp121 = $tmp121->next;
                            }
                            $fn123 $tmp122 = $tmp121->methods[1];
                            panda$core$Object* $tmp124 = $tmp122(Iter$89$25103);
                            panda$core$Object* $tmp120 = $tmp124;
                            org$pandalanguage$pandac$MethodDecl* $tmp119 = ((org$pandalanguage$pandac$MethodDecl*) $tmp120);
                            m118 = $tmp119;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                            panda$core$Panda$unref$panda$core$Object($tmp120);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m118, ((panda$collections$List*) methods99));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m118));
                        }
                        goto $l110;
                        $l111:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$89$25103));
                    }
                    {
                        org$pandalanguage$pandac$Methods* $tmp128 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp128, ((panda$collections$ListView*) methods99));
                        org$pandalanguage$pandac$Methods* $tmp127 = $tmp128;
                        org$pandalanguage$pandac$Symbol* $tmp126 = ((org$pandalanguage$pandac$Symbol*) $tmp127);
                        tmp1125 = $tmp126;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods99));
                        org$pandalanguage$pandac$Symbol* $tmp129 = tmp1125;
                        return $tmp129;
                    }
                }
                break;
                case 204:
                {
                    panda$core$Object* $tmp133 = (($fn132) self->compiler->$class->vtable[2])(self->compiler);
                    panda$core$Object* $tmp131 = $tmp133;
                    org$pandalanguage$pandac$MethodDecl* $tmp134 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp131), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                    org$pandalanguage$pandac$MethodDecl* $tmp130 = $tmp134;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                    panda$core$Panda$unref$panda$core$Object($tmp131);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp130) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                    {
                        org$pandalanguage$pandac$Symbol* $tmp136 = p_symbol;
                        org$pandalanguage$pandac$Symbol* $tmp135 = $tmp136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                        return $tmp135;
                    }
                    }
                    panda$collections$Array* $tmp140 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp140);
                    panda$collections$Array* $tmp139 = $tmp140;
                    panda$collections$Array* $tmp138 = $tmp139;
                    methods137 = $tmp138;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
                    panda$collections$Array$add$panda$collections$Array$T(methods137, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                    panda$collections$Array$add$panda$collections$Array$T(methods137, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                    {
                        org$pandalanguage$pandac$Methods* $tmp144 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp144, ((panda$collections$ListView*) methods137));
                        org$pandalanguage$pandac$Methods* $tmp143 = $tmp144;
                        org$pandalanguage$pandac$Symbol* $tmp142 = ((org$pandalanguage$pandac$Symbol*) $tmp143);
                        tmp2141 = $tmp142;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods137));
                        org$pandalanguage$pandac$Symbol* $tmp145 = tmp2141;
                        return $tmp145;
                    }
                }
                break;
                default:
                {
                    org$pandalanguage$pandac$Symbol* $tmp147 = p_symbol;
                    org$pandalanguage$pandac$Symbol* $tmp146 = $tmp147;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                    return $tmp146;
                }
            }
        }
        break;
        case 205:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    panda$collections$Array* $tmp151 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp151, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    panda$collections$Array* $tmp150 = $tmp151;
                    panda$collections$Array* $tmp149 = $tmp150;
                    methods148 = $tmp149;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                    {
                        ITable* $tmp155 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                        while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp155 = $tmp155->next;
                        }
                        $fn157 $tmp156 = $tmp155->methods[0];
                        panda$collections$Iterator* $tmp158 = $tmp156(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                        panda$collections$Iterator* $tmp154 = $tmp158;
                        panda$collections$Iterator* $tmp153 = $tmp154;
                        Iter$109$25152 = $tmp153;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                        $l159:;
                        ITable* $tmp162 = Iter$109$25152->$class->itable;
                        while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp162 = $tmp162->next;
                        }
                        $fn164 $tmp163 = $tmp162->methods[0];
                        panda$core$Bit $tmp165 = $tmp163(Iter$109$25152);
                        panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
                        bool $tmp161 = $tmp166.value;
                        if (!$tmp161) goto $l160;
                        {
                            ITable* $tmp170 = Iter$109$25152->$class->itable;
                            while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp170 = $tmp170->next;
                            }
                            $fn172 $tmp171 = $tmp170->methods[1];
                            panda$core$Object* $tmp173 = $tmp171(Iter$109$25152);
                            panda$core$Object* $tmp169 = $tmp173;
                            org$pandalanguage$pandac$MethodDecl* $tmp168 = ((org$pandalanguage$pandac$MethodDecl*) $tmp169);
                            m167 = $tmp168;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                            panda$core$Panda$unref$panda$core$Object($tmp169);
                            org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m167, ((panda$collections$List*) methods148));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m167));
                        }
                        goto $l159;
                        $l160:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$109$25152));
                    }
                    {
                        org$pandalanguage$pandac$Methods* $tmp177 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp177, ((panda$collections$ListView*) methods148));
                        org$pandalanguage$pandac$Methods* $tmp176 = $tmp177;
                        org$pandalanguage$pandac$Symbol* $tmp175 = ((org$pandalanguage$pandac$Symbol*) $tmp176);
                        tmp3174 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods148));
                        org$pandalanguage$pandac$Symbol* $tmp178 = tmp3174;
                        return $tmp178;
                    }
                }
                break;
                case 204:
                {
                    panda$collections$Array* $tmp182 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp182, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                    panda$collections$Array* $tmp181 = $tmp182;
                    panda$collections$Array* $tmp180 = $tmp181;
                    methods179 = $tmp180;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                    org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods179));
                    {
                        org$pandalanguage$pandac$Methods* $tmp186 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp186, ((panda$collections$ListView*) methods179));
                        org$pandalanguage$pandac$Methods* $tmp185 = $tmp186;
                        org$pandalanguage$pandac$Symbol* $tmp184 = ((org$pandalanguage$pandac$Symbol*) $tmp185);
                        tmp4183 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods179));
                        org$pandalanguage$pandac$Symbol* $tmp187 = tmp4183;
                        return $tmp187;
                    }
                }
                break;
                default:
                {
                    org$pandalanguage$pandac$Symbol* $tmp189 = p_symbol;
                    org$pandalanguage$pandac$Symbol* $tmp188 = $tmp189;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
                    return $tmp188;
                }
            }
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Symbol* $tmp191 = p_symbol;
            org$pandalanguage$pandac$Symbol* $tmp190 = $tmp191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
            return $tmp190;
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result192;
    panda$collections$Iterator* Iter$129$13200;
    org$pandalanguage$pandac$SymbolTable* p215;
    org$pandalanguage$pandac$Symbol* tmp5228;
    panda$core$Object* $tmp195 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
    panda$core$Object* $tmp194 = $tmp195;
    org$pandalanguage$pandac$Symbol* $tmp193 = ((org$pandalanguage$pandac$Symbol*) $tmp194);
    result192 = $tmp193;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object($tmp194);
    if (((panda$core$Bit) { result192 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Symbol* $tmp196 = result192;
            panda$core$Object* $tmp199 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
            panda$core$Object* $tmp198 = $tmp199;
            org$pandalanguage$pandac$Symbol* $tmp197 = ((org$pandalanguage$pandac$Symbol*) $tmp198);
            result192 = $tmp197;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object($tmp198);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
        }
        {
            ITable* $tmp203 = ((panda$collections$Iterable*) self->parents)->$class->itable;
            while ($tmp203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp203 = $tmp203->next;
            }
            $fn205 $tmp204 = $tmp203->methods[0];
            panda$collections$Iterator* $tmp206 = $tmp204(((panda$collections$Iterable*) self->parents));
            panda$collections$Iterator* $tmp202 = $tmp206;
            panda$collections$Iterator* $tmp201 = $tmp202;
            Iter$129$13200 = $tmp201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            $l207:;
            ITable* $tmp210 = Iter$129$13200->$class->itable;
            while ($tmp210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp210 = $tmp210->next;
            }
            $fn212 $tmp211 = $tmp210->methods[0];
            panda$core$Bit $tmp213 = $tmp211(Iter$129$13200);
            panda$core$Bit $tmp214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp213);
            bool $tmp209 = $tmp214.value;
            if (!$tmp209) goto $l208;
            {
                ITable* $tmp218 = Iter$129$13200->$class->itable;
                while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp218 = $tmp218->next;
                }
                $fn220 $tmp219 = $tmp218->methods[1];
                panda$core$Object* $tmp221 = $tmp219(Iter$129$13200);
                panda$core$Object* $tmp217 = $tmp221;
                org$pandalanguage$pandac$SymbolTable* $tmp216 = ((org$pandalanguage$pandac$SymbolTable*) $tmp217);
                p215 = $tmp216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object($tmp217);
                {
                    org$pandalanguage$pandac$Symbol* $tmp222 = result192;
                    org$pandalanguage$pandac$Symbol* $tmp226 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p215, p_name);
                    org$pandalanguage$pandac$Symbol* $tmp225 = $tmp226;
                    org$pandalanguage$pandac$Symbol* $tmp227 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result192, $tmp225);
                    org$pandalanguage$pandac$Symbol* $tmp224 = $tmp227;
                    org$pandalanguage$pandac$Symbol* $tmp223 = $tmp224;
                    result192 = $tmp223;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p215));
            }
            goto $l207;
            $l208:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$129$13200));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result192));
    }
    }
    {
        org$pandalanguage$pandac$Symbol* $tmp229 = result192;
        tmp5228 = $tmp229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
        org$pandalanguage$pandac$Symbol* $tmp230 = tmp5228;
        return $tmp230;
    }
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Int64 $tmp239 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp240;
    $tmp240 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp240->value = $tmp239;
    panda$core$Object* $tmp238 = ((panda$core$Object*) $tmp240);
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s237, $tmp238);
    panda$core$String* $tmp236 = $tmp241;
    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s242);
    panda$core$String* $tmp235 = $tmp243;
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp235, ((panda$core$Object*) self->symbols));
    panda$core$String* $tmp234 = $tmp244;
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s245);
    panda$core$String* $tmp233 = $tmp246;
    panda$core$String* $tmp232 = $tmp233;
    panda$core$String* $tmp231 = $tmp232;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
    panda$core$Panda$unref$panda$core$Object($tmp238);
    return $tmp231;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

