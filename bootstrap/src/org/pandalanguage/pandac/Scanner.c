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
typedef panda$collections$Iterator* (*$fn563)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn575)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn615)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn628)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn640)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn646)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn658)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn711)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn717)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn723)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn747)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn753)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn759)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn838)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn844)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn850)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn880)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn892)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn906)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn918)(panda$collections$Iterator*);

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
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp482;
    panda$collections$Array* fieldRefChildren501;
    org$pandalanguage$pandac$MethodDecl* synthetic521;
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
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp480, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children471));
        panda$collections$Array$add$panda$collections$Array$T(statements468, ((panda$core$Object*) $tmp480));
        panda$core$Int64 $tmp483 = panda$collections$Array$get_count$R$panda$core$Int64(fields380);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp482, ((panda$core$Int64) { 0 }), $tmp483, ((panda$core$Bit) { false }));
        int64_t $tmp485 = $tmp482.min.value;
        panda$core$Int64 i484 = { $tmp485 };
        int64_t $tmp487 = $tmp482.max.value;
        bool $tmp488 = $tmp482.inclusive.value;
        if ($tmp488) goto $l495; else goto $l496;
        $l495:;
        if ($tmp485 <= $tmp487) goto $l489; else goto $l491;
        $l496:;
        if ($tmp485 < $tmp487) goto $l489; else goto $l491;
        $l489:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp497 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp497->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp497->refCount.value = 1;
            panda$core$Object* $tmp499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i484);
            panda$core$Object* $tmp500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i484);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp497, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp499)->first), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp500)->second));
            panda$collections$Array$add$panda$collections$Array$T(parameters461, ((panda$core$Object*) $tmp497));
            panda$collections$Array$clear(children471);
            panda$collections$Array* $tmp502 = (panda$collections$Array*) malloc(40);
            $tmp502->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp502->refCount.value = 1;
            panda$collections$Array$init($tmp502);
            fieldRefChildren501 = $tmp502;
            org$pandalanguage$pandac$ASTNode* $tmp504 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp504->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp504->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp504, ((panda$core$Int64) { 114 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren501, ((panda$core$Object*) $tmp504));
            org$pandalanguage$pandac$ASTNode* $tmp506 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp506->refCount.value = 1;
            org$pandalanguage$pandac$Pair* $tmp508 = (org$pandalanguage$pandac$Pair*) malloc(32);
            $tmp508->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
            $tmp508->refCount.value = 1;
            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp508, ((panda$core$Object*) entry405), ((panda$core$Object*) wrap_panda$core$Int64(i484)));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp506, ((panda$core$Int64) { 158 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) $tmp508), ((panda$collections$ListView*) fieldRefChildren501));
            panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) $tmp506));
            org$pandalanguage$pandac$ASTNode* $tmp510 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp510->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp510->refCount.value = 1;
            panda$core$Object* $tmp512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields380, i484);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp510, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp512)->first));
            panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) $tmp510));
            org$pandalanguage$pandac$ASTNode* $tmp513 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp513->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp513->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp513, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children471));
            panda$collections$Array$add$panda$collections$Array$T(statements468, ((panda$core$Object*) $tmp513));
        }
        $l492:;
        int64_t $tmp516 = $tmp487 - i484.value;
        if ($tmp488) goto $l517; else goto $l518;
        $l517:;
        if ($tmp516 >= 1) goto $l515; else goto $l491;
        $l518:;
        if ($tmp516 > 1) goto $l515; else goto $l491;
        $l515:;
        i484.value += 1;
        goto $l489;
        $l491:;
        org$pandalanguage$pandac$MethodDecl* $tmp522 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp522->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp522->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp524 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp524->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp524->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp524);
        org$pandalanguage$pandac$MethodDecl$Kind* $tmp526 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
        $tmp526->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
        $tmp526->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp526, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp529 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp530 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp530->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp530->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp530, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$ListView*) statements468));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp522, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp524, $tmp526, &$s528, parameters461, $tmp529, $tmp530);
        synthetic521 = $tmp522;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic521));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic521));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName532;
    panda$core$String* doccomment543;
    org$pandalanguage$pandac$Annotations* annotations551;
    panda$collections$Array* parameters554;
    panda$collections$Iterator* p$Iter559;
    org$pandalanguage$pandac$ASTNode* p572;
    org$pandalanguage$pandac$Type* bound578;
    panda$collections$Array* supertypes593;
    panda$collections$Iterator* intf$Iter599;
    org$pandalanguage$pandac$ASTNode* intf612;
    org$pandalanguage$pandac$ClassDecl* result618;
    panda$collections$Iterator* c$Iter624;
    org$pandalanguage$pandac$ASTNode* c637;
    panda$core$Bit foundInit642;
    panda$collections$Iterator* m$Iter643;
    org$pandalanguage$pandac$MethodDecl* m655;
    org$pandalanguage$pandac$MethodDecl* defaultInit667;
    panda$core$Bit $tmp534 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s533);
    if ($tmp534.value) {
    {
        panda$core$String* $tmp535 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s536);
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp537, p_cl->payload);
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
        fullName532 = $tmp540;
    }
    }
    else {
    {
        fullName532 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp541 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp541, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp542.value);
    panda$core$Object* $tmp544 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp545 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp544)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp545.value) {
    {
        panda$core$Object* $tmp546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp546)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp547.value);
        panda$core$Object* $tmp548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment543 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp548)->payload);
    }
    }
    else {
    {
        doccomment543 = NULL;
    }
    }
    panda$core$Object* $tmp549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp549)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp550.value);
    panda$core$Object* $tmp552 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp553 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp552));
    annotations551 = $tmp553;
    panda$collections$Array* $tmp555 = (panda$collections$Array*) malloc(40);
    $tmp555->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp555->refCount.value = 1;
    panda$collections$Array$init($tmp555);
    parameters554 = $tmp555;
    panda$core$Object* $tmp557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp557)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp558.value) {
    {
        {
            panda$core$Object* $tmp560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp561 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp560)->children)->$class->itable;
            while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp561 = $tmp561->next;
            }
            $fn563 $tmp562 = $tmp561->methods[0];
            panda$collections$Iterator* $tmp564 = $tmp562(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp560)->children));
            p$Iter559 = $tmp564;
            $l565:;
            ITable* $tmp567 = p$Iter559->$class->itable;
            while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp567 = $tmp567->next;
            }
            $fn569 $tmp568 = $tmp567->methods[0];
            panda$core$Bit $tmp570 = $tmp568(p$Iter559);
            panda$core$Bit $tmp571 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp570);
            if (!$tmp571.value) goto $l566;
            {
                ITable* $tmp573 = p$Iter559->$class->itable;
                while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp573 = $tmp573->next;
                }
                $fn575 $tmp574 = $tmp573->methods[1];
                panda$core$Object* $tmp576 = $tmp574(p$Iter559);
                p572 = ((org$pandalanguage$pandac$ASTNode*) $tmp576);
                panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p572->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp577.value);
                bool $tmp579 = ((panda$core$Bit) { p572->children != NULL }).value;
                if (!$tmp579) goto $l580;
                panda$core$Int64 $tmp581 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p572->children);
                panda$core$Bit $tmp582 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp581, ((panda$core$Int64) { 0 }));
                $tmp579 = $tmp582.value;
                $l580:;
                panda$core$Bit $tmp583 = { $tmp579 };
                if ($tmp583.value) {
                {
                    panda$core$Int64 $tmp584 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p572->children);
                    panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp584, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp585.value);
                    panda$core$Object* $tmp586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p572->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp587 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp586));
                    bound578 = $tmp587;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp588 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound578 = $tmp588;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp589 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp589->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp589->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp589, p572->position, fullName532, ((panda$core$String*) p572->payload), bound578);
                panda$collections$Array$add$panda$collections$Array$T(parameters554, ((panda$core$Object*) $tmp589));
            }
            goto $l565;
            $l566:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp591)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp592.value);
    }
    }
    panda$collections$Array* $tmp594 = (panda$collections$Array*) malloc(40);
    $tmp594->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp594->refCount.value = 1;
    panda$collections$Array$init($tmp594);
    supertypes593 = $tmp594;
    panda$core$Object* $tmp596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp596)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp597.value);
    panda$core$Object* $tmp598 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp598)->children != NULL }).value) {
    {
        {
            panda$core$Object* $tmp600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
            ITable* $tmp601 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp600)->children)->$class->itable;
            while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp601 = $tmp601->next;
            }
            $fn603 $tmp602 = $tmp601->methods[0];
            panda$collections$Iterator* $tmp604 = $tmp602(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp600)->children));
            intf$Iter599 = $tmp604;
            $l605:;
            ITable* $tmp607 = intf$Iter599->$class->itable;
            while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp607 = $tmp607->next;
            }
            $fn609 $tmp608 = $tmp607->methods[0];
            panda$core$Bit $tmp610 = $tmp608(intf$Iter599);
            panda$core$Bit $tmp611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp610);
            if (!$tmp611.value) goto $l606;
            {
                ITable* $tmp613 = intf$Iter599->$class->itable;
                while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp613 = $tmp613->next;
                }
                $fn615 $tmp614 = $tmp613->methods[1];
                panda$core$Object* $tmp616 = $tmp614(intf$Iter599);
                intf612 = ((org$pandalanguage$pandac$ASTNode*) $tmp616);
                org$pandalanguage$pandac$Type* $tmp617 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf612);
                panda$collections$Array$add$panda$collections$Array$T(supertypes593, ((panda$core$Object*) $tmp617));
            }
            goto $l605;
            $l606:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp619 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp619->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp619->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp621 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp621->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp621->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp621, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp619, p_source, p_cl->position, p_aliases, doccomment543, annotations551, $tmp621, fullName532, ((panda$collections$ListView*) supertypes593), parameters554, self->compiler->root);
    result618 = $tmp619;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result618));
    panda$core$Object* $tmp623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp623) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp625 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
            ITable* $tmp626 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp625)->children)->$class->itable;
            while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp626 = $tmp626->next;
            }
            $fn628 $tmp627 = $tmp626->methods[0];
            panda$collections$Iterator* $tmp629 = $tmp627(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp625)->children));
            c$Iter624 = $tmp629;
            $l630:;
            ITable* $tmp632 = c$Iter624->$class->itable;
            while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp632 = $tmp632->next;
            }
            $fn634 $tmp633 = $tmp632->methods[0];
            panda$core$Bit $tmp635 = $tmp633(c$Iter624);
            panda$core$Bit $tmp636 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp635);
            if (!$tmp636.value) goto $l631;
            {
                ITable* $tmp638 = c$Iter624->$class->itable;
                while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp638 = $tmp638->next;
                }
                $fn640 $tmp639 = $tmp638->methods[1];
                panda$core$Object* $tmp641 = $tmp639(c$Iter624);
                c637 = ((org$pandalanguage$pandac$ASTNode*) $tmp641);
                org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result618, c637);
            }
            goto $l630;
            $l631:;
        }
    }
    }
    foundInit642 = ((panda$core$Bit) { false });
    {
        ITable* $tmp644 = ((panda$collections$Iterable*) result618->methods)->$class->itable;
        while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp644 = $tmp644->next;
        }
        $fn646 $tmp645 = $tmp644->methods[0];
        panda$collections$Iterator* $tmp647 = $tmp645(((panda$collections$Iterable*) result618->methods));
        m$Iter643 = $tmp647;
        $l648:;
        ITable* $tmp650 = m$Iter643->$class->itable;
        while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp650 = $tmp650->next;
        }
        $fn652 $tmp651 = $tmp650->methods[0];
        panda$core$Bit $tmp653 = $tmp651(m$Iter643);
        panda$core$Bit $tmp654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp653);
        if (!$tmp654.value) goto $l649;
        {
            ITable* $tmp656 = m$Iter643->$class->itable;
            while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp656 = $tmp656->next;
            }
            $fn658 $tmp657 = $tmp656->methods[1];
            panda$core$Object* $tmp659 = $tmp657(m$Iter643);
            m655 = ((org$pandalanguage$pandac$MethodDecl*) $tmp659);
            panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m655->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp660.value) {
            {
                foundInit642 = ((panda$core$Bit) { true });
                goto $l649;
            }
            }
        }
        goto $l648;
        $l649:;
    }
    panda$core$Bit $tmp662 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit642);
    bool $tmp661 = $tmp662.value;
    if (!$tmp661) goto $l663;
    panda$core$Bit $tmp665 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result618)->name, &$s664);
    $tmp661 = $tmp665.value;
    $l663:;
    panda$core$Bit $tmp666 = { $tmp661 };
    if ($tmp666.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp668 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp668->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp668->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp670 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp670->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp670->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp670);
        org$pandalanguage$pandac$MethodDecl$Kind* $tmp672 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
        $tmp672->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
        $tmp672->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp672, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp675 = (panda$collections$Array*) malloc(40);
        $tmp675->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp675->refCount.value = 1;
        panda$collections$Array$init($tmp675);
        org$pandalanguage$pandac$Type* $tmp677 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp678 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp678->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp678->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp678, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp668, result618, p_cl->position, NULL, $tmp670, $tmp672, &$s674, $tmp675, $tmp677, $tmp678);
        defaultInit667 = $tmp668;
        panda$collections$Array$add$panda$collections$Array$T(result618->methods, ((panda$core$Object*) defaultInit667));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result618->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit667));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result618;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName680;
    panda$core$String* doccomment691;
    org$pandalanguage$pandac$Annotations* annotations699;
    panda$collections$Array* parameters702;
    panda$collections$Iterator* p$Iter707;
    org$pandalanguage$pandac$ASTNode* p720;
    org$pandalanguage$pandac$Type* bound726;
    panda$collections$Array* supertypes738;
    panda$collections$Iterator* s$Iter743;
    org$pandalanguage$pandac$ASTNode* s756;
    org$pandalanguage$pandac$ClassDecl* result762;
    panda$collections$Iterator* c$Iter767;
    org$pandalanguage$pandac$ASTNode* c780;
    panda$core$Bit $tmp682 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s681);
    if ($tmp682.value) {
    {
        panda$core$String* $tmp683 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, &$s684);
        panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp685, p_intf->payload);
        panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
        fullName680 = $tmp688;
    }
    }
    else {
    {
        fullName680 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp689 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp689, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp690.value);
    panda$core$Object* $tmp692 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp693 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp692)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp693.value) {
    {
        panda$core$Object* $tmp694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp694)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp695.value);
        panda$core$Object* $tmp696 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment691 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp696)->payload);
    }
    }
    else {
    {
        doccomment691 = NULL;
    }
    }
    panda$core$Object* $tmp697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp697)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp698.value);
    panda$core$Object* $tmp700 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp701 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp700));
    annotations699 = $tmp701;
    panda$collections$Array* $tmp703 = (panda$collections$Array*) malloc(40);
    $tmp703->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp703->refCount.value = 1;
    panda$collections$Array$init($tmp703);
    parameters702 = $tmp703;
    panda$core$Object* $tmp705 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp705)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp706.value) {
    {
        {
            panda$core$Object* $tmp708 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp709 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp708)->children)->$class->itable;
            while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp709 = $tmp709->next;
            }
            $fn711 $tmp710 = $tmp709->methods[0];
            panda$collections$Iterator* $tmp712 = $tmp710(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp708)->children));
            p$Iter707 = $tmp712;
            $l713:;
            ITable* $tmp715 = p$Iter707->$class->itable;
            while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp715 = $tmp715->next;
            }
            $fn717 $tmp716 = $tmp715->methods[0];
            panda$core$Bit $tmp718 = $tmp716(p$Iter707);
            panda$core$Bit $tmp719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp718);
            if (!$tmp719.value) goto $l714;
            {
                ITable* $tmp721 = p$Iter707->$class->itable;
                while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp721 = $tmp721->next;
                }
                $fn723 $tmp722 = $tmp721->methods[1];
                panda$core$Object* $tmp724 = $tmp722(p$Iter707);
                p720 = ((org$pandalanguage$pandac$ASTNode*) $tmp724);
                panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p720->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp725.value);
                panda$core$Int64 $tmp727 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p720->children);
                panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp727, ((panda$core$Int64) { 1 }));
                if ($tmp728.value) {
                {
                    panda$core$Object* $tmp729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p720->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp730 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp729));
                    bound726 = $tmp730;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp731 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p720->children);
                    panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp731, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp732.value);
                    org$pandalanguage$pandac$Type* $tmp733 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound726 = $tmp733;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp734 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp734->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp734->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp734, p720->position, fullName680, ((panda$core$String*) p720->payload), bound726);
                panda$collections$Array$add$panda$collections$Array$T(parameters702, ((panda$core$Object*) $tmp734));
            }
            goto $l713;
            $l714:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp736 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp736)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp737.value);
    }
    }
    panda$collections$Array* $tmp739 = (panda$collections$Array*) malloc(40);
    $tmp739->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp739->refCount.value = 1;
    panda$collections$Array$init($tmp739);
    supertypes738 = $tmp739;
    panda$core$Object* $tmp741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp741)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp742.value);
    {
        panda$core$Object* $tmp744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp745 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp744)->children)->$class->itable;
        while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp745 = $tmp745->next;
        }
        $fn747 $tmp746 = $tmp745->methods[0];
        panda$collections$Iterator* $tmp748 = $tmp746(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp744)->children));
        s$Iter743 = $tmp748;
        $l749:;
        ITable* $tmp751 = s$Iter743->$class->itable;
        while ($tmp751->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp751 = $tmp751->next;
        }
        $fn753 $tmp752 = $tmp751->methods[0];
        panda$core$Bit $tmp754 = $tmp752(s$Iter743);
        panda$core$Bit $tmp755 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp754);
        if (!$tmp755.value) goto $l750;
        {
            ITable* $tmp757 = s$Iter743->$class->itable;
            while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp757 = $tmp757->next;
            }
            $fn759 $tmp758 = $tmp757->methods[1];
            panda$core$Object* $tmp760 = $tmp758(s$Iter743);
            s756 = ((org$pandalanguage$pandac$ASTNode*) $tmp760);
            org$pandalanguage$pandac$Type* $tmp761 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s756);
            panda$collections$Array$add$panda$collections$Array$T(supertypes738, ((panda$core$Object*) $tmp761));
        }
        goto $l749;
        $l750:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp763 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp763->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp763->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp765 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp765->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp765->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp765, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp763, p_source, p_intf->position, p_aliases, doccomment691, annotations699, $tmp765, fullName680, ((panda$collections$ListView*) supertypes738), parameters702, self->compiler->root);
    result762 = $tmp763;
    {
        panda$core$Object* $tmp768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp769 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp768)->children)->$class->itable;
        while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp769 = $tmp769->next;
        }
        $fn771 $tmp770 = $tmp769->methods[0];
        panda$collections$Iterator* $tmp772 = $tmp770(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp768)->children));
        c$Iter767 = $tmp772;
        $l773:;
        ITable* $tmp775 = c$Iter767->$class->itable;
        while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp775 = $tmp775->next;
        }
        $fn777 $tmp776 = $tmp775->methods[0];
        panda$core$Bit $tmp778 = $tmp776(c$Iter767);
        panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
        if (!$tmp779.value) goto $l774;
        {
            ITable* $tmp781 = c$Iter767->$class->itable;
            while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp781 = $tmp781->next;
            }
            $fn783 $tmp782 = $tmp781->methods[1];
            panda$core$Object* $tmp784 = $tmp782(c$Iter767);
            c780 = ((org$pandalanguage$pandac$ASTNode*) $tmp784);
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result762, c780);
        }
        goto $l773;
        $l774:;
    }
    return result762;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName785;
    panda$core$String* doccomment796;
    org$pandalanguage$pandac$Annotations* annotations804;
    panda$collections$Array* parameters807;
    panda$collections$Array* supertypes810;
    org$pandalanguage$pandac$ClassDecl* result813;
    org$pandalanguage$pandac$FieldDecl* rawValue818;
    org$pandalanguage$pandac$FieldDecl* data825;
    panda$core$Bit haveFields832;
    panda$collections$Iterator* c$Iter834;
    org$pandalanguage$pandac$ASTNode* c847;
    org$pandalanguage$pandac$MethodDecl* defaultInit861;
    panda$core$Bit $tmp787 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s786);
    if ($tmp787.value) {
    {
        panda$core$String* $tmp788 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s789);
        panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp790, p_cl->payload);
        panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, &$s792);
        fullName785 = $tmp793;
    }
    }
    else {
    {
        fullName785 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp794 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp794, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp795.value);
    panda$core$Object* $tmp797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp798 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp797)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp798.value) {
    {
        panda$core$Object* $tmp799 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp799)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp800.value);
        panda$core$Object* $tmp801 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment796 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp801)->payload);
    }
    }
    else {
    {
        doccomment796 = NULL;
    }
    }
    panda$core$Object* $tmp802 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp802)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp803.value);
    panda$core$Object* $tmp805 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp806 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp805));
    annotations804 = $tmp806;
    panda$collections$Array* $tmp808 = (panda$collections$Array*) malloc(40);
    $tmp808->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp808->refCount.value = 1;
    panda$collections$Array$init($tmp808);
    parameters807 = $tmp808;
    panda$collections$Array* $tmp811 = (panda$collections$Array*) malloc(40);
    $tmp811->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp811->refCount.value = 1;
    panda$collections$Array$init($tmp811);
    supertypes810 = $tmp811;
    org$pandalanguage$pandac$ClassDecl* $tmp814 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp814->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp814->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp816 = (org$pandalanguage$pandac$ClassDecl$Kind*) malloc(24);
    $tmp816->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$class;
    $tmp816->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp816, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp814, p_source, p_cl->position, p_aliases, doccomment796, annotations804, $tmp816, fullName785, ((panda$collections$ListView*) supertypes810), parameters807, self->compiler->root);
    result813 = $tmp814;
    org$pandalanguage$pandac$FieldDecl* $tmp819 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp819->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp821 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp821->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp821->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp821);
    org$pandalanguage$pandac$Type* $tmp824 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp819, result813, ((org$pandalanguage$pandac$Symbol*) result813)->position, NULL, $tmp821, ((panda$core$Int64) { 10001 }), &$s823, $tmp824, NULL);
    rawValue818 = $tmp819;
    panda$collections$Array$add$panda$collections$Array$T(result813->fields, ((panda$core$Object*) rawValue818));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result813->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue818));
    org$pandalanguage$pandac$FieldDecl* $tmp826 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp826->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp826->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp828 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp828->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp828->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp828);
    org$pandalanguage$pandac$Type* $tmp831 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp826, result813, ((org$pandalanguage$pandac$Symbol*) result813)->position, NULL, $tmp828, ((panda$core$Int64) { 10001 }), &$s830, $tmp831, NULL);
    data825 = $tmp826;
    panda$collections$Array$add$panda$collections$Array$T(result813->fields, ((panda$core$Object*) data825));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result813->symbolTable, ((org$pandalanguage$pandac$Symbol*) data825));
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result813));
    haveFields832 = ((panda$core$Bit) { false });
    panda$core$Object* $tmp833 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp833) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp835 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp836 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp835)->children)->$class->itable;
            while ($tmp836->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp836 = $tmp836->next;
            }
            $fn838 $tmp837 = $tmp836->methods[0];
            panda$collections$Iterator* $tmp839 = $tmp837(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp835)->children));
            c$Iter834 = $tmp839;
            $l840:;
            ITable* $tmp842 = c$Iter834->$class->itable;
            while ($tmp842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp842 = $tmp842->next;
            }
            $fn844 $tmp843 = $tmp842->methods[0];
            panda$core$Bit $tmp845 = $tmp843(c$Iter834);
            panda$core$Bit $tmp846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp845);
            if (!$tmp846.value) goto $l841;
            {
                ITable* $tmp848 = c$Iter834->$class->itable;
                while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp848 = $tmp848->next;
                }
                $fn850 $tmp849 = $tmp848->methods[1];
                panda$core$Object* $tmp851 = $tmp849(c$Iter834);
                c847 = ((org$pandalanguage$pandac$ASTNode*) $tmp851);
                panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c847->kind, ((panda$core$Int64) { 156 }));
                if ($tmp852.value) {
                {
                    bool $tmp853 = haveFields832.value;
                    if ($tmp853) goto $l854;
                    panda$core$Object* $tmp855 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(c847->children, ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp856 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp855)->children);
                    panda$core$Bit $tmp857 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp856, ((panda$core$Int64) { 0 }));
                    $tmp853 = $tmp857.value;
                    $l854:;
                    panda$core$Bit $tmp858 = { $tmp853 };
                    haveFields832 = $tmp858;
                    org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result813, c847);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result813, c847);
                }
                }
            }
            goto $l840;
            $l841:;
        }
    }
    }
    if (haveFields832.value) {
    {
        org$pandalanguage$pandac$Type* $tmp859 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(supertypes810, ((panda$core$Object*) $tmp859));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp860 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(supertypes810, ((panda$core$Object*) $tmp860));
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp862 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp862->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp862->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp864 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp864->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp864->refCount.value = 1;
    panda$core$Int64 $tmp866 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp864, $tmp866);
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp867 = (org$pandalanguage$pandac$MethodDecl$Kind*) malloc(24);
    $tmp867->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$class;
    $tmp867->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp867, ((panda$core$Int64) { 2 }));
    panda$collections$Array* $tmp870 = (panda$collections$Array*) malloc(40);
    $tmp870->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp870->refCount.value = 1;
    panda$collections$Array$init($tmp870);
    org$pandalanguage$pandac$Type* $tmp872 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ASTNode* $tmp873 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp873->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp873->refCount.value = 1;
    panda$collections$Array* $tmp875 = (panda$collections$Array*) malloc(40);
    $tmp875->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp875->refCount.value = 1;
    panda$collections$Array$init($tmp875);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp873, ((panda$core$Int64) { 126 }), p_cl->position, ((panda$collections$ListView*) $tmp875));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp862, result813, p_cl->position, NULL, $tmp864, $tmp867, &$s869, $tmp870, $tmp872, $tmp873);
    defaultInit861 = $tmp862;
    panda$collections$Array$add$panda$collections$Array$T(result813->methods, ((panda$core$Object*) defaultInit861));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result813->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit861));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result813;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter877;
    org$pandalanguage$pandac$ClassDecl* inner889;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp878 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp878 = $tmp878->next;
        }
        $fn880 $tmp879 = $tmp878->methods[0];
        panda$collections$Iterator* $tmp881 = $tmp879(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter877 = $tmp881;
        $l882:;
        ITable* $tmp884 = inner$Iter877->$class->itable;
        while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp884 = $tmp884->next;
        }
        $fn886 $tmp885 = $tmp884->methods[0];
        panda$core$Bit $tmp887 = $tmp885(inner$Iter877);
        panda$core$Bit $tmp888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp887);
        if (!$tmp888.value) goto $l883;
        {
            ITable* $tmp890 = inner$Iter877->$class->itable;
            while ($tmp890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp890 = $tmp890->next;
            }
            $fn892 $tmp891 = $tmp890->methods[1];
            panda$core$Object* $tmp893 = $tmp891(inner$Iter877);
            inner889 = ((org$pandalanguage$pandac$ClassDecl*) $tmp893);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner889, p_arr);
        }
        goto $l882;
        $l883:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result894;
    panda$core$String* currentPackage897;
    panda$collections$HashMap* aliases899;
    panda$collections$Iterator* c$Iter903;
    org$pandalanguage$pandac$ASTNode* c915;
    panda$core$String* fullName920;
    panda$core$String$Index$nullable idx921;
    panda$core$String* alias924;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp925;
    org$pandalanguage$pandac$ClassDecl* cl928;
    org$pandalanguage$pandac$ClassDecl* cl930;
    org$pandalanguage$pandac$ClassDecl* cl932;
    panda$collections$Array* $tmp895 = (panda$collections$Array*) malloc(40);
    $tmp895->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp895->refCount.value = 1;
    panda$collections$Array$init($tmp895);
    result894 = $tmp895;
    currentPackage897 = &$s898;
    panda$collections$HashMap* $tmp900 = (panda$collections$HashMap*) malloc(56);
    $tmp900->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp900->refCount.value = 1;
    panda$collections$HashMap$init($tmp900);
    aliases899 = $tmp900;
    panda$core$Bit $tmp902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp902.value);
    {
        ITable* $tmp904 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp904 = $tmp904->next;
        }
        $fn906 $tmp905 = $tmp904->methods[0];
        panda$collections$Iterator* $tmp907 = $tmp905(((panda$collections$Iterable*) p_file->children));
        c$Iter903 = $tmp907;
        $l908:;
        ITable* $tmp910 = c$Iter903->$class->itable;
        while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp910 = $tmp910->next;
        }
        $fn912 $tmp911 = $tmp910->methods[0];
        panda$core$Bit $tmp913 = $tmp911(c$Iter903);
        panda$core$Bit $tmp914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp913);
        if (!$tmp914.value) goto $l909;
        {
            ITable* $tmp916 = c$Iter903->$class->itable;
            while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp916 = $tmp916->next;
            }
            $fn918 $tmp917 = $tmp916->methods[1];
            panda$core$Object* $tmp919 = $tmp917(c$Iter903);
            c915 = ((org$pandalanguage$pandac$ASTNode*) $tmp919);
            switch (c915->kind.value) {
                case 100:
                {
                    currentPackage897 = ((panda$core$String*) c915->payload);
                }
                break;
                case 101:
                {
                    fullName920 = ((panda$core$String*) c915->payload);
                    panda$core$String$Index$nullable $tmp923 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName920, &$s922);
                    idx921 = $tmp923;
                    if (((panda$core$Bit) { idx921.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp926 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName920, ((panda$core$String$Index) idx921.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp925, ((panda$core$String$Index$nullable) { $tmp926, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp927 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName920, $tmp925);
                        alias924 = $tmp927;
                    }
                    }
                    else {
                    {
                        alias924 = fullName920;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases899, ((panda$collections$Key*) alias924), ((panda$core$Object*) fullName920));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp929 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases899), currentPackage897, c915);
                    cl928 = $tmp929;
                    if (((panda$core$Bit) { cl928 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl928, result894);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp931 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases899), currentPackage897, c915);
                    cl930 = $tmp931;
                    if (((panda$core$Bit) { cl930 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl930, result894);
                    }
                    }
                }
                break;
                case 155:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp933 = org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases899), currentPackage897, c915);
                    cl932 = $tmp933;
                    if (((panda$core$Bit) { cl932 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl932, result894);
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
        goto $l908;
        $l909:;
    }
    return ((panda$collections$ListView*) result894);
}

