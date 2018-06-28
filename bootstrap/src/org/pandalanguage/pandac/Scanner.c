#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Method.h"
#include "panda/core/MutableMethod.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "panda/collections/CollectionView.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Stack.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn119)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn131)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn186)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn204)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn221)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn291)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn302)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn392)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn393)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn406)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn407)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn420)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn421)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn434)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn435)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn537)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn544)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn555)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn697)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn704)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn715)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn744)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn751)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn762)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn808)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn815)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn826)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn857)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn864)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn875)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn911)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn918)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn929)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn958)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn965)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn976)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1002)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1009)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1020)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1034)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1041)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1052)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1171)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1195)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1213)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1227)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1245)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1269)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1276)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1287)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1329)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1336)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1347)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1433)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1440)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1451)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1489)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1526)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1747)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1754)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1765)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1777)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1787)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1858)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1896)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1933)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1985)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1992)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2003)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2042)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2049)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2060)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2071)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2093)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2134)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2167)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2186)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2197)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2201)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2235)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2253)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2264)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2293)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2374)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2392)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2510)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2517)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2528)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2631)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2636)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2693)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    self->bareCodeClass = NULL;
    self->source = NULL;
    {
        $tmp2 = self->compiler;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$25_99 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    panda$core$Int64 $tmp11;
    org$pandalanguage$pandac$IRNode* node13 = NULL;
    org$pandalanguage$pandac$IRNode* $match$27_1718 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp19;
    panda$core$Int64 $tmp20;
    org$pandalanguage$pandac$Type* type22 = NULL;
    org$pandalanguage$pandac$Type* $returnValue24;
    org$pandalanguage$pandac$Type* $tmp25;
    panda$core$Bit $tmp29;
    panda$core$Int64 $tmp34;
    org$pandalanguage$pandac$Position position36;
    panda$core$String* name38 = NULL;
    org$pandalanguage$pandac$Type* $tmp40;
    org$pandalanguage$pandac$Type* $tmp41;
    org$pandalanguage$pandac$Type$Kind $tmp43;
    panda$core$Int64 $tmp44;
    panda$core$Int64 $tmp47;
    org$pandalanguage$pandac$Position position49;
    org$pandalanguage$pandac$ASTNode* base51 = NULL;
    panda$collections$Array* subtypes56 = NULL;
    panda$collections$Array* $tmp57;
    panda$collections$Array* $tmp58;
    org$pandalanguage$pandac$Type* $tmp60;
    org$pandalanguage$pandac$Type* $tmp62;
    org$pandalanguage$pandac$Type* $tmp63;
    panda$core$String* $tmp65;
    panda$core$Object* $tmp66;
    panda$core$Int64 $tmp67;
    org$pandalanguage$pandac$Type$Kind $tmp71;
    panda$core$Int64 $tmp72;
    panda$core$Bit $tmp73;
    panda$core$Int64 $tmp78;
    org$pandalanguage$pandac$Position position80;
    panda$core$String* base82 = NULL;
    panda$collections$ImmutableArray* args84 = NULL;
    panda$collections$Array* finalArgs89 = NULL;
    panda$collections$Array* $tmp90;
    panda$collections$Array* $tmp91;
    panda$collections$Iterator* Iter$41$1796 = NULL;
    panda$collections$Iterator* $tmp97;
    panda$collections$Iterator* $tmp98;
    org$pandalanguage$pandac$ASTNode* arg114 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp115;
    panda$core$Object* $tmp116;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$Type* $tmp125;
    org$pandalanguage$pandac$Type* $tmp126;
    org$pandalanguage$pandac$Type* $tmp127;
    org$pandalanguage$pandac$Type$Kind $tmp129;
    panda$core$Int64 $tmp130;
    panda$core$Int64 $tmp138;
    org$pandalanguage$pandac$Position position140;
    org$pandalanguage$pandac$parser$Token$Kind kind142;
    panda$collections$ImmutableArray* rawParameters144 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType146 = NULL;
    org$pandalanguage$pandac$Type$Kind typeKind151;
    org$pandalanguage$pandac$parser$Token$Kind $match$47_17152;
    panda$core$Int64 $tmp153;
    org$pandalanguage$pandac$Type$Kind $tmp155;
    panda$core$Int64 $tmp156;
    panda$core$Int64 $tmp157;
    org$pandalanguage$pandac$Type$Kind $tmp159;
    panda$core$Int64 $tmp160;
    panda$core$Int64 $tmp161;
    org$pandalanguage$pandac$Type$Kind $tmp163;
    panda$core$Int64 $tmp164;
    panda$core$Int64 $tmp165;
    org$pandalanguage$pandac$Type$Kind $tmp167;
    panda$core$Int64 $tmp168;
    panda$core$Bit $tmp169;
    panda$collections$Array* parameters174 = NULL;
    panda$collections$Array* $tmp175;
    panda$collections$Array* $tmp176;
    panda$collections$Iterator* Iter$60$17181 = NULL;
    panda$collections$Iterator* $tmp182;
    panda$collections$Iterator* $tmp183;
    org$pandalanguage$pandac$ASTNode* p199 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp200;
    panda$core$Object* $tmp201;
    org$pandalanguage$pandac$Type* $tmp206;
    org$pandalanguage$pandac$Type* returnType210 = NULL;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $tmp213;
    org$pandalanguage$pandac$Type* $tmp215;
    org$pandalanguage$pandac$Type* $tmp216;
    org$pandalanguage$pandac$Type* $tmp217;
    org$pandalanguage$pandac$Type* $tmp219;
    org$pandalanguage$pandac$Type* $tmp220;
    panda$collections$ImmutableArray* $tmp223;
    panda$core$Bit $tmp230;
    panda$core$String* $tmp234;
    panda$core$String* $tmp235;
    panda$core$String* $tmp236;
    panda$core$String* $tmp237;
    panda$core$Object* $tmp242;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$25_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Int64$init$builtin_int64(&$tmp11, 23);
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp11);
        if ($tmp12.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp14 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$25_99->$data + 0));
            node13 = *$tmp14;
            int $tmp17;
            {
                $tmp19 = node13;
                $match$27_1718 = $tmp19;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
                panda$core$Int64$init$builtin_int64(&$tmp20, 39);
                panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27_1718->$rawValue, $tmp20);
                if ($tmp21.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp23 = ((org$pandalanguage$pandac$Type**) ((char*) $match$27_1718->$data + 16));
                    type22 = *$tmp23;
                    $tmp25 = type22;
                    $returnValue24 = $tmp25;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
                    $tmp17 = 0;
                    goto $l15;
                    $l26:;
                    $tmp8 = 0;
                    goto $l6;
                    $l27:;
                    return $returnValue24;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp29, false);
                    if ($tmp29.value) goto $l30; else goto $l31;
                    $l31:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s32, (panda$core$Int64) { 31 });
                    abort();
                    $l30:;
                }
                }
            }
            $tmp17 = -1;
            goto $l15;
            $l15:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
            switch ($tmp17) {
                case -1: goto $l33;
                case 0: goto $l26;
            }
            $l33:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp34, 42);
        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp34);
        if ($tmp35.value) {
        {
            org$pandalanguage$pandac$Position* $tmp37 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position36 = *$tmp37;
            panda$core$String** $tmp39 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            name38 = *$tmp39;
            org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$Int64$init$builtin_int64(&$tmp44, 0);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp43, $tmp44);
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp42, name38, $tmp43, position36);
            $tmp41 = $tmp42;
            $tmp40 = $tmp41;
            $returnValue24 = $tmp40;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
            $tmp8 = 1;
            goto $l6;
            $l45:;
            return $returnValue24;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp47, 29);
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp47);
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position49 = *$tmp50;
            org$pandalanguage$pandac$ASTNode** $tmp52 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 16));
            base51 = *$tmp52;
            int $tmp55;
            {
                panda$collections$Array* $tmp59 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp59);
                $tmp58 = $tmp59;
                $tmp57 = $tmp58;
                subtypes56 = $tmp57;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
                org$pandalanguage$pandac$Type* $tmp61 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base51);
                $tmp60 = $tmp61;
                panda$collections$Array$add$panda$collections$Array$T(subtypes56, ((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
                org$pandalanguage$pandac$Type* $tmp64 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Int64$init$builtin_int64(&$tmp67, 0);
                panda$core$Object* $tmp68 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes56, $tmp67);
                $tmp66 = $tmp68;
                panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp66))->name, &$s69);
                $tmp65 = $tmp70;
                panda$core$Int64$init$builtin_int64(&$tmp72, 1);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp71, $tmp72);
                panda$core$Bit$init$builtin_bit(&$tmp73, false);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp64, $tmp65, $tmp71, position49, ((panda$collections$ListView*) subtypes56), $tmp73);
                $tmp63 = $tmp64;
                $tmp62 = $tmp63;
                $returnValue24 = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                panda$core$Panda$unref$panda$core$Object($tmp66);
                $tmp55 = 0;
                goto $l53;
                $l74:;
                $tmp8 = 2;
                goto $l6;
                $l75:;
                return $returnValue24;
            }
            $l53:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes56));
            subtypes56 = NULL;
            switch ($tmp55) {
                case 0: goto $l74;
            }
            $l77:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp78, 19);
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp78);
        if ($tmp79.value) {
        {
            org$pandalanguage$pandac$Position* $tmp81 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position80 = *$tmp81;
            panda$core$String** $tmp83 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            base82 = *$tmp83;
            panda$collections$ImmutableArray** $tmp85 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            args84 = *$tmp85;
            int $tmp88;
            {
                panda$collections$Array* $tmp92 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp92);
                $tmp91 = $tmp92;
                $tmp90 = $tmp91;
                finalArgs89 = $tmp90;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
                {
                    int $tmp95;
                    {
                        ITable* $tmp99 = ((panda$collections$Iterable*) args84)->$class->itable;
                        while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp99 = $tmp99->next;
                        }
                        $fn101 $tmp100 = $tmp99->methods[0];
                        panda$collections$Iterator* $tmp102 = $tmp100(((panda$collections$Iterable*) args84));
                        $tmp98 = $tmp102;
                        $tmp97 = $tmp98;
                        Iter$41$1796 = $tmp97;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
                        $l103:;
                        ITable* $tmp106 = Iter$41$1796->$class->itable;
                        while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp106 = $tmp106->next;
                        }
                        $fn108 $tmp107 = $tmp106->methods[0];
                        panda$core$Bit $tmp109 = $tmp107(Iter$41$1796);
                        panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
                        bool $tmp105 = $tmp110.value;
                        if (!$tmp105) goto $l104;
                        {
                            int $tmp113;
                            {
                                ITable* $tmp117 = Iter$41$1796->$class->itable;
                                while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp117 = $tmp117->next;
                                }
                                $fn119 $tmp118 = $tmp117->methods[1];
                                panda$core$Object* $tmp120 = $tmp118(Iter$41$1796);
                                $tmp116 = $tmp120;
                                $tmp115 = ((org$pandalanguage$pandac$ASTNode*) $tmp116);
                                arg114 = $tmp115;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
                                panda$core$Panda$unref$panda$core$Object($tmp116);
                                org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg114);
                                $tmp121 = $tmp122;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs89, ((panda$core$Object*) $tmp121));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                            }
                            $tmp113 = -1;
                            goto $l111;
                            $l111:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg114));
                            arg114 = NULL;
                            switch ($tmp113) {
                                case -1: goto $l123;
                            }
                            $l123:;
                        }
                        goto $l103;
                        $l104:;
                    }
                    $tmp95 = -1;
                    goto $l93;
                    $l93:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$41$1796));
                    Iter$41$1796 = NULL;
                    switch ($tmp95) {
                        case -1: goto $l124;
                    }
                    $l124:;
                }
                org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Int64$init$builtin_int64(&$tmp130, 0);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp129, $tmp130);
                org$pandalanguage$pandac$Position $tmp132 = (($fn131) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp128, base82, $tmp129, $tmp132);
                $tmp127 = $tmp128;
                org$pandalanguage$pandac$Type* $tmp133 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp127, ((panda$collections$ListView*) finalArgs89));
                $tmp126 = $tmp133;
                $tmp125 = $tmp126;
                $returnValue24 = $tmp125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                $tmp88 = 0;
                goto $l86;
                $l134:;
                $tmp8 = 3;
                goto $l6;
                $l135:;
                return $returnValue24;
            }
            $l86:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs89));
            finalArgs89 = NULL;
            switch ($tmp88) {
                case 0: goto $l134;
            }
            $l137:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp138, 27);
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp138);
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position140 = *$tmp141;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp143 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$25_99->$data + 16));
            kind142 = *$tmp143;
            panda$collections$ImmutableArray** $tmp145 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            rawParameters144 = *$tmp145;
            org$pandalanguage$pandac$ASTNode** $tmp147 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 32));
            rawReturnType146 = *$tmp147;
            int $tmp150;
            {
                memset(&typeKind151, 0, sizeof(typeKind151));
                {
                    $match$47_17152 = kind142;
                    panda$core$Int64$init$builtin_int64(&$tmp153, 91);
                    panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp153);
                    if ($tmp154.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp156, 14);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp155, $tmp156);
                        typeKind151 = $tmp155;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp157, 92);
                    panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp157);
                    if ($tmp158.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp160, 15);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp159, $tmp160);
                        typeKind151 = $tmp159;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp161, 93);
                    panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp161);
                    if ($tmp162.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp164, 16);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp163, $tmp164);
                        typeKind151 = $tmp163;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp165, 94);
                    panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp165);
                    if ($tmp166.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp168, 17);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp167, $tmp168);
                        typeKind151 = $tmp167;
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp169, false);
                        if ($tmp169.value) goto $l170; else goto $l171;
                        $l171:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s172, (panda$core$Int64) { 57 }, &$s173);
                        abort();
                        $l170:;
                    }
                    }
                    }
                    }
                    }
                }
                panda$collections$Array* $tmp177 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp177);
                $tmp176 = $tmp177;
                $tmp175 = $tmp176;
                parameters174 = $tmp175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                {
                    int $tmp180;
                    {
                        ITable* $tmp184 = ((panda$collections$Iterable*) rawParameters144)->$class->itable;
                        while ($tmp184->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp184 = $tmp184->next;
                        }
                        $fn186 $tmp185 = $tmp184->methods[0];
                        panda$collections$Iterator* $tmp187 = $tmp185(((panda$collections$Iterable*) rawParameters144));
                        $tmp183 = $tmp187;
                        $tmp182 = $tmp183;
                        Iter$60$17181 = $tmp182;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                        $l188:;
                        ITable* $tmp191 = Iter$60$17181->$class->itable;
                        while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp191 = $tmp191->next;
                        }
                        $fn193 $tmp192 = $tmp191->methods[0];
                        panda$core$Bit $tmp194 = $tmp192(Iter$60$17181);
                        panda$core$Bit $tmp195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp194);
                        bool $tmp190 = $tmp195.value;
                        if (!$tmp190) goto $l189;
                        {
                            int $tmp198;
                            {
                                ITable* $tmp202 = Iter$60$17181->$class->itable;
                                while ($tmp202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp202 = $tmp202->next;
                                }
                                $fn204 $tmp203 = $tmp202->methods[1];
                                panda$core$Object* $tmp205 = $tmp203(Iter$60$17181);
                                $tmp201 = $tmp205;
                                $tmp200 = ((org$pandalanguage$pandac$ASTNode*) $tmp201);
                                p199 = $tmp200;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                                panda$core$Panda$unref$panda$core$Object($tmp201);
                                org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p199);
                                $tmp206 = $tmp207;
                                panda$collections$Array$add$panda$collections$Array$T(parameters174, ((panda$core$Object*) $tmp206));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                            }
                            $tmp198 = -1;
                            goto $l196;
                            $l196:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p199));
                            p199 = NULL;
                            switch ($tmp198) {
                                case -1: goto $l208;
                            }
                            $l208:;
                        }
                        goto $l188;
                        $l189:;
                    }
                    $tmp180 = -1;
                    goto $l178;
                    $l178:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$60$17181));
                    Iter$60$17181 = NULL;
                    switch ($tmp180) {
                        case -1: goto $l209;
                    }
                    $l209:;
                }
                memset(&returnType210, 0, sizeof(returnType210));
                if (((panda$core$Bit) { rawReturnType146 != NULL }).value) {
                {
                    {
                        $tmp211 = returnType210;
                        org$pandalanguage$pandac$Type* $tmp214 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType146);
                        $tmp213 = $tmp214;
                        $tmp212 = $tmp213;
                        returnType210 = $tmp212;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
                    }
                }
                }
                else {
                {
                    {
                        $tmp215 = returnType210;
                        org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                        $tmp217 = $tmp218;
                        $tmp216 = $tmp217;
                        returnType210 = $tmp216;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                    }
                }
                }
                org$pandalanguage$pandac$Position $tmp222 = (($fn221) p_type->$class->vtable[2])(p_type);
                panda$collections$ImmutableArray* $tmp224 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters174);
                $tmp223 = $tmp224;
                org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp222, typeKind151, ((panda$collections$ListView*) $tmp223), returnType210);
                $tmp220 = $tmp225;
                $tmp219 = $tmp220;
                $returnValue24 = $tmp219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                $tmp150 = 0;
                goto $l148;
                $l226:;
                $tmp8 = 4;
                goto $l6;
                $l227:;
                return $returnValue24;
            }
            $l148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters174));
            parameters174 = NULL;
            switch ($tmp150) {
                case 0: goto $l226;
            }
            $l229:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp230, false);
            if ($tmp230.value) goto $l231; else goto $l232;
            $l232:;
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s238, ((panda$core$Object*) p_type));
            $tmp237 = $tmp239;
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s240);
            $tmp236 = $tmp241;
            panda$core$Int64$wrapper* $tmp243;
            $tmp243 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp243->value = p_type->$rawValue;
            $tmp242 = ((panda$core$Object*) $tmp243);
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp236, $tmp242);
            $tmp235 = $tmp244;
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s245);
            $tmp234 = $tmp246;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s233, (panda$core$Int64) { 72 }, $tmp234);
            abort();
            $l231:;
        }
        }
        }
        }
        }
        }
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    switch ($tmp8) {
        case 2: goto $l75;
        case 4: goto $l227;
        case -1: goto $l247;
        case 0: goto $l27;
        case 3: goto $l135;
        case 1: goto $l45;
    }
    $l247:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_flags, panda$core$Int64 p_flag) {
    panda$core$Int64 $tmp249;
    panda$core$Int64 $returnValue252;
    panda$core$Int64 $tmp248 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    panda$core$Int64$init$builtin_int64(&$tmp249, 0);
    panda$core$Bit $tmp250 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp248, $tmp249);
    if ($tmp250.value) {
    {
        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s251);
    }
    }
    panda$core$Int64 $tmp253 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    $returnValue252 = $tmp253;
    return $returnValue252;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Scanner* p_scanner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_text, org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$Bit $returnValue255;
    panda$core$Bit $tmp256;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$Bit $tmp264;
    if (((panda$core$Bit) { p_expr != NULL }).value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp256, true);
        $returnValue255 = $tmp256;
        return $returnValue255;
    }
    }
    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s260, p_text);
    $tmp259 = $tmp261;
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s262);
    $tmp258 = $tmp263;
    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(p_scanner, p_position, $tmp258);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
    panda$core$Bit$init$builtin_bit(&$tmp264, false);
    $returnValue255 = $tmp264;
    return $returnValue255;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags269;
    panda$core$Int64 $tmp270;
    panda$collections$Array* expressions271 = NULL;
    panda$collections$Array* $tmp272;
    panda$core$Method* checkExpression273 = NULL;
    panda$core$Method* $tmp274;
    panda$collections$Iterator* Iter$93$9279 = NULL;
    panda$collections$Iterator* $tmp280;
    panda$collections$Iterator* $tmp281;
    org$pandalanguage$pandac$ASTNode* c297 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp298;
    panda$core$Object* $tmp299;
    org$pandalanguage$pandac$ASTNode* $match$94_13307 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp308;
    panda$core$Int64 $tmp309;
    org$pandalanguage$pandac$Position p311;
    panda$core$String* text313 = NULL;
    panda$core$String* exprText315 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr317 = NULL;
    org$pandalanguage$pandac$ASTNode* expr322 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp323;
    panda$core$String* $match$97_21327 = NULL;
    panda$core$String* $tmp328;
    panda$core$Int64 $tmp331;
    panda$core$Int64 $tmp335;
    panda$core$Int64 $tmp339;
    panda$core$Int64 $tmp343;
    panda$core$Int64 $tmp347;
    panda$core$Int64 $tmp351;
    panda$core$Int64 $tmp355;
    panda$core$Int64 $tmp359;
    panda$core$Int64 $tmp363;
    panda$core$Int64 $tmp367;
    panda$core$Int64 $tmp371;
    panda$core$Int64 $tmp375;
    panda$core$Int64 $tmp379;
    panda$core$Int64 $tmp383;
    panda$collections$Array* $tmp387;
    panda$collections$Array* $tmp388;
    panda$collections$Array* $tmp389;
    panda$core$Bit $tmp391;
    org$pandalanguage$pandac$Annotations$Expression* $tmp394;
    panda$core$Int64 $tmp396;
    org$pandalanguage$pandac$ASTNode* $tmp397;
    org$pandalanguage$pandac$ASTNode* $tmp398;
    panda$collections$Array* $tmp401;
    panda$collections$Array* $tmp402;
    panda$collections$Array* $tmp403;
    panda$core$Bit $tmp405;
    org$pandalanguage$pandac$Annotations$Expression* $tmp408;
    panda$core$Int64 $tmp410;
    org$pandalanguage$pandac$ASTNode* $tmp411;
    org$pandalanguage$pandac$ASTNode* $tmp412;
    panda$collections$Array* $tmp415;
    panda$collections$Array* $tmp416;
    panda$collections$Array* $tmp417;
    panda$core$Bit $tmp419;
    org$pandalanguage$pandac$Annotations$Expression* $tmp422;
    panda$core$Int64 $tmp424;
    org$pandalanguage$pandac$ASTNode* $tmp425;
    org$pandalanguage$pandac$ASTNode* $tmp426;
    panda$collections$Array* $tmp429;
    panda$collections$Array* $tmp430;
    panda$collections$Array* $tmp431;
    panda$core$Bit $tmp433;
    org$pandalanguage$pandac$Annotations$Expression* $tmp436;
    panda$core$Int64 $tmp438;
    org$pandalanguage$pandac$ASTNode* $tmp439;
    org$pandalanguage$pandac$ASTNode* $tmp440;
    panda$core$String* $tmp441;
    panda$core$String* $tmp442;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$Bit $tmp455;
    org$pandalanguage$pandac$Annotations* $returnValue462;
    org$pandalanguage$pandac$Annotations* $tmp463;
    org$pandalanguage$pandac$Annotations* $tmp464;
    int $tmp268;
    {
        panda$core$Int64$init$builtin_int64(&$tmp270, 0);
        flags269 = $tmp270;
        $tmp272 = NULL;
        expressions271 = $tmp272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
        panda$core$MutableMethod* $tmp275 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp275, (panda$core$Int8*) &org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, ((panda$core$Object*) self));
        $tmp274 = ((panda$core$Object*) $tmp275);
        checkExpression273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
        {
            int $tmp278;
            {
                ITable* $tmp282 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp282 = $tmp282->next;
                }
                $fn284 $tmp283 = $tmp282->methods[0];
                panda$collections$Iterator* $tmp285 = $tmp283(((panda$collections$Iterable*) p_a));
                $tmp281 = $tmp285;
                $tmp280 = $tmp281;
                Iter$93$9279 = $tmp280;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                $l286:;
                ITable* $tmp289 = Iter$93$9279->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[0];
                panda$core$Bit $tmp292 = $tmp290(Iter$93$9279);
                panda$core$Bit $tmp293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp292);
                bool $tmp288 = $tmp293.value;
                if (!$tmp288) goto $l287;
                {
                    int $tmp296;
                    {
                        ITable* $tmp300 = Iter$93$9279->$class->itable;
                        while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp300 = $tmp300->next;
                        }
                        $fn302 $tmp301 = $tmp300->methods[1];
                        panda$core$Object* $tmp303 = $tmp301(Iter$93$9279);
                        $tmp299 = $tmp303;
                        $tmp298 = ((org$pandalanguage$pandac$ASTNode*) $tmp299);
                        c297 = $tmp298;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                        panda$core$Panda$unref$panda$core$Object($tmp299);
                        int $tmp306;
                        {
                            $tmp308 = c297;
                            $match$94_13307 = $tmp308;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                            panda$core$Int64$init$builtin_int64(&$tmp309, 0);
                            panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$94_13307->$rawValue, $tmp309);
                            if ($tmp310.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp312 = ((org$pandalanguage$pandac$Position*) ((char*) $match$94_13307->$data + 0));
                                p311 = *$tmp312;
                                panda$core$String** $tmp314 = ((panda$core$String**) ((char*) $match$94_13307->$data + 16));
                                text313 = *$tmp314;
                                panda$core$String** $tmp316 = ((panda$core$String**) ((char*) $match$94_13307->$data + 24));
                                exprText315 = *$tmp316;
                                org$pandalanguage$pandac$ASTNode** $tmp318 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$94_13307->$data + 32));
                                rawExpr317 = *$tmp318;
                                int $tmp321;
                                {
                                    $tmp323 = rawExpr317;
                                    expr322 = $tmp323;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                                    int $tmp326;
                                    {
                                        $tmp328 = text313;
                                        $match$97_21327 = $tmp328;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
                                        panda$core$Bit $tmp330 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s329);
                                        if ($tmp330.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp331, 2);
                                            panda$core$Int64 $tmp332 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp331);
                                            flags269 = $tmp332;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp334 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s333);
                                        if ($tmp334.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp335, 4);
                                            panda$core$Int64 $tmp336 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp335);
                                            flags269 = $tmp336;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s337);
                                        if ($tmp338.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp339, 8);
                                            panda$core$Int64 $tmp340 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp339);
                                            flags269 = $tmp340;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s341);
                                        if ($tmp342.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp343, 16);
                                            panda$core$Int64 $tmp344 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp343);
                                            flags269 = $tmp344;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s345);
                                        if ($tmp346.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp347, 32);
                                            panda$core$Int64 $tmp348 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp347);
                                            flags269 = $tmp348;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s349);
                                        if ($tmp350.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp351, 64);
                                            panda$core$Int64 $tmp352 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp351);
                                            flags269 = $tmp352;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp354 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s353);
                                        if ($tmp354.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp355, 128);
                                            panda$core$Int64 $tmp356 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp355);
                                            flags269 = $tmp356;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s357);
                                        if ($tmp358.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp359, 256);
                                            panda$core$Int64 $tmp360 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp359);
                                            flags269 = $tmp360;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp362 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s361);
                                        if ($tmp362.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp363, 512);
                                            panda$core$Int64 $tmp364 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp363);
                                            flags269 = $tmp364;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s365);
                                        if ($tmp366.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp367, 1024);
                                            panda$core$Int64 $tmp368 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp367);
                                            flags269 = $tmp368;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp370 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s369);
                                        if ($tmp370.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp371, 2048);
                                            panda$core$Int64 $tmp372 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp371);
                                            flags269 = $tmp372;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s373);
                                        if ($tmp374.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp375, 4096);
                                            panda$core$Int64 $tmp376 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp375);
                                            flags269 = $tmp376;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp378 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s377);
                                        if ($tmp378.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp379, 16384);
                                            panda$core$Int64 $tmp380 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp379);
                                            flags269 = $tmp380;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp382 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s381);
                                        if ($tmp382.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp383, 32768);
                                            panda$core$Int64 $tmp384 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp383);
                                            flags269 = $tmp384;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp386 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s385);
                                        if ($tmp386.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp387 = expressions271;
                                                    panda$collections$Array* $tmp390 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp390);
                                                    $tmp389 = $tmp390;
                                                    $tmp388 = $tmp389;
                                                    expressions271 = $tmp388;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp388));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp391 = (($fn392) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp391 = (($fn393) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp391.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp395 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp396, 0);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp395, $tmp396, exprText315, expr322);
                                                $tmp394 = $tmp395;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp394));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                                                {
                                                    $tmp397 = expr322;
                                                    $tmp398 = NULL;
                                                    expr322 = $tmp398;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s399);
                                        if ($tmp400.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp401 = expressions271;
                                                    panda$collections$Array* $tmp404 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp404);
                                                    $tmp403 = $tmp404;
                                                    $tmp402 = $tmp403;
                                                    expressions271 = $tmp402;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp405 = (($fn406) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp405 = (($fn407) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp405.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp409 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp410, 1);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp409, $tmp410, exprText315, expr322);
                                                $tmp408 = $tmp409;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp408));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
                                                {
                                                    $tmp411 = expr322;
                                                    $tmp412 = NULL;
                                                    expr322 = $tmp412;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp414 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s413);
                                        if ($tmp414.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp415 = expressions271;
                                                    panda$collections$Array* $tmp418 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp418);
                                                    $tmp417 = $tmp418;
                                                    $tmp416 = $tmp417;
                                                    expressions271 = $tmp416;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp419 = (($fn420) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp419 = (($fn421) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp419.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp423 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp424, 2);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp423, $tmp424, exprText315, expr322);
                                                $tmp422 = $tmp423;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp422));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                                                {
                                                    $tmp425 = expr322;
                                                    $tmp426 = NULL;
                                                    expr322 = $tmp426;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp428 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s427);
                                        if ($tmp428.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp429 = expressions271;
                                                    panda$collections$Array* $tmp432 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp432);
                                                    $tmp431 = $tmp432;
                                                    $tmp430 = $tmp431;
                                                    expressions271 = $tmp430;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp433 = (($fn434) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp433 = (($fn435) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp433.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp437 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp438, 3);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp437, $tmp438, exprText315, expr322);
                                                $tmp436 = $tmp437;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp436));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                                                {
                                                    $tmp439 = expr322;
                                                    $tmp440 = NULL;
                                                    expr322 = $tmp440;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s443, text313);
                                            $tmp442 = $tmp444;
                                            panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp442, &$s445);
                                            $tmp441 = $tmp446;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p311, $tmp441);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
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
                                    $tmp326 = -1;
                                    goto $l324;
                                    $l324:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                                    switch ($tmp326) {
                                        case -1: goto $l447;
                                    }
                                    $l447:;
                                    if (((panda$core$Bit) { expr322 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s450, text313);
                                        $tmp449 = $tmp451;
                                        panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s452);
                                        $tmp448 = $tmp453;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p311, $tmp448);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
                                    }
                                    }
                                }
                                $tmp321 = -1;
                                goto $l319;
                                $l319:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr322));
                                expr322 = NULL;
                                switch ($tmp321) {
                                    case -1: goto $l454;
                                }
                                $l454:;
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp455, false);
                                if ($tmp455.value) goto $l456; else goto $l457;
                                $l457:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s458, (panda$core$Int64) { 151 });
                                abort();
                                $l456:;
                            }
                            }
                        }
                        $tmp306 = -1;
                        goto $l304;
                        $l304:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                        switch ($tmp306) {
                            case -1: goto $l459;
                        }
                        $l459:;
                    }
                    $tmp296 = -1;
                    goto $l294;
                    $l294:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c297));
                    c297 = NULL;
                    switch ($tmp296) {
                        case -1: goto $l460;
                    }
                    $l460:;
                }
                goto $l286;
                $l287:;
            }
            $tmp278 = -1;
            goto $l276;
            $l276:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$93$9279));
            Iter$93$9279 = NULL;
            switch ($tmp278) {
                case -1: goto $l461;
            }
            $l461:;
        }
        org$pandalanguage$pandac$Annotations* $tmp465 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp465, flags269, ((panda$collections$ListView*) expressions271));
        $tmp464 = $tmp465;
        $tmp463 = $tmp464;
        $returnValue462 = $tmp463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
        $tmp268 = 0;
        goto $l266;
        $l466:;
        return $returnValue462;
    }
    $l266:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) checkExpression273));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions271));
    checkExpression273 = NULL;
    switch ($tmp268) {
        case 0: goto $l466;
    }
    $l468:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment472 = NULL;
    panda$core$String* $tmp473;
    panda$core$String* $tmp474;
    org$pandalanguage$pandac$ASTNode* $match$165_13478 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp479;
    panda$core$Int64 $tmp480;
    org$pandalanguage$pandac$Position position482;
    panda$core$String* text484 = NULL;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$Bit $tmp488;
    org$pandalanguage$pandac$Annotations* annotations493 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp494;
    org$pandalanguage$pandac$Annotations* $tmp495;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind497;
    org$pandalanguage$pandac$ASTNode* $match$174_9501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp502;
    panda$core$Int64 $tmp503;
    org$pandalanguage$pandac$Variable$Kind kind505;
    panda$collections$ImmutableArray* decls507 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$176_17509;
    panda$core$Int64 $tmp510;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp512;
    panda$core$Int64 $tmp513;
    panda$core$Int64 $tmp514;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp516;
    panda$core$Int64 $tmp517;
    panda$core$Int64 $tmp518;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp520;
    panda$core$Int64 $tmp521;
    org$pandalanguage$pandac$Annotations* $tmp522;
    panda$core$Int64 $tmp523;
    panda$core$Int64 $tmp525;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp527;
    panda$core$Int64 $tmp528;
    panda$collections$Iterator* Iter$187$17532 = NULL;
    panda$collections$Iterator* $tmp533;
    panda$collections$Iterator* $tmp534;
    org$pandalanguage$pandac$ASTNode* decl550 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp551;
    panda$core$Object* $tmp552;
    org$pandalanguage$pandac$ASTNode* $match$188_21560 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp561;
    panda$core$Int64 $tmp562;
    org$pandalanguage$pandac$Position declPosition564;
    org$pandalanguage$pandac$ASTNode* target566 = NULL;
    org$pandalanguage$pandac$ASTNode* rawValue568 = NULL;
    panda$core$String* name573 = NULL;
    org$pandalanguage$pandac$Type* type574 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$192_29578 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp579;
    panda$core$Int64 $tmp580;
    panda$core$String* id582 = NULL;
    panda$core$String* $tmp584;
    panda$core$String* $tmp585;
    org$pandalanguage$pandac$Type* $tmp586;
    org$pandalanguage$pandac$Type* $tmp587;
    org$pandalanguage$pandac$Type* $tmp588;
    panda$core$Int64 $tmp590;
    panda$core$String* id592 = NULL;
    org$pandalanguage$pandac$ASTNode* idType594 = NULL;
    panda$core$String* $tmp596;
    panda$core$String* $tmp597;
    org$pandalanguage$pandac$Type* $tmp598;
    org$pandalanguage$pandac$Type* $tmp599;
    org$pandalanguage$pandac$Type* $tmp600;
    panda$core$Bit $tmp602;
    org$pandalanguage$pandac$ASTNode* value607 = NULL;
    panda$core$Int64 $tmp614;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    org$pandalanguage$pandac$ASTNode* $tmp618;
    org$pandalanguage$pandac$ASTNode* $tmp619;
    panda$core$Int64 $tmp621;
    org$pandalanguage$pandac$ASTNode* $tmp622;
    org$pandalanguage$pandac$ASTNode* $tmp623;
    org$pandalanguage$pandac$FieldDecl* field624 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp625;
    org$pandalanguage$pandac$FieldDecl* $tmp626;
    panda$core$Bit $tmp629;
    panda$core$Bit $tmp636;
    int $tmp471;
    {
        memset(&doccomment472, 0, sizeof(doccomment472));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp473 = doccomment472;
                $tmp474 = NULL;
                doccomment472 = $tmp474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
            }
        }
        }
        else {
        {
            int $tmp477;
            {
                $tmp479 = p_rawDoccomment;
                $match$165_13478 = $tmp479;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
                panda$core$Int64$init$builtin_int64(&$tmp480, 38);
                panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_13478->$rawValue, $tmp480);
                if ($tmp481.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp483 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_13478->$data + 0));
                    position482 = *$tmp483;
                    panda$core$String** $tmp485 = ((panda$core$String**) ((char*) $match$165_13478->$data + 16));
                    text484 = *$tmp485;
                    {
                        $tmp486 = doccomment472;
                        $tmp487 = text484;
                        doccomment472 = $tmp487;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp488, false);
                    if ($tmp488.value) goto $l489; else goto $l490;
                    $l490:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s491, (panda$core$Int64) { 169 });
                    abort();
                    $l489:;
                }
                }
            }
            $tmp477 = -1;
            goto $l475;
            $l475:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
            switch ($tmp477) {
                case -1: goto $l492;
            }
            $l492:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp496 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp495 = $tmp496;
        $tmp494 = $tmp495;
        annotations493 = $tmp494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        memset(&fieldKind497, 0, sizeof(fieldKind497));
        int $tmp500;
        {
            $tmp502 = p_varDecl;
            $match$174_9501 = $tmp502;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
            panda$core$Int64$init$builtin_int64(&$tmp503, 47);
            panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$174_9501->$rawValue, $tmp503);
            if ($tmp504.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp506 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$174_9501->$data + 16));
                kind505 = *$tmp506;
                panda$collections$ImmutableArray** $tmp508 = ((panda$collections$ImmutableArray**) ((char*) $match$174_9501->$data + 24));
                decls507 = *$tmp508;
                {
                    $match$176_17509 = kind505;
                    panda$core$Int64$init$builtin_int64(&$tmp510, 0);
                    panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17509.$rawValue, $tmp510);
                    if ($tmp511.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp513, 0);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp512, $tmp513);
                        fieldKind497 = $tmp512;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp514, 1);
                    panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17509.$rawValue, $tmp514);
                    if ($tmp515.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp517, 1);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp516, $tmp517);
                        fieldKind497 = $tmp516;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp518, 2);
                    panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17509.$rawValue, $tmp518);
                    if ($tmp519.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp521, 2);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp520, $tmp521);
                        fieldKind497 = $tmp520;
                        $tmp522 = annotations493;
                        panda$core$Int64$init$builtin_int64(&$tmp523, 16);
                        panda$core$Int64 $tmp524 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp522->flags, $tmp523);
                        $tmp522->flags = $tmp524;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp525, 3);
                    panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17509.$rawValue, $tmp525);
                    if ($tmp526.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp528, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp527, $tmp528);
                        fieldKind497 = $tmp527;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp531;
                    {
                        ITable* $tmp535 = ((panda$collections$Iterable*) decls507)->$class->itable;
                        while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp535 = $tmp535->next;
                        }
                        $fn537 $tmp536 = $tmp535->methods[0];
                        panda$collections$Iterator* $tmp538 = $tmp536(((panda$collections$Iterable*) decls507));
                        $tmp534 = $tmp538;
                        $tmp533 = $tmp534;
                        Iter$187$17532 = $tmp533;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                        $l539:;
                        ITable* $tmp542 = Iter$187$17532->$class->itable;
                        while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp542 = $tmp542->next;
                        }
                        $fn544 $tmp543 = $tmp542->methods[0];
                        panda$core$Bit $tmp545 = $tmp543(Iter$187$17532);
                        panda$core$Bit $tmp546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp545);
                        bool $tmp541 = $tmp546.value;
                        if (!$tmp541) goto $l540;
                        {
                            int $tmp549;
                            {
                                ITable* $tmp553 = Iter$187$17532->$class->itable;
                                while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp553 = $tmp553->next;
                                }
                                $fn555 $tmp554 = $tmp553->methods[1];
                                panda$core$Object* $tmp556 = $tmp554(Iter$187$17532);
                                $tmp552 = $tmp556;
                                $tmp551 = ((org$pandalanguage$pandac$ASTNode*) $tmp552);
                                decl550 = $tmp551;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                                panda$core$Panda$unref$panda$core$Object($tmp552);
                                int $tmp559;
                                {
                                    $tmp561 = decl550;
                                    $match$188_21560 = $tmp561;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
                                    panda$core$Int64$init$builtin_int64(&$tmp562, 13);
                                    panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_21560->$rawValue, $tmp562);
                                    if ($tmp563.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp565 = ((org$pandalanguage$pandac$Position*) ((char*) $match$188_21560->$data + 0));
                                        declPosition564 = *$tmp565;
                                        org$pandalanguage$pandac$ASTNode** $tmp567 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_21560->$data + 16));
                                        target566 = *$tmp567;
                                        org$pandalanguage$pandac$ASTNode** $tmp569 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_21560->$data + 24));
                                        rawValue568 = *$tmp569;
                                        int $tmp572;
                                        {
                                            memset(&name573, 0, sizeof(name573));
                                            memset(&type574, 0, sizeof(type574));
                                            int $tmp577;
                                            {
                                                $tmp579 = target566;
                                                $match$192_29578 = $tmp579;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
                                                panda$core$Int64$init$builtin_int64(&$tmp580, 20);
                                                panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_29578->$rawValue, $tmp580);
                                                if ($tmp581.value) {
                                                {
                                                    panda$core$String** $tmp583 = ((panda$core$String**) ((char*) $match$192_29578->$data + 16));
                                                    id582 = *$tmp583;
                                                    {
                                                        $tmp584 = name573;
                                                        $tmp585 = id582;
                                                        name573 = $tmp585;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                                                    }
                                                    {
                                                        $tmp586 = type574;
                                                        org$pandalanguage$pandac$Type* $tmp589 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp588 = $tmp589;
                                                        $tmp587 = $tmp588;
                                                        type574 = $tmp587;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp587));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp590, 44);
                                                panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_29578->$rawValue, $tmp590);
                                                if ($tmp591.value) {
                                                {
                                                    panda$core$String** $tmp593 = ((panda$core$String**) ((char*) $match$192_29578->$data + 16));
                                                    id592 = *$tmp593;
                                                    org$pandalanguage$pandac$ASTNode** $tmp595 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_29578->$data + 24));
                                                    idType594 = *$tmp595;
                                                    {
                                                        $tmp596 = name573;
                                                        $tmp597 = id592;
                                                        name573 = $tmp597;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp597));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                                                    }
                                                    {
                                                        $tmp598 = type574;
                                                        org$pandalanguage$pandac$Type* $tmp601 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType594);
                                                        $tmp600 = $tmp601;
                                                        $tmp599 = $tmp600;
                                                        type574 = $tmp599;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp602, false);
                                                    if ($tmp602.value) goto $l603; else goto $l604;
                                                    $l604:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s605, (panda$core$Int64) { 200 });
                                                    abort();
                                                    $l603:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp577 = -1;
                                            goto $l575;
                                            $l575:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                                            switch ($tmp577) {
                                                case -1: goto $l606;
                                            }
                                            $l606:;
                                            memset(&value607, 0, sizeof(value607));
                                            bool $tmp609 = ((panda$core$Bit) { rawValue568 == NULL }).value;
                                            if (!$tmp609) goto $l610;
                                            panda$core$Bit $tmp611 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(annotations493);
                                            $tmp609 = $tmp611.value;
                                            $l610:;
                                            panda$core$Bit $tmp612 = { $tmp609 };
                                            bool $tmp608 = $tmp612.value;
                                            if (!$tmp608) goto $l613;
                                            panda$core$Int64$init$builtin_int64(&$tmp614, 1);
                                            panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type574->typeKind.$rawValue, $tmp614);
                                            $tmp608 = $tmp615.value;
                                            $l613:;
                                            panda$core$Bit $tmp616 = { $tmp608 };
                                            if ($tmp616.value) {
                                            {
                                                {
                                                    $tmp617 = value607;
                                                    org$pandalanguage$pandac$ASTNode* $tmp620 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp621, 28);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp620, $tmp621, declPosition564);
                                                    $tmp619 = $tmp620;
                                                    $tmp618 = $tmp619;
                                                    value607 = $tmp618;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp622 = value607;
                                                    $tmp623 = rawValue568;
                                                    value607 = $tmp623;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$FieldDecl* $tmp627 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp627, p_owner, declPosition564, doccomment472, annotations493, fieldKind497, name573, type574, value607);
                                            $tmp626 = $tmp627;
                                            $tmp625 = $tmp626;
                                            field624 = $tmp625;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field624));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field624));
                                        }
                                        $tmp572 = -1;
                                        goto $l570;
                                        $l570:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field624));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value607));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type574));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name573));
                                        field624 = NULL;
                                        switch ($tmp572) {
                                            case -1: goto $l628;
                                        }
                                        $l628:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp629, false);
                                        if ($tmp629.value) goto $l630; else goto $l631;
                                        $l631:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s632, (panda$core$Int64) { 215 });
                                        abort();
                                        $l630:;
                                    }
                                    }
                                }
                                $tmp559 = -1;
                                goto $l557;
                                $l557:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                                switch ($tmp559) {
                                    case -1: goto $l633;
                                }
                                $l633:;
                            }
                            $tmp549 = -1;
                            goto $l547;
                            $l547:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl550));
                            decl550 = NULL;
                            switch ($tmp549) {
                                case -1: goto $l634;
                            }
                            $l634:;
                        }
                        goto $l539;
                        $l540:;
                    }
                    $tmp531 = -1;
                    goto $l529;
                    $l529:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$187$17532));
                    Iter$187$17532 = NULL;
                    switch ($tmp531) {
                        case -1: goto $l635;
                    }
                    $l635:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp636, false);
                if ($tmp636.value) goto $l637; else goto $l638;
                $l638:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s639, (panda$core$Int64) { 219 });
                abort();
                $l637:;
            }
            }
        }
        $tmp500 = -1;
        goto $l498;
        $l498:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        switch ($tmp500) {
            case -1: goto $l640;
        }
        $l640:;
    }
    $tmp471 = -1;
    goto $l469;
    $l469:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations493));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment472));
    annotations493 = NULL;
    switch ($tmp471) {
        case -1: goto $l641;
    }
    $l641:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$225_9645 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp646;
    panda$core$Int64 $tmp647;
    org$pandalanguage$pandac$ASTNode* test649 = NULL;
    panda$core$Int64 $returnValue651;
    panda$core$Int64 $tmp655;
    panda$core$Int64 $tmp657;
    panda$core$Int64 $tmp660;
    panda$core$Int64 $tmp662;
    panda$core$Int64 $tmp665;
    org$pandalanguage$pandac$ASTNode* left667 = NULL;
    org$pandalanguage$pandac$ASTNode* right669 = NULL;
    panda$core$Int64 $tmp671;
    panda$core$Int64 $tmp678;
    panda$core$Int64 $tmp680;
    panda$core$Int64 $tmp683;
    panda$collections$ImmutableArray* statements685 = NULL;
    panda$core$Int64 result687;
    panda$core$Int64 $tmp688;
    panda$collections$Iterator* Iter$238$17692 = NULL;
    panda$collections$Iterator* $tmp693;
    panda$collections$Iterator* $tmp694;
    org$pandalanguage$pandac$ASTNode* s710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp711;
    panda$core$Object* $tmp712;
    panda$core$Int64 $tmp723;
    panda$core$Int64 $tmp725;
    panda$core$Int64 $tmp728;
    org$pandalanguage$pandac$ASTNode* target730 = NULL;
    panda$collections$ImmutableArray* args732 = NULL;
    panda$core$Int64 result734;
    panda$collections$Iterator* Iter$246$17739 = NULL;
    panda$collections$Iterator* $tmp740;
    panda$collections$Iterator* $tmp741;
    org$pandalanguage$pandac$ASTNode* a757 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp758;
    panda$core$Object* $tmp759;
    panda$core$Int64 $tmp770;
    org$pandalanguage$pandac$ASTNode* base772 = NULL;
    panda$core$Int64 $tmp777;
    panda$core$Int64 $tmp779;
    panda$core$Int64 $tmp782;
    org$pandalanguage$pandac$ASTNode* value784 = NULL;
    panda$core$Int64 $tmp786;
    panda$core$Int64 $tmp792;
    panda$collections$ImmutableArray* statements794 = NULL;
    org$pandalanguage$pandac$ASTNode* test796 = NULL;
    panda$core$Int64 result798;
    panda$collections$Iterator* Iter$261$17803 = NULL;
    panda$collections$Iterator* $tmp804;
    panda$collections$Iterator* $tmp805;
    org$pandalanguage$pandac$ASTNode* s821 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp822;
    panda$core$Object* $tmp823;
    panda$core$Int64 $tmp834;
    org$pandalanguage$pandac$ASTNode* base836 = NULL;
    panda$core$Int64 $tmp841;
    org$pandalanguage$pandac$ASTNode* list843 = NULL;
    panda$collections$ImmutableArray* statements845 = NULL;
    panda$core$Int64 result847;
    panda$collections$Iterator* Iter$269$17852 = NULL;
    panda$collections$Iterator* $tmp853;
    panda$collections$Iterator* $tmp854;
    org$pandalanguage$pandac$ASTNode* s870 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp871;
    panda$core$Object* $tmp872;
    panda$core$Int64 $tmp883;
    panda$core$Int64 $tmp885;
    panda$core$Int64 $tmp888;
    panda$core$Int64 $tmp890;
    panda$core$Int64 $tmp893;
    org$pandalanguage$pandac$ASTNode* test895 = NULL;
    panda$collections$ImmutableArray* ifTrue897 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse899 = NULL;
    panda$core$Int64 result901;
    panda$collections$Iterator* Iter$279$17906 = NULL;
    panda$collections$Iterator* $tmp907;
    panda$collections$Iterator* $tmp908;
    org$pandalanguage$pandac$ASTNode* s924 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp925;
    panda$core$Object* $tmp926;
    panda$core$Int64 $tmp939;
    panda$core$Int64 $tmp941;
    panda$core$Int64 $tmp944;
    panda$collections$ImmutableArray* statements946 = NULL;
    panda$core$Int64 result948;
    panda$core$Int64 $tmp949;
    panda$collections$Iterator* Iter$290$17953 = NULL;
    panda$collections$Iterator* $tmp954;
    panda$collections$Iterator* $tmp955;
    org$pandalanguage$pandac$ASTNode* s971 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp972;
    panda$core$Object* $tmp973;
    panda$core$Int64 $tmp984;
    org$pandalanguage$pandac$ASTNode* value986 = NULL;
    panda$collections$ImmutableArray* whens988 = NULL;
    panda$collections$ImmutableArray* other990 = NULL;
    panda$core$Int64 result992;
    panda$collections$Iterator* Iter$296$17997 = NULL;
    panda$collections$Iterator* $tmp998;
    panda$collections$Iterator* $tmp999;
    org$pandalanguage$pandac$ASTNode* w1015 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1016;
    panda$core$Object* $tmp1017;
    panda$collections$Iterator* Iter$300$211029 = NULL;
    panda$collections$Iterator* $tmp1030;
    panda$collections$Iterator* $tmp1031;
    org$pandalanguage$pandac$ASTNode* s1047 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1048;
    panda$core$Object* $tmp1049;
    panda$core$Int64 $tmp1060;
    panda$core$Int64 $tmp1062;
    panda$core$Int64 $tmp1065;
    panda$core$Int64 $tmp1067;
    panda$core$Int64 $tmp1070;
    panda$core$Int64 $tmp1072;
    panda$core$Int64 $tmp1075;
    org$pandalanguage$pandac$ASTNode* base1077 = NULL;
    panda$core$Int64 $tmp1079;
    panda$core$Int64 $tmp1084;
    panda$core$Int64 $tmp1086;
    panda$core$Int64 $tmp1089;
    panda$core$Int64 $tmp1091;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1096;
    panda$core$Int64 $tmp1099;
    org$pandalanguage$pandac$ASTNode* value1101 = NULL;
    panda$core$Int64 $tmp1103;
    panda$core$Int64 $tmp1109;
    panda$core$Int64 $tmp1111;
    panda$core$Int64 $tmp1114;
    panda$core$Int64 $tmp1116;
    panda$core$Int64 $tmp1119;
    panda$core$Int64 $tmp1121;
    panda$core$Int64 $tmp1124;
    panda$core$Int64 $tmp1126;
    panda$core$Int64 $tmp1129;
    panda$core$Int64 $tmp1131;
    panda$core$Int64 $tmp1134;
    panda$core$Int64 $tmp1136;
    panda$core$Int64 $tmp1139;
    panda$collections$ImmutableArray* decls1141 = NULL;
    panda$core$Int64 result1143;
    panda$core$Int64 $tmp1144;
    panda$collections$Iterator* Iter$338$171148 = NULL;
    panda$collections$Iterator* $tmp1149;
    panda$collections$Iterator* $tmp1150;
    org$pandalanguage$pandac$ASTNode* decl1166 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1167;
    panda$core$Object* $tmp1168;
    panda$core$Int64 $tmp1179;
    panda$collections$ImmutableArray* tests1181 = NULL;
    panda$collections$ImmutableArray* statements1183 = NULL;
    panda$core$Int64 result1185;
    panda$core$Int64 $tmp1186;
    panda$collections$Iterator* Iter$344$171190 = NULL;
    panda$collections$Iterator* $tmp1191;
    panda$collections$Iterator* $tmp1192;
    org$pandalanguage$pandac$ASTNode* test1208 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1209;
    panda$core$Object* $tmp1210;
    panda$collections$Iterator* Iter$347$171222 = NULL;
    panda$collections$Iterator* $tmp1223;
    panda$collections$Iterator* $tmp1224;
    org$pandalanguage$pandac$ASTNode* s1240 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1241;
    panda$core$Object* $tmp1242;
    panda$core$Int64 $tmp1253;
    org$pandalanguage$pandac$ASTNode* test1255 = NULL;
    panda$collections$ImmutableArray* statements1257 = NULL;
    panda$core$Int64 result1259;
    panda$collections$Iterator* Iter$353$171264 = NULL;
    panda$collections$Iterator* $tmp1265;
    panda$collections$Iterator* $tmp1266;
    org$pandalanguage$pandac$ASTNode* s1282 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1283;
    panda$core$Object* $tmp1284;
    panda$core$Bit $tmp1295;
    panda$core$String* $tmp1299;
    panda$core$String* $tmp1300;
    int $tmp644;
    {
        $tmp646 = p_node;
        $match$225_9645 = $tmp646;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$Int64$init$builtin_int64(&$tmp647, 1);
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp647);
        if ($tmp648.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp650 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            test649 = *$tmp650;
            panda$core$Int64 $tmp652 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test649);
            $returnValue651 = $tmp652;
            $tmp644 = 0;
            goto $l642;
            $l653:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp655, 2);
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp655);
        if ($tmp656.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp657, 0);
            $returnValue651 = $tmp657;
            $tmp644 = 1;
            goto $l642;
            $l658:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp660, 3);
        panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp660);
        if ($tmp661.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp662, 0);
            $returnValue651 = $tmp662;
            $tmp644 = 2;
            goto $l642;
            $l663:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp665, 4);
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp665);
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp668 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            left667 = *$tmp668;
            org$pandalanguage$pandac$ASTNode** $tmp670 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 32));
            right669 = *$tmp670;
            panda$core$Int64$init$builtin_int64(&$tmp671, 1);
            panda$core$Int64 $tmp672 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left667);
            panda$core$Int64 $tmp673 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp671, $tmp672);
            panda$core$Int64 $tmp674 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right669);
            panda$core$Int64 $tmp675 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp673, $tmp674);
            $returnValue651 = $tmp675;
            $tmp644 = 3;
            goto $l642;
            $l676:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp678, 5);
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp678);
        if ($tmp679.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp680, 1);
            $returnValue651 = $tmp680;
            $tmp644 = 4;
            goto $l642;
            $l681:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp683, 6);
        panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp683);
        if ($tmp684.value) {
        {
            panda$collections$ImmutableArray** $tmp686 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 16));
            statements685 = *$tmp686;
            panda$core$Int64$init$builtin_int64(&$tmp688, 0);
            result687 = $tmp688;
            {
                int $tmp691;
                {
                    ITable* $tmp695 = ((panda$collections$Iterable*) statements685)->$class->itable;
                    while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp695 = $tmp695->next;
                    }
                    $fn697 $tmp696 = $tmp695->methods[0];
                    panda$collections$Iterator* $tmp698 = $tmp696(((panda$collections$Iterable*) statements685));
                    $tmp694 = $tmp698;
                    $tmp693 = $tmp694;
                    Iter$238$17692 = $tmp693;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
                    $l699:;
                    ITable* $tmp702 = Iter$238$17692->$class->itable;
                    while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp702 = $tmp702->next;
                    }
                    $fn704 $tmp703 = $tmp702->methods[0];
                    panda$core$Bit $tmp705 = $tmp703(Iter$238$17692);
                    panda$core$Bit $tmp706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp705);
                    bool $tmp701 = $tmp706.value;
                    if (!$tmp701) goto $l700;
                    {
                        int $tmp709;
                        {
                            ITable* $tmp713 = Iter$238$17692->$class->itable;
                            while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp713 = $tmp713->next;
                            }
                            $fn715 $tmp714 = $tmp713->methods[1];
                            panda$core$Object* $tmp716 = $tmp714(Iter$238$17692);
                            $tmp712 = $tmp716;
                            $tmp711 = ((org$pandalanguage$pandac$ASTNode*) $tmp712);
                            s710 = $tmp711;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp711));
                            panda$core$Panda$unref$panda$core$Object($tmp712);
                            panda$core$Int64 $tmp717 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s710);
                            panda$core$Int64 $tmp718 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result687, $tmp717);
                            result687 = $tmp718;
                        }
                        $tmp709 = -1;
                        goto $l707;
                        $l707:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s710));
                        s710 = NULL;
                        switch ($tmp709) {
                            case -1: goto $l719;
                        }
                        $l719:;
                    }
                    goto $l699;
                    $l700:;
                }
                $tmp691 = -1;
                goto $l689;
                $l689:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$238$17692));
                Iter$238$17692 = NULL;
                switch ($tmp691) {
                    case -1: goto $l720;
                }
                $l720:;
            }
            $returnValue651 = result687;
            $tmp644 = 5;
            goto $l642;
            $l721:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp723, 7);
        panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp723);
        if ($tmp724.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp725, 1);
            $returnValue651 = $tmp725;
            $tmp644 = 6;
            goto $l642;
            $l726:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp728, 8);
        panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp728);
        if ($tmp729.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp731 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            target730 = *$tmp731;
            panda$collections$ImmutableArray** $tmp733 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            args732 = *$tmp733;
            panda$core$Int64 $tmp735 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target730);
            result734 = $tmp735;
            {
                int $tmp738;
                {
                    ITable* $tmp742 = ((panda$collections$Iterable*) args732)->$class->itable;
                    while ($tmp742->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp742 = $tmp742->next;
                    }
                    $fn744 $tmp743 = $tmp742->methods[0];
                    panda$collections$Iterator* $tmp745 = $tmp743(((panda$collections$Iterable*) args732));
                    $tmp741 = $tmp745;
                    $tmp740 = $tmp741;
                    Iter$246$17739 = $tmp740;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp740));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
                    $l746:;
                    ITable* $tmp749 = Iter$246$17739->$class->itable;
                    while ($tmp749->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp749 = $tmp749->next;
                    }
                    $fn751 $tmp750 = $tmp749->methods[0];
                    panda$core$Bit $tmp752 = $tmp750(Iter$246$17739);
                    panda$core$Bit $tmp753 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp752);
                    bool $tmp748 = $tmp753.value;
                    if (!$tmp748) goto $l747;
                    {
                        int $tmp756;
                        {
                            ITable* $tmp760 = Iter$246$17739->$class->itable;
                            while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp760 = $tmp760->next;
                            }
                            $fn762 $tmp761 = $tmp760->methods[1];
                            panda$core$Object* $tmp763 = $tmp761(Iter$246$17739);
                            $tmp759 = $tmp763;
                            $tmp758 = ((org$pandalanguage$pandac$ASTNode*) $tmp759);
                            a757 = $tmp758;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp758));
                            panda$core$Panda$unref$panda$core$Object($tmp759);
                            panda$core$Int64 $tmp764 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a757);
                            panda$core$Int64 $tmp765 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result734, $tmp764);
                            result734 = $tmp765;
                        }
                        $tmp756 = -1;
                        goto $l754;
                        $l754:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a757));
                        a757 = NULL;
                        switch ($tmp756) {
                            case -1: goto $l766;
                        }
                        $l766:;
                    }
                    goto $l746;
                    $l747:;
                }
                $tmp738 = -1;
                goto $l736;
                $l736:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$246$17739));
                Iter$246$17739 = NULL;
                switch ($tmp738) {
                    case -1: goto $l767;
                }
                $l767:;
            }
            $returnValue651 = result734;
            $tmp644 = 7;
            goto $l642;
            $l768:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp770, 10);
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp770);
        if ($tmp771.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp773 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            base772 = *$tmp773;
            panda$core$Int64 $tmp774 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base772);
            $returnValue651 = $tmp774;
            $tmp644 = 8;
            goto $l642;
            $l775:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp777, 12);
        panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp777);
        if ($tmp778.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp779, 1);
            $returnValue651 = $tmp779;
            $tmp644 = 9;
            goto $l642;
            $l780:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp782, 13);
        panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp782);
        if ($tmp783.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp785 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 24));
            value784 = *$tmp785;
            if (((panda$core$Bit) { value784 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp786, 0);
                $returnValue651 = $tmp786;
                $tmp644 = 10;
                goto $l642;
                $l787:;
                return $returnValue651;
            }
            }
            panda$core$Int64 $tmp789 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value784);
            $returnValue651 = $tmp789;
            $tmp644 = 11;
            goto $l642;
            $l790:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp792, 14);
        panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp792);
        if ($tmp793.value) {
        {
            panda$collections$ImmutableArray** $tmp795 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            statements794 = *$tmp795;
            org$pandalanguage$pandac$ASTNode** $tmp797 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 32));
            test796 = *$tmp797;
            panda$core$Int64 $tmp799 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test796);
            result798 = $tmp799;
            {
                int $tmp802;
                {
                    ITable* $tmp806 = ((panda$collections$Iterable*) statements794)->$class->itable;
                    while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp806 = $tmp806->next;
                    }
                    $fn808 $tmp807 = $tmp806->methods[0];
                    panda$collections$Iterator* $tmp809 = $tmp807(((panda$collections$Iterable*) statements794));
                    $tmp805 = $tmp809;
                    $tmp804 = $tmp805;
                    Iter$261$17803 = $tmp804;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                    $l810:;
                    ITable* $tmp813 = Iter$261$17803->$class->itable;
                    while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp813 = $tmp813->next;
                    }
                    $fn815 $tmp814 = $tmp813->methods[0];
                    panda$core$Bit $tmp816 = $tmp814(Iter$261$17803);
                    panda$core$Bit $tmp817 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp816);
                    bool $tmp812 = $tmp817.value;
                    if (!$tmp812) goto $l811;
                    {
                        int $tmp820;
                        {
                            ITable* $tmp824 = Iter$261$17803->$class->itable;
                            while ($tmp824->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp824 = $tmp824->next;
                            }
                            $fn826 $tmp825 = $tmp824->methods[1];
                            panda$core$Object* $tmp827 = $tmp825(Iter$261$17803);
                            $tmp823 = $tmp827;
                            $tmp822 = ((org$pandalanguage$pandac$ASTNode*) $tmp823);
                            s821 = $tmp822;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
                            panda$core$Panda$unref$panda$core$Object($tmp823);
                            panda$core$Int64 $tmp828 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s821);
                            panda$core$Int64 $tmp829 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result798, $tmp828);
                            result798 = $tmp829;
                        }
                        $tmp820 = -1;
                        goto $l818;
                        $l818:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s821));
                        s821 = NULL;
                        switch ($tmp820) {
                            case -1: goto $l830;
                        }
                        $l830:;
                    }
                    goto $l810;
                    $l811:;
                }
                $tmp802 = -1;
                goto $l800;
                $l800:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$261$17803));
                Iter$261$17803 = NULL;
                switch ($tmp802) {
                    case -1: goto $l831;
                }
                $l831:;
            }
            $returnValue651 = result798;
            $tmp644 = 12;
            goto $l642;
            $l832:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp834, 15);
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp834);
        if ($tmp835.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp837 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            base836 = *$tmp837;
            panda$core$Int64 $tmp838 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base836);
            $returnValue651 = $tmp838;
            $tmp644 = 13;
            goto $l642;
            $l839:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp841, 18);
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp841);
        if ($tmp842.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp844 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 32));
            list843 = *$tmp844;
            panda$collections$ImmutableArray** $tmp846 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 40));
            statements845 = *$tmp846;
            panda$core$Int64 $tmp848 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list843);
            result847 = $tmp848;
            {
                int $tmp851;
                {
                    ITable* $tmp855 = ((panda$collections$Iterable*) statements845)->$class->itable;
                    while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp855 = $tmp855->next;
                    }
                    $fn857 $tmp856 = $tmp855->methods[0];
                    panda$collections$Iterator* $tmp858 = $tmp856(((panda$collections$Iterable*) statements845));
                    $tmp854 = $tmp858;
                    $tmp853 = $tmp854;
                    Iter$269$17852 = $tmp853;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
                    $l859:;
                    ITable* $tmp862 = Iter$269$17852->$class->itable;
                    while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp862 = $tmp862->next;
                    }
                    $fn864 $tmp863 = $tmp862->methods[0];
                    panda$core$Bit $tmp865 = $tmp863(Iter$269$17852);
                    panda$core$Bit $tmp866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp865);
                    bool $tmp861 = $tmp866.value;
                    if (!$tmp861) goto $l860;
                    {
                        int $tmp869;
                        {
                            ITable* $tmp873 = Iter$269$17852->$class->itable;
                            while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp873 = $tmp873->next;
                            }
                            $fn875 $tmp874 = $tmp873->methods[1];
                            panda$core$Object* $tmp876 = $tmp874(Iter$269$17852);
                            $tmp872 = $tmp876;
                            $tmp871 = ((org$pandalanguage$pandac$ASTNode*) $tmp872);
                            s870 = $tmp871;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp871));
                            panda$core$Panda$unref$panda$core$Object($tmp872);
                            panda$core$Int64 $tmp877 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s870);
                            panda$core$Int64 $tmp878 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result847, $tmp877);
                            result847 = $tmp878;
                        }
                        $tmp869 = -1;
                        goto $l867;
                        $l867:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s870));
                        s870 = NULL;
                        switch ($tmp869) {
                            case -1: goto $l879;
                        }
                        $l879:;
                    }
                    goto $l859;
                    $l860:;
                }
                $tmp851 = -1;
                goto $l849;
                $l849:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$269$17852));
                Iter$269$17852 = NULL;
                switch ($tmp851) {
                    case -1: goto $l880;
                }
                $l880:;
            }
            $returnValue651 = result847;
            $tmp644 = 14;
            goto $l642;
            $l881:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp883, 19);
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp883);
        if ($tmp884.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp885, 0);
            $returnValue651 = $tmp885;
            $tmp644 = 15;
            goto $l642;
            $l886:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp888, 20);
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp888);
        if ($tmp889.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp890, 1);
            $returnValue651 = $tmp890;
            $tmp644 = 16;
            goto $l642;
            $l891:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp893, 21);
        panda$core$Bit $tmp894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp893);
        if ($tmp894.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp896 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            test895 = *$tmp896;
            panda$collections$ImmutableArray** $tmp898 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            ifTrue897 = *$tmp898;
            org$pandalanguage$pandac$ASTNode** $tmp900 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 32));
            ifFalse899 = *$tmp900;
            panda$core$Int64 $tmp902 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test895);
            result901 = $tmp902;
            {
                int $tmp905;
                {
                    ITable* $tmp909 = ((panda$collections$Iterable*) ifTrue897)->$class->itable;
                    while ($tmp909->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp909 = $tmp909->next;
                    }
                    $fn911 $tmp910 = $tmp909->methods[0];
                    panda$collections$Iterator* $tmp912 = $tmp910(((panda$collections$Iterable*) ifTrue897));
                    $tmp908 = $tmp912;
                    $tmp907 = $tmp908;
                    Iter$279$17906 = $tmp907;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp907));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
                    $l913:;
                    ITable* $tmp916 = Iter$279$17906->$class->itable;
                    while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp916 = $tmp916->next;
                    }
                    $fn918 $tmp917 = $tmp916->methods[0];
                    panda$core$Bit $tmp919 = $tmp917(Iter$279$17906);
                    panda$core$Bit $tmp920 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp919);
                    bool $tmp915 = $tmp920.value;
                    if (!$tmp915) goto $l914;
                    {
                        int $tmp923;
                        {
                            ITable* $tmp927 = Iter$279$17906->$class->itable;
                            while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp927 = $tmp927->next;
                            }
                            $fn929 $tmp928 = $tmp927->methods[1];
                            panda$core$Object* $tmp930 = $tmp928(Iter$279$17906);
                            $tmp926 = $tmp930;
                            $tmp925 = ((org$pandalanguage$pandac$ASTNode*) $tmp926);
                            s924 = $tmp925;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
                            panda$core$Panda$unref$panda$core$Object($tmp926);
                            panda$core$Int64 $tmp931 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s924);
                            panda$core$Int64 $tmp932 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result901, $tmp931);
                            result901 = $tmp932;
                        }
                        $tmp923 = -1;
                        goto $l921;
                        $l921:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s924));
                        s924 = NULL;
                        switch ($tmp923) {
                            case -1: goto $l933;
                        }
                        $l933:;
                    }
                    goto $l913;
                    $l914:;
                }
                $tmp905 = -1;
                goto $l903;
                $l903:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$279$17906));
                Iter$279$17906 = NULL;
                switch ($tmp905) {
                    case -1: goto $l934;
                }
                $l934:;
            }
            if (((panda$core$Bit) { ifFalse899 != NULL }).value) {
            {
                panda$core$Int64 $tmp935 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse899);
                panda$core$Int64 $tmp936 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result901, $tmp935);
                result901 = $tmp936;
            }
            }
            $returnValue651 = result901;
            $tmp644 = 17;
            goto $l642;
            $l937:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp939, 22);
        panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp939);
        if ($tmp940.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp941, 1);
            $returnValue651 = $tmp941;
            $tmp644 = 18;
            goto $l642;
            $l942:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp944, 24);
        panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp944);
        if ($tmp945.value) {
        {
            panda$collections$ImmutableArray** $tmp947 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            statements946 = *$tmp947;
            panda$core$Int64$init$builtin_int64(&$tmp949, 0);
            result948 = $tmp949;
            {
                int $tmp952;
                {
                    ITable* $tmp956 = ((panda$collections$Iterable*) statements946)->$class->itable;
                    while ($tmp956->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp956 = $tmp956->next;
                    }
                    $fn958 $tmp957 = $tmp956->methods[0];
                    panda$collections$Iterator* $tmp959 = $tmp957(((panda$collections$Iterable*) statements946));
                    $tmp955 = $tmp959;
                    $tmp954 = $tmp955;
                    Iter$290$17953 = $tmp954;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp954));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
                    $l960:;
                    ITable* $tmp963 = Iter$290$17953->$class->itable;
                    while ($tmp963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp963 = $tmp963->next;
                    }
                    $fn965 $tmp964 = $tmp963->methods[0];
                    panda$core$Bit $tmp966 = $tmp964(Iter$290$17953);
                    panda$core$Bit $tmp967 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp966);
                    bool $tmp962 = $tmp967.value;
                    if (!$tmp962) goto $l961;
                    {
                        int $tmp970;
                        {
                            ITable* $tmp974 = Iter$290$17953->$class->itable;
                            while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp974 = $tmp974->next;
                            }
                            $fn976 $tmp975 = $tmp974->methods[1];
                            panda$core$Object* $tmp977 = $tmp975(Iter$290$17953);
                            $tmp973 = $tmp977;
                            $tmp972 = ((org$pandalanguage$pandac$ASTNode*) $tmp973);
                            s971 = $tmp972;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
                            panda$core$Panda$unref$panda$core$Object($tmp973);
                            panda$core$Int64 $tmp978 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s971);
                            panda$core$Int64 $tmp979 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result948, $tmp978);
                            result948 = $tmp979;
                        }
                        $tmp970 = -1;
                        goto $l968;
                        $l968:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s971));
                        s971 = NULL;
                        switch ($tmp970) {
                            case -1: goto $l980;
                        }
                        $l980:;
                    }
                    goto $l960;
                    $l961:;
                }
                $tmp952 = -1;
                goto $l950;
                $l950:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$290$17953));
                Iter$290$17953 = NULL;
                switch ($tmp952) {
                    case -1: goto $l981;
                }
                $l981:;
            }
            $returnValue651 = result948;
            $tmp644 = 19;
            goto $l642;
            $l982:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp984, 25);
        panda$core$Bit $tmp985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp984);
        if ($tmp985.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp987 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            value986 = *$tmp987;
            panda$collections$ImmutableArray** $tmp989 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            whens988 = *$tmp989;
            panda$collections$ImmutableArray** $tmp991 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 32));
            other990 = *$tmp991;
            panda$core$Int64 $tmp993 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value986);
            result992 = $tmp993;
            {
                int $tmp996;
                {
                    ITable* $tmp1000 = ((panda$collections$Iterable*) whens988)->$class->itable;
                    while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1000 = $tmp1000->next;
                    }
                    $fn1002 $tmp1001 = $tmp1000->methods[0];
                    panda$collections$Iterator* $tmp1003 = $tmp1001(((panda$collections$Iterable*) whens988));
                    $tmp999 = $tmp1003;
                    $tmp998 = $tmp999;
                    Iter$296$17997 = $tmp998;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                    $l1004:;
                    ITable* $tmp1007 = Iter$296$17997->$class->itable;
                    while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1007 = $tmp1007->next;
                    }
                    $fn1009 $tmp1008 = $tmp1007->methods[0];
                    panda$core$Bit $tmp1010 = $tmp1008(Iter$296$17997);
                    panda$core$Bit $tmp1011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1010);
                    bool $tmp1006 = $tmp1011.value;
                    if (!$tmp1006) goto $l1005;
                    {
                        int $tmp1014;
                        {
                            ITable* $tmp1018 = Iter$296$17997->$class->itable;
                            while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1018 = $tmp1018->next;
                            }
                            $fn1020 $tmp1019 = $tmp1018->methods[1];
                            panda$core$Object* $tmp1021 = $tmp1019(Iter$296$17997);
                            $tmp1017 = $tmp1021;
                            $tmp1016 = ((org$pandalanguage$pandac$ASTNode*) $tmp1017);
                            w1015 = $tmp1016;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                            panda$core$Panda$unref$panda$core$Object($tmp1017);
                            panda$core$Int64 $tmp1022 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w1015);
                            panda$core$Int64 $tmp1023 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result992, $tmp1022);
                            result992 = $tmp1023;
                        }
                        $tmp1014 = -1;
                        goto $l1012;
                        $l1012:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1015));
                        w1015 = NULL;
                        switch ($tmp1014) {
                            case -1: goto $l1024;
                        }
                        $l1024:;
                    }
                    goto $l1004;
                    $l1005:;
                }
                $tmp996 = -1;
                goto $l994;
                $l994:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$17997));
                Iter$296$17997 = NULL;
                switch ($tmp996) {
                    case -1: goto $l1025;
                }
                $l1025:;
            }
            if (((panda$core$Bit) { other990 != NULL }).value) {
            {
                {
                    int $tmp1028;
                    {
                        ITable* $tmp1032 = ((panda$collections$Iterable*) other990)->$class->itable;
                        while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1032 = $tmp1032->next;
                        }
                        $fn1034 $tmp1033 = $tmp1032->methods[0];
                        panda$collections$Iterator* $tmp1035 = $tmp1033(((panda$collections$Iterable*) other990));
                        $tmp1031 = $tmp1035;
                        $tmp1030 = $tmp1031;
                        Iter$300$211029 = $tmp1030;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
                        $l1036:;
                        ITable* $tmp1039 = Iter$300$211029->$class->itable;
                        while ($tmp1039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1039 = $tmp1039->next;
                        }
                        $fn1041 $tmp1040 = $tmp1039->methods[0];
                        panda$core$Bit $tmp1042 = $tmp1040(Iter$300$211029);
                        panda$core$Bit $tmp1043 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1042);
                        bool $tmp1038 = $tmp1043.value;
                        if (!$tmp1038) goto $l1037;
                        {
                            int $tmp1046;
                            {
                                ITable* $tmp1050 = Iter$300$211029->$class->itable;
                                while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1050 = $tmp1050->next;
                                }
                                $fn1052 $tmp1051 = $tmp1050->methods[1];
                                panda$core$Object* $tmp1053 = $tmp1051(Iter$300$211029);
                                $tmp1049 = $tmp1053;
                                $tmp1048 = ((org$pandalanguage$pandac$ASTNode*) $tmp1049);
                                s1047 = $tmp1048;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
                                panda$core$Panda$unref$panda$core$Object($tmp1049);
                                panda$core$Int64 $tmp1054 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1047);
                                panda$core$Int64 $tmp1055 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result992, $tmp1054);
                                result992 = $tmp1055;
                            }
                            $tmp1046 = -1;
                            goto $l1044;
                            $l1044:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1047));
                            s1047 = NULL;
                            switch ($tmp1046) {
                                case -1: goto $l1056;
                            }
                            $l1056:;
                        }
                        goto $l1036;
                        $l1037:;
                    }
                    $tmp1028 = -1;
                    goto $l1026;
                    $l1026:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$300$211029));
                    Iter$300$211029 = NULL;
                    switch ($tmp1028) {
                        case -1: goto $l1057;
                    }
                    $l1057:;
                }
            }
            }
            $returnValue651 = result992;
            $tmp644 = 20;
            goto $l642;
            $l1058:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1060, 26);
        panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1060);
        if ($tmp1061.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1062, 10);
            $returnValue651 = $tmp1062;
            $tmp644 = 21;
            goto $l642;
            $l1063:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1065, 28);
        panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1065);
        if ($tmp1066.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1067, 1);
            $returnValue651 = $tmp1067;
            $tmp644 = 22;
            goto $l642;
            $l1068:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1070, 29);
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1070);
        if ($tmp1071.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1072, 0);
            $returnValue651 = $tmp1072;
            $tmp644 = 23;
            goto $l642;
            $l1073:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1075, 32);
        panda$core$Bit $tmp1076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1075);
        if ($tmp1076.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1078 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 24));
            base1077 = *$tmp1078;
            panda$core$Int64$init$builtin_int64(&$tmp1079, 1);
            panda$core$Int64 $tmp1080 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1077);
            panda$core$Int64 $tmp1081 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1079, $tmp1080);
            $returnValue651 = $tmp1081;
            $tmp644 = 24;
            goto $l642;
            $l1082:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1084, 33);
        panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1084);
        if ($tmp1085.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1086, 1);
            $returnValue651 = $tmp1086;
            $tmp644 = 25;
            goto $l642;
            $l1087:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1089, 34);
        panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1089);
        if ($tmp1090.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1091, 1);
            $returnValue651 = $tmp1091;
            $tmp644 = 26;
            goto $l642;
            $l1092:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1094, 35);
        panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1094);
        if ($tmp1095.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1096, 1);
            $returnValue651 = $tmp1096;
            $tmp644 = 27;
            goto $l642;
            $l1097:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1099, 36);
        panda$core$Bit $tmp1100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1099);
        if ($tmp1100.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1102 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 16));
            value1101 = *$tmp1102;
            if (((panda$core$Bit) { value1101 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1103, 0);
                $returnValue651 = $tmp1103;
                $tmp644 = 28;
                goto $l642;
                $l1104:;
                return $returnValue651;
            }
            }
            panda$core$Int64 $tmp1106 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1101);
            $returnValue651 = $tmp1106;
            $tmp644 = 29;
            goto $l642;
            $l1107:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1109, 37);
        panda$core$Bit $tmp1110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1109);
        if ($tmp1110.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1111, 1);
            $returnValue651 = $tmp1111;
            $tmp644 = 30;
            goto $l642;
            $l1112:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1114, 38);
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1114);
        if ($tmp1115.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1116, 1);
            $returnValue651 = $tmp1116;
            $tmp644 = 31;
            goto $l642;
            $l1117:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1119, 39);
        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1119);
        if ($tmp1120.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1121, 1);
            $returnValue651 = $tmp1121;
            $tmp644 = 32;
            goto $l642;
            $l1122:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1124, 42);
        panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1124);
        if ($tmp1125.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1126, 0);
            $returnValue651 = $tmp1126;
            $tmp644 = 33;
            goto $l642;
            $l1127:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1129, 43);
        panda$core$Bit $tmp1130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1129);
        if ($tmp1130.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1131, 10);
            $returnValue651 = $tmp1131;
            $tmp644 = 34;
            goto $l642;
            $l1132:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1134, 45);
        panda$core$Bit $tmp1135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1134);
        if ($tmp1135.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1136, 10);
            $returnValue651 = $tmp1136;
            $tmp644 = 35;
            goto $l642;
            $l1137:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1139, 47);
        panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1139);
        if ($tmp1140.value) {
        {
            panda$collections$ImmutableArray** $tmp1142 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            decls1141 = *$tmp1142;
            panda$core$Int64$init$builtin_int64(&$tmp1144, 0);
            result1143 = $tmp1144;
            {
                int $tmp1147;
                {
                    ITable* $tmp1151 = ((panda$collections$Iterable*) decls1141)->$class->itable;
                    while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1151 = $tmp1151->next;
                    }
                    $fn1153 $tmp1152 = $tmp1151->methods[0];
                    panda$collections$Iterator* $tmp1154 = $tmp1152(((panda$collections$Iterable*) decls1141));
                    $tmp1150 = $tmp1154;
                    $tmp1149 = $tmp1150;
                    Iter$338$171148 = $tmp1149;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                    $l1155:;
                    ITable* $tmp1158 = Iter$338$171148->$class->itable;
                    while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1158 = $tmp1158->next;
                    }
                    $fn1160 $tmp1159 = $tmp1158->methods[0];
                    panda$core$Bit $tmp1161 = $tmp1159(Iter$338$171148);
                    panda$core$Bit $tmp1162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1161);
                    bool $tmp1157 = $tmp1162.value;
                    if (!$tmp1157) goto $l1156;
                    {
                        int $tmp1165;
                        {
                            ITable* $tmp1169 = Iter$338$171148->$class->itable;
                            while ($tmp1169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1169 = $tmp1169->next;
                            }
                            $fn1171 $tmp1170 = $tmp1169->methods[1];
                            panda$core$Object* $tmp1172 = $tmp1170(Iter$338$171148);
                            $tmp1168 = $tmp1172;
                            $tmp1167 = ((org$pandalanguage$pandac$ASTNode*) $tmp1168);
                            decl1166 = $tmp1167;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1167));
                            panda$core$Panda$unref$panda$core$Object($tmp1168);
                            panda$core$Int64 $tmp1173 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1166);
                            panda$core$Int64 $tmp1174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1143, $tmp1173);
                            result1143 = $tmp1174;
                        }
                        $tmp1165 = -1;
                        goto $l1163;
                        $l1163:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1166));
                        decl1166 = NULL;
                        switch ($tmp1165) {
                            case -1: goto $l1175;
                        }
                        $l1175:;
                    }
                    goto $l1155;
                    $l1156:;
                }
                $tmp1147 = -1;
                goto $l1145;
                $l1145:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$171148));
                Iter$338$171148 = NULL;
                switch ($tmp1147) {
                    case -1: goto $l1176;
                }
                $l1176:;
            }
            $returnValue651 = result1143;
            $tmp644 = 36;
            goto $l642;
            $l1177:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1179, 48);
        panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1179);
        if ($tmp1180.value) {
        {
            panda$collections$ImmutableArray** $tmp1182 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 16));
            tests1181 = *$tmp1182;
            panda$collections$ImmutableArray** $tmp1184 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 24));
            statements1183 = *$tmp1184;
            panda$core$Int64$init$builtin_int64(&$tmp1186, 0);
            result1185 = $tmp1186;
            {
                int $tmp1189;
                {
                    ITable* $tmp1193 = ((panda$collections$Iterable*) tests1181)->$class->itable;
                    while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1193 = $tmp1193->next;
                    }
                    $fn1195 $tmp1194 = $tmp1193->methods[0];
                    panda$collections$Iterator* $tmp1196 = $tmp1194(((panda$collections$Iterable*) tests1181));
                    $tmp1192 = $tmp1196;
                    $tmp1191 = $tmp1192;
                    Iter$344$171190 = $tmp1191;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
                    $l1197:;
                    ITable* $tmp1200 = Iter$344$171190->$class->itable;
                    while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1200 = $tmp1200->next;
                    }
                    $fn1202 $tmp1201 = $tmp1200->methods[0];
                    panda$core$Bit $tmp1203 = $tmp1201(Iter$344$171190);
                    panda$core$Bit $tmp1204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1203);
                    bool $tmp1199 = $tmp1204.value;
                    if (!$tmp1199) goto $l1198;
                    {
                        int $tmp1207;
                        {
                            ITable* $tmp1211 = Iter$344$171190->$class->itable;
                            while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1211 = $tmp1211->next;
                            }
                            $fn1213 $tmp1212 = $tmp1211->methods[1];
                            panda$core$Object* $tmp1214 = $tmp1212(Iter$344$171190);
                            $tmp1210 = $tmp1214;
                            $tmp1209 = ((org$pandalanguage$pandac$ASTNode*) $tmp1210);
                            test1208 = $tmp1209;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                            panda$core$Panda$unref$panda$core$Object($tmp1210);
                            panda$core$Int64 $tmp1215 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1208);
                            panda$core$Int64 $tmp1216 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1185, $tmp1215);
                            result1185 = $tmp1216;
                        }
                        $tmp1207 = -1;
                        goto $l1205;
                        $l1205:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1208));
                        test1208 = NULL;
                        switch ($tmp1207) {
                            case -1: goto $l1217;
                        }
                        $l1217:;
                    }
                    goto $l1197;
                    $l1198:;
                }
                $tmp1189 = -1;
                goto $l1187;
                $l1187:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$344$171190));
                Iter$344$171190 = NULL;
                switch ($tmp1189) {
                    case -1: goto $l1218;
                }
                $l1218:;
            }
            {
                int $tmp1221;
                {
                    ITable* $tmp1225 = ((panda$collections$Iterable*) statements1183)->$class->itable;
                    while ($tmp1225->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1225 = $tmp1225->next;
                    }
                    $fn1227 $tmp1226 = $tmp1225->methods[0];
                    panda$collections$Iterator* $tmp1228 = $tmp1226(((panda$collections$Iterable*) statements1183));
                    $tmp1224 = $tmp1228;
                    $tmp1223 = $tmp1224;
                    Iter$347$171222 = $tmp1223;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1223));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1224));
                    $l1229:;
                    ITable* $tmp1232 = Iter$347$171222->$class->itable;
                    while ($tmp1232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1232 = $tmp1232->next;
                    }
                    $fn1234 $tmp1233 = $tmp1232->methods[0];
                    panda$core$Bit $tmp1235 = $tmp1233(Iter$347$171222);
                    panda$core$Bit $tmp1236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1235);
                    bool $tmp1231 = $tmp1236.value;
                    if (!$tmp1231) goto $l1230;
                    {
                        int $tmp1239;
                        {
                            ITable* $tmp1243 = Iter$347$171222->$class->itable;
                            while ($tmp1243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1243 = $tmp1243->next;
                            }
                            $fn1245 $tmp1244 = $tmp1243->methods[1];
                            panda$core$Object* $tmp1246 = $tmp1244(Iter$347$171222);
                            $tmp1242 = $tmp1246;
                            $tmp1241 = ((org$pandalanguage$pandac$ASTNode*) $tmp1242);
                            s1240 = $tmp1241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
                            panda$core$Panda$unref$panda$core$Object($tmp1242);
                            panda$core$Int64 $tmp1247 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1240);
                            panda$core$Int64 $tmp1248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1185, $tmp1247);
                            result1185 = $tmp1248;
                        }
                        $tmp1239 = -1;
                        goto $l1237;
                        $l1237:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1240));
                        s1240 = NULL;
                        switch ($tmp1239) {
                            case -1: goto $l1249;
                        }
                        $l1249:;
                    }
                    goto $l1229;
                    $l1230:;
                }
                $tmp1221 = -1;
                goto $l1219;
                $l1219:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$347$171222));
                Iter$347$171222 = NULL;
                switch ($tmp1221) {
                    case -1: goto $l1250;
                }
                $l1250:;
            }
            $returnValue651 = result1185;
            $tmp644 = 37;
            goto $l642;
            $l1251:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1253, 49);
        panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9645->$rawValue, $tmp1253);
        if ($tmp1254.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1256 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9645->$data + 24));
            test1255 = *$tmp1256;
            panda$collections$ImmutableArray** $tmp1258 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9645->$data + 32));
            statements1257 = *$tmp1258;
            panda$core$Int64 $tmp1260 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1255);
            result1259 = $tmp1260;
            {
                int $tmp1263;
                {
                    ITable* $tmp1267 = ((panda$collections$Iterable*) statements1257)->$class->itable;
                    while ($tmp1267->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1267 = $tmp1267->next;
                    }
                    $fn1269 $tmp1268 = $tmp1267->methods[0];
                    panda$collections$Iterator* $tmp1270 = $tmp1268(((panda$collections$Iterable*) statements1257));
                    $tmp1266 = $tmp1270;
                    $tmp1265 = $tmp1266;
                    Iter$353$171264 = $tmp1265;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1265));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1266));
                    $l1271:;
                    ITable* $tmp1274 = Iter$353$171264->$class->itable;
                    while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1274 = $tmp1274->next;
                    }
                    $fn1276 $tmp1275 = $tmp1274->methods[0];
                    panda$core$Bit $tmp1277 = $tmp1275(Iter$353$171264);
                    panda$core$Bit $tmp1278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1277);
                    bool $tmp1273 = $tmp1278.value;
                    if (!$tmp1273) goto $l1272;
                    {
                        int $tmp1281;
                        {
                            ITable* $tmp1285 = Iter$353$171264->$class->itable;
                            while ($tmp1285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1285 = $tmp1285->next;
                            }
                            $fn1287 $tmp1286 = $tmp1285->methods[1];
                            panda$core$Object* $tmp1288 = $tmp1286(Iter$353$171264);
                            $tmp1284 = $tmp1288;
                            $tmp1283 = ((org$pandalanguage$pandac$ASTNode*) $tmp1284);
                            s1282 = $tmp1283;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1283));
                            panda$core$Panda$unref$panda$core$Object($tmp1284);
                            panda$core$Int64 $tmp1289 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1282);
                            panda$core$Int64 $tmp1290 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1259, $tmp1289);
                            result1259 = $tmp1290;
                        }
                        $tmp1281 = -1;
                        goto $l1279;
                        $l1279:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1282));
                        s1282 = NULL;
                        switch ($tmp1281) {
                            case -1: goto $l1291;
                        }
                        $l1291:;
                    }
                    goto $l1271;
                    $l1272:;
                }
                $tmp1263 = -1;
                goto $l1261;
                $l1261:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$353$171264));
                Iter$353$171264 = NULL;
                switch ($tmp1263) {
                    case -1: goto $l1292;
                }
                $l1292:;
            }
            $returnValue651 = result1259;
            $tmp644 = 38;
            goto $l642;
            $l1293:;
            return $returnValue651;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1295, false);
            if ($tmp1295.value) goto $l1296; else goto $l1297;
            $l1297:;
            panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1301, ((panda$core$Object*) p_node));
            $tmp1300 = $tmp1302;
            panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, &$s1303);
            $tmp1299 = $tmp1304;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1298, (panda$core$Int64) { 358 }, $tmp1299);
            abort();
            $l1296:;
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
        }
        }
        }
        }
    }
    $tmp644 = -1;
    goto $l642;
    $l642:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
    switch ($tmp644) {
        case 24: goto $l1082;
        case 7: goto $l768;
        case 17: goto $l937;
        case 8: goto $l775;
        case 5: goto $l721;
        case 6: goto $l726;
        case 18: goto $l942;
        case 36: goto $l1177;
        case 33: goto $l1127;
        case -1: goto $l1305;
        case 1: goto $l658;
        case 38: goto $l1293;
        case 11: goto $l790;
        case 2: goto $l663;
        case 29: goto $l1107;
        case 12: goto $l832;
        case 13: goto $l839;
        case 30: goto $l1112;
        case 34: goto $l1132;
        case 20: goto $l1058;
        case 0: goto $l653;
        case 21: goto $l1063;
        case 37: goto $l1251;
        case 32: goto $l1122;
        case 22: goto $l1068;
        case 27: goto $l1097;
        case 9: goto $l780;
        case 3: goto $l676;
        case 23: goto $l1073;
        case 28: goto $l1104;
        case 31: goto $l1117;
        case 14: goto $l881;
        case 15: goto $l886;
        case 35: goto $l1137;
        case 10: goto $l787;
        case 4: goto $l681;
        case 25: goto $l1087;
        case 16: goto $l891;
        case 19: goto $l982;
        case 26: goto $l1092;
    }
    $l1305:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1308;
    panda$core$Int64 $tmp1310;
    panda$core$Int64 c1319;
    panda$core$Int64 $tmp1320;
    panda$collections$Iterator* Iter$366$131324 = NULL;
    panda$collections$Iterator* $tmp1325;
    panda$collections$Iterator* $tmp1326;
    org$pandalanguage$pandac$ASTNode* s1342 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1343;
    panda$core$Object* $tmp1344;
    panda$core$Int64 $tmp1351;
    panda$core$Bit $returnValue1353;
    panda$core$Bit $tmp1354;
    panda$core$Bit $tmp1360;
    panda$core$Bit $tmp1362;
    panda$core$Object* $tmp1309 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1308 = $tmp1309;
    panda$core$Int64$init$builtin_int64(&$tmp1310, 0);
    panda$core$Bit $tmp1311 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1308)->settings->optimizationLevel, $tmp1310);
    bool $tmp1307 = $tmp1311.value;
    panda$core$Panda$unref$panda$core$Object($tmp1308);
    if (!$tmp1307) goto $l1312;
    panda$core$Bit $tmp1313 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1314 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1313);
    $tmp1307 = $tmp1314.value;
    $l1312:;
    panda$core$Bit $tmp1315 = { $tmp1307 };
    bool $tmp1306 = $tmp1315.value;
    if (!$tmp1306) goto $l1316;
    panda$core$Bit $tmp1317 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1306 = $tmp1317.value;
    $l1316:;
    panda$core$Bit $tmp1318 = { $tmp1306 };
    if ($tmp1318.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1320, 0);
        c1319 = $tmp1320;
        {
            int $tmp1323;
            {
                ITable* $tmp1327 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1327 = $tmp1327->next;
                }
                $fn1329 $tmp1328 = $tmp1327->methods[0];
                panda$collections$Iterator* $tmp1330 = $tmp1328(((panda$collections$Iterable*) p_statements));
                $tmp1326 = $tmp1330;
                $tmp1325 = $tmp1326;
                Iter$366$131324 = $tmp1325;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1325));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
                $l1331:;
                ITable* $tmp1334 = Iter$366$131324->$class->itable;
                while ($tmp1334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1334 = $tmp1334->next;
                }
                $fn1336 $tmp1335 = $tmp1334->methods[0];
                panda$core$Bit $tmp1337 = $tmp1335(Iter$366$131324);
                panda$core$Bit $tmp1338 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1337);
                bool $tmp1333 = $tmp1338.value;
                if (!$tmp1333) goto $l1332;
                {
                    int $tmp1341;
                    {
                        ITable* $tmp1345 = Iter$366$131324->$class->itable;
                        while ($tmp1345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1345 = $tmp1345->next;
                        }
                        $fn1347 $tmp1346 = $tmp1345->methods[1];
                        panda$core$Object* $tmp1348 = $tmp1346(Iter$366$131324);
                        $tmp1344 = $tmp1348;
                        $tmp1343 = ((org$pandalanguage$pandac$ASTNode*) $tmp1344);
                        s1342 = $tmp1343;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1343));
                        panda$core$Panda$unref$panda$core$Object($tmp1344);
                        panda$core$Int64 $tmp1349 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1342);
                        panda$core$Int64 $tmp1350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1319, $tmp1349);
                        c1319 = $tmp1350;
                        panda$core$Int64$init$builtin_int64(&$tmp1351, 10);
                        panda$core$Bit $tmp1352 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1319, $tmp1351);
                        if ($tmp1352.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1354, false);
                            $returnValue1353 = $tmp1354;
                            $tmp1341 = 0;
                            goto $l1339;
                            $l1355:;
                            $tmp1323 = 0;
                            goto $l1321;
                            $l1356:;
                            return $returnValue1353;
                        }
                        }
                    }
                    $tmp1341 = -1;
                    goto $l1339;
                    $l1339:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1342));
                    s1342 = NULL;
                    switch ($tmp1341) {
                        case 0: goto $l1355;
                        case -1: goto $l1358;
                    }
                    $l1358:;
                }
                goto $l1331;
                $l1332:;
            }
            $tmp1323 = -1;
            goto $l1321;
            $l1321:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$366$131324));
            Iter$366$131324 = NULL;
            switch ($tmp1323) {
                case 0: goto $l1356;
                case -1: goto $l1359;
            }
            $l1359:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1360, true);
        $returnValue1353 = $tmp1360;
        return $returnValue1353;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1362, false);
    $returnValue1353 = $tmp1362;
    return $returnValue1353;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1367 = NULL;
    panda$core$String* $tmp1368;
    panda$core$String* $tmp1369;
    org$pandalanguage$pandac$ASTNode* $match$387_131373 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1374;
    panda$core$Int64 $tmp1375;
    org$pandalanguage$pandac$Position position1377;
    panda$core$String* text1379 = NULL;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$Bit $tmp1383;
    org$pandalanguage$pandac$Annotations* annotations1388 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1389;
    org$pandalanguage$pandac$Annotations* $tmp1390;
    panda$core$Int64 $tmp1394;
    org$pandalanguage$pandac$Annotations* $tmp1402;
    panda$core$Int64 $tmp1403;
    panda$collections$Array* generics1405 = NULL;
    panda$collections$Array* $tmp1409;
    panda$collections$Array* $tmp1410;
    panda$collections$Array* $tmp1411;
    panda$core$String* fullName1413 = NULL;
    panda$core$String* $tmp1414;
    panda$core$String* $tmp1415;
    panda$core$String* $tmp1416;
    panda$core$String* $tmp1417;
    panda$core$String* $tmp1418;
    panda$collections$Iterator* Iter$402$131428 = NULL;
    panda$collections$Iterator* $tmp1429;
    panda$collections$Iterator* $tmp1430;
    org$pandalanguage$pandac$ASTNode* p1446 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1447;
    panda$core$Object* $tmp1448;
    panda$core$String* parameterName1453 = NULL;
    org$pandalanguage$pandac$Type* bound1454 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$405_171458 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    panda$core$Int64 $tmp1460;
    panda$core$String* id1462 = NULL;
    panda$core$String* $tmp1464;
    panda$core$String* $tmp1465;
    org$pandalanguage$pandac$Type* $tmp1466;
    org$pandalanguage$pandac$Type* $tmp1467;
    org$pandalanguage$pandac$Type* $tmp1468;
    panda$core$Int64 $tmp1470;
    panda$core$String* id1472 = NULL;
    org$pandalanguage$pandac$ASTNode* type1474 = NULL;
    panda$core$String* $tmp1476;
    panda$core$String* $tmp1477;
    org$pandalanguage$pandac$Type* $tmp1478;
    org$pandalanguage$pandac$Type* $tmp1479;
    org$pandalanguage$pandac$Type* $tmp1480;
    panda$core$Bit $tmp1482;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1487;
    panda$collections$Array* $tmp1494;
    panda$collections$Array* $tmp1495;
    panda$collections$Array* parameters1496 = NULL;
    panda$collections$Array* $tmp1497;
    panda$collections$Array* $tmp1498;
    panda$collections$Iterator* Iter$423$91503 = NULL;
    panda$collections$Iterator* $tmp1504;
    panda$collections$Iterator* $tmp1505;
    org$pandalanguage$pandac$ASTNode* p1521 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1522;
    panda$core$Object* $tmp1523;
    org$pandalanguage$pandac$ASTNode* $match$424_131531 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1532;
    panda$core$Int64 $tmp1533;
    panda$core$String* name1535 = NULL;
    org$pandalanguage$pandac$ASTNode* type1537 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1539;
    org$pandalanguage$pandac$Type* $tmp1541;
    panda$core$Bit $tmp1543;
    org$pandalanguage$pandac$Type* returnType1550 = NULL;
    org$pandalanguage$pandac$Type* $tmp1551;
    org$pandalanguage$pandac$Type* $tmp1552;
    org$pandalanguage$pandac$Type* $tmp1553;
    org$pandalanguage$pandac$Type* $tmp1555;
    org$pandalanguage$pandac$Type* $tmp1556;
    org$pandalanguage$pandac$Type* $tmp1557;
    panda$core$Int64 $tmp1560;
    org$pandalanguage$pandac$Type* $tmp1563;
    org$pandalanguage$pandac$Annotations* $tmp1572;
    panda$core$Int64 $tmp1573;
    panda$core$Int64 $tmp1577;
    panda$core$Int64 $tmp1580;
    panda$core$Int64 $tmp1582;
    org$pandalanguage$pandac$Annotations* $tmp1585;
    panda$core$Int64 $tmp1586;
    org$pandalanguage$pandac$MethodDecl* $returnValue1588;
    org$pandalanguage$pandac$MethodDecl* $tmp1589;
    org$pandalanguage$pandac$MethodDecl* $tmp1590;
    int $tmp1366;
    {
        memset(&doccomment1367, 0, sizeof(doccomment1367));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1368 = doccomment1367;
                $tmp1369 = NULL;
                doccomment1367 = $tmp1369;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
            }
        }
        }
        else {
        {
            int $tmp1372;
            {
                $tmp1374 = p_rawDoccomment;
                $match$387_131373 = $tmp1374;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
                panda$core$Int64$init$builtin_int64(&$tmp1375, 38);
                panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$387_131373->$rawValue, $tmp1375);
                if ($tmp1376.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1378 = ((org$pandalanguage$pandac$Position*) ((char*) $match$387_131373->$data + 0));
                    position1377 = *$tmp1378;
                    panda$core$String** $tmp1380 = ((panda$core$String**) ((char*) $match$387_131373->$data + 16));
                    text1379 = *$tmp1380;
                    {
                        $tmp1381 = doccomment1367;
                        $tmp1382 = text1379;
                        doccomment1367 = $tmp1382;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1382));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1383, false);
                    if ($tmp1383.value) goto $l1384; else goto $l1385;
                    $l1385:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1386, (panda$core$Int64) { 391 });
                    abort();
                    $l1384:;
                }
                }
            }
            $tmp1372 = -1;
            goto $l1370;
            $l1370:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
            switch ($tmp1372) {
                case -1: goto $l1387;
            }
            $l1387:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1391 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1390 = $tmp1391;
        $tmp1389 = $tmp1390;
        annotations1388 = $tmp1389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
        panda$core$Int64$init$builtin_int64(&$tmp1394, 2);
        panda$core$Bit $tmp1395 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1394);
        bool $tmp1393 = $tmp1395.value;
        if (!$tmp1393) goto $l1396;
        panda$core$Bit $tmp1397 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1393 = $tmp1397.value;
        $l1396:;
        panda$core$Bit $tmp1398 = { $tmp1393 };
        bool $tmp1392 = $tmp1398.value;
        if ($tmp1392) goto $l1399;
        panda$core$Bit $tmp1400 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1388);
        $tmp1392 = $tmp1400.value;
        $l1399:;
        panda$core$Bit $tmp1401 = { $tmp1392 };
        if ($tmp1401.value) {
        {
            $tmp1402 = annotations1388;
            panda$core$Int64$init$builtin_int64(&$tmp1403, 256);
            panda$core$Int64 $tmp1404 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1402->flags, $tmp1403);
            $tmp1402->flags = $tmp1404;
        }
        }
        memset(&generics1405, 0, sizeof(generics1405));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1408;
            {
                {
                    $tmp1409 = generics1405;
                    panda$collections$Array* $tmp1412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1412);
                    $tmp1411 = $tmp1412;
                    $tmp1410 = $tmp1411;
                    generics1405 = $tmp1410;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                }
                panda$core$String* $tmp1419 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1418 = $tmp1419;
                panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1420);
                $tmp1417 = $tmp1421;
                panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, p_name);
                $tmp1416 = $tmp1422;
                panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1423);
                $tmp1415 = $tmp1424;
                $tmp1414 = $tmp1415;
                fullName1413 = $tmp1414;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
                {
                    int $tmp1427;
                    {
                        ITable* $tmp1431 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1431->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1431 = $tmp1431->next;
                        }
                        $fn1433 $tmp1432 = $tmp1431->methods[0];
                        panda$collections$Iterator* $tmp1434 = $tmp1432(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1430 = $tmp1434;
                        $tmp1429 = $tmp1430;
                        Iter$402$131428 = $tmp1429;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1429));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
                        $l1435:;
                        ITable* $tmp1438 = Iter$402$131428->$class->itable;
                        while ($tmp1438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1438 = $tmp1438->next;
                        }
                        $fn1440 $tmp1439 = $tmp1438->methods[0];
                        panda$core$Bit $tmp1441 = $tmp1439(Iter$402$131428);
                        panda$core$Bit $tmp1442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1441);
                        bool $tmp1437 = $tmp1442.value;
                        if (!$tmp1437) goto $l1436;
                        {
                            int $tmp1445;
                            {
                                ITable* $tmp1449 = Iter$402$131428->$class->itable;
                                while ($tmp1449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1449 = $tmp1449->next;
                                }
                                $fn1451 $tmp1450 = $tmp1449->methods[1];
                                panda$core$Object* $tmp1452 = $tmp1450(Iter$402$131428);
                                $tmp1448 = $tmp1452;
                                $tmp1447 = ((org$pandalanguage$pandac$ASTNode*) $tmp1448);
                                p1446 = $tmp1447;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1447));
                                panda$core$Panda$unref$panda$core$Object($tmp1448);
                                memset(&parameterName1453, 0, sizeof(parameterName1453));
                                memset(&bound1454, 0, sizeof(bound1454));
                                int $tmp1457;
                                {
                                    $tmp1459 = p1446;
                                    $match$405_171458 = $tmp1459;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                    panda$core$Int64$init$builtin_int64(&$tmp1460, 20);
                                    panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$405_171458->$rawValue, $tmp1460);
                                    if ($tmp1461.value) {
                                    {
                                        panda$core$String** $tmp1463 = ((panda$core$String**) ((char*) $match$405_171458->$data + 16));
                                        id1462 = *$tmp1463;
                                        {
                                            $tmp1464 = parameterName1453;
                                            $tmp1465 = id1462;
                                            parameterName1453 = $tmp1465;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                                        }
                                        {
                                            $tmp1466 = bound1454;
                                            org$pandalanguage$pandac$Type* $tmp1469 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1468 = $tmp1469;
                                            $tmp1467 = $tmp1468;
                                            bound1454 = $tmp1467;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1467));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1470, 44);
                                    panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$405_171458->$rawValue, $tmp1470);
                                    if ($tmp1471.value) {
                                    {
                                        panda$core$String** $tmp1473 = ((panda$core$String**) ((char*) $match$405_171458->$data + 16));
                                        id1472 = *$tmp1473;
                                        org$pandalanguage$pandac$ASTNode** $tmp1475 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$405_171458->$data + 24));
                                        type1474 = *$tmp1475;
                                        {
                                            $tmp1476 = parameterName1453;
                                            $tmp1477 = id1472;
                                            parameterName1453 = $tmp1477;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                                        }
                                        {
                                            $tmp1478 = bound1454;
                                            org$pandalanguage$pandac$Type* $tmp1481 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1474);
                                            $tmp1480 = $tmp1481;
                                            $tmp1479 = $tmp1480;
                                            bound1454 = $tmp1479;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1482, false);
                                        if ($tmp1482.value) goto $l1483; else goto $l1484;
                                        $l1484:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1485, (panda$core$Int64) { 413 });
                                        abort();
                                        $l1483:;
                                    }
                                    }
                                    }
                                }
                                $tmp1457 = -1;
                                goto $l1455;
                                $l1455:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                switch ($tmp1457) {
                                    case -1: goto $l1486;
                                }
                                $l1486:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1488 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1490 = (($fn1489) p1446->$class->vtable[2])(p1446);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1488, $tmp1490, fullName1413, parameterName1453, bound1454);
                                $tmp1487 = $tmp1488;
                                panda$collections$Array$add$panda$collections$Array$T(generics1405, ((panda$core$Object*) $tmp1487));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1487));
                            }
                            $tmp1445 = -1;
                            goto $l1443;
                            $l1443:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1454));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1453));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1446));
                            p1446 = NULL;
                            switch ($tmp1445) {
                                case -1: goto $l1491;
                            }
                            $l1491:;
                        }
                        goto $l1435;
                        $l1436:;
                    }
                    $tmp1427 = -1;
                    goto $l1425;
                    $l1425:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$402$131428));
                    Iter$402$131428 = NULL;
                    switch ($tmp1427) {
                        case -1: goto $l1492;
                    }
                    $l1492:;
                }
            }
            $tmp1408 = -1;
            goto $l1406;
            $l1406:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1413));
            fullName1413 = NULL;
            switch ($tmp1408) {
                case -1: goto $l1493;
            }
            $l1493:;
        }
        }
        else {
        {
            {
                $tmp1494 = generics1405;
                $tmp1495 = NULL;
                generics1405 = $tmp1495;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
            }
        }
        }
        panda$collections$Array* $tmp1499 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1499);
        $tmp1498 = $tmp1499;
        $tmp1497 = $tmp1498;
        parameters1496 = $tmp1497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
        {
            int $tmp1502;
            {
                ITable* $tmp1506 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1506 = $tmp1506->next;
                }
                $fn1508 $tmp1507 = $tmp1506->methods[0];
                panda$collections$Iterator* $tmp1509 = $tmp1507(((panda$collections$Iterable*) p_rawParameters));
                $tmp1505 = $tmp1509;
                $tmp1504 = $tmp1505;
                Iter$423$91503 = $tmp1504;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
                $l1510:;
                ITable* $tmp1513 = Iter$423$91503->$class->itable;
                while ($tmp1513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1513 = $tmp1513->next;
                }
                $fn1515 $tmp1514 = $tmp1513->methods[0];
                panda$core$Bit $tmp1516 = $tmp1514(Iter$423$91503);
                panda$core$Bit $tmp1517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1516);
                bool $tmp1512 = $tmp1517.value;
                if (!$tmp1512) goto $l1511;
                {
                    int $tmp1520;
                    {
                        ITable* $tmp1524 = Iter$423$91503->$class->itable;
                        while ($tmp1524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1524 = $tmp1524->next;
                        }
                        $fn1526 $tmp1525 = $tmp1524->methods[1];
                        panda$core$Object* $tmp1527 = $tmp1525(Iter$423$91503);
                        $tmp1523 = $tmp1527;
                        $tmp1522 = ((org$pandalanguage$pandac$ASTNode*) $tmp1523);
                        p1521 = $tmp1522;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
                        panda$core$Panda$unref$panda$core$Object($tmp1523);
                        int $tmp1530;
                        {
                            $tmp1532 = p1521;
                            $match$424_131531 = $tmp1532;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1532));
                            panda$core$Int64$init$builtin_int64(&$tmp1533, 31);
                            panda$core$Bit $tmp1534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$424_131531->$rawValue, $tmp1533);
                            if ($tmp1534.value) {
                            {
                                panda$core$String** $tmp1536 = ((panda$core$String**) ((char*) $match$424_131531->$data + 16));
                                name1535 = *$tmp1536;
                                org$pandalanguage$pandac$ASTNode** $tmp1538 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$424_131531->$data + 24));
                                type1537 = *$tmp1538;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1540 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1542 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1537);
                                $tmp1541 = $tmp1542;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1540, name1535, $tmp1541);
                                $tmp1539 = $tmp1540;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1496, ((panda$core$Object*) $tmp1539));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1541));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1543, false);
                                if ($tmp1543.value) goto $l1544; else goto $l1545;
                                $l1545:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1546, (panda$core$Int64) { 428 });
                                abort();
                                $l1544:;
                            }
                            }
                        }
                        $tmp1530 = -1;
                        goto $l1528;
                        $l1528:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
                        switch ($tmp1530) {
                            case -1: goto $l1547;
                        }
                        $l1547:;
                    }
                    $tmp1520 = -1;
                    goto $l1518;
                    $l1518:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1521));
                    p1521 = NULL;
                    switch ($tmp1520) {
                        case -1: goto $l1548;
                    }
                    $l1548:;
                }
                goto $l1510;
                $l1511:;
            }
            $tmp1502 = -1;
            goto $l1500;
            $l1500:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$423$91503));
            Iter$423$91503 = NULL;
            switch ($tmp1502) {
                case -1: goto $l1549;
            }
            $l1549:;
        }
        memset(&returnType1550, 0, sizeof(returnType1550));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1551 = returnType1550;
                org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1553 = $tmp1554;
                $tmp1552 = $tmp1553;
                returnType1550 = $tmp1552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            }
        }
        }
        else {
        {
            {
                $tmp1555 = returnType1550;
                org$pandalanguage$pandac$Type* $tmp1558 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1557 = $tmp1558;
                $tmp1556 = $tmp1557;
                returnType1550 = $tmp1556;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1560, 1);
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1560);
        bool $tmp1559 = $tmp1561.value;
        if (!$tmp1559) goto $l1562;
        org$pandalanguage$pandac$Type* $tmp1564 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1563 = $tmp1564;
        panda$core$Bit $tmp1565 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1550, $tmp1563);
        $tmp1559 = $tmp1565.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
        $l1562:;
        panda$core$Bit $tmp1566 = { $tmp1559 };
        if ($tmp1566.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1567);
        }
        }
        bool $tmp1568 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1568) goto $l1569;
        panda$core$Bit $tmp1570 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1388, p_statements);
        $tmp1568 = $tmp1570.value;
        $l1569:;
        panda$core$Bit $tmp1571 = { $tmp1568 };
        if ($tmp1571.value) {
        {
            $tmp1572 = annotations1388;
            panda$core$Int64$init$builtin_int64(&$tmp1573, 1024);
            panda$core$Int64 $tmp1574 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1572->flags, $tmp1573);
            $tmp1572->flags = $tmp1574;
        }
        }
        bool $tmp1575 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1575) goto $l1576;
        panda$core$Int64$init$builtin_int64(&$tmp1577, 1);
        panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1577);
        $tmp1575 = $tmp1578.value;
        $l1576:;
        panda$core$Bit $tmp1579 = { $tmp1575 };
        if ($tmp1579.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1580, 512);
            panda$core$Int64 $tmp1581 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(annotations1388->flags, $tmp1580);
            panda$core$Int64$init$builtin_int64(&$tmp1582, 0);
            panda$core$Bit $tmp1583 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1581, $tmp1582);
            if ($tmp1583.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1584);
            }
            }
            $tmp1585 = annotations1388;
            panda$core$Int64$init$builtin_int64(&$tmp1586, 512);
            panda$core$Int64 $tmp1587 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1585->flags, $tmp1586);
            $tmp1585->flags = $tmp1587;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1591 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1591, p_owner, p_position, doccomment1367, annotations1388, p_kind, p_name, generics1405, parameters1496, returnType1550, p_statements);
        $tmp1590 = $tmp1591;
        $tmp1589 = $tmp1590;
        $returnValue1588 = $tmp1589;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
        $tmp1366 = 0;
        goto $l1364;
        $l1592:;
        return $returnValue1588;
    }
    $l1364:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1550));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1496));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1405));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1367));
    annotations1388 = NULL;
    parameters1496 = NULL;
    switch ($tmp1366) {
        case 0: goto $l1592;
    }
    $l1594:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$456_91598 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1599;
    panda$core$Int64 $tmp1600;
    org$pandalanguage$pandac$Position position1602;
    org$pandalanguage$pandac$ASTNode* dc1604 = NULL;
    panda$collections$ImmutableArray* annotations1606 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1608 = NULL;
    panda$core$Int64 $tmp1610;
    org$pandalanguage$pandac$Position position1612;
    org$pandalanguage$pandac$ASTNode* dc1614 = NULL;
    panda$collections$ImmutableArray* annotations1616 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1618;
    panda$core$String* name1620 = NULL;
    panda$collections$ImmutableArray* generics1622 = NULL;
    panda$collections$ImmutableArray* parameters1624 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1626 = NULL;
    panda$collections$ImmutableArray* statements1628 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1633 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1634;
    org$pandalanguage$pandac$MethodDecl* $tmp1635;
    panda$core$Int64 $tmp1638;
    org$pandalanguage$pandac$Position position1640;
    org$pandalanguage$pandac$ASTNode* dc1642 = NULL;
    panda$collections$ImmutableArray* annotations1644 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1646;
    panda$core$String* name1648 = NULL;
    panda$collections$ImmutableArray* generics1650 = NULL;
    panda$collections$ImmutableArray* supertypes1652 = NULL;
    panda$collections$ImmutableArray* members1654 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1659 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1660;
    org$pandalanguage$pandac$ClassDecl* $tmp1661;
    panda$core$Weak* $tmp1663;
    panda$core$Weak* $tmp1664;
    panda$core$Weak* $tmp1665;
    panda$core$String* $tmp1667;
    org$pandalanguage$pandac$Alias* $tmp1674;
    panda$core$String* $tmp1676;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1677;
    panda$core$Int64 $tmp1679;
    panda$core$Bit $tmp1681;
    org$pandalanguage$pandac$Position $tmp1683;
    org$pandalanguage$pandac$Alias* $tmp1684;
    panda$core$String* $tmp1686;
    org$pandalanguage$pandac$Position $tmp1688;
    panda$core$Int64 $tmp1690;
    org$pandalanguage$pandac$Position position1692;
    org$pandalanguage$pandac$ASTNode* dc1694 = NULL;
    panda$core$String* name1696 = NULL;
    panda$collections$ImmutableArray* fields1698 = NULL;
    panda$core$Bit $tmp1700;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    int $tmp1597;
    {
        $tmp1599 = p_node;
        $match$456_91598 = $tmp1599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1599));
        panda$core$Int64$init$builtin_int64(&$tmp1600, 16);
        panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91598->$rawValue, $tmp1600);
        if ($tmp1601.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1603 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91598->$data + 0));
            position1602 = *$tmp1603;
            org$pandalanguage$pandac$ASTNode** $tmp1605 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91598->$data + 16));
            dc1604 = *$tmp1605;
            panda$collections$ImmutableArray** $tmp1607 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 24));
            annotations1606 = *$tmp1607;
            org$pandalanguage$pandac$ASTNode** $tmp1609 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91598->$data + 32));
            varDecl1608 = *$tmp1609;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1602, dc1604, annotations1606, varDecl1608);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1610, 26);
        panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91598->$rawValue, $tmp1610);
        if ($tmp1611.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1613 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91598->$data + 0));
            position1612 = *$tmp1613;
            org$pandalanguage$pandac$ASTNode** $tmp1615 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91598->$data + 16));
            dc1614 = *$tmp1615;
            panda$collections$ImmutableArray** $tmp1617 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 24));
            annotations1616 = *$tmp1617;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1619 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$456_91598->$data + 32));
            kind1618 = *$tmp1619;
            panda$core$String** $tmp1621 = ((panda$core$String**) ((char*) $match$456_91598->$data + 40));
            name1620 = *$tmp1621;
            panda$collections$ImmutableArray** $tmp1623 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 48));
            generics1622 = *$tmp1623;
            panda$collections$ImmutableArray** $tmp1625 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 56));
            parameters1624 = *$tmp1625;
            org$pandalanguage$pandac$ASTNode** $tmp1627 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91598->$data + 64));
            returnType1626 = *$tmp1627;
            panda$collections$ImmutableArray** $tmp1629 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 72));
            statements1628 = *$tmp1629;
            int $tmp1632;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1636 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1612, dc1614, annotations1616, kind1618, name1620, generics1622, parameters1624, returnType1626, statements1628);
                $tmp1635 = $tmp1636;
                $tmp1634 = $tmp1635;
                m1633 = $tmp1634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
                if (((panda$core$Bit) { m1633 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1633));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1633));
                }
                }
            }
            $tmp1632 = -1;
            goto $l1630;
            $l1630:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1633));
            m1633 = NULL;
            switch ($tmp1632) {
                case -1: goto $l1637;
            }
            $l1637:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1638, 11);
        panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91598->$rawValue, $tmp1638);
        if ($tmp1639.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1641 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91598->$data + 0));
            position1640 = *$tmp1641;
            org$pandalanguage$pandac$ASTNode** $tmp1643 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91598->$data + 16));
            dc1642 = *$tmp1643;
            panda$collections$ImmutableArray** $tmp1645 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 24));
            annotations1644 = *$tmp1645;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1647 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$456_91598->$data + 32));
            kind1646 = *$tmp1647;
            panda$core$String** $tmp1649 = ((panda$core$String**) ((char*) $match$456_91598->$data + 40));
            name1648 = *$tmp1649;
            panda$collections$ImmutableArray** $tmp1651 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 48));
            generics1650 = *$tmp1651;
            panda$collections$ImmutableArray** $tmp1653 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 56));
            supertypes1652 = *$tmp1653;
            panda$collections$ImmutableArray** $tmp1655 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 64));
            members1654 = *$tmp1655;
            int $tmp1658;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1662 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1640, dc1642, annotations1644, kind1646, name1648, generics1650, supertypes1652, members1654);
                $tmp1661 = $tmp1662;
                $tmp1660 = $tmp1661;
                inner1659 = $tmp1660;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                if (((panda$core$Bit) { inner1659 != NULL }).value) {
                {
                    {
                        $tmp1663 = inner1659->owner;
                        panda$core$Weak* $tmp1666 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1666, ((panda$core$Object*) p_cl));
                        $tmp1665 = $tmp1666;
                        $tmp1664 = $tmp1665;
                        inner1659->owner = $tmp1664;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1659));
                    panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1668);
                    $tmp1667 = $tmp1669;
                    panda$core$Bit $tmp1670 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1659->name, $tmp1667);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
                    if ($tmp1670.value) goto $l1671; else goto $l1672;
                    $l1672:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1673, (panda$core$Int64) { 474 });
                    abort();
                    $l1671:;
                    org$pandalanguage$pandac$Alias* $tmp1675 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1678 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1679, 1);
                    panda$core$Int64 $tmp1680 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1678, $tmp1679);
                    panda$core$Bit$init$builtin_bit(&$tmp1681, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1677, ((panda$core$Int64$nullable) { $tmp1680, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1681);
                    panda$core$String* $tmp1682 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1659->name, $tmp1677);
                    $tmp1676 = $tmp1682;
                    org$pandalanguage$pandac$Position$init(&$tmp1683);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1675, $tmp1676, inner1659->name, $tmp1683);
                    $tmp1674 = $tmp1675;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1674));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
                    org$pandalanguage$pandac$Alias* $tmp1685 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1687 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1686 = $tmp1687;
                    org$pandalanguage$pandac$Position$init(&$tmp1688);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1685, $tmp1686, p_cl->name, $tmp1688);
                    $tmp1684 = $tmp1685;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1659->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1684));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                }
                }
            }
            $tmp1658 = -1;
            goto $l1656;
            $l1656:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1659));
            inner1659 = NULL;
            switch ($tmp1658) {
                case -1: goto $l1689;
            }
            $l1689:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1690, 9);
        panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91598->$rawValue, $tmp1690);
        if ($tmp1691.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1693 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91598->$data + 0));
            position1692 = *$tmp1693;
            org$pandalanguage$pandac$ASTNode** $tmp1695 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91598->$data + 16));
            dc1694 = *$tmp1695;
            panda$core$String** $tmp1697 = ((panda$core$String**) ((char*) $match$456_91598->$data + 24));
            name1696 = *$tmp1697;
            panda$collections$ImmutableArray** $tmp1699 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91598->$data + 32));
            fields1698 = *$tmp1699;
            org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1692, dc1694, name1696, fields1698);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1700, false);
            if ($tmp1700.value) goto $l1701; else goto $l1702;
            $l1702:;
            panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1706, ((panda$core$Object*) p_node));
            $tmp1705 = $tmp1707;
            panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1708);
            $tmp1704 = $tmp1709;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1703, (panda$core$Int64) { 482 }, $tmp1704);
            abort();
            $l1701:;
        }
        }
        }
        }
        }
    }
    $tmp1597 = -1;
    goto $l1595;
    $l1595:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
    switch ($tmp1597) {
        case -1: goto $l1710;
    }
    $l1710:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1714 = NULL;
    panda$core$String* $tmp1715;
    panda$core$String* $tmp1716;
    org$pandalanguage$pandac$ASTNode* $match$494_131720 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1721;
    panda$core$Int64 $tmp1722;
    org$pandalanguage$pandac$Position position1724;
    panda$core$String* text1726 = NULL;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$Bit $tmp1730;
    panda$collections$Array* fields1735 = NULL;
    panda$collections$Array* $tmp1736;
    panda$collections$Array* $tmp1737;
    panda$collections$Iterator* Iter$502$91742 = NULL;
    panda$collections$Iterator* $tmp1743;
    panda$collections$Iterator* $tmp1744;
    org$pandalanguage$pandac$ASTNode* t1760 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1761;
    panda$core$Object* $tmp1762;
    org$pandalanguage$pandac$Type* $tmp1767;
    org$pandalanguage$pandac$ChoiceCase* entry1771 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp1772;
    org$pandalanguage$pandac$ChoiceCase* $tmp1773;
    int $tmp1713;
    {
        memset(&doccomment1714, 0, sizeof(doccomment1714));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1715 = doccomment1714;
                $tmp1716 = NULL;
                doccomment1714 = $tmp1716;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1715));
            }
        }
        }
        else {
        {
            int $tmp1719;
            {
                $tmp1721 = p_rawDoccomment;
                $match$494_131720 = $tmp1721;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1721));
                panda$core$Int64$init$builtin_int64(&$tmp1722, 38);
                panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131720->$rawValue, $tmp1722);
                if ($tmp1723.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1725 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131720->$data + 0));
                    position1724 = *$tmp1725;
                    panda$core$String** $tmp1727 = ((panda$core$String**) ((char*) $match$494_131720->$data + 16));
                    text1726 = *$tmp1727;
                    {
                        $tmp1728 = doccomment1714;
                        $tmp1729 = text1726;
                        doccomment1714 = $tmp1729;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1729));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1730, false);
                    if ($tmp1730.value) goto $l1731; else goto $l1732;
                    $l1732:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1733, (panda$core$Int64) { 498 });
                    abort();
                    $l1731:;
                }
                }
            }
            $tmp1719 = -1;
            goto $l1717;
            $l1717:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
            switch ($tmp1719) {
                case -1: goto $l1734;
            }
            $l1734:;
        }
        }
        panda$collections$Array* $tmp1738 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1738);
        $tmp1737 = $tmp1738;
        $tmp1736 = $tmp1737;
        fields1735 = $tmp1736;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
        {
            int $tmp1741;
            {
                ITable* $tmp1745 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1745->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1745 = $tmp1745->next;
                }
                $fn1747 $tmp1746 = $tmp1745->methods[0];
                panda$collections$Iterator* $tmp1748 = $tmp1746(((panda$collections$Iterable*) p_rawFields));
                $tmp1744 = $tmp1748;
                $tmp1743 = $tmp1744;
                Iter$502$91742 = $tmp1743;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1744));
                $l1749:;
                ITable* $tmp1752 = Iter$502$91742->$class->itable;
                while ($tmp1752->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1752 = $tmp1752->next;
                }
                $fn1754 $tmp1753 = $tmp1752->methods[0];
                panda$core$Bit $tmp1755 = $tmp1753(Iter$502$91742);
                panda$core$Bit $tmp1756 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1755);
                bool $tmp1751 = $tmp1756.value;
                if (!$tmp1751) goto $l1750;
                {
                    int $tmp1759;
                    {
                        ITable* $tmp1763 = Iter$502$91742->$class->itable;
                        while ($tmp1763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1763 = $tmp1763->next;
                        }
                        $fn1765 $tmp1764 = $tmp1763->methods[1];
                        panda$core$Object* $tmp1766 = $tmp1764(Iter$502$91742);
                        $tmp1762 = $tmp1766;
                        $tmp1761 = ((org$pandalanguage$pandac$ASTNode*) $tmp1762);
                        t1760 = $tmp1761;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1761));
                        panda$core$Panda$unref$panda$core$Object($tmp1762);
                        org$pandalanguage$pandac$Type* $tmp1768 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1760);
                        $tmp1767 = $tmp1768;
                        panda$collections$Array$add$panda$collections$Array$T(fields1735, ((panda$core$Object*) $tmp1767));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
                    }
                    $tmp1759 = -1;
                    goto $l1757;
                    $l1757:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1760));
                    t1760 = NULL;
                    switch ($tmp1759) {
                        case -1: goto $l1769;
                    }
                    $l1769:;
                }
                goto $l1749;
                $l1750:;
            }
            $tmp1741 = -1;
            goto $l1739;
            $l1739:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$502$91742));
            Iter$502$91742 = NULL;
            switch ($tmp1741) {
                case -1: goto $l1770;
            }
            $l1770:;
        }
        org$pandalanguage$pandac$ChoiceCase* $tmp1774 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
        ITable* $tmp1775 = ((panda$collections$CollectionView*) p_cl->choiceCases)->$class->itable;
        while ($tmp1775->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1775 = $tmp1775->next;
        }
        $fn1777 $tmp1776 = $tmp1775->methods[0];
        panda$core$Int64 $tmp1778 = $tmp1776(((panda$collections$CollectionView*) p_cl->choiceCases));
        org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1774, p_cl, p_position, p_name, doccomment1714, $tmp1778, ((panda$collections$ListView*) fields1735));
        $tmp1773 = $tmp1774;
        $tmp1772 = $tmp1773;
        entry1771 = $tmp1772;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1772));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceCases, ((panda$core$Object*) entry1771));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1771));
    }
    $tmp1713 = -1;
    goto $l1711;
    $l1711:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1771));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1735));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1714));
    fields1735 = NULL;
    entry1771 = NULL;
    switch ($tmp1713) {
        case -1: goto $l1779;
    }
    $l1779:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1783 = NULL;
    panda$core$String* $tmp1789;
    panda$core$String* $tmp1790;
    panda$core$String* $tmp1791;
    panda$core$String* $tmp1792;
    panda$core$String* $tmp1793;
    panda$core$String* $tmp1794;
    panda$core$String* $tmp1801;
    panda$core$String* $tmp1802;
    panda$core$String* doccomment1803 = NULL;
    panda$core$String* $tmp1804;
    panda$core$String* $tmp1805;
    org$pandalanguage$pandac$ASTNode* $match$528_131809 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1810;
    panda$core$Int64 $tmp1811;
    org$pandalanguage$pandac$Position position1813;
    panda$core$String* text1815 = NULL;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    panda$core$Bit $tmp1819;
    org$pandalanguage$pandac$Annotations* annotations1824 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1825;
    org$pandalanguage$pandac$Annotations* $tmp1826;
    panda$collections$Array* parameters1828 = NULL;
    panda$collections$Array* $tmp1829;
    panda$collections$Array* $tmp1830;
    panda$collections$Iterator* Iter$538$131835 = NULL;
    panda$collections$Iterator* $tmp1836;
    panda$collections$Iterator* $tmp1837;
    org$pandalanguage$pandac$ASTNode* p1853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1854;
    panda$core$Object* $tmp1855;
    panda$core$String* name1860 = NULL;
    org$pandalanguage$pandac$Type* bound1861 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$541_171865 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1866;
    panda$core$Int64 $tmp1867;
    panda$core$String* id1869 = NULL;
    panda$core$String* $tmp1871;
    panda$core$String* $tmp1872;
    org$pandalanguage$pandac$Type* $tmp1873;
    org$pandalanguage$pandac$Type* $tmp1874;
    org$pandalanguage$pandac$Type* $tmp1875;
    panda$core$Int64 $tmp1877;
    panda$core$String* id1879 = NULL;
    org$pandalanguage$pandac$ASTNode* type1881 = NULL;
    panda$core$String* $tmp1883;
    panda$core$String* $tmp1884;
    org$pandalanguage$pandac$Type* $tmp1885;
    org$pandalanguage$pandac$Type* $tmp1886;
    org$pandalanguage$pandac$Type* $tmp1887;
    panda$core$Bit $tmp1889;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1894;
    panda$collections$Array* supertypes1900 = NULL;
    panda$collections$Array* $tmp1901;
    panda$collections$Array* $tmp1902;
    panda$core$Int64 $tmp1904;
    panda$collections$Iterator* Iter$559$131910 = NULL;
    panda$collections$Iterator* $tmp1911;
    panda$collections$Iterator* $tmp1912;
    org$pandalanguage$pandac$ASTNode* s1928 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1929;
    panda$core$Object* $tmp1930;
    org$pandalanguage$pandac$Type* $tmp1935;
    org$pandalanguage$pandac$ClassDecl* result1939 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1940;
    org$pandalanguage$pandac$ClassDecl* $tmp1941;
    panda$core$Object* $tmp1943;
    panda$core$Object* $tmp1945;
    panda$core$Int64 $tmp1947;
    org$pandalanguage$pandac$FieldDecl* rawValue1952 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1953;
    org$pandalanguage$pandac$FieldDecl* $tmp1954;
    org$pandalanguage$pandac$Annotations* $tmp1956;
    panda$core$Int64 $tmp1958;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1959;
    panda$core$Int64 $tmp1960;
    org$pandalanguage$pandac$Type* $tmp1962;
    org$pandalanguage$pandac$FieldDecl* data1964 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1965;
    org$pandalanguage$pandac$FieldDecl* $tmp1966;
    org$pandalanguage$pandac$Annotations* $tmp1968;
    panda$core$Int64 $tmp1970;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1971;
    panda$core$Int64 $tmp1972;
    org$pandalanguage$pandac$Type* $tmp1974;
    panda$collections$Iterator* Iter$578$91980 = NULL;
    panda$collections$Iterator* $tmp1981;
    panda$collections$Iterator* $tmp1982;
    org$pandalanguage$pandac$ASTNode* m1998 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1999;
    panda$core$Object* $tmp2000;
    org$pandalanguage$pandac$ASTNode* $match$579_132008 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2009;
    panda$core$Int64 $tmp2010;
    org$pandalanguage$pandac$Position mPosition2012;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind2014;
    panda$core$Int64 $tmp2016;
    org$pandalanguage$pandac$ClassDecl$Kind $match$582_252018;
    panda$core$Int64 $tmp2019;
    panda$core$Int64 $tmp2021;
    panda$core$Int64 $tmp2024;
    panda$core$Bit foundInit2030;
    panda$core$Bit $tmp2031;
    panda$core$Bit foundCleanup2032;
    panda$core$Bit $tmp2033;
    panda$collections$Iterator* Iter$597$92037 = NULL;
    panda$collections$Iterator* $tmp2038;
    panda$collections$Iterator* $tmp2039;
    org$pandalanguage$pandac$MethodDecl* m2055 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2056;
    panda$core$Object* $tmp2057;
    panda$core$Int64 $tmp2062;
    panda$core$Bit $tmp2064;
    panda$core$Int64 $tmp2073;
    panda$core$Bit $tmp2076;
    panda$core$Int64 $tmp2077;
    panda$core$Int64 $tmp2086;
    org$pandalanguage$pandac$MethodDecl* defaultInit2099 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2100;
    org$pandalanguage$pandac$MethodDecl* $tmp2101;
    org$pandalanguage$pandac$Annotations* $tmp2103;
    panda$core$Int64 $tmp2105;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2106;
    panda$core$Int64 $tmp2107;
    panda$collections$Array* $tmp2109;
    panda$collections$Array* $tmp2111;
    org$pandalanguage$pandac$Type* $tmp2113;
    panda$collections$ImmutableArray* $tmp2115;
    panda$core$Int64 $tmp2123;
    panda$core$Int64 $tmp2126;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2140 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2141;
    org$pandalanguage$pandac$MethodDecl* $tmp2142;
    org$pandalanguage$pandac$Annotations* $tmp2144;
    panda$core$Int64 $tmp2146;
    panda$core$Int64 $tmp2147;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2149;
    panda$core$Int64 $tmp2150;
    panda$collections$Array* $tmp2152;
    panda$collections$Array* $tmp2154;
    org$pandalanguage$pandac$Type* $tmp2156;
    panda$collections$ImmutableArray* $tmp2158;
    panda$core$Int64 $tmp2161;
    panda$core$Bit haveFields2163;
    panda$core$Bit $tmp2164;
    panda$core$Int64 $tmp2169;
    panda$collections$Iterator* Iter$628$172174 = NULL;
    panda$collections$Iterator* $tmp2175;
    panda$collections$Iterator* $tmp2176;
    org$pandalanguage$pandac$ChoiceCase* e2192 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp2193;
    panda$core$Object* $tmp2194;
    panda$core$Int64 $tmp2203;
    panda$core$Bit $tmp2205;
    org$pandalanguage$pandac$ClassDecl* $returnValue2210;
    org$pandalanguage$pandac$ClassDecl* $tmp2211;
    org$pandalanguage$pandac$Type* $tmp2215;
    org$pandalanguage$pandac$Type* $tmp2216;
    org$pandalanguage$pandac$Type* $tmp2217;
    panda$core$Object* $tmp2219;
    panda$core$Object* $tmp2220;
    org$pandalanguage$pandac$ClassDecl* $tmp2223;
    int $tmp1782;
    {
        memset(&fullName1783, 0, sizeof(fullName1783));
        ITable* $tmp1785 = ((panda$core$Equatable*) p_contextName)->$class->itable;
        while ($tmp1785->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp1785 = $tmp1785->next;
        }
        $fn1787 $tmp1786 = $tmp1785->methods[1];
        panda$core$Bit $tmp1788 = $tmp1786(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s1784));
        if ($tmp1788.value) {
        {
            {
                $tmp1789 = fullName1783;
                panda$core$String* $tmp1795 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1794 = $tmp1795;
                panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, &$s1796);
                $tmp1793 = $tmp1797;
                panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, p_name);
                $tmp1792 = $tmp1798;
                panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1799);
                $tmp1791 = $tmp1800;
                $tmp1790 = $tmp1791;
                fullName1783 = $tmp1790;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
            }
        }
        }
        else {
        {
            {
                $tmp1801 = fullName1783;
                $tmp1802 = p_name;
                fullName1783 = $tmp1802;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
            }
        }
        }
        memset(&doccomment1803, 0, sizeof(doccomment1803));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1804 = doccomment1803;
                $tmp1805 = NULL;
                doccomment1803 = $tmp1805;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
            }
        }
        }
        else {
        {
            int $tmp1808;
            {
                $tmp1810 = p_rawDoccomment;
                $match$528_131809 = $tmp1810;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1810));
                panda$core$Int64$init$builtin_int64(&$tmp1811, 38);
                panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$528_131809->$rawValue, $tmp1811);
                if ($tmp1812.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1814 = ((org$pandalanguage$pandac$Position*) ((char*) $match$528_131809->$data + 0));
                    position1813 = *$tmp1814;
                    panda$core$String** $tmp1816 = ((panda$core$String**) ((char*) $match$528_131809->$data + 16));
                    text1815 = *$tmp1816;
                    {
                        $tmp1817 = doccomment1803;
                        $tmp1818 = text1815;
                        doccomment1803 = $tmp1818;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1819, false);
                    if ($tmp1819.value) goto $l1820; else goto $l1821;
                    $l1821:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1822, (panda$core$Int64) { 532 });
                    abort();
                    $l1820:;
                }
                }
            }
            $tmp1808 = -1;
            goto $l1806;
            $l1806:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
            switch ($tmp1808) {
                case -1: goto $l1823;
            }
            $l1823:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1827 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1826 = $tmp1827;
        $tmp1825 = $tmp1826;
        annotations1824 = $tmp1825;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
        panda$collections$Array* $tmp1831 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1831);
        $tmp1830 = $tmp1831;
        $tmp1829 = $tmp1830;
        parameters1828 = $tmp1829;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1834;
                {
                    ITable* $tmp1838 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1838 = $tmp1838->next;
                    }
                    $fn1840 $tmp1839 = $tmp1838->methods[0];
                    panda$collections$Iterator* $tmp1841 = $tmp1839(((panda$collections$Iterable*) p_generics));
                    $tmp1837 = $tmp1841;
                    $tmp1836 = $tmp1837;
                    Iter$538$131835 = $tmp1836;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
                    $l1842:;
                    ITable* $tmp1845 = Iter$538$131835->$class->itable;
                    while ($tmp1845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1845 = $tmp1845->next;
                    }
                    $fn1847 $tmp1846 = $tmp1845->methods[0];
                    panda$core$Bit $tmp1848 = $tmp1846(Iter$538$131835);
                    panda$core$Bit $tmp1849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1848);
                    bool $tmp1844 = $tmp1849.value;
                    if (!$tmp1844) goto $l1843;
                    {
                        int $tmp1852;
                        {
                            ITable* $tmp1856 = Iter$538$131835->$class->itable;
                            while ($tmp1856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1856 = $tmp1856->next;
                            }
                            $fn1858 $tmp1857 = $tmp1856->methods[1];
                            panda$core$Object* $tmp1859 = $tmp1857(Iter$538$131835);
                            $tmp1855 = $tmp1859;
                            $tmp1854 = ((org$pandalanguage$pandac$ASTNode*) $tmp1855);
                            p1853 = $tmp1854;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                            panda$core$Panda$unref$panda$core$Object($tmp1855);
                            memset(&name1860, 0, sizeof(name1860));
                            memset(&bound1861, 0, sizeof(bound1861));
                            int $tmp1864;
                            {
                                $tmp1866 = p1853;
                                $match$541_171865 = $tmp1866;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                                panda$core$Int64$init$builtin_int64(&$tmp1867, 20);
                                panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541_171865->$rawValue, $tmp1867);
                                if ($tmp1868.value) {
                                {
                                    panda$core$String** $tmp1870 = ((panda$core$String**) ((char*) $match$541_171865->$data + 16));
                                    id1869 = *$tmp1870;
                                    {
                                        $tmp1871 = name1860;
                                        $tmp1872 = id1869;
                                        name1860 = $tmp1872;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
                                    }
                                    {
                                        $tmp1873 = bound1861;
                                        org$pandalanguage$pandac$Type* $tmp1876 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1875 = $tmp1876;
                                        $tmp1874 = $tmp1875;
                                        bound1861 = $tmp1874;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1877, 44);
                                panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541_171865->$rawValue, $tmp1877);
                                if ($tmp1878.value) {
                                {
                                    panda$core$String** $tmp1880 = ((panda$core$String**) ((char*) $match$541_171865->$data + 16));
                                    id1879 = *$tmp1880;
                                    org$pandalanguage$pandac$ASTNode** $tmp1882 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$541_171865->$data + 24));
                                    type1881 = *$tmp1882;
                                    {
                                        $tmp1883 = name1860;
                                        $tmp1884 = id1879;
                                        name1860 = $tmp1884;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
                                    }
                                    {
                                        $tmp1885 = bound1861;
                                        org$pandalanguage$pandac$Type* $tmp1888 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1881);
                                        $tmp1887 = $tmp1888;
                                        $tmp1886 = $tmp1887;
                                        bound1861 = $tmp1886;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1886));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1887));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1889, false);
                                    if ($tmp1889.value) goto $l1890; else goto $l1891;
                                    $l1891:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1892, (panda$core$Int64) { 549 });
                                    abort();
                                    $l1890:;
                                }
                                }
                                }
                            }
                            $tmp1864 = -1;
                            goto $l1862;
                            $l1862:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
                            switch ($tmp1864) {
                                case -1: goto $l1893;
                            }
                            $l1893:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1895 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1897 = (($fn1896) p1853->$class->vtable[2])(p1853);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1895, $tmp1897, fullName1783, name1860, bound1861);
                            $tmp1894 = $tmp1895;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1828, ((panda$core$Object*) $tmp1894));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                        }
                        $tmp1852 = -1;
                        goto $l1850;
                        $l1850:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1861));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1860));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1853));
                        p1853 = NULL;
                        switch ($tmp1852) {
                            case -1: goto $l1898;
                        }
                        $l1898:;
                    }
                    goto $l1842;
                    $l1843:;
                }
                $tmp1834 = -1;
                goto $l1832;
                $l1832:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$131835));
                Iter$538$131835 = NULL;
                switch ($tmp1834) {
                    case -1: goto $l1899;
                }
                $l1899:;
            }
        }
        }
        panda$collections$Array* $tmp1903 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1903);
        $tmp1902 = $tmp1903;
        $tmp1901 = $tmp1902;
        supertypes1900 = $tmp1901;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1904, 2);
            panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1904);
            if ($tmp1905.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1906);
            }
            }
            {
                int $tmp1909;
                {
                    ITable* $tmp1913 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1913 = $tmp1913->next;
                    }
                    $fn1915 $tmp1914 = $tmp1913->methods[0];
                    panda$collections$Iterator* $tmp1916 = $tmp1914(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1912 = $tmp1916;
                    $tmp1911 = $tmp1912;
                    Iter$559$131910 = $tmp1911;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                    $l1917:;
                    ITable* $tmp1920 = Iter$559$131910->$class->itable;
                    while ($tmp1920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1920 = $tmp1920->next;
                    }
                    $fn1922 $tmp1921 = $tmp1920->methods[0];
                    panda$core$Bit $tmp1923 = $tmp1921(Iter$559$131910);
                    panda$core$Bit $tmp1924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1923);
                    bool $tmp1919 = $tmp1924.value;
                    if (!$tmp1919) goto $l1918;
                    {
                        int $tmp1927;
                        {
                            ITable* $tmp1931 = Iter$559$131910->$class->itable;
                            while ($tmp1931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1931 = $tmp1931->next;
                            }
                            $fn1933 $tmp1932 = $tmp1931->methods[1];
                            panda$core$Object* $tmp1934 = $tmp1932(Iter$559$131910);
                            $tmp1930 = $tmp1934;
                            $tmp1929 = ((org$pandalanguage$pandac$ASTNode*) $tmp1930);
                            s1928 = $tmp1929;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1929));
                            panda$core$Panda$unref$panda$core$Object($tmp1930);
                            org$pandalanguage$pandac$Type* $tmp1936 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1928);
                            $tmp1935 = $tmp1936;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1900, ((panda$core$Object*) $tmp1935));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                        }
                        $tmp1927 = -1;
                        goto $l1925;
                        $l1925:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1928));
                        s1928 = NULL;
                        switch ($tmp1927) {
                            case -1: goto $l1937;
                        }
                        $l1937:;
                    }
                    goto $l1917;
                    $l1918:;
                }
                $tmp1909 = -1;
                goto $l1907;
                $l1907:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$559$131910));
                Iter$559$131910 = NULL;
                switch ($tmp1909) {
                    case -1: goto $l1938;
                }
                $l1938:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1942 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1944 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1943 = $tmp1944;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1942, p_source, p_position, p_aliases, doccomment1803, annotations1824, p_kind, fullName1783, ((panda$collections$ListView*) supertypes1900), parameters1828, ((org$pandalanguage$pandac$Compiler*) $tmp1943)->root);
        $tmp1941 = $tmp1942;
        $tmp1940 = $tmp1941;
        result1939 = $tmp1940;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
        panda$core$Panda$unref$panda$core$Object($tmp1943);
        panda$core$Object* $tmp1946 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1945 = $tmp1946;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1945)->currentClass, ((panda$core$Object*) result1939));
        panda$core$Panda$unref$panda$core$Object($tmp1945);
        panda$core$Int64$init$builtin_int64(&$tmp1947, 2);
        panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1947);
        if ($tmp1948.value) {
        {
            int $tmp1951;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1955 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1957 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1958, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1957, $tmp1958);
                $tmp1956 = $tmp1957;
                panda$core$Int64$init$builtin_int64(&$tmp1960, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1959, $tmp1960);
                org$pandalanguage$pandac$Type* $tmp1963 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1962 = $tmp1963;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1955, result1939, result1939->position, NULL, $tmp1956, $tmp1959, &$s1961, $tmp1962, NULL);
                $tmp1954 = $tmp1955;
                $tmp1953 = $tmp1954;
                rawValue1952 = $tmp1953;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1953));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
                panda$collections$Array$add$panda$collections$Array$T(result1939->fields, ((panda$core$Object*) rawValue1952));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1939->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1952));
                org$pandalanguage$pandac$FieldDecl* $tmp1967 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1969 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1970, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1969, $tmp1970);
                $tmp1968 = $tmp1969;
                panda$core$Int64$init$builtin_int64(&$tmp1972, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1971, $tmp1972);
                org$pandalanguage$pandac$Type* $tmp1975 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1974 = $tmp1975;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1967, result1939, result1939->position, NULL, $tmp1968, $tmp1971, &$s1973, $tmp1974, NULL);
                $tmp1966 = $tmp1967;
                $tmp1965 = $tmp1966;
                data1964 = $tmp1965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1968));
                panda$collections$Array$add$panda$collections$Array$T(result1939->fields, ((panda$core$Object*) data1964));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1939->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1964));
            }
            $tmp1951 = -1;
            goto $l1949;
            $l1949:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1964));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1952));
            rawValue1952 = NULL;
            data1964 = NULL;
            switch ($tmp1951) {
                case -1: goto $l1976;
            }
            $l1976:;
        }
        }
        {
            int $tmp1979;
            {
                ITable* $tmp1983 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1983->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1983 = $tmp1983->next;
                }
                $fn1985 $tmp1984 = $tmp1983->methods[0];
                panda$collections$Iterator* $tmp1986 = $tmp1984(((panda$collections$Iterable*) p_members));
                $tmp1982 = $tmp1986;
                $tmp1981 = $tmp1982;
                Iter$578$91980 = $tmp1981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
                $l1987:;
                ITable* $tmp1990 = Iter$578$91980->$class->itable;
                while ($tmp1990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1990 = $tmp1990->next;
                }
                $fn1992 $tmp1991 = $tmp1990->methods[0];
                panda$core$Bit $tmp1993 = $tmp1991(Iter$578$91980);
                panda$core$Bit $tmp1994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1993);
                bool $tmp1989 = $tmp1994.value;
                if (!$tmp1989) goto $l1988;
                {
                    int $tmp1997;
                    {
                        ITable* $tmp2001 = Iter$578$91980->$class->itable;
                        while ($tmp2001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2001 = $tmp2001->next;
                        }
                        $fn2003 $tmp2002 = $tmp2001->methods[1];
                        panda$core$Object* $tmp2004 = $tmp2002(Iter$578$91980);
                        $tmp2000 = $tmp2004;
                        $tmp1999 = ((org$pandalanguage$pandac$ASTNode*) $tmp2000);
                        m1998 = $tmp1999;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1999));
                        panda$core$Panda$unref$panda$core$Object($tmp2000);
                        int $tmp2007;
                        {
                            $tmp2009 = m1998;
                            $match$579_132008 = $tmp2009;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2009));
                            panda$core$Int64$init$builtin_int64(&$tmp2010, 26);
                            panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$579_132008->$rawValue, $tmp2010);
                            if ($tmp2011.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp2013 = ((org$pandalanguage$pandac$Position*) ((char*) $match$579_132008->$data + 0));
                                mPosition2012 = *$tmp2013;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2015 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$579_132008->$data + 32));
                                methodKind2014 = *$tmp2015;
                                panda$core$Int64$init$builtin_int64(&$tmp2016, 2);
                                panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind2014.$rawValue, $tmp2016);
                                if ($tmp2017.value) {
                                {
                                    {
                                        $match$582_252018 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2019, 0);
                                        panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_252018.$rawValue, $tmp2019);
                                        if ($tmp2020.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2021, 1);
                                        panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_252018.$rawValue, $tmp2021);
                                        if ($tmp2022.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2012, &$s2023);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2024, 2);
                                        panda$core$Bit $tmp2025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_252018.$rawValue, $tmp2024);
                                        if ($tmp2025.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2012, &$s2026);
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
                        $tmp2007 = -1;
                        goto $l2005;
                        $l2005:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                        switch ($tmp2007) {
                            case -1: goto $l2027;
                        }
                        $l2027:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1939, m1998);
                    }
                    $tmp1997 = -1;
                    goto $l1995;
                    $l1995:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1998));
                    m1998 = NULL;
                    switch ($tmp1997) {
                        case -1: goto $l2028;
                    }
                    $l2028:;
                }
                goto $l1987;
                $l1988:;
            }
            $tmp1979 = -1;
            goto $l1977;
            $l1977:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$578$91980));
            Iter$578$91980 = NULL;
            switch ($tmp1979) {
                case -1: goto $l2029;
            }
            $l2029:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2031, false);
        foundInit2030 = $tmp2031;
        panda$core$Bit$init$builtin_bit(&$tmp2033, false);
        foundCleanup2032 = $tmp2033;
        {
            int $tmp2036;
            {
                ITable* $tmp2040 = ((panda$collections$Iterable*) result1939->methods)->$class->itable;
                while ($tmp2040->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2040 = $tmp2040->next;
                }
                $fn2042 $tmp2041 = $tmp2040->methods[0];
                panda$collections$Iterator* $tmp2043 = $tmp2041(((panda$collections$Iterable*) result1939->methods));
                $tmp2039 = $tmp2043;
                $tmp2038 = $tmp2039;
                Iter$597$92037 = $tmp2038;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
                $l2044:;
                ITable* $tmp2047 = Iter$597$92037->$class->itable;
                while ($tmp2047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2047 = $tmp2047->next;
                }
                $fn2049 $tmp2048 = $tmp2047->methods[0];
                panda$core$Bit $tmp2050 = $tmp2048(Iter$597$92037);
                panda$core$Bit $tmp2051 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2050);
                bool $tmp2046 = $tmp2051.value;
                if (!$tmp2046) goto $l2045;
                {
                    int $tmp2054;
                    {
                        ITable* $tmp2058 = Iter$597$92037->$class->itable;
                        while ($tmp2058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2058 = $tmp2058->next;
                        }
                        $fn2060 $tmp2059 = $tmp2058->methods[1];
                        panda$core$Object* $tmp2061 = $tmp2059(Iter$597$92037);
                        $tmp2057 = $tmp2061;
                        $tmp2056 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2057);
                        m2055 = $tmp2056;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
                        panda$core$Panda$unref$panda$core$Object($tmp2057);
                        panda$core$Int64$init$builtin_int64(&$tmp2062, 2);
                        panda$core$Bit $tmp2063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2055->methodKind.$rawValue, $tmp2062);
                        if ($tmp2063.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2064, true);
                            foundInit2030 = $tmp2064;
                        }
                        }
                        panda$core$Bit $tmp2067 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2055)->name, &$s2066);
                        bool $tmp2065 = $tmp2067.value;
                        if (!$tmp2065) goto $l2068;
                        ITable* $tmp2069 = ((panda$collections$CollectionView*) m2055->parameters)->$class->itable;
                        while ($tmp2069->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp2069 = $tmp2069->next;
                        }
                        $fn2071 $tmp2070 = $tmp2069->methods[0];
                        panda$core$Int64 $tmp2072 = $tmp2070(((panda$collections$CollectionView*) m2055->parameters));
                        panda$core$Int64$init$builtin_int64(&$tmp2073, 0);
                        panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2072, $tmp2073);
                        $tmp2065 = $tmp2074.value;
                        $l2068:;
                        panda$core$Bit $tmp2075 = { $tmp2065 };
                        if ($tmp2075.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2076, true);
                            foundCleanup2032 = $tmp2076;
                            panda$core$Int64$init$builtin_int64(&$tmp2077, 2);
                            panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2077);
                            if ($tmp2078.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2079);
                            }
                            }
                        }
                        }
                    }
                    $tmp2054 = -1;
                    goto $l2052;
                    $l2052:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2055));
                    m2055 = NULL;
                    switch ($tmp2054) {
                        case -1: goto $l2080;
                    }
                    $l2080:;
                }
                goto $l2044;
                $l2045:;
            }
            $tmp2036 = -1;
            goto $l2034;
            $l2034:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$597$92037));
            Iter$597$92037 = NULL;
            switch ($tmp2036) {
                case -1: goto $l2081;
            }
            $l2081:;
        }
        panda$core$Bit $tmp2084 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2030);
        bool $tmp2083 = $tmp2084.value;
        if (!$tmp2083) goto $l2085;
        panda$core$Int64$init$builtin_int64(&$tmp2086, 0);
        panda$core$Bit $tmp2087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2086);
        $tmp2083 = $tmp2087.value;
        $l2085:;
        panda$core$Bit $tmp2088 = { $tmp2083 };
        bool $tmp2082 = $tmp2088.value;
        if (!$tmp2082) goto $l2089;
        ITable* $tmp2091 = ((panda$core$Equatable*) result1939->name)->$class->itable;
        while ($tmp2091->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2091 = $tmp2091->next;
        }
        $fn2093 $tmp2092 = $tmp2091->methods[1];
        panda$core$Bit $tmp2094 = $tmp2092(((panda$core$Equatable*) result1939->name), ((panda$core$Equatable*) &$s2090));
        $tmp2082 = $tmp2094.value;
        $l2089:;
        panda$core$Bit $tmp2095 = { $tmp2082 };
        if ($tmp2095.value) {
        {
            int $tmp2098;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2102 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2104 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2105, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2104, $tmp2105);
                $tmp2103 = $tmp2104;
                panda$core$Int64$init$builtin_int64(&$tmp2107, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2106, $tmp2107);
                panda$collections$Array* $tmp2110 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2110);
                $tmp2109 = $tmp2110;
                panda$collections$Array* $tmp2112 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2112);
                $tmp2111 = $tmp2112;
                org$pandalanguage$pandac$Type* $tmp2114 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2113 = $tmp2114;
                panda$collections$ImmutableArray* $tmp2116 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2116);
                $tmp2115 = $tmp2116;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2102, result1939, p_position, NULL, $tmp2103, $tmp2106, &$s2108, $tmp2109, $tmp2111, $tmp2113, $tmp2115);
                $tmp2101 = $tmp2102;
                $tmp2100 = $tmp2101;
                defaultInit2099 = $tmp2100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2103));
                panda$collections$Array$add$panda$collections$Array$T(result1939->methods, ((panda$core$Object*) defaultInit2099));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1939->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2099));
            }
            $tmp2098 = -1;
            goto $l2096;
            $l2096:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2099));
            defaultInit2099 = NULL;
            switch ($tmp2098) {
                case -1: goto $l2117;
            }
            $l2117:;
        }
        }
        panda$core$Bit $tmp2120 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2032);
        bool $tmp2119 = $tmp2120.value;
        if (!$tmp2119) goto $l2121;
        panda$core$Int64$init$builtin_int64(&$tmp2123, 0);
        panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2123);
        bool $tmp2122 = $tmp2124.value;
        if ($tmp2122) goto $l2125;
        panda$core$Int64$init$builtin_int64(&$tmp2126, 2);
        panda$core$Bit $tmp2127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2126);
        $tmp2122 = $tmp2127.value;
        $l2125:;
        panda$core$Bit $tmp2128 = { $tmp2122 };
        $tmp2119 = $tmp2128.value;
        $l2121:;
        panda$core$Bit $tmp2129 = { $tmp2119 };
        bool $tmp2118 = $tmp2129.value;
        if (!$tmp2118) goto $l2130;
        ITable* $tmp2132 = ((panda$core$Equatable*) result1939->name)->$class->itable;
        while ($tmp2132->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2132 = $tmp2132->next;
        }
        $fn2134 $tmp2133 = $tmp2132->methods[1];
        panda$core$Bit $tmp2135 = $tmp2133(((panda$core$Equatable*) result1939->name), ((panda$core$Equatable*) &$s2131));
        $tmp2118 = $tmp2135.value;
        $l2130:;
        panda$core$Bit $tmp2136 = { $tmp2118 };
        if ($tmp2136.value) {
        {
            int $tmp2139;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2143 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2145 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2146, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2147, 8192);
                panda$core$Int64 $tmp2148 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2146, $tmp2147);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2145, $tmp2148);
                $tmp2144 = $tmp2145;
                panda$core$Int64$init$builtin_int64(&$tmp2150, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2149, $tmp2150);
                panda$collections$Array* $tmp2153 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2153);
                $tmp2152 = $tmp2153;
                panda$collections$Array* $tmp2155 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2155);
                $tmp2154 = $tmp2155;
                org$pandalanguage$pandac$Type* $tmp2157 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2156 = $tmp2157;
                panda$collections$ImmutableArray* $tmp2159 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2159);
                $tmp2158 = $tmp2159;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2143, result1939, p_position, NULL, $tmp2144, $tmp2149, &$s2151, $tmp2152, $tmp2154, $tmp2156, $tmp2158);
                $tmp2142 = $tmp2143;
                $tmp2141 = $tmp2142;
                defaultCleanup2140 = $tmp2141;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                panda$collections$Array$add$panda$collections$Array$T(result1939->methods, ((panda$core$Object*) defaultCleanup2140));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1939->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2140));
            }
            $tmp2139 = -1;
            goto $l2137;
            $l2137:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2140));
            defaultCleanup2140 = NULL;
            switch ($tmp2139) {
                case -1: goto $l2160;
            }
            $l2160:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2161, 2);
        panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2161);
        if ($tmp2162.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2164, false);
            haveFields2163 = $tmp2164;
            ITable* $tmp2165 = ((panda$collections$CollectionView*) result1939->choiceCases)->$class->itable;
            while ($tmp2165->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2165 = $tmp2165->next;
            }
            $fn2167 $tmp2166 = $tmp2165->methods[0];
            panda$core$Int64 $tmp2168 = $tmp2166(((panda$collections$CollectionView*) result1939->choiceCases));
            panda$core$Int64$init$builtin_int64(&$tmp2169, 0);
            panda$core$Bit $tmp2170 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2168, $tmp2169);
            if ($tmp2170.value) {
            {
                {
                    int $tmp2173;
                    {
                        ITable* $tmp2177 = ((panda$collections$Iterable*) result1939->choiceCases)->$class->itable;
                        while ($tmp2177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2177 = $tmp2177->next;
                        }
                        $fn2179 $tmp2178 = $tmp2177->methods[0];
                        panda$collections$Iterator* $tmp2180 = $tmp2178(((panda$collections$Iterable*) result1939->choiceCases));
                        $tmp2176 = $tmp2180;
                        $tmp2175 = $tmp2176;
                        Iter$628$172174 = $tmp2175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                        $l2181:;
                        ITable* $tmp2184 = Iter$628$172174->$class->itable;
                        while ($tmp2184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2184 = $tmp2184->next;
                        }
                        $fn2186 $tmp2185 = $tmp2184->methods[0];
                        panda$core$Bit $tmp2187 = $tmp2185(Iter$628$172174);
                        panda$core$Bit $tmp2188 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2187);
                        bool $tmp2183 = $tmp2188.value;
                        if (!$tmp2183) goto $l2182;
                        {
                            int $tmp2191;
                            {
                                ITable* $tmp2195 = Iter$628$172174->$class->itable;
                                while ($tmp2195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2195 = $tmp2195->next;
                                }
                                $fn2197 $tmp2196 = $tmp2195->methods[1];
                                panda$core$Object* $tmp2198 = $tmp2196(Iter$628$172174);
                                $tmp2194 = $tmp2198;
                                $tmp2193 = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2194);
                                e2192 = $tmp2193;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                                panda$core$Panda$unref$panda$core$Object($tmp2194);
                                ITable* $tmp2199 = ((panda$collections$CollectionView*) e2192->fields)->$class->itable;
                                while ($tmp2199->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                    $tmp2199 = $tmp2199->next;
                                }
                                $fn2201 $tmp2200 = $tmp2199->methods[0];
                                panda$core$Int64 $tmp2202 = $tmp2200(((panda$collections$CollectionView*) e2192->fields));
                                panda$core$Int64$init$builtin_int64(&$tmp2203, 0);
                                panda$core$Bit $tmp2204 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2202, $tmp2203);
                                if ($tmp2204.value) {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2205, true);
                                    haveFields2163 = $tmp2205;
                                    $tmp2191 = 0;
                                    goto $l2189;
                                    $l2206:;
                                    goto $l2182;
                                }
                                }
                            }
                            $tmp2191 = -1;
                            goto $l2189;
                            $l2189:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2192));
                            e2192 = NULL;
                            switch ($tmp2191) {
                                case -1: goto $l2207;
                                case 0: goto $l2206;
                            }
                            $l2207:;
                        }
                        goto $l2181;
                        $l2182:;
                    }
                    $tmp2173 = -1;
                    goto $l2171;
                    $l2171:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$628$172174));
                    Iter$628$172174 = NULL;
                    switch ($tmp2173) {
                        case -1: goto $l2208;
                    }
                    $l2208:;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, result1939->position, &$s2209);
                $tmp2211 = NULL;
                $returnValue2210 = $tmp2211;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
                $tmp1782 = 0;
                goto $l1780;
                $l2212:;
                return $returnValue2210;
            }
            }
            panda$core$Bit $tmp2214 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2163);
            if ($tmp2214.value) {
            {
                {
                    $tmp2215 = result1939->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2218 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2217 = $tmp2218;
                    $tmp2216 = $tmp2217;
                    result1939->rawSuper = $tmp2216;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2221 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2220 = $tmp2221;
        panda$core$Object* $tmp2222 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2220)->currentClass);
        $tmp2219 = $tmp2222;
        panda$core$Panda$unref$panda$core$Object($tmp2219);
        panda$core$Panda$unref$panda$core$Object($tmp2220);
        $tmp2223 = result1939;
        $returnValue2210 = $tmp2223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
        $tmp1782 = 1;
        goto $l1780;
        $l2224:;
        return $returnValue2210;
    }
    $l1780:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1939));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1900));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1828));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1824));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1803));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1783));
    annotations1824 = NULL;
    parameters1828 = NULL;
    supertypes1900 = NULL;
    result1939 = NULL;
    switch ($tmp1782) {
        case 1: goto $l2224;
        case 0: goto $l2212;
    }
    $l2226:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$649$92230 = NULL;
    panda$collections$Iterator* $tmp2231;
    panda$collections$Iterator* $tmp2232;
    org$pandalanguage$pandac$ClassDecl* inner2248 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2249;
    panda$core$Object* $tmp2250;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2229;
        {
            ITable* $tmp2233 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2233->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2233 = $tmp2233->next;
            }
            $fn2235 $tmp2234 = $tmp2233->methods[0];
            panda$collections$Iterator* $tmp2236 = $tmp2234(((panda$collections$Iterable*) p_cl->classes));
            $tmp2232 = $tmp2236;
            $tmp2231 = $tmp2232;
            Iter$649$92230 = $tmp2231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
            $l2237:;
            ITable* $tmp2240 = Iter$649$92230->$class->itable;
            while ($tmp2240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2240 = $tmp2240->next;
            }
            $fn2242 $tmp2241 = $tmp2240->methods[0];
            panda$core$Bit $tmp2243 = $tmp2241(Iter$649$92230);
            panda$core$Bit $tmp2244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2243);
            bool $tmp2239 = $tmp2244.value;
            if (!$tmp2239) goto $l2238;
            {
                int $tmp2247;
                {
                    ITable* $tmp2251 = Iter$649$92230->$class->itable;
                    while ($tmp2251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2251 = $tmp2251->next;
                    }
                    $fn2253 $tmp2252 = $tmp2251->methods[1];
                    panda$core$Object* $tmp2254 = $tmp2252(Iter$649$92230);
                    $tmp2250 = $tmp2254;
                    $tmp2249 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2250);
                    inner2248 = $tmp2249;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2249));
                    panda$core$Panda$unref$panda$core$Object($tmp2250);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2248, p_arr);
                }
                $tmp2247 = -1;
                goto $l2245;
                $l2245:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2248));
                inner2248 = NULL;
                switch ($tmp2247) {
                    case -1: goto $l2255;
                }
                $l2255:;
            }
            goto $l2237;
            $l2238:;
        }
        $tmp2229 = -1;
        goto $l2227;
        $l2227:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$649$92230));
        Iter$649$92230 = NULL;
        switch ($tmp2229) {
            case -1: goto $l2256;
        }
        $l2256:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, panda$collections$List* p_classes) {
    panda$core$String* fullName2260 = NULL;
    panda$core$String* $tmp2266;
    panda$core$String* $tmp2267;
    panda$core$String* $tmp2268;
    panda$core$String* $tmp2269;
    panda$core$String* $tmp2273;
    panda$core$String* $tmp2274;
    org$pandalanguage$pandac$ClassDecl* $tmp2276;
    org$pandalanguage$pandac$ClassDecl* $tmp2277;
    org$pandalanguage$pandac$ClassDecl* $tmp2278;
    org$pandalanguage$pandac$Position $tmp2280;
    org$pandalanguage$pandac$Annotations* $tmp2281;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2283;
    panda$core$Int64 $tmp2284;
    panda$collections$Array* $tmp2285;
    panda$collections$Array* $tmp2287;
    panda$core$Object* $tmp2289;
    org$pandalanguage$pandac$MethodDecl* defaultInit2294 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2295;
    org$pandalanguage$pandac$MethodDecl* $tmp2296;
    org$pandalanguage$pandac$Position $tmp2298;
    org$pandalanguage$pandac$Annotations* $tmp2299;
    panda$core$Int64 $tmp2301;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2302;
    panda$core$Int64 $tmp2303;
    panda$collections$Array* $tmp2305;
    panda$collections$Array* $tmp2307;
    org$pandalanguage$pandac$Type* $tmp2309;
    panda$collections$ImmutableArray* $tmp2311;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2313 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2314;
    org$pandalanguage$pandac$MethodDecl* $tmp2315;
    org$pandalanguage$pandac$Position $tmp2317;
    org$pandalanguage$pandac$Annotations* $tmp2318;
    panda$core$Int64 $tmp2320;
    panda$core$Int64 $tmp2321;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2323;
    panda$core$Int64 $tmp2324;
    panda$collections$Array* $tmp2326;
    panda$collections$Array* $tmp2328;
    org$pandalanguage$pandac$Type* $tmp2330;
    panda$collections$ImmutableArray* $tmp2332;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2259;
        {
            memset(&fullName2260, 0, sizeof(fullName2260));
            ITable* $tmp2262 = ((panda$core$Equatable*) p_contextName)->$class->itable;
            while ($tmp2262->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp2262 = $tmp2262->next;
            }
            $fn2264 $tmp2263 = $tmp2262->methods[1];
            panda$core$Bit $tmp2265 = $tmp2263(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s2261));
            if ($tmp2265.value) {
            {
                {
                    $tmp2266 = fullName2260;
                    panda$core$String* $tmp2270 = panda$core$String$convert$R$panda$core$String(p_contextName);
                    $tmp2269 = $tmp2270;
                    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2271);
                    $tmp2268 = $tmp2272;
                    $tmp2267 = $tmp2268;
                    fullName2260 = $tmp2267;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
                }
            }
            }
            else {
            {
                {
                    $tmp2273 = fullName2260;
                    $tmp2274 = &$s2275;
                    fullName2260 = $tmp2274;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2274));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                }
            }
            }
            {
                $tmp2276 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2279 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2280);
                org$pandalanguage$pandac$Annotations* $tmp2282 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2282);
                $tmp2281 = $tmp2282;
                panda$core$Int64$init$builtin_int64(&$tmp2284, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2283, $tmp2284);
                panda$collections$Array* $tmp2286 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2286);
                $tmp2285 = $tmp2286;
                panda$collections$Array* $tmp2288 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2288);
                $tmp2287 = $tmp2288;
                panda$core$Object* $tmp2290 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2289 = $tmp2290;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2279, p_source, $tmp2280, p_aliases, NULL, $tmp2281, $tmp2283, fullName2260, ((panda$collections$ListView*) $tmp2285), $tmp2287, ((org$pandalanguage$pandac$Compiler*) $tmp2289)->root);
                $tmp2278 = $tmp2279;
                $tmp2277 = $tmp2278;
                self->bareCodeClass = $tmp2277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2278));
                panda$core$Panda$unref$panda$core$Object($tmp2289);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
            }
            ITable* $tmp2291 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2291->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2291 = $tmp2291->next;
            }
            $fn2293 $tmp2292 = $tmp2291->methods[0];
            $tmp2292(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2297 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2298);
            org$pandalanguage$pandac$Annotations* $tmp2300 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2301, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2300, $tmp2301);
            $tmp2299 = $tmp2300;
            panda$core$Int64$init$builtin_int64(&$tmp2303, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2302, $tmp2303);
            panda$collections$Array* $tmp2306 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2306);
            $tmp2305 = $tmp2306;
            panda$collections$Array* $tmp2308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2308);
            $tmp2307 = $tmp2308;
            org$pandalanguage$pandac$Type* $tmp2310 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2309 = $tmp2310;
            panda$collections$ImmutableArray* $tmp2312 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2312);
            $tmp2311 = $tmp2312;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2297, self->bareCodeClass, $tmp2298, NULL, $tmp2299, $tmp2302, &$s2304, $tmp2305, $tmp2307, $tmp2309, $tmp2311);
            $tmp2296 = $tmp2297;
            $tmp2295 = $tmp2296;
            defaultInit2294 = $tmp2295;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2294));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2294));
            org$pandalanguage$pandac$MethodDecl* $tmp2316 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2317);
            org$pandalanguage$pandac$Annotations* $tmp2319 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2320, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2321, 8192);
            panda$core$Int64 $tmp2322 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2320, $tmp2321);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2319, $tmp2322);
            $tmp2318 = $tmp2319;
            panda$core$Int64$init$builtin_int64(&$tmp2324, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2323, $tmp2324);
            panda$collections$Array* $tmp2327 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2327);
            $tmp2326 = $tmp2327;
            panda$collections$Array* $tmp2329 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2329);
            $tmp2328 = $tmp2329;
            org$pandalanguage$pandac$Type* $tmp2331 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2330 = $tmp2331;
            panda$collections$ImmutableArray* $tmp2333 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2333);
            $tmp2332 = $tmp2333;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2316, self->bareCodeClass, $tmp2317, NULL, $tmp2318, $tmp2323, &$s2325, $tmp2326, $tmp2328, $tmp2330, $tmp2332);
            $tmp2315 = $tmp2316;
            $tmp2314 = $tmp2315;
            defaultCleanup2313 = $tmp2314;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2318));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2313));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2313));
        }
        $tmp2259 = -1;
        goto $l2257;
        $l2257:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName2260));
        defaultInit2294 = NULL;
        defaultCleanup2313 = NULL;
        switch ($tmp2259) {
            case -1: goto $l2334;
        }
        $l2334:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2339;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2335; else goto $l2336;
    $l2336:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2337, (panda$core$Int64) { 684 }, &$s2338);
    abort();
    $l2335:;
    panda$core$Object* $tmp2340 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2339 = $tmp2340;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2339), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2339);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2341;
    panda$io$File* $tmp2342;
    org$pandalanguage$pandac$ASTNode* $match$690_92346 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    panda$core$Int64 $tmp2348;
    panda$collections$ImmutableArray* entries2350 = NULL;
    panda$collections$Array* result2355 = NULL;
    panda$collections$Array* $tmp2356;
    panda$collections$Array* $tmp2357;
    panda$core$String* currentPackage2359 = NULL;
    panda$core$String* $tmp2360;
    panda$collections$HashMap* aliases2362 = NULL;
    panda$collections$HashMap* $tmp2363;
    panda$collections$HashMap* $tmp2364;
    panda$collections$Iterator* Iter$695$172369 = NULL;
    panda$collections$Iterator* $tmp2370;
    panda$collections$Iterator* $tmp2371;
    org$pandalanguage$pandac$ASTNode* e2387 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2388;
    panda$core$Object* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $match$696_212397 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    panda$core$Int64 $tmp2399;
    panda$core$String* name2401 = NULL;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$Int64 $tmp2405;
    panda$core$String* fullName2407 = NULL;
    panda$core$String$Index$nullable idx2412;
    panda$core$String* alias2415 = NULL;
    panda$core$String* $tmp2416;
    panda$core$String* $tmp2417;
    panda$core$String* $tmp2418;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2419;
    panda$core$Bit $tmp2421;
    panda$core$String* $tmp2423;
    panda$core$String* $tmp2424;
    panda$core$Int64 $tmp2426;
    org$pandalanguage$pandac$Position position2428;
    org$pandalanguage$pandac$ASTNode* dc2430 = NULL;
    panda$collections$ImmutableArray* annotations2432 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2434;
    panda$core$String* name2436 = NULL;
    panda$collections$ImmutableArray* generics2438 = NULL;
    panda$collections$ImmutableArray* supertypes2440 = NULL;
    panda$collections$ImmutableArray* members2442 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2447 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2448;
    org$pandalanguage$pandac$ClassDecl* $tmp2449;
    panda$core$Int64 $tmp2452;
    org$pandalanguage$pandac$Position position2454;
    org$pandalanguage$pandac$ASTNode* dc2456 = NULL;
    panda$collections$ImmutableArray* annotations2458 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2460;
    panda$core$String* rawName2462 = NULL;
    panda$collections$ImmutableArray* generics2464 = NULL;
    panda$collections$ImmutableArray* parameters2466 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2468 = NULL;
    panda$collections$ImmutableArray* statements2470 = NULL;
    panda$core$Int64 $tmp2475;
    panda$core$String* name2481 = NULL;
    panda$core$String* $tmp2487;
    panda$core$String* $tmp2488;
    panda$collections$Array* mainParameters2490 = NULL;
    panda$collections$Array* $tmp2491;
    panda$collections$Array* $tmp2492;
    panda$collections$Array* mainStatements2494 = NULL;
    panda$collections$Array* $tmp2495;
    panda$collections$Array* $tmp2496;
    panda$collections$Array* mainArguments2498 = NULL;
    panda$collections$Array* $tmp2499;
    panda$collections$Array* $tmp2500;
    panda$collections$Iterator* Iter$729$332505 = NULL;
    panda$collections$Iterator* $tmp2506;
    panda$collections$Iterator* $tmp2507;
    org$pandalanguage$pandac$ASTNode* p2523 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2524;
    panda$core$Object* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $match$730_372533 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2534;
    panda$core$Int64 $tmp2535;
    org$pandalanguage$pandac$Position position2537;
    panda$core$String* name2539 = NULL;
    org$pandalanguage$pandac$ASTNode* type2541 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2543;
    org$pandalanguage$pandac$Type* $tmp2545;
    org$pandalanguage$pandac$ASTNode* $tmp2547;
    panda$core$Int64 $tmp2549;
    panda$core$Bit $tmp2550;
    org$pandalanguage$pandac$ASTNode* bareConstruct2557 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2558;
    org$pandalanguage$pandac$ASTNode* $tmp2559;
    panda$core$Int64 $tmp2561;
    org$pandalanguage$pandac$ASTNode* $tmp2562;
    panda$core$Int64 $tmp2564;
    panda$collections$ImmutableArray* $tmp2566;
    org$pandalanguage$pandac$ASTNode* $tmp2568;
    panda$core$Int64 $tmp2570;
    org$pandalanguage$pandac$ASTNode* $tmp2571;
    panda$core$Int64 $tmp2573;
    panda$collections$ImmutableArray* $tmp2574;
    org$pandalanguage$pandac$Type* returnType2576 = NULL;
    org$pandalanguage$pandac$Type* $tmp2577;
    org$pandalanguage$pandac$Type* $tmp2578;
    org$pandalanguage$pandac$Type* $tmp2579;
    org$pandalanguage$pandac$Type* $tmp2581;
    org$pandalanguage$pandac$Type* $tmp2582;
    org$pandalanguage$pandac$Type* $tmp2583;
    org$pandalanguage$pandac$MethodDecl* bareMain2585 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2586;
    org$pandalanguage$pandac$MethodDecl* $tmp2587;
    org$pandalanguage$pandac$Position $tmp2589;
    org$pandalanguage$pandac$Annotations* $tmp2590;
    panda$core$Int64 $tmp2592;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2593;
    panda$core$Int64 $tmp2594;
    panda$collections$Array* $tmp2596;
    panda$collections$ImmutableArray* $tmp2598;
    panda$core$String* $tmp2601;
    panda$core$String* $tmp2602;
    panda$core$Object* $tmp2603;
    org$pandalanguage$pandac$MethodDecl* m2605 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2606;
    org$pandalanguage$pandac$MethodDecl* $tmp2607;
    org$pandalanguage$pandac$Annotations* $tmp2611;
    panda$core$Int64 $tmp2612;
    panda$core$Object* $tmp2615;
    panda$core$Int64 $tmp2618;
    org$pandalanguage$pandac$Position position2620;
    org$pandalanguage$pandac$ASTNode* dc2622 = NULL;
    panda$collections$ImmutableArray* annotations2624 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2626 = NULL;
    panda$core$Int64 old2628;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2633;
    panda$core$Bit $tmp2638;
    org$pandalanguage$pandac$FieldDecl* f2655 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2656;
    panda$core$Object* $tmp2657;
    panda$core$Int64 $tmp2660;
    panda$core$Bit $tmp2673;
    panda$core$String* $tmp2677;
    panda$core$String* $tmp2678;
    panda$core$String* $tmp2679;
    panda$core$String* $tmp2680;
    panda$core$String* $tmp2681;
    panda$core$String* $tmp2682;
    panda$core$Object* $tmp2687;
    panda$core$Object* $tmp2692;
    panda$io$File* $tmp2702;
    panda$io$File* $tmp2703;
    panda$collections$ListView* $returnValue2704;
    panda$collections$ListView* $tmp2705;
    panda$core$Bit $tmp2710;
    {
        $tmp2341 = self->source;
        $tmp2342 = p_source;
        self->source = $tmp2342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
    }
    int $tmp2345;
    {
        $tmp2347 = p_file;
        $match$690_92346 = $tmp2347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
        panda$core$Int64$init$builtin_int64(&$tmp2348, 17);
        panda$core$Bit $tmp2349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$690_92346->$rawValue, $tmp2348);
        if ($tmp2349.value) {
        {
            panda$collections$ImmutableArray** $tmp2351 = ((panda$collections$ImmutableArray**) ((char*) $match$690_92346->$data + 0));
            entries2350 = *$tmp2351;
            int $tmp2354;
            {
                panda$collections$Array* $tmp2358 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2358);
                $tmp2357 = $tmp2358;
                $tmp2356 = $tmp2357;
                result2355 = $tmp2356;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2357));
                $tmp2360 = &$s2361;
                currentPackage2359 = $tmp2360;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
                panda$collections$HashMap* $tmp2365 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2365);
                $tmp2364 = $tmp2365;
                $tmp2363 = $tmp2364;
                aliases2362 = $tmp2363;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
                {
                    int $tmp2368;
                    {
                        ITable* $tmp2372 = ((panda$collections$Iterable*) entries2350)->$class->itable;
                        while ($tmp2372->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2372 = $tmp2372->next;
                        }
                        $fn2374 $tmp2373 = $tmp2372->methods[0];
                        panda$collections$Iterator* $tmp2375 = $tmp2373(((panda$collections$Iterable*) entries2350));
                        $tmp2371 = $tmp2375;
                        $tmp2370 = $tmp2371;
                        Iter$695$172369 = $tmp2370;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2370));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2371));
                        $l2376:;
                        ITable* $tmp2379 = Iter$695$172369->$class->itable;
                        while ($tmp2379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2379 = $tmp2379->next;
                        }
                        $fn2381 $tmp2380 = $tmp2379->methods[0];
                        panda$core$Bit $tmp2382 = $tmp2380(Iter$695$172369);
                        panda$core$Bit $tmp2383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2382);
                        bool $tmp2378 = $tmp2383.value;
                        if (!$tmp2378) goto $l2377;
                        {
                            int $tmp2386;
                            {
                                ITable* $tmp2390 = Iter$695$172369->$class->itable;
                                while ($tmp2390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2390 = $tmp2390->next;
                                }
                                $fn2392 $tmp2391 = $tmp2390->methods[1];
                                panda$core$Object* $tmp2393 = $tmp2391(Iter$695$172369);
                                $tmp2389 = $tmp2393;
                                $tmp2388 = ((org$pandalanguage$pandac$ASTNode*) $tmp2389);
                                e2387 = $tmp2388;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
                                panda$core$Panda$unref$panda$core$Object($tmp2389);
                                int $tmp2396;
                                {
                                    $tmp2398 = e2387;
                                    $match$696_212397 = $tmp2398;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
                                    panda$core$Int64$init$builtin_int64(&$tmp2399, 30);
                                    panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212397->$rawValue, $tmp2399);
                                    if ($tmp2400.value) {
                                    {
                                        panda$core$String** $tmp2402 = ((panda$core$String**) ((char*) $match$696_212397->$data + 16));
                                        name2401 = *$tmp2402;
                                        {
                                            $tmp2403 = currentPackage2359;
                                            $tmp2404 = name2401;
                                            currentPackage2359 = $tmp2404;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2404));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2405, 46);
                                    panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212397->$rawValue, $tmp2405);
                                    if ($tmp2406.value) {
                                    {
                                        panda$core$String** $tmp2408 = ((panda$core$String**) ((char*) $match$696_212397->$data + 16));
                                        fullName2407 = *$tmp2408;
                                        int $tmp2411;
                                        {
                                            panda$core$String$Index$nullable $tmp2414 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2407, &$s2413);
                                            idx2412 = $tmp2414;
                                            memset(&alias2415, 0, sizeof(alias2415));
                                            if (((panda$core$Bit) { idx2412.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2416 = alias2415;
                                                    panda$core$String$Index $tmp2420 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2407, ((panda$core$String$Index) idx2412.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2421, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2419, ((panda$core$String$Index$nullable) { $tmp2420, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2421);
                                                    panda$core$String* $tmp2422 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2407, $tmp2419);
                                                    $tmp2418 = $tmp2422;
                                                    $tmp2417 = $tmp2418;
                                                    alias2415 = $tmp2417;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2416));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2423 = alias2415;
                                                    $tmp2424 = fullName2407;
                                                    alias2415 = $tmp2424;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2424));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2362, ((panda$collections$Key*) alias2415), ((panda$core$Object*) fullName2407));
                                        }
                                        $tmp2411 = -1;
                                        goto $l2409;
                                        $l2409:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2415));
                                        switch ($tmp2411) {
                                            case -1: goto $l2425;
                                        }
                                        $l2425:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2426, 11);
                                    panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212397->$rawValue, $tmp2426);
                                    if ($tmp2427.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2429 = ((org$pandalanguage$pandac$Position*) ((char*) $match$696_212397->$data + 0));
                                        position2428 = *$tmp2429;
                                        org$pandalanguage$pandac$ASTNode** $tmp2431 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212397->$data + 16));
                                        dc2430 = *$tmp2431;
                                        panda$collections$ImmutableArray** $tmp2433 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 24));
                                        annotations2432 = *$tmp2433;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2435 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$696_212397->$data + 32));
                                        kind2434 = *$tmp2435;
                                        panda$core$String** $tmp2437 = ((panda$core$String**) ((char*) $match$696_212397->$data + 40));
                                        name2436 = *$tmp2437;
                                        panda$collections$ImmutableArray** $tmp2439 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 48));
                                        generics2438 = *$tmp2439;
                                        panda$collections$ImmutableArray** $tmp2441 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 56));
                                        supertypes2440 = *$tmp2441;
                                        panda$collections$ImmutableArray** $tmp2443 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 64));
                                        members2442 = *$tmp2443;
                                        int $tmp2446;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2450 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2362), currentPackage2359, position2428, dc2430, annotations2432, kind2434, name2436, generics2438, supertypes2440, members2442);
                                            $tmp2449 = $tmp2450;
                                            $tmp2448 = $tmp2449;
                                            cl2447 = $tmp2448;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
                                            if (((panda$core$Bit) { cl2447 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2447, result2355);
                                            }
                                            }
                                        }
                                        $tmp2446 = -1;
                                        goto $l2444;
                                        $l2444:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2447));
                                        cl2447 = NULL;
                                        switch ($tmp2446) {
                                            case -1: goto $l2451;
                                        }
                                        $l2451:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2452, 26);
                                    panda$core$Bit $tmp2453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212397->$rawValue, $tmp2452);
                                    if ($tmp2453.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2455 = ((org$pandalanguage$pandac$Position*) ((char*) $match$696_212397->$data + 0));
                                        position2454 = *$tmp2455;
                                        org$pandalanguage$pandac$ASTNode** $tmp2457 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212397->$data + 16));
                                        dc2456 = *$tmp2457;
                                        panda$collections$ImmutableArray** $tmp2459 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 24));
                                        annotations2458 = *$tmp2459;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2461 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$696_212397->$data + 32));
                                        kind2460 = *$tmp2461;
                                        panda$core$String** $tmp2463 = ((panda$core$String**) ((char*) $match$696_212397->$data + 40));
                                        rawName2462 = *$tmp2463;
                                        panda$collections$ImmutableArray** $tmp2465 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 48));
                                        generics2464 = *$tmp2465;
                                        panda$collections$ImmutableArray** $tmp2467 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 56));
                                        parameters2466 = *$tmp2467;
                                        org$pandalanguage$pandac$ASTNode** $tmp2469 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212397->$data + 64));
                                        rawReturnType2468 = *$tmp2469;
                                        panda$collections$ImmutableArray** $tmp2471 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 72));
                                        statements2470 = *$tmp2471;
                                        int $tmp2474;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2475, 2);
                                            panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2460.$rawValue, $tmp2475);
                                            if ($tmp2476.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2454, &$s2477);
                                                $tmp2474 = 0;
                                                goto $l2472;
                                                $l2478:;
                                                $tmp2396 = 0;
                                                goto $l2394;
                                                $l2479:;
                                                $tmp2386 = 0;
                                                goto $l2384;
                                                $l2480:;
                                                goto $l2376;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2362), currentPackage2359, ((panda$collections$List*) result2355));
                                            memset(&name2481, 0, sizeof(name2481));
                                            panda$core$Bit $tmp2483 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2462, &$s2482);
                                            if ($tmp2483.value) {
                                            {
                                                int $tmp2486;
                                                {
                                                    {
                                                        $tmp2487 = name2481;
                                                        $tmp2488 = &$s2489;
                                                        name2481 = $tmp2488;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2488));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
                                                    }
                                                    panda$collections$Array* $tmp2493 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2493);
                                                    $tmp2492 = $tmp2493;
                                                    $tmp2491 = $tmp2492;
                                                    mainParameters2490 = $tmp2491;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
                                                    panda$collections$Array* $tmp2497 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2497);
                                                    $tmp2496 = $tmp2497;
                                                    $tmp2495 = $tmp2496;
                                                    mainStatements2494 = $tmp2495;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2495));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
                                                    panda$collections$Array* $tmp2501 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2501);
                                                    $tmp2500 = $tmp2501;
                                                    $tmp2499 = $tmp2500;
                                                    mainArguments2498 = $tmp2499;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                                                    {
                                                        int $tmp2504;
                                                        {
                                                            ITable* $tmp2508 = ((panda$collections$Iterable*) parameters2466)->$class->itable;
                                                            while ($tmp2508->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2508 = $tmp2508->next;
                                                            }
                                                            $fn2510 $tmp2509 = $tmp2508->methods[0];
                                                            panda$collections$Iterator* $tmp2511 = $tmp2509(((panda$collections$Iterable*) parameters2466));
                                                            $tmp2507 = $tmp2511;
                                                            $tmp2506 = $tmp2507;
                                                            Iter$729$332505 = $tmp2506;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2506));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
                                                            $l2512:;
                                                            ITable* $tmp2515 = Iter$729$332505->$class->itable;
                                                            while ($tmp2515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2515 = $tmp2515->next;
                                                            }
                                                            $fn2517 $tmp2516 = $tmp2515->methods[0];
                                                            panda$core$Bit $tmp2518 = $tmp2516(Iter$729$332505);
                                                            panda$core$Bit $tmp2519 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2518);
                                                            bool $tmp2514 = $tmp2519.value;
                                                            if (!$tmp2514) goto $l2513;
                                                            {
                                                                int $tmp2522;
                                                                {
                                                                    ITable* $tmp2526 = Iter$729$332505->$class->itable;
                                                                    while ($tmp2526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2526 = $tmp2526->next;
                                                                    }
                                                                    $fn2528 $tmp2527 = $tmp2526->methods[1];
                                                                    panda$core$Object* $tmp2529 = $tmp2527(Iter$729$332505);
                                                                    $tmp2525 = $tmp2529;
                                                                    $tmp2524 = ((org$pandalanguage$pandac$ASTNode*) $tmp2525);
                                                                    p2523 = $tmp2524;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2524));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2525);
                                                                    int $tmp2532;
                                                                    {
                                                                        $tmp2534 = p2523;
                                                                        $match$730_372533 = $tmp2534;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2534));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2535, 31);
                                                                        panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$730_372533->$rawValue, $tmp2535);
                                                                        if ($tmp2536.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2538 = ((org$pandalanguage$pandac$Position*) ((char*) $match$730_372533->$data + 0));
                                                                            position2537 = *$tmp2538;
                                                                            panda$core$String** $tmp2540 = ((panda$core$String**) ((char*) $match$730_372533->$data + 16));
                                                                            name2539 = *$tmp2540;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2542 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$730_372533->$data + 24));
                                                                            type2541 = *$tmp2542;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2544 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2546 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2541);
                                                                            $tmp2545 = $tmp2546;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2544, name2539, $tmp2545);
                                                                            $tmp2543 = $tmp2544;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2490, ((panda$core$Object*) $tmp2543));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2545));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2548 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2549, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2548, $tmp2549, position2537, name2539);
                                                                            $tmp2547 = $tmp2548;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2498, ((panda$core$Object*) $tmp2547));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2547));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2550, false);
                                                                            if ($tmp2550.value) goto $l2551; else goto $l2552;
                                                                            $l2552:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2553, (panda$core$Int64) { 736 });
                                                                            abort();
                                                                            $l2551:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2532 = -1;
                                                                    goto $l2530;
                                                                    $l2530:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
                                                                    switch ($tmp2532) {
                                                                        case -1: goto $l2554;
                                                                    }
                                                                    $l2554:;
                                                                }
                                                                $tmp2522 = -1;
                                                                goto $l2520;
                                                                $l2520:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2523));
                                                                p2523 = NULL;
                                                                switch ($tmp2522) {
                                                                    case -1: goto $l2555;
                                                                }
                                                                $l2555:;
                                                            }
                                                            goto $l2512;
                                                            $l2513:;
                                                        }
                                                        $tmp2504 = -1;
                                                        goto $l2502;
                                                        $l2502:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$729$332505));
                                                        Iter$729$332505 = NULL;
                                                        switch ($tmp2504) {
                                                            case -1: goto $l2556;
                                                        }
                                                        $l2556:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2560 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2561, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2564, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2563, $tmp2564, position2454, &$s2565);
                                                    $tmp2562 = $tmp2563;
                                                    panda$collections$ImmutableArray* $tmp2567 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2567);
                                                    $tmp2566 = $tmp2567;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2560, $tmp2561, position2454, $tmp2562, $tmp2566);
                                                    $tmp2559 = $tmp2560;
                                                    $tmp2558 = $tmp2559;
                                                    bareConstruct2557 = $tmp2558;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2566));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2569 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2570, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2572 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2573, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2572, $tmp2573, position2454, bareConstruct2557, name2481);
                                                    $tmp2571 = $tmp2572;
                                                    panda$collections$ImmutableArray* $tmp2575 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2498);
                                                    $tmp2574 = $tmp2575;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2569, $tmp2570, position2454, $tmp2571, $tmp2574);
                                                    $tmp2568 = $tmp2569;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2494, ((panda$core$Object*) $tmp2568));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2574));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2571));
                                                    memset(&returnType2576, 0, sizeof(returnType2576));
                                                    if (((panda$core$Bit) { rawReturnType2468 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2577 = returnType2576;
                                                            org$pandalanguage$pandac$Type* $tmp2580 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2468);
                                                            $tmp2579 = $tmp2580;
                                                            $tmp2578 = $tmp2579;
                                                            returnType2576 = $tmp2578;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2581 = returnType2576;
                                                            org$pandalanguage$pandac$Type* $tmp2584 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2583 = $tmp2584;
                                                            $tmp2582 = $tmp2583;
                                                            returnType2576 = $tmp2582;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2583));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2581));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2588 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2589);
                                                    org$pandalanguage$pandac$Annotations* $tmp2591 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2592, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2591, $tmp2592);
                                                    $tmp2590 = $tmp2591;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2594, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2593, $tmp2594);
                                                    panda$collections$Array* $tmp2597 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2597);
                                                    $tmp2596 = $tmp2597;
                                                    panda$collections$ImmutableArray* $tmp2599 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2494);
                                                    $tmp2598 = $tmp2599;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2588, self->bareCodeClass, $tmp2589, NULL, $tmp2590, $tmp2593, &$s2595, $tmp2596, mainParameters2490, returnType2576, $tmp2598);
                                                    $tmp2587 = $tmp2588;
                                                    $tmp2586 = $tmp2587;
                                                    bareMain2585 = $tmp2586;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2586));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2596));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2585));
                                                }
                                                $tmp2486 = -1;
                                                goto $l2484;
                                                $l2484:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2585));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2576));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2557));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2498));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2494));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2490));
                                                mainParameters2490 = NULL;
                                                mainStatements2494 = NULL;
                                                mainArguments2498 = NULL;
                                                bareConstruct2557 = NULL;
                                                bareMain2585 = NULL;
                                                switch ($tmp2486) {
                                                    case -1: goto $l2600;
                                                }
                                                $l2600:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2601 = name2481;
                                                    $tmp2602 = rawName2462;
                                                    name2481 = $tmp2602;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2604 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2603 = $tmp2604;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2603)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2603);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2608 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2454, dc2456, annotations2458, kind2460, name2481, generics2464, parameters2466, rawReturnType2468, statements2470);
                                            $tmp2607 = $tmp2608;
                                            $tmp2606 = $tmp2607;
                                            m2605 = $tmp2606;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2606));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2607));
                                            panda$core$Bit $tmp2609 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2605->annotations);
                                            if ($tmp2609.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2605)->position, &$s2610);
                                                $tmp2611 = m2605->annotations;
                                                panda$core$Int64$init$builtin_int64(&$tmp2612, 16);
                                                panda$core$Int64 $tmp2613 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2612);
                                                panda$core$Int64 $tmp2614 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2611->flags, $tmp2613);
                                                $tmp2611->flags = $tmp2614;
                                            }
                                            }
                                            panda$core$Object* $tmp2616 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2615 = $tmp2616;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2615)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2615);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2605));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2605));
                                        }
                                        $tmp2474 = -1;
                                        goto $l2472;
                                        $l2472:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2605));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2481));
                                        m2605 = NULL;
                                        switch ($tmp2474) {
                                            case 0: goto $l2478;
                                            case -1: goto $l2617;
                                        }
                                        $l2617:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2618, 16);
                                    panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212397->$rawValue, $tmp2618);
                                    if ($tmp2619.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2621 = ((org$pandalanguage$pandac$Position*) ((char*) $match$696_212397->$data + 0));
                                        position2620 = *$tmp2621;
                                        org$pandalanguage$pandac$ASTNode** $tmp2623 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212397->$data + 16));
                                        dc2622 = *$tmp2623;
                                        panda$collections$ImmutableArray** $tmp2625 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212397->$data + 24));
                                        annotations2624 = *$tmp2625;
                                        org$pandalanguage$pandac$ASTNode** $tmp2627 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212397->$data + 32));
                                        varDecl2626 = *$tmp2627;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2362), currentPackage2359, ((panda$collections$List*) result2355));
                                        ITable* $tmp2629 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2629->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2629 = $tmp2629->next;
                                        }
                                        $fn2631 $tmp2630 = $tmp2629->methods[0];
                                        panda$core$Int64 $tmp2632 = $tmp2630(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        old2628 = $tmp2632;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2620, dc2622, annotations2624, varDecl2626);
                                        ITable* $tmp2634 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2634->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2634 = $tmp2634->next;
                                        }
                                        $fn2636 $tmp2635 = $tmp2634->methods[0];
                                        panda$core$Int64 $tmp2637 = $tmp2635(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        panda$core$Bit$init$builtin_bit(&$tmp2638, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2633, old2628, $tmp2637, $tmp2638);
                                        int64_t $tmp2640 = $tmp2633.min.value;
                                        panda$core$Int64 i2639 = { $tmp2640 };
                                        int64_t $tmp2642 = $tmp2633.max.value;
                                        bool $tmp2643 = $tmp2633.inclusive.value;
                                        if ($tmp2643) goto $l2650; else goto $l2651;
                                        $l2650:;
                                        if ($tmp2640 <= $tmp2642) goto $l2644; else goto $l2646;
                                        $l2651:;
                                        if ($tmp2640 < $tmp2642) goto $l2644; else goto $l2646;
                                        $l2644:;
                                        {
                                            int $tmp2654;
                                            {
                                                panda$core$Object* $tmp2658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2639);
                                                $tmp2657 = $tmp2658;
                                                $tmp2656 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2657);
                                                f2655 = $tmp2656;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2656));
                                                panda$core$Panda$unref$panda$core$Object($tmp2657);
                                                panda$core$Int64$init$builtin_int64(&$tmp2660, 2);
                                                panda$core$Bit $tmp2661 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2655->fieldKind.$rawValue, $tmp2660);
                                                bool $tmp2659 = $tmp2661.value;
                                                if (!$tmp2659) goto $l2662;
                                                panda$core$Bit $tmp2663 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2655->annotations);
                                                $tmp2659 = $tmp2663.value;
                                                $l2662:;
                                                panda$core$Bit $tmp2664 = { $tmp2659 };
                                                if ($tmp2664.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2655)->position, &$s2665);
                                                }
                                                }
                                            }
                                            $tmp2654 = -1;
                                            goto $l2652;
                                            $l2652:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2655));
                                            f2655 = NULL;
                                            switch ($tmp2654) {
                                                case -1: goto $l2666;
                                            }
                                            $l2666:;
                                        }
                                        $l2647:;
                                        int64_t $tmp2668 = $tmp2642 - i2639.value;
                                        if ($tmp2643) goto $l2669; else goto $l2670;
                                        $l2669:;
                                        if ((uint64_t) $tmp2668 >= 1) goto $l2667; else goto $l2646;
                                        $l2670:;
                                        if ((uint64_t) $tmp2668 > 1) goto $l2667; else goto $l2646;
                                        $l2667:;
                                        i2639.value += 1;
                                        goto $l2644;
                                        $l2646:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2673, false);
                                        if ($tmp2673.value) goto $l2674; else goto $l2675;
                                        $l2675:;
                                        panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2683, ((panda$core$Object*) e2387));
                                        $tmp2682 = $tmp2684;
                                        panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2685);
                                        $tmp2681 = $tmp2686;
                                        panda$core$Int64$wrapper* $tmp2688;
                                        $tmp2688 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2688->value = e2387->$rawValue;
                                        $tmp2687 = ((panda$core$Object*) $tmp2688);
                                        panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2681, $tmp2687);
                                        $tmp2680 = $tmp2689;
                                        panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2690);
                                        $tmp2679 = $tmp2691;
                                        org$pandalanguage$pandac$Position $tmp2694 = (($fn2693) e2387->$class->vtable[2])(e2387);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2695;
                                        $tmp2695 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2695->value = $tmp2694;
                                        $tmp2692 = ((panda$core$Object*) $tmp2695);
                                        panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2679, $tmp2692);
                                        $tmp2678 = $tmp2696;
                                        panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2697);
                                        $tmp2677 = $tmp2698;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2676, (panda$core$Int64) { 785 }, $tmp2677);
                                        abort();
                                        $l2674:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2396 = -1;
                                goto $l2394;
                                $l2394:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
                                switch ($tmp2396) {
                                    case 0: goto $l2479;
                                    case -1: goto $l2699;
                                }
                                $l2699:;
                            }
                            $tmp2386 = -1;
                            goto $l2384;
                            $l2384:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2387));
                            e2387 = NULL;
                            switch ($tmp2386) {
                                case 0: goto $l2480;
                                case -1: goto $l2700;
                            }
                            $l2700:;
                        }
                        goto $l2376;
                        $l2377:;
                    }
                    $tmp2368 = -1;
                    goto $l2366;
                    $l2366:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$695$172369));
                    Iter$695$172369 = NULL;
                    switch ($tmp2368) {
                        case -1: goto $l2701;
                    }
                    $l2701:;
                }
                {
                    $tmp2702 = self->source;
                    $tmp2703 = NULL;
                    self->source = $tmp2703;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2703));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2702));
                }
                $tmp2705 = ((panda$collections$ListView*) result2355);
                $returnValue2704 = $tmp2705;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2705));
                $tmp2354 = 0;
                goto $l2352;
                $l2706:;
                $tmp2345 = 0;
                goto $l2343;
                $l2707:;
                return $returnValue2704;
            }
            $l2352:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2355));
            result2355 = NULL;
            currentPackage2359 = NULL;
            aliases2362 = NULL;
            switch ($tmp2354) {
                case 0: goto $l2706;
            }
            $l2709:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2710, false);
            if ($tmp2710.value) goto $l2711; else goto $l2712;
            $l2712:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2713, (panda$core$Int64) { 791 });
            abort();
            $l2711:;
        }
        }
    }
    $tmp2345 = -1;
    goto $l2343;
    $l2343:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2347));
    switch ($tmp2345) {
        case 0: goto $l2707;
        case -1: goto $l2714;
    }
    $l2714:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2717;
    {
    }
    $tmp2717 = -1;
    goto $l2715;
    $l2715:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2717) {
        case -1: goto $l2718;
    }
    $l2718:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

