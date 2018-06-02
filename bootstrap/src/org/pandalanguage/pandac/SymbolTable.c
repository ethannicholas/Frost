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

typedef panda$core$Object* (*$fn29)(panda$core$Weak*);
typedef panda$core$Object* (*$fn71)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn94)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn116)(panda$core$Weak*);
typedef void (*$fn125)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn133)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn194)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn232)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn239)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn250)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn305)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
    panda$core$Int64 $tmp39;
    org$pandalanguage$pandac$Symbol$Kind $match$38_1341;
    panda$core$Int64 $tmp42;
    panda$collections$Array* methods47 = NULL;
    panda$collections$Array* $tmp48;
    panda$collections$Array* $tmp49;
    org$pandalanguage$pandac$Methods* $tmp51;
    panda$core$Int64 $tmp56;
    panda$collections$Array* methods61 = NULL;
    panda$collections$Array* $tmp62;
    panda$collections$Array* $tmp63;
    org$pandalanguage$pandac$Methods* $tmp65;
    panda$core$Object* $tmp70;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$Object* $tmp80;
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
        panda$core$Int64$init$builtin_int64(&$tmp39, 3);
        panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind.$rawValue, $tmp39);
        if ($tmp40.value) {
        {
            {
                $match$38_1341 = old34->kind;
                panda$core$Int64$init$builtin_int64(&$tmp42, 3);
                panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1341.$rawValue, $tmp42);
                if ($tmp43.value) {
                {
                    int $tmp46;
                    {
                        panda$collections$Array* $tmp50 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp50);
                        $tmp49 = $tmp50;
                        $tmp48 = $tmp49;
                        methods47 = $tmp48;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
                        panda$collections$Array$add$panda$collections$Array$T(methods47, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$add$panda$collections$Array$T(methods47, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old34)));
                        org$pandalanguage$pandac$Methods* $tmp52 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp52, ((panda$collections$ListView*) methods47));
                        $tmp51 = $tmp52;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp51)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                        $tmp46 = 0;
                        goto $l44;
                        $l53:;
                        $tmp33 = 1;
                        goto $l31;
                        $l54:;
                        return;
                    }
                    $l44:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods47));
                    methods47 = NULL;
                    switch ($tmp46) {
                        case 0: goto $l53;
                    }
                    $l55:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp56, 4);
                panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$38_1341.$rawValue, $tmp56);
                if ($tmp57.value) {
                {
                    int $tmp60;
                    {
                        panda$collections$Array* $tmp64 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp64);
                        $tmp63 = $tmp64;
                        $tmp62 = $tmp63;
                        methods61 = $tmp62;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                        panda$collections$Array$add$panda$collections$Array$T(methods61, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods61, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old34)->methods));
                        org$pandalanguage$pandac$Methods* $tmp66 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp66, ((panda$collections$ListView*) methods61));
                        $tmp65 = $tmp66;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp65)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                        $tmp60 = 0;
                        goto $l58;
                        $l67:;
                        $tmp33 = 2;
                        goto $l31;
                        $l68:;
                        return;
                    }
                    $l58:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods61));
                    methods61 = NULL;
                    switch ($tmp60) {
                        case 0: goto $l67;
                    }
                    $l69:;
                }
                }
                }
            }
        }
        }
        panda$core$Object* $tmp72 = (($fn71) self->compiler->$class->vtable[2])(self->compiler);
        $tmp70 = $tmp72;
        panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s76, p_name);
        $tmp75 = $tmp77;
        panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp75, &$s78);
        $tmp74 = $tmp79;
        org$pandalanguage$pandac$Position$wrapper* $tmp81;
        $tmp81 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp81->value = old34->position;
        $tmp80 = ((panda$core$Object*) $tmp81);
        panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp74, $tmp80);
        $tmp73 = $tmp82;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp70), p_s->position, $tmp73);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object($tmp80);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object($tmp70);
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old34));
    old34 = NULL;
    switch ($tmp33) {
        case -1: goto $l83;
        case 2: goto $l68;
        case 1: goto $l54;
        case 0: goto $l38;
    }
    $l83:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$62$989 = NULL;
    panda$collections$Iterator* $tmp90;
    panda$collections$Iterator* $tmp91;
    org$pandalanguage$pandac$MethodDecl* test107 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp108;
    panda$core$Object* $tmp109;
    org$pandalanguage$pandac$MethodDecl* $tmp114;
    panda$core$Object* $tmp115;
    panda$core$Bit $tmp84 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
    if ($tmp85.value) {
    {
        return;
    }
    }
    {
        int $tmp88;
        {
            ITable* $tmp92 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp92->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp92 = $tmp92->next;
            }
            $fn94 $tmp93 = $tmp92->methods[0];
            panda$collections$Iterator* $tmp95 = $tmp93(((panda$collections$Iterable*) p_methods));
            $tmp91 = $tmp95;
            $tmp90 = $tmp91;
            Iter$62$989 = $tmp90;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
            $l96:;
            ITable* $tmp99 = Iter$62$989->$class->itable;
            while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp99 = $tmp99->next;
            }
            $fn101 $tmp100 = $tmp99->methods[0];
            panda$core$Bit $tmp102 = $tmp100(Iter$62$989);
            panda$core$Bit $tmp103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp102);
            bool $tmp98 = $tmp103.value;
            if (!$tmp98) goto $l97;
            {
                int $tmp106;
                {
                    ITable* $tmp110 = Iter$62$989->$class->itable;
                    while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp110 = $tmp110->next;
                    }
                    $fn112 $tmp111 = $tmp110->methods[1];
                    panda$core$Object* $tmp113 = $tmp111(Iter$62$989);
                    $tmp109 = $tmp113;
                    $tmp108 = ((org$pandalanguage$pandac$MethodDecl*) $tmp109);
                    test107 = $tmp108;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
                    panda$core$Panda$unref$panda$core$Object($tmp109);
                    panda$core$Object* $tmp117 = (($fn116) self->compiler->$class->vtable[2])(self->compiler);
                    $tmp115 = $tmp117;
                    org$pandalanguage$pandac$MethodDecl* $tmp118 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp115), test107);
                    $tmp114 = $tmp118;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                    panda$core$Panda$unref$panda$core$Object($tmp115);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp114) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp106 = 0;
                        goto $l104;
                        $l119:;
                        $tmp88 = 0;
                        goto $l86;
                        $l120:;
                        return;
                    }
                    }
                }
                $tmp106 = -1;
                goto $l104;
                $l104:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test107));
                test107 = NULL;
                switch ($tmp106) {
                    case 0: goto $l119;
                    case -1: goto $l121;
                }
                $l121:;
            }
            goto $l96;
            $l97:;
        }
        $tmp88 = -1;
        goto $l86;
        $l86:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$62$989));
        Iter$62$989 = NULL;
        switch ($tmp88) {
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
    org$pandalanguage$pandac$Symbol* $tmp197;
    panda$collections$Array* methods200 = NULL;
    panda$collections$Array* $tmp201;
    panda$collections$Array* $tmp202;
    org$pandalanguage$pandac$Symbol* $tmp204;
    org$pandalanguage$pandac$Methods* $tmp205;
    org$pandalanguage$pandac$Symbol* $tmp210;
    panda$core$Int64 $tmp212;
    org$pandalanguage$pandac$Symbol$Kind $match$107_17214;
    panda$core$Int64 $tmp215;
    panda$collections$Array* methods220 = NULL;
    panda$collections$Array* $tmp221;
    panda$collections$Array* $tmp222;
    panda$collections$Iterator* Iter$110$25227 = NULL;
    panda$collections$Iterator* $tmp228;
    panda$collections$Iterator* $tmp229;
    org$pandalanguage$pandac$MethodDecl* m245 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp246;
    panda$core$Object* $tmp247;
    org$pandalanguage$pandac$Symbol* $tmp254;
    org$pandalanguage$pandac$Methods* $tmp255;
    panda$core$Int64 $tmp260;
    panda$collections$Array* methods265 = NULL;
    panda$collections$Array* $tmp266;
    panda$collections$Array* $tmp267;
    org$pandalanguage$pandac$Symbol* $tmp269;
    org$pandalanguage$pandac$Methods* $tmp270;
    org$pandalanguage$pandac$Symbol* $tmp275;
    org$pandalanguage$pandac$Symbol* $tmp277;
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
                        panda$core$Object* $tmp195 = (($fn194) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp193 = $tmp195;
                        org$pandalanguage$pandac$MethodDecl* $tmp196 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp193), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp192 = $tmp196;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                        panda$core$Panda$unref$panda$core$Object($tmp193);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp192) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp197 = p_symbol;
                            $returnValue126 = $tmp197;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
                            $tmp191 = 0;
                            goto $l189;
                            $l198:;
                            return $returnValue126;
                        }
                        }
                        panda$collections$Array* $tmp203 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp203);
                        $tmp202 = $tmp203;
                        $tmp201 = $tmp202;
                        methods200 = $tmp201;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                        panda$collections$Array$add$panda$collections$Array$T(methods200, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        panda$collections$Array$add$panda$collections$Array$T(methods200, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)));
                        org$pandalanguage$pandac$Methods* $tmp206 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp206, ((panda$collections$ListView*) methods200));
                        $tmp205 = $tmp206;
                        $tmp204 = ((org$pandalanguage$pandac$Symbol*) $tmp205);
                        $returnValue126 = $tmp204;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
                        $tmp191 = 1;
                        goto $l189;
                        $l207:;
                        return $returnValue126;
                    }
                    $l189:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods200));
                    methods200 = NULL;
                    switch ($tmp191) {
                        case 0: goto $l198;
                        case 1: goto $l207;
                    }
                    $l209:;
                }
                }
                else {
                {
                    $tmp210 = p_symbol;
                    $returnValue126 = $tmp210;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
                    return $returnValue126;
                }
                }
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp212, 4);
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_9138.$rawValue, $tmp212);
        if ($tmp213.value) {
        {
            {
                $match$107_17214 = p_inherited->kind;
                panda$core$Int64$init$builtin_int64(&$tmp215, 4);
                panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17214.$rawValue, $tmp215);
                if ($tmp216.value) {
                {
                    int $tmp219;
                    {
                        panda$collections$Array* $tmp223 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp223, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp222 = $tmp223;
                        $tmp221 = $tmp222;
                        methods220 = $tmp221;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
                        {
                            int $tmp226;
                            {
                                ITable* $tmp230 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp230 = $tmp230->next;
                                }
                                $fn232 $tmp231 = $tmp230->methods[0];
                                panda$collections$Iterator* $tmp233 = $tmp231(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp229 = $tmp233;
                                $tmp228 = $tmp229;
                                Iter$110$25227 = $tmp228;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                                $l234:;
                                ITable* $tmp237 = Iter$110$25227->$class->itable;
                                while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp237 = $tmp237->next;
                                }
                                $fn239 $tmp238 = $tmp237->methods[0];
                                panda$core$Bit $tmp240 = $tmp238(Iter$110$25227);
                                panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
                                bool $tmp236 = $tmp241.value;
                                if (!$tmp236) goto $l235;
                                {
                                    int $tmp244;
                                    {
                                        ITable* $tmp248 = Iter$110$25227->$class->itable;
                                        while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp248 = $tmp248->next;
                                        }
                                        $fn250 $tmp249 = $tmp248->methods[1];
                                        panda$core$Object* $tmp251 = $tmp249(Iter$110$25227);
                                        $tmp247 = $tmp251;
                                        $tmp246 = ((org$pandalanguage$pandac$MethodDecl*) $tmp247);
                                        m245 = $tmp246;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                                        panda$core$Panda$unref$panda$core$Object($tmp247);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m245, ((panda$collections$List*) methods220));
                                    }
                                    $tmp244 = -1;
                                    goto $l242;
                                    $l242:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m245));
                                    m245 = NULL;
                                    switch ($tmp244) {
                                        case -1: goto $l252;
                                    }
                                    $l252:;
                                }
                                goto $l234;
                                $l235:;
                            }
                            $tmp226 = -1;
                            goto $l224;
                            $l224:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$25227));
                            Iter$110$25227 = NULL;
                            switch ($tmp226) {
                                case -1: goto $l253;
                            }
                            $l253:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp256 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp256, ((panda$collections$ListView*) methods220));
                        $tmp255 = $tmp256;
                        $tmp254 = ((org$pandalanguage$pandac$Symbol*) $tmp255);
                        $returnValue126 = $tmp254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                        $tmp219 = 0;
                        goto $l217;
                        $l257:;
                        return $returnValue126;
                    }
                    $l217:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods220));
                    methods220 = NULL;
                    switch ($tmp219) {
                        case 0: goto $l257;
                    }
                    $l259:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp260, 3);
                panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_17214.$rawValue, $tmp260);
                if ($tmp261.value) {
                {
                    int $tmp264;
                    {
                        panda$collections$Array* $tmp268 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp268, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp267 = $tmp268;
                        $tmp266 = $tmp267;
                        methods265 = $tmp266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods265));
                        org$pandalanguage$pandac$Methods* $tmp271 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp271, ((panda$collections$ListView*) methods265));
                        $tmp270 = $tmp271;
                        $tmp269 = ((org$pandalanguage$pandac$Symbol*) $tmp270);
                        $returnValue126 = $tmp269;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                        $tmp264 = 0;
                        goto $l262;
                        $l272:;
                        return $returnValue126;
                    }
                    $l262:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods265));
                    methods265 = NULL;
                    switch ($tmp264) {
                        case 0: goto $l272;
                    }
                    $l274:;
                }
                }
                else {
                {
                    $tmp275 = p_symbol;
                    $returnValue126 = $tmp275;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                    return $returnValue126;
                }
                }
                }
            }
        }
        }
        else {
        {
            $tmp277 = p_symbol;
            $returnValue126 = $tmp277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
            return $returnValue126;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result282 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp283;
    panda$core$Object* $tmp284;
    org$pandalanguage$pandac$Symbol* $tmp286;
    org$pandalanguage$pandac$Symbol* $tmp287;
    panda$core$Object* $tmp288;
    panda$collections$Iterator* Iter$130$13293 = NULL;
    panda$collections$Iterator* $tmp294;
    panda$collections$Iterator* $tmp295;
    org$pandalanguage$pandac$SymbolTable* p311 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp312;
    panda$core$Object* $tmp313;
    org$pandalanguage$pandac$Symbol* $tmp318;
    org$pandalanguage$pandac$Symbol* $tmp319;
    org$pandalanguage$pandac$Symbol* $tmp320;
    org$pandalanguage$pandac$Symbol* $tmp321;
    org$pandalanguage$pandac$Symbol* $returnValue326;
    org$pandalanguage$pandac$Symbol* $tmp327;
    int $tmp281;
    {
        panda$core$Object* $tmp285 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp284 = $tmp285;
        $tmp283 = ((org$pandalanguage$pandac$Symbol*) $tmp284);
        result282 = $tmp283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
        panda$core$Panda$unref$panda$core$Object($tmp284);
        if (((panda$core$Bit) { result282 == NULL }).value) {
        {
            {
                $tmp286 = result282;
                panda$core$Object* $tmp289 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp288 = $tmp289;
                $tmp287 = ((org$pandalanguage$pandac$Symbol*) $tmp288);
                result282 = $tmp287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                panda$core$Panda$unref$panda$core$Object($tmp288);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
            }
            {
                int $tmp292;
                {
                    ITable* $tmp296 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp296 = $tmp296->next;
                    }
                    $fn298 $tmp297 = $tmp296->methods[0];
                    panda$collections$Iterator* $tmp299 = $tmp297(((panda$collections$Iterable*) self->parents));
                    $tmp295 = $tmp299;
                    $tmp294 = $tmp295;
                    Iter$130$13293 = $tmp294;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
                    $l300:;
                    ITable* $tmp303 = Iter$130$13293->$class->itable;
                    while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp303 = $tmp303->next;
                    }
                    $fn305 $tmp304 = $tmp303->methods[0];
                    panda$core$Bit $tmp306 = $tmp304(Iter$130$13293);
                    panda$core$Bit $tmp307 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp306);
                    bool $tmp302 = $tmp307.value;
                    if (!$tmp302) goto $l301;
                    {
                        int $tmp310;
                        {
                            ITable* $tmp314 = Iter$130$13293->$class->itable;
                            while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp314 = $tmp314->next;
                            }
                            $fn316 $tmp315 = $tmp314->methods[1];
                            panda$core$Object* $tmp317 = $tmp315(Iter$130$13293);
                            $tmp313 = $tmp317;
                            $tmp312 = ((org$pandalanguage$pandac$SymbolTable*) $tmp313);
                            p311 = $tmp312;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                            panda$core$Panda$unref$panda$core$Object($tmp313);
                            {
                                $tmp318 = result282;
                                org$pandalanguage$pandac$Symbol* $tmp322 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p311, p_name);
                                $tmp321 = $tmp322;
                                org$pandalanguage$pandac$Symbol* $tmp323 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result282, $tmp321);
                                $tmp320 = $tmp323;
                                $tmp319 = $tmp320;
                                result282 = $tmp319;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                            }
                        }
                        $tmp310 = -1;
                        goto $l308;
                        $l308:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p311));
                        p311 = NULL;
                        switch ($tmp310) {
                            case -1: goto $l324;
                        }
                        $l324:;
                    }
                    goto $l300;
                    $l301:;
                }
                $tmp292 = -1;
                goto $l290;
                $l290:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$130$13293));
                Iter$130$13293 = NULL;
                switch ($tmp292) {
                    case -1: goto $l325;
                }
                $l325:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result282));
        }
        }
        $tmp327 = result282;
        $returnValue326 = $tmp327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
        $tmp281 = 0;
        goto $l279;
        $l328:;
        return $returnValue326;
    }
    $l279:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
    result282 = NULL;
    switch ($tmp281) {
        case 0: goto $l328;
    }
    $l330:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $returnValue331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$core$String* $tmp335;
    panda$core$String* $tmp336;
    panda$core$Object* $tmp338;
    panda$core$Int64 $tmp339 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp340;
    $tmp340 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp340->value = $tmp339;
    $tmp338 = ((panda$core$Object*) $tmp340);
    panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s337, $tmp338);
    $tmp336 = $tmp341;
    panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s342);
    $tmp335 = $tmp343;
    panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp335, ((panda$core$Object*) self->symbols));
    $tmp334 = $tmp344;
    panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s345);
    $tmp333 = $tmp346;
    $tmp332 = $tmp333;
    $returnValue331 = $tmp332;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
    panda$core$Panda$unref$panda$core$Object($tmp338);
    return $returnValue331;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp350;
    {
    }
    $tmp350 = -1;
    goto $l348;
    $l348:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp350) {
        case -1: goto $l351;
    }
    $l351:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}





