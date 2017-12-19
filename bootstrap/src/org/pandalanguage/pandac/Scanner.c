#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn42)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn48)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn54)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn67)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn170)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn182)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn256)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn279)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn285)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn334)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn368)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn404)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn410)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn440)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn458)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn464)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn470)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn477)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn483)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn489)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn527)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn539)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn554)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn560)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn566)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn573)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn579)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn585)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn615)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn633)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn639)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn645)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn676)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn682)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn688)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn807)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn813)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn819)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn830)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn836)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn842)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn973)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn979)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn985)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1006)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1018)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1030)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1056)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1062)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1068)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1111)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1191)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1197)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1203)(panda$collections$Iterator*);

static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$18_91;
    org$pandalanguage$pandac$Position position3;
    panda$core$String* name5;
    org$pandalanguage$pandac$Position position10;
    org$pandalanguage$pandac$ASTNode* base12;
    panda$collections$Array* subtypes14;
    org$pandalanguage$pandac$Position position24;
    panda$core$String* base26;
    panda$collections$ImmutableArray* args28;
    panda$collections$Array* subtypes30;
    panda$core$MutableString* name33;
    panda$core$Char8 $tmp36;
    panda$core$String* separator37;
    panda$collections$Iterator* arg$Iter39;
    org$pandalanguage$pandac$ASTNode* arg51;
    org$pandalanguage$pandac$Type* subtype56;
    panda$core$Char8 $tmp59;
    {
        $match$18_91 = p_type;
        panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_91->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_91->$data + 0));
            position3 = *$tmp4;
            panda$core$String** $tmp6 = ((panda$core$String**) ((char*) $match$18_91->$data + 16));
            name5 = *$tmp6;
            org$pandalanguage$pandac$Type* $tmp7 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp7->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp7->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp7, name5, ((panda$core$Int64) { 10 }), position3);
            return $tmp7;
        }
        }
        else {
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_91->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp9.value) {
        {
            org$pandalanguage$pandac$Position* $tmp11 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_91->$data + 0));
            position10 = *$tmp11;
            org$pandalanguage$pandac$ASTNode** $tmp13 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$18_91->$data + 16));
            base12 = *$tmp13;
            panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
            $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp15->refCount.value = 1;
            panda$collections$Array$init($tmp15);
            subtypes14 = $tmp15;
            org$pandalanguage$pandac$Type* $tmp17 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base12);
            panda$collections$Array$add$panda$collections$Array$T(subtypes14, ((panda$core$Object*) $tmp17));
            org$pandalanguage$pandac$Type* $tmp18 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp18->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp18->refCount.value = 1;
            panda$core$Object* $tmp20 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes14, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp20))->name, &$s21);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp18, $tmp22, ((panda$core$Int64) { 11 }), position10, ((panda$collections$ListView*) subtypes14), ((panda$core$Bit) { false }));
            return $tmp18;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_91->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_91->$data + 0));
            position24 = *$tmp25;
            panda$core$String** $tmp27 = ((panda$core$String**) ((char*) $match$18_91->$data + 16));
            base26 = *$tmp27;
            panda$collections$ImmutableArray** $tmp29 = ((panda$collections$ImmutableArray**) ((char*) $match$18_91->$data + 24));
            args28 = *$tmp29;
            panda$collections$Array* $tmp31 = (panda$collections$Array*) malloc(40);
            $tmp31->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp31->refCount.value = 1;
            panda$collections$Array$init($tmp31);
            subtypes30 = $tmp31;
            panda$core$MutableString* $tmp34 = (panda$core$MutableString*) malloc(48);
            $tmp34->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp34->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp34, base26);
            name33 = $tmp34;
            panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name33, $tmp36);
            separator37 = &$s38;
            {
                ITable* $tmp40 = ((panda$collections$Iterable*) args28)->$class->itable;
                while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp40 = $tmp40->next;
                }
                $fn42 $tmp41 = $tmp40->methods[0];
                panda$collections$Iterator* $tmp43 = $tmp41(((panda$collections$Iterable*) args28));
                arg$Iter39 = $tmp43;
                $l44:;
                ITable* $tmp46 = arg$Iter39->$class->itable;
                while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp46 = $tmp46->next;
                }
                $fn48 $tmp47 = $tmp46->methods[0];
                panda$core$Bit $tmp49 = $tmp47(arg$Iter39);
                panda$core$Bit $tmp50 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp49);
                if (!$tmp50.value) goto $l45;
                {
                    ITable* $tmp52 = arg$Iter39->$class->itable;
                    while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp52 = $tmp52->next;
                    }
                    $fn54 $tmp53 = $tmp52->methods[1];
                    panda$core$Object* $tmp55 = $tmp53(arg$Iter39);
                    arg51 = ((org$pandalanguage$pandac$ASTNode*) $tmp55);
                    org$pandalanguage$pandac$Type* $tmp57 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg51);
                    subtype56 = $tmp57;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes30, ((panda$core$Object*) subtype56));
                    panda$core$MutableString$append$panda$core$String(name33, separator37);
                    panda$core$MutableString$append$panda$core$String(name33, ((org$pandalanguage$pandac$Symbol*) subtype56)->name);
                    separator37 = &$s58;
                }
                goto $l44;
                $l45:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp59, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name33, $tmp59);
            org$pandalanguage$pandac$Type* $tmp60 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp60->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp60->refCount.value = 1;
            panda$core$String* $tmp62 = panda$core$MutableString$finish$R$panda$core$String(name33);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp60, $tmp62, ((panda$core$Int64) { 21 }), position24, ((panda$collections$ListView*) subtypes30), ((panda$core$Bit) { false }));
            return $tmp60;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags63;
    panda$collections$Iterator* c$Iter64;
    org$pandalanguage$pandac$ASTNode* c76;
    org$pandalanguage$pandac$ASTNode* $match$47_1381;
    org$pandalanguage$pandac$Position position83;
    panda$core$String* text85;
    panda$core$String* $match$49_2187;
    flags63 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp65 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp65 = $tmp65->next;
        }
        $fn67 $tmp66 = $tmp65->methods[0];
        panda$collections$Iterator* $tmp68 = $tmp66(((panda$collections$Iterable*) p_a));
        c$Iter64 = $tmp68;
        $l69:;
        ITable* $tmp71 = c$Iter64->$class->itable;
        while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp71 = $tmp71->next;
        }
        $fn73 $tmp72 = $tmp71->methods[0];
        panda$core$Bit $tmp74 = $tmp72(c$Iter64);
        panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
        if (!$tmp75.value) goto $l70;
        {
            ITable* $tmp77 = c$Iter64->$class->itable;
            while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp77 = $tmp77->next;
            }
            $fn79 $tmp78 = $tmp77->methods[1];
            panda$core$Object* $tmp80 = $tmp78(c$Iter64);
            c76 = ((org$pandalanguage$pandac$ASTNode*) $tmp80);
            {
                $match$47_1381 = c76;
                panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_1381->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp82.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp84 = ((org$pandalanguage$pandac$Position*) ((char*) $match$47_1381->$data + 0));
                    position83 = *$tmp84;
                    panda$core$String** $tmp86 = ((panda$core$String**) ((char*) $match$47_1381->$data + 16));
                    text85 = *$tmp86;
                    {
                        $match$49_2187 = text85;
                        panda$core$Bit $tmp89 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s88);
                        if ($tmp89.value) {
                        {
                            panda$core$Int64 $tmp90 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp91 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp90);
                            flags63 = $tmp91;
                        }
                        }
                        else {
                        panda$core$Bit $tmp93 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s92);
                        if ($tmp93.value) {
                        {
                            panda$core$Int64 $tmp94 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp95 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp94);
                            flags63 = $tmp95;
                        }
                        }
                        else {
                        panda$core$Bit $tmp97 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s96);
                        if ($tmp97.value) {
                        {
                            panda$core$Int64 $tmp98 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp99 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp98);
                            flags63 = $tmp99;
                        }
                        }
                        else {
                        panda$core$Bit $tmp101 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s100);
                        if ($tmp101.value) {
                        {
                            panda$core$Int64 $tmp102 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp103 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp102);
                            flags63 = $tmp103;
                        }
                        }
                        else {
                        panda$core$Bit $tmp105 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s104);
                        if ($tmp105.value) {
                        {
                            panda$core$Int64 $tmp106 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp107 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp106);
                            flags63 = $tmp107;
                        }
                        }
                        else {
                        panda$core$Bit $tmp109 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s108);
                        if ($tmp109.value) {
                        {
                            panda$core$Int64 $tmp110 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp111 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp110);
                            flags63 = $tmp111;
                        }
                        }
                        else {
                        panda$core$Bit $tmp113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s112);
                        if ($tmp113.value) {
                        {
                            panda$core$Int64 $tmp114 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp115 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp114);
                            flags63 = $tmp115;
                        }
                        }
                        else {
                        panda$core$Bit $tmp117 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s116);
                        if ($tmp117.value) {
                        {
                            panda$core$Int64 $tmp118 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp119 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp118);
                            flags63 = $tmp119;
                        }
                        }
                        else {
                        panda$core$Bit $tmp121 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s120);
                        if ($tmp121.value) {
                        {
                            panda$core$Int64 $tmp122 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp123 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp122);
                            flags63 = $tmp123;
                        }
                        }
                        else {
                        panda$core$Bit $tmp125 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s124);
                        if ($tmp125.value) {
                        {
                            panda$core$Int64 $tmp126 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp127 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp126);
                            flags63 = $tmp127;
                        }
                        }
                        else {
                        panda$core$Bit $tmp129 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s128);
                        if ($tmp129.value) {
                        {
                            panda$core$Int64 $tmp130 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp131 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp130);
                            flags63 = $tmp131;
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, text85);
                            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, position83, $tmp135);
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
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l69;
        $l70:;
    }
    org$pandalanguage$pandac$Annotations* $tmp136 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp136->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp136->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp136, flags63);
    return $tmp136;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment138;
    org$pandalanguage$pandac$ASTNode* $match$79_13139;
    org$pandalanguage$pandac$Position position141;
    panda$core$String* text143;
    org$pandalanguage$pandac$Annotations* annotations145;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind147;
    org$pandalanguage$pandac$ASTNode* $match$88_9148;
    org$pandalanguage$pandac$Position _150;
    org$pandalanguage$pandac$Variable$Kind kind152;
    panda$collections$ImmutableArray* decls154;
    org$pandalanguage$pandac$Variable$Kind $match$90_17156;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp158;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp160;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp162;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp166;
    panda$collections$Iterator* decl$Iter167;
    org$pandalanguage$pandac$ASTNode* decl179;
    org$pandalanguage$pandac$ASTNode* $match$102_21184;
    org$pandalanguage$pandac$Position declPosition186;
    org$pandalanguage$pandac$ASTNode* target188;
    org$pandalanguage$pandac$ASTNode* value190;
    panda$core$String* name192;
    org$pandalanguage$pandac$Type* type193;
    org$pandalanguage$pandac$ASTNode* $match$106_29194;
    org$pandalanguage$pandac$Position _196;
    panda$core$String* id198;
    org$pandalanguage$pandac$Position _202;
    panda$core$String* id204;
    org$pandalanguage$pandac$ASTNode* idType206;
    org$pandalanguage$pandac$FieldDecl* field209;
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment138 = NULL;
    }
    }
    else {
    {
        {
            $match$79_13139 = p_rawDoccomment;
            panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13139->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp140.value) {
            {
                org$pandalanguage$pandac$Position* $tmp142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13139->$data + 0));
                position141 = *$tmp142;
                panda$core$String** $tmp144 = ((panda$core$String**) ((char*) $match$79_13139->$data + 16));
                text143 = *$tmp144;
                doccomment138 = text143;
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Annotations* $tmp146 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations145 = $tmp146;
    {
        $match$88_9148 = p_varDecl;
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9148->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$88_9148->$data + 0));
            _150 = *$tmp151;
            org$pandalanguage$pandac$Variable$Kind* $tmp153 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$88_9148->$data + 16));
            kind152 = *$tmp153;
            panda$collections$ImmutableArray** $tmp155 = ((panda$collections$ImmutableArray**) ((char*) $match$88_9148->$data + 24));
            decls154 = *$tmp155;
            {
                $match$90_17156 = kind152;
                panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17156.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp157.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp158, ((panda$core$Int64) { 0 }));
                    fieldKind147 = $tmp158;
                }
                }
                else {
                panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17156.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp159.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp160, ((panda$core$Int64) { 1 }));
                    fieldKind147 = $tmp160;
                }
                }
                else {
                panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17156.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp161.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp162, ((panda$core$Int64) { 2 }));
                    fieldKind147 = $tmp162;
                    panda$core$Int64 $tmp163 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp164 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations145->flags, $tmp163);
                    annotations145->flags = $tmp164;
                }
                }
                else {
                panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17156.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp165.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp166, ((panda$core$Int64) { 3 }));
                    fieldKind147 = $tmp166;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp168 = ((panda$collections$Iterable*) decls154)->$class->itable;
                while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp168 = $tmp168->next;
                }
                $fn170 $tmp169 = $tmp168->methods[0];
                panda$collections$Iterator* $tmp171 = $tmp169(((panda$collections$Iterable*) decls154));
                decl$Iter167 = $tmp171;
                $l172:;
                ITable* $tmp174 = decl$Iter167->$class->itable;
                while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp174 = $tmp174->next;
                }
                $fn176 $tmp175 = $tmp174->methods[0];
                panda$core$Bit $tmp177 = $tmp175(decl$Iter167);
                panda$core$Bit $tmp178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp177);
                if (!$tmp178.value) goto $l173;
                {
                    ITable* $tmp180 = decl$Iter167->$class->itable;
                    while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp180 = $tmp180->next;
                    }
                    $fn182 $tmp181 = $tmp180->methods[1];
                    panda$core$Object* $tmp183 = $tmp181(decl$Iter167);
                    decl179 = ((org$pandalanguage$pandac$ASTNode*) $tmp183);
                    {
                        $match$102_21184 = decl179;
                        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_21184->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp185.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp187 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_21184->$data + 0));
                            declPosition186 = *$tmp187;
                            org$pandalanguage$pandac$ASTNode** $tmp189 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21184->$data + 16));
                            target188 = *$tmp189;
                            org$pandalanguage$pandac$ASTNode** $tmp191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21184->$data + 24));
                            value190 = *$tmp191;
                            {
                                $match$106_29194 = target188;
                                panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29194->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp195.value) {
                                {
                                    org$pandalanguage$pandac$Position* $tmp197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$106_29194->$data + 0));
                                    _196 = *$tmp197;
                                    panda$core$String** $tmp199 = ((panda$core$String**) ((char*) $match$106_29194->$data + 16));
                                    id198 = *$tmp199;
                                    name192 = id198;
                                    org$pandalanguage$pandac$Type* $tmp200 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                    type193 = $tmp200;
                                }
                                }
                                else {
                                panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29194->$rawValue, ((panda$core$Int64) { 36 }));
                                if ($tmp201.value) {
                                {
                                    org$pandalanguage$pandac$Position* $tmp203 = ((org$pandalanguage$pandac$Position*) ((char*) $match$106_29194->$data + 0));
                                    _202 = *$tmp203;
                                    panda$core$String** $tmp205 = ((panda$core$String**) ((char*) $match$106_29194->$data + 16));
                                    id204 = *$tmp205;
                                    org$pandalanguage$pandac$ASTNode** $tmp207 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29194->$data + 24));
                                    idType206 = *$tmp207;
                                    name192 = id204;
                                    org$pandalanguage$pandac$Type* $tmp208 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType206);
                                    type193 = $tmp208;
                                }
                                }
                                else {
                                {
                                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                }
                                }
                                }
                            }
                            org$pandalanguage$pandac$FieldDecl* $tmp210 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                            $tmp210->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                            $tmp210->refCount.value = 1;
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp210, p_owner, declPosition186, doccomment138, annotations145, fieldKind147, name192, type193, value190);
                            field209 = $tmp210;
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field209));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field209));
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                }
                goto $l172;
                $l173:;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$131_9212;
    org$pandalanguage$pandac$Position _214;
    org$pandalanguage$pandac$ASTNode* test216;
    org$pandalanguage$pandac$ASTNode* msg218;
    org$pandalanguage$pandac$Position _222;
    org$pandalanguage$pandac$ASTNode* left224;
    org$pandalanguage$pandac$parser$Token$Kind op226;
    org$pandalanguage$pandac$ASTNode* right228;
    org$pandalanguage$pandac$Position _236;
    panda$collections$ImmutableArray* statements238;
    panda$core$Int64 result240;
    panda$collections$Iterator* s$Iter241;
    org$pandalanguage$pandac$ASTNode* s253;
    org$pandalanguage$pandac$Position _262;
    org$pandalanguage$pandac$ASTNode* target264;
    panda$collections$ImmutableArray* args266;
    panda$core$Int64 result268;
    panda$collections$Iterator* a$Iter270;
    org$pandalanguage$pandac$ASTNode* a282;
    org$pandalanguage$pandac$Position _290;
    org$pandalanguage$pandac$ASTNode* base292;
    org$pandalanguage$pandac$ChoiceEntry* ce294;
    panda$core$Int64 f296;
    org$pandalanguage$pandac$Position _301;
    org$pandalanguage$pandac$ASTNode* target303;
    org$pandalanguage$pandac$ASTNode* value305;
    org$pandalanguage$pandac$Position _309;
    panda$core$String* label311;
    panda$collections$ImmutableArray* statements313;
    org$pandalanguage$pandac$ASTNode* test315;
    panda$core$Int64 result317;
    panda$collections$Iterator* s$Iter319;
    org$pandalanguage$pandac$ASTNode* s331;
    org$pandalanguage$pandac$Position _339;
    org$pandalanguage$pandac$ASTNode* base341;
    panda$core$String* field343;
    org$pandalanguage$pandac$Position _347;
    panda$core$String* label349;
    org$pandalanguage$pandac$ASTNode* target351;
    org$pandalanguage$pandac$ASTNode* list353;
    panda$collections$ImmutableArray* statements355;
    panda$core$Int64 result357;
    panda$collections$Iterator* s$Iter359;
    org$pandalanguage$pandac$ASTNode* s371;
    org$pandalanguage$pandac$Position _380;
    panda$core$String* text382;
    org$pandalanguage$pandac$Position _385;
    org$pandalanguage$pandac$ASTNode* test387;
    panda$collections$ImmutableArray* ifTrue389;
    org$pandalanguage$pandac$ASTNode* ifFalse391;
    panda$core$Int64 result393;
    panda$collections$Iterator* s$Iter395;
    org$pandalanguage$pandac$ASTNode* s407;
    org$pandalanguage$pandac$Position _418;
    panda$core$String* label420;
    panda$collections$ImmutableArray* statements422;
    panda$core$Int64 result424;
    panda$collections$Iterator* s$Iter425;
    org$pandalanguage$pandac$ASTNode* s437;
    org$pandalanguage$pandac$Position _445;
    org$pandalanguage$pandac$ASTNode* value447;
    panda$collections$ImmutableArray* whens449;
    panda$collections$ImmutableArray* other451;
    panda$core$Int64 result453;
    panda$collections$Iterator* w$Iter455;
    org$pandalanguage$pandac$ASTNode* w467;
    panda$collections$Iterator* s$Iter474;
    org$pandalanguage$pandac$ASTNode* s486;
    org$pandalanguage$pandac$Position _496;
    org$pandalanguage$pandac$parser$Token$Kind op498;
    org$pandalanguage$pandac$ASTNode* base500;
    org$pandalanguage$pandac$Position _507;
    org$pandalanguage$pandac$ASTNode* value509;
    org$pandalanguage$pandac$Position _517;
    org$pandalanguage$pandac$Variable$Kind kind519;
    panda$collections$ImmutableArray* decls521;
    panda$core$Int64 result523;
    panda$collections$Iterator* decl$Iter524;
    org$pandalanguage$pandac$ASTNode* decl536;
    org$pandalanguage$pandac$Position _544;
    panda$collections$ImmutableArray* tests546;
    panda$collections$ImmutableArray* statements548;
    panda$core$Int64 result550;
    panda$collections$Iterator* test$Iter551;
    org$pandalanguage$pandac$ASTNode* test563;
    panda$collections$Iterator* s$Iter570;
    org$pandalanguage$pandac$ASTNode* s582;
    org$pandalanguage$pandac$Position _590;
    panda$core$String* label592;
    org$pandalanguage$pandac$ASTNode* test594;
    panda$collections$ImmutableArray* statements596;
    panda$core$Int64 result598;
    panda$collections$Iterator* s$Iter600;
    org$pandalanguage$pandac$ASTNode* s612;
    {
        $match$131_9212 = p_node;
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp213.value) {
        {
            org$pandalanguage$pandac$Position* $tmp215 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _214 = *$tmp215;
            org$pandalanguage$pandac$ASTNode** $tmp217 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            test216 = *$tmp217;
            org$pandalanguage$pandac$ASTNode** $tmp219 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 24));
            msg218 = *$tmp219;
            panda$core$Int64 $tmp220 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test216);
            return $tmp220;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp221.value) {
        {
            org$pandalanguage$pandac$Position* $tmp223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _222 = *$tmp223;
            org$pandalanguage$pandac$ASTNode** $tmp225 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            left224 = *$tmp225;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp227 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$131_9212->$data + 24));
            op226 = *$tmp227;
            org$pandalanguage$pandac$ASTNode** $tmp229 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 32));
            right228 = *$tmp229;
            panda$core$Int64 $tmp230 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left224);
            panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp230);
            panda$core$Int64 $tmp232 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right228);
            panda$core$Int64 $tmp233 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp231, $tmp232);
            return $tmp233;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp234.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$Position* $tmp237 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _236 = *$tmp237;
            panda$collections$ImmutableArray** $tmp239 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 16));
            statements238 = *$tmp239;
            result240 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp242 = ((panda$collections$Iterable*) statements238)->$class->itable;
                while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp242 = $tmp242->next;
                }
                $fn244 $tmp243 = $tmp242->methods[0];
                panda$collections$Iterator* $tmp245 = $tmp243(((panda$collections$Iterable*) statements238));
                s$Iter241 = $tmp245;
                $l246:;
                ITable* $tmp248 = s$Iter241->$class->itable;
                while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp248 = $tmp248->next;
                }
                $fn250 $tmp249 = $tmp248->methods[0];
                panda$core$Bit $tmp251 = $tmp249(s$Iter241);
                panda$core$Bit $tmp252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp251);
                if (!$tmp252.value) goto $l247;
                {
                    ITable* $tmp254 = s$Iter241->$class->itable;
                    while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp254 = $tmp254->next;
                    }
                    $fn256 $tmp255 = $tmp254->methods[1];
                    panda$core$Object* $tmp257 = $tmp255(s$Iter241);
                    s253 = ((org$pandalanguage$pandac$ASTNode*) $tmp257);
                    panda$core$Int64 $tmp258 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s253);
                    panda$core$Int64 $tmp259 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result240, $tmp258);
                    result240 = $tmp259;
                }
                goto $l246;
                $l247:;
            }
            return result240;
        }
        }
        else {
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp260.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _262 = *$tmp263;
            org$pandalanguage$pandac$ASTNode** $tmp265 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            target264 = *$tmp265;
            panda$collections$ImmutableArray** $tmp267 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            args266 = *$tmp267;
            panda$core$Int64 $tmp269 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target264);
            result268 = $tmp269;
            {
                ITable* $tmp271 = ((panda$collections$Iterable*) args266)->$class->itable;
                while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp271 = $tmp271->next;
                }
                $fn273 $tmp272 = $tmp271->methods[0];
                panda$collections$Iterator* $tmp274 = $tmp272(((panda$collections$Iterable*) args266));
                a$Iter270 = $tmp274;
                $l275:;
                ITable* $tmp277 = a$Iter270->$class->itable;
                while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp277 = $tmp277->next;
                }
                $fn279 $tmp278 = $tmp277->methods[0];
                panda$core$Bit $tmp280 = $tmp278(a$Iter270);
                panda$core$Bit $tmp281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp280);
                if (!$tmp281.value) goto $l276;
                {
                    ITable* $tmp283 = a$Iter270->$class->itable;
                    while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp283 = $tmp283->next;
                    }
                    $fn285 $tmp284 = $tmp283->methods[1];
                    panda$core$Object* $tmp286 = $tmp284(a$Iter270);
                    a282 = ((org$pandalanguage$pandac$ASTNode*) $tmp286);
                    panda$core$Int64 $tmp287 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a282);
                    panda$core$Int64 $tmp288 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result268, $tmp287);
                    result268 = $tmp288;
                }
                goto $l275;
                $l276:;
            }
            return result268;
        }
        }
        else {
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp289.value) {
        {
            org$pandalanguage$pandac$Position* $tmp291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _290 = *$tmp291;
            org$pandalanguage$pandac$ASTNode** $tmp293 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            base292 = *$tmp293;
            org$pandalanguage$pandac$ChoiceEntry** $tmp295 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$131_9212->$data + 24));
            ce294 = *$tmp295;
            panda$core$Int64* $tmp297 = ((panda$core$Int64*) ((char*) $match$131_9212->$data + 32));
            f296 = *$tmp297;
            panda$core$Int64 $tmp298 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base292);
            return $tmp298;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp299.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp300.value) {
        {
            org$pandalanguage$pandac$Position* $tmp302 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _301 = *$tmp302;
            org$pandalanguage$pandac$ASTNode** $tmp304 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            target303 = *$tmp304;
            org$pandalanguage$pandac$ASTNode** $tmp306 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 24));
            value305 = *$tmp306;
            if (((panda$core$Bit) { value305 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp307 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value305);
            return $tmp307;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _309 = *$tmp310;
            panda$core$String** $tmp312 = ((panda$core$String**) ((char*) $match$131_9212->$data + 16));
            label311 = *$tmp312;
            panda$collections$ImmutableArray** $tmp314 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            statements313 = *$tmp314;
            org$pandalanguage$pandac$ASTNode** $tmp316 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 32));
            test315 = *$tmp316;
            panda$core$Int64 $tmp318 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test315);
            result317 = $tmp318;
            {
                ITable* $tmp320 = ((panda$collections$Iterable*) statements313)->$class->itable;
                while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp320 = $tmp320->next;
                }
                $fn322 $tmp321 = $tmp320->methods[0];
                panda$collections$Iterator* $tmp323 = $tmp321(((panda$collections$Iterable*) statements313));
                s$Iter319 = $tmp323;
                $l324:;
                ITable* $tmp326 = s$Iter319->$class->itable;
                while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp326 = $tmp326->next;
                }
                $fn328 $tmp327 = $tmp326->methods[0];
                panda$core$Bit $tmp329 = $tmp327(s$Iter319);
                panda$core$Bit $tmp330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp329);
                if (!$tmp330.value) goto $l325;
                {
                    ITable* $tmp332 = s$Iter319->$class->itable;
                    while ($tmp332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp332 = $tmp332->next;
                    }
                    $fn334 $tmp333 = $tmp332->methods[1];
                    panda$core$Object* $tmp335 = $tmp333(s$Iter319);
                    s331 = ((org$pandalanguage$pandac$ASTNode*) $tmp335);
                    panda$core$Int64 $tmp336 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s331);
                    panda$core$Int64 $tmp337 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result317, $tmp336);
                    result317 = $tmp337;
                }
                goto $l324;
                $l325:;
            }
            return result317;
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp338.value) {
        {
            org$pandalanguage$pandac$Position* $tmp340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _339 = *$tmp340;
            org$pandalanguage$pandac$ASTNode** $tmp342 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            base341 = *$tmp342;
            panda$core$String** $tmp344 = ((panda$core$String**) ((char*) $match$131_9212->$data + 24));
            field343 = *$tmp344;
            panda$core$Int64 $tmp345 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base341);
            return $tmp345;
        }
        }
        else {
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$Position* $tmp348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _347 = *$tmp348;
            panda$core$String** $tmp350 = ((panda$core$String**) ((char*) $match$131_9212->$data + 16));
            label349 = *$tmp350;
            org$pandalanguage$pandac$ASTNode** $tmp352 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 24));
            target351 = *$tmp352;
            org$pandalanguage$pandac$ASTNode** $tmp354 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 32));
            list353 = *$tmp354;
            panda$collections$ImmutableArray** $tmp356 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 40));
            statements355 = *$tmp356;
            panda$core$Int64 $tmp358 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list353);
            result357 = $tmp358;
            {
                ITable* $tmp360 = ((panda$collections$Iterable*) statements355)->$class->itable;
                while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp360 = $tmp360->next;
                }
                $fn362 $tmp361 = $tmp360->methods[0];
                panda$collections$Iterator* $tmp363 = $tmp361(((panda$collections$Iterable*) statements355));
                s$Iter359 = $tmp363;
                $l364:;
                ITable* $tmp366 = s$Iter359->$class->itable;
                while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp366 = $tmp366->next;
                }
                $fn368 $tmp367 = $tmp366->methods[0];
                panda$core$Bit $tmp369 = $tmp367(s$Iter359);
                panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
                if (!$tmp370.value) goto $l365;
                {
                    ITable* $tmp372 = s$Iter359->$class->itable;
                    while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp372 = $tmp372->next;
                    }
                    $fn374 $tmp373 = $tmp372->methods[1];
                    panda$core$Object* $tmp375 = $tmp373(s$Iter359);
                    s371 = ((org$pandalanguage$pandac$ASTNode*) $tmp375);
                    panda$core$Int64 $tmp376 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s371);
                    panda$core$Int64 $tmp377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result357, $tmp376);
                    result357 = $tmp377;
                }
                goto $l364;
                $l365:;
            }
            return result357;
        }
        }
        else {
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp378.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp379.value) {
        {
            org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _380 = *$tmp381;
            panda$core$String** $tmp383 = ((panda$core$String**) ((char*) $match$131_9212->$data + 16));
            text382 = *$tmp383;
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp384.value) {
        {
            org$pandalanguage$pandac$Position* $tmp386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _385 = *$tmp386;
            org$pandalanguage$pandac$ASTNode** $tmp388 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            test387 = *$tmp388;
            panda$collections$ImmutableArray** $tmp390 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            ifTrue389 = *$tmp390;
            org$pandalanguage$pandac$ASTNode** $tmp392 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 32));
            ifFalse391 = *$tmp392;
            panda$core$Int64 $tmp394 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test387);
            result393 = $tmp394;
            {
                ITable* $tmp396 = ((panda$collections$Iterable*) ifTrue389)->$class->itable;
                while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp396 = $tmp396->next;
                }
                $fn398 $tmp397 = $tmp396->methods[0];
                panda$collections$Iterator* $tmp399 = $tmp397(((panda$collections$Iterable*) ifTrue389));
                s$Iter395 = $tmp399;
                $l400:;
                ITable* $tmp402 = s$Iter395->$class->itable;
                while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp402 = $tmp402->next;
                }
                $fn404 $tmp403 = $tmp402->methods[0];
                panda$core$Bit $tmp405 = $tmp403(s$Iter395);
                panda$core$Bit $tmp406 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp405);
                if (!$tmp406.value) goto $l401;
                {
                    ITable* $tmp408 = s$Iter395->$class->itable;
                    while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp408 = $tmp408->next;
                    }
                    $fn410 $tmp409 = $tmp408->methods[1];
                    panda$core$Object* $tmp411 = $tmp409(s$Iter395);
                    s407 = ((org$pandalanguage$pandac$ASTNode*) $tmp411);
                    panda$core$Int64 $tmp412 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s407);
                    panda$core$Int64 $tmp413 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result393, $tmp412);
                    result393 = $tmp413;
                }
                goto $l400;
                $l401:;
            }
            if (((panda$core$Bit) { ifFalse391 != NULL }).value) {
            {
                panda$core$Int64 $tmp414 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse391);
                panda$core$Int64 $tmp415 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result393, $tmp414);
                result393 = $tmp415;
            }
            }
            return result393;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp416.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _418 = *$tmp419;
            panda$core$String** $tmp421 = ((panda$core$String**) ((char*) $match$131_9212->$data + 16));
            label420 = *$tmp421;
            panda$collections$ImmutableArray** $tmp423 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            statements422 = *$tmp423;
            result424 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp426 = ((panda$collections$Iterable*) statements422)->$class->itable;
                while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp426 = $tmp426->next;
                }
                $fn428 $tmp427 = $tmp426->methods[0];
                panda$collections$Iterator* $tmp429 = $tmp427(((panda$collections$Iterable*) statements422));
                s$Iter425 = $tmp429;
                $l430:;
                ITable* $tmp432 = s$Iter425->$class->itable;
                while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp432 = $tmp432->next;
                }
                $fn434 $tmp433 = $tmp432->methods[0];
                panda$core$Bit $tmp435 = $tmp433(s$Iter425);
                panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
                if (!$tmp436.value) goto $l431;
                {
                    ITable* $tmp438 = s$Iter425->$class->itable;
                    while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp438 = $tmp438->next;
                    }
                    $fn440 $tmp439 = $tmp438->methods[1];
                    panda$core$Object* $tmp441 = $tmp439(s$Iter425);
                    s437 = ((org$pandalanguage$pandac$ASTNode*) $tmp441);
                    panda$core$Int64 $tmp442 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s437);
                    panda$core$Int64 $tmp443 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result424, $tmp442);
                    result424 = $tmp443;
                }
                goto $l430;
                $l431:;
            }
            return result424;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$Position* $tmp446 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _445 = *$tmp446;
            org$pandalanguage$pandac$ASTNode** $tmp448 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            value447 = *$tmp448;
            panda$collections$ImmutableArray** $tmp450 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            whens449 = *$tmp450;
            panda$collections$ImmutableArray** $tmp452 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 32));
            other451 = *$tmp452;
            panda$core$Int64 $tmp454 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value447);
            result453 = $tmp454;
            {
                ITable* $tmp456 = ((panda$collections$Iterable*) whens449)->$class->itable;
                while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp456 = $tmp456->next;
                }
                $fn458 $tmp457 = $tmp456->methods[0];
                panda$collections$Iterator* $tmp459 = $tmp457(((panda$collections$Iterable*) whens449));
                w$Iter455 = $tmp459;
                $l460:;
                ITable* $tmp462 = w$Iter455->$class->itable;
                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp462 = $tmp462->next;
                }
                $fn464 $tmp463 = $tmp462->methods[0];
                panda$core$Bit $tmp465 = $tmp463(w$Iter455);
                panda$core$Bit $tmp466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp465);
                if (!$tmp466.value) goto $l461;
                {
                    ITable* $tmp468 = w$Iter455->$class->itable;
                    while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp468 = $tmp468->next;
                    }
                    $fn470 $tmp469 = $tmp468->methods[1];
                    panda$core$Object* $tmp471 = $tmp469(w$Iter455);
                    w467 = ((org$pandalanguage$pandac$ASTNode*) $tmp471);
                    panda$core$Int64 $tmp472 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w467);
                    panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result453, $tmp472);
                    result453 = $tmp473;
                }
                goto $l460;
                $l461:;
            }
            if (((panda$core$Bit) { other451 != NULL }).value) {
            {
                {
                    ITable* $tmp475 = ((panda$collections$Iterable*) other451)->$class->itable;
                    while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp475 = $tmp475->next;
                    }
                    $fn477 $tmp476 = $tmp475->methods[0];
                    panda$collections$Iterator* $tmp478 = $tmp476(((panda$collections$Iterable*) other451));
                    s$Iter474 = $tmp478;
                    $l479:;
                    ITable* $tmp481 = s$Iter474->$class->itable;
                    while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp481 = $tmp481->next;
                    }
                    $fn483 $tmp482 = $tmp481->methods[0];
                    panda$core$Bit $tmp484 = $tmp482(s$Iter474);
                    panda$core$Bit $tmp485 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp484);
                    if (!$tmp485.value) goto $l480;
                    {
                        ITable* $tmp487 = s$Iter474->$class->itable;
                        while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp487 = $tmp487->next;
                        }
                        $fn489 $tmp488 = $tmp487->methods[1];
                        panda$core$Object* $tmp490 = $tmp488(s$Iter474);
                        s486 = ((org$pandalanguage$pandac$ASTNode*) $tmp490);
                        panda$core$Int64 $tmp491 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s486);
                        panda$core$Int64 $tmp492 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result453, $tmp491);
                        result453 = $tmp492;
                    }
                    goto $l479;
                    $l480:;
                }
            }
            }
            return result453;
        }
        }
        else {
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp493.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp494.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp495.value) {
        {
            org$pandalanguage$pandac$Position* $tmp497 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _496 = *$tmp497;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp499 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$131_9212->$data + 16));
            op498 = *$tmp499;
            org$pandalanguage$pandac$ASTNode** $tmp501 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 24));
            base500 = *$tmp501;
            panda$core$Int64 $tmp502 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base500);
            panda$core$Int64 $tmp503 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp502);
            return $tmp503;
        }
        }
        else {
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp504.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp505.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp506.value) {
        {
            org$pandalanguage$pandac$Position* $tmp508 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _507 = *$tmp508;
            org$pandalanguage$pandac$ASTNode** $tmp510 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 16));
            value509 = *$tmp510;
            if (((panda$core$Bit) { value509 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp511 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value509);
            return $tmp511;
        }
        }
        else {
        panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp512.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp513.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp514.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp515.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$Position* $tmp518 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _517 = *$tmp518;
            org$pandalanguage$pandac$Variable$Kind* $tmp520 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$131_9212->$data + 16));
            kind519 = *$tmp520;
            panda$collections$ImmutableArray** $tmp522 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            decls521 = *$tmp522;
            result523 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp525 = ((panda$collections$Iterable*) decls521)->$class->itable;
                while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp525 = $tmp525->next;
                }
                $fn527 $tmp526 = $tmp525->methods[0];
                panda$collections$Iterator* $tmp528 = $tmp526(((panda$collections$Iterable*) decls521));
                decl$Iter524 = $tmp528;
                $l529:;
                ITable* $tmp531 = decl$Iter524->$class->itable;
                while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp531 = $tmp531->next;
                }
                $fn533 $tmp532 = $tmp531->methods[0];
                panda$core$Bit $tmp534 = $tmp532(decl$Iter524);
                panda$core$Bit $tmp535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp534);
                if (!$tmp535.value) goto $l530;
                {
                    ITable* $tmp537 = decl$Iter524->$class->itable;
                    while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp537 = $tmp537->next;
                    }
                    $fn539 $tmp538 = $tmp537->methods[1];
                    panda$core$Object* $tmp540 = $tmp538(decl$Iter524);
                    decl536 = ((org$pandalanguage$pandac$ASTNode*) $tmp540);
                    panda$core$Int64 $tmp541 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl536);
                    panda$core$Int64 $tmp542 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result523, $tmp541);
                    result523 = $tmp542;
                }
                goto $l529;
                $l530:;
            }
            return result523;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp543.value) {
        {
            org$pandalanguage$pandac$Position* $tmp545 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _544 = *$tmp545;
            panda$collections$ImmutableArray** $tmp547 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 16));
            tests546 = *$tmp547;
            panda$collections$ImmutableArray** $tmp549 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 24));
            statements548 = *$tmp549;
            result550 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp552 = ((panda$collections$Iterable*) tests546)->$class->itable;
                while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp552 = $tmp552->next;
                }
                $fn554 $tmp553 = $tmp552->methods[0];
                panda$collections$Iterator* $tmp555 = $tmp553(((panda$collections$Iterable*) tests546));
                test$Iter551 = $tmp555;
                $l556:;
                ITable* $tmp558 = test$Iter551->$class->itable;
                while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp558 = $tmp558->next;
                }
                $fn560 $tmp559 = $tmp558->methods[0];
                panda$core$Bit $tmp561 = $tmp559(test$Iter551);
                panda$core$Bit $tmp562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp561);
                if (!$tmp562.value) goto $l557;
                {
                    ITable* $tmp564 = test$Iter551->$class->itable;
                    while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp564 = $tmp564->next;
                    }
                    $fn566 $tmp565 = $tmp564->methods[1];
                    panda$core$Object* $tmp567 = $tmp565(test$Iter551);
                    test563 = ((org$pandalanguage$pandac$ASTNode*) $tmp567);
                    panda$core$Int64 $tmp568 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test563);
                    panda$core$Int64 $tmp569 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result550, $tmp568);
                    result550 = $tmp569;
                }
                goto $l556;
                $l557:;
            }
            {
                ITable* $tmp571 = ((panda$collections$Iterable*) statements548)->$class->itable;
                while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp571 = $tmp571->next;
                }
                $fn573 $tmp572 = $tmp571->methods[0];
                panda$collections$Iterator* $tmp574 = $tmp572(((panda$collections$Iterable*) statements548));
                s$Iter570 = $tmp574;
                $l575:;
                ITable* $tmp577 = s$Iter570->$class->itable;
                while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp577 = $tmp577->next;
                }
                $fn579 $tmp578 = $tmp577->methods[0];
                panda$core$Bit $tmp580 = $tmp578(s$Iter570);
                panda$core$Bit $tmp581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp580);
                if (!$tmp581.value) goto $l576;
                {
                    ITable* $tmp583 = s$Iter570->$class->itable;
                    while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp583 = $tmp583->next;
                    }
                    $fn585 $tmp584 = $tmp583->methods[1];
                    panda$core$Object* $tmp586 = $tmp584(s$Iter570);
                    s582 = ((org$pandalanguage$pandac$ASTNode*) $tmp586);
                    panda$core$Int64 $tmp587 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s582);
                    panda$core$Int64 $tmp588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result550, $tmp587);
                    result550 = $tmp588;
                }
                goto $l575;
                $l576:;
            }
            return result550;
        }
        }
        else {
        panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9212->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp589.value) {
        {
            org$pandalanguage$pandac$Position* $tmp591 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9212->$data + 0));
            _590 = *$tmp591;
            panda$core$String** $tmp593 = ((panda$core$String**) ((char*) $match$131_9212->$data + 16));
            label592 = *$tmp593;
            org$pandalanguage$pandac$ASTNode** $tmp595 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9212->$data + 24));
            test594 = *$tmp595;
            panda$collections$ImmutableArray** $tmp597 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9212->$data + 32));
            statements596 = *$tmp597;
            panda$core$Int64 $tmp599 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test594);
            result598 = $tmp599;
            {
                ITable* $tmp601 = ((panda$collections$Iterable*) statements596)->$class->itable;
                while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp601 = $tmp601->next;
                }
                $fn603 $tmp602 = $tmp601->methods[0];
                panda$collections$Iterator* $tmp604 = $tmp602(((panda$collections$Iterable*) statements596));
                s$Iter600 = $tmp604;
                $l605:;
                ITable* $tmp607 = s$Iter600->$class->itable;
                while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp607 = $tmp607->next;
                }
                $fn609 $tmp608 = $tmp607->methods[0];
                panda$core$Bit $tmp610 = $tmp608(s$Iter600);
                panda$core$Bit $tmp611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp610);
                if (!$tmp611.value) goto $l606;
                {
                    ITable* $tmp613 = s$Iter600->$class->itable;
                    while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp613 = $tmp613->next;
                    }
                    $fn615 $tmp614 = $tmp613->methods[1];
                    panda$core$Object* $tmp616 = $tmp614(s$Iter600);
                    s612 = ((org$pandalanguage$pandac$ASTNode*) $tmp616);
                    panda$core$Int64 $tmp617 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s612);
                    panda$core$Int64 $tmp618 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result598, $tmp617);
                    result598 = $tmp618;
                }
                goto $l605;
                $l606:;
            }
            return result598;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Int64 c629;
    panda$collections$Iterator* s$Iter630;
    org$pandalanguage$pandac$ASTNode* s642;
    panda$core$Bit $tmp621 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp620 = $tmp621.value;
    if (!$tmp620) goto $l622;
    panda$core$Bit $tmp623 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp624 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp623);
    $tmp620 = $tmp624.value;
    $l622:;
    panda$core$Bit $tmp625 = { $tmp620 };
    bool $tmp619 = $tmp625.value;
    if (!$tmp619) goto $l626;
    panda$core$Bit $tmp627 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp619 = $tmp627.value;
    $l626:;
    panda$core$Bit $tmp628 = { $tmp619 };
    if ($tmp628.value) {
    {
        c629 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp631 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp631 = $tmp631->next;
            }
            $fn633 $tmp632 = $tmp631->methods[0];
            panda$collections$Iterator* $tmp634 = $tmp632(((panda$collections$Iterable*) p_statements));
            s$Iter630 = $tmp634;
            $l635:;
            ITable* $tmp637 = s$Iter630->$class->itable;
            while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp637 = $tmp637->next;
            }
            $fn639 $tmp638 = $tmp637->methods[0];
            panda$core$Bit $tmp640 = $tmp638(s$Iter630);
            panda$core$Bit $tmp641 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp640);
            if (!$tmp641.value) goto $l636;
            {
                ITable* $tmp643 = s$Iter630->$class->itable;
                while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp643 = $tmp643->next;
                }
                $fn645 $tmp644 = $tmp643->methods[1];
                panda$core$Object* $tmp646 = $tmp644(s$Iter630);
                s642 = ((org$pandalanguage$pandac$ASTNode*) $tmp646);
                panda$core$Int64 $tmp647 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s642);
                panda$core$Int64 $tmp648 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c629, $tmp647);
                c629 = $tmp648;
                panda$core$Bit $tmp649 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c629, ((panda$core$Int64) { 10 }));
                if ($tmp649.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l635;
            $l636:;
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment650;
    org$pandalanguage$pandac$ASTNode* $match$281_13651;
    org$pandalanguage$pandac$Position position653;
    panda$core$String* text655;
    org$pandalanguage$pandac$Annotations* annotations657;
    panda$collections$Array* parameters670;
    panda$collections$Iterator* p$Iter673;
    org$pandalanguage$pandac$ASTNode* p685;
    org$pandalanguage$pandac$ASTNode* $match$294_13690;
    org$pandalanguage$pandac$Position _692;
    panda$core$String* name694;
    org$pandalanguage$pandac$ASTNode* type696;
    org$pandalanguage$pandac$Type* returnType701;
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment650 = NULL;
    }
    }
    else {
    {
        {
            $match$281_13651 = p_rawDoccomment;
            panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13651->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp652.value) {
            {
                org$pandalanguage$pandac$Position* $tmp654 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13651->$data + 0));
                position653 = *$tmp654;
                panda$core$String** $tmp656 = ((panda$core$String**) ((char*) $match$281_13651->$data + 16));
                text655 = *$tmp656;
                doccomment650 = text655;
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Annotations* $tmp658 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations657 = $tmp658;
    panda$core$Bit $tmp661 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp660 = $tmp661.value;
    if (!$tmp660) goto $l662;
    panda$core$Bit $tmp663 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp660 = $tmp663.value;
    $l662:;
    panda$core$Bit $tmp664 = { $tmp660 };
    bool $tmp659 = $tmp664.value;
    if ($tmp659) goto $l665;
    panda$core$Bit $tmp666 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations657);
    $tmp659 = $tmp666.value;
    $l665:;
    panda$core$Bit $tmp667 = { $tmp659 };
    if ($tmp667.value) {
    {
        panda$core$Int64 $tmp668 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp669 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations657->flags, $tmp668);
        annotations657->flags = $tmp669;
    }
    }
    panda$collections$Array* $tmp671 = (panda$collections$Array*) malloc(40);
    $tmp671->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp671->refCount.value = 1;
    panda$collections$Array$init($tmp671);
    parameters670 = $tmp671;
    {
        ITable* $tmp674 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp674->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp674 = $tmp674->next;
        }
        $fn676 $tmp675 = $tmp674->methods[0];
        panda$collections$Iterator* $tmp677 = $tmp675(((panda$collections$Iterable*) p_rawParameters));
        p$Iter673 = $tmp677;
        $l678:;
        ITable* $tmp680 = p$Iter673->$class->itable;
        while ($tmp680->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp680 = $tmp680->next;
        }
        $fn682 $tmp681 = $tmp680->methods[0];
        panda$core$Bit $tmp683 = $tmp681(p$Iter673);
        panda$core$Bit $tmp684 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp683);
        if (!$tmp684.value) goto $l679;
        {
            ITable* $tmp686 = p$Iter673->$class->itable;
            while ($tmp686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp686 = $tmp686->next;
            }
            $fn688 $tmp687 = $tmp686->methods[1];
            panda$core$Object* $tmp689 = $tmp687(p$Iter673);
            p685 = ((org$pandalanguage$pandac$ASTNode*) $tmp689);
            {
                $match$294_13690 = p685;
                panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13690->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp691.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp693 = ((org$pandalanguage$pandac$Position*) ((char*) $match$294_13690->$data + 0));
                    _692 = *$tmp693;
                    panda$core$String** $tmp695 = ((panda$core$String**) ((char*) $match$294_13690->$data + 16));
                    name694 = *$tmp695;
                    org$pandalanguage$pandac$ASTNode** $tmp697 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13690->$data + 24));
                    type696 = *$tmp697;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp698 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                    $tmp698->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                    $tmp698->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp700 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type696);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp698, name694, $tmp700);
                    panda$collections$Array$add$panda$collections$Array$T(parameters670, ((panda$core$Object*) $tmp698));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l678;
        $l679:;
    }
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp702 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
        returnType701 = $tmp702;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp703 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        returnType701 = $tmp703;
    }
    }
    panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp704 = $tmp705.value;
    if (!$tmp704) goto $l706;
    org$pandalanguage$pandac$Type* $tmp707 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp708 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType701, $tmp707);
    $tmp704 = $tmp708.value;
    $l706:;
    panda$core$Bit $tmp709 = { $tmp704 };
    if ($tmp709.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s710);
    }
    }
    bool $tmp711 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp711) goto $l712;
    panda$core$Bit $tmp713 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations657, p_statements);
    $tmp711 = $tmp713.value;
    $l712:;
    panda$core$Bit $tmp714 = { $tmp711 };
    if ($tmp714.value) {
    {
        panda$core$Int64 $tmp715 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp716 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations657->flags, $tmp715);
        annotations657->flags = $tmp716;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp717.value) {
        {
            panda$core$Int64 $tmp718 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp719 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations657->flags, $tmp718);
            annotations657->flags = $tmp719;
        }
        }
        else {
        panda$core$Int64 $tmp720 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp721 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations657->flags, $tmp720);
        panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp721, ((panda$core$Int64) { 0 }));
        if ($tmp722.value) {
        {
            panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s723, p_name);
            panda$core$String* $tmp726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp724, &$s725);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp726);
        }
        }
        }
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp727 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp727->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp727->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp727, p_owner, p_position, doccomment650, annotations657, p_kind, p_name, parameters670, returnType701, p_statements);
    return $tmp727;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9729;
    org$pandalanguage$pandac$Position position731;
    org$pandalanguage$pandac$ASTNode* dc733;
    panda$collections$ImmutableArray* annotations735;
    org$pandalanguage$pandac$ASTNode* varDecl737;
    org$pandalanguage$pandac$Position position740;
    org$pandalanguage$pandac$ASTNode* dc742;
    panda$collections$ImmutableArray* annotations744;
    org$pandalanguage$pandac$MethodDecl$Kind kind746;
    panda$core$String* name748;
    panda$collections$ImmutableArray* parameters750;
    org$pandalanguage$pandac$ASTNode* rawReturnType752;
    panda$collections$ImmutableArray* statements754;
    org$pandalanguage$pandac$MethodDecl* m756;
    org$pandalanguage$pandac$Position position759;
    org$pandalanguage$pandac$ASTNode* dc761;
    panda$collections$ImmutableArray* annotations763;
    org$pandalanguage$pandac$ClassDecl$Kind kind765;
    panda$core$String* name767;
    panda$collections$ImmutableArray* generics769;
    panda$collections$ImmutableArray* supertypes771;
    panda$collections$ImmutableArray* members773;
    org$pandalanguage$pandac$ClassDecl* inner775;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp780;
    org$pandalanguage$pandac$Position position786;
    org$pandalanguage$pandac$ASTNode* dc788;
    panda$core$String* name790;
    panda$collections$ImmutableArray* fields792;
    {
        $match$327_9729 = p_node;
        panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9729->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp730.value) {
        {
            org$pandalanguage$pandac$Position* $tmp732 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9729->$data + 0));
            position731 = *$tmp732;
            org$pandalanguage$pandac$ASTNode** $tmp734 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9729->$data + 16));
            dc733 = *$tmp734;
            panda$collections$ImmutableArray** $tmp736 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 24));
            annotations735 = *$tmp736;
            org$pandalanguage$pandac$ASTNode** $tmp738 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9729->$data + 32));
            varDecl737 = *$tmp738;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position731, dc733, annotations735, varDecl737);
        }
        }
        else {
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9729->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp739.value) {
        {
            org$pandalanguage$pandac$Position* $tmp741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9729->$data + 0));
            position740 = *$tmp741;
            org$pandalanguage$pandac$ASTNode** $tmp743 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9729->$data + 16));
            dc742 = *$tmp743;
            panda$collections$ImmutableArray** $tmp745 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 24));
            annotations744 = *$tmp745;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp747 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9729->$data + 32));
            kind746 = *$tmp747;
            panda$core$String** $tmp749 = ((panda$core$String**) ((char*) $match$327_9729->$data + 40));
            name748 = *$tmp749;
            panda$collections$ImmutableArray** $tmp751 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 48));
            parameters750 = *$tmp751;
            org$pandalanguage$pandac$ASTNode** $tmp753 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9729->$data + 56));
            rawReturnType752 = *$tmp753;
            panda$collections$ImmutableArray** $tmp755 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 64));
            statements754 = *$tmp755;
            org$pandalanguage$pandac$MethodDecl* $tmp757 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position740, dc742, annotations744, kind746, name748, parameters750, rawReturnType752, statements754);
            m756 = $tmp757;
            if (((panda$core$Bit) { m756 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m756));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m756));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9729->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp758.value) {
        {
            org$pandalanguage$pandac$Position* $tmp760 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9729->$data + 0));
            position759 = *$tmp760;
            org$pandalanguage$pandac$ASTNode** $tmp762 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9729->$data + 16));
            dc761 = *$tmp762;
            panda$collections$ImmutableArray** $tmp764 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 24));
            annotations763 = *$tmp764;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp766 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9729->$data + 32));
            kind765 = *$tmp766;
            panda$core$String** $tmp768 = ((panda$core$String**) ((char*) $match$327_9729->$data + 40));
            name767 = *$tmp768;
            panda$collections$ImmutableArray** $tmp770 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 48));
            generics769 = *$tmp770;
            panda$collections$ImmutableArray** $tmp772 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 56));
            supertypes771 = *$tmp772;
            panda$collections$ImmutableArray** $tmp774 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 64));
            members773 = *$tmp774;
            org$pandalanguage$pandac$ClassDecl* $tmp776 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position759, dc761, annotations763, kind765, name767, generics769, supertypes771, members773);
            inner775 = $tmp776;
            if (((panda$core$Bit) { inner775 != NULL }).value) {
            {
                inner775->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner775));
                panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s777);
                panda$core$Bit $tmp779 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner775)->name, $tmp778);
                PANDA_ASSERT($tmp779.value);
                panda$core$Int64 $tmp781 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp781, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp780, ((panda$core$Int64$nullable) { $tmp782, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp783 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner775)->name, $tmp780);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner775), $tmp783);
                panda$collections$Array$add$panda$collections$Array$T(inner775->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp784 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner775->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp784);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9729->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp785.value) {
        {
            org$pandalanguage$pandac$Position* $tmp787 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9729->$data + 0));
            position786 = *$tmp787;
            org$pandalanguage$pandac$ASTNode** $tmp789 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9729->$data + 16));
            dc788 = *$tmp789;
            panda$core$String** $tmp791 = ((panda$core$String**) ((char*) $match$327_9729->$data + 24));
            name790 = *$tmp791;
            panda$collections$ImmutableArray** $tmp793 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9729->$data + 32));
            fields792 = *$tmp793;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position786, dc788, name790, fields792);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment794;
    org$pandalanguage$pandac$ASTNode* $match$365_13795;
    org$pandalanguage$pandac$Position position797;
    panda$core$String* text799;
    panda$collections$Array* fields801;
    panda$collections$Iterator* t$Iter804;
    org$pandalanguage$pandac$ASTNode* t816;
    org$pandalanguage$pandac$ChoiceEntry* entry822;
    panda$core$Bit found826;
    panda$collections$Iterator* m$Iter827;
    org$pandalanguage$pandac$MethodDecl* m839;
    panda$core$Range$LTpanda$core$Int64$GT $tmp852;
    panda$collections$Array* parameters878;
    panda$collections$Array* statements885;
    org$pandalanguage$pandac$parser$Token$Kind $tmp893;
    panda$core$Range$LTpanda$core$Int64$GT $tmp897;
    org$pandalanguage$pandac$parser$Token$Kind $tmp926;
    org$pandalanguage$pandac$MethodDecl* synthetic940;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp945;
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment794 = NULL;
    }
    }
    else {
    {
        {
            $match$365_13795 = p_rawDoccomment;
            panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13795->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp796.value) {
            {
                org$pandalanguage$pandac$Position* $tmp798 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13795->$data + 0));
                position797 = *$tmp798;
                panda$core$String** $tmp800 = ((panda$core$String**) ((char*) $match$365_13795->$data + 16));
                text799 = *$tmp800;
                doccomment794 = text799;
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    panda$collections$Array* $tmp802 = (panda$collections$Array*) malloc(40);
    $tmp802->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp802->refCount.value = 1;
    panda$collections$Array$init($tmp802);
    fields801 = $tmp802;
    {
        ITable* $tmp805 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp805->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp805 = $tmp805->next;
        }
        $fn807 $tmp806 = $tmp805->methods[0];
        panda$collections$Iterator* $tmp808 = $tmp806(((panda$collections$Iterable*) p_rawFields));
        t$Iter804 = $tmp808;
        $l809:;
        ITable* $tmp811 = t$Iter804->$class->itable;
        while ($tmp811->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp811 = $tmp811->next;
        }
        $fn813 $tmp812 = $tmp811->methods[0];
        panda$core$Bit $tmp814 = $tmp812(t$Iter804);
        panda$core$Bit $tmp815 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp814);
        if (!$tmp815.value) goto $l810;
        {
            ITable* $tmp817 = t$Iter804->$class->itable;
            while ($tmp817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp817 = $tmp817->next;
            }
            $fn819 $tmp818 = $tmp817->methods[1];
            panda$core$Object* $tmp820 = $tmp818(t$Iter804);
            t816 = ((org$pandalanguage$pandac$ASTNode*) $tmp820);
            org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t816);
            panda$collections$Array$add$panda$collections$Array$T(fields801, ((panda$core$Object*) $tmp821));
        }
        goto $l809;
        $l810:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp823 = (org$pandalanguage$pandac$ChoiceEntry*) malloc(89);
    $tmp823->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp823->refCount.value = 1;
    panda$core$Int64 $tmp825 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp823, p_cl, p_position, p_name, doccomment794, $tmp825, ((panda$collections$ListView*) fields801));
    entry822 = $tmp823;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry822));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry822));
    found826 = ((panda$core$Bit) { false });
    {
        ITable* $tmp828 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp828 = $tmp828->next;
        }
        $fn830 $tmp829 = $tmp828->methods[0];
        panda$collections$Iterator* $tmp831 = $tmp829(((panda$collections$Iterable*) p_cl->methods));
        m$Iter827 = $tmp831;
        $l832:;
        ITable* $tmp834 = m$Iter827->$class->itable;
        while ($tmp834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp834 = $tmp834->next;
        }
        $fn836 $tmp835 = $tmp834->methods[0];
        panda$core$Bit $tmp837 = $tmp835(m$Iter827);
        panda$core$Bit $tmp838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp837);
        if (!$tmp838.value) goto $l833;
        {
            ITable* $tmp840 = m$Iter827->$class->itable;
            while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp840 = $tmp840->next;
            }
            $fn842 $tmp841 = $tmp840->methods[1];
            panda$core$Object* $tmp843 = $tmp841(m$Iter827);
            m839 = ((org$pandalanguage$pandac$MethodDecl*) $tmp843);
            panda$core$Bit $tmp844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m839->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp844.value);
            panda$core$Int64 $tmp845 = panda$collections$Array$get_count$R$panda$core$Int64(m839->parameters);
            panda$core$Int64 $tmp846 = panda$collections$Array$get_count$R$panda$core$Int64(fields801);
            panda$core$Int64 $tmp847 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp846, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp848 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp845, $tmp847);
            if ($tmp848.value) {
            {
                goto $l832;
            }
            }
            panda$core$Object* $tmp849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m839->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp850 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp851 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp849)->type, $tmp850);
            PANDA_ASSERT($tmp851.value);
            panda$core$Int64 $tmp853 = panda$collections$Array$get_count$R$panda$core$Int64(fields801);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp852, ((panda$core$Int64) { 0 }), $tmp853, ((panda$core$Bit) { false }));
            int64_t $tmp855 = $tmp852.min.value;
            panda$core$Int64 i854 = { $tmp855 };
            int64_t $tmp857 = $tmp852.max.value;
            bool $tmp858 = $tmp852.inclusive.value;
            if ($tmp858) goto $l865; else goto $l866;
            $l865:;
            if ($tmp855 <= $tmp857) goto $l859; else goto $l861;
            $l866:;
            if ($tmp855 < $tmp857) goto $l859; else goto $l861;
            $l859:;
            {
                panda$core$Object* $tmp867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields801, i854);
                panda$core$Int64 $tmp868 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i854, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp869 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m839->parameters, $tmp868);
                panda$core$Bit $tmp870 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp867), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp869)->type);
                if ($tmp870.value) {
                {
                    goto $l832;
                }
                }
            }
            $l862:;
            int64_t $tmp872 = $tmp857 - i854.value;
            if ($tmp858) goto $l873; else goto $l874;
            $l873:;
            if ((uint64_t) $tmp872 >= 1) goto $l871; else goto $l861;
            $l874:;
            if ((uint64_t) $tmp872 > 1) goto $l871; else goto $l861;
            $l871:;
            i854.value += 1;
            goto $l859;
            $l861:;
            found826 = ((panda$core$Bit) { true });
            goto $l833;
        }
        goto $l832;
        $l833:;
    }
    panda$core$Bit $tmp877 = panda$core$Bit$$NOT$R$panda$core$Bit(found826);
    if ($tmp877.value) {
    {
        panda$collections$Array* $tmp879 = (panda$collections$Array*) malloc(40);
        $tmp879->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp879->refCount.value = 1;
        panda$collections$Array$init($tmp879);
        parameters878 = $tmp879;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp881 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
        $tmp881->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp881->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp884 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp881, &$s883, $tmp884);
        panda$collections$Array$add$panda$collections$Array$T(parameters878, ((panda$core$Object*) $tmp881));
        panda$collections$Array* $tmp886 = (panda$collections$Array*) malloc(40);
        $tmp886->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp886->refCount.value = 1;
        panda$collections$Array$init($tmp886);
        statements885 = $tmp886;
        org$pandalanguage$pandac$ASTNode* $tmp888 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp888->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp888->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode* $tmp890 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp890->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp890->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp890, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s892);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp893, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp894 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp894->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp894->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp894, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s896);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp888, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp890, $tmp893, $tmp894);
        panda$collections$Array$add$panda$collections$Array$T(statements885, ((panda$core$Object*) $tmp888));
        panda$core$Int64 $tmp898 = panda$collections$Array$get_count$R$panda$core$Int64(fields801);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp897, ((panda$core$Int64) { 0 }), $tmp898, ((panda$core$Bit) { false }));
        int64_t $tmp900 = $tmp897.min.value;
        panda$core$Int64 i899 = { $tmp900 };
        int64_t $tmp902 = $tmp897.max.value;
        bool $tmp903 = $tmp897.inclusive.value;
        if ($tmp903) goto $l910; else goto $l911;
        $l910:;
        if ($tmp900 <= $tmp902) goto $l904; else goto $l906;
        $l911:;
        if ($tmp900 < $tmp902) goto $l904; else goto $l906;
        $l904:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp912 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp912->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp912->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp915;
            $tmp915 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp915->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp915->refCount = 1;
            $tmp915->value = i899;
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s914, ((panda$core$Object*) $tmp915));
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s917);
            panda$core$Object* $tmp919 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields801, i899);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp912, $tmp918, ((org$pandalanguage$pandac$Type*) $tmp919));
            panda$collections$Array$add$panda$collections$Array$T(parameters878, ((panda$core$Object*) $tmp912));
            org$pandalanguage$pandac$ASTNode* $tmp920 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp920->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp920->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp922 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp922->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp922->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp924 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp924->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp924->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp924, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp922, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp924, entry822, i899);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp926, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp927 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp927->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp927->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp930;
            $tmp930 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp930->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp930->refCount = 1;
            $tmp930->value = i899;
            panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s929, ((panda$core$Object*) $tmp930));
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp927, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp933);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp920, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp922, $tmp926, $tmp927);
            panda$collections$Array$add$panda$collections$Array$T(statements885, ((panda$core$Object*) $tmp920));
        }
        $l907:;
        int64_t $tmp935 = $tmp902 - i899.value;
        if ($tmp903) goto $l936; else goto $l937;
        $l936:;
        if ((uint64_t) $tmp935 >= 1) goto $l934; else goto $l906;
        $l937:;
        if ((uint64_t) $tmp935 > 1) goto $l934; else goto $l906;
        $l934:;
        i899.value += 1;
        goto $l904;
        $l906:;
        org$pandalanguage$pandac$MethodDecl* $tmp941 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp941->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp941->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp943 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp943->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp943->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp943);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp945, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp947 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp948 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements885);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp941, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp943, $tmp945, &$s946, parameters878, $tmp947, $tmp948);
        synthetic940 = $tmp941;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic940));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic940));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName949;
    panda$core$String* doccomment958;
    org$pandalanguage$pandac$ASTNode* $match$438_13959;
    org$pandalanguage$pandac$Position position961;
    panda$core$String* text963;
    org$pandalanguage$pandac$Annotations* annotations965;
    panda$collections$Array* parameters967;
    panda$collections$Iterator* p$Iter970;
    org$pandalanguage$pandac$ASTNode* p982;
    panda$core$String* name987;
    org$pandalanguage$pandac$Type* bound988;
    org$pandalanguage$pandac$ASTNode* $match$451_17989;
    org$pandalanguage$pandac$Position _991;
    panda$core$String* id993;
    org$pandalanguage$pandac$Position _997;
    panda$core$String* id999;
    org$pandalanguage$pandac$ASTNode* type1001;
    panda$collections$Array* supertypes1010;
    panda$collections$Iterator* s$Iter1015;
    org$pandalanguage$pandac$ASTNode* s1027;
    org$pandalanguage$pandac$ClassDecl* result1033;
    org$pandalanguage$pandac$FieldDecl* rawValue1037;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1042;
    org$pandalanguage$pandac$FieldDecl* data1045;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1050;
    panda$collections$Iterator* m$Iter1053;
    org$pandalanguage$pandac$ASTNode* m1065;
    org$pandalanguage$pandac$ASTNode* $match$490_131070;
    org$pandalanguage$pandac$Position mPosition1072;
    org$pandalanguage$pandac$ASTNode* dc1074;
    panda$collections$ImmutableArray* annotations1076;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1078;
    panda$core$String* name1080;
    panda$collections$ImmutableArray* parameters1082;
    org$pandalanguage$pandac$ASTNode* rawReturnType1084;
    panda$collections$ImmutableArray* statements1086;
    org$pandalanguage$pandac$ClassDecl$Kind $match$494_251089;
    panda$core$Bit foundInit1095;
    panda$collections$Iterator* m$Iter1096;
    org$pandalanguage$pandac$MethodDecl* m1108;
    org$pandalanguage$pandac$MethodDecl* defaultInit1124;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1129;
    panda$core$Bit haveFields1137;
    panda$collections$Iterator* e$Iter1138;
    org$pandalanguage$pandac$ChoiceEntry* e1150;
    panda$core$Bit $tmp951 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s950);
    if ($tmp951.value) {
    {
        panda$core$String* $tmp952 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s953);
        panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, p_name);
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s956);
        fullName949 = $tmp957;
    }
    }
    else {
    {
        fullName949 = p_name;
    }
    }
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment958 = NULL;
    }
    }
    else {
    {
        {
            $match$438_13959 = p_rawDoccomment;
            panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_13959->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp960.value) {
            {
                org$pandalanguage$pandac$Position* $tmp962 = ((org$pandalanguage$pandac$Position*) ((char*) $match$438_13959->$data + 0));
                position961 = *$tmp962;
                panda$core$String** $tmp964 = ((panda$core$String**) ((char*) $match$438_13959->$data + 16));
                text963 = *$tmp964;
                doccomment958 = text963;
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Annotations* $tmp966 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations965 = $tmp966;
    panda$collections$Array* $tmp968 = (panda$collections$Array*) malloc(40);
    $tmp968->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp968->refCount.value = 1;
    panda$collections$Array$init($tmp968);
    parameters967 = $tmp968;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp971 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp971 = $tmp971->next;
            }
            $fn973 $tmp972 = $tmp971->methods[0];
            panda$collections$Iterator* $tmp974 = $tmp972(((panda$collections$Iterable*) p_generics));
            p$Iter970 = $tmp974;
            $l975:;
            ITable* $tmp977 = p$Iter970->$class->itable;
            while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp977 = $tmp977->next;
            }
            $fn979 $tmp978 = $tmp977->methods[0];
            panda$core$Bit $tmp980 = $tmp978(p$Iter970);
            panda$core$Bit $tmp981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp980);
            if (!$tmp981.value) goto $l976;
            {
                ITable* $tmp983 = p$Iter970->$class->itable;
                while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp983 = $tmp983->next;
                }
                $fn985 $tmp984 = $tmp983->methods[1];
                panda$core$Object* $tmp986 = $tmp984(p$Iter970);
                p982 = ((org$pandalanguage$pandac$ASTNode*) $tmp986);
                {
                    $match$451_17989 = p982;
                    panda$core$Bit $tmp990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_17989->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp990.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp992 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_17989->$data + 0));
                        _991 = *$tmp992;
                        panda$core$String** $tmp994 = ((panda$core$String**) ((char*) $match$451_17989->$data + 16));
                        id993 = *$tmp994;
                        name987 = id993;
                        org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                        bound988 = $tmp995;
                    }
                    }
                    else {
                    panda$core$Bit $tmp996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_17989->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp996.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp998 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_17989->$data + 0));
                        _997 = *$tmp998;
                        panda$core$String** $tmp1000 = ((panda$core$String**) ((char*) $match$451_17989->$data + 16));
                        id999 = *$tmp1000;
                        org$pandalanguage$pandac$ASTNode** $tmp1002 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_17989->$data + 24));
                        type1001 = *$tmp1002;
                        name987 = id999;
                        org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1001);
                        bound988 = $tmp1003;
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1004 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp1004->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp1004->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1007 = (($fn1006) p982->$class->vtable[2])(p982);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1004, $tmp1007, fullName949, name987, bound988);
                panda$collections$Array$add$panda$collections$Array$T(parameters967, ((panda$core$Object*) $tmp1004));
            }
            goto $l975;
            $l976:;
        }
        panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1008.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s1009);
        }
        }
    }
    }
    panda$collections$Array* $tmp1011 = (panda$collections$Array*) malloc(40);
    $tmp1011->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1011->refCount.value = 1;
    panda$collections$Array$init($tmp1011);
    supertypes1010 = $tmp1011;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1013.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s1014);
        }
        }
        {
            ITable* $tmp1016 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1016 = $tmp1016->next;
            }
            $fn1018 $tmp1017 = $tmp1016->methods[0];
            panda$collections$Iterator* $tmp1019 = $tmp1017(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter1015 = $tmp1019;
            $l1020:;
            ITable* $tmp1022 = s$Iter1015->$class->itable;
            while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1022 = $tmp1022->next;
            }
            $fn1024 $tmp1023 = $tmp1022->methods[0];
            panda$core$Bit $tmp1025 = $tmp1023(s$Iter1015);
            panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
            if (!$tmp1026.value) goto $l1021;
            {
                ITable* $tmp1028 = s$Iter1015->$class->itable;
                while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1028 = $tmp1028->next;
                }
                $fn1030 $tmp1029 = $tmp1028->methods[1];
                panda$core$Object* $tmp1031 = $tmp1029(s$Iter1015);
                s1027 = ((org$pandalanguage$pandac$ASTNode*) $tmp1031);
                org$pandalanguage$pandac$Type* $tmp1032 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1027);
                panda$collections$Array$add$panda$collections$Array$T(supertypes1010, ((panda$core$Object*) $tmp1032));
            }
            goto $l1020;
            $l1021:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1034 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp1034->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp1034->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1034, p_source, p_position, p_aliases, doccomment958, annotations965, p_kind, fullName949, ((panda$collections$ListView*) supertypes1010), parameters967, self->compiler->root);
    result1033 = $tmp1034;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result1033));
    panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1036.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp1038 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
        $tmp1038->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp1038->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1040 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp1040->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1040->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1040);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1042, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1044 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1038, result1033, ((org$pandalanguage$pandac$Symbol*) result1033)->position, NULL, $tmp1040, $tmp1042, &$s1043, $tmp1044, NULL);
        rawValue1037 = $tmp1038;
        panda$collections$Array$add$panda$collections$Array$T(result1033->fields, ((panda$core$Object*) rawValue1037));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1033->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1037));
        org$pandalanguage$pandac$FieldDecl* $tmp1046 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
        $tmp1046->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp1046->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1048 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp1048->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1048->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1048);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1050, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1052 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1046, result1033, ((org$pandalanguage$pandac$Symbol*) result1033)->position, NULL, $tmp1048, $tmp1050, &$s1051, $tmp1052, NULL);
        data1045 = $tmp1046;
        panda$collections$Array$add$panda$collections$Array$T(result1033->fields, ((panda$core$Object*) data1045));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1033->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1045));
    }
    }
    {
        ITable* $tmp1054 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1054 = $tmp1054->next;
        }
        $fn1056 $tmp1055 = $tmp1054->methods[0];
        panda$collections$Iterator* $tmp1057 = $tmp1055(((panda$collections$Iterable*) p_members));
        m$Iter1053 = $tmp1057;
        $l1058:;
        ITable* $tmp1060 = m$Iter1053->$class->itable;
        while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1060 = $tmp1060->next;
        }
        $fn1062 $tmp1061 = $tmp1060->methods[0];
        panda$core$Bit $tmp1063 = $tmp1061(m$Iter1053);
        panda$core$Bit $tmp1064 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1063);
        if (!$tmp1064.value) goto $l1059;
        {
            ITable* $tmp1066 = m$Iter1053->$class->itable;
            while ($tmp1066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1066 = $tmp1066->next;
            }
            $fn1068 $tmp1067 = $tmp1066->methods[1];
            panda$core$Object* $tmp1069 = $tmp1067(m$Iter1053);
            m1065 = ((org$pandalanguage$pandac$ASTNode*) $tmp1069);
            {
                $match$490_131070 = m1065;
                panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$490_131070->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp1071.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1073 = ((org$pandalanguage$pandac$Position*) ((char*) $match$490_131070->$data + 0));
                    mPosition1072 = *$tmp1073;
                    org$pandalanguage$pandac$ASTNode** $tmp1075 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$490_131070->$data + 16));
                    dc1074 = *$tmp1075;
                    panda$collections$ImmutableArray** $tmp1077 = ((panda$collections$ImmutableArray**) ((char*) $match$490_131070->$data + 24));
                    annotations1076 = *$tmp1077;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp1079 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$490_131070->$data + 32));
                    methodKind1078 = *$tmp1079;
                    panda$core$String** $tmp1081 = ((panda$core$String**) ((char*) $match$490_131070->$data + 40));
                    name1080 = *$tmp1081;
                    panda$collections$ImmutableArray** $tmp1083 = ((panda$collections$ImmutableArray**) ((char*) $match$490_131070->$data + 48));
                    parameters1082 = *$tmp1083;
                    org$pandalanguage$pandac$ASTNode** $tmp1085 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$490_131070->$data + 56));
                    rawReturnType1084 = *$tmp1085;
                    panda$collections$ImmutableArray** $tmp1087 = ((panda$collections$ImmutableArray**) ((char*) $match$490_131070->$data + 64));
                    statements1086 = *$tmp1087;
                    panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1078.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1088.value) {
                    {
                        {
                            $match$494_251089 = p_kind;
                            panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_251089.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1090.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_251089.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1091.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition1072, &$s1092);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_251089.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1093.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition1072, &$s1094);
                            }
                            }
                            }
                            }
                        }
                    }
                    }
                }
                }
                else {
                {
                }
                }
            }
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1033, m1065);
        }
        goto $l1058;
        $l1059:;
    }
    foundInit1095 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1097 = ((panda$collections$Iterable*) result1033->methods)->$class->itable;
        while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1097 = $tmp1097->next;
        }
        $fn1099 $tmp1098 = $tmp1097->methods[0];
        panda$collections$Iterator* $tmp1100 = $tmp1098(((panda$collections$Iterable*) result1033->methods));
        m$Iter1096 = $tmp1100;
        $l1101:;
        ITable* $tmp1103 = m$Iter1096->$class->itable;
        while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1103 = $tmp1103->next;
        }
        $fn1105 $tmp1104 = $tmp1103->methods[0];
        panda$core$Bit $tmp1106 = $tmp1104(m$Iter1096);
        panda$core$Bit $tmp1107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1106);
        if (!$tmp1107.value) goto $l1102;
        {
            ITable* $tmp1109 = m$Iter1096->$class->itable;
            while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1109 = $tmp1109->next;
            }
            $fn1111 $tmp1110 = $tmp1109->methods[1];
            panda$core$Object* $tmp1112 = $tmp1110(m$Iter1096);
            m1108 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1112);
            panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1108->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1113.value) {
            {
                foundInit1095 = ((panda$core$Bit) { true });
                goto $l1102;
            }
            }
        }
        goto $l1101;
        $l1102:;
    }
    panda$core$Bit $tmp1116 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1095);
    bool $tmp1115 = $tmp1116.value;
    if (!$tmp1115) goto $l1117;
    panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1115 = $tmp1118.value;
    $l1117:;
    panda$core$Bit $tmp1119 = { $tmp1115 };
    bool $tmp1114 = $tmp1119.value;
    if (!$tmp1114) goto $l1120;
    panda$core$Bit $tmp1122 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1033)->name, &$s1121);
    $tmp1114 = $tmp1122.value;
    $l1120:;
    panda$core$Bit $tmp1123 = { $tmp1114 };
    if ($tmp1123.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1125 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp1125->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1125->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1127 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp1127->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1127->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1127);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1129, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1131 = (panda$collections$Array*) malloc(40);
        $tmp1131->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1131->refCount.value = 1;
        panda$collections$Array$init($tmp1131);
        org$pandalanguage$pandac$Type* $tmp1133 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1134 = (panda$collections$ImmutableArray*) malloc(40);
        $tmp1134->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1134->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1134);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1125, result1033, p_position, NULL, $tmp1127, $tmp1129, &$s1130, $tmp1131, $tmp1133, $tmp1134);
        defaultInit1124 = $tmp1125;
        panda$collections$Array$add$panda$collections$Array$T(result1033->methods, ((panda$core$Object*) defaultInit1124));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1033->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1124));
    }
    }
    panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1136.value) {
    {
        haveFields1137 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1139 = ((panda$collections$Iterable*) result1033->choiceEntries)->$class->itable;
            while ($tmp1139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1139 = $tmp1139->next;
            }
            $fn1141 $tmp1140 = $tmp1139->methods[0];
            panda$collections$Iterator* $tmp1142 = $tmp1140(((panda$collections$Iterable*) result1033->choiceEntries));
            e$Iter1138 = $tmp1142;
            $l1143:;
            ITable* $tmp1145 = e$Iter1138->$class->itable;
            while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1145 = $tmp1145->next;
            }
            $fn1147 $tmp1146 = $tmp1145->methods[0];
            panda$core$Bit $tmp1148 = $tmp1146(e$Iter1138);
            panda$core$Bit $tmp1149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1148);
            if (!$tmp1149.value) goto $l1144;
            {
                ITable* $tmp1151 = e$Iter1138->$class->itable;
                while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1151 = $tmp1151->next;
                }
                $fn1153 $tmp1152 = $tmp1151->methods[1];
                panda$core$Object* $tmp1154 = $tmp1152(e$Iter1138);
                e1150 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1154);
                panda$core$Int64 $tmp1155 = panda$collections$Array$get_count$R$panda$core$Int64(e1150->fields);
                panda$core$Bit $tmp1156 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1155, ((panda$core$Int64) { 0 }));
                if ($tmp1156.value) {
                {
                    haveFields1137 = ((panda$core$Bit) { true });
                    goto $l1144;
                }
                }
            }
            goto $l1143;
            $l1144:;
        }
        panda$core$Bit $tmp1157 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1137);
        if ($tmp1157.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1158 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            result1033->rawSuper = $tmp1158;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result1033;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1159;
    org$pandalanguage$pandac$ClassDecl* inner1171;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1160 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1160 = $tmp1160->next;
        }
        $fn1162 $tmp1161 = $tmp1160->methods[0];
        panda$collections$Iterator* $tmp1163 = $tmp1161(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1159 = $tmp1163;
        $l1164:;
        ITable* $tmp1166 = inner$Iter1159->$class->itable;
        while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1166 = $tmp1166->next;
        }
        $fn1168 $tmp1167 = $tmp1166->methods[0];
        panda$core$Bit $tmp1169 = $tmp1167(inner$Iter1159);
        panda$core$Bit $tmp1170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1169);
        if (!$tmp1170.value) goto $l1165;
        {
            ITable* $tmp1172 = inner$Iter1159->$class->itable;
            while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1172 = $tmp1172->next;
            }
            $fn1174 $tmp1173 = $tmp1172->methods[1];
            panda$core$Object* $tmp1175 = $tmp1173(inner$Iter1159);
            inner1171 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1175);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1171, p_arr);
        }
        goto $l1164;
        $l1165:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$545_91176;
    panda$collections$ImmutableArray* entries1178;
    panda$collections$Array* result1180;
    panda$core$String* currentPackage1183;
    panda$collections$HashMap* aliases1185;
    panda$collections$Iterator* e$Iter1188;
    org$pandalanguage$pandac$ASTNode* e1200;
    org$pandalanguage$pandac$ASTNode* $match$551_211205;
    org$pandalanguage$pandac$Position _1207;
    panda$core$String* name1209;
    org$pandalanguage$pandac$Position _1212;
    panda$core$String* fullName1214;
    panda$core$String$Index$nullable idx1216;
    panda$core$String* alias1219;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1220;
    org$pandalanguage$pandac$Position position1224;
    org$pandalanguage$pandac$ASTNode* dc1226;
    panda$collections$ImmutableArray* annotations1228;
    org$pandalanguage$pandac$ClassDecl$Kind kind1230;
    panda$core$String* name1232;
    panda$collections$ImmutableArray* generics1234;
    panda$collections$ImmutableArray* supertypes1236;
    panda$collections$ImmutableArray* members1238;
    org$pandalanguage$pandac$ClassDecl* cl1240;
    {
        $match$545_91176 = p_file;
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91176->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1177.value) {
        {
            panda$collections$ImmutableArray** $tmp1179 = ((panda$collections$ImmutableArray**) ((char*) $match$545_91176->$data + 0));
            entries1178 = *$tmp1179;
            panda$collections$Array* $tmp1181 = (panda$collections$Array*) malloc(40);
            $tmp1181->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1181->refCount.value = 1;
            panda$collections$Array$init($tmp1181);
            result1180 = $tmp1181;
            currentPackage1183 = &$s1184;
            panda$collections$HashMap* $tmp1186 = (panda$collections$HashMap*) malloc(56);
            $tmp1186->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1186->refCount.value = 1;
            panda$collections$HashMap$init($tmp1186);
            aliases1185 = $tmp1186;
            {
                ITable* $tmp1189 = ((panda$collections$Iterable*) entries1178)->$class->itable;
                while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1189 = $tmp1189->next;
                }
                $fn1191 $tmp1190 = $tmp1189->methods[0];
                panda$collections$Iterator* $tmp1192 = $tmp1190(((panda$collections$Iterable*) entries1178));
                e$Iter1188 = $tmp1192;
                $l1193:;
                ITable* $tmp1195 = e$Iter1188->$class->itable;
                while ($tmp1195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1195 = $tmp1195->next;
                }
                $fn1197 $tmp1196 = $tmp1195->methods[0];
                panda$core$Bit $tmp1198 = $tmp1196(e$Iter1188);
                panda$core$Bit $tmp1199 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1198);
                if (!$tmp1199.value) goto $l1194;
                {
                    ITable* $tmp1201 = e$Iter1188->$class->itable;
                    while ($tmp1201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1201 = $tmp1201->next;
                    }
                    $fn1203 $tmp1202 = $tmp1201->methods[1];
                    panda$core$Object* $tmp1204 = $tmp1202(e$Iter1188);
                    e1200 = ((org$pandalanguage$pandac$ASTNode*) $tmp1204);
                    {
                        $match$551_211205 = e1200;
                        panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_211205->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1206.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1208 = ((org$pandalanguage$pandac$Position*) ((char*) $match$551_211205->$data + 0));
                            _1207 = *$tmp1208;
                            panda$core$String** $tmp1210 = ((panda$core$String**) ((char*) $match$551_211205->$data + 16));
                            name1209 = *$tmp1210;
                            currentPackage1183 = name1209;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_211205->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1211.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1213 = ((org$pandalanguage$pandac$Position*) ((char*) $match$551_211205->$data + 0));
                            _1212 = *$tmp1213;
                            panda$core$String** $tmp1215 = ((panda$core$String**) ((char*) $match$551_211205->$data + 16));
                            fullName1214 = *$tmp1215;
                            panda$core$String$Index$nullable $tmp1218 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1214, &$s1217);
                            idx1216 = $tmp1218;
                            if (((panda$core$Bit) { idx1216.nonnull }).value) {
                            {
                                panda$core$String$Index $tmp1221 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1214, ((panda$core$String$Index) idx1216.value));
                                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1220, ((panda$core$String$Index$nullable) { $tmp1221, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                panda$core$String* $tmp1222 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1214, $tmp1220);
                                alias1219 = $tmp1222;
                            }
                            }
                            else {
                            {
                                alias1219 = fullName1214;
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1185, ((panda$collections$Key*) alias1219), ((panda$core$Object*) fullName1214));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_211205->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1223.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1225 = ((org$pandalanguage$pandac$Position*) ((char*) $match$551_211205->$data + 0));
                            position1224 = *$tmp1225;
                            org$pandalanguage$pandac$ASTNode** $tmp1227 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$551_211205->$data + 16));
                            dc1226 = *$tmp1227;
                            panda$collections$ImmutableArray** $tmp1229 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211205->$data + 24));
                            annotations1228 = *$tmp1229;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1231 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$551_211205->$data + 32));
                            kind1230 = *$tmp1231;
                            panda$core$String** $tmp1233 = ((panda$core$String**) ((char*) $match$551_211205->$data + 40));
                            name1232 = *$tmp1233;
                            panda$collections$ImmutableArray** $tmp1235 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211205->$data + 48));
                            generics1234 = *$tmp1235;
                            panda$collections$ImmutableArray** $tmp1237 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211205->$data + 56));
                            supertypes1236 = *$tmp1237;
                            panda$collections$ImmutableArray** $tmp1239 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211205->$data + 64));
                            members1238 = *$tmp1239;
                            org$pandalanguage$pandac$ClassDecl* $tmp1241 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1185), currentPackage1183, position1224, dc1226, annotations1228, kind1230, name1232, generics1234, supertypes1236, members1238);
                            cl1240 = $tmp1241;
                            if (((panda$core$Bit) { cl1240 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1240, result1180);
                            }
                            }
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                        }
                        }
                    }
                }
                goto $l1193;
                $l1194:;
            }
            return ((panda$collections$ListView*) result1180);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}

