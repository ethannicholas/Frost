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

typedef panda$collections$Iterator* (*$fn100)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn118)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn208)(panda$core$Weak*);
typedef panda$core$Object* (*$fn227)(panda$core$Weak*);
typedef panda$core$Object* (*$fn245)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
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
    org$pandalanguage$pandac$Type* $tmp18;
    org$pandalanguage$pandac$Type* $tmp19;
    panda$collections$ImmutableArray* $tmp20;
    panda$collections$ImmutableArray* $tmp21;
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
        $tmp16 = self->parameters;
        $tmp17 = p_parameters;
        self->parameters = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    {
        $tmp18 = self->returnType;
        $tmp19 = p_returnType;
        self->returnType = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    {
        $tmp20 = self->body;
        $tmp21 = p_body;
        self->body = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue22;
    panda$core$Bit $tmp23 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $returnValue22 = $tmp23;
    return $returnValue22;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue25;
    panda$core$Bit $tmp28 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
    bool $tmp27 = $tmp29.value;
    if (!$tmp27) goto $l30;
    panda$core$Bit $tmp31 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp27 = $tmp31.value;
    $l30:;
    panda$core$Bit $tmp32 = { $tmp27 };
    bool $tmp26 = $tmp32.value;
    if (!$tmp26) goto $l33;
    panda$core$Bit $tmp34 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp35 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp34);
    $tmp26 = $tmp35.value;
    $l33:;
    panda$core$Bit $tmp36 = { $tmp26 };
    $returnValue25 = $tmp36;
    return $returnValue25;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue38;
    panda$core$Bit $tmp39 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp40 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp39);
    $returnValue38 = $tmp40;
    return $returnValue38;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $returnValue48;
    panda$core$Range$LTpanda$core$Int64$GT $tmp56;
    panda$core$Object* $tmp71;
    panda$core$Object* $tmp73;
    panda$core$Bit $tmp43 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp42 = $tmp43.value;
    if (!$tmp42) goto $l44;
    panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_other->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp42 = $tmp45.value;
    $l44:;
    panda$core$Bit $tmp46 = { $tmp42 };
    PANDA_ASSERT($tmp46.value);
    panda$core$Bit $tmp47 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp47.value) {
    {
        $returnValue48 = ((panda$core$Bit) { false });
        return $returnValue48;
    }
    }
    panda$core$Bit $tmp50 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp50.value) {
    {
        $returnValue48 = ((panda$core$Bit) { false });
        return $returnValue48;
    }
    }
    panda$core$Int64 $tmp52 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp53 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp52, $tmp53);
    if ($tmp54.value) {
    {
        $returnValue48 = ((panda$core$Bit) { false });
        return $returnValue48;
    }
    }
    panda$core$Int64 $tmp57 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp56, ((panda$core$Int64) { 0 }), $tmp57, ((panda$core$Bit) { false }));
    int64_t $tmp59 = $tmp56.min.value;
    panda$core$Int64 i58 = { $tmp59 };
    int64_t $tmp61 = $tmp56.max.value;
    bool $tmp62 = $tmp56.inclusive.value;
    if ($tmp62) goto $l69; else goto $l70;
    $l69:;
    if ($tmp59 <= $tmp61) goto $l63; else goto $l65;
    $l70:;
    if ($tmp59 < $tmp61) goto $l63; else goto $l65;
    $l63:;
    {
        panda$core$Object* $tmp72 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i58);
        $tmp71 = $tmp72;
        panda$core$Object* $tmp74 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i58);
        $tmp73 = $tmp74;
        panda$core$Bit $tmp75 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp71)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp73)->type);
        panda$core$Panda$unref$panda$core$Object($tmp73);
        panda$core$Panda$unref$panda$core$Object($tmp71);
        if ($tmp75.value) {
        {
            $returnValue48 = ((panda$core$Bit) { false });
            return $returnValue48;
        }
        }
    }
    $l66:;
    int64_t $tmp78 = $tmp61 - i58.value;
    if ($tmp62) goto $l79; else goto $l80;
    $l79:;
    if ((uint64_t) $tmp78 >= 1) goto $l77; else goto $l65;
    $l80:;
    if ((uint64_t) $tmp78 > 1) goto $l77; else goto $l65;
    $l77:;
    i58.value += 1;
    goto $l63;
    $l65:;
    $returnValue48 = ((panda$core$Bit) { true });
    return $returnValue48;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes87 = NULL;
    panda$collections$Array* $tmp88;
    panda$collections$Array* $tmp89;
    panda$collections$Iterator* Iter$100$995 = NULL;
    panda$collections$Iterator* $tmp96;
    panda$collections$Iterator* $tmp97;
    org$pandalanguage$pandac$MethodDecl$Parameter* p113 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp114;
    panda$core$Object* $tmp115;
    org$pandalanguage$pandac$Type$Kind kind122;
    org$pandalanguage$pandac$Type$Kind $tmp124;
    org$pandalanguage$pandac$Type$Kind $tmp125;
    org$pandalanguage$pandac$Type* $returnValue126;
    org$pandalanguage$pandac$Type* $tmp127;
    org$pandalanguage$pandac$Type* $tmp128;
    int $tmp86;
    {
        panda$collections$Array* $tmp90 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp91 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp90, $tmp91);
        $tmp89 = $tmp90;
        $tmp88 = $tmp89;
        paramTypes87 = $tmp88;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
        {
            int $tmp94;
            {
                ITable* $tmp98 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp98 = $tmp98->next;
                }
                $fn100 $tmp99 = $tmp98->methods[0];
                panda$collections$Iterator* $tmp101 = $tmp99(((panda$collections$Iterable*) self->parameters));
                $tmp97 = $tmp101;
                $tmp96 = $tmp97;
                Iter$100$995 = $tmp96;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
                $l102:;
                ITable* $tmp105 = Iter$100$995->$class->itable;
                while ($tmp105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp105 = $tmp105->next;
                }
                $fn107 $tmp106 = $tmp105->methods[0];
                panda$core$Bit $tmp108 = $tmp106(Iter$100$995);
                panda$core$Bit $tmp109 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp108);
                bool $tmp104 = $tmp109.value;
                if (!$tmp104) goto $l103;
                {
                    int $tmp112;
                    {
                        ITable* $tmp116 = Iter$100$995->$class->itable;
                        while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp116 = $tmp116->next;
                        }
                        $fn118 $tmp117 = $tmp116->methods[1];
                        panda$core$Object* $tmp119 = $tmp117(Iter$100$995);
                        $tmp115 = $tmp119;
                        $tmp114 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp115);
                        p113 = $tmp114;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
                        panda$core$Panda$unref$panda$core$Object($tmp115);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes87, ((panda$core$Object*) p113->type));
                    }
                    $tmp112 = -1;
                    goto $l110;
                    $l110:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p113));
                    p113 = NULL;
                    switch ($tmp112) {
                        case -1: goto $l120;
                    }
                    $l120:;
                }
                goto $l102;
                $l103:;
            }
            $tmp94 = -1;
            goto $l92;
            $l92:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$995));
            Iter$100$995 = NULL;
            switch ($tmp94) {
                case -1: goto $l121;
            }
            $l121:;
        }
        memset(&kind122, 0, sizeof(kind122));
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp123.value) {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp124, ((panda$core$Int64) { 16 }));
            kind122 = $tmp124;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp125, ((panda$core$Int64) { 17 }));
            kind122 = $tmp125;
        }
        }
        org$pandalanguage$pandac$Type* $tmp129 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind122, ((panda$collections$ListView*) paramTypes87), self->returnType);
        $tmp128 = $tmp129;
        $tmp127 = $tmp128;
        $returnValue126 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
        $tmp86 = 0;
        goto $l84;
        $l130:;
        return $returnValue126;
    }
    $l84:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes87));
    paramTypes87 = NULL;
    switch ($tmp86) {
        case 0: goto $l130;
    }
    $l132:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result136 = NULL;
    panda$core$MutableString* $tmp137;
    panda$core$MutableString* $tmp138;
    panda$core$String* $tmp140;
    panda$core$String* $tmp141;
    panda$core$String* separator145 = NULL;
    panda$core$String* $tmp146;
    panda$collections$Iterator* Iter$116$9151 = NULL;
    panda$collections$Iterator* $tmp152;
    panda$collections$Iterator* $tmp153;
    org$pandalanguage$pandac$MethodDecl$Parameter* p169 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp170;
    panda$core$Object* $tmp171;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$Char8 $tmp181;
    org$pandalanguage$pandac$Type* $tmp182;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* $returnValue191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    int $tmp135;
    {
        panda$core$MutableString* $tmp139 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp142 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp141 = $tmp142;
        panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s143);
        $tmp140 = $tmp144;
        panda$core$MutableString$init$panda$core$String($tmp139, $tmp140);
        $tmp138 = $tmp139;
        $tmp137 = $tmp138;
        result136 = $tmp137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
        $tmp146 = &$s147;
        separator145 = $tmp146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
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
                Iter$116$9151 = $tmp152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                $l158:;
                ITable* $tmp161 = Iter$116$9151->$class->itable;
                while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp161 = $tmp161->next;
                }
                $fn163 $tmp162 = $tmp161->methods[0];
                panda$core$Bit $tmp164 = $tmp162(Iter$116$9151);
                panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
                bool $tmp160 = $tmp165.value;
                if (!$tmp160) goto $l159;
                {
                    int $tmp168;
                    {
                        ITable* $tmp172 = Iter$116$9151->$class->itable;
                        while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp172 = $tmp172->next;
                        }
                        $fn174 $tmp173 = $tmp172->methods[1];
                        panda$core$Object* $tmp175 = $tmp173(Iter$116$9151);
                        $tmp171 = $tmp175;
                        $tmp170 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp171);
                        p169 = $tmp170;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$core$Panda$unref$panda$core$Object($tmp171);
                        panda$core$MutableString$append$panda$core$String(result136, separator145);
                        panda$core$MutableString$append$panda$core$Object(result136, ((panda$core$Object*) p169));
                        {
                            $tmp176 = separator145;
                            $tmp177 = &$s178;
                            separator145 = $tmp177;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                        }
                    }
                    $tmp168 = -1;
                    goto $l166;
                    $l166:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p169));
                    p169 = NULL;
                    switch ($tmp168) {
                        case -1: goto $l179;
                    }
                    $l179:;
                }
                goto $l158;
                $l159:;
            }
            $tmp150 = -1;
            goto $l148;
            $l148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$116$9151));
            Iter$116$9151 = NULL;
            switch ($tmp150) {
                case -1: goto $l180;
            }
            $l180:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp181, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result136, $tmp181);
        org$pandalanguage$pandac$Type* $tmp183 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp182 = $tmp183;
        panda$core$Bit $tmp184 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp182);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
        if ($tmp184.value) {
        {
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s187, ((panda$core$Object*) self->returnType));
            $tmp186 = $tmp188;
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s189);
            $tmp185 = $tmp190;
            panda$core$MutableString$append$panda$core$String(result136, $tmp185);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
        }
        }
        panda$core$String* $tmp194 = panda$core$MutableString$finish$R$panda$core$String(result136);
        $tmp193 = $tmp194;
        $tmp192 = $tmp193;
        $returnValue191 = $tmp192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
        $tmp135 = 0;
        goto $l133;
        $l195:;
        return $returnValue191;
    }
    $l133:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result136));
    result136 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator145));
    separator145 = NULL;
    switch ($tmp135) {
        case 0: goto $l195;
    }
    $l197:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$129_9198;
    panda$core$String* $returnValue200;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$String* $tmp204;
    panda$core$String* $tmp205;
    panda$core$Object* $tmp207;
    panda$core$String* $tmp213;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    panda$core$String* $tmp222;
    panda$core$String* $tmp223;
    panda$core$String* $tmp224;
    panda$core$Object* $tmp226;
    panda$core$String* $tmp232;
    panda$core$String* $tmp239;
    panda$core$String* $tmp240;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$core$Object* $tmp244;
    panda$core$String* $tmp250;
    {
        $match$129_9198 = self->methodKind;
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_9198.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp199.value) {
        {
            panda$core$Object* $tmp209 = (($fn208) self->owner->$class->vtable[2])(self->owner);
            $tmp207 = $tmp209;
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s206, ((org$pandalanguage$pandac$ClassDecl*) $tmp207)->name);
            $tmp205 = $tmp210;
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, &$s211);
            $tmp204 = $tmp212;
            panda$core$String* $tmp214 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp213 = $tmp214;
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, $tmp213);
            $tmp203 = $tmp215;
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s216);
            $tmp202 = $tmp217;
            $tmp201 = $tmp202;
            $returnValue200 = $tmp201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
            panda$core$Panda$unref$panda$core$Object($tmp207);
            return $returnValue200;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_9198.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp219.value) {
        {
            panda$core$Object* $tmp228 = (($fn227) self->owner->$class->vtable[2])(self->owner);
            $tmp226 = $tmp228;
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s225, ((org$pandalanguage$pandac$ClassDecl*) $tmp226)->name);
            $tmp224 = $tmp229;
            panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s230);
            $tmp223 = $tmp231;
            panda$core$String* $tmp233 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp232 = $tmp233;
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp223, $tmp232);
            $tmp222 = $tmp234;
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s235);
            $tmp221 = $tmp236;
            $tmp220 = $tmp221;
            $returnValue200 = $tmp220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
            panda$core$Panda$unref$panda$core$Object($tmp226);
            return $returnValue200;
        }
        }
        else {
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_9198.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp238.value) {
        {
            panda$core$Object* $tmp246 = (($fn245) self->owner->$class->vtable[2])(self->owner);
            $tmp244 = $tmp246;
            panda$core$String* $tmp247 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp244)->name);
            $tmp243 = $tmp247;
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s248);
            $tmp242 = $tmp249;
            panda$core$String* $tmp251 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp250 = $tmp251;
            panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, $tmp250);
            $tmp241 = $tmp252;
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s253);
            $tmp240 = $tmp254;
            $tmp239 = $tmp240;
            $returnValue200 = $tmp239;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
            panda$core$Panda$unref$panda$core$Object($tmp244);
            return $returnValue200;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue256;
    panda$core$String* $tmp257;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$String* $tmp260;
    panda$core$String* $tmp261;
    panda$core$String* $tmp262;
    panda$core$String* $tmp271;
    panda$core$String* $tmp272;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp263 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp262 = $tmp263;
        panda$core$String* $tmp264 = panda$core$String$convert$R$panda$core$String($tmp262);
        $tmp261 = $tmp264;
        panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s265);
        $tmp260 = $tmp266;
        panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp260, ((panda$core$Object*) self->body));
        $tmp259 = $tmp267;
        panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s268);
        $tmp258 = $tmp269;
        $tmp257 = $tmp258;
        $returnValue256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
        return $returnValue256;
    }
    }
    panda$core$String* $tmp273 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp272 = $tmp273;
    $tmp271 = $tmp272;
    $returnValue256 = $tmp271;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
    return $returnValue256;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp277;
    {
    }
    $tmp277 = -1;
    goto $l275;
    $l275:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp277) {
        case -1: goto $l278;
    }
    $l278:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

