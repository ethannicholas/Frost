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

typedef panda$collections$Iterator* (*$fn119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn137)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn196)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$collections$Array* $tmp21;
    panda$collections$Array* $tmp22;
    org$pandalanguage$pandac$Type* $tmp23;
    org$pandalanguage$pandac$Type* $tmp24;
    panda$collections$ImmutableArray* $tmp25;
    panda$collections$ImmutableArray* $tmp26;
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
        $tmp21 = self->parameters;
        $tmp22 = p_parameters;
        self->parameters = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
    {
        $tmp23 = self->returnType;
        $tmp24 = p_returnType;
        self->returnType = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    }
    {
        $tmp25 = self->body;
        $tmp26 = p_body;
        self->body = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    }
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue27;
    panda$core$Int64 $tmp28;
    panda$core$Int64$init$builtin_int64(&$tmp28, 2);
    panda$core$Bit $tmp29 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp28);
    $returnValue27 = $tmp29;
    return $returnValue27;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue31;
    panda$core$Int64 $tmp37;
    panda$core$Bit $tmp34 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp35 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp34);
    bool $tmp33 = $tmp35.value;
    if (!$tmp33) goto $l36;
    panda$core$Int64$init$builtin_int64(&$tmp37, 2);
    panda$core$Bit $tmp38 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp37);
    $tmp33 = $tmp38.value;
    $l36:;
    panda$core$Bit $tmp39 = { $tmp33 };
    bool $tmp32 = $tmp39.value;
    if (!$tmp32) goto $l40;
    panda$core$Bit $tmp41 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
    $tmp32 = $tmp42.value;
    $l40:;
    panda$core$Bit $tmp43 = { $tmp32 };
    $returnValue31 = $tmp43;
    return $returnValue31;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue45;
    panda$core$Bit $tmp46 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp47 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp46);
    $returnValue45 = $tmp47;
    return $returnValue45;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp53;
    panda$core$Bit $returnValue60;
    panda$core$Bit $tmp61;
    panda$core$Bit $tmp64;
    panda$core$Bit $tmp69;
    panda$core$Range$LTpanda$core$Int64$GT $tmp71;
    panda$core$Int64 $tmp72;
    panda$core$Bit $tmp74;
    panda$core$Object* $tmp88;
    panda$core$Object* $tmp90;
    panda$core$Bit $tmp93;
    panda$core$Bit $tmp101;
    panda$core$Int64$init$builtin_int64(&$tmp50, 0);
    panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->resolved.$rawValue, $tmp50);
    bool $tmp49 = $tmp51.value;
    if (!$tmp49) goto $l52;
    panda$core$Int64$init$builtin_int64(&$tmp53, 0);
    panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_other->resolved.$rawValue, $tmp53);
    $tmp49 = $tmp54.value;
    $l52:;
    panda$core$Bit $tmp55 = { $tmp49 };
    if ($tmp55.value) goto $l56; else goto $l57;
    $l57:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s58, (panda$core$Int64) { 83 });
    abort();
    $l56:;
    panda$core$Bit $tmp59 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp59.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp61, false);
        $returnValue60 = $tmp61;
        return $returnValue60;
    }
    }
    panda$core$Bit $tmp63 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp63.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp64, false);
        $returnValue60 = $tmp64;
        return $returnValue60;
    }
    }
    panda$core$Int64 $tmp66 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp67 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp68 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp66, $tmp67);
    if ($tmp68.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp69, false);
        $returnValue60 = $tmp69;
        return $returnValue60;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp72, 0);
    panda$core$Int64 $tmp73 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Bit$init$builtin_bit(&$tmp74, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp71, $tmp72, $tmp73, $tmp74);
    int64_t $tmp76 = $tmp71.min.value;
    panda$core$Int64 i75 = { $tmp76 };
    int64_t $tmp78 = $tmp71.max.value;
    bool $tmp79 = $tmp71.inclusive.value;
    if ($tmp79) goto $l86; else goto $l87;
    $l86:;
    if ($tmp76 <= $tmp78) goto $l80; else goto $l82;
    $l87:;
    if ($tmp76 < $tmp78) goto $l80; else goto $l82;
    $l80:;
    {
        panda$core$Object* $tmp89 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i75);
        $tmp88 = $tmp89;
        panda$core$Object* $tmp91 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i75);
        $tmp90 = $tmp91;
        panda$core$Bit $tmp92 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp88)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp90)->type);
        panda$core$Panda$unref$panda$core$Object($tmp90);
        panda$core$Panda$unref$panda$core$Object($tmp88);
        if ($tmp92.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp93, false);
            $returnValue60 = $tmp93;
            return $returnValue60;
        }
        }
    }
    $l83:;
    int64_t $tmp96 = $tmp78 - i75.value;
    if ($tmp79) goto $l97; else goto $l98;
    $l97:;
    if ((uint64_t) $tmp96 >= 1) goto $l95; else goto $l82;
    $l98:;
    if ((uint64_t) $tmp96 > 1) goto $l95; else goto $l82;
    $l95:;
    i75.value += 1;
    goto $l80;
    $l82:;
    panda$core$Bit$init$builtin_bit(&$tmp101, true);
    $returnValue60 = $tmp101;
    return $returnValue60;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self) {
    panda$collections$Array* paramTypes106 = NULL;
    panda$collections$Array* $tmp107;
    panda$collections$Array* $tmp108;
    panda$collections$Iterator* Iter$104$9114 = NULL;
    panda$collections$Iterator* $tmp115;
    panda$collections$Iterator* $tmp116;
    org$pandalanguage$pandac$MethodDecl$Parameter* p132 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp133;
    panda$core$Object* $tmp134;
    org$pandalanguage$pandac$Type$Kind kind141;
    panda$core$Int64 $tmp142;
    org$pandalanguage$pandac$Type$Kind $tmp144;
    panda$core$Int64 $tmp145;
    org$pandalanguage$pandac$Type$Kind $tmp146;
    panda$core$Int64 $tmp147;
    org$pandalanguage$pandac$Type* $returnValue148;
    org$pandalanguage$pandac$Type* $tmp149;
    org$pandalanguage$pandac$Type* $tmp150;
    int $tmp105;
    {
        panda$collections$Array* $tmp109 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64 $tmp110 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
        panda$collections$Array$init$panda$core$Int64($tmp109, $tmp110);
        $tmp108 = $tmp109;
        $tmp107 = $tmp108;
        paramTypes106 = $tmp107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        {
            int $tmp113;
            {
                ITable* $tmp117 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp117 = $tmp117->next;
                }
                $fn119 $tmp118 = $tmp117->methods[0];
                panda$collections$Iterator* $tmp120 = $tmp118(((panda$collections$Iterable*) self->parameters));
                $tmp116 = $tmp120;
                $tmp115 = $tmp116;
                Iter$104$9114 = $tmp115;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
                $l121:;
                ITable* $tmp124 = Iter$104$9114->$class->itable;
                while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp124 = $tmp124->next;
                }
                $fn126 $tmp125 = $tmp124->methods[0];
                panda$core$Bit $tmp127 = $tmp125(Iter$104$9114);
                panda$core$Bit $tmp128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp127);
                bool $tmp123 = $tmp128.value;
                if (!$tmp123) goto $l122;
                {
                    int $tmp131;
                    {
                        ITable* $tmp135 = Iter$104$9114->$class->itable;
                        while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp135 = $tmp135->next;
                        }
                        $fn137 $tmp136 = $tmp135->methods[1];
                        panda$core$Object* $tmp138 = $tmp136(Iter$104$9114);
                        $tmp134 = $tmp138;
                        $tmp133 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp134);
                        p132 = $tmp133;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
                        panda$core$Panda$unref$panda$core$Object($tmp134);
                        panda$collections$Array$add$panda$collections$Array$T(paramTypes106, ((panda$core$Object*) p132->type));
                    }
                    $tmp131 = -1;
                    goto $l129;
                    $l129:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p132));
                    p132 = NULL;
                    switch ($tmp131) {
                        case -1: goto $l139;
                    }
                    $l139:;
                }
                goto $l121;
                $l122:;
            }
            $tmp113 = -1;
            goto $l111;
            $l111:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$104$9114));
            Iter$104$9114 = NULL;
            switch ($tmp113) {
                case -1: goto $l140;
            }
            $l140:;
        }
        memset(&kind141, 0, sizeof(kind141));
        panda$core$Int64$init$builtin_int64(&$tmp142, 1);
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp142);
        if ($tmp143.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp145, 16);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp144, $tmp145);
            kind141 = $tmp144;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp147, 17);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp146, $tmp147);
            kind141 = $tmp146;
        }
        }
        org$pandalanguage$pandac$Type* $tmp151 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, kind141, ((panda$collections$ListView*) paramTypes106), self->returnType);
        $tmp150 = $tmp151;
        $tmp149 = $tmp150;
        $returnValue148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
        $tmp105 = 0;
        goto $l103;
        $l152:;
        return $returnValue148;
    }
    $l103:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes106));
    paramTypes106 = NULL;
    switch ($tmp105) {
        case 0: goto $l152;
    }
    $l154:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result158 = NULL;
    panda$core$MutableString* $tmp159;
    panda$core$MutableString* $tmp160;
    panda$core$String* $tmp162;
    panda$core$String* $tmp163;
    panda$core$String* separator167 = NULL;
    panda$core$String* $tmp168;
    panda$collections$Iterator* Iter$120$9173 = NULL;
    panda$collections$Iterator* $tmp174;
    panda$collections$Iterator* $tmp175;
    org$pandalanguage$pandac$MethodDecl$Parameter* p191 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp192;
    panda$core$Object* $tmp193;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$Char8 $tmp203;
    panda$core$UInt8 $tmp204;
    org$pandalanguage$pandac$Type* $tmp205;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$core$String* $returnValue214;
    panda$core$String* $tmp215;
    panda$core$String* $tmp216;
    int $tmp157;
    {
        panda$core$MutableString* $tmp161 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp164 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp163 = $tmp164;
        panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s165);
        $tmp162 = $tmp166;
        panda$core$MutableString$init$panda$core$String($tmp161, $tmp162);
        $tmp160 = $tmp161;
        $tmp159 = $tmp160;
        result158 = $tmp159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
        $tmp168 = &$s169;
        separator167 = $tmp168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
        {
            int $tmp172;
            {
                ITable* $tmp176 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp176 = $tmp176->next;
                }
                $fn178 $tmp177 = $tmp176->methods[0];
                panda$collections$Iterator* $tmp179 = $tmp177(((panda$collections$Iterable*) self->parameters));
                $tmp175 = $tmp179;
                $tmp174 = $tmp175;
                Iter$120$9173 = $tmp174;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
                $l180:;
                ITable* $tmp183 = Iter$120$9173->$class->itable;
                while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp183 = $tmp183->next;
                }
                $fn185 $tmp184 = $tmp183->methods[0];
                panda$core$Bit $tmp186 = $tmp184(Iter$120$9173);
                panda$core$Bit $tmp187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp186);
                bool $tmp182 = $tmp187.value;
                if (!$tmp182) goto $l181;
                {
                    int $tmp190;
                    {
                        ITable* $tmp194 = Iter$120$9173->$class->itable;
                        while ($tmp194->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp194 = $tmp194->next;
                        }
                        $fn196 $tmp195 = $tmp194->methods[1];
                        panda$core$Object* $tmp197 = $tmp195(Iter$120$9173);
                        $tmp193 = $tmp197;
                        $tmp192 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp193);
                        p191 = $tmp192;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
                        panda$core$Panda$unref$panda$core$Object($tmp193);
                        panda$core$MutableString$append$panda$core$String(result158, separator167);
                        panda$core$MutableString$append$panda$core$Object(result158, ((panda$core$Object*) p191));
                        {
                            $tmp198 = separator167;
                            $tmp199 = &$s200;
                            separator167 = $tmp199;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                        }
                    }
                    $tmp190 = -1;
                    goto $l188;
                    $l188:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p191));
                    p191 = NULL;
                    switch ($tmp190) {
                        case -1: goto $l201;
                    }
                    $l201:;
                }
                goto $l180;
                $l181:;
            }
            $tmp172 = -1;
            goto $l170;
            $l170:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$120$9173));
            Iter$120$9173 = NULL;
            switch ($tmp172) {
                case -1: goto $l202;
            }
            $l202:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp204, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp203, $tmp204);
        panda$core$MutableString$append$panda$core$Char8(result158, $tmp203);
        org$pandalanguage$pandac$Type* $tmp206 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp205 = $tmp206;
        panda$core$Bit $tmp207 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp205);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
        if ($tmp207.value) {
        {
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s210, ((panda$core$Object*) self->returnType));
            $tmp209 = $tmp211;
            panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s212);
            $tmp208 = $tmp213;
            panda$core$MutableString$append$panda$core$String(result158, $tmp208);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        }
        }
        panda$core$String* $tmp217 = panda$core$MutableString$finish$R$panda$core$String(result158);
        $tmp216 = $tmp217;
        $tmp215 = $tmp216;
        $returnValue214 = $tmp215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        $tmp157 = 0;
        goto $l155;
        $l218:;
        return $returnValue214;
    }
    $l155:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator167));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result158));
    result158 = NULL;
    separator167 = NULL;
    switch ($tmp157) {
        case 0: goto $l218;
    }
    $l220:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$133_9221;
    panda$core$Int64 $tmp222;
    panda$core$String* $returnValue224;
    panda$core$String* $tmp225;
    panda$core$String* $tmp226;
    panda$core$String* $tmp227;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$core$Object* $tmp231;
    panda$core$String* $tmp236;
    panda$core$Int64 $tmp242;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
    panda$core$Object* $tmp250;
    panda$core$String* $tmp255;
    panda$core$Int64 $tmp261;
    panda$core$String* $tmp263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$Object* $tmp268;
    panda$core$String* $tmp273;
    {
        $match$133_9221 = self->methodKind;
        panda$core$Int64$init$builtin_int64(&$tmp222, 0);
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9221.$rawValue, $tmp222);
        if ($tmp223.value) {
        {
            panda$core$Object* $tmp232 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp231 = $tmp232;
            panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s230, ((org$pandalanguage$pandac$ClassDecl*) $tmp231)->name);
            $tmp229 = $tmp233;
            panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s234);
            $tmp228 = $tmp235;
            panda$core$String* $tmp237 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp236 = $tmp237;
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, $tmp236);
            $tmp227 = $tmp238;
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s239);
            $tmp226 = $tmp240;
            $tmp225 = $tmp226;
            $returnValue224 = $tmp225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
            panda$core$Panda$unref$panda$core$Object($tmp231);
            return $returnValue224;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp242, 1);
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9221.$rawValue, $tmp242);
        if ($tmp243.value) {
        {
            panda$core$Object* $tmp251 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp250 = $tmp251;
            panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s249, ((org$pandalanguage$pandac$ClassDecl*) $tmp250)->name);
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
            $returnValue224 = $tmp244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
            panda$core$Panda$unref$panda$core$Object($tmp250);
            return $returnValue224;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp261, 2);
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9221.$rawValue, $tmp261);
        if ($tmp262.value) {
        {
            panda$core$Object* $tmp269 = panda$core$Weak$get$R$panda$core$Weak$T(self->owner);
            $tmp268 = $tmp269;
            panda$core$String* $tmp270 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp268)->name);
            $tmp267 = $tmp270;
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s271);
            $tmp266 = $tmp272;
            panda$core$String* $tmp274 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp273 = $tmp274;
            panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, $tmp273);
            $tmp265 = $tmp275;
            panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s276);
            $tmp264 = $tmp277;
            $tmp263 = $tmp264;
            $returnValue224 = $tmp263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
            panda$core$Panda$unref$panda$core$Object($tmp268);
            return $returnValue224;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue279;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp283;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285;
    panda$core$String* $tmp294;
    panda$core$String* $tmp295;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp286 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp285 = $tmp286;
        panda$core$String* $tmp287 = panda$core$String$convert$R$panda$core$String($tmp285);
        $tmp284 = $tmp287;
        panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s288);
        $tmp283 = $tmp289;
        panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp283, ((panda$core$Object*) self->body));
        $tmp282 = $tmp290;
        panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s291);
        $tmp281 = $tmp292;
        $tmp280 = $tmp281;
        $returnValue279 = $tmp280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
        return $returnValue279;
    }
    }
    panda$core$String* $tmp296 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp295 = $tmp296;
    $tmp294 = $tmp295;
    $returnValue279 = $tmp294;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
    return $returnValue279;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp300;
    {
    }
    $tmp300 = -1;
    goto $l298;
    $l298:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp300) {
        case -1: goto $l301;
    }
    $l301:;
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

