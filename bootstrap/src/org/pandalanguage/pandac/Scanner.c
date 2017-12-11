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
typedef panda$collections$Iterator* (*$fn284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn296)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn357)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn369)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn433)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn505)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn517)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn553)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn563)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn575)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn604)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn610)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn616)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn630)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn636)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn642)(panda$collections$Iterator*);

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
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };

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
    org$pandalanguage$pandac$MethodDecl* $tmp210 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
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
    bool $tmp238 = ((panda$core$Bit) { p_body != NULL }).value;
    if (!$tmp238) goto $l239;
    panda$core$Bit $tmp240 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
    $tmp238 = $tmp241.value;
    $l239:;
    panda$core$Bit $tmp242 = { $tmp238 };
    bool $tmp237 = $tmp242.value;
    if (!$tmp237) goto $l243;
    panda$core$Bit $tmp244 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp237 = $tmp244.value;
    $l243:;
    panda$core$Bit $tmp245 = { $tmp237 };
    bool $tmp236 = $tmp245.value;
    if (!$tmp236) goto $l246;
    panda$core$Int64 $tmp247 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp248 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp247, ((panda$core$Int64) { 10 }));
    $tmp236 = $tmp248.value;
    $l246:;
    panda$core$Bit $tmp249 = { $tmp236 };
    return $tmp249;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind252;
    panda$core$String* name253;
    panda$core$String* doccomment254;
    org$pandalanguage$pandac$Annotations* annotations262;
    panda$collections$Array* parameters277;
    panda$collections$Iterator* p$Iter280;
    org$pandalanguage$pandac$ASTNode* p293;
    org$pandalanguage$pandac$Type* returnType305;
    panda$core$Int64 $tmp250 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp250, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp251.value);
    switch (p_m->kind.value) {
        case 145:
        {
            kind252 = ((panda$core$Int64) { 57 });
        }
        break;
        case 146:
        {
            kind252 = ((panda$core$Int64) { 58 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    name253 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp255 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp256 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp255)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp256.value) {
    {
        panda$core$Object* $tmp257 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp257)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp258.value);
        panda$core$Object* $tmp259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment254 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp259)->payload);
    }
    }
    else {
    {
        doccomment254 = NULL;
    }
    }
    panda$core$Object* $tmp260 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp260)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp261.value);
    panda$core$Object* $tmp263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp264 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp263));
    annotations262 = $tmp264;
    panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp265.value) {
    {
        panda$core$Int64 $tmp266 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp267 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations262->flags, $tmp266);
        annotations262->flags = $tmp267;
    }
    }
    panda$core$Bit $tmp269 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp268 = $tmp269.value;
    if ($tmp268) goto $l270;
    panda$core$Bit $tmp271 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations262);
    $tmp268 = $tmp271.value;
    $l270:;
    panda$core$Bit $tmp272 = { $tmp268 };
    if ($tmp272.value) {
    {
        panda$core$Int64 $tmp273 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp274 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations262->flags, $tmp273);
        annotations262->flags = $tmp274;
    }
    }
    panda$core$Object* $tmp275 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp275)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp276.value);
    panda$collections$Array* $tmp278 = (panda$collections$Array*) malloc(40);
    $tmp278->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp278->refCount.value = 1;
    panda$collections$Array$init($tmp278);
    parameters277 = $tmp278;
    {
        panda$core$Object* $tmp281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp282 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp281)->children)->$class->itable;
        while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp282 = $tmp282->next;
        }
        $fn284 $tmp283 = $tmp282->methods[0];
        panda$collections$Iterator* $tmp285 = $tmp283(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp281)->children));
        p$Iter280 = $tmp285;
        $l286:;
        ITable* $tmp288 = p$Iter280->$class->itable;
        while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp288 = $tmp288->next;
        }
        $fn290 $tmp289 = $tmp288->methods[0];
        panda$core$Bit $tmp291 = $tmp289(p$Iter280);
        panda$core$Bit $tmp292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp291);
        if (!$tmp292.value) goto $l287;
        {
            ITable* $tmp294 = p$Iter280->$class->itable;
            while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp294 = $tmp294->next;
            }
            $fn296 $tmp295 = $tmp294->methods[1];
            panda$core$Object* $tmp297 = $tmp295(p$Iter280);
            p293 = ((org$pandalanguage$pandac$ASTNode*) $tmp297);
            panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p293->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp298.value);
            panda$core$Int64 $tmp299 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p293->children);
            panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp299, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp300.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp301 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp301->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp301->refCount.value = 1;
            panda$core$Object* $tmp303 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p293->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp304 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp303));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp301, ((panda$core$String*) p293->payload), $tmp304);
            panda$collections$Array$add$panda$collections$Array$T(parameters277, ((panda$core$Object*) $tmp301));
        }
        goto $l286;
        $l287:;
    }
    panda$core$Object* $tmp306 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp307 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp306));
    returnType305 = $tmp307;
    panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind252, ((panda$core$Int64) { 58 }));
    bool $tmp308 = $tmp309.value;
    if (!$tmp308) goto $l310;
    org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp312 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType305, $tmp311);
    $tmp308 = $tmp312.value;
    $l310:;
    panda$core$Bit $tmp313 = { $tmp308 };
    if ($tmp313.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_m->position, &$s314);
    }
    }
    panda$core$Object* $tmp315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp315)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp316.value) {
    {
        panda$core$Object* $tmp317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp318 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations262, ((org$pandalanguage$pandac$ASTNode*) $tmp317));
        if ($tmp318.value) {
        {
            panda$core$Int64 $tmp319 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp320 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations262->flags, $tmp319);
            annotations262->flags = $tmp320;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp321 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
        $tmp321->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp321->refCount.value = 1;
        panda$core$Object* $tmp323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp321, p_owner, p_m->position, doccomment254, annotations262, kind252, name253, parameters277, returnType305, ((org$pandalanguage$pandac$ASTNode*) $tmp323));
        return $tmp321;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp324 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
        $tmp324->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp324->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp324, p_owner, p_m->position, doccomment254, annotations262, kind252, name253, parameters277, returnType305, NULL);
        return $tmp324;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName326;
    panda$core$String* doccomment337;
    org$pandalanguage$pandac$Annotations* annotations345;
    panda$collections$Array* parameters348;
    panda$collections$Iterator* p$Iter353;
    org$pandalanguage$pandac$ASTNode* p366;
    org$pandalanguage$pandac$Type* bound372;
    panda$collections$Array* supertypes387;
    panda$collections$Iterator* intf$Iter393;
    org$pandalanguage$pandac$ASTNode* intf406;
    org$pandalanguage$pandac$ClassDecl* result412;
    panda$core$Bit foundInit415;
    panda$collections$Iterator* c$Iter417;
    org$pandalanguage$pandac$ASTNode* c430;
    org$pandalanguage$pandac$MethodDecl* i435;
    org$pandalanguage$pandac$MethodDecl* m437;
    org$pandalanguage$pandac$ClassDecl* inner439;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp444;
    org$pandalanguage$pandac$ClassDecl* cl448;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp453;
    org$pandalanguage$pandac$MethodDecl* defaultInit463;
    panda$core$Bit $tmp328 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s327);
    if ($tmp328.value) {
    {
        panda$core$String* $tmp329 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s330);
        panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp331, p_cl->payload);
        panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
        fullName326 = $tmp334;
    }
    }
    else {
    {
        fullName326 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp335 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp335, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp336.value);
    panda$core$Object* $tmp338 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp339 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp338)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp339.value) {
    {
        panda$core$Object* $tmp340 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp340)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp341.value);
        panda$core$Object* $tmp342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment337 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp342)->payload);
    }
    }
    else {
    {
        doccomment337 = NULL;
    }
    }
    panda$core$Object* $tmp343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp343)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp344.value);
    panda$core$Object* $tmp346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp347 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp346));
    annotations345 = $tmp347;
    panda$collections$Array* $tmp349 = (panda$collections$Array*) malloc(40);
    $tmp349->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp349->refCount.value = 1;
    panda$collections$Array$init($tmp349);
    parameters348 = $tmp349;
    panda$core$Object* $tmp351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp351)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp352.value) {
    {
        {
            panda$core$Object* $tmp354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp355 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp354)->children)->$class->itable;
            while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp355 = $tmp355->next;
            }
            $fn357 $tmp356 = $tmp355->methods[0];
            panda$collections$Iterator* $tmp358 = $tmp356(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp354)->children));
            p$Iter353 = $tmp358;
            $l359:;
            ITable* $tmp361 = p$Iter353->$class->itable;
            while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp361 = $tmp361->next;
            }
            $fn363 $tmp362 = $tmp361->methods[0];
            panda$core$Bit $tmp364 = $tmp362(p$Iter353);
            panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
            if (!$tmp365.value) goto $l360;
            {
                ITable* $tmp367 = p$Iter353->$class->itable;
                while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp367 = $tmp367->next;
                }
                $fn369 $tmp368 = $tmp367->methods[1];
                panda$core$Object* $tmp370 = $tmp368(p$Iter353);
                p366 = ((org$pandalanguage$pandac$ASTNode*) $tmp370);
                panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p366->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp371.value);
                bool $tmp373 = ((panda$core$Bit) { p366->children != NULL }).value;
                if (!$tmp373) goto $l374;
                panda$core$Int64 $tmp375 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p366->children);
                panda$core$Bit $tmp376 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp375, ((panda$core$Int64) { 0 }));
                $tmp373 = $tmp376.value;
                $l374:;
                panda$core$Bit $tmp377 = { $tmp373 };
                if ($tmp377.value) {
                {
                    panda$core$Int64 $tmp378 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p366->children);
                    panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp378, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp379.value);
                    panda$core$Object* $tmp380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p366->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp381 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp380));
                    bound372 = $tmp381;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp382 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound372 = $tmp382;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp383 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp383->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp383->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp383, p366->position, fullName326, ((panda$core$String*) p366->payload), bound372);
                panda$collections$Array$add$panda$collections$Array$T(parameters348, ((panda$core$Object*) $tmp383));
            }
            goto $l359;
            $l360:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp385)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp386.value);
    }
    }
    panda$collections$Array* $tmp388 = (panda$collections$Array*) malloc(40);
    $tmp388->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp388->refCount.value = 1;
    panda$collections$Array$init($tmp388);
    supertypes387 = $tmp388;
    panda$core$Object* $tmp390 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp390)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp391.value);
    panda$core$Object* $tmp392 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp392)->children != NULL }).value) {
    {
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
                panda$collections$Array$add$panda$collections$Array$T(supertypes387, ((panda$core$Object*) $tmp411));
            }
            goto $l399;
            $l400:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp413 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
    $tmp413->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp413->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp413, p_source, p_cl->position, p_aliases, doccomment337, annotations345, ((panda$core$Int64) { 5011 }), fullName326, ((panda$collections$ListView*) supertypes387), parameters348, self->compiler->root);
    result412 = $tmp413;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result412));
    foundInit415 = ((panda$core$Bit) { false });
    panda$core$Object* $tmp416 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp416) != NULL }).value) {
    {
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
                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result412, c430);
                    }
                    break;
                    case 147:
                    {
                        org$pandalanguage$pandac$MethodDecl* $tmp436 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result412, c430);
                        i435 = $tmp436;
                        if (((panda$core$Bit) { i435 != NULL }).value) {
                        {
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) i435));
                            panda$collections$Array$add$panda$collections$Array$T(result412->methods, ((panda$core$Object*) i435));
                        }
                        }
                        foundInit415 = ((panda$core$Bit) { true });
                    }
                    break;
                    case 145:
                    case 146:
                    {
                        org$pandalanguage$pandac$MethodDecl* $tmp438 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result412, c430);
                        m437 = $tmp438;
                        if (((panda$core$Bit) { m437 != NULL }).value) {
                        {
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) m437));
                            panda$collections$Array$add$panda$collections$Array$T(result412->methods, ((panda$core$Object*) m437));
                        }
                        }
                    }
                    break;
                    case 142:
                    {
                        org$pandalanguage$pandac$ClassDecl* $tmp440 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName326, c430);
                        inner439 = $tmp440;
                        if (((panda$core$Bit) { inner439 != NULL }).value) {
                        {
                            inner439->owner = result412;
                            panda$collections$Array$add$panda$collections$Array$T(result412->classes, ((panda$core$Object*) inner439));
                            panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName326, &$s441);
                            panda$core$Bit $tmp443 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner439)->name, $tmp442);
                            PANDA_ASSERT($tmp443.value);
                            panda$core$Int64 $tmp445 = panda$core$String$length$R$panda$core$Int64(fullName326);
                            panda$core$Int64 $tmp446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp445, ((panda$core$Int64) { 1 }));
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp444, ((panda$core$Int64$nullable) { $tmp446, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp447 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner439)->name, $tmp444);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner439), $tmp447);
                            panda$collections$Array$add$panda$collections$Array$T(inner439->symbolTable->parents, ((panda$core$Object*) result412->symbolTable));
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner439->symbolTable, ((org$pandalanguage$pandac$Symbol*) result412), ((panda$core$String*) p_cl->payload));
                        }
                        }
                    }
                    break;
                    case 151:
                    {
                        org$pandalanguage$pandac$ClassDecl* $tmp449 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName326, c430);
                        cl448 = $tmp449;
                        if (((panda$core$Bit) { cl448 != NULL }).value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result412->classes, ((panda$core$Object*) cl448));
                            panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName326, &$s450);
                            panda$core$Bit $tmp452 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl448)->name, $tmp451);
                            PANDA_ASSERT($tmp452.value);
                            panda$core$Int64 $tmp454 = panda$core$String$length$R$panda$core$Int64(fullName326);
                            panda$core$Int64 $tmp455 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp454, ((panda$core$Int64) { 1 }));
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp453, ((panda$core$Int64$nullable) { $tmp455, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp456 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl448)->name, $tmp453);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl448), $tmp456);
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
    }
    }
    panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit415);
    bool $tmp457 = $tmp458.value;
    if (!$tmp457) goto $l459;
    panda$core$Bit $tmp461 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result412)->name, &$s460);
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
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp464, result412, p_cl->position, NULL, $tmp466, ((panda$core$Int64) { 59 }), &$s468, $tmp469, $tmp471, $tmp472);
        defaultInit463 = $tmp464;
        panda$collections$Array$add$panda$collections$Array$T(result412->methods, ((panda$core$Object*) defaultInit463));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result412->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit463));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result412;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName474;
    panda$core$String* doccomment485;
    org$pandalanguage$pandac$Annotations* annotations493;
    panda$collections$Array* parameters496;
    panda$collections$Iterator* p$Iter501;
    org$pandalanguage$pandac$ASTNode* p514;
    org$pandalanguage$pandac$Type* bound520;
    panda$collections$Array* supertypes532;
    panda$collections$Iterator* s$Iter537;
    org$pandalanguage$pandac$ASTNode* s550;
    org$pandalanguage$pandac$ClassDecl* result556;
    panda$collections$Iterator* c$Iter559;
    org$pandalanguage$pandac$ASTNode* c572;
    org$pandalanguage$pandac$MethodDecl* i577;
    org$pandalanguage$pandac$MethodDecl* m579;
    org$pandalanguage$pandac$ClassDecl* cl583;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp588;
    org$pandalanguage$pandac$ClassDecl* cl592;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp597;
    panda$core$Bit $tmp476 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s475);
    if ($tmp476.value) {
    {
        panda$core$String* $tmp477 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp477, &$s478);
        panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp479, p_intf->payload);
        panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
        fullName474 = $tmp482;
    }
    }
    else {
    {
        fullName474 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp483 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp483, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp484.value);
    panda$core$Object* $tmp486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp487 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp486)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp487.value) {
    {
        panda$core$Object* $tmp488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp488)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp489.value);
        panda$core$Object* $tmp490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment485 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp490)->payload);
    }
    }
    else {
    {
        doccomment485 = NULL;
    }
    }
    panda$core$Object* $tmp491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp491)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp492.value);
    panda$core$Object* $tmp494 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp495 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp494));
    annotations493 = $tmp495;
    panda$collections$Array* $tmp497 = (panda$collections$Array*) malloc(40);
    $tmp497->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp497->refCount.value = 1;
    panda$collections$Array$init($tmp497);
    parameters496 = $tmp497;
    panda$core$Object* $tmp499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp499)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp500.value) {
    {
        {
            panda$core$Object* $tmp502 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp503 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp502)->children)->$class->itable;
            while ($tmp503->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp503 = $tmp503->next;
            }
            $fn505 $tmp504 = $tmp503->methods[0];
            panda$collections$Iterator* $tmp506 = $tmp504(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp502)->children));
            p$Iter501 = $tmp506;
            $l507:;
            ITable* $tmp509 = p$Iter501->$class->itable;
            while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp509 = $tmp509->next;
            }
            $fn511 $tmp510 = $tmp509->methods[0];
            panda$core$Bit $tmp512 = $tmp510(p$Iter501);
            panda$core$Bit $tmp513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp512);
            if (!$tmp513.value) goto $l508;
            {
                ITable* $tmp515 = p$Iter501->$class->itable;
                while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp515 = $tmp515->next;
                }
                $fn517 $tmp516 = $tmp515->methods[1];
                panda$core$Object* $tmp518 = $tmp516(p$Iter501);
                p514 = ((org$pandalanguage$pandac$ASTNode*) $tmp518);
                panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p514->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp519.value);
                panda$core$Int64 $tmp521 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p514->children);
                panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp521, ((panda$core$Int64) { 1 }));
                if ($tmp522.value) {
                {
                    panda$core$Object* $tmp523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p514->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp524 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp523));
                    bound520 = $tmp524;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp525 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p514->children);
                    panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp525, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp526.value);
                    org$pandalanguage$pandac$Type* $tmp527 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound520 = $tmp527;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp528 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp528->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp528->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp528, p514->position, fullName474, ((panda$core$String*) p514->payload), bound520);
                panda$collections$Array$add$panda$collections$Array$T(parameters496, ((panda$core$Object*) $tmp528));
            }
            goto $l507;
            $l508:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp530 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp530)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp531.value);
    }
    }
    panda$collections$Array* $tmp533 = (panda$collections$Array*) malloc(40);
    $tmp533->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp533->refCount.value = 1;
    panda$collections$Array$init($tmp533);
    supertypes532 = $tmp533;
    panda$core$Object* $tmp535 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp535)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp536.value);
    {
        panda$core$Object* $tmp538 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp539 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp538)->children)->$class->itable;
        while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp539 = $tmp539->next;
        }
        $fn541 $tmp540 = $tmp539->methods[0];
        panda$collections$Iterator* $tmp542 = $tmp540(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp538)->children));
        s$Iter537 = $tmp542;
        $l543:;
        ITable* $tmp545 = s$Iter537->$class->itable;
        while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp545 = $tmp545->next;
        }
        $fn547 $tmp546 = $tmp545->methods[0];
        panda$core$Bit $tmp548 = $tmp546(s$Iter537);
        panda$core$Bit $tmp549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp548);
        if (!$tmp549.value) goto $l544;
        {
            ITable* $tmp551 = s$Iter537->$class->itable;
            while ($tmp551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp551 = $tmp551->next;
            }
            $fn553 $tmp552 = $tmp551->methods[1];
            panda$core$Object* $tmp554 = $tmp552(s$Iter537);
            s550 = ((org$pandalanguage$pandac$ASTNode*) $tmp554);
            org$pandalanguage$pandac$Type* $tmp555 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s550);
            panda$collections$Array$add$panda$collections$Array$T(supertypes532, ((panda$core$Object*) $tmp555));
        }
        goto $l543;
        $l544:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp557 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
    $tmp557->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp557->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp557, p_source, p_intf->position, p_aliases, doccomment485, annotations493, ((panda$core$Int64) { 5012 }), fullName474, ((panda$collections$ListView*) supertypes532), parameters496, self->compiler->root);
    result556 = $tmp557;
    {
        panda$core$Object* $tmp560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp561 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp560)->children)->$class->itable;
        while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp561 = $tmp561->next;
        }
        $fn563 $tmp562 = $tmp561->methods[0];
        panda$collections$Iterator* $tmp564 = $tmp562(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp560)->children));
        c$Iter559 = $tmp564;
        $l565:;
        ITable* $tmp567 = c$Iter559->$class->itable;
        while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp567 = $tmp567->next;
        }
        $fn569 $tmp568 = $tmp567->methods[0];
        panda$core$Bit $tmp570 = $tmp568(c$Iter559);
        panda$core$Bit $tmp571 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp570);
        if (!$tmp571.value) goto $l566;
        {
            ITable* $tmp573 = c$Iter559->$class->itable;
            while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp573 = $tmp573->next;
            }
            $fn575 $tmp574 = $tmp573->methods[1];
            panda$core$Object* $tmp576 = $tmp574(c$Iter559);
            c572 = ((org$pandalanguage$pandac$ASTNode*) $tmp576);
            switch (c572->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result556, c572);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp578 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result556, c572);
                    i577 = $tmp578;
                    if (((panda$core$Bit) { i577 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result556->symbolTable, ((org$pandalanguage$pandac$Symbol*) i577));
                        panda$collections$Array$add$panda$collections$Array$T(result556->methods, ((panda$core$Object*) i577));
                    }
                    }
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp580 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result556, c572);
                    m579 = $tmp580;
                    if (((panda$core$Bit) { m579 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m579->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp581 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp582 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m579->annotations->flags, $tmp581);
                            m579->annotations->flags = $tmp582;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result556->symbolTable, ((org$pandalanguage$pandac$Symbol*) m579));
                        panda$collections$Array$add$panda$collections$Array$T(result556->methods, ((panda$core$Object*) m579));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp584 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName474, c572);
                    cl583 = $tmp584;
                    if (((panda$core$Bit) { cl583 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result556->classes, ((panda$core$Object*) cl583));
                        panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName474, &$s585);
                        panda$core$Bit $tmp587 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl583)->name, $tmp586);
                        PANDA_ASSERT($tmp587.value);
                        panda$core$Int64 $tmp589 = panda$core$String$length$R$panda$core$Int64(fullName474);
                        panda$core$Int64 $tmp590 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp589, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp588, ((panda$core$Int64$nullable) { $tmp590, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp591 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl583)->name, $tmp588);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result556->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl583), $tmp591);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp593 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName474, c572);
                    cl592 = $tmp593;
                    if (((panda$core$Bit) { cl592 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result556->classes, ((panda$core$Object*) cl592));
                        panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName474, &$s594);
                        panda$core$Bit $tmp596 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl592)->name, $tmp595);
                        PANDA_ASSERT($tmp596.value);
                        panda$core$Int64 $tmp598 = panda$core$String$length$R$panda$core$Int64(fullName474);
                        panda$core$Int64 $tmp599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp598, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp597, ((panda$core$Int64$nullable) { $tmp599, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp600 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl592)->name, $tmp597);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result556->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl592), $tmp600);
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
        goto $l565;
        $l566:;
    }
    return result556;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter601;
    org$pandalanguage$pandac$ClassDecl* inner613;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp602 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp602 = $tmp602->next;
        }
        $fn604 $tmp603 = $tmp602->methods[0];
        panda$collections$Iterator* $tmp605 = $tmp603(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter601 = $tmp605;
        $l606:;
        ITable* $tmp608 = inner$Iter601->$class->itable;
        while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp608 = $tmp608->next;
        }
        $fn610 $tmp609 = $tmp608->methods[0];
        panda$core$Bit $tmp611 = $tmp609(inner$Iter601);
        panda$core$Bit $tmp612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp611);
        if (!$tmp612.value) goto $l607;
        {
            ITable* $tmp614 = inner$Iter601->$class->itable;
            while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp614 = $tmp614->next;
            }
            $fn616 $tmp615 = $tmp614->methods[1];
            panda$core$Object* $tmp617 = $tmp615(inner$Iter601);
            inner613 = ((org$pandalanguage$pandac$ClassDecl*) $tmp617);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner613, p_arr);
        }
        goto $l606;
        $l607:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result618;
    panda$core$String* currentPackage621;
    panda$collections$HashMap* aliases623;
    panda$collections$Iterator* c$Iter627;
    org$pandalanguage$pandac$ASTNode* c639;
    panda$core$String* fullName644;
    panda$core$String$Index$nullable idx645;
    panda$core$String* alias648;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp649;
    org$pandalanguage$pandac$ClassDecl* cl652;
    org$pandalanguage$pandac$ClassDecl* cl654;
    panda$collections$Array* $tmp619 = (panda$collections$Array*) malloc(40);
    $tmp619->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp619->refCount.value = 1;
    panda$collections$Array$init($tmp619);
    result618 = $tmp619;
    currentPackage621 = &$s622;
    panda$collections$HashMap* $tmp624 = (panda$collections$HashMap*) malloc(56);
    $tmp624->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp624->refCount.value = 1;
    panda$collections$HashMap$init($tmp624);
    aliases623 = $tmp624;
    panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp626.value);
    {
        ITable* $tmp628 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp628 = $tmp628->next;
        }
        $fn630 $tmp629 = $tmp628->methods[0];
        panda$collections$Iterator* $tmp631 = $tmp629(((panda$collections$Iterable*) p_file->children));
        c$Iter627 = $tmp631;
        $l632:;
        ITable* $tmp634 = c$Iter627->$class->itable;
        while ($tmp634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp634 = $tmp634->next;
        }
        $fn636 $tmp635 = $tmp634->methods[0];
        panda$core$Bit $tmp637 = $tmp635(c$Iter627);
        panda$core$Bit $tmp638 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp637);
        if (!$tmp638.value) goto $l633;
        {
            ITable* $tmp640 = c$Iter627->$class->itable;
            while ($tmp640->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp640 = $tmp640->next;
            }
            $fn642 $tmp641 = $tmp640->methods[1];
            panda$core$Object* $tmp643 = $tmp641(c$Iter627);
            c639 = ((org$pandalanguage$pandac$ASTNode*) $tmp643);
            switch (c639->kind.value) {
                case 100:
                {
                    currentPackage621 = ((panda$core$String*) c639->payload);
                }
                break;
                case 101:
                {
                    fullName644 = ((panda$core$String*) c639->payload);
                    panda$core$String$Index$nullable $tmp647 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName644, &$s646);
                    idx645 = $tmp647;
                    if (((panda$core$Bit) { idx645.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp650 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName644, ((panda$core$String$Index) idx645.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp649, ((panda$core$String$Index$nullable) { $tmp650, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp651 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName644, $tmp649);
                        alias648 = $tmp651;
                    }
                    }
                    else {
                    {
                        alias648 = fullName644;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases623, ((panda$collections$Key*) alias648), ((panda$core$Object*) fullName644));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp653 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases623), currentPackage621, c639);
                    cl652 = $tmp653;
                    if (((panda$core$Bit) { cl652 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl652, result618);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp655 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases623), currentPackage621, c639);
                    cl654 = $tmp655;
                    if (((panda$core$Bit) { cl654 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl654, result618);
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
        goto $l632;
        $l633:;
    }
    return ((panda$collections$ListView*) result618);
}

