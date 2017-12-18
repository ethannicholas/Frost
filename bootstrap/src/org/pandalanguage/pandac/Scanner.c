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
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
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
typedef panda$collections$Iterator* (*$fn413)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn419)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn425)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn566)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn572)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn578)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn606)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn612)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn618)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn637)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn643)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn649)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn655)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn661)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn714)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn720)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn726)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn762)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn774)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn780)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn786)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn841)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn883)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn889)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn895)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn909)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn915)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn921)(panda$collections$Iterator*);

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
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    org$pandalanguage$pandac$ChoiceEntry* entry405;
    panda$core$Bit found409;
    panda$collections$Iterator* m$Iter410;
    org$pandalanguage$pandac$MethodDecl* m422;
    panda$core$Range$LTpanda$core$Int64$GT $tmp435;
    panda$collections$Array* parameters461;
    panda$collections$Array* statements468;
    panda$collections$Array* children471;
    panda$core$Range$LTpanda$core$Int64$GT $tmp483;
    panda$collections$Array* fieldRefChildren502;
    org$pandalanguage$pandac$MethodDecl* synthetic524;
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
            org$pandalanguage$pandac$Pair* $tmp401 = (org$pandalanguage$pandac$Pair*) malloc(32);
            $tmp401->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
            $tmp401->refCount.value = 1;
            panda$core$Object* $tmp403 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t396->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp404 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp403));
            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp401, ((panda$core$Object*) ((panda$core$String*) t396->payload)), ((panda$core$Object*) $tmp404));
            panda$collections$Array$add$panda$collections$Array$T(fields380, ((panda$core$Object*) $tmp401));
        }
        goto $l389;
        $l390:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp406 = (org$pandalanguage$pandac$ChoiceEntry*) malloc(89);
    $tmp406->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp406->refCount.value = 1;
    panda$core$Int64 $tmp408 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$GT($tmp406, p_cl, p_entry->position, ((panda$core$String*) p_entry->payload), doccomment374, $tmp408, ((panda$collections$ListView*) fields380));
    entry405 = $tmp406;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry405));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry405));
    found409 = ((panda$core$Bit) { false });
    {
        ITable* $tmp411 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp411->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp411 = $tmp411->next;
        }
        $fn413 $tmp412 = $tmp411->methods[0];
        panda$collections$Iterator* $tmp414 = $tmp412(((panda$collections$Iterable*) p_cl->methods));
        m$Iter410 = $tmp414;
        $l415:;
        ITable* $tmp417 = m$Iter410->$class->itable;
        while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp417 = $tmp417->next;
        }
        $fn419 $tmp418 = $tmp417->methods[0];
        panda$core$Bit $tmp420 = $tmp418(m$Iter410);
        panda$core$Bit $tmp421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp420);
        if (!$tmp421.value) goto $l416;
        {
            ITable* $tmp423 = m$Iter410->$class->itable;
            while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp423 = $tmp423->next;
            }
            $fn425 $tmp424 = $tmp423->methods[1];
            panda$core$Object* $tmp426 = $tmp424(m$Iter410);
            m422 = ((org$pandalanguage$pandac$MethodDecl*) $tmp426);
            panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m422->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp427.value);
            panda$core$Int64 $tmp428 = panda$collections$Array$get_count$R$panda$core$Int64(m422->parameters);
            panda$core$Int64 $tmp429 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
            panda$core$Int64 $tmp430 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp429, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp431 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp428, $tmp430);
            if ($tmp431.value) {
            {
                goto $l415;
            }
            }
            panda$core$Object* $tmp432 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m422->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp433 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp434 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp432)->type, $tmp433);
            PANDA_ASSERT($tmp434.value);
            panda$core$Int64 $tmp436 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp435, ((panda$core$Int64) { 0 }), $tmp436, ((panda$core$Bit) { false }));
            int64_t $tmp438 = $tmp435.min.value;
            panda$core$Int64 i437 = { $tmp438 };
            int64_t $tmp440 = $tmp435.max.value;
            bool $tmp441 = $tmp435.inclusive.value;
            if ($tmp441) goto $l448; else goto $l449;
            $l448:;
            if ($tmp438 <= $tmp440) goto $l442; else goto $l444;
            $l449:;
            if ($tmp438 < $tmp440) goto $l442; else goto $l444;
            $l442:;
            {
                panda$core$Object* $tmp450 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i437);
                panda$core$Int64 $tmp451 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i437, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m422->parameters, $tmp451);
                panda$core$Bit $tmp453 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp450)->second), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp452)->type);
                if ($tmp453.value) {
                {
                    goto $l415;
                }
                }
            }
            $l445:;
            int64_t $tmp455 = $tmp440 - i437.value;
            if ($tmp441) goto $l456; else goto $l457;
            $l456:;
            if ($tmp455 >= 1) goto $l454; else goto $l444;
            $l457:;
            if ($tmp455 > 1) goto $l454; else goto $l444;
            $l454:;
            i437.value += 1;
            goto $l442;
            $l444:;
            found409 = ((panda$core$Bit) { true });
            goto $l416;
        }
        goto $l415;
        $l416:;
    }
    panda$core$Bit $tmp460 = panda$core$Bit$$NOT$R$panda$core$Bit(found409);
    if ($tmp460.value) {
    {
        panda$collections$Array* $tmp462 = (panda$collections$Array*) malloc(40);
        $tmp462->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp462->refCount.value = 1;
        panda$collections$Array$init($tmp462);
        parameters461 = $tmp462;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp464 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
        $tmp464->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp464->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp467 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp464, &$s466, $tmp467);
        panda$collections$Array$add$panda$collections$Array$T(parameters461, ((panda$core$Object*) $tmp464));
        panda$collections$Array* $tmp469 = (panda$collections$Array*) malloc(40);
        $tmp469->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp469->refCount.value = 1;
        panda$collections$Array$init($tmp469);
        statements468 = $tmp469;
        panda$collections$Array* $tmp472 = (panda$collections$Array*) malloc(40);
        $tmp472->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp472->refCount.value = 1;
        panda$collections$Array$init($tmp472);
        children471 = $tmp472;
        org$pandalanguage$pandac$ASTNode* $tmp474 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp474->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp474->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp474, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s476);
        panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) $tmp474));
        org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp477->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp477, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s479);
        panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) $tmp477));
        org$pandalanguage$pandac$ASTNode* $tmp480 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp480->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp480->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp482;
        $tmp482 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp482->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp482->refCount = 1;
        $tmp482->value = ((panda$core$Int64) { 73 });
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp480, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp482), ((panda$collections$ListView*) children471));
        panda$collections$Array$add$panda$collections$Array$T(statements468, ((panda$core$Object*) $tmp480));
        panda$core$Int64 $tmp484 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp483, ((panda$core$Int64) { 0 }), $tmp484, ((panda$core$Bit) { false }));
        int64_t $tmp486 = $tmp483.min.value;
        panda$core$Int64 i485 = { $tmp486 };
        int64_t $tmp488 = $tmp483.max.value;
        bool $tmp489 = $tmp483.inclusive.value;
        if ($tmp489) goto $l496; else goto $l497;
        $l496:;
        if ($tmp486 <= $tmp488) goto $l490; else goto $l492;
        $l497:;
        if ($tmp486 < $tmp488) goto $l490; else goto $l492;
        $l490:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp498 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp498->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp498->refCount.value = 1;
            panda$core$Object* $tmp500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i485);
            panda$core$Object* $tmp501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i485);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp498, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp500)->first), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp501)->second));
            panda$collections$Array$add$panda$collections$Array$T(parameters461, ((panda$core$Object*) $tmp498));
            panda$collections$Array$clear(children471);
            panda$collections$Array* $tmp503 = (panda$collections$Array*) malloc(40);
            $tmp503->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp503->refCount.value = 1;
            panda$collections$Array$init($tmp503);
            fieldRefChildren502 = $tmp503;
            org$pandalanguage$pandac$ASTNode* $tmp505 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp505->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp505->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp505, ((panda$core$Int64) { 114 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren502, ((panda$core$Object*) $tmp505));
            org$pandalanguage$pandac$ASTNode* $tmp507 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp507->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp507->refCount.value = 1;
            org$pandalanguage$pandac$Pair* $tmp509 = (org$pandalanguage$pandac$Pair*) malloc(32);
            $tmp509->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
            $tmp509->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp511;
            $tmp511 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp511->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp511->refCount = 1;
            $tmp511->value = i485;
            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp509, ((panda$core$Object*) entry405), ((panda$core$Object*) $tmp511));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp507, ((panda$core$Int64) { 158 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp509), ((panda$collections$ListView*) fieldRefChildren502));
            panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) $tmp507));
            org$pandalanguage$pandac$ASTNode* $tmp512 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp512->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp512->refCount.value = 1;
            panda$core$Object* $tmp514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i485);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp512, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp514)->first));
            panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) $tmp512));
            org$pandalanguage$pandac$ASTNode* $tmp515 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp515->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp515->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp517;
            $tmp517 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp517->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp517->refCount = 1;
            $tmp517->value = ((panda$core$Int64) { 73 });
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp515, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp517), ((panda$collections$ListView*) children471));
            panda$collections$Array$add$panda$collections$Array$T(statements468, ((panda$core$Object*) $tmp515));
        }
        $l493:;
        int64_t $tmp519 = $tmp488 - i485.value;
        if ($tmp489) goto $l520; else goto $l521;
        $l520:;
        if ($tmp519 >= 1) goto $l518; else goto $l492;
        $l521:;
        if ($tmp519 > 1) goto $l518; else goto $l492;
        $l518:;
        i485.value += 1;
        goto $l490;
        $l492:;
        org$pandalanguage$pandac$MethodDecl* $tmp525 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp525->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp525->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp527 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp527->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp527->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp527);
        org$pandalanguage$pandac$MethodDecl$Kind* $tmp529 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
        $tmp529->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
        $tmp529->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp529, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp533 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp533->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp533->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp533, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$ListView*) statements468));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp525, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp527, $tmp529, &$s531, parameters461, $tmp532, $tmp533);
        synthetic524 = $tmp525;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic524));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic524));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName535;
    panda$core$String* doccomment546;
    org$pandalanguage$pandac$Annotations* annotations554;
    panda$collections$Array* parameters557;
    panda$collections$Iterator* p$Iter562;
    org$pandalanguage$pandac$ASTNode* p575;
    org$pandalanguage$pandac$Type* bound581;
    panda$collections$Array* supertypes596;
    panda$collections$Iterator* intf$Iter602;
    org$pandalanguage$pandac$ASTNode* intf615;
    org$pandalanguage$pandac$ClassDecl* result621;
    panda$collections$Iterator* c$Iter627;
    org$pandalanguage$pandac$ASTNode* c640;
    panda$core$Bit foundInit645;
    panda$collections$Iterator* m$Iter646;
    org$pandalanguage$pandac$MethodDecl* m658;
    org$pandalanguage$pandac$MethodDecl* defaultInit670;
    panda$core$Bit $tmp537 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s536);
    if ($tmp537.value) {
    {
        panda$core$String* $tmp538 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
        panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp540, p_cl->payload);
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
        fullName535 = $tmp543;
    }
    }
    else {
    {
        fullName535 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp544 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp544, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp545.value);
    panda$core$Object* $tmp547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp548 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp547)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp548.value) {
    {
        panda$core$Object* $tmp549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp549)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp550.value);
        panda$core$Object* $tmp551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment546 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp551)->payload);
    }
    }
    else {
    {
        doccomment546 = NULL;
    }
    }
    panda$core$Object* $tmp552 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp552)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp553.value);
    panda$core$Object* $tmp555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp556 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp555));
    annotations554 = $tmp556;
    panda$collections$Array* $tmp558 = (panda$collections$Array*) malloc(40);
    $tmp558->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp558->refCount.value = 1;
    panda$collections$Array$init($tmp558);
    parameters557 = $tmp558;
    panda$core$Object* $tmp560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp560)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp561.value) {
    {
        {
            panda$core$Object* $tmp563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp564 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp563)->children)->$class->itable;
            while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp564 = $tmp564->next;
            }
            $fn566 $tmp565 = $tmp564->methods[0];
            panda$collections$Iterator* $tmp567 = $tmp565(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp563)->children));
            p$Iter562 = $tmp567;
            $l568:;
            ITable* $tmp570 = p$Iter562->$class->itable;
            while ($tmp570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp570 = $tmp570->next;
            }
            $fn572 $tmp571 = $tmp570->methods[0];
            panda$core$Bit $tmp573 = $tmp571(p$Iter562);
            panda$core$Bit $tmp574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp573);
            if (!$tmp574.value) goto $l569;
            {
                ITable* $tmp576 = p$Iter562->$class->itable;
                while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp576 = $tmp576->next;
                }
                $fn578 $tmp577 = $tmp576->methods[1];
                panda$core$Object* $tmp579 = $tmp577(p$Iter562);
                p575 = ((org$pandalanguage$pandac$ASTNode*) $tmp579);
                panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p575->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp580.value);
                bool $tmp582 = ((panda$core$Bit) { p575->children != NULL }).value;
                if (!$tmp582) goto $l583;
                panda$core$Int64 $tmp584 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p575->children);
                panda$core$Bit $tmp585 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp584, ((panda$core$Int64) { 0 }));
                $tmp582 = $tmp585.value;
                $l583:;
                panda$core$Bit $tmp586 = { $tmp582 };
                if ($tmp586.value) {
                {
                    panda$core$Int64 $tmp587 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p575->children);
                    panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp587, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp588.value);
                    panda$core$Object* $tmp589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p575->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp590 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp589));
                    bound581 = $tmp590;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound581 = $tmp591;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp592 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp592->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp592->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp592, p575->position, fullName535, ((panda$core$String*) p575->payload), bound581);
                panda$collections$Array$add$panda$collections$Array$T(parameters557, ((panda$core$Object*) $tmp592));
            }
            goto $l568;
            $l569:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp594)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp595.value);
    }
    }
    panda$collections$Array* $tmp597 = (panda$collections$Array*) malloc(40);
    $tmp597->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp597->refCount.value = 1;
    panda$collections$Array$init($tmp597);
    supertypes596 = $tmp597;
    panda$core$Object* $tmp599 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp599)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp600.value);
    panda$core$Object* $tmp601 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp601)->children != NULL }).value) {
    {
        {
            panda$core$Object* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
            ITable* $tmp604 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp603)->children)->$class->itable;
            while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp604 = $tmp604->next;
            }
            $fn606 $tmp605 = $tmp604->methods[0];
            panda$collections$Iterator* $tmp607 = $tmp605(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp603)->children));
            intf$Iter602 = $tmp607;
            $l608:;
            ITable* $tmp610 = intf$Iter602->$class->itable;
            while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp610 = $tmp610->next;
            }
            $fn612 $tmp611 = $tmp610->methods[0];
            panda$core$Bit $tmp613 = $tmp611(intf$Iter602);
            panda$core$Bit $tmp614 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp613);
            if (!$tmp614.value) goto $l609;
            {
                ITable* $tmp616 = intf$Iter602->$class->itable;
                while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp616 = $tmp616->next;
                }
                $fn618 $tmp617 = $tmp616->methods[1];
                panda$core$Object* $tmp619 = $tmp617(intf$Iter602);
                intf615 = ((org$pandalanguage$pandac$ASTNode*) $tmp619);
                org$pandalanguage$pandac$Type* $tmp620 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf615);
                panda$collections$Array$add$panda$collections$Array$T(supertypes596, ((panda$core$Object*) $tmp620));
            }
            goto $l608;
            $l609:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp622 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp622->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp622->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp624 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp624->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp624->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp624, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp622, p_source, p_cl->position, p_aliases, doccomment546, annotations554, $tmp624, fullName535, ((panda$collections$ListView*) supertypes596), parameters557, self->compiler->root);
    result621 = $tmp622;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result621));
    panda$core$Object* $tmp626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp626) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp628 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
            ITable* $tmp629 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp628)->children)->$class->itable;
            while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp629 = $tmp629->next;
            }
            $fn631 $tmp630 = $tmp629->methods[0];
            panda$collections$Iterator* $tmp632 = $tmp630(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp628)->children));
            c$Iter627 = $tmp632;
            $l633:;
            ITable* $tmp635 = c$Iter627->$class->itable;
            while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp635 = $tmp635->next;
            }
            $fn637 $tmp636 = $tmp635->methods[0];
            panda$core$Bit $tmp638 = $tmp636(c$Iter627);
            panda$core$Bit $tmp639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp638);
            if (!$tmp639.value) goto $l634;
            {
                ITable* $tmp641 = c$Iter627->$class->itable;
                while ($tmp641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp641 = $tmp641->next;
                }
                $fn643 $tmp642 = $tmp641->methods[1];
                panda$core$Object* $tmp644 = $tmp642(c$Iter627);
                c640 = ((org$pandalanguage$pandac$ASTNode*) $tmp644);
                org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result621, c640);
            }
            goto $l633;
            $l634:;
        }
    }
    }
    foundInit645 = ((panda$core$Bit) { false });
    {
        ITable* $tmp647 = ((panda$collections$Iterable*) result621->methods)->$class->itable;
        while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp647 = $tmp647->next;
        }
        $fn649 $tmp648 = $tmp647->methods[0];
        panda$collections$Iterator* $tmp650 = $tmp648(((panda$collections$Iterable*) result621->methods));
        m$Iter646 = $tmp650;
        $l651:;
        ITable* $tmp653 = m$Iter646->$class->itable;
        while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp653 = $tmp653->next;
        }
        $fn655 $tmp654 = $tmp653->methods[0];
        panda$core$Bit $tmp656 = $tmp654(m$Iter646);
        panda$core$Bit $tmp657 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp656);
        if (!$tmp657.value) goto $l652;
        {
            ITable* $tmp659 = m$Iter646->$class->itable;
            while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp659 = $tmp659->next;
            }
            $fn661 $tmp660 = $tmp659->methods[1];
            panda$core$Object* $tmp662 = $tmp660(m$Iter646);
            m658 = ((org$pandalanguage$pandac$MethodDecl*) $tmp662);
            panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m658->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp663.value) {
            {
                foundInit645 = ((panda$core$Bit) { true });
                goto $l652;
            }
            }
        }
        goto $l651;
        $l652:;
    }
    panda$core$Bit $tmp665 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit645);
    bool $tmp664 = $tmp665.value;
    if (!$tmp664) goto $l666;
    panda$core$Bit $tmp668 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result621)->name, &$s667);
    $tmp664 = $tmp668.value;
    $l666:;
    panda$core$Bit $tmp669 = { $tmp664 };
    if ($tmp669.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp671 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp671->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp671->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp673 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp673->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp673->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp673);
        org$pandalanguage$pandac$MethodDecl$Kind* $tmp675 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
        $tmp675->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
        $tmp675->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp675, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp678 = (panda$collections$Array*) malloc(40);
        $tmp678->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp678->refCount.value = 1;
        panda$collections$Array$init($tmp678);
        org$pandalanguage$pandac$Type* $tmp680 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp681 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp681->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp681->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp681, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp671, result621, p_cl->position, NULL, $tmp673, $tmp675, &$s677, $tmp678, $tmp680, $tmp681);
        defaultInit670 = $tmp671;
        panda$collections$Array$add$panda$collections$Array$T(result621->methods, ((panda$core$Object*) defaultInit670));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result621->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit670));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result621;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName683;
    panda$core$String* doccomment694;
    org$pandalanguage$pandac$Annotations* annotations702;
    panda$collections$Array* parameters705;
    panda$collections$Iterator* p$Iter710;
    org$pandalanguage$pandac$ASTNode* p723;
    org$pandalanguage$pandac$Type* bound729;
    panda$collections$Array* supertypes741;
    panda$collections$Iterator* s$Iter746;
    org$pandalanguage$pandac$ASTNode* s759;
    org$pandalanguage$pandac$ClassDecl* result765;
    panda$collections$Iterator* c$Iter770;
    org$pandalanguage$pandac$ASTNode* c783;
    panda$core$Bit $tmp685 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s684);
    if ($tmp685.value) {
    {
        panda$core$String* $tmp686 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
        panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp688, p_intf->payload);
        panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s690);
        fullName683 = $tmp691;
    }
    }
    else {
    {
        fullName683 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp692 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp692, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp693.value);
    panda$core$Object* $tmp695 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp696 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp695)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp696.value) {
    {
        panda$core$Object* $tmp697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp697)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp698.value);
        panda$core$Object* $tmp699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment694 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp699)->payload);
    }
    }
    else {
    {
        doccomment694 = NULL;
    }
    }
    panda$core$Object* $tmp700 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp700)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp701.value);
    panda$core$Object* $tmp703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp704 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp703));
    annotations702 = $tmp704;
    panda$collections$Array* $tmp706 = (panda$collections$Array*) malloc(40);
    $tmp706->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp706->refCount.value = 1;
    panda$collections$Array$init($tmp706);
    parameters705 = $tmp706;
    panda$core$Object* $tmp708 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp708)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp709.value) {
    {
        {
            panda$core$Object* $tmp711 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp712 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp711)->children)->$class->itable;
            while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp712 = $tmp712->next;
            }
            $fn714 $tmp713 = $tmp712->methods[0];
            panda$collections$Iterator* $tmp715 = $tmp713(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp711)->children));
            p$Iter710 = $tmp715;
            $l716:;
            ITable* $tmp718 = p$Iter710->$class->itable;
            while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp718 = $tmp718->next;
            }
            $fn720 $tmp719 = $tmp718->methods[0];
            panda$core$Bit $tmp721 = $tmp719(p$Iter710);
            panda$core$Bit $tmp722 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp721);
            if (!$tmp722.value) goto $l717;
            {
                ITable* $tmp724 = p$Iter710->$class->itable;
                while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp724 = $tmp724->next;
                }
                $fn726 $tmp725 = $tmp724->methods[1];
                panda$core$Object* $tmp727 = $tmp725(p$Iter710);
                p723 = ((org$pandalanguage$pandac$ASTNode*) $tmp727);
                panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p723->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp728.value);
                panda$core$Int64 $tmp730 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p723->children);
                panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp730, ((panda$core$Int64) { 1 }));
                if ($tmp731.value) {
                {
                    panda$core$Object* $tmp732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p723->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp733 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp732));
                    bound729 = $tmp733;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp734 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p723->children);
                    panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp735.value);
                    org$pandalanguage$pandac$Type* $tmp736 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound729 = $tmp736;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp737 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp737->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp737->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp737, p723->position, fullName683, ((panda$core$String*) p723->payload), bound729);
                panda$collections$Array$add$panda$collections$Array$T(parameters705, ((panda$core$Object*) $tmp737));
            }
            goto $l716;
            $l717:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp739 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp739)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp740.value);
    }
    }
    panda$collections$Array* $tmp742 = (panda$collections$Array*) malloc(40);
    $tmp742->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp742->refCount.value = 1;
    panda$collections$Array$init($tmp742);
    supertypes741 = $tmp742;
    panda$core$Object* $tmp744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp744)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp745.value);
    {
        panda$core$Object* $tmp747 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp748 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp747)->children)->$class->itable;
        while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp748 = $tmp748->next;
        }
        $fn750 $tmp749 = $tmp748->methods[0];
        panda$collections$Iterator* $tmp751 = $tmp749(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp747)->children));
        s$Iter746 = $tmp751;
        $l752:;
        ITable* $tmp754 = s$Iter746->$class->itable;
        while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp754 = $tmp754->next;
        }
        $fn756 $tmp755 = $tmp754->methods[0];
        panda$core$Bit $tmp757 = $tmp755(s$Iter746);
        panda$core$Bit $tmp758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp757);
        if (!$tmp758.value) goto $l753;
        {
            ITable* $tmp760 = s$Iter746->$class->itable;
            while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp760 = $tmp760->next;
            }
            $fn762 $tmp761 = $tmp760->methods[1];
            panda$core$Object* $tmp763 = $tmp761(s$Iter746);
            s759 = ((org$pandalanguage$pandac$ASTNode*) $tmp763);
            org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s759);
            panda$collections$Array$add$panda$collections$Array$T(supertypes741, ((panda$core$Object*) $tmp764));
        }
        goto $l752;
        $l753:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp766 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp766->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp766->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp768 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp768->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp768->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp768, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp766, p_source, p_intf->position, p_aliases, doccomment694, annotations702, $tmp768, fullName683, ((panda$collections$ListView*) supertypes741), parameters705, self->compiler->root);
    result765 = $tmp766;
    {
        panda$core$Object* $tmp771 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp772 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp771)->children)->$class->itable;
        while ($tmp772->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp772 = $tmp772->next;
        }
        $fn774 $tmp773 = $tmp772->methods[0];
        panda$collections$Iterator* $tmp775 = $tmp773(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp771)->children));
        c$Iter770 = $tmp775;
        $l776:;
        ITable* $tmp778 = c$Iter770->$class->itable;
        while ($tmp778->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp778 = $tmp778->next;
        }
        $fn780 $tmp779 = $tmp778->methods[0];
        panda$core$Bit $tmp781 = $tmp779(c$Iter770);
        panda$core$Bit $tmp782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp781);
        if (!$tmp782.value) goto $l777;
        {
            ITable* $tmp784 = c$Iter770->$class->itable;
            while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp784 = $tmp784->next;
            }
            $fn786 $tmp785 = $tmp784->methods[1];
            panda$core$Object* $tmp787 = $tmp785(c$Iter770);
            c783 = ((org$pandalanguage$pandac$ASTNode*) $tmp787);
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result765, c783);
        }
        goto $l776;
        $l777:;
    }
    return result765;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName788;
    panda$core$String* doccomment799;
    org$pandalanguage$pandac$Annotations* annotations807;
    panda$collections$Array* parameters810;
    panda$collections$Array* supertypes813;
    org$pandalanguage$pandac$ClassDecl* result816;
    org$pandalanguage$pandac$FieldDecl* rawValue821;
    org$pandalanguage$pandac$FieldDecl* data828;
    panda$core$Bit haveFields835;
    panda$collections$Iterator* c$Iter837;
    org$pandalanguage$pandac$ASTNode* c850;
    org$pandalanguage$pandac$MethodDecl* defaultInit864;
    panda$core$Bit $tmp790 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s789);
    if ($tmp790.value) {
    {
        panda$core$String* $tmp791 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, &$s792);
        panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp793, p_cl->payload);
        panda$core$String* $tmp796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp794, &$s795);
        fullName788 = $tmp796;
    }
    }
    else {
    {
        fullName788 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp797 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp797, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp798.value);
    panda$core$Object* $tmp800 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp801 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp800)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp801.value) {
    {
        panda$core$Object* $tmp802 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp802)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp803.value);
        panda$core$Object* $tmp804 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment799 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp804)->payload);
    }
    }
    else {
    {
        doccomment799 = NULL;
    }
    }
    panda$core$Object* $tmp805 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp805)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp806.value);
    panda$core$Object* $tmp808 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp809 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp808));
    annotations807 = $tmp809;
    panda$collections$Array* $tmp811 = (panda$collections$Array*) malloc(40);
    $tmp811->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp811->refCount.value = 1;
    panda$collections$Array$init($tmp811);
    parameters810 = $tmp811;
    panda$collections$Array* $tmp814 = (panda$collections$Array*) malloc(40);
    $tmp814->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp814->refCount.value = 1;
    panda$collections$Array$init($tmp814);
    supertypes813 = $tmp814;
    org$pandalanguage$pandac$ClassDecl* $tmp817 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp817->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp817->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp819 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp819->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp819, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp817, p_source, p_cl->position, p_aliases, doccomment799, annotations807, $tmp819, fullName788, ((panda$collections$ListView*) supertypes813), parameters810, self->compiler->root);
    result816 = $tmp817;
    org$pandalanguage$pandac$FieldDecl* $tmp822 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp822->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp822->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp824 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp824->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp824->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp824);
    org$pandalanguage$pandac$Type* $tmp827 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp822, result816, ((org$pandalanguage$pandac$Symbol*) result816)->position, NULL, $tmp824, ((panda$core$Int64) { 10001 }), &$s826, $tmp827, NULL);
    rawValue821 = $tmp822;
    panda$collections$Array$add$panda$collections$Array$T(result816->fields, ((panda$core$Object*) rawValue821));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result816->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue821));
    org$pandalanguage$pandac$FieldDecl* $tmp829 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp829->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp829->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp831 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp831->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp831);
    org$pandalanguage$pandac$Type* $tmp834 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp829, result816, ((org$pandalanguage$pandac$Symbol*) result816)->position, NULL, $tmp831, ((panda$core$Int64) { 10001 }), &$s833, $tmp834, NULL);
    data828 = $tmp829;
    panda$collections$Array$add$panda$collections$Array$T(result816->fields, ((panda$core$Object*) data828));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result816->symbolTable, ((org$pandalanguage$pandac$Symbol*) data828));
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result816));
    haveFields835 = ((panda$core$Bit) { false });
    panda$core$Object* $tmp836 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp836) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp838 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp839 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp838)->children)->$class->itable;
            while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp839 = $tmp839->next;
            }
            $fn841 $tmp840 = $tmp839->methods[0];
            panda$collections$Iterator* $tmp842 = $tmp840(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp838)->children));
            c$Iter837 = $tmp842;
            $l843:;
            ITable* $tmp845 = c$Iter837->$class->itable;
            while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp845 = $tmp845->next;
            }
            $fn847 $tmp846 = $tmp845->methods[0];
            panda$core$Bit $tmp848 = $tmp846(c$Iter837);
            panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
            if (!$tmp849.value) goto $l844;
            {
                ITable* $tmp851 = c$Iter837->$class->itable;
                while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp851 = $tmp851->next;
                }
                $fn853 $tmp852 = $tmp851->methods[1];
                panda$core$Object* $tmp854 = $tmp852(c$Iter837);
                c850 = ((org$pandalanguage$pandac$ASTNode*) $tmp854);
                panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c850->kind, ((panda$core$Int64) { 156 }));
                if ($tmp855.value) {
                {
                    bool $tmp856 = haveFields835.value;
                    if ($tmp856) goto $l857;
                    panda$core$Object* $tmp858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(c850->children, ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp859 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp858)->children);
                    panda$core$Bit $tmp860 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp859, ((panda$core$Int64) { 0 }));
                    $tmp856 = $tmp860.value;
                    $l857:;
                    panda$core$Bit $tmp861 = { $tmp856 };
                    haveFields835 = $tmp861;
                    org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result816, c850);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result816, c850);
                }
                }
            }
            goto $l843;
            $l844:;
        }
    }
    }
    if (haveFields835.value) {
    {
        org$pandalanguage$pandac$Type* $tmp862 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(supertypes813, ((panda$core$Object*) $tmp862));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp863 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(supertypes813, ((panda$core$Object*) $tmp863));
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp865 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp865->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp865->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp867 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp867->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp867->refCount.value = 1;
    panda$core$Int64 $tmp869 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp867, $tmp869);
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp870 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
    $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
    $tmp870->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp870, ((panda$core$Int64) { 2 }));
    panda$collections$Array* $tmp873 = (panda$collections$Array*) malloc(40);
    $tmp873->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp873->refCount.value = 1;
    panda$collections$Array$init($tmp873);
    org$pandalanguage$pandac$Type* $tmp875 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ASTNode* $tmp876 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp876->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp876->refCount.value = 1;
    panda$collections$Array* $tmp878 = (panda$collections$Array*) malloc(40);
    $tmp878->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp878->refCount.value = 1;
    panda$collections$Array$init($tmp878);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp876, ((panda$core$Int64) { 126 }), p_cl->position, ((panda$collections$ListView*) $tmp878));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp865, result816, p_cl->position, NULL, $tmp867, $tmp870, &$s872, $tmp873, $tmp875, $tmp876);
    defaultInit864 = $tmp865;
    panda$collections$Array$add$panda$collections$Array$T(result816->methods, ((panda$core$Object*) defaultInit864));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result816->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit864));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result816;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter880;
    org$pandalanguage$pandac$ClassDecl* inner892;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp881 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp881 = $tmp881->next;
        }
        $fn883 $tmp882 = $tmp881->methods[0];
        panda$collections$Iterator* $tmp884 = $tmp882(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter880 = $tmp884;
        $l885:;
        ITable* $tmp887 = inner$Iter880->$class->itable;
        while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp887 = $tmp887->next;
        }
        $fn889 $tmp888 = $tmp887->methods[0];
        panda$core$Bit $tmp890 = $tmp888(inner$Iter880);
        panda$core$Bit $tmp891 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp890);
        if (!$tmp891.value) goto $l886;
        {
            ITable* $tmp893 = inner$Iter880->$class->itable;
            while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp893 = $tmp893->next;
            }
            $fn895 $tmp894 = $tmp893->methods[1];
            panda$core$Object* $tmp896 = $tmp894(inner$Iter880);
            inner892 = ((org$pandalanguage$pandac$ClassDecl*) $tmp896);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner892, p_arr);
        }
        goto $l885;
        $l886:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result897;
    panda$core$String* currentPackage900;
    panda$collections$HashMap* aliases902;
    panda$collections$Iterator* c$Iter906;
    org$pandalanguage$pandac$ASTNode* c918;
    panda$core$String* fullName923;
    panda$core$String$Index$nullable idx924;
    panda$core$String* alias927;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp928;
    org$pandalanguage$pandac$ClassDecl* cl931;
    org$pandalanguage$pandac$ClassDecl* cl933;
    org$pandalanguage$pandac$ClassDecl* cl935;
    panda$collections$Array* $tmp898 = (panda$collections$Array*) malloc(40);
    $tmp898->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp898->refCount.value = 1;
    panda$collections$Array$init($tmp898);
    result897 = $tmp898;
    currentPackage900 = &$s901;
    panda$collections$HashMap* $tmp903 = (panda$collections$HashMap*) malloc(56);
    $tmp903->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp903->refCount.value = 1;
    panda$collections$HashMap$init($tmp903);
    aliases902 = $tmp903;
    panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp905.value);
    {
        ITable* $tmp907 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp907->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp907 = $tmp907->next;
        }
        $fn909 $tmp908 = $tmp907->methods[0];
        panda$collections$Iterator* $tmp910 = $tmp908(((panda$collections$Iterable*) p_file->children));
        c$Iter906 = $tmp910;
        $l911:;
        ITable* $tmp913 = c$Iter906->$class->itable;
        while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp913 = $tmp913->next;
        }
        $fn915 $tmp914 = $tmp913->methods[0];
        panda$core$Bit $tmp916 = $tmp914(c$Iter906);
        panda$core$Bit $tmp917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp916);
        if (!$tmp917.value) goto $l912;
        {
            ITable* $tmp919 = c$Iter906->$class->itable;
            while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp919 = $tmp919->next;
            }
            $fn921 $tmp920 = $tmp919->methods[1];
            panda$core$Object* $tmp922 = $tmp920(c$Iter906);
            c918 = ((org$pandalanguage$pandac$ASTNode*) $tmp922);
            switch (c918->kind.value) {
                case 100:
                {
                    currentPackage900 = ((panda$core$String*) c918->payload);
                }
                break;
                case 101:
                {
                    fullName923 = ((panda$core$String*) c918->payload);
                    panda$core$String$Index$nullable $tmp926 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName923, &$s925);
                    idx924 = $tmp926;
                    if (((panda$core$Bit) { idx924.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp929 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName923, ((panda$core$String$Index) idx924.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp928, ((panda$core$String$Index$nullable) { $tmp929, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp930 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName923, $tmp928);
                        alias927 = $tmp930;
                    }
                    }
                    else {
                    {
                        alias927 = fullName923;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases902, ((panda$collections$Key*) alias927), ((panda$core$Object*) fullName923));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp932 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases902), currentPackage900, c918);
                    cl931 = $tmp932;
                    if (((panda$core$Bit) { cl931 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl931, result897);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp934 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases902), currentPackage900, c918);
                    cl933 = $tmp934;
                    if (((panda$core$Bit) { cl933 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl933, result897);
                    }
                    }
                }
                break;
                case 155:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp936 = org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases902), currentPackage900, c918);
                    cl935 = $tmp936;
                    if (((panda$core$Bit) { cl935 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl935, result897);
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
        goto $l911;
        $l912:;
    }
    return ((panda$collections$ListView*) result897);
}

