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
#include "panda/core/Equatable.h"
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
typedef panda$core$Bit (*$fn95)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn233)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Bit $returnValue97;
    panda$core$Bit $tmp98;
    panda$core$Bit $tmp101;
    panda$core$Bit $tmp106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp108;
    panda$core$Int64 $tmp109;
    panda$core$Bit $tmp111;
    panda$core$Object* $tmp125;
    panda$core$Object* $tmp127;
    panda$core$Bit $tmp130;
    panda$core$Bit $tmp138;
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
    ITable* $tmp93 = ((panda$core$Equatable*) self->name)->$class->itable;
    while ($tmp93->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp93 = $tmp93->next;
    }
    $fn95 $tmp94 = $tmp93->methods[1];
    panda$core$Bit $tmp96 = $tmp94(((panda$core$Equatable*) self->name), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Symbol*) p_other)->name));
    if ($tmp96.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp98, false);
        $returnValue97 = $tmp98;
        return $returnValue97;
    }
    }
    panda$core$Bit $tmp100 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp100.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp101, false);
        $returnValue97 = $tmp101;
        return $returnValue97;
    }
    }
    panda$core$Int64 $tmp103 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp104 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp105 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp103, $tmp104);
    if ($tmp105.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp106, false);
        $returnValue97 = $tmp106;
        return $returnValue97;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp109, 0);
    panda$core$Int64 $tmp110 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Bit$init$builtin_bit(&$tmp111, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp108, $tmp109, $tmp110, $tmp111);
    int64_t $tmp113 = $tmp108.min.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp108.max.value;
    bool $tmp116 = $tmp108.inclusive.value;
    if ($tmp116) goto $l123; else goto $l124;
    $l123:;
    if ($tmp113 <= $tmp115) goto $l117; else goto $l119;
    $l124:;
    if ($tmp113 < $tmp115) goto $l117; else goto $l119;
    $l117:;
    {
        panda$core$Object* $tmp126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i112);
        $tmp125 = $tmp126;
        panda$core$Object* $tmp128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i112);
        $tmp127 = $tmp128;
        panda$core$Bit $tmp129 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp125)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp127)->type);
        panda$core$Panda$unref$panda$core$Object($tmp127);
        panda$core$Panda$unref$panda$core$Object($tmp125);
        if ($tmp129.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp130, false);
            $returnValue97 = $tmp130;
            return $returnValue97;
        }
        }
    }
    $l120:;
    int64_t $tmp133 = $tmp115 - i112.value;
    if ($tmp116) goto $l134; else goto $l135;
    $l134:;
    if ((uint64_t) $tmp133 >= 1) goto $l132; else goto $l119;
    $l135:;
    if ((uint64_t) $tmp133 > 1) goto $l132; else goto $l119;
    $l132:;
    i112.value += 1;
    goto $l117;
    $l119:;
    panda$core$Bit$init$builtin_bit(&$tmp138, true);
    $returnValue97 = $tmp138;
    return $returnValue97;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes143 = NULL;
    panda$collections$Array* $tmp144;
    panda$collections$Array* $tmp145;
    panda$collections$Iterator* Iter$110$9151 = NULL;
    panda$collections$Iterator* $tmp152;
    panda$collections$Iterator* $tmp153;
    org$pandalanguage$pandac$MethodDecl$Parameter* p169 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp170;
    panda$core$Object* $tmp171;
    org$pandalanguage$pandac$Type$Kind kind178;
    panda$core$Int64 $tmp179;
    org$pandalanguage$pandac$Type$Kind $tmp181;
    panda$core$Int64 $tmp182;
    org$pandalanguage$pandac$Type$Kind $tmp183;
    panda$core$Int64 $tmp184;
    org$pandalanguage$pandac$Type* $returnValue185;
    org$pandalanguage$pandac$Type* $tmp186;
    org$pandalanguage$pandac$Type* $tmp187;
    int $tmp142;
    {
        panda$collections$Array* $tmp146 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp147 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp146, $tmp147);
        $tmp145 = $tmp146;
        $tmp144 = $tmp145;
        paramTypes143 = $tmp144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
        {
            int $tmp150;
            {
                ITable* $tmp154 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp154 = $tmp154->next;
                }
                $fn156 $tmp155 = $tmp154->methods[0];
                panda$collections$Iterator* $tmp157 = $tmp155(((panda$collections$Iterable*) self->parameters));
                $tmp153 = $tmp157;
                $tmp152 = $tmp153;
                Iter$110$9151 = $tmp152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                $l158:;
                ITable* $tmp161 = Iter$110$9151->$class->itable;
                while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp161 = $tmp161->next;
                }
                $fn163 $tmp162 = $tmp161->methods[0];
                panda$core$Bit $tmp164 = $tmp162(Iter$110$9151);
                panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
                bool $tmp160 = $tmp165.value;
                if (!$tmp160) goto $l159;
                {
                    int $tmp168;
                    {
                        ITable* $tmp172 = Iter$110$9151->$class->itable;
                        while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp172 = $tmp172->next;
                        }
                        $fn174 $tmp173 = $tmp172->methods[1];
                        panda$core$Object* $tmp175 = $tmp173(Iter$110$9151);
                        $tmp171 = $tmp175;
                        $tmp170 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp171);
                        p169 = $tmp170;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$core$Panda$unref$panda$core$Object($tmp171);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes143, ((panda$core$Object*) p169->type));
                    }
                    $tmp168 = -1;
                    goto $l166;
                    $l166:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p169));
                    p169 = NULL;
                    switch ($tmp168) {
                        case -1: goto $l176;
                    }
                    $l176:;
                }
                goto $l158;
                $l159:;
            }
            $tmp150 = -1;
            goto $l148;
            $l148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$9151));
            Iter$110$9151 = NULL;
            switch ($tmp150) {
                case -1: goto $l177;
            }
            $l177:;
        }
        memset(&kind178, 0, sizeof(kind178));
        panda$core$Int64$init$builtin_int64(&$tmp179, 1);
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp179);
        if ($tmp180.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp182, 16);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp181, $tmp182);
            kind178 = $tmp181;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp184, 17);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp183, $tmp184);
            kind178 = $tmp183;
        }
        }
        org$pandalanguage$pandac$Type* $tmp188 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind178, ((panda$collections$ListView*) paramTypes143), self->returnType);
        $tmp187 = $tmp188;
        $tmp186 = $tmp187;
        $returnValue185 = $tmp186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        $tmp142 = 0;
        goto $l140;
        $l189:;
        return $returnValue185;
    }
    $l140:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes143));
    paramTypes143 = NULL;
    switch ($tmp142) {
        case 0: goto $l189;
    }
    $l191:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result195 = NULL;
    panda$core$MutableString* $tmp196;
    panda$core$MutableString* $tmp197;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$core$String* separator204 = NULL;
    panda$core$String* $tmp205;
    panda$collections$Iterator* Iter$126$9210 = NULL;
    panda$collections$Iterator* $tmp211;
    panda$collections$Iterator* $tmp212;
    org$pandalanguage$pandac$MethodDecl$Parameter* p228 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp229;
    panda$core$Object* $tmp230;
    panda$core$String* $tmp235;
    panda$core$String* $tmp236;
    panda$core$Char8 $tmp240;
    panda$core$UInt8 $tmp241;
    org$pandalanguage$pandac$Type* $tmp242;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $returnValue251;
    panda$core$String* $tmp252;
    panda$core$String* $tmp253;
    int $tmp194;
    {
        panda$core$MutableString* $tmp198 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp201 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp200 = $tmp201;
        panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s202);
        $tmp199 = $tmp203;
        panda$core$MutableString$init$panda$core$String($tmp198, $tmp199);
        $tmp197 = $tmp198;
        $tmp196 = $tmp197;
        result195 = $tmp196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        $tmp205 = &$s206;
        separator204 = $tmp205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
        {
            int $tmp209;
            {
                ITable* $tmp213 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp213 = $tmp213->next;
                }
                $fn215 $tmp214 = $tmp213->methods[0];
                panda$collections$Iterator* $tmp216 = $tmp214(((panda$collections$Iterable*) self->parameters));
                $tmp212 = $tmp216;
                $tmp211 = $tmp212;
                Iter$126$9210 = $tmp211;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                $l217:;
                ITable* $tmp220 = Iter$126$9210->$class->itable;
                while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp220 = $tmp220->next;
                }
                $fn222 $tmp221 = $tmp220->methods[0];
                panda$core$Bit $tmp223 = $tmp221(Iter$126$9210);
                panda$core$Bit $tmp224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp223);
                bool $tmp219 = $tmp224.value;
                if (!$tmp219) goto $l218;
                {
                    int $tmp227;
                    {
                        ITable* $tmp231 = Iter$126$9210->$class->itable;
                        while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp231 = $tmp231->next;
                        }
                        $fn233 $tmp232 = $tmp231->methods[1];
                        panda$core$Object* $tmp234 = $tmp232(Iter$126$9210);
                        $tmp230 = $tmp234;
                        $tmp229 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp230);
                        p228 = $tmp229;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
                        panda$core$Panda$unref$panda$core$Object($tmp230);
                        panda$core$MutableString$append$panda$core$String(result195, separator204);
                        panda$core$MutableString$append$panda$core$Object(result195, ((panda$core$Object*) p228));
                        {
                            $tmp235 = separator204;
                            $tmp236 = &$s237;
                            separator204 = $tmp236;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
                        }
                    }
                    $tmp227 = -1;
                    goto $l225;
                    $l225:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p228));
                    p228 = NULL;
                    switch ($tmp227) {
                        case -1: goto $l238;
                    }
                    $l238:;
                }
                goto $l217;
                $l218:;
            }
            $tmp209 = -1;
            goto $l207;
            $l207:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$126$9210));
            Iter$126$9210 = NULL;
            switch ($tmp209) {
                case -1: goto $l239;
            }
            $l239:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp241, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp240, $tmp241);
        panda$core$MutableString$append$panda$core$Char8(result195, $tmp240);
        org$pandalanguage$pandac$Type* $tmp243 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp242 = $tmp243;
        panda$core$Bit $tmp244 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp242);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
        if ($tmp244.value) {
        {
            panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s247, ((panda$core$Object*) self->returnType));
            $tmp246 = $tmp248;
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s249);
            $tmp245 = $tmp250;
            panda$core$MutableString$append$panda$core$String(result195, $tmp245);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
        }
        }
        panda$core$String* $tmp254 = panda$core$MutableString$finish$R$panda$core$String(result195);
        $tmp253 = $tmp254;
        $tmp252 = $tmp253;
        $returnValue251 = $tmp252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
        $tmp194 = 0;
        goto $l192;
        $l255:;
        return $returnValue251;
    }
    $l192:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator204));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result195));
    result195 = NULL;
    separator204 = NULL;
    switch ($tmp194) {
        case 0: goto $l255;
    }
    $l257:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$139_9258;
    panda$core$Int64 $tmp259;
    panda$core$String* $returnValue261;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    panda$core$String* $tmp266;
    panda$core$Object* $tmp268;
    panda$core$String* $tmp273;
    panda$core$Int64 $tmp279;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp283;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285;
    panda$core$Object* $tmp287;
    panda$core$String* $tmp292;
    panda$core$Int64 $tmp298;
    panda$core$String* $tmp300;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$Object* $tmp305;
    panda$core$String* $tmp310;
    {
        $match$139_9258 = self->methodKind;
        panda$core$Int64$init$builtin_int64(&$tmp259, 0);
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9258.$rawValue, $tmp259);
        if ($tmp260.value) {
        {
            panda$core$Object* $tmp269 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp268 = $tmp269;
            panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s267, ((org$pandalanguage$pandac$ClassDecl*) $tmp268)->name);
            $tmp266 = $tmp270;
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s271);
            $tmp265 = $tmp272;
            panda$core$String* $tmp274 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp273 = $tmp274;
            panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, $tmp273);
            $tmp264 = $tmp275;
            panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s276);
            $tmp263 = $tmp277;
            $tmp262 = $tmp263;
            $returnValue261 = $tmp262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
            panda$core$Panda$unref$panda$core$Object($tmp268);
            return $returnValue261;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp279, 1);
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9258.$rawValue, $tmp279);
        if ($tmp280.value) {
        {
            panda$core$Object* $tmp288 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp287 = $tmp288;
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s286, ((org$pandalanguage$pandac$ClassDecl*) $tmp287)->name);
            $tmp285 = $tmp289;
            panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s290);
            $tmp284 = $tmp291;
            panda$core$String* $tmp293 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp292 = $tmp293;
            panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, $tmp292);
            $tmp283 = $tmp294;
            panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s295);
            $tmp282 = $tmp296;
            $tmp281 = $tmp282;
            $returnValue261 = $tmp281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
            panda$core$Panda$unref$panda$core$Object($tmp287);
            return $returnValue261;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp298, 2);
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9258.$rawValue, $tmp298);
        if ($tmp299.value) {
        {
            panda$core$Object* $tmp306 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp305 = $tmp306;
            panda$core$String* $tmp307 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp305)->name);
            $tmp304 = $tmp307;
            panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s308);
            $tmp303 = $tmp309;
            panda$core$String* $tmp311 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp310 = $tmp311;
            panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, $tmp310);
            $tmp302 = $tmp312;
            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s313);
            $tmp301 = $tmp314;
            $tmp300 = $tmp301;
            $returnValue261 = $tmp300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
            panda$core$Panda$unref$panda$core$Object($tmp305);
            return $returnValue261;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue316;
    panda$core$String* $tmp317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp327;
    panda$core$String* $tmp336;
    panda$core$String* $tmp337;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp324 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp323 = $tmp324;
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s325);
        $tmp322 = $tmp326;
        panda$core$String* $tmp328 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp327 = $tmp328;
        panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, $tmp327);
        $tmp321 = $tmp329;
        panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s330);
        $tmp320 = $tmp331;
        panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp320, ((panda$core$Object*) self->body));
        $tmp319 = $tmp332;
        panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s333);
        $tmp318 = $tmp334;
        $tmp317 = $tmp318;
        $returnValue316 = $tmp317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
        return $returnValue316;
    }
    }
    panda$core$String* $tmp338 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp337 = $tmp338;
    $tmp336 = $tmp337;
    $returnValue316 = $tmp336;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
    return $returnValue316;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp342;
    {
    }
    $tmp342 = -1;
    goto $l340;
    $l340:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp342) {
        case -1: goto $l343;
    }
    $l343:;
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

