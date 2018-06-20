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
typedef panda$collections$ListView* (*$fn88)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$ListView* (*$fn120)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn242)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 13, 1305644035312173124, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x68\x61\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x61\x72\x67\x65\x74\x20", 20, 7486630063313712255, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

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
    panda$core$Int64 $tmp83;
    panda$core$Bit $tmp85;
    panda$core$Object* $tmp90;
    panda$core$Int64 $tmp92;
    org$pandalanguage$pandac$IRNode* $match$53_1399 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp100;
    panda$core$Int64 $tmp101;
    org$pandalanguage$pandac$Type* type103 = NULL;
    panda$collections$Array* params108 = NULL;
    panda$collections$Array* $tmp109;
    panda$collections$Array* $tmp110;
    panda$collections$ListView* $tmp112;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp113;
    panda$core$Int64 $tmp115;
    panda$core$Bit $tmp117;
    org$pandalanguage$pandac$Type* $tmp122;
    org$pandalanguage$pandac$Type* $tmp123;
    org$pandalanguage$pandac$Type* $tmp124;
    panda$core$Object* $tmp125;
    panda$core$Int64 $tmp127;
    org$pandalanguage$pandac$IRNode* $match$63_13136 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp137;
    panda$core$Int64 $tmp138;
    org$pandalanguage$pandac$Type* type140 = NULL;
    org$pandalanguage$pandac$Type* $tmp142;
    org$pandalanguage$pandac$Type* $tmp143;
    org$pandalanguage$pandac$Type* $tmp144;
    org$pandalanguage$pandac$Type* $tmp145;
    org$pandalanguage$pandac$Type* $tmp146;
    org$pandalanguage$pandac$Type* $tmp147;
    panda$core$Bit $tmp150;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    panda$core$String* $tmp156;
    panda$core$String* $tmp157;
    panda$core$String* $tmp158;
    panda$core$String* $tmp159;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
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
                    panda$core$Int64 $tmp82 = panda$collections$Array$get_count$R$panda$core$Int64(self->effectiveType->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp83, 1);
                    panda$core$Int64 $tmp84 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp82, $tmp83);
                    panda$core$Bit$init$builtin_bit(&$tmp85, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp81, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp84, true }), $tmp85);
                    ITable* $tmp86 = ((panda$collections$ListView*) self->effectiveType->subtypes)->$class->itable;
                    while ($tmp86->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp86 = $tmp86->next;
                    }
                    $fn88 $tmp87 = $tmp86->methods[2];
                    panda$collections$ListView* $tmp89 = $tmp87(((panda$collections$ListView*) self->effectiveType->subtypes), $tmp81);
                    $tmp80 = $tmp89;
                    panda$core$Int64 $tmp91 = panda$collections$Array$get_count$R$panda$core$Int64(self->effectiveType->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp92, 1);
                    panda$core$Int64 $tmp93 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp91, $tmp92);
                    panda$core$Object* $tmp94 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp93);
                    $tmp90 = $tmp94;
                    org$pandalanguage$pandac$Type* $tmp95 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) p_value)->position, kind70, $tmp80, ((org$pandalanguage$pandac$Type*) $tmp90));
                    $tmp79 = $tmp95;
                    $tmp78 = $tmp79;
                    self->effectiveType = $tmp78;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
                    panda$core$Panda$unref$panda$core$Object($tmp90);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
                }
            }
            }
            int $tmp98;
            {
                $tmp100 = p_target;
                $match$53_1399 = $tmp100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                panda$core$Int64$init$builtin_int64(&$tmp101, 39);
                panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$53_1399->$rawValue, $tmp101);
                if ($tmp102.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp104 = ((org$pandalanguage$pandac$Type**) ((char*) $match$53_1399->$data + 16));
                    type103 = *$tmp104;
                    int $tmp107;
                    {
                        panda$collections$Array* $tmp111 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp111);
                        $tmp110 = $tmp111;
                        $tmp109 = $tmp110;
                        params108 = $tmp109;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                        panda$collections$Array$add$panda$collections$Array$T(params108, ((panda$core$Object*) self->owner));
                        panda$core$Int64 $tmp114 = panda$collections$Array$get_count$R$panda$core$Int64(self->effectiveType->subtypes);
                        panda$core$Int64$init$builtin_int64(&$tmp115, 1);
                        panda$core$Int64 $tmp116 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp114, $tmp115);
                        panda$core$Bit$init$builtin_bit(&$tmp117, false);
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp113, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp116, true }), $tmp117);
                        ITable* $tmp118 = ((panda$collections$ListView*) self->effectiveType->subtypes)->$class->itable;
                        while ($tmp118->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp118 = $tmp118->next;
                        }
                        $fn120 $tmp119 = $tmp118->methods[2];
                        panda$collections$ListView* $tmp121 = $tmp119(((panda$collections$ListView*) self->effectiveType->subtypes), $tmp113);
                        $tmp112 = $tmp121;
                        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(params108, ((panda$collections$CollectionView*) $tmp112));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
                        {
                            $tmp122 = self->effectiveType;
                            panda$core$Int64 $tmp126 = panda$collections$Array$get_count$R$panda$core$Int64(self->effectiveType->subtypes);
                            panda$core$Int64$init$builtin_int64(&$tmp127, 1);
                            panda$core$Int64 $tmp128 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp126, $tmp127);
                            panda$core$Object* $tmp129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp128);
                            $tmp125 = $tmp129;
                            org$pandalanguage$pandac$Type* $tmp130 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) self->effectiveType)->position, self->effectiveType->typeKind, ((panda$collections$ListView*) params108), ((org$pandalanguage$pandac$Type*) $tmp125));
                            $tmp124 = $tmp130;
                            $tmp123 = $tmp124;
                            self->effectiveType = $tmp123;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
                            panda$core$Panda$unref$panda$core$Object($tmp125);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                        }
                    }
                    $tmp107 = -1;
                    goto $l105;
                    $l105:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params108));
                    params108 = NULL;
                    switch ($tmp107) {
                        case -1: goto $l131;
                    }
                    $l131:;
                }
                }
            }
            $tmp98 = -1;
            goto $l96;
            $l96:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
            switch ($tmp98) {
                case -1: goto $l132;
            }
            $l132:;
        }
        }
        else {
        {
            int $tmp135;
            {
                $tmp137 = p_target;
                $match$63_13136 = $tmp137;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                panda$core$Int64$init$builtin_int64(&$tmp138, 39);
                panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_13136->$rawValue, $tmp138);
                if ($tmp139.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp141 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_13136->$data + 16));
                    type140 = *$tmp141;
                    {
                        $tmp142 = self->owner;
                        $tmp143 = type140;
                        self->owner = $tmp143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
                    }
                    {
                        $tmp144 = self->effectiveType;
                        org$pandalanguage$pandac$Type* $tmp148 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(p_value);
                        $tmp147 = $tmp148;
                        org$pandalanguage$pandac$Type* $tmp149 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self->owner, $tmp147);
                        $tmp146 = $tmp149;
                        $tmp145 = $tmp146;
                        self->effectiveType = $tmp145;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp150, false);
                    if ($tmp150.value) goto $l151; else goto $l152;
                    $l152:;
                    panda$core$String* $tmp160 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_value);
                    $tmp159 = $tmp160;
                    panda$core$String* $tmp161 = panda$core$String$convert$R$panda$core$String($tmp159);
                    $tmp158 = $tmp161;
                    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, &$s162);
                    $tmp157 = $tmp163;
                    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp157, ((panda$core$Object*) p_target));
                    $tmp156 = $tmp164;
                    panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s165);
                    $tmp155 = $tmp166;
                    panda$core$MutableMethod* $tmp170 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp170, (panda$core$Int8*) &org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s169, ((panda$core$Object*) ((panda$core$Object*) $tmp170)));
                    $tmp168 = $tmp171;
                    panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s172);
                    $tmp167 = $tmp173;
                    panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, $tmp167);
                    $tmp154 = $tmp174;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s153, (panda$core$Int64) { 68 }, $tmp154);
                    abort();
                    $l151:;
                }
                }
            }
            $tmp135 = -1;
            goto $l133;
            $l133:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
            switch ($tmp135) {
                case -1: goto $l175;
            }
            $l175:;
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetType17));
    switch ($tmp4) {
        case -1: goto $l176;
    }
    $l176:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_start, org$pandalanguage$pandac$ClassDecl* p_target) {
    panda$core$Int64 $tmp180;
    org$pandalanguage$pandac$Type* $returnValue182;
    org$pandalanguage$pandac$Type* $tmp183;
    org$pandalanguage$pandac$Type* $tmp184;
    panda$core$Object* $tmp185;
    org$pandalanguage$pandac$ClassDecl* startClass190 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp191;
    org$pandalanguage$pandac$ClassDecl* $tmp192;
    org$pandalanguage$pandac$Type* $tmp194;
    org$pandalanguage$pandac$Type* $tmp197;
    org$pandalanguage$pandac$Type* $tmp198;
    org$pandalanguage$pandac$Type* result205 = NULL;
    org$pandalanguage$pandac$Type* $tmp206;
    org$pandalanguage$pandac$Type* $tmp207;
    org$pandalanguage$pandac$Type* $tmp208;
    org$pandalanguage$pandac$Type* $tmp211;
    panda$collections$Iterator* Iter$97$9219 = NULL;
    panda$collections$Iterator* $tmp220;
    panda$collections$Iterator* $tmp221;
    org$pandalanguage$pandac$Type* intf237 = NULL;
    org$pandalanguage$pandac$Type* $tmp238;
    panda$core$Object* $tmp239;
    org$pandalanguage$pandac$Type* result244 = NULL;
    org$pandalanguage$pandac$Type* $tmp245;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Type* $tmp247;
    org$pandalanguage$pandac$Type* $tmp250;
    org$pandalanguage$pandac$Type* $tmp257;
    int $tmp179;
    {
        panda$core$Int64$init$builtin_int64(&$tmp180, 12);
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_start->typeKind.$rawValue, $tmp180);
        if ($tmp181.value) {
        {
            panda$core$Object* $tmp186 = panda$core$Weak$get$R$panda$core$Weak$T(p_start->parameter);
            $tmp185 = $tmp186;
            org$pandalanguage$pandac$Type* $tmp187 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp185)->bound, p_target);
            $tmp184 = $tmp187;
            $tmp183 = $tmp184;
            $returnValue182 = $tmp183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
            panda$core$Panda$unref$panda$core$Object($tmp185);
            $tmp179 = 0;
            goto $l177;
            $l188:;
            return $returnValue182;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp193 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, p_start);
        $tmp192 = $tmp193;
        $tmp191 = $tmp192;
        startClass190 = $tmp191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
        if (((panda$core$Bit) { startClass190 == NULL }).value) {
        {
            $tmp194 = NULL;
            $returnValue182 = $tmp194;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
            $tmp179 = 1;
            goto $l177;
            $l195:;
            return $returnValue182;
        }
        }
        if (((panda$core$Bit) { ((panda$core$Object*) startClass190) == ((panda$core$Object*) p_target) }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_start);
            $tmp198 = $tmp199;
            $tmp197 = $tmp198;
            $returnValue182 = $tmp197;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
            $tmp179 = 2;
            goto $l177;
            $l200:;
            return $returnValue182;
        }
        }
        if (((panda$core$Bit) { startClass190->rawSuper != NULL }).value) {
        {
            int $tmp204;
            {
                org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_start, startClass190->rawSuper);
                $tmp208 = $tmp209;
                org$pandalanguage$pandac$Type* $tmp210 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, $tmp208, p_target);
                $tmp207 = $tmp210;
                $tmp206 = $tmp207;
                result205 = $tmp206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                if (((panda$core$Bit) { result205 != NULL }).value) {
                {
                    $tmp211 = result205;
                    $returnValue182 = $tmp211;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                    $tmp204 = 0;
                    goto $l202;
                    $l212:;
                    $tmp179 = 3;
                    goto $l177;
                    $l213:;
                    return $returnValue182;
                }
                }
            }
            $tmp204 = -1;
            goto $l202;
            $l202:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result205));
            result205 = NULL;
            switch ($tmp204) {
                case -1: goto $l215;
                case 0: goto $l212;
            }
            $l215:;
        }
        }
        {
            int $tmp218;
            {
                ITable* $tmp222 = ((panda$collections$Iterable*) startClass190->rawInterfaces)->$class->itable;
                while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp222 = $tmp222->next;
                }
                $fn224 $tmp223 = $tmp222->methods[0];
                panda$collections$Iterator* $tmp225 = $tmp223(((panda$collections$Iterable*) startClass190->rawInterfaces));
                $tmp221 = $tmp225;
                $tmp220 = $tmp221;
                Iter$97$9219 = $tmp220;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                $l226:;
                ITable* $tmp229 = Iter$97$9219->$class->itable;
                while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp229 = $tmp229->next;
                }
                $fn231 $tmp230 = $tmp229->methods[0];
                panda$core$Bit $tmp232 = $tmp230(Iter$97$9219);
                panda$core$Bit $tmp233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp232);
                bool $tmp228 = $tmp233.value;
                if (!$tmp228) goto $l227;
                {
                    int $tmp236;
                    {
                        ITable* $tmp240 = Iter$97$9219->$class->itable;
                        while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp240 = $tmp240->next;
                        }
                        $fn242 $tmp241 = $tmp240->methods[1];
                        panda$core$Object* $tmp243 = $tmp241(Iter$97$9219);
                        $tmp239 = $tmp243;
                        $tmp238 = ((org$pandalanguage$pandac$Type*) $tmp239);
                        intf237 = $tmp238;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
                        panda$core$Panda$unref$panda$core$Object($tmp239);
                        org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_start, intf237);
                        $tmp247 = $tmp248;
                        org$pandalanguage$pandac$Type* $tmp249 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, $tmp247, p_target);
                        $tmp246 = $tmp249;
                        $tmp245 = $tmp246;
                        result244 = $tmp245;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                        if (((panda$core$Bit) { result244 != NULL }).value) {
                        {
                            $tmp250 = result244;
                            $returnValue182 = $tmp250;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                            $tmp236 = 0;
                            goto $l234;
                            $l251:;
                            $tmp218 = 0;
                            goto $l216;
                            $l252:;
                            $tmp179 = 4;
                            goto $l177;
                            $l253:;
                            return $returnValue182;
                        }
                        }
                    }
                    $tmp236 = -1;
                    goto $l234;
                    $l234:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf237));
                    intf237 = NULL;
                    result244 = NULL;
                    switch ($tmp236) {
                        case 0: goto $l251;
                        case -1: goto $l255;
                    }
                    $l255:;
                }
                goto $l226;
                $l227:;
            }
            $tmp218 = -1;
            goto $l216;
            $l216:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$97$9219));
            Iter$97$9219 = NULL;
            switch ($tmp218) {
                case 0: goto $l252;
                case -1: goto $l256;
            }
            $l256:;
        }
        $tmp257 = NULL;
        $returnValue182 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        $tmp179 = 5;
        goto $l177;
        $l258:;
        return $returnValue182;
    }
    $l177:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) startClass190));
    startClass190 = NULL;
    switch ($tmp179) {
        case 3: goto $l213;
        case 5: goto $l258;
        case 4: goto $l253;
        case 1: goto $l195;
        case 0: goto $l188;
        case 2: goto $l200;
    }
    $l260:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue261;
    panda$core$Int64 $tmp262 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $returnValue261 = $tmp262;
    return $returnValue261;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue264;
    org$pandalanguage$pandac$Type* $tmp265;
    panda$core$Object* $tmp266;
    panda$core$Object* $tmp267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, p_index);
    $tmp266 = $tmp267;
    $tmp265 = ((org$pandalanguage$pandac$Type*) $tmp266);
    $returnValue264 = $tmp265;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
    panda$core$Panda$unref$panda$core$Object($tmp266);
    return $returnValue264;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue269;
    org$pandalanguage$pandac$Type* $tmp270;
    panda$core$Object* $tmp271;
    panda$core$Int64 $tmp273;
    panda$core$Int64 $tmp272 = panda$collections$Array$get_count$R$panda$core$Int64(self->effectiveType->subtypes);
    panda$core$Int64$init$builtin_int64(&$tmp273, 1);
    panda$core$Int64 $tmp274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp272, $tmp273);
    panda$core$Object* $tmp275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp274);
    $tmp271 = $tmp275;
    $tmp270 = ((org$pandalanguage$pandac$Type*) $tmp271);
    $returnValue269 = $tmp270;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
    panda$core$Panda$unref$panda$core$Object($tmp271);
    return $returnValue269;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue277;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp284 = $tmp285;
    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, $tmp284);
    $tmp282 = $tmp286;
    panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s287);
    $tmp281 = $tmp288;
    panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp281, ((panda$core$Object*) self->effectiveType));
    $tmp280 = $tmp289;
    panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, &$s290);
    $tmp279 = $tmp291;
    $tmp278 = $tmp279;
    $returnValue277 = $tmp278;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    return $returnValue277;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp295;
    {
    }
    $tmp295 = -1;
    goto $l293;
    $l293:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp295) {
        case -1: goto $l296;
    }
    $l296:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->target));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->effectiveType));
}

