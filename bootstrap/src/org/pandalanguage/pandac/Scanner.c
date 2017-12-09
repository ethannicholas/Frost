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
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"


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
typedef panda$collections$Iterator* (*$fn362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn368)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn404)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn410)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn433)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn506)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn512)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn518)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn542)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn554)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn564)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn570)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn576)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn605)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn611)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn617)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn637)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn643)(panda$collections$Iterator*);

static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x69\x6D\x70\x6C\x69\x63\x69\x74", 10, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 1 };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 1 };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };

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
    panda$core$String* $match$0_064;
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
                $match$0_064 = ((panda$core$String*) c58->payload);
                panda$core$Bit $tmp66 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s65);
                if ($tmp66.value) {
                {
                    panda$core$Int64 $tmp67 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp68 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp67);
                    flags45 = $tmp68;
                }
                }
                else {
                panda$core$Bit $tmp70 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s69);
                if ($tmp70.value) {
                {
                    panda$core$Int64 $tmp71 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp72 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp71);
                    flags45 = $tmp72;
                }
                }
                else {
                panda$core$Bit $tmp74 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s73);
                if ($tmp74.value) {
                {
                    panda$core$Int64 $tmp75 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp76 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp75);
                    flags45 = $tmp76;
                }
                }
                else {
                panda$core$Bit $tmp78 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s77);
                if ($tmp78.value) {
                {
                    panda$core$Int64 $tmp79 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp80 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp79);
                    flags45 = $tmp80;
                }
                }
                else {
                panda$core$Bit $tmp82 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s81);
                if ($tmp82.value) {
                {
                    panda$core$Int64 $tmp83 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp84 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp83);
                    flags45 = $tmp84;
                }
                }
                else {
                panda$core$Bit $tmp86 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s85);
                if ($tmp86.value) {
                {
                    panda$core$Int64 $tmp87 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp88 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp87);
                    flags45 = $tmp88;
                }
                }
                else {
                panda$core$Bit $tmp90 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s89);
                if ($tmp90.value) {
                {
                    panda$core$Int64 $tmp91 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp92 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp91);
                    flags45 = $tmp92;
                }
                }
                else {
                panda$core$Bit $tmp94 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s93);
                if ($tmp94.value) {
                {
                    panda$core$Int64 $tmp95 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp96 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp95);
                    flags45 = $tmp96;
                }
                }
                else {
                panda$core$Bit $tmp98 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s97);
                if ($tmp98.value) {
                {
                    panda$core$Int64 $tmp99 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp100 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp99);
                    flags45 = $tmp100;
                }
                }
                else {
                panda$core$Bit $tmp102 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s101);
                if ($tmp102.value) {
                {
                    panda$core$Int64 $tmp103 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp104 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags45, $tmp103);
                    flags45 = $tmp104;
                }
                }
                else {
                panda$core$Bit $tmp106 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_064, &$s105);
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
            panda$core$Bit $tmp239 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result219, ((panda$core$Int64) { 50 }));
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
    panda$core$Bit $tmp252 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp251, ((panda$core$Int64) { 50 }));
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
    panda$core$String* doccomment342;
    org$pandalanguage$pandac$Annotations* annotations350;
    panda$collections$Array* parameters353;
    panda$collections$Iterator* p$Iter358;
    org$pandalanguage$pandac$ASTNode* p371;
    org$pandalanguage$pandac$Type* bound377;
    panda$collections$Array* supertypes389;
    panda$collections$Iterator* intf$Iter394;
    org$pandalanguage$pandac$ASTNode* intf407;
    org$pandalanguage$pandac$ClassDecl* result413;
    panda$core$Bit foundInit416;
    panda$collections$Iterator* c$Iter417;
    org$pandalanguage$pandac$ASTNode* c430;
    org$pandalanguage$pandac$MethodDecl* i435;
    org$pandalanguage$pandac$MethodDecl* m437;
    org$pandalanguage$pandac$ClassDecl* inner439;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp444;
    org$pandalanguage$pandac$ClassDecl* cl448;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp453;
    org$pandalanguage$pandac$MethodDecl* defaultInit463;
    panda$core$Bit $tmp332 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s331);
    if ($tmp332.value) {
    {
        panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s333, p_contextName);
        panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s335);
        panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp336, p_cl->payload);
        panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
        fullName330 = $tmp339;
    }
    }
    else {
    {
        fullName330 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp340 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp340, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp341.value);
    panda$core$Object* $tmp343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp344 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp343)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp344.value) {
    {
        panda$core$Object* $tmp345 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp345)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp346.value);
        panda$core$Object* $tmp347 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment342 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp347)->payload);
    }
    }
    else {
    {
        doccomment342 = NULL;
    }
    }
    panda$core$Object* $tmp348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp348)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp349.value);
    panda$core$Object* $tmp351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp352 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp351));
    annotations350 = $tmp352;
    panda$collections$Array* $tmp354 = (panda$collections$Array*) malloc(40);
    $tmp354->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp354->refCount.value = 1;
    panda$collections$Array$init($tmp354);
    parameters353 = $tmp354;
    panda$core$Object* $tmp356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp356)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp357.value) {
    {
        {
            panda$core$Object* $tmp359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp360 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp359)->children)->$class->itable;
            while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp360 = $tmp360->next;
            }
            $fn362 $tmp361 = $tmp360->methods[0];
            panda$collections$Iterator* $tmp363 = $tmp361(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp359)->children));
            p$Iter358 = $tmp363;
            $l364:;
            ITable* $tmp366 = p$Iter358->$class->itable;
            while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp366 = $tmp366->next;
            }
            $fn368 $tmp367 = $tmp366->methods[0];
            panda$core$Bit $tmp369 = $tmp367(p$Iter358);
            panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
            if (!$tmp370.value) goto $l365;
            {
                ITable* $tmp372 = p$Iter358->$class->itable;
                while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp372 = $tmp372->next;
                }
                $fn374 $tmp373 = $tmp372->methods[1];
                panda$core$Object* $tmp375 = $tmp373(p$Iter358);
                p371 = ((org$pandalanguage$pandac$ASTNode*) $tmp375);
                panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p371->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp376.value);
                panda$core$Int64 $tmp378 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p371->children);
                panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp378, ((panda$core$Int64) { 1 }));
                if ($tmp379.value) {
                {
                    panda$core$Object* $tmp380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p371->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp381 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp380));
                    bound377 = $tmp381;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp382 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p371->children);
                    panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp382, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp383.value);
                    org$pandalanguage$pandac$Type* $tmp384 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound377 = $tmp384;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp385 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp385->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp385->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp385, p371->position, fullName330, ((panda$core$String*) p371->payload), bound377);
                panda$collections$Array$add$panda$collections$Array$T(parameters353, ((panda$core$Object*) $tmp385));
            }
            goto $l364;
            $l365:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp387 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp387)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp388.value);
    }
    }
    panda$collections$Array* $tmp390 = (panda$collections$Array*) malloc(40);
    $tmp390->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp390->refCount.value = 1;
    panda$collections$Array$init($tmp390);
    supertypes389 = $tmp390;
    panda$core$Object* $tmp392 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp392)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp393.value);
    {
        panda$core$Object* $tmp395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp396 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp395)->children)->$class->itable;
        while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp396 = $tmp396->next;
        }
        $fn398 $tmp397 = $tmp396->methods[0];
        panda$collections$Iterator* $tmp399 = $tmp397(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp395)->children));
        intf$Iter394 = $tmp399;
        $l400:;
        ITable* $tmp402 = intf$Iter394->$class->itable;
        while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp402 = $tmp402->next;
        }
        $fn404 $tmp403 = $tmp402->methods[0];
        panda$core$Bit $tmp405 = $tmp403(intf$Iter394);
        panda$core$Bit $tmp406 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp405);
        if (!$tmp406.value) goto $l401;
        {
            ITable* $tmp408 = intf$Iter394->$class->itable;
            while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp408 = $tmp408->next;
            }
            $fn410 $tmp409 = $tmp408->methods[1];
            panda$core$Object* $tmp411 = $tmp409(intf$Iter394);
            intf407 = ((org$pandalanguage$pandac$ASTNode*) $tmp411);
            org$pandalanguage$pandac$Type* $tmp412 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf407);
            panda$collections$Array$add$panda$collections$Array$T(supertypes389, ((panda$core$Object*) $tmp412));
        }
        goto $l400;
        $l401:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp414 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
    $tmp414->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp414->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp414, p_source, p_cl->position, p_aliases, doccomment342, annotations350, ((panda$core$Int64) { 5011 }), fullName330, ((panda$collections$ListView*) supertypes389), parameters353, self->compiler->root);
    result413 = $tmp414;
    foundInit416 = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp418 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp419 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp418)->children)->$class->itable;
        while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp419 = $tmp419->next;
        }
        $fn421 $tmp420 = $tmp419->methods[0];
        panda$collections$Iterator* $tmp422 = $tmp420(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp418)->children));
        c$Iter417 = $tmp422;
        $l423:;
        ITable* $tmp425 = c$Iter417->$class->itable;
        while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp425 = $tmp425->next;
        }
        $fn427 $tmp426 = $tmp425->methods[0];
        panda$core$Bit $tmp428 = $tmp426(c$Iter417);
        panda$core$Bit $tmp429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp428);
        if (!$tmp429.value) goto $l424;
        {
            ITable* $tmp431 = c$Iter417->$class->itable;
            while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp431 = $tmp431->next;
            }
            $fn433 $tmp432 = $tmp431->methods[1];
            panda$core$Object* $tmp434 = $tmp432(c$Iter417);
            c430 = ((org$pandalanguage$pandac$ASTNode*) $tmp434);
            switch (c430->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result413, c430);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp436 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result413, c430);
                    i435 = $tmp436;
                    if (((panda$core$Bit) { i435 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result413->symbolTable, ((org$pandalanguage$pandac$Symbol*) i435));
                        panda$collections$Array$add$panda$collections$Array$T(result413->methods, ((panda$core$Object*) i435));
                    }
                    }
                    foundInit416 = ((panda$core$Bit) { true });
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp438 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result413, c430);
                    m437 = $tmp438;
                    if (((panda$core$Bit) { m437 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result413->symbolTable, ((org$pandalanguage$pandac$Symbol*) m437));
                        panda$collections$Array$add$panda$collections$Array$T(result413->methods, ((panda$core$Object*) m437));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp440 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName330, c430);
                    inner439 = $tmp440;
                    if (((panda$core$Bit) { inner439 != NULL }).value) {
                    {
                        inner439->owner = result413;
                        panda$collections$Array$add$panda$collections$Array$T(result413->classes, ((panda$core$Object*) inner439));
                        panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName330, &$s441);
                        panda$core$Bit $tmp443 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner439)->name, $tmp442);
                        PANDA_ASSERT($tmp443.value);
                        panda$core$Int64 $tmp445 = panda$core$String$length$R$panda$core$Int64(fullName330);
                        panda$core$Int64 $tmp446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp445, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp444, ((panda$core$Int64$nullable) { $tmp446, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp447 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner439)->name, $tmp444);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result413->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner439), $tmp447);
                        panda$collections$Array$add$panda$collections$Array$T(inner439->symbolTable->parents, ((panda$core$Object*) result413->symbolTable));
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner439->symbolTable, ((org$pandalanguage$pandac$Symbol*) result413), ((panda$core$String*) p_cl->payload));
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp449 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName330, c430);
                    cl448 = $tmp449;
                    if (((panda$core$Bit) { cl448 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result413->classes, ((panda$core$Object*) cl448));
                        panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName330, &$s450);
                        panda$core$Bit $tmp452 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl448)->name, $tmp451);
                        PANDA_ASSERT($tmp452.value);
                        panda$core$Int64 $tmp454 = panda$core$String$length$R$panda$core$Int64(fullName330);
                        panda$core$Int64 $tmp455 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp454, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp453, ((panda$core$Int64$nullable) { $tmp455, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp456 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl448)->name, $tmp453);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result413->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl448), $tmp456);
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
        goto $l423;
        $l424:;
    }
    panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit416);
    bool $tmp457 = $tmp458.value;
    if (!$tmp457) goto $l459;
    panda$core$Bit $tmp461 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result413)->name, &$s460);
    $tmp457 = $tmp461.value;
    $l459:;
    panda$core$Bit $tmp462 = { $tmp457 };
    if ($tmp462.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp464 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
        $tmp464->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp464->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp466 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp466->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp466->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp466);
        panda$collections$Array* $tmp469 = (panda$collections$Array*) malloc(40);
        $tmp469->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp469->refCount.value = 1;
        panda$collections$Array$init($tmp469);
        org$pandalanguage$pandac$Type* $tmp471 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp472 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp472->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp472->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp472, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp464, result413, p_cl->position, NULL, $tmp466, ((panda$core$Int64) { 59 }), &$s468, $tmp469, $tmp471, $tmp472);
        defaultInit463 = $tmp464;
        panda$collections$Array$add$panda$collections$Array$T(result413->methods, ((panda$core$Object*) defaultInit463));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result413->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit463));
    }
    }
    return result413;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName474;
    panda$core$String* doccomment486;
    org$pandalanguage$pandac$Annotations* annotations494;
    panda$collections$Array* parameters497;
    panda$collections$Iterator* p$Iter502;
    org$pandalanguage$pandac$ASTNode* p515;
    org$pandalanguage$pandac$Type* bound521;
    panda$collections$Array* supertypes533;
    panda$collections$Iterator* s$Iter538;
    org$pandalanguage$pandac$ASTNode* s551;
    org$pandalanguage$pandac$ClassDecl* result557;
    panda$collections$Iterator* c$Iter560;
    org$pandalanguage$pandac$ASTNode* c573;
    org$pandalanguage$pandac$MethodDecl* i578;
    org$pandalanguage$pandac$MethodDecl* m580;
    org$pandalanguage$pandac$ClassDecl* cl584;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp589;
    org$pandalanguage$pandac$ClassDecl* cl593;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp598;
    panda$core$Bit $tmp476 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s475);
    if ($tmp476.value) {
    {
        panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s477, p_contextName);
        panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s479);
        panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp480, p_intf->payload);
        panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s482);
        fullName474 = $tmp483;
    }
    }
    else {
    {
        fullName474 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp484 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp484, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp485.value);
    panda$core$Object* $tmp487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp488 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp487)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp488.value) {
    {
        panda$core$Object* $tmp489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp489)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp490.value);
        panda$core$Object* $tmp491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment486 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp491)->payload);
    }
    }
    else {
    {
        doccomment486 = NULL;
    }
    }
    panda$core$Object* $tmp492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp492)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp493.value);
    panda$core$Object* $tmp495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp496 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp495));
    annotations494 = $tmp496;
    panda$collections$Array* $tmp498 = (panda$collections$Array*) malloc(40);
    $tmp498->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp498->refCount.value = 1;
    panda$collections$Array$init($tmp498);
    parameters497 = $tmp498;
    panda$core$Object* $tmp500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp500)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp501.value) {
    {
        {
            panda$core$Object* $tmp503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp504 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp503)->children)->$class->itable;
            while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp504 = $tmp504->next;
            }
            $fn506 $tmp505 = $tmp504->methods[0];
            panda$collections$Iterator* $tmp507 = $tmp505(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp503)->children));
            p$Iter502 = $tmp507;
            $l508:;
            ITable* $tmp510 = p$Iter502->$class->itable;
            while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp510 = $tmp510->next;
            }
            $fn512 $tmp511 = $tmp510->methods[0];
            panda$core$Bit $tmp513 = $tmp511(p$Iter502);
            panda$core$Bit $tmp514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp513);
            if (!$tmp514.value) goto $l509;
            {
                ITable* $tmp516 = p$Iter502->$class->itable;
                while ($tmp516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp516 = $tmp516->next;
                }
                $fn518 $tmp517 = $tmp516->methods[1];
                panda$core$Object* $tmp519 = $tmp517(p$Iter502);
                p515 = ((org$pandalanguage$pandac$ASTNode*) $tmp519);
                panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p515->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp520.value);
                panda$core$Int64 $tmp522 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p515->children);
                panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp522, ((panda$core$Int64) { 1 }));
                if ($tmp523.value) {
                {
                    panda$core$Object* $tmp524 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p515->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp525 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp524));
                    bound521 = $tmp525;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp526 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p515->children);
                    panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp526, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp527.value);
                    org$pandalanguage$pandac$Type* $tmp528 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound521 = $tmp528;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp529 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp529->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp529->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp529, p515->position, fullName474, ((panda$core$String*) p515->payload), bound521);
                panda$collections$Array$add$panda$collections$Array$T(parameters497, ((panda$core$Object*) $tmp529));
            }
            goto $l508;
            $l509:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp531)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp532.value);
    }
    }
    panda$collections$Array* $tmp534 = (panda$collections$Array*) malloc(40);
    $tmp534->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp534->refCount.value = 1;
    panda$collections$Array$init($tmp534);
    supertypes533 = $tmp534;
    panda$core$Object* $tmp536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp536)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp537.value);
    {
        panda$core$Object* $tmp539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp540 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp539)->children)->$class->itable;
        while ($tmp540->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp540 = $tmp540->next;
        }
        $fn542 $tmp541 = $tmp540->methods[0];
        panda$collections$Iterator* $tmp543 = $tmp541(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp539)->children));
        s$Iter538 = $tmp543;
        $l544:;
        ITable* $tmp546 = s$Iter538->$class->itable;
        while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp546 = $tmp546->next;
        }
        $fn548 $tmp547 = $tmp546->methods[0];
        panda$core$Bit $tmp549 = $tmp547(s$Iter538);
        panda$core$Bit $tmp550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp549);
        if (!$tmp550.value) goto $l545;
        {
            ITable* $tmp552 = s$Iter538->$class->itable;
            while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp552 = $tmp552->next;
            }
            $fn554 $tmp553 = $tmp552->methods[1];
            panda$core$Object* $tmp555 = $tmp553(s$Iter538);
            s551 = ((org$pandalanguage$pandac$ASTNode*) $tmp555);
            org$pandalanguage$pandac$Type* $tmp556 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s551);
            panda$collections$Array$add$panda$collections$Array$T(supertypes533, ((panda$core$Object*) $tmp556));
        }
        goto $l544;
        $l545:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp558 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
    $tmp558->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp558->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp558, p_source, p_intf->position, p_aliases, doccomment486, annotations494, ((panda$core$Int64) { 5012 }), fullName474, ((panda$collections$ListView*) supertypes533), parameters497, self->compiler->root);
    result557 = $tmp558;
    {
        panda$core$Object* $tmp561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp562 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp561)->children)->$class->itable;
        while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp562 = $tmp562->next;
        }
        $fn564 $tmp563 = $tmp562->methods[0];
        panda$collections$Iterator* $tmp565 = $tmp563(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp561)->children));
        c$Iter560 = $tmp565;
        $l566:;
        ITable* $tmp568 = c$Iter560->$class->itable;
        while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp568 = $tmp568->next;
        }
        $fn570 $tmp569 = $tmp568->methods[0];
        panda$core$Bit $tmp571 = $tmp569(c$Iter560);
        panda$core$Bit $tmp572 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp571);
        if (!$tmp572.value) goto $l567;
        {
            ITable* $tmp574 = c$Iter560->$class->itable;
            while ($tmp574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp574 = $tmp574->next;
            }
            $fn576 $tmp575 = $tmp574->methods[1];
            panda$core$Object* $tmp577 = $tmp575(c$Iter560);
            c573 = ((org$pandalanguage$pandac$ASTNode*) $tmp577);
            switch (c573->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result557, c573);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp579 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result557, c573);
                    i578 = $tmp579;
                    if (((panda$core$Bit) { i578 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result557->symbolTable, ((org$pandalanguage$pandac$Symbol*) i578));
                        panda$collections$Array$add$panda$collections$Array$T(result557->methods, ((panda$core$Object*) i578));
                    }
                    }
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp581 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result557, c573);
                    m580 = $tmp581;
                    if (((panda$core$Bit) { m580 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m580->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp582 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp583 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m580->annotations->flags, $tmp582);
                            m580->annotations->flags = $tmp583;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result557->symbolTable, ((org$pandalanguage$pandac$Symbol*) m580));
                        panda$collections$Array$add$panda$collections$Array$T(result557->methods, ((panda$core$Object*) m580));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp585 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName474, c573);
                    cl584 = $tmp585;
                    if (((panda$core$Bit) { cl584 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result557->classes, ((panda$core$Object*) cl584));
                        panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName474, &$s586);
                        panda$core$Bit $tmp588 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl584)->name, $tmp587);
                        PANDA_ASSERT($tmp588.value);
                        panda$core$Int64 $tmp590 = panda$core$String$length$R$panda$core$Int64(fullName474);
                        panda$core$Int64 $tmp591 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp590, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp589, ((panda$core$Int64$nullable) { $tmp591, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp592 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl584)->name, $tmp589);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result557->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl584), $tmp592);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp594 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName474, c573);
                    cl593 = $tmp594;
                    if (((panda$core$Bit) { cl593 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result557->classes, ((panda$core$Object*) cl593));
                        panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName474, &$s595);
                        panda$core$Bit $tmp597 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl593)->name, $tmp596);
                        PANDA_ASSERT($tmp597.value);
                        panda$core$Int64 $tmp599 = panda$core$String$length$R$panda$core$Int64(fullName474);
                        panda$core$Int64 $tmp600 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp599, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp598, ((panda$core$Int64$nullable) { $tmp600, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp601 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl593)->name, $tmp598);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result557->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl593), $tmp601);
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
        goto $l566;
        $l567:;
    }
    return result557;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter602;
    org$pandalanguage$pandac$ClassDecl* inner614;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp603 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp603->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp603 = $tmp603->next;
        }
        $fn605 $tmp604 = $tmp603->methods[0];
        panda$collections$Iterator* $tmp606 = $tmp604(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter602 = $tmp606;
        $l607:;
        ITable* $tmp609 = inner$Iter602->$class->itable;
        while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp609 = $tmp609->next;
        }
        $fn611 $tmp610 = $tmp609->methods[0];
        panda$core$Bit $tmp612 = $tmp610(inner$Iter602);
        panda$core$Bit $tmp613 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp612);
        if (!$tmp613.value) goto $l608;
        {
            ITable* $tmp615 = inner$Iter602->$class->itable;
            while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp615 = $tmp615->next;
            }
            $fn617 $tmp616 = $tmp615->methods[1];
            panda$core$Object* $tmp618 = $tmp616(inner$Iter602);
            inner614 = ((org$pandalanguage$pandac$ClassDecl*) $tmp618);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner614, p_arr);
        }
        goto $l607;
        $l608:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result619;
    panda$core$String* currentPackage622;
    panda$collections$HashMap* aliases624;
    panda$collections$Iterator* c$Iter628;
    org$pandalanguage$pandac$ASTNode* c640;
    panda$core$String* fullName645;
    panda$core$String$Index$nullable idx646;
    panda$core$String* alias649;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp650;
    org$pandalanguage$pandac$ClassDecl* cl653;
    org$pandalanguage$pandac$ClassDecl* cl655;
    panda$collections$Array* $tmp620 = (panda$collections$Array*) malloc(40);
    $tmp620->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp620->refCount.value = 1;
    panda$collections$Array$init($tmp620);
    result619 = $tmp620;
    currentPackage622 = &$s623;
    panda$collections$HashMap* $tmp625 = (panda$collections$HashMap*) malloc(56);
    $tmp625->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp625->refCount.value = 1;
    panda$collections$HashMap$init($tmp625);
    aliases624 = $tmp625;
    panda$core$Bit $tmp627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp627.value);
    {
        ITable* $tmp629 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp629 = $tmp629->next;
        }
        $fn631 $tmp630 = $tmp629->methods[0];
        panda$collections$Iterator* $tmp632 = $tmp630(((panda$collections$Iterable*) p_file->children));
        c$Iter628 = $tmp632;
        $l633:;
        ITable* $tmp635 = c$Iter628->$class->itable;
        while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp635 = $tmp635->next;
        }
        $fn637 $tmp636 = $tmp635->methods[0];
        panda$core$Bit $tmp638 = $tmp636(c$Iter628);
        panda$core$Bit $tmp639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp638);
        if (!$tmp639.value) goto $l634;
        {
            ITable* $tmp641 = c$Iter628->$class->itable;
            while ($tmp641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp641 = $tmp641->next;
            }
            $fn643 $tmp642 = $tmp641->methods[1];
            panda$core$Object* $tmp644 = $tmp642(c$Iter628);
            c640 = ((org$pandalanguage$pandac$ASTNode*) $tmp644);
            switch (c640->kind.value) {
                case 100:
                {
                    currentPackage622 = ((panda$core$String*) c640->payload);
                }
                break;
                case 101:
                {
                    fullName645 = ((panda$core$String*) c640->payload);
                    panda$core$String$Index$nullable $tmp648 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName645, &$s647);
                    idx646 = $tmp648;
                    if (((panda$core$Bit) { idx646.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp651 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName645, ((panda$core$String$Index) idx646.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp650, ((panda$core$String$Index$nullable) { $tmp651, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp652 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName645, $tmp650);
                        alias649 = $tmp652;
                    }
                    }
                    else {
                    {
                        alias649 = fullName645;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases624, ((panda$collections$Key*) alias649), ((panda$core$Object*) fullName645));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp654 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases624), currentPackage622, c640);
                    cl653 = $tmp654;
                    if (((panda$core$Bit) { cl653 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl653, result619);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp656 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases624), currentPackage622, c640);
                    cl655 = $tmp656;
                    if (((panda$core$Bit) { cl655 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl655, result619);
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
        goto $l633;
        $l634:;
    }
    return ((panda$collections$ListView*) result619);
}

