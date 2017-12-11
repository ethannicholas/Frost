#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ImmutableArray.h"
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
#include "org/pandalanguage/pandac/Compiler/Settings.h"
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

typedef panda$collections$Iterator* (*$fn24)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn47)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn53)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn59)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn201)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn219)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn231)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn294)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn300)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn361)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn367)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn373)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn401)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn407)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn413)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn437)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn521)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn551)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn557)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn567)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn573)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn579)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn608)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn620)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn634)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn646)(panda$collections$Iterator*);

static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, 1797670743561030032, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x69\x6D\x70\x6C\x69\x63\x69\x74", 10, -3608168014777337900, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, 1744890057187, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, 176265944400704, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    panda$collections$Array* children6;
    panda$collections$Array* children18;
    panda$collections$Iterator* c$Iter21;
    org$pandalanguage$pandac$ASTNode* c33;
    org$pandalanguage$pandac$Type* child38;
    switch (p_type->kind.value) {
        case 138:
        {
            org$pandalanguage$pandac$Type* $tmp1 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            return $tmp1;
        }
        break;
        case 109:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_type->children == NULL }).value);
            org$pandalanguage$pandac$Type* $tmp2 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 10 }), p_type->position);
            return $tmp2;
        }
        break;
        case 110:
        {
            panda$core$Int64 $tmp4 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->children);
            panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp5.value);
            panda$collections$Array* $tmp7 = (panda$collections$Array*) malloc(40);
            $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp7->refCount.value = 1;
            panda$collections$Array$init($tmp7);
            children6 = $tmp7;
            panda$core$Object* $tmp9 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp10 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp9));
            panda$collections$Array$add$panda$collections$Array$T(children6, ((panda$core$Object*) $tmp10));
            org$pandalanguage$pandac$Type* $tmp11 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp11->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp11->refCount.value = 1;
            panda$core$Object* $tmp13 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children6, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp13))->name, &$s14);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp11, $tmp15, ((panda$core$Int64) { 11 }), p_type->position, ((panda$collections$ListView*) children6), ((panda$core$Bit) { false }));
            return $tmp11;
        }
        break;
        case 154:
        {
            panda$core$Int64 $tmp16 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->children);
            panda$core$Bit $tmp17 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp16, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp17.value);
            panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
            $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp19->refCount.value = 1;
            panda$collections$Array$init($tmp19);
            children18 = $tmp19;
            {
                ITable* $tmp22 = ((panda$collections$Iterable*) p_type->children)->$class->itable;
                while ($tmp22->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp22 = $tmp22->next;
                }
                $fn24 $tmp23 = $tmp22->methods[0];
                panda$collections$Iterator* $tmp25 = $tmp23(((panda$collections$Iterable*) p_type->children));
                c$Iter21 = $tmp25;
                $l26:;
                ITable* $tmp28 = c$Iter21->$class->itable;
                while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp28 = $tmp28->next;
                }
                $fn30 $tmp29 = $tmp28->methods[0];
                panda$core$Bit $tmp31 = $tmp29(c$Iter21);
                panda$core$Bit $tmp32 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp31);
                if (!$tmp32.value) goto $l27;
                {
                    ITable* $tmp34 = c$Iter21->$class->itable;
                    while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp34 = $tmp34->next;
                    }
                    $fn36 $tmp35 = $tmp34->methods[1];
                    panda$core$Object* $tmp37 = $tmp35(c$Iter21);
                    c33 = ((org$pandalanguage$pandac$ASTNode*) $tmp37);
                    org$pandalanguage$pandac$Type* $tmp39 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, c33);
                    child38 = $tmp39;
                    panda$collections$Array$add$panda$collections$Array$T(children18, ((panda$core$Object*) child38));
                }
                goto $l26;
                $l27:;
            }
            org$pandalanguage$pandac$Type* $tmp40 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp40->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp40->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp40, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 21 }), p_type->position, ((panda$collections$ListView*) children18), ((panda$core$Bit) { false }));
            return $tmp40;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_a) {
    panda$core$Int64 flags43;
    panda$collections$Iterator* c$Iter44;
    org$pandalanguage$pandac$ASTNode* c56;
    panda$core$String* $match$46_1362;
    panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp42.value);
    flags43 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp45 = ((panda$collections$Iterable*) p_a->children)->$class->itable;
        while ($tmp45->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp45 = $tmp45->next;
        }
        $fn47 $tmp46 = $tmp45->methods[0];
        panda$collections$Iterator* $tmp48 = $tmp46(((panda$collections$Iterable*) p_a->children));
        c$Iter44 = $tmp48;
        $l49:;
        ITable* $tmp51 = c$Iter44->$class->itable;
        while ($tmp51->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp51 = $tmp51->next;
        }
        $fn53 $tmp52 = $tmp51->methods[0];
        panda$core$Bit $tmp54 = $tmp52(c$Iter44);
        panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp54);
        if (!$tmp55.value) goto $l50;
        {
            ITable* $tmp57 = c$Iter44->$class->itable;
            while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp57 = $tmp57->next;
            }
            $fn59 $tmp58 = $tmp57->methods[1];
            panda$core$Object* $tmp60 = $tmp58(c$Iter44);
            c56 = ((org$pandalanguage$pandac$ASTNode*) $tmp60);
            panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c56->kind, ((panda$core$Int64) { 143 }));
            PANDA_ASSERT($tmp61.value);
            {
                $match$46_1362 = ((panda$core$String*) c56->payload);
                panda$core$Bit $tmp64 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s63);
                if ($tmp64.value) {
                {
                    panda$core$Int64 $tmp65 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp66 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp65);
                    flags43 = $tmp66;
                }
                }
                else {
                panda$core$Bit $tmp68 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s67);
                if ($tmp68.value) {
                {
                    panda$core$Int64 $tmp69 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp70 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp69);
                    flags43 = $tmp70;
                }
                }
                else {
                panda$core$Bit $tmp72 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s71);
                if ($tmp72.value) {
                {
                    panda$core$Int64 $tmp73 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp74 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp73);
                    flags43 = $tmp74;
                }
                }
                else {
                panda$core$Bit $tmp76 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s75);
                if ($tmp76.value) {
                {
                    panda$core$Int64 $tmp77 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp78 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp77);
                    flags43 = $tmp78;
                }
                }
                else {
                panda$core$Bit $tmp80 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s79);
                if ($tmp80.value) {
                {
                    panda$core$Int64 $tmp81 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp82 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp81);
                    flags43 = $tmp82;
                }
                }
                else {
                panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s83);
                if ($tmp84.value) {
                {
                    panda$core$Int64 $tmp85 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp86 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp85);
                    flags43 = $tmp86;
                }
                }
                else {
                panda$core$Bit $tmp88 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s87);
                if ($tmp88.value) {
                {
                    panda$core$Int64 $tmp89 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp90 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp89);
                    flags43 = $tmp90;
                }
                }
                else {
                panda$core$Bit $tmp92 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s91);
                if ($tmp92.value) {
                {
                    panda$core$Int64 $tmp93 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp94 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp93);
                    flags43 = $tmp94;
                }
                }
                else {
                panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s95);
                if ($tmp96.value) {
                {
                    panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp97);
                    flags43 = $tmp98;
                }
                }
                else {
                panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s99);
                if ($tmp100.value) {
                {
                    panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp101);
                    flags43 = $tmp102;
                }
                }
                else {
                panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s103);
                if ($tmp104.value) {
                {
                    panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                    panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp105);
                    flags43 = $tmp106;
                }
                }
                else {
                {
                    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s107, c56->payload);
                    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, c56->position, $tmp110);
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
        goto $l49;
        $l50:;
    }
    org$pandalanguage$pandac$Annotations* $tmp111 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp111->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp111->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp111, flags43);
    return $tmp111;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment115;
    org$pandalanguage$pandac$Annotations* annotations121;
    panda$core$Int64 kind124;
    panda$collections$Iterator* decl$Iter128;
    org$pandalanguage$pandac$ASTNode* decl141;
    org$pandalanguage$pandac$ASTNode* value148;
    org$pandalanguage$pandac$Type* type154;
    org$pandalanguage$pandac$FieldDecl* field163;
    panda$core$Int64 $tmp113 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp113, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp114.value);
    panda$core$Object* $tmp116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp117 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp116)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp117.value) {
    {
        panda$core$Object* $tmp118 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp118)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp119.value);
        panda$core$Object* $tmp120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment115 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp120)->payload);
    }
    }
    else {
    {
        doccomment115 = NULL;
    }
    }
    panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp123 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp122));
    annotations121 = $tmp123;
    panda$core$Object* $tmp125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    switch (((org$pandalanguage$pandac$ASTNode*) $tmp125)->kind.value) {
        case 130:
        {
            kind124 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            kind124 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            kind124 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp126 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp127 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations121->flags, $tmp126);
            annotations121->flags = $tmp127;
        }
        break;
        case 133:
        {
            kind124 = ((panda$core$Int64) { 10003 });
        }
        break;
    }
    {
        panda$core$Object* $tmp129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp130 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp129)->children)->$class->itable;
        while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp130 = $tmp130->next;
        }
        $fn132 $tmp131 = $tmp130->methods[0];
        panda$collections$Iterator* $tmp133 = $tmp131(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp129)->children));
        decl$Iter128 = $tmp133;
        $l134:;
        ITable* $tmp136 = decl$Iter128->$class->itable;
        while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp136 = $tmp136->next;
        }
        $fn138 $tmp137 = $tmp136->methods[0];
        panda$core$Bit $tmp139 = $tmp137(decl$Iter128);
        panda$core$Bit $tmp140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp139);
        if (!$tmp140.value) goto $l135;
        {
            ITable* $tmp142 = decl$Iter128->$class->itable;
            while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp142 = $tmp142->next;
            }
            $fn144 $tmp143 = $tmp142->methods[1];
            panda$core$Object* $tmp145 = $tmp143(decl$Iter128);
            decl141 = ((org$pandalanguage$pandac$ASTNode*) $tmp145);
            panda$core$Object* $tmp146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl141->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp146)->kind, ((panda$core$Int64) { 106 }));
            PANDA_ASSERT($tmp147.value);
            panda$core$Int64 $tmp149 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl141->children);
            panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, ((panda$core$Int64) { 2 }));
            if ($tmp150.value) {
            {
                panda$core$Object* $tmp151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl141->children, ((panda$core$Int64) { 1 }));
                value148 = ((org$pandalanguage$pandac$ASTNode*) $tmp151);
            }
            }
            else {
            {
                panda$core$Int64 $tmp152 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl141->children);
                panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp152, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp153.value);
                value148 = NULL;
            }
            }
            panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl141->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp155)->children != NULL }).value) {
            {
                panda$core$Object* $tmp156 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl141->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp157 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp156)->children);
                panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp157, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp158.value);
                panda$core$Object* $tmp159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl141->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp159)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp161 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp160));
                type154 = $tmp161;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp162 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type154 = $tmp162;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp164 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
            $tmp164->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp164->refCount.value = 1;
            panda$core$Object* $tmp166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl141->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp164, p_owner, decl141->position, doccomment115, annotations121, kind124, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp166)->payload), type154, value148);
            field163 = $tmp164;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field163));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field163));
        }
        goto $l134;
        $l135:;
    }
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i) {
    panda$core$String* doccomment169;
    org$pandalanguage$pandac$Annotations* annotations177;
    panda$collections$Array* parameters182;
    panda$collections$Iterator* p$Iter185;
    org$pandalanguage$pandac$ASTNode* p198;
    panda$core$Int64 $tmp167 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp168.value);
    panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp171 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp170)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp171.value) {
    {
        panda$core$Object* $tmp172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp172)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp173.value);
        panda$core$Object* $tmp174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        doccomment169 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)->payload);
    }
    }
    else {
    {
        doccomment169 = NULL;
    }
    }
    panda$core$Object* $tmp175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp175)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp176.value);
    panda$core$Object* $tmp178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp179 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp178));
    annotations177 = $tmp179;
    panda$core$Object* $tmp180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp180)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp181.value);
    panda$collections$Array* $tmp183 = (panda$collections$Array*) malloc(40);
    $tmp183->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp183->refCount.value = 1;
    panda$collections$Array$init($tmp183);
    parameters182 = $tmp183;
    {
        panda$core$Object* $tmp186 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp187 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp186)->children)->$class->itable;
        while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp187 = $tmp187->next;
        }
        $fn189 $tmp188 = $tmp187->methods[0];
        panda$collections$Iterator* $tmp190 = $tmp188(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp186)->children));
        p$Iter185 = $tmp190;
        $l191:;
        ITable* $tmp193 = p$Iter185->$class->itable;
        while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp193 = $tmp193->next;
        }
        $fn195 $tmp194 = $tmp193->methods[0];
        panda$core$Bit $tmp196 = $tmp194(p$Iter185);
        panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp196);
        if (!$tmp197.value) goto $l192;
        {
            ITable* $tmp199 = p$Iter185->$class->itable;
            while ($tmp199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp199 = $tmp199->next;
            }
            $fn201 $tmp200 = $tmp199->methods[1];
            panda$core$Object* $tmp202 = $tmp200(p$Iter185);
            p198 = ((org$pandalanguage$pandac$ASTNode*) $tmp202);
            panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p198->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp203.value);
            panda$core$Int64 $tmp204 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p198->children);
            panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp204, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp205.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp206 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp206->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp206->refCount.value = 1;
            panda$core$Object* $tmp208 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p198->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp208));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp206, ((panda$core$String*) p198->payload), $tmp209);
            panda$collections$Array$add$panda$collections$Array$T(parameters182, ((panda$core$Object*) $tmp206));
        }
        goto $l191;
        $l192:;
    }
    org$pandalanguage$pandac$MethodDecl* $tmp210 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp210->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp210->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp214 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp210, p_owner, p_i->position, doccomment169, annotations177, ((panda$core$Int64) { 59 }), &$s212, parameters182, $tmp213, ((org$pandalanguage$pandac$ASTNode*) $tmp214));
    return $tmp210;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result215;
    panda$collections$Iterator* child$Iter216;
    org$pandalanguage$pandac$ASTNode* child228;
    result215 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_node->children != NULL }).value) {
    {
        {
            ITable* $tmp217 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
            while ($tmp217->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp217 = $tmp217->next;
            }
            $fn219 $tmp218 = $tmp217->methods[0];
            panda$collections$Iterator* $tmp220 = $tmp218(((panda$collections$Iterable*) p_node->children));
            child$Iter216 = $tmp220;
            $l221:;
            ITable* $tmp223 = child$Iter216->$class->itable;
            while ($tmp223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp223 = $tmp223->next;
            }
            $fn225 $tmp224 = $tmp223->methods[0];
            panda$core$Bit $tmp226 = $tmp224(child$Iter216);
            panda$core$Bit $tmp227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp226);
            if (!$tmp227.value) goto $l222;
            {
                ITable* $tmp229 = child$Iter216->$class->itable;
                while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp229 = $tmp229->next;
                }
                $fn231 $tmp230 = $tmp229->methods[1];
                panda$core$Object* $tmp232 = $tmp230(child$Iter216);
                child228 = ((org$pandalanguage$pandac$ASTNode*) $tmp232);
                panda$core$Int64 $tmp233 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, child228);
                panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result215, $tmp233);
                result215 = $tmp234;
                panda$core$Bit $tmp235 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result215, ((panda$core$Int64) { 10 }));
                if ($tmp235.value) {
                {
                    goto $l222;
                }
                }
            }
            goto $l221;
            $l222:;
        }
    }
    }
    return result215;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    panda$core$Bit $tmp240 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp239 = $tmp240.value;
    if (!$tmp239) goto $l241;
    $tmp239 = ((panda$core$Bit) { p_body != NULL }).value;
    $l241:;
    panda$core$Bit $tmp242 = { $tmp239 };
    bool $tmp238 = $tmp242.value;
    if (!$tmp238) goto $l243;
    panda$core$Bit $tmp244 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp244);
    $tmp238 = $tmp245.value;
    $l243:;
    panda$core$Bit $tmp246 = { $tmp238 };
    bool $tmp237 = $tmp246.value;
    if (!$tmp237) goto $l247;
    panda$core$Bit $tmp248 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp237 = $tmp248.value;
    $l247:;
    panda$core$Bit $tmp249 = { $tmp237 };
    bool $tmp236 = $tmp249.value;
    if (!$tmp236) goto $l250;
    panda$core$Int64 $tmp251 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp252 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp251, ((panda$core$Int64) { 10 }));
    $tmp236 = $tmp252.value;
    $l250:;
    panda$core$Bit $tmp253 = { $tmp236 };
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
        org$pandalanguage$pandac$MethodDecl* $tmp325 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp325->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp325->refCount.value = 1;
        panda$core$Object* $tmp327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp325, p_owner, p_m->position, doccomment258, annotations266, kind256, name257, parameters281, returnType309, ((org$pandalanguage$pandac$ASTNode*) $tmp327));
        return $tmp325;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp328 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
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
    panda$collections$Array* supertypes391;
    panda$collections$Iterator* intf$Iter397;
    org$pandalanguage$pandac$ASTNode* intf410;
    org$pandalanguage$pandac$ClassDecl* result416;
    panda$core$Bit foundInit419;
    panda$collections$Iterator* c$Iter421;
    org$pandalanguage$pandac$ASTNode* c434;
    org$pandalanguage$pandac$MethodDecl* i439;
    org$pandalanguage$pandac$MethodDecl* m441;
    org$pandalanguage$pandac$ClassDecl* inner443;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp448;
    org$pandalanguage$pandac$ClassDecl* cl452;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp457;
    org$pandalanguage$pandac$MethodDecl* defaultInit467;
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
                bool $tmp377 = ((panda$core$Bit) { p370->children != NULL }).value;
                if (!$tmp377) goto $l378;
                panda$core$Int64 $tmp379 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p370->children);
                panda$core$Bit $tmp380 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp379, ((panda$core$Int64) { 0 }));
                $tmp377 = $tmp380.value;
                $l378:;
                panda$core$Bit $tmp381 = { $tmp377 };
                if ($tmp381.value) {
                {
                    panda$core$Int64 $tmp382 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p370->children);
                    panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp382, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp383.value);
                    panda$core$Object* $tmp384 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p370->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp384));
                    bound376 = $tmp385;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp386 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound376 = $tmp386;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp387 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp387->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp387->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp387, p370->position, fullName330, ((panda$core$String*) p370->payload), bound376);
                panda$collections$Array$add$panda$collections$Array$T(parameters352, ((panda$core$Object*) $tmp387));
            }
            goto $l363;
            $l364:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp389)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp390.value);
    }
    }
    panda$collections$Array* $tmp392 = (panda$collections$Array*) malloc(40);
    $tmp392->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp392->refCount.value = 1;
    panda$collections$Array$init($tmp392);
    supertypes391 = $tmp392;
    panda$core$Object* $tmp394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp394)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp395.value);
    panda$core$Object* $tmp396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp396)->children != NULL }).value) {
    {
        {
            panda$core$Object* $tmp398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
            ITable* $tmp399 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp398)->children)->$class->itable;
            while ($tmp399->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp399 = $tmp399->next;
            }
            $fn401 $tmp400 = $tmp399->methods[0];
            panda$collections$Iterator* $tmp402 = $tmp400(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp398)->children));
            intf$Iter397 = $tmp402;
            $l403:;
            ITable* $tmp405 = intf$Iter397->$class->itable;
            while ($tmp405->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp405 = $tmp405->next;
            }
            $fn407 $tmp406 = $tmp405->methods[0];
            panda$core$Bit $tmp408 = $tmp406(intf$Iter397);
            panda$core$Bit $tmp409 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp408);
            if (!$tmp409.value) goto $l404;
            {
                ITable* $tmp411 = intf$Iter397->$class->itable;
                while ($tmp411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp411 = $tmp411->next;
                }
                $fn413 $tmp412 = $tmp411->methods[1];
                panda$core$Object* $tmp414 = $tmp412(intf$Iter397);
                intf410 = ((org$pandalanguage$pandac$ASTNode*) $tmp414);
                org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf410);
                panda$collections$Array$add$panda$collections$Array$T(supertypes391, ((panda$core$Object*) $tmp415));
            }
            goto $l403;
            $l404:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp417 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
    $tmp417->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp417->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp417, p_source, p_cl->position, p_aliases, doccomment341, annotations349, ((panda$core$Int64) { 5011 }), fullName330, ((panda$collections$ListView*) supertypes391), parameters352, self->compiler->root);
    result416 = $tmp417;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result416));
    foundInit419 = ((panda$core$Bit) { false });
    panda$core$Object* $tmp420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp420) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp422 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
            ITable* $tmp423 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp422)->children)->$class->itable;
            while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp423 = $tmp423->next;
            }
            $fn425 $tmp424 = $tmp423->methods[0];
            panda$collections$Iterator* $tmp426 = $tmp424(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp422)->children));
            c$Iter421 = $tmp426;
            $l427:;
            ITable* $tmp429 = c$Iter421->$class->itable;
            while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp429 = $tmp429->next;
            }
            $fn431 $tmp430 = $tmp429->methods[0];
            panda$core$Bit $tmp432 = $tmp430(c$Iter421);
            panda$core$Bit $tmp433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp432);
            if (!$tmp433.value) goto $l428;
            {
                ITable* $tmp435 = c$Iter421->$class->itable;
                while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp435 = $tmp435->next;
                }
                $fn437 $tmp436 = $tmp435->methods[1];
                panda$core$Object* $tmp438 = $tmp436(c$Iter421);
                c434 = ((org$pandalanguage$pandac$ASTNode*) $tmp438);
                switch (c434->kind.value) {
                    case 148:
                    {
                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result416, c434);
                    }
                    break;
                    case 147:
                    {
                        org$pandalanguage$pandac$MethodDecl* $tmp440 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result416, c434);
                        i439 = $tmp440;
                        if (((panda$core$Bit) { i439 != NULL }).value) {
                        {
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result416->symbolTable, ((org$pandalanguage$pandac$Symbol*) i439));
                            panda$collections$Array$add$panda$collections$Array$T(result416->methods, ((panda$core$Object*) i439));
                        }
                        }
                        foundInit419 = ((panda$core$Bit) { true });
                    }
                    break;
                    case 145:
                    case 146:
                    {
                        org$pandalanguage$pandac$MethodDecl* $tmp442 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result416, c434);
                        m441 = $tmp442;
                        if (((panda$core$Bit) { m441 != NULL }).value) {
                        {
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result416->symbolTable, ((org$pandalanguage$pandac$Symbol*) m441));
                            panda$collections$Array$add$panda$collections$Array$T(result416->methods, ((panda$core$Object*) m441));
                        }
                        }
                    }
                    break;
                    case 142:
                    {
                        org$pandalanguage$pandac$ClassDecl* $tmp444 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName330, c434);
                        inner443 = $tmp444;
                        if (((panda$core$Bit) { inner443 != NULL }).value) {
                        {
                            inner443->owner = result416;
                            panda$collections$Array$add$panda$collections$Array$T(result416->classes, ((panda$core$Object*) inner443));
                            panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName330, &$s445);
                            panda$core$Bit $tmp447 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner443)->name, $tmp446);
                            PANDA_ASSERT($tmp447.value);
                            panda$core$Int64 $tmp449 = panda$core$String$length$R$panda$core$Int64(fullName330);
                            panda$core$Int64 $tmp450 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp449, ((panda$core$Int64) { 1 }));
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp448, ((panda$core$Int64$nullable) { $tmp450, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp451 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner443)->name, $tmp448);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result416->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner443), $tmp451);
                            panda$collections$Array$add$panda$collections$Array$T(inner443->symbolTable->parents, ((panda$core$Object*) result416->symbolTable));
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner443->symbolTable, ((org$pandalanguage$pandac$Symbol*) result416), ((panda$core$String*) p_cl->payload));
                        }
                        }
                    }
                    break;
                    case 151:
                    {
                        org$pandalanguage$pandac$ClassDecl* $tmp453 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName330, c434);
                        cl452 = $tmp453;
                        if (((panda$core$Bit) { cl452 != NULL }).value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result416->classes, ((panda$core$Object*) cl452));
                            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName330, &$s454);
                            panda$core$Bit $tmp456 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl452)->name, $tmp455);
                            PANDA_ASSERT($tmp456.value);
                            panda$core$Int64 $tmp458 = panda$core$String$length$R$panda$core$Int64(fullName330);
                            panda$core$Int64 $tmp459 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp458, ((panda$core$Int64) { 1 }));
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp457, ((panda$core$Int64$nullable) { $tmp459, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp460 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl452)->name, $tmp457);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result416->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl452), $tmp460);
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
            goto $l427;
            $l428:;
        }
    }
    }
    panda$core$Bit $tmp462 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit419);
    bool $tmp461 = $tmp462.value;
    if (!$tmp461) goto $l463;
    panda$core$Bit $tmp465 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result416)->name, &$s464);
    $tmp461 = $tmp465.value;
    $l463:;
    panda$core$Bit $tmp466 = { $tmp461 };
    if ($tmp466.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp468 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp468->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp468->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp470 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp470->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp470->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp470);
        panda$collections$Array* $tmp473 = (panda$collections$Array*) malloc(40);
        $tmp473->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp473->refCount.value = 1;
        panda$collections$Array$init($tmp473);
        org$pandalanguage$pandac$Type* $tmp475 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp476 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp476->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp476->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp476, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp468, result416, p_cl->position, NULL, $tmp470, ((panda$core$Int64) { 59 }), &$s472, $tmp473, $tmp475, $tmp476);
        defaultInit467 = $tmp468;
        panda$collections$Array$add$panda$collections$Array$T(result416->methods, ((panda$core$Object*) defaultInit467));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result416->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit467));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result416;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName478;
    panda$core$String* doccomment489;
    org$pandalanguage$pandac$Annotations* annotations497;
    panda$collections$Array* parameters500;
    panda$collections$Iterator* p$Iter505;
    org$pandalanguage$pandac$ASTNode* p518;
    org$pandalanguage$pandac$Type* bound524;
    panda$collections$Array* supertypes536;
    panda$collections$Iterator* s$Iter541;
    org$pandalanguage$pandac$ASTNode* s554;
    org$pandalanguage$pandac$ClassDecl* result560;
    panda$collections$Iterator* c$Iter563;
    org$pandalanguage$pandac$ASTNode* c576;
    org$pandalanguage$pandac$MethodDecl* i581;
    org$pandalanguage$pandac$MethodDecl* m583;
    org$pandalanguage$pandac$ClassDecl* cl587;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp592;
    org$pandalanguage$pandac$ClassDecl* cl596;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp601;
    panda$core$Bit $tmp480 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s479);
    if ($tmp480.value) {
    {
        panda$core$String* $tmp481 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s482);
        panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp483, p_intf->payload);
        panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s485);
        fullName478 = $tmp486;
    }
    }
    else {
    {
        fullName478 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp487, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp488.value);
    panda$core$Object* $tmp490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp491 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp490)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp491.value) {
    {
        panda$core$Object* $tmp492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp492)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp493.value);
        panda$core$Object* $tmp494 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment489 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp494)->payload);
    }
    }
    else {
    {
        doccomment489 = NULL;
    }
    }
    panda$core$Object* $tmp495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp495)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp496.value);
    panda$core$Object* $tmp498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp499 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp498));
    annotations497 = $tmp499;
    panda$collections$Array* $tmp501 = (panda$collections$Array*) malloc(40);
    $tmp501->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp501->refCount.value = 1;
    panda$collections$Array$init($tmp501);
    parameters500 = $tmp501;
    panda$core$Object* $tmp503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp503)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp504.value) {
    {
        {
            panda$core$Object* $tmp506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp507 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp506)->children)->$class->itable;
            while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp507 = $tmp507->next;
            }
            $fn509 $tmp508 = $tmp507->methods[0];
            panda$collections$Iterator* $tmp510 = $tmp508(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp506)->children));
            p$Iter505 = $tmp510;
            $l511:;
            ITable* $tmp513 = p$Iter505->$class->itable;
            while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp513 = $tmp513->next;
            }
            $fn515 $tmp514 = $tmp513->methods[0];
            panda$core$Bit $tmp516 = $tmp514(p$Iter505);
            panda$core$Bit $tmp517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp516);
            if (!$tmp517.value) goto $l512;
            {
                ITable* $tmp519 = p$Iter505->$class->itable;
                while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp519 = $tmp519->next;
                }
                $fn521 $tmp520 = $tmp519->methods[1];
                panda$core$Object* $tmp522 = $tmp520(p$Iter505);
                p518 = ((org$pandalanguage$pandac$ASTNode*) $tmp522);
                panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p518->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp523.value);
                panda$core$Int64 $tmp525 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p518->children);
                panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp525, ((panda$core$Int64) { 1 }));
                if ($tmp526.value) {
                {
                    panda$core$Object* $tmp527 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p518->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp528 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp527));
                    bound524 = $tmp528;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp529 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p518->children);
                    panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp529, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp530.value);
                    org$pandalanguage$pandac$Type* $tmp531 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound524 = $tmp531;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp532 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp532->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp532->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp532, p518->position, fullName478, ((panda$core$String*) p518->payload), bound524);
                panda$collections$Array$add$panda$collections$Array$T(parameters500, ((panda$core$Object*) $tmp532));
            }
            goto $l511;
            $l512:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp534 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp534)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp535.value);
    }
    }
    panda$collections$Array* $tmp537 = (panda$collections$Array*) malloc(40);
    $tmp537->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp537->refCount.value = 1;
    panda$collections$Array$init($tmp537);
    supertypes536 = $tmp537;
    panda$core$Object* $tmp539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp539)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp540.value);
    {
        panda$core$Object* $tmp542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp543 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp542)->children)->$class->itable;
        while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp543 = $tmp543->next;
        }
        $fn545 $tmp544 = $tmp543->methods[0];
        panda$collections$Iterator* $tmp546 = $tmp544(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp542)->children));
        s$Iter541 = $tmp546;
        $l547:;
        ITable* $tmp549 = s$Iter541->$class->itable;
        while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp549 = $tmp549->next;
        }
        $fn551 $tmp550 = $tmp549->methods[0];
        panda$core$Bit $tmp552 = $tmp550(s$Iter541);
        panda$core$Bit $tmp553 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp552);
        if (!$tmp553.value) goto $l548;
        {
            ITable* $tmp555 = s$Iter541->$class->itable;
            while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp555 = $tmp555->next;
            }
            $fn557 $tmp556 = $tmp555->methods[1];
            panda$core$Object* $tmp558 = $tmp556(s$Iter541);
            s554 = ((org$pandalanguage$pandac$ASTNode*) $tmp558);
            org$pandalanguage$pandac$Type* $tmp559 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s554);
            panda$collections$Array$add$panda$collections$Array$T(supertypes536, ((panda$core$Object*) $tmp559));
        }
        goto $l547;
        $l548:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp561 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
    $tmp561->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp561->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp561, p_source, p_intf->position, p_aliases, doccomment489, annotations497, ((panda$core$Int64) { 5012 }), fullName478, ((panda$collections$ListView*) supertypes536), parameters500, self->compiler->root);
    result560 = $tmp561;
    {
        panda$core$Object* $tmp564 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp565 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp564)->children)->$class->itable;
        while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp565 = $tmp565->next;
        }
        $fn567 $tmp566 = $tmp565->methods[0];
        panda$collections$Iterator* $tmp568 = $tmp566(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp564)->children));
        c$Iter563 = $tmp568;
        $l569:;
        ITable* $tmp571 = c$Iter563->$class->itable;
        while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp571 = $tmp571->next;
        }
        $fn573 $tmp572 = $tmp571->methods[0];
        panda$core$Bit $tmp574 = $tmp572(c$Iter563);
        panda$core$Bit $tmp575 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp574);
        if (!$tmp575.value) goto $l570;
        {
            ITable* $tmp577 = c$Iter563->$class->itable;
            while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp577 = $tmp577->next;
            }
            $fn579 $tmp578 = $tmp577->methods[1];
            panda$core$Object* $tmp580 = $tmp578(c$Iter563);
            c576 = ((org$pandalanguage$pandac$ASTNode*) $tmp580);
            switch (c576->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result560, c576);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp582 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result560, c576);
                    i581 = $tmp582;
                    if (((panda$core$Bit) { i581 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result560->symbolTable, ((org$pandalanguage$pandac$Symbol*) i581));
                        panda$collections$Array$add$panda$collections$Array$T(result560->methods, ((panda$core$Object*) i581));
                    }
                    }
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp584 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result560, c576);
                    m583 = $tmp584;
                    if (((panda$core$Bit) { m583 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m583->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp585 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp586 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m583->annotations->flags, $tmp585);
                            m583->annotations->flags = $tmp586;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result560->symbolTable, ((org$pandalanguage$pandac$Symbol*) m583));
                        panda$collections$Array$add$panda$collections$Array$T(result560->methods, ((panda$core$Object*) m583));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp588 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName478, c576);
                    cl587 = $tmp588;
                    if (((panda$core$Bit) { cl587 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result560->classes, ((panda$core$Object*) cl587));
                        panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName478, &$s589);
                        panda$core$Bit $tmp591 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl587)->name, $tmp590);
                        PANDA_ASSERT($tmp591.value);
                        panda$core$Int64 $tmp593 = panda$core$String$length$R$panda$core$Int64(fullName478);
                        panda$core$Int64 $tmp594 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp593, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp592, ((panda$core$Int64$nullable) { $tmp594, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp595 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl587)->name, $tmp592);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result560->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl587), $tmp595);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp597 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName478, c576);
                    cl596 = $tmp597;
                    if (((panda$core$Bit) { cl596 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result560->classes, ((panda$core$Object*) cl596));
                        panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName478, &$s598);
                        panda$core$Bit $tmp600 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl596)->name, $tmp599);
                        PANDA_ASSERT($tmp600.value);
                        panda$core$Int64 $tmp602 = panda$core$String$length$R$panda$core$Int64(fullName478);
                        panda$core$Int64 $tmp603 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp602, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp601, ((panda$core$Int64$nullable) { $tmp603, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp604 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl596)->name, $tmp601);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result560->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl596), $tmp604);
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
        goto $l569;
        $l570:;
    }
    return result560;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter605;
    org$pandalanguage$pandac$ClassDecl* inner617;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp606 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp606 = $tmp606->next;
        }
        $fn608 $tmp607 = $tmp606->methods[0];
        panda$collections$Iterator* $tmp609 = $tmp607(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter605 = $tmp609;
        $l610:;
        ITable* $tmp612 = inner$Iter605->$class->itable;
        while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp612 = $tmp612->next;
        }
        $fn614 $tmp613 = $tmp612->methods[0];
        panda$core$Bit $tmp615 = $tmp613(inner$Iter605);
        panda$core$Bit $tmp616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp615);
        if (!$tmp616.value) goto $l611;
        {
            ITable* $tmp618 = inner$Iter605->$class->itable;
            while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp618 = $tmp618->next;
            }
            $fn620 $tmp619 = $tmp618->methods[1];
            panda$core$Object* $tmp621 = $tmp619(inner$Iter605);
            inner617 = ((org$pandalanguage$pandac$ClassDecl*) $tmp621);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner617, p_arr);
        }
        goto $l610;
        $l611:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result622;
    panda$core$String* currentPackage625;
    panda$collections$HashMap* aliases627;
    panda$collections$Iterator* c$Iter631;
    org$pandalanguage$pandac$ASTNode* c643;
    panda$core$String* fullName648;
    panda$core$String$Index$nullable idx649;
    panda$core$String* alias652;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp653;
    org$pandalanguage$pandac$ClassDecl* cl656;
    org$pandalanguage$pandac$ClassDecl* cl658;
    panda$collections$Array* $tmp623 = (panda$collections$Array*) malloc(40);
    $tmp623->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp623->refCount.value = 1;
    panda$collections$Array$init($tmp623);
    result622 = $tmp623;
    currentPackage625 = &$s626;
    panda$collections$HashMap* $tmp628 = (panda$collections$HashMap*) malloc(56);
    $tmp628->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp628->refCount.value = 1;
    panda$collections$HashMap$init($tmp628);
    aliases627 = $tmp628;
    panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp630.value);
    {
        ITable* $tmp632 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp632 = $tmp632->next;
        }
        $fn634 $tmp633 = $tmp632->methods[0];
        panda$collections$Iterator* $tmp635 = $tmp633(((panda$collections$Iterable*) p_file->children));
        c$Iter631 = $tmp635;
        $l636:;
        ITable* $tmp638 = c$Iter631->$class->itable;
        while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp638 = $tmp638->next;
        }
        $fn640 $tmp639 = $tmp638->methods[0];
        panda$core$Bit $tmp641 = $tmp639(c$Iter631);
        panda$core$Bit $tmp642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp641);
        if (!$tmp642.value) goto $l637;
        {
            ITable* $tmp644 = c$Iter631->$class->itable;
            while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp644 = $tmp644->next;
            }
            $fn646 $tmp645 = $tmp644->methods[1];
            panda$core$Object* $tmp647 = $tmp645(c$Iter631);
            c643 = ((org$pandalanguage$pandac$ASTNode*) $tmp647);
            switch (c643->kind.value) {
                case 100:
                {
                    currentPackage625 = ((panda$core$String*) c643->payload);
                }
                break;
                case 101:
                {
                    fullName648 = ((panda$core$String*) c643->payload);
                    panda$core$String$Index$nullable $tmp651 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName648, &$s650);
                    idx649 = $tmp651;
                    if (((panda$core$Bit) { idx649.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp654 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName648, ((panda$core$String$Index) idx649.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp653, ((panda$core$String$Index$nullable) { $tmp654, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp655 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName648, $tmp653);
                        alias652 = $tmp655;
                    }
                    }
                    else {
                    {
                        alias652 = fullName648;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases627, ((panda$collections$Key*) alias652), ((panda$core$Object*) fullName648));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp657 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases627), currentPackage625, c643);
                    cl656 = $tmp657;
                    if (((panda$core$Bit) { cl656 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl656, result622);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp659 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases627), currentPackage625, c643);
                    cl658 = $tmp659;
                    if (((panda$core$Bit) { cl658 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl658, result622);
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
        goto $l636;
        $l637:;
    }
    return ((panda$collections$ListView*) result622);
}

