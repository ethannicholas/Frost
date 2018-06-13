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

typedef panda$collections$Iterator* (*$fn95)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn113)(panda$collections$Iterator*);
typedef void (*$fn125)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn133)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn177)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn249)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn315)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    org$pandalanguage$pandac$MethodDecl* $tmp115;
    panda$core$Object* $tmp116;
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
                    panda$core$Object* $tmp117 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                    $tmp116 = $tmp117;
                    org$pandalanguage$pandac$MethodDecl* $tmp118 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp116), test108);
                    $tmp115 = $tmp118;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
                    panda$core$Panda$unref$panda$core$Object($tmp116);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp115) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp107 = 0;
                        goto $l105;
                        $l119:;
                        $tmp89 = 0;
                        goto $l87;
                        $l120:;
                        return;
                    }
                    }
                }
                $tmp107 = -1;
                goto $l105;
                $l105:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test108));
                test108 = NULL;
                switch ($tmp107) {
                    case 0: goto $l119;
                    case -1: goto $l121;
                }
                $l121:;
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
            case 0: goto $l120;
            case -1: goto $l122;
        }
        $l122:;
    }
    ITable* $tmp123 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp123->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp123 = $tmp123->next;
    }
    $fn125 $tmp124 = $tmp123->methods[0];
    $tmp124(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    org$pandalanguage$pandac$Symbol* $returnValue126;
    org$pandalanguage$pandac$Symbol* $tmp127;
    org$pandalanguage$pandac$Symbol* $tmp129;
    org$pandalanguage$pandac$Symbol* $tmp131;
    org$pandalanguage$pandac$Symbol* $tmp136;
    org$pandalanguage$pandac$Symbol$Kind $match$84_9138;
    panda$core$Int64 $tmp139;
    org$pandalanguage$pandac$Symbol$Kind $match$86_17141;
    panda$core$Int64 $tmp142;
    panda$collections$Array* methods147 = NULL;
    panda$collections$Array* $tmp148;
    panda$collections$Array* $tmp149;
    panda$collections$Iterator* Iter$90$25154 = NULL;
    panda$collections$Iterator* $tmp155;
    panda$collections$Iterator* $tmp156;
    org$pandalanguage$pandac$MethodDecl* m172 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp173;
    panda$core$Object* $tmp174;
    org$pandalanguage$pandac$Symbol* $tmp181;
    org$pandalanguage$pandac$Methods* $tmp182;
    panda$core$Int64 $tmp187;
    org$pandalanguage$pandac$MethodDecl* $tmp192;
    panda$core$Object* $tmp193;
    org$pandalanguage$pandac$Symbol* $tmp196;
    panda$collections$Array* methods199 = NULL;
    panda$collections$Array* $tmp200;
    panda$collections$Array* $tmp201;
    org$pandalanguage$pandac$Symbol* $tmp203;
    org$pandalanguage$pandac$Methods* $tmp204;
    org$pandalanguage$pandac$Symbol* $tmp209;
    panda$core$Int64 $tmp211;
    org$pandalanguage$pandac$Symbol$Kind $match$107_17213;
    panda$core$Int64 $tmp214;
    panda$collections$Array* methods219 = NULL;
    panda$collections$Array* $tmp220;
    panda$collections$Array* $tmp221;
    panda$collections$Iterator* Iter$110$25226 = NULL;
    panda$collections$Iterator* $tmp227;
    panda$collections$Iterator* $tmp228;
    org$pandalanguage$pandac$MethodDecl* m244 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp245;
    panda$core$Object* $tmp246;
    org$pandalanguage$pandac$Symbol* $tmp253;
    org$pandalanguage$pandac$Methods* $tmp254;
    panda$core$Int64 $tmp259;
    panda$collections$Array* methods264 = NULL;
    panda$collections$Array* $tmp265;
    panda$collections$Array* $tmp266;
    org$pandalanguage$pandac$Symbol* $tmp268;
    org$pandalanguage$pandac$Methods* $tmp269;
    org$pandalanguage$pandac$Symbol* $tmp274;
    org$pandalanguage$pandac$Symbol* $tmp276;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp127 = p_symbol;
        $returnValue126 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        return $returnValue126;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp129 = p_inherited;
        $returnValue126 = $tmp129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
        return $returnValue126;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp131 = p_symbol;
        $returnValue126 = $tmp131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
        return $returnValue126;
    }
    }
    panda$core$Bit $tmp134 = (($fn133) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp134);
    if ($tmp135.value) {
    {
        $tmp136 = p_symbol;
        $returnValue126 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        return $returnValue126;
    }
    }
    {
        $match$84_9138 = p_symbol->kind;
        panda$core$Int64$init$builtin_int64(&$tmp139, 3);
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9138.$rawValue, $tmp139);
        if ($tmp140.value) {
        {
            {
                $match$86_17141 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp142, 4);
                panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_17141.$rawValue, $tmp142);
                if ($tmp143.value) {
                {
                    int $tmp146;
                    {
                        panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp150);
                        $tmp149 = $tmp150;
                        $tmp148 = $tmp149;
                        methods147 = $tmp148;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
                        panda$collections$Array$add$panda$collections$Array$T(methods147, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp153;
                            {
                                ITable* $tmp157 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp157 = $tmp157->next;
                                }
                                $fn159 $tmp158 = $tmp157->methods[0];
                                panda$collections$Iterator* $tmp160 = $tmp158(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp156 = $tmp160;
                                $tmp155 = $tmp156;
                                Iter$90$25154 = $tmp155;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                                $l161:;
                                ITable* $tmp164 = Iter$90$25154->$class->itable;
                                while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp164 = $tmp164->next;
                                }
                                $fn166 $tmp165 = $tmp164->methods[0];
                                panda$core$Bit $tmp167 = $tmp165(Iter$90$25154);
                                panda$core$Bit $tmp168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp167);
                                bool $tmp163 = $tmp168.value;
                                if (!$tmp163) goto $l162;
                                {
                                    int $tmp171;
                                    {
                                        ITable* $tmp175 = Iter$90$25154->$class->itable;
                                        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp175 = $tmp175->next;
                                        }
                                        $fn177 $tmp176 = $tmp175->methods[1];
                                        panda$core$Object* $tmp178 = $tmp176(Iter$90$25154);
                                        $tmp174 = $tmp178;
                                        $tmp173 = ((org$pandalanguage$pandac$MethodDecl*) $tmp174);
                                        m172 = $tmp173;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
                                        panda$core$Panda$unref$panda$core$Object($tmp174);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m172, ((panda$collections$List*) methods147));
                                    }
                                    $tmp171 = -1;
                                    goto $l169;
                                    $l169:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m172));
                                    m172 = NULL;
                                    switch ($tmp171) {
                                        case -1: goto $l179;
                                    }
                                    $l179:;
                                }
                                goto $l161;
                                $l162:;
                            }
                            $tmp153 = -1;
                            goto $l151;
                            $l151:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$90$25154));
                            Iter$90$25154 = NULL;
                            switch ($tmp153) {
                                case -1: goto $l180;
                            }
                            $l180:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp183 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp183, ((panda$collections$ListView*) methods147));
                        $tmp182 = $tmp183;
                        $tmp181 = ((org$pandalanguage$pandac$Symbol*) $tmp182);
                        $returnValue126 = $tmp181;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
                        $tmp146 = 0;
                        goto $l144;
                        $l184:;
                        return $returnValue126;
                    }
                    $l144:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods147));
                    methods147 = NULL;
                    switch ($tmp146) {
                        case 0: goto $l184;
                    }
                    $l186:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp187, 3);
                panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_17141.$rawValue, $tmp187);
                if ($tmp188.value) {
                {
                    int $tmp191;
                    {
                        panda$core$Object* $tmp194 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp193 = $tmp194;
                        org$pandalanguage$pandac$MethodDecl* $tmp195 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp193), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp192 = $tmp195;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                        panda$core$Panda$unref$panda$core$Object($tmp193);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp192) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp196 = p_symbol;
                            $returnValue126 = $tmp196;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
                            $tmp191 = 0;
                            goto $l189;
                            $l197:;
                            return $returnValue126;
                        }
                        }
                        panda$collections$Array* $tmp202 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp202);
                        $tmp201 = $tmp202;
                        $tmp200 = $tmp201;
                        methods199 = $tmp200;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
                        panda$collections$Array$add$panda$collections$Array$T(methods199, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods199, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp205 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp205, ((panda$collections$ListView*) methods199));
                        $tmp204 = $tmp205;
                        $tmp203 = ((org$pandalanguage$pandac$Symbol*) $tmp204);
                        $returnValue126 = $tmp203;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
                        $tmp191 = 1;
                        goto $l189;
                        $l206:;
                        return $returnValue126;
                    }
                    $l189:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods199));
                    methods199 = NULL;
                    switch ($tmp191) {
                        case 0: goto $l197;
                        case 1: goto $l206;
                    }
                    $l208:;
                }
                }
                else {
                {
                    $tmp209 = p_symbol;
                    $returnValue126 = $tmp209;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                    return $returnValue126;
                }
                }
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp211, 4);
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9138.$rawValue, $tmp211);
        if ($tmp212.value) {
        {
            {
                $match$107_17213 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp214, 4);
                panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17213.$rawValue, $tmp214);
                if ($tmp215.value) {
                {
                    int $tmp218;
                    {
                        panda$collections$Array* $tmp222 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp222, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp221 = $tmp222;
                        $tmp220 = $tmp221;
                        methods219 = $tmp220;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                        {
                            int $tmp225;
                            {
                                ITable* $tmp229 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp229 = $tmp229->next;
                                }
                                $fn231 $tmp230 = $tmp229->methods[0];
                                panda$collections$Iterator* $tmp232 = $tmp230(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp228 = $tmp232;
                                $tmp227 = $tmp228;
                                Iter$110$25226 = $tmp227;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
                                $l233:;
                                ITable* $tmp236 = Iter$110$25226->$class->itable;
                                while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp236 = $tmp236->next;
                                }
                                $fn238 $tmp237 = $tmp236->methods[0];
                                panda$core$Bit $tmp239 = $tmp237(Iter$110$25226);
                                panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
                                bool $tmp235 = $tmp240.value;
                                if (!$tmp235) goto $l234;
                                {
                                    int $tmp243;
                                    {
                                        ITable* $tmp247 = Iter$110$25226->$class->itable;
                                        while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp247 = $tmp247->next;
                                        }
                                        $fn249 $tmp248 = $tmp247->methods[1];
                                        panda$core$Object* $tmp250 = $tmp248(Iter$110$25226);
                                        $tmp246 = $tmp250;
                                        $tmp245 = ((org$pandalanguage$pandac$MethodDecl*) $tmp246);
                                        m244 = $tmp245;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                                        panda$core$Panda$unref$panda$core$Object($tmp246);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m244, ((panda$collections$List*) methods219));
                                    }
                                    $tmp243 = -1;
                                    goto $l241;
                                    $l241:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m244));
                                    m244 = NULL;
                                    switch ($tmp243) {
                                        case -1: goto $l251;
                                    }
                                    $l251:;
                                }
                                goto $l233;
                                $l234:;
                            }
                            $tmp225 = -1;
                            goto $l223;
                            $l223:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25226));
                            Iter$110$25226 = NULL;
                            switch ($tmp225) {
                                case -1: goto $l252;
                            }
                            $l252:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp255 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp255, ((panda$collections$ListView*) methods219));
                        $tmp254 = $tmp255;
                        $tmp253 = ((org$pandalanguage$pandac$Symbol*) $tmp254);
                        $returnValue126 = $tmp253;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
                        $tmp218 = 0;
                        goto $l216;
                        $l256:;
                        return $returnValue126;
                    }
                    $l216:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods219));
                    methods219 = NULL;
                    switch ($tmp218) {
                        case 0: goto $l256;
                    }
                    $l258:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp259, 3);
                panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17213.$rawValue, $tmp259);
                if ($tmp260.value) {
                {
                    int $tmp263;
                    {
                        panda$collections$Array* $tmp267 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp267, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp266 = $tmp267;
                        $tmp265 = $tmp266;
                        methods264 = $tmp265;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods264));
                        org$pandalanguage$pandac$Methods* $tmp270 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp270, ((panda$collections$ListView*) methods264));
                        $tmp269 = $tmp270;
                        $tmp268 = ((org$pandalanguage$pandac$Symbol*) $tmp269);
                        $returnValue126 = $tmp268;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        $tmp263 = 0;
                        goto $l261;
                        $l271:;
                        return $returnValue126;
                    }
                    $l261:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods264));
                    methods264 = NULL;
                    switch ($tmp263) {
                        case 0: goto $l271;
                    }
                    $l273:;
                }
                }
                else {
                {
                    $tmp274 = p_symbol;
                    $returnValue126 = $tmp274;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
                    return $returnValue126;
                }
                }
                }
            }
        }
        }
        else {
        {
            $tmp276 = p_symbol;
            $returnValue126 = $tmp276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
            return $returnValue126;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result281 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp282;
    panda$core$Object* $tmp283;
    org$pandalanguage$pandac$Symbol* $tmp285;
    org$pandalanguage$pandac$Symbol* $tmp286;
    panda$core$Object* $tmp287;
    panda$collections$Iterator* Iter$130$13292 = NULL;
    panda$collections$Iterator* $tmp293;
    panda$collections$Iterator* $tmp294;
    org$pandalanguage$pandac$SymbolTable* p310 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp311;
    panda$core$Object* $tmp312;
    org$pandalanguage$pandac$Symbol* $tmp317;
    org$pandalanguage$pandac$Symbol* $tmp318;
    org$pandalanguage$pandac$Symbol* $tmp319;
    org$pandalanguage$pandac$Symbol* $tmp320;
    org$pandalanguage$pandac$Symbol* $returnValue325;
    org$pandalanguage$pandac$Symbol* $tmp326;
    int $tmp280;
    {
        panda$core$Object* $tmp284 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp283 = $tmp284;
        $tmp282 = ((org$pandalanguage$pandac$Symbol*) $tmp283);
        result281 = $tmp282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
        panda$core$Panda$unref$panda$core$Object($tmp283);
        if (((panda$core$Bit) { result281 == NULL }).value) {
        {
            {
                $tmp285 = result281;
                panda$core$Object* $tmp288 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp287 = $tmp288;
                $tmp286 = ((org$pandalanguage$pandac$Symbol*) $tmp287);
                result281 = $tmp286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                panda$core$Panda$unref$panda$core$Object($tmp287);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
            }
            {
                int $tmp291;
                {
                    ITable* $tmp295 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp295 = $tmp295->next;
                    }
                    $fn297 $tmp296 = $tmp295->methods[0];
                    panda$collections$Iterator* $tmp298 = $tmp296(((panda$collections$Iterable*) self->parents));
                    $tmp294 = $tmp298;
                    $tmp293 = $tmp294;
                    Iter$130$13292 = $tmp293;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                    $l299:;
                    ITable* $tmp302 = Iter$130$13292->$class->itable;
                    while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp302 = $tmp302->next;
                    }
                    $fn304 $tmp303 = $tmp302->methods[0];
                    panda$core$Bit $tmp305 = $tmp303(Iter$130$13292);
                    panda$core$Bit $tmp306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp305);
                    bool $tmp301 = $tmp306.value;
                    if (!$tmp301) goto $l300;
                    {
                        int $tmp309;
                        {
                            ITable* $tmp313 = Iter$130$13292->$class->itable;
                            while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp313 = $tmp313->next;
                            }
                            $fn315 $tmp314 = $tmp313->methods[1];
                            panda$core$Object* $tmp316 = $tmp314(Iter$130$13292);
                            $tmp312 = $tmp316;
                            $tmp311 = ((org$pandalanguage$pandac$SymbolTable*) $tmp312);
                            p310 = $tmp311;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                            panda$core$Panda$unref$panda$core$Object($tmp312);
                            {
                                $tmp317 = result281;
                                org$pandalanguage$pandac$Symbol* $tmp321 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p310, p_name);
                                $tmp320 = $tmp321;
                                org$pandalanguage$pandac$Symbol* $tmp322 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result281, $tmp320);
                                $tmp319 = $tmp322;
                                $tmp318 = $tmp319;
                                result281 = $tmp318;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                            }
                        }
                        $tmp309 = -1;
                        goto $l307;
                        $l307:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p310));
                        p310 = NULL;
                        switch ($tmp309) {
                            case -1: goto $l323;
                        }
                        $l323:;
                    }
                    goto $l299;
                    $l300:;
                }
                $tmp291 = -1;
                goto $l289;
                $l289:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13292));
                Iter$130$13292 = NULL;
                switch ($tmp291) {
                    case -1: goto $l324;
                }
                $l324:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result281));
        }
        }
        $tmp326 = result281;
        $returnValue325 = $tmp326;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
        $tmp280 = 0;
        goto $l278;
        $l327:;
        return $returnValue325;
    }
    $l278:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
    result281 = NULL;
    switch ($tmp280) {
        case 0: goto $l327;
    }
    $l329:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $returnValue330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$core$String* $tmp335;
    panda$core$Object* $tmp337;
    panda$core$Int64 $tmp338 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp339;
    $tmp339 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp339->value = $tmp338;
    $tmp337 = ((panda$core$Object*) $tmp339);
    panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s336, $tmp337);
    $tmp335 = $tmp340;
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s341);
    $tmp334 = $tmp342;
    panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp334, ((panda$core$Object*) self->symbols));
    $tmp333 = $tmp343;
    panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s344);
    $tmp332 = $tmp345;
    $tmp331 = $tmp332;
    $returnValue330 = $tmp331;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    panda$core$Panda$unref$panda$core$Object($tmp337);
    return $returnValue330;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp349;
    {
    }
    $tmp349 = -1;
    goto $l347;
    $l347:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp349) {
        case -1: goto $l350;
    }
    $l350:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}





