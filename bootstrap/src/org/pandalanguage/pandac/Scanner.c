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
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

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
typedef panda$collections$Iterator* (*$fn225)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn237)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn310)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn393)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn399)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn410)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn422)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn573)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn579)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn585)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn619)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn625)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn650)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn656)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn662)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn668)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn721)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn727)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn733)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn757)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn763)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn769)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn787)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn793)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn848)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn854)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn860)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn890)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn896)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn902)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn916)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn928)(panda$collections$Iterator*);

static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$core$String* $match$48_1362;
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
                $match$48_1362 = ((panda$core$String*) c56->payload);
                panda$core$Bit $tmp64 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s63);
                if ($tmp64.value) {
                {
                    panda$core$Int64 $tmp65 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp66 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp65);
                    flags43 = $tmp66;
                }
                }
                else {
                panda$core$Bit $tmp68 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s67);
                if ($tmp68.value) {
                {
                    panda$core$Int64 $tmp69 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp70 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp69);
                    flags43 = $tmp70;
                }
                }
                else {
                panda$core$Bit $tmp72 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s71);
                if ($tmp72.value) {
                {
                    panda$core$Int64 $tmp73 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp74 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp73);
                    flags43 = $tmp74;
                }
                }
                else {
                panda$core$Bit $tmp76 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s75);
                if ($tmp76.value) {
                {
                    panda$core$Int64 $tmp77 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp78 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp77);
                    flags43 = $tmp78;
                }
                }
                else {
                panda$core$Bit $tmp80 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s79);
                if ($tmp80.value) {
                {
                    panda$core$Int64 $tmp81 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp82 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp81);
                    flags43 = $tmp82;
                }
                }
                else {
                panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s83);
                if ($tmp84.value) {
                {
                    panda$core$Int64 $tmp85 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp86 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp85);
                    flags43 = $tmp86;
                }
                }
                else {
                panda$core$Bit $tmp88 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s87);
                if ($tmp88.value) {
                {
                    panda$core$Int64 $tmp89 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp90 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp89);
                    flags43 = $tmp90;
                }
                }
                else {
                panda$core$Bit $tmp92 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s91);
                if ($tmp92.value) {
                {
                    panda$core$Int64 $tmp93 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp94 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp93);
                    flags43 = $tmp94;
                }
                }
                else {
                panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s95);
                if ($tmp96.value) {
                {
                    panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp97);
                    flags43 = $tmp98;
                }
                }
                else {
                panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s99);
                if ($tmp100.value) {
                {
                    panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp101);
                    flags43 = $tmp102;
                }
                }
                else {
                panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s103);
                if ($tmp104.value) {
                {
                    panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags43, $tmp105);
                    flags43 = $tmp106;
                }
                }
                else {
                panda$core$Bit $tmp108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$48_1362, &$s107);
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
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp216 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
    $tmp216->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
    $tmp216->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp216, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type* $tmp219 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp214, p_owner, p_i->position, doccomment173, annotations181, $tmp216, &$s218, parameters186, $tmp219, ((org$pandalanguage$pandac$ASTNode*) $tmp220));
    return $tmp214;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result221;
    panda$collections$Iterator* child$Iter222;
    org$pandalanguage$pandac$ASTNode* child234;
    result221 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_node->children != NULL }).value) {
    {
        {
            ITable* $tmp223 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
            while ($tmp223->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp223 = $tmp223->next;
            }
            $fn225 $tmp224 = $tmp223->methods[0];
            panda$collections$Iterator* $tmp226 = $tmp224(((panda$collections$Iterable*) p_node->children));
            child$Iter222 = $tmp226;
            $l227:;
            ITable* $tmp229 = child$Iter222->$class->itable;
            while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp229 = $tmp229->next;
            }
            $fn231 $tmp230 = $tmp229->methods[0];
            panda$core$Bit $tmp232 = $tmp230(child$Iter222);
            panda$core$Bit $tmp233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp232);
            if (!$tmp233.value) goto $l228;
            {
                ITable* $tmp235 = child$Iter222->$class->itable;
                while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp235 = $tmp235->next;
                }
                $fn237 $tmp236 = $tmp235->methods[1];
                panda$core$Object* $tmp238 = $tmp236(child$Iter222);
                child234 = ((org$pandalanguage$pandac$ASTNode*) $tmp238);
                panda$core$Int64 $tmp239 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, child234);
                panda$core$Int64 $tmp240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result221, $tmp239);
                result221 = $tmp240;
                panda$core$Bit $tmp241 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result221, ((panda$core$Int64) { 10 }));
                if ($tmp241.value) {
                {
                    goto $l228;
                }
                }
            }
            goto $l227;
            $l228:;
        }
    }
    }
    return result221;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    panda$core$Bit $tmp246 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp245 = $tmp246.value;
    if (!$tmp245) goto $l247;
    $tmp245 = ((panda$core$Bit) { p_body != NULL }).value;
    $l247:;
    panda$core$Bit $tmp248 = { $tmp245 };
    bool $tmp244 = $tmp248.value;
    if (!$tmp244) goto $l249;
    panda$core$Bit $tmp250 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp250);
    $tmp244 = $tmp251.value;
    $l249:;
    panda$core$Bit $tmp252 = { $tmp244 };
    bool $tmp243 = $tmp252.value;
    if (!$tmp243) goto $l253;
    panda$core$Bit $tmp254 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp243 = $tmp254.value;
    $l253:;
    panda$core$Bit $tmp255 = { $tmp243 };
    bool $tmp242 = $tmp255.value;
    if (!$tmp242) goto $l256;
    panda$core$Int64 $tmp257 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp258 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp257, ((panda$core$Int64) { 10 }));
    $tmp242 = $tmp258.value;
    $l256:;
    panda$core$Bit $tmp259 = { $tmp242 };
    return $tmp259;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$MethodDecl$Kind* kind262;
    panda$core$String* name267;
    panda$core$String* doccomment268;
    org$pandalanguage$pandac$Annotations* annotations276;
    panda$collections$Array* parameters291;
    panda$collections$Iterator* p$Iter294;
    org$pandalanguage$pandac$ASTNode* p307;
    org$pandalanguage$pandac$Type* returnType319;
    panda$core$Int64 $tmp260 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp260, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp261.value);
    switch (p_m->kind.value) {
        case 145:
        {
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp263 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
            $tmp263->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
            $tmp263->refCount.value = 1;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp263, ((panda$core$Int64) { 0 }));
            kind262 = $tmp263;
        }
        break;
        case 146:
        {
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp265 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
            $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
            $tmp265->refCount.value = 1;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp265, ((panda$core$Int64) { 1 }));
            kind262 = $tmp265;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    name267 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp270 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp269)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp270.value) {
    {
        panda$core$Object* $tmp271 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp271)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp272.value);
        panda$core$Object* $tmp273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment268 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp273)->payload);
    }
    }
    else {
    {
        doccomment268 = NULL;
    }
    }
    panda$core$Object* $tmp274 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp274)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp275.value);
    panda$core$Object* $tmp277 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp278 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp277));
    annotations276 = $tmp278;
    panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp279.value) {
    {
        panda$core$Int64 $tmp280 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp281 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations276->flags, $tmp280);
        annotations276->flags = $tmp281;
    }
    }
    panda$core$Bit $tmp283 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp282 = $tmp283.value;
    if ($tmp282) goto $l284;
    panda$core$Bit $tmp285 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations276);
    $tmp282 = $tmp285.value;
    $l284:;
    panda$core$Bit $tmp286 = { $tmp282 };
    if ($tmp286.value) {
    {
        panda$core$Int64 $tmp287 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp288 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations276->flags, $tmp287);
        annotations276->flags = $tmp288;
    }
    }
    panda$core$Object* $tmp289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp289)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp290.value);
    panda$collections$Array* $tmp292 = (panda$collections$Array*) malloc(40);
    $tmp292->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp292->refCount.value = 1;
    panda$collections$Array$init($tmp292);
    parameters291 = $tmp292;
    {
        panda$core$Object* $tmp295 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp296 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp295)->children)->$class->itable;
        while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp296 = $tmp296->next;
        }
        $fn298 $tmp297 = $tmp296->methods[0];
        panda$collections$Iterator* $tmp299 = $tmp297(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp295)->children));
        p$Iter294 = $tmp299;
        $l300:;
        ITable* $tmp302 = p$Iter294->$class->itable;
        while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp302 = $tmp302->next;
        }
        $fn304 $tmp303 = $tmp302->methods[0];
        panda$core$Bit $tmp305 = $tmp303(p$Iter294);
        panda$core$Bit $tmp306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp305);
        if (!$tmp306.value) goto $l301;
        {
            ITable* $tmp308 = p$Iter294->$class->itable;
            while ($tmp308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp308 = $tmp308->next;
            }
            $fn310 $tmp309 = $tmp308->methods[1];
            panda$core$Object* $tmp311 = $tmp309(p$Iter294);
            p307 = ((org$pandalanguage$pandac$ASTNode*) $tmp311);
            panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p307->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp312.value);
            panda$core$Int64 $tmp313 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p307->children);
            panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp313, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp314.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp315 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp315->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp315->refCount.value = 1;
            panda$core$Object* $tmp317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p307->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp318 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp317));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp315, ((panda$core$String*) p307->payload), $tmp318);
            panda$collections$Array$add$panda$collections$Array$T(parameters291, ((panda$core$Object*) $tmp315));
        }
        goto $l300;
        $l301:;
    }
    panda$core$Object* $tmp320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp321 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp320));
    returnType319 = $tmp321;
    panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind262->$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp322 = $tmp323.value;
    if (!$tmp322) goto $l324;
    org$pandalanguage$pandac$Type* $tmp325 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp326 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType319, $tmp325);
    $tmp322 = $tmp326.value;
    $l324:;
    panda$core$Bit $tmp327 = { $tmp322 };
    if ($tmp327.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_m->position, &$s328);
    }
    }
    panda$core$Object* $tmp329 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp329)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp330.value) {
    {
        panda$core$Object* $tmp331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp332 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations276, ((org$pandalanguage$pandac$ASTNode*) $tmp331));
        if ($tmp332.value) {
        {
            panda$core$Int64 $tmp333 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp334 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations276->flags, $tmp333);
            annotations276->flags = $tmp334;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp335 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp335->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp335->refCount.value = 1;
        panda$core$Object* $tmp337 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp335, p_owner, p_m->position, doccomment268, annotations276, kind262, name267, parameters291, returnType319, ((org$pandalanguage$pandac$ASTNode*) $tmp337));
        return $tmp335;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp338 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp338->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp338->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp338, p_owner, p_m->position, doccomment268, annotations276, kind262, name267, parameters291, returnType319, NULL);
        return $tmp338;
    }
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$MethodDecl* i340;
    org$pandalanguage$pandac$MethodDecl* m342;
    org$pandalanguage$pandac$ClassDecl* inner344;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp349;
    org$pandalanguage$pandac$ClassDecl* inner354;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp359;
    org$pandalanguage$pandac$ClassDecl* inner364;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp369;
    switch (p_node->kind.value) {
        case 148:
        {
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, p_cl, p_node);
        }
        break;
        case 147:
        {
            org$pandalanguage$pandac$MethodDecl* $tmp341 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, p_node);
            i340 = $tmp341;
            if (((panda$core$Bit) { i340 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) i340));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) i340));
            }
            }
        }
        break;
        case 145:
        case 146:
        {
            org$pandalanguage$pandac$MethodDecl* $tmp343 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, p_node);
            m342 = $tmp343;
            if (((panda$core$Bit) { m342 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m342));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m342));
            }
            }
        }
        break;
        case 142:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp345 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, p_node);
            inner344 = $tmp345;
            if (((panda$core$Bit) { inner344 != NULL }).value) {
            {
                inner344->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner344));
                panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s346);
                panda$core$Bit $tmp348 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner344)->name, $tmp347);
                PANDA_ASSERT($tmp348.value);
                panda$core$Int64 $tmp350 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp351 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp350, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp349, ((panda$core$Int64$nullable) { $tmp351, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp352 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner344)->name, $tmp349);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner344), $tmp352);
                panda$collections$Array$add$panda$collections$Array$T(inner344->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp353 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner344->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp353);
            }
            }
        }
        break;
        case 151:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp355 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, p_node);
            inner354 = $tmp355;
            if (((panda$core$Bit) { inner354 != NULL }).value) {
            {
                inner354->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner354));
                panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s356);
                panda$core$Bit $tmp358 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner354)->name, $tmp357);
                PANDA_ASSERT($tmp358.value);
                panda$core$Int64 $tmp360 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp361 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp360, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp359, ((panda$core$Int64$nullable) { $tmp361, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp362 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner354)->name, $tmp359);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner354), $tmp362);
                panda$collections$Array$add$panda$collections$Array$T(inner354->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp363 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner354->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp363);
            }
            }
        }
        break;
        case 155:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp365 = org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, p_node);
            inner364 = $tmp365;
            if (((panda$core$Bit) { inner364 != NULL }).value) {
            {
                inner364->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner364));
                panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s366);
                panda$core$Bit $tmp368 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner364)->name, $tmp367);
                PANDA_ASSERT($tmp368.value);
                panda$core$Int64 $tmp370 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp371 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp370, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp369, ((panda$core$Int64$nullable) { $tmp371, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp372 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner364)->name, $tmp369);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner364), $tmp372);
                panda$collections$Array$add$panda$collections$Array$T(inner364->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp373 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner364->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp373);
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
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_entry) {
    panda$core$String* doccomment374;
    panda$collections$Array* fields380;
    panda$collections$Iterator* t$Iter383;
    org$pandalanguage$pandac$ASTNode* t396;
    org$pandalanguage$pandac$ChoiceEntry* entry402;
    panda$core$Bit found406;
    panda$collections$Iterator* m$Iter407;
    org$pandalanguage$pandac$MethodDecl* m419;
    panda$core$Range$LTpanda$core$Int64$GT $tmp432;
    panda$collections$Array* parameters458;
    panda$collections$Array* statements465;
    panda$collections$Array* children468;
    panda$core$Range$LTpanda$core$Int64$GT $tmp481;
    panda$collections$Array* fieldRefChildren504;
    org$pandalanguage$pandac$MethodDecl* synthetic531;
    panda$core$Object* $tmp375 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp376 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp375)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp376.value) {
    {
        panda$core$Object* $tmp377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp377)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp378.value);
        panda$core$Object* $tmp379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 0 }));
        doccomment374 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp379)->payload);
    }
    }
    else {
    {
        doccomment374 = NULL;
    }
    }
    panda$collections$Array* $tmp381 = (panda$collections$Array*) malloc(40);
    $tmp381->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp381->refCount.value = 1;
    panda$collections$Array$init($tmp381);
    fields380 = $tmp381;
    {
        panda$core$Object* $tmp384 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 1 }));
        ITable* $tmp385 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp384)->children)->$class->itable;
        while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp385 = $tmp385->next;
        }
        $fn387 $tmp386 = $tmp385->methods[0];
        panda$collections$Iterator* $tmp388 = $tmp386(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp384)->children));
        t$Iter383 = $tmp388;
        $l389:;
        ITable* $tmp391 = t$Iter383->$class->itable;
        while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp391 = $tmp391->next;
        }
        $fn393 $tmp392 = $tmp391->methods[0];
        panda$core$Bit $tmp394 = $tmp392(t$Iter383);
        panda$core$Bit $tmp395 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp394);
        if (!$tmp395.value) goto $l390;
        {
            ITable* $tmp397 = t$Iter383->$class->itable;
            while ($tmp397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp397 = $tmp397->next;
            }
            $fn399 $tmp398 = $tmp397->methods[1];
            panda$core$Object* $tmp400 = $tmp398(t$Iter383);
            t396 = ((org$pandalanguage$pandac$ASTNode*) $tmp400);
            org$pandalanguage$pandac$Type* $tmp401 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t396);
            panda$collections$Array$add$panda$collections$Array$T(fields380, ((panda$core$Object*) $tmp401));
        }
        goto $l389;
        $l390:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp403 = (org$pandalanguage$pandac$ChoiceEntry*) malloc(89);
    $tmp403->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp403->refCount.value = 1;
    panda$core$Int64 $tmp405 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp403, p_cl, p_entry->position, ((panda$core$String*) p_entry->payload), doccomment374, $tmp405, ((panda$collections$ListView*) fields380));
    entry402 = $tmp403;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry402));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry402));
    found406 = ((panda$core$Bit) { false });
    {
        ITable* $tmp408 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp408 = $tmp408->next;
        }
        $fn410 $tmp409 = $tmp408->methods[0];
        panda$collections$Iterator* $tmp411 = $tmp409(((panda$collections$Iterable*) p_cl->methods));
        m$Iter407 = $tmp411;
        $l412:;
        ITable* $tmp414 = m$Iter407->$class->itable;
        while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp414 = $tmp414->next;
        }
        $fn416 $tmp415 = $tmp414->methods[0];
        panda$core$Bit $tmp417 = $tmp415(m$Iter407);
        panda$core$Bit $tmp418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp417);
        if (!$tmp418.value) goto $l413;
        {
            ITable* $tmp420 = m$Iter407->$class->itable;
            while ($tmp420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp420 = $tmp420->next;
            }
            $fn422 $tmp421 = $tmp420->methods[1];
            panda$core$Object* $tmp423 = $tmp421(m$Iter407);
            m419 = ((org$pandalanguage$pandac$MethodDecl*) $tmp423);
            panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m419->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp424.value);
            panda$core$Int64 $tmp425 = panda$collections$Array$get_count$R$panda$core$Int64(m419->parameters);
            panda$core$Int64 $tmp426 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
            panda$core$Int64 $tmp427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp426, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp428 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp425, $tmp427);
            if ($tmp428.value) {
            {
                goto $l412;
            }
            }
            panda$core$Object* $tmp429 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m419->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp430 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp431 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp429)->type, $tmp430);
            PANDA_ASSERT($tmp431.value);
            panda$core$Int64 $tmp433 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp432, ((panda$core$Int64) { 0 }), $tmp433, ((panda$core$Bit) { false }));
            int64_t $tmp435 = $tmp432.min.value;
            panda$core$Int64 i434 = { $tmp435 };
            int64_t $tmp437 = $tmp432.max.value;
            bool $tmp438 = $tmp432.inclusive.value;
            if ($tmp438) goto $l445; else goto $l446;
            $l445:;
            if ($tmp435 <= $tmp437) goto $l439; else goto $l441;
            $l446:;
            if ($tmp435 < $tmp437) goto $l439; else goto $l441;
            $l439:;
            {
                panda$core$Object* $tmp447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i434);
                panda$core$Int64 $tmp448 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i434, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m419->parameters, $tmp448);
                panda$core$Bit $tmp450 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp447), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp449)->type);
                if ($tmp450.value) {
                {
                    goto $l412;
                }
                }
            }
            $l442:;
            int64_t $tmp452 = $tmp437 - i434.value;
            if ($tmp438) goto $l453; else goto $l454;
            $l453:;
            if ((uint64_t) $tmp452 >= 1) goto $l451; else goto $l441;
            $l454:;
            if ((uint64_t) $tmp452 > 1) goto $l451; else goto $l441;
            $l451:;
            i434.value += 1;
            goto $l439;
            $l441:;
            found406 = ((panda$core$Bit) { true });
            goto $l413;
        }
        goto $l412;
        $l413:;
    }
    panda$core$Bit $tmp457 = panda$core$Bit$$NOT$R$panda$core$Bit(found406);
    if ($tmp457.value) {
    {
        panda$collections$Array* $tmp459 = (panda$collections$Array*) malloc(40);
        $tmp459->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp459->refCount.value = 1;
        panda$collections$Array$init($tmp459);
        parameters458 = $tmp459;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp461 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
        $tmp461->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp461->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp464 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp461, &$s463, $tmp464);
        panda$collections$Array$add$panda$collections$Array$T(parameters458, ((panda$core$Object*) $tmp461));
        panda$collections$Array* $tmp466 = (panda$collections$Array*) malloc(40);
        $tmp466->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp466->refCount.value = 1;
        panda$collections$Array$init($tmp466);
        statements465 = $tmp466;
        panda$collections$Array* $tmp469 = (panda$collections$Array*) malloc(40);
        $tmp469->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp469->refCount.value = 1;
        panda$collections$Array$init($tmp469);
        children468 = $tmp469;
        org$pandalanguage$pandac$ASTNode* $tmp471 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp471->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp471->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp471, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s473);
        panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) $tmp471));
        org$pandalanguage$pandac$ASTNode* $tmp474 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp474->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp474->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp474, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s476);
        panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) $tmp474));
        org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp477->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp479 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp479->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp479->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp479, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp477, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp479), ((panda$collections$ListView*) children468));
        panda$collections$Array$add$panda$collections$Array$T(statements465, ((panda$core$Object*) $tmp477));
        panda$core$Int64 $tmp482 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp481, ((panda$core$Int64) { 0 }), $tmp482, ((panda$core$Bit) { false }));
        int64_t $tmp484 = $tmp481.min.value;
        panda$core$Int64 i483 = { $tmp484 };
        int64_t $tmp486 = $tmp481.max.value;
        bool $tmp487 = $tmp481.inclusive.value;
        if ($tmp487) goto $l494; else goto $l495;
        $l494:;
        if ($tmp484 <= $tmp486) goto $l488; else goto $l490;
        $l495:;
        if ($tmp484 < $tmp486) goto $l488; else goto $l490;
        $l488:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp496 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp496->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp496->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp499;
            $tmp499 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp499->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp499->refCount = 1;
            $tmp499->value = i483;
            panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s498, ((panda$core$Object*) $tmp499));
            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp500, &$s501);
            panda$core$Object* $tmp503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i483);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp496, $tmp502, ((org$pandalanguage$pandac$Type*) $tmp503));
            panda$collections$Array$add$panda$collections$Array$T(parameters458, ((panda$core$Object*) $tmp496));
            panda$collections$Array$clear(children468);
            panda$collections$Array* $tmp505 = (panda$collections$Array*) malloc(40);
            $tmp505->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp505->refCount.value = 1;
            panda$collections$Array$init($tmp505);
            fieldRefChildren504 = $tmp505;
            org$pandalanguage$pandac$ASTNode* $tmp507 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp507->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp507->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp507, ((panda$core$Int64) { 114 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren504, ((panda$core$Object*) $tmp507));
            org$pandalanguage$pandac$ASTNode* $tmp509 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp509->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp509->refCount.value = 1;
            org$pandalanguage$pandac$Pair* $tmp511 = (org$pandalanguage$pandac$Pair*) malloc(32);
            $tmp511->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
            $tmp511->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp513;
            $tmp513 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp513->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp513->refCount = 1;
            $tmp513->value = i483;
            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp511, ((panda$core$Object*) entry402), ((panda$core$Object*) $tmp513));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp509, ((panda$core$Int64) { 158 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp511), ((panda$collections$ListView*) fieldRefChildren504));
            panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) $tmp509));
            org$pandalanguage$pandac$ASTNode* $tmp514 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp514->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp514->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp517;
            $tmp517 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp517->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp517->refCount = 1;
            $tmp517->value = i483;
            panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s516, ((panda$core$Object*) $tmp517));
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s519);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp514, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp520);
            panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) $tmp514));
            org$pandalanguage$pandac$ASTNode* $tmp521 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp521->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp521->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp523 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp523->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp523->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp523, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp521, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp523), ((panda$collections$ListView*) children468));
            panda$collections$Array$add$panda$collections$Array$T(statements465, ((panda$core$Object*) $tmp521));
        }
        $l491:;
        int64_t $tmp526 = $tmp486 - i483.value;
        if ($tmp487) goto $l527; else goto $l528;
        $l527:;
        if ((uint64_t) $tmp526 >= 1) goto $l525; else goto $l490;
        $l528:;
        if ((uint64_t) $tmp526 > 1) goto $l525; else goto $l490;
        $l525:;
        i483.value += 1;
        goto $l488;
        $l490:;
        org$pandalanguage$pandac$MethodDecl* $tmp532 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp532->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp532->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp534 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp534->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp534->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp534);
        org$pandalanguage$pandac$MethodDecl$Kind* $tmp536 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
        $tmp536->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
        $tmp536->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp536, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp539 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp540 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp540->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp540->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp540, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$ListView*) statements465));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp532, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp534, $tmp536, &$s538, parameters458, $tmp539, $tmp540);
        synthetic531 = $tmp532;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic531));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic531));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName542;
    panda$core$String* doccomment553;
    org$pandalanguage$pandac$Annotations* annotations561;
    panda$collections$Array* parameters564;
    panda$collections$Iterator* p$Iter569;
    org$pandalanguage$pandac$ASTNode* p582;
    org$pandalanguage$pandac$Type* bound588;
    panda$collections$Array* supertypes603;
    panda$collections$Iterator* intf$Iter609;
    org$pandalanguage$pandac$ASTNode* intf622;
    org$pandalanguage$pandac$ClassDecl* result628;
    panda$collections$Iterator* c$Iter634;
    org$pandalanguage$pandac$ASTNode* c647;
    panda$core$Bit foundInit652;
    panda$collections$Iterator* m$Iter653;
    org$pandalanguage$pandac$MethodDecl* m665;
    org$pandalanguage$pandac$MethodDecl* defaultInit677;
    panda$core$Bit $tmp544 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s543);
    if ($tmp544.value) {
    {
        panda$core$String* $tmp545 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
        panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp547, p_cl->payload);
        panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
        fullName542 = $tmp550;
    }
    }
    else {
    {
        fullName542 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp551 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp551, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp552.value);
    panda$core$Object* $tmp554 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp555 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp554)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp555.value) {
    {
        panda$core$Object* $tmp556 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp556)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp557.value);
        panda$core$Object* $tmp558 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment553 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp558)->payload);
    }
    }
    else {
    {
        doccomment553 = NULL;
    }
    }
    panda$core$Object* $tmp559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp559)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp560.value);
    panda$core$Object* $tmp562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp563 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp562));
    annotations561 = $tmp563;
    panda$collections$Array* $tmp565 = (panda$collections$Array*) malloc(40);
    $tmp565->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp565->refCount.value = 1;
    panda$collections$Array$init($tmp565);
    parameters564 = $tmp565;
    panda$core$Object* $tmp567 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp567)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp568.value) {
    {
        {
            panda$core$Object* $tmp570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp571 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp570)->children)->$class->itable;
            while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp571 = $tmp571->next;
            }
            $fn573 $tmp572 = $tmp571->methods[0];
            panda$collections$Iterator* $tmp574 = $tmp572(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp570)->children));
            p$Iter569 = $tmp574;
            $l575:;
            ITable* $tmp577 = p$Iter569->$class->itable;
            while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp577 = $tmp577->next;
            }
            $fn579 $tmp578 = $tmp577->methods[0];
            panda$core$Bit $tmp580 = $tmp578(p$Iter569);
            panda$core$Bit $tmp581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp580);
            if (!$tmp581.value) goto $l576;
            {
                ITable* $tmp583 = p$Iter569->$class->itable;
                while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp583 = $tmp583->next;
                }
                $fn585 $tmp584 = $tmp583->methods[1];
                panda$core$Object* $tmp586 = $tmp584(p$Iter569);
                p582 = ((org$pandalanguage$pandac$ASTNode*) $tmp586);
                panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p582->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp587.value);
                bool $tmp589 = ((panda$core$Bit) { p582->children != NULL }).value;
                if (!$tmp589) goto $l590;
                panda$core$Int64 $tmp591 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p582->children);
                panda$core$Bit $tmp592 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp591, ((panda$core$Int64) { 0 }));
                $tmp589 = $tmp592.value;
                $l590:;
                panda$core$Bit $tmp593 = { $tmp589 };
                if ($tmp593.value) {
                {
                    panda$core$Int64 $tmp594 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p582->children);
                    panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp594, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp595.value);
                    panda$core$Object* $tmp596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p582->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp597 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp596));
                    bound588 = $tmp597;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp598 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound588 = $tmp598;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp599 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp599->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp599->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp599, p582->position, fullName542, ((panda$core$String*) p582->payload), bound588);
                panda$collections$Array$add$panda$collections$Array$T(parameters564, ((panda$core$Object*) $tmp599));
            }
            goto $l575;
            $l576:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp601 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp601)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp602.value);
    }
    }
    panda$collections$Array* $tmp604 = (panda$collections$Array*) malloc(40);
    $tmp604->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp604->refCount.value = 1;
    panda$collections$Array$init($tmp604);
    supertypes603 = $tmp604;
    panda$core$Object* $tmp606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp606)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp607.value);
    panda$core$Object* $tmp608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp608)->children != NULL }).value) {
    {
        {
            panda$core$Object* $tmp610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
            ITable* $tmp611 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp610)->children)->$class->itable;
            while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp611 = $tmp611->next;
            }
            $fn613 $tmp612 = $tmp611->methods[0];
            panda$collections$Iterator* $tmp614 = $tmp612(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp610)->children));
            intf$Iter609 = $tmp614;
            $l615:;
            ITable* $tmp617 = intf$Iter609->$class->itable;
            while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp617 = $tmp617->next;
            }
            $fn619 $tmp618 = $tmp617->methods[0];
            panda$core$Bit $tmp620 = $tmp618(intf$Iter609);
            panda$core$Bit $tmp621 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp620);
            if (!$tmp621.value) goto $l616;
            {
                ITable* $tmp623 = intf$Iter609->$class->itable;
                while ($tmp623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp623 = $tmp623->next;
                }
                $fn625 $tmp624 = $tmp623->methods[1];
                panda$core$Object* $tmp626 = $tmp624(intf$Iter609);
                intf622 = ((org$pandalanguage$pandac$ASTNode*) $tmp626);
                org$pandalanguage$pandac$Type* $tmp627 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf622);
                panda$collections$Array$add$panda$collections$Array$T(supertypes603, ((panda$core$Object*) $tmp627));
            }
            goto $l615;
            $l616:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp629 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp629->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp629->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp631 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp631->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp631->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp631, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp629, p_source, p_cl->position, p_aliases, doccomment553, annotations561, $tmp631, fullName542, ((panda$collections$ListView*) supertypes603), parameters564, self->compiler->root);
    result628 = $tmp629;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result628));
    panda$core$Object* $tmp633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp633) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
            ITable* $tmp636 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp635)->children)->$class->itable;
            while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp636 = $tmp636->next;
            }
            $fn638 $tmp637 = $tmp636->methods[0];
            panda$collections$Iterator* $tmp639 = $tmp637(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp635)->children));
            c$Iter634 = $tmp639;
            $l640:;
            ITable* $tmp642 = c$Iter634->$class->itable;
            while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp642 = $tmp642->next;
            }
            $fn644 $tmp643 = $tmp642->methods[0];
            panda$core$Bit $tmp645 = $tmp643(c$Iter634);
            panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
            if (!$tmp646.value) goto $l641;
            {
                ITable* $tmp648 = c$Iter634->$class->itable;
                while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp648 = $tmp648->next;
                }
                $fn650 $tmp649 = $tmp648->methods[1];
                panda$core$Object* $tmp651 = $tmp649(c$Iter634);
                c647 = ((org$pandalanguage$pandac$ASTNode*) $tmp651);
                org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result628, c647);
            }
            goto $l640;
            $l641:;
        }
    }
    }
    foundInit652 = ((panda$core$Bit) { false });
    {
        ITable* $tmp654 = ((panda$collections$Iterable*) result628->methods)->$class->itable;
        while ($tmp654->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp654 = $tmp654->next;
        }
        $fn656 $tmp655 = $tmp654->methods[0];
        panda$collections$Iterator* $tmp657 = $tmp655(((panda$collections$Iterable*) result628->methods));
        m$Iter653 = $tmp657;
        $l658:;
        ITable* $tmp660 = m$Iter653->$class->itable;
        while ($tmp660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp660 = $tmp660->next;
        }
        $fn662 $tmp661 = $tmp660->methods[0];
        panda$core$Bit $tmp663 = $tmp661(m$Iter653);
        panda$core$Bit $tmp664 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp663);
        if (!$tmp664.value) goto $l659;
        {
            ITable* $tmp666 = m$Iter653->$class->itable;
            while ($tmp666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp666 = $tmp666->next;
            }
            $fn668 $tmp667 = $tmp666->methods[1];
            panda$core$Object* $tmp669 = $tmp667(m$Iter653);
            m665 = ((org$pandalanguage$pandac$MethodDecl*) $tmp669);
            panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m665->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp670.value) {
            {
                foundInit652 = ((panda$core$Bit) { true });
                goto $l659;
            }
            }
        }
        goto $l658;
        $l659:;
    }
    panda$core$Bit $tmp672 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit652);
    bool $tmp671 = $tmp672.value;
    if (!$tmp671) goto $l673;
    panda$core$Bit $tmp675 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result628)->name, &$s674);
    $tmp671 = $tmp675.value;
    $l673:;
    panda$core$Bit $tmp676 = { $tmp671 };
    if ($tmp676.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp678 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp678->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp678->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp680 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp680->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp680->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp680);
        org$pandalanguage$pandac$MethodDecl$Kind* $tmp682 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
        $tmp682->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
        $tmp682->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp682, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp685 = (panda$collections$Array*) malloc(40);
        $tmp685->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp685->refCount.value = 1;
        panda$collections$Array$init($tmp685);
        org$pandalanguage$pandac$Type* $tmp687 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp688 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp688->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp688->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp688, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp678, result628, p_cl->position, NULL, $tmp680, $tmp682, &$s684, $tmp685, $tmp687, $tmp688);
        defaultInit677 = $tmp678;
        panda$collections$Array$add$panda$collections$Array$T(result628->methods, ((panda$core$Object*) defaultInit677));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result628->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit677));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result628;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName690;
    panda$core$String* doccomment701;
    org$pandalanguage$pandac$Annotations* annotations709;
    panda$collections$Array* parameters712;
    panda$collections$Iterator* p$Iter717;
    org$pandalanguage$pandac$ASTNode* p730;
    org$pandalanguage$pandac$Type* bound736;
    panda$collections$Array* supertypes748;
    panda$collections$Iterator* s$Iter753;
    org$pandalanguage$pandac$ASTNode* s766;
    org$pandalanguage$pandac$ClassDecl* result772;
    panda$collections$Iterator* c$Iter777;
    org$pandalanguage$pandac$ASTNode* c790;
    panda$core$Bit $tmp692 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s691);
    if ($tmp692.value) {
    {
        panda$core$String* $tmp693 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s694);
        panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, p_intf->payload);
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
        fullName690 = $tmp698;
    }
    }
    else {
    {
        fullName690 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp699 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp699, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp700.value);
    panda$core$Object* $tmp702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp703 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp702)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp703.value) {
    {
        panda$core$Object* $tmp704 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp704)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp705.value);
        panda$core$Object* $tmp706 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment701 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp706)->payload);
    }
    }
    else {
    {
        doccomment701 = NULL;
    }
    }
    panda$core$Object* $tmp707 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp707)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp708.value);
    panda$core$Object* $tmp710 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp711 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp710));
    annotations709 = $tmp711;
    panda$collections$Array* $tmp713 = (panda$collections$Array*) malloc(40);
    $tmp713->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp713->refCount.value = 1;
    panda$collections$Array$init($tmp713);
    parameters712 = $tmp713;
    panda$core$Object* $tmp715 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp715)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp716.value) {
    {
        {
            panda$core$Object* $tmp718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp719 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp718)->children)->$class->itable;
            while ($tmp719->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp719 = $tmp719->next;
            }
            $fn721 $tmp720 = $tmp719->methods[0];
            panda$collections$Iterator* $tmp722 = $tmp720(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp718)->children));
            p$Iter717 = $tmp722;
            $l723:;
            ITable* $tmp725 = p$Iter717->$class->itable;
            while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp725 = $tmp725->next;
            }
            $fn727 $tmp726 = $tmp725->methods[0];
            panda$core$Bit $tmp728 = $tmp726(p$Iter717);
            panda$core$Bit $tmp729 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp728);
            if (!$tmp729.value) goto $l724;
            {
                ITable* $tmp731 = p$Iter717->$class->itable;
                while ($tmp731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp731 = $tmp731->next;
                }
                $fn733 $tmp732 = $tmp731->methods[1];
                panda$core$Object* $tmp734 = $tmp732(p$Iter717);
                p730 = ((org$pandalanguage$pandac$ASTNode*) $tmp734);
                panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p730->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp735.value);
                panda$core$Int64 $tmp737 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p730->children);
                panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, ((panda$core$Int64) { 1 }));
                if ($tmp738.value) {
                {
                    panda$core$Object* $tmp739 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p730->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp740 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp739));
                    bound736 = $tmp740;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp741 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p730->children);
                    panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp741, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp742.value);
                    org$pandalanguage$pandac$Type* $tmp743 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound736 = $tmp743;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp744 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp744->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp744->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp744, p730->position, fullName690, ((panda$core$String*) p730->payload), bound736);
                panda$collections$Array$add$panda$collections$Array$T(parameters712, ((panda$core$Object*) $tmp744));
            }
            goto $l723;
            $l724:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp746 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp746)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp747.value);
    }
    }
    panda$collections$Array* $tmp749 = (panda$collections$Array*) malloc(40);
    $tmp749->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp749->refCount.value = 1;
    panda$collections$Array$init($tmp749);
    supertypes748 = $tmp749;
    panda$core$Object* $tmp751 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp751)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp752.value);
    {
        panda$core$Object* $tmp754 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp755 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp754)->children)->$class->itable;
        while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp755 = $tmp755->next;
        }
        $fn757 $tmp756 = $tmp755->methods[0];
        panda$collections$Iterator* $tmp758 = $tmp756(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp754)->children));
        s$Iter753 = $tmp758;
        $l759:;
        ITable* $tmp761 = s$Iter753->$class->itable;
        while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp761 = $tmp761->next;
        }
        $fn763 $tmp762 = $tmp761->methods[0];
        panda$core$Bit $tmp764 = $tmp762(s$Iter753);
        panda$core$Bit $tmp765 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp764);
        if (!$tmp765.value) goto $l760;
        {
            ITable* $tmp767 = s$Iter753->$class->itable;
            while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp767 = $tmp767->next;
            }
            $fn769 $tmp768 = $tmp767->methods[1];
            panda$core$Object* $tmp770 = $tmp768(s$Iter753);
            s766 = ((org$pandalanguage$pandac$ASTNode*) $tmp770);
            org$pandalanguage$pandac$Type* $tmp771 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s766);
            panda$collections$Array$add$panda$collections$Array$T(supertypes748, ((panda$core$Object*) $tmp771));
        }
        goto $l759;
        $l760:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp773 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp773->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp773->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp775 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp775->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp775->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp775, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp773, p_source, p_intf->position, p_aliases, doccomment701, annotations709, $tmp775, fullName690, ((panda$collections$ListView*) supertypes748), parameters712, self->compiler->root);
    result772 = $tmp773;
    {
        panda$core$Object* $tmp778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp779 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp778)->children)->$class->itable;
        while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp779 = $tmp779->next;
        }
        $fn781 $tmp780 = $tmp779->methods[0];
        panda$collections$Iterator* $tmp782 = $tmp780(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp778)->children));
        c$Iter777 = $tmp782;
        $l783:;
        ITable* $tmp785 = c$Iter777->$class->itable;
        while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp785 = $tmp785->next;
        }
        $fn787 $tmp786 = $tmp785->methods[0];
        panda$core$Bit $tmp788 = $tmp786(c$Iter777);
        panda$core$Bit $tmp789 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp788);
        if (!$tmp789.value) goto $l784;
        {
            ITable* $tmp791 = c$Iter777->$class->itable;
            while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp791 = $tmp791->next;
            }
            $fn793 $tmp792 = $tmp791->methods[1];
            panda$core$Object* $tmp794 = $tmp792(c$Iter777);
            c790 = ((org$pandalanguage$pandac$ASTNode*) $tmp794);
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result772, c790);
        }
        goto $l783;
        $l784:;
    }
    return result772;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName795;
    panda$core$String* doccomment806;
    org$pandalanguage$pandac$Annotations* annotations814;
    panda$collections$Array* parameters817;
    panda$collections$Array* supertypes820;
    org$pandalanguage$pandac$ClassDecl* result823;
    org$pandalanguage$pandac$FieldDecl* rawValue828;
    org$pandalanguage$pandac$FieldDecl* data835;
    panda$core$Bit haveFields842;
    panda$collections$Iterator* c$Iter844;
    org$pandalanguage$pandac$ASTNode* c857;
    org$pandalanguage$pandac$MethodDecl* defaultInit871;
    panda$core$Bit $tmp797 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s796);
    if ($tmp797.value) {
    {
        panda$core$String* $tmp798 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, &$s799);
        panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp800, p_cl->payload);
        panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp801, &$s802);
        fullName795 = $tmp803;
    }
    }
    else {
    {
        fullName795 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp804 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp804, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp805.value);
    panda$core$Object* $tmp807 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp808 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp807)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp808.value) {
    {
        panda$core$Object* $tmp809 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp809)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp810.value);
        panda$core$Object* $tmp811 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment806 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp811)->payload);
    }
    }
    else {
    {
        doccomment806 = NULL;
    }
    }
    panda$core$Object* $tmp812 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp812)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp813.value);
    panda$core$Object* $tmp815 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp816 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp815));
    annotations814 = $tmp816;
    panda$collections$Array* $tmp818 = (panda$collections$Array*) malloc(40);
    $tmp818->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp818->refCount.value = 1;
    panda$collections$Array$init($tmp818);
    parameters817 = $tmp818;
    panda$collections$Array* $tmp821 = (panda$collections$Array*) malloc(40);
    $tmp821->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp821->refCount.value = 1;
    panda$collections$Array$init($tmp821);
    supertypes820 = $tmp821;
    org$pandalanguage$pandac$ClassDecl* $tmp824 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp824->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp824->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp826 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp826->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp826->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp826, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp824, p_source, p_cl->position, p_aliases, doccomment806, annotations814, $tmp826, fullName795, ((panda$collections$ListView*) supertypes820), parameters817, self->compiler->root);
    result823 = $tmp824;
    org$pandalanguage$pandac$FieldDecl* $tmp829 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp829->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp829->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp831 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp831->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp831);
    org$pandalanguage$pandac$Type* $tmp834 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp829, result823, ((org$pandalanguage$pandac$Symbol*) result823)->position, NULL, $tmp831, ((panda$core$Int64) { 10001 }), &$s833, $tmp834, NULL);
    rawValue828 = $tmp829;
    panda$collections$Array$add$panda$collections$Array$T(result823->fields, ((panda$core$Object*) rawValue828));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result823->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue828));
    org$pandalanguage$pandac$FieldDecl* $tmp836 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp836->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp836->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp838 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp838->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp838->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp838);
    org$pandalanguage$pandac$Type* $tmp841 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp836, result823, ((org$pandalanguage$pandac$Symbol*) result823)->position, NULL, $tmp838, ((panda$core$Int64) { 10001 }), &$s840, $tmp841, NULL);
    data835 = $tmp836;
    panda$collections$Array$add$panda$collections$Array$T(result823->fields, ((panda$core$Object*) data835));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result823->symbolTable, ((org$pandalanguage$pandac$Symbol*) data835));
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result823));
    haveFields842 = ((panda$core$Bit) { false });
    panda$core$Object* $tmp843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp843) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp845 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp846 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp845)->children)->$class->itable;
            while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp846 = $tmp846->next;
            }
            $fn848 $tmp847 = $tmp846->methods[0];
            panda$collections$Iterator* $tmp849 = $tmp847(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp845)->children));
            c$Iter844 = $tmp849;
            $l850:;
            ITable* $tmp852 = c$Iter844->$class->itable;
            while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp852 = $tmp852->next;
            }
            $fn854 $tmp853 = $tmp852->methods[0];
            panda$core$Bit $tmp855 = $tmp853(c$Iter844);
            panda$core$Bit $tmp856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp855);
            if (!$tmp856.value) goto $l851;
            {
                ITable* $tmp858 = c$Iter844->$class->itable;
                while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp858 = $tmp858->next;
                }
                $fn860 $tmp859 = $tmp858->methods[1];
                panda$core$Object* $tmp861 = $tmp859(c$Iter844);
                c857 = ((org$pandalanguage$pandac$ASTNode*) $tmp861);
                panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c857->kind, ((panda$core$Int64) { 156 }));
                if ($tmp862.value) {
                {
                    bool $tmp863 = haveFields842.value;
                    if ($tmp863) goto $l864;
                    panda$core$Object* $tmp865 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(c857->children, ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp866 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp865)->children);
                    panda$core$Bit $tmp867 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp866, ((panda$core$Int64) { 0 }));
                    $tmp863 = $tmp867.value;
                    $l864:;
                    panda$core$Bit $tmp868 = { $tmp863 };
                    haveFields842 = $tmp868;
                    org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result823, c857);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result823, c857);
                }
                }
            }
            goto $l850;
            $l851:;
        }
    }
    }
    if (haveFields842.value) {
    {
        org$pandalanguage$pandac$Type* $tmp869 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(supertypes820, ((panda$core$Object*) $tmp869));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(supertypes820, ((panda$core$Object*) $tmp870));
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp872 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp872->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp872->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp874 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp874->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp874->refCount.value = 1;
    panda$core$Int64 $tmp876 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp874, $tmp876);
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp877 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
    $tmp877->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
    $tmp877->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp877, ((panda$core$Int64) { 2 }));
    panda$collections$Array* $tmp880 = (panda$collections$Array*) malloc(40);
    $tmp880->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp880->refCount.value = 1;
    panda$collections$Array$init($tmp880);
    org$pandalanguage$pandac$Type* $tmp882 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ASTNode* $tmp883 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp883->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp883->refCount.value = 1;
    panda$collections$Array* $tmp885 = (panda$collections$Array*) malloc(40);
    $tmp885->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp885->refCount.value = 1;
    panda$collections$Array$init($tmp885);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp883, ((panda$core$Int64) { 126 }), p_cl->position, ((panda$collections$ListView*) $tmp885));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp872, result823, p_cl->position, NULL, $tmp874, $tmp877, &$s879, $tmp880, $tmp882, $tmp883);
    defaultInit871 = $tmp872;
    panda$collections$Array$add$panda$collections$Array$T(result823->methods, ((panda$core$Object*) defaultInit871));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result823->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit871));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result823;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter887;
    org$pandalanguage$pandac$ClassDecl* inner899;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp888 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp888 = $tmp888->next;
        }
        $fn890 $tmp889 = $tmp888->methods[0];
        panda$collections$Iterator* $tmp891 = $tmp889(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter887 = $tmp891;
        $l892:;
        ITable* $tmp894 = inner$Iter887->$class->itable;
        while ($tmp894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp894 = $tmp894->next;
        }
        $fn896 $tmp895 = $tmp894->methods[0];
        panda$core$Bit $tmp897 = $tmp895(inner$Iter887);
        panda$core$Bit $tmp898 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp897);
        if (!$tmp898.value) goto $l893;
        {
            ITable* $tmp900 = inner$Iter887->$class->itable;
            while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp900 = $tmp900->next;
            }
            $fn902 $tmp901 = $tmp900->methods[1];
            panda$core$Object* $tmp903 = $tmp901(inner$Iter887);
            inner899 = ((org$pandalanguage$pandac$ClassDecl*) $tmp903);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner899, p_arr);
        }
        goto $l892;
        $l893:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result904;
    panda$core$String* currentPackage907;
    panda$collections$HashMap* aliases909;
    panda$collections$Iterator* c$Iter913;
    org$pandalanguage$pandac$ASTNode* c925;
    panda$core$String* fullName930;
    panda$core$String$Index$nullable idx931;
    panda$core$String* alias934;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp935;
    org$pandalanguage$pandac$ClassDecl* cl938;
    org$pandalanguage$pandac$ClassDecl* cl940;
    org$pandalanguage$pandac$ClassDecl* cl942;
    panda$collections$Array* $tmp905 = (panda$collections$Array*) malloc(40);
    $tmp905->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp905->refCount.value = 1;
    panda$collections$Array$init($tmp905);
    result904 = $tmp905;
    currentPackage907 = &$s908;
    panda$collections$HashMap* $tmp910 = (panda$collections$HashMap*) malloc(56);
    $tmp910->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp910->refCount.value = 1;
    panda$collections$HashMap$init($tmp910);
    aliases909 = $tmp910;
    panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp912.value);
    {
        ITable* $tmp914 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp914 = $tmp914->next;
        }
        $fn916 $tmp915 = $tmp914->methods[0];
        panda$collections$Iterator* $tmp917 = $tmp915(((panda$collections$Iterable*) p_file->children));
        c$Iter913 = $tmp917;
        $l918:;
        ITable* $tmp920 = c$Iter913->$class->itable;
        while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp920 = $tmp920->next;
        }
        $fn922 $tmp921 = $tmp920->methods[0];
        panda$core$Bit $tmp923 = $tmp921(c$Iter913);
        panda$core$Bit $tmp924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp923);
        if (!$tmp924.value) goto $l919;
        {
            ITable* $tmp926 = c$Iter913->$class->itable;
            while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp926 = $tmp926->next;
            }
            $fn928 $tmp927 = $tmp926->methods[1];
            panda$core$Object* $tmp929 = $tmp927(c$Iter913);
            c925 = ((org$pandalanguage$pandac$ASTNode*) $tmp929);
            switch (c925->kind.value) {
                case 100:
                {
                    currentPackage907 = ((panda$core$String*) c925->payload);
                }
                break;
                case 101:
                {
                    fullName930 = ((panda$core$String*) c925->payload);
                    panda$core$String$Index$nullable $tmp933 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName930, &$s932);
                    idx931 = $tmp933;
                    if (((panda$core$Bit) { idx931.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp936 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName930, ((panda$core$String$Index) idx931.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp935, ((panda$core$String$Index$nullable) { $tmp936, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp937 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName930, $tmp935);
                        alias934 = $tmp937;
                    }
                    }
                    else {
                    {
                        alias934 = fullName930;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases909, ((panda$collections$Key*) alias934), ((panda$core$Object*) fullName930));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp939 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases909), currentPackage907, c925);
                    cl938 = $tmp939;
                    if (((panda$core$Bit) { cl938 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl938, result904);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp941 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases909), currentPackage907, c925);
                    cl940 = $tmp941;
                    if (((panda$core$Bit) { cl940 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl940, result904);
                    }
                    }
                }
                break;
                case 155:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp943 = org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases909), currentPackage907, c925);
                    cl942 = $tmp943;
                    if (((panda$core$Bit) { cl942 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl942, result904);
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
        goto $l918;
        $l919:;
    }
    return ((panda$collections$ListView*) result904);
}

