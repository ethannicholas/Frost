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
#include "panda/core/Bit.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Method.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn97)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn115)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn171)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn205)(panda$core$Weak*);
typedef panda$core$Object* (*$fn224)(panda$core$Weak*);
typedef panda$core$Object* (*$fn242)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    org$pandalanguage$pandac$Symbol$Kind $tmp6;
    panda$core$Weak* $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$Weak* $tmp9;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12;
    org$pandalanguage$pandac$Annotations* $tmp13;
    org$pandalanguage$pandac$Annotations* $tmp14;
    panda$collections$Array* $tmp15;
    panda$collections$Array* $tmp16;
    org$pandalanguage$pandac$Type* $tmp17;
    org$pandalanguage$pandac$Type* $tmp18;
    panda$collections$ImmutableArray* $tmp19;
    panda$collections$ImmutableArray* $tmp20;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->parameters = NULL;
    self->returnType = NULL;
    self->body = NULL;
    self->compiledBody = NULL;
    self->overridden = NULL;
    $tmp2 = NULL;
    self->compiledBody = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    self->overrideKnown = ((panda$core$Bit) { false });
    panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) NULL));
    $tmp4 = $tmp5;
    $tmp3 = $tmp4;
    self->overridden = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp6, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp6, p_position, p_name);
    {
        $tmp7 = self->owner;
        panda$core$Weak* $tmp10 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp10, ((panda$core$Object*) p_owner));
        $tmp9 = $tmp10;
        $tmp8 = $tmp9;
        self->owner = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    {
        $tmp11 = self->doccomment;
        $tmp12 = p_doccomment;
        self->doccomment = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
    {
        $tmp13 = self->annotations;
        $tmp14 = p_annotations;
        self->annotations = $tmp14;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    }
    self->methodKind = p_methodKind;
    {
        $tmp15 = self->parameters;
        $tmp16 = p_parameters;
        self->parameters = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    }
    {
        $tmp17 = self->returnType;
        $tmp18 = p_returnType;
        self->returnType = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    }
    {
        $tmp19 = self->body;
        $tmp20 = p_body;
        self->body = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue21;
    panda$core$Bit $tmp22 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $returnValue21 = $tmp22;
    return $returnValue21;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue24;
    panda$core$Bit $tmp27 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
    bool $tmp26 = $tmp28.value;
    if (!$tmp26) goto $l29;
    panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp26 = $tmp30.value;
    $l29:;
    panda$core$Bit $tmp31 = { $tmp26 };
    bool $tmp25 = $tmp31.value;
    if (!$tmp25) goto $l32;
    panda$core$Bit $tmp33 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp34 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp33);
    $tmp25 = $tmp34.value;
    $l32:;
    panda$core$Bit $tmp35 = { $tmp25 };
    $returnValue24 = $tmp35;
    return $returnValue24;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue37;
    panda$core$Bit $tmp38 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp39 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp38);
    $returnValue37 = $tmp39;
    return $returnValue37;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $returnValue45;
    panda$core$Range$LTpanda$core$Int64$GT $tmp53;
    panda$core$Object* $tmp68;
    panda$core$Object* $tmp70;
    bool $tmp41 = self->resolved.value;
    if (!$tmp41) goto $l42;
    $tmp41 = p_other->resolved.value;
    $l42:;
    panda$core$Bit $tmp43 = { $tmp41 };
    PANDA_ASSERT($tmp43.value);
    panda$core$Bit $tmp44 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp44.value) {
    {
        $returnValue45 = ((panda$core$Bit) { false });
        return $returnValue45;
    }
    }
    panda$core$Bit $tmp47 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp47.value) {
    {
        $returnValue45 = ((panda$core$Bit) { false });
        return $returnValue45;
    }
    }
    panda$core$Int64 $tmp49 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp50 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp49, $tmp50);
    if ($tmp51.value) {
    {
        $returnValue45 = ((panda$core$Bit) { false });
        return $returnValue45;
    }
    }
    panda$core$Int64 $tmp54 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp53, ((panda$core$Int64) { 0 }), $tmp54, ((panda$core$Bit) { false }));
    int64_t $tmp56 = $tmp53.min.value;
    panda$core$Int64 i55 = { $tmp56 };
    int64_t $tmp58 = $tmp53.max.value;
    bool $tmp59 = $tmp53.inclusive.value;
    if ($tmp59) goto $l66; else goto $l67;
    $l66:;
    if ($tmp56 <= $tmp58) goto $l60; else goto $l62;
    $l67:;
    if ($tmp56 < $tmp58) goto $l60; else goto $l62;
    $l60:;
    {
        panda$core$Object* $tmp69 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i55);
        $tmp68 = $tmp69;
        panda$core$Object* $tmp71 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i55);
        $tmp70 = $tmp71;
        panda$core$Bit $tmp72 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp68)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp70)->type);
        panda$core$Panda$unref$panda$core$Object($tmp70);
        panda$core$Panda$unref$panda$core$Object($tmp68);
        if ($tmp72.value) {
        {
            $returnValue45 = ((panda$core$Bit) { false });
            return $returnValue45;
        }
        }
    }
    $l63:;
    int64_t $tmp75 = $tmp58 - i55.value;
    if ($tmp59) goto $l76; else goto $l77;
    $l76:;
    if ((uint64_t) $tmp75 >= 1) goto $l74; else goto $l62;
    $l77:;
    if ((uint64_t) $tmp75 > 1) goto $l74; else goto $l62;
    $l74:;
    i55.value += 1;
    goto $l60;
    $l62:;
    $returnValue45 = ((panda$core$Bit) { true });
    return $returnValue45;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes84 = NULL;
    panda$collections$Array* $tmp85;
    panda$collections$Array* $tmp86;
    panda$collections$Iterator* Iter$100$992 = NULL;
    panda$collections$Iterator* $tmp93;
    panda$collections$Iterator* $tmp94;
    org$pandalanguage$pandac$MethodDecl$Parameter* p110 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp111;
    panda$core$Object* $tmp112;
    org$pandalanguage$pandac$Type$Kind kind119;
    org$pandalanguage$pandac$Type$Kind $tmp121;
    org$pandalanguage$pandac$Type$Kind $tmp122;
    org$pandalanguage$pandac$Type* $returnValue123;
    org$pandalanguage$pandac$Type* $tmp124;
    org$pandalanguage$pandac$Type* $tmp125;
    int $tmp83;
    {
        panda$collections$Array* $tmp87 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp88 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp87, $tmp88);
        $tmp86 = $tmp87;
        $tmp85 = $tmp86;
        paramTypes84 = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        {
            int $tmp91;
            {
                ITable* $tmp95 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp95 = $tmp95->next;
                }
                $fn97 $tmp96 = $tmp95->methods[0];
                panda$collections$Iterator* $tmp98 = $tmp96(((panda$collections$Iterable*) self->parameters));
                $tmp94 = $tmp98;
                $tmp93 = $tmp94;
                Iter$100$992 = $tmp93;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
                $l99:;
                ITable* $tmp102 = Iter$100$992->$class->itable;
                while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp102 = $tmp102->next;
                }
                $fn104 $tmp103 = $tmp102->methods[0];
                panda$core$Bit $tmp105 = $tmp103(Iter$100$992);
                panda$core$Bit $tmp106 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp105);
                bool $tmp101 = $tmp106.value;
                if (!$tmp101) goto $l100;
                {
                    int $tmp109;
                    {
                        ITable* $tmp113 = Iter$100$992->$class->itable;
                        while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp113 = $tmp113->next;
                        }
                        $fn115 $tmp114 = $tmp113->methods[1];
                        panda$core$Object* $tmp116 = $tmp114(Iter$100$992);
                        $tmp112 = $tmp116;
                        $tmp111 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp112);
                        p110 = $tmp111;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
                        panda$core$Panda$unref$panda$core$Object($tmp112);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes84, ((panda$core$Object*) p110->type));
                    }
                    $tmp109 = -1;
                    goto $l107;
                    $l107:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p110));
                    p110 = NULL;
                    switch ($tmp109) {
                        case -1: goto $l117;
                    }
                    $l117:;
                }
                goto $l99;
                $l100:;
            }
            $tmp91 = -1;
            goto $l89;
            $l89:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$992));
            Iter$100$992 = NULL;
            switch ($tmp91) {
                case -1: goto $l118;
            }
            $l118:;
        }
        memset(&kind119, 0, sizeof(kind119));
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp121, ((panda$core$Int64) { 14 }));
            kind119 = $tmp121;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp122, ((panda$core$Int64) { 15 }));
            kind119 = $tmp122;
        }
        }
        org$pandalanguage$pandac$Type* $tmp126 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind119, ((panda$collections$ListView*) paramTypes84), self->returnType);
        $tmp125 = $tmp126;
        $tmp124 = $tmp125;
        $returnValue123 = $tmp124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
        $tmp83 = 0;
        goto $l81;
        $l127:;
        return $returnValue123;
    }
    $l81:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes84));
    paramTypes84 = NULL;
    switch ($tmp83) {
        case 0: goto $l127;
    }
    $l129:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result133 = NULL;
    panda$core$MutableString* $tmp134;
    panda$core$MutableString* $tmp135;
    panda$core$String* $tmp137;
    panda$core$String* $tmp138;
    panda$core$String* separator142 = NULL;
    panda$core$String* $tmp143;
    panda$collections$Iterator* Iter$116$9148 = NULL;
    panda$collections$Iterator* $tmp149;
    panda$collections$Iterator* $tmp150;
    org$pandalanguage$pandac$MethodDecl$Parameter* p166 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp167;
    panda$core$Object* $tmp168;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$Char8 $tmp178;
    org$pandalanguage$pandac$Type* $tmp179;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    panda$core$String* $returnValue188;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    int $tmp132;
    {
        panda$core$MutableString* $tmp136 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp139 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp138 = $tmp139;
        panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s140);
        $tmp137 = $tmp141;
        panda$core$MutableString$init$panda$core$String($tmp136, $tmp137);
        $tmp135 = $tmp136;
        $tmp134 = $tmp135;
        result133 = $tmp134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
        $tmp143 = &$s144;
        separator142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        {
            int $tmp147;
            {
                ITable* $tmp151 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp151 = $tmp151->next;
                }
                $fn153 $tmp152 = $tmp151->methods[0];
                panda$collections$Iterator* $tmp154 = $tmp152(((panda$collections$Iterable*) self->parameters));
                $tmp150 = $tmp154;
                $tmp149 = $tmp150;
                Iter$116$9148 = $tmp149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                $l155:;
                ITable* $tmp158 = Iter$116$9148->$class->itable;
                while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp158 = $tmp158->next;
                }
                $fn160 $tmp159 = $tmp158->methods[0];
                panda$core$Bit $tmp161 = $tmp159(Iter$116$9148);
                panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
                bool $tmp157 = $tmp162.value;
                if (!$tmp157) goto $l156;
                {
                    int $tmp165;
                    {
                        ITable* $tmp169 = Iter$116$9148->$class->itable;
                        while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp169 = $tmp169->next;
                        }
                        $fn171 $tmp170 = $tmp169->methods[1];
                        panda$core$Object* $tmp172 = $tmp170(Iter$116$9148);
                        $tmp168 = $tmp172;
                        $tmp167 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp168);
                        p166 = $tmp167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object($tmp168);
                        panda$core$MutableString$append$panda$core$String(result133, separator142);
                        panda$core$MutableString$append$panda$core$Object(result133, ((panda$core$Object*) p166));
                        {
                            $tmp173 = separator142;
                            $tmp174 = &$s175;
                            separator142 = $tmp174;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                        }
                    }
                    $tmp165 = -1;
                    goto $l163;
                    $l163:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p166));
                    p166 = NULL;
                    switch ($tmp165) {
                        case -1: goto $l176;
                    }
                    $l176:;
                }
                goto $l155;
                $l156:;
            }
            $tmp147 = -1;
            goto $l145;
            $l145:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$116$9148));
            Iter$116$9148 = NULL;
            switch ($tmp147) {
                case -1: goto $l177;
            }
            $l177:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp178, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result133, $tmp178);
        org$pandalanguage$pandac$Type* $tmp180 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp179 = $tmp180;
        panda$core$Bit $tmp181 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp179);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
        if ($tmp181.value) {
        {
            panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s184, ((panda$core$Object*) self->returnType));
            $tmp183 = $tmp185;
            panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s186);
            $tmp182 = $tmp187;
            panda$core$MutableString$append$panda$core$String(result133, $tmp182);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
        }
        }
        panda$core$String* $tmp191 = panda$core$MutableString$finish$R$panda$core$String(result133);
        $tmp190 = $tmp191;
        $tmp189 = $tmp190;
        $returnValue188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        $tmp132 = 0;
        goto $l130;
        $l192:;
        return $returnValue188;
    }
    $l130:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result133));
    result133 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator142));
    separator142 = NULL;
    switch ($tmp132) {
        case 0: goto $l192;
    }
    $l194:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$129_9195;
    panda$core$String* $returnValue197;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$Object* $tmp204;
    panda$core$String* $tmp210;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    panda$core$Object* $tmp223;
    panda$core$String* $tmp229;
    panda$core$String* $tmp236;
    panda$core$String* $tmp237;
    panda$core$String* $tmp238;
    panda$core$String* $tmp239;
    panda$core$String* $tmp240;
    panda$core$Object* $tmp241;
    panda$core$String* $tmp247;
    {
        $match$129_9195 = self->methodKind;
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_9195.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp196.value) {
        {
            panda$core$Object* $tmp206 = (($fn205) self->owner->$class->vtable[2])(self->owner);
            $tmp204 = $tmp206;
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s203, ((org$pandalanguage$pandac$ClassDecl*) $tmp204)->name);
            $tmp202 = $tmp207;
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s208);
            $tmp201 = $tmp209;
            panda$core$String* $tmp211 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp210 = $tmp211;
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, $tmp210);
            $tmp200 = $tmp212;
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s213);
            $tmp199 = $tmp214;
            $tmp198 = $tmp199;
            $returnValue197 = $tmp198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            panda$core$Panda$unref$panda$core$Object($tmp204);
            return $returnValue197;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_9195.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp216.value) {
        {
            panda$core$Object* $tmp225 = (($fn224) self->owner->$class->vtable[2])(self->owner);
            $tmp223 = $tmp225;
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s222, ((org$pandalanguage$pandac$ClassDecl*) $tmp223)->name);
            $tmp221 = $tmp226;
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s227);
            $tmp220 = $tmp228;
            panda$core$String* $tmp230 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp229 = $tmp230;
            panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, $tmp229);
            $tmp219 = $tmp231;
            panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s232);
            $tmp218 = $tmp233;
            $tmp217 = $tmp218;
            $returnValue197 = $tmp217;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
            panda$core$Panda$unref$panda$core$Object($tmp223);
            return $returnValue197;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_9195.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp235.value) {
        {
            panda$core$Object* $tmp243 = (($fn242) self->owner->$class->vtable[2])(self->owner);
            $tmp241 = $tmp243;
            panda$core$String* $tmp244 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp241)->name);
            $tmp240 = $tmp244;
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s245);
            $tmp239 = $tmp246;
            panda$core$String* $tmp248 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp247 = $tmp248;
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, $tmp247);
            $tmp238 = $tmp249;
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s250);
            $tmp237 = $tmp251;
            $tmp236 = $tmp237;
            $returnValue197 = $tmp236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
            panda$core$Panda$unref$panda$core$Object($tmp241);
            return $returnValue197;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue253;
    panda$core$String* $tmp254;
    panda$core$String* $tmp255;
    panda$core$String* $tmp256;
    panda$core$String* $tmp257;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp260 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp259 = $tmp260;
        panda$core$String* $tmp261 = panda$core$String$convert$R$panda$core$String($tmp259);
        $tmp258 = $tmp261;
        panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s262);
        $tmp257 = $tmp263;
        panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp257, ((panda$core$Object*) self->body));
        $tmp256 = $tmp264;
        panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s265);
        $tmp255 = $tmp266;
        $tmp254 = $tmp255;
        $returnValue253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
        return $returnValue253;
    }
    }
    panda$core$String* $tmp270 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp269 = $tmp270;
    $tmp268 = $tmp269;
    $returnValue253 = $tmp268;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
    return $returnValue253;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp274;
    {
    }
    $tmp274 = -1;
    goto $l272;
    $l272:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp274) {
        case -1: goto $l275;
    }
    $l275:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

