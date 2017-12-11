#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn26)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn32)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn38)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn49)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn55)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn61)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn134)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn140)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn146)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn193)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn199)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn205)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn235)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn294)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn300)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn361)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn367)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn373)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn420)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn426)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn432)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn510)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn516)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn540)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn546)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn552)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn562)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn568)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn574)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn615)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn629)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn635)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn641)(panda$collections$Iterator*);

static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x69\x6D\x70\x6C\x69\x63\x69\x74", 10, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    panda$collections$Array* children8;
    panda$collections$Array* children20;
    panda$collections$Iterator* c$Iter23;
    org$pandalanguage$pandac$ASTNode* c35;
    org$pandalanguage$pandac$Type* child40;
    switch (p_type->kind.value) {
        case 138:
        {
            org$pandalanguage$pandac$Type* $tmp1 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            return $tmp1;
        }
        break;
        case 109:
        {
            panda$core$Int64 $tmp2 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->children);
            panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp3.value);
            org$pandalanguage$pandac$Type* $tmp4 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp4->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp4->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 10 }), p_type->position);
            return $tmp4;
        }
        break;
        case 110:
        {
            panda$core$Int64 $tmp6 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->children);
            panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp7.value);
            panda$collections$Array* $tmp9 = (panda$collections$Array*) malloc(40);
            $tmp9->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp9->refCount.value = 1;
            panda$collections$Array$init($tmp9);
            children8 = $tmp9;
            panda$core$Object* $tmp11 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp12 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp11));
            panda$collections$Array$add$panda$collections$Array$T(children8, ((panda$core$Object*) $tmp12));
            org$pandalanguage$pandac$Type* $tmp13 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp13->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp13->refCount.value = 1;
            panda$core$Object* $tmp15 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children8, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp15))->name, &$s16);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp13, $tmp17, ((panda$core$Int64) { 11 }), p_type->position, ((panda$collections$ListView*) children8), ((panda$core$Bit) { false }));
            return $tmp13;
        }
        break;
        case 154:
        {
            panda$core$Int64 $tmp18 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->children);
            panda$core$Bit $tmp19 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp18, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp19.value);
            panda$collections$Array* $tmp21 = (panda$collections$Array*) malloc(40);
            $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp21->refCount.value = 1;
            panda$collections$Array$init($tmp21);
            children20 = $tmp21;
            {
                ITable* $tmp24 = ((panda$collections$Iterable*) p_type->children)->$class->itable;
                while ($tmp24->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp24 = $tmp24->next;
                }
                $fn26 $tmp25 = $tmp24->methods[0];
                panda$collections$Iterator* $tmp27 = $tmp25(((panda$collections$Iterable*) p_type->children));
                c$Iter23 = $tmp27;
                $l28:;
                ITable* $tmp30 = c$Iter23->$class->itable;
                while ($tmp30->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp30 = $tmp30->next;
                }
                $fn32 $tmp31 = $tmp30->methods[0];
                panda$core$Bit $tmp33 = $tmp31(c$Iter23);
                panda$core$Bit $tmp34 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp33);
                if (!$tmp34.value) goto $l29;
                {
                    ITable* $tmp36 = c$Iter23->$class->itable;
                    while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp36 = $tmp36->next;
                    }
                    $fn38 $tmp37 = $tmp36->methods[1];
                    panda$core$Object* $tmp39 = $tmp37(c$Iter23);
                    c35 = ((org$pandalanguage$pandac$ASTNode*) $tmp39);
                    org$pandalanguage$pandac$Type* $tmp41 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, c35);
                    child40 = $tmp41;
                    panda$collections$Array$add$panda$collections$Array$T(children20, ((panda$core$Object*) child40));
                }
                goto $l28;
                $l29:;
            }
            org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp42->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp42, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 21 }), p_type->position, ((panda$collections$ListView*) children20), ((panda$core$Bit) { false }));
            return $tmp42;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_a) {
    panda$core$Int64 flags45;
    panda$collections$Iterator* c$Iter46;
    org$pandalanguage$pandac$ASTNode* c58;
    panda$core$String* $match$46_1364;
    panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp44.value);
    flags45 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp47 = ((panda$collections$Iterable*) p_a->children)->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[0];
        panda$collections$Iterator* $tmp50 = $tmp48(((panda$collections$Iterable*) p_a->children));
        c$Iter46 = $tmp50;
        $l51:;
        ITable* $tmp53 = c$Iter46->$class->itable;
        while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp53 = $tmp53->next;
        }
        $fn55 $tmp54 = $tmp53->methods[0];
        panda$core$Bit $tmp56 = $tmp54(c$Iter46);
        panda$core$Bit $tmp57 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp56);
        if (!$tmp57.value) goto $l52;
        {
            ITable* $tmp59 = c$Iter46->$class->itable;
            while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp59 = $tmp59->next;
            }
            $fn61 $tmp60 = $tmp59->methods[1];
            panda$core$Object* $tmp62 = $tmp60(c$Iter46);
            c58 = ((org$pandalanguage$pandac$ASTNode*) $tmp62);
            panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c58->kind, ((panda$core$Int64) { 143 }));
            PANDA_ASSERT($tmp63.value);
            {
                $match$46_1364 = ((panda$core$String*) c58->payload);
                panda$core$Bit $tmp66 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s65);
                if ($tmp66.value) {
                {
                    panda$core$Int64 $tmp67 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp68 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp67);
                    flags45 = $tmp68;
                }
                }
                else {
                panda$core$Bit $tmp70 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s69);
                if ($tmp70.value) {
                {
                    panda$core$Int64 $tmp71 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp72 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp71);
                    flags45 = $tmp72;
                }
                }
                else {
                panda$core$Bit $tmp74 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s73);
                if ($tmp74.value) {
                {
                    panda$core$Int64 $tmp75 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp76 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp75);
                    flags45 = $tmp76;
                }
                }
                else {
                panda$core$Bit $tmp78 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s77);
                if ($tmp78.value) {
                {
                    panda$core$Int64 $tmp79 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp80 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp79);
                    flags45 = $tmp80;
                }
                }
                else {
                panda$core$Bit $tmp82 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s81);
                if ($tmp82.value) {
                {
                    panda$core$Int64 $tmp83 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp84 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp83);
                    flags45 = $tmp84;
                }
                }
                else {
                panda$core$Bit $tmp86 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s85);
                if ($tmp86.value) {
                {
                    panda$core$Int64 $tmp87 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp88 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp87);
                    flags45 = $tmp88;
                }
                }
                else {
                panda$core$Bit $tmp90 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s89);
                if ($tmp90.value) {
                {
                    panda$core$Int64 $tmp91 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp92 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp91);
                    flags45 = $tmp92;
                }
                }
                else {
                panda$core$Bit $tmp94 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s93);
                if ($tmp94.value) {
                {
                    panda$core$Int64 $tmp95 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp96 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp95);
                    flags45 = $tmp96;
                }
                }
                else {
                panda$core$Bit $tmp98 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s97);
                if ($tmp98.value) {
                {
                    panda$core$Int64 $tmp99 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp100 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp99);
                    flags45 = $tmp100;
                }
                }
                else {
                panda$core$Bit $tmp102 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s101);
                if ($tmp102.value) {
                {
                    panda$core$Int64 $tmp103 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp104 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp103);
                    flags45 = $tmp104;
                }
                }
                else {
                panda$core$Bit $tmp106 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1364, &$s105);
                if ($tmp106.value) {
                {
                    panda$core$Int64 $tmp107 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                    panda$core$Int64 $tmp108 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp107);
                    flags45 = $tmp108;
                }
                }
                else {
                {
                    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s109, c58->payload);
                    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, c58->position, $tmp112);
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
            }
        }
        goto $l51;
        $l52:;
    }
    org$pandalanguage$pandac$Annotations* $tmp113 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp113->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp113, flags45);
    return $tmp113;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment117;
    org$pandalanguage$pandac$Annotations* annotations123;
    panda$core$Int64 kind126;
    panda$collections$Iterator* decl$Iter130;
    org$pandalanguage$pandac$ASTNode* decl143;
    org$pandalanguage$pandac$ASTNode* value150;
    org$pandalanguage$pandac$Type* type156;
    org$pandalanguage$pandac$FieldDecl* field167;
    panda$core$Int64 $tmp115 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp115, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp116.value);
    panda$core$Object* $tmp118 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp119 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp118)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp119.value) {
    {
        panda$core$Object* $tmp120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp120)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp121.value);
        panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment117 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp122)->payload);
    }
    }
    else {
    {
        doccomment117 = NULL;
    }
    }
    panda$core$Object* $tmp124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp125 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp124));
    annotations123 = $tmp125;
    panda$core$Object* $tmp127 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    switch (((org$pandalanguage$pandac$ASTNode*) $tmp127)->kind.value) {
        case 130:
        {
            kind126 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            kind126 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            kind126 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp128 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp129 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations123->flags, $tmp128);
            annotations123->flags = $tmp129;
        }
        break;
        case 133:
        {
            kind126 = ((panda$core$Int64) { 10003 });
        }
        break;
    }
    {
        panda$core$Object* $tmp131 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp132 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp131)->children)->$class->itable;
        while ($tmp132->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp132 = $tmp132->next;
        }
        $fn134 $tmp133 = $tmp132->methods[0];
        panda$collections$Iterator* $tmp135 = $tmp133(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp131)->children));
        decl$Iter130 = $tmp135;
        $l136:;
        ITable* $tmp138 = decl$Iter130->$class->itable;
        while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp138 = $tmp138->next;
        }
        $fn140 $tmp139 = $tmp138->methods[0];
        panda$core$Bit $tmp141 = $tmp139(decl$Iter130);
        panda$core$Bit $tmp142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp141);
        if (!$tmp142.value) goto $l137;
        {
            ITable* $tmp144 = decl$Iter130->$class->itable;
            while ($tmp144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp144 = $tmp144->next;
            }
            $fn146 $tmp145 = $tmp144->methods[1];
            panda$core$Object* $tmp147 = $tmp145(decl$Iter130);
            decl143 = ((org$pandalanguage$pandac$ASTNode*) $tmp147);
            panda$core$Object* $tmp148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl143->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp148)->kind, ((panda$core$Int64) { 106 }));
            PANDA_ASSERT($tmp149.value);
            panda$core$Int64 $tmp151 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl143->children);
            panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp151, ((panda$core$Int64) { 2 }));
            if ($tmp152.value) {
            {
                panda$core$Object* $tmp153 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl143->children, ((panda$core$Int64) { 1 }));
                value150 = ((org$pandalanguage$pandac$ASTNode*) $tmp153);
            }
            }
            else {
            {
                panda$core$Int64 $tmp154 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl143->children);
                panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp154, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp155.value);
                value150 = NULL;
            }
            }
            panda$core$Object* $tmp157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl143->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp158 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp157)->children);
            panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp158, ((panda$core$Int64) { 1 }));
            if ($tmp159.value) {
            {
                panda$core$Object* $tmp160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl143->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp160)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp162 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp161));
                type156 = $tmp162;
            }
            }
            else {
            {
                panda$core$Object* $tmp163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl143->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp164 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp163)->children);
                panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp165.value);
                org$pandalanguage$pandac$Type* $tmp166 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type156 = $tmp166;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp168 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
            $tmp168->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp168->refCount.value = 1;
            panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl143->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp168, p_owner, decl143->position, doccomment117, annotations123, kind126, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp170)->payload), type156, value150);
            field167 = $tmp168;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field167));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field167));
        }
        goto $l136;
        $l137:;
    }
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i) {
    panda$core$String* doccomment173;
    org$pandalanguage$pandac$Annotations* annotations181;
    panda$collections$Array* parameters186;
    panda$collections$Iterator* p$Iter189;
    org$pandalanguage$pandac$ASTNode* p202;
    panda$core$Int64 $tmp171 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp171, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp172.value);
    panda$core$Object* $tmp174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp175 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp174)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp175.value) {
    {
        panda$core$Object* $tmp176 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp176)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp177.value);
        panda$core$Object* $tmp178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        doccomment173 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp178)->payload);
    }
    }
    else {
    {
        doccomment173 = NULL;
    }
    }
    panda$core$Object* $tmp179 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp179)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp180.value);
    panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp183 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp182));
    annotations181 = $tmp183;
    panda$core$Object* $tmp184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp184)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp185.value);
    panda$collections$Array* $tmp187 = (panda$collections$Array*) malloc(40);
    $tmp187->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp187->refCount.value = 1;
    panda$collections$Array$init($tmp187);
    parameters186 = $tmp187;
    {
        panda$core$Object* $tmp190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp191 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp190)->children)->$class->itable;
        while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp191 = $tmp191->next;
        }
        $fn193 $tmp192 = $tmp191->methods[0];
        panda$collections$Iterator* $tmp194 = $tmp192(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp190)->children));
        p$Iter189 = $tmp194;
        $l195:;
        ITable* $tmp197 = p$Iter189->$class->itable;
        while ($tmp197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp197 = $tmp197->next;
        }
        $fn199 $tmp198 = $tmp197->methods[0];
        panda$core$Bit $tmp200 = $tmp198(p$Iter189);
        panda$core$Bit $tmp201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp200);
        if (!$tmp201.value) goto $l196;
        {
            ITable* $tmp203 = p$Iter189->$class->itable;
            while ($tmp203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp203 = $tmp203->next;
            }
            $fn205 $tmp204 = $tmp203->methods[1];
            panda$core$Object* $tmp206 = $tmp204(p$Iter189);
            p202 = ((org$pandalanguage$pandac$ASTNode*) $tmp206);
            panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p202->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp207.value);
            panda$core$Int64 $tmp208 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p202->children);
            panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp208, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp209.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp210 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp210->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp210->refCount.value = 1;
            panda$core$Object* $tmp212 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p202->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp212));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp210, ((panda$core$String*) p202->payload), $tmp213);
            panda$collections$Array$add$panda$collections$Array$T(parameters186, ((panda$core$Object*) $tmp210));
        }
        goto $l195;
        $l196:;
    }
    org$pandalanguage$pandac$MethodDecl* $tmp214 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
    $tmp214->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp214->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp217 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp218 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp214, p_owner, p_i->position, doccomment173, annotations181, ((panda$core$Int64) { 59 }), &$s216, parameters186, $tmp217, ((org$pandalanguage$pandac$ASTNode*) $tmp218));
    return $tmp214;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result219;
    panda$collections$Iterator* child$Iter220;
    org$pandalanguage$pandac$ASTNode* child232;
    result219 = ((panda$core$Int64) { 1 });
    {
        ITable* $tmp221 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
        while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp221 = $tmp221->next;
        }
        $fn223 $tmp222 = $tmp221->methods[0];
        panda$collections$Iterator* $tmp224 = $tmp222(((panda$collections$Iterable*) p_node->children));
        child$Iter220 = $tmp224;
        $l225:;
        ITable* $tmp227 = child$Iter220->$class->itable;
        while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp227 = $tmp227->next;
        }
        $fn229 $tmp228 = $tmp227->methods[0];
        panda$core$Bit $tmp230 = $tmp228(child$Iter220);
        panda$core$Bit $tmp231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp230);
        if (!$tmp231.value) goto $l226;
        {
            ITable* $tmp233 = child$Iter220->$class->itable;
            while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp233 = $tmp233->next;
            }
            $fn235 $tmp234 = $tmp233->methods[1];
            panda$core$Object* $tmp236 = $tmp234(child$Iter220);
            child232 = ((org$pandalanguage$pandac$ASTNode*) $tmp236);
            panda$core$Int64 $tmp237 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, child232);
            panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result219, $tmp237);
            result219 = $tmp238;
            panda$core$Bit $tmp239 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result219, ((panda$core$Int64) { 10 }));
            if ($tmp239.value) {
            {
                goto $l226;
            }
            }
        }
        goto $l225;
        $l226:;
    }
    return result219;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    bool $tmp242 = ((panda$core$Bit) { p_body != NULL }).value;
    if (!$tmp242) goto $l243;
    panda$core$Bit $tmp244 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp244);
    $tmp242 = $tmp245.value;
    $l243:;
    panda$core$Bit $tmp246 = { $tmp242 };
    bool $tmp241 = $tmp246.value;
    if (!$tmp241) goto $l247;
    panda$core$Bit $tmp248 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp241 = $tmp248.value;
    $l247:;
    panda$core$Bit $tmp249 = { $tmp241 };
    bool $tmp240 = $tmp249.value;
    if (!$tmp240) goto $l250;
    panda$core$Int64 $tmp251 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp252 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp251, ((panda$core$Int64) { 10 }));
    $tmp240 = $tmp252.value;
    $l250:;
    panda$core$Bit $tmp253 = { $tmp240 };
    return $tmp253;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind256;
    panda$core$String* name257;
    panda$core$String* doccomment258;
    org$pandalanguage$pandac$Annotations* annotations266;
    panda$collections$Array* parameters281;
    panda$collections$Iterator* p$Iter284;
    org$pandalanguage$pandac$ASTNode* p297;
    org$pandalanguage$pandac$Type* returnType309;
    panda$core$Int64 $tmp254 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp254, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp255.value);
    switch (p_m->kind.value) {
        case 145:
        {
            kind256 = ((panda$core$Int64) { 57 });
        }
        break;
        case 146:
        {
            kind256 = ((panda$core$Int64) { 58 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    name257 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp260 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp259)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp260.value) {
    {
        panda$core$Object* $tmp261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp261)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp262.value);
        panda$core$Object* $tmp263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment258 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp263)->payload);
    }
    }
    else {
    {
        doccomment258 = NULL;
    }
    }
    panda$core$Object* $tmp264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp264)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp265.value);
    panda$core$Object* $tmp267 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp268 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp267));
    annotations266 = $tmp268;
    panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp269.value) {
    {
        panda$core$Int64 $tmp270 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp271 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations266->flags, $tmp270);
        annotations266->flags = $tmp271;
    }
    }
    panda$core$Bit $tmp273 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp272 = $tmp273.value;
    if ($tmp272) goto $l274;
    panda$core$Bit $tmp275 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations266);
    $tmp272 = $tmp275.value;
    $l274:;
    panda$core$Bit $tmp276 = { $tmp272 };
    if ($tmp276.value) {
    {
        panda$core$Int64 $tmp277 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp278 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations266->flags, $tmp277);
        annotations266->flags = $tmp278;
    }
    }
    panda$core$Object* $tmp279 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp279)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp280.value);
    panda$collections$Array* $tmp282 = (panda$collections$Array*) malloc(40);
    $tmp282->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp282->refCount.value = 1;
    panda$collections$Array$init($tmp282);
    parameters281 = $tmp282;
    {
        panda$core$Object* $tmp285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp286 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp285)->children)->$class->itable;
        while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp286 = $tmp286->next;
        }
        $fn288 $tmp287 = $tmp286->methods[0];
        panda$collections$Iterator* $tmp289 = $tmp287(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp285)->children));
        p$Iter284 = $tmp289;
        $l290:;
        ITable* $tmp292 = p$Iter284->$class->itable;
        while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp292 = $tmp292->next;
        }
        $fn294 $tmp293 = $tmp292->methods[0];
        panda$core$Bit $tmp295 = $tmp293(p$Iter284);
        panda$core$Bit $tmp296 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp295);
        if (!$tmp296.value) goto $l291;
        {
            ITable* $tmp298 = p$Iter284->$class->itable;
            while ($tmp298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp298 = $tmp298->next;
            }
            $fn300 $tmp299 = $tmp298->methods[1];
            panda$core$Object* $tmp301 = $tmp299(p$Iter284);
            p297 = ((org$pandalanguage$pandac$ASTNode*) $tmp301);
            panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p297->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp302.value);
            panda$core$Int64 $tmp303 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p297->children);
            panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp303, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp304.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp305 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp305->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp305->refCount.value = 1;
            panda$core$Object* $tmp307 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p297->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp308 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp307));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp305, ((panda$core$String*) p297->payload), $tmp308);
            panda$collections$Array$add$panda$collections$Array$T(parameters281, ((panda$core$Object*) $tmp305));
        }
        goto $l290;
        $l291:;
    }
    panda$core$Object* $tmp310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp310));
    returnType309 = $tmp311;
    panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind256, ((panda$core$Int64) { 58 }));
    bool $tmp312 = $tmp313.value;
    if (!$tmp312) goto $l314;
    org$pandalanguage$pandac$Type* $tmp315 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp316 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType309, $tmp315);
    $tmp312 = $tmp316.value;
    $l314:;
    panda$core$Bit $tmp317 = { $tmp312 };
    if ($tmp317.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_m->position, &$s318);
    }
    }
    panda$core$Object* $tmp319 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp319)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp320.value) {
    {
        panda$core$Object* $tmp321 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp322 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations266, ((org$pandalanguage$pandac$ASTNode*) $tmp321));
        if ($tmp322.value) {
        {
            panda$core$Int64 $tmp323 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp324 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations266->flags, $tmp323);
            annotations266->flags = $tmp324;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp325 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
        $tmp325->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp325->refCount.value = 1;
        panda$core$Object* $tmp327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp325, p_owner, p_m->position, doccomment258, annotations266, kind256, name257, parameters281, returnType309, ((org$pandalanguage$pandac$ASTNode*) $tmp327));
        return $tmp325;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp328 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
        $tmp328->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp328->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp328, p_owner, p_m->position, doccomment258, annotations266, kind256, name257, parameters281, returnType309, NULL);
        return $tmp328;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName330;
    panda$core$String* doccomment341;
    org$pandalanguage$pandac$Annotations* annotations349;
    panda$collections$Array* parameters352;
    panda$collections$Iterator* p$Iter357;
    org$pandalanguage$pandac$ASTNode* p370;
    org$pandalanguage$pandac$Type* bound376;
    panda$collections$Array* supertypes388;
    panda$collections$Iterator* intf$Iter393;
    org$pandalanguage$pandac$ASTNode* intf406;
    org$pandalanguage$pandac$ClassDecl* result412;
    panda$core$Bit foundInit415;
    panda$collections$Iterator* c$Iter416;
    org$pandalanguage$pandac$ASTNode* c429;
    org$pandalanguage$pandac$MethodDecl* i434;
    org$pandalanguage$pandac$MethodDecl* m436;
    org$pandalanguage$pandac$ClassDecl* inner438;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp443;
    org$pandalanguage$pandac$ClassDecl* cl447;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp452;
    org$pandalanguage$pandac$MethodDecl* defaultInit462;
    panda$core$Bit $tmp332 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s331);
    if ($tmp332.value) {
    {
        panda$core$String* $tmp333 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s334);
        panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp335, p_cl->payload);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
        fullName330 = $tmp338;
    }
    }
    else {
    {
        fullName330 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp339 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp339, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp340.value);
    panda$core$Object* $tmp342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp343 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp342)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp343.value) {
    {
        panda$core$Object* $tmp344 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp344)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp345.value);
        panda$core$Object* $tmp346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment341 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp346)->payload);
    }
    }
    else {
    {
        doccomment341 = NULL;
    }
    }
    panda$core$Object* $tmp347 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp347)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp348.value);
    panda$core$Object* $tmp350 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp351 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp350));
    annotations349 = $tmp351;
    panda$collections$Array* $tmp353 = (panda$collections$Array*) malloc(40);
    $tmp353->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp353->refCount.value = 1;
    panda$collections$Array$init($tmp353);
    parameters352 = $tmp353;
    panda$core$Object* $tmp355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp355)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp356.value) {
    {
        {
            panda$core$Object* $tmp358 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp359 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp358)->children)->$class->itable;
            while ($tmp359->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp359 = $tmp359->next;
            }
            $fn361 $tmp360 = $tmp359->methods[0];
            panda$collections$Iterator* $tmp362 = $tmp360(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp358)->children));
            p$Iter357 = $tmp362;
            $l363:;
            ITable* $tmp365 = p$Iter357->$class->itable;
            while ($tmp365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp365 = $tmp365->next;
            }
            $fn367 $tmp366 = $tmp365->methods[0];
            panda$core$Bit $tmp368 = $tmp366(p$Iter357);
            panda$core$Bit $tmp369 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp368);
            if (!$tmp369.value) goto $l364;
            {
                ITable* $tmp371 = p$Iter357->$class->itable;
                while ($tmp371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp371 = $tmp371->next;
                }
                $fn373 $tmp372 = $tmp371->methods[1];
                panda$core$Object* $tmp374 = $tmp372(p$Iter357);
                p370 = ((org$pandalanguage$pandac$ASTNode*) $tmp374);
                panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p370->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp375.value);
                panda$core$Int64 $tmp377 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p370->children);
                panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp377, ((panda$core$Int64) { 1 }));
                if ($tmp378.value) {
                {
                    panda$core$Object* $tmp379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p370->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp380 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp379));
                    bound376 = $tmp380;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp381 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p370->children);
                    panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp381, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp382.value);
                    org$pandalanguage$pandac$Type* $tmp383 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound376 = $tmp383;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp384 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp384->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp384->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp384, p370->position, fullName330, ((panda$core$String*) p370->payload), bound376);
                panda$collections$Array$add$panda$collections$Array$T(parameters352, ((panda$core$Object*) $tmp384));
            }
            goto $l363;
            $l364:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp386)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp387.value);
    }
    }
    panda$collections$Array* $tmp389 = (panda$collections$Array*) malloc(40);
    $tmp389->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp389->refCount.value = 1;
    panda$collections$Array$init($tmp389);
    supertypes388 = $tmp389;
    panda$core$Object* $tmp391 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp391)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp392.value);
    {
        panda$core$Object* $tmp394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp395 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp394)->children)->$class->itable;
        while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp395 = $tmp395->next;
        }
        $fn397 $tmp396 = $tmp395->methods[0];
        panda$collections$Iterator* $tmp398 = $tmp396(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp394)->children));
        intf$Iter393 = $tmp398;
        $l399:;
        ITable* $tmp401 = intf$Iter393->$class->itable;
        while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp401 = $tmp401->next;
        }
        $fn403 $tmp402 = $tmp401->methods[0];
        panda$core$Bit $tmp404 = $tmp402(intf$Iter393);
        panda$core$Bit $tmp405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp404);
        if (!$tmp405.value) goto $l400;
        {
            ITable* $tmp407 = intf$Iter393->$class->itable;
            while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp407 = $tmp407->next;
            }
            $fn409 $tmp408 = $tmp407->methods[1];
            panda$core$Object* $tmp410 = $tmp408(intf$Iter393);
            intf406 = ((org$pandalanguage$pandac$ASTNode*) $tmp410);
            org$pandalanguage$pandac$Type* $tmp411 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf406);
            panda$collections$Array$add$panda$collections$Array$T(supertypes388, ((panda$core$Object*) $tmp411));
        }
        goto $l399;
        $l400:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp413 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
    $tmp413->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp413->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp413, p_source, p_cl->position, p_aliases, doccomment341, annotations349, ((panda$core$Int64) { 5011 }), fullName330, ((panda$collections$ListView*) supertypes388), parameters352, self->compiler->root);
    result412 = $tmp413;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result412));
    foundInit415 = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp418 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp417)->children)->$class->itable;
        while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp418 = $tmp418->next;
        }
        $fn420 $tmp419 = $tmp418->methods[0];
        panda$collections$Iterator* $tmp421 = $tmp419(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp417)->children));
        c$Iter416 = $tmp421;
        $l422:;
        ITable* $tmp424 = c$Iter416->$class->itable;
        while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp424 = $tmp424->next;
        }
        $fn426 $tmp425 = $tmp424->methods[0];
        panda$core$Bit $tmp427 = $tmp425(c$Iter416);
        panda$core$Bit $tmp428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp427);
        if (!$tmp428.value) goto $l423;
        {
            ITable* $tmp430 = c$Iter416->$class->itable;
            while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp430 = $tmp430->next;
            }
            $fn432 $tmp431 = $tmp430->methods[1];
            panda$core$Object* $tmp433 = $tmp431(c$Iter416);
            c429 = ((org$pandalanguage$pandac$ASTNode*) $tmp433);
            switch (c429->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result412, c429);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp435 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result412, c429);
                    i434 = $tmp435;
                    if (((panda$core$Bit) { i434 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) i434));
                        panda$collections$Array$add$panda$collections$Array$T(result412->methods, ((panda$core$Object*) i434));
                    }
                    }
                    foundInit415 = ((panda$core$Bit) { true });
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp437 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result412, c429);
                    m436 = $tmp437;
                    if (((panda$core$Bit) { m436 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) m436));
                        panda$collections$Array$add$panda$collections$Array$T(result412->methods, ((panda$core$Object*) m436));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp439 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName330, c429);
                    inner438 = $tmp439;
                    if (((panda$core$Bit) { inner438 != NULL }).value) {
                    {
                        inner438->owner = result412;
                        panda$collections$Array$add$panda$collections$Array$T(result412->classes, ((panda$core$Object*) inner438));
                        panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName330, &$s440);
                        panda$core$Bit $tmp442 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner438)->name, $tmp441);
                        PANDA_ASSERT($tmp442.value);
                        panda$core$Int64 $tmp444 = panda$core$String$length$R$panda$core$Int64(fullName330);
                        panda$core$Int64 $tmp445 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp444, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp443, ((panda$core$Int64$nullable) { $tmp445, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp446 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner438)->name, $tmp443);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner438), $tmp446);
                        panda$collections$Array$add$panda$collections$Array$T(inner438->symbolTable->parents, ((panda$core$Object*) result412->symbolTable));
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner438->symbolTable, ((org$pandalanguage$pandac$Symbol*) result412), ((panda$core$String*) p_cl->payload));
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp448 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName330, c429);
                    cl447 = $tmp448;
                    if (((panda$core$Bit) { cl447 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result412->classes, ((panda$core$Object*) cl447));
                        panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName330, &$s449);
                        panda$core$Bit $tmp451 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl447)->name, $tmp450);
                        PANDA_ASSERT($tmp451.value);
                        panda$core$Int64 $tmp453 = panda$core$String$length$R$panda$core$Int64(fullName330);
                        panda$core$Int64 $tmp454 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp453, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp452, ((panda$core$Int64$nullable) { $tmp454, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp455 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl447)->name, $tmp452);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl447), $tmp455);
                    }
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        goto $l422;
        $l423:;
    }
    panda$core$Bit $tmp457 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit415);
    bool $tmp456 = $tmp457.value;
    if (!$tmp456) goto $l458;
    panda$core$Bit $tmp460 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result412)->name, &$s459);
    $tmp456 = $tmp460.value;
    $l458:;
    panda$core$Bit $tmp461 = { $tmp456 };
    if ($tmp461.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp463 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
        $tmp463->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp463->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp465 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp465->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp465->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp465);
        panda$collections$Array* $tmp468 = (panda$collections$Array*) malloc(40);
        $tmp468->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp468->refCount.value = 1;
        panda$collections$Array$init($tmp468);
        org$pandalanguage$pandac$Type* $tmp470 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp471 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp471->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp471->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp471, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp463, result412, p_cl->position, NULL, $tmp465, ((panda$core$Int64) { 59 }), &$s467, $tmp468, $tmp470, $tmp471);
        defaultInit462 = $tmp463;
        panda$collections$Array$add$panda$collections$Array$T(result412->methods, ((panda$core$Object*) defaultInit462));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit462));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result412;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName473;
    panda$core$String* doccomment484;
    org$pandalanguage$pandac$Annotations* annotations492;
    panda$collections$Array* parameters495;
    panda$collections$Iterator* p$Iter500;
    org$pandalanguage$pandac$ASTNode* p513;
    org$pandalanguage$pandac$Type* bound519;
    panda$collections$Array* supertypes531;
    panda$collections$Iterator* s$Iter536;
    org$pandalanguage$pandac$ASTNode* s549;
    org$pandalanguage$pandac$ClassDecl* result555;
    panda$collections$Iterator* c$Iter558;
    org$pandalanguage$pandac$ASTNode* c571;
    org$pandalanguage$pandac$MethodDecl* i576;
    org$pandalanguage$pandac$MethodDecl* m578;
    org$pandalanguage$pandac$ClassDecl* cl582;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp587;
    org$pandalanguage$pandac$ClassDecl* cl591;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp596;
    panda$core$Bit $tmp475 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s474);
    if ($tmp475.value) {
    {
        panda$core$String* $tmp476 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s477);
        panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp478, p_intf->payload);
        panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s480);
        fullName473 = $tmp481;
    }
    }
    else {
    {
        fullName473 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp482 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp482, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp483.value);
    panda$core$Object* $tmp485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp486 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp485)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp486.value) {
    {
        panda$core$Object* $tmp487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp487)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp488.value);
        panda$core$Object* $tmp489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment484 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp489)->payload);
    }
    }
    else {
    {
        doccomment484 = NULL;
    }
    }
    panda$core$Object* $tmp490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp490)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp491.value);
    panda$core$Object* $tmp493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp494 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp493));
    annotations492 = $tmp494;
    panda$collections$Array* $tmp496 = (panda$collections$Array*) malloc(40);
    $tmp496->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp496->refCount.value = 1;
    panda$collections$Array$init($tmp496);
    parameters495 = $tmp496;
    panda$core$Object* $tmp498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp498)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp499.value) {
    {
        {
            panda$core$Object* $tmp501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp502 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp501)->children)->$class->itable;
            while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp502 = $tmp502->next;
            }
            $fn504 $tmp503 = $tmp502->methods[0];
            panda$collections$Iterator* $tmp505 = $tmp503(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp501)->children));
            p$Iter500 = $tmp505;
            $l506:;
            ITable* $tmp508 = p$Iter500->$class->itable;
            while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp508 = $tmp508->next;
            }
            $fn510 $tmp509 = $tmp508->methods[0];
            panda$core$Bit $tmp511 = $tmp509(p$Iter500);
            panda$core$Bit $tmp512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp511);
            if (!$tmp512.value) goto $l507;
            {
                ITable* $tmp514 = p$Iter500->$class->itable;
                while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp514 = $tmp514->next;
                }
                $fn516 $tmp515 = $tmp514->methods[1];
                panda$core$Object* $tmp517 = $tmp515(p$Iter500);
                p513 = ((org$pandalanguage$pandac$ASTNode*) $tmp517);
                panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p513->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp518.value);
                panda$core$Int64 $tmp520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p513->children);
                panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp520, ((panda$core$Int64) { 1 }));
                if ($tmp521.value) {
                {
                    panda$core$Object* $tmp522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p513->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp522));
                    bound519 = $tmp523;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp524 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p513->children);
                    panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp525.value);
                    org$pandalanguage$pandac$Type* $tmp526 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound519 = $tmp526;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp527 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp527->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp527->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp527, p513->position, fullName473, ((panda$core$String*) p513->payload), bound519);
                panda$collections$Array$add$panda$collections$Array$T(parameters495, ((panda$core$Object*) $tmp527));
            }
            goto $l506;
            $l507:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp529)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp530.value);
    }
    }
    panda$collections$Array* $tmp532 = (panda$collections$Array*) malloc(40);
    $tmp532->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp532->refCount.value = 1;
    panda$collections$Array$init($tmp532);
    supertypes531 = $tmp532;
    panda$core$Object* $tmp534 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp534)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp535.value);
    {
        panda$core$Object* $tmp537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp538 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp537)->children)->$class->itable;
        while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp538 = $tmp538->next;
        }
        $fn540 $tmp539 = $tmp538->methods[0];
        panda$collections$Iterator* $tmp541 = $tmp539(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp537)->children));
        s$Iter536 = $tmp541;
        $l542:;
        ITable* $tmp544 = s$Iter536->$class->itable;
        while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp544 = $tmp544->next;
        }
        $fn546 $tmp545 = $tmp544->methods[0];
        panda$core$Bit $tmp547 = $tmp545(s$Iter536);
        panda$core$Bit $tmp548 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp547);
        if (!$tmp548.value) goto $l543;
        {
            ITable* $tmp550 = s$Iter536->$class->itable;
            while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp550 = $tmp550->next;
            }
            $fn552 $tmp551 = $tmp550->methods[1];
            panda$core$Object* $tmp553 = $tmp551(s$Iter536);
            s549 = ((org$pandalanguage$pandac$ASTNode*) $tmp553);
            org$pandalanguage$pandac$Type* $tmp554 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s549);
            panda$collections$Array$add$panda$collections$Array$T(supertypes531, ((panda$core$Object*) $tmp554));
        }
        goto $l542;
        $l543:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp556 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
    $tmp556->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp556->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp556, p_source, p_intf->position, p_aliases, doccomment484, annotations492, ((panda$core$Int64) { 5012 }), fullName473, ((panda$collections$ListView*) supertypes531), parameters495, self->compiler->root);
    result555 = $tmp556;
    {
        panda$core$Object* $tmp559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp560 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp559)->children)->$class->itable;
        while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp560 = $tmp560->next;
        }
        $fn562 $tmp561 = $tmp560->methods[0];
        panda$collections$Iterator* $tmp563 = $tmp561(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp559)->children));
        c$Iter558 = $tmp563;
        $l564:;
        ITable* $tmp566 = c$Iter558->$class->itable;
        while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp566 = $tmp566->next;
        }
        $fn568 $tmp567 = $tmp566->methods[0];
        panda$core$Bit $tmp569 = $tmp567(c$Iter558);
        panda$core$Bit $tmp570 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp569);
        if (!$tmp570.value) goto $l565;
        {
            ITable* $tmp572 = c$Iter558->$class->itable;
            while ($tmp572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp572 = $tmp572->next;
            }
            $fn574 $tmp573 = $tmp572->methods[1];
            panda$core$Object* $tmp575 = $tmp573(c$Iter558);
            c571 = ((org$pandalanguage$pandac$ASTNode*) $tmp575);
            switch (c571->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result555, c571);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp577 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result555, c571);
                    i576 = $tmp577;
                    if (((panda$core$Bit) { i576 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result555->symbolTable, ((org$pandalanguage$pandac$Symbol*) i576));
                        panda$collections$Array$add$panda$collections$Array$T(result555->methods, ((panda$core$Object*) i576));
                    }
                    }
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp579 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result555, c571);
                    m578 = $tmp579;
                    if (((panda$core$Bit) { m578 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m578->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp580 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp581 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m578->annotations->flags, $tmp580);
                            m578->annotations->flags = $tmp581;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result555->symbolTable, ((org$pandalanguage$pandac$Symbol*) m578));
                        panda$collections$Array$add$panda$collections$Array$T(result555->methods, ((panda$core$Object*) m578));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp583 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName473, c571);
                    cl582 = $tmp583;
                    if (((panda$core$Bit) { cl582 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result555->classes, ((panda$core$Object*) cl582));
                        panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName473, &$s584);
                        panda$core$Bit $tmp586 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl582)->name, $tmp585);
                        PANDA_ASSERT($tmp586.value);
                        panda$core$Int64 $tmp588 = panda$core$String$length$R$panda$core$Int64(fullName473);
                        panda$core$Int64 $tmp589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp588, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp587, ((panda$core$Int64$nullable) { $tmp589, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp590 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl582)->name, $tmp587);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result555->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl582), $tmp590);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp592 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName473, c571);
                    cl591 = $tmp592;
                    if (((panda$core$Bit) { cl591 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result555->classes, ((panda$core$Object*) cl591));
                        panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName473, &$s593);
                        panda$core$Bit $tmp595 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl591)->name, $tmp594);
                        PANDA_ASSERT($tmp595.value);
                        panda$core$Int64 $tmp597 = panda$core$String$length$R$panda$core$Int64(fullName473);
                        panda$core$Int64 $tmp598 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp597, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp596, ((panda$core$Int64$nullable) { $tmp598, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp599 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl591)->name, $tmp596);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result555->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl591), $tmp599);
                    }
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        goto $l564;
        $l565:;
    }
    return result555;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter600;
    org$pandalanguage$pandac$ClassDecl* inner612;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp601 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp601 = $tmp601->next;
        }
        $fn603 $tmp602 = $tmp601->methods[0];
        panda$collections$Iterator* $tmp604 = $tmp602(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter600 = $tmp604;
        $l605:;
        ITable* $tmp607 = inner$Iter600->$class->itable;
        while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp607 = $tmp607->next;
        }
        $fn609 $tmp608 = $tmp607->methods[0];
        panda$core$Bit $tmp610 = $tmp608(inner$Iter600);
        panda$core$Bit $tmp611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp610);
        if (!$tmp611.value) goto $l606;
        {
            ITable* $tmp613 = inner$Iter600->$class->itable;
            while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp613 = $tmp613->next;
            }
            $fn615 $tmp614 = $tmp613->methods[1];
            panda$core$Object* $tmp616 = $tmp614(inner$Iter600);
            inner612 = ((org$pandalanguage$pandac$ClassDecl*) $tmp616);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner612, p_arr);
        }
        goto $l605;
        $l606:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result617;
    panda$core$String* currentPackage620;
    panda$collections$HashMap* aliases622;
    panda$collections$Iterator* c$Iter626;
    org$pandalanguage$pandac$ASTNode* c638;
    panda$core$String* fullName643;
    panda$core$String$Index$nullable idx644;
    panda$core$String* alias647;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp648;
    org$pandalanguage$pandac$ClassDecl* cl651;
    org$pandalanguage$pandac$ClassDecl* cl653;
    panda$collections$Array* $tmp618 = (panda$collections$Array*) malloc(40);
    $tmp618->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp618->refCount.value = 1;
    panda$collections$Array$init($tmp618);
    result617 = $tmp618;
    currentPackage620 = &$s621;
    panda$collections$HashMap* $tmp623 = (panda$collections$HashMap*) malloc(56);
    $tmp623->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp623->refCount.value = 1;
    panda$collections$HashMap$init($tmp623);
    aliases622 = $tmp623;
    panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp625.value);
    {
        ITable* $tmp627 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp627 = $tmp627->next;
        }
        $fn629 $tmp628 = $tmp627->methods[0];
        panda$collections$Iterator* $tmp630 = $tmp628(((panda$collections$Iterable*) p_file->children));
        c$Iter626 = $tmp630;
        $l631:;
        ITable* $tmp633 = c$Iter626->$class->itable;
        while ($tmp633->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp633 = $tmp633->next;
        }
        $fn635 $tmp634 = $tmp633->methods[0];
        panda$core$Bit $tmp636 = $tmp634(c$Iter626);
        panda$core$Bit $tmp637 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp636);
        if (!$tmp637.value) goto $l632;
        {
            ITable* $tmp639 = c$Iter626->$class->itable;
            while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp639 = $tmp639->next;
            }
            $fn641 $tmp640 = $tmp639->methods[1];
            panda$core$Object* $tmp642 = $tmp640(c$Iter626);
            c638 = ((org$pandalanguage$pandac$ASTNode*) $tmp642);
            switch (c638->kind.value) {
                case 100:
                {
                    currentPackage620 = ((panda$core$String*) c638->payload);
                }
                break;
                case 101:
                {
                    fullName643 = ((panda$core$String*) c638->payload);
                    panda$core$String$Index$nullable $tmp646 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName643, &$s645);
                    idx644 = $tmp646;
                    if (((panda$core$Bit) { idx644.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp649 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName643, ((panda$core$String$Index) idx644.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp648, ((panda$core$String$Index$nullable) { $tmp649, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp650 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName643, $tmp648);
                        alias647 = $tmp650;
                    }
                    }
                    else {
                    {
                        alias647 = fullName643;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases622, ((panda$collections$Key*) alias647), ((panda$core$Object*) fullName643));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp652 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases622), currentPackage620, c638);
                    cl651 = $tmp652;
                    if (((panda$core$Bit) { cl651 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl651, result617);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp654 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases622), currentPackage620, c638);
                    cl653 = $tmp654;
                    if (((panda$core$Bit) { cl653 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl653, result617);
                    }
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        goto $l631;
        $l632:;
    }
    return ((panda$collections$ListView*) result617);
}

