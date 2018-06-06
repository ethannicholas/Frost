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
#include "org/pandalanguage/pandac/Symbol/Kind.h"
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

typedef panda$collections$Iterator* (*$fn92)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn99)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn110)(panda$collections$Iterator*);
typedef void (*$fn122)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn130)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn246)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn294)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn301)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn312)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    panda$collections$HashMap* $tmp5;
    panda$collections$HashMap* $tmp6;
    panda$collections$Array* $tmp8;
    panda$collections$Array* $tmp9;
    panda$core$Weak* $tmp11;
    panda$core$Weak* $tmp12;
    panda$core$Weak* $tmp13;
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->symbols = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->merged = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->parents = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    {
        $tmp11 = self->compiler;
        panda$core$Weak* $tmp14 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp14, ((panda$core$Object*) p_compiler));
        $tmp13 = $tmp14;
        $tmp12 = $tmp13;
        self->compiler = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$HashMap* $tmp15;
    panda$collections$HashMap* $tmp16;
    panda$collections$HashMap* $tmp18;
    panda$collections$HashMap* $tmp19;
    panda$collections$Array* $tmp21;
    panda$collections$Array* $tmp22;
    panda$core$Weak* $tmp24;
    panda$core$Weak* $tmp25;
    panda$core$Weak* $tmp26;
    panda$core$Object* $tmp28;
    self->symbols = NULL;
    self->compiler = NULL;
    self->merged = NULL;
    self->parents = NULL;
    panda$collections$HashMap* $tmp17 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp17);
    $tmp16 = $tmp17;
    $tmp15 = $tmp16;
    self->symbols = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$collections$HashMap* $tmp20 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp20);
    $tmp19 = $tmp20;
    $tmp18 = $tmp19;
    self->merged = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$collections$Array* $tmp23 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp23);
    $tmp22 = $tmp23;
    $tmp21 = $tmp22;
    self->parents = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    {
        $tmp24 = self->compiler;
        panda$core$Weak* $tmp27 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Object* $tmp29 = panda$core$Weak$get$R$panda$core$Weak$T(p_parent->compiler);
        $tmp28 = $tmp29;
        panda$core$Weak$init$panda$core$Weak$T($tmp27, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp28)));
        $tmp26 = $tmp27;
        $tmp25 = $tmp26;
        self->compiler = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object($tmp28);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    }
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) p_parent));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old33 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp34;
    panda$core$Object* $tmp35;
    panda$core$Int64 $tmp38;
    org$pandalanguage$pandac$Symbol$Kind $match$38_1340;
    panda$core$Int64 $tmp41;
    panda$collections$Array* methods46 = NULL;
    panda$collections$Array* $tmp47;
    panda$collections$Array* $tmp48;
    org$pandalanguage$pandac$Methods* $tmp50;
    panda$core$Int64 $tmp55;
    panda$collections$Array* methods60 = NULL;
    panda$collections$Array* $tmp61;
    panda$collections$Array* $tmp62;
    org$pandalanguage$pandac$Methods* $tmp64;
    panda$core$Object* $tmp69;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    panda$core$String* $tmp73;
    panda$core$Object* $tmp78;
    int $tmp32;
    {
        panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
        panda$core$Object* $tmp36 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
        $tmp35 = $tmp36;
        $tmp34 = ((org$pandalanguage$pandac$Symbol*) $tmp35);
        old33 = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object($tmp35);
        if (((panda$core$Bit) { old33 == NULL }).value) {
        {
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
            $tmp32 = 0;
            goto $l30;
            $l37:;
            return;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp38, 3);
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind.$rawValue, $tmp38);
        if ($tmp39.value) {
        {
            {
                $match$38_1340 = old33->kind;
                panda$core$Int64$init$builtin_int64(&$tmp41, 3);
                panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1340.$rawValue, $tmp41);
                if ($tmp42.value) {
                {
                    int $tmp45;
                    {
                        panda$collections$Array* $tmp49 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp49);
                        $tmp48 = $tmp49;
                        $tmp47 = $tmp48;
                        methods46 = $tmp47;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
                        panda$collections$Array$add$panda$collections$Array$T(methods46, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$add$panda$collections$Array$T(methods46, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old33)));
                        org$pandalanguage$pandac$Methods* $tmp51 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp51, ((panda$collections$ListView*) methods46));
                        $tmp50 = $tmp51;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp50)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
                        $tmp45 = 0;
                        goto $l43;
                        $l52:;
                        $tmp32 = 1;
                        goto $l30;
                        $l53:;
                        return;
                    }
                    $l43:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods46));
                    methods46 = NULL;
                    switch ($tmp45) {
                        case 0: goto $l52;
                    }
                    $l54:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp55, 4);
                panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1340.$rawValue, $tmp55);
                if ($tmp56.value) {
                {
                    int $tmp59;
                    {
                        panda$collections$Array* $tmp63 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp63);
                        $tmp62 = $tmp63;
                        $tmp61 = $tmp62;
                        methods60 = $tmp61;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
                        panda$collections$Array$add$panda$collections$Array$T(methods60, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods60, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old33)->methods));
                        org$pandalanguage$pandac$Methods* $tmp65 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp65, ((panda$collections$ListView*) methods60));
                        $tmp64 = $tmp65;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp64)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
                        $tmp59 = 0;
                        goto $l57;
                        $l66:;
                        $tmp32 = 2;
                        goto $l30;
                        $l67:;
                        return;
                    }
                    $l57:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods60));
                    methods60 = NULL;
                    switch ($tmp59) {
                        case 0: goto $l66;
                    }
                    $l68:;
                }
                }
                }
            }
        }
        }
        panda$core$Object* $tmp70 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp69 = $tmp70;
        panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s74, p_name);
        $tmp73 = $tmp75;
        panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, &$s76);
        $tmp72 = $tmp77;
        org$pandalanguage$pandac$Position$wrapper* $tmp79;
        $tmp79 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp79->value = old33->position;
        $tmp78 = ((panda$core$Object*) $tmp79);
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp72, $tmp78);
        $tmp71 = $tmp80;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp69), p_s->position, $tmp71);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object($tmp78);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object($tmp69);
    }
    $tmp32 = -1;
    goto $l30;
    $l30:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old33));
    old33 = NULL;
    switch ($tmp32) {
        case -1: goto $l81;
        case 2: goto $l67;
        case 1: goto $l53;
        case 0: goto $l37;
    }
    $l81:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$62$987 = NULL;
    panda$collections$Iterator* $tmp88;
    panda$collections$Iterator* $tmp89;
    org$pandalanguage$pandac$MethodDecl* test105 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp106;
    panda$core$Object* $tmp107;
    org$pandalanguage$pandac$MethodDecl* $tmp112;
    panda$core$Object* $tmp113;
    panda$core$Bit $tmp82 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp83 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp82);
    if ($tmp83.value) {
    {
        return;
    }
    }
    {
        int $tmp86;
        {
            ITable* $tmp90 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp90 = $tmp90->next;
            }
            $fn92 $tmp91 = $tmp90->methods[0];
            panda$collections$Iterator* $tmp93 = $tmp91(((panda$collections$Iterable*) p_methods));
            $tmp89 = $tmp93;
            $tmp88 = $tmp89;
            Iter$62$987 = $tmp88;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
            $l94:;
            ITable* $tmp97 = Iter$62$987->$class->itable;
            while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp97 = $tmp97->next;
            }
            $fn99 $tmp98 = $tmp97->methods[0];
            panda$core$Bit $tmp100 = $tmp98(Iter$62$987);
            panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp100);
            bool $tmp96 = $tmp101.value;
            if (!$tmp96) goto $l95;
            {
                int $tmp104;
                {
                    ITable* $tmp108 = Iter$62$987->$class->itable;
                    while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp108 = $tmp108->next;
                    }
                    $fn110 $tmp109 = $tmp108->methods[1];
                    panda$core$Object* $tmp111 = $tmp109(Iter$62$987);
                    $tmp107 = $tmp111;
                    $tmp106 = ((org$pandalanguage$pandac$MethodDecl*) $tmp107);
                    test105 = $tmp106;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
                    panda$core$Panda$unref$panda$core$Object($tmp107);
                    panda$core$Object* $tmp114 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                    $tmp113 = $tmp114;
                    org$pandalanguage$pandac$MethodDecl* $tmp115 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp113), test105);
                    $tmp112 = $tmp115;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
                    panda$core$Panda$unref$panda$core$Object($tmp113);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp112) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp104 = 0;
                        goto $l102;
                        $l116:;
                        $tmp86 = 0;
                        goto $l84;
                        $l117:;
                        return;
                    }
                    }
                }
                $tmp104 = -1;
                goto $l102;
                $l102:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test105));
                test105 = NULL;
                switch ($tmp104) {
                    case -1: goto $l118;
                    case 0: goto $l116;
                }
                $l118:;
            }
            goto $l94;
            $l95:;
        }
        $tmp86 = -1;
        goto $l84;
        $l84:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$987));
        Iter$62$987 = NULL;
        switch ($tmp86) {
            case 0: goto $l117;
            case -1: goto $l119;
        }
        $l119:;
    }
    ITable* $tmp120 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp120->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp120 = $tmp120->next;
    }
    $fn122 $tmp121 = $tmp120->methods[0];
    $tmp121(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    org$pandalanguage$pandac$Symbol* $returnValue123;
    org$pandalanguage$pandac$Symbol* $tmp124;
    org$pandalanguage$pandac$Symbol* $tmp126;
    org$pandalanguage$pandac$Symbol* $tmp128;
    org$pandalanguage$pandac$Symbol* $tmp133;
    org$pandalanguage$pandac$Symbol$Kind $match$84_9135;
    panda$core$Int64 $tmp136;
    org$pandalanguage$pandac$Symbol$Kind $match$86_17138;
    panda$core$Int64 $tmp139;
    panda$collections$Array* methods144 = NULL;
    panda$collections$Array* $tmp145;
    panda$collections$Array* $tmp146;
    panda$collections$Iterator* Iter$90$25151 = NULL;
    panda$collections$Iterator* $tmp152;
    panda$collections$Iterator* $tmp153;
    org$pandalanguage$pandac$MethodDecl* m169 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp170;
    panda$core$Object* $tmp171;
    org$pandalanguage$pandac$Symbol* $tmp178;
    org$pandalanguage$pandac$Methods* $tmp179;
    panda$core$Int64 $tmp184;
    org$pandalanguage$pandac$MethodDecl* $tmp189;
    panda$core$Object* $tmp190;
    org$pandalanguage$pandac$Symbol* $tmp193;
    panda$collections$Array* methods196 = NULL;
    panda$collections$Array* $tmp197;
    panda$collections$Array* $tmp198;
    org$pandalanguage$pandac$Symbol* $tmp200;
    org$pandalanguage$pandac$Methods* $tmp201;
    org$pandalanguage$pandac$Symbol* $tmp206;
    panda$core$Int64 $tmp208;
    org$pandalanguage$pandac$Symbol$Kind $match$107_17210;
    panda$core$Int64 $tmp211;
    panda$collections$Array* methods216 = NULL;
    panda$collections$Array* $tmp217;
    panda$collections$Array* $tmp218;
    panda$collections$Iterator* Iter$110$25223 = NULL;
    panda$collections$Iterator* $tmp224;
    panda$collections$Iterator* $tmp225;
    org$pandalanguage$pandac$MethodDecl* m241 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp242;
    panda$core$Object* $tmp243;
    org$pandalanguage$pandac$Symbol* $tmp250;
    org$pandalanguage$pandac$Methods* $tmp251;
    panda$core$Int64 $tmp256;
    panda$collections$Array* methods261 = NULL;
    panda$collections$Array* $tmp262;
    panda$collections$Array* $tmp263;
    org$pandalanguage$pandac$Symbol* $tmp265;
    org$pandalanguage$pandac$Methods* $tmp266;
    org$pandalanguage$pandac$Symbol* $tmp271;
    org$pandalanguage$pandac$Symbol* $tmp273;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp124 = p_symbol;
        $returnValue123 = $tmp124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
        return $returnValue123;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp126 = p_inherited;
        $returnValue123 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        return $returnValue123;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp128 = p_symbol;
        $returnValue123 = $tmp128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
        return $returnValue123;
    }
    }
    panda$core$Bit $tmp131 = (($fn130) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp131);
    if ($tmp132.value) {
    {
        $tmp133 = p_symbol;
        $returnValue123 = $tmp133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
        return $returnValue123;
    }
    }
    {
        $match$84_9135 = p_symbol->kind;
        panda$core$Int64$init$builtin_int64(&$tmp136, 3);
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9135.$rawValue, $tmp136);
        if ($tmp137.value) {
        {
            {
                $match$86_17138 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp139, 4);
                panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_17138.$rawValue, $tmp139);
                if ($tmp140.value) {
                {
                    int $tmp143;
                    {
                        panda$collections$Array* $tmp147 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp147);
                        $tmp146 = $tmp147;
                        $tmp145 = $tmp146;
                        methods144 = $tmp145;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                        panda$collections$Array$add$panda$collections$Array$T(methods144, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp150;
                            {
                                ITable* $tmp154 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp154 = $tmp154->next;
                                }
                                $fn156 $tmp155 = $tmp154->methods[0];
                                panda$collections$Iterator* $tmp157 = $tmp155(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp153 = $tmp157;
                                $tmp152 = $tmp153;
                                Iter$90$25151 = $tmp152;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                                $l158:;
                                ITable* $tmp161 = Iter$90$25151->$class->itable;
                                while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp161 = $tmp161->next;
                                }
                                $fn163 $tmp162 = $tmp161->methods[0];
                                panda$core$Bit $tmp164 = $tmp162(Iter$90$25151);
                                panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
                                bool $tmp160 = $tmp165.value;
                                if (!$tmp160) goto $l159;
                                {
                                    int $tmp168;
                                    {
                                        ITable* $tmp172 = Iter$90$25151->$class->itable;
                                        while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp172 = $tmp172->next;
                                        }
                                        $fn174 $tmp173 = $tmp172->methods[1];
                                        panda$core$Object* $tmp175 = $tmp173(Iter$90$25151);
                                        $tmp171 = $tmp175;
                                        $tmp170 = ((org$pandalanguage$pandac$MethodDecl*) $tmp171);
                                        m169 = $tmp170;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
                                        panda$core$Panda$unref$panda$core$Object($tmp171);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m169, ((panda$collections$List*) methods144));
                                    }
                                    $tmp168 = -1;
                                    goto $l166;
                                    $l166:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m169));
                                    m169 = NULL;
                                    switch ($tmp168) {
                                        case -1: goto $l176;
                                    }
                                    $l176:;
                                }
                                goto $l158;
                                $l159:;
                            }
                            $tmp150 = -1;
                            goto $l148;
                            $l148:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$90$25151));
                            Iter$90$25151 = NULL;
                            switch ($tmp150) {
                                case -1: goto $l177;
                            }
                            $l177:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp180 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp180, ((panda$collections$ListView*) methods144));
                        $tmp179 = $tmp180;
                        $tmp178 = ((org$pandalanguage$pandac$Symbol*) $tmp179);
                        $returnValue123 = $tmp178;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                        $tmp143 = 0;
                        goto $l141;
                        $l181:;
                        return $returnValue123;
                    }
                    $l141:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods144));
                    methods144 = NULL;
                    switch ($tmp143) {
                        case 0: goto $l181;
                    }
                    $l183:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp184, 3);
                panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_17138.$rawValue, $tmp184);
                if ($tmp185.value) {
                {
                    int $tmp188;
                    {
                        panda$core$Object* $tmp191 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp190 = $tmp191;
                        org$pandalanguage$pandac$MethodDecl* $tmp192 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp190), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp189 = $tmp192;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
                        panda$core$Panda$unref$panda$core$Object($tmp190);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp189) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp193 = p_symbol;
                            $returnValue123 = $tmp193;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                            $tmp188 = 0;
                            goto $l186;
                            $l194:;
                            return $returnValue123;
                        }
                        }
                        panda$collections$Array* $tmp199 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp199);
                        $tmp198 = $tmp199;
                        $tmp197 = $tmp198;
                        methods196 = $tmp197;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                        panda$collections$Array$add$panda$collections$Array$T(methods196, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods196, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp202 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp202, ((panda$collections$ListView*) methods196));
                        $tmp201 = $tmp202;
                        $tmp200 = ((org$pandalanguage$pandac$Symbol*) $tmp201);
                        $returnValue123 = $tmp200;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
                        $tmp188 = 1;
                        goto $l186;
                        $l203:;
                        return $returnValue123;
                    }
                    $l186:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods196));
                    methods196 = NULL;
                    switch ($tmp188) {
                        case 1: goto $l203;
                        case 0: goto $l194;
                    }
                    $l205:;
                }
                }
                else {
                {
                    $tmp206 = p_symbol;
                    $returnValue123 = $tmp206;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                    return $returnValue123;
                }
                }
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp208, 4);
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9135.$rawValue, $tmp208);
        if ($tmp209.value) {
        {
            {
                $match$107_17210 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp211, 4);
                panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17210.$rawValue, $tmp211);
                if ($tmp212.value) {
                {
                    int $tmp215;
                    {
                        panda$collections$Array* $tmp219 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp219, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp218 = $tmp219;
                        $tmp217 = $tmp218;
                        methods216 = $tmp217;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                        {
                            int $tmp222;
                            {
                                ITable* $tmp226 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp226 = $tmp226->next;
                                }
                                $fn228 $tmp227 = $tmp226->methods[0];
                                panda$collections$Iterator* $tmp229 = $tmp227(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp225 = $tmp229;
                                $tmp224 = $tmp225;
                                Iter$110$25223 = $tmp224;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
                                $l230:;
                                ITable* $tmp233 = Iter$110$25223->$class->itable;
                                while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp233 = $tmp233->next;
                                }
                                $fn235 $tmp234 = $tmp233->methods[0];
                                panda$core$Bit $tmp236 = $tmp234(Iter$110$25223);
                                panda$core$Bit $tmp237 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp236);
                                bool $tmp232 = $tmp237.value;
                                if (!$tmp232) goto $l231;
                                {
                                    int $tmp240;
                                    {
                                        ITable* $tmp244 = Iter$110$25223->$class->itable;
                                        while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp244 = $tmp244->next;
                                        }
                                        $fn246 $tmp245 = $tmp244->methods[1];
                                        panda$core$Object* $tmp247 = $tmp245(Iter$110$25223);
                                        $tmp243 = $tmp247;
                                        $tmp242 = ((org$pandalanguage$pandac$MethodDecl*) $tmp243);
                                        m241 = $tmp242;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                                        panda$core$Panda$unref$panda$core$Object($tmp243);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m241, ((panda$collections$List*) methods216));
                                    }
                                    $tmp240 = -1;
                                    goto $l238;
                                    $l238:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m241));
                                    m241 = NULL;
                                    switch ($tmp240) {
                                        case -1: goto $l248;
                                    }
                                    $l248:;
                                }
                                goto $l230;
                                $l231:;
                            }
                            $tmp222 = -1;
                            goto $l220;
                            $l220:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25223));
                            Iter$110$25223 = NULL;
                            switch ($tmp222) {
                                case -1: goto $l249;
                            }
                            $l249:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp252 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp252, ((panda$collections$ListView*) methods216));
                        $tmp251 = $tmp252;
                        $tmp250 = ((org$pandalanguage$pandac$Symbol*) $tmp251);
                        $returnValue123 = $tmp250;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                        $tmp215 = 0;
                        goto $l213;
                        $l253:;
                        return $returnValue123;
                    }
                    $l213:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods216));
                    methods216 = NULL;
                    switch ($tmp215) {
                        case 0: goto $l253;
                    }
                    $l255:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp256, 3);
                panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17210.$rawValue, $tmp256);
                if ($tmp257.value) {
                {
                    int $tmp260;
                    {
                        panda$collections$Array* $tmp264 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp264, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp263 = $tmp264;
                        $tmp262 = $tmp263;
                        methods261 = $tmp262;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods261));
                        org$pandalanguage$pandac$Methods* $tmp267 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp267, ((panda$collections$ListView*) methods261));
                        $tmp266 = $tmp267;
                        $tmp265 = ((org$pandalanguage$pandac$Symbol*) $tmp266);
                        $returnValue123 = $tmp265;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                        $tmp260 = 0;
                        goto $l258;
                        $l268:;
                        return $returnValue123;
                    }
                    $l258:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods261));
                    methods261 = NULL;
                    switch ($tmp260) {
                        case 0: goto $l268;
                    }
                    $l270:;
                }
                }
                else {
                {
                    $tmp271 = p_symbol;
                    $returnValue123 = $tmp271;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                    return $returnValue123;
                }
                }
                }
            }
        }
        }
        else {
        {
            $tmp273 = p_symbol;
            $returnValue123 = $tmp273;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
            return $returnValue123;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result278 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp279;
    panda$core$Object* $tmp280;
    org$pandalanguage$pandac$Symbol* $tmp282;
    org$pandalanguage$pandac$Symbol* $tmp283;
    panda$core$Object* $tmp284;
    panda$collections$Iterator* Iter$130$13289 = NULL;
    panda$collections$Iterator* $tmp290;
    panda$collections$Iterator* $tmp291;
    org$pandalanguage$pandac$SymbolTable* p307 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp308;
    panda$core$Object* $tmp309;
    org$pandalanguage$pandac$Symbol* $tmp314;
    org$pandalanguage$pandac$Symbol* $tmp315;
    org$pandalanguage$pandac$Symbol* $tmp316;
    org$pandalanguage$pandac$Symbol* $tmp317;
    org$pandalanguage$pandac$Symbol* $returnValue322;
    org$pandalanguage$pandac$Symbol* $tmp323;
    int $tmp277;
    {
        panda$core$Object* $tmp281 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp280 = $tmp281;
        $tmp279 = ((org$pandalanguage$pandac$Symbol*) $tmp280);
        result278 = $tmp279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
        panda$core$Panda$unref$panda$core$Object($tmp280);
        if (((panda$core$Bit) { result278 == NULL }).value) {
        {
            {
                $tmp282 = result278;
                panda$core$Object* $tmp285 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp284 = $tmp285;
                $tmp283 = ((org$pandalanguage$pandac$Symbol*) $tmp284);
                result278 = $tmp283;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
                panda$core$Panda$unref$panda$core$Object($tmp284);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
            }
            {
                int $tmp288;
                {
                    ITable* $tmp292 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp292 = $tmp292->next;
                    }
                    $fn294 $tmp293 = $tmp292->methods[0];
                    panda$collections$Iterator* $tmp295 = $tmp293(((panda$collections$Iterable*) self->parents));
                    $tmp291 = $tmp295;
                    $tmp290 = $tmp291;
                    Iter$130$13289 = $tmp290;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                    $l296:;
                    ITable* $tmp299 = Iter$130$13289->$class->itable;
                    while ($tmp299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp299 = $tmp299->next;
                    }
                    $fn301 $tmp300 = $tmp299->methods[0];
                    panda$core$Bit $tmp302 = $tmp300(Iter$130$13289);
                    panda$core$Bit $tmp303 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp302);
                    bool $tmp298 = $tmp303.value;
                    if (!$tmp298) goto $l297;
                    {
                        int $tmp306;
                        {
                            ITable* $tmp310 = Iter$130$13289->$class->itable;
                            while ($tmp310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp310 = $tmp310->next;
                            }
                            $fn312 $tmp311 = $tmp310->methods[1];
                            panda$core$Object* $tmp313 = $tmp311(Iter$130$13289);
                            $tmp309 = $tmp313;
                            $tmp308 = ((org$pandalanguage$pandac$SymbolTable*) $tmp309);
                            p307 = $tmp308;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                            panda$core$Panda$unref$panda$core$Object($tmp309);
                            {
                                $tmp314 = result278;
                                org$pandalanguage$pandac$Symbol* $tmp318 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p307, p_name);
                                $tmp317 = $tmp318;
                                org$pandalanguage$pandac$Symbol* $tmp319 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result278, $tmp317);
                                $tmp316 = $tmp319;
                                $tmp315 = $tmp316;
                                result278 = $tmp315;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                            }
                        }
                        $tmp306 = -1;
                        goto $l304;
                        $l304:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p307));
                        p307 = NULL;
                        switch ($tmp306) {
                            case -1: goto $l320;
                        }
                        $l320:;
                    }
                    goto $l296;
                    $l297:;
                }
                $tmp288 = -1;
                goto $l286;
                $l286:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13289));
                Iter$130$13289 = NULL;
                switch ($tmp288) {
                    case -1: goto $l321;
                }
                $l321:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result278));
        }
        }
        $tmp323 = result278;
        $returnValue322 = $tmp323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
        $tmp277 = 0;
        goto $l275;
        $l324:;
        return $returnValue322;
    }
    $l275:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result278));
    result278 = NULL;
    switch ($tmp277) {
        case 0: goto $l324;
    }
    $l326:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $returnValue327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$Object* $tmp334;
    panda$core$Int64 $tmp335 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp336;
    $tmp336 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp336->value = $tmp335;
    $tmp334 = ((panda$core$Object*) $tmp336);
    panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s333, $tmp334);
    $tmp332 = $tmp337;
    panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s338);
    $tmp331 = $tmp339;
    panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp331, ((panda$core$Object*) self->symbols));
    $tmp330 = $tmp340;
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s341);
    $tmp329 = $tmp342;
    $tmp328 = $tmp329;
    $returnValue327 = $tmp328;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
    panda$core$Panda$unref$panda$core$Object($tmp334);
    return $returnValue327;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp346;
    {
    }
    $tmp346 = -1;
    goto $l344;
    $l344:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp346) {
        case -1: goto $l347;
    }
    $l347:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}





