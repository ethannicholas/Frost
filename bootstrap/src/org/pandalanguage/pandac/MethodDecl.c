#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn120)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn210)(panda$core$Weak*);
typedef panda$core$Object* (*$fn229)(panda$core$Weak*);
typedef panda$core$Object* (*$fn247)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_genericParameters, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    org$pandalanguage$pandac$Compiler$Resolution $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$Weak* $tmp5;
    org$pandalanguage$pandac$Symbol$Kind $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$Weak* $tmp9;
    panda$core$Weak* $tmp10;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    org$pandalanguage$pandac$Annotations* $tmp14;
    org$pandalanguage$pandac$Annotations* $tmp15;
    panda$collections$Array* $tmp16;
    panda$collections$Array* $tmp17;
    panda$collections$Array* $tmp18;
    panda$collections$Array* $tmp19;
    org$pandalanguage$pandac$Type* $tmp20;
    org$pandalanguage$pandac$Type* $tmp21;
    panda$collections$ImmutableArray* $tmp22;
    panda$collections$ImmutableArray* $tmp23;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->genericParameters = NULL;
    self->parameters = NULL;
    self->returnType = NULL;
    self->body = NULL;
    self->compiledBody = NULL;
    self->overridden = NULL;
    $tmp2 = NULL;
    self->compiledBody = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp3, ((panda$core$Int64) { 0 }));
    self->resolved = $tmp3;
    self->overrideKnown = ((panda$core$Bit) { false });
    panda$core$Weak* $tmp6 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp6, ((panda$core$Object*) NULL));
    $tmp5 = $tmp6;
    $tmp4 = $tmp5;
    self->overridden = $tmp4;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp7, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp7, p_position, p_name);
    {
        $tmp8 = self->owner;
        panda$core$Weak* $tmp11 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp11, ((panda$core$Object*) p_owner));
        $tmp10 = $tmp11;
        $tmp9 = $tmp10;
        self->owner = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        $tmp12 = self->doccomment;
        $tmp13 = p_doccomment;
        self->doccomment = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        $tmp14 = self->annotations;
        $tmp15 = p_annotations;
        self->annotations = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    self->methodKind = p_methodKind;
    {
        $tmp16 = self->genericParameters;
        $tmp17 = p_genericParameters;
        self->genericParameters = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    {
        $tmp18 = self->parameters;
        $tmp19 = p_parameters;
        self->parameters = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    {
        $tmp20 = self->returnType;
        $tmp21 = p_returnType;
        self->returnType = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
    {
        $tmp22 = self->body;
        $tmp23 = p_body;
        self->body = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue24;
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $returnValue24 = $tmp25;
    return $returnValue24;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue27;
    panda$core$Bit $tmp30 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp31 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp30);
    bool $tmp29 = $tmp31.value;
    if (!$tmp29) goto $l32;
    panda$core$Bit $tmp33 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp29 = $tmp33.value;
    $l32:;
    panda$core$Bit $tmp34 = { $tmp29 };
    bool $tmp28 = $tmp34.value;
    if (!$tmp28) goto $l35;
    panda$core$Bit $tmp36 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
    $tmp28 = $tmp37.value;
    $l35:;
    panda$core$Bit $tmp38 = { $tmp28 };
    $returnValue27 = $tmp38;
    return $returnValue27;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue40;
    panda$core$Bit $tmp41 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
    $returnValue40 = $tmp42;
    return $returnValue40;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $returnValue50;
    panda$core$Range$LTpanda$core$Int64$GT $tmp58;
    panda$core$Object* $tmp73;
    panda$core$Object* $tmp75;
    panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp44 = $tmp45.value;
    if (!$tmp44) goto $l46;
    panda$core$Bit $tmp47 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_other->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp44 = $tmp47.value;
    $l46:;
    panda$core$Bit $tmp48 = { $tmp44 };
    PANDA_ASSERT($tmp48.value);
    panda$core$Bit $tmp49 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp49.value) {
    {
        $returnValue50 = ((panda$core$Bit) { false });
        return $returnValue50;
    }
    }
    panda$core$Bit $tmp52 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp52.value) {
    {
        $returnValue50 = ((panda$core$Bit) { false });
        return $returnValue50;
    }
    }
    panda$core$Int64 $tmp54 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp55 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp56 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp54, $tmp55);
    if ($tmp56.value) {
    {
        $returnValue50 = ((panda$core$Bit) { false });
        return $returnValue50;
    }
    }
    panda$core$Int64 $tmp59 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp58, ((panda$core$Int64) { 0 }), $tmp59, ((panda$core$Bit) { false }));
    int64_t $tmp61 = $tmp58.min.value;
    panda$core$Int64 i60 = { $tmp61 };
    int64_t $tmp63 = $tmp58.max.value;
    bool $tmp64 = $tmp58.inclusive.value;
    if ($tmp64) goto $l71; else goto $l72;
    $l71:;
    if ($tmp61 <= $tmp63) goto $l65; else goto $l67;
    $l72:;
    if ($tmp61 < $tmp63) goto $l65; else goto $l67;
    $l65:;
    {
        panda$core$Object* $tmp74 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i60);
        $tmp73 = $tmp74;
        panda$core$Object* $tmp76 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i60);
        $tmp75 = $tmp76;
        panda$core$Bit $tmp77 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp73)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp75)->type);
        panda$core$Panda$unref$panda$core$Object($tmp75);
        panda$core$Panda$unref$panda$core$Object($tmp73);
        if ($tmp77.value) {
        {
            $returnValue50 = ((panda$core$Bit) { false });
            return $returnValue50;
        }
        }
    }
    $l68:;
    int64_t $tmp80 = $tmp63 - i60.value;
    if ($tmp64) goto $l81; else goto $l82;
    $l81:;
    if ((uint64_t) $tmp80 >= 1) goto $l79; else goto $l67;
    $l82:;
    if ((uint64_t) $tmp80 > 1) goto $l79; else goto $l67;
    $l79:;
    i60.value += 1;
    goto $l65;
    $l67:;
    $returnValue50 = ((panda$core$Bit) { true });
    return $returnValue50;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes89 = NULL;
    panda$collections$Array* $tmp90;
    panda$collections$Array* $tmp91;
    panda$collections$Iterator* Iter$104$997 = NULL;
    panda$collections$Iterator* $tmp98;
    panda$collections$Iterator* $tmp99;
    org$pandalanguage$pandac$MethodDecl$Parameter* p115 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp116;
    panda$core$Object* $tmp117;
    org$pandalanguage$pandac$Type$Kind kind124;
    org$pandalanguage$pandac$Type$Kind $tmp126;
    org$pandalanguage$pandac$Type$Kind $tmp127;
    org$pandalanguage$pandac$Type* $returnValue128;
    org$pandalanguage$pandac$Type* $tmp129;
    org$pandalanguage$pandac$Type* $tmp130;
    int $tmp88;
    {
        panda$collections$Array* $tmp92 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp93 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp92, $tmp93);
        $tmp91 = $tmp92;
        $tmp90 = $tmp91;
        paramTypes89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
        {
            int $tmp96;
            {
                ITable* $tmp100 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp100 = $tmp100->next;
                }
                $fn102 $tmp101 = $tmp100->methods[0];
                panda$collections$Iterator* $tmp103 = $tmp101(((panda$collections$Iterable*) self->parameters));
                $tmp99 = $tmp103;
                $tmp98 = $tmp99;
                Iter$104$997 = $tmp98;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
                $l104:;
                ITable* $tmp107 = Iter$104$997->$class->itable;
                while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp107 = $tmp107->next;
                }
                $fn109 $tmp108 = $tmp107->methods[0];
                panda$core$Bit $tmp110 = $tmp108(Iter$104$997);
                panda$core$Bit $tmp111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp110);
                bool $tmp106 = $tmp111.value;
                if (!$tmp106) goto $l105;
                {
                    int $tmp114;
                    {
                        ITable* $tmp118 = Iter$104$997->$class->itable;
                        while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp118 = $tmp118->next;
                        }
                        $fn120 $tmp119 = $tmp118->methods[1];
                        panda$core$Object* $tmp121 = $tmp119(Iter$104$997);
                        $tmp117 = $tmp121;
                        $tmp116 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp117);
                        p115 = $tmp116;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
                        panda$core$Panda$unref$panda$core$Object($tmp117);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes89, ((panda$core$Object*) p115->type));
                    }
                    $tmp114 = -1;
                    goto $l112;
                    $l112:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p115));
                    p115 = NULL;
                    switch ($tmp114) {
                        case -1: goto $l122;
                    }
                    $l122:;
                }
                goto $l104;
                $l105:;
            }
            $tmp96 = -1;
            goto $l94;
            $l94:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$104$997));
            Iter$104$997 = NULL;
            switch ($tmp96) {
                case -1: goto $l123;
            }
            $l123:;
        }
        memset(&kind124, 0, sizeof(kind124));
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp125.value) {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp126, ((panda$core$Int64) { 16 }));
            kind124 = $tmp126;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp127, ((panda$core$Int64) { 17 }));
            kind124 = $tmp127;
        }
        }
        org$pandalanguage$pandac$Type* $tmp131 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind124, ((panda$collections$ListView*) paramTypes89), self->returnType);
        $tmp130 = $tmp131;
        $tmp129 = $tmp130;
        $returnValue128 = $tmp129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
        $tmp88 = 0;
        goto $l86;
        $l132:;
        return $returnValue128;
    }
    $l86:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes89));
    paramTypes89 = NULL;
    switch ($tmp88) {
        case 0: goto $l132;
    }
    $l134:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result138 = NULL;
    panda$core$MutableString* $tmp139;
    panda$core$MutableString* $tmp140;
    panda$core$String* $tmp142;
    panda$core$String* $tmp143;
    panda$core$String* separator147 = NULL;
    panda$core$String* $tmp148;
    panda$collections$Iterator* Iter$120$9153 = NULL;
    panda$collections$Iterator* $tmp154;
    panda$collections$Iterator* $tmp155;
    org$pandalanguage$pandac$MethodDecl$Parameter* p171 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp172;
    panda$core$Object* $tmp173;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$Char8 $tmp183;
    org$pandalanguage$pandac$Type* $tmp184;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* $returnValue193;
    panda$core$String* $tmp194;
    panda$core$String* $tmp195;
    int $tmp137;
    {
        panda$core$MutableString* $tmp141 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp144 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp143 = $tmp144;
        panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s145);
        $tmp142 = $tmp146;
        panda$core$MutableString$init$panda$core$String($tmp141, $tmp142);
        $tmp140 = $tmp141;
        $tmp139 = $tmp140;
        result138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
        $tmp148 = &$s149;
        separator147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        {
            int $tmp152;
            {
                ITable* $tmp156 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp156 = $tmp156->next;
                }
                $fn158 $tmp157 = $tmp156->methods[0];
                panda$collections$Iterator* $tmp159 = $tmp157(((panda$collections$Iterable*) self->parameters));
                $tmp155 = $tmp159;
                $tmp154 = $tmp155;
                Iter$120$9153 = $tmp154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                $l160:;
                ITable* $tmp163 = Iter$120$9153->$class->itable;
                while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp163 = $tmp163->next;
                }
                $fn165 $tmp164 = $tmp163->methods[0];
                panda$core$Bit $tmp166 = $tmp164(Iter$120$9153);
                panda$core$Bit $tmp167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp166);
                bool $tmp162 = $tmp167.value;
                if (!$tmp162) goto $l161;
                {
                    int $tmp170;
                    {
                        ITable* $tmp174 = Iter$120$9153->$class->itable;
                        while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp174 = $tmp174->next;
                        }
                        $fn176 $tmp175 = $tmp174->methods[1];
                        panda$core$Object* $tmp177 = $tmp175(Iter$120$9153);
                        $tmp173 = $tmp177;
                        $tmp172 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp173);
                        p171 = $tmp172;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                        panda$core$Panda$unref$panda$core$Object($tmp173);
                        panda$core$MutableString$append$panda$core$String(result138, separator147);
                        panda$core$MutableString$append$panda$core$Object(result138, ((panda$core$Object*) p171));
                        {
                            $tmp178 = separator147;
                            $tmp179 = &$s180;
                            separator147 = $tmp179;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                        }
                    }
                    $tmp170 = -1;
                    goto $l168;
                    $l168:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p171));
                    p171 = NULL;
                    switch ($tmp170) {
                        case -1: goto $l181;
                    }
                    $l181:;
                }
                goto $l160;
                $l161:;
            }
            $tmp152 = -1;
            goto $l150;
            $l150:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$120$9153));
            Iter$120$9153 = NULL;
            switch ($tmp152) {
                case -1: goto $l182;
            }
            $l182:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp183, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result138, $tmp183);
        org$pandalanguage$pandac$Type* $tmp185 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp184 = $tmp185;
        panda$core$Bit $tmp186 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp184);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
        if ($tmp186.value) {
        {
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s189, ((panda$core$Object*) self->returnType));
            $tmp188 = $tmp190;
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s191);
            $tmp187 = $tmp192;
            panda$core$MutableString$append$panda$core$String(result138, $tmp187);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
        }
        }
        panda$core$String* $tmp196 = panda$core$MutableString$finish$R$panda$core$String(result138);
        $tmp195 = $tmp196;
        $tmp194 = $tmp195;
        $returnValue193 = $tmp194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
        $tmp137 = 0;
        goto $l135;
        $l197:;
        return $returnValue193;
    }
    $l135:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator147));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result138));
    result138 = NULL;
    separator147 = NULL;
    switch ($tmp137) {
        case 0: goto $l197;
    }
    $l199:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$133_9200;
    panda$core$String* $returnValue202;
    panda$core$String* $tmp203;
    panda$core$String* $tmp204;
    panda$core$String* $tmp205;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$Object* $tmp209;
    panda$core$String* $tmp215;
    panda$core$String* $tmp222;
    panda$core$String* $tmp223;
    panda$core$String* $tmp224;
    panda$core$String* $tmp225;
    panda$core$String* $tmp226;
    panda$core$Object* $tmp228;
    panda$core$String* $tmp234;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$Object* $tmp246;
    panda$core$String* $tmp252;
    {
        $match$133_9200 = self->methodKind;
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9200.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp201.value) {
        {
            panda$core$Object* $tmp211 = (($fn210) self->owner->$class->vtable[2])(self->owner);
            $tmp209 = $tmp211;
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s208, ((org$pandalanguage$pandac$ClassDecl*) $tmp209)->name);
            $tmp207 = $tmp212;
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s213);
            $tmp206 = $tmp214;
            panda$core$String* $tmp216 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp215 = $tmp216;
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, $tmp215);
            $tmp205 = $tmp217;
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, &$s218);
            $tmp204 = $tmp219;
            $tmp203 = $tmp204;
            $returnValue202 = $tmp203;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            panda$core$Panda$unref$panda$core$Object($tmp209);
            return $returnValue202;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9200.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp221.value) {
        {
            panda$core$Object* $tmp230 = (($fn229) self->owner->$class->vtable[2])(self->owner);
            $tmp228 = $tmp230;
            panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s227, ((org$pandalanguage$pandac$ClassDecl*) $tmp228)->name);
            $tmp226 = $tmp231;
            panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s232);
            $tmp225 = $tmp233;
            panda$core$String* $tmp235 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp234 = $tmp235;
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, $tmp234);
            $tmp224 = $tmp236;
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s237);
            $tmp223 = $tmp238;
            $tmp222 = $tmp223;
            $returnValue202 = $tmp222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
            panda$core$Panda$unref$panda$core$Object($tmp228);
            return $returnValue202;
        }
        }
        else {
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9200.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp240.value) {
        {
            panda$core$Object* $tmp248 = (($fn247) self->owner->$class->vtable[2])(self->owner);
            $tmp246 = $tmp248;
            panda$core$String* $tmp249 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp246)->name);
            $tmp245 = $tmp249;
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s250);
            $tmp244 = $tmp251;
            panda$core$String* $tmp253 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp252 = $tmp253;
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, $tmp252);
            $tmp243 = $tmp254;
            panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s255);
            $tmp242 = $tmp256;
            $tmp241 = $tmp242;
            $returnValue202 = $tmp241;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
            panda$core$Panda$unref$panda$core$Object($tmp246);
            return $returnValue202;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue258;
    panda$core$String* $tmp259;
    panda$core$String* $tmp260;
    panda$core$String* $tmp261;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp265 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp264 = $tmp265;
        panda$core$String* $tmp266 = panda$core$String$convert$R$panda$core$String($tmp264);
        $tmp263 = $tmp266;
        panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s267);
        $tmp262 = $tmp268;
        panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp262, ((panda$core$Object*) self->body));
        $tmp261 = $tmp269;
        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s270);
        $tmp260 = $tmp271;
        $tmp259 = $tmp260;
        $returnValue258 = $tmp259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
        return $returnValue258;
    }
    }
    panda$core$String* $tmp275 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp274 = $tmp275;
    $tmp273 = $tmp274;
    $returnValue258 = $tmp273;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
    return $returnValue258;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp279;
    {
    }
    $tmp279 = -1;
    goto $l277;
    $l277:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp279) {
        case -1: goto $l280;
    }
    $l280:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->genericParameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

