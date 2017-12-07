#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray.h"
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

typedef panda$collections$Iterator* (*$fn31)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn56)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn62)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn68)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn185)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn197)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn224)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn284)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn337)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn349)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn374)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn380)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn386)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn480)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn486)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn492)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn521)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn532)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn538)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn544)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn577)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn583)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn589)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn602)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn608)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn614)(panda$collections$Iterator*);

static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x69\x6D\x70\x6C\x69\x63\x69\x74", 10, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 1 };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 1 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    panda$core$Int64 $match$2701;
    panda$collections$Array* children8;
    panda$collections$Array* children19;
    panda$core$MutableString* name22;
    panda$core$String* separator26;
    panda$collections$Iterator* c$Iter28;
    org$pandalanguage$pandac$ASTNode* c40;
    org$pandalanguage$pandac$Type* child45;
    {
        $match$2701 = p_type->kind;
        panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2701, ((panda$core$Int64) { 138 }));
        if ($tmp2.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            return $tmp3;
        }
        }
        else {
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2701, ((panda$core$Int64) { 109 }));
        if ($tmp4.value) {
        {
            org$pandalanguage$pandac$Type* $tmp5 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp5->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp5->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp5, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 10 }), p_type->offset);
            return $tmp5;
        }
        }
        else {
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2701, ((panda$core$Int64) { 110 }));
        if ($tmp7.value) {
        {
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
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2701, ((panda$core$Int64) { 154 }));
        if ($tmp18.value) {
        {
            panda$collections$Array* $tmp20 = (panda$collections$Array*) malloc(40);
            $tmp20->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp20->refCount.value = 1;
            panda$collections$Array$init($tmp20);
            children19 = $tmp20;
            panda$core$MutableString* $tmp23 = (panda$core$MutableString*) malloc(40);
            $tmp23->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp23->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp23, ((panda$core$String*) p_type->payload));
            name22 = $tmp23;
            panda$core$MutableString$append$panda$core$String(name22, &$s25);
            separator26 = &$s27;
            {
                ITable* $tmp29 = ((panda$collections$Iterable*) p_type->children)->$class->itable;
                while ($tmp29->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp29 = $tmp29->next;
                }
                $fn31 $tmp30 = $tmp29->methods[0];
                panda$collections$Iterator* $tmp32 = $tmp30(((panda$collections$Iterable*) p_type->children));
                c$Iter28 = $tmp32;
                $l33:;
                ITable* $tmp35 = c$Iter28->$class->itable;
                while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp35 = $tmp35->next;
                }
                $fn37 $tmp36 = $tmp35->methods[0];
                panda$core$Bit $tmp38 = $tmp36(c$Iter28);
                panda$core$Bit $tmp39 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp38);
                if (!$tmp39.value) goto $l34;
                {
                    ITable* $tmp41 = c$Iter28->$class->itable;
                    while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp41 = $tmp41->next;
                    }
                    $fn43 $tmp42 = $tmp41->methods[1];
                    panda$core$Object* $tmp44 = $tmp42(c$Iter28);
                    c40 = ((org$pandalanguage$pandac$ASTNode*) $tmp44);
                    org$pandalanguage$pandac$Type* $tmp46 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, c40);
                    child45 = $tmp46;
                    panda$collections$Array$add$panda$collections$Array$T(children19, ((panda$core$Object*) child45));
                    panda$core$MutableString$append$panda$core$String(name22, separator26);
                    panda$core$MutableString$append$panda$core$String(name22, ((org$pandalanguage$pandac$Symbol*) child45)->name);
                    separator26 = &$s47;
                }
                goto $l33;
                $l34:;
            }
            panda$core$MutableString$append$panda$core$String(name22, &$s48);
            org$pandalanguage$pandac$Type* $tmp49 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp49->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp49->refCount.value = 1;
            panda$core$String* $tmp51 = panda$core$MutableString$convert$R$panda$core$String(name22);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp49, $tmp51, ((panda$core$Int64) { 21 }), p_type->offset, ((panda$collections$ListView*) children19), ((panda$core$Bit) { false }));
            return $tmp49;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_a) {
    panda$core$Int64 flags52;
    panda$collections$Iterator* c$Iter53;
    org$pandalanguage$pandac$ASTNode* c65;
    panda$core$String* $match$184970;
    flags52 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp54 = ((panda$collections$Iterable*) p_a->children)->$class->itable;
        while ($tmp54->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp54 = $tmp54->next;
        }
        $fn56 $tmp55 = $tmp54->methods[0];
        panda$collections$Iterator* $tmp57 = $tmp55(((panda$collections$Iterable*) p_a->children));
        c$Iter53 = $tmp57;
        $l58:;
        ITable* $tmp60 = c$Iter53->$class->itable;
        while ($tmp60->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp60 = $tmp60->next;
        }
        $fn62 $tmp61 = $tmp60->methods[0];
        panda$core$Bit $tmp63 = $tmp61(c$Iter53);
        panda$core$Bit $tmp64 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp63);
        if (!$tmp64.value) goto $l59;
        {
            ITable* $tmp66 = c$Iter53->$class->itable;
            while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp66 = $tmp66->next;
            }
            $fn68 $tmp67 = $tmp66->methods[1];
            panda$core$Object* $tmp69 = $tmp67(c$Iter53);
            c65 = ((org$pandalanguage$pandac$ASTNode*) $tmp69);
            {
                $match$184970 = ((panda$core$String*) c65->payload);
                panda$core$Bit $tmp72 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s71);
                if ($tmp72.value) {
                {
                    panda$core$Int64 $tmp73 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp74 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp73);
                    flags52 = $tmp74;
                }
                }
                else {
                panda$core$Bit $tmp76 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s75);
                if ($tmp76.value) {
                {
                    panda$core$Int64 $tmp77 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp78 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp77);
                    flags52 = $tmp78;
                }
                }
                else {
                panda$core$Bit $tmp80 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s79);
                if ($tmp80.value) {
                {
                    panda$core$Int64 $tmp81 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp82 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp81);
                    flags52 = $tmp82;
                }
                }
                else {
                panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s83);
                if ($tmp84.value) {
                {
                    panda$core$Int64 $tmp85 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp86 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp85);
                    flags52 = $tmp86;
                }
                }
                else {
                panda$core$Bit $tmp88 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s87);
                if ($tmp88.value) {
                {
                    panda$core$Int64 $tmp89 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp90 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp89);
                    flags52 = $tmp90;
                }
                }
                else {
                panda$core$Bit $tmp92 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s91);
                if ($tmp92.value) {
                {
                    panda$core$Int64 $tmp93 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp94 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp93);
                    flags52 = $tmp94;
                }
                }
                else {
                panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s95);
                if ($tmp96.value) {
                {
                    panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp97);
                    flags52 = $tmp98;
                }
                }
                else {
                panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s99);
                if ($tmp100.value) {
                {
                    panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp101);
                    flags52 = $tmp102;
                }
                }
                else {
                panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s103);
                if ($tmp104.value) {
                {
                    panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp105);
                    flags52 = $tmp106;
                }
                }
                else {
                panda$core$Bit $tmp108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s107);
                if ($tmp108.value) {
                {
                    panda$core$Int64 $tmp109 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp110 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp109);
                    flags52 = $tmp110;
                }
                }
                else {
                panda$core$Bit $tmp112 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184970, &$s111);
                if ($tmp112.value) {
                {
                    panda$core$Int64 $tmp113 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                    panda$core$Int64 $tmp114 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags52, $tmp113);
                    flags52 = $tmp114;
                }
                }
                else {
                {
                    panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s115, c65->payload);
                    panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self->compiler, c65->offset, $tmp118);
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
        goto $l58;
        $l59:;
    }
    org$pandalanguage$pandac$Annotations* $tmp119 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp119->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp119, flags52);
    return $tmp119;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment121;
    org$pandalanguage$pandac$Annotations* annotations125;
    panda$core$Int64 kind128;
    panda$core$Int64 $match$3294129;
    panda$collections$Iterator* decl$Iter137;
    org$pandalanguage$pandac$ASTNode* decl150;
    org$pandalanguage$pandac$ASTNode* value155;
    org$pandalanguage$pandac$Type* type159;
    org$pandalanguage$pandac$FieldDecl* field167;
    panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp123 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp122)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp123.value) {
    {
        panda$core$Object* $tmp124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment121 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp124)->payload);
    }
    }
    else {
    {
        doccomment121 = NULL;
    }
    }
    panda$core$Object* $tmp126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp127 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp126));
    annotations125 = $tmp127;
    {
        panda$core$Object* $tmp130 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        $match$3294129 = ((org$pandalanguage$pandac$ASTNode*) $tmp130)->kind;
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3294129, ((panda$core$Int64) { 130 }));
        if ($tmp131.value) {
        {
            kind128 = ((panda$core$Int64) { 10000 });
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3294129, ((panda$core$Int64) { 131 }));
        if ($tmp132.value) {
        {
            kind128 = ((panda$core$Int64) { 10001 });
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3294129, ((panda$core$Int64) { 132 }));
        if ($tmp133.value) {
        {
            kind128 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp134 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp135 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations125->flags, $tmp134);
            annotations125->flags = $tmp135;
        }
        }
        else {
        panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3294129, ((panda$core$Int64) { 133 }));
        if ($tmp136.value) {
        {
            kind128 = ((panda$core$Int64) { 10003 });
        }
        }
        }
        }
        }
    }
    {
        panda$core$Object* $tmp138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp139 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp138)->children)->$class->itable;
        while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp139 = $tmp139->next;
        }
        $fn141 $tmp140 = $tmp139->methods[0];
        panda$collections$Iterator* $tmp142 = $tmp140(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp138)->children));
        decl$Iter137 = $tmp142;
        $l143:;
        ITable* $tmp145 = decl$Iter137->$class->itable;
        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp145 = $tmp145->next;
        }
        $fn147 $tmp146 = $tmp145->methods[0];
        panda$core$Bit $tmp148 = $tmp146(decl$Iter137);
        panda$core$Bit $tmp149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp148);
        if (!$tmp149.value) goto $l144;
        {
            ITable* $tmp151 = decl$Iter137->$class->itable;
            while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp151 = $tmp151->next;
            }
            $fn153 $tmp152 = $tmp151->methods[1];
            panda$core$Object* $tmp154 = $tmp152(decl$Iter137);
            decl150 = ((org$pandalanguage$pandac$ASTNode*) $tmp154);
            panda$core$Int64 $tmp156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl150->children);
            panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp156, ((panda$core$Int64) { 2 }));
            if ($tmp157.value) {
            {
                panda$core$Object* $tmp158 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl150->children, ((panda$core$Int64) { 1 }));
                value155 = ((org$pandalanguage$pandac$ASTNode*) $tmp158);
            }
            }
            else {
            {
                value155 = NULL;
            }
            }
            panda$core$Object* $tmp160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl150->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp160)->children);
            panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp161, ((panda$core$Int64) { 1 }));
            if ($tmp162.value) {
            {
                panda$core$Object* $tmp163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl150->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp163)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp165 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp164));
                type159 = $tmp165;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp166 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type159 = $tmp166;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp168 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
            $tmp168->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp168->refCount.value = 1;
            panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl150->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp168, p_owner, decl150->offset, doccomment121, annotations125, kind128, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp170)->payload), type159, value155);
            field167 = $tmp168;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field167));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field167));
        }
        goto $l143;
        $l144:;
    }
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i) {
    panda$core$String* doccomment171;
    org$pandalanguage$pandac$Annotations* annotations175;
    panda$collections$Array* parameters178;
    panda$collections$Iterator* p$Iter181;
    org$pandalanguage$pandac$ASTNode* p194;
    panda$core$Object* $tmp172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp173 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp172)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp173.value) {
    {
        panda$core$Object* $tmp174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
        doccomment171 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)->payload);
    }
    }
    else {
    {
        doccomment171 = NULL;
    }
    }
    panda$core$Object* $tmp176 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp177 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp176));
    annotations175 = $tmp177;
    panda$collections$Array* $tmp179 = (panda$collections$Array*) malloc(40);
    $tmp179->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp179->refCount.value = 1;
    panda$collections$Array$init($tmp179);
    parameters178 = $tmp179;
    {
        panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp183 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp182)->children)->$class->itable;
        while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp183 = $tmp183->next;
        }
        $fn185 $tmp184 = $tmp183->methods[0];
        panda$collections$Iterator* $tmp186 = $tmp184(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp182)->children));
        p$Iter181 = $tmp186;
        $l187:;
        ITable* $tmp189 = p$Iter181->$class->itable;
        while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp189 = $tmp189->next;
        }
        $fn191 $tmp190 = $tmp189->methods[0];
        panda$core$Bit $tmp192 = $tmp190(p$Iter181);
        panda$core$Bit $tmp193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp192);
        if (!$tmp193.value) goto $l188;
        {
            ITable* $tmp195 = p$Iter181->$class->itable;
            while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp195 = $tmp195->next;
            }
            $fn197 $tmp196 = $tmp195->methods[1];
            panda$core$Object* $tmp198 = $tmp196(p$Iter181);
            p194 = ((org$pandalanguage$pandac$ASTNode*) $tmp198);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp199 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp199->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp199->refCount.value = 1;
            panda$core$Object* $tmp201 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p194->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp201));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp199, ((panda$core$String*) p194->payload), $tmp202);
            panda$collections$Array$add$panda$collections$Array$T(parameters178, ((panda$core$Object*) $tmp199));
        }
        goto $l187;
        $l188:;
    }
    org$pandalanguage$pandac$MethodDecl* $tmp203 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
    $tmp203->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp203->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp206 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp207 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp203, p_owner, p_i->offset, doccomment171, annotations175, ((panda$core$Int64) { 59 }), &$s205, parameters178, $tmp206, ((org$pandalanguage$pandac$ASTNode*) $tmp207));
    return $tmp203;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result208;
    panda$collections$Iterator* child$Iter209;
    org$pandalanguage$pandac$ASTNode* child221;
    result208 = ((panda$core$Int64) { 1 });
    {
        ITable* $tmp210 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
        while ($tmp210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp210 = $tmp210->next;
        }
        $fn212 $tmp211 = $tmp210->methods[0];
        panda$collections$Iterator* $tmp213 = $tmp211(((panda$collections$Iterable*) p_node->children));
        child$Iter209 = $tmp213;
        $l214:;
        ITable* $tmp216 = child$Iter209->$class->itable;
        while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp216 = $tmp216->next;
        }
        $fn218 $tmp217 = $tmp216->methods[0];
        panda$core$Bit $tmp219 = $tmp217(child$Iter209);
        panda$core$Bit $tmp220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp219);
        if (!$tmp220.value) goto $l215;
        {
            ITable* $tmp222 = child$Iter209->$class->itable;
            while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp222 = $tmp222->next;
            }
            $fn224 $tmp223 = $tmp222->methods[1];
            panda$core$Object* $tmp225 = $tmp223(child$Iter209);
            child221 = ((org$pandalanguage$pandac$ASTNode*) $tmp225);
            panda$core$Int64 $tmp226 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, child221);
            panda$core$Int64 $tmp227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result208, $tmp226);
            result208 = $tmp227;
            panda$core$Bit $tmp228 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result208, ((panda$core$Int64) { 50 }));
            if ($tmp228.value) {
            {
                goto $l215;
            }
            }
        }
        goto $l214;
        $l215:;
    }
    return result208;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    bool $tmp231 = ((panda$core$Bit) { p_body != NULL }).value;
    if (!$tmp231) goto $l232;
    panda$core$Bit $tmp233 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp234 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp233);
    $tmp231 = $tmp234.value;
    $l232:;
    panda$core$Bit $tmp235 = { $tmp231 };
    bool $tmp230 = $tmp235.value;
    if (!$tmp230) goto $l236;
    panda$core$Bit $tmp237 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp230 = $tmp237.value;
    $l236:;
    panda$core$Bit $tmp238 = { $tmp230 };
    bool $tmp229 = $tmp238.value;
    if (!$tmp229) goto $l239;
    panda$core$Int64 $tmp240 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, p_body);
    panda$core$Bit $tmp241 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp240, ((panda$core$Int64) { 50 }));
    $tmp229 = $tmp241.value;
    $l239:;
    panda$core$Bit $tmp242 = { $tmp229 };
    return $tmp242;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind243;
    panda$core$Int64 $match$6261244;
    panda$core$String* name247;
    panda$core$String* doccomment248;
    org$pandalanguage$pandac$Annotations* annotations252;
    panda$collections$Array* parameters265;
    panda$collections$Iterator* p$Iter268;
    org$pandalanguage$pandac$ASTNode* p281;
    org$pandalanguage$pandac$Type* returnType290;
    {
        $match$6261244 = p_m->kind;
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6261244, ((panda$core$Int64) { 145 }));
        if ($tmp245.value) {
        {
            kind243 = ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6261244, ((panda$core$Int64) { 146 }));
        if ($tmp246.value) {
        {
            kind243 = ((panda$core$Int64) { 58 });
        }
        }
        else {
        {
        }
        }
        }
    }
    name247 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp249 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp250 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp249)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp250.value) {
    {
        panda$core$Object* $tmp251 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment248 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp251)->payload);
    }
    }
    else {
    {
        doccomment248 = NULL;
    }
    }
    panda$core$Object* $tmp253 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp254 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp253));
    annotations252 = $tmp254;
    panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp255.value) {
    {
        panda$core$Int64 $tmp256 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp257 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations252->flags, $tmp256);
        annotations252->flags = $tmp257;
    }
    }
    panda$core$Bit $tmp259 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    bool $tmp258 = $tmp259.value;
    if ($tmp258) goto $l260;
    panda$core$Bit $tmp261 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations252);
    $tmp258 = $tmp261.value;
    $l260:;
    panda$core$Bit $tmp262 = { $tmp258 };
    if ($tmp262.value) {
    {
        panda$core$Int64 $tmp263 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp264 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations252->flags, $tmp263);
        annotations252->flags = $tmp264;
    }
    }
    panda$collections$Array* $tmp266 = (panda$collections$Array*) malloc(40);
    $tmp266->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp266->refCount.value = 1;
    panda$collections$Array$init($tmp266);
    parameters265 = $tmp266;
    {
        panda$core$Object* $tmp269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp270 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp269)->children)->$class->itable;
        while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp270 = $tmp270->next;
        }
        $fn272 $tmp271 = $tmp270->methods[0];
        panda$collections$Iterator* $tmp273 = $tmp271(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp269)->children));
        p$Iter268 = $tmp273;
        $l274:;
        ITable* $tmp276 = p$Iter268->$class->itable;
        while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp276 = $tmp276->next;
        }
        $fn278 $tmp277 = $tmp276->methods[0];
        panda$core$Bit $tmp279 = $tmp277(p$Iter268);
        panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
        if (!$tmp280.value) goto $l275;
        {
            ITable* $tmp282 = p$Iter268->$class->itable;
            while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp282 = $tmp282->next;
            }
            $fn284 $tmp283 = $tmp282->methods[1];
            panda$core$Object* $tmp285 = $tmp283(p$Iter268);
            p281 = ((org$pandalanguage$pandac$ASTNode*) $tmp285);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp286 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp286->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp286->refCount.value = 1;
            panda$core$Object* $tmp288 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p281->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp289 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp288));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp286, ((panda$core$String*) p281->payload), $tmp289);
            panda$collections$Array$add$panda$collections$Array$T(parameters265, ((panda$core$Object*) $tmp286));
        }
        goto $l274;
        $l275:;
    }
    panda$core$Object* $tmp291 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp292 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp291));
    returnType290 = $tmp292;
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind243, ((panda$core$Int64) { 58 }));
    bool $tmp293 = $tmp294.value;
    if (!$tmp293) goto $l295;
    org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp297 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType290, $tmp296);
    $tmp293 = $tmp297.value;
    $l295:;
    panda$core$Bit $tmp298 = { $tmp293 };
    if ($tmp298.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self->compiler, p_m->offset, &$s299);
    }
    }
    panda$core$Object* $tmp300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp300)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp301.value) {
    {
        panda$core$Object* $tmp302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp303 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self, annotations252, ((org$pandalanguage$pandac$ASTNode*) $tmp302));
        if ($tmp303.value) {
        {
            panda$core$Int64 $tmp304 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp305 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations252->flags, $tmp304);
            annotations252->flags = $tmp305;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp306 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp306->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp306->refCount.value = 1;
        panda$core$Object* $tmp308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp306, p_owner, p_m->offset, doccomment248, annotations252, kind243, name247, parameters265, returnType290, ((org$pandalanguage$pandac$ASTNode*) $tmp308));
        return $tmp306;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp309 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp309->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp309->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp309, p_owner, p_m->offset, doccomment248, annotations252, kind243, name247, parameters265, returnType290, NULL);
        return $tmp309;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName311;
    panda$core$String* doccomment321;
    org$pandalanguage$pandac$Annotations* annotations325;
    panda$collections$Array* parameters328;
    panda$collections$Iterator* p$Iter333;
    org$pandalanguage$pandac$ASTNode* p346;
    org$pandalanguage$pandac$Type* bound351;
    org$pandalanguage$pandac$Type* supertype359;
    panda$collections$Array* interfaces367;
    panda$collections$Iterator* intf$Iter370;
    org$pandalanguage$pandac$ASTNode* intf383;
    org$pandalanguage$pandac$ClassDecl* result389;
    panda$core$Bit foundInit392;
    panda$collections$Iterator* c$Iter393;
    org$pandalanguage$pandac$ASTNode* c406;
    panda$core$Int64 $match$10503411;
    org$pandalanguage$pandac$MethodDecl* i414;
    org$pandalanguage$pandac$MethodDecl* m421;
    org$pandalanguage$pandac$ClassDecl* inner424;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp426;
    org$pandalanguage$pandac$ClassDecl* cl431;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp433;
    org$pandalanguage$pandac$MethodDecl* defaultInit443;
    panda$core$Bit $tmp313 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s312);
    if ($tmp313.value) {
    {
        panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s314, p_contextName);
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
        panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp317, p_cl->payload);
        panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s319);
        fullName311 = $tmp320;
    }
    }
    else {
    {
        fullName311 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Object* $tmp322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp323 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp322)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp323.value) {
    {
        panda$core$Object* $tmp324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment321 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp324)->payload);
    }
    }
    else {
    {
        doccomment321 = NULL;
    }
    }
    panda$core$Object* $tmp326 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp327 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp326));
    annotations325 = $tmp327;
    panda$collections$Array* $tmp329 = (panda$collections$Array*) malloc(40);
    $tmp329->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp329->refCount.value = 1;
    panda$collections$Array$init($tmp329);
    parameters328 = $tmp329;
    panda$core$Object* $tmp331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp331)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp332.value) {
    {
        {
            panda$core$Object* $tmp334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp335 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp334)->children)->$class->itable;
            while ($tmp335->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp335 = $tmp335->next;
            }
            $fn337 $tmp336 = $tmp335->methods[0];
            panda$collections$Iterator* $tmp338 = $tmp336(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp334)->children));
            p$Iter333 = $tmp338;
            $l339:;
            ITable* $tmp341 = p$Iter333->$class->itable;
            while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp341 = $tmp341->next;
            }
            $fn343 $tmp342 = $tmp341->methods[0];
            panda$core$Bit $tmp344 = $tmp342(p$Iter333);
            panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
            if (!$tmp345.value) goto $l340;
            {
                ITable* $tmp347 = p$Iter333->$class->itable;
                while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp347 = $tmp347->next;
                }
                $fn349 $tmp348 = $tmp347->methods[1];
                panda$core$Object* $tmp350 = $tmp348(p$Iter333);
                p346 = ((org$pandalanguage$pandac$ASTNode*) $tmp350);
                panda$core$Int64 $tmp352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p346->children);
                panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp352, ((panda$core$Int64) { 1 }));
                if ($tmp353.value) {
                {
                    panda$core$Object* $tmp354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p346->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp355 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp354));
                    bound351 = $tmp355;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound351 = $tmp356;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp357 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp357->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp357->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp357, p346->offset, fullName311, ((panda$core$String*) p346->payload), bound351);
                panda$collections$Array$add$panda$collections$Array$T(parameters328, ((panda$core$Object*) $tmp357));
            }
            goto $l339;
            $l340:;
        }
    }
    }
    else {
    {
    }
    }
    panda$core$Object* $tmp360 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp361 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp360)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp361.value) {
    {
        panda$core$Object* $tmp362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 3 }));
        org$pandalanguage$pandac$Type* $tmp363 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp362));
        supertype359 = $tmp363;
    }
    }
    else {
    panda$core$Bit $tmp365 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(fullName311, &$s364);
    if ($tmp365.value) {
    {
        org$pandalanguage$pandac$Type* $tmp366 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        supertype359 = $tmp366;
    }
    }
    else {
    {
        supertype359 = NULL;
    }
    }
    }
    panda$collections$Array* $tmp368 = (panda$collections$Array*) malloc(40);
    $tmp368->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp368->refCount.value = 1;
    panda$collections$Array$init($tmp368);
    interfaces367 = $tmp368;
    {
        panda$core$Object* $tmp371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp372 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp371)->children)->$class->itable;
        while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp372 = $tmp372->next;
        }
        $fn374 $tmp373 = $tmp372->methods[0];
        panda$collections$Iterator* $tmp375 = $tmp373(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp371)->children));
        intf$Iter370 = $tmp375;
        $l376:;
        ITable* $tmp378 = intf$Iter370->$class->itable;
        while ($tmp378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp378 = $tmp378->next;
        }
        $fn380 $tmp379 = $tmp378->methods[0];
        panda$core$Bit $tmp381 = $tmp379(intf$Iter370);
        panda$core$Bit $tmp382 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp381);
        if (!$tmp382.value) goto $l377;
        {
            ITable* $tmp384 = intf$Iter370->$class->itable;
            while ($tmp384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp384 = $tmp384->next;
            }
            $fn386 $tmp385 = $tmp384->methods[1];
            panda$core$Object* $tmp387 = $tmp385(intf$Iter370);
            intf383 = ((org$pandalanguage$pandac$ASTNode*) $tmp387);
            org$pandalanguage$pandac$Type* $tmp388 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, intf383);
            panda$collections$Array$add$panda$collections$Array$T(interfaces367, ((panda$core$Object*) $tmp388));
        }
        goto $l376;
        $l377:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp390 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp390->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp390->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp390, p_source, p_cl->offset, p_aliases, doccomment321, annotations325, ((panda$core$Int64) { 5011 }), fullName311, supertype359, interfaces367, parameters328, self->compiler->root);
    result389 = $tmp390;
    foundInit392 = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cl->children, ((panda$core$Int64) { 5 }));
        ITable* $tmp395 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp394)->children)->$class->itable;
        while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp395 = $tmp395->next;
        }
        $fn397 $tmp396 = $tmp395->methods[0];
        panda$collections$Iterator* $tmp398 = $tmp396(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp394)->children));
        c$Iter393 = $tmp398;
        $l399:;
        ITable* $tmp401 = c$Iter393->$class->itable;
        while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp401 = $tmp401->next;
        }
        $fn403 $tmp402 = $tmp401->methods[0];
        panda$core$Bit $tmp404 = $tmp402(c$Iter393);
        panda$core$Bit $tmp405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp404);
        if (!$tmp405.value) goto $l400;
        {
            ITable* $tmp407 = c$Iter393->$class->itable;
            while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp407 = $tmp407->next;
            }
            $fn409 $tmp408 = $tmp407->methods[1];
            panda$core$Object* $tmp410 = $tmp408(c$Iter393);
            c406 = ((org$pandalanguage$pandac$ASTNode*) $tmp410);
            {
                $match$10503411 = c406->kind;
                panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10503411, ((panda$core$Int64) { 148 }));
                if ($tmp412.value) {
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result389, c406);
                }
                }
                else {
                panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10503411, ((panda$core$Int64) { 147 }));
                if ($tmp413.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp415 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result389, c406);
                    i414 = $tmp415;
                    if (((panda$core$Bit) { i414 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result389->symbolTable, ((org$pandalanguage$pandac$Symbol*) i414));
                        panda$collections$Array$add$panda$collections$Array$T(result389->methods, ((panda$core$Object*) i414));
                    }
                    }
                    foundInit392 = ((panda$core$Bit) { true });
                }
                }
                else {
                panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10503411, ((panda$core$Int64) { 145 }));
                bool $tmp416 = $tmp417.value;
                if ($tmp416) goto $l418;
                panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10503411, ((panda$core$Int64) { 146 }));
                $tmp416 = $tmp419.value;
                $l418:;
                panda$core$Bit $tmp420 = { $tmp416 };
                if ($tmp420.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp422 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result389, c406);
                    m421 = $tmp422;
                    if (((panda$core$Bit) { m421 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result389->symbolTable, ((org$pandalanguage$pandac$Symbol*) m421));
                        panda$collections$Array$add$panda$collections$Array$T(result389->methods, ((panda$core$Object*) m421));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10503411, ((panda$core$Int64) { 142 }));
                if ($tmp423.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp425 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName311, c406);
                    inner424 = $tmp425;
                    if (((panda$core$Bit) { inner424 != NULL }).value) {
                    {
                        inner424->owner = result389;
                        panda$collections$Array$add$panda$collections$Array$T(result389->classes, ((panda$core$Object*) inner424));
                        panda$core$Int64 $tmp427 = panda$core$String$length$R$panda$core$Int64(fullName311);
                        panda$core$Int64 $tmp428 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp427, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp426, ((panda$core$Int64$nullable) { $tmp428, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp429 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner424)->name, $tmp426);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result389->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner424), $tmp429);
                        panda$collections$Array$add$panda$collections$Array$T(inner424->symbolTable->parents, ((panda$core$Object*) result389->symbolTable));
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner424->symbolTable, ((org$pandalanguage$pandac$Symbol*) result389), ((panda$core$String*) p_cl->payload));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10503411, ((panda$core$Int64) { 151 }));
                if ($tmp430.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp432 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName311, c406);
                    cl431 = $tmp432;
                    if (((panda$core$Bit) { cl431 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result389->classes, ((panda$core$Object*) cl431));
                        panda$core$Int64 $tmp434 = panda$core$String$length$R$panda$core$Int64(fullName311);
                        panda$core$Int64 $tmp435 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp434, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp433, ((panda$core$Int64$nullable) { $tmp435, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp436 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl431)->name, $tmp433);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result389->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl431), $tmp436);
                    }
                    }
                }
                }
                else {
                {
                }
                }
                }
                }
                }
                }
            }
        }
        goto $l399;
        $l400:;
    }
    panda$core$Bit $tmp438 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit392);
    bool $tmp437 = $tmp438.value;
    if (!$tmp437) goto $l439;
    panda$core$Bit $tmp441 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result389)->name, &$s440);
    $tmp437 = $tmp441.value;
    $l439:;
    panda$core$Bit $tmp442 = { $tmp437 };
    if ($tmp442.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp444 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp444->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp444->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp446 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp446->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp446->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp446);
        panda$collections$Array* $tmp449 = (panda$collections$Array*) malloc(40);
        $tmp449->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp449->refCount.value = 1;
        panda$collections$Array$init($tmp449);
        org$pandalanguage$pandac$Type* $tmp451 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp452 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp452->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp452->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp452, ((panda$core$Int64) { 126 }), p_cl->offset);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp444, result389, p_cl->offset, NULL, $tmp446, ((panda$core$Int64) { 59 }), &$s448, $tmp449, $tmp451, $tmp452);
        defaultInit443 = $tmp444;
        panda$collections$Array$add$panda$collections$Array$T(result389->methods, ((panda$core$Object*) defaultInit443));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result389->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit443));
    }
    }
    return result389;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName454;
    panda$core$String* doccomment464;
    org$pandalanguage$pandac$Annotations* annotations468;
    panda$collections$Array* parameters471;
    panda$collections$Iterator* p$Iter476;
    org$pandalanguage$pandac$ASTNode* p489;
    org$pandalanguage$pandac$Type* bound494;
    panda$collections$Array* interfaces502;
    panda$collections$Iterator* s$Iter505;
    org$pandalanguage$pandac$ASTNode* s518;
    org$pandalanguage$pandac$ClassDecl* result524;
    panda$collections$Iterator* c$Iter528;
    org$pandalanguage$pandac$ASTNode* c541;
    panda$core$Int64 $match$14651546;
    org$pandalanguage$pandac$MethodDecl* i549;
    org$pandalanguage$pandac$MethodDecl* m556;
    org$pandalanguage$pandac$ClassDecl* cl561;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp563;
    org$pandalanguage$pandac$ClassDecl* cl568;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp570;
    panda$core$Bit $tmp456 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s455);
    if ($tmp456.value) {
    {
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s457, p_contextName);
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s459);
        panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp460, p_intf->payload);
        panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s462);
        fullName454 = $tmp463;
    }
    }
    else {
    {
        fullName454 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Object* $tmp465 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp466 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp465)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp466.value) {
    {
        panda$core$Object* $tmp467 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment464 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp467)->payload);
    }
    }
    else {
    {
        doccomment464 = NULL;
    }
    }
    panda$core$Object* $tmp469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp470 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(self, ((org$pandalanguage$pandac$ASTNode*) $tmp469));
    annotations468 = $tmp470;
    panda$collections$Array* $tmp472 = (panda$collections$Array*) malloc(40);
    $tmp472->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp472->refCount.value = 1;
    panda$collections$Array$init($tmp472);
    parameters471 = $tmp472;
    panda$core$Object* $tmp474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp474)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp475.value) {
    {
        {
            panda$core$Object* $tmp477 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp478 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp477)->children)->$class->itable;
            while ($tmp478->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp478 = $tmp478->next;
            }
            $fn480 $tmp479 = $tmp478->methods[0];
            panda$collections$Iterator* $tmp481 = $tmp479(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp477)->children));
            p$Iter476 = $tmp481;
            $l482:;
            ITable* $tmp484 = p$Iter476->$class->itable;
            while ($tmp484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp484 = $tmp484->next;
            }
            $fn486 $tmp485 = $tmp484->methods[0];
            panda$core$Bit $tmp487 = $tmp485(p$Iter476);
            panda$core$Bit $tmp488 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp487);
            if (!$tmp488.value) goto $l483;
            {
                ITable* $tmp490 = p$Iter476->$class->itable;
                while ($tmp490->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp490 = $tmp490->next;
                }
                $fn492 $tmp491 = $tmp490->methods[1];
                panda$core$Object* $tmp493 = $tmp491(p$Iter476);
                p489 = ((org$pandalanguage$pandac$ASTNode*) $tmp493);
                panda$core$Int64 $tmp495 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p489->children);
                panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp495, ((panda$core$Int64) { 1 }));
                if ($tmp496.value) {
                {
                    panda$core$Object* $tmp497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p489->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp498 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$ASTNode*) $tmp497));
                    bound494 = $tmp498;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp499 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound494 = $tmp499;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp500 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp500->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp500->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp500, p489->offset, fullName454, ((panda$core$String*) p489->payload), bound494);
                panda$collections$Array$add$panda$collections$Array$T(parameters471, ((panda$core$Object*) $tmp500));
            }
            goto $l482;
            $l483:;
        }
    }
    }
    else {
    {
    }
    }
    panda$collections$Array* $tmp503 = (panda$collections$Array*) malloc(40);
    $tmp503->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp503->refCount.value = 1;
    panda$collections$Array$init($tmp503);
    interfaces502 = $tmp503;
    {
        panda$core$Object* $tmp506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp507 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp506)->children)->$class->itable;
        while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp507 = $tmp507->next;
        }
        $fn509 $tmp508 = $tmp507->methods[0];
        panda$collections$Iterator* $tmp510 = $tmp508(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp506)->children));
        s$Iter505 = $tmp510;
        $l511:;
        ITable* $tmp513 = s$Iter505->$class->itable;
        while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp513 = $tmp513->next;
        }
        $fn515 $tmp514 = $tmp513->methods[0];
        panda$core$Bit $tmp516 = $tmp514(s$Iter505);
        panda$core$Bit $tmp517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp516);
        if (!$tmp517.value) goto $l512;
        {
            ITable* $tmp519 = s$Iter505->$class->itable;
            while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp519 = $tmp519->next;
            }
            $fn521 $tmp520 = $tmp519->methods[1];
            panda$core$Object* $tmp522 = $tmp520(s$Iter505);
            s518 = ((org$pandalanguage$pandac$ASTNode*) $tmp522);
            org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s518);
            panda$collections$Array$add$panda$collections$Array$T(interfaces502, ((panda$core$Object*) $tmp523));
        }
        goto $l511;
        $l512:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp525 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp525->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp525->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp527 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp525, p_source, p_intf->offset, p_aliases, doccomment464, annotations468, ((panda$core$Int64) { 5012 }), fullName454, $tmp527, interfaces502, parameters471, self->compiler->root);
    result524 = $tmp525;
    {
        panda$core$Object* $tmp529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp530 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp529)->children)->$class->itable;
        while ($tmp530->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp530 = $tmp530->next;
        }
        $fn532 $tmp531 = $tmp530->methods[0];
        panda$collections$Iterator* $tmp533 = $tmp531(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp529)->children));
        c$Iter528 = $tmp533;
        $l534:;
        ITable* $tmp536 = c$Iter528->$class->itable;
        while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp536 = $tmp536->next;
        }
        $fn538 $tmp537 = $tmp536->methods[0];
        panda$core$Bit $tmp539 = $tmp537(c$Iter528);
        panda$core$Bit $tmp540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp539);
        if (!$tmp540.value) goto $l535;
        {
            ITable* $tmp542 = c$Iter528->$class->itable;
            while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp542 = $tmp542->next;
            }
            $fn544 $tmp543 = $tmp542->methods[1];
            panda$core$Object* $tmp545 = $tmp543(c$Iter528);
            c541 = ((org$pandalanguage$pandac$ASTNode*) $tmp545);
            {
                $match$14651546 = c541->kind;
                panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14651546, ((panda$core$Int64) { 148 }));
                if ($tmp547.value) {
                {
                    org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result524, c541);
                }
                }
                else {
                panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14651546, ((panda$core$Int64) { 147 }));
                if ($tmp548.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp550 = org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result524, c541);
                    i549 = $tmp550;
                    if (((panda$core$Bit) { i549 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result524->symbolTable, ((org$pandalanguage$pandac$Symbol*) i549));
                        panda$collections$Array$add$panda$collections$Array$T(result524->methods, ((panda$core$Object*) i549));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14651546, ((panda$core$Int64) { 145 }));
                bool $tmp551 = $tmp552.value;
                if ($tmp551) goto $l553;
                panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14651546, ((panda$core$Int64) { 146 }));
                $tmp551 = $tmp554.value;
                $l553:;
                panda$core$Bit $tmp555 = { $tmp551 };
                if ($tmp555.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp557 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(self, result524, c541);
                    m556 = $tmp557;
                    if (((panda$core$Bit) { m556 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m556->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp558 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp559 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m556->annotations->flags, $tmp558);
                            m556->annotations->flags = $tmp559;
                        }
                        }
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result524->symbolTable, ((org$pandalanguage$pandac$Symbol*) m556));
                        panda$collections$Array$add$panda$collections$Array$T(result524->methods, ((panda$core$Object*) m556));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14651546, ((panda$core$Int64) { 142 }));
                if ($tmp560.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp562 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName454, c541);
                    cl561 = $tmp562;
                    if (((panda$core$Bit) { cl561 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result524->classes, ((panda$core$Object*) cl561));
                        panda$core$Int64 $tmp564 = panda$core$String$length$R$panda$core$Int64(fullName454);
                        panda$core$Int64 $tmp565 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp564, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp563, ((panda$core$Int64$nullable) { $tmp565, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp566 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl561)->name, $tmp563);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result524->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl561), $tmp566);
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14651546, ((panda$core$Int64) { 151 }));
                if ($tmp567.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp569 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, p_aliases, fullName454, c541);
                    cl568 = $tmp569;
                    if (((panda$core$Bit) { cl568 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result524->classes, ((panda$core$Object*) cl568));
                        panda$core$Int64 $tmp571 = panda$core$String$length$R$panda$core$Int64(fullName454);
                        panda$core$Int64 $tmp572 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp571, ((panda$core$Int64) { 1 }));
                        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp570, ((panda$core$Int64$nullable) { $tmp572, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp573 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl568)->name, $tmp570);
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(result524->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl568), $tmp573);
                    }
                    }
                }
                }
                else {
                {
                }
                }
                }
                }
                }
                }
            }
        }
        goto $l534;
        $l535:;
    }
    return result524;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter574;
    org$pandalanguage$pandac$ClassDecl* inner586;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp575 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp575 = $tmp575->next;
        }
        $fn577 $tmp576 = $tmp575->methods[0];
        panda$collections$Iterator* $tmp578 = $tmp576(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter574 = $tmp578;
        $l579:;
        ITable* $tmp581 = inner$Iter574->$class->itable;
        while ($tmp581->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp581 = $tmp581->next;
        }
        $fn583 $tmp582 = $tmp581->methods[0];
        panda$core$Bit $tmp584 = $tmp582(inner$Iter574);
        panda$core$Bit $tmp585 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp584);
        if (!$tmp585.value) goto $l580;
        {
            ITable* $tmp587 = inner$Iter574->$class->itable;
            while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp587 = $tmp587->next;
            }
            $fn589 $tmp588 = $tmp587->methods[1];
            panda$core$Object* $tmp590 = $tmp588(inner$Iter574);
            inner586 = ((org$pandalanguage$pandac$ClassDecl*) $tmp590);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner586, p_arr);
        }
        goto $l579;
        $l580:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result591;
    panda$core$String* currentPackage594;
    panda$collections$HashMap* aliases596;
    panda$collections$Iterator* c$Iter599;
    org$pandalanguage$pandac$ASTNode* c611;
    panda$core$Int64 $match$16749616;
    panda$core$String* fullName619;
    panda$core$String$Index$nullable idx620;
    panda$core$String* alias623;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp624;
    org$pandalanguage$pandac$ClassDecl* cl628;
    org$pandalanguage$pandac$ClassDecl* cl631;
    panda$collections$Array* $tmp592 = (panda$collections$Array*) malloc(40);
    $tmp592->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp592->refCount.value = 1;
    panda$collections$Array$init($tmp592);
    result591 = $tmp592;
    currentPackage594 = &$s595;
    panda$collections$HashMap* $tmp597 = (panda$collections$HashMap*) malloc(56);
    $tmp597->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp597->refCount.value = 1;
    panda$collections$HashMap$init($tmp597);
    aliases596 = $tmp597;
    {
        ITable* $tmp600 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp600->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp600 = $tmp600->next;
        }
        $fn602 $tmp601 = $tmp600->methods[0];
        panda$collections$Iterator* $tmp603 = $tmp601(((panda$collections$Iterable*) p_file->children));
        c$Iter599 = $tmp603;
        $l604:;
        ITable* $tmp606 = c$Iter599->$class->itable;
        while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp606 = $tmp606->next;
        }
        $fn608 $tmp607 = $tmp606->methods[0];
        panda$core$Bit $tmp609 = $tmp607(c$Iter599);
        panda$core$Bit $tmp610 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp609);
        if (!$tmp610.value) goto $l605;
        {
            ITable* $tmp612 = c$Iter599->$class->itable;
            while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp612 = $tmp612->next;
            }
            $fn614 $tmp613 = $tmp612->methods[1];
            panda$core$Object* $tmp615 = $tmp613(c$Iter599);
            c611 = ((org$pandalanguage$pandac$ASTNode*) $tmp615);
            {
                $match$16749616 = c611->kind;
                panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16749616, ((panda$core$Int64) { 100 }));
                if ($tmp617.value) {
                {
                    currentPackage594 = ((panda$core$String*) c611->payload);
                }
                }
                else {
                panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16749616, ((panda$core$Int64) { 101 }));
                if ($tmp618.value) {
                {
                    fullName619 = ((panda$core$String*) c611->payload);
                    panda$core$String$Index$nullable $tmp622 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName619, &$s621);
                    idx620 = $tmp622;
                    if (((panda$core$Bit) { idx620.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp625 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName619, ((panda$core$String$Index) idx620.value));
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp624, ((panda$core$String$Index$nullable) { $tmp625, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp626 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName619, $tmp624);
                        alias623 = $tmp626;
                    }
                    }
                    else {
                    {
                        alias623 = fullName619;
                    }
                    }
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases596, ((panda$collections$Key*) alias623), ((panda$core$Object*) fullName619));
                }
                }
                else {
                panda$core$Bit $tmp627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16749616, ((panda$core$Int64) { 142 }));
                if ($tmp627.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp629 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases596), currentPackage594, c611);
                    cl628 = $tmp629;
                    if (((panda$core$Bit) { cl628 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl628, result591);
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16749616, ((panda$core$Int64) { 151 }));
                if ($tmp630.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp632 = org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases596), currentPackage594, c611);
                    cl631 = $tmp632;
                    if (((panda$core$Bit) { cl631 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl631, result591);
                    }
                    }
                }
                }
                else {
                {
                }
                }
                }
                }
                }
            }
        }
        goto $l604;
        $l605:;
    }
    return ((panda$collections$ListView*) result591);
}

