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

typedef panda$collections$Iterator* (*$fn105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn213)(panda$core$Weak*);
typedef panda$core$Object* (*$fn232)(panda$core$Weak*);
typedef panda$core$Object* (*$fn250)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Bit $returnValue53;
    panda$core$Range$LTpanda$core$Int64$GT $tmp61;
    panda$core$Object* $tmp76;
    panda$core$Object* $tmp78;
    panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp44 = $tmp45.value;
    if (!$tmp44) goto $l46;
    panda$core$Bit $tmp47 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_other->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp44 = $tmp47.value;
    $l46:;
    panda$core$Bit $tmp48 = { $tmp44 };
    if ($tmp48.value) goto $l49; else goto $l50;
    $l50:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s51, (panda$core$Int64) { 83 });
    abort();
    $l49:;
    panda$core$Bit $tmp52 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp52.value) {
    {
        $returnValue53 = ((panda$core$Bit) { false });
        return $returnValue53;
    }
    }
    panda$core$Bit $tmp55 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp55.value) {
    {
        $returnValue53 = ((panda$core$Bit) { false });
        return $returnValue53;
    }
    }
    panda$core$Int64 $tmp57 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp58 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp59 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp57, $tmp58);
    if ($tmp59.value) {
    {
        $returnValue53 = ((panda$core$Bit) { false });
        return $returnValue53;
    }
    }
    panda$core$Int64 $tmp62 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp61, ((panda$core$Int64) { 0 }), $tmp62, ((panda$core$Bit) { false }));
    int64_t $tmp64 = $tmp61.min.value;
    panda$core$Int64 i63 = { $tmp64 };
    int64_t $tmp66 = $tmp61.max.value;
    bool $tmp67 = $tmp61.inclusive.value;
    if ($tmp67) goto $l74; else goto $l75;
    $l74:;
    if ($tmp64 <= $tmp66) goto $l68; else goto $l70;
    $l75:;
    if ($tmp64 < $tmp66) goto $l68; else goto $l70;
    $l68:;
    {
        panda$core$Object* $tmp77 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i63);
        $tmp76 = $tmp77;
        panda$core$Object* $tmp79 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i63);
        $tmp78 = $tmp79;
        panda$core$Bit $tmp80 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp76)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp78)->type);
        panda$core$Panda$unref$panda$core$Object($tmp78);
        panda$core$Panda$unref$panda$core$Object($tmp76);
        if ($tmp80.value) {
        {
            $returnValue53 = ((panda$core$Bit) { false });
            return $returnValue53;
        }
        }
    }
    $l71:;
    int64_t $tmp83 = $tmp66 - i63.value;
    if ($tmp67) goto $l84; else goto $l85;
    $l84:;
    if ((uint64_t) $tmp83 >= 1) goto $l82; else goto $l70;
    $l85:;
    if ((uint64_t) $tmp83 > 1) goto $l82; else goto $l70;
    $l82:;
    i63.value += 1;
    goto $l68;
    $l70:;
    $returnValue53 = ((panda$core$Bit) { true });
    return $returnValue53;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes92 = NULL;
    panda$collections$Array* $tmp93;
    panda$collections$Array* $tmp94;
    panda$collections$Iterator* Iter$104$9100 = NULL;
    panda$collections$Iterator* $tmp101;
    panda$collections$Iterator* $tmp102;
    org$pandalanguage$pandac$MethodDecl$Parameter* p118 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp119;
    panda$core$Object* $tmp120;
    org$pandalanguage$pandac$Type$Kind kind127;
    org$pandalanguage$pandac$Type$Kind $tmp129;
    org$pandalanguage$pandac$Type$Kind $tmp130;
    org$pandalanguage$pandac$Type* $returnValue131;
    org$pandalanguage$pandac$Type* $tmp132;
    org$pandalanguage$pandac$Type* $tmp133;
    int $tmp91;
    {
        panda$collections$Array* $tmp95 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp96 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp95, $tmp96);
        $tmp94 = $tmp95;
        $tmp93 = $tmp94;
        paramTypes92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        {
            int $tmp99;
            {
                ITable* $tmp103 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp103 = $tmp103->next;
                }
                $fn105 $tmp104 = $tmp103->methods[0];
                panda$collections$Iterator* $tmp106 = $tmp104(((panda$collections$Iterable*) self->parameters));
                $tmp102 = $tmp106;
                $tmp101 = $tmp102;
                Iter$104$9100 = $tmp101;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
                $l107:;
                ITable* $tmp110 = Iter$104$9100->$class->itable;
                while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp110 = $tmp110->next;
                }
                $fn112 $tmp111 = $tmp110->methods[0];
                panda$core$Bit $tmp113 = $tmp111(Iter$104$9100);
                panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
                bool $tmp109 = $tmp114.value;
                if (!$tmp109) goto $l108;
                {
                    int $tmp117;
                    {
                        ITable* $tmp121 = Iter$104$9100->$class->itable;
                        while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp121 = $tmp121->next;
                        }
                        $fn123 $tmp122 = $tmp121->methods[1];
                        panda$core$Object* $tmp124 = $tmp122(Iter$104$9100);
                        $tmp120 = $tmp124;
                        $tmp119 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp120);
                        p118 = $tmp119;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                        panda$core$Panda$unref$panda$core$Object($tmp120);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes92, ((panda$core$Object*) p118->type));
                    }
                    $tmp117 = -1;
                    goto $l115;
                    $l115:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p118));
                    p118 = NULL;
                    switch ($tmp117) {
                        case -1: goto $l125;
                    }
                    $l125:;
                }
                goto $l107;
                $l108:;
            }
            $tmp99 = -1;
            goto $l97;
            $l97:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$104$9100));
            Iter$104$9100 = NULL;
            switch ($tmp99) {
                case -1: goto $l126;
            }
            $l126:;
        }
        memset(&kind127, 0, sizeof(kind127));
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp128.value) {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp129, ((panda$core$Int64) { 16 }));
            kind127 = $tmp129;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp130, ((panda$core$Int64) { 17 }));
            kind127 = $tmp130;
        }
        }
        org$pandalanguage$pandac$Type* $tmp134 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind127, ((panda$collections$ListView*) paramTypes92), self->returnType);
        $tmp133 = $tmp134;
        $tmp132 = $tmp133;
        $returnValue131 = $tmp132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
        $tmp91 = 0;
        goto $l89;
        $l135:;
        return $returnValue131;
    }
    $l89:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes92));
    paramTypes92 = NULL;
    switch ($tmp91) {
        case 0: goto $l135;
    }
    $l137:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result141 = NULL;
    panda$core$MutableString* $tmp142;
    panda$core$MutableString* $tmp143;
    panda$core$String* $tmp145;
    panda$core$String* $tmp146;
    panda$core$String* separator150 = NULL;
    panda$core$String* $tmp151;
    panda$collections$Iterator* Iter$120$9156 = NULL;
    panda$collections$Iterator* $tmp157;
    panda$collections$Iterator* $tmp158;
    org$pandalanguage$pandac$MethodDecl$Parameter* p174 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp175;
    panda$core$Object* $tmp176;
    panda$core$String* $tmp181;
    panda$core$String* $tmp182;
    panda$core$Char8 $tmp186;
    org$pandalanguage$pandac$Type* $tmp187;
    panda$core$String* $tmp190;
    panda$core$String* $tmp191;
    panda$core$String* $returnValue196;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    int $tmp140;
    {
        panda$core$MutableString* $tmp144 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp147 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp146 = $tmp147;
        panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s148);
        $tmp145 = $tmp149;
        panda$core$MutableString$init$panda$core$String($tmp144, $tmp145);
        $tmp143 = $tmp144;
        $tmp142 = $tmp143;
        result141 = $tmp142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
        $tmp151 = &$s152;
        separator150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        {
            int $tmp155;
            {
                ITable* $tmp159 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp159 = $tmp159->next;
                }
                $fn161 $tmp160 = $tmp159->methods[0];
                panda$collections$Iterator* $tmp162 = $tmp160(((panda$collections$Iterable*) self->parameters));
                $tmp158 = $tmp162;
                $tmp157 = $tmp158;
                Iter$120$9156 = $tmp157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
                $l163:;
                ITable* $tmp166 = Iter$120$9156->$class->itable;
                while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp166 = $tmp166->next;
                }
                $fn168 $tmp167 = $tmp166->methods[0];
                panda$core$Bit $tmp169 = $tmp167(Iter$120$9156);
                panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
                bool $tmp165 = $tmp170.value;
                if (!$tmp165) goto $l164;
                {
                    int $tmp173;
                    {
                        ITable* $tmp177 = Iter$120$9156->$class->itable;
                        while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp177 = $tmp177->next;
                        }
                        $fn179 $tmp178 = $tmp177->methods[1];
                        panda$core$Object* $tmp180 = $tmp178(Iter$120$9156);
                        $tmp176 = $tmp180;
                        $tmp175 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp176);
                        p174 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object($tmp176);
                        panda$core$MutableString$append$panda$core$String(result141, separator150);
                        panda$core$MutableString$append$panda$core$Object(result141, ((panda$core$Object*) p174));
                        {
                            $tmp181 = separator150;
                            $tmp182 = &$s183;
                            separator150 = $tmp182;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                        }
                    }
                    $tmp173 = -1;
                    goto $l171;
                    $l171:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p174));
                    p174 = NULL;
                    switch ($tmp173) {
                        case -1: goto $l184;
                    }
                    $l184:;
                }
                goto $l163;
                $l164:;
            }
            $tmp155 = -1;
            goto $l153;
            $l153:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$120$9156));
            Iter$120$9156 = NULL;
            switch ($tmp155) {
                case -1: goto $l185;
            }
            $l185:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp186, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result141, $tmp186);
        org$pandalanguage$pandac$Type* $tmp188 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp187 = $tmp188;
        panda$core$Bit $tmp189 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp187);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        if ($tmp189.value) {
        {
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s192, ((panda$core$Object*) self->returnType));
            $tmp191 = $tmp193;
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s194);
            $tmp190 = $tmp195;
            panda$core$MutableString$append$panda$core$String(result141, $tmp190);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
        }
        }
        panda$core$String* $tmp199 = panda$core$MutableString$finish$R$panda$core$String(result141);
        $tmp198 = $tmp199;
        $tmp197 = $tmp198;
        $returnValue196 = $tmp197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
        $tmp140 = 0;
        goto $l138;
        $l200:;
        return $returnValue196;
    }
    $l138:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result141));
    result141 = NULL;
    separator150 = NULL;
    switch ($tmp140) {
        case 0: goto $l200;
    }
    $l202:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$133_9203;
    panda$core$String* $returnValue205;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$core$String* $tmp210;
    panda$core$Object* $tmp212;
    panda$core$String* $tmp218;
    panda$core$String* $tmp225;
    panda$core$String* $tmp226;
    panda$core$String* $tmp227;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$core$Object* $tmp231;
    panda$core$String* $tmp237;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
    panda$core$Object* $tmp249;
    panda$core$String* $tmp255;
    {
        $match$133_9203 = self->methodKind;
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9203.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp204.value) {
        {
            panda$core$Object* $tmp214 = (($fn213) self->owner->$class->vtable[2])(self->owner);
            $tmp212 = $tmp214;
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s211, ((org$pandalanguage$pandac$ClassDecl*) $tmp212)->name);
            $tmp210 = $tmp215;
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s216);
            $tmp209 = $tmp217;
            panda$core$String* $tmp219 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp218 = $tmp219;
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, $tmp218);
            $tmp208 = $tmp220;
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s221);
            $tmp207 = $tmp222;
            $tmp206 = $tmp207;
            $returnValue205 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Panda$unref$panda$core$Object($tmp212);
            return $returnValue205;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9203.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp224.value) {
        {
            panda$core$Object* $tmp233 = (($fn232) self->owner->$class->vtable[2])(self->owner);
            $tmp231 = $tmp233;
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s230, ((org$pandalanguage$pandac$ClassDecl*) $tmp231)->name);
            $tmp229 = $tmp234;
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s235);
            $tmp228 = $tmp236;
            panda$core$String* $tmp238 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp237 = $tmp238;
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, $tmp237);
            $tmp227 = $tmp239;
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s240);
            $tmp226 = $tmp241;
            $tmp225 = $tmp226;
            $returnValue205 = $tmp225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
            panda$core$Panda$unref$panda$core$Object($tmp231);
            return $returnValue205;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9203.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp243.value) {
        {
            panda$core$Object* $tmp251 = (($fn250) self->owner->$class->vtable[2])(self->owner);
            $tmp249 = $tmp251;
            panda$core$String* $tmp252 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp249)->name);
            $tmp248 = $tmp252;
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s253);
            $tmp247 = $tmp254;
            panda$core$String* $tmp256 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp255 = $tmp256;
            panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, $tmp255);
            $tmp246 = $tmp257;
            panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s258);
            $tmp245 = $tmp259;
            $tmp244 = $tmp245;
            $returnValue205 = $tmp244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
            panda$core$Panda$unref$panda$core$Object($tmp249);
            return $returnValue205;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue261;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $tmp276;
    panda$core$String* $tmp277;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp268 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp267 = $tmp268;
        panda$core$String* $tmp269 = panda$core$String$convert$R$panda$core$String($tmp267);
        $tmp266 = $tmp269;
        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s270);
        $tmp265 = $tmp271;
        panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp265, ((panda$core$Object*) self->body));
        $tmp264 = $tmp272;
        panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s273);
        $tmp263 = $tmp274;
        $tmp262 = $tmp263;
        $returnValue261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
        return $returnValue261;
    }
    }
    panda$core$String* $tmp278 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp277 = $tmp278;
    $tmp276 = $tmp277;
    $returnValue261 = $tmp276;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
    return $returnValue261;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp282;
    {
    }
    $tmp282 = -1;
    goto $l280;
    $l280:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp282) {
        case -1: goto $l283;
    }
    $l283:;
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

