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
#include "panda/core/MutableString.h"
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

typedef panda$collections$Iterator* (*$fn32)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn38)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn44)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn58)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn64)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn70)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn143)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn155)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn214)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn232)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn244)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn309)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn383)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn415)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn421)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn427)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn438)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn444)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn450)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn523)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn529)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn535)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn559)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn565)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn571)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn582)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn588)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn594)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn629)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn635)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn649)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn655)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn661)(panda$collections$Iterator*);

static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x69\x6D\x70\x6C\x69\x63\x69\x74", 10, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, 1 };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 1 };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 1 };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    panda$collections$Array* children8;
    panda$collections$Array* children20;
    panda$core$MutableString* name23;
    panda$core$String* separator27;
    panda$collections$Iterator* c$Iter29;
    org$pandalanguage$pandac$ASTNode* c41;
    org$pandalanguage$pandac$Type* child46;
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
            org$pandalanguage$pandac$Type* $tmp4 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp4->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp4->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 10 }), p_type->offset);
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
            org$pandalanguage$pandac$Type* $tmp13 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp13->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp13->refCount.value = 1;
            panda$core$Object* $tmp15 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children8, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp15))->name, &$s16);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp13, $tmp17, ((panda$core$Int64) { 11 }), p_type->offset, ((panda$collections$ListView*) children8), ((panda$core$Bit) { false }));
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
            panda$core$MutableString* $tmp24 = (panda$core$MutableString*) malloc(40);
            $tmp24->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp24->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp24, ((panda$core$String*) p_type->payload));
            name23 = $tmp24;
            panda$core$MutableString$append$panda$core$String(name23, &$s26);
            separator27 = &$s28;
            {
                ITable* $tmp30 = ((panda$collections$Iterable*) p_type->children)->$class->itable;
                while ($tmp30->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp30 = $tmp30->next;
                }
                $fn32 $tmp31 = $tmp30->methods[0];
                panda$collections$Iterator* $tmp33 = $tmp31(((panda$collections$Iterable*) p_type->children));
                c$Iter29 = $tmp33;
                $l34:;
                ITable* $tmp36 = c$Iter29->$class->itable;
                while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp36 = $tmp36->next;
                }
                $fn38 $tmp37 = $tmp36->methods[0];
                panda$core$Bit $tmp39 = $tmp37(c$Iter29);
                panda$core$Bit $tmp40 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp39);
                if (!$tmp40.value) goto $l35;
                {
                    ITable* $tmp42 = c$Iter29->$class->itable;
                    while ($tmp42->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp42 = $tmp42->next;
                    }
                    $fn44 $tmp43 = $tmp42->methods[1];
                    panda$core$Object* $tmp45 = $tmp43(c$Iter29);
                    c41 = ((org$pandalanguage$pandac$ASTNode*) $tmp45);
                    org$pandalanguage$pandac$Type* $tmp47 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, c41);
                    child46 = $tmp47;
                    panda$collections$Array$add$panda$collections$Array$T(children20, ((panda$core$Object*) child46));
                    panda$core$MutableString$append$panda$core$String(name23, separator27);
                    panda$core$MutableString$append$panda$core$String(name23, ((org$pandalanguage$pandac$Symbol*) child46)->name);
                    separator27 = &$s48;
                }
                goto $l34;
                $l35:;
            }
            panda$core$MutableString$append$panda$core$String(name23, &$s49);
            org$pandalanguage$pandac$Type* $tmp50 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp50->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp50->refCount.value = 1;
            panda$core$String* $tmp52 = panda$core$MutableString$convert$R$panda$core$String(name23);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp50, $tmp52, ((panda$core$Int64) { 21 }), p_type->offset, ((panda$collections$ListView*) children20), ((panda$core$Bit) { false }));
            return $tmp50;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_a) {
    panda$core$Int64 flags54;
    panda$collections$Iterator* c$Iter55;
    org$pandalanguage$pandac$ASTNode* c67;
    panda$core$String* $match$184973;
    panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp53.value);
    flags54 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp56 = ((panda$collections$Iterable*) p_a->children)->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$collections$Iterator* $tmp59 = $tmp57(((panda$collections$Iterable*) p_a->children));
        c$Iter55 = $tmp59;
        $l60:;
        ITable* $tmp62 = c$Iter55->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$core$Bit $tmp65 = $tmp63(c$Iter55);
        panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp65);
        if (!$tmp66.value) goto $l61;
        {
            ITable* $tmp68 = c$Iter55->$class->itable;
            while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp68 = $tmp68->next;
            }
            $fn70 $tmp69 = $tmp68->methods[1];
            panda$core$Object* $tmp71 = $tmp69(c$Iter55);
            c67 = ((org$pandalanguage$pandac$ASTNode*) $tmp71);
            panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(c67->kind, ((panda$core$Int64) { 143 }));
            PANDA_ASSERT($tmp72.value);
            {
                $match$184973 = ((panda$core$String*) c67->payload);
                panda$core$Bit $tmp75 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s74);
                if ($tmp75.value) {
                {
                    panda$core$Int64 $tmp76 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp77 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp76);
                    flags54 = $tmp77;
                }
                }
                else {
                panda$core$Bit $tmp79 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s78);
                if ($tmp79.value) {
                {
                    panda$core$Int64 $tmp80 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp81 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp80);
                    flags54 = $tmp81;
                }
                }
                else {
                panda$core$Bit $tmp83 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s82);
                if ($tmp83.value) {
                {
                    panda$core$Int64 $tmp84 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp85 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp84);
                    flags54 = $tmp85;
                }
                }
                else {
                panda$core$Bit $tmp87 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s86);
                if ($tmp87.value) {
                {
                    panda$core$Int64 $tmp88 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp89 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp88);
                    flags54 = $tmp89;
                }
                }
                else {
                panda$core$Bit $tmp91 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s90);
                if ($tmp91.value) {
                {
                    panda$core$Int64 $tmp92 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp93 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp92);
                    flags54 = $tmp93;
                }
                }
                else {
                panda$core$Bit $tmp95 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s94);
                if ($tmp95.value) {
                {
                    panda$core$Int64 $tmp96 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp97 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp96);
                    flags54 = $tmp97;
                }
                }
                else {
                panda$core$Bit $tmp99 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s98);
                if ($tmp99.value) {
                {
                    panda$core$Int64 $tmp100 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp101 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp100);
                    flags54 = $tmp101;
                }
                }
                else {
                panda$core$Bit $tmp103 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s102);
                if ($tmp103.value) {
                {
                    panda$core$Int64 $tmp104 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp105 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp104);
                    flags54 = $tmp105;
                }
                }
                else {
                panda$core$Bit $tmp107 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s106);
                if ($tmp107.value) {
                {
                    panda$core$Int64 $tmp108 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp109 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp108);
                    flags54 = $tmp109;
                }
                }
                else {
                panda$core$Bit $tmp111 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s110);
                if ($tmp111.value) {
                {
                    panda$core$Int64 $tmp112 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp113 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp112);
                    flags54 = $tmp113;
                }
                }
                else {
                panda$core$Bit $tmp115 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184973, &$s114);
                if ($tmp115.value) {
                {
                    panda$core$Int64 $tmp116 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                    panda$core$Int64 $tmp117 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags54, $tmp116);
                    flags54 = $tmp117;
                }
                }
                else {
                {
                    panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s118, c67->payload);
                    panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s120);
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self->compiler, c67->offset, $tmp121);
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
        goto $l60;
        $l61:;
    }
    org$pandalanguage$pandac$Annotations* $tmp122 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp122->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp122->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp122, flags54);
    return $tmp122;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment126;
    org$pandalanguage$pandac$Annotations* annotations132;
    panda$core$Int64 kind135;
    panda$collections$Iterator* decl$Iter139;
    org$pandalanguage$pandac$ASTNode* decl152;
    org$pandalanguage$pandac$ASTNode* value159;
    org$pandalanguage$pandac$Type* type165;
    org$pandalanguage$pandac$FieldDecl* field176;
    panda$core$Int64 $tmp124 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp124, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp125.value);
    panda$core$Object* $tmp127 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp128 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp127)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp128.value) {
    {
        panda$core$Object* $tmp129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp129)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp130.value);
        panda$core$Object* $tmp131 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment126 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp131)->payload);
    }
    }
    else {
    {
        doccomment126 = NULL;
    }
    }
    panda$core$Object* $tmp133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp134 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp133));
    annotations132 = $tmp134;
    panda$core$Object* $tmp136 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    switch (((org$pandalanguage$pandac$ASTNode*) $tmp136)->kind.value) {
        case 130:
        {
            kind135 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            kind135 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            kind135 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp137 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp138 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations132->flags, $tmp137);
            annotations132->flags = $tmp138;
        }
        break;
        case 133:
        {
            kind135 = ((panda$core$Int64) { 10003 });
        }
        break;
    }
    {
        panda$core$Object* $tmp140 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp141 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp140)->children)->$class->itable;
        while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp141 = $tmp141->next;
        }
        $fn143 $tmp142 = $tmp141->methods[0];
        panda$collections$Iterator* $tmp144 = $tmp142(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp140)->children));
        decl$Iter139 = $tmp144;
        $l145:;
        ITable* $tmp147 = decl$Iter139->$class->itable;
        while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp147 = $tmp147->next;
        }
        $fn149 $tmp148 = $tmp147->methods[0];
        panda$core$Bit $tmp150 = $tmp148(decl$Iter139);
        panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
        if (!$tmp151.value) goto $l146;
        {
            ITable* $tmp153 = decl$Iter139->$class->itable;
            while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp153 = $tmp153->next;
            }
            $fn155 $tmp154 = $tmp153->methods[1];
            panda$core$Object* $tmp156 = $tmp154(decl$Iter139);
            decl152 = ((org$pandalanguage$pandac$ASTNode*) $tmp156);
            panda$core$Object* $tmp157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl152->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp157)->kind, ((panda$core$Int64) { 106 }));
            PANDA_ASSERT($tmp158.value);
            panda$core$Int64 $tmp160 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl152->children);
            panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp160, ((panda$core$Int64) { 2 }));
            if ($tmp161.value) {
            {
                panda$core$Object* $tmp162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl152->children, ((panda$core$Int64) { 1 }));
                value159 = ((org$pandalanguage$pandac$ASTNode*) $tmp162);
            }
            }
            else {
            {
                panda$core$Int64 $tmp163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl152->children);
                panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp163, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp164.value);
                value159 = NULL;
            }
            }
            panda$core$Object* $tmp166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl152->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp167 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp166)->children);
            panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, ((panda$core$Int64) { 1 }));
            if ($tmp168.value) {
            {
                panda$core$Object* $tmp169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl152->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp169)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp171 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp170));
                type165 = $tmp171;
            }
            }
            else {
            {
                panda$core$Object* $tmp172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl152->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp173 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp172)->children);
                panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp174.value);
                org$pandalanguage$pandac$Type* $tmp175 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type165 = $tmp175;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp177 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
            $tmp177->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp177->refCount.value = 1;
            panda$core$Object* $tmp179 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl152->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp177, p_owner, decl152->offset, doccomment126, annotations132, kind135, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp179)->payload), type165, value159);
            field176 = $tmp177;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field176));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field176));
        }
        goto $l145;
        $l146:;
    }
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i) {
    panda$core$String* doccomment182;
    org$pandalanguage$pandac$Annotations* annotations190;
    panda$collections$Array* parameters195;
    panda$collections$Iterator* p$Iter198;
    org$pandalanguage$pandac$ASTNode* p211;
    panda$core$Int64 $tmp180 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp180, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp181.value);
    panda$core$Object* $tmp183 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp184 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp183)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp184.value) {
    {
        panda$core$Object* $tmp185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp185)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp186.value);
        panda$core$Object* $tmp187 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        doccomment182 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp187)->payload);
    }
    }
    else {
    {
        doccomment182 = NULL;
    }
    }
    panda$core$Object* $tmp188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp188)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp189.value);
    panda$core$Object* $tmp191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp192 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp191));
    annotations190 = $tmp192;
    panda$core$Object* $tmp193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp193)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp194.value);
    panda$collections$Array* $tmp196 = (panda$collections$Array*) malloc(40);
    $tmp196->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp196->refCount.value = 1;
    panda$collections$Array$init($tmp196);
    parameters195 = $tmp196;
    {
        panda$core$Object* $tmp199 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp200 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp199)->children)->$class->itable;
        while ($tmp200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp200 = $tmp200->next;
        }
        $fn202 $tmp201 = $tmp200->methods[0];
        panda$collections$Iterator* $tmp203 = $tmp201(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp199)->children));
        p$Iter198 = $tmp203;
        $l204:;
        ITable* $tmp206 = p$Iter198->$class->itable;
        while ($tmp206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp206 = $tmp206->next;
        }
        $fn208 $tmp207 = $tmp206->methods[0];
        panda$core$Bit $tmp209 = $tmp207(p$Iter198);
        panda$core$Bit $tmp210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp209);
        if (!$tmp210.value) goto $l205;
        {
            ITable* $tmp212 = p$Iter198->$class->itable;
            while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp212 = $tmp212->next;
            }
            $fn214 $tmp213 = $tmp212->methods[1];
            panda$core$Object* $tmp215 = $tmp213(p$Iter198);
            p211 = ((org$pandalanguage$pandac$ASTNode*) $tmp215);
            panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p211->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp216.value);
            panda$core$Int64 $tmp217 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p211->children);
            panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp217, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp218.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp219 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp219->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp219->refCount.value = 1;
            panda$core$Object* $tmp221 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p211->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp221));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp219, ((panda$core$String*) p211->payload), $tmp222);
            panda$collections$Array$add$panda$collections$Array$T(parameters195, ((panda$core$Object*) $tmp219));
        }
        goto $l204;
        $l205:;
    }
    org$pandalanguage$pandac$MethodDecl* $tmp223 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
    $tmp223->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp223->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp226 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp227 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp223, p_owner, p_i->offset, doccomment182, annotations190, ((panda$core$Int64) { 59 }), &$s225, parameters195, $tmp226, ((org$pandalanguage$pandac$ASTNode*) $tmp227));
    return $tmp223;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result228;
    panda$collections$Iterator* child$Iter229;
    org$pandalanguage$pandac$ASTNode* child241;
    result228 = ((panda$core$Int64) { 1 });
    {
        ITable* $tmp230 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
        while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp230 = $tmp230->next;
        }
        $fn232 $tmp231 = $tmp230->methods[0];
        panda$collections$Iterator* $tmp233 = $tmp231(((panda$collections$Iterable*) p_node->children));
        child$Iter229 = $tmp233;
        $l234:;
        ITable* $tmp236 = child$Iter229->$class->itable;
        while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp236 = $tmp236->next;
        }
        $fn238 $tmp237 = $tmp236->methods[0];
        panda$core$Bit $tmp239 = $tmp237(child$Iter229);
        panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
        if (!$tmp240.value) goto $l235;
        {
            ITable* $tmp242 = child$Iter229->$class->itable;
            while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp242 = $tmp242->next;
            }
            $fn244 $tmp243 = $tmp242->methods[1];
            panda$core$Object* $tmp245 = $tmp243(child$Iter229);
            child241 = ((org$pandalanguage$pandac$ASTNode*) $tmp245);
            panda$core$Int64 $tmp246 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, child241);
            panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result228, $tmp246);
            result228 = $tmp247;
            panda$core$Bit $tmp248 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result228, ((panda$core$Int64) { 50 }));
            if ($tmp248.value) {
            {
                goto $l235;
            }
            }
        }
        goto $l234;
        $l235:;
    }
    return result228;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    bool $tmp251 = ((panda$core$Bit) { p_body != NULL }).value;
    if (!$tmp251) goto $l252;
    panda$core$Bit $tmp253 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
    $tmp251 = $tmp254.value;
    $l252:;
    panda$core$Bit $tmp255 = { $tmp251 };
    bool $tmp250 = $tmp255.value;
    if (!$tmp250) goto $l256;
    panda$core$Bit $tmp257 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp250 = $tmp257.value;
    $l256:;
    panda$core$Bit $tmp258 = { $tmp250 };
    bool $tmp249 = $tmp258.value;
    if (!$tmp249) goto $l259;
    panda$core$Int64 $tmp260 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp261 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp260, ((panda$core$Int64) { 50 }));
    $tmp249 = $tmp261.value;
    $l259:;
    panda$core$Bit $tmp262 = { $tmp249 };
    return $tmp262;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind265;
    panda$core$String* name266;
    panda$core$String* doccomment267;
    org$pandalanguage$pandac$Annotations* annotations275;
    panda$collections$Array* parameters290;
    panda$collections$Iterator* p$Iter293;
    org$pandalanguage$pandac$ASTNode* p306;
    org$pandalanguage$pandac$Type* returnType318;
    panda$core$Int64 $tmp263 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp263, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp264.value);
    switch (p_m->kind.value) {
        case 145:
        {
            kind265 = ((panda$core$Int64) { 57 });
        }
        break;
        case 146:
        {
            kind265 = ((panda$core$Int64) { 58 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    name266 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp269 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp268)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp269.value) {
    {
        panda$core$Object* $tmp270 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp270)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp271.value);
        panda$core$Object* $tmp272 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment267 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp272)->payload);
    }
    }
    else {
    {
        doccomment267 = NULL;
    }
    }
    panda$core$Object* $tmp273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp273)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp274.value);
    panda$core$Object* $tmp276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp277 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp276));
    annotations275 = $tmp277;
    panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp278.value) {
    {
        panda$core$Int64 $tmp279 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp280 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations275->flags, $tmp279);
        annotations275->flags = $tmp280;
    }
    }
    panda$core$Bit $tmp282 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp281 = $tmp282.value;
    if ($tmp281) goto $l283;
    panda$core$Bit $tmp284 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations275);
    $tmp281 = $tmp284.value;
    $l283:;
    panda$core$Bit $tmp285 = { $tmp281 };
    if ($tmp285.value) {
    {
        panda$core$Int64 $tmp286 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp287 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations275->flags, $tmp286);
        annotations275->flags = $tmp287;
    }
    }
    panda$core$Object* $tmp288 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp288)->kind, ((panda$core$Int64) { 150 }));
    PANDA_ASSERT($tmp289.value);
    panda$collections$Array* $tmp291 = (panda$collections$Array*) malloc(40);
    $tmp291->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp291->refCount.value = 1;
    panda$collections$Array$init($tmp291);
    parameters290 = $tmp291;
    {
        panda$core$Object* $tmp294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp295 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp294)->children)->$class->itable;
        while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp295 = $tmp295->next;
        }
        $fn297 $tmp296 = $tmp295->methods[0];
        panda$collections$Iterator* $tmp298 = $tmp296(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp294)->children));
        p$Iter293 = $tmp298;
        $l299:;
        ITable* $tmp301 = p$Iter293->$class->itable;
        while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp301 = $tmp301->next;
        }
        $fn303 $tmp302 = $tmp301->methods[0];
        panda$core$Bit $tmp304 = $tmp302(p$Iter293);
        panda$core$Bit $tmp305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp304);
        if (!$tmp305.value) goto $l300;
        {
            ITable* $tmp307 = p$Iter293->$class->itable;
            while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp307 = $tmp307->next;
            }
            $fn309 $tmp308 = $tmp307->methods[1];
            panda$core$Object* $tmp310 = $tmp308(p$Iter293);
            p306 = ((org$pandalanguage$pandac$ASTNode*) $tmp310);
            panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p306->kind, ((panda$core$Int64) { 149 }));
            PANDA_ASSERT($tmp311.value);
            panda$core$Int64 $tmp312 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p306->children);
            panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp312, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp313.value);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp314 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp314->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp314->refCount.value = 1;
            panda$core$Object* $tmp316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p306->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp317 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp316));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp314, ((panda$core$String*) p306->payload), $tmp317);
            panda$collections$Array$add$panda$collections$Array$T(parameters290, ((panda$core$Object*) $tmp314));
        }
        goto $l299;
        $l300:;
    }
    panda$core$Object* $tmp319 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp320 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp319));
    returnType318 = $tmp320;
    panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind265, ((panda$core$Int64) { 58 }));
    bool $tmp321 = $tmp322.value;
    if (!$tmp321) goto $l323;
    org$pandalanguage$pandac$Type* $tmp324 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp325 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType318, $tmp324);
    $tmp321 = $tmp325.value;
    $l323:;
    panda$core$Bit $tmp326 = { $tmp321 };
    if ($tmp326.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self->compiler, p_m->offset, &$s327);
    }
    }
    panda$core$Object* $tmp328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp328)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp329.value) {
    {
        panda$core$Object* $tmp330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp331 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations275, ((org$pandalanguage$pandac$ASTNode*) $tmp330));
        if ($tmp331.value) {
        {
            panda$core$Int64 $tmp332 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp333 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations275->flags, $tmp332);
            annotations275->flags = $tmp333;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp334 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp334->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp334->refCount.value = 1;
        panda$core$Object* $tmp336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp334, p_owner, p_m->offset, doccomment267, annotations275, kind265, name266, parameters290, returnType318, ((org$pandalanguage$pandac$ASTNode*) $tmp336));
        return $tmp334;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp337 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp337->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp337->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp337, p_owner, p_m->offset, doccomment267, annotations275, kind265, name266, parameters290, returnType318, NULL);
        return $tmp337;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName339;
    panda$core$String* doccomment351;
    org$pandalanguage$pandac$Annotations* annotations359;
    panda$collections$Array* parameters362;
    panda$collections$Iterator* p$Iter367;
    org$pandalanguage$pandac$ASTNode* p380;
    org$pandalanguage$pandac$Type* bound386;
    org$pandalanguage$pandac$Type* supertype398;
    panda$collections$Array* interfaces406;
    panda$collections$Iterator* intf$Iter411;
    org$pandalanguage$pandac$ASTNode* intf424;
    org$pandalanguage$pandac$ClassDecl* result430;
    panda$core$Bit foundInit433;
    panda$collections$Iterator* c$Iter434;
    org$pandalanguage$pandac$ASTNode* c447;
    org$pandalanguage$pandac$MethodDecl* i452;
    org$pandalanguage$pandac$MethodDecl* m454;
    org$pandalanguage$pandac$ClassDecl* inner456;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp461;
    org$pandalanguage$pandac$ClassDecl* cl465;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp470;
    org$pandalanguage$pandac$MethodDecl* defaultInit480;
    panda$core$Bit $tmp341 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s340);
    if ($tmp341.value) {
    {
        panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s342, p_contextName);
        panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s344);
        panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp345, p_cl->payload);
        panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s347);
        fullName339 = $tmp348;
    }
    }
    else {
    {
        fullName339 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Int64 $tmp349 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cl->children);
    panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp349, ((panda$core$Int64) { 6 }));
    PANDA_ASSERT($tmp350.value);
    panda$core$Object* $tmp352 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp353 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp352)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp353.value) {
    {
        panda$core$Object* $tmp354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp354)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp355.value);
        panda$core$Object* $tmp356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment351 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp356)->payload);
    }
    }
    else {
    {
        doccomment351 = NULL;
    }
    }
    panda$core$Object* $tmp357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp357)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp358.value);
    panda$core$Object* $tmp360 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp361 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp360));
    annotations359 = $tmp361;
    panda$collections$Array* $tmp363 = (panda$collections$Array*) malloc(40);
    $tmp363->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp363->refCount.value = 1;
    panda$collections$Array$init($tmp363);
    parameters362 = $tmp363;
    panda$core$Object* $tmp365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp365)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp366.value) {
    {
        {
            panda$core$Object* $tmp368 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp369 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp368)->children)->$class->itable;
            while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp369 = $tmp369->next;
            }
            $fn371 $tmp370 = $tmp369->methods[0];
            panda$collections$Iterator* $tmp372 = $tmp370(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp368)->children));
            p$Iter367 = $tmp372;
            $l373:;
            ITable* $tmp375 = p$Iter367->$class->itable;
            while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp375 = $tmp375->next;
            }
            $fn377 $tmp376 = $tmp375->methods[0];
            panda$core$Bit $tmp378 = $tmp376(p$Iter367);
            panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
            if (!$tmp379.value) goto $l374;
            {
                ITable* $tmp381 = p$Iter367->$class->itable;
                while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp381 = $tmp381->next;
                }
                $fn383 $tmp382 = $tmp381->methods[1];
                panda$core$Object* $tmp384 = $tmp382(p$Iter367);
                p380 = ((org$pandalanguage$pandac$ASTNode*) $tmp384);
                panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p380->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp385.value);
                panda$core$Int64 $tmp387 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p380->children);
                panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp387, ((panda$core$Int64) { 1 }));
                if ($tmp388.value) {
                {
                    panda$core$Object* $tmp389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p380->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp390 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp389));
                    bound386 = $tmp390;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp391 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p380->children);
                    panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp391, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp392.value);
                    org$pandalanguage$pandac$Type* $tmp393 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound386 = $tmp393;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp394 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp394->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp394->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp394, p380->offset, fullName339, ((panda$core$String*) p380->payload), bound386);
                panda$collections$Array$add$panda$collections$Array$T(parameters362, ((panda$core$Object*) $tmp394));
            }
            goto $l373;
            $l374:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp396)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp397.value);
    }
    }
    panda$core$Object* $tmp399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp400 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp399)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp400.value) {
    {
        panda$core$Object* $tmp401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
        org$pandalanguage$pandac$Type* $tmp402 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp401));
        supertype398 = $tmp402;
    }
    }
    else {
    panda$core$Bit $tmp404 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(fullName339, &$s403);
    if ($tmp404.value) {
    {
        org$pandalanguage$pandac$Type* $tmp405 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        supertype398 = $tmp405;
    }
    }
    else {
    {
        supertype398 = NULL;
    }
    }
    }
    panda$collections$Array* $tmp407 = (panda$collections$Array*) malloc(40);
    $tmp407->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp407->refCount.value = 1;
    panda$collections$Array$init($tmp407);
    interfaces406 = $tmp407;
    panda$core$Object* $tmp409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp409)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp410.value);
    {
        panda$core$Object* $tmp412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp413 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp412)->children)->$class->itable;
        while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp413 = $tmp413->next;
        }
        $fn415 $tmp414 = $tmp413->methods[0];
        panda$collections$Iterator* $tmp416 = $tmp414(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp412)->children));
        intf$Iter411 = $tmp416;
        $l417:;
        ITable* $tmp419 = intf$Iter411->$class->itable;
        while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp419 = $tmp419->next;
        }
        $fn421 $tmp420 = $tmp419->methods[0];
        panda$core$Bit $tmp422 = $tmp420(intf$Iter411);
        panda$core$Bit $tmp423 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp422);
        if (!$tmp423.value) goto $l418;
        {
            ITable* $tmp425 = intf$Iter411->$class->itable;
            while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp425 = $tmp425->next;
            }
            $fn427 $tmp426 = $tmp425->methods[1];
            panda$core$Object* $tmp428 = $tmp426(intf$Iter411);
            intf424 = ((org$pandalanguage$pandac$ASTNode*) $tmp428);
            org$pandalanguage$pandac$Type* $tmp429 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf424);
            panda$collections$Array$add$panda$collections$Array$T(interfaces406, ((panda$core$Object*) $tmp429));
        }
        goto $l417;
        $l418:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp431 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp431->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp431->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp431, p_source, p_cl->offset, p_aliases, doccomment351, annotations359, ((panda$core$Int64) { 5011 }), fullName339, supertype398, interfaces406, parameters362, self->compiler->root);
    result430 = $tmp431;
    foundInit433 = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 5 }));
        ITable* $tmp436 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp435)->children)->$class->itable;
        while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp436 = $tmp436->next;
        }
        $fn438 $tmp437 = $tmp436->methods[0];
        panda$collections$Iterator* $tmp439 = $tmp437(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp435)->children));
        c$Iter434 = $tmp439;
        $l440:;
        ITable* $tmp442 = c$Iter434->$class->itable;
        while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp442 = $tmp442->next;
        }
        $fn444 $tmp443 = $tmp442->methods[0];
        panda$core$Bit $tmp445 = $tmp443(c$Iter434);
        panda$core$Bit $tmp446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp445);
        if (!$tmp446.value) goto $l441;
        {
            ITable* $tmp448 = c$Iter434->$class->itable;
            while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp448 = $tmp448->next;
            }
            $fn450 $tmp449 = $tmp448->methods[1];
            panda$core$Object* $tmp451 = $tmp449(c$Iter434);
            c447 = ((org$pandalanguage$pandac$ASTNode*) $tmp451);
            switch (c447->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result430, c447);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp453 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result430, c447);
                    i452 = $tmp453;
                    if (((panda$core$Bit) { i452 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result430->symbolTable, ((org$pandalanguage$pandac$Symbol*) i452));
                        panda$collections$Array$add$panda$collections$Array$T(result430->methods, ((panda$core$Object*) i452));
                    }
                    }
                    foundInit433 = ((panda$core$Bit) { true });
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp455 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result430, c447);
                    m454 = $tmp455;
                    if (((panda$core$Bit) { m454 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result430->symbolTable, ((org$pandalanguage$pandac$Symbol*) m454));
                        panda$collections$Array$add$panda$collections$Array$T(result430->methods, ((panda$core$Object*) m454));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp457 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName339, c447);
                    inner456 = $tmp457;
                    if (((panda$core$Bit) { inner456 != NULL }).value) {
                    {
                        inner456->owner = result430;
                        panda$collections$Array$add$panda$collections$Array$T(result430->classes, ((panda$core$Object*) inner456));
                        panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName339, &$s458);
                        panda$core$Bit $tmp460 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner456)->name, $tmp459);
                        PANDA_ASSERT($tmp460.value);
                        panda$core$Int64 $tmp462 = panda$core$String$length$R$panda$core$Int64(fullName339);
                        panda$core$Int64 $tmp463 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp462, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp461, ((panda$core$Int64$nullable) { $tmp463, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp464 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner456)->name, $tmp461);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result430->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner456), $tmp464);
                        panda$collections$Array$add$panda$collections$Array$T(inner456->symbolTable->parents, ((panda$core$Object*) result430->symbolTable));
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner456->symbolTable, ((org$pandalanguage$pandac$Symbol*) result430), ((panda$core$String*) p_cl->payload));
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp466 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName339, c447);
                    cl465 = $tmp466;
                    if (((panda$core$Bit) { cl465 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result430->classes, ((panda$core$Object*) cl465));
                        panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName339, &$s467);
                        panda$core$Bit $tmp469 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl465)->name, $tmp468);
                        PANDA_ASSERT($tmp469.value);
                        panda$core$Int64 $tmp471 = panda$core$String$length$R$panda$core$Int64(fullName339);
                        panda$core$Int64 $tmp472 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp471, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp470, ((panda$core$Int64$nullable) { $tmp472, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp473 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl465)->name, $tmp470);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result430->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl465), $tmp473);
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
        goto $l440;
        $l441:;
    }
    panda$core$Bit $tmp475 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit433);
    bool $tmp474 = $tmp475.value;
    if (!$tmp474) goto $l476;
    panda$core$Bit $tmp478 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result430)->name, &$s477);
    $tmp474 = $tmp478.value;
    $l476:;
    panda$core$Bit $tmp479 = { $tmp474 };
    if ($tmp479.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp481 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp481->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp481->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp483 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp483->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp483->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp483);
        panda$collections$Array* $tmp486 = (panda$collections$Array*) malloc(40);
        $tmp486->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp486->refCount.value = 1;
        panda$collections$Array$init($tmp486);
        org$pandalanguage$pandac$Type* $tmp488 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp489 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp489->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp489->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp489, ((panda$core$Int64) { 126 }), p_cl->offset);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp481, result430, p_cl->offset, NULL, $tmp483, ((panda$core$Int64) { 59 }), &$s485, $tmp486, $tmp488, $tmp489);
        defaultInit480 = $tmp481;
        panda$collections$Array$add$panda$collections$Array$T(result430->methods, ((panda$core$Object*) defaultInit480));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result430->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit480));
    }
    }
    return result430;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName491;
    panda$core$String* doccomment503;
    org$pandalanguage$pandac$Annotations* annotations511;
    panda$collections$Array* parameters514;
    panda$collections$Iterator* p$Iter519;
    org$pandalanguage$pandac$ASTNode* p532;
    org$pandalanguage$pandac$Type* bound538;
    panda$collections$Array* interfaces550;
    panda$collections$Iterator* s$Iter555;
    org$pandalanguage$pandac$ASTNode* s568;
    org$pandalanguage$pandac$ClassDecl* result574;
    panda$collections$Iterator* c$Iter578;
    org$pandalanguage$pandac$ASTNode* c591;
    org$pandalanguage$pandac$MethodDecl* i596;
    org$pandalanguage$pandac$MethodDecl* m598;
    org$pandalanguage$pandac$ClassDecl* cl602;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp607;
    org$pandalanguage$pandac$ClassDecl* cl611;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp616;
    panda$core$Bit $tmp493 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s492);
    if ($tmp493.value) {
    {
        panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s494, p_contextName);
        panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp495, &$s496);
        panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp497, p_intf->payload);
        panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
        fullName491 = $tmp500;
    }
    }
    else {
    {
        fullName491 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Int64 $tmp501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_intf->children);
    panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp501, ((panda$core$Int64) { 5 }));
    PANDA_ASSERT($tmp502.value);
    panda$core$Object* $tmp504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp505 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp504)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp505.value) {
    {
        panda$core$Object* $tmp506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp506)->kind, ((panda$core$Int64) { 141 }));
        PANDA_ASSERT($tmp507.value);
        panda$core$Object* $tmp508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment503 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp508)->payload);
    }
    }
    else {
    {
        doccomment503 = NULL;
    }
    }
    panda$core$Object* $tmp509 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp509)->kind, ((panda$core$Int64) { 144 }));
    PANDA_ASSERT($tmp510.value);
    panda$core$Object* $tmp512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp513 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp512));
    annotations511 = $tmp513;
    panda$collections$Array* $tmp515 = (panda$collections$Array*) malloc(40);
    $tmp515->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp515->refCount.value = 1;
    panda$collections$Array$init($tmp515);
    parameters514 = $tmp515;
    panda$core$Object* $tmp517 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp517)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp518.value) {
    {
        {
            panda$core$Object* $tmp520 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp521 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp520)->children)->$class->itable;
            while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp521 = $tmp521->next;
            }
            $fn523 $tmp522 = $tmp521->methods[0];
            panda$collections$Iterator* $tmp524 = $tmp522(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp520)->children));
            p$Iter519 = $tmp524;
            $l525:;
            ITable* $tmp527 = p$Iter519->$class->itable;
            while ($tmp527->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp527 = $tmp527->next;
            }
            $fn529 $tmp528 = $tmp527->methods[0];
            panda$core$Bit $tmp530 = $tmp528(p$Iter519);
            panda$core$Bit $tmp531 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp530);
            if (!$tmp531.value) goto $l526;
            {
                ITable* $tmp533 = p$Iter519->$class->itable;
                while ($tmp533->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp533 = $tmp533->next;
                }
                $fn535 $tmp534 = $tmp533->methods[1];
                panda$core$Object* $tmp536 = $tmp534(p$Iter519);
                p532 = ((org$pandalanguage$pandac$ASTNode*) $tmp536);
                panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p532->kind, ((panda$core$Int64) { 106 }));
                PANDA_ASSERT($tmp537.value);
                panda$core$Int64 $tmp539 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p532->children);
                panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp539, ((panda$core$Int64) { 1 }));
                if ($tmp540.value) {
                {
                    panda$core$Object* $tmp541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p532->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp542 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp541));
                    bound538 = $tmp542;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p532->children);
                    panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp543, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp544.value);
                    org$pandalanguage$pandac$Type* $tmp545 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound538 = $tmp545;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp546 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp546->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp546->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp546, p532->offset, fullName491, ((panda$core$String*) p532->payload), bound538);
                panda$collections$Array$add$panda$collections$Array$T(parameters514, ((panda$core$Object*) $tmp546));
            }
            goto $l525;
            $l526:;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp548)->kind, ((panda$core$Int64) { 138 }));
        PANDA_ASSERT($tmp549.value);
    }
    }
    panda$collections$Array* $tmp551 = (panda$collections$Array*) malloc(40);
    $tmp551->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp551->refCount.value = 1;
    panda$collections$Array$init($tmp551);
    interfaces550 = $tmp551;
    panda$core$Object* $tmp553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp553)->kind, ((panda$core$Int64) { 139 }));
    PANDA_ASSERT($tmp554.value);
    {
        panda$core$Object* $tmp556 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp557 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp556)->children)->$class->itable;
        while ($tmp557->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp557 = $tmp557->next;
        }
        $fn559 $tmp558 = $tmp557->methods[0];
        panda$collections$Iterator* $tmp560 = $tmp558(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp556)->children));
        s$Iter555 = $tmp560;
        $l561:;
        ITable* $tmp563 = s$Iter555->$class->itable;
        while ($tmp563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp563 = $tmp563->next;
        }
        $fn565 $tmp564 = $tmp563->methods[0];
        panda$core$Bit $tmp566 = $tmp564(s$Iter555);
        panda$core$Bit $tmp567 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp566);
        if (!$tmp567.value) goto $l562;
        {
            ITable* $tmp569 = s$Iter555->$class->itable;
            while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp569 = $tmp569->next;
            }
            $fn571 $tmp570 = $tmp569->methods[1];
            panda$core$Object* $tmp572 = $tmp570(s$Iter555);
            s568 = ((org$pandalanguage$pandac$ASTNode*) $tmp572);
            org$pandalanguage$pandac$Type* $tmp573 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s568);
            panda$collections$Array$add$panda$collections$Array$T(interfaces550, ((panda$core$Object*) $tmp573));
        }
        goto $l561;
        $l562:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp575 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp575->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp575->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp577 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp575, p_source, p_intf->offset, p_aliases, doccomment503, annotations511, ((panda$core$Int64) { 5012 }), fullName491, $tmp577, interfaces550, parameters514, self->compiler->root);
    result574 = $tmp575;
    {
        panda$core$Object* $tmp579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp580 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp579)->children)->$class->itable;
        while ($tmp580->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp580 = $tmp580->next;
        }
        $fn582 $tmp581 = $tmp580->methods[0];
        panda$collections$Iterator* $tmp583 = $tmp581(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp579)->children));
        c$Iter578 = $tmp583;
        $l584:;
        ITable* $tmp586 = c$Iter578->$class->itable;
        while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp586 = $tmp586->next;
        }
        $fn588 $tmp587 = $tmp586->methods[0];
        panda$core$Bit $tmp589 = $tmp587(c$Iter578);
        panda$core$Bit $tmp590 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp589);
        if (!$tmp590.value) goto $l585;
        {
            ITable* $tmp592 = c$Iter578->$class->itable;
            while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp592 = $tmp592->next;
            }
            $fn594 $tmp593 = $tmp592->methods[1];
            panda$core$Object* $tmp595 = $tmp593(c$Iter578);
            c591 = ((org$pandalanguage$pandac$ASTNode*) $tmp595);
            switch (c591->kind.value) {
                case 148:
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result574, c591);
                }
                break;
                case 147:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp597 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result574, c591);
                    i596 = $tmp597;
                    if (((panda$core$Bit) { i596 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result574->symbolTable, ((org$pandalanguage$pandac$Symbol*) i596));
                        panda$collections$Array$add$panda$collections$Array$T(result574->methods, ((panda$core$Object*) i596));
                    }
                    }
                }
                break;
                case 145:
                case 146:
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp599 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result574, c591);
                    m598 = $tmp599;
                    if (((panda$core$Bit) { m598 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m598->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp600 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp601 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m598->annotations->flags, $tmp600);
                            m598->annotations->flags = $tmp601;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result574->symbolTable, ((org$pandalanguage$pandac$Symbol*) m598));
                        panda$collections$Array$add$panda$collections$Array$T(result574->methods, ((panda$core$Object*) m598));
                    }
                    }
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp603 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName491, c591);
                    cl602 = $tmp603;
                    if (((panda$core$Bit) { cl602 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result574->classes, ((panda$core$Object*) cl602));
                        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName491, &$s604);
                        panda$core$Bit $tmp606 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl602)->name, $tmp605);
                        PANDA_ASSERT($tmp606.value);
                        panda$core$Int64 $tmp608 = panda$core$String$length$R$panda$core$Int64(fullName491);
                        panda$core$Int64 $tmp609 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp608, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp607, ((panda$core$Int64$nullable) { $tmp609, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp610 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl602)->name, $tmp607);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result574->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl602), $tmp610);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp612 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName491, c591);
                    cl611 = $tmp612;
                    if (((panda$core$Bit) { cl611 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result574->classes, ((panda$core$Object*) cl611));
                        panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(fullName491, &$s613);
                        panda$core$Bit $tmp615 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl611)->name, $tmp614);
                        PANDA_ASSERT($tmp615.value);
                        panda$core$Int64 $tmp617 = panda$core$String$length$R$panda$core$Int64(fullName491);
                        panda$core$Int64 $tmp618 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp617, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp616, ((panda$core$Int64$nullable) { $tmp618, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp619 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl611)->name, $tmp616);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result574->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl611), $tmp619);
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
        goto $l584;
        $l585:;
    }
    return result574;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter620;
    org$pandalanguage$pandac$ClassDecl* inner632;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp621 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp621 = $tmp621->next;
        }
        $fn623 $tmp622 = $tmp621->methods[0];
        panda$collections$Iterator* $tmp624 = $tmp622(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter620 = $tmp624;
        $l625:;
        ITable* $tmp627 = inner$Iter620->$class->itable;
        while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp627 = $tmp627->next;
        }
        $fn629 $tmp628 = $tmp627->methods[0];
        panda$core$Bit $tmp630 = $tmp628(inner$Iter620);
        panda$core$Bit $tmp631 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp630);
        if (!$tmp631.value) goto $l626;
        {
            ITable* $tmp633 = inner$Iter620->$class->itable;
            while ($tmp633->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp633 = $tmp633->next;
            }
            $fn635 $tmp634 = $tmp633->methods[1];
            panda$core$Object* $tmp636 = $tmp634(inner$Iter620);
            inner632 = ((org$pandalanguage$pandac$ClassDecl*) $tmp636);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner632, p_arr);
        }
        goto $l625;
        $l626:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result637;
    panda$core$String* currentPackage640;
    panda$collections$HashMap* aliases642;
    panda$collections$Iterator* c$Iter646;
    org$pandalanguage$pandac$ASTNode* c658;
    panda$core$String* fullName663;
    panda$core$String$Index$nullable idx664;
    panda$core$String* alias667;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp668;
    org$pandalanguage$pandac$ClassDecl* cl671;
    org$pandalanguage$pandac$ClassDecl* cl673;
    panda$collections$Array* $tmp638 = (panda$collections$Array*) malloc(40);
    $tmp638->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp638->refCount.value = 1;
    panda$collections$Array$init($tmp638);
    result637 = $tmp638;
    currentPackage640 = &$s641;
    panda$collections$HashMap* $tmp643 = (panda$collections$HashMap*) malloc(56);
    $tmp643->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp643->refCount.value = 1;
    panda$collections$HashMap$init($tmp643);
    aliases642 = $tmp643;
    panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_file->kind, ((panda$core$Int64) { 152 }));
    PANDA_ASSERT($tmp645.value);
    {
        ITable* $tmp647 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp647 = $tmp647->next;
        }
        $fn649 $tmp648 = $tmp647->methods[0];
        panda$collections$Iterator* $tmp650 = $tmp648(((panda$collections$Iterable*) p_file->children));
        c$Iter646 = $tmp650;
        $l651:;
        ITable* $tmp653 = c$Iter646->$class->itable;
        while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp653 = $tmp653->next;
        }
        $fn655 $tmp654 = $tmp653->methods[0];
        panda$core$Bit $tmp656 = $tmp654(c$Iter646);
        panda$core$Bit $tmp657 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp656);
        if (!$tmp657.value) goto $l652;
        {
            ITable* $tmp659 = c$Iter646->$class->itable;
            while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp659 = $tmp659->next;
            }
            $fn661 $tmp660 = $tmp659->methods[1];
            panda$core$Object* $tmp662 = $tmp660(c$Iter646);
            c658 = ((org$pandalanguage$pandac$ASTNode*) $tmp662);
            switch (c658->kind.value) {
                case 100:
                {
                    currentPackage640 = ((panda$core$String*) c658->payload);
                }
                break;
                case 101:
                {
                    fullName663 = ((panda$core$String*) c658->payload);
                    panda$core$String$Index$nullable $tmp666 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName663, &$s665);
                    idx664 = $tmp666;
                    if (((panda$core$Bit) { idx664.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp669 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName663, ((panda$core$String$Index) idx664.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp668, ((panda$core$String$Index$nullable) { $tmp669, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp670 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName663, $tmp668);
                        alias667 = $tmp670;
                    }
                    }
                    else {
                    {
                        alias667 = fullName663;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases642, ((panda$collections$Key*) alias667), ((panda$core$Object*) fullName663));
                }
                break;
                case 142:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp672 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases642), currentPackage640, c658);
                    cl671 = $tmp672;
                    if (((panda$core$Bit) { cl671 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl671, result637);
                    }
                    }
                }
                break;
                case 151:
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp674 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases642), currentPackage640, c658);
                    cl673 = $tmp674;
                    if (((panda$core$Bit) { cl673 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl673, result637);
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
        goto $l651;
        $l652:;
    }
    return ((panda$collections$ListView*) result637);
}

