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
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/MutableMethod.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"

static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type} };

typedef org$pandalanguage$pandac$Type* (*$fn32)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn68)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn78)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn85)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn96)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn133)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn151)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn158)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$Int64 (*$fn163)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn189)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn196)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$Int64 (*$fn204)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn322)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn348)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn361)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 13, 1305644035312173124, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x68\x61\x73\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x61\x72\x67\x65\x74\x20", 20, 7486630063313712255, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

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
    org$pandalanguage$pandac$Type* $tmp40;
    org$pandalanguage$pandac$Type* $tmp41;
    org$pandalanguage$pandac$Type* $tmp42;
    panda$core$Object* $tmp43;
    panda$core$String* $tmp49;
    panda$core$String* $tmp50;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$Object* $tmp54;
    panda$collections$Array* paramTypes62 = NULL;
    panda$collections$Array* $tmp63;
    panda$collections$Array* $tmp64;
    panda$collections$Iterator* Iter$41$1373 = NULL;
    panda$collections$Iterator* $tmp74;
    panda$collections$Iterator* $tmp75;
    org$pandalanguage$pandac$MethodDecl$Parameter* p91 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp92;
    panda$core$Object* $tmp93;
    org$pandalanguage$pandac$Type$Kind kind100;
    panda$core$Int64 $tmp101;
    org$pandalanguage$pandac$Type$Kind $tmp103;
    panda$core$Int64 $tmp104;
    org$pandalanguage$pandac$Type$Kind $tmp105;
    panda$core$Int64 $tmp106;
    org$pandalanguage$pandac$Type* rawType107 = NULL;
    panda$core$Int64 $tmp109;
    panda$core$Object* $tmp112;
    org$pandalanguage$pandac$Type* $tmp116;
    org$pandalanguage$pandac$Type* $tmp117;
    org$pandalanguage$pandac$Type* $tmp118;
    org$pandalanguage$pandac$Type* $tmp119;
    panda$core$Object* $tmp120;
    org$pandalanguage$pandac$Type* $tmp124;
    org$pandalanguage$pandac$Type* $tmp125;
    org$pandalanguage$pandac$Type* $tmp126;
    org$pandalanguage$pandac$Type* $tmp128;
    org$pandalanguage$pandac$Type* $tmp129;
    org$pandalanguage$pandac$Type* $tmp130;
    org$pandalanguage$pandac$Type* $tmp132;
    org$pandalanguage$pandac$Type$Kind kind137;
    panda$core$Int64 $tmp138;
    org$pandalanguage$pandac$Type$Kind $tmp140;
    panda$core$Int64 $tmp141;
    org$pandalanguage$pandac$Type$Kind $tmp142;
    panda$core$Int64 $tmp143;
    org$pandalanguage$pandac$Type* $tmp144;
    org$pandalanguage$pandac$Type* $tmp145;
    org$pandalanguage$pandac$Type* $tmp146;
    panda$collections$ListView* $tmp147;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp148;
    panda$core$Int64 $tmp153;
    panda$core$Bit $tmp155;
    panda$core$Object* $tmp160;
    panda$core$Int64 $tmp165;
    org$pandalanguage$pandac$IRNode* $match$71_13172 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp173;
    panda$core$Int64 $tmp174;
    org$pandalanguage$pandac$Type* type176 = NULL;
    panda$collections$Array* params181 = NULL;
    panda$collections$Array* $tmp182;
    panda$collections$Array* $tmp183;
    panda$collections$ListView* $tmp185;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp186;
    panda$core$Int64 $tmp191;
    panda$core$Bit $tmp193;
    org$pandalanguage$pandac$Type* $tmp198;
    org$pandalanguage$pandac$Type* $tmp199;
    org$pandalanguage$pandac$Type* $tmp200;
    panda$core$Object* $tmp201;
    panda$core$Int64 $tmp206;
    org$pandalanguage$pandac$IRNode* $match$81_13216 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp217;
    panda$core$Int64 $tmp218;
    org$pandalanguage$pandac$Type* type220 = NULL;
    org$pandalanguage$pandac$Type* $tmp222;
    org$pandalanguage$pandac$Type* $tmp223;
    org$pandalanguage$pandac$Type* $tmp224;
    org$pandalanguage$pandac$Type* $tmp225;
    org$pandalanguage$pandac$Type* $tmp226;
    org$pandalanguage$pandac$Type* $tmp227;
    panda$core$Bit $tmp230;
    panda$core$String* $tmp234;
    panda$core$String* $tmp235;
    panda$core$String* $tmp236;
    panda$core$String* $tmp237;
    panda$core$String* $tmp238;
    panda$core$String* $tmp239;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
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
            int $tmp39;
            {
                {
                    $tmp40 = self->owner;
                    panda$core$Object* $tmp44 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
                    $tmp43 = $tmp44;
                    org$pandalanguage$pandac$Type* $tmp45 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, targetType17, ((org$pandalanguage$pandac$ClassDecl*) $tmp43));
                    $tmp42 = $tmp45;
                    $tmp41 = $tmp42;
                    self->owner = $tmp41;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
                    panda$core$Panda$unref$panda$core$Object($tmp43);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
                }
                if (((panda$core$Bit) { self->owner != NULL }).value) goto $l46; else goto $l47;
                $l47:;
                panda$core$Object* $tmp55 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
                $tmp54 = $tmp55;
                panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s53, ((org$pandalanguage$pandac$ClassDecl*) $tmp54)->name);
                $tmp52 = $tmp56;
                panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s57);
                $tmp51 = $tmp58;
                panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp51, ((panda$core$Object*) targetType17));
                $tmp50 = $tmp59;
                panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s60);
                $tmp49 = $tmp61;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s48, (panda$core$Int64) { 39 }, $tmp49);
                abort();
                $l46:;
                panda$collections$Array* $tmp65 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                ITable* $tmp66 = ((panda$collections$CollectionView*) p_value->parameters)->$class->itable;
                while ($tmp66->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp66 = $tmp66->next;
                }
                $fn68 $tmp67 = $tmp66->methods[0];
                panda$core$Int64 $tmp69 = $tmp67(((panda$collections$CollectionView*) p_value->parameters));
                panda$collections$Array$init$panda$core$Int64($tmp65, $tmp69);
                $tmp64 = $tmp65;
                $tmp63 = $tmp64;
                paramTypes62 = $tmp63;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
                {
                    int $tmp72;
                    {
                        ITable* $tmp76 = ((panda$collections$Iterable*) p_value->parameters)->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$collections$Iterator* $tmp79 = $tmp77(((panda$collections$Iterable*) p_value->parameters));
                        $tmp75 = $tmp79;
                        $tmp74 = $tmp75;
                        Iter$41$1373 = $tmp74;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
                        $l80:;
                        ITable* $tmp83 = Iter$41$1373->$class->itable;
                        while ($tmp83->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp83 = $tmp83->next;
                        }
                        $fn85 $tmp84 = $tmp83->methods[0];
                        panda$core$Bit $tmp86 = $tmp84(Iter$41$1373);
                        panda$core$Bit $tmp87 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp86);
                        bool $tmp82 = $tmp87.value;
                        if (!$tmp82) goto $l81;
                        {
                            int $tmp90;
                            {
                                ITable* $tmp94 = Iter$41$1373->$class->itable;
                                while ($tmp94->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp94 = $tmp94->next;
                                }
                                $fn96 $tmp95 = $tmp94->methods[1];
                                panda$core$Object* $tmp97 = $tmp95(Iter$41$1373);
                                $tmp93 = $tmp97;
                                $tmp92 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp93);
                                p91 = $tmp92;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
                                panda$core$Panda$unref$panda$core$Object($tmp93);
                                panda$collections$Array$add$panda$collections$Array$T(paramTypes62, ((panda$core$Object*) p91->type));
                            }
                            $tmp90 = -1;
                            goto $l88;
                            $l88:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p91));
                            p91 = NULL;
                            switch ($tmp90) {
                                case -1: goto $l98;
                            }
                            $l98:;
                        }
                        goto $l80;
                        $l81:;
                    }
                    $tmp72 = -1;
                    goto $l70;
                    $l70:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$41$1373));
                    Iter$41$1373 = NULL;
                    switch ($tmp72) {
                        case -1: goto $l99;
                    }
                    $l99:;
                }
                memset(&kind100, 0, sizeof(kind100));
                panda$core$Int64$init$builtin_int64(&$tmp101, 1);
                panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_value->methodKind.$rawValue, $tmp101);
                if ($tmp102.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp104, 16);
                    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp103, $tmp104);
                    kind100 = $tmp103;
                }
                }
                else {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp106, 17);
                    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp105, $tmp106);
                    kind100 = $tmp105;
                }
                }
                memset(&rawType107, 0, sizeof(rawType107));
                panda$core$Int64$init$builtin_int64(&$tmp109, 2);
                panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_value->methodKind.$rawValue, $tmp109);
                bool $tmp108 = $tmp110.value;
                if (!$tmp108) goto $l111;
                panda$core$Object* $tmp113 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
                $tmp112 = $tmp113;
                panda$core$Bit $tmp114 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(p_compiler, ((org$pandalanguage$pandac$ClassDecl*) $tmp112));
                $tmp108 = $tmp114.value;
                panda$core$Panda$unref$panda$core$Object($tmp112);
                $l111:;
                panda$core$Bit $tmp115 = { $tmp108 };
                if ($tmp115.value) {
                {
                    {
                        $tmp116 = rawType107;
                        panda$core$Object* $tmp121 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
                        $tmp120 = $tmp121;
                        org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp120));
                        $tmp119 = $tmp122;
                        org$pandalanguage$pandac$Type* $tmp123 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) p_value)->position, kind100, ((panda$collections$ListView*) paramTypes62), $tmp119);
                        $tmp118 = $tmp123;
                        $tmp117 = $tmp118;
                        rawType107 = $tmp117;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
                        panda$core$Panda$unref$panda$core$Object($tmp120);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
                    }
                }
                }
                else {
                {
                    {
                        $tmp124 = rawType107;
                        org$pandalanguage$pandac$Type* $tmp127 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) p_value)->position, kind100, ((panda$collections$ListView*) paramTypes62), p_value->returnType);
                        $tmp126 = $tmp127;
                        $tmp125 = $tmp126;
                        rawType107 = $tmp125;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
                    }
                }
                }
                {
                    $tmp128 = self->effectiveType;
                    org$pandalanguage$pandac$Type* $tmp131 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self->owner, rawType107);
                    $tmp130 = $tmp131;
                    $tmp129 = $tmp130;
                    self->effectiveType = $tmp129;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                }
                org$pandalanguage$pandac$Type* $tmp134 = (($fn133) p_target->$class->vtable[2])(p_target);
                $tmp132 = $tmp134;
                panda$core$Bit $tmp135 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_compiler, $tmp132);
                panda$core$Bit $tmp136 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp135);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                if ($tmp136.value) {
                {
                    memset(&kind137, 0, sizeof(kind137));
                    panda$core$Int64$init$builtin_int64(&$tmp138, 16);
                    panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->effectiveType->typeKind.$rawValue, $tmp138);
                    if ($tmp139.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp141, 14);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp140, $tmp141);
                        kind137 = $tmp140;
                    }
                    }
                    else {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp143, 15);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp142, $tmp143);
                        kind137 = $tmp142;
                    }
                    }
                    {
                        $tmp144 = self->effectiveType;
                        ITable* $tmp149 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                        while ($tmp149->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp149 = $tmp149->next;
                        }
                        $fn151 $tmp150 = $tmp149->methods[0];
                        panda$core$Int64 $tmp152 = $tmp150(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                        panda$core$Int64$init$builtin_int64(&$tmp153, 1);
                        panda$core$Int64 $tmp154 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp152, $tmp153);
                        panda$core$Bit$init$builtin_bit(&$tmp155, false);
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp148, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp154, true }), $tmp155);
                        ITable* $tmp156 = ((panda$collections$ListView*) self->effectiveType->subtypes)->$class->itable;
                        while ($tmp156->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp156 = $tmp156->next;
                        }
                        $fn158 $tmp157 = $tmp156->methods[2];
                        panda$collections$ListView* $tmp159 = $tmp157(((panda$collections$ListView*) self->effectiveType->subtypes), $tmp148);
                        $tmp147 = $tmp159;
                        ITable* $tmp161 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                        while ($tmp161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp161 = $tmp161->next;
                        }
                        $fn163 $tmp162 = $tmp161->methods[0];
                        panda$core$Int64 $tmp164 = $tmp162(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                        panda$core$Int64$init$builtin_int64(&$tmp165, 1);
                        panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp164, $tmp165);
                        panda$core$Object* $tmp167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp166);
                        $tmp160 = $tmp167;
                        org$pandalanguage$pandac$Type* $tmp168 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) p_value)->position, kind137, $tmp147, ((org$pandalanguage$pandac$Type*) $tmp160));
                        $tmp146 = $tmp168;
                        $tmp145 = $tmp146;
                        self->effectiveType = $tmp145;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                        panda$core$Panda$unref$panda$core$Object($tmp160);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                    }
                }
                }
                int $tmp171;
                {
                    $tmp173 = p_target;
                    $match$71_13172 = $tmp173;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
                    panda$core$Int64$init$builtin_int64(&$tmp174, 39);
                    panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_13172->$rawValue, $tmp174);
                    if ($tmp175.value) {
                    {
                        org$pandalanguage$pandac$Type** $tmp177 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_13172->$data + 16));
                        type176 = *$tmp177;
                        int $tmp180;
                        {
                            panda$collections$Array* $tmp184 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                            panda$collections$Array$init($tmp184);
                            $tmp183 = $tmp184;
                            $tmp182 = $tmp183;
                            params181 = $tmp182;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                            panda$collections$Array$add$panda$collections$Array$T(params181, ((panda$core$Object*) self->owner));
                            ITable* $tmp187 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                            while ($tmp187->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                $tmp187 = $tmp187->next;
                            }
                            $fn189 $tmp188 = $tmp187->methods[0];
                            panda$core$Int64 $tmp190 = $tmp188(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                            panda$core$Int64$init$builtin_int64(&$tmp191, 1);
                            panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp190, $tmp191);
                            panda$core$Bit$init$builtin_bit(&$tmp193, false);
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp186, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp192, true }), $tmp193);
                            ITable* $tmp194 = ((panda$collections$ListView*) self->effectiveType->subtypes)->$class->itable;
                            while ($tmp194->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp194 = $tmp194->next;
                            }
                            $fn196 $tmp195 = $tmp194->methods[2];
                            panda$collections$ListView* $tmp197 = $tmp195(((panda$collections$ListView*) self->effectiveType->subtypes), $tmp186);
                            $tmp185 = $tmp197;
                            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(params181, ((panda$collections$CollectionView*) $tmp185));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                            {
                                $tmp198 = self->effectiveType;
                                ITable* $tmp202 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
                                while ($tmp202->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                    $tmp202 = $tmp202->next;
                                }
                                $fn204 $tmp203 = $tmp202->methods[0];
                                panda$core$Int64 $tmp205 = $tmp203(((panda$collections$CollectionView*) self->effectiveType->subtypes));
                                panda$core$Int64$init$builtin_int64(&$tmp206, 1);
                                panda$core$Int64 $tmp207 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp205, $tmp206);
                                panda$core$Object* $tmp208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp207);
                                $tmp201 = $tmp208;
                                org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Symbol*) self->effectiveType)->position, self->effectiveType->typeKind, ((panda$collections$ListView*) params181), ((org$pandalanguage$pandac$Type*) $tmp201));
                                $tmp200 = $tmp209;
                                $tmp199 = $tmp200;
                                self->effectiveType = $tmp199;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
                                panda$core$Panda$unref$panda$core$Object($tmp201);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                            }
                        }
                        $tmp180 = -1;
                        goto $l178;
                        $l178:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params181));
                        params181 = NULL;
                        switch ($tmp180) {
                            case -1: goto $l210;
                        }
                        $l210:;
                    }
                    }
                }
                $tmp171 = -1;
                goto $l169;
                $l169:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                switch ($tmp171) {
                    case -1: goto $l211;
                }
                $l211:;
            }
            $tmp39 = -1;
            goto $l37;
            $l37:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawType107));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paramTypes62));
            paramTypes62 = NULL;
            switch ($tmp39) {
                case -1: goto $l212;
            }
            $l212:;
        }
        }
        else {
        {
            int $tmp215;
            {
                $tmp217 = p_target;
                $match$81_13216 = $tmp217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Int64$init$builtin_int64(&$tmp218, 39);
                panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_13216->$rawValue, $tmp218);
                if ($tmp219.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$81_13216->$data + 16));
                    type220 = *$tmp221;
                    {
                        $tmp222 = self->owner;
                        $tmp223 = type220;
                        self->owner = $tmp223;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
                    }
                    {
                        $tmp224 = self->effectiveType;
                        org$pandalanguage$pandac$Type* $tmp228 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(p_value);
                        $tmp227 = $tmp228;
                        org$pandalanguage$pandac$Type* $tmp229 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self->owner, $tmp227);
                        $tmp226 = $tmp229;
                        $tmp225 = $tmp226;
                        self->effectiveType = $tmp225;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp230, false);
                    if ($tmp230.value) goto $l231; else goto $l232;
                    $l232:;
                    panda$core$String* $tmp240 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_value);
                    $tmp239 = $tmp240;
                    panda$core$String* $tmp241 = panda$core$String$convert$R$panda$core$String($tmp239);
                    $tmp238 = $tmp241;
                    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s242);
                    $tmp237 = $tmp243;
                    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp237, ((panda$core$Object*) p_target));
                    $tmp236 = $tmp244;
                    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s245);
                    $tmp235 = $tmp246;
                    panda$core$MutableMethod* $tmp250 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp250, (panda$core$Int8*) &org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s249, ((panda$core$Object*) ((panda$core$Object*) $tmp250)));
                    $tmp248 = $tmp251;
                    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s252);
                    $tmp247 = $tmp253;
                    panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, $tmp247);
                    $tmp234 = $tmp254;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s233, (panda$core$Int64) { 86 }, $tmp234);
                    abort();
                    $l231:;
                }
                }
            }
            $tmp215 = -1;
            goto $l213;
            $l213:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
            switch ($tmp215) {
                case -1: goto $l255;
            }
            $l255:;
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetType17));
    switch ($tmp4) {
        case -1: goto $l256;
    }
    $l256:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_start, org$pandalanguage$pandac$ClassDecl* p_target) {
    panda$core$Int64 $tmp260;
    org$pandalanguage$pandac$Type* $returnValue262;
    org$pandalanguage$pandac$Type* $tmp263;
    org$pandalanguage$pandac$Type* $tmp264;
    panda$core$Object* $tmp265;
    org$pandalanguage$pandac$ClassDecl* startClass270 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp271;
    org$pandalanguage$pandac$ClassDecl* $tmp272;
    org$pandalanguage$pandac$Type* $tmp274;
    org$pandalanguage$pandac$Type* $tmp277;
    org$pandalanguage$pandac$Type* $tmp278;
    org$pandalanguage$pandac$Type* result285 = NULL;
    org$pandalanguage$pandac$Type* $tmp286;
    org$pandalanguage$pandac$Type* $tmp287;
    org$pandalanguage$pandac$Type* $tmp288;
    org$pandalanguage$pandac$Type* $tmp291;
    panda$collections$Iterator* Iter$115$9299 = NULL;
    panda$collections$Iterator* $tmp300;
    panda$collections$Iterator* $tmp301;
    org$pandalanguage$pandac$Type* intf317 = NULL;
    org$pandalanguage$pandac$Type* $tmp318;
    panda$core$Object* $tmp319;
    org$pandalanguage$pandac$Type* result324 = NULL;
    org$pandalanguage$pandac$Type* $tmp325;
    org$pandalanguage$pandac$Type* $tmp326;
    org$pandalanguage$pandac$Type* $tmp327;
    org$pandalanguage$pandac$Type* $tmp330;
    org$pandalanguage$pandac$Type* $tmp337;
    int $tmp259;
    {
        panda$core$Int64$init$builtin_int64(&$tmp260, 12);
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_start->typeKind.$rawValue, $tmp260);
        if ($tmp261.value) {
        {
            panda$core$Object* $tmp266 = panda$core$Weak$get$R$panda$core$Weak$T(p_start->parameter);
            $tmp265 = $tmp266;
            org$pandalanguage$pandac$Type* $tmp267 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp265)->bound, p_target);
            $tmp264 = $tmp267;
            $tmp263 = $tmp264;
            $returnValue262 = $tmp263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
            panda$core$Panda$unref$panda$core$Object($tmp265);
            $tmp259 = 0;
            goto $l257;
            $l268:;
            return $returnValue262;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp273 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, p_start);
        $tmp272 = $tmp273;
        $tmp271 = $tmp272;
        startClass270 = $tmp271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
        if (((panda$core$Bit) { startClass270 == NULL }).value) {
        {
            $tmp274 = NULL;
            $returnValue262 = $tmp274;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
            $tmp259 = 1;
            goto $l257;
            $l275:;
            return $returnValue262;
        }
        }
        if (((panda$core$Bit) { ((panda$core$Object*) startClass270) == ((panda$core$Object*) p_target) }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp279 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_start);
            $tmp278 = $tmp279;
            $tmp277 = $tmp278;
            $returnValue262 = $tmp277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
            $tmp259 = 2;
            goto $l257;
            $l280:;
            return $returnValue262;
        }
        }
        if (((panda$core$Bit) { startClass270->rawSuper != NULL }).value) {
        {
            int $tmp284;
            {
                org$pandalanguage$pandac$Type* $tmp289 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_start, startClass270->rawSuper);
                $tmp288 = $tmp289;
                org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, $tmp288, p_target);
                $tmp287 = $tmp290;
                $tmp286 = $tmp287;
                result285 = $tmp286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                if (((panda$core$Bit) { result285 != NULL }).value) {
                {
                    $tmp291 = result285;
                    $returnValue262 = $tmp291;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                    $tmp284 = 0;
                    goto $l282;
                    $l292:;
                    $tmp259 = 3;
                    goto $l257;
                    $l293:;
                    return $returnValue262;
                }
                }
            }
            $tmp284 = -1;
            goto $l282;
            $l282:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result285));
            result285 = NULL;
            switch ($tmp284) {
                case -1: goto $l295;
                case 0: goto $l292;
            }
            $l295:;
        }
        }
        {
            int $tmp298;
            {
                ITable* $tmp302 = ((panda$collections$Iterable*) startClass270->rawInterfaces)->$class->itable;
                while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp302 = $tmp302->next;
                }
                $fn304 $tmp303 = $tmp302->methods[0];
                panda$collections$Iterator* $tmp305 = $tmp303(((panda$collections$Iterable*) startClass270->rawInterfaces));
                $tmp301 = $tmp305;
                $tmp300 = $tmp301;
                Iter$115$9299 = $tmp300;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                $l306:;
                ITable* $tmp309 = Iter$115$9299->$class->itable;
                while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp309 = $tmp309->next;
                }
                $fn311 $tmp310 = $tmp309->methods[0];
                panda$core$Bit $tmp312 = $tmp310(Iter$115$9299);
                panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
                bool $tmp308 = $tmp313.value;
                if (!$tmp308) goto $l307;
                {
                    int $tmp316;
                    {
                        ITable* $tmp320 = Iter$115$9299->$class->itable;
                        while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp320 = $tmp320->next;
                        }
                        $fn322 $tmp321 = $tmp320->methods[1];
                        panda$core$Object* $tmp323 = $tmp321(Iter$115$9299);
                        $tmp319 = $tmp323;
                        $tmp318 = ((org$pandalanguage$pandac$Type*) $tmp319);
                        intf317 = $tmp318;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
                        panda$core$Panda$unref$panda$core$Object($tmp319);
                        org$pandalanguage$pandac$Type* $tmp328 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_start, intf317);
                        $tmp327 = $tmp328;
                        org$pandalanguage$pandac$Type* $tmp329 = org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(p_compiler, $tmp327, p_target);
                        $tmp326 = $tmp329;
                        $tmp325 = $tmp326;
                        result324 = $tmp325;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                        if (((panda$core$Bit) { result324 != NULL }).value) {
                        {
                            $tmp330 = result324;
                            $returnValue262 = $tmp330;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                            $tmp316 = 0;
                            goto $l314;
                            $l331:;
                            $tmp298 = 0;
                            goto $l296;
                            $l332:;
                            $tmp259 = 4;
                            goto $l257;
                            $l333:;
                            return $returnValue262;
                        }
                        }
                    }
                    $tmp316 = -1;
                    goto $l314;
                    $l314:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result324));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf317));
                    intf317 = NULL;
                    result324 = NULL;
                    switch ($tmp316) {
                        case -1: goto $l335;
                        case 0: goto $l331;
                    }
                    $l335:;
                }
                goto $l306;
                $l307:;
            }
            $tmp298 = -1;
            goto $l296;
            $l296:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$115$9299));
            Iter$115$9299 = NULL;
            switch ($tmp298) {
                case 0: goto $l332;
                case -1: goto $l336;
            }
            $l336:;
        }
        $tmp337 = NULL;
        $returnValue262 = $tmp337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
        $tmp259 = 5;
        goto $l257;
        $l338:;
        return $returnValue262;
    }
    $l257:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) startClass270));
    startClass270 = NULL;
    switch ($tmp259) {
        case 5: goto $l338;
        case 2: goto $l280;
        case 4: goto $l333;
        case 1: goto $l275;
        case 3: goto $l293;
        case 0: goto $l268;
    }
    $l340:;
    if (false) goto $l341; else goto $l342;
    $l342:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s343, (panda$core$Int64) { 97 }, &$s344);
    abort();
    $l341:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue345;
    ITable* $tmp346 = ((panda$collections$CollectionView*) self->value->parameters)->$class->itable;
    while ($tmp346->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp346 = $tmp346->next;
    }
    $fn348 $tmp347 = $tmp346->methods[0];
    panda$core$Int64 $tmp349 = $tmp347(((panda$collections$CollectionView*) self->value->parameters));
    $returnValue345 = $tmp349;
    return $returnValue345;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue351;
    org$pandalanguage$pandac$Type* $tmp352;
    panda$core$Object* $tmp353;
    panda$core$Object* $tmp354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, p_index);
    $tmp353 = $tmp354;
    $tmp352 = ((org$pandalanguage$pandac$Type*) $tmp353);
    $returnValue351 = $tmp352;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
    panda$core$Panda$unref$panda$core$Object($tmp353);
    return $returnValue351;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue356;
    org$pandalanguage$pandac$Type* $tmp357;
    panda$core$Object* $tmp358;
    panda$core$Int64 $tmp363;
    ITable* $tmp359 = ((panda$collections$CollectionView*) self->effectiveType->subtypes)->$class->itable;
    while ($tmp359->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp359 = $tmp359->next;
    }
    $fn361 $tmp360 = $tmp359->methods[0];
    panda$core$Int64 $tmp362 = $tmp360(((panda$collections$CollectionView*) self->effectiveType->subtypes));
    panda$core$Int64$init$builtin_int64(&$tmp363, 1);
    panda$core$Int64 $tmp364 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp362, $tmp363);
    panda$core$Object* $tmp365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->effectiveType->subtypes, $tmp364);
    $tmp358 = $tmp365;
    $tmp357 = ((org$pandalanguage$pandac$Type*) $tmp358);
    $returnValue356 = $tmp357;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
    panda$core$Panda$unref$panda$core$Object($tmp358);
    return $returnValue356;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue367;
    panda$core$String* $tmp368;
    panda$core$String* $tmp369;
    panda$core$String* $tmp370;
    panda$core$String* $tmp371;
    panda$core$String* $tmp372;
    panda$core$String* $tmp374;
    panda$core$String* $tmp375 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp374 = $tmp375;
    panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s373, $tmp374);
    $tmp372 = $tmp376;
    panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, &$s377);
    $tmp371 = $tmp378;
    panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp371, ((panda$core$Object*) self->effectiveType));
    $tmp370 = $tmp379;
    panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s380);
    $tmp369 = $tmp381;
    $tmp368 = $tmp369;
    $returnValue367 = $tmp368;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
    return $returnValue367;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp385;
    {
    }
    $tmp385 = -1;
    goto $l383;
    $l383:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp385) {
        case -1: goto $l386;
    }
    $l386:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->target));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->effectiveType));
}

