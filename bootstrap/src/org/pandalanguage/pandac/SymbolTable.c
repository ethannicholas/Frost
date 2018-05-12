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

typedef panda$core$Object* (*$fn60)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn83)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn105)(panda$core$Weak*);
typedef void (*$fn114)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn124)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn152)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn233)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn283)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn301)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
        $tmp25 = p_parent->compiler;
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
    org$pandalanguage$pandac$Symbol* old29 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp30;
    panda$core$Object* $tmp31;
    panda$collections$Array* methods38 = NULL;
    panda$collections$Array* $tmp39;
    panda$collections$Array* $tmp40;
    org$pandalanguage$pandac$Methods* $tmp42;
    panda$collections$Array* methods50 = NULL;
    panda$collections$Array* $tmp51;
    panda$collections$Array* $tmp52;
    org$pandalanguage$pandac$Methods* $tmp54;
    panda$core$Object* $tmp59;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$Object* $tmp69;
    int $tmp28;
    {
        panda$collections$HashMap$remove$panda$collections$HashMap$K(self->merged, ((panda$collections$Key*) p_name));
        panda$core$Object* $tmp32 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
        $tmp31 = $tmp32;
        $tmp30 = ((org$pandalanguage$pandac$Symbol*) $tmp31);
        old29 = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object($tmp31);
        if (((panda$core$Bit) { old29 == NULL }).value) {
        {
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) p_s));
            $tmp28 = 0;
            goto $l26;
            $l33:;
            return;
        }
        }
        panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 204 }));
        if ($tmp34.value) {
        {
            switch (old29->kind.value) {
                case 204:
                {
                    int $tmp37;
                    {
                        panda$collections$Array* $tmp41 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp41);
                        $tmp40 = $tmp41;
                        $tmp39 = $tmp40;
                        methods38 = $tmp39;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
                        panda$collections$Array$add$panda$collections$Array$T(methods38, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$add$panda$collections$Array$T(methods38, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) old29)));
                        org$pandalanguage$pandac$Methods* $tmp43 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp43, ((panda$collections$ListView*) methods38));
                        $tmp42 = $tmp43;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp42)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
                        $tmp37 = 0;
                        goto $l35;
                        $l44:;
                        $tmp28 = 1;
                        goto $l26;
                        $l45:;
                        return;
                    }
                    $l35:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods38));
                    methods38 = NULL;
                    switch ($tmp37) {
                        case 0: goto $l44;
                    }
                    $l46:;
                }
                break;
                case 205:
                {
                    int $tmp49;
                    {
                        panda$collections$Array* $tmp53 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp53);
                        $tmp52 = $tmp53;
                        $tmp51 = $tmp52;
                        methods50 = $tmp51;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
                        panda$collections$Array$add$panda$collections$Array$T(methods50, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_s)));
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(methods50, ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$Methods*) old29)->methods));
                        org$pandalanguage$pandac$Methods* $tmp55 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp55, ((panda$collections$ListView*) methods50));
                        $tmp54 = $tmp55;
                        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->symbols, ((panda$collections$Key*) p_name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp54)));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                        $tmp49 = 0;
                        goto $l47;
                        $l56:;
                        $tmp28 = 2;
                        goto $l26;
                        $l57:;
                        return;
                    }
                    $l47:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods50));
                    methods50 = NULL;
                    switch ($tmp49) {
                        case 0: goto $l56;
                    }
                    $l58:;
                }
                break;
            }
        }
        }
        panda$core$Object* $tmp61 = (($fn60) self->compiler->$class->vtable[2])(self->compiler);
        $tmp59 = $tmp61;
        panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s65, p_name);
        $tmp64 = $tmp66;
        panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s67);
        $tmp63 = $tmp68;
        org$pandalanguage$pandac$Position$wrapper* $tmp70;
        $tmp70 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp70->value = old29->position;
        $tmp69 = ((panda$core$Object*) $tmp70);
        panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp63, $tmp69);
        $tmp62 = $tmp71;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp59), p_s->position, $tmp62);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object($tmp69);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object($tmp59);
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old29));
    old29 = NULL;
    switch ($tmp28) {
        case 1: goto $l45;
        case -1: goto $l72;
        case 2: goto $l57;
        case 0: goto $l33;
    }
    $l72:;
}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$List* p_methods) {
    panda$collections$Iterator* Iter$61$978 = NULL;
    panda$collections$Iterator* $tmp79;
    panda$collections$Iterator* $tmp80;
    org$pandalanguage$pandac$MethodDecl* test96 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp97;
    panda$core$Object* $tmp98;
    org$pandalanguage$pandac$MethodDecl* $tmp103;
    panda$core$Object* $tmp104;
    panda$core$Bit $tmp73 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(p_m);
    panda$core$Bit $tmp74 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp73);
    if ($tmp74.value) {
    {
        return;
    }
    }
    {
        int $tmp77;
        {
            ITable* $tmp81 = ((panda$collections$Iterable*) p_methods)->$class->itable;
            while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp81 = $tmp81->next;
            }
            $fn83 $tmp82 = $tmp81->methods[0];
            panda$collections$Iterator* $tmp84 = $tmp82(((panda$collections$Iterable*) p_methods));
            $tmp80 = $tmp84;
            $tmp79 = $tmp80;
            Iter$61$978 = $tmp79;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
            $l85:;
            ITable* $tmp88 = Iter$61$978->$class->itable;
            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp88 = $tmp88->next;
            }
            $fn90 $tmp89 = $tmp88->methods[0];
            panda$core$Bit $tmp91 = $tmp89(Iter$61$978);
            panda$core$Bit $tmp92 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp91);
            bool $tmp87 = $tmp92.value;
            if (!$tmp87) goto $l86;
            {
                int $tmp95;
                {
                    ITable* $tmp99 = Iter$61$978->$class->itable;
                    while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp99 = $tmp99->next;
                    }
                    $fn101 $tmp100 = $tmp99->methods[1];
                    panda$core$Object* $tmp102 = $tmp100(Iter$61$978);
                    $tmp98 = $tmp102;
                    $tmp97 = ((org$pandalanguage$pandac$MethodDecl*) $tmp98);
                    test96 = $tmp97;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
                    panda$core$Panda$unref$panda$core$Object($tmp98);
                    panda$core$Object* $tmp106 = (($fn105) self->compiler->$class->vtable[2])(self->compiler);
                    $tmp104 = $tmp106;
                    org$pandalanguage$pandac$MethodDecl* $tmp107 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp104), test96);
                    $tmp103 = $tmp107;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
                    panda$core$Panda$unref$panda$core$Object($tmp104);
                    if (((panda$core$Bit) { ((panda$core$Object*) $tmp103) == ((panda$core$Object*) p_m) }).value) {
                    {
                        $tmp95 = 0;
                        goto $l93;
                        $l108:;
                        $tmp77 = 0;
                        goto $l75;
                        $l109:;
                        return;
                    }
                    }
                }
                $tmp95 = -1;
                goto $l93;
                $l93:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test96));
                test96 = NULL;
                switch ($tmp95) {
                    case -1: goto $l110;
                    case 0: goto $l108;
                }
                $l110:;
            }
            goto $l85;
            $l86:;
        }
        $tmp77 = -1;
        goto $l75;
        $l75:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$61$978));
        Iter$61$978 = NULL;
        switch ($tmp77) {
            case 0: goto $l109;
            case -1: goto $l111;
        }
        $l111:;
    }
    ITable* $tmp112 = ((panda$collections$CollectionWriter*) p_methods)->$class->itable;
    while ($tmp112->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
        $tmp112 = $tmp112->next;
    }
    $fn114 $tmp113 = $tmp112->methods[0];
    $tmp113(((panda$collections$CollectionWriter*) p_methods), ((panda$core$Object*) p_m));
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, org$pandalanguage$pandac$Symbol* p_symbol, org$pandalanguage$pandac$Symbol* p_inherited) {
    org$pandalanguage$pandac$Symbol* $finallyReturn114;
    org$pandalanguage$pandac$Symbol* $tmp116;
    org$pandalanguage$pandac$Symbol* $finallyReturn117;
    org$pandalanguage$pandac$Symbol* $tmp119;
    org$pandalanguage$pandac$Symbol* $finallyReturn120;
    org$pandalanguage$pandac$Symbol* $tmp122;
    org$pandalanguage$pandac$Symbol* $finallyReturn126;
    org$pandalanguage$pandac$Symbol* $tmp128;
    panda$collections$Array* methods133 = NULL;
    panda$collections$Array* $tmp134;
    panda$collections$Array* $tmp135;
    panda$collections$Iterator* Iter$89$25140 = NULL;
    panda$collections$Iterator* $tmp141;
    panda$collections$Iterator* $tmp142;
    org$pandalanguage$pandac$MethodDecl* m158 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp159;
    panda$core$Object* $tmp160;
    org$pandalanguage$pandac$Symbol* $finallyReturn166;
    org$pandalanguage$pandac$Symbol* $tmp168;
    org$pandalanguage$pandac$Methods* $tmp169;
    org$pandalanguage$pandac$MethodDecl* $tmp177;
    panda$core$Object* $tmp178;
    org$pandalanguage$pandac$Symbol* $finallyReturn181;
    org$pandalanguage$pandac$Symbol* $tmp183;
    panda$collections$Array* methods186 = NULL;
    panda$collections$Array* $tmp187;
    panda$collections$Array* $tmp188;
    org$pandalanguage$pandac$Symbol* $finallyReturn189;
    org$pandalanguage$pandac$Symbol* $tmp191;
    org$pandalanguage$pandac$Methods* $tmp192;
    org$pandalanguage$pandac$Symbol* $finallyReturn196;
    org$pandalanguage$pandac$Symbol* $tmp198;
    panda$collections$Array* methods203 = NULL;
    panda$collections$Array* $tmp204;
    panda$collections$Array* $tmp205;
    panda$collections$Iterator* Iter$109$25210 = NULL;
    panda$collections$Iterator* $tmp211;
    panda$collections$Iterator* $tmp212;
    org$pandalanguage$pandac$MethodDecl* m228 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp229;
    panda$core$Object* $tmp230;
    org$pandalanguage$pandac$Symbol* $finallyReturn236;
    org$pandalanguage$pandac$Symbol* $tmp238;
    org$pandalanguage$pandac$Methods* $tmp239;
    panda$collections$Array* methods247 = NULL;
    panda$collections$Array* $tmp248;
    panda$collections$Array* $tmp249;
    org$pandalanguage$pandac$Symbol* $finallyReturn250;
    org$pandalanguage$pandac$Symbol* $tmp252;
    org$pandalanguage$pandac$Methods* $tmp253;
    org$pandalanguage$pandac$Symbol* $finallyReturn257;
    org$pandalanguage$pandac$Symbol* $tmp259;
    org$pandalanguage$pandac$Symbol* $finallyReturn260;
    org$pandalanguage$pandac$Symbol* $tmp262;
    if (((panda$core$Bit) { p_inherited == NULL }).value) {
    {
        $tmp116 = p_symbol;
        $finallyReturn114 = $tmp116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
        return $finallyReturn114;
    }
    }
    if (((panda$core$Bit) { p_symbol == NULL }).value) {
    {
        $tmp119 = p_inherited;
        $finallyReturn117 = $tmp119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
        return $finallyReturn117;
    }
    }
    if (((panda$core$Bit) { ((panda$core$Object*) p_symbol) == ((panda$core$Object*) p_inherited) }).value) {
    {
        $tmp122 = p_symbol;
        $finallyReturn120 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        return $finallyReturn120;
    }
    }
    panda$core$Bit $tmp125 = (($fn124) p_inherited->$class->vtable[2])(p_inherited);
    panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
    if ($tmp126.value) {
    {
        $tmp128 = p_symbol;
        $finallyReturn126 = $tmp128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
        return $finallyReturn126;
    }
    }
    switch (p_symbol->kind.value) {
        case 204:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp132;
                    {
                        panda$collections$Array* $tmp136 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp136);
                        $tmp135 = $tmp136;
                        $tmp134 = $tmp135;
                        methods133 = $tmp134;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
                        panda$collections$Array$add$panda$collections$Array$T(methods133, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_symbol)));
                        {
                            int $tmp139;
                            {
                                ITable* $tmp143 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp143 = $tmp143->next;
                                }
                                $fn145 $tmp144 = $tmp143->methods[0];
                                panda$collections$Iterator* $tmp146 = $tmp144(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp142 = $tmp146;
                                $tmp141 = $tmp142;
                                Iter$89$25140 = $tmp141;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
                                $l147:;
                                ITable* $tmp150 = Iter$89$25140->$class->itable;
                                while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp150 = $tmp150->next;
                                }
                                $fn152 $tmp151 = $tmp150->methods[0];
                                panda$core$Bit $tmp153 = $tmp151(Iter$89$25140);
                                panda$core$Bit $tmp154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp153);
                                bool $tmp149 = $tmp154.value;
                                if (!$tmp149) goto $l148;
                                {
                                    int $tmp157;
                                    {
                                        ITable* $tmp161 = Iter$89$25140->$class->itable;
                                        while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp161 = $tmp161->next;
                                        }
                                        $fn163 $tmp162 = $tmp161->methods[1];
                                        panda$core$Object* $tmp164 = $tmp162(Iter$89$25140);
                                        $tmp160 = $tmp164;
                                        $tmp159 = ((org$pandalanguage$pandac$MethodDecl*) $tmp160);
                                        m158 = $tmp159;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
                                        panda$core$Panda$unref$panda$core$Object($tmp160);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m158, ((panda$collections$List*) methods133));
                                    }
                                    $tmp157 = -1;
                                    goto $l155;
                                    $l155:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m158));
                                    m158 = NULL;
                                    switch ($tmp157) {
                                        case -1: goto $l165;
                                    }
                                    $l165:;
                                }
                                goto $l147;
                                $l148:;
                            }
                            $tmp139 = -1;
                            goto $l137;
                            $l137:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$89$25140));
                            Iter$89$25140 = NULL;
                            switch ($tmp139) {
                                case -1: goto $l166;
                            }
                            $l166:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp170 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp170, ((panda$collections$ListView*) methods133));
                        $tmp169 = $tmp170;
                        $tmp168 = ((org$pandalanguage$pandac$Symbol*) $tmp169);
                        $finallyReturn166 = $tmp168;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
                        $tmp132 = 0;
                        goto $l130;
                        $l171:;
                        return $finallyReturn166;
                    }
                    $l130:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods133));
                    methods133 = NULL;
                    switch ($tmp132) {
                        case 0: goto $l171;
                    }
                    $l173:;
                }
                break;
                case 204:
                {
                    int $tmp176;
                    {
                        panda$core$Object* $tmp180 = (($fn179) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp178 = $tmp180;
                        org$pandalanguage$pandac$MethodDecl* $tmp181 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp178), ((org$pandalanguage$pandac$MethodDecl*) p_symbol));
                        $tmp177 = $tmp181;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object($tmp178);
                        if (((panda$core$Bit) { ((panda$core$Object*) $tmp177) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) p_inherited)) }).value) {
                        {
                            $tmp183 = p_symbol;
                            $finallyReturn181 = $tmp183;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
                            $tmp176 = 0;
                            goto $l174;
                            $l184:;
                            return $finallyReturn181;
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
                        org$pandalanguage$pandac$Methods* $tmp193 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp193, ((panda$collections$ListView*) methods186));
                        $tmp192 = $tmp193;
                        $tmp191 = ((org$pandalanguage$pandac$Symbol*) $tmp192);
                        $finallyReturn189 = $tmp191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                        $tmp176 = 1;
                        goto $l174;
                        $l194:;
                        return $finallyReturn189;
                    }
                    $l174:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods186));
                    methods186 = NULL;
                    switch ($tmp176) {
                        case 1: goto $l194;
                        case 0: goto $l184;
                    }
                    $l196:;
                }
                break;
                default:
                {
                    $tmp198 = p_symbol;
                    $finallyReturn196 = $tmp198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                    return $finallyReturn196;
                }
            }
        }
        break;
        case 205:
        {
            switch (p_inherited->kind.value) {
                case 205:
                {
                    int $tmp202;
                    {
                        panda$collections$Array* $tmp206 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp206, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp205 = $tmp206;
                        $tmp204 = $tmp205;
                        methods203 = $tmp204;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
                        {
                            int $tmp209;
                            {
                                ITable* $tmp213 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods)->$class->itable;
                                while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp213 = $tmp213->next;
                                }
                                $fn215 $tmp214 = $tmp213->methods[0];
                                panda$collections$Iterator* $tmp216 = $tmp214(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) p_inherited)->methods));
                                $tmp212 = $tmp216;
                                $tmp211 = $tmp212;
                                Iter$109$25210 = $tmp211;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                                $l217:;
                                ITable* $tmp220 = Iter$109$25210->$class->itable;
                                while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp220 = $tmp220->next;
                                }
                                $fn222 $tmp221 = $tmp220->methods[0];
                                panda$core$Bit $tmp223 = $tmp221(Iter$109$25210);
                                panda$core$Bit $tmp224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp223);
                                bool $tmp219 = $tmp224.value;
                                if (!$tmp219) goto $l218;
                                {
                                    int $tmp227;
                                    {
                                        ITable* $tmp231 = Iter$109$25210->$class->itable;
                                        while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp231 = $tmp231->next;
                                        }
                                        $fn233 $tmp232 = $tmp231->methods[1];
                                        panda$core$Object* $tmp234 = $tmp232(Iter$109$25210);
                                        $tmp230 = $tmp234;
                                        $tmp229 = ((org$pandalanguage$pandac$MethodDecl*) $tmp230);
                                        m228 = $tmp229;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
                                        panda$core$Panda$unref$panda$core$Object($tmp230);
                                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, m228, ((panda$collections$List*) methods203));
                                    }
                                    $tmp227 = -1;
                                    goto $l225;
                                    $l225:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m228));
                                    m228 = NULL;
                                    switch ($tmp227) {
                                        case -1: goto $l235;
                                    }
                                    $l235:;
                                }
                                goto $l217;
                                $l218:;
                            }
                            $tmp209 = -1;
                            goto $l207;
                            $l207:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$109$25210));
                            Iter$109$25210 = NULL;
                            switch ($tmp209) {
                                case -1: goto $l236;
                            }
                            $l236:;
                        }
                        org$pandalanguage$pandac$Methods* $tmp240 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp240, ((panda$collections$ListView*) methods203));
                        $tmp239 = $tmp240;
                        $tmp238 = ((org$pandalanguage$pandac$Symbol*) $tmp239);
                        $finallyReturn236 = $tmp238;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        $tmp202 = 0;
                        goto $l200;
                        $l241:;
                        return $finallyReturn236;
                    }
                    $l200:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods203));
                    methods203 = NULL;
                    switch ($tmp202) {
                        case 0: goto $l241;
                    }
                    $l243:;
                }
                break;
                case 204:
                {
                    int $tmp246;
                    {
                        panda$collections$Array* $tmp250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp250, ((panda$collections$ListView*) ((org$pandalanguage$pandac$Methods*) p_symbol)->methods));
                        $tmp249 = $tmp250;
                        $tmp248 = $tmp249;
                        methods247 = $tmp248;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                        org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(self, ((org$pandalanguage$pandac$MethodDecl*) p_inherited), ((panda$collections$List*) methods247));
                        org$pandalanguage$pandac$Methods* $tmp254 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
                        org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp254, ((panda$collections$ListView*) methods247));
                        $tmp253 = $tmp254;
                        $tmp252 = ((org$pandalanguage$pandac$Symbol*) $tmp253);
                        $finallyReturn250 = $tmp252;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                        $tmp246 = 0;
                        goto $l244;
                        $l255:;
                        return $finallyReturn250;
                    }
                    $l244:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods247));
                    methods247 = NULL;
                    switch ($tmp246) {
                        case 0: goto $l255;
                    }
                    $l257:;
                }
                break;
                default:
                {
                    $tmp259 = p_symbol;
                    $finallyReturn257 = $tmp259;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                    return $finallyReturn257;
                }
            }
        }
        break;
        default:
        {
            $tmp262 = p_symbol;
            $finallyReturn260 = $tmp262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
            return $finallyReturn260;
        }
    }
}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* result267 = NULL;
    org$pandalanguage$pandac$Symbol* $tmp268;
    panda$core$Object* $tmp269;
    org$pandalanguage$pandac$Symbol* $tmp271;
    org$pandalanguage$pandac$Symbol* $tmp272;
    panda$core$Object* $tmp273;
    panda$collections$Iterator* Iter$129$13278 = NULL;
    panda$collections$Iterator* $tmp279;
    panda$collections$Iterator* $tmp280;
    org$pandalanguage$pandac$SymbolTable* p296 = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp297;
    panda$core$Object* $tmp298;
    org$pandalanguage$pandac$Symbol* $tmp303;
    org$pandalanguage$pandac$Symbol* $tmp304;
    org$pandalanguage$pandac$Symbol* $tmp305;
    org$pandalanguage$pandac$Symbol* $tmp306;
    org$pandalanguage$pandac$Symbol* $finallyReturn310;
    org$pandalanguage$pandac$Symbol* $tmp312;
    int $tmp266;
    {
        panda$core$Object* $tmp270 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->merged, ((panda$collections$Key*) p_name));
        $tmp269 = $tmp270;
        $tmp268 = ((org$pandalanguage$pandac$Symbol*) $tmp269);
        result267 = $tmp268;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
        panda$core$Panda$unref$panda$core$Object($tmp269);
        if (((panda$core$Bit) { result267 == NULL }).value) {
        {
            {
                $tmp271 = result267;
                panda$core$Object* $tmp274 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->symbols, ((panda$collections$Key*) p_name));
                $tmp273 = $tmp274;
                $tmp272 = ((org$pandalanguage$pandac$Symbol*) $tmp273);
                result267 = $tmp272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                panda$core$Panda$unref$panda$core$Object($tmp273);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
            }
            {
                int $tmp277;
                {
                    ITable* $tmp281 = ((panda$collections$Iterable*) self->parents)->$class->itable;
                    while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp281 = $tmp281->next;
                    }
                    $fn283 $tmp282 = $tmp281->methods[0];
                    panda$collections$Iterator* $tmp284 = $tmp282(((panda$collections$Iterable*) self->parents));
                    $tmp280 = $tmp284;
                    $tmp279 = $tmp280;
                    Iter$129$13278 = $tmp279;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                    $l285:;
                    ITable* $tmp288 = Iter$129$13278->$class->itable;
                    while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp288 = $tmp288->next;
                    }
                    $fn290 $tmp289 = $tmp288->methods[0];
                    panda$core$Bit $tmp291 = $tmp289(Iter$129$13278);
                    panda$core$Bit $tmp292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp291);
                    bool $tmp287 = $tmp292.value;
                    if (!$tmp287) goto $l286;
                    {
                        int $tmp295;
                        {
                            ITable* $tmp299 = Iter$129$13278->$class->itable;
                            while ($tmp299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp299 = $tmp299->next;
                            }
                            $fn301 $tmp300 = $tmp299->methods[1];
                            panda$core$Object* $tmp302 = $tmp300(Iter$129$13278);
                            $tmp298 = $tmp302;
                            $tmp297 = ((org$pandalanguage$pandac$SymbolTable*) $tmp298);
                            p296 = $tmp297;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                            panda$core$Panda$unref$panda$core$Object($tmp298);
                            {
                                $tmp303 = result267;
                                org$pandalanguage$pandac$Symbol* $tmp307 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p296, p_name);
                                $tmp306 = $tmp307;
                                org$pandalanguage$pandac$Symbol* $tmp308 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(self, result267, $tmp306);
                                $tmp305 = $tmp308;
                                $tmp304 = $tmp305;
                                result267 = $tmp304;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                            }
                        }
                        $tmp295 = -1;
                        goto $l293;
                        $l293:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p296));
                        p296 = NULL;
                        switch ($tmp295) {
                            case -1: goto $l309;
                        }
                        $l309:;
                    }
                    goto $l285;
                    $l286:;
                }
                $tmp277 = -1;
                goto $l275;
                $l275:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$129$13278));
                Iter$129$13278 = NULL;
                switch ($tmp277) {
                    case -1: goto $l310;
                }
                $l310:;
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->merged, ((panda$collections$Key*) p_name), ((panda$core$Object*) result267));
        }
        }
        $tmp312 = result267;
        $finallyReturn310 = $tmp312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
        $tmp266 = 0;
        goto $l264;
        $l313:;
        return $finallyReturn310;
    }
    $l264:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result267));
    result267 = NULL;
    switch ($tmp266) {
        case 0: goto $l313;
    }
    $l315:;
}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* self) {
    panda$core$String* $finallyReturn315;
    panda$core$String* $tmp317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$core$Object* $tmp323;
    panda$core$Int64 $tmp324 = panda$collections$Array$get_count$R$panda$core$Int64(self->parents);
    panda$core$Int64$wrapper* $tmp325;
    $tmp325 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp325->value = $tmp324;
    $tmp323 = ((panda$core$Object*) $tmp325);
    panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s322, $tmp323);
    $tmp321 = $tmp326;
    panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s327);
    $tmp320 = $tmp328;
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp320, ((panda$core$Object*) self->symbols));
    $tmp319 = $tmp329;
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s330);
    $tmp318 = $tmp331;
    $tmp317 = $tmp318;
    $finallyReturn315 = $tmp317;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
    panda$core$Panda$unref$panda$core$Object($tmp323);
    return $finallyReturn315;
}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* self) {
    int $tmp335;
    {
    }
    $tmp335 = -1;
    goto $l333;
    $l333:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp335) {
        case -1: goto $l336;
    }
    $l336:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbols));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->merged));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parents));
}

