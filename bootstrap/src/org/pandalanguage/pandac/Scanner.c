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
typedef panda$collections$Iterator* (*$fn288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn295)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn306)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn396)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn397)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn410)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn411)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn424)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn425)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn438)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn439)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn452)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn453)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn559)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn566)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn577)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn726)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn737)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn766)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn773)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn784)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn830)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn837)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn848)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn879)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn897)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn933)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn940)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn951)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn987)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn998)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1024)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1031)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1056)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1063)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1074)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1193)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1224)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1235)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1249)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1267)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1309)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1362)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1373)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1459)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1466)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1477)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1515)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1534)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1541)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1552)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1777)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1784)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1795)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1807)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1817)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1870)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1888)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1926)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1945)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1952)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1963)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2015)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2022)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2033)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2072)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2079)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2090)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2101)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2123)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2164)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2197)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2227)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2231)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2269)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2276)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2287)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2298)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2327)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2426)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2544)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2551)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2562)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2665)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2670)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2727)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
        panda$core$Weak$init$panda$core$Weak$T$Q($tmp5, ((panda$core$Object*) p_compiler));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
                panda$core$Int64$init$builtin_int64(&$tmp20, 39);
                panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27_1718->$rawValue, $tmp20);
                if ($tmp21.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp23 = ((org$pandalanguage$pandac$Type**) ((char*) $match$27_1718->$data + 16));
                    type22 = *$tmp23;
                    $tmp25 = type22;
                    $returnValue24 = $tmp25;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
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
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
                org$pandalanguage$pandac$Type* $tmp61 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base51);
                $tmp60 = $tmp61;
                panda$collections$Array$add$panda$collections$Array$T(subtypes56, ((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
                panda$core$Panda$unref$panda$core$Object$Q($tmp66);
                $tmp55 = 0;
                goto $l53;
                $l74:;
                $tmp8 = 2;
                goto $l6;
                $l75:;
                return $returnValue24;
            }
            $l53:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) subtypes56));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
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
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp116);
                                org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg114);
                                $tmp121 = $tmp122;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs89, ((panda$core$Object*) $tmp121));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
                            }
                            $tmp113 = -1;
                            goto $l111;
                            $l111:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) arg114));
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
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$41$1796));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
                $tmp88 = 0;
                goto $l86;
                $l134:;
                $tmp8 = 3;
                goto $l6;
                $l135:;
                return $returnValue24;
            }
            $l86:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) finalArgs89));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
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
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp201);
                                org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p199);
                                $tmp206 = $tmp207;
                                panda$collections$Array$add$panda$collections$Array$T(parameters174, ((panda$core$Object*) $tmp206));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
                            }
                            $tmp198 = -1;
                            goto $l196;
                            $l196:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p199));
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
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$60$17181));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
                $tmp150 = 0;
                goto $l148;
                $l226:;
                $tmp8 = 4;
                goto $l6;
                $l227:;
                return $returnValue24;
            }
            $l148:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType210));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters174));
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
    switch ($tmp8) {
        case 2: goto $l75;
        case 4: goto $l227;
        case -1: goto $l247;
        case 0: goto $l27;
        case 3: goto $l135;
        case 1: goto $l45;
    }
    $l247:;
    if (false) goto $l248; else goto $l249;
    $l249:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s250, (panda$core$Int64) { 24 }, &$s251);
    abort();
    $l248:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_flags, panda$core$Int64 p_flag) {
    panda$core$Int64 $tmp253;
    panda$core$Int64 $returnValue256;
    panda$core$Int64 $tmp252 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    panda$core$Int64$init$builtin_int64(&$tmp253, 0);
    panda$core$Bit $tmp254 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp252, $tmp253);
    if ($tmp254.value) {
    {
        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s255);
    }
    }
    panda$core$Int64 $tmp257 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    $returnValue256 = $tmp257;
    return $returnValue256;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Scanner* p_scanner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_text, org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$Bit $returnValue259;
    panda$core$Bit $tmp260;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$Bit $tmp268;
    if (((panda$core$Bit) { p_expr != NULL }).value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp260, true);
        $returnValue259 = $tmp260;
        return $returnValue259;
    }
    }
    panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s264, p_text);
    $tmp263 = $tmp265;
    panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s266);
    $tmp262 = $tmp267;
    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(p_scanner, p_position, $tmp262);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
    panda$core$Bit$init$builtin_bit(&$tmp268, false);
    $returnValue259 = $tmp268;
    return $returnValue259;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags273;
    panda$core$Int64 $tmp274;
    panda$collections$Array* expressions275 = NULL;
    panda$collections$Array* $tmp276;
    panda$core$Method* checkExpression277 = NULL;
    panda$core$Method* $tmp278;
    panda$collections$Iterator* Iter$93$9283 = NULL;
    panda$collections$Iterator* $tmp284;
    panda$collections$Iterator* $tmp285;
    org$pandalanguage$pandac$ASTNode* c301 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp302;
    panda$core$Object* $tmp303;
    org$pandalanguage$pandac$ASTNode* $match$94_13311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp312;
    panda$core$Int64 $tmp313;
    org$pandalanguage$pandac$Position p315;
    panda$core$String* text317 = NULL;
    panda$core$String* exprText319 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr321 = NULL;
    org$pandalanguage$pandac$ASTNode* expr326 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp327;
    panda$core$String* $match$97_21331 = NULL;
    panda$core$String* $tmp332;
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
    panda$core$Int64 $tmp387;
    panda$collections$Array* $tmp391;
    panda$collections$Array* $tmp392;
    panda$collections$Array* $tmp393;
    panda$core$Bit $tmp395;
    org$pandalanguage$pandac$Annotations$Expression* $tmp398;
    panda$core$Int64 $tmp400;
    org$pandalanguage$pandac$ASTNode* $tmp401;
    org$pandalanguage$pandac$ASTNode* $tmp402;
    panda$collections$Array* $tmp405;
    panda$collections$Array* $tmp406;
    panda$collections$Array* $tmp407;
    panda$core$Bit $tmp409;
    org$pandalanguage$pandac$Annotations$Expression* $tmp412;
    panda$core$Int64 $tmp414;
    org$pandalanguage$pandac$ASTNode* $tmp415;
    org$pandalanguage$pandac$ASTNode* $tmp416;
    panda$collections$Array* $tmp419;
    panda$collections$Array* $tmp420;
    panda$collections$Array* $tmp421;
    panda$core$Bit $tmp423;
    org$pandalanguage$pandac$Annotations$Expression* $tmp426;
    panda$core$Int64 $tmp428;
    org$pandalanguage$pandac$ASTNode* $tmp429;
    org$pandalanguage$pandac$ASTNode* $tmp430;
    panda$collections$Array* $tmp433;
    panda$collections$Array* $tmp434;
    panda$collections$Array* $tmp435;
    panda$core$Bit $tmp437;
    org$pandalanguage$pandac$Annotations$Expression* $tmp440;
    panda$core$Int64 $tmp442;
    org$pandalanguage$pandac$ASTNode* $tmp443;
    org$pandalanguage$pandac$ASTNode* $tmp444;
    panda$collections$Array* $tmp447;
    panda$collections$Array* $tmp448;
    panda$collections$Array* $tmp449;
    panda$core$Bit $tmp451;
    org$pandalanguage$pandac$Annotations$Expression* $tmp454;
    panda$core$Int64 $tmp456;
    org$pandalanguage$pandac$ASTNode* $tmp457;
    org$pandalanguage$pandac$ASTNode* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp466;
    panda$core$String* $tmp467;
    panda$core$Bit $tmp473;
    org$pandalanguage$pandac$Annotations* $returnValue480;
    org$pandalanguage$pandac$Annotations* $tmp481;
    org$pandalanguage$pandac$Annotations* $tmp482;
    int $tmp272;
    {
        panda$core$Int64$init$builtin_int64(&$tmp274, 0);
        flags273 = $tmp274;
        $tmp276 = NULL;
        expressions275 = $tmp276;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
        panda$core$MutableMethod* $tmp279 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp279, (panda$core$Int8*) &org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, ((panda$core$Object*) self));
        $tmp278 = ((panda$core$Object*) $tmp279);
        checkExpression277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
        {
            int $tmp282;
            {
                ITable* $tmp286 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp286 = $tmp286->next;
                }
                $fn288 $tmp287 = $tmp286->methods[0];
                panda$collections$Iterator* $tmp289 = $tmp287(((panda$collections$Iterable*) p_a));
                $tmp285 = $tmp289;
                $tmp284 = $tmp285;
                Iter$93$9283 = $tmp284;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
                $l290:;
                ITable* $tmp293 = Iter$93$9283->$class->itable;
                while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp293 = $tmp293->next;
                }
                $fn295 $tmp294 = $tmp293->methods[0];
                panda$core$Bit $tmp296 = $tmp294(Iter$93$9283);
                panda$core$Bit $tmp297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp296);
                bool $tmp292 = $tmp297.value;
                if (!$tmp292) goto $l291;
                {
                    int $tmp300;
                    {
                        ITable* $tmp304 = Iter$93$9283->$class->itable;
                        while ($tmp304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp304 = $tmp304->next;
                        }
                        $fn306 $tmp305 = $tmp304->methods[1];
                        panda$core$Object* $tmp307 = $tmp305(Iter$93$9283);
                        $tmp303 = $tmp307;
                        $tmp302 = ((org$pandalanguage$pandac$ASTNode*) $tmp303);
                        c301 = $tmp302;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp303);
                        int $tmp310;
                        {
                            $tmp312 = c301;
                            $match$94_13311 = $tmp312;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
                            panda$core$Int64$init$builtin_int64(&$tmp313, 0);
                            panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$94_13311->$rawValue, $tmp313);
                            if ($tmp314.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$94_13311->$data + 0));
                                p315 = *$tmp316;
                                panda$core$String** $tmp318 = ((panda$core$String**) ((char*) $match$94_13311->$data + 16));
                                text317 = *$tmp318;
                                panda$core$String** $tmp320 = ((panda$core$String**) ((char*) $match$94_13311->$data + 24));
                                exprText319 = *$tmp320;
                                org$pandalanguage$pandac$ASTNode** $tmp322 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$94_13311->$data + 32));
                                rawExpr321 = *$tmp322;
                                int $tmp325;
                                {
                                    $tmp327 = rawExpr321;
                                    expr326 = $tmp327;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
                                    int $tmp330;
                                    {
                                        $tmp332 = text317;
                                        $match$97_21331 = $tmp332;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
                                        panda$core$Bit $tmp334 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s333);
                                        if ($tmp334.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp335, 2);
                                            panda$core$Int64 $tmp336 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp335);
                                            flags273 = $tmp336;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s337);
                                        if ($tmp338.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp339, 4);
                                            panda$core$Int64 $tmp340 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp339);
                                            flags273 = $tmp340;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s341);
                                        if ($tmp342.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp343, 8);
                                            panda$core$Int64 $tmp344 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp343);
                                            flags273 = $tmp344;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s345);
                                        if ($tmp346.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp347, 16);
                                            panda$core$Int64 $tmp348 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp347);
                                            flags273 = $tmp348;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s349);
                                        if ($tmp350.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp351, 32);
                                            panda$core$Int64 $tmp352 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp351);
                                            flags273 = $tmp352;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp354 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s353);
                                        if ($tmp354.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp355, 64);
                                            panda$core$Int64 $tmp356 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp355);
                                            flags273 = $tmp356;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s357);
                                        if ($tmp358.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp359, 128);
                                            panda$core$Int64 $tmp360 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp359);
                                            flags273 = $tmp360;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp362 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s361);
                                        if ($tmp362.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp363, 256);
                                            panda$core$Int64 $tmp364 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp363);
                                            flags273 = $tmp364;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s365);
                                        if ($tmp366.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp367, 512);
                                            panda$core$Int64 $tmp368 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp367);
                                            flags273 = $tmp368;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp370 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s369);
                                        if ($tmp370.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp371, 1024);
                                            panda$core$Int64 $tmp372 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp371);
                                            flags273 = $tmp372;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s373);
                                        if ($tmp374.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp375, 2048);
                                            panda$core$Int64 $tmp376 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp375);
                                            flags273 = $tmp376;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp378 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s377);
                                        if ($tmp378.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp379, 4096);
                                            panda$core$Int64 $tmp380 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp379);
                                            flags273 = $tmp380;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp382 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s381);
                                        if ($tmp382.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp383, 16384);
                                            panda$core$Int64 $tmp384 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp383);
                                            flags273 = $tmp384;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp386 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s385);
                                        if ($tmp386.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp387, 32768);
                                            panda$core$Int64 $tmp388 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p315, flags273, $tmp387);
                                            flags273 = $tmp388;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp390 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s389);
                                        if ($tmp390.value) {
                                        {
                                            if (((panda$core$Bit) { expressions275 == NULL }).value) {
                                            {
                                                {
                                                    $tmp391 = expressions275;
                                                    panda$collections$Array* $tmp394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp394);
                                                    $tmp393 = $tmp394;
                                                    $tmp392 = $tmp393;
                                                    expressions275 = $tmp392;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
                                                }
                                            }
                                            }
                                            if (checkExpression277->target) {
                                                $tmp395 = (($fn396) checkExpression277->pointer)(checkExpression277->target, self, p315, text317, expr326);
                                            } else {
                                                $tmp395 = (($fn397) checkExpression277->pointer)(self, p315, text317, expr326);
                                            }
                                            if ($tmp395.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp399 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp400, 0);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp399, $tmp400, exprText319, expr326);
                                                $tmp398 = $tmp399;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions275, ((panda$core$Object*) $tmp398));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
                                                {
                                                    $tmp401 = expr326;
                                                    $tmp402 = NULL;
                                                    expr326 = $tmp402;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp404 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s403);
                                        if ($tmp404.value) {
                                        {
                                            if (((panda$core$Bit) { expressions275 == NULL }).value) {
                                            {
                                                {
                                                    $tmp405 = expressions275;
                                                    panda$collections$Array* $tmp408 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp408);
                                                    $tmp407 = $tmp408;
                                                    $tmp406 = $tmp407;
                                                    expressions275 = $tmp406;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
                                                }
                                            }
                                            }
                                            if (checkExpression277->target) {
                                                $tmp409 = (($fn410) checkExpression277->pointer)(checkExpression277->target, self, p315, text317, expr326);
                                            } else {
                                                $tmp409 = (($fn411) checkExpression277->pointer)(self, p315, text317, expr326);
                                            }
                                            if ($tmp409.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp413 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp414, 1);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp413, $tmp414, exprText319, expr326);
                                                $tmp412 = $tmp413;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions275, ((panda$core$Object*) $tmp412));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
                                                {
                                                    $tmp415 = expr326;
                                                    $tmp416 = NULL;
                                                    expr326 = $tmp416;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp418 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s417);
                                        if ($tmp418.value) {
                                        {
                                            if (((panda$core$Bit) { expressions275 == NULL }).value) {
                                            {
                                                {
                                                    $tmp419 = expressions275;
                                                    panda$collections$Array* $tmp422 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp422);
                                                    $tmp421 = $tmp422;
                                                    $tmp420 = $tmp421;
                                                    expressions275 = $tmp420;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
                                                }
                                            }
                                            }
                                            if (checkExpression277->target) {
                                                $tmp423 = (($fn424) checkExpression277->pointer)(checkExpression277->target, self, p315, text317, expr326);
                                            } else {
                                                $tmp423 = (($fn425) checkExpression277->pointer)(self, p315, text317, expr326);
                                            }
                                            if ($tmp423.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp427 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp428, 2);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp427, $tmp428, exprText319, expr326);
                                                $tmp426 = $tmp427;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions275, ((panda$core$Object*) $tmp426));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
                                                {
                                                    $tmp429 = expr326;
                                                    $tmp430 = NULL;
                                                    expr326 = $tmp430;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp432 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s431);
                                        if ($tmp432.value) {
                                        {
                                            if (((panda$core$Bit) { expressions275 == NULL }).value) {
                                            {
                                                {
                                                    $tmp433 = expressions275;
                                                    panda$collections$Array* $tmp436 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp436);
                                                    $tmp435 = $tmp436;
                                                    $tmp434 = $tmp435;
                                                    expressions275 = $tmp434;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
                                                }
                                            }
                                            }
                                            if (checkExpression277->target) {
                                                $tmp437 = (($fn438) checkExpression277->pointer)(checkExpression277->target, self, p315, text317, expr326);
                                            } else {
                                                $tmp437 = (($fn439) checkExpression277->pointer)(self, p315, text317, expr326);
                                            }
                                            if ($tmp437.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp441 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp442, 3);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp441, $tmp442, exprText319, expr326);
                                                $tmp440 = $tmp441;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions275, ((panda$core$Object*) $tmp440));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
                                                {
                                                    $tmp443 = expr326;
                                                    $tmp444 = NULL;
                                                    expr326 = $tmp444;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp446 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21331, &$s445);
                                        if ($tmp446.value) {
                                        {
                                            if (((panda$core$Bit) { expressions275 == NULL }).value) {
                                            {
                                                {
                                                    $tmp447 = expressions275;
                                                    panda$collections$Array* $tmp450 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp450);
                                                    $tmp449 = $tmp450;
                                                    $tmp448 = $tmp449;
                                                    expressions275 = $tmp448;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
                                                }
                                            }
                                            }
                                            if (checkExpression277->target) {
                                                $tmp451 = (($fn452) checkExpression277->pointer)(checkExpression277->target, self, p315, text317, expr326);
                                            } else {
                                                $tmp451 = (($fn453) checkExpression277->pointer)(self, p315, text317, expr326);
                                            }
                                            if ($tmp451.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp455 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp456, 4);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp455, $tmp456, exprText319, expr326);
                                                $tmp454 = $tmp455;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions275, ((panda$core$Object*) $tmp454));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
                                                {
                                                    $tmp457 = expr326;
                                                    $tmp458 = NULL;
                                                    expr326 = $tmp458;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s461, text317);
                                            $tmp460 = $tmp462;
                                            panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s463);
                                            $tmp459 = $tmp464;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p315, $tmp459);
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
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
                                    $tmp330 = -1;
                                    goto $l328;
                                    $l328:;
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
                                    switch ($tmp330) {
                                        case -1: goto $l465;
                                    }
                                    $l465:;
                                    if (((panda$core$Bit) { expr326 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s468, text317);
                                        $tmp467 = $tmp469;
                                        panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp467, &$s470);
                                        $tmp466 = $tmp471;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p315, $tmp466);
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
                                    }
                                    }
                                }
                                $tmp325 = -1;
                                goto $l323;
                                $l323:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr326));
                                expr326 = NULL;
                                switch ($tmp325) {
                                    case -1: goto $l472;
                                }
                                $l472:;
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp473, false);
                                if ($tmp473.value) goto $l474; else goto $l475;
                                $l475:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s476, (panda$core$Int64) { 159 });
                                abort();
                                $l474:;
                            }
                            }
                        }
                        $tmp310 = -1;
                        goto $l308;
                        $l308:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
                        switch ($tmp310) {
                            case -1: goto $l477;
                        }
                        $l477:;
                    }
                    $tmp300 = -1;
                    goto $l298;
                    $l298:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) c301));
                    c301 = NULL;
                    switch ($tmp300) {
                        case -1: goto $l478;
                    }
                    $l478:;
                }
                goto $l290;
                $l291:;
            }
            $tmp282 = -1;
            goto $l280;
            $l280:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$93$9283));
            Iter$93$9283 = NULL;
            switch ($tmp282) {
                case -1: goto $l479;
            }
            $l479:;
        }
        org$pandalanguage$pandac$Annotations* $tmp483 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp483, flags273, ((panda$collections$ListView*) expressions275));
        $tmp482 = $tmp483;
        $tmp481 = $tmp482;
        $returnValue480 = $tmp481;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
        $tmp272 = 0;
        goto $l270;
        $l484:;
        return $returnValue480;
    }
    $l270:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) checkExpression277));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expressions275));
    checkExpression277 = NULL;
    switch ($tmp272) {
        case 0: goto $l484;
    }
    $l486:;
    if (false) goto $l487; else goto $l488;
    $l488:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s489, (panda$core$Int64) { 83 }, &$s490);
    abort();
    $l487:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment494 = NULL;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    org$pandalanguage$pandac$ASTNode* $match$173_13500 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp501;
    panda$core$Int64 $tmp502;
    org$pandalanguage$pandac$Position position504;
    panda$core$String* text506 = NULL;
    panda$core$String* $tmp508;
    panda$core$String* $tmp509;
    panda$core$Bit $tmp510;
    org$pandalanguage$pandac$Annotations* annotations515 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp516;
    org$pandalanguage$pandac$Annotations* $tmp517;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind519;
    org$pandalanguage$pandac$ASTNode* $match$182_9523 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp524;
    panda$core$Int64 $tmp525;
    org$pandalanguage$pandac$Variable$Kind kind527;
    panda$collections$ImmutableArray* decls529 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$184_17531;
    panda$core$Int64 $tmp532;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp534;
    panda$core$Int64 $tmp535;
    panda$core$Int64 $tmp536;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp538;
    panda$core$Int64 $tmp539;
    panda$core$Int64 $tmp540;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp542;
    panda$core$Int64 $tmp543;
    org$pandalanguage$pandac$Annotations* $tmp544;
    panda$core$Int64 $tmp545;
    panda$core$Int64 $tmp547;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp549;
    panda$core$Int64 $tmp550;
    panda$collections$Iterator* Iter$195$17554 = NULL;
    panda$collections$Iterator* $tmp555;
    panda$collections$Iterator* $tmp556;
    org$pandalanguage$pandac$ASTNode* decl572 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp573;
    panda$core$Object* $tmp574;
    org$pandalanguage$pandac$ASTNode* $match$196_21582 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp583;
    panda$core$Int64 $tmp584;
    org$pandalanguage$pandac$Position declPosition586;
    org$pandalanguage$pandac$ASTNode* target588 = NULL;
    org$pandalanguage$pandac$ASTNode* rawValue590 = NULL;
    panda$core$String* name595 = NULL;
    org$pandalanguage$pandac$Type* type596 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$200_29600 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp601;
    panda$core$Int64 $tmp602;
    panda$core$String* id604 = NULL;
    panda$core$String* $tmp606;
    panda$core$String* $tmp607;
    org$pandalanguage$pandac$Type* $tmp608;
    org$pandalanguage$pandac$Type* $tmp609;
    org$pandalanguage$pandac$Type* $tmp610;
    panda$core$Int64 $tmp612;
    panda$core$String* id614 = NULL;
    org$pandalanguage$pandac$ASTNode* idType616 = NULL;
    panda$core$String* $tmp618;
    panda$core$String* $tmp619;
    org$pandalanguage$pandac$Type* $tmp620;
    org$pandalanguage$pandac$Type* $tmp621;
    org$pandalanguage$pandac$Type* $tmp622;
    panda$core$Bit $tmp624;
    org$pandalanguage$pandac$ASTNode* value629 = NULL;
    panda$core$Int64 $tmp636;
    org$pandalanguage$pandac$ASTNode* $tmp639;
    org$pandalanguage$pandac$ASTNode* $tmp640;
    org$pandalanguage$pandac$ASTNode* $tmp641;
    panda$core$Int64 $tmp643;
    org$pandalanguage$pandac$ASTNode* $tmp644;
    org$pandalanguage$pandac$ASTNode* $tmp645;
    org$pandalanguage$pandac$FieldDecl* field646 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp647;
    org$pandalanguage$pandac$FieldDecl* $tmp648;
    panda$core$Bit $tmp651;
    panda$core$Bit $tmp658;
    int $tmp493;
    {
        memset(&doccomment494, 0, sizeof(doccomment494));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp495 = doccomment494;
                $tmp496 = NULL;
                doccomment494 = $tmp496;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
            }
        }
        }
        else {
        {
            int $tmp499;
            {
                $tmp501 = p_rawDoccomment;
                $match$173_13500 = $tmp501;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
                panda$core$Int64$init$builtin_int64(&$tmp502, 38);
                panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_13500->$rawValue, $tmp502);
                if ($tmp503.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp505 = ((org$pandalanguage$pandac$Position*) ((char*) $match$173_13500->$data + 0));
                    position504 = *$tmp505;
                    panda$core$String** $tmp507 = ((panda$core$String**) ((char*) $match$173_13500->$data + 16));
                    text506 = *$tmp507;
                    {
                        $tmp508 = doccomment494;
                        $tmp509 = text506;
                        doccomment494 = $tmp509;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp510, false);
                    if ($tmp510.value) goto $l511; else goto $l512;
                    $l512:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s513, (panda$core$Int64) { 177 });
                    abort();
                    $l511:;
                }
                }
            }
            $tmp499 = -1;
            goto $l497;
            $l497:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
            switch ($tmp499) {
                case -1: goto $l514;
            }
            $l514:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp518 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp517 = $tmp518;
        $tmp516 = $tmp517;
        annotations515 = $tmp516;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
        memset(&fieldKind519, 0, sizeof(fieldKind519));
        int $tmp522;
        {
            $tmp524 = p_varDecl;
            $match$182_9523 = $tmp524;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
            panda$core$Int64$init$builtin_int64(&$tmp525, 47);
            panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$182_9523->$rawValue, $tmp525);
            if ($tmp526.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp528 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$182_9523->$data + 16));
                kind527 = *$tmp528;
                panda$collections$ImmutableArray** $tmp530 = ((panda$collections$ImmutableArray**) ((char*) $match$182_9523->$data + 24));
                decls529 = *$tmp530;
                {
                    $match$184_17531 = kind527;
                    panda$core$Int64$init$builtin_int64(&$tmp532, 0);
                    panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$184_17531.$rawValue, $tmp532);
                    if ($tmp533.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp535, 0);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp534, $tmp535);
                        fieldKind519 = $tmp534;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp536, 1);
                    panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$184_17531.$rawValue, $tmp536);
                    if ($tmp537.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp539, 1);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp538, $tmp539);
                        fieldKind519 = $tmp538;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp540, 2);
                    panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$184_17531.$rawValue, $tmp540);
                    if ($tmp541.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp543, 2);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp542, $tmp543);
                        fieldKind519 = $tmp542;
                        $tmp544 = annotations515;
                        panda$core$Int64$init$builtin_int64(&$tmp545, 16);
                        panda$core$Int64 $tmp546 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp544->flags, $tmp545);
                        $tmp544->flags = $tmp546;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp547, 3);
                    panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$184_17531.$rawValue, $tmp547);
                    if ($tmp548.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp550, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp549, $tmp550);
                        fieldKind519 = $tmp549;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp553;
                    {
                        ITable* $tmp557 = ((panda$collections$Iterable*) decls529)->$class->itable;
                        while ($tmp557->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp557 = $tmp557->next;
                        }
                        $fn559 $tmp558 = $tmp557->methods[0];
                        panda$collections$Iterator* $tmp560 = $tmp558(((panda$collections$Iterable*) decls529));
                        $tmp556 = $tmp560;
                        $tmp555 = $tmp556;
                        Iter$195$17554 = $tmp555;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
                        $l561:;
                        ITable* $tmp564 = Iter$195$17554->$class->itable;
                        while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp564 = $tmp564->next;
                        }
                        $fn566 $tmp565 = $tmp564->methods[0];
                        panda$core$Bit $tmp567 = $tmp565(Iter$195$17554);
                        panda$core$Bit $tmp568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp567);
                        bool $tmp563 = $tmp568.value;
                        if (!$tmp563) goto $l562;
                        {
                            int $tmp571;
                            {
                                ITable* $tmp575 = Iter$195$17554->$class->itable;
                                while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp575 = $tmp575->next;
                                }
                                $fn577 $tmp576 = $tmp575->methods[1];
                                panda$core$Object* $tmp578 = $tmp576(Iter$195$17554);
                                $tmp574 = $tmp578;
                                $tmp573 = ((org$pandalanguage$pandac$ASTNode*) $tmp574);
                                decl572 = $tmp573;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp574);
                                int $tmp581;
                                {
                                    $tmp583 = decl572;
                                    $match$196_21582 = $tmp583;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
                                    panda$core$Int64$init$builtin_int64(&$tmp584, 13);
                                    panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$196_21582->$rawValue, $tmp584);
                                    if ($tmp585.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp587 = ((org$pandalanguage$pandac$Position*) ((char*) $match$196_21582->$data + 0));
                                        declPosition586 = *$tmp587;
                                        org$pandalanguage$pandac$ASTNode** $tmp589 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$196_21582->$data + 16));
                                        target588 = *$tmp589;
                                        org$pandalanguage$pandac$ASTNode** $tmp591 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$196_21582->$data + 24));
                                        rawValue590 = *$tmp591;
                                        int $tmp594;
                                        {
                                            memset(&name595, 0, sizeof(name595));
                                            memset(&type596, 0, sizeof(type596));
                                            int $tmp599;
                                            {
                                                $tmp601 = target588;
                                                $match$200_29600 = $tmp601;
                                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
                                                panda$core$Int64$init$builtin_int64(&$tmp602, 20);
                                                panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$200_29600->$rawValue, $tmp602);
                                                if ($tmp603.value) {
                                                {
                                                    panda$core$String** $tmp605 = ((panda$core$String**) ((char*) $match$200_29600->$data + 16));
                                                    id604 = *$tmp605;
                                                    {
                                                        $tmp606 = name595;
                                                        $tmp607 = id604;
                                                        name595 = $tmp607;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
                                                    }
                                                    {
                                                        $tmp608 = type596;
                                                        org$pandalanguage$pandac$Type* $tmp611 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp610 = $tmp611;
                                                        $tmp609 = $tmp610;
                                                        type596 = $tmp609;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp612, 44);
                                                panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$200_29600->$rawValue, $tmp612);
                                                if ($tmp613.value) {
                                                {
                                                    panda$core$String** $tmp615 = ((panda$core$String**) ((char*) $match$200_29600->$data + 16));
                                                    id614 = *$tmp615;
                                                    org$pandalanguage$pandac$ASTNode** $tmp617 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$200_29600->$data + 24));
                                                    idType616 = *$tmp617;
                                                    {
                                                        $tmp618 = name595;
                                                        $tmp619 = id614;
                                                        name595 = $tmp619;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
                                                    }
                                                    {
                                                        $tmp620 = type596;
                                                        org$pandalanguage$pandac$Type* $tmp623 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType616);
                                                        $tmp622 = $tmp623;
                                                        $tmp621 = $tmp622;
                                                        type596 = $tmp621;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp624, false);
                                                    if ($tmp624.value) goto $l625; else goto $l626;
                                                    $l626:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s627, (panda$core$Int64) { 208 });
                                                    abort();
                                                    $l625:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp599 = -1;
                                            goto $l597;
                                            $l597:;
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
                                            switch ($tmp599) {
                                                case -1: goto $l628;
                                            }
                                            $l628:;
                                            memset(&value629, 0, sizeof(value629));
                                            bool $tmp631 = ((panda$core$Bit) { rawValue590 == NULL }).value;
                                            if (!$tmp631) goto $l632;
                                            panda$core$Bit $tmp633 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(annotations515);
                                            $tmp631 = $tmp633.value;
                                            $l632:;
                                            panda$core$Bit $tmp634 = { $tmp631 };
                                            bool $tmp630 = $tmp634.value;
                                            if (!$tmp630) goto $l635;
                                            panda$core$Int64$init$builtin_int64(&$tmp636, 1);
                                            panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type596->typeKind.$rawValue, $tmp636);
                                            $tmp630 = $tmp637.value;
                                            $l635:;
                                            panda$core$Bit $tmp638 = { $tmp630 };
                                            if ($tmp638.value) {
                                            {
                                                {
                                                    $tmp639 = value629;
                                                    org$pandalanguage$pandac$ASTNode* $tmp642 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp643, 28);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp642, $tmp643, declPosition586);
                                                    $tmp641 = $tmp642;
                                                    $tmp640 = $tmp641;
                                                    value629 = $tmp640;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp644 = value629;
                                                    $tmp645 = rawValue590;
                                                    value629 = $tmp645;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$FieldDecl* $tmp649 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp649, p_owner, declPosition586, doccomment494, annotations515, fieldKind519, name595, type596, value629);
                                            $tmp648 = $tmp649;
                                            $tmp647 = $tmp648;
                                            field646 = $tmp647;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field646));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field646));
                                        }
                                        $tmp594 = -1;
                                        goto $l592;
                                        $l592:;
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) field646));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) value629));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) type596));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name595));
                                        field646 = NULL;
                                        switch ($tmp594) {
                                            case -1: goto $l650;
                                        }
                                        $l650:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp651, false);
                                        if ($tmp651.value) goto $l652; else goto $l653;
                                        $l653:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s654, (panda$core$Int64) { 223 });
                                        abort();
                                        $l652:;
                                    }
                                    }
                                }
                                $tmp581 = -1;
                                goto $l579;
                                $l579:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
                                switch ($tmp581) {
                                    case -1: goto $l655;
                                }
                                $l655:;
                            }
                            $tmp571 = -1;
                            goto $l569;
                            $l569:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl572));
                            decl572 = NULL;
                            switch ($tmp571) {
                                case -1: goto $l656;
                            }
                            $l656:;
                        }
                        goto $l561;
                        $l562:;
                    }
                    $tmp553 = -1;
                    goto $l551;
                    $l551:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$195$17554));
                    Iter$195$17554 = NULL;
                    switch ($tmp553) {
                        case -1: goto $l657;
                    }
                    $l657:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp658, false);
                if ($tmp658.value) goto $l659; else goto $l660;
                $l660:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s661, (panda$core$Int64) { 227 });
                abort();
                $l659:;
            }
            }
        }
        $tmp522 = -1;
        goto $l520;
        $l520:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
        switch ($tmp522) {
            case -1: goto $l662;
        }
        $l662:;
    }
    $tmp493 = -1;
    goto $l491;
    $l491:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) annotations515));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) doccomment494));
    annotations515 = NULL;
    switch ($tmp493) {
        case -1: goto $l663;
    }
    $l663:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$233_9667 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp668;
    panda$core$Int64 $tmp669;
    org$pandalanguage$pandac$ASTNode* test671 = NULL;
    panda$core$Int64 $returnValue673;
    panda$core$Int64 $tmp677;
    panda$core$Int64 $tmp679;
    panda$core$Int64 $tmp682;
    panda$core$Int64 $tmp684;
    panda$core$Int64 $tmp687;
    org$pandalanguage$pandac$ASTNode* left689 = NULL;
    org$pandalanguage$pandac$ASTNode* right691 = NULL;
    panda$core$Int64 $tmp693;
    panda$core$Int64 $tmp700;
    panda$core$Int64 $tmp702;
    panda$core$Int64 $tmp705;
    panda$collections$ImmutableArray* statements707 = NULL;
    panda$core$Int64 result709;
    panda$core$Int64 $tmp710;
    panda$collections$Iterator* Iter$246$17714 = NULL;
    panda$collections$Iterator* $tmp715;
    panda$collections$Iterator* $tmp716;
    org$pandalanguage$pandac$ASTNode* s732 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp733;
    panda$core$Object* $tmp734;
    panda$core$Int64 $tmp745;
    panda$core$Int64 $tmp747;
    panda$core$Int64 $tmp750;
    org$pandalanguage$pandac$ASTNode* target752 = NULL;
    panda$collections$ImmutableArray* args754 = NULL;
    panda$core$Int64 result756;
    panda$collections$Iterator* Iter$254$17761 = NULL;
    panda$collections$Iterator* $tmp762;
    panda$collections$Iterator* $tmp763;
    org$pandalanguage$pandac$ASTNode* a779 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp780;
    panda$core$Object* $tmp781;
    panda$core$Int64 $tmp792;
    org$pandalanguage$pandac$ASTNode* base794 = NULL;
    panda$core$Int64 $tmp799;
    panda$core$Int64 $tmp801;
    panda$core$Int64 $tmp804;
    org$pandalanguage$pandac$ASTNode* value806 = NULL;
    panda$core$Int64 $tmp808;
    panda$core$Int64 $tmp814;
    panda$collections$ImmutableArray* statements816 = NULL;
    org$pandalanguage$pandac$ASTNode* test818 = NULL;
    panda$core$Int64 result820;
    panda$collections$Iterator* Iter$269$17825 = NULL;
    panda$collections$Iterator* $tmp826;
    panda$collections$Iterator* $tmp827;
    org$pandalanguage$pandac$ASTNode* s843 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp844;
    panda$core$Object* $tmp845;
    panda$core$Int64 $tmp856;
    org$pandalanguage$pandac$ASTNode* base858 = NULL;
    panda$core$Int64 $tmp863;
    org$pandalanguage$pandac$ASTNode* list865 = NULL;
    panda$collections$ImmutableArray* statements867 = NULL;
    panda$core$Int64 result869;
    panda$collections$Iterator* Iter$277$17874 = NULL;
    panda$collections$Iterator* $tmp875;
    panda$collections$Iterator* $tmp876;
    org$pandalanguage$pandac$ASTNode* s892 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp893;
    panda$core$Object* $tmp894;
    panda$core$Int64 $tmp905;
    panda$core$Int64 $tmp907;
    panda$core$Int64 $tmp910;
    panda$core$Int64 $tmp912;
    panda$core$Int64 $tmp915;
    org$pandalanguage$pandac$ASTNode* test917 = NULL;
    panda$collections$ImmutableArray* ifTrue919 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse921 = NULL;
    panda$core$Int64 result923;
    panda$collections$Iterator* Iter$287$17928 = NULL;
    panda$collections$Iterator* $tmp929;
    panda$collections$Iterator* $tmp930;
    org$pandalanguage$pandac$ASTNode* s946 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp947;
    panda$core$Object* $tmp948;
    panda$core$Int64 $tmp961;
    panda$core$Int64 $tmp963;
    panda$core$Int64 $tmp966;
    panda$collections$ImmutableArray* statements968 = NULL;
    panda$core$Int64 result970;
    panda$core$Int64 $tmp971;
    panda$collections$Iterator* Iter$298$17975 = NULL;
    panda$collections$Iterator* $tmp976;
    panda$collections$Iterator* $tmp977;
    org$pandalanguage$pandac$ASTNode* s993 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp994;
    panda$core$Object* $tmp995;
    panda$core$Int64 $tmp1006;
    org$pandalanguage$pandac$ASTNode* value1008 = NULL;
    panda$collections$ImmutableArray* whens1010 = NULL;
    panda$collections$ImmutableArray* other1012 = NULL;
    panda$core$Int64 result1014;
    panda$collections$Iterator* Iter$304$171019 = NULL;
    panda$collections$Iterator* $tmp1020;
    panda$collections$Iterator* $tmp1021;
    org$pandalanguage$pandac$ASTNode* w1037 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1038;
    panda$core$Object* $tmp1039;
    panda$collections$Iterator* Iter$308$211051 = NULL;
    panda$collections$Iterator* $tmp1052;
    panda$collections$Iterator* $tmp1053;
    org$pandalanguage$pandac$ASTNode* s1069 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1070;
    panda$core$Object* $tmp1071;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1084;
    panda$core$Int64 $tmp1087;
    panda$core$Int64 $tmp1089;
    panda$core$Int64 $tmp1092;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1097;
    org$pandalanguage$pandac$ASTNode* base1099 = NULL;
    panda$core$Int64 $tmp1101;
    panda$core$Int64 $tmp1106;
    panda$core$Int64 $tmp1108;
    panda$core$Int64 $tmp1111;
    panda$core$Int64 $tmp1113;
    panda$core$Int64 $tmp1116;
    panda$core$Int64 $tmp1118;
    panda$core$Int64 $tmp1121;
    org$pandalanguage$pandac$ASTNode* value1123 = NULL;
    panda$core$Int64 $tmp1125;
    panda$core$Int64 $tmp1131;
    panda$core$Int64 $tmp1133;
    panda$core$Int64 $tmp1136;
    panda$core$Int64 $tmp1138;
    panda$core$Int64 $tmp1141;
    panda$core$Int64 $tmp1143;
    panda$core$Int64 $tmp1146;
    panda$core$Int64 $tmp1148;
    panda$core$Int64 $tmp1151;
    panda$core$Int64 $tmp1153;
    panda$core$Int64 $tmp1156;
    panda$core$Int64 $tmp1158;
    panda$core$Int64 $tmp1161;
    panda$collections$ImmutableArray* decls1163 = NULL;
    panda$core$Int64 result1165;
    panda$core$Int64 $tmp1166;
    panda$collections$Iterator* Iter$346$171170 = NULL;
    panda$collections$Iterator* $tmp1171;
    panda$collections$Iterator* $tmp1172;
    org$pandalanguage$pandac$ASTNode* decl1188 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1189;
    panda$core$Object* $tmp1190;
    panda$core$Int64 $tmp1201;
    panda$collections$ImmutableArray* tests1203 = NULL;
    panda$collections$ImmutableArray* statements1205 = NULL;
    panda$core$Int64 result1207;
    panda$core$Int64 $tmp1208;
    panda$collections$Iterator* Iter$352$171212 = NULL;
    panda$collections$Iterator* $tmp1213;
    panda$collections$Iterator* $tmp1214;
    org$pandalanguage$pandac$ASTNode* test1230 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1231;
    panda$core$Object* $tmp1232;
    panda$collections$Iterator* Iter$355$171244 = NULL;
    panda$collections$Iterator* $tmp1245;
    panda$collections$Iterator* $tmp1246;
    org$pandalanguage$pandac$ASTNode* s1262 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1263;
    panda$core$Object* $tmp1264;
    panda$core$Int64 $tmp1275;
    org$pandalanguage$pandac$ASTNode* test1277 = NULL;
    panda$collections$ImmutableArray* statements1279 = NULL;
    panda$core$Int64 result1281;
    panda$collections$Iterator* Iter$361$171286 = NULL;
    panda$collections$Iterator* $tmp1287;
    panda$collections$Iterator* $tmp1288;
    org$pandalanguage$pandac$ASTNode* s1304 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    panda$core$Object* $tmp1306;
    panda$core$Bit $tmp1317;
    panda$core$String* $tmp1321;
    panda$core$String* $tmp1322;
    int $tmp666;
    {
        $tmp668 = p_node;
        $match$233_9667 = $tmp668;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
        panda$core$Int64$init$builtin_int64(&$tmp669, 1);
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp669);
        if ($tmp670.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp672 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            test671 = *$tmp672;
            panda$core$Int64 $tmp674 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test671);
            $returnValue673 = $tmp674;
            $tmp666 = 0;
            goto $l664;
            $l675:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp677, 2);
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp677);
        if ($tmp678.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp679, 0);
            $returnValue673 = $tmp679;
            $tmp666 = 1;
            goto $l664;
            $l680:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp682, 3);
        panda$core$Bit $tmp683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp682);
        if ($tmp683.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp684, 0);
            $returnValue673 = $tmp684;
            $tmp666 = 2;
            goto $l664;
            $l685:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp687, 4);
        panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp687);
        if ($tmp688.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp690 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            left689 = *$tmp690;
            org$pandalanguage$pandac$ASTNode** $tmp692 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 32));
            right691 = *$tmp692;
            panda$core$Int64$init$builtin_int64(&$tmp693, 1);
            panda$core$Int64 $tmp694 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left689);
            panda$core$Int64 $tmp695 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp693, $tmp694);
            panda$core$Int64 $tmp696 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right691);
            panda$core$Int64 $tmp697 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp695, $tmp696);
            $returnValue673 = $tmp697;
            $tmp666 = 3;
            goto $l664;
            $l698:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp700, 5);
        panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp700);
        if ($tmp701.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp702, 1);
            $returnValue673 = $tmp702;
            $tmp666 = 4;
            goto $l664;
            $l703:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp705, 6);
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp705);
        if ($tmp706.value) {
        {
            panda$collections$ImmutableArray** $tmp708 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 16));
            statements707 = *$tmp708;
            panda$core$Int64$init$builtin_int64(&$tmp710, 0);
            result709 = $tmp710;
            {
                int $tmp713;
                {
                    ITable* $tmp717 = ((panda$collections$Iterable*) statements707)->$class->itable;
                    while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp717 = $tmp717->next;
                    }
                    $fn719 $tmp718 = $tmp717->methods[0];
                    panda$collections$Iterator* $tmp720 = $tmp718(((panda$collections$Iterable*) statements707));
                    $tmp716 = $tmp720;
                    $tmp715 = $tmp716;
                    Iter$246$17714 = $tmp715;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
                    $l721:;
                    ITable* $tmp724 = Iter$246$17714->$class->itable;
                    while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp724 = $tmp724->next;
                    }
                    $fn726 $tmp725 = $tmp724->methods[0];
                    panda$core$Bit $tmp727 = $tmp725(Iter$246$17714);
                    panda$core$Bit $tmp728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp727);
                    bool $tmp723 = $tmp728.value;
                    if (!$tmp723) goto $l722;
                    {
                        int $tmp731;
                        {
                            ITable* $tmp735 = Iter$246$17714->$class->itable;
                            while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp735 = $tmp735->next;
                            }
                            $fn737 $tmp736 = $tmp735->methods[1];
                            panda$core$Object* $tmp738 = $tmp736(Iter$246$17714);
                            $tmp734 = $tmp738;
                            $tmp733 = ((org$pandalanguage$pandac$ASTNode*) $tmp734);
                            s732 = $tmp733;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp734);
                            panda$core$Int64 $tmp739 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s732);
                            panda$core$Int64 $tmp740 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result709, $tmp739);
                            result709 = $tmp740;
                        }
                        $tmp731 = -1;
                        goto $l729;
                        $l729:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s732));
                        s732 = NULL;
                        switch ($tmp731) {
                            case -1: goto $l741;
                        }
                        $l741:;
                    }
                    goto $l721;
                    $l722:;
                }
                $tmp713 = -1;
                goto $l711;
                $l711:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$246$17714));
                Iter$246$17714 = NULL;
                switch ($tmp713) {
                    case -1: goto $l742;
                }
                $l742:;
            }
            $returnValue673 = result709;
            $tmp666 = 5;
            goto $l664;
            $l743:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp745, 7);
        panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp745);
        if ($tmp746.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp747, 1);
            $returnValue673 = $tmp747;
            $tmp666 = 6;
            goto $l664;
            $l748:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp750, 8);
        panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp750);
        if ($tmp751.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp753 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            target752 = *$tmp753;
            panda$collections$ImmutableArray** $tmp755 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            args754 = *$tmp755;
            panda$core$Int64 $tmp757 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target752);
            result756 = $tmp757;
            {
                int $tmp760;
                {
                    ITable* $tmp764 = ((panda$collections$Iterable*) args754)->$class->itable;
                    while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp764 = $tmp764->next;
                    }
                    $fn766 $tmp765 = $tmp764->methods[0];
                    panda$collections$Iterator* $tmp767 = $tmp765(((panda$collections$Iterable*) args754));
                    $tmp763 = $tmp767;
                    $tmp762 = $tmp763;
                    Iter$254$17761 = $tmp762;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
                    $l768:;
                    ITable* $tmp771 = Iter$254$17761->$class->itable;
                    while ($tmp771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp771 = $tmp771->next;
                    }
                    $fn773 $tmp772 = $tmp771->methods[0];
                    panda$core$Bit $tmp774 = $tmp772(Iter$254$17761);
                    panda$core$Bit $tmp775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp774);
                    bool $tmp770 = $tmp775.value;
                    if (!$tmp770) goto $l769;
                    {
                        int $tmp778;
                        {
                            ITable* $tmp782 = Iter$254$17761->$class->itable;
                            while ($tmp782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp782 = $tmp782->next;
                            }
                            $fn784 $tmp783 = $tmp782->methods[1];
                            panda$core$Object* $tmp785 = $tmp783(Iter$254$17761);
                            $tmp781 = $tmp785;
                            $tmp780 = ((org$pandalanguage$pandac$ASTNode*) $tmp781);
                            a779 = $tmp780;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp781);
                            panda$core$Int64 $tmp786 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a779);
                            panda$core$Int64 $tmp787 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result756, $tmp786);
                            result756 = $tmp787;
                        }
                        $tmp778 = -1;
                        goto $l776;
                        $l776:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a779));
                        a779 = NULL;
                        switch ($tmp778) {
                            case -1: goto $l788;
                        }
                        $l788:;
                    }
                    goto $l768;
                    $l769:;
                }
                $tmp760 = -1;
                goto $l758;
                $l758:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$254$17761));
                Iter$254$17761 = NULL;
                switch ($tmp760) {
                    case -1: goto $l789;
                }
                $l789:;
            }
            $returnValue673 = result756;
            $tmp666 = 7;
            goto $l664;
            $l790:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp792, 10);
        panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp792);
        if ($tmp793.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp795 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            base794 = *$tmp795;
            panda$core$Int64 $tmp796 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base794);
            $returnValue673 = $tmp796;
            $tmp666 = 8;
            goto $l664;
            $l797:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp799, 12);
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp799);
        if ($tmp800.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp801, 1);
            $returnValue673 = $tmp801;
            $tmp666 = 9;
            goto $l664;
            $l802:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp804, 13);
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp804);
        if ($tmp805.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp807 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 24));
            value806 = *$tmp807;
            if (((panda$core$Bit) { value806 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp808, 0);
                $returnValue673 = $tmp808;
                $tmp666 = 10;
                goto $l664;
                $l809:;
                return $returnValue673;
            }
            }
            panda$core$Int64 $tmp811 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value806);
            $returnValue673 = $tmp811;
            $tmp666 = 11;
            goto $l664;
            $l812:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp814, 14);
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp814);
        if ($tmp815.value) {
        {
            panda$collections$ImmutableArray** $tmp817 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            statements816 = *$tmp817;
            org$pandalanguage$pandac$ASTNode** $tmp819 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 32));
            test818 = *$tmp819;
            panda$core$Int64 $tmp821 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test818);
            result820 = $tmp821;
            {
                int $tmp824;
                {
                    ITable* $tmp828 = ((panda$collections$Iterable*) statements816)->$class->itable;
                    while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp828 = $tmp828->next;
                    }
                    $fn830 $tmp829 = $tmp828->methods[0];
                    panda$collections$Iterator* $tmp831 = $tmp829(((panda$collections$Iterable*) statements816));
                    $tmp827 = $tmp831;
                    $tmp826 = $tmp827;
                    Iter$269$17825 = $tmp826;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
                    $l832:;
                    ITable* $tmp835 = Iter$269$17825->$class->itable;
                    while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp835 = $tmp835->next;
                    }
                    $fn837 $tmp836 = $tmp835->methods[0];
                    panda$core$Bit $tmp838 = $tmp836(Iter$269$17825);
                    panda$core$Bit $tmp839 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp838);
                    bool $tmp834 = $tmp839.value;
                    if (!$tmp834) goto $l833;
                    {
                        int $tmp842;
                        {
                            ITable* $tmp846 = Iter$269$17825->$class->itable;
                            while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp846 = $tmp846->next;
                            }
                            $fn848 $tmp847 = $tmp846->methods[1];
                            panda$core$Object* $tmp849 = $tmp847(Iter$269$17825);
                            $tmp845 = $tmp849;
                            $tmp844 = ((org$pandalanguage$pandac$ASTNode*) $tmp845);
                            s843 = $tmp844;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp845);
                            panda$core$Int64 $tmp850 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s843);
                            panda$core$Int64 $tmp851 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result820, $tmp850);
                            result820 = $tmp851;
                        }
                        $tmp842 = -1;
                        goto $l840;
                        $l840:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s843));
                        s843 = NULL;
                        switch ($tmp842) {
                            case -1: goto $l852;
                        }
                        $l852:;
                    }
                    goto $l832;
                    $l833:;
                }
                $tmp824 = -1;
                goto $l822;
                $l822:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$269$17825));
                Iter$269$17825 = NULL;
                switch ($tmp824) {
                    case -1: goto $l853;
                }
                $l853:;
            }
            $returnValue673 = result820;
            $tmp666 = 12;
            goto $l664;
            $l854:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp856, 15);
        panda$core$Bit $tmp857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp856);
        if ($tmp857.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp859 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            base858 = *$tmp859;
            panda$core$Int64 $tmp860 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base858);
            $returnValue673 = $tmp860;
            $tmp666 = 13;
            goto $l664;
            $l861:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp863, 18);
        panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp863);
        if ($tmp864.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp866 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 32));
            list865 = *$tmp866;
            panda$collections$ImmutableArray** $tmp868 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 40));
            statements867 = *$tmp868;
            panda$core$Int64 $tmp870 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list865);
            result869 = $tmp870;
            {
                int $tmp873;
                {
                    ITable* $tmp877 = ((panda$collections$Iterable*) statements867)->$class->itable;
                    while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp877 = $tmp877->next;
                    }
                    $fn879 $tmp878 = $tmp877->methods[0];
                    panda$collections$Iterator* $tmp880 = $tmp878(((panda$collections$Iterable*) statements867));
                    $tmp876 = $tmp880;
                    $tmp875 = $tmp876;
                    Iter$277$17874 = $tmp875;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
                    $l881:;
                    ITable* $tmp884 = Iter$277$17874->$class->itable;
                    while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp884 = $tmp884->next;
                    }
                    $fn886 $tmp885 = $tmp884->methods[0];
                    panda$core$Bit $tmp887 = $tmp885(Iter$277$17874);
                    panda$core$Bit $tmp888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp887);
                    bool $tmp883 = $tmp888.value;
                    if (!$tmp883) goto $l882;
                    {
                        int $tmp891;
                        {
                            ITable* $tmp895 = Iter$277$17874->$class->itable;
                            while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp895 = $tmp895->next;
                            }
                            $fn897 $tmp896 = $tmp895->methods[1];
                            panda$core$Object* $tmp898 = $tmp896(Iter$277$17874);
                            $tmp894 = $tmp898;
                            $tmp893 = ((org$pandalanguage$pandac$ASTNode*) $tmp894);
                            s892 = $tmp893;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp894);
                            panda$core$Int64 $tmp899 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s892);
                            panda$core$Int64 $tmp900 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result869, $tmp899);
                            result869 = $tmp900;
                        }
                        $tmp891 = -1;
                        goto $l889;
                        $l889:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s892));
                        s892 = NULL;
                        switch ($tmp891) {
                            case -1: goto $l901;
                        }
                        $l901:;
                    }
                    goto $l881;
                    $l882:;
                }
                $tmp873 = -1;
                goto $l871;
                $l871:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$277$17874));
                Iter$277$17874 = NULL;
                switch ($tmp873) {
                    case -1: goto $l902;
                }
                $l902:;
            }
            $returnValue673 = result869;
            $tmp666 = 14;
            goto $l664;
            $l903:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp905, 19);
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp905);
        if ($tmp906.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp907, 0);
            $returnValue673 = $tmp907;
            $tmp666 = 15;
            goto $l664;
            $l908:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp910, 20);
        panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp910);
        if ($tmp911.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp912, 1);
            $returnValue673 = $tmp912;
            $tmp666 = 16;
            goto $l664;
            $l913:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp915, 21);
        panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp915);
        if ($tmp916.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp918 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            test917 = *$tmp918;
            panda$collections$ImmutableArray** $tmp920 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            ifTrue919 = *$tmp920;
            org$pandalanguage$pandac$ASTNode** $tmp922 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 32));
            ifFalse921 = *$tmp922;
            panda$core$Int64 $tmp924 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test917);
            result923 = $tmp924;
            {
                int $tmp927;
                {
                    ITable* $tmp931 = ((panda$collections$Iterable*) ifTrue919)->$class->itable;
                    while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp931 = $tmp931->next;
                    }
                    $fn933 $tmp932 = $tmp931->methods[0];
                    panda$collections$Iterator* $tmp934 = $tmp932(((panda$collections$Iterable*) ifTrue919));
                    $tmp930 = $tmp934;
                    $tmp929 = $tmp930;
                    Iter$287$17928 = $tmp929;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
                    $l935:;
                    ITable* $tmp938 = Iter$287$17928->$class->itable;
                    while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp938 = $tmp938->next;
                    }
                    $fn940 $tmp939 = $tmp938->methods[0];
                    panda$core$Bit $tmp941 = $tmp939(Iter$287$17928);
                    panda$core$Bit $tmp942 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp941);
                    bool $tmp937 = $tmp942.value;
                    if (!$tmp937) goto $l936;
                    {
                        int $tmp945;
                        {
                            ITable* $tmp949 = Iter$287$17928->$class->itable;
                            while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp949 = $tmp949->next;
                            }
                            $fn951 $tmp950 = $tmp949->methods[1];
                            panda$core$Object* $tmp952 = $tmp950(Iter$287$17928);
                            $tmp948 = $tmp952;
                            $tmp947 = ((org$pandalanguage$pandac$ASTNode*) $tmp948);
                            s946 = $tmp947;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp948);
                            panda$core$Int64 $tmp953 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s946);
                            panda$core$Int64 $tmp954 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result923, $tmp953);
                            result923 = $tmp954;
                        }
                        $tmp945 = -1;
                        goto $l943;
                        $l943:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s946));
                        s946 = NULL;
                        switch ($tmp945) {
                            case -1: goto $l955;
                        }
                        $l955:;
                    }
                    goto $l935;
                    $l936:;
                }
                $tmp927 = -1;
                goto $l925;
                $l925:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$287$17928));
                Iter$287$17928 = NULL;
                switch ($tmp927) {
                    case -1: goto $l956;
                }
                $l956:;
            }
            if (((panda$core$Bit) { ifFalse921 != NULL }).value) {
            {
                panda$core$Int64 $tmp957 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse921);
                panda$core$Int64 $tmp958 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result923, $tmp957);
                result923 = $tmp958;
            }
            }
            $returnValue673 = result923;
            $tmp666 = 17;
            goto $l664;
            $l959:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp961, 22);
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp961);
        if ($tmp962.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp963, 1);
            $returnValue673 = $tmp963;
            $tmp666 = 18;
            goto $l664;
            $l964:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp966, 24);
        panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp966);
        if ($tmp967.value) {
        {
            panda$collections$ImmutableArray** $tmp969 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            statements968 = *$tmp969;
            panda$core$Int64$init$builtin_int64(&$tmp971, 0);
            result970 = $tmp971;
            {
                int $tmp974;
                {
                    ITable* $tmp978 = ((panda$collections$Iterable*) statements968)->$class->itable;
                    while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp978 = $tmp978->next;
                    }
                    $fn980 $tmp979 = $tmp978->methods[0];
                    panda$collections$Iterator* $tmp981 = $tmp979(((panda$collections$Iterable*) statements968));
                    $tmp977 = $tmp981;
                    $tmp976 = $tmp977;
                    Iter$298$17975 = $tmp976;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
                    $l982:;
                    ITable* $tmp985 = Iter$298$17975->$class->itable;
                    while ($tmp985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp985 = $tmp985->next;
                    }
                    $fn987 $tmp986 = $tmp985->methods[0];
                    panda$core$Bit $tmp988 = $tmp986(Iter$298$17975);
                    panda$core$Bit $tmp989 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp988);
                    bool $tmp984 = $tmp989.value;
                    if (!$tmp984) goto $l983;
                    {
                        int $tmp992;
                        {
                            ITable* $tmp996 = Iter$298$17975->$class->itable;
                            while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp996 = $tmp996->next;
                            }
                            $fn998 $tmp997 = $tmp996->methods[1];
                            panda$core$Object* $tmp999 = $tmp997(Iter$298$17975);
                            $tmp995 = $tmp999;
                            $tmp994 = ((org$pandalanguage$pandac$ASTNode*) $tmp995);
                            s993 = $tmp994;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp995);
                            panda$core$Int64 $tmp1000 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s993);
                            panda$core$Int64 $tmp1001 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result970, $tmp1000);
                            result970 = $tmp1001;
                        }
                        $tmp992 = -1;
                        goto $l990;
                        $l990:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s993));
                        s993 = NULL;
                        switch ($tmp992) {
                            case -1: goto $l1002;
                        }
                        $l1002:;
                    }
                    goto $l982;
                    $l983:;
                }
                $tmp974 = -1;
                goto $l972;
                $l972:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$298$17975));
                Iter$298$17975 = NULL;
                switch ($tmp974) {
                    case -1: goto $l1003;
                }
                $l1003:;
            }
            $returnValue673 = result970;
            $tmp666 = 19;
            goto $l664;
            $l1004:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1006, 25);
        panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1006);
        if ($tmp1007.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1009 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            value1008 = *$tmp1009;
            panda$collections$ImmutableArray** $tmp1011 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            whens1010 = *$tmp1011;
            panda$collections$ImmutableArray** $tmp1013 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 32));
            other1012 = *$tmp1013;
            panda$core$Int64 $tmp1015 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1008);
            result1014 = $tmp1015;
            {
                int $tmp1018;
                {
                    ITable* $tmp1022 = ((panda$collections$Iterable*) whens1010)->$class->itable;
                    while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1022 = $tmp1022->next;
                    }
                    $fn1024 $tmp1023 = $tmp1022->methods[0];
                    panda$collections$Iterator* $tmp1025 = $tmp1023(((panda$collections$Iterable*) whens1010));
                    $tmp1021 = $tmp1025;
                    $tmp1020 = $tmp1021;
                    Iter$304$171019 = $tmp1020;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
                    $l1026:;
                    ITable* $tmp1029 = Iter$304$171019->$class->itable;
                    while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1029 = $tmp1029->next;
                    }
                    $fn1031 $tmp1030 = $tmp1029->methods[0];
                    panda$core$Bit $tmp1032 = $tmp1030(Iter$304$171019);
                    panda$core$Bit $tmp1033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1032);
                    bool $tmp1028 = $tmp1033.value;
                    if (!$tmp1028) goto $l1027;
                    {
                        int $tmp1036;
                        {
                            ITable* $tmp1040 = Iter$304$171019->$class->itable;
                            while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1040 = $tmp1040->next;
                            }
                            $fn1042 $tmp1041 = $tmp1040->methods[1];
                            panda$core$Object* $tmp1043 = $tmp1041(Iter$304$171019);
                            $tmp1039 = $tmp1043;
                            $tmp1038 = ((org$pandalanguage$pandac$ASTNode*) $tmp1039);
                            w1037 = $tmp1038;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1039);
                            panda$core$Int64 $tmp1044 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w1037);
                            panda$core$Int64 $tmp1045 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1014, $tmp1044);
                            result1014 = $tmp1045;
                        }
                        $tmp1036 = -1;
                        goto $l1034;
                        $l1034:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) w1037));
                        w1037 = NULL;
                        switch ($tmp1036) {
                            case -1: goto $l1046;
                        }
                        $l1046:;
                    }
                    goto $l1026;
                    $l1027:;
                }
                $tmp1018 = -1;
                goto $l1016;
                $l1016:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$304$171019));
                Iter$304$171019 = NULL;
                switch ($tmp1018) {
                    case -1: goto $l1047;
                }
                $l1047:;
            }
            if (((panda$core$Bit) { other1012 != NULL }).value) {
            {
                {
                    int $tmp1050;
                    {
                        ITable* $tmp1054 = ((panda$collections$Iterable*) other1012)->$class->itable;
                        while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1054 = $tmp1054->next;
                        }
                        $fn1056 $tmp1055 = $tmp1054->methods[0];
                        panda$collections$Iterator* $tmp1057 = $tmp1055(((panda$collections$Iterable*) other1012));
                        $tmp1053 = $tmp1057;
                        $tmp1052 = $tmp1053;
                        Iter$308$211051 = $tmp1052;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
                        $l1058:;
                        ITable* $tmp1061 = Iter$308$211051->$class->itable;
                        while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1061 = $tmp1061->next;
                        }
                        $fn1063 $tmp1062 = $tmp1061->methods[0];
                        panda$core$Bit $tmp1064 = $tmp1062(Iter$308$211051);
                        panda$core$Bit $tmp1065 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1064);
                        bool $tmp1060 = $tmp1065.value;
                        if (!$tmp1060) goto $l1059;
                        {
                            int $tmp1068;
                            {
                                ITable* $tmp1072 = Iter$308$211051->$class->itable;
                                while ($tmp1072->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1072 = $tmp1072->next;
                                }
                                $fn1074 $tmp1073 = $tmp1072->methods[1];
                                panda$core$Object* $tmp1075 = $tmp1073(Iter$308$211051);
                                $tmp1071 = $tmp1075;
                                $tmp1070 = ((org$pandalanguage$pandac$ASTNode*) $tmp1071);
                                s1069 = $tmp1070;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1070));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1071);
                                panda$core$Int64 $tmp1076 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1069);
                                panda$core$Int64 $tmp1077 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1014, $tmp1076);
                                result1014 = $tmp1077;
                            }
                            $tmp1068 = -1;
                            goto $l1066;
                            $l1066:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1069));
                            s1069 = NULL;
                            switch ($tmp1068) {
                                case -1: goto $l1078;
                            }
                            $l1078:;
                        }
                        goto $l1058;
                        $l1059:;
                    }
                    $tmp1050 = -1;
                    goto $l1048;
                    $l1048:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$308$211051));
                    Iter$308$211051 = NULL;
                    switch ($tmp1050) {
                        case -1: goto $l1079;
                    }
                    $l1079:;
                }
            }
            }
            $returnValue673 = result1014;
            $tmp666 = 20;
            goto $l664;
            $l1080:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1082, 26);
        panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1082);
        if ($tmp1083.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1084, 0);
            $returnValue673 = $tmp1084;
            $tmp666 = 21;
            goto $l664;
            $l1085:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1087, 28);
        panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1087);
        if ($tmp1088.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1089, 1);
            $returnValue673 = $tmp1089;
            $tmp666 = 22;
            goto $l664;
            $l1090:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1092, 29);
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1092);
        if ($tmp1093.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1094, 0);
            $returnValue673 = $tmp1094;
            $tmp666 = 23;
            goto $l664;
            $l1095:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1097, 32);
        panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1097);
        if ($tmp1098.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1100 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 24));
            base1099 = *$tmp1100;
            panda$core$Int64$init$builtin_int64(&$tmp1101, 1);
            panda$core$Int64 $tmp1102 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1099);
            panda$core$Int64 $tmp1103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1101, $tmp1102);
            $returnValue673 = $tmp1103;
            $tmp666 = 24;
            goto $l664;
            $l1104:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1106, 33);
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1106);
        if ($tmp1107.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1108, 1);
            $returnValue673 = $tmp1108;
            $tmp666 = 25;
            goto $l664;
            $l1109:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1111, 34);
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1111);
        if ($tmp1112.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1113, 1);
            $returnValue673 = $tmp1113;
            $tmp666 = 26;
            goto $l664;
            $l1114:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1116, 35);
        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1116);
        if ($tmp1117.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1118, 1);
            $returnValue673 = $tmp1118;
            $tmp666 = 27;
            goto $l664;
            $l1119:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1121, 36);
        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1121);
        if ($tmp1122.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 16));
            value1123 = *$tmp1124;
            if (((panda$core$Bit) { value1123 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1125, 0);
                $returnValue673 = $tmp1125;
                $tmp666 = 28;
                goto $l664;
                $l1126:;
                return $returnValue673;
            }
            }
            panda$core$Int64 $tmp1128 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1123);
            $returnValue673 = $tmp1128;
            $tmp666 = 29;
            goto $l664;
            $l1129:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1131, 37);
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1131);
        if ($tmp1132.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1133, 1);
            $returnValue673 = $tmp1133;
            $tmp666 = 30;
            goto $l664;
            $l1134:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1136, 38);
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1136);
        if ($tmp1137.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1138, 1);
            $returnValue673 = $tmp1138;
            $tmp666 = 31;
            goto $l664;
            $l1139:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1141, 39);
        panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1141);
        if ($tmp1142.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1143, 1);
            $returnValue673 = $tmp1143;
            $tmp666 = 32;
            goto $l664;
            $l1144:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1146, 42);
        panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1146);
        if ($tmp1147.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1148, 0);
            $returnValue673 = $tmp1148;
            $tmp666 = 33;
            goto $l664;
            $l1149:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1151, 43);
        panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1151);
        if ($tmp1152.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1153, 0);
            $returnValue673 = $tmp1153;
            $tmp666 = 34;
            goto $l664;
            $l1154:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1156, 45);
        panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1156);
        if ($tmp1157.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1158, 0);
            $returnValue673 = $tmp1158;
            $tmp666 = 35;
            goto $l664;
            $l1159:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1161, 47);
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1161);
        if ($tmp1162.value) {
        {
            panda$collections$ImmutableArray** $tmp1164 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            decls1163 = *$tmp1164;
            panda$core$Int64$init$builtin_int64(&$tmp1166, 0);
            result1165 = $tmp1166;
            {
                int $tmp1169;
                {
                    ITable* $tmp1173 = ((panda$collections$Iterable*) decls1163)->$class->itable;
                    while ($tmp1173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1173 = $tmp1173->next;
                    }
                    $fn1175 $tmp1174 = $tmp1173->methods[0];
                    panda$collections$Iterator* $tmp1176 = $tmp1174(((panda$collections$Iterable*) decls1163));
                    $tmp1172 = $tmp1176;
                    $tmp1171 = $tmp1172;
                    Iter$346$171170 = $tmp1171;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
                    $l1177:;
                    ITable* $tmp1180 = Iter$346$171170->$class->itable;
                    while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1180 = $tmp1180->next;
                    }
                    $fn1182 $tmp1181 = $tmp1180->methods[0];
                    panda$core$Bit $tmp1183 = $tmp1181(Iter$346$171170);
                    panda$core$Bit $tmp1184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1183);
                    bool $tmp1179 = $tmp1184.value;
                    if (!$tmp1179) goto $l1178;
                    {
                        int $tmp1187;
                        {
                            ITable* $tmp1191 = Iter$346$171170->$class->itable;
                            while ($tmp1191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1191 = $tmp1191->next;
                            }
                            $fn1193 $tmp1192 = $tmp1191->methods[1];
                            panda$core$Object* $tmp1194 = $tmp1192(Iter$346$171170);
                            $tmp1190 = $tmp1194;
                            $tmp1189 = ((org$pandalanguage$pandac$ASTNode*) $tmp1190);
                            decl1188 = $tmp1189;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1190);
                            panda$core$Int64 $tmp1195 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1188);
                            panda$core$Int64 $tmp1196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1165, $tmp1195);
                            result1165 = $tmp1196;
                        }
                        $tmp1187 = -1;
                        goto $l1185;
                        $l1185:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl1188));
                        decl1188 = NULL;
                        switch ($tmp1187) {
                            case -1: goto $l1197;
                        }
                        $l1197:;
                    }
                    goto $l1177;
                    $l1178:;
                }
                $tmp1169 = -1;
                goto $l1167;
                $l1167:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$346$171170));
                Iter$346$171170 = NULL;
                switch ($tmp1169) {
                    case -1: goto $l1198;
                }
                $l1198:;
            }
            $returnValue673 = result1165;
            $tmp666 = 36;
            goto $l664;
            $l1199:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1201, 48);
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1201);
        if ($tmp1202.value) {
        {
            panda$collections$ImmutableArray** $tmp1204 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 16));
            tests1203 = *$tmp1204;
            panda$collections$ImmutableArray** $tmp1206 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 24));
            statements1205 = *$tmp1206;
            panda$core$Int64$init$builtin_int64(&$tmp1208, 0);
            result1207 = $tmp1208;
            {
                int $tmp1211;
                {
                    ITable* $tmp1215 = ((panda$collections$Iterable*) tests1203)->$class->itable;
                    while ($tmp1215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1215 = $tmp1215->next;
                    }
                    $fn1217 $tmp1216 = $tmp1215->methods[0];
                    panda$collections$Iterator* $tmp1218 = $tmp1216(((panda$collections$Iterable*) tests1203));
                    $tmp1214 = $tmp1218;
                    $tmp1213 = $tmp1214;
                    Iter$352$171212 = $tmp1213;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
                    $l1219:;
                    ITable* $tmp1222 = Iter$352$171212->$class->itable;
                    while ($tmp1222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1222 = $tmp1222->next;
                    }
                    $fn1224 $tmp1223 = $tmp1222->methods[0];
                    panda$core$Bit $tmp1225 = $tmp1223(Iter$352$171212);
                    panda$core$Bit $tmp1226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1225);
                    bool $tmp1221 = $tmp1226.value;
                    if (!$tmp1221) goto $l1220;
                    {
                        int $tmp1229;
                        {
                            ITable* $tmp1233 = Iter$352$171212->$class->itable;
                            while ($tmp1233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1233 = $tmp1233->next;
                            }
                            $fn1235 $tmp1234 = $tmp1233->methods[1];
                            panda$core$Object* $tmp1236 = $tmp1234(Iter$352$171212);
                            $tmp1232 = $tmp1236;
                            $tmp1231 = ((org$pandalanguage$pandac$ASTNode*) $tmp1232);
                            test1230 = $tmp1231;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1231));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1232);
                            panda$core$Int64 $tmp1237 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1230);
                            panda$core$Int64 $tmp1238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1207, $tmp1237);
                            result1207 = $tmp1238;
                        }
                        $tmp1229 = -1;
                        goto $l1227;
                        $l1227:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) test1230));
                        test1230 = NULL;
                        switch ($tmp1229) {
                            case -1: goto $l1239;
                        }
                        $l1239:;
                    }
                    goto $l1219;
                    $l1220:;
                }
                $tmp1211 = -1;
                goto $l1209;
                $l1209:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$352$171212));
                Iter$352$171212 = NULL;
                switch ($tmp1211) {
                    case -1: goto $l1240;
                }
                $l1240:;
            }
            {
                int $tmp1243;
                {
                    ITable* $tmp1247 = ((panda$collections$Iterable*) statements1205)->$class->itable;
                    while ($tmp1247->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1247 = $tmp1247->next;
                    }
                    $fn1249 $tmp1248 = $tmp1247->methods[0];
                    panda$collections$Iterator* $tmp1250 = $tmp1248(((panda$collections$Iterable*) statements1205));
                    $tmp1246 = $tmp1250;
                    $tmp1245 = $tmp1246;
                    Iter$355$171244 = $tmp1245;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
                    $l1251:;
                    ITable* $tmp1254 = Iter$355$171244->$class->itable;
                    while ($tmp1254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1254 = $tmp1254->next;
                    }
                    $fn1256 $tmp1255 = $tmp1254->methods[0];
                    panda$core$Bit $tmp1257 = $tmp1255(Iter$355$171244);
                    panda$core$Bit $tmp1258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1257);
                    bool $tmp1253 = $tmp1258.value;
                    if (!$tmp1253) goto $l1252;
                    {
                        int $tmp1261;
                        {
                            ITable* $tmp1265 = Iter$355$171244->$class->itable;
                            while ($tmp1265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1265 = $tmp1265->next;
                            }
                            $fn1267 $tmp1266 = $tmp1265->methods[1];
                            panda$core$Object* $tmp1268 = $tmp1266(Iter$355$171244);
                            $tmp1264 = $tmp1268;
                            $tmp1263 = ((org$pandalanguage$pandac$ASTNode*) $tmp1264);
                            s1262 = $tmp1263;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1264);
                            panda$core$Int64 $tmp1269 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1262);
                            panda$core$Int64 $tmp1270 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1207, $tmp1269);
                            result1207 = $tmp1270;
                        }
                        $tmp1261 = -1;
                        goto $l1259;
                        $l1259:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1262));
                        s1262 = NULL;
                        switch ($tmp1261) {
                            case -1: goto $l1271;
                        }
                        $l1271:;
                    }
                    goto $l1251;
                    $l1252:;
                }
                $tmp1243 = -1;
                goto $l1241;
                $l1241:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$355$171244));
                Iter$355$171244 = NULL;
                switch ($tmp1243) {
                    case -1: goto $l1272;
                }
                $l1272:;
            }
            $returnValue673 = result1207;
            $tmp666 = 37;
            goto $l664;
            $l1273:;
            return $returnValue673;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1275, 49);
        panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9667->$rawValue, $tmp1275);
        if ($tmp1276.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1278 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$233_9667->$data + 24));
            test1277 = *$tmp1278;
            panda$collections$ImmutableArray** $tmp1280 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9667->$data + 32));
            statements1279 = *$tmp1280;
            panda$core$Int64 $tmp1282 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1277);
            result1281 = $tmp1282;
            {
                int $tmp1285;
                {
                    ITable* $tmp1289 = ((panda$collections$Iterable*) statements1279)->$class->itable;
                    while ($tmp1289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1289 = $tmp1289->next;
                    }
                    $fn1291 $tmp1290 = $tmp1289->methods[0];
                    panda$collections$Iterator* $tmp1292 = $tmp1290(((panda$collections$Iterable*) statements1279));
                    $tmp1288 = $tmp1292;
                    $tmp1287 = $tmp1288;
                    Iter$361$171286 = $tmp1287;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
                    $l1293:;
                    ITable* $tmp1296 = Iter$361$171286->$class->itable;
                    while ($tmp1296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1296 = $tmp1296->next;
                    }
                    $fn1298 $tmp1297 = $tmp1296->methods[0];
                    panda$core$Bit $tmp1299 = $tmp1297(Iter$361$171286);
                    panda$core$Bit $tmp1300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1299);
                    bool $tmp1295 = $tmp1300.value;
                    if (!$tmp1295) goto $l1294;
                    {
                        int $tmp1303;
                        {
                            ITable* $tmp1307 = Iter$361$171286->$class->itable;
                            while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1307 = $tmp1307->next;
                            }
                            $fn1309 $tmp1308 = $tmp1307->methods[1];
                            panda$core$Object* $tmp1310 = $tmp1308(Iter$361$171286);
                            $tmp1306 = $tmp1310;
                            $tmp1305 = ((org$pandalanguage$pandac$ASTNode*) $tmp1306);
                            s1304 = $tmp1305;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1306);
                            panda$core$Int64 $tmp1311 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1304);
                            panda$core$Int64 $tmp1312 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1281, $tmp1311);
                            result1281 = $tmp1312;
                        }
                        $tmp1303 = -1;
                        goto $l1301;
                        $l1301:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1304));
                        s1304 = NULL;
                        switch ($tmp1303) {
                            case -1: goto $l1313;
                        }
                        $l1313:;
                    }
                    goto $l1293;
                    $l1294:;
                }
                $tmp1285 = -1;
                goto $l1283;
                $l1283:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$361$171286));
                Iter$361$171286 = NULL;
                switch ($tmp1285) {
                    case -1: goto $l1314;
                }
                $l1314:;
            }
            $returnValue673 = result1281;
            $tmp666 = 38;
            goto $l664;
            $l1315:;
            return $returnValue673;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1317, false);
            if ($tmp1317.value) goto $l1318; else goto $l1319;
            $l1319:;
            panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1323, ((panda$core$Object*) p_node));
            $tmp1322 = $tmp1324;
            panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, &$s1325);
            $tmp1321 = $tmp1326;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1320, (panda$core$Int64) { 366 }, $tmp1321);
            abort();
            $l1318:;
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
    $tmp666 = -1;
    goto $l664;
    $l664:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
    switch ($tmp666) {
        case 29: goto $l1129;
        case 37: goto $l1273;
        case 34: goto $l1154;
        case 17: goto $l959;
        case 18: goto $l964;
        case 6: goto $l748;
        case 7: goto $l790;
        case 5: goto $l743;
        case 33: goto $l1149;
        case 25: goto $l1109;
        case 12: goto $l854;
        case 26: goto $l1114;
        case 13: goto $l861;
        case 4: goto $l703;
        case 0: goto $l675;
        case 30: goto $l1134;
        case 20: goto $l1080;
        case 2: goto $l685;
        case 8: goto $l797;
        case 16: goto $l913;
        case 27: goto $l1119;
        case 14: goto $l903;
        case 21: goto $l1085;
        case 15: goto $l908;
        case 23: goto $l1095;
        case 28: goto $l1126;
        case 36: goto $l1199;
        case 11: goto $l812;
        case 9: goto $l802;
        case 3: goto $l698;
        case 35: goto $l1159;
        case 24: goto $l1104;
        case 19: goto $l1004;
        case 32: goto $l1144;
        case 38: goto $l1315;
        case 10: goto $l809;
        case 31: goto $l1139;
        case -1: goto $l1327;
        case 22: goto $l1090;
        case 1: goto $l680;
    }
    $l1327:;
    if (false) goto $l1328; else goto $l1329;
    $l1329:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1330, (panda$core$Int64) { 231 }, &$s1331);
    abort();
    $l1328:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1334;
    panda$core$Int64 $tmp1336;
    panda$core$Int64 c1345;
    panda$core$Int64 $tmp1346;
    panda$collections$Iterator* Iter$374$131350 = NULL;
    panda$collections$Iterator* $tmp1351;
    panda$collections$Iterator* $tmp1352;
    org$pandalanguage$pandac$ASTNode* s1368 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    panda$core$Object* $tmp1370;
    panda$core$Int64 $tmp1377;
    panda$core$Bit $returnValue1379;
    panda$core$Bit $tmp1380;
    panda$core$Bit $tmp1386;
    panda$core$Bit $tmp1388;
    panda$core$Object* $tmp1335 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
    $tmp1334 = $tmp1335;
    panda$core$Int64$init$builtin_int64(&$tmp1336, 0);
    panda$core$Bit $tmp1337 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1334)->settings->optimizationLevel, $tmp1336);
    bool $tmp1333 = $tmp1337.value;
    panda$core$Panda$unref$panda$core$Object$Q($tmp1334);
    if (!$tmp1333) goto $l1338;
    panda$core$Bit $tmp1339 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1339);
    $tmp1333 = $tmp1340.value;
    $l1338:;
    panda$core$Bit $tmp1341 = { $tmp1333 };
    bool $tmp1332 = $tmp1341.value;
    if (!$tmp1332) goto $l1342;
    panda$core$Bit $tmp1343 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1332 = $tmp1343.value;
    $l1342:;
    panda$core$Bit $tmp1344 = { $tmp1332 };
    if ($tmp1344.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1346, 0);
        c1345 = $tmp1346;
        {
            int $tmp1349;
            {
                ITable* $tmp1353 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1353 = $tmp1353->next;
                }
                $fn1355 $tmp1354 = $tmp1353->methods[0];
                panda$collections$Iterator* $tmp1356 = $tmp1354(((panda$collections$Iterable*) p_statements));
                $tmp1352 = $tmp1356;
                $tmp1351 = $tmp1352;
                Iter$374$131350 = $tmp1351;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
                $l1357:;
                ITable* $tmp1360 = Iter$374$131350->$class->itable;
                while ($tmp1360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1360 = $tmp1360->next;
                }
                $fn1362 $tmp1361 = $tmp1360->methods[0];
                panda$core$Bit $tmp1363 = $tmp1361(Iter$374$131350);
                panda$core$Bit $tmp1364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1363);
                bool $tmp1359 = $tmp1364.value;
                if (!$tmp1359) goto $l1358;
                {
                    int $tmp1367;
                    {
                        ITable* $tmp1371 = Iter$374$131350->$class->itable;
                        while ($tmp1371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1371 = $tmp1371->next;
                        }
                        $fn1373 $tmp1372 = $tmp1371->methods[1];
                        panda$core$Object* $tmp1374 = $tmp1372(Iter$374$131350);
                        $tmp1370 = $tmp1374;
                        $tmp1369 = ((org$pandalanguage$pandac$ASTNode*) $tmp1370);
                        s1368 = $tmp1369;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1370);
                        panda$core$Int64 $tmp1375 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1368);
                        panda$core$Int64 $tmp1376 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1345, $tmp1375);
                        c1345 = $tmp1376;
                        panda$core$Int64$init$builtin_int64(&$tmp1377, 0);
                        panda$core$Bit $tmp1378 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1345, $tmp1377);
                        if ($tmp1378.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1380, false);
                            $returnValue1379 = $tmp1380;
                            $tmp1367 = 0;
                            goto $l1365;
                            $l1381:;
                            $tmp1349 = 0;
                            goto $l1347;
                            $l1382:;
                            return $returnValue1379;
                        }
                        }
                    }
                    $tmp1367 = -1;
                    goto $l1365;
                    $l1365:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1368));
                    s1368 = NULL;
                    switch ($tmp1367) {
                        case -1: goto $l1384;
                        case 0: goto $l1381;
                    }
                    $l1384:;
                }
                goto $l1357;
                $l1358:;
            }
            $tmp1349 = -1;
            goto $l1347;
            $l1347:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$374$131350));
            Iter$374$131350 = NULL;
            switch ($tmp1349) {
                case 0: goto $l1382;
                case -1: goto $l1385;
            }
            $l1385:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1386, true);
        $returnValue1379 = $tmp1386;
        return $returnValue1379;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1388, false);
    $returnValue1379 = $tmp1388;
    return $returnValue1379;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1393 = NULL;
    panda$core$String* $tmp1394;
    panda$core$String* $tmp1395;
    org$pandalanguage$pandac$ASTNode* $match$395_131399 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1400;
    panda$core$Int64 $tmp1401;
    org$pandalanguage$pandac$Position position1403;
    panda$core$String* text1405 = NULL;
    panda$core$String* $tmp1407;
    panda$core$String* $tmp1408;
    panda$core$Bit $tmp1409;
    org$pandalanguage$pandac$Annotations* annotations1414 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1415;
    org$pandalanguage$pandac$Annotations* $tmp1416;
    panda$core$Int64 $tmp1420;
    org$pandalanguage$pandac$Annotations* $tmp1428;
    panda$core$Int64 $tmp1429;
    panda$collections$Array* generics1431 = NULL;
    panda$collections$Array* $tmp1435;
    panda$collections$Array* $tmp1436;
    panda$collections$Array* $tmp1437;
    panda$core$String* fullName1439 = NULL;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1442;
    panda$core$String* $tmp1443;
    panda$core$String* $tmp1444;
    panda$collections$Iterator* Iter$410$131454 = NULL;
    panda$collections$Iterator* $tmp1455;
    panda$collections$Iterator* $tmp1456;
    org$pandalanguage$pandac$ASTNode* p1472 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1473;
    panda$core$Object* $tmp1474;
    panda$core$String* parameterName1479 = NULL;
    org$pandalanguage$pandac$Type* bound1480 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$413_171484 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    panda$core$Int64 $tmp1486;
    panda$core$String* id1488 = NULL;
    panda$core$String* $tmp1490;
    panda$core$String* $tmp1491;
    org$pandalanguage$pandac$Type* $tmp1492;
    org$pandalanguage$pandac$Type* $tmp1493;
    org$pandalanguage$pandac$Type* $tmp1494;
    panda$core$Int64 $tmp1496;
    panda$core$String* id1498 = NULL;
    org$pandalanguage$pandac$ASTNode* type1500 = NULL;
    panda$core$String* $tmp1502;
    panda$core$String* $tmp1503;
    org$pandalanguage$pandac$Type* $tmp1504;
    org$pandalanguage$pandac$Type* $tmp1505;
    org$pandalanguage$pandac$Type* $tmp1506;
    panda$core$Bit $tmp1508;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1513;
    panda$collections$Array* $tmp1520;
    panda$collections$Array* $tmp1521;
    panda$collections$Array* parameters1522 = NULL;
    panda$collections$Array* $tmp1523;
    panda$collections$Array* $tmp1524;
    panda$collections$Iterator* Iter$431$91529 = NULL;
    panda$collections$Iterator* $tmp1530;
    panda$collections$Iterator* $tmp1531;
    org$pandalanguage$pandac$ASTNode* p1547 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1548;
    panda$core$Object* $tmp1549;
    org$pandalanguage$pandac$ASTNode* $match$432_131557 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1558;
    panda$core$Int64 $tmp1559;
    panda$core$String* name1561 = NULL;
    org$pandalanguage$pandac$ASTNode* type1563 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1565;
    org$pandalanguage$pandac$Type* $tmp1567;
    panda$core$Bit $tmp1569;
    org$pandalanguage$pandac$Type* returnType1576 = NULL;
    org$pandalanguage$pandac$Type* $tmp1577;
    org$pandalanguage$pandac$Type* $tmp1578;
    org$pandalanguage$pandac$Type* $tmp1579;
    org$pandalanguage$pandac$Type* $tmp1581;
    org$pandalanguage$pandac$Type* $tmp1582;
    org$pandalanguage$pandac$Type* $tmp1583;
    panda$core$Int64 $tmp1586;
    org$pandalanguage$pandac$Type* $tmp1589;
    org$pandalanguage$pandac$Annotations* $tmp1598;
    panda$core$Int64 $tmp1599;
    panda$core$Int64 $tmp1603;
    panda$core$Int64 $tmp1606;
    panda$core$Int64 $tmp1608;
    org$pandalanguage$pandac$Annotations* $tmp1611;
    panda$core$Int64 $tmp1612;
    org$pandalanguage$pandac$MethodDecl* $returnValue1614;
    org$pandalanguage$pandac$MethodDecl* $tmp1615;
    org$pandalanguage$pandac$MethodDecl* $tmp1616;
    int $tmp1392;
    {
        memset(&doccomment1393, 0, sizeof(doccomment1393));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1394 = doccomment1393;
                $tmp1395 = NULL;
                doccomment1393 = $tmp1395;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
            }
        }
        }
        else {
        {
            int $tmp1398;
            {
                $tmp1400 = p_rawDoccomment;
                $match$395_131399 = $tmp1400;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
                panda$core$Int64$init$builtin_int64(&$tmp1401, 38);
                panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_131399->$rawValue, $tmp1401);
                if ($tmp1402.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1404 = ((org$pandalanguage$pandac$Position*) ((char*) $match$395_131399->$data + 0));
                    position1403 = *$tmp1404;
                    panda$core$String** $tmp1406 = ((panda$core$String**) ((char*) $match$395_131399->$data + 16));
                    text1405 = *$tmp1406;
                    {
                        $tmp1407 = doccomment1393;
                        $tmp1408 = text1405;
                        doccomment1393 = $tmp1408;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1408));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1409, false);
                    if ($tmp1409.value) goto $l1410; else goto $l1411;
                    $l1411:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1412, (panda$core$Int64) { 399 });
                    abort();
                    $l1410:;
                }
                }
            }
            $tmp1398 = -1;
            goto $l1396;
            $l1396:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
            switch ($tmp1398) {
                case -1: goto $l1413;
            }
            $l1413:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1417 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1416 = $tmp1417;
        $tmp1415 = $tmp1416;
        annotations1414 = $tmp1415;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
        panda$core$Int64$init$builtin_int64(&$tmp1420, 2);
        panda$core$Bit $tmp1421 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1420);
        bool $tmp1419 = $tmp1421.value;
        if (!$tmp1419) goto $l1422;
        panda$core$Bit $tmp1423 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1419 = $tmp1423.value;
        $l1422:;
        panda$core$Bit $tmp1424 = { $tmp1419 };
        bool $tmp1418 = $tmp1424.value;
        if ($tmp1418) goto $l1425;
        panda$core$Bit $tmp1426 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1414);
        $tmp1418 = $tmp1426.value;
        $l1425:;
        panda$core$Bit $tmp1427 = { $tmp1418 };
        if ($tmp1427.value) {
        {
            $tmp1428 = annotations1414;
            panda$core$Int64$init$builtin_int64(&$tmp1429, 256);
            panda$core$Int64 $tmp1430 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1428->flags, $tmp1429);
            $tmp1428->flags = $tmp1430;
        }
        }
        memset(&generics1431, 0, sizeof(generics1431));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1434;
            {
                {
                    $tmp1435 = generics1431;
                    panda$collections$Array* $tmp1438 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1438);
                    $tmp1437 = $tmp1438;
                    $tmp1436 = $tmp1437;
                    generics1431 = $tmp1436;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
                }
                panda$core$String* $tmp1445 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1444 = $tmp1445;
                panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1446);
                $tmp1443 = $tmp1447;
                panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1443, p_name);
                $tmp1442 = $tmp1448;
                panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, &$s1449);
                $tmp1441 = $tmp1450;
                $tmp1440 = $tmp1441;
                fullName1439 = $tmp1440;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
                {
                    int $tmp1453;
                    {
                        ITable* $tmp1457 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1457->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1457 = $tmp1457->next;
                        }
                        $fn1459 $tmp1458 = $tmp1457->methods[0];
                        panda$collections$Iterator* $tmp1460 = $tmp1458(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1456 = $tmp1460;
                        $tmp1455 = $tmp1456;
                        Iter$410$131454 = $tmp1455;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
                        $l1461:;
                        ITable* $tmp1464 = Iter$410$131454->$class->itable;
                        while ($tmp1464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1464 = $tmp1464->next;
                        }
                        $fn1466 $tmp1465 = $tmp1464->methods[0];
                        panda$core$Bit $tmp1467 = $tmp1465(Iter$410$131454);
                        panda$core$Bit $tmp1468 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1467);
                        bool $tmp1463 = $tmp1468.value;
                        if (!$tmp1463) goto $l1462;
                        {
                            int $tmp1471;
                            {
                                ITable* $tmp1475 = Iter$410$131454->$class->itable;
                                while ($tmp1475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1475 = $tmp1475->next;
                                }
                                $fn1477 $tmp1476 = $tmp1475->methods[1];
                                panda$core$Object* $tmp1478 = $tmp1476(Iter$410$131454);
                                $tmp1474 = $tmp1478;
                                $tmp1473 = ((org$pandalanguage$pandac$ASTNode*) $tmp1474);
                                p1472 = $tmp1473;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1474);
                                memset(&parameterName1479, 0, sizeof(parameterName1479));
                                memset(&bound1480, 0, sizeof(bound1480));
                                int $tmp1483;
                                {
                                    $tmp1485 = p1472;
                                    $match$413_171484 = $tmp1485;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
                                    panda$core$Int64$init$builtin_int64(&$tmp1486, 20);
                                    panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$413_171484->$rawValue, $tmp1486);
                                    if ($tmp1487.value) {
                                    {
                                        panda$core$String** $tmp1489 = ((panda$core$String**) ((char*) $match$413_171484->$data + 16));
                                        id1488 = *$tmp1489;
                                        {
                                            $tmp1490 = parameterName1479;
                                            $tmp1491 = id1488;
                                            parameterName1479 = $tmp1491;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
                                        }
                                        {
                                            $tmp1492 = bound1480;
                                            org$pandalanguage$pandac$Type* $tmp1495 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1494 = $tmp1495;
                                            $tmp1493 = $tmp1494;
                                            bound1480 = $tmp1493;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1496, 44);
                                    panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$413_171484->$rawValue, $tmp1496);
                                    if ($tmp1497.value) {
                                    {
                                        panda$core$String** $tmp1499 = ((panda$core$String**) ((char*) $match$413_171484->$data + 16));
                                        id1498 = *$tmp1499;
                                        org$pandalanguage$pandac$ASTNode** $tmp1501 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$413_171484->$data + 24));
                                        type1500 = *$tmp1501;
                                        {
                                            $tmp1502 = parameterName1479;
                                            $tmp1503 = id1498;
                                            parameterName1479 = $tmp1503;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
                                        }
                                        {
                                            $tmp1504 = bound1480;
                                            org$pandalanguage$pandac$Type* $tmp1507 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1500);
                                            $tmp1506 = $tmp1507;
                                            $tmp1505 = $tmp1506;
                                            bound1480 = $tmp1505;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1508, false);
                                        if ($tmp1508.value) goto $l1509; else goto $l1510;
                                        $l1510:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1511, (panda$core$Int64) { 421 });
                                        abort();
                                        $l1509:;
                                    }
                                    }
                                    }
                                }
                                $tmp1483 = -1;
                                goto $l1481;
                                $l1481:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
                                switch ($tmp1483) {
                                    case -1: goto $l1512;
                                }
                                $l1512:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1514 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1516 = (($fn1515) p1472->$class->vtable[2])(p1472);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1514, $tmp1516, fullName1439, parameterName1479, bound1480);
                                $tmp1513 = $tmp1514;
                                panda$collections$Array$add$panda$collections$Array$T(generics1431, ((panda$core$Object*) $tmp1513));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
                            }
                            $tmp1471 = -1;
                            goto $l1469;
                            $l1469:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) bound1480));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameterName1479));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1472));
                            p1472 = NULL;
                            switch ($tmp1471) {
                                case -1: goto $l1517;
                            }
                            $l1517:;
                        }
                        goto $l1461;
                        $l1462:;
                    }
                    $tmp1453 = -1;
                    goto $l1451;
                    $l1451:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$410$131454));
                    Iter$410$131454 = NULL;
                    switch ($tmp1453) {
                        case -1: goto $l1518;
                    }
                    $l1518:;
                }
            }
            $tmp1434 = -1;
            goto $l1432;
            $l1432:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) fullName1439));
            fullName1439 = NULL;
            switch ($tmp1434) {
                case -1: goto $l1519;
            }
            $l1519:;
        }
        }
        else {
        {
            {
                $tmp1520 = generics1431;
                $tmp1521 = NULL;
                generics1431 = $tmp1521;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
            }
        }
        }
        panda$collections$Array* $tmp1525 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1525);
        $tmp1524 = $tmp1525;
        $tmp1523 = $tmp1524;
        parameters1522 = $tmp1523;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
        {
            int $tmp1528;
            {
                ITable* $tmp1532 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1532->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1532 = $tmp1532->next;
                }
                $fn1534 $tmp1533 = $tmp1532->methods[0];
                panda$collections$Iterator* $tmp1535 = $tmp1533(((panda$collections$Iterable*) p_rawParameters));
                $tmp1531 = $tmp1535;
                $tmp1530 = $tmp1531;
                Iter$431$91529 = $tmp1530;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
                $l1536:;
                ITable* $tmp1539 = Iter$431$91529->$class->itable;
                while ($tmp1539->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1539 = $tmp1539->next;
                }
                $fn1541 $tmp1540 = $tmp1539->methods[0];
                panda$core$Bit $tmp1542 = $tmp1540(Iter$431$91529);
                panda$core$Bit $tmp1543 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1542);
                bool $tmp1538 = $tmp1543.value;
                if (!$tmp1538) goto $l1537;
                {
                    int $tmp1546;
                    {
                        ITable* $tmp1550 = Iter$431$91529->$class->itable;
                        while ($tmp1550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1550 = $tmp1550->next;
                        }
                        $fn1552 $tmp1551 = $tmp1550->methods[1];
                        panda$core$Object* $tmp1553 = $tmp1551(Iter$431$91529);
                        $tmp1549 = $tmp1553;
                        $tmp1548 = ((org$pandalanguage$pandac$ASTNode*) $tmp1549);
                        p1547 = $tmp1548;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1548));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1549);
                        int $tmp1556;
                        {
                            $tmp1558 = p1547;
                            $match$432_131557 = $tmp1558;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
                            panda$core$Int64$init$builtin_int64(&$tmp1559, 31);
                            panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$432_131557->$rawValue, $tmp1559);
                            if ($tmp1560.value) {
                            {
                                panda$core$String** $tmp1562 = ((panda$core$String**) ((char*) $match$432_131557->$data + 16));
                                name1561 = *$tmp1562;
                                org$pandalanguage$pandac$ASTNode** $tmp1564 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$432_131557->$data + 24));
                                type1563 = *$tmp1564;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1566 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1568 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1563);
                                $tmp1567 = $tmp1568;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1566, name1561, $tmp1567);
                                $tmp1565 = $tmp1566;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1522, ((panda$core$Object*) $tmp1565));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1569, false);
                                if ($tmp1569.value) goto $l1570; else goto $l1571;
                                $l1571:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1572, (panda$core$Int64) { 436 });
                                abort();
                                $l1570:;
                            }
                            }
                        }
                        $tmp1556 = -1;
                        goto $l1554;
                        $l1554:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
                        switch ($tmp1556) {
                            case -1: goto $l1573;
                        }
                        $l1573:;
                    }
                    $tmp1546 = -1;
                    goto $l1544;
                    $l1544:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1547));
                    p1547 = NULL;
                    switch ($tmp1546) {
                        case -1: goto $l1574;
                    }
                    $l1574:;
                }
                goto $l1536;
                $l1537:;
            }
            $tmp1528 = -1;
            goto $l1526;
            $l1526:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$431$91529));
            Iter$431$91529 = NULL;
            switch ($tmp1528) {
                case -1: goto $l1575;
            }
            $l1575:;
        }
        memset(&returnType1576, 0, sizeof(returnType1576));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1577 = returnType1576;
                org$pandalanguage$pandac$Type* $tmp1580 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1579 = $tmp1580;
                $tmp1578 = $tmp1579;
                returnType1576 = $tmp1578;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
            }
        }
        }
        else {
        {
            {
                $tmp1581 = returnType1576;
                org$pandalanguage$pandac$Type* $tmp1584 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1583 = $tmp1584;
                $tmp1582 = $tmp1583;
                returnType1576 = $tmp1582;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1586, 1);
        panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1586);
        bool $tmp1585 = $tmp1587.value;
        if (!$tmp1585) goto $l1588;
        org$pandalanguage$pandac$Type* $tmp1590 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1589 = $tmp1590;
        panda$core$Bit $tmp1591 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1576, $tmp1589);
        $tmp1585 = $tmp1591.value;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1589));
        $l1588:;
        panda$core$Bit $tmp1592 = { $tmp1585 };
        if ($tmp1592.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1593);
        }
        }
        bool $tmp1594 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1594) goto $l1595;
        panda$core$Bit $tmp1596 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1414, p_statements);
        $tmp1594 = $tmp1596.value;
        $l1595:;
        panda$core$Bit $tmp1597 = { $tmp1594 };
        if ($tmp1597.value) {
        {
            $tmp1598 = annotations1414;
            panda$core$Int64$init$builtin_int64(&$tmp1599, 1024);
            panda$core$Int64 $tmp1600 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1598->flags, $tmp1599);
            $tmp1598->flags = $tmp1600;
        }
        }
        bool $tmp1601 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1601) goto $l1602;
        panda$core$Int64$init$builtin_int64(&$tmp1603, 1);
        panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1603);
        $tmp1601 = $tmp1604.value;
        $l1602:;
        panda$core$Bit $tmp1605 = { $tmp1601 };
        if ($tmp1605.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1606, 512);
            panda$core$Int64 $tmp1607 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(annotations1414->flags, $tmp1606);
            panda$core$Int64$init$builtin_int64(&$tmp1608, 0);
            panda$core$Bit $tmp1609 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1607, $tmp1608);
            if ($tmp1609.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1610);
            }
            }
            $tmp1611 = annotations1414;
            panda$core$Int64$init$builtin_int64(&$tmp1612, 512);
            panda$core$Int64 $tmp1613 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1611->flags, $tmp1612);
            $tmp1611->flags = $tmp1613;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1617 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1617, p_owner, p_position, doccomment1393, annotations1414, p_kind, p_name, generics1431, parameters1522, returnType1576, p_statements);
        $tmp1616 = $tmp1617;
        $tmp1615 = $tmp1616;
        $returnValue1614 = $tmp1615;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
        $tmp1392 = 0;
        goto $l1390;
        $l1618:;
        return $returnValue1614;
    }
    $l1390:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType1576));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1522));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) generics1431));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) annotations1414));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) doccomment1393));
    annotations1414 = NULL;
    parameters1522 = NULL;
    switch ($tmp1392) {
        case 0: goto $l1618;
    }
    $l1620:;
    if (false) goto $l1621; else goto $l1622;
    $l1622:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1623, (panda$core$Int64) { 385 }, &$s1624);
    abort();
    $l1621:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$464_91628 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    panda$core$Int64 $tmp1630;
    org$pandalanguage$pandac$Position position1632;
    org$pandalanguage$pandac$ASTNode* dc1634 = NULL;
    panda$collections$ImmutableArray* annotations1636 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1638 = NULL;
    panda$core$Int64 $tmp1640;
    org$pandalanguage$pandac$Position position1642;
    org$pandalanguage$pandac$ASTNode* dc1644 = NULL;
    panda$collections$ImmutableArray* annotations1646 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1648;
    panda$core$String* name1650 = NULL;
    panda$collections$ImmutableArray* generics1652 = NULL;
    panda$collections$ImmutableArray* parameters1654 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1656 = NULL;
    panda$collections$ImmutableArray* statements1658 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1663 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1664;
    org$pandalanguage$pandac$MethodDecl* $tmp1665;
    panda$core$Int64 $tmp1668;
    org$pandalanguage$pandac$Position position1670;
    org$pandalanguage$pandac$ASTNode* dc1672 = NULL;
    panda$collections$ImmutableArray* annotations1674 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1676;
    panda$core$String* name1678 = NULL;
    panda$collections$ImmutableArray* generics1680 = NULL;
    panda$collections$ImmutableArray* supertypes1682 = NULL;
    panda$collections$ImmutableArray* members1684 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1689 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1690;
    org$pandalanguage$pandac$ClassDecl* $tmp1691;
    panda$core$Weak* $tmp1693;
    panda$core$Weak* $tmp1694;
    panda$core$Weak* $tmp1695;
    panda$core$String* $tmp1697;
    org$pandalanguage$pandac$Alias* $tmp1704;
    panda$core$String* $tmp1706;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1707;
    panda$core$Int64 $tmp1709;
    panda$core$Bit $tmp1711;
    org$pandalanguage$pandac$Position $tmp1713;
    org$pandalanguage$pandac$Alias* $tmp1714;
    panda$core$String* $tmp1716;
    org$pandalanguage$pandac$Position $tmp1718;
    panda$core$Int64 $tmp1720;
    org$pandalanguage$pandac$Position position1722;
    org$pandalanguage$pandac$ASTNode* dc1724 = NULL;
    panda$core$String* name1726 = NULL;
    panda$collections$ImmutableArray* fields1728 = NULL;
    panda$core$Bit $tmp1730;
    panda$core$String* $tmp1734;
    panda$core$String* $tmp1735;
    int $tmp1627;
    {
        $tmp1629 = p_node;
        $match$464_91628 = $tmp1629;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
        panda$core$Int64$init$builtin_int64(&$tmp1630, 16);
        panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$464_91628->$rawValue, $tmp1630);
        if ($tmp1631.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1633 = ((org$pandalanguage$pandac$Position*) ((char*) $match$464_91628->$data + 0));
            position1632 = *$tmp1633;
            org$pandalanguage$pandac$ASTNode** $tmp1635 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_91628->$data + 16));
            dc1634 = *$tmp1635;
            panda$collections$ImmutableArray** $tmp1637 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 24));
            annotations1636 = *$tmp1637;
            org$pandalanguage$pandac$ASTNode** $tmp1639 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_91628->$data + 32));
            varDecl1638 = *$tmp1639;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1632, dc1634, annotations1636, varDecl1638);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1640, 26);
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$464_91628->$rawValue, $tmp1640);
        if ($tmp1641.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1643 = ((org$pandalanguage$pandac$Position*) ((char*) $match$464_91628->$data + 0));
            position1642 = *$tmp1643;
            org$pandalanguage$pandac$ASTNode** $tmp1645 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_91628->$data + 16));
            dc1644 = *$tmp1645;
            panda$collections$ImmutableArray** $tmp1647 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 24));
            annotations1646 = *$tmp1647;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1649 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$464_91628->$data + 32));
            kind1648 = *$tmp1649;
            panda$core$String** $tmp1651 = ((panda$core$String**) ((char*) $match$464_91628->$data + 40));
            name1650 = *$tmp1651;
            panda$collections$ImmutableArray** $tmp1653 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 48));
            generics1652 = *$tmp1653;
            panda$collections$ImmutableArray** $tmp1655 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 56));
            parameters1654 = *$tmp1655;
            org$pandalanguage$pandac$ASTNode** $tmp1657 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_91628->$data + 64));
            returnType1656 = *$tmp1657;
            panda$collections$ImmutableArray** $tmp1659 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 72));
            statements1658 = *$tmp1659;
            int $tmp1662;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1666 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1642, dc1644, annotations1646, kind1648, name1650, generics1652, parameters1654, returnType1656, statements1658);
                $tmp1665 = $tmp1666;
                $tmp1664 = $tmp1665;
                m1663 = $tmp1664;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
                if (((panda$core$Bit) { m1663 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1663));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1663));
                }
                }
            }
            $tmp1662 = -1;
            goto $l1660;
            $l1660:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m1663));
            m1663 = NULL;
            switch ($tmp1662) {
                case -1: goto $l1667;
            }
            $l1667:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1668, 11);
        panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$464_91628->$rawValue, $tmp1668);
        if ($tmp1669.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$464_91628->$data + 0));
            position1670 = *$tmp1671;
            org$pandalanguage$pandac$ASTNode** $tmp1673 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_91628->$data + 16));
            dc1672 = *$tmp1673;
            panda$collections$ImmutableArray** $tmp1675 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 24));
            annotations1674 = *$tmp1675;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1677 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$464_91628->$data + 32));
            kind1676 = *$tmp1677;
            panda$core$String** $tmp1679 = ((panda$core$String**) ((char*) $match$464_91628->$data + 40));
            name1678 = *$tmp1679;
            panda$collections$ImmutableArray** $tmp1681 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 48));
            generics1680 = *$tmp1681;
            panda$collections$ImmutableArray** $tmp1683 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 56));
            supertypes1682 = *$tmp1683;
            panda$collections$ImmutableArray** $tmp1685 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 64));
            members1684 = *$tmp1685;
            int $tmp1688;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1692 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1670, dc1672, annotations1674, kind1676, name1678, generics1680, supertypes1682, members1684);
                $tmp1691 = $tmp1692;
                $tmp1690 = $tmp1691;
                inner1689 = $tmp1690;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
                if (((panda$core$Bit) { inner1689 != NULL }).value) {
                {
                    {
                        $tmp1693 = inner1689->owner;
                        panda$core$Weak* $tmp1696 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T$Q($tmp1696, ((panda$core$Object*) p_cl));
                        $tmp1695 = $tmp1696;
                        $tmp1694 = $tmp1695;
                        inner1689->owner = $tmp1694;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1689));
                    panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1698);
                    $tmp1697 = $tmp1699;
                    panda$core$Bit $tmp1700 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1689->name, $tmp1697);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
                    if ($tmp1700.value) goto $l1701; else goto $l1702;
                    $l1702:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1703, (panda$core$Int64) { 482 });
                    abort();
                    $l1701:;
                    org$pandalanguage$pandac$Alias* $tmp1705 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1708 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1709, 1);
                    panda$core$Int64 $tmp1710 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1708, $tmp1709);
                    panda$core$Bit$init$builtin_bit(&$tmp1711, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1707, ((panda$core$Int64$nullable) { $tmp1710, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1711);
                    panda$core$String* $tmp1712 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1689->name, $tmp1707);
                    $tmp1706 = $tmp1712;
                    org$pandalanguage$pandac$Position$init(&$tmp1713);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1705, $tmp1706, inner1689->name, $tmp1713);
                    $tmp1704 = $tmp1705;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1704));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1706));
                    org$pandalanguage$pandac$Alias* $tmp1715 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1717 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1716 = $tmp1717;
                    org$pandalanguage$pandac$Position$init(&$tmp1718);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1715, $tmp1716, p_cl->name, $tmp1718);
                    $tmp1714 = $tmp1715;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1689->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1714));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1714));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
                }
                }
            }
            $tmp1688 = -1;
            goto $l1686;
            $l1686:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) inner1689));
            inner1689 = NULL;
            switch ($tmp1688) {
                case -1: goto $l1719;
            }
            $l1719:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1720, 9);
        panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$464_91628->$rawValue, $tmp1720);
        if ($tmp1721.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1723 = ((org$pandalanguage$pandac$Position*) ((char*) $match$464_91628->$data + 0));
            position1722 = *$tmp1723;
            org$pandalanguage$pandac$ASTNode** $tmp1725 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_91628->$data + 16));
            dc1724 = *$tmp1725;
            panda$core$String** $tmp1727 = ((panda$core$String**) ((char*) $match$464_91628->$data + 24));
            name1726 = *$tmp1727;
            panda$collections$ImmutableArray** $tmp1729 = ((panda$collections$ImmutableArray**) ((char*) $match$464_91628->$data + 32));
            fields1728 = *$tmp1729;
            org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1722, dc1724, name1726, fields1728);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1730, false);
            if ($tmp1730.value) goto $l1731; else goto $l1732;
            $l1732:;
            panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1736, ((panda$core$Object*) p_node));
            $tmp1735 = $tmp1737;
            panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1738);
            $tmp1734 = $tmp1739;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1733, (panda$core$Int64) { 490 }, $tmp1734);
            abort();
            $l1731:;
        }
        }
        }
        }
        }
    }
    $tmp1627 = -1;
    goto $l1625;
    $l1625:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
    switch ($tmp1627) {
        case -1: goto $l1740;
    }
    $l1740:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1744 = NULL;
    panda$core$String* $tmp1745;
    panda$core$String* $tmp1746;
    org$pandalanguage$pandac$ASTNode* $match$502_131750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    panda$core$Int64 $tmp1752;
    org$pandalanguage$pandac$Position position1754;
    panda$core$String* text1756 = NULL;
    panda$core$String* $tmp1758;
    panda$core$String* $tmp1759;
    panda$core$Bit $tmp1760;
    panda$collections$Array* fields1765 = NULL;
    panda$collections$Array* $tmp1766;
    panda$collections$Array* $tmp1767;
    panda$collections$Iterator* Iter$510$91772 = NULL;
    panda$collections$Iterator* $tmp1773;
    panda$collections$Iterator* $tmp1774;
    org$pandalanguage$pandac$ASTNode* t1790 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1791;
    panda$core$Object* $tmp1792;
    org$pandalanguage$pandac$Type* $tmp1797;
    org$pandalanguage$pandac$ChoiceCase* entry1801 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp1802;
    org$pandalanguage$pandac$ChoiceCase* $tmp1803;
    int $tmp1743;
    {
        memset(&doccomment1744, 0, sizeof(doccomment1744));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1745 = doccomment1744;
                $tmp1746 = NULL;
                doccomment1744 = $tmp1746;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
            }
        }
        }
        else {
        {
            int $tmp1749;
            {
                $tmp1751 = p_rawDoccomment;
                $match$502_131750 = $tmp1751;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
                panda$core$Int64$init$builtin_int64(&$tmp1752, 38);
                panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_131750->$rawValue, $tmp1752);
                if ($tmp1753.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1755 = ((org$pandalanguage$pandac$Position*) ((char*) $match$502_131750->$data + 0));
                    position1754 = *$tmp1755;
                    panda$core$String** $tmp1757 = ((panda$core$String**) ((char*) $match$502_131750->$data + 16));
                    text1756 = *$tmp1757;
                    {
                        $tmp1758 = doccomment1744;
                        $tmp1759 = text1756;
                        doccomment1744 = $tmp1759;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1759));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1760, false);
                    if ($tmp1760.value) goto $l1761; else goto $l1762;
                    $l1762:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1763, (panda$core$Int64) { 506 });
                    abort();
                    $l1761:;
                }
                }
            }
            $tmp1749 = -1;
            goto $l1747;
            $l1747:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
            switch ($tmp1749) {
                case -1: goto $l1764;
            }
            $l1764:;
        }
        }
        panda$collections$Array* $tmp1768 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1768);
        $tmp1767 = $tmp1768;
        $tmp1766 = $tmp1767;
        fields1765 = $tmp1766;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
        {
            int $tmp1771;
            {
                ITable* $tmp1775 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1775->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1775 = $tmp1775->next;
                }
                $fn1777 $tmp1776 = $tmp1775->methods[0];
                panda$collections$Iterator* $tmp1778 = $tmp1776(((panda$collections$Iterable*) p_rawFields));
                $tmp1774 = $tmp1778;
                $tmp1773 = $tmp1774;
                Iter$510$91772 = $tmp1773;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
                $l1779:;
                ITable* $tmp1782 = Iter$510$91772->$class->itable;
                while ($tmp1782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1782 = $tmp1782->next;
                }
                $fn1784 $tmp1783 = $tmp1782->methods[0];
                panda$core$Bit $tmp1785 = $tmp1783(Iter$510$91772);
                panda$core$Bit $tmp1786 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1785);
                bool $tmp1781 = $tmp1786.value;
                if (!$tmp1781) goto $l1780;
                {
                    int $tmp1789;
                    {
                        ITable* $tmp1793 = Iter$510$91772->$class->itable;
                        while ($tmp1793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1793 = $tmp1793->next;
                        }
                        $fn1795 $tmp1794 = $tmp1793->methods[1];
                        panda$core$Object* $tmp1796 = $tmp1794(Iter$510$91772);
                        $tmp1792 = $tmp1796;
                        $tmp1791 = ((org$pandalanguage$pandac$ASTNode*) $tmp1792);
                        t1790 = $tmp1791;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1792);
                        org$pandalanguage$pandac$Type* $tmp1798 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1790);
                        $tmp1797 = $tmp1798;
                        panda$collections$Array$add$panda$collections$Array$T(fields1765, ((panda$core$Object*) $tmp1797));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
                    }
                    $tmp1789 = -1;
                    goto $l1787;
                    $l1787:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1790));
                    t1790 = NULL;
                    switch ($tmp1789) {
                        case -1: goto $l1799;
                    }
                    $l1799:;
                }
                goto $l1779;
                $l1780:;
            }
            $tmp1771 = -1;
            goto $l1769;
            $l1769:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$510$91772));
            Iter$510$91772 = NULL;
            switch ($tmp1771) {
                case -1: goto $l1800;
            }
            $l1800:;
        }
        org$pandalanguage$pandac$ChoiceCase* $tmp1804 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
        ITable* $tmp1805 = ((panda$collections$CollectionView*) p_cl->choiceCases)->$class->itable;
        while ($tmp1805->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1805 = $tmp1805->next;
        }
        $fn1807 $tmp1806 = $tmp1805->methods[0];
        panda$core$Int64 $tmp1808 = $tmp1806(((panda$collections$CollectionView*) p_cl->choiceCases));
        org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1804, p_cl, p_position, p_name, doccomment1744, $tmp1808, ((panda$collections$ListView*) fields1765));
        $tmp1803 = $tmp1804;
        $tmp1802 = $tmp1803;
        entry1801 = $tmp1802;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1803));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceCases, ((panda$core$Object*) entry1801));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1801));
    }
    $tmp1743 = -1;
    goto $l1741;
    $l1741:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) entry1801));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) fields1765));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) doccomment1744));
    fields1765 = NULL;
    entry1801 = NULL;
    switch ($tmp1743) {
        case -1: goto $l1809;
    }
    $l1809:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1813 = NULL;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1821;
    panda$core$String* $tmp1822;
    panda$core$String* $tmp1823;
    panda$core$String* $tmp1824;
    panda$core$String* $tmp1831;
    panda$core$String* $tmp1832;
    panda$core$String* doccomment1833 = NULL;
    panda$core$String* $tmp1834;
    panda$core$String* $tmp1835;
    org$pandalanguage$pandac$ASTNode* $match$536_131839 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1840;
    panda$core$Int64 $tmp1841;
    org$pandalanguage$pandac$Position position1843;
    panda$core$String* text1845 = NULL;
    panda$core$String* $tmp1847;
    panda$core$String* $tmp1848;
    panda$core$Bit $tmp1849;
    org$pandalanguage$pandac$Annotations* annotations1854 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1855;
    org$pandalanguage$pandac$Annotations* $tmp1856;
    panda$collections$Array* parameters1858 = NULL;
    panda$collections$Array* $tmp1859;
    panda$collections$Array* $tmp1860;
    panda$collections$Iterator* Iter$546$131865 = NULL;
    panda$collections$Iterator* $tmp1866;
    panda$collections$Iterator* $tmp1867;
    org$pandalanguage$pandac$ASTNode* p1883 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1884;
    panda$core$Object* $tmp1885;
    panda$core$String* name1890 = NULL;
    org$pandalanguage$pandac$Type* bound1891 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$549_171895 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    panda$core$Int64 $tmp1897;
    panda$core$String* id1899 = NULL;
    panda$core$String* $tmp1901;
    panda$core$String* $tmp1902;
    org$pandalanguage$pandac$Type* $tmp1903;
    org$pandalanguage$pandac$Type* $tmp1904;
    org$pandalanguage$pandac$Type* $tmp1905;
    panda$core$Int64 $tmp1907;
    panda$core$String* id1909 = NULL;
    org$pandalanguage$pandac$ASTNode* type1911 = NULL;
    panda$core$String* $tmp1913;
    panda$core$String* $tmp1914;
    org$pandalanguage$pandac$Type* $tmp1915;
    org$pandalanguage$pandac$Type* $tmp1916;
    org$pandalanguage$pandac$Type* $tmp1917;
    panda$core$Bit $tmp1919;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1924;
    panda$collections$Array* supertypes1930 = NULL;
    panda$collections$Array* $tmp1931;
    panda$collections$Array* $tmp1932;
    panda$core$Int64 $tmp1934;
    panda$collections$Iterator* Iter$567$131940 = NULL;
    panda$collections$Iterator* $tmp1941;
    panda$collections$Iterator* $tmp1942;
    org$pandalanguage$pandac$ASTNode* s1958 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    panda$core$Object* $tmp1960;
    org$pandalanguage$pandac$Type* $tmp1965;
    org$pandalanguage$pandac$ClassDecl* result1969 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1970;
    org$pandalanguage$pandac$ClassDecl* $tmp1971;
    panda$core$Object* $tmp1973;
    panda$core$Object* $tmp1975;
    panda$core$Int64 $tmp1977;
    org$pandalanguage$pandac$FieldDecl* rawValue1982 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1983;
    org$pandalanguage$pandac$FieldDecl* $tmp1984;
    org$pandalanguage$pandac$Annotations* $tmp1986;
    panda$core$Int64 $tmp1988;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1989;
    panda$core$Int64 $tmp1990;
    org$pandalanguage$pandac$Type* $tmp1992;
    org$pandalanguage$pandac$FieldDecl* data1994 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1995;
    org$pandalanguage$pandac$FieldDecl* $tmp1996;
    org$pandalanguage$pandac$Annotations* $tmp1998;
    panda$core$Int64 $tmp2000;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp2001;
    panda$core$Int64 $tmp2002;
    org$pandalanguage$pandac$Type* $tmp2004;
    panda$collections$Iterator* Iter$586$92010 = NULL;
    panda$collections$Iterator* $tmp2011;
    panda$collections$Iterator* $tmp2012;
    org$pandalanguage$pandac$ASTNode* m2028 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    panda$core$Object* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $match$587_132038 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2039;
    panda$core$Int64 $tmp2040;
    org$pandalanguage$pandac$Position mPosition2042;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind2044;
    panda$core$Int64 $tmp2046;
    org$pandalanguage$pandac$ClassDecl$Kind $match$590_252048;
    panda$core$Int64 $tmp2049;
    panda$core$Int64 $tmp2051;
    panda$core$Int64 $tmp2054;
    panda$core$Bit foundInit2060;
    panda$core$Bit $tmp2061;
    panda$core$Bit foundCleanup2062;
    panda$core$Bit $tmp2063;
    panda$collections$Iterator* Iter$605$92067 = NULL;
    panda$collections$Iterator* $tmp2068;
    panda$collections$Iterator* $tmp2069;
    org$pandalanguage$pandac$MethodDecl* m2085 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2086;
    panda$core$Object* $tmp2087;
    panda$core$Int64 $tmp2092;
    panda$core$Bit $tmp2094;
    panda$core$Int64 $tmp2103;
    panda$core$Bit $tmp2106;
    panda$core$Int64 $tmp2107;
    panda$core$Int64 $tmp2116;
    org$pandalanguage$pandac$MethodDecl* defaultInit2129 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2130;
    org$pandalanguage$pandac$MethodDecl* $tmp2131;
    org$pandalanguage$pandac$Annotations* $tmp2133;
    panda$core$Int64 $tmp2135;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2136;
    panda$core$Int64 $tmp2137;
    panda$collections$Array* $tmp2139;
    panda$collections$Array* $tmp2141;
    org$pandalanguage$pandac$Type* $tmp2143;
    panda$collections$ImmutableArray* $tmp2145;
    panda$core$Int64 $tmp2153;
    panda$core$Int64 $tmp2156;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2170 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2171;
    org$pandalanguage$pandac$MethodDecl* $tmp2172;
    org$pandalanguage$pandac$Annotations* $tmp2174;
    panda$core$Int64 $tmp2176;
    panda$core$Int64 $tmp2177;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2179;
    panda$core$Int64 $tmp2180;
    panda$collections$Array* $tmp2182;
    panda$collections$Array* $tmp2184;
    org$pandalanguage$pandac$Type* $tmp2186;
    panda$collections$ImmutableArray* $tmp2188;
    panda$core$Int64 $tmp2191;
    panda$core$Bit haveFields2193;
    panda$core$Bit $tmp2194;
    panda$core$Int64 $tmp2199;
    panda$collections$Iterator* Iter$636$172204 = NULL;
    panda$collections$Iterator* $tmp2205;
    panda$collections$Iterator* $tmp2206;
    org$pandalanguage$pandac$ChoiceCase* e2222 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp2223;
    panda$core$Object* $tmp2224;
    panda$core$Int64 $tmp2233;
    panda$core$Bit $tmp2235;
    org$pandalanguage$pandac$ClassDecl* $returnValue2240;
    org$pandalanguage$pandac$ClassDecl* $tmp2241;
    org$pandalanguage$pandac$Type* $tmp2245;
    org$pandalanguage$pandac$Type* $tmp2246;
    org$pandalanguage$pandac$Type* $tmp2247;
    panda$core$Object* $tmp2249;
    panda$core$Object* $tmp2250;
    org$pandalanguage$pandac$ClassDecl* $tmp2253;
    int $tmp1812;
    {
        memset(&fullName1813, 0, sizeof(fullName1813));
        ITable* $tmp1815 = ((panda$core$Equatable*) p_contextName)->$class->itable;
        while ($tmp1815->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp1815 = $tmp1815->next;
        }
        $fn1817 $tmp1816 = $tmp1815->methods[1];
        panda$core$Bit $tmp1818 = $tmp1816(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s1814));
        if ($tmp1818.value) {
        {
            {
                $tmp1819 = fullName1813;
                panda$core$String* $tmp1825 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1824 = $tmp1825;
                panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1826);
                $tmp1823 = $tmp1827;
                panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, p_name);
                $tmp1822 = $tmp1828;
                panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1829);
                $tmp1821 = $tmp1830;
                $tmp1820 = $tmp1821;
                fullName1813 = $tmp1820;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1821));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
            }
        }
        }
        else {
        {
            {
                $tmp1831 = fullName1813;
                $tmp1832 = p_name;
                fullName1813 = $tmp1832;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
            }
        }
        }
        memset(&doccomment1833, 0, sizeof(doccomment1833));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1834 = doccomment1833;
                $tmp1835 = NULL;
                doccomment1833 = $tmp1835;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
            }
        }
        }
        else {
        {
            int $tmp1838;
            {
                $tmp1840 = p_rawDoccomment;
                $match$536_131839 = $tmp1840;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
                panda$core$Int64$init$builtin_int64(&$tmp1841, 38);
                panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_131839->$rawValue, $tmp1841);
                if ($tmp1842.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1844 = ((org$pandalanguage$pandac$Position*) ((char*) $match$536_131839->$data + 0));
                    position1843 = *$tmp1844;
                    panda$core$String** $tmp1846 = ((panda$core$String**) ((char*) $match$536_131839->$data + 16));
                    text1845 = *$tmp1846;
                    {
                        $tmp1847 = doccomment1833;
                        $tmp1848 = text1845;
                        doccomment1833 = $tmp1848;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1848));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1847));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1849, false);
                    if ($tmp1849.value) goto $l1850; else goto $l1851;
                    $l1851:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1852, (panda$core$Int64) { 540 });
                    abort();
                    $l1850:;
                }
                }
            }
            $tmp1838 = -1;
            goto $l1836;
            $l1836:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
            switch ($tmp1838) {
                case -1: goto $l1853;
            }
            $l1853:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1857 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1856 = $tmp1857;
        $tmp1855 = $tmp1856;
        annotations1854 = $tmp1855;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
        panda$collections$Array* $tmp1861 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1861);
        $tmp1860 = $tmp1861;
        $tmp1859 = $tmp1860;
        parameters1858 = $tmp1859;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1864;
                {
                    ITable* $tmp1868 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1868->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1868 = $tmp1868->next;
                    }
                    $fn1870 $tmp1869 = $tmp1868->methods[0];
                    panda$collections$Iterator* $tmp1871 = $tmp1869(((panda$collections$Iterable*) p_generics));
                    $tmp1867 = $tmp1871;
                    $tmp1866 = $tmp1867;
                    Iter$546$131865 = $tmp1866;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
                    $l1872:;
                    ITable* $tmp1875 = Iter$546$131865->$class->itable;
                    while ($tmp1875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1875 = $tmp1875->next;
                    }
                    $fn1877 $tmp1876 = $tmp1875->methods[0];
                    panda$core$Bit $tmp1878 = $tmp1876(Iter$546$131865);
                    panda$core$Bit $tmp1879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1878);
                    bool $tmp1874 = $tmp1879.value;
                    if (!$tmp1874) goto $l1873;
                    {
                        int $tmp1882;
                        {
                            ITable* $tmp1886 = Iter$546$131865->$class->itable;
                            while ($tmp1886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1886 = $tmp1886->next;
                            }
                            $fn1888 $tmp1887 = $tmp1886->methods[1];
                            panda$core$Object* $tmp1889 = $tmp1887(Iter$546$131865);
                            $tmp1885 = $tmp1889;
                            $tmp1884 = ((org$pandalanguage$pandac$ASTNode*) $tmp1885);
                            p1883 = $tmp1884;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1885);
                            memset(&name1890, 0, sizeof(name1890));
                            memset(&bound1891, 0, sizeof(bound1891));
                            int $tmp1894;
                            {
                                $tmp1896 = p1883;
                                $match$549_171895 = $tmp1896;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
                                panda$core$Int64$init$builtin_int64(&$tmp1897, 20);
                                panda$core$Bit $tmp1898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_171895->$rawValue, $tmp1897);
                                if ($tmp1898.value) {
                                {
                                    panda$core$String** $tmp1900 = ((panda$core$String**) ((char*) $match$549_171895->$data + 16));
                                    id1899 = *$tmp1900;
                                    {
                                        $tmp1901 = name1890;
                                        $tmp1902 = id1899;
                                        name1890 = $tmp1902;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
                                    }
                                    {
                                        $tmp1903 = bound1891;
                                        org$pandalanguage$pandac$Type* $tmp1906 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1905 = $tmp1906;
                                        $tmp1904 = $tmp1905;
                                        bound1891 = $tmp1904;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1907, 44);
                                panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_171895->$rawValue, $tmp1907);
                                if ($tmp1908.value) {
                                {
                                    panda$core$String** $tmp1910 = ((panda$core$String**) ((char*) $match$549_171895->$data + 16));
                                    id1909 = *$tmp1910;
                                    org$pandalanguage$pandac$ASTNode** $tmp1912 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$549_171895->$data + 24));
                                    type1911 = *$tmp1912;
                                    {
                                        $tmp1913 = name1890;
                                        $tmp1914 = id1909;
                                        name1890 = $tmp1914;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1913));
                                    }
                                    {
                                        $tmp1915 = bound1891;
                                        org$pandalanguage$pandac$Type* $tmp1918 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1911);
                                        $tmp1917 = $tmp1918;
                                        $tmp1916 = $tmp1917;
                                        bound1891 = $tmp1916;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1919, false);
                                    if ($tmp1919.value) goto $l1920; else goto $l1921;
                                    $l1921:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1922, (panda$core$Int64) { 557 });
                                    abort();
                                    $l1920:;
                                }
                                }
                                }
                            }
                            $tmp1894 = -1;
                            goto $l1892;
                            $l1892:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
                            switch ($tmp1894) {
                                case -1: goto $l1923;
                            }
                            $l1923:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1925 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1927 = (($fn1926) p1883->$class->vtable[2])(p1883);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1925, $tmp1927, fullName1813, name1890, bound1891);
                            $tmp1924 = $tmp1925;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1858, ((panda$core$Object*) $tmp1924));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
                        }
                        $tmp1882 = -1;
                        goto $l1880;
                        $l1880:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) bound1891));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name1890));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1883));
                        p1883 = NULL;
                        switch ($tmp1882) {
                            case -1: goto $l1928;
                        }
                        $l1928:;
                    }
                    goto $l1872;
                    $l1873:;
                }
                $tmp1864 = -1;
                goto $l1862;
                $l1862:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$546$131865));
                Iter$546$131865 = NULL;
                switch ($tmp1864) {
                    case -1: goto $l1929;
                }
                $l1929:;
            }
        }
        }
        panda$collections$Array* $tmp1933 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1933);
        $tmp1932 = $tmp1933;
        $tmp1931 = $tmp1932;
        supertypes1930 = $tmp1931;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1934, 2);
            panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1934);
            if ($tmp1935.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1936);
            }
            }
            {
                int $tmp1939;
                {
                    ITable* $tmp1943 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1943->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1943 = $tmp1943->next;
                    }
                    $fn1945 $tmp1944 = $tmp1943->methods[0];
                    panda$collections$Iterator* $tmp1946 = $tmp1944(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1942 = $tmp1946;
                    $tmp1941 = $tmp1942;
                    Iter$567$131940 = $tmp1941;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
                    $l1947:;
                    ITable* $tmp1950 = Iter$567$131940->$class->itable;
                    while ($tmp1950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1950 = $tmp1950->next;
                    }
                    $fn1952 $tmp1951 = $tmp1950->methods[0];
                    panda$core$Bit $tmp1953 = $tmp1951(Iter$567$131940);
                    panda$core$Bit $tmp1954 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1953);
                    bool $tmp1949 = $tmp1954.value;
                    if (!$tmp1949) goto $l1948;
                    {
                        int $tmp1957;
                        {
                            ITable* $tmp1961 = Iter$567$131940->$class->itable;
                            while ($tmp1961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1961 = $tmp1961->next;
                            }
                            $fn1963 $tmp1962 = $tmp1961->methods[1];
                            panda$core$Object* $tmp1964 = $tmp1962(Iter$567$131940);
                            $tmp1960 = $tmp1964;
                            $tmp1959 = ((org$pandalanguage$pandac$ASTNode*) $tmp1960);
                            s1958 = $tmp1959;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1959));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1960);
                            org$pandalanguage$pandac$Type* $tmp1966 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1958);
                            $tmp1965 = $tmp1966;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1930, ((panda$core$Object*) $tmp1965));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
                        }
                        $tmp1957 = -1;
                        goto $l1955;
                        $l1955:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1958));
                        s1958 = NULL;
                        switch ($tmp1957) {
                            case -1: goto $l1967;
                        }
                        $l1967:;
                    }
                    goto $l1947;
                    $l1948:;
                }
                $tmp1939 = -1;
                goto $l1937;
                $l1937:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$567$131940));
                Iter$567$131940 = NULL;
                switch ($tmp1939) {
                    case -1: goto $l1968;
                }
                $l1968:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1972 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1974 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
        $tmp1973 = $tmp1974;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1972, p_source, p_position, p_aliases, doccomment1833, annotations1854, p_kind, fullName1813, ((panda$collections$ListView*) supertypes1930), parameters1858, ((org$pandalanguage$pandac$Compiler*) $tmp1973)->root);
        $tmp1971 = $tmp1972;
        $tmp1970 = $tmp1971;
        result1969 = $tmp1970;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1973);
        panda$core$Object* $tmp1976 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
        $tmp1975 = $tmp1976;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1975)->currentClass, ((panda$core$Object*) result1969));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1975);
        panda$core$Int64$init$builtin_int64(&$tmp1977, 2);
        panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1977);
        if ($tmp1978.value) {
        {
            int $tmp1981;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1985 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1987 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1988, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1987, $tmp1988);
                $tmp1986 = $tmp1987;
                panda$core$Int64$init$builtin_int64(&$tmp1990, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1989, $tmp1990);
                org$pandalanguage$pandac$Type* $tmp1993 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1992 = $tmp1993;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1985, result1969, result1969->position, NULL, $tmp1986, $tmp1989, &$s1991, $tmp1992, NULL);
                $tmp1984 = $tmp1985;
                $tmp1983 = $tmp1984;
                rawValue1982 = $tmp1983;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
                panda$collections$Array$add$panda$collections$Array$T(result1969->fields, ((panda$core$Object*) rawValue1982));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1969->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1982));
                org$pandalanguage$pandac$FieldDecl* $tmp1997 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1999 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2000, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1999, $tmp2000);
                $tmp1998 = $tmp1999;
                panda$core$Int64$init$builtin_int64(&$tmp2002, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp2001, $tmp2002);
                org$pandalanguage$pandac$Type* $tmp2005 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp2004 = $tmp2005;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1997, result1969, result1969->position, NULL, $tmp1998, $tmp2001, &$s2003, $tmp2004, NULL);
                $tmp1996 = $tmp1997;
                $tmp1995 = $tmp1996;
                data1994 = $tmp1995;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
                panda$collections$Array$add$panda$collections$Array$T(result1969->fields, ((panda$core$Object*) data1994));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1969->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1994));
            }
            $tmp1981 = -1;
            goto $l1979;
            $l1979:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) data1994));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) rawValue1982));
            rawValue1982 = NULL;
            data1994 = NULL;
            switch ($tmp1981) {
                case -1: goto $l2006;
            }
            $l2006:;
        }
        }
        {
            int $tmp2009;
            {
                ITable* $tmp2013 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp2013->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2013 = $tmp2013->next;
                }
                $fn2015 $tmp2014 = $tmp2013->methods[0];
                panda$collections$Iterator* $tmp2016 = $tmp2014(((panda$collections$Iterable*) p_members));
                $tmp2012 = $tmp2016;
                $tmp2011 = $tmp2012;
                Iter$586$92010 = $tmp2011;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
                $l2017:;
                ITable* $tmp2020 = Iter$586$92010->$class->itable;
                while ($tmp2020->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2020 = $tmp2020->next;
                }
                $fn2022 $tmp2021 = $tmp2020->methods[0];
                panda$core$Bit $tmp2023 = $tmp2021(Iter$586$92010);
                panda$core$Bit $tmp2024 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2023);
                bool $tmp2019 = $tmp2024.value;
                if (!$tmp2019) goto $l2018;
                {
                    int $tmp2027;
                    {
                        ITable* $tmp2031 = Iter$586$92010->$class->itable;
                        while ($tmp2031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2031 = $tmp2031->next;
                        }
                        $fn2033 $tmp2032 = $tmp2031->methods[1];
                        panda$core$Object* $tmp2034 = $tmp2032(Iter$586$92010);
                        $tmp2030 = $tmp2034;
                        $tmp2029 = ((org$pandalanguage$pandac$ASTNode*) $tmp2030);
                        m2028 = $tmp2029;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp2030);
                        int $tmp2037;
                        {
                            $tmp2039 = m2028;
                            $match$587_132038 = $tmp2039;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
                            panda$core$Int64$init$builtin_int64(&$tmp2040, 26);
                            panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$587_132038->$rawValue, $tmp2040);
                            if ($tmp2041.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp2043 = ((org$pandalanguage$pandac$Position*) ((char*) $match$587_132038->$data + 0));
                                mPosition2042 = *$tmp2043;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2045 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$587_132038->$data + 32));
                                methodKind2044 = *$tmp2045;
                                panda$core$Int64$init$builtin_int64(&$tmp2046, 2);
                                panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind2044.$rawValue, $tmp2046);
                                if ($tmp2047.value) {
                                {
                                    {
                                        $match$590_252048 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2049, 0);
                                        panda$core$Bit $tmp2050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$590_252048.$rawValue, $tmp2049);
                                        if ($tmp2050.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2051, 1);
                                        panda$core$Bit $tmp2052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$590_252048.$rawValue, $tmp2051);
                                        if ($tmp2052.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2042, &$s2053);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2054, 2);
                                        panda$core$Bit $tmp2055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$590_252048.$rawValue, $tmp2054);
                                        if ($tmp2055.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2042, &$s2056);
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
                        $tmp2037 = -1;
                        goto $l2035;
                        $l2035:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
                        switch ($tmp2037) {
                            case -1: goto $l2057;
                        }
                        $l2057:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1969, m2028);
                    }
                    $tmp2027 = -1;
                    goto $l2025;
                    $l2025:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m2028));
                    m2028 = NULL;
                    switch ($tmp2027) {
                        case -1: goto $l2058;
                    }
                    $l2058:;
                }
                goto $l2017;
                $l2018:;
            }
            $tmp2009 = -1;
            goto $l2007;
            $l2007:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$586$92010));
            Iter$586$92010 = NULL;
            switch ($tmp2009) {
                case -1: goto $l2059;
            }
            $l2059:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2061, false);
        foundInit2060 = $tmp2061;
        panda$core$Bit$init$builtin_bit(&$tmp2063, false);
        foundCleanup2062 = $tmp2063;
        {
            int $tmp2066;
            {
                ITable* $tmp2070 = ((panda$collections$Iterable*) result1969->methods)->$class->itable;
                while ($tmp2070->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2070 = $tmp2070->next;
                }
                $fn2072 $tmp2071 = $tmp2070->methods[0];
                panda$collections$Iterator* $tmp2073 = $tmp2071(((panda$collections$Iterable*) result1969->methods));
                $tmp2069 = $tmp2073;
                $tmp2068 = $tmp2069;
                Iter$605$92067 = $tmp2068;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2068));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
                $l2074:;
                ITable* $tmp2077 = Iter$605$92067->$class->itable;
                while ($tmp2077->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2077 = $tmp2077->next;
                }
                $fn2079 $tmp2078 = $tmp2077->methods[0];
                panda$core$Bit $tmp2080 = $tmp2078(Iter$605$92067);
                panda$core$Bit $tmp2081 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2080);
                bool $tmp2076 = $tmp2081.value;
                if (!$tmp2076) goto $l2075;
                {
                    int $tmp2084;
                    {
                        ITable* $tmp2088 = Iter$605$92067->$class->itable;
                        while ($tmp2088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2088 = $tmp2088->next;
                        }
                        $fn2090 $tmp2089 = $tmp2088->methods[1];
                        panda$core$Object* $tmp2091 = $tmp2089(Iter$605$92067);
                        $tmp2087 = $tmp2091;
                        $tmp2086 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2087);
                        m2085 = $tmp2086;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp2087);
                        panda$core$Int64$init$builtin_int64(&$tmp2092, 2);
                        panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2085->methodKind.$rawValue, $tmp2092);
                        if ($tmp2093.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2094, true);
                            foundInit2060 = $tmp2094;
                        }
                        }
                        panda$core$Bit $tmp2097 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2085)->name, &$s2096);
                        bool $tmp2095 = $tmp2097.value;
                        if (!$tmp2095) goto $l2098;
                        ITable* $tmp2099 = ((panda$collections$CollectionView*) m2085->parameters)->$class->itable;
                        while ($tmp2099->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp2099 = $tmp2099->next;
                        }
                        $fn2101 $tmp2100 = $tmp2099->methods[0];
                        panda$core$Int64 $tmp2102 = $tmp2100(((panda$collections$CollectionView*) m2085->parameters));
                        panda$core$Int64$init$builtin_int64(&$tmp2103, 0);
                        panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2102, $tmp2103);
                        $tmp2095 = $tmp2104.value;
                        $l2098:;
                        panda$core$Bit $tmp2105 = { $tmp2095 };
                        if ($tmp2105.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2106, true);
                            foundCleanup2062 = $tmp2106;
                            panda$core$Int64$init$builtin_int64(&$tmp2107, 2);
                            panda$core$Bit $tmp2108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2107);
                            if ($tmp2108.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2109);
                            }
                            }
                        }
                        }
                    }
                    $tmp2084 = -1;
                    goto $l2082;
                    $l2082:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m2085));
                    m2085 = NULL;
                    switch ($tmp2084) {
                        case -1: goto $l2110;
                    }
                    $l2110:;
                }
                goto $l2074;
                $l2075:;
            }
            $tmp2066 = -1;
            goto $l2064;
            $l2064:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$605$92067));
            Iter$605$92067 = NULL;
            switch ($tmp2066) {
                case -1: goto $l2111;
            }
            $l2111:;
        }
        panda$core$Bit $tmp2114 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2060);
        bool $tmp2113 = $tmp2114.value;
        if (!$tmp2113) goto $l2115;
        panda$core$Int64$init$builtin_int64(&$tmp2116, 0);
        panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2116);
        $tmp2113 = $tmp2117.value;
        $l2115:;
        panda$core$Bit $tmp2118 = { $tmp2113 };
        bool $tmp2112 = $tmp2118.value;
        if (!$tmp2112) goto $l2119;
        ITable* $tmp2121 = ((panda$core$Equatable*) result1969->name)->$class->itable;
        while ($tmp2121->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2121 = $tmp2121->next;
        }
        $fn2123 $tmp2122 = $tmp2121->methods[1];
        panda$core$Bit $tmp2124 = $tmp2122(((panda$core$Equatable*) result1969->name), ((panda$core$Equatable*) &$s2120));
        $tmp2112 = $tmp2124.value;
        $l2119:;
        panda$core$Bit $tmp2125 = { $tmp2112 };
        if ($tmp2125.value) {
        {
            int $tmp2128;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2132 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2134 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2135, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2134, $tmp2135);
                $tmp2133 = $tmp2134;
                panda$core$Int64$init$builtin_int64(&$tmp2137, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2136, $tmp2137);
                panda$collections$Array* $tmp2140 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2140);
                $tmp2139 = $tmp2140;
                panda$collections$Array* $tmp2142 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2142);
                $tmp2141 = $tmp2142;
                org$pandalanguage$pandac$Type* $tmp2144 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2143 = $tmp2144;
                panda$collections$ImmutableArray* $tmp2146 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2146);
                $tmp2145 = $tmp2146;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2132, result1969, p_position, NULL, $tmp2133, $tmp2136, &$s2138, $tmp2139, $tmp2141, $tmp2143, $tmp2145);
                $tmp2131 = $tmp2132;
                $tmp2130 = $tmp2131;
                defaultInit2129 = $tmp2130;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
                panda$collections$Array$add$panda$collections$Array$T(result1969->methods, ((panda$core$Object*) defaultInit2129));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1969->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2129));
            }
            $tmp2128 = -1;
            goto $l2126;
            $l2126:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defaultInit2129));
            defaultInit2129 = NULL;
            switch ($tmp2128) {
                case -1: goto $l2147;
            }
            $l2147:;
        }
        }
        panda$core$Bit $tmp2150 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2062);
        bool $tmp2149 = $tmp2150.value;
        if (!$tmp2149) goto $l2151;
        panda$core$Int64$init$builtin_int64(&$tmp2153, 0);
        panda$core$Bit $tmp2154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2153);
        bool $tmp2152 = $tmp2154.value;
        if ($tmp2152) goto $l2155;
        panda$core$Int64$init$builtin_int64(&$tmp2156, 2);
        panda$core$Bit $tmp2157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2156);
        $tmp2152 = $tmp2157.value;
        $l2155:;
        panda$core$Bit $tmp2158 = { $tmp2152 };
        $tmp2149 = $tmp2158.value;
        $l2151:;
        panda$core$Bit $tmp2159 = { $tmp2149 };
        bool $tmp2148 = $tmp2159.value;
        if (!$tmp2148) goto $l2160;
        ITable* $tmp2162 = ((panda$core$Equatable*) result1969->name)->$class->itable;
        while ($tmp2162->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2162 = $tmp2162->next;
        }
        $fn2164 $tmp2163 = $tmp2162->methods[1];
        panda$core$Bit $tmp2165 = $tmp2163(((panda$core$Equatable*) result1969->name), ((panda$core$Equatable*) &$s2161));
        $tmp2148 = $tmp2165.value;
        $l2160:;
        panda$core$Bit $tmp2166 = { $tmp2148 };
        if ($tmp2166.value) {
        {
            int $tmp2169;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2173 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2175 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2176, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2177, 8192);
                panda$core$Int64 $tmp2178 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2176, $tmp2177);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2175, $tmp2178);
                $tmp2174 = $tmp2175;
                panda$core$Int64$init$builtin_int64(&$tmp2180, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2179, $tmp2180);
                panda$collections$Array* $tmp2183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2183);
                $tmp2182 = $tmp2183;
                panda$collections$Array* $tmp2185 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2185);
                $tmp2184 = $tmp2185;
                org$pandalanguage$pandac$Type* $tmp2187 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2186 = $tmp2187;
                panda$collections$ImmutableArray* $tmp2189 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2189);
                $tmp2188 = $tmp2189;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2173, result1969, p_position, NULL, $tmp2174, $tmp2179, &$s2181, $tmp2182, $tmp2184, $tmp2186, $tmp2188);
                $tmp2172 = $tmp2173;
                $tmp2171 = $tmp2172;
                defaultCleanup2170 = $tmp2171;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2188));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
                panda$collections$Array$add$panda$collections$Array$T(result1969->methods, ((panda$core$Object*) defaultCleanup2170));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1969->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2170));
            }
            $tmp2169 = -1;
            goto $l2167;
            $l2167:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defaultCleanup2170));
            defaultCleanup2170 = NULL;
            switch ($tmp2169) {
                case -1: goto $l2190;
            }
            $l2190:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2191, 2);
        panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2191);
        if ($tmp2192.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2194, false);
            haveFields2193 = $tmp2194;
            ITable* $tmp2195 = ((panda$collections$CollectionView*) result1969->choiceCases)->$class->itable;
            while ($tmp2195->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2195 = $tmp2195->next;
            }
            $fn2197 $tmp2196 = $tmp2195->methods[0];
            panda$core$Int64 $tmp2198 = $tmp2196(((panda$collections$CollectionView*) result1969->choiceCases));
            panda$core$Int64$init$builtin_int64(&$tmp2199, 0);
            panda$core$Bit $tmp2200 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2198, $tmp2199);
            if ($tmp2200.value) {
            {
                {
                    int $tmp2203;
                    {
                        ITable* $tmp2207 = ((panda$collections$Iterable*) result1969->choiceCases)->$class->itable;
                        while ($tmp2207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2207 = $tmp2207->next;
                        }
                        $fn2209 $tmp2208 = $tmp2207->methods[0];
                        panda$collections$Iterator* $tmp2210 = $tmp2208(((panda$collections$Iterable*) result1969->choiceCases));
                        $tmp2206 = $tmp2210;
                        $tmp2205 = $tmp2206;
                        Iter$636$172204 = $tmp2205;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2206));
                        $l2211:;
                        ITable* $tmp2214 = Iter$636$172204->$class->itable;
                        while ($tmp2214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2214 = $tmp2214->next;
                        }
                        $fn2216 $tmp2215 = $tmp2214->methods[0];
                        panda$core$Bit $tmp2217 = $tmp2215(Iter$636$172204);
                        panda$core$Bit $tmp2218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2217);
                        bool $tmp2213 = $tmp2218.value;
                        if (!$tmp2213) goto $l2212;
                        {
                            int $tmp2221;
                            {
                                ITable* $tmp2225 = Iter$636$172204->$class->itable;
                                while ($tmp2225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2225 = $tmp2225->next;
                                }
                                $fn2227 $tmp2226 = $tmp2225->methods[1];
                                panda$core$Object* $tmp2228 = $tmp2226(Iter$636$172204);
                                $tmp2224 = $tmp2228;
                                $tmp2223 = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2224);
                                e2222 = $tmp2223;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2223));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp2224);
                                ITable* $tmp2229 = ((panda$collections$CollectionView*) e2222->fields)->$class->itable;
                                while ($tmp2229->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                    $tmp2229 = $tmp2229->next;
                                }
                                $fn2231 $tmp2230 = $tmp2229->methods[0];
                                panda$core$Int64 $tmp2232 = $tmp2230(((panda$collections$CollectionView*) e2222->fields));
                                panda$core$Int64$init$builtin_int64(&$tmp2233, 0);
                                panda$core$Bit $tmp2234 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2232, $tmp2233);
                                if ($tmp2234.value) {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2235, true);
                                    haveFields2193 = $tmp2235;
                                    $tmp2221 = 0;
                                    goto $l2219;
                                    $l2236:;
                                    goto $l2212;
                                }
                                }
                            }
                            $tmp2221 = -1;
                            goto $l2219;
                            $l2219:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e2222));
                            e2222 = NULL;
                            switch ($tmp2221) {
                                case 0: goto $l2236;
                                case -1: goto $l2237;
                            }
                            $l2237:;
                        }
                        goto $l2211;
                        $l2212:;
                    }
                    $tmp2203 = -1;
                    goto $l2201;
                    $l2201:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$636$172204));
                    Iter$636$172204 = NULL;
                    switch ($tmp2203) {
                        case -1: goto $l2238;
                    }
                    $l2238:;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, result1969->position, &$s2239);
                $tmp2241 = NULL;
                $returnValue2240 = $tmp2241;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2241));
                $tmp1812 = 0;
                goto $l1810;
                $l2242:;
                return $returnValue2240;
            }
            }
            panda$core$Bit $tmp2244 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2193);
            if ($tmp2244.value) {
            {
                {
                    $tmp2245 = result1969->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2248 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2247 = $tmp2248;
                    $tmp2246 = $tmp2247;
                    result1969->rawSuper = $tmp2246;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2251 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
        $tmp2250 = $tmp2251;
        panda$core$Object* $tmp2252 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2250)->currentClass);
        $tmp2249 = $tmp2252;
        panda$core$Panda$unref$panda$core$Object$Q($tmp2249);
        panda$core$Panda$unref$panda$core$Object$Q($tmp2250);
        $tmp2253 = result1969;
        $returnValue2240 = $tmp2253;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2253));
        $tmp1812 = 1;
        goto $l1810;
        $l2254:;
        return $returnValue2240;
    }
    $l1810:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1969));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) supertypes1930));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1858));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) annotations1854));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) doccomment1833));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) fullName1813));
    annotations1854 = NULL;
    parameters1858 = NULL;
    supertypes1930 = NULL;
    result1969 = NULL;
    switch ($tmp1812) {
        case 1: goto $l2254;
        case 0: goto $l2242;
    }
    $l2256:;
    if (false) goto $l2257; else goto $l2258;
    $l2258:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2259, (panda$core$Int64) { 519 }, &$s2260);
    abort();
    $l2257:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$657$92264 = NULL;
    panda$collections$Iterator* $tmp2265;
    panda$collections$Iterator* $tmp2266;
    org$pandalanguage$pandac$ClassDecl* inner2282 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2283;
    panda$core$Object* $tmp2284;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2263;
        {
            ITable* $tmp2267 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2267->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2267 = $tmp2267->next;
            }
            $fn2269 $tmp2268 = $tmp2267->methods[0];
            panda$collections$Iterator* $tmp2270 = $tmp2268(((panda$collections$Iterable*) p_cl->classes));
            $tmp2266 = $tmp2270;
            $tmp2265 = $tmp2266;
            Iter$657$92264 = $tmp2265;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2265));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2266));
            $l2271:;
            ITable* $tmp2274 = Iter$657$92264->$class->itable;
            while ($tmp2274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2274 = $tmp2274->next;
            }
            $fn2276 $tmp2275 = $tmp2274->methods[0];
            panda$core$Bit $tmp2277 = $tmp2275(Iter$657$92264);
            panda$core$Bit $tmp2278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2277);
            bool $tmp2273 = $tmp2278.value;
            if (!$tmp2273) goto $l2272;
            {
                int $tmp2281;
                {
                    ITable* $tmp2285 = Iter$657$92264->$class->itable;
                    while ($tmp2285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2285 = $tmp2285->next;
                    }
                    $fn2287 $tmp2286 = $tmp2285->methods[1];
                    panda$core$Object* $tmp2288 = $tmp2286(Iter$657$92264);
                    $tmp2284 = $tmp2288;
                    $tmp2283 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2284);
                    inner2282 = $tmp2283;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2283));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp2284);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2282, p_arr);
                }
                $tmp2281 = -1;
                goto $l2279;
                $l2279:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) inner2282));
                inner2282 = NULL;
                switch ($tmp2281) {
                    case -1: goto $l2289;
                }
                $l2289:;
            }
            goto $l2271;
            $l2272:;
        }
        $tmp2263 = -1;
        goto $l2261;
        $l2261:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$657$92264));
        Iter$657$92264 = NULL;
        switch ($tmp2263) {
            case -1: goto $l2290;
        }
        $l2290:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, panda$collections$List* p_classes) {
    panda$core$String* fullName2294 = NULL;
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$String* $tmp2303;
    panda$core$String* $tmp2307;
    panda$core$String* $tmp2308;
    org$pandalanguage$pandac$ClassDecl* $tmp2310;
    org$pandalanguage$pandac$ClassDecl* $tmp2311;
    org$pandalanguage$pandac$ClassDecl* $tmp2312;
    org$pandalanguage$pandac$Position $tmp2314;
    org$pandalanguage$pandac$Annotations* $tmp2315;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2317;
    panda$core$Int64 $tmp2318;
    panda$collections$Array* $tmp2319;
    panda$collections$Array* $tmp2321;
    panda$core$Object* $tmp2323;
    org$pandalanguage$pandac$MethodDecl* defaultInit2328 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2329;
    org$pandalanguage$pandac$MethodDecl* $tmp2330;
    org$pandalanguage$pandac$Position $tmp2332;
    org$pandalanguage$pandac$Annotations* $tmp2333;
    panda$core$Int64 $tmp2335;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2336;
    panda$core$Int64 $tmp2337;
    panda$collections$Array* $tmp2339;
    panda$collections$Array* $tmp2341;
    org$pandalanguage$pandac$Type* $tmp2343;
    panda$collections$ImmutableArray* $tmp2345;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2347 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2348;
    org$pandalanguage$pandac$MethodDecl* $tmp2349;
    org$pandalanguage$pandac$Position $tmp2351;
    org$pandalanguage$pandac$Annotations* $tmp2352;
    panda$core$Int64 $tmp2354;
    panda$core$Int64 $tmp2355;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2357;
    panda$core$Int64 $tmp2358;
    panda$collections$Array* $tmp2360;
    panda$collections$Array* $tmp2362;
    org$pandalanguage$pandac$Type* $tmp2364;
    panda$collections$ImmutableArray* $tmp2366;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2293;
        {
            memset(&fullName2294, 0, sizeof(fullName2294));
            ITable* $tmp2296 = ((panda$core$Equatable*) p_contextName)->$class->itable;
            while ($tmp2296->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp2296 = $tmp2296->next;
            }
            $fn2298 $tmp2297 = $tmp2296->methods[1];
            panda$core$Bit $tmp2299 = $tmp2297(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s2295));
            if ($tmp2299.value) {
            {
                {
                    $tmp2300 = fullName2294;
                    panda$core$String* $tmp2304 = panda$core$String$convert$R$panda$core$String(p_contextName);
                    $tmp2303 = $tmp2304;
                    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2305);
                    $tmp2302 = $tmp2306;
                    $tmp2301 = $tmp2302;
                    fullName2294 = $tmp2301;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2301));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
                }
            }
            }
            else {
            {
                {
                    $tmp2307 = fullName2294;
                    $tmp2308 = &$s2309;
                    fullName2294 = $tmp2308;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2308));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2307));
                }
            }
            }
            {
                $tmp2310 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2313 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2314);
                org$pandalanguage$pandac$Annotations* $tmp2316 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2316);
                $tmp2315 = $tmp2316;
                panda$core$Int64$init$builtin_int64(&$tmp2318, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2317, $tmp2318);
                panda$collections$Array* $tmp2320 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2320);
                $tmp2319 = $tmp2320;
                panda$collections$Array* $tmp2322 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2322);
                $tmp2321 = $tmp2322;
                panda$core$Object* $tmp2324 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp2323 = $tmp2324;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2313, p_source, $tmp2314, p_aliases, NULL, $tmp2315, $tmp2317, fullName2294, ((panda$collections$ListView*) $tmp2319), $tmp2321, ((org$pandalanguage$pandac$Compiler*) $tmp2323)->root);
                $tmp2312 = $tmp2313;
                $tmp2311 = $tmp2312;
                self->bareCodeClass = $tmp2311;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
                panda$core$Panda$unref$panda$core$Object$Q($tmp2323);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2315));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
            }
            ITable* $tmp2325 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2325->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2325 = $tmp2325->next;
            }
            $fn2327 $tmp2326 = $tmp2325->methods[0];
            $tmp2326(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2331 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2332);
            org$pandalanguage$pandac$Annotations* $tmp2334 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2335, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2334, $tmp2335);
            $tmp2333 = $tmp2334;
            panda$core$Int64$init$builtin_int64(&$tmp2337, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2336, $tmp2337);
            panda$collections$Array* $tmp2340 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2340);
            $tmp2339 = $tmp2340;
            panda$collections$Array* $tmp2342 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2342);
            $tmp2341 = $tmp2342;
            org$pandalanguage$pandac$Type* $tmp2344 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2343 = $tmp2344;
            panda$collections$ImmutableArray* $tmp2346 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2346);
            $tmp2345 = $tmp2346;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2331, self->bareCodeClass, $tmp2332, NULL, $tmp2333, $tmp2336, &$s2338, $tmp2339, $tmp2341, $tmp2343, $tmp2345);
            $tmp2330 = $tmp2331;
            $tmp2329 = $tmp2330;
            defaultInit2328 = $tmp2329;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2329));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2343));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2339));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2328));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2328));
            org$pandalanguage$pandac$MethodDecl* $tmp2350 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2351);
            org$pandalanguage$pandac$Annotations* $tmp2353 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2354, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2355, 8192);
            panda$core$Int64 $tmp2356 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2354, $tmp2355);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2353, $tmp2356);
            $tmp2352 = $tmp2353;
            panda$core$Int64$init$builtin_int64(&$tmp2358, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2357, $tmp2358);
            panda$collections$Array* $tmp2361 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2361);
            $tmp2360 = $tmp2361;
            panda$collections$Array* $tmp2363 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2363);
            $tmp2362 = $tmp2363;
            org$pandalanguage$pandac$Type* $tmp2365 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2364 = $tmp2365;
            panda$collections$ImmutableArray* $tmp2367 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2367);
            $tmp2366 = $tmp2367;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2350, self->bareCodeClass, $tmp2351, NULL, $tmp2352, $tmp2357, &$s2359, $tmp2360, $tmp2362, $tmp2364, $tmp2366);
            $tmp2349 = $tmp2350;
            $tmp2348 = $tmp2349;
            defaultCleanup2347 = $tmp2348;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2347));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2347));
        }
        $tmp2293 = -1;
        goto $l2291;
        $l2291:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defaultCleanup2347));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defaultInit2328));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) fullName2294));
        defaultInit2328 = NULL;
        defaultCleanup2347 = NULL;
        switch ($tmp2293) {
            case -1: goto $l2368;
        }
        $l2368:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2373;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2369; else goto $l2370;
    $l2370:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2371, (panda$core$Int64) { 692 }, &$s2372);
    abort();
    $l2369:;
    panda$core$Object* $tmp2374 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
    $tmp2373 = $tmp2374;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2373), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object$Q($tmp2373);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2375;
    panda$io$File* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $match$698_92380 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    panda$core$Int64 $tmp2382;
    panda$collections$ImmutableArray* entries2384 = NULL;
    panda$collections$Array* result2389 = NULL;
    panda$collections$Array* $tmp2390;
    panda$collections$Array* $tmp2391;
    panda$core$String* currentPackage2393 = NULL;
    panda$core$String* $tmp2394;
    panda$collections$HashMap* aliases2396 = NULL;
    panda$collections$HashMap* $tmp2397;
    panda$collections$HashMap* $tmp2398;
    panda$collections$Iterator* Iter$703$172403 = NULL;
    panda$collections$Iterator* $tmp2404;
    panda$collections$Iterator* $tmp2405;
    org$pandalanguage$pandac$ASTNode* e2421 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2422;
    panda$core$Object* $tmp2423;
    org$pandalanguage$pandac$ASTNode* $match$704_212431 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2432;
    panda$core$Int64 $tmp2433;
    panda$core$String* name2435 = NULL;
    panda$core$String* $tmp2437;
    panda$core$String* $tmp2438;
    panda$core$Int64 $tmp2439;
    panda$core$String* fullName2441 = NULL;
    panda$core$String$Index$nullable idx2446;
    panda$core$String* alias2449 = NULL;
    panda$core$String* $tmp2450;
    panda$core$String* $tmp2451;
    panda$core$String* $tmp2452;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2453;
    panda$core$Bit $tmp2455;
    panda$core$String* $tmp2457;
    panda$core$String* $tmp2458;
    panda$core$Int64 $tmp2460;
    org$pandalanguage$pandac$Position position2462;
    org$pandalanguage$pandac$ASTNode* dc2464 = NULL;
    panda$collections$ImmutableArray* annotations2466 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2468;
    panda$core$String* name2470 = NULL;
    panda$collections$ImmutableArray* generics2472 = NULL;
    panda$collections$ImmutableArray* supertypes2474 = NULL;
    panda$collections$ImmutableArray* members2476 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2481 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2482;
    org$pandalanguage$pandac$ClassDecl* $tmp2483;
    panda$core$Int64 $tmp2486;
    org$pandalanguage$pandac$Position position2488;
    org$pandalanguage$pandac$ASTNode* dc2490 = NULL;
    panda$collections$ImmutableArray* annotations2492 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2494;
    panda$core$String* rawName2496 = NULL;
    panda$collections$ImmutableArray* generics2498 = NULL;
    panda$collections$ImmutableArray* parameters2500 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2502 = NULL;
    panda$collections$ImmutableArray* statements2504 = NULL;
    panda$core$Int64 $tmp2509;
    panda$core$String* name2515 = NULL;
    panda$core$String* $tmp2521;
    panda$core$String* $tmp2522;
    panda$collections$Array* mainParameters2524 = NULL;
    panda$collections$Array* $tmp2525;
    panda$collections$Array* $tmp2526;
    panda$collections$Array* mainStatements2528 = NULL;
    panda$collections$Array* $tmp2529;
    panda$collections$Array* $tmp2530;
    panda$collections$Array* mainArguments2532 = NULL;
    panda$collections$Array* $tmp2533;
    panda$collections$Array* $tmp2534;
    panda$collections$Iterator* Iter$737$332539 = NULL;
    panda$collections$Iterator* $tmp2540;
    panda$collections$Iterator* $tmp2541;
    org$pandalanguage$pandac$ASTNode* p2557 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2558;
    panda$core$Object* $tmp2559;
    org$pandalanguage$pandac$ASTNode* $match$738_372567 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2568;
    panda$core$Int64 $tmp2569;
    org$pandalanguage$pandac$Position position2571;
    panda$core$String* name2573 = NULL;
    org$pandalanguage$pandac$ASTNode* type2575 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2577;
    org$pandalanguage$pandac$Type* $tmp2579;
    org$pandalanguage$pandac$ASTNode* $tmp2581;
    panda$core$Int64 $tmp2583;
    panda$core$Bit $tmp2584;
    org$pandalanguage$pandac$ASTNode* bareConstruct2591 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    org$pandalanguage$pandac$ASTNode* $tmp2593;
    panda$core$Int64 $tmp2595;
    org$pandalanguage$pandac$ASTNode* $tmp2596;
    panda$core$Int64 $tmp2598;
    panda$collections$ImmutableArray* $tmp2600;
    org$pandalanguage$pandac$ASTNode* $tmp2602;
    panda$core$Int64 $tmp2604;
    org$pandalanguage$pandac$ASTNode* $tmp2605;
    panda$core$Int64 $tmp2607;
    panda$collections$ImmutableArray* $tmp2608;
    org$pandalanguage$pandac$Type* returnType2610 = NULL;
    org$pandalanguage$pandac$Type* $tmp2611;
    org$pandalanguage$pandac$Type* $tmp2612;
    org$pandalanguage$pandac$Type* $tmp2613;
    org$pandalanguage$pandac$Type* $tmp2615;
    org$pandalanguage$pandac$Type* $tmp2616;
    org$pandalanguage$pandac$Type* $tmp2617;
    org$pandalanguage$pandac$MethodDecl* bareMain2619 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2620;
    org$pandalanguage$pandac$MethodDecl* $tmp2621;
    org$pandalanguage$pandac$Position $tmp2623;
    org$pandalanguage$pandac$Annotations* $tmp2624;
    panda$core$Int64 $tmp2626;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2627;
    panda$core$Int64 $tmp2628;
    panda$collections$Array* $tmp2630;
    panda$collections$ImmutableArray* $tmp2632;
    panda$core$String* $tmp2635;
    panda$core$String* $tmp2636;
    panda$core$Object* $tmp2637;
    org$pandalanguage$pandac$MethodDecl* m2639 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2640;
    org$pandalanguage$pandac$MethodDecl* $tmp2641;
    org$pandalanguage$pandac$Annotations* $tmp2645;
    panda$core$Int64 $tmp2646;
    panda$core$Object* $tmp2649;
    panda$core$Int64 $tmp2652;
    org$pandalanguage$pandac$Position position2654;
    org$pandalanguage$pandac$ASTNode* dc2656 = NULL;
    panda$collections$ImmutableArray* annotations2658 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2660 = NULL;
    panda$core$Int64 old2662;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2667;
    panda$core$Bit $tmp2672;
    org$pandalanguage$pandac$FieldDecl* f2689 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2690;
    panda$core$Object* $tmp2691;
    panda$core$Int64 $tmp2694;
    panda$core$Bit $tmp2707;
    panda$core$String* $tmp2711;
    panda$core$String* $tmp2712;
    panda$core$String* $tmp2713;
    panda$core$String* $tmp2714;
    panda$core$String* $tmp2715;
    panda$core$String* $tmp2716;
    panda$core$Object* $tmp2721;
    panda$core$Object* $tmp2726;
    panda$io$File* $tmp2736;
    panda$io$File* $tmp2737;
    panda$collections$ListView* $returnValue2738;
    panda$collections$ListView* $tmp2739;
    panda$core$Bit $tmp2744;
    {
        $tmp2375 = self->source;
        $tmp2376 = p_source;
        self->source = $tmp2376;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
    }
    int $tmp2379;
    {
        $tmp2381 = p_file;
        $match$698_92380 = $tmp2381;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
        panda$core$Int64$init$builtin_int64(&$tmp2382, 17);
        panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$698_92380->$rawValue, $tmp2382);
        if ($tmp2383.value) {
        {
            panda$collections$ImmutableArray** $tmp2385 = ((panda$collections$ImmutableArray**) ((char*) $match$698_92380->$data + 0));
            entries2384 = *$tmp2385;
            int $tmp2388;
            {
                panda$collections$Array* $tmp2392 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2392);
                $tmp2391 = $tmp2392;
                $tmp2390 = $tmp2391;
                result2389 = $tmp2390;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
                $tmp2394 = &$s2395;
                currentPackage2393 = $tmp2394;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
                panda$collections$HashMap* $tmp2399 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2399);
                $tmp2398 = $tmp2399;
                $tmp2397 = $tmp2398;
                aliases2396 = $tmp2397;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
                {
                    int $tmp2402;
                    {
                        ITable* $tmp2406 = ((panda$collections$Iterable*) entries2384)->$class->itable;
                        while ($tmp2406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2406 = $tmp2406->next;
                        }
                        $fn2408 $tmp2407 = $tmp2406->methods[0];
                        panda$collections$Iterator* $tmp2409 = $tmp2407(((panda$collections$Iterable*) entries2384));
                        $tmp2405 = $tmp2409;
                        $tmp2404 = $tmp2405;
                        Iter$703$172403 = $tmp2404;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2405));
                        $l2410:;
                        ITable* $tmp2413 = Iter$703$172403->$class->itable;
                        while ($tmp2413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2413 = $tmp2413->next;
                        }
                        $fn2415 $tmp2414 = $tmp2413->methods[0];
                        panda$core$Bit $tmp2416 = $tmp2414(Iter$703$172403);
                        panda$core$Bit $tmp2417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2416);
                        bool $tmp2412 = $tmp2417.value;
                        if (!$tmp2412) goto $l2411;
                        {
                            int $tmp2420;
                            {
                                ITable* $tmp2424 = Iter$703$172403->$class->itable;
                                while ($tmp2424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2424 = $tmp2424->next;
                                }
                                $fn2426 $tmp2425 = $tmp2424->methods[1];
                                panda$core$Object* $tmp2427 = $tmp2425(Iter$703$172403);
                                $tmp2423 = $tmp2427;
                                $tmp2422 = ((org$pandalanguage$pandac$ASTNode*) $tmp2423);
                                e2421 = $tmp2422;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp2423);
                                int $tmp2430;
                                {
                                    $tmp2432 = e2421;
                                    $match$704_212431 = $tmp2432;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
                                    panda$core$Int64$init$builtin_int64(&$tmp2433, 30);
                                    panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$704_212431->$rawValue, $tmp2433);
                                    if ($tmp2434.value) {
                                    {
                                        panda$core$String** $tmp2436 = ((panda$core$String**) ((char*) $match$704_212431->$data + 16));
                                        name2435 = *$tmp2436;
                                        {
                                            $tmp2437 = currentPackage2393;
                                            $tmp2438 = name2435;
                                            currentPackage2393 = $tmp2438;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2439, 46);
                                    panda$core$Bit $tmp2440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$704_212431->$rawValue, $tmp2439);
                                    if ($tmp2440.value) {
                                    {
                                        panda$core$String** $tmp2442 = ((panda$core$String**) ((char*) $match$704_212431->$data + 16));
                                        fullName2441 = *$tmp2442;
                                        int $tmp2445;
                                        {
                                            panda$core$String$Index$nullable $tmp2448 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2441, &$s2447);
                                            idx2446 = $tmp2448;
                                            memset(&alias2449, 0, sizeof(alias2449));
                                            if (((panda$core$Bit) { idx2446.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2450 = alias2449;
                                                    panda$core$String$Index $tmp2454 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2441, ((panda$core$String$Index) idx2446.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2455, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2453, ((panda$core$String$Index$nullable) { $tmp2454, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2455);
                                                    panda$core$String* $tmp2456 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2441, $tmp2453);
                                                    $tmp2452 = $tmp2456;
                                                    $tmp2451 = $tmp2452;
                                                    alias2449 = $tmp2451;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2450));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2457 = alias2449;
                                                    $tmp2458 = fullName2441;
                                                    alias2449 = $tmp2458;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2396, ((panda$collections$Key*) alias2449), ((panda$core$Object*) fullName2441));
                                        }
                                        $tmp2445 = -1;
                                        goto $l2443;
                                        $l2443:;
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) alias2449));
                                        switch ($tmp2445) {
                                            case -1: goto $l2459;
                                        }
                                        $l2459:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2460, 11);
                                    panda$core$Bit $tmp2461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$704_212431->$rawValue, $tmp2460);
                                    if ($tmp2461.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2463 = ((org$pandalanguage$pandac$Position*) ((char*) $match$704_212431->$data + 0));
                                        position2462 = *$tmp2463;
                                        org$pandalanguage$pandac$ASTNode** $tmp2465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$704_212431->$data + 16));
                                        dc2464 = *$tmp2465;
                                        panda$collections$ImmutableArray** $tmp2467 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 24));
                                        annotations2466 = *$tmp2467;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2469 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$704_212431->$data + 32));
                                        kind2468 = *$tmp2469;
                                        panda$core$String** $tmp2471 = ((panda$core$String**) ((char*) $match$704_212431->$data + 40));
                                        name2470 = *$tmp2471;
                                        panda$collections$ImmutableArray** $tmp2473 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 48));
                                        generics2472 = *$tmp2473;
                                        panda$collections$ImmutableArray** $tmp2475 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 56));
                                        supertypes2474 = *$tmp2475;
                                        panda$collections$ImmutableArray** $tmp2477 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 64));
                                        members2476 = *$tmp2477;
                                        int $tmp2480;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2484 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2396), currentPackage2393, position2462, dc2464, annotations2466, kind2468, name2470, generics2472, supertypes2474, members2476);
                                            $tmp2483 = $tmp2484;
                                            $tmp2482 = $tmp2483;
                                            cl2481 = $tmp2482;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
                                            if (((panda$core$Bit) { cl2481 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2481, result2389);
                                            }
                                            }
                                        }
                                        $tmp2480 = -1;
                                        goto $l2478;
                                        $l2478:;
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl2481));
                                        cl2481 = NULL;
                                        switch ($tmp2480) {
                                            case -1: goto $l2485;
                                        }
                                        $l2485:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2486, 26);
                                    panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$704_212431->$rawValue, $tmp2486);
                                    if ($tmp2487.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2489 = ((org$pandalanguage$pandac$Position*) ((char*) $match$704_212431->$data + 0));
                                        position2488 = *$tmp2489;
                                        org$pandalanguage$pandac$ASTNode** $tmp2491 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$704_212431->$data + 16));
                                        dc2490 = *$tmp2491;
                                        panda$collections$ImmutableArray** $tmp2493 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 24));
                                        annotations2492 = *$tmp2493;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2495 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$704_212431->$data + 32));
                                        kind2494 = *$tmp2495;
                                        panda$core$String** $tmp2497 = ((panda$core$String**) ((char*) $match$704_212431->$data + 40));
                                        rawName2496 = *$tmp2497;
                                        panda$collections$ImmutableArray** $tmp2499 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 48));
                                        generics2498 = *$tmp2499;
                                        panda$collections$ImmutableArray** $tmp2501 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 56));
                                        parameters2500 = *$tmp2501;
                                        org$pandalanguage$pandac$ASTNode** $tmp2503 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$704_212431->$data + 64));
                                        rawReturnType2502 = *$tmp2503;
                                        panda$collections$ImmutableArray** $tmp2505 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 72));
                                        statements2504 = *$tmp2505;
                                        int $tmp2508;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2509, 2);
                                            panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2494.$rawValue, $tmp2509);
                                            if ($tmp2510.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2488, &$s2511);
                                                $tmp2508 = 0;
                                                goto $l2506;
                                                $l2512:;
                                                $tmp2430 = 0;
                                                goto $l2428;
                                                $l2513:;
                                                $tmp2420 = 0;
                                                goto $l2418;
                                                $l2514:;
                                                goto $l2410;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2396), currentPackage2393, ((panda$collections$List*) result2389));
                                            memset(&name2515, 0, sizeof(name2515));
                                            panda$core$Bit $tmp2517 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2496, &$s2516);
                                            if ($tmp2517.value) {
                                            {
                                                int $tmp2520;
                                                {
                                                    {
                                                        $tmp2521 = name2515;
                                                        $tmp2522 = &$s2523;
                                                        name2515 = $tmp2522;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2521));
                                                    }
                                                    panda$collections$Array* $tmp2527 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2527);
                                                    $tmp2526 = $tmp2527;
                                                    $tmp2525 = $tmp2526;
                                                    mainParameters2524 = $tmp2525;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
                                                    panda$collections$Array* $tmp2531 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2531);
                                                    $tmp2530 = $tmp2531;
                                                    $tmp2529 = $tmp2530;
                                                    mainStatements2528 = $tmp2529;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
                                                    panda$collections$Array* $tmp2535 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2535);
                                                    $tmp2534 = $tmp2535;
                                                    $tmp2533 = $tmp2534;
                                                    mainArguments2532 = $tmp2533;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
                                                    {
                                                        int $tmp2538;
                                                        {
                                                            ITable* $tmp2542 = ((panda$collections$Iterable*) parameters2500)->$class->itable;
                                                            while ($tmp2542->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2542 = $tmp2542->next;
                                                            }
                                                            $fn2544 $tmp2543 = $tmp2542->methods[0];
                                                            panda$collections$Iterator* $tmp2545 = $tmp2543(((panda$collections$Iterable*) parameters2500));
                                                            $tmp2541 = $tmp2545;
                                                            $tmp2540 = $tmp2541;
                                                            Iter$737$332539 = $tmp2540;
                                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2540));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
                                                            $l2546:;
                                                            ITable* $tmp2549 = Iter$737$332539->$class->itable;
                                                            while ($tmp2549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2549 = $tmp2549->next;
                                                            }
                                                            $fn2551 $tmp2550 = $tmp2549->methods[0];
                                                            panda$core$Bit $tmp2552 = $tmp2550(Iter$737$332539);
                                                            panda$core$Bit $tmp2553 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2552);
                                                            bool $tmp2548 = $tmp2553.value;
                                                            if (!$tmp2548) goto $l2547;
                                                            {
                                                                int $tmp2556;
                                                                {
                                                                    ITable* $tmp2560 = Iter$737$332539->$class->itable;
                                                                    while ($tmp2560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2560 = $tmp2560->next;
                                                                    }
                                                                    $fn2562 $tmp2561 = $tmp2560->methods[1];
                                                                    panda$core$Object* $tmp2563 = $tmp2561(Iter$737$332539);
                                                                    $tmp2559 = $tmp2563;
                                                                    $tmp2558 = ((org$pandalanguage$pandac$ASTNode*) $tmp2559);
                                                                    p2557 = $tmp2558;
                                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
                                                                    panda$core$Panda$unref$panda$core$Object$Q($tmp2559);
                                                                    int $tmp2566;
                                                                    {
                                                                        $tmp2568 = p2557;
                                                                        $match$738_372567 = $tmp2568;
                                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2569, 31);
                                                                        panda$core$Bit $tmp2570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$738_372567->$rawValue, $tmp2569);
                                                                        if ($tmp2570.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2572 = ((org$pandalanguage$pandac$Position*) ((char*) $match$738_372567->$data + 0));
                                                                            position2571 = *$tmp2572;
                                                                            panda$core$String** $tmp2574 = ((panda$core$String**) ((char*) $match$738_372567->$data + 16));
                                                                            name2573 = *$tmp2574;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2576 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$738_372567->$data + 24));
                                                                            type2575 = *$tmp2576;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2578 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2580 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2575);
                                                                            $tmp2579 = $tmp2580;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2578, name2573, $tmp2579);
                                                                            $tmp2577 = $tmp2578;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2524, ((panda$core$Object*) $tmp2577));
                                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
                                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2582 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2583, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2582, $tmp2583, position2571, name2573);
                                                                            $tmp2581 = $tmp2582;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2532, ((panda$core$Object*) $tmp2581));
                                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2584, false);
                                                                            if ($tmp2584.value) goto $l2585; else goto $l2586;
                                                                            $l2586:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2587, (panda$core$Int64) { 744 });
                                                                            abort();
                                                                            $l2585:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2566 = -1;
                                                                    goto $l2564;
                                                                    $l2564:;
                                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
                                                                    switch ($tmp2566) {
                                                                        case -1: goto $l2588;
                                                                    }
                                                                    $l2588:;
                                                                }
                                                                $tmp2556 = -1;
                                                                goto $l2554;
                                                                $l2554:;
                                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p2557));
                                                                p2557 = NULL;
                                                                switch ($tmp2556) {
                                                                    case -1: goto $l2589;
                                                                }
                                                                $l2589:;
                                                            }
                                                            goto $l2546;
                                                            $l2547:;
                                                        }
                                                        $tmp2538 = -1;
                                                        goto $l2536;
                                                        $l2536:;
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$737$332539));
                                                        Iter$737$332539 = NULL;
                                                        switch ($tmp2538) {
                                                            case -1: goto $l2590;
                                                        }
                                                        $l2590:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2594 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2595, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2597 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2598, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2597, $tmp2598, position2488, &$s2599);
                                                    $tmp2596 = $tmp2597;
                                                    panda$collections$ImmutableArray* $tmp2601 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2601);
                                                    $tmp2600 = $tmp2601;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2594, $tmp2595, position2488, $tmp2596, $tmp2600);
                                                    $tmp2593 = $tmp2594;
                                                    $tmp2592 = $tmp2593;
                                                    bareConstruct2591 = $tmp2592;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2603 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2604, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2606 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2607, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2606, $tmp2607, position2488, bareConstruct2591, name2515);
                                                    $tmp2605 = $tmp2606;
                                                    panda$collections$ImmutableArray* $tmp2609 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2532);
                                                    $tmp2608 = $tmp2609;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2603, $tmp2604, position2488, $tmp2605, $tmp2608);
                                                    $tmp2602 = $tmp2603;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2528, ((panda$core$Object*) $tmp2602));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2602));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
                                                    memset(&returnType2610, 0, sizeof(returnType2610));
                                                    if (((panda$core$Bit) { rawReturnType2502 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2611 = returnType2610;
                                                            org$pandalanguage$pandac$Type* $tmp2614 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2502);
                                                            $tmp2613 = $tmp2614;
                                                            $tmp2612 = $tmp2613;
                                                            returnType2610 = $tmp2612;
                                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2615 = returnType2610;
                                                            org$pandalanguage$pandac$Type* $tmp2618 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2617 = $tmp2618;
                                                            $tmp2616 = $tmp2617;
                                                            returnType2610 = $tmp2616;
                                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2622 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2623);
                                                    org$pandalanguage$pandac$Annotations* $tmp2625 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2626, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2625, $tmp2626);
                                                    $tmp2624 = $tmp2625;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2628, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2627, $tmp2628);
                                                    panda$collections$Array* $tmp2631 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2631);
                                                    $tmp2630 = $tmp2631;
                                                    panda$collections$ImmutableArray* $tmp2633 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2528);
                                                    $tmp2632 = $tmp2633;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2622, self->bareCodeClass, $tmp2623, NULL, $tmp2624, $tmp2627, &$s2629, $tmp2630, mainParameters2524, returnType2610, $tmp2632);
                                                    $tmp2621 = $tmp2622;
                                                    $tmp2620 = $tmp2621;
                                                    bareMain2619 = $tmp2620;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2619));
                                                }
                                                $tmp2520 = -1;
                                                goto $l2518;
                                                $l2518:;
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) bareMain2619));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType2610));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) bareConstruct2591));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) mainArguments2532));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) mainStatements2528));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) mainParameters2524));
                                                mainParameters2524 = NULL;
                                                mainStatements2528 = NULL;
                                                mainArguments2532 = NULL;
                                                bareConstruct2591 = NULL;
                                                bareMain2619 = NULL;
                                                switch ($tmp2520) {
                                                    case -1: goto $l2634;
                                                }
                                                $l2634:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2635 = name2515;
                                                    $tmp2636 = rawName2496;
                                                    name2515 = $tmp2636;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2638 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                                            $tmp2637 = $tmp2638;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2637)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object$Q($tmp2637);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2642 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2488, dc2490, annotations2492, kind2494, name2515, generics2498, parameters2500, rawReturnType2502, statements2504);
                                            $tmp2641 = $tmp2642;
                                            $tmp2640 = $tmp2641;
                                            m2639 = $tmp2640;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
                                            panda$core$Bit $tmp2643 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2639->annotations);
                                            if ($tmp2643.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2639)->position, &$s2644);
                                                $tmp2645 = m2639->annotations;
                                                panda$core$Int64$init$builtin_int64(&$tmp2646, 16);
                                                panda$core$Int64 $tmp2647 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2646);
                                                panda$core$Int64 $tmp2648 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2645->flags, $tmp2647);
                                                $tmp2645->flags = $tmp2648;
                                            }
                                            }
                                            panda$core$Object* $tmp2650 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                                            $tmp2649 = $tmp2650;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2649)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object$Q($tmp2649);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2639));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2639));
                                        }
                                        $tmp2508 = -1;
                                        goto $l2506;
                                        $l2506:;
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m2639));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name2515));
                                        m2639 = NULL;
                                        switch ($tmp2508) {
                                            case 0: goto $l2512;
                                            case -1: goto $l2651;
                                        }
                                        $l2651:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2652, 16);
                                    panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$704_212431->$rawValue, $tmp2652);
                                    if ($tmp2653.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2655 = ((org$pandalanguage$pandac$Position*) ((char*) $match$704_212431->$data + 0));
                                        position2654 = *$tmp2655;
                                        org$pandalanguage$pandac$ASTNode** $tmp2657 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$704_212431->$data + 16));
                                        dc2656 = *$tmp2657;
                                        panda$collections$ImmutableArray** $tmp2659 = ((panda$collections$ImmutableArray**) ((char*) $match$704_212431->$data + 24));
                                        annotations2658 = *$tmp2659;
                                        org$pandalanguage$pandac$ASTNode** $tmp2661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$704_212431->$data + 32));
                                        varDecl2660 = *$tmp2661;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2396), currentPackage2393, ((panda$collections$List*) result2389));
                                        ITable* $tmp2663 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2663->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2663 = $tmp2663->next;
                                        }
                                        $fn2665 $tmp2664 = $tmp2663->methods[0];
                                        panda$core$Int64 $tmp2666 = $tmp2664(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        old2662 = $tmp2666;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2654, dc2656, annotations2658, varDecl2660);
                                        ITable* $tmp2668 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2668->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2668 = $tmp2668->next;
                                        }
                                        $fn2670 $tmp2669 = $tmp2668->methods[0];
                                        panda$core$Int64 $tmp2671 = $tmp2669(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        panda$core$Bit$init$builtin_bit(&$tmp2672, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2667, old2662, $tmp2671, $tmp2672);
                                        int64_t $tmp2674 = $tmp2667.min.value;
                                        panda$core$Int64 i2673 = { $tmp2674 };
                                        int64_t $tmp2676 = $tmp2667.max.value;
                                        bool $tmp2677 = $tmp2667.inclusive.value;
                                        if ($tmp2677) goto $l2684; else goto $l2685;
                                        $l2684:;
                                        if ($tmp2674 <= $tmp2676) goto $l2678; else goto $l2680;
                                        $l2685:;
                                        if ($tmp2674 < $tmp2676) goto $l2678; else goto $l2680;
                                        $l2678:;
                                        {
                                            int $tmp2688;
                                            {
                                                panda$core$Object* $tmp2692 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2673);
                                                $tmp2691 = $tmp2692;
                                                $tmp2690 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2691);
                                                f2689 = $tmp2690;
                                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
                                                panda$core$Panda$unref$panda$core$Object$Q($tmp2691);
                                                panda$core$Int64$init$builtin_int64(&$tmp2694, 2);
                                                panda$core$Bit $tmp2695 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2689->fieldKind.$rawValue, $tmp2694);
                                                bool $tmp2693 = $tmp2695.value;
                                                if (!$tmp2693) goto $l2696;
                                                panda$core$Bit $tmp2697 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2689->annotations);
                                                $tmp2693 = $tmp2697.value;
                                                $l2696:;
                                                panda$core$Bit $tmp2698 = { $tmp2693 };
                                                if ($tmp2698.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2689)->position, &$s2699);
                                                }
                                                }
                                            }
                                            $tmp2688 = -1;
                                            goto $l2686;
                                            $l2686:;
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) f2689));
                                            f2689 = NULL;
                                            switch ($tmp2688) {
                                                case -1: goto $l2700;
                                            }
                                            $l2700:;
                                        }
                                        $l2681:;
                                        int64_t $tmp2702 = $tmp2676 - i2673.value;
                                        if ($tmp2677) goto $l2703; else goto $l2704;
                                        $l2703:;
                                        if ((uint64_t) $tmp2702 >= 1) goto $l2701; else goto $l2680;
                                        $l2704:;
                                        if ((uint64_t) $tmp2702 > 1) goto $l2701; else goto $l2680;
                                        $l2701:;
                                        i2673.value += 1;
                                        goto $l2678;
                                        $l2680:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2707, false);
                                        if ($tmp2707.value) goto $l2708; else goto $l2709;
                                        $l2709:;
                                        panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2717, ((panda$core$Object*) e2421));
                                        $tmp2716 = $tmp2718;
                                        panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2719);
                                        $tmp2715 = $tmp2720;
                                        panda$core$Int64$wrapper* $tmp2722;
                                        $tmp2722 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2722->value = e2421->$rawValue;
                                        $tmp2721 = ((panda$core$Object*) $tmp2722);
                                        panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2715, $tmp2721);
                                        $tmp2714 = $tmp2723;
                                        panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2724);
                                        $tmp2713 = $tmp2725;
                                        org$pandalanguage$pandac$Position $tmp2728 = (($fn2727) e2421->$class->vtable[2])(e2421);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2729;
                                        $tmp2729 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2729->value = $tmp2728;
                                        $tmp2726 = ((panda$core$Object*) $tmp2729);
                                        panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2713, $tmp2726);
                                        $tmp2712 = $tmp2730;
                                        panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, &$s2731);
                                        $tmp2711 = $tmp2732;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2710, (panda$core$Int64) { 793 }, $tmp2711);
                                        abort();
                                        $l2708:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2430 = -1;
                                goto $l2428;
                                $l2428:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
                                switch ($tmp2430) {
                                    case -1: goto $l2733;
                                    case 0: goto $l2513;
                                }
                                $l2733:;
                            }
                            $tmp2420 = -1;
                            goto $l2418;
                            $l2418:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e2421));
                            e2421 = NULL;
                            switch ($tmp2420) {
                                case -1: goto $l2734;
                                case 0: goto $l2514;
                            }
                            $l2734:;
                        }
                        goto $l2410;
                        $l2411:;
                    }
                    $tmp2402 = -1;
                    goto $l2400;
                    $l2400:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$703$172403));
                    Iter$703$172403 = NULL;
                    switch ($tmp2402) {
                        case -1: goto $l2735;
                    }
                    $l2735:;
                }
                {
                    $tmp2736 = self->source;
                    $tmp2737 = NULL;
                    self->source = $tmp2737;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
                }
                $tmp2739 = ((panda$collections$ListView*) result2389);
                $returnValue2738 = $tmp2739;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2739));
                $tmp2388 = 0;
                goto $l2386;
                $l2740:;
                $tmp2379 = 0;
                goto $l2377;
                $l2741:;
                return $returnValue2738;
            }
            $l2386:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) aliases2396));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) currentPackage2393));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2389));
            result2389 = NULL;
            currentPackage2393 = NULL;
            aliases2396 = NULL;
            switch ($tmp2388) {
                case 0: goto $l2740;
            }
            $l2743:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2744, false);
            if ($tmp2744.value) goto $l2745; else goto $l2746;
            $l2746:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2747, (panda$core$Int64) { 799 });
            abort();
            $l2745:;
        }
        }
    }
    $tmp2379 = -1;
    goto $l2377;
    $l2377:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
    switch ($tmp2379) {
        case 0: goto $l2741;
        case -1: goto $l2748;
    }
    $l2748:;
    if (false) goto $l2749; else goto $l2750;
    $l2750:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2751, (panda$core$Int64) { 696 }, &$s2752);
    abort();
    $l2749:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2755;
    {
    }
    $tmp2755 = -1;
    goto $l2753;
    $l2753:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2755) {
        case -1: goto $l2756;
    }
    $l2756:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->source));
}

