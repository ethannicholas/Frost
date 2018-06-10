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
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"

static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn29)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn47)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn171)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn219)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn230)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_genericParameters, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    org$pandalanguage$pandac$Compiler$Resolution $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Bit $tmp5;
    panda$core$Weak* $tmp6;
    panda$core$Weak* $tmp7;
    org$pandalanguage$pandac$Symbol$Kind $tmp9;
    panda$core$Int64 $tmp10;
    panda$core$Weak* $tmp11;
    panda$core$Weak* $tmp12;
    panda$core$Weak* $tmp13;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    org$pandalanguage$pandac$Annotations* $tmp17;
    org$pandalanguage$pandac$Annotations* $tmp18;
    panda$collections$Array* $tmp19;
    panda$collections$Array* $tmp20;
    panda$collections$Iterator* Iter$67$924 = NULL;
    panda$collections$Iterator* $tmp25;
    panda$collections$Iterator* $tmp26;
    org$pandalanguage$pandac$MethodDecl$Parameter* p42 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp43;
    panda$core$Object* $tmp44;
    panda$core$Weak* $tmp49;
    panda$core$Weak* $tmp50;
    panda$core$Weak* $tmp51;
    panda$collections$Array* $tmp55;
    panda$collections$Array* $tmp56;
    org$pandalanguage$pandac$Type* $tmp57;
    org$pandalanguage$pandac$Type* $tmp58;
    panda$collections$ImmutableArray* $tmp59;
    panda$collections$ImmutableArray* $tmp60;
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
    panda$core$Int64$init$builtin_int64(&$tmp4, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp3, $tmp4);
    self->resolved = $tmp3;
    panda$core$Bit$init$builtin_bit(&$tmp5, false);
    self->overrideKnown = $tmp5;
    panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp8, ((panda$core$Object*) NULL));
    $tmp7 = $tmp8;
    $tmp6 = $tmp7;
    self->overridden = $tmp6;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$core$Int64$init$builtin_int64(&$tmp10, 3);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp9, $tmp10);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp9, p_position, p_name);
    {
        $tmp11 = self->owner;
        panda$core$Weak* $tmp14 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp14, ((panda$core$Object*) p_owner));
        $tmp13 = $tmp14;
        $tmp12 = $tmp13;
        self->owner = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
    {
        $tmp15 = self->doccomment;
        $tmp16 = p_doccomment;
        self->doccomment = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    }
    {
        $tmp17 = self->annotations;
        $tmp18 = p_annotations;
        self->annotations = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    }
    self->methodKind = p_methodKind;
    {
        $tmp19 = self->genericParameters;
        $tmp20 = p_genericParameters;
        self->genericParameters = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    }
    {
        int $tmp23;
        {
            ITable* $tmp27 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp27 = $tmp27->next;
            }
            $fn29 $tmp28 = $tmp27->methods[0];
            panda$collections$Iterator* $tmp30 = $tmp28(((panda$collections$Iterable*) p_parameters));
            $tmp26 = $tmp30;
            $tmp25 = $tmp26;
            Iter$67$924 = $tmp25;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
            $l31:;
            ITable* $tmp34 = Iter$67$924->$class->itable;
            while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp34 = $tmp34->next;
            }
            $fn36 $tmp35 = $tmp34->methods[0];
            panda$core$Bit $tmp37 = $tmp35(Iter$67$924);
            panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
            bool $tmp33 = $tmp38.value;
            if (!$tmp33) goto $l32;
            {
                int $tmp41;
                {
                    ITable* $tmp45 = Iter$67$924->$class->itable;
                    while ($tmp45->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp45 = $tmp45->next;
                    }
                    $fn47 $tmp46 = $tmp45->methods[1];
                    panda$core$Object* $tmp48 = $tmp46(Iter$67$924);
                    $tmp44 = $tmp48;
                    $tmp43 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp44);
                    p42 = $tmp43;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
                    panda$core$Panda$unref$panda$core$Object($tmp44);
                    {
                        $tmp49 = p42->owner;
                        panda$core$Weak* $tmp52 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp52, ((panda$core$Object*) self));
                        $tmp51 = $tmp52;
                        $tmp50 = $tmp51;
                        p42->owner = $tmp50;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
                    }
                }
                $tmp41 = -1;
                goto $l39;
                $l39:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p42));
                p42 = NULL;
                switch ($tmp41) {
                    case -1: goto $l53;
                }
                $l53:;
            }
            goto $l31;
            $l32:;
        }
        $tmp23 = -1;
        goto $l21;
        $l21:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$67$924));
        Iter$67$924 = NULL;
        switch ($tmp23) {
            case -1: goto $l54;
        }
        $l54:;
    }
    {
        $tmp55 = self->parameters;
        $tmp56 = p_parameters;
        self->parameters = $tmp56;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    }
    {
        $tmp57 = self->returnType;
        $tmp58 = p_returnType;
        self->returnType = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
    }
    {
        $tmp59 = self->body;
        $tmp60 = p_body;
        self->body = $tmp60;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    }
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue61;
    panda$core$Int64 $tmp62;
    panda$core$Int64$init$builtin_int64(&$tmp62, 2);
    panda$core$Bit $tmp63 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp62);
    $returnValue61 = $tmp63;
    return $returnValue61;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue65;
    panda$core$Int64 $tmp71;
    panda$core$Bit $tmp68 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
    bool $tmp67 = $tmp69.value;
    if (!$tmp67) goto $l70;
    panda$core$Int64$init$builtin_int64(&$tmp71, 2);
    panda$core$Bit $tmp72 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp71);
    $tmp67 = $tmp72.value;
    $l70:;
    panda$core$Bit $tmp73 = { $tmp67 };
    bool $tmp66 = $tmp73.value;
    if (!$tmp66) goto $l74;
    panda$core$Bit $tmp75 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp76 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp75);
    $tmp66 = $tmp76.value;
    $l74:;
    panda$core$Bit $tmp77 = { $tmp66 };
    $returnValue65 = $tmp77;
    return $returnValue65;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue79;
    panda$core$Bit $tmp80 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp81 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp80);
    $returnValue79 = $tmp81;
    return $returnValue79;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Int64 $tmp84;
    panda$core$Int64 $tmp87;
    panda$core$Bit $returnValue94;
    panda$core$Bit $tmp95;
    panda$core$Bit $tmp98;
    panda$core$Bit $tmp103;
    panda$core$Range$LTpanda$core$Int64$GT $tmp105;
    panda$core$Int64 $tmp106;
    panda$core$Bit $tmp108;
    panda$core$Object* $tmp122;
    panda$core$Object* $tmp124;
    panda$core$Bit $tmp127;
    panda$core$Bit $tmp135;
    panda$core$Int64$init$builtin_int64(&$tmp84, 0);
    panda$core$Bit $tmp85 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->resolved.$rawValue, $tmp84);
    bool $tmp83 = $tmp85.value;
    if (!$tmp83) goto $l86;
    panda$core$Int64$init$builtin_int64(&$tmp87, 0);
    panda$core$Bit $tmp88 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_other->resolved.$rawValue, $tmp87);
    $tmp83 = $tmp88.value;
    $l86:;
    panda$core$Bit $tmp89 = { $tmp83 };
    if ($tmp89.value) goto $l90; else goto $l91;
    $l91:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s92, (panda$core$Int64) { 89 });
    abort();
    $l90:;
    panda$core$Bit $tmp93 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp93.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp95, false);
        $returnValue94 = $tmp95;
        return $returnValue94;
    }
    }
    panda$core$Bit $tmp97 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp97.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp98, false);
        $returnValue94 = $tmp98;
        return $returnValue94;
    }
    }
    panda$core$Int64 $tmp100 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp101 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp102 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp100, $tmp101);
    if ($tmp102.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp103, false);
        $returnValue94 = $tmp103;
        return $returnValue94;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp106, 0);
    panda$core$Int64 $tmp107 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Bit$init$builtin_bit(&$tmp108, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp105, $tmp106, $tmp107, $tmp108);
    int64_t $tmp110 = $tmp105.min.value;
    panda$core$Int64 i109 = { $tmp110 };
    int64_t $tmp112 = $tmp105.max.value;
    bool $tmp113 = $tmp105.inclusive.value;
    if ($tmp113) goto $l120; else goto $l121;
    $l120:;
    if ($tmp110 <= $tmp112) goto $l114; else goto $l116;
    $l121:;
    if ($tmp110 < $tmp112) goto $l114; else goto $l116;
    $l114:;
    {
        panda$core$Object* $tmp123 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i109);
        $tmp122 = $tmp123;
        panda$core$Object* $tmp125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i109);
        $tmp124 = $tmp125;
        panda$core$Bit $tmp126 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp122)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp124)->type);
        panda$core$Panda$unref$panda$core$Object($tmp124);
        panda$core$Panda$unref$panda$core$Object($tmp122);
        if ($tmp126.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp127, false);
            $returnValue94 = $tmp127;
            return $returnValue94;
        }
        }
    }
    $l117:;
    int64_t $tmp130 = $tmp112 - i109.value;
    if ($tmp113) goto $l131; else goto $l132;
    $l131:;
    if ((uint64_t) $tmp130 >= 1) goto $l129; else goto $l116;
    $l132:;
    if ((uint64_t) $tmp130 > 1) goto $l129; else goto $l116;
    $l129:;
    i109.value += 1;
    goto $l114;
    $l116:;
    panda$core$Bit$init$builtin_bit(&$tmp135, true);
    $returnValue94 = $tmp135;
    return $returnValue94;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes140 = NULL;
    panda$collections$Array* $tmp141;
    panda$collections$Array* $tmp142;
    panda$collections$Iterator* Iter$110$9148 = NULL;
    panda$collections$Iterator* $tmp149;
    panda$collections$Iterator* $tmp150;
    org$pandalanguage$pandac$MethodDecl$Parameter* p166 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp167;
    panda$core$Object* $tmp168;
    org$pandalanguage$pandac$Type$Kind kind175;
    panda$core$Int64 $tmp176;
    org$pandalanguage$pandac$Type$Kind $tmp178;
    panda$core$Int64 $tmp179;
    org$pandalanguage$pandac$Type$Kind $tmp180;
    panda$core$Int64 $tmp181;
    org$pandalanguage$pandac$Type* $returnValue182;
    org$pandalanguage$pandac$Type* $tmp183;
    org$pandalanguage$pandac$Type* $tmp184;
    int $tmp139;
    {
        panda$collections$Array* $tmp143 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp144 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp143, $tmp144);
        $tmp142 = $tmp143;
        $tmp141 = $tmp142;
        paramTypes140 = $tmp141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
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
                Iter$110$9148 = $tmp149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                $l155:;
                ITable* $tmp158 = Iter$110$9148->$class->itable;
                while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp158 = $tmp158->next;
                }
                $fn160 $tmp159 = $tmp158->methods[0];
                panda$core$Bit $tmp161 = $tmp159(Iter$110$9148);
                panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
                bool $tmp157 = $tmp162.value;
                if (!$tmp157) goto $l156;
                {
                    int $tmp165;
                    {
                        ITable* $tmp169 = Iter$110$9148->$class->itable;
                        while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp169 = $tmp169->next;
                        }
                        $fn171 $tmp170 = $tmp169->methods[1];
                        panda$core$Object* $tmp172 = $tmp170(Iter$110$9148);
                        $tmp168 = $tmp172;
                        $tmp167 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp168);
                        p166 = $tmp167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object($tmp168);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes140, ((panda$core$Object*) p166->type));
                    }
                    $tmp165 = -1;
                    goto $l163;
                    $l163:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p166));
                    p166 = NULL;
                    switch ($tmp165) {
                        case -1: goto $l173;
                    }
                    $l173:;
                }
                goto $l155;
                $l156:;
            }
            $tmp147 = -1;
            goto $l145;
            $l145:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$9148));
            Iter$110$9148 = NULL;
            switch ($tmp147) {
                case -1: goto $l174;
            }
            $l174:;
        }
        memset(&kind175, 0, sizeof(kind175));
        panda$core$Int64$init$builtin_int64(&$tmp176, 1);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp176);
        if ($tmp177.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp179, 16);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp178, $tmp179);
            kind175 = $tmp178;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp181, 17);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp180, $tmp181);
            kind175 = $tmp180;
        }
        }
        org$pandalanguage$pandac$Type* $tmp185 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind175, ((panda$collections$ListView*) paramTypes140), self->returnType);
        $tmp184 = $tmp185;
        $tmp183 = $tmp184;
        $returnValue182 = $tmp183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
        $tmp139 = 0;
        goto $l137;
        $l186:;
        return $returnValue182;
    }
    $l137:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes140));
    paramTypes140 = NULL;
    switch ($tmp139) {
        case 0: goto $l186;
    }
    $l188:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result192 = NULL;
    panda$core$MutableString* $tmp193;
    panda$core$MutableString* $tmp194;
    panda$core$String* $tmp196;
    panda$core$String* $tmp197;
    panda$core$String* separator201 = NULL;
    panda$core$String* $tmp202;
    panda$collections$Iterator* Iter$126$9207 = NULL;
    panda$collections$Iterator* $tmp208;
    panda$collections$Iterator* $tmp209;
    org$pandalanguage$pandac$MethodDecl$Parameter* p225 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp226;
    panda$core$Object* $tmp227;
    panda$core$String* $tmp232;
    panda$core$String* $tmp233;
    panda$core$Char8 $tmp237;
    panda$core$UInt8 $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$core$String* $returnValue248;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    int $tmp191;
    {
        panda$core$MutableString* $tmp195 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp198 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp197 = $tmp198;
        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s199);
        $tmp196 = $tmp200;
        panda$core$MutableString$init$panda$core$String($tmp195, $tmp196);
        $tmp194 = $tmp195;
        $tmp193 = $tmp194;
        result192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
        $tmp202 = &$s203;
        separator201 = $tmp202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
        {
            int $tmp206;
            {
                ITable* $tmp210 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp210 = $tmp210->next;
                }
                $fn212 $tmp211 = $tmp210->methods[0];
                panda$collections$Iterator* $tmp213 = $tmp211(((panda$collections$Iterable*) self->parameters));
                $tmp209 = $tmp213;
                $tmp208 = $tmp209;
                Iter$126$9207 = $tmp208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
                $l214:;
                ITable* $tmp217 = Iter$126$9207->$class->itable;
                while ($tmp217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp217 = $tmp217->next;
                }
                $fn219 $tmp218 = $tmp217->methods[0];
                panda$core$Bit $tmp220 = $tmp218(Iter$126$9207);
                panda$core$Bit $tmp221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp220);
                bool $tmp216 = $tmp221.value;
                if (!$tmp216) goto $l215;
                {
                    int $tmp224;
                    {
                        ITable* $tmp228 = Iter$126$9207->$class->itable;
                        while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp228 = $tmp228->next;
                        }
                        $fn230 $tmp229 = $tmp228->methods[1];
                        panda$core$Object* $tmp231 = $tmp229(Iter$126$9207);
                        $tmp227 = $tmp231;
                        $tmp226 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp227);
                        p225 = $tmp226;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                        panda$core$Panda$unref$panda$core$Object($tmp227);
                        panda$core$MutableString$append$panda$core$String(result192, separator201);
                        panda$core$MutableString$append$panda$core$Object(result192, ((panda$core$Object*) p225));
                        {
                            $tmp232 = separator201;
                            $tmp233 = &$s234;
                            separator201 = $tmp233;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
                        }
                    }
                    $tmp224 = -1;
                    goto $l222;
                    $l222:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p225));
                    p225 = NULL;
                    switch ($tmp224) {
                        case -1: goto $l235;
                    }
                    $l235:;
                }
                goto $l214;
                $l215:;
            }
            $tmp206 = -1;
            goto $l204;
            $l204:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$126$9207));
            Iter$126$9207 = NULL;
            switch ($tmp206) {
                case -1: goto $l236;
            }
            $l236:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp238, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp237, $tmp238);
        panda$core$MutableString$append$panda$core$Char8(result192, $tmp237);
        org$pandalanguage$pandac$Type* $tmp240 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp239 = $tmp240;
        panda$core$Bit $tmp241 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp239);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        if ($tmp241.value) {
        {
            panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s244, ((panda$core$Object*) self->returnType));
            $tmp243 = $tmp245;
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s246);
            $tmp242 = $tmp247;
            panda$core$MutableString$append$panda$core$String(result192, $tmp242);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
        }
        }
        panda$core$String* $tmp251 = panda$core$MutableString$finish$R$panda$core$String(result192);
        $tmp250 = $tmp251;
        $tmp249 = $tmp250;
        $returnValue248 = $tmp249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
        $tmp191 = 0;
        goto $l189;
        $l252:;
        return $returnValue248;
    }
    $l189:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator201));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
    result192 = NULL;
    separator201 = NULL;
    switch ($tmp191) {
        case 0: goto $l252;
    }
    $l254:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$139_9255;
    panda$core$Int64 $tmp256;
    panda$core$String* $returnValue258;
    panda$core$String* $tmp259;
    panda$core$String* $tmp260;
    panda$core$String* $tmp261;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$Object* $tmp265;
    panda$core$String* $tmp270;
    panda$core$Int64 $tmp276;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$Object* $tmp284;
    panda$core$String* $tmp289;
    panda$core$Int64 $tmp295;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$String* $tmp301;
    panda$core$Object* $tmp302;
    panda$core$String* $tmp307;
    {
        $match$139_9255 = self->methodKind;
        panda$core$Int64$init$builtin_int64(&$tmp256, 0);
        panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9255.$rawValue, $tmp256);
        if ($tmp257.value) {
        {
            panda$core$Object* $tmp266 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp265 = $tmp266;
            panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s264, ((org$pandalanguage$pandac$ClassDecl*) $tmp265)->name);
            $tmp263 = $tmp267;
            panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s268);
            $tmp262 = $tmp269;
            panda$core$String* $tmp271 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp270 = $tmp271;
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, $tmp270);
            $tmp261 = $tmp272;
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s273);
            $tmp260 = $tmp274;
            $tmp259 = $tmp260;
            $returnValue258 = $tmp259;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
            panda$core$Panda$unref$panda$core$Object($tmp265);
            return $returnValue258;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp276, 1);
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9255.$rawValue, $tmp276);
        if ($tmp277.value) {
        {
            panda$core$Object* $tmp285 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp284 = $tmp285;
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, ((org$pandalanguage$pandac$ClassDecl*) $tmp284)->name);
            $tmp282 = $tmp286;
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s287);
            $tmp281 = $tmp288;
            panda$core$String* $tmp290 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp289 = $tmp290;
            panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, $tmp289);
            $tmp280 = $tmp291;
            panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, &$s292);
            $tmp279 = $tmp293;
            $tmp278 = $tmp279;
            $returnValue258 = $tmp278;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
            panda$core$Panda$unref$panda$core$Object($tmp284);
            return $returnValue258;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp295, 2);
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9255.$rawValue, $tmp295);
        if ($tmp296.value) {
        {
            panda$core$Object* $tmp303 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp302 = $tmp303;
            panda$core$String* $tmp304 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp302)->name);
            $tmp301 = $tmp304;
            panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp301, &$s305);
            $tmp300 = $tmp306;
            panda$core$String* $tmp308 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp307 = $tmp308;
            panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, $tmp307);
            $tmp299 = $tmp309;
            panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s310);
            $tmp298 = $tmp311;
            $tmp297 = $tmp298;
            $returnValue258 = $tmp297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
            panda$core$Panda$unref$panda$core$Object($tmp302);
            return $returnValue258;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue313;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$String* $tmp317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    panda$core$String* $tmp324;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp321 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp320 = $tmp321;
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s322);
        $tmp319 = $tmp323;
        panda$core$String* $tmp325 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp324 = $tmp325;
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, $tmp324);
        $tmp318 = $tmp326;
        panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s327);
        $tmp317 = $tmp328;
        panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp317, ((panda$core$Object*) self->body));
        $tmp316 = $tmp329;
        panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s330);
        $tmp315 = $tmp331;
        $tmp314 = $tmp315;
        $returnValue313 = $tmp314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
        return $returnValue313;
    }
    }
    panda$core$String* $tmp335 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp334 = $tmp335;
    $tmp333 = $tmp334;
    $returnValue313 = $tmp333;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
    return $returnValue313;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp339;
    {
    }
    $tmp339 = -1;
    goto $l337;
    $l337:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp339) {
        case -1: goto $l340;
    }
    $l340:;
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

