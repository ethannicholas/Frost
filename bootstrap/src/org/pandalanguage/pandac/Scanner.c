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
typedef panda$collections$Iterator* (*$fn224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn236)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn296)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn302)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn308)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn386)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn392)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn398)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn409)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn421)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn557)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn563)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn569)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn609)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn621)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn627)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn633)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn645)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn651)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn704)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn710)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn716)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn740)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn746)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn752)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn769)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn822)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn828)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn834)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn855)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn861)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn867)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn893)(panda$collections$Iterator*);

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
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    org$pandalanguage$pandac$MethodDecl$Kind $tmp216;
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
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp216, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp214, p_owner, p_i->position, doccomment173, annotations181, $tmp216, &$s217, parameters186, $tmp218, ((org$pandalanguage$pandac$ASTNode*) $tmp219));
    return $tmp214;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result220;
    panda$collections$Iterator* child$Iter221;
    org$pandalanguage$pandac$ASTNode* child233;
    result220 = ((panda$core$Int64) { 1 });
    if (((panda$core$Bit) { p_node->children != NULL }).value) {
    {
        {
            ITable* $tmp222 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
            while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp222 = $tmp222->next;
            }
            $fn224 $tmp223 = $tmp222->methods[0];
            panda$collections$Iterator* $tmp225 = $tmp223(((panda$collections$Iterable*) p_node->children));
            child$Iter221 = $tmp225;
            $l226:;
            ITable* $tmp228 = child$Iter221->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Bit $tmp231 = $tmp229(child$Iter221);
            panda$core$Bit $tmp232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp231);
            if (!$tmp232.value) goto $l227;
            {
                ITable* $tmp234 = child$Iter221->$class->itable;
                while ($tmp234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp234 = $tmp234->next;
                }
                $fn236 $tmp235 = $tmp234->methods[1];
                panda$core$Object* $tmp237 = $tmp235(child$Iter221);
                child233 = ((org$pandalanguage$pandac$ASTNode*) $tmp237);
                panda$core$Int64 $tmp238 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, child233);
                panda$core$Int64 $tmp239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result220, $tmp238);
                result220 = $tmp239;
                panda$core$Bit $tmp240 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result220, ((panda$core$Int64) { 10 }));
                if ($tmp240.value) {
                {
                    goto $l227;
                }
                }
            }
            goto $l226;
            $l227:;
        }
    }
    }
    return result220;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    panda$core$Bit $tmp245 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp244 = $tmp245.value;
    if (!$tmp244) goto $l246;
    $tmp244 = ((panda$core$Bit) { p_body != NULL }).value;
    $l246:;
    panda$core$Bit $tmp247 = { $tmp244 };
    bool $tmp243 = $tmp247.value;
    if (!$tmp243) goto $l248;
    panda$core$Bit $tmp249 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp249);
    $tmp243 = $tmp250.value;
    $l248:;
    panda$core$Bit $tmp251 = { $tmp243 };
    bool $tmp242 = $tmp251.value;
    if (!$tmp242) goto $l252;
    panda$core$Bit $tmp253 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp242 = $tmp253.value;
    $l252:;
    panda$core$Bit $tmp254 = { $tmp242 };
    bool $tmp241 = $tmp254.value;
    if (!$tmp241) goto $l255;
    panda$core$Int64 $tmp256 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp257 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp256, ((panda$core$Int64) { 10 }));
    $tmp241 = $tmp257.value;
    $l255:;
    panda$core$Bit $tmp258 = { $tmp241 };
    return $tmp258;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$MethodDecl$Kind kind261;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp262;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp263;
    panda$core$String* name264;
    panda$core$String* doccomment265;
    org$pandalanguage$pandac$Annotations* annotations273;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp276;
    panda$collections$Array* parameters289;
    panda$collections$Iterator* p$Iter292;
    org$pandalanguage$pandac$ASTNode* p305;
    org$pandalanguage$pandac$Type* returnType317;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp321;
    panda$core$Int64 $tmp259 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp259, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp260.value);
    switch (p_m->kind.value) {
        case 145:
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp262, ((panda$core$Int64) { 0 }));
            kind261 = $tmp262;
        }
        break;
        case 146:
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp263, ((panda$core$Int64) { 1 }));
            kind261 = $tmp263;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    name264 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp266 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp267 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp266)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp267.value) {
    {
        panda$core$Object* $tmp268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp268)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp269.value);
        panda$core$Object* $tmp270 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment265 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp270)->payload);
    }
    }
    else {
    {
        doccomment265 = NULL;
    }
    }
    panda$core$Object* $tmp271 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp271)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp272.value);
    panda$core$Object* $tmp274 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp275 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp274));
    annotations273 = $tmp275;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp276, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp276.$rawValue);
    if ($tmp277.value) {
    {
        panda$core$Int64 $tmp278 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp279 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations273->flags, $tmp278);
        annotations273->flags = $tmp279;
    }
    }
    panda$core$Bit $tmp281 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp280 = $tmp281.value;
    if ($tmp280) goto $l282;
    panda$core$Bit $tmp283 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations273);
    $tmp280 = $tmp283.value;
    $l282:;
    panda$core$Bit $tmp284 = { $tmp280 };
    if ($tmp284.value) {
    {
        panda$core$Int64 $tmp285 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp286 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations273->flags, $tmp285);
        annotations273->flags = $tmp286;
    }
    }
    panda$core$Object* $tmp287 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp287)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp288.value);
    panda$collections$Array* $tmp290 = (panda$collections$Array*) malloc(40);
    $tmp290->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp290->refCount.value = 1;
    panda$collections$Array$init($tmp290);
    parameters289 = $tmp290;
    {
        panda$core$Object* $tmp293 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp294 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp293)->children)->$class->itable;
        while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp294 = $tmp294->next;
        }
        $fn296 $tmp295 = $tmp294->methods[0];
        panda$collections$Iterator* $tmp297 = $tmp295(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp293)->children));
        p$Iter292 = $tmp297;
        $l298:;
        ITable* $tmp300 = p$Iter292->$class->itable;
        while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp300 = $tmp300->next;
        }
        $fn302 $tmp301 = $tmp300->methods[0];
        panda$core$Bit $tmp303 = $tmp301(p$Iter292);
        panda$core$Bit $tmp304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp303);
        if (!$tmp304.value) goto $l299;
        {
            ITable* $tmp306 = p$Iter292->$class->itable;
            while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp306 = $tmp306->next;
            }
            $fn308 $tmp307 = $tmp306->methods[1];
            panda$core$Object* $tmp309 = $tmp307(p$Iter292);
            p305 = ((org$pandalanguage$pandac$ASTNode*) $tmp309);
            panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p305->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp310.value);
            panda$core$Int64 $tmp311 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p305->children);
            panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp311, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp312.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp313 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp313->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp313->refCount.value = 1;
            panda$core$Object* $tmp315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p305->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp316 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp315));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp313, ((panda$core$String*) p305->payload), $tmp316);
            panda$collections$Array$add$panda$collections$Array$T(parameters289, ((panda$core$Object*) $tmp313));
        }
        goto $l298;
        $l299:;
    }
    panda$core$Object* $tmp318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp319 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp318));
    returnType317 = $tmp319;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp321, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind261.$rawValue, $tmp321.$rawValue);
    bool $tmp320 = $tmp322.value;
    if (!$tmp320) goto $l323;
    org$pandalanguage$pandac$Type* $tmp324 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp325 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType317, $tmp324);
    $tmp320 = $tmp325.value;
    $l323:;
    panda$core$Bit $tmp326 = { $tmp320 };
    if ($tmp326.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_m->position, &$s327);
    }
    }
    panda$core$Object* $tmp328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp328)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp329.value) {
    {
        panda$core$Object* $tmp330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp331 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations273, ((org$pandalanguage$pandac$ASTNode*) $tmp330));
        if ($tmp331.value) {
        {
            panda$core$Int64 $tmp332 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp333 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations273->flags, $tmp332);
            annotations273->flags = $tmp333;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp334 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp334->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp334->refCount.value = 1;
        panda$core$Object* $tmp336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp334, p_owner, p_m->position, doccomment265, annotations273, kind261, name264, parameters289, returnType317, ((org$pandalanguage$pandac$ASTNode*) $tmp336));
        return $tmp334;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp337 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp337->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp337->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp337, p_owner, p_m->position, doccomment265, annotations273, kind261, name264, parameters289, returnType317, NULL);
        return $tmp337;
    }
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$MethodDecl* i339;
    org$pandalanguage$pandac$MethodDecl* m341;
    org$pandalanguage$pandac$ClassDecl* inner343;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp348;
    org$pandalanguage$pandac$ClassDecl* inner353;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp358;
    org$pandalanguage$pandac$ClassDecl* inner363;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp368;
    switch (p_node->kind.value) {
        case 148:
        {
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, p_cl, p_node);
        }
        break;
        case 147:
        {
            org$pandalanguage$pandac$MethodDecl* $tmp340 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, p_node);
            i339 = $tmp340;
            if (((panda$core$Bit) { i339 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) i339));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) i339));
            }
            }
        }
        break;
        case 145:
        case 146:
        {
            org$pandalanguage$pandac$MethodDecl* $tmp342 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, p_node);
            m341 = $tmp342;
            if (((panda$core$Bit) { m341 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m341));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m341));
            }
            }
        }
        break;
        case 142:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp344 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, p_node);
            inner343 = $tmp344;
            if (((panda$core$Bit) { inner343 != NULL }).value) {
            {
                inner343->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner343));
                panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s345);
                panda$core$Bit $tmp347 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner343)->name, $tmp346);
                PANDA_ASSERT($tmp347.value);
                panda$core$Int64 $tmp349 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp349, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp348, ((panda$core$Int64$nullable) { $tmp350, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp351 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner343)->name, $tmp348);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner343), $tmp351);
                panda$collections$Array$add$panda$collections$Array$T(inner343->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp352 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner343->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp352);
            }
            }
        }
        break;
        case 151:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp354 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, p_node);
            inner353 = $tmp354;
            if (((panda$core$Bit) { inner353 != NULL }).value) {
            {
                inner353->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner353));
                panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s355);
                panda$core$Bit $tmp357 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner353)->name, $tmp356);
                PANDA_ASSERT($tmp357.value);
                panda$core$Int64 $tmp359 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp359, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp358, ((panda$core$Int64$nullable) { $tmp360, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp361 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner353)->name, $tmp358);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner353), $tmp361);
                panda$collections$Array$add$panda$collections$Array$T(inner353->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp362 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner353->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp362);
            }
            }
        }
        break;
        case 155:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp364 = org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, p_node);
            inner363 = $tmp364;
            if (((panda$core$Bit) { inner363 != NULL }).value) {
            {
                inner363->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner363));
                panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s365);
                panda$core$Bit $tmp367 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner363)->name, $tmp366);
                PANDA_ASSERT($tmp367.value);
                panda$core$Int64 $tmp369 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp370 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp369, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp368, ((panda$core$Int64$nullable) { $tmp370, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp371 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner363)->name, $tmp368);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner363), $tmp371);
                panda$collections$Array$add$panda$collections$Array$T(inner363->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp372 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner363->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp372);
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
    panda$core$String* doccomment373;
    panda$collections$Array* types379;
    panda$collections$Iterator* t$Iter382;
    org$pandalanguage$pandac$ASTNode* t395;
    org$pandalanguage$pandac$ChoiceEntry* entry401;
    panda$core$Bit found405;
    panda$collections$Iterator* m$Iter406;
    org$pandalanguage$pandac$MethodDecl* m418;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp423;
    panda$core$Range$LTpanda$core$Int64$GT $tmp432;
    panda$collections$Array* parameters458;
    panda$collections$Array* statements465;
    panda$collections$Array* children468;
    panda$core$Range$LTpanda$core$Int64$GT $tmp479;
    panda$core$String* name494;
    org$pandalanguage$pandac$MethodDecl* synthetic516;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp521;
    panda$core$Object* $tmp374 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp375 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp374)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp375.value) {
    {
        panda$core$Object* $tmp376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp376)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp377.value);
        panda$core$Object* $tmp378 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 0 }));
        doccomment373 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp378)->payload);
    }
    }
    else {
    {
        doccomment373 = NULL;
    }
    }
    panda$collections$Array* $tmp380 = (panda$collections$Array*) malloc(40);
    $tmp380->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp380->refCount.value = 1;
    panda$collections$Array$init($tmp380);
    types379 = $tmp380;
    {
        panda$core$Object* $tmp383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_entry->children, ((panda$core$Int64) { 1 }));
        ITable* $tmp384 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp383)->children)->$class->itable;
        while ($tmp384->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp384 = $tmp384->next;
        }
        $fn386 $tmp385 = $tmp384->methods[0];
        panda$collections$Iterator* $tmp387 = $tmp385(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp383)->children));
        t$Iter382 = $tmp387;
        $l388:;
        ITable* $tmp390 = t$Iter382->$class->itable;
        while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp390 = $tmp390->next;
        }
        $fn392 $tmp391 = $tmp390->methods[0];
        panda$core$Bit $tmp393 = $tmp391(t$Iter382);
        panda$core$Bit $tmp394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp393);
        if (!$tmp394.value) goto $l389;
        {
            ITable* $tmp396 = t$Iter382->$class->itable;
            while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp396 = $tmp396->next;
            }
            $fn398 $tmp397 = $tmp396->methods[1];
            panda$core$Object* $tmp399 = $tmp397(t$Iter382);
            t395 = ((org$pandalanguage$pandac$ASTNode*) $tmp399);
            org$pandalanguage$pandac$Type* $tmp400 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t395);
            panda$collections$Array$add$panda$collections$Array$T(types379, ((panda$core$Object*) $tmp400));
        }
        goto $l388;
        $l389:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp402 = (org$pandalanguage$pandac$ChoiceEntry*) malloc(89);
    $tmp402->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp402->refCount.value = 1;
    panda$core$Int64 $tmp404 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp402, p_cl, p_entry->position, ((panda$core$String*) p_entry->payload), doccomment373, $tmp404, ((panda$collections$ListView*) types379));
    entry401 = $tmp402;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry401));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry401));
    found405 = ((panda$core$Bit) { false });
    {
        ITable* $tmp407 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp407 = $tmp407->next;
        }
        $fn409 $tmp408 = $tmp407->methods[0];
        panda$collections$Iterator* $tmp410 = $tmp408(((panda$collections$Iterable*) p_cl->methods));
        m$Iter406 = $tmp410;
        $l411:;
        ITable* $tmp413 = m$Iter406->$class->itable;
        while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp413 = $tmp413->next;
        }
        $fn415 $tmp414 = $tmp413->methods[0];
        panda$core$Bit $tmp416 = $tmp414(m$Iter406);
        panda$core$Bit $tmp417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp416);
        if (!$tmp417.value) goto $l412;
        {
            ITable* $tmp419 = m$Iter406->$class->itable;
            while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp419 = $tmp419->next;
            }
            $fn421 $tmp420 = $tmp419->methods[1];
            panda$core$Object* $tmp422 = $tmp420(m$Iter406);
            m418 = ((org$pandalanguage$pandac$MethodDecl*) $tmp422);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp423, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m418->methodKind.$rawValue, $tmp423.$rawValue);
            PANDA_ASSERT($tmp424.value);
            panda$core$Int64 $tmp425 = panda$collections$Array$get_count$R$panda$core$Int64(m418->parameters);
            panda$core$Int64 $tmp426 = panda$collections$Array$get_count$R$panda$core$Int64(types379);
            panda$core$Int64 $tmp427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp426, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp428 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp425, $tmp427);
            if ($tmp428.value) {
            {
                goto $l411;
            }
            }
            panda$core$Object* $tmp429 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m418->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp430 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp431 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp429)->type, $tmp430);
            PANDA_ASSERT($tmp431.value);
            panda$core$Int64 $tmp433 = panda$collections$Array$get_count$R$panda$core$Int64(types379);
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
                panda$core$Object* $tmp447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(types379, i434);
                panda$core$Int64 $tmp448 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i434, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m418->parameters, $tmp448);
                panda$core$Bit $tmp450 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp447), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp449)->type);
                if ($tmp450.value) {
                {
                    goto $l411;
                }
                }
            }
            $l442:;
            int64_t $tmp452 = $tmp437 - i434.value;
            if ($tmp438) goto $l453; else goto $l454;
            $l453:;
            if ($tmp452 >= 1) goto $l451; else goto $l441;
            $l454:;
            if ($tmp452 > 1) goto $l451; else goto $l441;
            $l451:;
            i434.value += 1;
            goto $l439;
            $l441:;
            found405 = ((panda$core$Bit) { true });
            goto $l412;
        }
        goto $l411;
        $l412:;
    }
    panda$core$Bit $tmp457 = panda$core$Bit$$NOT$R$panda$core$Bit(found405);
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
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp477, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children468));
        panda$collections$Array$add$panda$collections$Array$T(statements465, ((panda$core$Object*) $tmp477));
        panda$core$Int64 $tmp480 = panda$collections$Array$get_count$R$panda$core$Int64(types379);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp479, ((panda$core$Int64) { 0 }), $tmp480, ((panda$core$Bit) { false }));
        int64_t $tmp482 = $tmp479.min.value;
        panda$core$Int64 i481 = { $tmp482 };
        int64_t $tmp484 = $tmp479.max.value;
        bool $tmp485 = $tmp479.inclusive.value;
        if ($tmp485) goto $l492; else goto $l493;
        $l492:;
        if ($tmp482 <= $tmp484) goto $l486; else goto $l488;
        $l493:;
        if ($tmp482 < $tmp484) goto $l486; else goto $l488;
        $l486:;
        {
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s495, ((panda$core$Object*) wrap_panda$core$Int64(i481)));
            panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp496, &$s497);
            name494 = $tmp498;
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp499 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp499->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp499->refCount.value = 1;
            panda$core$Object* $tmp501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(types379, i481);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp499, name494, ((org$pandalanguage$pandac$Type*) $tmp501));
            panda$collections$Array$add$panda$collections$Array$T(parameters458, ((panda$core$Object*) $tmp499));
            panda$collections$Array$clear(children468);
            org$pandalanguage$pandac$ASTNode* $tmp502 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp502->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp502->refCount.value = 1;
            org$pandalanguage$pandac$Pair* $tmp504 = (org$pandalanguage$pandac$Pair*) malloc(32);
            $tmp504->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
            $tmp504->refCount.value = 1;
            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp504, ((panda$core$Object*) entry401), ((panda$core$Object*) wrap_panda$core$Int64(i481)));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$ChoiceEntry$Cpanda$core$Int64$GT($tmp502, ((panda$core$Int64) { 158 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp504);
            panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) $tmp502));
            org$pandalanguage$pandac$ASTNode* $tmp506 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp506->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp506, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, name494);
            panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) $tmp506));
            org$pandalanguage$pandac$ASTNode* $tmp508 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp508->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp508->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp508, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children468));
            panda$collections$Array$add$panda$collections$Array$T(statements465, ((panda$core$Object*) $tmp508));
        }
        $l489:;
        int64_t $tmp511 = $tmp484 - i481.value;
        if ($tmp485) goto $l512; else goto $l513;
        $l512:;
        if ($tmp511 >= 1) goto $l510; else goto $l488;
        $l513:;
        if ($tmp511 > 1) goto $l510; else goto $l488;
        $l510:;
        i481.value += 1;
        goto $l486;
        $l488:;
        org$pandalanguage$pandac$MethodDecl* $tmp517 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp517->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp517->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp519 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp519->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp519->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp519);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp521, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp524 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp524->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp524->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp524, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$ListView*) statements465));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp517, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp519, $tmp521, &$s522, parameters458, $tmp523, $tmp524);
        synthetic516 = $tmp517;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic516));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic516));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName526;
    panda$core$String* doccomment537;
    org$pandalanguage$pandac$Annotations* annotations545;
    panda$collections$Array* parameters548;
    panda$collections$Iterator* p$Iter553;
    org$pandalanguage$pandac$ASTNode* p566;
    org$pandalanguage$pandac$Type* bound572;
    panda$collections$Array* supertypes587;
    panda$collections$Iterator* intf$Iter593;
    org$pandalanguage$pandac$ASTNode* intf606;
    org$pandalanguage$pandac$ClassDecl* result612;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp615;
    panda$collections$Iterator* c$Iter617;
    org$pandalanguage$pandac$ASTNode* c630;
    panda$core$Bit foundInit635;
    panda$collections$Iterator* m$Iter636;
    org$pandalanguage$pandac$MethodDecl* m648;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp653;
    org$pandalanguage$pandac$MethodDecl* defaultInit661;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp666;
    panda$core$Bit $tmp528 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s527);
    if ($tmp528.value) {
    {
        panda$core$String* $tmp529 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s530);
        panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp531, p_cl->payload);
        panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
        fullName526 = $tmp534;
    }
    }
    else {
    {
        fullName526 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp535, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp536.value);
    panda$core$Object* $tmp538 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp539 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp538)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp539.value) {
    {
        panda$core$Object* $tmp540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp540)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp541.value);
        panda$core$Object* $tmp542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment537 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp542)->payload);
    }
    }
    else {
    {
        doccomment537 = NULL;
    }
    }
    panda$core$Object* $tmp543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp543)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp544.value);
    panda$core$Object* $tmp546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp547 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp546));
    annotations545 = $tmp547;
    panda$collections$Array* $tmp549 = (panda$collections$Array*) malloc(40);
    $tmp549->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp549->refCount.value = 1;
    panda$collections$Array$init($tmp549);
    parameters548 = $tmp549;
    panda$core$Object* $tmp551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp551)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp552.value) {
    {
        {
            panda$core$Object* $tmp554 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp555 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp554)->children)->$class->itable;
            while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp555 = $tmp555->next;
            }
            $fn557 $tmp556 = $tmp555->methods[0];
            panda$collections$Iterator* $tmp558 = $tmp556(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp554)->children));
            p$Iter553 = $tmp558;
            $l559:;
            ITable* $tmp561 = p$Iter553->$class->itable;
            while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp561 = $tmp561->next;
            }
            $fn563 $tmp562 = $tmp561->methods[0];
            panda$core$Bit $tmp564 = $tmp562(p$Iter553);
            panda$core$Bit $tmp565 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp564);
            if (!$tmp565.value) goto $l560;
            {
                ITable* $tmp567 = p$Iter553->$class->itable;
                while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp567 = $tmp567->next;
                }
                $fn569 $tmp568 = $tmp567->methods[1];
                panda$core$Object* $tmp570 = $tmp568(p$Iter553);
                p566 = ((org$pandalanguage$pandac$ASTNode*) $tmp570);
                panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p566->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp571.value);
                bool $tmp573 = ((panda$core$Bit) { p566->children != NULL }).value;
                if (!$tmp573) goto $l574;
                panda$core$Int64 $tmp575 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p566->children);
                panda$core$Bit $tmp576 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp575, ((panda$core$Int64) { 0 }));
                $tmp573 = $tmp576.value;
                $l574:;
                panda$core$Bit $tmp577 = { $tmp573 };
                if ($tmp577.value) {
                {
                    panda$core$Int64 $tmp578 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p566->children);
                    panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp578, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp579.value);
                    panda$core$Object* $tmp580 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p566->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp581 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp580));
                    bound572 = $tmp581;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp582 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound572 = $tmp582;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp583 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp583->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp583->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp583, p566->position, fullName526, ((panda$core$String*) p566->payload), bound572);
                panda$collections$Array$add$panda$collections$Array$T(parameters548, ((panda$core$Object*) $tmp583));
            }
            goto $l559;
            $l560:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp585 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp585)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp586.value);
    }
    }
    panda$collections$Array* $tmp588 = (panda$collections$Array*) malloc(40);
    $tmp588->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp588->refCount.value = 1;
    panda$collections$Array$init($tmp588);
    supertypes587 = $tmp588;
    panda$core$Object* $tmp590 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp590)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp591.value);
    panda$core$Object* $tmp592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp592)->children != NULL }).value) {
    {
        {
            panda$core$Object* $tmp594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
            ITable* $tmp595 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp594)->children)->$class->itable;
            while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp595 = $tmp595->next;
            }
            $fn597 $tmp596 = $tmp595->methods[0];
            panda$collections$Iterator* $tmp598 = $tmp596(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp594)->children));
            intf$Iter593 = $tmp598;
            $l599:;
            ITable* $tmp601 = intf$Iter593->$class->itable;
            while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp601 = $tmp601->next;
            }
            $fn603 $tmp602 = $tmp601->methods[0];
            panda$core$Bit $tmp604 = $tmp602(intf$Iter593);
            panda$core$Bit $tmp605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp604);
            if (!$tmp605.value) goto $l600;
            {
                ITable* $tmp607 = intf$Iter593->$class->itable;
                while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp607 = $tmp607->next;
                }
                $fn609 $tmp608 = $tmp607->methods[1];
                panda$core$Object* $tmp610 = $tmp608(intf$Iter593);
                intf606 = ((org$pandalanguage$pandac$ASTNode*) $tmp610);
                org$pandalanguage$pandac$Type* $tmp611 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf606);
                panda$collections$Array$add$panda$collections$Array$T(supertypes587, ((panda$core$Object*) $tmp611));
            }
            goto $l599;
            $l600:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp613 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp613->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp613->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp615, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp613, p_source, p_cl->position, p_aliases, doccomment537, annotations545, $tmp615, fullName526, ((panda$collections$ListView*) supertypes587), parameters548, self->compiler->root);
    result612 = $tmp613;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result612));
    panda$core$Object* $tmp616 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp616) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
            ITable* $tmp619 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp618)->children)->$class->itable;
            while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp619 = $tmp619->next;
            }
            $fn621 $tmp620 = $tmp619->methods[0];
            panda$collections$Iterator* $tmp622 = $tmp620(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp618)->children));
            c$Iter617 = $tmp622;
            $l623:;
            ITable* $tmp625 = c$Iter617->$class->itable;
            while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp625 = $tmp625->next;
            }
            $fn627 $tmp626 = $tmp625->methods[0];
            panda$core$Bit $tmp628 = $tmp626(c$Iter617);
            panda$core$Bit $tmp629 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp628);
            if (!$tmp629.value) goto $l624;
            {
                ITable* $tmp631 = c$Iter617->$class->itable;
                while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp631 = $tmp631->next;
                }
                $fn633 $tmp632 = $tmp631->methods[1];
                panda$core$Object* $tmp634 = $tmp632(c$Iter617);
                c630 = ((org$pandalanguage$pandac$ASTNode*) $tmp634);
                org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result612, c630);
            }
            goto $l623;
            $l624:;
        }
    }
    }
    foundInit635 = ((panda$core$Bit) { false });
    {
        ITable* $tmp637 = ((panda$collections$Iterable*) result612->methods)->$class->itable;
        while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp637 = $tmp637->next;
        }
        $fn639 $tmp638 = $tmp637->methods[0];
        panda$collections$Iterator* $tmp640 = $tmp638(((panda$collections$Iterable*) result612->methods));
        m$Iter636 = $tmp640;
        $l641:;
        ITable* $tmp643 = m$Iter636->$class->itable;
        while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp643 = $tmp643->next;
        }
        $fn645 $tmp644 = $tmp643->methods[0];
        panda$core$Bit $tmp646 = $tmp644(m$Iter636);
        panda$core$Bit $tmp647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp646);
        if (!$tmp647.value) goto $l642;
        {
            ITable* $tmp649 = m$Iter636->$class->itable;
            while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp649 = $tmp649->next;
            }
            $fn651 $tmp650 = $tmp649->methods[1];
            panda$core$Object* $tmp652 = $tmp650(m$Iter636);
            m648 = ((org$pandalanguage$pandac$MethodDecl*) $tmp652);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp653, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m648->methodKind.$rawValue, $tmp653.$rawValue);
            if ($tmp654.value) {
            {
                foundInit635 = ((panda$core$Bit) { true });
                goto $l642;
            }
            }
        }
        goto $l641;
        $l642:;
    }
    panda$core$Bit $tmp656 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit635);
    bool $tmp655 = $tmp656.value;
    if (!$tmp655) goto $l657;
    panda$core$Bit $tmp659 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result612)->name, &$s658);
    $tmp655 = $tmp659.value;
    $l657:;
    panda$core$Bit $tmp660 = { $tmp655 };
    if ($tmp660.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp662 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp662->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp662->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp664 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp664->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp664->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp664);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp666, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp668 = (panda$collections$Array*) malloc(40);
        $tmp668->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp668->refCount.value = 1;
        panda$collections$Array$init($tmp668);
        org$pandalanguage$pandac$Type* $tmp670 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp671 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp671->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp671->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp671, ((panda$core$Int64) { 126 }), p_cl->position);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp662, result612, p_cl->position, NULL, $tmp664, $tmp666, &$s667, $tmp668, $tmp670, $tmp671);
        defaultInit661 = $tmp662;
        panda$collections$Array$add$panda$collections$Array$T(result612->methods, ((panda$core$Object*) defaultInit661));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result612->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit661));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result612;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName673;
    panda$core$String* doccomment684;
    org$pandalanguage$pandac$Annotations* annotations692;
    panda$collections$Array* parameters695;
    panda$collections$Iterator* p$Iter700;
    org$pandalanguage$pandac$ASTNode* p713;
    org$pandalanguage$pandac$Type* bound719;
    panda$collections$Array* supertypes731;
    panda$collections$Iterator* s$Iter736;
    org$pandalanguage$pandac$ASTNode* s749;
    org$pandalanguage$pandac$ClassDecl* result755;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp758;
    panda$collections$Iterator* c$Iter759;
    org$pandalanguage$pandac$ASTNode* c772;
    panda$core$Bit $tmp675 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s674);
    if ($tmp675.value) {
    {
        panda$core$String* $tmp676 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s677);
        panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp678, p_intf->payload);
        panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s680);
        fullName673 = $tmp681;
    }
    }
    else {
    {
        fullName673 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp682 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp682, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp683.value);
    panda$core$Object* $tmp685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp686 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp685)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp686.value) {
    {
        panda$core$Object* $tmp687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp687)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp688.value);
        panda$core$Object* $tmp689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment684 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp689)->payload);
    }
    }
    else {
    {
        doccomment684 = NULL;
    }
    }
    panda$core$Object* $tmp690 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp690)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp691.value);
    panda$core$Object* $tmp693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp694 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp693));
    annotations692 = $tmp694;
    panda$collections$Array* $tmp696 = (panda$collections$Array*) malloc(40);
    $tmp696->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp696->refCount.value = 1;
    panda$collections$Array$init($tmp696);
    parameters695 = $tmp696;
    panda$core$Object* $tmp698 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp698)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp699.value) {
    {
        {
            panda$core$Object* $tmp701 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp702 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp701)->children)->$class->itable;
            while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp702 = $tmp702->next;
            }
            $fn704 $tmp703 = $tmp702->methods[0];
            panda$collections$Iterator* $tmp705 = $tmp703(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp701)->children));
            p$Iter700 = $tmp705;
            $l706:;
            ITable* $tmp708 = p$Iter700->$class->itable;
            while ($tmp708->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp708 = $tmp708->next;
            }
            $fn710 $tmp709 = $tmp708->methods[0];
            panda$core$Bit $tmp711 = $tmp709(p$Iter700);
            panda$core$Bit $tmp712 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp711);
            if (!$tmp712.value) goto $l707;
            {
                ITable* $tmp714 = p$Iter700->$class->itable;
                while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp714 = $tmp714->next;
                }
                $fn716 $tmp715 = $tmp714->methods[1];
                panda$core$Object* $tmp717 = $tmp715(p$Iter700);
                p713 = ((org$pandalanguage$pandac$ASTNode*) $tmp717);
                panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p713->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp718.value);
                panda$core$Int64 $tmp720 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p713->children);
                panda$core$Bit $tmp721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp720, ((panda$core$Int64) { 1 }));
                if ($tmp721.value) {
                {
                    panda$core$Object* $tmp722 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p713->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp723 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp722));
                    bound719 = $tmp723;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp724 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p713->children);
                    panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp724, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp725.value);
                    org$pandalanguage$pandac$Type* $tmp726 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound719 = $tmp726;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp727 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp727->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp727->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp727, p713->position, fullName673, ((panda$core$String*) p713->payload), bound719);
                panda$collections$Array$add$panda$collections$Array$T(parameters695, ((panda$core$Object*) $tmp727));
            }
            goto $l706;
            $l707:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp729)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp730.value);
    }
    }
    panda$collections$Array* $tmp732 = (panda$collections$Array*) malloc(40);
    $tmp732->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp732->refCount.value = 1;
    panda$collections$Array$init($tmp732);
    supertypes731 = $tmp732;
    panda$core$Object* $tmp734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp734)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp735.value);
    {
        panda$core$Object* $tmp737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp738 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp737)->children)->$class->itable;
        while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp738 = $tmp738->next;
        }
        $fn740 $tmp739 = $tmp738->methods[0];
        panda$collections$Iterator* $tmp741 = $tmp739(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp737)->children));
        s$Iter736 = $tmp741;
        $l742:;
        ITable* $tmp744 = s$Iter736->$class->itable;
        while ($tmp744->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp744 = $tmp744->next;
        }
        $fn746 $tmp745 = $tmp744->methods[0];
        panda$core$Bit $tmp747 = $tmp745(s$Iter736);
        panda$core$Bit $tmp748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp747);
        if (!$tmp748.value) goto $l743;
        {
            ITable* $tmp750 = s$Iter736->$class->itable;
            while ($tmp750->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp750 = $tmp750->next;
            }
            $fn752 $tmp751 = $tmp750->methods[1];
            panda$core$Object* $tmp753 = $tmp751(s$Iter736);
            s749 = ((org$pandalanguage$pandac$ASTNode*) $tmp753);
            org$pandalanguage$pandac$Type* $tmp754 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s749);
            panda$collections$Array$add$panda$collections$Array$T(supertypes731, ((panda$core$Object*) $tmp754));
        }
        goto $l742;
        $l743:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp756 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp756->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp756->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp758, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp756, p_source, p_intf->position, p_aliases, doccomment684, annotations692, $tmp758, fullName673, ((panda$collections$ListView*) supertypes731), parameters695, self->compiler->root);
    result755 = $tmp756;
    {
        panda$core$Object* $tmp760 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp761 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp760)->children)->$class->itable;
        while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp761 = $tmp761->next;
        }
        $fn763 $tmp762 = $tmp761->methods[0];
        panda$collections$Iterator* $tmp764 = $tmp762(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp760)->children));
        c$Iter759 = $tmp764;
        $l765:;
        ITable* $tmp767 = c$Iter759->$class->itable;
        while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp767 = $tmp767->next;
        }
        $fn769 $tmp768 = $tmp767->methods[0];
        panda$core$Bit $tmp770 = $tmp768(c$Iter759);
        panda$core$Bit $tmp771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp770);
        if (!$tmp771.value) goto $l766;
        {
            ITable* $tmp773 = c$Iter759->$class->itable;
            while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp773 = $tmp773->next;
            }
            $fn775 $tmp774 = $tmp773->methods[1];
            panda$core$Object* $tmp776 = $tmp774(c$Iter759);
            c772 = ((org$pandalanguage$pandac$ASTNode*) $tmp776);
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result755, c772);
        }
        goto $l765;
        $l766:;
    }
    return result755;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName777;
    panda$core$String* doccomment788;
    org$pandalanguage$pandac$Annotations* annotations796;
    panda$collections$Array* parameters799;
    panda$collections$Array* supertypes802;
    org$pandalanguage$pandac$ClassDecl* result806;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp809;
    org$pandalanguage$pandac$FieldDecl* rawValue810;
    panda$collections$Iterator* c$Iter818;
    org$pandalanguage$pandac$ASTNode* c831;
    org$pandalanguage$pandac$MethodDecl* defaultInit837;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp843;
    panda$core$Bit $tmp779 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s778);
    if ($tmp779.value) {
    {
        panda$core$String* $tmp780 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s781);
        panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp782, p_cl->payload);
        panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
        fullName777 = $tmp785;
    }
    }
    else {
    {
        fullName777 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp786 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp786, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp787.value);
    panda$core$Object* $tmp789 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp790 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp789)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp790.value) {
    {
        panda$core$Object* $tmp791 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp791)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp792.value);
        panda$core$Object* $tmp793 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment788 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp793)->payload);
    }
    }
    else {
    {
        doccomment788 = NULL;
    }
    }
    panda$core$Object* $tmp794 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp794)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp795.value);
    panda$core$Object* $tmp797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp798 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp797));
    annotations796 = $tmp798;
    panda$collections$Array* $tmp800 = (panda$collections$Array*) malloc(40);
    $tmp800->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp800->refCount.value = 1;
    panda$collections$Array$init($tmp800);
    parameters799 = $tmp800;
    panda$collections$Array* $tmp803 = (panda$collections$Array*) malloc(40);
    $tmp803->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp803->refCount.value = 1;
    panda$collections$Array$init($tmp803);
    supertypes802 = $tmp803;
    org$pandalanguage$pandac$Type* $tmp805 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(supertypes802, ((panda$core$Object*) $tmp805));
    org$pandalanguage$pandac$ClassDecl* $tmp807 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp807->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp807->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp809, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp807, p_source, p_cl->position, p_aliases, doccomment788, annotations796, $tmp809, fullName777, ((panda$collections$ListView*) supertypes802), parameters799, self->compiler->root);
    result806 = $tmp807;
    org$pandalanguage$pandac$FieldDecl* $tmp811 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
    $tmp811->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
    $tmp811->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp813 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp813->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp813->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init($tmp813);
    org$pandalanguage$pandac$Type* $tmp816 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp811, result806, ((org$pandalanguage$pandac$Symbol*) result806)->position, NULL, $tmp813, ((panda$core$Int64) { 10001 }), &$s815, $tmp816, NULL);
    rawValue810 = $tmp811;
    panda$collections$Array$add$panda$collections$Array$T(result806->fields, ((panda$core$Object*) rawValue810));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result806->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue810));
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result806));
    panda$core$Object* $tmp817 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp817) != NULL }).value) {
    {
        {
            panda$core$Object* $tmp819 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp820 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp819)->children)->$class->itable;
            while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp820 = $tmp820->next;
            }
            $fn822 $tmp821 = $tmp820->methods[0];
            panda$collections$Iterator* $tmp823 = $tmp821(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp819)->children));
            c$Iter818 = $tmp823;
            $l824:;
            ITable* $tmp826 = c$Iter818->$class->itable;
            while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp826 = $tmp826->next;
            }
            $fn828 $tmp827 = $tmp826->methods[0];
            panda$core$Bit $tmp829 = $tmp827(c$Iter818);
            panda$core$Bit $tmp830 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp829);
            if (!$tmp830.value) goto $l825;
            {
                ITable* $tmp832 = c$Iter818->$class->itable;
                while ($tmp832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp832 = $tmp832->next;
                }
                $fn834 $tmp833 = $tmp832->methods[1];
                panda$core$Object* $tmp835 = $tmp833(c$Iter818);
                c831 = ((org$pandalanguage$pandac$ASTNode*) $tmp835);
                panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c831->kind, ((panda$core$Int64) { 156 }));
                if ($tmp836.value) {
                {
                    org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result806, c831);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result806, c831);
                }
                }
            }
            goto $l824;
            $l825:;
        }
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp838 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp838->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp838->refCount.value = 1;
    org$pandalanguage$pandac$Annotations* $tmp840 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp840->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp840->refCount.value = 1;
    panda$core$Int64 $tmp842 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp840, $tmp842);
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp843, ((panda$core$Int64) { 2 }));
    panda$collections$Array* $tmp845 = (panda$collections$Array*) malloc(40);
    $tmp845->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp845->refCount.value = 1;
    panda$collections$Array$init($tmp845);
    org$pandalanguage$pandac$Type* $tmp847 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ASTNode* $tmp848 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp848->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp848->refCount.value = 1;
    panda$collections$Array* $tmp850 = (panda$collections$Array*) malloc(40);
    $tmp850->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp850->refCount.value = 1;
    panda$collections$Array$init($tmp850);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp848, ((panda$core$Int64) { 126 }), p_cl->position, ((panda$collections$ListView*) $tmp850));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp838, result806, p_cl->position, NULL, $tmp840, $tmp843, &$s844, $tmp845, $tmp847, $tmp848);
    defaultInit837 = $tmp838;
    panda$collections$Array$add$panda$collections$Array$T(result806->methods, ((panda$core$Object*) defaultInit837));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result806->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit837));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result806;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter852;
    org$pandalanguage$pandac$ClassDecl* inner864;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp853 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp853 = $tmp853->next;
        }
        $fn855 $tmp854 = $tmp853->methods[0];
        panda$collections$Iterator* $tmp856 = $tmp854(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter852 = $tmp856;
        $l857:;
        ITable* $tmp859 = inner$Iter852->$class->itable;
        while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp859 = $tmp859->next;
        }
        $fn861 $tmp860 = $tmp859->methods[0];
        panda$core$Bit $tmp862 = $tmp860(inner$Iter852);
        panda$core$Bit $tmp863 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp862);
        if (!$tmp863.value) goto $l858;
        {
            ITable* $tmp865 = inner$Iter852->$class->itable;
            while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp865 = $tmp865->next;
            }
            $fn867 $tmp866 = $tmp865->methods[1];
            panda$core$Object* $tmp868 = $tmp866(inner$Iter852);
            inner864 = ((org$pandalanguage$pandac$ClassDecl*) $tmp868);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner864, p_arr);
        }
        goto $l857;
        $l858:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result869;
    panda$core$String* currentPackage872;
    panda$collections$HashMap* aliases874;
    panda$collections$Iterator* c$Iter878;
    org$pandalanguage$pandac$ASTNode* c890;
    panda$core$String* fullName895;
    panda$core$String$Index$nullable idx896;
    panda$core$String* alias899;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp900;
    org$pandalanguage$pandac$ClassDecl* cl903;
    org$pandalanguage$pandac$ClassDecl* cl905;
    org$pandalanguage$pandac$ClassDecl* cl907;
    panda$collections$Array* $tmp870 = (panda$collections$Array*) malloc(40);
    $tmp870->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp870->refCount.value = 1;
    panda$collections$Array$init($tmp870);
    result869 = $tmp870;
    currentPackage872 = &$s873;
    panda$collections$HashMap* $tmp875 = (panda$collections$HashMap*) malloc(56);
    $tmp875->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp875->refCount.value = 1;
    panda$collections$HashMap$init($tmp875);
    aliases874 = $tmp875;
    panda$core$Bit $tmp877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp877.value);
    {
        ITable* $tmp879 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp879 = $tmp879->next;
        }
        $fn881 $tmp880 = $tmp879->methods[0];
        panda$collections$Iterator* $tmp882 = $tmp880(((panda$collections$Iterable*) p_file->children));
        c$Iter878 = $tmp882;
        $l883:;
        ITable* $tmp885 = c$Iter878->$class->itable;
        while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp885 = $tmp885->next;
        }
        $fn887 $tmp886 = $tmp885->methods[0];
        panda$core$Bit $tmp888 = $tmp886(c$Iter878);
        panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
        if (!$tmp889.value) goto $l884;
        {
            ITable* $tmp891 = c$Iter878->$class->itable;
            while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp891 = $tmp891->next;
            }
            $fn893 $tmp892 = $tmp891->methods[1];
            panda$core$Object* $tmp894 = $tmp892(c$Iter878);
            c890 = ((org$pandalanguage$pandac$ASTNode*) $tmp894);
            switch (c890->kind.value) {
                case 100:
                {
                    currentPackage872 = ((panda$core$String*) c890->payload);
                }
                break;
                case 101:
                {
                    fullName895 = ((panda$core$String*) c890->payload);
                    panda$core$String$Index$nullable $tmp898 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName895, &$s897);
                    idx896 = $tmp898;
                    if (((panda$core$Bit) { idx896.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp901 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName895, ((panda$core$String$Index) idx896.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp900, ((panda$core$String$Index$nullable) { $tmp901, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp902 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName895, $tmp900);
                        alias899 = $tmp902;
                    }
                    }
                    else {
                    {
                        alias899 = fullName895;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases874, ((panda$collections$Key*) alias899), ((panda$core$Object*) fullName895));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp904 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases874), currentPackage872, c890);
                    cl903 = $tmp904;
                    if (((panda$core$Bit) { cl903 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl903, result869);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp906 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases874), currentPackage872, c890);
                    cl905 = $tmp906;
                    if (((panda$core$Bit) { cl905 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl905, result869);
                    }
                    }
                }
                break;
                case 155:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp908 = org$pandalanguage$pandac$Scanner$scanChoice$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases874), currentPackage872, c890);
                    cl907 = $tmp908;
                    if (((panda$core$Bit) { cl907 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl907, result869);
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
        goto $l883;
        $l884:;
    }
    return ((panda$collections$ListView*) result869);
}

