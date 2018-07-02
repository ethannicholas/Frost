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
#include "panda/io/Console.h"
#include "panda/collections/CollectionWriter.h"

static panda$core$String $s1;
org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, org$pandalanguage$pandac$SymbolTable$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$collections$Iterator* (*$fn95)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn113)(panda$collections$Iterator*);
typedef void (*$fn149)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn157)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn183)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn190)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn201)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn279)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn290)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn342)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn349)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn360)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn389)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x72\x61\x20\x72\x65\x6a\x65\x63\x74\x3a\x20", 14, -2090383744193676544, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x75\x65\x20\x74\x6f\x20", 8, 14366792424106642, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 17, -5109432423674253279, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 17, -5109432423674253279, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    panda$core$String* $tmp74;
    panda$core$Object* $tmp79;
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
        panda$core$Int64$init$builtin_int64(&$tmp38, 4);
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind.$rawValue, $tmp38);
        if ($tmp39.value) {
        {
            {
                $match$38_1340 = old33->kind;
                panda$core$Int64$init$builtin_int64(&$tmp41, 4);
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
                panda$core$Int64$init$builtin_int64(&$tmp55, 5);
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
        panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s75, p_name);
        $tmp74 = $tmp76;
        panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s77);
        $tmp73 = $tmp78;
        org$pandalanguage$pandac$Position$wrapper* $tmp80;
        $tmp80 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp80->value = old33->position;
        $tmp79 = ((panda$core$Object*) $tmp80);
        panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp73, $tmp79);
        $tmp72 = $tmp81;
        panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s82);
        $tmp71 = $tmp83;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp69), p_s->position, $tmp71);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object($tmp79);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object($tmp69);
    }
    $tmp32 = -1;
    goto $l30;
    $l30:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old33));
    old33 = NULL;
    switch ($tmp32) {
        case -1: goto $l84;
        case 2: goto $l67;
        case 1: goto $l53;
        case 0: goto $l37;
    }
    $l84:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$62$990 = NULL;
    panda$collections$Iterator* $tmp91;
    panda$collections$Iterator* $tmp92;
    org$pandalanguage$pandac$MethodDecl* test108 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp109;
    panda$core$Object* $tmp110;
    org$pandalanguage$pandac$MethodDecl* overridden115 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp116;
    org$pandalanguage$pandac$MethodDecl* $tmp117;
    panda$core$Object* $tmp118;
    org$pandalanguage$pandac$MethodDecl* $tmp125;
    panda$core$Object* $tmp126;
    panda$core$String* $tmp130;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $tmp135;
    panda$core$String* $tmp140;
    panda$core$Bit $tmp85 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp86 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp85);
    if ($tmp86.value) {
    {
        return;
    }
    }
    {
        int $tmp89;
        {
            ITable* $tmp93 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp93 = $tmp93->next;
            }
            $fn95 $tmp94 = $tmp93->methods[0];
            panda$collections$Iterator* $tmp96 = $tmp94(((panda$collections$Iterable*) p_methods));
            $tmp92 = $tmp96;
            $tmp91 = $tmp92;
            Iter$62$990 = $tmp91;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
            $l97:;
            ITable* $tmp100 = Iter$62$990->$class->itable;
            while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp100 = $tmp100->next;
            }
            $fn102 $tmp101 = $tmp100->methods[0];
            panda$core$Bit $tmp103 = $tmp101(Iter$62$990);
            panda$core$Bit $tmp104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp103);
            bool $tmp99 = $tmp104.value;
            if (!$tmp99) goto $l98;
            {
                int $tmp107;
                {
                    ITable* $tmp111 = Iter$62$990->$class->itable;
                    while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp111 = $tmp111->next;
                    }
                    $fn113 $tmp112 = $tmp111->methods[1];
                    panda$core$Object* $tmp114 = $tmp112(Iter$62$990);
                    $tmp110 = $tmp114;
                    $tmp109 = ((org$pandalanguage$pandac$MethodDecl*) $tmp110);
                    test108 = $tmp109;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
                    panda$core$Panda$unref$panda$core$Object($tmp110);
                    panda$core$Object* $tmp119 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                    $tmp118 = $tmp119;
                    org$pandalanguage$pandac$MethodDecl* $tmp120 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp118), test108);
                    $tmp117 = $tmp120;
                    $tmp116 = $tmp117;
                    overridden115 = $tmp116;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
                    panda$core$Panda$unref$panda$core$Object($tmp118);
                    if (((panda$core$Bit) { ((panda$core$Object*) overridden115) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp107 = 0;
                        goto $l105;
                        $l121:;
                        $tmp89 = 0;
                        goto $l87;
                        $l122:;
                        return;
                    }
                    }
                    bool $tmp123 = ((panda$core$Bit) { overridden115 != NULL }).value;
                    if (!$tmp123) goto $l124;
                    panda$core$Object* $tmp127 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                    $tmp126 = $tmp127;
                    org$pandalanguage$pandac$MethodDecl* $tmp128 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp126), p_m);
                    $tmp125 = $tmp128;
                    $tmp123 = ((panda$core$Bit) { ((panda$core$Object*) overridden115) == ((panda$core$Object*) $tmp125) }).value;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
                    panda$core$Panda$unref$panda$core$Object($tmp126);
                    $l124:;
                    panda$core$Bit $tmp129 = { $tmp123 };
                    if ($tmp129.value) {
                    {
                        panda$core$String* $tmp136 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden115);
                        $tmp135 = $tmp136;
                        panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s134, $tmp135);
                        $tmp133 = $tmp137;
                        panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s138);
                        $tmp132 = $tmp139;
                        panda$core$String* $tmp141 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                        $tmp140 = $tmp141;
                        panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, $tmp140);
                        $tmp131 = $tmp142;
                        panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s143);
                        $tmp130 = $tmp144;
                        panda$io$Console$printLine$panda$core$String($tmp130);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
                    }
                    }
                }
                $tmp107 = -1;
                goto $l105;
                $l105:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test108));
                test108 = NULL;
                overridden115 = NULL;
                switch ($tmp107) {
                    case -1: goto $l145;
                    case 0: goto $l121;
                }
                $l145:;
            }
            goto $l97;
            $l98:;
        }
        $tmp89 = -1;
        goto $l87;
        $l87:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$990));
        Iter$62$990 = NULL;
        switch ($tmp89) {
            case -1: goto $l146;
            case 0: goto $l122;
        }
        $l146:;
    }
    ITable* $tmp147 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp147->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp147 = $tmp147->next;
    }
    $fn149 $tmp148 = $tmp147->methods[0];
    $tmp148(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    org$pandalanguage$pandac$Symbol* $returnValue150;
    org$pandalanguage$pandac$Symbol* $tmp151;
    org$pandalanguage$pandac$Symbol* $tmp153;
    org$pandalanguage$pandac$Symbol* $tmp155;
    org$pandalanguage$pandac$Symbol* $tmp160;
    org$pandalanguage$pandac$Symbol$Kind $match$88_9162;
    panda$core$Int64 $tmp163;
    org$pandalanguage$pandac$Symbol$Kind $match$90_17165;
    panda$core$Int64 $tmp166;
    panda$collections$Array* methods171 = NULL;
    panda$collections$Array* $tmp172;
    panda$collections$Array* $tmp173;
    panda$collections$Iterator* Iter$94$25178 = NULL;
    panda$collections$Iterator* $tmp179;
    panda$collections$Iterator* $tmp180;
    org$pandalanguage$pandac$MethodDecl* m196 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp197;
    panda$core$Object* $tmp198;
    org$pandalanguage$pandac$Symbol* $tmp205;
    org$pandalanguage$pandac$Methods* $tmp206;
    panda$core$Int64 $tmp211;
    org$pandalanguage$pandac$MethodDecl* overridden1216 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp217;
    org$pandalanguage$pandac$MethodDecl* $tmp218;
    panda$core$Object* $tmp219;
    org$pandalanguage$pandac$MethodDecl* overridden2222 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp223;
    org$pandalanguage$pandac$MethodDecl* $tmp224;
    panda$core$Object* $tmp225;
    org$pandalanguage$pandac$Symbol* $tmp237;
    panda$collections$Array* methods240 = NULL;
    panda$collections$Array* $tmp241;
    panda$collections$Array* $tmp242;
    org$pandalanguage$pandac$Symbol* $tmp244;
    org$pandalanguage$pandac$Methods* $tmp245;
    org$pandalanguage$pandac$Symbol* $tmp250;
    panda$core$Int64 $tmp252;
    org$pandalanguage$pandac$Symbol$Kind $match$114_17254;
    panda$core$Int64 $tmp255;
    panda$collections$Array* methods260 = NULL;
    panda$collections$Array* $tmp261;
    panda$collections$Array* $tmp262;
    panda$collections$Iterator* Iter$117$25267 = NULL;
    panda$collections$Iterator* $tmp268;
    panda$collections$Iterator* $tmp269;
    org$pandalanguage$pandac$MethodDecl* m285 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp286;
    panda$core$Object* $tmp287;
    org$pandalanguage$pandac$Symbol* $tmp294;
    org$pandalanguage$pandac$Methods* $tmp295;
    panda$core$Int64 $tmp300;
    panda$collections$Array* methods305 = NULL;
    panda$collections$Array* $tmp306;
    panda$collections$Array* $tmp307;
    org$pandalanguage$pandac$Symbol* $tmp309;
    org$pandalanguage$pandac$Methods* $tmp310;
    org$pandalanguage$pandac$Symbol* $tmp315;
    org$pandalanguage$pandac$Symbol* $tmp317;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp151 = p_symbol;
        $returnValue150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        return $returnValue150;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp153 = p_inherited;
        $returnValue150 = $tmp153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
        return $returnValue150;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp155 = p_symbol;
        $returnValue150 = $tmp155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
        return $returnValue150;
    }
    }
    panda$core$Bit $tmp158 = (($fn157) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp158);
    if ($tmp159.value) {
    {
        $tmp160 = p_symbol;
        $returnValue150 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        return $returnValue150;
    }
    }
    {
        $match$88_9162 = p_symbol->kind;
        panda$core$Int64$init$builtin_int64(&$tmp163, 4);
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9162.$rawValue, $tmp163);
        if ($tmp164.value) {
        {
            {
                $match$90_17165 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp166, 5);
                panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17165.$rawValue, $tmp166);
                if ($tmp167.value) {
                {
                    int $tmp170;
                    {
                        panda$collections$Array* $tmp174 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp174);
                        $tmp173 = $tmp174;
                        $tmp172 = $tmp173;
                        methods171 = $tmp172;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                        panda$collections$Array$add$panda$collections$Array$T(methods171, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp177;
                            {
                                ITable* $tmp181 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp181 = $tmp181->next;
                                }
                                $fn183 $tmp182 = $tmp181->methods[0];
                                panda$collections$Iterator* $tmp184 = $tmp182(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp180 = $tmp184;
                                $tmp179 = $tmp180;
                                Iter$94$25178 = $tmp179;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
                                $l185:;
                                ITable* $tmp188 = Iter$94$25178->$class->itable;
                                while ($tmp188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp188 = $tmp188->next;
                                }
                                $fn190 $tmp189 = $tmp188->methods[0];
                                panda$core$Bit $tmp191 = $tmp189(Iter$94$25178);
                                panda$core$Bit $tmp192 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp191);
                                bool $tmp187 = $tmp192.value;
                                if (!$tmp187) goto $l186;
                                {
                                    int $tmp195;
                                    {
                                        ITable* $tmp199 = Iter$94$25178->$class->itable;
                                        while ($tmp199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp199 = $tmp199->next;
                                        }
                                        $fn201 $tmp200 = $tmp199->methods[1];
                                        panda$core$Object* $tmp202 = $tmp200(Iter$94$25178);
                                        $tmp198 = $tmp202;
                                        $tmp197 = ((org$pandalanguage$pandac$MethodDecl*) $tmp198);
                                        m196 = $tmp197;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
                                        panda$core$Panda$unref$panda$core$Object($tmp198);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m196, ((panda$collections$List*) methods171));
                                    }
                                    $tmp195 = -1;
                                    goto $l193;
                                    $l193:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m196));
                                    m196 = NULL;
                                    switch ($tmp195) {
                                        case -1: goto $l203;
                                    }
                                    $l203:;
                                }
                                goto $l185;
                                $l186:;
                            }
                            $tmp177 = -1;
                            goto $l175;
                            $l175:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$94$25178));
                            Iter$94$25178 = NULL;
                            switch ($tmp177) {
                                case -1: goto $l204;
                            }
                            $l204:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp207 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp207, ((panda$collections$ListView*) methods171));
                        $tmp206 = $tmp207;
                        $tmp205 = ((org$pandalanguage$pandac$Symbol*) $tmp206);
                        $returnValue150 = $tmp205;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                        $tmp170 = 0;
                        goto $l168;
                        $l208:;
                        return $returnValue150;
                    }
                    $l168:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods171));
                    methods171 = NULL;
                    switch ($tmp170) {
                        case 0: goto $l208;
                    }
                    $l210:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp211, 4);
                panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17165.$rawValue, $tmp211);
                if ($tmp212.value) {
                {
                    int $tmp215;
                    {
                        panda$core$Object* $tmp220 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp219 = $tmp220;
                        org$pandalanguage$pandac$MethodDecl* $tmp221 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp219), ((org$pandalanguage$pandac$MethodDecl*) p_inherited));
                        $tmp218 = $tmp221;
                        $tmp217 = $tmp218;
                        overridden1216 = $tmp217;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                        panda$core$Panda$unref$panda$core$Object($tmp219);
                        panda$core$Object* $tmp226 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp225 = $tmp226;
                        org$pandalanguage$pandac$MethodDecl* $tmp227 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp225), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp224 = $tmp227;
                        $tmp223 = $tmp224;
                        overridden2222 = $tmp223;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                        panda$core$Panda$unref$panda$core$Object($tmp225);
                        bool $tmp229 = ((panda$core$Bit) { ((panda$core$Object*) overridden1216) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)) }).value;
                        if ($tmp229) goto $l230;
                        $tmp229 = ((panda$core$Bit) { ((panda$core$Object*) overridden2222) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value;
                        $l230:;
                        panda$core$Bit $tmp231 = { $tmp229 };
                        bool $tmp228 = $tmp231.value;
                        if ($tmp228) goto $l232;
                        bool $tmp233 = ((panda$core$Bit) { overridden1216 != NULL }).value;
                        if (!$tmp233) goto $l234;
                        $tmp233 = ((panda$core$Bit) { ((panda$core$Object*) overridden1216) == ((panda$core$Object*) overridden2222) }).value;
                        $l234:;
                        panda$core$Bit $tmp235 = { $tmp233 };
                        $tmp228 = $tmp235.value;
                        $l232:;
                        panda$core$Bit $tmp236 = { $tmp228 };
                        if ($tmp236.value) {
                        {
                            $tmp237 = p_symbol;
                            $returnValue150 = $tmp237;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
                            $tmp215 = 0;
                            goto $l213;
                            $l238:;
                            return $returnValue150;
                        }
                        }
                        panda$collections$Array* $tmp243 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp243);
                        $tmp242 = $tmp243;
                        $tmp241 = $tmp242;
                        methods240 = $tmp241;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                        panda$collections$Array$add$panda$collections$Array$T(methods240, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods240, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp246 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp246, ((panda$collections$ListView*) methods240));
                        $tmp245 = $tmp246;
                        $tmp244 = ((org$pandalanguage$pandac$Symbol*) $tmp245);
                        $returnValue150 = $tmp244;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                        $tmp215 = 1;
                        goto $l213;
                        $l247:;
                        return $returnValue150;
                    }
                    $l213:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods240));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden2222));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden1216));
                    overridden1216 = NULL;
                    overridden2222 = NULL;
                    methods240 = NULL;
                    switch ($tmp215) {
                        case 0: goto $l238;
                        case 1: goto $l247;
                    }
                    $l249:;
                }
                }
                else {
                {
                    $tmp250 = p_symbol;
                    $returnValue150 = $tmp250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                    return $returnValue150;
                }
                }
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp252, 5);
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9162.$rawValue, $tmp252);
        if ($tmp253.value) {
        {
            {
                $match$114_17254 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp255, 5);
                panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_17254.$rawValue, $tmp255);
                if ($tmp256.value) {
                {
                    int $tmp259;
                    {
                        panda$collections$Array* $tmp263 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp263, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp262 = $tmp263;
                        $tmp261 = $tmp262;
                        methods260 = $tmp261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                        {
                            int $tmp266;
                            {
                                ITable* $tmp270 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp270 = $tmp270->next;
                                }
                                $fn272 $tmp271 = $tmp270->methods[0];
                                panda$collections$Iterator* $tmp273 = $tmp271(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp269 = $tmp273;
                                $tmp268 = $tmp269;
                                Iter$117$25267 = $tmp268;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                                $l274:;
                                ITable* $tmp277 = Iter$117$25267->$class->itable;
                                while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp277 = $tmp277->next;
                                }
                                $fn279 $tmp278 = $tmp277->methods[0];
                                panda$core$Bit $tmp280 = $tmp278(Iter$117$25267);
                                panda$core$Bit $tmp281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp280);
                                bool $tmp276 = $tmp281.value;
                                if (!$tmp276) goto $l275;
                                {
                                    int $tmp284;
                                    {
                                        ITable* $tmp288 = Iter$117$25267->$class->itable;
                                        while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp288 = $tmp288->next;
                                        }
                                        $fn290 $tmp289 = $tmp288->methods[1];
                                        panda$core$Object* $tmp291 = $tmp289(Iter$117$25267);
                                        $tmp287 = $tmp291;
                                        $tmp286 = ((org$pandalanguage$pandac$MethodDecl*) $tmp287);
                                        m285 = $tmp286;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                                        panda$core$Panda$unref$panda$core$Object($tmp287);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m285, ((panda$collections$List*) methods260));
                                    }
                                    $tmp284 = -1;
                                    goto $l282;
                                    $l282:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m285));
                                    m285 = NULL;
                                    switch ($tmp284) {
                                        case -1: goto $l292;
                                    }
                                    $l292:;
                                }
                                goto $l274;
                                $l275:;
                            }
                            $tmp266 = -1;
                            goto $l264;
                            $l264:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$117$25267));
                            Iter$117$25267 = NULL;
                            switch ($tmp266) {
                                case -1: goto $l293;
                            }
                            $l293:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp296 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp296, ((panda$collections$ListView*) methods260));
                        $tmp295 = $tmp296;
                        $tmp294 = ((org$pandalanguage$pandac$Symbol*) $tmp295);
                        $returnValue150 = $tmp294;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
                        $tmp259 = 0;
                        goto $l257;
                        $l297:;
                        return $returnValue150;
                    }
                    $l257:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods260));
                    methods260 = NULL;
                    switch ($tmp259) {
                        case 0: goto $l297;
                    }
                    $l299:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp300, 4);
                panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_17254.$rawValue, $tmp300);
                if ($tmp301.value) {
                {
                    int $tmp304;
                    {
                        panda$collections$Array* $tmp308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp308, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp307 = $tmp308;
                        $tmp306 = $tmp307;
                        methods305 = $tmp306;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods305));
                        org$pandalanguage$pandac$Methods* $tmp311 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp311, ((panda$collections$ListView*) methods305));
                        $tmp310 = $tmp311;
                        $tmp309 = ((org$pandalanguage$pandac$Symbol*) $tmp310);
                        $returnValue150 = $tmp309;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                        $tmp304 = 0;
                        goto $l302;
                        $l312:;
                        return $returnValue150;
                    }
                    $l302:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods305));
                    methods305 = NULL;
                    switch ($tmp304) {
                        case 0: goto $l312;
                    }
                    $l314:;
                }
                }
                else {
                {
                    $tmp315 = p_symbol;
                    $returnValue150 = $tmp315;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                    return $returnValue150;
                }
                }
                }
            }
        }
        }
        else {
        {
            $tmp317 = p_symbol;
            $returnValue150 = $tmp317;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
            return $returnValue150;
        }
        }
        }
    }
    if (false) goto $l319; else goto $l320;
    $l320:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s321, (panda$core$Int64) { 75 }, &$s322);
    abort();
    $l319:;
    abort();
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result326 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp327;
    panda$core$Object* $tmp328;
    org$pandalanguage$pandac$Symbol* $tmp330;
    org$pandalanguage$pandac$Symbol* $tmp331;
    panda$core$Object* $tmp332;
    panda$collections$Iterator* Iter$137$13337 = NULL;
    panda$collections$Iterator* $tmp338;
    panda$collections$Iterator* $tmp339;
    org$pandalanguage$pandac$SymbolTable* p355 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp356;
    panda$core$Object* $tmp357;
    org$pandalanguage$pandac$Symbol* $tmp362;
    org$pandalanguage$pandac$Symbol* $tmp363;
    org$pandalanguage$pandac$Symbol* $tmp364;
    org$pandalanguage$pandac$Symbol* $tmp365;
    org$pandalanguage$pandac$Symbol* $returnValue370;
    org$pandalanguage$pandac$Symbol* $tmp371;
    int $tmp325;
    {
        panda$core$Object* $tmp329 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp328 = $tmp329;
        $tmp327 = ((org$pandalanguage$pandac$Symbol*) $tmp328);
        result326 = $tmp327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
        panda$core$Panda$unref$panda$core$Object($tmp328);
        if (((panda$core$Bit) { result326 == NULL }).value) {
        {
            {
                $tmp330 = result326;
                panda$core$Object* $tmp333 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp332 = $tmp333;
                $tmp331 = ((org$pandalanguage$pandac$Symbol*) $tmp332);
                result326 = $tmp331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object($tmp332);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
            }
            {
                int $tmp336;
                {
                    ITable* $tmp340 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp340 = $tmp340->next;
                    }
                    $fn342 $tmp341 = $tmp340->methods[0];
                    panda$collections$Iterator* $tmp343 = $tmp341(((panda$collections$Iterable*) self->parents));
                    $tmp339 = $tmp343;
                    $tmp338 = $tmp339;
                    Iter$137$13337 = $tmp338;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                    $l344:;
                    ITable* $tmp347 = Iter$137$13337->$class->itable;
                    while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp347 = $tmp347->next;
                    }
                    $fn349 $tmp348 = $tmp347->methods[0];
                    panda$core$Bit $tmp350 = $tmp348(Iter$137$13337);
                    panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
                    bool $tmp346 = $tmp351.value;
                    if (!$tmp346) goto $l345;
                    {
                        int $tmp354;
                        {
                            ITable* $tmp358 = Iter$137$13337->$class->itable;
                            while ($tmp358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp358 = $tmp358->next;
                            }
                            $fn360 $tmp359 = $tmp358->methods[1];
                            panda$core$Object* $tmp361 = $tmp359(Iter$137$13337);
                            $tmp357 = $tmp361;
                            $tmp356 = ((org$pandalanguage$pandac$SymbolTable*) $tmp357);
                            p355 = $tmp356;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
                            panda$core$Panda$unref$panda$core$Object($tmp357);
                            {
                                $tmp362 = result326;
                                org$pandalanguage$pandac$Symbol* $tmp366 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p355, p_name);
                                $tmp365 = $tmp366;
                                org$pandalanguage$pandac$Symbol* $tmp367 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result326, $tmp365);
                                $tmp364 = $tmp367;
                                $tmp363 = $tmp364;
                                result326 = $tmp363;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
                            }
                        }
                        $tmp354 = -1;
                        goto $l352;
                        $l352:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p355));
                        p355 = NULL;
                        switch ($tmp354) {
                            case -1: goto $l368;
                        }
                        $l368:;
                    }
                    goto $l344;
                    $l345:;
                }
                $tmp336 = -1;
                goto $l334;
                $l334:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$137$13337));
                Iter$137$13337 = NULL;
                switch ($tmp336) {
                    case -1: goto $l369;
                }
                $l369:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result326));
        }
        }
        $tmp371 = result326;
        $returnValue370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
        $tmp325 = 0;
        goto $l323;
        $l372:;
        return $returnValue370;
    }
    $l323:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result326));
    result326 = NULL;
    switch ($tmp325) {
        case 0: goto $l372;
    }
    $l374:;
    if (false) goto $l375; else goto $l376;
    $l376:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s377, (panda$core$Int64) { 133 }, &$s378);
    abort();
    $l375:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $returnValue379;
    panda$core$String* $tmp380;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$core$String* $tmp383;
    panda$core$String* $tmp384;
    panda$core$Object* $tmp386;
    ITable* $tmp387 = ((panda$collections$CollectionView*) self->parents)->$class->itable;
    while ($tmp387->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp387 = $tmp387->next;
    }
    $fn389 $tmp388 = $tmp387->methods[0];
    panda$core$Int64 $tmp390 = $tmp388(((panda$collections$CollectionView*) self->parents));
    panda$core$Int64$wrapper* $tmp391;
    $tmp391 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp391->value = $tmp390;
    $tmp386 = ((panda$core$Object*) $tmp391);
    panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s385, $tmp386);
    $tmp384 = $tmp392;
    panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s393);
    $tmp383 = $tmp394;
    panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp383, ((panda$core$Object*) self->symbols));
    $tmp382 = $tmp395;
    panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s396);
    $tmp381 = $tmp397;
    $tmp380 = $tmp381;
    $returnValue379 = $tmp380;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
    panda$core$Panda$unref$panda$core$Object($tmp386);
    return $returnValue379;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp401;
    {
    }
    $tmp401 = -1;
    goto $l399;
    $l399:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp401) {
        case -1: goto $l402;
    }
    $l402:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}





