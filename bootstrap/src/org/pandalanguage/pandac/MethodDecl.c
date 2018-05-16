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
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn159)(panda$core$Weak*);
typedef panda$core$Object* (*$fn179)(panda$core$Weak*);
typedef panda$core$Object* (*$fn198)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$Weak* $tmp6;
    panda$core$Weak* $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    org$pandalanguage$pandac$Annotations* $tmp12;
    org$pandalanguage$pandac$Annotations* $tmp13;
    panda$collections$Array* $tmp14;
    panda$collections$Array* $tmp15;
    org$pandalanguage$pandac$Type* $tmp16;
    org$pandalanguage$pandac$Type* $tmp17;
    panda$collections$ImmutableArray* $tmp18;
    panda$collections$ImmutableArray* $tmp19;
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
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        $tmp6 = self->owner;
        panda$core$Weak* $tmp9 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp9, ((panda$core$Object*) p_owner));
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        self->owner = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        $tmp10 = self->doccomment;
        $tmp11 = p_doccomment;
        self->doccomment = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->annotations;
        $tmp13 = p_annotations;
        self->annotations = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    self->methodKind = p_methodKind;
    {
        $tmp14 = self->parameters;
        $tmp15 = p_parameters;
        self->parameters = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    {
        $tmp16 = self->returnType;
        $tmp17 = p_returnType;
        self->returnType = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    {
        $tmp18 = self->body;
        $tmp19 = p_body;
        self->body = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn19;
    panda$core$Bit $tmp21 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $finallyReturn19 = $tmp21;
    return $finallyReturn19;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn22;
    panda$core$Bit $tmp26 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
    bool $tmp25 = $tmp27.value;
    if (!$tmp25) goto $l28;
    panda$core$Bit $tmp29 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp25 = $tmp29.value;
    $l28:;
    panda$core$Bit $tmp30 = { $tmp25 };
    bool $tmp24 = $tmp30.value;
    if (!$tmp24) goto $l31;
    panda$core$Bit $tmp32 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp33 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp32);
    $tmp24 = $tmp33.value;
    $l31:;
    panda$core$Bit $tmp34 = { $tmp24 };
    $finallyReturn22 = $tmp34;
    return $finallyReturn22;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn35;
    panda$core$Bit $tmp37 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
    $finallyReturn35 = $tmp38;
    return $finallyReturn35;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $finallyReturn43;
    panda$core$Bit $finallyReturn46;
    panda$core$Bit $finallyReturn51;
    panda$core$Range$LTpanda$core$Int64$GT $tmp54;
    panda$core$Object* $tmp69;
    panda$core$Object* $tmp71;
    panda$core$Bit $finallyReturn73;
    panda$core$Bit $finallyReturn81;
    bool $tmp40 = self->resolved.value;
    if (!$tmp40) goto $l41;
    $tmp40 = p_other->resolved.value;
    $l41:;
    panda$core$Bit $tmp42 = { $tmp40 };
    PANDA_ASSERT($tmp42.value);
    panda$core$Bit $tmp43 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp43.value) {
    {
        $finallyReturn43 = ((panda$core$Bit) { false });
        return $finallyReturn43;
    }
    }
    panda$core$Bit $tmp46 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp46.value) {
    {
        $finallyReturn46 = ((panda$core$Bit) { false });
        return $finallyReturn46;
    }
    }
    panda$core$Int64 $tmp49 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp50 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp49, $tmp50);
    if ($tmp51.value) {
    {
        $finallyReturn51 = ((panda$core$Bit) { false });
        return $finallyReturn51;
    }
    }
    panda$core$Int64 $tmp55 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp54, ((panda$core$Int64) { 0 }), $tmp55, ((panda$core$Bit) { false }));
    int64_t $tmp57 = $tmp54.min.value;
    panda$core$Int64 i56 = { $tmp57 };
    int64_t $tmp59 = $tmp54.max.value;
    bool $tmp60 = $tmp54.inclusive.value;
    if ($tmp60) goto $l67; else goto $l68;
    $l67:;
    if ($tmp57 <= $tmp59) goto $l61; else goto $l63;
    $l68:;
    if ($tmp57 < $tmp59) goto $l61; else goto $l63;
    $l61:;
    {
        panda$core$Object* $tmp70 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i56);
        $tmp69 = $tmp70;
        panda$core$Object* $tmp72 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i56);
        $tmp71 = $tmp72;
        panda$core$Bit $tmp73 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp69)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp71)->type);
        panda$core$Panda$unref$panda$core$Object($tmp71);
        panda$core$Panda$unref$panda$core$Object($tmp69);
        if ($tmp73.value) {
        {
            $finallyReturn73 = ((panda$core$Bit) { false });
            return $finallyReturn73;
        }
        }
    }
    $l64:;
    int64_t $tmp77 = $tmp59 - i56.value;
    if ($tmp60) goto $l78; else goto $l79;
    $l78:;
    if ((uint64_t) $tmp77 >= 1) goto $l76; else goto $l63;
    $l79:;
    if ((uint64_t) $tmp77 > 1) goto $l76; else goto $l63;
    $l76:;
    i56.value += 1;
    goto $l61;
    $l63:;
    $finallyReturn81 = ((panda$core$Bit) { true });
    return $finallyReturn81;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result87 = NULL;
    panda$core$MutableString* $tmp88;
    panda$core$MutableString* $tmp89;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    panda$core$String* separator96 = NULL;
    panda$core$String* $tmp97;
    panda$collections$Iterator* Iter$101$9102 = NULL;
    panda$collections$Iterator* $tmp103;
    panda$collections$Iterator* $tmp104;
    org$pandalanguage$pandac$MethodDecl$Parameter* p120 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp121;
    panda$core$Object* $tmp122;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$Char8 $tmp132;
    org$pandalanguage$pandac$Type* $tmp133;
    panda$core$String* $tmp136;
    panda$core$String* $tmp137;
    panda$core$String* $finallyReturn141;
    panda$core$String* $tmp143;
    panda$core$String* $tmp144;
    int $tmp86;
    {
        panda$core$MutableString* $tmp90 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp93 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp92 = $tmp93;
        panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s94);
        $tmp91 = $tmp95;
        panda$core$MutableString$init$panda$core$String($tmp90, $tmp91);
        $tmp89 = $tmp90;
        $tmp88 = $tmp89;
        result87 = $tmp88;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
        $tmp97 = &$s98;
        separator96 = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        {
            int $tmp101;
            {
                ITable* $tmp105 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp105 = $tmp105->next;
                }
                $fn107 $tmp106 = $tmp105->methods[0];
                panda$collections$Iterator* $tmp108 = $tmp106(((panda$collections$Iterable*) self->parameters));
                $tmp104 = $tmp108;
                $tmp103 = $tmp104;
                Iter$101$9102 = $tmp103;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
                $l109:;
                ITable* $tmp112 = Iter$101$9102->$class->itable;
                while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp112 = $tmp112->next;
                }
                $fn114 $tmp113 = $tmp112->methods[0];
                panda$core$Bit $tmp115 = $tmp113(Iter$101$9102);
                panda$core$Bit $tmp116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp115);
                bool $tmp111 = $tmp116.value;
                if (!$tmp111) goto $l110;
                {
                    int $tmp119;
                    {
                        ITable* $tmp123 = Iter$101$9102->$class->itable;
                        while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp123 = $tmp123->next;
                        }
                        $fn125 $tmp124 = $tmp123->methods[1];
                        panda$core$Object* $tmp126 = $tmp124(Iter$101$9102);
                        $tmp122 = $tmp126;
                        $tmp121 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp122);
                        p120 = $tmp121;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                        panda$core$Panda$unref$panda$core$Object($tmp122);
                        panda$core$MutableString$append$panda$core$String(result87, separator96);
                        panda$core$MutableString$append$panda$core$Object(result87, ((panda$core$Object*) p120));
                        {
                            $tmp127 = separator96;
                            $tmp128 = &$s129;
                            separator96 = $tmp128;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                        }
                    }
                    $tmp119 = -1;
                    goto $l117;
                    $l117:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p120));
                    p120 = NULL;
                    switch ($tmp119) {
                        case -1: goto $l130;
                    }
                    $l130:;
                }
                goto $l109;
                $l110:;
            }
            $tmp101 = -1;
            goto $l99;
            $l99:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9102));
            Iter$101$9102 = NULL;
            switch ($tmp101) {
                case -1: goto $l131;
            }
            $l131:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp132, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result87, $tmp132);
        org$pandalanguage$pandac$Type* $tmp134 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp133 = $tmp134;
        panda$core$Bit $tmp135 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp133);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
        if ($tmp135.value) {
        {
            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s138, ((panda$core$Object*) self->returnType));
            $tmp137 = $tmp139;
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s140);
            $tmp136 = $tmp141;
            panda$core$MutableString$append$panda$core$String(result87, $tmp136);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        }
        }
        panda$core$String* $tmp145 = panda$core$MutableString$finish$R$panda$core$String(result87);
        $tmp144 = $tmp145;
        $tmp143 = $tmp144;
        $finallyReturn141 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
        $tmp86 = 0;
        goto $l84;
        $l146:;
        return $finallyReturn141;
    }
    $l84:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result87));
    result87 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator96));
    separator96 = NULL;
    switch ($tmp86) {
        case 0: goto $l146;
    }
    $l148:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$114_9149;
    panda$core$String* $finallyReturn150;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    panda$core$String* $tmp156;
    panda$core$Object* $tmp158;
    panda$core$String* $tmp164;
    panda$core$String* $finallyReturn170;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$Object* $tmp178;
    panda$core$String* $tmp184;
    panda$core$String* $finallyReturn190;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$Object* $tmp197;
    panda$core$String* $tmp203;
    {
        $match$114_9149 = self->methodKind;
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_9149.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp150.value) {
        {
            panda$core$Object* $tmp160 = (($fn159) self->owner->$class->vtable[2])(self->owner);
            $tmp158 = $tmp160;
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s157, ((org$pandalanguage$pandac$ClassDecl*) $tmp158)->name);
            $tmp156 = $tmp161;
            panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s162);
            $tmp155 = $tmp163;
            panda$core$String* $tmp165 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp164 = $tmp165;
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, $tmp164);
            $tmp154 = $tmp166;
            panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, &$s167);
            $tmp153 = $tmp168;
            $tmp152 = $tmp153;
            $finallyReturn150 = $tmp152;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
            panda$core$Panda$unref$panda$core$Object($tmp158);
            return $finallyReturn150;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_9149.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp170.value) {
        {
            panda$core$Object* $tmp180 = (($fn179) self->owner->$class->vtable[2])(self->owner);
            $tmp178 = $tmp180;
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, ((org$pandalanguage$pandac$ClassDecl*) $tmp178)->name);
            $tmp176 = $tmp181;
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s182);
            $tmp175 = $tmp183;
            panda$core$String* $tmp185 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp184 = $tmp185;
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, $tmp184);
            $tmp174 = $tmp186;
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s187);
            $tmp173 = $tmp188;
            $tmp172 = $tmp173;
            $finallyReturn170 = $tmp172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
            panda$core$Panda$unref$panda$core$Object($tmp178);
            return $finallyReturn170;
        }
        }
        else {
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_9149.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp190.value) {
        {
            panda$core$Object* $tmp199 = (($fn198) self->owner->$class->vtable[2])(self->owner);
            $tmp197 = $tmp199;
            panda$core$String* $tmp200 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp197)->name);
            $tmp196 = $tmp200;
            panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s201);
            $tmp195 = $tmp202;
            panda$core$String* $tmp204 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp203 = $tmp204;
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, $tmp203);
            $tmp194 = $tmp205;
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s206);
            $tmp193 = $tmp207;
            $tmp192 = $tmp193;
            $finallyReturn190 = $tmp192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
            panda$core$Panda$unref$panda$core$Object($tmp197);
            return $finallyReturn190;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $finallyReturn208;
    panda$core$String* $tmp210;
    panda$core$String* $tmp211;
    panda$core$String* $tmp212;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    panda$core$String* $finallyReturn223;
    panda$core$String* $tmp225;
    panda$core$String* $tmp226;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp216 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp215 = $tmp216;
        panda$core$String* $tmp217 = panda$core$String$convert$R$panda$core$String($tmp215);
        $tmp214 = $tmp217;
        panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s218);
        $tmp213 = $tmp219;
        panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp213, ((panda$core$Object*) self->body));
        $tmp212 = $tmp220;
        panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s221);
        $tmp211 = $tmp222;
        $tmp210 = $tmp211;
        $finallyReturn208 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
        return $finallyReturn208;
    }
    }
    panda$core$String* $tmp227 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp226 = $tmp227;
    $tmp225 = $tmp226;
    $finallyReturn223 = $tmp225;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
    return $finallyReturn223;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp231;
    {
    }
    $tmp231 = -1;
    goto $l229;
    $l229:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp231) {
        case -1: goto $l232;
    }
    $l232:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

