#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableMethod.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"

static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type} };

typedef org$pandalanguage$pandac$Type* (*$fn32)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn66)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn84)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn91)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$Int64 (*$fn96)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn122)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn129)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$Int64 (*$fn137)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn236)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn243)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn254)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn276)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn289)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 13, 1305644035312173124, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x68\x61\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x61\x72\x67\x65\x74\x20", 20, 7486630063313712255, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodDecl* p_value) {
    panda$core$Int64 $tmp8;
    org$pandalanguage$pandac$MethodDecl* $tmp13;
    org$pandalanguage$pandac$MethodDecl* $tmp14;
    org$pandalanguage$pandac$IRNode* $tmp15;
    org$pandalanguage$pandac$IRNode* $tmp16;
    org$pandalanguage$pandac$Type* targetType17 = NULL;
    org$pandalanguage$pandac$IRNode* $match$31_921 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp22;
    panda$core$Int64 $tmp23;
    org$pandalanguage$pandac$Type* type25 = NULL;
    org$pandalanguage$pandac$Type* $tmp27;
    org$pandalanguage$pandac$Type* $tmp28;
    org$pandalanguage$pandac$Type* $tmp29;
    org$pandalanguage$pandac$Type* $tmp30;
    org$pandalanguage$pandac$Type* $tmp31;
    org$pandalanguage$pandac$Type* $tmp37;
    org$pandalanguage$pandac$Type* $tmp38;
    org$pandalanguage$pandac$Type* $tmp39;
    panda$core$Object* $tmp40;
    panda$core$String* $tmp46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $tmp49;
    panda$core$Object* $tmp51;
    org$pandalanguage$pandac$Type* $tmp59;
    org$pandalanguage$pandac$Type* $tmp60;
    org$pandalanguage$pandac$Type* $tmp61;
    org$pandalanguage$pandac$Type* $tmp62;
    org$pandalanguage$pandac$Type* $tmp65;
    org$pandalanguage$pandac$Type$Kind kind70;
    panda$core$Int64 $tmp71;
    org$pandalanguage$pandac$Type$Kind $tmp73;
    panda$core$Int64 $tmp74;
    org$pandalanguage$pandac$Type$Kind $tmp75;
    panda$core$Int64 $tmp76;
    org$pandalanguage$pandac$Type* $tmp77;
    org$pandalanguage$pandac$Type* $tmp78;
    org$pandalanguage$pandac$Type* $tmp79;
    panda$collections$ListView* $tmp80;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp81;
    panda$core$Int64 $tmp86;
    panda$core$Bit $tmp88;
    panda$core$Object* $tmp93;
    panda$core$Int64 $tmp98;
    org$pandalanguage$pandac$IRNode* $match$53_13105 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp106;
    panda$core$Int64 $tmp107;
    org$pandalanguage$pandac$Type* type109 = NULL;
    panda$collections$Array* params114 = NULL;
    panda$collections$Array* $tmp115;
    panda$collections$Array* $tmp116;
    panda$collections$ListView* $tmp118;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp119;
    panda$core$Int64 $tmp124;
    panda$core$Bit $tmp126;
    org$pandalanguage$pandac$Type* $tmp131;
    org$pandalanguage$pandac$Type* $tmp132;
    org$pandalanguage$pandac$Type* $tmp133;
    panda$core$Object* $tmp134;
    panda$core$Int64 $tmp139;
    org$pandalanguage$pandac$IRNode* $match$63_13148 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp149;
    panda$core$Int64 $tmp150;
    org$pandalanguage$pandac$Type* type152 = NULL;
    org$pandalanguage$pandac$Type* $tmp154;
    org$pandalanguage$pandac$Type* $tmp155;
    org$pandalanguage$pandac$Type* $tmp156;
    org$pandalanguage$pandac$Type* $tmp157;
    org$pandalanguage$pandac$Type* $tmp158;
    org$pandalanguage$pandac$Type* $tmp159;
    panda$core$Bit $tmp162;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp179;
    panda$core$String* $tmp180;
    self->value = NULL;
    self->target = NULL;
    self->owner = NULL;
    self->effectiveType = NULL;
    int $tmp4;
    {
        if (((panda$core$Bit) { p_target != NULL }).value) goto $l5; else goto $l6;
        $l6:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s7, (panda$core$Int64) { 26 });
        abort();
        $l5:;
        panda$core$Int64$init$builtin_int64(&$tmp8, 0);
        panda$core$Bit $tmp9 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_value->resolved.$rawValue, $tmp8);
        if ($tmp9.value) goto $l10; else goto $l11;
        $l11:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s12, (panda$core$Int64) { 27 });
        abort();
        $l10:;
        {
            $tmp13 = self->value;
            $tmp14 = p_value;
            self->value = $tmp14;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
        }
        {
            $tmp15 = self->target;
            $tmp16 = p_target;
            self->target = $tmp16;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
        }
        memset(&targetType17, 0, sizeof(targetType17));
        int $tmp20;
        {
            $tmp22 = p_target;
            $match$31_921 = $tmp22;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
            panda$core$Int64$init$builtin_int64(&$tmp23, 39);
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31_921->$rawValue, $tmp23);
            if ($tmp24.value) {
            {
                org$pandalanguage$pandac$Type** $tmp26 = ((org$pandalanguage$pandac$Type**) ((char*) $match$31_921->$data + 16));
                type25 = *$tmp26;
                {
                    $tmp27 = targetType17;
                    $tmp28 = type25;
                    targetType17 = $tmp28;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
                }
            }
            }
            else {
            {
                {
                    $tmp29 = targetType17;
                    org$pandalanguage$pandac$Type* $tmp33 = (($fn32) p_target->$class->vtable[2])(p_target);
                    $tmp31 = $tmp33;
                    $tmp30 = $tmp31;
                    targetType17 = $tmp30;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
                }
            }
            }
        }
        $tmp20 = -1;
        goto $l18;
        $l18:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
        switch ($tmp20) {
            case -1: goto $l34;
        }
        $l34:;
        panda$core$Bit $tmp35 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_value->annotations);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if ($tmp36.value) {
        {
            {
                $tmp37 = self->owner;
                panda$core$Object* $tmp41 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
                $tmp40 = $tmp41;
                org$pandalanguage$pandac$Type* $tmp42 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, targetType17, ((org$pandalanguage$pandac$ClassDecl*) $tmp40));
                $tmp39 = $tmp42;
                $tmp38 = $tmp39;
                self->owner = $tmp38;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
                panda$core$Panda$unref$panda$core$Object($tmp40);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            }
            if (((panda$core$Bit) { self->owner != NULL }).value) goto $l43; else goto $l44;
            $l44:;
            panda$core$Object* $tmp52 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
            $tmp51 = $tmp52;
            panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s50, ((org$pandalanguage$pandac$ClassDecl*) $tmp51)->name);
            $tmp49 = $tmp53;
            panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s54);
            $tmp48 = $tmp55;
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp48, ((panda$core$Object*) targetType17));
            $tmp47 = $tmp56;
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s57);
            $tmp46 = $tmp58;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s45, (panda$core$Int64) { 39 }, $tmp46);
            abort();
            $l43:;
            {
                $tmp59 = self->effectiveType;
                org$pandalanguage$pandac$Type* $tmp63 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(p_value);
                $tmp62 = $tmp63;
                org$pandalanguage$pandac$Type* $tmp64 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self->owner, $tmp62);
                $tmp61 = $tmp64;
                $tmp60 = $tmp61;
                self->effectiveType = $tmp60;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
            }
            org$pandalanguage$pandac$Type* $tmp67 = (($fn66) p_target->$class->vtable[2])(p_target);
            $tmp65 = $tmp67;
            panda$core$Bit $tmp68 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_compiler, $tmp65);
            panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
            if ($tmp69.value) {
            {
                memset(&kind70, 0, sizeof(kind70));
                panda$core$Int64$init$builtin_int64(&$tmp71, 16);
                panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->effectiveType->typeKind.$rawValue, $tmp71);
                if ($tmp72.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp74, 14);
                    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp73, $tmp74);
                    kind70 = $tmp73;
                }
                }
                else {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp76, 15);
                    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp75, $tmp76);
                    kind70 = $tmp75;
                }
                }
                {
                    $tmp77 = self->effectiveType;
                    ITable* $tmp82 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                    while ($tmp82->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp82 = $tmp82->next;
                    }
                    $fn84 $tmp83 = $tmp82->methods[0];
                    panda$core$Int64 $tmp85 = $tmp83(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp86, 1);
                    panda$core$Int64 $tmp87 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp85, $tmp86);
                    panda$core$Bit$init$builtin_bit(&$tmp88, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp81, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp87, true }), $tmp88);
                    ITable* $tmp89 = ((panda$collections$ListView*) self->effectiveType->subtypes)->$class->itable;
                    while ($tmp89->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp89 = $tmp89->next;
                    }
                    $fn91 $tmp90 = $tmp89->methods[2];
                    panda$collections$ListView* $tmp92 = $tmp90(((panda$collections$ListView*) self->effectiveType->subtypes), $tmp81);
                    $tmp80 = $tmp92;
                    ITable* $tmp94 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                    while ($tmp94->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp94 = $tmp94->next;
                    }
                    $fn96 $tmp95 = $tmp94->methods[0];
                    panda$core$Int64 $tmp97 = $tmp95(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp98, 1);
                    panda$core$Int64 $tmp99 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp97, $tmp98);
                    panda$core$Object* $tmp100 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp99);
                    $tmp93 = $tmp100;
                    org$pandalanguage$pandac$Type* $tmp101 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) p_value)->position, kind70, $tmp80, ((org$pandalanguage$pandac$Type*) $tmp93));
                    $tmp79 = $tmp101;
                    $tmp78 = $tmp79;
                    self->effectiveType = $tmp78;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
                    panda$core$Panda$unref$panda$core$Object($tmp93);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
                }
            }
            }
            int $tmp104;
            {
                $tmp106 = p_target;
                $match$53_13105 = $tmp106;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
                panda$core$Int64$init$builtin_int64(&$tmp107, 39);
                panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$53_13105->$rawValue, $tmp107);
                if ($tmp108.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp110 = ((org$pandalanguage$pandac$Type**) ((char*) $match$53_13105->$data + 16));
                    type109 = *$tmp110;
                    int $tmp113;
                    {
                        panda$collections$Array* $tmp117 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp117);
                        $tmp116 = $tmp117;
                        $tmp115 = $tmp116;
                        params114 = $tmp115;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
                        panda$collections$Array$add$panda$collections$Array$T(params114, ((panda$core$Object*) self->owner));
                        ITable* $tmp120 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                        while ($tmp120->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp120 = $tmp120->next;
                        }
                        $fn122 $tmp121 = $tmp120->methods[0];
                        panda$core$Int64 $tmp123 = $tmp121(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                        panda$core$Int64$init$builtin_int64(&$tmp124, 1);
                        panda$core$Int64 $tmp125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp123, $tmp124);
                        panda$core$Bit$init$builtin_bit(&$tmp126, false);
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp119, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp125, true }), $tmp126);
                        ITable* $tmp127 = ((panda$collections$ListView*) self->effectiveType->subtypes)->$class->itable;
                        while ($tmp127->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp127 = $tmp127->next;
                        }
                        $fn129 $tmp128 = $tmp127->methods[2];
                        panda$collections$ListView* $tmp130 = $tmp128(((panda$collections$ListView*) self->effectiveType->subtypes), $tmp119);
                        $tmp118 = $tmp130;
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(params114, ((panda$collections$CollectionView*) $tmp118));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
                        {
                            $tmp131 = self->effectiveType;
                            ITable* $tmp135 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                            while ($tmp135->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                $tmp135 = $tmp135->next;
                            }
                            $fn137 $tmp136 = $tmp135->methods[0];
                            panda$core$Int64 $tmp138 = $tmp136(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                            panda$core$Int64$init$builtin_int64(&$tmp139, 1);
                            panda$core$Int64 $tmp140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp138, $tmp139);
                            panda$core$Object* $tmp141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp140);
                            $tmp134 = $tmp141;
                            org$pandalanguage$pandac$Type* $tmp142 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) self->effectiveType)->position, self->effectiveType->typeKind, ((panda$collections$ListView*) params114), ((org$pandalanguage$pandac$Type*) $tmp134));
                            $tmp133 = $tmp142;
                            $tmp132 = $tmp133;
                            self->effectiveType = $tmp132;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
                            panda$core$Panda$unref$panda$core$Object($tmp134);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                        }
                    }
                    $tmp113 = -1;
                    goto $l111;
                    $l111:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params114));
                    params114 = NULL;
                    switch ($tmp113) {
                        case -1: goto $l143;
                    }
                    $l143:;
                }
                }
            }
            $tmp104 = -1;
            goto $l102;
            $l102:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            switch ($tmp104) {
                case -1: goto $l144;
            }
            $l144:;
        }
        }
        else {
        {
            int $tmp147;
            {
                $tmp149 = p_target;
                $match$63_13148 = $tmp149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                panda$core$Int64$init$builtin_int64(&$tmp150, 39);
                panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_13148->$rawValue, $tmp150);
                if ($tmp151.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp153 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_13148->$data + 16));
                    type152 = *$tmp153;
                    {
                        $tmp154 = self->owner;
                        $tmp155 = type152;
                        self->owner = $tmp155;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                    }
                    {
                        $tmp156 = self->effectiveType;
                        org$pandalanguage$pandac$Type* $tmp160 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(p_value);
                        $tmp159 = $tmp160;
                        org$pandalanguage$pandac$Type* $tmp161 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self->owner, $tmp159);
                        $tmp158 = $tmp161;
                        $tmp157 = $tmp158;
                        self->effectiveType = $tmp157;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp162, false);
                    if ($tmp162.value) goto $l163; else goto $l164;
                    $l164:;
                    panda$core$String* $tmp172 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_value);
                    $tmp171 = $tmp172;
                    panda$core$String* $tmp173 = panda$core$String$convert$R$panda$core$String($tmp171);
                    $tmp170 = $tmp173;
                    panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s174);
                    $tmp169 = $tmp175;
                    panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp169, ((panda$core$Object*) p_target));
                    $tmp168 = $tmp176;
                    panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s177);
                    $tmp167 = $tmp178;
                    panda$core$MutableMethod* $tmp182 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp182, (panda$core$Int8*) &org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s181, ((panda$core$Object*) ((panda$core$Object*) $tmp182)));
                    $tmp180 = $tmp183;
                    panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, &$s184);
                    $tmp179 = $tmp185;
                    panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, $tmp179);
                    $tmp166 = $tmp186;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s165, (panda$core$Int64) { 68 }, $tmp166);
                    abort();
                    $l163:;
                }
                }
            }
            $tmp147 = -1;
            goto $l145;
            $l145:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
            switch ($tmp147) {
                case -1: goto $l187;
            }
            $l187:;
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetType17));
    switch ($tmp4) {
        case -1: goto $l188;
    }
    $l188:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_start, org$pandalanguage$pandac$ClassDecl* p_target) {
    panda$core$Int64 $tmp192;
    org$pandalanguage$pandac$Type* $returnValue194;
    org$pandalanguage$pandac$Type* $tmp195;
    org$pandalanguage$pandac$Type* $tmp196;
    panda$core$Object* $tmp197;
    org$pandalanguage$pandac$ClassDecl* startClass202 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp203;
    org$pandalanguage$pandac$ClassDecl* $tmp204;
    org$pandalanguage$pandac$Type* $tmp206;
    org$pandalanguage$pandac$Type* $tmp209;
    org$pandalanguage$pandac$Type* $tmp210;
    org$pandalanguage$pandac$Type* result217 = NULL;
    org$pandalanguage$pandac$Type* $tmp218;
    org$pandalanguage$pandac$Type* $tmp219;
    org$pandalanguage$pandac$Type* $tmp220;
    org$pandalanguage$pandac$Type* $tmp223;
    panda$collections$Iterator* Iter$97$9231 = NULL;
    panda$collections$Iterator* $tmp232;
    panda$collections$Iterator* $tmp233;
    org$pandalanguage$pandac$Type* intf249 = NULL;
    org$pandalanguage$pandac$Type* $tmp250;
    panda$core$Object* $tmp251;
    org$pandalanguage$pandac$Type* result256 = NULL;
    org$pandalanguage$pandac$Type* $tmp257;
    org$pandalanguage$pandac$Type* $tmp258;
    org$pandalanguage$pandac$Type* $tmp259;
    org$pandalanguage$pandac$Type* $tmp262;
    org$pandalanguage$pandac$Type* $tmp269;
    int $tmp191;
    {
        panda$core$Int64$init$builtin_int64(&$tmp192, 12);
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_start->typeKind.$rawValue, $tmp192);
        if ($tmp193.value) {
        {
            panda$core$Object* $tmp198 = panda$core$Weak$get$R$panda$core$Weak$T(p_start->parameter);
            $tmp197 = $tmp198;
            org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp197)->bound, p_target);
            $tmp196 = $tmp199;
            $tmp195 = $tmp196;
            $returnValue194 = $tmp195;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
            panda$core$Panda$unref$panda$core$Object($tmp197);
            $tmp191 = 0;
            goto $l189;
            $l200:;
            return $returnValue194;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp205 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, p_start);
        $tmp204 = $tmp205;
        $tmp203 = $tmp204;
        startClass202 = $tmp203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
        if (((panda$core$Bit) { startClass202 == NULL }).value) {
        {
            $tmp206 = NULL;
            $returnValue194 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            $tmp191 = 1;
            goto $l189;
            $l207:;
            return $returnValue194;
        }
        }
        if (((panda$core$Bit) { ((panda$core$Object*) startClass202) == ((panda$core$Object*) p_target) }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp211 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_start);
            $tmp210 = $tmp211;
            $tmp209 = $tmp210;
            $returnValue194 = $tmp209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            $tmp191 = 2;
            goto $l189;
            $l212:;
            return $returnValue194;
        }
        }
        if (((panda$core$Bit) { startClass202->rawSuper != NULL }).value) {
        {
            int $tmp216;
            {
                org$pandalanguage$pandac$Type* $tmp221 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_start, startClass202->rawSuper);
                $tmp220 = $tmp221;
                org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, $tmp220, p_target);
                $tmp219 = $tmp222;
                $tmp218 = $tmp219;
                result217 = $tmp218;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                if (((panda$core$Bit) { result217 != NULL }).value) {
                {
                    $tmp223 = result217;
                    $returnValue194 = $tmp223;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                    $tmp216 = 0;
                    goto $l214;
                    $l224:;
                    $tmp191 = 3;
                    goto $l189;
                    $l225:;
                    return $returnValue194;
                }
                }
            }
            $tmp216 = -1;
            goto $l214;
            $l214:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result217));
            result217 = NULL;
            switch ($tmp216) {
                case -1: goto $l227;
                case 0: goto $l224;
            }
            $l227:;
        }
        }
        {
            int $tmp230;
            {
                ITable* $tmp234 = ((panda$collections$Iterable*) startClass202->rawInterfaces)->$class->itable;
                while ($tmp234->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp234 = $tmp234->next;
                }
                $fn236 $tmp235 = $tmp234->methods[0];
                panda$collections$Iterator* $tmp237 = $tmp235(((panda$collections$Iterable*) startClass202->rawInterfaces));
                $tmp233 = $tmp237;
                $tmp232 = $tmp233;
                Iter$97$9231 = $tmp232;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
                $l238:;
                ITable* $tmp241 = Iter$97$9231->$class->itable;
                while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp241 = $tmp241->next;
                }
                $fn243 $tmp242 = $tmp241->methods[0];
                panda$core$Bit $tmp244 = $tmp242(Iter$97$9231);
                panda$core$Bit $tmp245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp244);
                bool $tmp240 = $tmp245.value;
                if (!$tmp240) goto $l239;
                {
                    int $tmp248;
                    {
                        ITable* $tmp252 = Iter$97$9231->$class->itable;
                        while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp252 = $tmp252->next;
                        }
                        $fn254 $tmp253 = $tmp252->methods[1];
                        panda$core$Object* $tmp255 = $tmp253(Iter$97$9231);
                        $tmp251 = $tmp255;
                        $tmp250 = ((org$pandalanguage$pandac$Type*) $tmp251);
                        intf249 = $tmp250;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                        panda$core$Panda$unref$panda$core$Object($tmp251);
                        org$pandalanguage$pandac$Type* $tmp260 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_start, intf249);
                        $tmp259 = $tmp260;
                        org$pandalanguage$pandac$Type* $tmp261 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, $tmp259, p_target);
                        $tmp258 = $tmp261;
                        $tmp257 = $tmp258;
                        result256 = $tmp257;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                        if (((panda$core$Bit) { result256 != NULL }).value) {
                        {
                            $tmp262 = result256;
                            $returnValue194 = $tmp262;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                            $tmp248 = 0;
                            goto $l246;
                            $l263:;
                            $tmp230 = 0;
                            goto $l228;
                            $l264:;
                            $tmp191 = 4;
                            goto $l189;
                            $l265:;
                            return $returnValue194;
                        }
                        }
                    }
                    $tmp248 = -1;
                    goto $l246;
                    $l246:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result256));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf249));
                    intf249 = NULL;
                    result256 = NULL;
                    switch ($tmp248) {
                        case -1: goto $l267;
                        case 0: goto $l263;
                    }
                    $l267:;
                }
                goto $l238;
                $l239:;
            }
            $tmp230 = -1;
            goto $l228;
            $l228:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$97$9231));
            Iter$97$9231 = NULL;
            switch ($tmp230) {
                case 0: goto $l264;
                case -1: goto $l268;
            }
            $l268:;
        }
        $tmp269 = NULL;
        $returnValue194 = $tmp269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
        $tmp191 = 5;
        goto $l189;
        $l270:;
        return $returnValue194;
    }
    $l189:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) startClass202));
    startClass202 = NULL;
    switch ($tmp191) {
        case 4: goto $l265;
        case 3: goto $l225;
        case 5: goto $l270;
        case 2: goto $l212;
        case 0: goto $l200;
        case 1: goto $l207;
    }
    $l272:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue273;
    ITable* $tmp274 = ((panda$collections$CollectionView*) self->value->parameters)->$class->itable;
    while ($tmp274->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp274 = $tmp274->next;
    }
    $fn276 $tmp275 = $tmp274->methods[0];
    panda$core$Int64 $tmp277 = $tmp275(((panda$collections$CollectionView*) self->value->parameters));
    $returnValue273 = $tmp277;
    return $returnValue273;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue279;
    org$pandalanguage$pandac$Type* $tmp280;
    panda$core$Object* $tmp281;
    panda$core$Object* $tmp282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, p_index);
    $tmp281 = $tmp282;
    $tmp280 = ((org$pandalanguage$pandac$Type*) $tmp281);
    $returnValue279 = $tmp280;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
    panda$core$Panda$unref$panda$core$Object($tmp281);
    return $returnValue279;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue284;
    org$pandalanguage$pandac$Type* $tmp285;
    panda$core$Object* $tmp286;
    panda$core$Int64 $tmp291;
    ITable* $tmp287 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
    while ($tmp287->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp287 = $tmp287->next;
    }
    $fn289 $tmp288 = $tmp287->methods[0];
    panda$core$Int64 $tmp290 = $tmp288(((panda$collections$CollectionView*) self->effectiveType->subtypes));
    panda$core$Int64$init$builtin_int64(&$tmp291, 1);
    panda$core$Int64 $tmp292 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp290, $tmp291);
    panda$core$Object* $tmp293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp292);
    $tmp286 = $tmp293;
    $tmp285 = ((org$pandalanguage$pandac$Type*) $tmp286);
    $returnValue284 = $tmp285;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
    panda$core$Panda$unref$panda$core$Object($tmp286);
    return $returnValue284;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue295;
    panda$core$String* $tmp296;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp302 = $tmp303;
    panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s301, $tmp302);
    $tmp300 = $tmp304;
    panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, &$s305);
    $tmp299 = $tmp306;
    panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp299, ((panda$core$Object*) self->effectiveType));
    $tmp298 = $tmp307;
    panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s308);
    $tmp297 = $tmp309;
    $tmp296 = $tmp297;
    $returnValue295 = $tmp296;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
    return $returnValue295;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp313;
    {
    }
    $tmp313 = -1;
    goto $l311;
    $l311:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp313) {
        case -1: goto $l314;
    }
    $l314:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->target));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->effectiveType));
}

