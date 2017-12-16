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
typedef panda$collections$Iterator* (*$fn136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn142)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn148)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn193)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn199)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn205)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn235)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn292)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn304)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn371)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn377)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn405)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn411)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn417)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn429)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn435)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn441)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn525)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn561)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn571)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn577)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn583)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn612)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn624)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn650)(panda$collections$Iterator*);

static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, 1797670743561030032, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6D\x70\x6C\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6D\x70\x6C\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, 1744890057187, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, 176265944400704, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };

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
                    panda$core$Int64 $tmp93 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp94 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp93);
                    flags43 = $tmp94;
                }
                }
                else {
                panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s95);
                if ($tmp96.value) {
                {
                    panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp97);
                    flags43 = $tmp98;
                }
                }
                else {
                panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s99);
                if ($tmp100.value) {
                {
                    panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp101);
                    flags43 = $tmp102;
                }
                }
                else {
                panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s103);
                if ($tmp104.value) {
                {
                    panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp105);
                    flags43 = $tmp106;
                }
                }
                else {
                panda$core$Bit $tmp108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$46_1362, &$s107);
                if ($tmp108.value) {
                {
                    panda$core$Int64 $tmp109 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                    panda$core$Int64 $tmp110 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp109);
                    flags43 = $tmp110;
                }
                }
                else {
                {
                    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s111, c56->payload);
                    panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s113);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, c56->position, $tmp114);
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
        }
        goto $l49;
        $l50:;
    }
    org$pandalanguage$pandac$Annotations* $tmp115 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp115->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp115->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp115, flags43);
    return $tmp115;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment119;
    org$pandalanguage$pandac$Annotations* annotations125;
    panda$core$Int64 kind128;
    panda$collections$Iterator* decl$Iter132;
    org$pandalanguage$pandac$ASTNode* decl145;
    org$pandalanguage$pandac$ASTNode* value152;
    org$pandalanguage$pandac$Type* type158;
    org$pandalanguage$pandac$FieldDecl* field167;
    panda$core$Int64 $tmp117 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp117, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp118.value);
    panda$core$Object* $tmp120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp121 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp120)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp121.value) {
    {
        panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp122)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp123.value);
        panda$core$Object* $tmp124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment119 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp124)->payload);
    }
    }
    else {
    {
        doccomment119 = NULL;
    }
    }
    panda$core$Object* $tmp126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp127 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp126));
    annotations125 = $tmp127;
    panda$core$Object* $tmp129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    switch (((org$pandalanguage$pandac$ASTNode*) $tmp129)->kind.value) {
        case 130:
        {
            kind128 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            kind128 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            kind128 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp130 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp131 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations125->flags, $tmp130);
            annotations125->flags = $tmp131;
        }
        break;
        case 133:
        {
            kind128 = ((panda$core$Int64) { 10003 });
        }
        break;
    }
    {
        panda$core$Object* $tmp133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp134 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp133)->children)->$class->itable;
        while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp134 = $tmp134->next;
        }
        $fn136 $tmp135 = $tmp134->methods[0];
        panda$collections$Iterator* $tmp137 = $tmp135(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp133)->children));
        decl$Iter132 = $tmp137;
        $l138:;
        ITable* $tmp140 = decl$Iter132->$class->itable;
        while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp140 = $tmp140->next;
        }
        $fn142 $tmp141 = $tmp140->methods[0];
        panda$core$Bit $tmp143 = $tmp141(decl$Iter132);
        panda$core$Bit $tmp144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp143);
        if (!$tmp144.value) goto $l139;
        {
            ITable* $tmp146 = decl$Iter132->$class->itable;
            while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp146 = $tmp146->next;
            }
            $fn148 $tmp147 = $tmp146->methods[1];
            panda$core$Object* $tmp149 = $tmp147(decl$Iter132);
            decl145 = ((org$pandalanguage$pandac$ASTNode*) $tmp149);
            panda$core$Object* $tmp150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl145->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp150)->kind, ((panda$core$Int64) { 106 }));
            PANDA_ASSERT($tmp151.value);
            panda$core$Int64 $tmp153 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl145->children);
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp153, ((panda$core$Int64) { 2 }));
            if ($tmp154.value) {
            {
                panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl145->children, ((panda$core$Int64) { 1 }));
                value152 = ((org$pandalanguage$pandac$ASTNode*) $tmp155);
            }
            }
            else {
            {
                panda$core$Int64 $tmp156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl145->children);
                panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp156, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp157.value);
                value152 = NULL;
            }
            }
            panda$core$Object* $tmp159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl145->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp159)->children != NULL }).value) {
            {
                panda$core$Object* $tmp160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl145->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp160)->children);
                panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp161, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp162.value);
                panda$core$Object* $tmp163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl145->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp163)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp165 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp164));
                type158 = $tmp165;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp166 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type158 = $tmp166;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp168 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
            $tmp168->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp168->refCount.value = 1;
            panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl145->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp168, p_owner, decl145->position, doccomment119, annotations125, kind128, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp170)->payload), type158, value152);
            field167 = $tmp168;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field167));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field167));
        }
        goto $l138;
        $l139:;
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
    org$pandalanguage$pandac$MethodDecl* $tmp214 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
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
    if (((panda$core$Bit) { p_node->children != NULL }).value) {
    {
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
    }
    }
    return result219;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    panda$core$Bit $tmp244 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp243 = $tmp244.value;
    if (!$tmp243) goto $l245;
    $tmp243 = ((panda$core$Bit) { p_body != NULL }).value;
    $l245:;
    panda$core$Bit $tmp246 = { $tmp243 };
    bool $tmp242 = $tmp246.value;
    if (!$tmp242) goto $l247;
    panda$core$Bit $tmp248 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
    $tmp242 = $tmp249.value;
    $l247:;
    panda$core$Bit $tmp250 = { $tmp242 };
    bool $tmp241 = $tmp250.value;
    if (!$tmp241) goto $l251;
    panda$core$Bit $tmp252 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp241 = $tmp252.value;
    $l251:;
    panda$core$Bit $tmp253 = { $tmp241 };
    bool $tmp240 = $tmp253.value;
    if (!$tmp240) goto $l254;
    panda$core$Int64 $tmp255 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp256 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp255, ((panda$core$Int64) { 10 }));
    $tmp240 = $tmp256.value;
    $l254:;
    panda$core$Bit $tmp257 = { $tmp240 };
    return $tmp257;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind260;
    panda$core$String* name261;
    panda$core$String* doccomment262;
    org$pandalanguage$pandac$Annotations* annotations270;
    panda$collections$Array* parameters285;
    panda$collections$Iterator* p$Iter288;
    org$pandalanguage$pandac$ASTNode* p301;
    org$pandalanguage$pandac$Type* returnType313;
    panda$core$Int64 $tmp258 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp258, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp259.value);
    switch (p_m->kind.value) {
        case 145:
        {
            kind260 = ((panda$core$Int64) { 57 });
        }
        break;
        case 146:
        {
            kind260 = ((panda$core$Int64) { 58 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    name261 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp264 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp263)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp264.value) {
    {
        panda$core$Object* $tmp265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp265)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp266.value);
        panda$core$Object* $tmp267 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment262 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp267)->payload);
    }
    }
    else {
    {
        doccomment262 = NULL;
    }
    }
    panda$core$Object* $tmp268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp268)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp269.value);
    panda$core$Object* $tmp271 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp272 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp271));
    annotations270 = $tmp272;
    panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp273.value) {
    {
        panda$core$Int64 $tmp274 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp275 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations270->flags, $tmp274);
        annotations270->flags = $tmp275;
    }
    }
    panda$core$Bit $tmp277 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp276 = $tmp277.value;
    if ($tmp276) goto $l278;
    panda$core$Bit $tmp279 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations270);
    $tmp276 = $tmp279.value;
    $l278:;
    panda$core$Bit $tmp280 = { $tmp276 };
    if ($tmp280.value) {
    {
        panda$core$Int64 $tmp281 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp282 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations270->flags, $tmp281);
        annotations270->flags = $tmp282;
    }
    }
    panda$core$Object* $tmp283 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp283)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp284.value);
    panda$collections$Array* $tmp286 = (panda$collections$Array*) malloc(40);
    $tmp286->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp286->refCount.value = 1;
    panda$collections$Array$init($tmp286);
    parameters285 = $tmp286;
    {
        panda$core$Object* $tmp289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp290 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp289)->children)->$class->itable;
        while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp290 = $tmp290->next;
        }
        $fn292 $tmp291 = $tmp290->methods[0];
        panda$collections$Iterator* $tmp293 = $tmp291(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp289)->children));
        p$Iter288 = $tmp293;
        $l294:;
        ITable* $tmp296 = p$Iter288->$class->itable;
        while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp296 = $tmp296->next;
        }
        $fn298 $tmp297 = $tmp296->methods[0];
        panda$core$Bit $tmp299 = $tmp297(p$Iter288);
        panda$core$Bit $tmp300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp299);
        if (!$tmp300.value) goto $l295;
        {
            ITable* $tmp302 = p$Iter288->$class->itable;
            while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp302 = $tmp302->next;
            }
            $fn304 $tmp303 = $tmp302->methods[1];
            panda$core$Object* $tmp305 = $tmp303(p$Iter288);
            p301 = ((org$pandalanguage$pandac$ASTNode*) $tmp305);
            panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p301->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp306.value);
            panda$core$Int64 $tmp307 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p301->children);
            panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp307, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp308.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp309 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp309->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp309->refCount.value = 1;
            panda$core$Object* $tmp311 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p301->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp312 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp311));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp309, ((panda$core$String*) p301->payload), $tmp312);
            panda$collections$Array$add$panda$collections$Array$T(parameters285, ((panda$core$Object*) $tmp309));
        }
        goto $l294;
        $l295:;
    }
    panda$core$Object* $tmp314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp315 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp314));
    returnType313 = $tmp315;
    panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind260, ((panda$core$Int64) { 58 }));
    bool $tmp316 = $tmp317.value;
    if (!$tmp316) goto $l318;
    org$pandalanguage$pandac$Type* $tmp319 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp320 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType313, $tmp319);
    $tmp316 = $tmp320.value;
    $l318:;
    panda$core$Bit $tmp321 = { $tmp316 };
    if ($tmp321.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_m->position, &$s322);
    }
    }
    panda$core$Object* $tmp323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp323)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp324.value) {
    {
        panda$core$Object* $tmp325 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp326 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations270, ((org$pandalanguage$pandac$ASTNode*) $tmp325));
        if ($tmp326.value) {
        {
            panda$core$Int64 $tmp327 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp328 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations270->flags, $tmp327);
            annotations270->flags = $tmp328;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp329 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp329->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp329->refCount.value = 1;
        panda$core$Object* $tmp331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp329, p_owner, p_m->position, doccomment262, annotations270, kind260, name261, parameters285, returnType313, ((org$pandalanguage$pandac$ASTNode*) $tmp331));
        return $tmp329;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp332 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp332->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp332->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp332, p_owner, p_m->position, doccomment262, annotations270, kind260, name261, parameters285, returnType313, NULL);
        return $tmp332;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName334;
    panda$core$String* doccomment345;
    org$pandalanguage$pandac$Annotations* annotations353;
    panda$collections$Array* parameters356;
    panda$collections$Iterator* p$Iter361;
    org$pandalanguage$pandac$ASTNode* p374;
    org$pandalanguage$pandac$Type* bound380;
    panda$collections$Array* supertypes395;
    panda$collections$Iterator* intf$Iter401;
    org$pandalanguage$pandac$ASTNode* intf414;
    org$pandalanguage$pandac$ClassDecl* result420;
    panda$core$Bit foundInit423;
    panda$collections$Iterator* c$Iter425;
    org$pandalanguage$pandac$ASTNode* c438;
    org$pandalanguage$pandac$MethodDecl* i443;
    org$pandalanguage$pandac$MethodDecl* m445;
    org$pandalanguage$pandac$ClassDecl* inner447;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp452;
    org$pandalanguage$pandac$ClassDecl* cl456;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp461;
    org$pandalanguage$pandac$MethodDecl* defaultInit471;
    panda$core$Bit $tmp336 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s335);
    if ($tmp336.value) {
    {
        panda$core$String* $tmp337 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
        panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp339, p_cl->payload);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
        fullName334 = $tmp342;
    }
    }
    else {
    {
        fullName334 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp343 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp343, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp344.value);
    panda$core$Object* $tmp346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp347 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp346)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp347.value) {
    {
        panda$core$Object* $tmp348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp348)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp349.value);
        panda$core$Object* $tmp350 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment345 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp350)->payload);
    }
    }
    else {
    {
        doccomment345 = NULL;
    }
    }
    panda$core$Object* $tmp351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp351)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp352.value);
    panda$core$Object* $tmp354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp355 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp354));
    annotations353 = $tmp355;
    panda$collections$Array* $tmp357 = (panda$collections$Array*) malloc(40);
    $tmp357->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp357->refCount.value = 1;
    panda$collections$Array$init($tmp357);
    parameters356 = $tmp357;
    panda$core$Object* $tmp359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp359)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp360.value) {
    {
        {
            panda$core$Object* $tmp362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp363 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp362)->children)->$class->itable;
            while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp363 = $tmp363->next;
            }
            $fn365 $tmp364 = $tmp363->methods[0];
            panda$collections$Iterator* $tmp366 = $tmp364(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp362)->children));
            p$Iter361 = $tmp366;
            $l367:;
            ITable* $tmp369 = p$Iter361->$class->itable;
            while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp369 = $tmp369->next;
            }
            $fn371 $tmp370 = $tmp369->methods[0];
            panda$core$Bit $tmp372 = $tmp370(p$Iter361);
            panda$core$Bit $tmp373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp372);
            if (!$tmp373.value) goto $l368;
            {
                ITable* $tmp375 = p$Iter361->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[1];
                panda$core$Object* $tmp378 = $tmp376(p$Iter361);
                p374 = ((org$pandalanguage$pandac$ASTNode*) $tmp378);
                panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p374->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp379.value);
                bool $tmp381 = ((panda$core$Bit) { p374->children != NULL }).value;
                if (!$tmp381) goto $l382;
                panda$core$Int64 $tmp383 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p374->children);
                panda$core$Bit $tmp384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp383, ((panda$core$Int64) { 0 }));
                $tmp381 = $tmp384.value;
                $l382:;
                panda$core$Bit $tmp385 = { $tmp381 };
                if ($tmp385.value) {
                {
                    panda$core$Int64 $tmp386 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p374->children);
                    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp386, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp387.value);
                    panda$core$Object* $tmp388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p374->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp389 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp388));
                    bound380 = $tmp389;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp390 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound380 = $tmp390;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp391 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp391->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp391, p374->position, fullName334, ((panda$core$String*) p374->payload), bound380);
                panda$collections$Array$add$panda$collections$Array$T(parameters356, ((panda$core$Object*) $tmp391));
            }
            goto $l367;
            $l368:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp393)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp394.value);
    }
    }
    panda$collections$Array* $tmp396 = (panda$collections$Array*) malloc(40);
    $tmp396->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp396->refCount.value = 1;
    panda$collections$Array$init($tmp396);
    supertypes395 = $tmp396;
    panda$core$Object* $tmp398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp398)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp399.value);
    panda$core$Object* $tmp400 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp400)->children != NULL }).value) {
    {
        {
            panda$core$Object* $tmp402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
            ITable* $tmp403 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp402)->children)->$class->itable;
            while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp403 = $tmp403->next;
            }
            $fn405 $tmp404 = $tmp403->methods[0];
            panda$collections$Iterator* $tmp406 = $tmp404(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp402)->children));
            intf$Iter401 = $tmp406;
            $l407:;
            ITable* $tmp409 = intf$Iter401->$class->itable;
            while ($tmp409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp409 = $tmp409->next;
            }
            $fn411 $tmp410 = $tmp409->methods[0];
            panda$core$Bit $tmp412 = $tmp410(intf$Iter401);
            panda$core$Bit $tmp413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp412);
            if (!$tmp413.value) goto $l408;
            {
                ITable* $tmp415 = intf$Iter401->$class->itable;
                while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp415 = $tmp415->next;
                }
                $fn417 $tmp416 = $tmp415->methods[1];
                panda$core$Object* $tmp418 = $tmp416(intf$Iter401);
                intf414 = ((org$pandalanguage$pandac$ASTNode*) $tmp418);
                org$pandalanguage$pandac$Type* $tmp419 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf414);
                panda$collections$Array$add$panda$collections$Array$T(supertypes395, ((panda$core$Object*) $tmp419));
            }
            goto $l407;
            $l408:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp421 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
    $tmp421->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp421->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp421, p_source, p_cl->position, p_aliases, doccomment345, annotations353, ((panda$core$Int64) { 5011 }), fullName334, ((panda$collections$ListView*) supertypes395), parameters356, self->compiler->root);
    result420 = $tmp421;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result420));
    foundInit423 = ((panda$core$Bit) { false });
    panda$core$Object* $tmp424 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp424) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp426 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
            ITable* $tmp427 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp426)->children)->$class->itable;
            while ($tmp427->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp427 = $tmp427->next;
            }
            $fn429 $tmp428 = $tmp427->methods[0];
            panda$collections$Iterator* $tmp430 = $tmp428(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp426)->children));
            c$Iter425 = $tmp430;
            $l431:;
            ITable* $tmp433 = c$Iter425->$class->itable;
            while ($tmp433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp433 = $tmp433->next;
            }
            $fn435 $tmp434 = $tmp433->methods[0];
            panda$core$Bit $tmp436 = $tmp434(c$Iter425);
            panda$core$Bit $tmp437 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp436);
            if (!$tmp437.value) goto $l432;
            {
                ITable* $tmp439 = c$Iter425->$class->itable;
                while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp439 = $tmp439->next;
                }
                $fn441 $tmp440 = $tmp439->methods[1];
                panda$core$Object* $tmp442 = $tmp440(c$Iter425);
                c438 = ((org$pandalanguage$pandac$ASTNode*) $tmp442);
                switch (c438->kind.value) {
                    case 148:
                    {
                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result420, c438);
                    }
                    break;
                    case 147:
                    {
                        org$pandalanguage$pandac$MethodDecl* $tmp444 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result420, c438);
                        i443 = $tmp444;
                        if (((panda$core$Bit) { i443 != NULL }).value) {
                        {
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result420->symbolTable, ((org$pandalanguage$pandac$Symbol*) i443));
                            panda$collections$Array$add$panda$collections$Array$T(result420->methods, ((panda$core$Object*) i443));
                        }
                        }
                        foundInit423 = ((panda$core$Bit) { true });
                    }
                    break;
                    case 145:
                    case 146:
                    {
                        org$pandalanguage$pandac$MethodDecl* $tmp446 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result420, c438);
                        m445 = $tmp446;
                        if (((panda$core$Bit) { m445 != NULL }).value) {
                        {
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result420->symbolTable, ((org$pandalanguage$pandac$Symbol*) m445));
                            panda$collections$Array$add$panda$collections$Array$T(result420->methods, ((panda$core$Object*) m445));
                        }
                        }
                    }
                    break;
                    case 142:
                    {
                        org$pandalanguage$pandac$ClassDecl* $tmp448 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName334, c438);
                        inner447 = $tmp448;
                        if (((panda$core$Bit) { inner447 != NULL }).value) {
                        {
                            inner447->owner = result420;
                            panda$collections$Array$add$panda$collections$Array$T(result420->classes, ((panda$core$Object*) inner447));
                            panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName334, &$s449);
                            panda$core$Bit $tmp451 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner447)->name, $tmp450);
                            PANDA_ASSERT($tmp451.value);
                            panda$core$Int64 $tmp453 = panda$core$String$length$R$panda$core$Int64(fullName334);
                            panda$core$Int64 $tmp454 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp453, ((panda$core$Int64) { 1 }));
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp452, ((panda$core$Int64$nullable) { $tmp454, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp455 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner447)->name, $tmp452);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result420->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner447), $tmp455);
                            panda$collections$Array$add$panda$collections$Array$T(inner447->symbolTable->parents, ((panda$core$Object*) result420->symbolTable));
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner447->symbolTable, ((org$pandalanguage$pandac$Symbol*) result420), ((panda$core$String*) p_cl->payload));
                        }
                        }
                    }
                    break;
                    case 151:
                    {
                        org$pandalanguage$pandac$ClassDecl* $tmp457 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName334, c438);
                        cl456 = $tmp457;
                        if (((panda$core$Bit) { cl456 != NULL }).value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result420->classes, ((panda$core$Object*) cl456));
                            panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName334, &$s458);
                            panda$core$Bit $tmp460 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl456)->name, $tmp459);
                            PANDA_ASSERT($tmp460.value);
                            panda$core$Int64 $tmp462 = panda$core$String$length$R$panda$core$Int64(fullName334);
                            panda$core$Int64 $tmp463 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp462, ((panda$core$Int64) { 1 }));
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp461, ((panda$core$Int64$nullable) { $tmp463, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp464 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl456)->name, $tmp461);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result420->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl456), $tmp464);
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
            goto $l431;
            $l432:;
        }
    }
    }
    panda$core$Bit $tmp466 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit423);
    bool $tmp465 = $tmp466.value;
    if (!$tmp465) goto $l467;
    panda$core$Bit $tmp469 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result420)->name, &$s468);
    $tmp465 = $tmp469.value;
    $l467:;
    panda$core$Bit $tmp470 = { $tmp465 };
    if ($tmp470.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp472 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp472->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp472->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp474 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp474->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp474->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp474);
        panda$collections$Array* $tmp477 = (panda$collections$Array*) malloc(40);
        $tmp477->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp477->refCount.value = 1;
        panda$collections$Array$init($tmp477);
        org$pandalanguage$pandac$Type* $tmp479 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp480 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp480->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp480->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp480, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp472, result420, p_cl->position, NULL, $tmp474, ((panda$core$Int64) { 59 }), &$s476, $tmp477, $tmp479, $tmp480);
        defaultInit471 = $tmp472;
        panda$collections$Array$add$panda$collections$Array$T(result420->methods, ((panda$core$Object*) defaultInit471));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result420->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit471));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result420;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName482;
    panda$core$String* doccomment493;
    org$pandalanguage$pandac$Annotations* annotations501;
    panda$collections$Array* parameters504;
    panda$collections$Iterator* p$Iter509;
    org$pandalanguage$pandac$ASTNode* p522;
    org$pandalanguage$pandac$Type* bound528;
    panda$collections$Array* supertypes540;
    panda$collections$Iterator* s$Iter545;
    org$pandalanguage$pandac$ASTNode* s558;
    org$pandalanguage$pandac$ClassDecl* result564;
    panda$collections$Iterator* c$Iter567;
    org$pandalanguage$pandac$ASTNode* c580;
    org$pandalanguage$pandac$MethodDecl* i585;
    org$pandalanguage$pandac$MethodDecl* m587;
    org$pandalanguage$pandac$ClassDecl* cl591;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp596;
    org$pandalanguage$pandac$ClassDecl* cl600;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp605;
    panda$core$Bit $tmp484 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s483);
    if ($tmp484.value) {
    {
        panda$core$String* $tmp485 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s486);
        panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp487, p_intf->payload);
        panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s489);
        fullName482 = $tmp490;
    }
    }
    else {
    {
        fullName482 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp491 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp491, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp492.value);
    panda$core$Object* $tmp494 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp495 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp494)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp495.value) {
    {
        panda$core$Object* $tmp496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp496)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp497.value);
        panda$core$Object* $tmp498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment493 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp498)->payload);
    }
    }
    else {
    {
        doccomment493 = NULL;
    }
    }
    panda$core$Object* $tmp499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp499)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp500.value);
    panda$core$Object* $tmp502 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp503 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp502));
    annotations501 = $tmp503;
    panda$collections$Array* $tmp505 = (panda$collections$Array*) malloc(40);
    $tmp505->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp505->refCount.value = 1;
    panda$collections$Array$init($tmp505);
    parameters504 = $tmp505;
    panda$core$Object* $tmp507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp507)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp508.value) {
    {
        {
            panda$core$Object* $tmp510 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp511 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp510)->children)->$class->itable;
            while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp511 = $tmp511->next;
            }
            $fn513 $tmp512 = $tmp511->methods[0];
            panda$collections$Iterator* $tmp514 = $tmp512(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp510)->children));
            p$Iter509 = $tmp514;
            $l515:;
            ITable* $tmp517 = p$Iter509->$class->itable;
            while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp517 = $tmp517->next;
            }
            $fn519 $tmp518 = $tmp517->methods[0];
            panda$core$Bit $tmp520 = $tmp518(p$Iter509);
            panda$core$Bit $tmp521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp520);
            if (!$tmp521.value) goto $l516;
            {
                ITable* $tmp523 = p$Iter509->$class->itable;
                while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp523 = $tmp523->next;
                }
                $fn525 $tmp524 = $tmp523->methods[1];
                panda$core$Object* $tmp526 = $tmp524(p$Iter509);
                p522 = ((org$pandalanguage$pandac$ASTNode*) $tmp526);
                panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p522->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp527.value);
                panda$core$Int64 $tmp529 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p522->children);
                panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp529, ((panda$core$Int64) { 1 }));
                if ($tmp530.value) {
                {
                    panda$core$Object* $tmp531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p522->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp531));
                    bound528 = $tmp532;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp533 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p522->children);
                    panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp533, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp534.value);
                    org$pandalanguage$pandac$Type* $tmp535 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound528 = $tmp535;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp536 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp536->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp536->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp536, p522->position, fullName482, ((panda$core$String*) p522->payload), bound528);
                panda$collections$Array$add$panda$collections$Array$T(parameters504, ((panda$core$Object*) $tmp536));
            }
            goto $l515;
            $l516:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp538 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp538)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp539.value);
    }
    }
    panda$collections$Array* $tmp541 = (panda$collections$Array*) malloc(40);
    $tmp541->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp541->refCount.value = 1;
    panda$collections$Array$init($tmp541);
    supertypes540 = $tmp541;
    panda$core$Object* $tmp543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp543)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp544.value);
    {
        panda$core$Object* $tmp546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp547 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp546)->children)->$class->itable;
        while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp547 = $tmp547->next;
        }
        $fn549 $tmp548 = $tmp547->methods[0];
        panda$collections$Iterator* $tmp550 = $tmp548(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp546)->children));
        s$Iter545 = $tmp550;
        $l551:;
        ITable* $tmp553 = s$Iter545->$class->itable;
        while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp553 = $tmp553->next;
        }
        $fn555 $tmp554 = $tmp553->methods[0];
        panda$core$Bit $tmp556 = $tmp554(s$Iter545);
        panda$core$Bit $tmp557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp556);
        if (!$tmp557.value) goto $l552;
        {
            ITable* $tmp559 = s$Iter545->$class->itable;
            while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp559 = $tmp559->next;
            }
            $fn561 $tmp560 = $tmp559->methods[1];
            panda$core$Object* $tmp562 = $tmp560(s$Iter545);
            s558 = ((org$pandalanguage$pandac$ASTNode*) $tmp562);
            org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s558);
            panda$collections$Array$add$panda$collections$Array$T(supertypes540, ((panda$core$Object*) $tmp563));
        }
        goto $l551;
        $l552:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp565 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
    $tmp565->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp565->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp565, p_source, p_intf->position, p_aliases, doccomment493, annotations501, ((panda$core$Int64) { 5012 }), fullName482, ((panda$collections$ListView*) supertypes540), parameters504, self->compiler->root);
    result564 = $tmp565;
    {
        panda$core$Object* $tmp568 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp569 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp568)->children)->$class->itable;
        while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp569 = $tmp569->next;
        }
        $fn571 $tmp570 = $tmp569->methods[0];
        panda$collections$Iterator* $tmp572 = $tmp570(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp568)->children));
        c$Iter567 = $tmp572;
        $l573:;
        ITable* $tmp575 = c$Iter567->$class->itable;
        while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp575 = $tmp575->next;
        }
        $fn577 $tmp576 = $tmp575->methods[0];
        panda$core$Bit $tmp578 = $tmp576(c$Iter567);
        panda$core$Bit $tmp579 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp578);
        if (!$tmp579.value) goto $l574;
        {
            ITable* $tmp581 = c$Iter567->$class->itable;
            while ($tmp581->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp581 = $tmp581->next;
            }
            $fn583 $tmp582 = $tmp581->methods[1];
            panda$core$Object* $tmp584 = $tmp582(c$Iter567);
            c580 = ((org$pandalanguage$pandac$ASTNode*) $tmp584);
            switch (c580->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result564, c580);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp586 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result564, c580);
                    i585 = $tmp586;
                    if (((panda$core$Bit) { i585 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result564->symbolTable, ((org$pandalanguage$pandac$Symbol*) i585));
                        panda$collections$Array$add$panda$collections$Array$T(result564->methods, ((panda$core$Object*) i585));
                    }
                    }
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp588 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result564, c580);
                    m587 = $tmp588;
                    if (((panda$core$Bit) { m587 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m587->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp589 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp590 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m587->annotations->flags, $tmp589);
                            m587->annotations->flags = $tmp590;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result564->symbolTable, ((org$pandalanguage$pandac$Symbol*) m587));
                        panda$collections$Array$add$panda$collections$Array$T(result564->methods, ((panda$core$Object*) m587));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp592 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName482, c580);
                    cl591 = $tmp592;
                    if (((panda$core$Bit) { cl591 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result564->classes, ((panda$core$Object*) cl591));
                        panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName482, &$s593);
                        panda$core$Bit $tmp595 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl591)->name, $tmp594);
                        PANDA_ASSERT($tmp595.value);
                        panda$core$Int64 $tmp597 = panda$core$String$length$R$panda$core$Int64(fullName482);
                        panda$core$Int64 $tmp598 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp597, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp596, ((panda$core$Int64$nullable) { $tmp598, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp599 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl591)->name, $tmp596);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result564->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl591), $tmp599);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp601 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName482, c580);
                    cl600 = $tmp601;
                    if (((panda$core$Bit) { cl600 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result564->classes, ((panda$core$Object*) cl600));
                        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName482, &$s602);
                        panda$core$Bit $tmp604 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl600)->name, $tmp603);
                        PANDA_ASSERT($tmp604.value);
                        panda$core$Int64 $tmp606 = panda$core$String$length$R$panda$core$Int64(fullName482);
                        panda$core$Int64 $tmp607 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp606, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp605, ((panda$core$Int64$nullable) { $tmp607, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp608 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl600)->name, $tmp605);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result564->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl600), $tmp608);
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
        goto $l573;
        $l574:;
    }
    return result564;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter609;
    org$pandalanguage$pandac$ClassDecl* inner621;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp610 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp610 = $tmp610->next;
        }
        $fn612 $tmp611 = $tmp610->methods[0];
        panda$collections$Iterator* $tmp613 = $tmp611(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter609 = $tmp613;
        $l614:;
        ITable* $tmp616 = inner$Iter609->$class->itable;
        while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp616 = $tmp616->next;
        }
        $fn618 $tmp617 = $tmp616->methods[0];
        panda$core$Bit $tmp619 = $tmp617(inner$Iter609);
        panda$core$Bit $tmp620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp619);
        if (!$tmp620.value) goto $l615;
        {
            ITable* $tmp622 = inner$Iter609->$class->itable;
            while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp622 = $tmp622->next;
            }
            $fn624 $tmp623 = $tmp622->methods[1];
            panda$core$Object* $tmp625 = $tmp623(inner$Iter609);
            inner621 = ((org$pandalanguage$pandac$ClassDecl*) $tmp625);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner621, p_arr);
        }
        goto $l614;
        $l615:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result626;
    panda$core$String* currentPackage629;
    panda$collections$HashMap* aliases631;
    panda$collections$Iterator* c$Iter635;
    org$pandalanguage$pandac$ASTNode* c647;
    panda$core$String* fullName652;
    panda$core$String$Index$nullable idx653;
    panda$core$String* alias656;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp657;
    org$pandalanguage$pandac$ClassDecl* cl660;
    org$pandalanguage$pandac$ClassDecl* cl662;
    panda$collections$Array* $tmp627 = (panda$collections$Array*) malloc(40);
    $tmp627->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp627->refCount.value = 1;
    panda$collections$Array$init($tmp627);
    result626 = $tmp627;
    currentPackage629 = &$s630;
    panda$collections$HashMap* $tmp632 = (panda$collections$HashMap*) malloc(56);
    $tmp632->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp632->refCount.value = 1;
    panda$collections$HashMap$init($tmp632);
    aliases631 = $tmp632;
    panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp634.value);
    {
        ITable* $tmp636 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp636 = $tmp636->next;
        }
        $fn638 $tmp637 = $tmp636->methods[0];
        panda$collections$Iterator* $tmp639 = $tmp637(((panda$collections$Iterable*) p_file->children));
        c$Iter635 = $tmp639;
        $l640:;
        ITable* $tmp642 = c$Iter635->$class->itable;
        while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp642 = $tmp642->next;
        }
        $fn644 $tmp643 = $tmp642->methods[0];
        panda$core$Bit $tmp645 = $tmp643(c$Iter635);
        panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
        if (!$tmp646.value) goto $l641;
        {
            ITable* $tmp648 = c$Iter635->$class->itable;
            while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp648 = $tmp648->next;
            }
            $fn650 $tmp649 = $tmp648->methods[1];
            panda$core$Object* $tmp651 = $tmp649(c$Iter635);
            c647 = ((org$pandalanguage$pandac$ASTNode*) $tmp651);
            switch (c647->kind.value) {
                case 100:
                {
                    currentPackage629 = ((panda$core$String*) c647->payload);
                }
                break;
                case 101:
                {
                    fullName652 = ((panda$core$String*) c647->payload);
                    panda$core$String$Index$nullable $tmp655 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName652, &$s654);
                    idx653 = $tmp655;
                    if (((panda$core$Bit) { idx653.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp658 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName652, ((panda$core$String$Index) idx653.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp657, ((panda$core$String$Index$nullable) { $tmp658, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp659 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName652, $tmp657);
                        alias656 = $tmp659;
                    }
                    }
                    else {
                    {
                        alias656 = fullName652;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases631, ((panda$collections$Key*) alias656), ((panda$core$Object*) fullName652));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp661 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases631), currentPackage629, c647);
                    cl660 = $tmp661;
                    if (((panda$core$Bit) { cl660 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl660, result626);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp663 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases631), currentPackage629, c647);
                    cl662 = $tmp663;
                    if (((panda$core$Bit) { cl662 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl662, result626);
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
        goto $l640;
        $l641:;
    }
    return ((panda$collections$ListView*) result626);
}

