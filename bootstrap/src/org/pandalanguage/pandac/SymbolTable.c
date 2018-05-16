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
typedef panda$core$Bit (*$fn129)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn184)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn220)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn238)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn295)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn306)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    org$pandalanguage$pandac$Symbol* $finallyReturn119;
    org$pandalanguage$pandac$Symbol* $tmp121;
    org$pandalanguage$pandac$Symbol* $finallyReturn122;
    org$pandalanguage$pandac$Symbol* $tmp124;
    org$pandalanguage$pandac$Symbol* $finallyReturn125;
    org$pandalanguage$pandac$Symbol* $tmp127;
    org$pandalanguage$pandac$Symbol* $finallyReturn131;
    org$pandalanguage$pandac$Symbol* $tmp133;
    panda$collections$Array* methods138 = NULL;
    panda$collections$Array* $tmp139;
    panda$collections$Array* $tmp140;
    panda$collections$Iterator* Iter$90$25145 = NULL;
    panda$collections$Iterator* $tmp146;
    panda$collections$Iterator* $tmp147;
    org$pandalanguage$pandac$MethodDecl* m163 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp164;
    panda$core$Object* $tmp165;
    org$pandalanguage$pandac$Symbol* $finallyReturn171;
    org$pandalanguage$pandac$Symbol* $tmp173;
    org$pandalanguage$pandac$Methods* $tmp174;
    org$pandalanguage$pandac$MethodDecl* $tmp182;
    panda$core$Object* $tmp183;
    org$pandalanguage$pandac$Symbol* $finallyReturn186;
    org$pandalanguage$pandac$Symbol* $tmp188;
    panda$collections$Array* methods191 = NULL;
    panda$collections$Array* $tmp192;
    panda$collections$Array* $tmp193;
    org$pandalanguage$pandac$Symbol* $finallyReturn194;
    org$pandalanguage$pandac$Symbol* $tmp196;
    org$pandalanguage$pandac$Methods* $tmp197;
    org$pandalanguage$pandac$Symbol* $finallyReturn201;
    org$pandalanguage$pandac$Symbol* $tmp203;
    panda$collections$Array* methods208 = NULL;
    panda$collections$Array* $tmp209;
    panda$collections$Array* $tmp210;
    panda$collections$Iterator* Iter$110$25215 = NULL;
    panda$collections$Iterator* $tmp216;
    panda$collections$Iterator* $tmp217;
    org$pandalanguage$pandac$MethodDecl* m233 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp234;
    panda$core$Object* $tmp235;
    org$pandalanguage$pandac$Symbol* $finallyReturn241;
    org$pandalanguage$pandac$Symbol* $tmp243;
    org$pandalanguage$pandac$Methods* $tmp244;
    panda$collections$Array* methods252 = NULL;
    panda$collections$Array* $tmp253;
    panda$collections$Array* $tmp254;
    org$pandalanguage$pandac$Symbol* $finallyReturn255;
    org$pandalanguage$pandac$Symbol* $tmp257;
    org$pandalanguage$pandac$Methods* $tmp258;
    org$pandalanguage$pandac$Symbol* $finallyReturn262;
    org$pandalanguage$pandac$Symbol* $tmp264;
    org$pandalanguage$pandac$Symbol* $finallyReturn265;
    org$pandalanguage$pandac$Symbol* $tmp267;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp121 = p_symbol;
        $finallyReturn119 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        return $finallyReturn119;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp124 = p_inherited;
        $finallyReturn122 = $tmp124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
        return $finallyReturn122;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp127 = p_symbol;
        $finallyReturn125 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        return $finallyReturn125;
    }
    }
    panda$core$Bit $tmp130 = (($fn129) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp130);
    if ($tmp131.value) {
    {
        $tmp133 = p_symbol;
        $finallyReturn131 = $tmp133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
        return $finallyReturn131;
    }
    }
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp137;
                    {
                        panda$collections$Array* $tmp141 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp141);
                        $tmp140 = $tmp141;
                        $tmp139 = $tmp140;
                        methods138 = $tmp139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
                        panda$collections$Array$add$panda$collections$Array$T(methods138, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp144;
                            {
                                ITable* $tmp148 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp148 = $tmp148->next;
                                }
                                $fn150 $tmp149 = $tmp148->methods[0];
                                panda$collections$Iterator* $tmp151 = $tmp149(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp147 = $tmp151;
                                $tmp146 = $tmp147;
                                Iter$90$25145 = $tmp146;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                                $l152:;
                                ITable* $tmp155 = Iter$90$25145->$class->itable;
                                while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp155 = $tmp155->next;
                                }
                                $fn157 $tmp156 = $tmp155->methods[0];
                                panda$core$Bit $tmp158 = $tmp156(Iter$90$25145);
                                panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp158);
                                bool $tmp154 = $tmp159.value;
                                if (!$tmp154) goto $l153;
                                {
                                    int $tmp162;
                                    {
                                        ITable* $tmp166 = Iter$90$25145->$class->itable;
                                        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp166 = $tmp166->next;
                                        }
                                        $fn168 $tmp167 = $tmp166->methods[1];
                                        panda$core$Object* $tmp169 = $tmp167(Iter$90$25145);
                                        $tmp165 = $tmp169;
                                        $tmp164 = ((org$pandalanguage$pandac$MethodDecl*) $tmp165);
                                        m163 = $tmp164;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
                                        panda$core$Panda$unref$panda$core$Object($tmp165);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m163, ((panda$collections$List*) methods138));
                                    }
                                    $tmp162 = -1;
                                    goto $l160;
                                    $l160:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m163));
                                    m163 = NULL;
                                    switch ($tmp162) {
                                        case -1: goto $l170;
                                    }
                                    $l170:;
                                }
                                goto $l152;
                                $l153:;
                            }
                            $tmp144 = -1;
                            goto $l142;
                            $l142:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$90$25145));
                            Iter$90$25145 = NULL;
                            switch ($tmp144) {
                                case -1: goto $l171;
                            }
                            $l171:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp175 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp175, ((panda$collections$ListView*) methods138));
                        $tmp174 = $tmp175;
                        $tmp173 = ((org$pandalanguage$pandac$Symbol*) $tmp174);
                        $finallyReturn171 = $tmp173;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                        $tmp137 = 0;
                        goto $l135;
                        $l176:;
                        return $finallyReturn171;
                    }
                    $l135:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods138));
                    methods138 = NULL;
                    switch ($tmp137) {
                        case 0: goto $l176;
                    }
                    $l178:;
                }
                break;
                case 204:
                {
                    int $tmp181;
                    {
                        panda$core$Object* $tmp185 = (($fn184) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp183 = $tmp185;
                        org$pandalanguage$pandac$MethodDecl* $tmp186 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp183), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp182 = $tmp186;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
                        panda$core$Panda$unref$panda$core$Object($tmp183);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp182) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp188 = p_symbol;
                            $finallyReturn186 = $tmp188;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
                            $tmp181 = 0;
                            goto $l179;
                            $l189:;
                            return $finallyReturn186;
                        }
                        }
                        panda$collections$Array* $tmp194 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp194);
                        $tmp193 = $tmp194;
                        $tmp192 = $tmp193;
                        methods191 = $tmp192;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
                        panda$collections$Array$add$panda$collections$Array$T(methods191, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods191, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp198 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp198, ((panda$collections$ListView*) methods191));
                        $tmp197 = $tmp198;
                        $tmp196 = ((org$pandalanguage$pandac$Symbol*) $tmp197);
                        $finallyReturn194 = $tmp196;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
                        $tmp181 = 1;
                        goto $l179;
                        $l199:;
                        return $finallyReturn194;
                    }
                    $l179:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods191));
                    methods191 = NULL;
                    switch ($tmp181) {
                        case 1: goto $l199;
                        case 0: goto $l189;
                    }
                    $l201:;
                }
                break;
                default:
                {
                    $tmp203 = p_symbol;
                    $finallyReturn201 = $tmp203;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                    return $finallyReturn201;
                }
            }
        }
        break;
        case 205:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp207;
                    {
                        panda$collections$Array* $tmp211 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp211, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp210 = $tmp211;
                        $tmp209 = $tmp210;
                        methods208 = $tmp209;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                        {
                            int $tmp214;
                            {
                                ITable* $tmp218 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp218 = $tmp218->next;
                                }
                                $fn220 $tmp219 = $tmp218->methods[0];
                                panda$collections$Iterator* $tmp221 = $tmp219(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp217 = $tmp221;
                                $tmp216 = $tmp217;
                                Iter$110$25215 = $tmp216;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                                $l222:;
                                ITable* $tmp225 = Iter$110$25215->$class->itable;
                                while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp225 = $tmp225->next;
                                }
                                $fn227 $tmp226 = $tmp225->methods[0];
                                panda$core$Bit $tmp228 = $tmp226(Iter$110$25215);
                                panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
                                bool $tmp224 = $tmp229.value;
                                if (!$tmp224) goto $l223;
                                {
                                    int $tmp232;
                                    {
                                        ITable* $tmp236 = Iter$110$25215->$class->itable;
                                        while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp236 = $tmp236->next;
                                        }
                                        $fn238 $tmp237 = $tmp236->methods[1];
                                        panda$core$Object* $tmp239 = $tmp237(Iter$110$25215);
                                        $tmp235 = $tmp239;
                                        $tmp234 = ((org$pandalanguage$pandac$MethodDecl*) $tmp235);
                                        m233 = $tmp234;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
                                        panda$core$Panda$unref$panda$core$Object($tmp235);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m233, ((panda$collections$List*) methods208));
                                    }
                                    $tmp232 = -1;
                                    goto $l230;
                                    $l230:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m233));
                                    m233 = NULL;
                                    switch ($tmp232) {
                                        case -1: goto $l240;
                                    }
                                    $l240:;
                                }
                                goto $l222;
                                $l223:;
                            }
                            $tmp214 = -1;
                            goto $l212;
                            $l212:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25215));
                            Iter$110$25215 = NULL;
                            switch ($tmp214) {
                                case -1: goto $l241;
                            }
                            $l241:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp245 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp245, ((panda$collections$ListView*) methods208));
                        $tmp244 = $tmp245;
                        $tmp243 = ((org$pandalanguage$pandac$Symbol*) $tmp244);
                        $finallyReturn241 = $tmp243;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                        $tmp207 = 0;
                        goto $l205;
                        $l246:;
                        return $finallyReturn241;
                    }
                    $l205:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods208));
                    methods208 = NULL;
                    switch ($tmp207) {
                        case 0: goto $l246;
                    }
                    $l248:;
                }
                break;
                case 204:
                {
                    int $tmp251;
                    {
                        panda$collections$Array* $tmp255 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp255, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp254 = $tmp255;
                        $tmp253 = $tmp254;
                        methods252 = $tmp253;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods252));
                        org$pandalanguage$pandac$Methods* $tmp259 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp259, ((panda$collections$ListView*) methods252));
                        $tmp258 = $tmp259;
                        $tmp257 = ((org$pandalanguage$pandac$Symbol*) $tmp258);
                        $finallyReturn255 = $tmp257;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                        $tmp251 = 0;
                        goto $l249;
                        $l260:;
                        return $finallyReturn255;
                    }
                    $l249:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods252));
                    methods252 = NULL;
                    switch ($tmp251) {
                        case 0: goto $l260;
                    }
                    $l262:;
                }
                break;
                default:
                {
                    $tmp264 = p_symbol;
                    $finallyReturn262 = $tmp264;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
                    return $finallyReturn262;
                }
            }
        }
        break;
        default:
        {
            $tmp267 = p_symbol;
            $finallyReturn265 = $tmp267;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
            return $finallyReturn265;
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result272 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp273;
    panda$core$Object* $tmp274;
    org$pandalanguage$pandac$Symbol* $tmp276;
    org$pandalanguage$pandac$Symbol* $tmp277;
    panda$core$Object* $tmp278;
    panda$collections$Iterator* Iter$130$13283 = NULL;
    panda$collections$Iterator* $tmp284;
    panda$collections$Iterator* $tmp285;
    org$pandalanguage$pandac$SymbolTable* p301 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp302;
    panda$core$Object* $tmp303;
    org$pandalanguage$pandac$Symbol* $tmp308;
    org$pandalanguage$pandac$Symbol* $tmp309;
    org$pandalanguage$pandac$Symbol* $tmp310;
    org$pandalanguage$pandac$Symbol* $tmp311;
    org$pandalanguage$pandac$Symbol* $finallyReturn315;
    org$pandalanguage$pandac$Symbol* $tmp317;
    int $tmp271;
    {
        panda$core$Object* $tmp275 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp274 = $tmp275;
        $tmp273 = ((org$pandalanguage$pandac$Symbol*) $tmp274);
        result272 = $tmp273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
        panda$core$Panda$unref$panda$core$Object($tmp274);
        if (((panda$core$Bit) { result272 == NULL }).value) {
        {
            {
                $tmp276 = result272;
                panda$core$Object* $tmp279 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp278 = $tmp279;
                $tmp277 = ((org$pandalanguage$pandac$Symbol*) $tmp278);
                result272 = $tmp277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
                panda$core$Panda$unref$panda$core$Object($tmp278);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
            }
            {
                int $tmp282;
                {
                    ITable* $tmp286 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp286 = $tmp286->next;
                    }
                    $fn288 $tmp287 = $tmp286->methods[0];
                    panda$collections$Iterator* $tmp289 = $tmp287(((panda$collections$Iterable*) self->parents));
                    $tmp285 = $tmp289;
                    $tmp284 = $tmp285;
                    Iter$130$13283 = $tmp284;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                    $l290:;
                    ITable* $tmp293 = Iter$130$13283->$class->itable;
                    while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp293 = $tmp293->next;
                    }
                    $fn295 $tmp294 = $tmp293->methods[0];
                    panda$core$Bit $tmp296 = $tmp294(Iter$130$13283);
                    panda$core$Bit $tmp297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp296);
                    bool $tmp292 = $tmp297.value;
                    if (!$tmp292) goto $l291;
                    {
                        int $tmp300;
                        {
                            ITable* $tmp304 = Iter$130$13283->$class->itable;
                            while ($tmp304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp304 = $tmp304->next;
                            }
                            $fn306 $tmp305 = $tmp304->methods[1];
                            panda$core$Object* $tmp307 = $tmp305(Iter$130$13283);
                            $tmp303 = $tmp307;
                            $tmp302 = ((org$pandalanguage$pandac$SymbolTable*) $tmp303);
                            p301 = $tmp302;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                            panda$core$Panda$unref$panda$core$Object($tmp303);
                            {
                                $tmp308 = result272;
                                org$pandalanguage$pandac$Symbol* $tmp312 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p301, p_name);
                                $tmp311 = $tmp312;
                                org$pandalanguage$pandac$Symbol* $tmp313 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result272, $tmp311);
                                $tmp310 = $tmp313;
                                $tmp309 = $tmp310;
                                result272 = $tmp309;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                            }
                        }
                        $tmp300 = -1;
                        goto $l298;
                        $l298:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p301));
                        p301 = NULL;
                        switch ($tmp300) {
                            case -1: goto $l314;
                        }
                        $l314:;
                    }
                    goto $l290;
                    $l291:;
                }
                $tmp282 = -1;
                goto $l280;
                $l280:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13283));
                Iter$130$13283 = NULL;
                switch ($tmp282) {
                    case -1: goto $l315;
                }
                $l315:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result272));
        }
        }
        $tmp317 = result272;
        $finallyReturn315 = $tmp317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
        $tmp271 = 0;
        goto $l269;
        $l318:;
        return $finallyReturn315;
    }
    $l269:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result272));
    result272 = NULL;
    switch ($tmp271) {
        case 0: goto $l318;
    }
    $l320:;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $finallyReturn320;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$Object* $tmp328;
    panda$core$Int64 $tmp329 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp330;
    $tmp330 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp330->value = $tmp329;
    $tmp328 = ((panda$core$Object*) $tmp330);
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s327, $tmp328);
    $tmp326 = $tmp331;
    panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s332);
    $tmp325 = $tmp333;
    panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp325, ((panda$core$Object*) self->symbols));
    $tmp324 = $tmp334;
    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s335);
    $tmp323 = $tmp336;
    $tmp322 = $tmp323;
    $finallyReturn320 = $tmp322;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp322));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
    panda$core$Panda$unref$panda$core$Object($tmp328);
    return $finallyReturn320;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp340;
    {
    }
    $tmp340 = -1;
    goto $l338;
    $l338:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp340) {
        case -1: goto $l341;
    }
    $l341:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}






