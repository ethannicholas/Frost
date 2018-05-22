#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Weak.h"
#include "panda/core/Method.h"
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

typedef panda$core$Object* (*$fn29)(panda$core$Weak*);
typedef panda$core$Object* (*$fn68)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn91)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn98)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn113)(panda$core$Weak*);
typedef void (*$fn122)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn130)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn154)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn188)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn242)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn289)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn307)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
        panda$core$Object* $tmp30 = (($fn29) p_parent->compiler->$class->vtable[2])(p_parent->compiler);
        $tmp28 = $tmp30;
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
    org$pandalanguage$pandac$Symbol* old34 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp35;
    panda$core$Object* $tmp36;
    org$pandalanguage$pandac$Symbol$Kind $match$38_1340;
    panda$collections$Array* methods45 = NULL;
    panda$collections$Array* $tmp46;
    panda$collections$Array* $tmp47;
    org$pandalanguage$pandac$Methods* $tmp49;
    panda$collections$Array* methods58 = NULL;
    panda$collections$Array* $tmp59;
    panda$collections$Array* $tmp60;
    org$pandalanguage$pandac$Methods* $tmp62;
    panda$core$Object* $tmp67;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    panda$core$Object* $tmp77;
    int $tmp33;
    {
        panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
        panda$core$Object* $tmp37 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
        $tmp36 = $tmp37;
        $tmp35 = ((org$pandalanguage$pandac$Symbol*) $tmp36);
        old34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object($tmp36);
        if (((panda$core$Bit) { old34 == NULL }).value) {
        {
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
            $tmp33 = 0;
            goto $l31;
            $l38:;
            return;
        }
        }
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp39.value) {
        {
            {
                $match$38_1340 = old34->kind;
                panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1340.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp41.value) {
                {
                    int $tmp44;
                    {
                        panda$collections$Array* $tmp48 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp48);
                        $tmp47 = $tmp48;
                        $tmp46 = $tmp47;
                        methods45 = $tmp46;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                        panda$collections$Array$add$panda$collections$Array$T(methods45, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$add$panda$collections$Array$T(methods45, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old34)));
                        org$pandalanguage$pandac$Methods* $tmp50 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp50, ((panda$collections$ListView*) methods45));
                        $tmp49 = $tmp50;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp49)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
                        $tmp44 = 0;
                        goto $l42;
                        $l51:;
                        $tmp33 = 1;
                        goto $l31;
                        $l52:;
                        return;
                    }
                    $l42:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods45));
                    methods45 = NULL;
                    switch ($tmp44) {
                        case 0: goto $l51;
                    }
                    $l53:;
                }
                }
                else {
                panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1340.$rawValue, ((panda$core$Int64) { 4 }));
                if ($tmp54.value) {
                {
                    int $tmp57;
                    {
                        panda$collections$Array* $tmp61 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp61);
                        $tmp60 = $tmp61;
                        $tmp59 = $tmp60;
                        methods58 = $tmp59;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
                        panda$collections$Array$add$panda$collections$Array$T(methods58, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods58, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old34)->methods));
                        org$pandalanguage$pandac$Methods* $tmp63 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp63, ((panda$collections$ListView*) methods58));
                        $tmp62 = $tmp63;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp62)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
                        $tmp57 = 0;
                        goto $l55;
                        $l64:;
                        $tmp33 = 2;
                        goto $l31;
                        $l65:;
                        return;
                    }
                    $l55:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods58));
                    methods58 = NULL;
                    switch ($tmp57) {
                        case 0: goto $l64;
                    }
                    $l66:;
                }
                }
                }
            }
        }
        }
        panda$core$Object* $tmp69 = (($fn68) self->compiler->$class->vtable[2])(self->compiler);
        $tmp67 = $tmp69;
        panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s73, p_name);
        $tmp72 = $tmp74;
        panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s75);
        $tmp71 = $tmp76;
        org$pandalanguage$pandac$Position$wrapper* $tmp78;
        $tmp78 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp78->value = old34->position;
        $tmp77 = ((panda$core$Object*) $tmp78);
        panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp71, $tmp77);
        $tmp70 = $tmp79;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp67), p_s->position, $tmp70);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object($tmp77);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object($tmp67);
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old34));
    old34 = NULL;
    switch ($tmp33) {
        case -1: goto $l80;
        case 2: goto $l65;
        case 1: goto $l52;
        case 0: goto $l38;
    }
    $l80:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$62$986 = NULL;
    panda$collections$Iterator* $tmp87;
    panda$collections$Iterator* $tmp88;
    org$pandalanguage$pandac$MethodDecl* test104 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp105;
    panda$core$Object* $tmp106;
    org$pandalanguage$pandac$MethodDecl* $tmp111;
    panda$core$Object* $tmp112;
    panda$core$Bit $tmp81 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp82 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp81);
    if ($tmp82.value) {
    {
        return;
    }
    }
    {
        int $tmp85;
        {
            ITable* $tmp89 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp89 = $tmp89->next;
            }
            $fn91 $tmp90 = $tmp89->methods[0];
            panda$collections$Iterator* $tmp92 = $tmp90(((panda$collections$Iterable*) p_methods));
            $tmp88 = $tmp92;
            $tmp87 = $tmp88;
            Iter$62$986 = $tmp87;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
            $l93:;
            ITable* $tmp96 = Iter$62$986->$class->itable;
            while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp96 = $tmp96->next;
            }
            $fn98 $tmp97 = $tmp96->methods[0];
            panda$core$Bit $tmp99 = $tmp97(Iter$62$986);
            panda$core$Bit $tmp100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp99);
            bool $tmp95 = $tmp100.value;
            if (!$tmp95) goto $l94;
            {
                int $tmp103;
                {
                    ITable* $tmp107 = Iter$62$986->$class->itable;
                    while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp107 = $tmp107->next;
                    }
                    $fn109 $tmp108 = $tmp107->methods[1];
                    panda$core$Object* $tmp110 = $tmp108(Iter$62$986);
                    $tmp106 = $tmp110;
                    $tmp105 = ((org$pandalanguage$pandac$MethodDecl*) $tmp106);
                    test104 = $tmp105;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
                    panda$core$Panda$unref$panda$core$Object($tmp106);
                    panda$core$Object* $tmp114 = (($fn113) self->compiler->$class->vtable[2])(self->compiler);
                    $tmp112 = $tmp114;
                    org$pandalanguage$pandac$MethodDecl* $tmp115 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp112), test104);
                    $tmp111 = $tmp115;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
                    panda$core$Panda$unref$panda$core$Object($tmp112);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp111) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp103 = 0;
                        goto $l101;
                        $l116:;
                        $tmp85 = 0;
                        goto $l83;
                        $l117:;
                        return;
                    }
                    }
                }
                $tmp103 = -1;
                goto $l101;
                $l101:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test104));
                test104 = NULL;
                switch ($tmp103) {
                    case -1: goto $l118;
                    case 0: goto $l116;
                }
                $l118:;
            }
            goto $l93;
            $l94:;
        }
        $tmp85 = -1;
        goto $l83;
        $l83:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$986));
        Iter$62$986 = NULL;
        switch ($tmp85) {
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
    org$pandalanguage$pandac$Symbol$Kind $match$86_17137;
    panda$collections$Array* methods142 = NULL;
    panda$collections$Array* $tmp143;
    panda$collections$Array* $tmp144;
    panda$collections$Iterator* Iter$90$25149 = NULL;
    panda$collections$Iterator* $tmp150;
    panda$collections$Iterator* $tmp151;
    org$pandalanguage$pandac$MethodDecl* m167 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp168;
    panda$core$Object* $tmp169;
    org$pandalanguage$pandac$Symbol* $tmp176;
    org$pandalanguage$pandac$Methods* $tmp177;
    org$pandalanguage$pandac$MethodDecl* $tmp186;
    panda$core$Object* $tmp187;
    org$pandalanguage$pandac$Symbol* $tmp191;
    panda$collections$Array* methods194 = NULL;
    panda$collections$Array* $tmp195;
    panda$collections$Array* $tmp196;
    org$pandalanguage$pandac$Symbol* $tmp198;
    org$pandalanguage$pandac$Methods* $tmp199;
    org$pandalanguage$pandac$Symbol* $tmp204;
    org$pandalanguage$pandac$Symbol$Kind $match$107_17207;
    panda$collections$Array* methods212 = NULL;
    panda$collections$Array* $tmp213;
    panda$collections$Array* $tmp214;
    panda$collections$Iterator* Iter$110$25219 = NULL;
    panda$collections$Iterator* $tmp220;
    panda$collections$Iterator* $tmp221;
    org$pandalanguage$pandac$MethodDecl* m237 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp238;
    panda$core$Object* $tmp239;
    org$pandalanguage$pandac$Symbol* $tmp246;
    org$pandalanguage$pandac$Methods* $tmp247;
    panda$collections$Array* methods256 = NULL;
    panda$collections$Array* $tmp257;
    panda$collections$Array* $tmp258;
    org$pandalanguage$pandac$Symbol* $tmp260;
    org$pandalanguage$pandac$Methods* $tmp261;
    org$pandalanguage$pandac$Symbol* $tmp266;
    org$pandalanguage$pandac$Symbol* $tmp268;
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
        panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9135.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp136.value) {
        {
            {
                $match$86_17137 = p_inherited->kind;
                panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_17137.$rawValue, ((panda$core$Int64) { 4 }));
                if ($tmp138.value) {
                {
                    int $tmp141;
                    {
                        panda$collections$Array* $tmp145 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp145);
                        $tmp144 = $tmp145;
                        $tmp143 = $tmp144;
                        methods142 = $tmp143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                        panda$collections$Array$add$panda$collections$Array$T(methods142, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp148;
                            {
                                ITable* $tmp152 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp152 = $tmp152->next;
                                }
                                $fn154 $tmp153 = $tmp152->methods[0];
                                panda$collections$Iterator* $tmp155 = $tmp153(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp151 = $tmp155;
                                $tmp150 = $tmp151;
                                Iter$90$25149 = $tmp150;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                                $l156:;
                                ITable* $tmp159 = Iter$90$25149->$class->itable;
                                while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp159 = $tmp159->next;
                                }
                                $fn161 $tmp160 = $tmp159->methods[0];
                                panda$core$Bit $tmp162 = $tmp160(Iter$90$25149);
                                panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
                                bool $tmp158 = $tmp163.value;
                                if (!$tmp158) goto $l157;
                                {
                                    int $tmp166;
                                    {
                                        ITable* $tmp170 = Iter$90$25149->$class->itable;
                                        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp170 = $tmp170->next;
                                        }
                                        $fn172 $tmp171 = $tmp170->methods[1];
                                        panda$core$Object* $tmp173 = $tmp171(Iter$90$25149);
                                        $tmp169 = $tmp173;
                                        $tmp168 = ((org$pandalanguage$pandac$MethodDecl*) $tmp169);
                                        m167 = $tmp168;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                                        panda$core$Panda$unref$panda$core$Object($tmp169);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m167, ((panda$collections$List*) methods142));
                                    }
                                    $tmp166 = -1;
                                    goto $l164;
                                    $l164:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m167));
                                    m167 = NULL;
                                    switch ($tmp166) {
                                        case -1: goto $l174;
                                    }
                                    $l174:;
                                }
                                goto $l156;
                                $l157:;
                            }
                            $tmp148 = -1;
                            goto $l146;
                            $l146:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$90$25149));
                            Iter$90$25149 = NULL;
                            switch ($tmp148) {
                                case -1: goto $l175;
                            }
                            $l175:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp178 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp178, ((panda$collections$ListView*) methods142));
                        $tmp177 = $tmp178;
                        $tmp176 = ((org$pandalanguage$pandac$Symbol*) $tmp177);
                        $returnValue123 = $tmp176;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
                        $tmp141 = 0;
                        goto $l139;
                        $l179:;
                        return $returnValue123;
                    }
                    $l139:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods142));
                    methods142 = NULL;
                    switch ($tmp141) {
                        case 0: goto $l179;
                    }
                    $l181:;
                }
                }
                else {
                panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_17137.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp182.value) {
                {
                    int $tmp185;
                    {
                        panda$core$Object* $tmp189 = (($fn188) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp187 = $tmp189;
                        org$pandalanguage$pandac$MethodDecl* $tmp190 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp187), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp186 = $tmp190;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                        panda$core$Panda$unref$panda$core$Object($tmp187);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp186) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp191 = p_symbol;
                            $returnValue123 = $tmp191;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                            $tmp185 = 0;
                            goto $l183;
                            $l192:;
                            return $returnValue123;
                        }
                        }
                        panda$collections$Array* $tmp197 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp197);
                        $tmp196 = $tmp197;
                        $tmp195 = $tmp196;
                        methods194 = $tmp195;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                        panda$collections$Array$add$panda$collections$Array$T(methods194, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods194, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp200 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp200, ((panda$collections$ListView*) methods194));
                        $tmp199 = $tmp200;
                        $tmp198 = ((org$pandalanguage$pandac$Symbol*) $tmp199);
                        $returnValue123 = $tmp198;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                        $tmp185 = 1;
                        goto $l183;
                        $l201:;
                        return $returnValue123;
                    }
                    $l183:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods194));
                    methods194 = NULL;
                    switch ($tmp185) {
                        case 1: goto $l201;
                        case 0: goto $l192;
                    }
                    $l203:;
                }
                }
                else {
                {
                    $tmp204 = p_symbol;
                    $returnValue123 = $tmp204;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                    return $returnValue123;
                }
                }
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9135.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp206.value) {
        {
            {
                $match$107_17207 = p_inherited->kind;
                panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17207.$rawValue, ((panda$core$Int64) { 4 }));
                if ($tmp208.value) {
                {
                    int $tmp211;
                    {
                        panda$collections$Array* $tmp215 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp215, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp214 = $tmp215;
                        $tmp213 = $tmp214;
                        methods212 = $tmp213;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                        {
                            int $tmp218;
                            {
                                ITable* $tmp222 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp222 = $tmp222->next;
                                }
                                $fn224 $tmp223 = $tmp222->methods[0];
                                panda$collections$Iterator* $tmp225 = $tmp223(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp221 = $tmp225;
                                $tmp220 = $tmp221;
                                Iter$110$25219 = $tmp220;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                                $l226:;
                                ITable* $tmp229 = Iter$110$25219->$class->itable;
                                while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp229 = $tmp229->next;
                                }
                                $fn231 $tmp230 = $tmp229->methods[0];
                                panda$core$Bit $tmp232 = $tmp230(Iter$110$25219);
                                panda$core$Bit $tmp233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp232);
                                bool $tmp228 = $tmp233.value;
                                if (!$tmp228) goto $l227;
                                {
                                    int $tmp236;
                                    {
                                        ITable* $tmp240 = Iter$110$25219->$class->itable;
                                        while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp240 = $tmp240->next;
                                        }
                                        $fn242 $tmp241 = $tmp240->methods[1];
                                        panda$core$Object* $tmp243 = $tmp241(Iter$110$25219);
                                        $tmp239 = $tmp243;
                                        $tmp238 = ((org$pandalanguage$pandac$MethodDecl*) $tmp239);
                                        m237 = $tmp238;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
                                        panda$core$Panda$unref$panda$core$Object($tmp239);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m237, ((panda$collections$List*) methods212));
                                    }
                                    $tmp236 = -1;
                                    goto $l234;
                                    $l234:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m237));
                                    m237 = NULL;
                                    switch ($tmp236) {
                                        case -1: goto $l244;
                                    }
                                    $l244:;
                                }
                                goto $l226;
                                $l227:;
                            }
                            $tmp218 = -1;
                            goto $l216;
                            $l216:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25219));
                            Iter$110$25219 = NULL;
                            switch ($tmp218) {
                                case -1: goto $l245;
                            }
                            $l245:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp248 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp248, ((panda$collections$ListView*) methods212));
                        $tmp247 = $tmp248;
                        $tmp246 = ((org$pandalanguage$pandac$Symbol*) $tmp247);
                        $returnValue123 = $tmp246;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                        $tmp211 = 0;
                        goto $l209;
                        $l249:;
                        return $returnValue123;
                    }
                    $l209:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods212));
                    methods212 = NULL;
                    switch ($tmp211) {
                        case 0: goto $l249;
                    }
                    $l251:;
                }
                }
                else {
                panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17207.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp252.value) {
                {
                    int $tmp255;
                    {
                        panda$collections$Array* $tmp259 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp259, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp258 = $tmp259;
                        $tmp257 = $tmp258;
                        methods256 = $tmp257;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods256));
                        org$pandalanguage$pandac$Methods* $tmp262 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp262, ((panda$collections$ListView*) methods256));
                        $tmp261 = $tmp262;
                        $tmp260 = ((org$pandalanguage$pandac$Symbol*) $tmp261);
                        $returnValue123 = $tmp260;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
                        $tmp255 = 0;
                        goto $l253;
                        $l263:;
                        return $returnValue123;
                    }
                    $l253:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods256));
                    methods256 = NULL;
                    switch ($tmp255) {
                        case 0: goto $l263;
                    }
                    $l265:;
                }
                }
                else {
                {
                    $tmp266 = p_symbol;
                    $returnValue123 = $tmp266;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                    return $returnValue123;
                }
                }
                }
            }
        }
        }
        else {
        {
            $tmp268 = p_symbol;
            $returnValue123 = $tmp268;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
            return $returnValue123;
        }
        }
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result273 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp274;
    panda$core$Object* $tmp275;
    org$pandalanguage$pandac$Symbol* $tmp277;
    org$pandalanguage$pandac$Symbol* $tmp278;
    panda$core$Object* $tmp279;
    panda$collections$Iterator* Iter$130$13284 = NULL;
    panda$collections$Iterator* $tmp285;
    panda$collections$Iterator* $tmp286;
    org$pandalanguage$pandac$SymbolTable* p302 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp303;
    panda$core$Object* $tmp304;
    org$pandalanguage$pandac$Symbol* $tmp309;
    org$pandalanguage$pandac$Symbol* $tmp310;
    org$pandalanguage$pandac$Symbol* $tmp311;
    org$pandalanguage$pandac$Symbol* $tmp312;
    org$pandalanguage$pandac$Symbol* $returnValue317;
    org$pandalanguage$pandac$Symbol* $tmp318;
    int $tmp272;
    {
        panda$core$Object* $tmp276 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp275 = $tmp276;
        $tmp274 = ((org$pandalanguage$pandac$Symbol*) $tmp275);
        result273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object($tmp275);
        if (((panda$core$Bit) { result273 == NULL }).value) {
        {
            {
                $tmp277 = result273;
                panda$core$Object* $tmp280 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp279 = $tmp280;
                $tmp278 = ((org$pandalanguage$pandac$Symbol*) $tmp279);
                result273 = $tmp278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
                panda$core$Panda$unref$panda$core$Object($tmp279);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
            }
            {
                int $tmp283;
                {
                    ITable* $tmp287 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp287 = $tmp287->next;
                    }
                    $fn289 $tmp288 = $tmp287->methods[0];
                    panda$collections$Iterator* $tmp290 = $tmp288(((panda$collections$Iterable*) self->parents));
                    $tmp286 = $tmp290;
                    $tmp285 = $tmp286;
                    Iter$130$13284 = $tmp285;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                    $l291:;
                    ITable* $tmp294 = Iter$130$13284->$class->itable;
                    while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp294 = $tmp294->next;
                    }
                    $fn296 $tmp295 = $tmp294->methods[0];
                    panda$core$Bit $tmp297 = $tmp295(Iter$130$13284);
                    panda$core$Bit $tmp298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp297);
                    bool $tmp293 = $tmp298.value;
                    if (!$tmp293) goto $l292;
                    {
                        int $tmp301;
                        {
                            ITable* $tmp305 = Iter$130$13284->$class->itable;
                            while ($tmp305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp305 = $tmp305->next;
                            }
                            $fn307 $tmp306 = $tmp305->methods[1];
                            panda$core$Object* $tmp308 = $tmp306(Iter$130$13284);
                            $tmp304 = $tmp308;
                            $tmp303 = ((org$pandalanguage$pandac$SymbolTable*) $tmp304);
                            p302 = $tmp303;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                            panda$core$Panda$unref$panda$core$Object($tmp304);
                            {
                                $tmp309 = result273;
                                org$pandalanguage$pandac$Symbol* $tmp313 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p302, p_name);
                                $tmp312 = $tmp313;
                                org$pandalanguage$pandac$Symbol* $tmp314 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result273, $tmp312);
                                $tmp311 = $tmp314;
                                $tmp310 = $tmp311;
                                result273 = $tmp310;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp310));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                            }
                        }
                        $tmp301 = -1;
                        goto $l299;
                        $l299:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p302));
                        p302 = NULL;
                        switch ($tmp301) {
                            case -1: goto $l315;
                        }
                        $l315:;
                    }
                    goto $l291;
                    $l292:;
                }
                $tmp283 = -1;
                goto $l281;
                $l281:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13284));
                Iter$130$13284 = NULL;
                switch ($tmp283) {
                    case -1: goto $l316;
                }
                $l316:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result273));
        }
        }
        $tmp318 = result273;
        $returnValue317 = $tmp318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
        $tmp272 = 0;
        goto $l270;
        $l319:;
        return $returnValue317;
    }
    $l270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result273));
    result273 = NULL;
    switch ($tmp272) {
        case 0: goto $l319;
    }
    $l321:;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $returnValue322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$Object* $tmp329;
    panda$core$Int64 $tmp330 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp331;
    $tmp331 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp331->value = $tmp330;
    $tmp329 = ((panda$core$Object*) $tmp331);
    panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s328, $tmp329);
    $tmp327 = $tmp332;
    panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s333);
    $tmp326 = $tmp334;
    panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp326, ((panda$core$Object*) self->symbols));
    $tmp325 = $tmp335;
    panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, &$s336);
    $tmp324 = $tmp337;
    $tmp323 = $tmp324;
    $returnValue322 = $tmp323;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
    panda$core$Panda$unref$panda$core$Object($tmp329);
    return $returnValue322;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp341;
    {
    }
    $tmp341 = -1;
    goto $l339;
    $l339:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp341) {
        case -1: goto $l342;
    }
    $l342:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}






