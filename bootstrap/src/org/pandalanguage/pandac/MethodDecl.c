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
typedef panda$collections$Iterator* (*$fn231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn249)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Int64$init$builtin_int64(&$tmp4, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp3, $tmp4);
    self->resolved = $tmp3;
    panda$core$Bit$init$builtin_bit(&$tmp5, false);
    self->overrideKnown = $tmp5;
    panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp8, ((panda$core$Object*) NULL));
    $tmp7 = $tmp8;
    $tmp6 = $tmp7;
    self->overridden = $tmp6;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
    panda$core$Int64$init$builtin_int64(&$tmp10, 4);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp9, $tmp10);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp9, p_position, p_name);
    {
        $tmp11 = self->owner;
        panda$core$Weak* $tmp14 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T$Q($tmp14, ((panda$core$Object*) p_owner));
        $tmp13 = $tmp14;
        $tmp12 = $tmp13;
        self->owner = $tmp12;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    }
    {
        $tmp15 = self->doccomment;
        $tmp16 = p_doccomment;
        self->doccomment = $tmp16;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
    }
    {
        $tmp17 = self->annotations;
        $tmp18 = p_annotations;
        self->annotations = $tmp18;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
    }
    self->methodKind = p_methodKind;
    {
        $tmp19 = self->genericParameters;
        $tmp20 = p_genericParameters;
        self->genericParameters = $tmp20;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
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
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp44);
                    {
                        $tmp49 = p42->owner;
                        panda$core$Weak* $tmp52 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T$Q($tmp52, ((panda$core$Object*) self));
                        $tmp51 = $tmp52;
                        $tmp50 = $tmp51;
                        p42->owner = $tmp50;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
                    }
                }
                $tmp41 = -1;
                goto $l39;
                $l39:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p42));
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
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$67$924));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
    }
    {
        $tmp57 = self->returnType;
        $tmp58 = p_returnType;
        self->returnType = $tmp58;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
    }
    {
        $tmp59 = self->body;
        $tmp60 = p_body;
        self->body = $tmp60;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
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
        panda$core$Panda$unref$panda$core$Object$Q($tmp136);
        panda$core$Panda$unref$panda$core$Object$Q($tmp134);
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp183);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes152, ((panda$core$Object*) p181->type));
                    }
                    $tmp180 = -1;
                    goto $l178;
                    $l178:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p181));
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
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$110$9163));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
        $tmp151 = 0;
        goto $l149;
        $l201:;
        return $returnValue197;
    }
    $l149:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) paramTypes152));
    paramTypes152 = NULL;
    switch ($tmp151) {
        case 0: goto $l201;
    }
    $l203:;
    if (false) goto $l204; else goto $l205;
    $l205:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s206, (panda$core$Int64) { 108 }, &$s207);
    abort();
    $l204:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result211 = NULL;
    panda$core$MutableString* $tmp212;
    panda$core$MutableString* $tmp213;
    panda$core$String* $tmp215;
    panda$core$String* $tmp216;
    panda$core$String* separator220 = NULL;
    panda$core$String* $tmp221;
    panda$collections$Iterator* Iter$126$9226 = NULL;
    panda$collections$Iterator* $tmp227;
    panda$collections$Iterator* $tmp228;
    org$pandalanguage$pandac$MethodDecl$Parameter* p244 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp245;
    panda$core$Object* $tmp246;
    panda$core$String* $tmp251;
    panda$core$String* $tmp252;
    panda$core$Char8 $tmp256;
    panda$core$UInt8 $tmp257;
    org$pandalanguage$pandac$Type* $tmp258;
    panda$core$String* $tmp261;
    panda$core$String* $tmp262;
    panda$core$String* $returnValue267;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    int $tmp210;
    {
        panda$core$MutableString* $tmp214 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp217 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp216 = $tmp217;
        panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s218);
        $tmp215 = $tmp219;
        panda$core$MutableString$init$panda$core$String($tmp214, $tmp215);
        $tmp213 = $tmp214;
        $tmp212 = $tmp213;
        result211 = $tmp212;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
        $tmp221 = &$s222;
        separator220 = $tmp221;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
        {
            int $tmp225;
            {
                ITable* $tmp229 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp229 = $tmp229->next;
                }
                $fn231 $tmp230 = $tmp229->methods[0];
                panda$collections$Iterator* $tmp232 = $tmp230(((panda$collections$Iterable*) self->parameters));
                $tmp228 = $tmp232;
                $tmp227 = $tmp228;
                Iter$126$9226 = $tmp227;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
                $l233:;
                ITable* $tmp236 = Iter$126$9226->$class->itable;
                while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp236 = $tmp236->next;
                }
                $fn238 $tmp237 = $tmp236->methods[0];
                panda$core$Bit $tmp239 = $tmp237(Iter$126$9226);
                panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
                bool $tmp235 = $tmp240.value;
                if (!$tmp235) goto $l234;
                {
                    int $tmp243;
                    {
                        ITable* $tmp247 = Iter$126$9226->$class->itable;
                        while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp247 = $tmp247->next;
                        }
                        $fn249 $tmp248 = $tmp247->methods[1];
                        panda$core$Object* $tmp250 = $tmp248(Iter$126$9226);
                        $tmp246 = $tmp250;
                        $tmp245 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp246);
                        p244 = $tmp245;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp246);
                        panda$core$MutableString$append$panda$core$String(result211, separator220);
                        panda$core$MutableString$append$panda$core$Object(result211, ((panda$core$Object*) p244));
                        {
                            $tmp251 = separator220;
                            $tmp252 = &$s253;
                            separator220 = $tmp252;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
                        }
                    }
                    $tmp243 = -1;
                    goto $l241;
                    $l241:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p244));
                    p244 = NULL;
                    switch ($tmp243) {
                        case -1: goto $l254;
                    }
                    $l254:;
                }
                goto $l233;
                $l234:;
            }
            $tmp225 = -1;
            goto $l223;
            $l223:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$126$9226));
            Iter$126$9226 = NULL;
            switch ($tmp225) {
                case -1: goto $l255;
            }
            $l255:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp257, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp256, $tmp257);
        panda$core$MutableString$append$panda$core$Char8(result211, $tmp256);
        org$pandalanguage$pandac$Type* $tmp259 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp258 = $tmp259;
        panda$core$Bit $tmp260 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp258);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
        if ($tmp260.value) {
        {
            panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s263, ((panda$core$Object*) self->returnType));
            $tmp262 = $tmp264;
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s265);
            $tmp261 = $tmp266;
            panda$core$MutableString$append$panda$core$String(result211, $tmp261);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
        }
        }
        panda$core$String* $tmp270 = panda$core$MutableString$finish$R$panda$core$String(result211);
        $tmp269 = $tmp270;
        $tmp268 = $tmp269;
        $returnValue267 = $tmp268;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
        $tmp210 = 0;
        goto $l208;
        $l271:;
        return $returnValue267;
    }
    $l208:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator220));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result211));
    result211 = NULL;
    separator220 = NULL;
    switch ($tmp210) {
        case 0: goto $l271;
    }
    $l273:;
    if (false) goto $l274; else goto $l275;
    $l275:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s276, (panda$core$Int64) { 123 }, &$s277);
    abort();
    $l274:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$139_9278;
    panda$core$Int64 $tmp279;
    panda$core$String* $returnValue281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp283;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285;
    panda$core$String* $tmp286;
    panda$core$Object* $tmp288;
    panda$core$String* $tmp293;
    panda$core$Int64 $tmp299;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    panda$core$Object* $tmp307;
    panda$core$String* $tmp312;
    panda$core$Int64 $tmp318;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$Object* $tmp325;
    panda$core$String* $tmp330;
    {
        $match$139_9278 = self->methodKind;
        panda$core$Int64$init$builtin_int64(&$tmp279, 0);
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9278.$rawValue, $tmp279);
        if ($tmp280.value) {
        {
            panda$core$Object* $tmp289 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->owner);
            $tmp288 = $tmp289;
            panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s287, ((org$pandalanguage$pandac$ClassDecl*) $tmp288)->name);
            $tmp286 = $tmp290;
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s291);
            $tmp285 = $tmp292;
            panda$core$String* $tmp294 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp293 = $tmp294;
            panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, $tmp293);
            $tmp284 = $tmp295;
            panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s296);
            $tmp283 = $tmp297;
            $tmp282 = $tmp283;
            $returnValue281 = $tmp282;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
            panda$core$Panda$unref$panda$core$Object$Q($tmp288);
            return $returnValue281;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp299, 1);
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9278.$rawValue, $tmp299);
        if ($tmp300.value) {
        {
            panda$core$Object* $tmp308 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->owner);
            $tmp307 = $tmp308;
            panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s306, ((org$pandalanguage$pandac$ClassDecl*) $tmp307)->name);
            $tmp305 = $tmp309;
            panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp305, &$s310);
            $tmp304 = $tmp311;
            panda$core$String* $tmp313 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp312 = $tmp313;
            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, $tmp312);
            $tmp303 = $tmp314;
            panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s315);
            $tmp302 = $tmp316;
            $tmp301 = $tmp302;
            $returnValue281 = $tmp301;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
            panda$core$Panda$unref$panda$core$Object$Q($tmp307);
            return $returnValue281;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp318, 2);
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9278.$rawValue, $tmp318);
        if ($tmp319.value) {
        {
            panda$core$Object* $tmp326 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->owner);
            $tmp325 = $tmp326;
            panda$core$String* $tmp327 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp325)->name);
            $tmp324 = $tmp327;
            panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s328);
            $tmp323 = $tmp329;
            panda$core$String* $tmp331 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp330 = $tmp331;
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, $tmp330);
            $tmp322 = $tmp332;
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, &$s333);
            $tmp321 = $tmp334;
            $tmp320 = $tmp321;
            $returnValue281 = $tmp320;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
            panda$core$Panda$unref$panda$core$Object$Q($tmp325);
            return $returnValue281;
        }
        }
        }
        }
    }
    if (false) goto $l336; else goto $l337;
    $l337:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s338, (panda$core$Int64) { 138 }, &$s339);
    abort();
    $l336:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue340;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp351;
    panda$core$String* $tmp360;
    panda$core$String* $tmp361;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp348 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp347 = $tmp348;
        panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s349);
        $tmp346 = $tmp350;
        panda$core$String* $tmp352 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp351 = $tmp352;
        panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, $tmp351);
        $tmp345 = $tmp353;
        panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s354);
        $tmp344 = $tmp355;
        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp344, ((panda$core$Object*) self->body));
        $tmp343 = $tmp356;
        panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s357);
        $tmp342 = $tmp358;
        $tmp341 = $tmp342;
        $returnValue340 = $tmp341;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
        return $returnValue340;
    }
    }
    panda$core$String* $tmp362 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp361 = $tmp362;
    $tmp360 = $tmp361;
    $returnValue340 = $tmp360;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
    return $returnValue340;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp366;
    {
    }
    $tmp366 = -1;
    goto $l364;
    $l364:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp366) {
        case -1: goto $l367;
    }
    $l367:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->genericParameters));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->overridden));
}

