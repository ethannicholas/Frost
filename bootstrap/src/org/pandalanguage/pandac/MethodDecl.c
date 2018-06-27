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
#include "panda/collections/CollectionView.h"
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
typedef panda$core$Int64 (*$fn105)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn109)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn118)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn186)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn227)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn245)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Int64$init$builtin_int64(&$tmp10, 4);
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
    panda$core$Bit $tmp112;
    panda$core$Range$LTpanda$core$Int64$GT $tmp114;
    panda$core$Int64 $tmp115;
    panda$core$Bit $tmp120;
    panda$core$Object* $tmp134;
    panda$core$Object* $tmp136;
    panda$core$Bit $tmp139;
    panda$core$Bit $tmp147;
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
    ITable* $tmp103 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp103->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp103 = $tmp103->next;
    }
    $fn105 $tmp104 = $tmp103->methods[0];
    panda$core$Int64 $tmp106 = $tmp104(((panda$collections$CollectionView*) self->parameters));
    ITable* $tmp107 = ((panda$collections$CollectionView*) p_other->parameters)->$class->itable;
    while ($tmp107->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp107 = $tmp107->next;
    }
    $fn109 $tmp108 = $tmp107->methods[0];
    panda$core$Int64 $tmp110 = $tmp108(((panda$collections$CollectionView*) p_other->parameters));
    panda$core$Bit $tmp111 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp106, $tmp110);
    if ($tmp111.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp112, false);
        $returnValue97 = $tmp112;
        return $returnValue97;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp115, 0);
    ITable* $tmp116 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp116->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp116 = $tmp116->next;
    }
    $fn118 $tmp117 = $tmp116->methods[0];
    panda$core$Int64 $tmp119 = $tmp117(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit$init$builtin_bit(&$tmp120, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp114, $tmp115, $tmp119, $tmp120);
    int64_t $tmp122 = $tmp114.min.value;
    panda$core$Int64 i121 = { $tmp122 };
    int64_t $tmp124 = $tmp114.max.value;
    bool $tmp125 = $tmp114.inclusive.value;
    if ($tmp125) goto $l132; else goto $l133;
    $l132:;
    if ($tmp122 <= $tmp124) goto $l126; else goto $l128;
    $l133:;
    if ($tmp122 < $tmp124) goto $l126; else goto $l128;
    $l126:;
    {
        panda$core$Object* $tmp135 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i121);
        $tmp134 = $tmp135;
        panda$core$Object* $tmp137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i121);
        $tmp136 = $tmp137;
        panda$core$Bit $tmp138 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp134)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp136)->type);
        panda$core$Panda$unref$panda$core$Object($tmp136);
        panda$core$Panda$unref$panda$core$Object($tmp134);
        if ($tmp138.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp139, false);
            $returnValue97 = $tmp139;
            return $returnValue97;
        }
        }
    }
    $l129:;
    int64_t $tmp142 = $tmp124 - i121.value;
    if ($tmp125) goto $l143; else goto $l144;
    $l143:;
    if ((uint64_t) $tmp142 >= 1) goto $l141; else goto $l128;
    $l144:;
    if ((uint64_t) $tmp142 > 1) goto $l141; else goto $l128;
    $l141:;
    i121.value += 1;
    goto $l126;
    $l128:;
    panda$core$Bit$init$builtin_bit(&$tmp147, true);
    $returnValue97 = $tmp147;
    return $returnValue97;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes152 = NULL;
    panda$collections$Array* $tmp153;
    panda$collections$Array* $tmp154;
    panda$collections$Iterator* Iter$110$9163 = NULL;
    panda$collections$Iterator* $tmp164;
    panda$collections$Iterator* $tmp165;
    org$pandalanguage$pandac$MethodDecl$Parameter* p181 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp182;
    panda$core$Object* $tmp183;
    org$pandalanguage$pandac$Type$Kind kind190;
    panda$core$Int64 $tmp191;
    org$pandalanguage$pandac$Type$Kind $tmp193;
    panda$core$Int64 $tmp194;
    org$pandalanguage$pandac$Type$Kind $tmp195;
    panda$core$Int64 $tmp196;
    org$pandalanguage$pandac$Type* $returnValue197;
    org$pandalanguage$pandac$Type* $tmp198;
    org$pandalanguage$pandac$Type* $tmp199;
    int $tmp151;
    {
        panda$collections$Array* $tmp155 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        ITable* $tmp156 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp156->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp156 = $tmp156->next;
        }
        $fn158 $tmp157 = $tmp156->methods[0];
        panda$core$Int64 $tmp159 = $tmp157(((panda$collections$CollectionView*) self->parameters));
        panda$collections$Array$init$panda$core$Int64($tmp155, $tmp159);
        $tmp154 = $tmp155;
        $tmp153 = $tmp154;
        paramTypes152 = $tmp153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
        {
            int $tmp162;
            {
                ITable* $tmp166 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp166 = $tmp166->next;
                }
                $fn168 $tmp167 = $tmp166->methods[0];
                panda$collections$Iterator* $tmp169 = $tmp167(((panda$collections$Iterable*) self->parameters));
                $tmp165 = $tmp169;
                $tmp164 = $tmp165;
                Iter$110$9163 = $tmp164;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
                $l170:;
                ITable* $tmp173 = Iter$110$9163->$class->itable;
                while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp173 = $tmp173->next;
                }
                $fn175 $tmp174 = $tmp173->methods[0];
                panda$core$Bit $tmp176 = $tmp174(Iter$110$9163);
                panda$core$Bit $tmp177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp176);
                bool $tmp172 = $tmp177.value;
                if (!$tmp172) goto $l171;
                {
                    int $tmp180;
                    {
                        ITable* $tmp184 = Iter$110$9163->$class->itable;
                        while ($tmp184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp184 = $tmp184->next;
                        }
                        $fn186 $tmp185 = $tmp184->methods[1];
                        panda$core$Object* $tmp187 = $tmp185(Iter$110$9163);
                        $tmp183 = $tmp187;
                        $tmp182 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp183);
                        p181 = $tmp182;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                        panda$core$Panda$unref$panda$core$Object($tmp183);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes152, ((panda$core$Object*) p181->type));
                    }
                    $tmp180 = -1;
                    goto $l178;
                    $l178:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p181));
                    p181 = NULL;
                    switch ($tmp180) {
                        case -1: goto $l188;
                    }
                    $l188:;
                }
                goto $l170;
                $l171:;
            }
            $tmp162 = -1;
            goto $l160;
            $l160:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$110$9163));
            Iter$110$9163 = NULL;
            switch ($tmp162) {
                case -1: goto $l189;
            }
            $l189:;
        }
        memset(&kind190, 0, sizeof(kind190));
        panda$core$Int64$init$builtin_int64(&$tmp191, 1);
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp191);
        if ($tmp192.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp194, 16);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp193, $tmp194);
            kind190 = $tmp193;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp196, 17);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp195, $tmp196);
            kind190 = $tmp195;
        }
        }
        org$pandalanguage$pandac$Type* $tmp200 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind190, ((panda$collections$ListView*) paramTypes152), self->returnType);
        $tmp199 = $tmp200;
        $tmp198 = $tmp199;
        $returnValue197 = $tmp198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
        $tmp151 = 0;
        goto $l149;
        $l201:;
        return $returnValue197;
    }
    $l149:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes152));
    paramTypes152 = NULL;
    switch ($tmp151) {
        case 0: goto $l201;
    }
    $l203:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result207 = NULL;
    panda$core$MutableString* $tmp208;
    panda$core$MutableString* $tmp209;
    panda$core$String* $tmp211;
    panda$core$String* $tmp212;
    panda$core$String* separator216 = NULL;
    panda$core$String* $tmp217;
    panda$collections$Iterator* Iter$126$9222 = NULL;
    panda$collections$Iterator* $tmp223;
    panda$collections$Iterator* $tmp224;
    org$pandalanguage$pandac$MethodDecl$Parameter* p240 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp241;
    panda$core$Object* $tmp242;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
    panda$core$Char8 $tmp252;
    panda$core$UInt8 $tmp253;
    org$pandalanguage$pandac$Type* $tmp254;
    panda$core$String* $tmp257;
    panda$core$String* $tmp258;
    panda$core$String* $returnValue263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    int $tmp206;
    {
        panda$core$MutableString* $tmp210 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp213 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp212 = $tmp213;
        panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s214);
        $tmp211 = $tmp215;
        panda$core$MutableString$init$panda$core$String($tmp210, $tmp211);
        $tmp209 = $tmp210;
        $tmp208 = $tmp209;
        result207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        $tmp217 = &$s218;
        separator216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        {
            int $tmp221;
            {
                ITable* $tmp225 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp225 = $tmp225->next;
                }
                $fn227 $tmp226 = $tmp225->methods[0];
                panda$collections$Iterator* $tmp228 = $tmp226(((panda$collections$Iterable*) self->parameters));
                $tmp224 = $tmp228;
                $tmp223 = $tmp224;
                Iter$126$9222 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                $l229:;
                ITable* $tmp232 = Iter$126$9222->$class->itable;
                while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp232 = $tmp232->next;
                }
                $fn234 $tmp233 = $tmp232->methods[0];
                panda$core$Bit $tmp235 = $tmp233(Iter$126$9222);
                panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
                bool $tmp231 = $tmp236.value;
                if (!$tmp231) goto $l230;
                {
                    int $tmp239;
                    {
                        ITable* $tmp243 = Iter$126$9222->$class->itable;
                        while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp243 = $tmp243->next;
                        }
                        $fn245 $tmp244 = $tmp243->methods[1];
                        panda$core$Object* $tmp246 = $tmp244(Iter$126$9222);
                        $tmp242 = $tmp246;
                        $tmp241 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp242);
                        p240 = $tmp241;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object($tmp242);
                        panda$core$MutableString$append$panda$core$String(result207, separator216);
                        panda$core$MutableString$append$panda$core$Object(result207, ((panda$core$Object*) p240));
                        {
                            $tmp247 = separator216;
                            $tmp248 = &$s249;
                            separator216 = $tmp248;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                        }
                    }
                    $tmp239 = -1;
                    goto $l237;
                    $l237:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p240));
                    p240 = NULL;
                    switch ($tmp239) {
                        case -1: goto $l250;
                    }
                    $l250:;
                }
                goto $l229;
                $l230:;
            }
            $tmp221 = -1;
            goto $l219;
            $l219:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$126$9222));
            Iter$126$9222 = NULL;
            switch ($tmp221) {
                case -1: goto $l251;
            }
            $l251:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp253, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp252, $tmp253);
        panda$core$MutableString$append$panda$core$Char8(result207, $tmp252);
        org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp254 = $tmp255;
        panda$core$Bit $tmp256 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp254);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
        if ($tmp256.value) {
        {
            panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s259, ((panda$core$Object*) self->returnType));
            $tmp258 = $tmp260;
            panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s261);
            $tmp257 = $tmp262;
            panda$core$MutableString$append$panda$core$String(result207, $tmp257);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
        }
        }
        panda$core$String* $tmp266 = panda$core$MutableString$finish$R$panda$core$String(result207);
        $tmp265 = $tmp266;
        $tmp264 = $tmp265;
        $returnValue263 = $tmp264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
        $tmp206 = 0;
        goto $l204;
        $l267:;
        return $returnValue263;
    }
    $l204:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result207));
    result207 = NULL;
    separator216 = NULL;
    switch ($tmp206) {
        case 0: goto $l267;
    }
    $l269:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$139_9270;
    panda$core$Int64 $tmp271;
    panda$core$String* $returnValue273;
    panda$core$String* $tmp274;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    panda$core$String* $tmp277;
    panda$core$String* $tmp278;
    panda$core$Object* $tmp280;
    panda$core$String* $tmp285;
    panda$core$Int64 $tmp291;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$core$String* $tmp295;
    panda$core$String* $tmp296;
    panda$core$String* $tmp297;
    panda$core$Object* $tmp299;
    panda$core$String* $tmp304;
    panda$core$Int64 $tmp310;
    panda$core$String* $tmp312;
    panda$core$String* $tmp313;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$Object* $tmp317;
    panda$core$String* $tmp322;
    {
        $match$139_9270 = self->methodKind;
        panda$core$Int64$init$builtin_int64(&$tmp271, 0);
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9270.$rawValue, $tmp271);
        if ($tmp272.value) {
        {
            panda$core$Object* $tmp281 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp280 = $tmp281;
            panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s279, ((org$pandalanguage$pandac$ClassDecl*) $tmp280)->name);
            $tmp278 = $tmp282;
            panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s283);
            $tmp277 = $tmp284;
            panda$core$String* $tmp286 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp285 = $tmp286;
            panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, $tmp285);
            $tmp276 = $tmp287;
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s288);
            $tmp275 = $tmp289;
            $tmp274 = $tmp275;
            $returnValue273 = $tmp274;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
            panda$core$Panda$unref$panda$core$Object($tmp280);
            return $returnValue273;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp291, 1);
        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9270.$rawValue, $tmp291);
        if ($tmp292.value) {
        {
            panda$core$Object* $tmp300 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp299 = $tmp300;
            panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s298, ((org$pandalanguage$pandac$ClassDecl*) $tmp299)->name);
            $tmp297 = $tmp301;
            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s302);
            $tmp296 = $tmp303;
            panda$core$String* $tmp305 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp304 = $tmp305;
            panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, $tmp304);
            $tmp295 = $tmp306;
            panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp295, &$s307);
            $tmp294 = $tmp308;
            $tmp293 = $tmp294;
            $returnValue273 = $tmp293;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
            panda$core$Panda$unref$panda$core$Object($tmp299);
            return $returnValue273;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp310, 2);
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9270.$rawValue, $tmp310);
        if ($tmp311.value) {
        {
            panda$core$Object* $tmp318 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp317 = $tmp318;
            panda$core$String* $tmp319 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp317)->name);
            $tmp316 = $tmp319;
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s320);
            $tmp315 = $tmp321;
            panda$core$String* $tmp323 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp322 = $tmp323;
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, $tmp322);
            $tmp314 = $tmp324;
            panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, &$s325);
            $tmp313 = $tmp326;
            $tmp312 = $tmp313;
            $returnValue273 = $tmp312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
            panda$core$Panda$unref$panda$core$Object($tmp317);
            return $returnValue273;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$core$String* $tmp335;
    panda$core$String* $tmp339;
    panda$core$String* $tmp348;
    panda$core$String* $tmp349;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp336 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp335 = $tmp336;
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s337);
        $tmp334 = $tmp338;
        panda$core$String* $tmp340 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp339 = $tmp340;
        panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, $tmp339);
        $tmp333 = $tmp341;
        panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s342);
        $tmp332 = $tmp343;
        panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp332, ((panda$core$Object*) self->body));
        $tmp331 = $tmp344;
        panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s345);
        $tmp330 = $tmp346;
        $tmp329 = $tmp330;
        $returnValue328 = $tmp329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
        return $returnValue328;
    }
    }
    panda$core$String* $tmp350 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp349 = $tmp350;
    $tmp348 = $tmp349;
    $returnValue328 = $tmp348;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    return $returnValue328;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp354;
    {
    }
    $tmp354 = -1;
    goto $l352;
    $l352:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp354) {
        case -1: goto $l355;
    }
    $l355:;
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

