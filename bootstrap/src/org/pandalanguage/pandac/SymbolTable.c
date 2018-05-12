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

typedef panda$core$Object* (*$fn29)(panda$core$Weak*);
typedef panda$core$Object* (*$fn67)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn90)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn97)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn112)(panda$core$Weak*);
typedef void (*$fn121)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn131)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn186)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn222)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn240)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn315)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    panda$core$Weak* $tmp31;
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
    panda$core$Weak* $tmp32 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp32, ((panda$core$Object*) p_parent));
    $tmp31 = $tmp32;
    panda$collections$Array$add$panda$collections$Array$T(self->parents, ((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s) {
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(self, p_s, p_s->name);
}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_s, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* old36 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp37;
    panda$core$Object* $tmp38;
    panda$collections$Array* methods45 = NULL;
    panda$collections$Array* $tmp46;
    panda$collections$Array* $tmp47;
    org$pandalanguage$pandac$Methods* $tmp49;
    panda$collections$Array* methods57 = NULL;
    panda$collections$Array* $tmp58;
    panda$collections$Array* $tmp59;
    org$pandalanguage$pandac$Methods* $tmp61;
    panda$core$Object* $tmp66;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Object* $tmp76;
    int $tmp35;
    {
        panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
        panda$core$Object* $tmp39 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
        $tmp38 = $tmp39;
        $tmp37 = ((org$pandalanguage$pandac$Symbol*) $tmp38);
        old36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object($tmp38);
        if (((panda$core$Bit) { old36 == NULL }).value) {
        {
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
            $tmp35 = 0;
            goto $l33;
            $l40:;
            return;
        }
        }
        panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
        if ($tmp41.value) {
        {
            switch (old36->kind.value) {
                case 204:
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
                        panda$collections$Array$add$panda$collections$Array$T(methods45, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old36)));
                        org$pandalanguage$pandac$Methods* $tmp50 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp50, ((panda$collections$ListView*) methods45));
                        $tmp49 = $tmp50;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp49)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
                        $tmp44 = 0;
                        goto $l42;
                        $l51:;
                        $tmp35 = 1;
                        goto $l33;
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
                break;
                case 205:
                {
                    int $tmp56;
                    {
                        panda$collections$Array* $tmp60 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp60);
                        $tmp59 = $tmp60;
                        $tmp58 = $tmp59;
                        methods57 = $tmp58;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
                        panda$collections$Array$add$panda$collections$Array$T(methods57, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods57, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old36)->methods));
                        org$pandalanguage$pandac$Methods* $tmp62 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp62, ((panda$collections$ListView*) methods57));
                        $tmp61 = $tmp62;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp61)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                        $tmp56 = 0;
                        goto $l54;
                        $l63:;
                        $tmp35 = 2;
                        goto $l33;
                        $l64:;
                        return;
                    }
                    $l54:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods57));
                    methods57 = NULL;
                    switch ($tmp56) {
                        case 0: goto $l63;
                    }
                    $l65:;
                }
                break;
            }
        }
        }
        panda$core$Object* $tmp68 = (($fn67) self->compiler->$class->vtable[2])(self->compiler);
        $tmp66 = $tmp68;
        panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s72, p_name);
        $tmp71 = $tmp73;
        panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s74);
        $tmp70 = $tmp75;
        org$pandalanguage$pandac$Position$wrapper* $tmp77;
        $tmp77 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp77->value = old36->position;
        $tmp76 = ((panda$core$Object*) $tmp77);
        panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp70, $tmp76);
        $tmp69 = $tmp78;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp66), p_s->position, $tmp69);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object($tmp76);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object($tmp66);
    }
    $tmp35 = -1;
    goto $l33;
    $l33:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old36));
    old36 = NULL;
    switch ($tmp35) {
        case -1: goto $l79;
        case 1: goto $l52;
        case 2: goto $l64;
        case 0: goto $l40;
    }
    $l79:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$62$985 = NULL;
    panda$collections$Iterator* $tmp86;
    panda$collections$Iterator* $tmp87;
    org$pandalanguage$pandac$MethodDecl* test103 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp104;
    panda$core$Object* $tmp105;
    org$pandalanguage$pandac$MethodDecl* $tmp110;
    panda$core$Object* $tmp111;
    panda$core$Bit $tmp80 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp81 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp80);
    if ($tmp81.value) {
    {
        return;
    }
    }
    {
        int $tmp84;
        {
            ITable* $tmp88 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp88 = $tmp88->next;
            }
            $fn90 $tmp89 = $tmp88->methods[0];
            panda$collections$Iterator* $tmp91 = $tmp89(((panda$collections$Iterable*) p_methods));
            $tmp87 = $tmp91;
            $tmp86 = $tmp87;
            Iter$62$985 = $tmp86;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
            $l92:;
            ITable* $tmp95 = Iter$62$985->$class->itable;
            while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp95 = $tmp95->next;
            }
            $fn97 $tmp96 = $tmp95->methods[0];
            panda$core$Bit $tmp98 = $tmp96(Iter$62$985);
            panda$core$Bit $tmp99 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp98);
            bool $tmp94 = $tmp99.value;
            if (!$tmp94) goto $l93;
            {
                int $tmp102;
                {
                    ITable* $tmp106 = Iter$62$985->$class->itable;
                    while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp106 = $tmp106->next;
                    }
                    $fn108 $tmp107 = $tmp106->methods[1];
                    panda$core$Object* $tmp109 = $tmp107(Iter$62$985);
                    $tmp105 = $tmp109;
                    $tmp104 = ((org$pandalanguage$pandac$MethodDecl*) $tmp105);
                    test103 = $tmp104;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
                    panda$core$Panda$unref$panda$core$Object($tmp105);
                    panda$core$Object* $tmp113 = (($fn112) self->compiler->$class->vtable[2])(self->compiler);
                    $tmp111 = $tmp113;
                    org$pandalanguage$pandac$MethodDecl* $tmp114 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp111), test103);
                    $tmp110 = $tmp114;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                    panda$core$Panda$unref$panda$core$Object($tmp111);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp110) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp102 = 0;
                        goto $l100;
                        $l115:;
                        $tmp84 = 0;
                        goto $l82;
                        $l116:;
                        return;
                    }
                    }
                }
                $tmp102 = -1;
                goto $l100;
                $l100:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test103));
                test103 = NULL;
                switch ($tmp102) {
                    case -1: goto $l117;
                    case 0: goto $l115;
                }
                $l117:;
            }
            goto $l92;
            $l93:;
        }
        $tmp84 = -1;
        goto $l82;
        $l82:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$985));
        Iter$62$985 = NULL;
        switch ($tmp84) {
            case 0: goto $l116;
            case -1: goto $l118;
        }
        $l118:;
    }
    ITable* $tmp119 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp119->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp119 = $tmp119->next;
    }
    $fn121 $tmp120 = $tmp119->methods[0];
    $tmp120(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    org$pandalanguage$pandac$Symbol* $finallyReturn121;
    org$pandalanguage$pandac$Symbol* $tmp123;
    org$pandalanguage$pandac$Symbol* $finallyReturn124;
    org$pandalanguage$pandac$Symbol* $tmp126;
    org$pandalanguage$pandac$Symbol* $finallyReturn127;
    org$pandalanguage$pandac$Symbol* $tmp129;
    org$pandalanguage$pandac$Symbol* $finallyReturn133;
    org$pandalanguage$pandac$Symbol* $tmp135;
    panda$collections$Array* methods140 = NULL;
    panda$collections$Array* $tmp141;
    panda$collections$Array* $tmp142;
    panda$collections$Iterator* Iter$90$25147 = NULL;
    panda$collections$Iterator* $tmp148;
    panda$collections$Iterator* $tmp149;
    org$pandalanguage$pandac$MethodDecl* m165 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp166;
    panda$core$Object* $tmp167;
    org$pandalanguage$pandac$Symbol* $finallyReturn173;
    org$pandalanguage$pandac$Symbol* $tmp175;
    org$pandalanguage$pandac$Methods* $tmp176;
    org$pandalanguage$pandac$MethodDecl* $tmp184;
    panda$core$Object* $tmp185;
    org$pandalanguage$pandac$Symbol* $finallyReturn188;
    org$pandalanguage$pandac$Symbol* $tmp190;
    panda$collections$Array* methods193 = NULL;
    panda$collections$Array* $tmp194;
    panda$collections$Array* $tmp195;
    org$pandalanguage$pandac$Symbol* $finallyReturn196;
    org$pandalanguage$pandac$Symbol* $tmp198;
    org$pandalanguage$pandac$Methods* $tmp199;
    org$pandalanguage$pandac$Symbol* $finallyReturn203;
    org$pandalanguage$pandac$Symbol* $tmp205;
    panda$collections$Array* methods210 = NULL;
    panda$collections$Array* $tmp211;
    panda$collections$Array* $tmp212;
    panda$collections$Iterator* Iter$110$25217 = NULL;
    panda$collections$Iterator* $tmp218;
    panda$collections$Iterator* $tmp219;
    org$pandalanguage$pandac$MethodDecl* m235 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp236;
    panda$core$Object* $tmp237;
    org$pandalanguage$pandac$Symbol* $finallyReturn243;
    org$pandalanguage$pandac$Symbol* $tmp245;
    org$pandalanguage$pandac$Methods* $tmp246;
    panda$collections$Array* methods254 = NULL;
    panda$collections$Array* $tmp255;
    panda$collections$Array* $tmp256;
    org$pandalanguage$pandac$Symbol* $finallyReturn257;
    org$pandalanguage$pandac$Symbol* $tmp259;
    org$pandalanguage$pandac$Methods* $tmp260;
    org$pandalanguage$pandac$Symbol* $finallyReturn264;
    org$pandalanguage$pandac$Symbol* $tmp266;
    org$pandalanguage$pandac$Symbol* $finallyReturn267;
    org$pandalanguage$pandac$Symbol* $tmp269;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp123 = p_symbol;
        $finallyReturn121 = $tmp123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
        return $finallyReturn121;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp126 = p_inherited;
        $finallyReturn124 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        return $finallyReturn124;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp129 = p_symbol;
        $finallyReturn127 = $tmp129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
        return $finallyReturn127;
    }
    }
    panda$core$Bit $tmp132 = (($fn131) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp133 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp132);
    if ($tmp133.value) {
    {
        $tmp135 = p_symbol;
        $finallyReturn133 = $tmp135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
        return $finallyReturn133;
    }
    }
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp139;
                    {
                        panda$collections$Array* $tmp143 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp143);
                        $tmp142 = $tmp143;
                        $tmp141 = $tmp142;
                        methods140 = $tmp141;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
                        panda$collections$Array$add$panda$collections$Array$T(methods140, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp146;
                            {
                                ITable* $tmp150 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp150 = $tmp150->next;
                                }
                                $fn152 $tmp151 = $tmp150->methods[0];
                                panda$collections$Iterator* $tmp153 = $tmp151(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp149 = $tmp153;
                                $tmp148 = $tmp149;
                                Iter$90$25147 = $tmp148;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
                                $l154:;
                                ITable* $tmp157 = Iter$90$25147->$class->itable;
                                while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp157 = $tmp157->next;
                                }
                                $fn159 $tmp158 = $tmp157->methods[0];
                                panda$core$Bit $tmp160 = $tmp158(Iter$90$25147);
                                panda$core$Bit $tmp161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
                                bool $tmp156 = $tmp161.value;
                                if (!$tmp156) goto $l155;
                                {
                                    int $tmp164;
                                    {
                                        ITable* $tmp168 = Iter$90$25147->$class->itable;
                                        while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp168 = $tmp168->next;
                                        }
                                        $fn170 $tmp169 = $tmp168->methods[1];
                                        panda$core$Object* $tmp171 = $tmp169(Iter$90$25147);
                                        $tmp167 = $tmp171;
                                        $tmp166 = ((org$pandalanguage$pandac$MethodDecl*) $tmp167);
                                        m165 = $tmp166;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                                        panda$core$Panda$unref$panda$core$Object($tmp167);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m165, ((panda$collections$List*) methods140));
                                    }
                                    $tmp164 = -1;
                                    goto $l162;
                                    $l162:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m165));
                                    m165 = NULL;
                                    switch ($tmp164) {
                                        case -1: goto $l172;
                                    }
                                    $l172:;
                                }
                                goto $l154;
                                $l155:;
                            }
                            $tmp146 = -1;
                            goto $l144;
                            $l144:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$90$25147));
                            Iter$90$25147 = NULL;
                            switch ($tmp146) {
                                case -1: goto $l173;
                            }
                            $l173:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp177 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp177, ((panda$collections$ListView*) methods140));
                        $tmp176 = $tmp177;
                        $tmp175 = ((org$pandalanguage$pandac$Symbol*) $tmp176);
                        $finallyReturn173 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                        $tmp139 = 0;
                        goto $l137;
                        $l178:;
                        return $finallyReturn173;
                    }
                    $l137:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods140));
                    methods140 = NULL;
                    switch ($tmp139) {
                        case 0: goto $l178;
                    }
                    $l180:;
                }
                break;
                case 204:
                {
                    int $tmp183;
                    {
                        panda$core$Object* $tmp187 = (($fn186) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp185 = $tmp187;
                        org$pandalanguage$pandac$MethodDecl* $tmp188 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp185), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp184 = $tmp188;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object($tmp185);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp184) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp190 = p_symbol;
                            $finallyReturn188 = $tmp190;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                            $tmp183 = 0;
                            goto $l181;
                            $l191:;
                            return $finallyReturn188;
                        }
                        }
                        panda$collections$Array* $tmp196 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp196);
                        $tmp195 = $tmp196;
                        $tmp194 = $tmp195;
                        methods193 = $tmp194;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                        panda$collections$Array$add$panda$collections$Array$T(methods193, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods193, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp200 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp200, ((panda$collections$ListView*) methods193));
                        $tmp199 = $tmp200;
                        $tmp198 = ((org$pandalanguage$pandac$Symbol*) $tmp199);
                        $finallyReturn196 = $tmp198;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                        $tmp183 = 1;
                        goto $l181;
                        $l201:;
                        return $finallyReturn196;
                    }
                    $l181:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods193));
                    methods193 = NULL;
                    switch ($tmp183) {
                        case 1: goto $l201;
                        case 0: goto $l191;
                    }
                    $l203:;
                }
                break;
                default:
                {
                    $tmp205 = p_symbol;
                    $finallyReturn203 = $tmp205;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                    return $finallyReturn203;
                }
            }
        }
        break;
        case 205:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp209;
                    {
                        panda$collections$Array* $tmp213 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp213, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp212 = $tmp213;
                        $tmp211 = $tmp212;
                        methods210 = $tmp211;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                        {
                            int $tmp216;
                            {
                                ITable* $tmp220 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp220 = $tmp220->next;
                                }
                                $fn222 $tmp221 = $tmp220->methods[0];
                                panda$collections$Iterator* $tmp223 = $tmp221(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp219 = $tmp223;
                                $tmp218 = $tmp219;
                                Iter$110$25217 = $tmp218;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                                $l224:;
                                ITable* $tmp227 = Iter$110$25217->$class->itable;
                                while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp227 = $tmp227->next;
                                }
                                $fn229 $tmp228 = $tmp227->methods[0];
                                panda$core$Bit $tmp230 = $tmp228(Iter$110$25217);
                                panda$core$Bit $tmp231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp230);
                                bool $tmp226 = $tmp231.value;
                                if (!$tmp226) goto $l225;
                                {
                                    int $tmp234;
                                    {
                                        ITable* $tmp238 = Iter$110$25217->$class->itable;
                                        while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp238 = $tmp238->next;
                                        }
                                        $fn240 $tmp239 = $tmp238->methods[1];
                                        panda$core$Object* $tmp241 = $tmp239(Iter$110$25217);
                                        $tmp237 = $tmp241;
                                        $tmp236 = ((org$pandalanguage$pandac$MethodDecl*) $tmp237);
                                        m235 = $tmp236;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                                        panda$core$Panda$unref$panda$core$Object($tmp237);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m235, ((panda$collections$List*) methods210));
                                    }
                                    $tmp234 = -1;
                                    goto $l232;
                                    $l232:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m235));
                                    m235 = NULL;
                                    switch ($tmp234) {
                                        case -1: goto $l242;
                                    }
                                    $l242:;
                                }
                                goto $l224;
                                $l225:;
                            }
                            $tmp216 = -1;
                            goto $l214;
                            $l214:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25217));
                            Iter$110$25217 = NULL;
                            switch ($tmp216) {
                                case -1: goto $l243;
                            }
                            $l243:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp247 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp247, ((panda$collections$ListView*) methods210));
                        $tmp246 = $tmp247;
                        $tmp245 = ((org$pandalanguage$pandac$Symbol*) $tmp246);
                        $finallyReturn243 = $tmp245;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                        $tmp209 = 0;
                        goto $l207;
                        $l248:;
                        return $finallyReturn243;
                    }
                    $l207:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods210));
                    methods210 = NULL;
                    switch ($tmp209) {
                        case 0: goto $l248;
                    }
                    $l250:;
                }
                break;
                case 204:
                {
                    int $tmp253;
                    {
                        panda$collections$Array* $tmp257 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp257, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp256 = $tmp257;
                        $tmp255 = $tmp256;
                        methods254 = $tmp255;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods254));
                        org$pandalanguage$pandac$Methods* $tmp261 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp261, ((panda$collections$ListView*) methods254));
                        $tmp260 = $tmp261;
                        $tmp259 = ((org$pandalanguage$pandac$Symbol*) $tmp260);
                        $finallyReturn257 = $tmp259;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
                        $tmp253 = 0;
                        goto $l251;
                        $l262:;
                        return $finallyReturn257;
                    }
                    $l251:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods254));
                    methods254 = NULL;
                    switch ($tmp253) {
                        case 0: goto $l262;
                    }
                    $l264:;
                }
                break;
                default:
                {
                    $tmp266 = p_symbol;
                    $finallyReturn264 = $tmp266;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                    return $finallyReturn264;
                }
            }
        }
        break;
        default:
        {
            $tmp269 = p_symbol;
            $finallyReturn267 = $tmp269;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
            return $finallyReturn267;
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result274 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp275;
    panda$core$Object* $tmp276;
    org$pandalanguage$pandac$Symbol* $tmp278;
    org$pandalanguage$pandac$Symbol* $tmp279;
    panda$core$Object* $tmp280;
    panda$collections$Iterator* Iter$130$13285 = NULL;
    panda$collections$Iterator* $tmp286;
    panda$collections$Iterator* $tmp287;
    panda$core$Weak* p303 = NULL;
    panda$core$Weak* $tmp304;
    panda$core$Object* $tmp305;
    org$pandalanguage$pandac$Symbol* $tmp310;
    org$pandalanguage$pandac$Symbol* $tmp311;
    org$pandalanguage$pandac$Symbol* $tmp312;
    org$pandalanguage$pandac$Symbol* $tmp313;
    panda$core$Object* $tmp314;
    org$pandalanguage$pandac$Symbol* $finallyReturn320;
    org$pandalanguage$pandac$Symbol* $tmp322;
    int $tmp273;
    {
        panda$core$Object* $tmp277 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp276 = $tmp277;
        $tmp275 = ((org$pandalanguage$pandac$Symbol*) $tmp276);
        result274 = $tmp275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
        panda$core$Panda$unref$panda$core$Object($tmp276);
        if (((panda$core$Bit) { result274 == NULL }).value) {
        {
            {
                $tmp278 = result274;
                panda$core$Object* $tmp281 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp280 = $tmp281;
                $tmp279 = ((org$pandalanguage$pandac$Symbol*) $tmp280);
                result274 = $tmp279;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                panda$core$Panda$unref$panda$core$Object($tmp280);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
            }
            {
                int $tmp284;
                {
                    ITable* $tmp288 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp288 = $tmp288->next;
                    }
                    $fn290 $tmp289 = $tmp288->methods[0];
                    panda$collections$Iterator* $tmp291 = $tmp289(((panda$collections$Iterable*) self->parents));
                    $tmp287 = $tmp291;
                    $tmp286 = $tmp287;
                    Iter$130$13285 = $tmp286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
                    $l292:;
                    ITable* $tmp295 = Iter$130$13285->$class->itable;
                    while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp295 = $tmp295->next;
                    }
                    $fn297 $tmp296 = $tmp295->methods[0];
                    panda$core$Bit $tmp298 = $tmp296(Iter$130$13285);
                    panda$core$Bit $tmp299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp298);
                    bool $tmp294 = $tmp299.value;
                    if (!$tmp294) goto $l293;
                    {
                        int $tmp302;
                        {
                            ITable* $tmp306 = Iter$130$13285->$class->itable;
                            while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp306 = $tmp306->next;
                            }
                            $fn308 $tmp307 = $tmp306->methods[1];
                            panda$core$Object* $tmp309 = $tmp307(Iter$130$13285);
                            $tmp305 = $tmp309;
                            $tmp304 = ((panda$core$Weak*) $tmp305);
                            p303 = $tmp304;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
                            panda$core$Panda$unref$panda$core$Object($tmp305);
                            {
                                $tmp310 = result274;
                                panda$core$Object* $tmp316 = (($fn315) p303->$class->vtable[2])(p303);
                                $tmp314 = $tmp316;
                                org$pandalanguage$pandac$Symbol* $tmp317 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(((org$pandalanguage$pandac$SymbolTable*) $tmp314), p_name);
                                $tmp313 = $tmp317;
                                org$pandalanguage$pandac$Symbol* $tmp318 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result274, $tmp313);
                                $tmp312 = $tmp318;
                                $tmp311 = $tmp312;
                                result274 = $tmp311;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                                panda$core$Panda$unref$panda$core$Object($tmp314);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                            }
                        }
                        $tmp302 = -1;
                        goto $l300;
                        $l300:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p303));
                        p303 = NULL;
                        switch ($tmp302) {
                            case -1: goto $l319;
                        }
                        $l319:;
                    }
                    goto $l292;
                    $l293:;
                }
                $tmp284 = -1;
                goto $l282;
                $l282:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13285));
                Iter$130$13285 = NULL;
                switch ($tmp284) {
                    case -1: goto $l320;
                }
                $l320:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result274));
        }
        }
        $tmp322 = result274;
        $finallyReturn320 = $tmp322;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp322));
        $tmp273 = 0;
        goto $l271;
        $l323:;
        return $finallyReturn320;
    }
    $l271:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
    result274 = NULL;
    switch ($tmp273) {
        case 0: goto $l323;
    }
    $l325:;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $finallyReturn325;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$Object* $tmp333;
    panda$core$Int64 $tmp334 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp335;
    $tmp335 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp335->value = $tmp334;
    $tmp333 = ((panda$core$Object*) $tmp335);
    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s332, $tmp333);
    $tmp331 = $tmp336;
    panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s337);
    $tmp330 = $tmp338;
    panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp330, ((panda$core$Object*) self->symbols));
    $tmp329 = $tmp339;
    panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s340);
    $tmp328 = $tmp341;
    $tmp327 = $tmp328;
    $finallyReturn325 = $tmp327;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
    panda$core$Panda$unref$panda$core$Object($tmp333);
    return $finallyReturn325;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp345;
    {
    }
    $tmp345 = -1;
    goto $l343;
    $l343:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp345) {
        case -1: goto $l346;
    }
    $l346:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

