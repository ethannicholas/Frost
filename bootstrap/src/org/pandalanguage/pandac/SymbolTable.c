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
typedef panda$core$Object* (*$fn65)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn110)(panda$core$Weak*);
typedef void (*$fn119)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn127)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn231)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn277)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn284)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn295)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    panda$collections$Array* methods43 = NULL;
    panda$collections$Array* $tmp44;
    panda$collections$Array* $tmp45;
    org$pandalanguage$pandac$Methods* $tmp47;
    panda$collections$Array* methods55 = NULL;
    panda$collections$Array* $tmp56;
    panda$collections$Array* $tmp57;
    org$pandalanguage$pandac$Methods* $tmp59;
    panda$core$Object* $tmp64;
    panda$core$String* $tmp67;
    panda$core$String* $tmp68;
    panda$core$String* $tmp69;
    panda$core$Object* $tmp74;
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
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
        if ($tmp39.value) {
        {
            switch (old34->kind.value) {
                case 204:
                {
                    int $tmp42;
                    {
                        panda$collections$Array* $tmp46 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp46);
                        $tmp45 = $tmp46;
                        $tmp44 = $tmp45;
                        methods43 = $tmp44;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
                        panda$collections$Array$add$panda$collections$Array$T(methods43, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$add$panda$collections$Array$T(methods43, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old34)));
                        org$pandalanguage$pandac$Methods* $tmp48 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp48, ((panda$collections$ListView*) methods43));
                        $tmp47 = $tmp48;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp47)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                        $tmp42 = 0;
                        goto $l40;
                        $l49:;
                        $tmp33 = 1;
                        goto $l31;
                        $l50:;
                        return;
                    }
                    $l40:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods43));
                    methods43 = NULL;
                    switch ($tmp42) {
                        case 0: goto $l49;
                    }
                    $l51:;
                }
                break;
                case 205:
                {
                    int $tmp54;
                    {
                        panda$collections$Array* $tmp58 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp58);
                        $tmp57 = $tmp58;
                        $tmp56 = $tmp57;
                        methods55 = $tmp56;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
                        panda$collections$Array$add$panda$collections$Array$T(methods55, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods55, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old34)->methods));
                        org$pandalanguage$pandac$Methods* $tmp60 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp60, ((panda$collections$ListView*) methods55));
                        $tmp59 = $tmp60;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp59)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
                        $tmp54 = 0;
                        goto $l52;
                        $l61:;
                        $tmp33 = 2;
                        goto $l31;
                        $l62:;
                        return;
                    }
                    $l52:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods55));
                    methods55 = NULL;
                    switch ($tmp54) {
                        case 0: goto $l61;
                    }
                    $l63:;
                }
                break;
            }
        }
        }
        panda$core$Object* $tmp66 = (($fn65) self->compiler->$class->vtable[2])(self->compiler);
        $tmp64 = $tmp66;
        panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s70, p_name);
        $tmp69 = $tmp71;
        panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, &$s72);
        $tmp68 = $tmp73;
        org$pandalanguage$pandac$Position$wrapper* $tmp75;
        $tmp75 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp75->value = old34->position;
        $tmp74 = ((panda$core$Object*) $tmp75);
        panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp68, $tmp74);
        $tmp67 = $tmp76;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp64), p_s->position, $tmp67);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Panda$unref$panda$core$Object($tmp74);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object($tmp64);
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old34));
    old34 = NULL;
    switch ($tmp33) {
        case 1: goto $l50;
        case -1: goto $l77;
        case 0: goto $l38;
        case 2: goto $l62;
    }
    $l77:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$62$983 = NULL;
    panda$collections$Iterator* $tmp84;
    panda$collections$Iterator* $tmp85;
    org$pandalanguage$pandac$MethodDecl* test101 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp102;
    panda$core$Object* $tmp103;
    org$pandalanguage$pandac$MethodDecl* $tmp108;
    panda$core$Object* $tmp109;
    panda$core$Bit $tmp78 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp79 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp78);
    if ($tmp79.value) {
    {
        return;
    }
    }
    {
        int $tmp82;
        {
            ITable* $tmp86 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp86 = $tmp86->next;
            }
            $fn88 $tmp87 = $tmp86->methods[0];
            panda$collections$Iterator* $tmp89 = $tmp87(((panda$collections$Iterable*) p_methods));
            $tmp85 = $tmp89;
            $tmp84 = $tmp85;
            Iter$62$983 = $tmp84;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
            $l90:;
            ITable* $tmp93 = Iter$62$983->$class->itable;
            while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp93 = $tmp93->next;
            }
            $fn95 $tmp94 = $tmp93->methods[0];
            panda$core$Bit $tmp96 = $tmp94(Iter$62$983);
            panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
            bool $tmp92 = $tmp97.value;
            if (!$tmp92) goto $l91;
            {
                int $tmp100;
                {
                    ITable* $tmp104 = Iter$62$983->$class->itable;
                    while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp104 = $tmp104->next;
                    }
                    $fn106 $tmp105 = $tmp104->methods[1];
                    panda$core$Object* $tmp107 = $tmp105(Iter$62$983);
                    $tmp103 = $tmp107;
                    $tmp102 = ((org$pandalanguage$pandac$MethodDecl*) $tmp103);
                    test101 = $tmp102;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                    panda$core$Panda$unref$panda$core$Object($tmp103);
                    panda$core$Object* $tmp111 = (($fn110) self->compiler->$class->vtable[2])(self->compiler);
                    $tmp109 = $tmp111;
                    org$pandalanguage$pandac$MethodDecl* $tmp112 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp109), test101);
                    $tmp108 = $tmp112;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
                    panda$core$Panda$unref$panda$core$Object($tmp109);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp108) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp100 = 0;
                        goto $l98;
                        $l113:;
                        $tmp82 = 0;
                        goto $l80;
                        $l114:;
                        return;
                    }
                    }
                }
                $tmp100 = -1;
                goto $l98;
                $l98:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test101));
                test101 = NULL;
                switch ($tmp100) {
                    case 0: goto $l113;
                    case -1: goto $l115;
                }
                $l115:;
            }
            goto $l90;
            $l91:;
        }
        $tmp82 = -1;
        goto $l80;
        $l80:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$983));
        Iter$62$983 = NULL;
        switch ($tmp82) {
            case -1: goto $l116;
            case 0: goto $l114;
        }
        $l116:;
    }
    ITable* $tmp117 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp117->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp117 = $tmp117->next;
    }
    $fn119 $tmp118 = $tmp117->methods[0];
    $tmp118(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    org$pandalanguage$pandac$Symbol* $returnValue120;
    org$pandalanguage$pandac$Symbol* $tmp121;
    org$pandalanguage$pandac$Symbol* $tmp123;
    org$pandalanguage$pandac$Symbol* $tmp125;
    org$pandalanguage$pandac$Symbol* $tmp130;
    panda$collections$Array* methods135 = NULL;
    panda$collections$Array* $tmp136;
    panda$collections$Array* $tmp137;
    panda$collections$Iterator* Iter$90$25142 = NULL;
    panda$collections$Iterator* $tmp143;
    panda$collections$Iterator* $tmp144;
    org$pandalanguage$pandac$MethodDecl* m160 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp161;
    panda$core$Object* $tmp162;
    org$pandalanguage$pandac$Symbol* $tmp169;
    org$pandalanguage$pandac$Methods* $tmp170;
    org$pandalanguage$pandac$MethodDecl* $tmp178;
    panda$core$Object* $tmp179;
    org$pandalanguage$pandac$Symbol* $tmp183;
    panda$collections$Array* methods186 = NULL;
    panda$collections$Array* $tmp187;
    panda$collections$Array* $tmp188;
    org$pandalanguage$pandac$Symbol* $tmp190;
    org$pandalanguage$pandac$Methods* $tmp191;
    org$pandalanguage$pandac$Symbol* $tmp196;
    panda$collections$Array* methods201 = NULL;
    panda$collections$Array* $tmp202;
    panda$collections$Array* $tmp203;
    panda$collections$Iterator* Iter$110$25208 = NULL;
    panda$collections$Iterator* $tmp209;
    panda$collections$Iterator* $tmp210;
    org$pandalanguage$pandac$MethodDecl* m226 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp227;
    panda$core$Object* $tmp228;
    org$pandalanguage$pandac$Symbol* $tmp235;
    org$pandalanguage$pandac$Methods* $tmp236;
    panda$collections$Array* methods244 = NULL;
    panda$collections$Array* $tmp245;
    panda$collections$Array* $tmp246;
    org$pandalanguage$pandac$Symbol* $tmp248;
    org$pandalanguage$pandac$Methods* $tmp249;
    org$pandalanguage$pandac$Symbol* $tmp254;
    org$pandalanguage$pandac$Symbol* $tmp256;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp121 = p_symbol;
        $returnValue120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        return $returnValue120;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp123 = p_inherited;
        $returnValue120 = $tmp123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
        return $returnValue120;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp125 = p_symbol;
        $returnValue120 = $tmp125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
        return $returnValue120;
    }
    }
    panda$core$Bit $tmp128 = (($fn127) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp128);
    if ($tmp129.value) {
    {
        $tmp130 = p_symbol;
        $returnValue120 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        return $returnValue120;
    }
    }
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp134;
                    {
                        panda$collections$Array* $tmp138 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp138);
                        $tmp137 = $tmp138;
                        $tmp136 = $tmp137;
                        methods135 = $tmp136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
                        panda$collections$Array$add$panda$collections$Array$T(methods135, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp141;
                            {
                                ITable* $tmp145 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp145 = $tmp145->next;
                                }
                                $fn147 $tmp146 = $tmp145->methods[0];
                                panda$collections$Iterator* $tmp148 = $tmp146(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp144 = $tmp148;
                                $tmp143 = $tmp144;
                                Iter$90$25142 = $tmp143;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                                $l149:;
                                ITable* $tmp152 = Iter$90$25142->$class->itable;
                                while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp152 = $tmp152->next;
                                }
                                $fn154 $tmp153 = $tmp152->methods[0];
                                panda$core$Bit $tmp155 = $tmp153(Iter$90$25142);
                                panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
                                bool $tmp151 = $tmp156.value;
                                if (!$tmp151) goto $l150;
                                {
                                    int $tmp159;
                                    {
                                        ITable* $tmp163 = Iter$90$25142->$class->itable;
                                        while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp163 = $tmp163->next;
                                        }
                                        $fn165 $tmp164 = $tmp163->methods[1];
                                        panda$core$Object* $tmp166 = $tmp164(Iter$90$25142);
                                        $tmp162 = $tmp166;
                                        $tmp161 = ((org$pandalanguage$pandac$MethodDecl*) $tmp162);
                                        m160 = $tmp161;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                                        panda$core$Panda$unref$panda$core$Object($tmp162);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m160, ((panda$collections$List*) methods135));
                                    }
                                    $tmp159 = -1;
                                    goto $l157;
                                    $l157:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m160));
                                    m160 = NULL;
                                    switch ($tmp159) {
                                        case -1: goto $l167;
                                    }
                                    $l167:;
                                }
                                goto $l149;
                                $l150:;
                            }
                            $tmp141 = -1;
                            goto $l139;
                            $l139:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$90$25142));
                            Iter$90$25142 = NULL;
                            switch ($tmp141) {
                                case -1: goto $l168;
                            }
                            $l168:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp171 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp171, ((panda$collections$ListView*) methods135));
                        $tmp170 = $tmp171;
                        $tmp169 = ((org$pandalanguage$pandac$Symbol*) $tmp170);
                        $returnValue120 = $tmp169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                        $tmp134 = 0;
                        goto $l132;
                        $l172:;
                        return $returnValue120;
                    }
                    $l132:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods135));
                    methods135 = NULL;
                    switch ($tmp134) {
                        case 0: goto $l172;
                    }
                    $l174:;
                }
                break;
                case 204:
                {
                    int $tmp177;
                    {
                        panda$core$Object* $tmp181 = (($fn180) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp179 = $tmp181;
                        org$pandalanguage$pandac$MethodDecl* $tmp182 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp179), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp178 = $tmp182;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                        panda$core$Panda$unref$panda$core$Object($tmp179);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp178) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp183 = p_symbol;
                            $returnValue120 = $tmp183;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
                            $tmp177 = 0;
                            goto $l175;
                            $l184:;
                            return $returnValue120;
                        }
                        }
                        panda$collections$Array* $tmp189 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp189);
                        $tmp188 = $tmp189;
                        $tmp187 = $tmp188;
                        methods186 = $tmp187;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
                        panda$collections$Array$add$panda$collections$Array$T(methods186, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods186, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp192 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp192, ((panda$collections$ListView*) methods186));
                        $tmp191 = $tmp192;
                        $tmp190 = ((org$pandalanguage$pandac$Symbol*) $tmp191);
                        $returnValue120 = $tmp190;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
                        $tmp177 = 1;
                        goto $l175;
                        $l193:;
                        return $returnValue120;
                    }
                    $l175:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods186));
                    methods186 = NULL;
                    switch ($tmp177) {
                        case 1: goto $l193;
                        case 0: goto $l184;
                    }
                    $l195:;
                }
                break;
                default:
                {
                    $tmp196 = p_symbol;
                    $returnValue120 = $tmp196;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
                    return $returnValue120;
                }
            }
        }
        break;
        case 205:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp200;
                    {
                        panda$collections$Array* $tmp204 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp204, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp203 = $tmp204;
                        $tmp202 = $tmp203;
                        methods201 = $tmp202;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                        {
                            int $tmp207;
                            {
                                ITable* $tmp211 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp211 = $tmp211->next;
                                }
                                $fn213 $tmp212 = $tmp211->methods[0];
                                panda$collections$Iterator* $tmp214 = $tmp212(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp210 = $tmp214;
                                $tmp209 = $tmp210;
                                Iter$110$25208 = $tmp209;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                                $l215:;
                                ITable* $tmp218 = Iter$110$25208->$class->itable;
                                while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp218 = $tmp218->next;
                                }
                                $fn220 $tmp219 = $tmp218->methods[0];
                                panda$core$Bit $tmp221 = $tmp219(Iter$110$25208);
                                panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp221);
                                bool $tmp217 = $tmp222.value;
                                if (!$tmp217) goto $l216;
                                {
                                    int $tmp225;
                                    {
                                        ITable* $tmp229 = Iter$110$25208->$class->itable;
                                        while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp229 = $tmp229->next;
                                        }
                                        $fn231 $tmp230 = $tmp229->methods[1];
                                        panda$core$Object* $tmp232 = $tmp230(Iter$110$25208);
                                        $tmp228 = $tmp232;
                                        $tmp227 = ((org$pandalanguage$pandac$MethodDecl*) $tmp228);
                                        m226 = $tmp227;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
                                        panda$core$Panda$unref$panda$core$Object($tmp228);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m226, ((panda$collections$List*) methods201));
                                    }
                                    $tmp225 = -1;
                                    goto $l223;
                                    $l223:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m226));
                                    m226 = NULL;
                                    switch ($tmp225) {
                                        case -1: goto $l233;
                                    }
                                    $l233:;
                                }
                                goto $l215;
                                $l216:;
                            }
                            $tmp207 = -1;
                            goto $l205;
                            $l205:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25208));
                            Iter$110$25208 = NULL;
                            switch ($tmp207) {
                                case -1: goto $l234;
                            }
                            $l234:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp237 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp237, ((panda$collections$ListView*) methods201));
                        $tmp236 = $tmp237;
                        $tmp235 = ((org$pandalanguage$pandac$Symbol*) $tmp236);
                        $returnValue120 = $tmp235;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
                        $tmp200 = 0;
                        goto $l198;
                        $l238:;
                        return $returnValue120;
                    }
                    $l198:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods201));
                    methods201 = NULL;
                    switch ($tmp200) {
                        case 0: goto $l238;
                    }
                    $l240:;
                }
                break;
                case 204:
                {
                    int $tmp243;
                    {
                        panda$collections$Array* $tmp247 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp247, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp246 = $tmp247;
                        $tmp245 = $tmp246;
                        methods244 = $tmp245;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods244));
                        org$pandalanguage$pandac$Methods* $tmp250 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp250, ((panda$collections$ListView*) methods244));
                        $tmp249 = $tmp250;
                        $tmp248 = ((org$pandalanguage$pandac$Symbol*) $tmp249);
                        $returnValue120 = $tmp248;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                        $tmp243 = 0;
                        goto $l241;
                        $l251:;
                        return $returnValue120;
                    }
                    $l241:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods244));
                    methods244 = NULL;
                    switch ($tmp243) {
                        case 0: goto $l251;
                    }
                    $l253:;
                }
                break;
                default:
                {
                    $tmp254 = p_symbol;
                    $returnValue120 = $tmp254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                    return $returnValue120;
                }
            }
        }
        break;
        default:
        {
            $tmp256 = p_symbol;
            $returnValue120 = $tmp256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
            return $returnValue120;
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result261 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp262;
    panda$core$Object* $tmp263;
    org$pandalanguage$pandac$Symbol* $tmp265;
    org$pandalanguage$pandac$Symbol* $tmp266;
    panda$core$Object* $tmp267;
    panda$collections$Iterator* Iter$130$13272 = NULL;
    panda$collections$Iterator* $tmp273;
    panda$collections$Iterator* $tmp274;
    org$pandalanguage$pandac$SymbolTable* p290 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp291;
    panda$core$Object* $tmp292;
    org$pandalanguage$pandac$Symbol* $tmp297;
    org$pandalanguage$pandac$Symbol* $tmp298;
    org$pandalanguage$pandac$Symbol* $tmp299;
    org$pandalanguage$pandac$Symbol* $tmp300;
    org$pandalanguage$pandac$Symbol* $returnValue305;
    org$pandalanguage$pandac$Symbol* $tmp306;
    int $tmp260;
    {
        panda$core$Object* $tmp264 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp263 = $tmp264;
        $tmp262 = ((org$pandalanguage$pandac$Symbol*) $tmp263);
        result261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object($tmp263);
        if (((panda$core$Bit) { result261 == NULL }).value) {
        {
            {
                $tmp265 = result261;
                panda$core$Object* $tmp268 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp267 = $tmp268;
                $tmp266 = ((org$pandalanguage$pandac$Symbol*) $tmp267);
                result261 = $tmp266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object($tmp267);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
            }
            {
                int $tmp271;
                {
                    ITable* $tmp275 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp275 = $tmp275->next;
                    }
                    $fn277 $tmp276 = $tmp275->methods[0];
                    panda$collections$Iterator* $tmp278 = $tmp276(((panda$collections$Iterable*) self->parents));
                    $tmp274 = $tmp278;
                    $tmp273 = $tmp274;
                    Iter$130$13272 = $tmp273;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                    $l279:;
                    ITable* $tmp282 = Iter$130$13272->$class->itable;
                    while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp282 = $tmp282->next;
                    }
                    $fn284 $tmp283 = $tmp282->methods[0];
                    panda$core$Bit $tmp285 = $tmp283(Iter$130$13272);
                    panda$core$Bit $tmp286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp285);
                    bool $tmp281 = $tmp286.value;
                    if (!$tmp281) goto $l280;
                    {
                        int $tmp289;
                        {
                            ITable* $tmp293 = Iter$130$13272->$class->itable;
                            while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp293 = $tmp293->next;
                            }
                            $fn295 $tmp294 = $tmp293->methods[1];
                            panda$core$Object* $tmp296 = $tmp294(Iter$130$13272);
                            $tmp292 = $tmp296;
                            $tmp291 = ((org$pandalanguage$pandac$SymbolTable*) $tmp292);
                            p290 = $tmp291;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                            panda$core$Panda$unref$panda$core$Object($tmp292);
                            {
                                $tmp297 = result261;
                                org$pandalanguage$pandac$Symbol* $tmp301 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p290, p_name);
                                $tmp300 = $tmp301;
                                org$pandalanguage$pandac$Symbol* $tmp302 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result261, $tmp300);
                                $tmp299 = $tmp302;
                                $tmp298 = $tmp299;
                                result261 = $tmp298;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                            }
                        }
                        $tmp289 = -1;
                        goto $l287;
                        $l287:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p290));
                        p290 = NULL;
                        switch ($tmp289) {
                            case -1: goto $l303;
                        }
                        $l303:;
                    }
                    goto $l279;
                    $l280:;
                }
                $tmp271 = -1;
                goto $l269;
                $l269:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13272));
                Iter$130$13272 = NULL;
                switch ($tmp271) {
                    case -1: goto $l304;
                }
                $l304:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result261));
        }
        }
        $tmp306 = result261;
        $returnValue305 = $tmp306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
        $tmp260 = 0;
        goto $l258;
        $l307:;
        return $returnValue305;
    }
    $l258:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result261));
    result261 = NULL;
    switch ($tmp260) {
        case 0: goto $l307;
    }
    $l309:;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $returnValue310;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$String* $tmp313;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$Object* $tmp317;
    panda$core$Int64 $tmp318 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp319;
    $tmp319 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp319->value = $tmp318;
    $tmp317 = ((panda$core$Object*) $tmp319);
    panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s316, $tmp317);
    $tmp315 = $tmp320;
    panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s321);
    $tmp314 = $tmp322;
    panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp314, ((panda$core$Object*) self->symbols));
    $tmp313 = $tmp323;
    panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s324);
    $tmp312 = $tmp325;
    $tmp311 = $tmp312;
    $returnValue310 = $tmp311;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
    panda$core$Panda$unref$panda$core$Object($tmp317);
    return $returnValue310;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp329;
    {
    }
    $tmp329 = -1;
    goto $l327;
    $l327:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp329) {
        case -1: goto $l330;
    }
    $l330:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}






