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
typedef panda$collections$Iterator* (*$fn545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn563)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn705)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn712)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn723)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn752)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn770)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn834)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn865)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn872)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn883)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn966)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn973)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn984)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1010)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1028)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1042)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1049)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1060)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1203)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1221)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1235)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1253)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1277)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1284)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1295)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1341)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1348)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1359)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1463)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1501)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1527)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1538)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1770)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1781)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1793)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1803)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1856)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1863)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1874)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1912)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1931)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1938)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1949)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2001)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2008)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2019)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2058)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2065)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2076)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2087)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2109)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2150)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2183)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2195)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2213)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2217)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2255)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2273)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2284)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2313)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2394)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2401)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2412)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2530)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2548)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2651)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2656)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2713)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
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
    panda$core$String* $tmp445;
    panda$core$String* $tmp446;
    panda$core$String* $tmp452;
    panda$core$String* $tmp453;
    panda$core$Bit $tmp459;
    org$pandalanguage$pandac$Annotations* $returnValue466;
    org$pandalanguage$pandac$Annotations* $tmp467;
    org$pandalanguage$pandac$Annotations* $tmp468;
    int $tmp272;
    {
        panda$core$Int64$init$builtin_int64(&$tmp274, 0);
        flags273 = $tmp274;
        $tmp276 = NULL;
        expressions275 = $tmp276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
        panda$core$MutableMethod* $tmp279 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp279, (panda$core$Int8*) &org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, ((panda$core$Object*) self));
        $tmp278 = ((panda$core$Object*) $tmp279);
        checkExpression277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
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
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
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
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object($tmp303);
                        int $tmp310;
                        {
                            $tmp312 = c301;
                            $match$94_13311 = $tmp312;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
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
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                                    int $tmp330;
                                    {
                                        $tmp332 = text317;
                                        $match$97_21331 = $tmp332;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
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
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
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
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                                                {
                                                    $tmp401 = expr326;
                                                    $tmp402 = NULL;
                                                    expr326 = $tmp402;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
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
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
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
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                                                {
                                                    $tmp415 = expr326;
                                                    $tmp416 = NULL;
                                                    expr326 = $tmp416;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
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
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
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
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
                                                {
                                                    $tmp429 = expr326;
                                                    $tmp430 = NULL;
                                                    expr326 = $tmp430;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
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
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
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
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                                                {
                                                    $tmp443 = expr326;
                                                    $tmp444 = NULL;
                                                    expr326 = $tmp444;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s447, text317);
                                            $tmp446 = $tmp448;
                                            panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s449);
                                            $tmp445 = $tmp450;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p315, $tmp445);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
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
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                                    switch ($tmp330) {
                                        case -1: goto $l451;
                                    }
                                    $l451:;
                                    if (((panda$core$Bit) { expr326 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s454, text317);
                                        $tmp453 = $tmp455;
                                        panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s456);
                                        $tmp452 = $tmp457;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p315, $tmp452);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
                                    }
                                    }
                                }
                                $tmp325 = -1;
                                goto $l323;
                                $l323:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr326));
                                expr326 = NULL;
                                switch ($tmp325) {
                                    case -1: goto $l458;
                                }
                                $l458:;
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp459, false);
                                if ($tmp459.value) goto $l460; else goto $l461;
                                $l461:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s462, (panda$core$Int64) { 151 });
                                abort();
                                $l460:;
                            }
                            }
                        }
                        $tmp310 = -1;
                        goto $l308;
                        $l308:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                        switch ($tmp310) {
                            case -1: goto $l463;
                        }
                        $l463:;
                    }
                    $tmp300 = -1;
                    goto $l298;
                    $l298:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c301));
                    c301 = NULL;
                    switch ($tmp300) {
                        case -1: goto $l464;
                    }
                    $l464:;
                }
                goto $l290;
                $l291:;
            }
            $tmp282 = -1;
            goto $l280;
            $l280:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$93$9283));
            Iter$93$9283 = NULL;
            switch ($tmp282) {
                case -1: goto $l465;
            }
            $l465:;
        }
        org$pandalanguage$pandac$Annotations* $tmp469 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp469, flags273, ((panda$collections$ListView*) expressions275));
        $tmp468 = $tmp469;
        $tmp467 = $tmp468;
        $returnValue466 = $tmp467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
        $tmp272 = 0;
        goto $l270;
        $l470:;
        return $returnValue466;
    }
    $l270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) checkExpression277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions275));
    checkExpression277 = NULL;
    switch ($tmp272) {
        case 0: goto $l470;
    }
    $l472:;
    if (false) goto $l473; else goto $l474;
    $l474:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s475, (panda$core$Int64) { 83 }, &$s476);
    abort();
    $l473:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment480 = NULL;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    org$pandalanguage$pandac$ASTNode* $match$165_13486 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp487;
    panda$core$Int64 $tmp488;
    org$pandalanguage$pandac$Position position490;
    panda$core$String* text492 = NULL;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$Bit $tmp496;
    org$pandalanguage$pandac$Annotations* annotations501 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp502;
    org$pandalanguage$pandac$Annotations* $tmp503;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind505;
    org$pandalanguage$pandac$ASTNode* $match$174_9509 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp510;
    panda$core$Int64 $tmp511;
    org$pandalanguage$pandac$Variable$Kind kind513;
    panda$collections$ImmutableArray* decls515 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$176_17517;
    panda$core$Int64 $tmp518;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp520;
    panda$core$Int64 $tmp521;
    panda$core$Int64 $tmp522;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp524;
    panda$core$Int64 $tmp525;
    panda$core$Int64 $tmp526;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp528;
    panda$core$Int64 $tmp529;
    org$pandalanguage$pandac$Annotations* $tmp530;
    panda$core$Int64 $tmp531;
    panda$core$Int64 $tmp533;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp535;
    panda$core$Int64 $tmp536;
    panda$collections$Iterator* Iter$187$17540 = NULL;
    panda$collections$Iterator* $tmp541;
    panda$collections$Iterator* $tmp542;
    org$pandalanguage$pandac$ASTNode* decl558 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    panda$core$Object* $tmp560;
    org$pandalanguage$pandac$ASTNode* $match$188_21568 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp569;
    panda$core$Int64 $tmp570;
    org$pandalanguage$pandac$Position declPosition572;
    org$pandalanguage$pandac$ASTNode* target574 = NULL;
    org$pandalanguage$pandac$ASTNode* rawValue576 = NULL;
    panda$core$String* name581 = NULL;
    org$pandalanguage$pandac$Type* type582 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$192_29586 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp587;
    panda$core$Int64 $tmp588;
    panda$core$String* id590 = NULL;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    org$pandalanguage$pandac$Type* $tmp594;
    org$pandalanguage$pandac$Type* $tmp595;
    org$pandalanguage$pandac$Type* $tmp596;
    panda$core$Int64 $tmp598;
    panda$core$String* id600 = NULL;
    org$pandalanguage$pandac$ASTNode* idType602 = NULL;
    panda$core$String* $tmp604;
    panda$core$String* $tmp605;
    org$pandalanguage$pandac$Type* $tmp606;
    org$pandalanguage$pandac$Type* $tmp607;
    org$pandalanguage$pandac$Type* $tmp608;
    panda$core$Bit $tmp610;
    org$pandalanguage$pandac$ASTNode* value615 = NULL;
    panda$core$Int64 $tmp622;
    org$pandalanguage$pandac$ASTNode* $tmp625;
    org$pandalanguage$pandac$ASTNode* $tmp626;
    org$pandalanguage$pandac$ASTNode* $tmp627;
    panda$core$Int64 $tmp629;
    org$pandalanguage$pandac$ASTNode* $tmp630;
    org$pandalanguage$pandac$ASTNode* $tmp631;
    org$pandalanguage$pandac$FieldDecl* field632 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp633;
    org$pandalanguage$pandac$FieldDecl* $tmp634;
    panda$core$Bit $tmp637;
    panda$core$Bit $tmp644;
    int $tmp479;
    {
        memset(&doccomment480, 0, sizeof(doccomment480));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp481 = doccomment480;
                $tmp482 = NULL;
                doccomment480 = $tmp482;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
            }
        }
        }
        else {
        {
            int $tmp485;
            {
                $tmp487 = p_rawDoccomment;
                $match$165_13486 = $tmp487;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
                panda$core$Int64$init$builtin_int64(&$tmp488, 38);
                panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_13486->$rawValue, $tmp488);
                if ($tmp489.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp491 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_13486->$data + 0));
                    position490 = *$tmp491;
                    panda$core$String** $tmp493 = ((panda$core$String**) ((char*) $match$165_13486->$data + 16));
                    text492 = *$tmp493;
                    {
                        $tmp494 = doccomment480;
                        $tmp495 = text492;
                        doccomment480 = $tmp495;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp496, false);
                    if ($tmp496.value) goto $l497; else goto $l498;
                    $l498:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s499, (panda$core$Int64) { 169 });
                    abort();
                    $l497:;
                }
                }
            }
            $tmp485 = -1;
            goto $l483;
            $l483:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
            switch ($tmp485) {
                case -1: goto $l500;
            }
            $l500:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp504 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp503 = $tmp504;
        $tmp502 = $tmp503;
        annotations501 = $tmp502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        memset(&fieldKind505, 0, sizeof(fieldKind505));
        int $tmp508;
        {
            $tmp510 = p_varDecl;
            $match$174_9509 = $tmp510;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
            panda$core$Int64$init$builtin_int64(&$tmp511, 47);
            panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$174_9509->$rawValue, $tmp511);
            if ($tmp512.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp514 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$174_9509->$data + 16));
                kind513 = *$tmp514;
                panda$collections$ImmutableArray** $tmp516 = ((panda$collections$ImmutableArray**) ((char*) $match$174_9509->$data + 24));
                decls515 = *$tmp516;
                {
                    $match$176_17517 = kind513;
                    panda$core$Int64$init$builtin_int64(&$tmp518, 0);
                    panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17517.$rawValue, $tmp518);
                    if ($tmp519.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp521, 0);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp520, $tmp521);
                        fieldKind505 = $tmp520;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp522, 1);
                    panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17517.$rawValue, $tmp522);
                    if ($tmp523.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp525, 1);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp524, $tmp525);
                        fieldKind505 = $tmp524;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp526, 2);
                    panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17517.$rawValue, $tmp526);
                    if ($tmp527.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp529, 2);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp528, $tmp529);
                        fieldKind505 = $tmp528;
                        $tmp530 = annotations501;
                        panda$core$Int64$init$builtin_int64(&$tmp531, 16);
                        panda$core$Int64 $tmp532 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp530->flags, $tmp531);
                        $tmp530->flags = $tmp532;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp533, 3);
                    panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_17517.$rawValue, $tmp533);
                    if ($tmp534.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp536, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp535, $tmp536);
                        fieldKind505 = $tmp535;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp539;
                    {
                        ITable* $tmp543 = ((panda$collections$Iterable*) decls515)->$class->itable;
                        while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp543 = $tmp543->next;
                        }
                        $fn545 $tmp544 = $tmp543->methods[0];
                        panda$collections$Iterator* $tmp546 = $tmp544(((panda$collections$Iterable*) decls515));
                        $tmp542 = $tmp546;
                        $tmp541 = $tmp542;
                        Iter$187$17540 = $tmp541;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                        $l547:;
                        ITable* $tmp550 = Iter$187$17540->$class->itable;
                        while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp550 = $tmp550->next;
                        }
                        $fn552 $tmp551 = $tmp550->methods[0];
                        panda$core$Bit $tmp553 = $tmp551(Iter$187$17540);
                        panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
                        bool $tmp549 = $tmp554.value;
                        if (!$tmp549) goto $l548;
                        {
                            int $tmp557;
                            {
                                ITable* $tmp561 = Iter$187$17540->$class->itable;
                                while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp561 = $tmp561->next;
                                }
                                $fn563 $tmp562 = $tmp561->methods[1];
                                panda$core$Object* $tmp564 = $tmp562(Iter$187$17540);
                                $tmp560 = $tmp564;
                                $tmp559 = ((org$pandalanguage$pandac$ASTNode*) $tmp560);
                                decl558 = $tmp559;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp559));
                                panda$core$Panda$unref$panda$core$Object($tmp560);
                                int $tmp567;
                                {
                                    $tmp569 = decl558;
                                    $match$188_21568 = $tmp569;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp569));
                                    panda$core$Int64$init$builtin_int64(&$tmp570, 13);
                                    panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_21568->$rawValue, $tmp570);
                                    if ($tmp571.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp573 = ((org$pandalanguage$pandac$Position*) ((char*) $match$188_21568->$data + 0));
                                        declPosition572 = *$tmp573;
                                        org$pandalanguage$pandac$ASTNode** $tmp575 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_21568->$data + 16));
                                        target574 = *$tmp575;
                                        org$pandalanguage$pandac$ASTNode** $tmp577 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_21568->$data + 24));
                                        rawValue576 = *$tmp577;
                                        int $tmp580;
                                        {
                                            memset(&name581, 0, sizeof(name581));
                                            memset(&type582, 0, sizeof(type582));
                                            int $tmp585;
                                            {
                                                $tmp587 = target574;
                                                $match$192_29586 = $tmp587;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp587));
                                                panda$core$Int64$init$builtin_int64(&$tmp588, 20);
                                                panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_29586->$rawValue, $tmp588);
                                                if ($tmp589.value) {
                                                {
                                                    panda$core$String** $tmp591 = ((panda$core$String**) ((char*) $match$192_29586->$data + 16));
                                                    id590 = *$tmp591;
                                                    {
                                                        $tmp592 = name581;
                                                        $tmp593 = id590;
                                                        name581 = $tmp593;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                    }
                                                    {
                                                        $tmp594 = type582;
                                                        org$pandalanguage$pandac$Type* $tmp597 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp596 = $tmp597;
                                                        $tmp595 = $tmp596;
                                                        type582 = $tmp595;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp598, 44);
                                                panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_29586->$rawValue, $tmp598);
                                                if ($tmp599.value) {
                                                {
                                                    panda$core$String** $tmp601 = ((panda$core$String**) ((char*) $match$192_29586->$data + 16));
                                                    id600 = *$tmp601;
                                                    org$pandalanguage$pandac$ASTNode** $tmp603 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_29586->$data + 24));
                                                    idType602 = *$tmp603;
                                                    {
                                                        $tmp604 = name581;
                                                        $tmp605 = id600;
                                                        name581 = $tmp605;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                                                    }
                                                    {
                                                        $tmp606 = type582;
                                                        org$pandalanguage$pandac$Type* $tmp609 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType602);
                                                        $tmp608 = $tmp609;
                                                        $tmp607 = $tmp608;
                                                        type582 = $tmp607;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp610, false);
                                                    if ($tmp610.value) goto $l611; else goto $l612;
                                                    $l612:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s613, (panda$core$Int64) { 200 });
                                                    abort();
                                                    $l611:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp585 = -1;
                                            goto $l583;
                                            $l583:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                                            switch ($tmp585) {
                                                case -1: goto $l614;
                                            }
                                            $l614:;
                                            memset(&value615, 0, sizeof(value615));
                                            bool $tmp617 = ((panda$core$Bit) { rawValue576 == NULL }).value;
                                            if (!$tmp617) goto $l618;
                                            panda$core$Bit $tmp619 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(annotations501);
                                            $tmp617 = $tmp619.value;
                                            $l618:;
                                            panda$core$Bit $tmp620 = { $tmp617 };
                                            bool $tmp616 = $tmp620.value;
                                            if (!$tmp616) goto $l621;
                                            panda$core$Int64$init$builtin_int64(&$tmp622, 1);
                                            panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type582->typeKind.$rawValue, $tmp622);
                                            $tmp616 = $tmp623.value;
                                            $l621:;
                                            panda$core$Bit $tmp624 = { $tmp616 };
                                            if ($tmp624.value) {
                                            {
                                                {
                                                    $tmp625 = value615;
                                                    org$pandalanguage$pandac$ASTNode* $tmp628 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp629, 28);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp628, $tmp629, declPosition572);
                                                    $tmp627 = $tmp628;
                                                    $tmp626 = $tmp627;
                                                    value615 = $tmp626;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp630 = value615;
                                                    $tmp631 = rawValue576;
                                                    value615 = $tmp631;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$FieldDecl* $tmp635 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp635, p_owner, declPosition572, doccomment480, annotations501, fieldKind505, name581, type582, value615);
                                            $tmp634 = $tmp635;
                                            $tmp633 = $tmp634;
                                            field632 = $tmp633;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field632));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field632));
                                        }
                                        $tmp580 = -1;
                                        goto $l578;
                                        $l578:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field632));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value615));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type582));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name581));
                                        field632 = NULL;
                                        switch ($tmp580) {
                                            case -1: goto $l636;
                                        }
                                        $l636:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp637, false);
                                        if ($tmp637.value) goto $l638; else goto $l639;
                                        $l639:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s640, (panda$core$Int64) { 215 });
                                        abort();
                                        $l638:;
                                    }
                                    }
                                }
                                $tmp567 = -1;
                                goto $l565;
                                $l565:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                                switch ($tmp567) {
                                    case -1: goto $l641;
                                }
                                $l641:;
                            }
                            $tmp557 = -1;
                            goto $l555;
                            $l555:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl558));
                            decl558 = NULL;
                            switch ($tmp557) {
                                case -1: goto $l642;
                            }
                            $l642:;
                        }
                        goto $l547;
                        $l548:;
                    }
                    $tmp539 = -1;
                    goto $l537;
                    $l537:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$187$17540));
                    Iter$187$17540 = NULL;
                    switch ($tmp539) {
                        case -1: goto $l643;
                    }
                    $l643:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp644, false);
                if ($tmp644.value) goto $l645; else goto $l646;
                $l646:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s647, (panda$core$Int64) { 219 });
                abort();
                $l645:;
            }
            }
        }
        $tmp508 = -1;
        goto $l506;
        $l506:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
        switch ($tmp508) {
            case -1: goto $l648;
        }
        $l648:;
    }
    $tmp479 = -1;
    goto $l477;
    $l477:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment480));
    annotations501 = NULL;
    switch ($tmp479) {
        case -1: goto $l649;
    }
    $l649:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$225_9653 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp654;
    panda$core$Int64 $tmp655;
    org$pandalanguage$pandac$ASTNode* test657 = NULL;
    panda$core$Int64 $returnValue659;
    panda$core$Int64 $tmp663;
    panda$core$Int64 $tmp665;
    panda$core$Int64 $tmp668;
    panda$core$Int64 $tmp670;
    panda$core$Int64 $tmp673;
    org$pandalanguage$pandac$ASTNode* left675 = NULL;
    org$pandalanguage$pandac$ASTNode* right677 = NULL;
    panda$core$Int64 $tmp679;
    panda$core$Int64 $tmp686;
    panda$core$Int64 $tmp688;
    panda$core$Int64 $tmp691;
    panda$collections$ImmutableArray* statements693 = NULL;
    panda$core$Int64 result695;
    panda$core$Int64 $tmp696;
    panda$collections$Iterator* Iter$238$17700 = NULL;
    panda$collections$Iterator* $tmp701;
    panda$collections$Iterator* $tmp702;
    org$pandalanguage$pandac$ASTNode* s718 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp719;
    panda$core$Object* $tmp720;
    panda$core$Int64 $tmp731;
    panda$core$Int64 $tmp733;
    panda$core$Int64 $tmp736;
    org$pandalanguage$pandac$ASTNode* target738 = NULL;
    panda$collections$ImmutableArray* args740 = NULL;
    panda$core$Int64 result742;
    panda$collections$Iterator* Iter$246$17747 = NULL;
    panda$collections$Iterator* $tmp748;
    panda$collections$Iterator* $tmp749;
    org$pandalanguage$pandac$ASTNode* a765 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp766;
    panda$core$Object* $tmp767;
    panda$core$Int64 $tmp778;
    org$pandalanguage$pandac$ASTNode* base780 = NULL;
    panda$core$Int64 $tmp785;
    panda$core$Int64 $tmp787;
    panda$core$Int64 $tmp790;
    org$pandalanguage$pandac$ASTNode* value792 = NULL;
    panda$core$Int64 $tmp794;
    panda$core$Int64 $tmp800;
    panda$collections$ImmutableArray* statements802 = NULL;
    org$pandalanguage$pandac$ASTNode* test804 = NULL;
    panda$core$Int64 result806;
    panda$collections$Iterator* Iter$261$17811 = NULL;
    panda$collections$Iterator* $tmp812;
    panda$collections$Iterator* $tmp813;
    org$pandalanguage$pandac$ASTNode* s829 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp830;
    panda$core$Object* $tmp831;
    panda$core$Int64 $tmp842;
    org$pandalanguage$pandac$ASTNode* base844 = NULL;
    panda$core$Int64 $tmp849;
    org$pandalanguage$pandac$ASTNode* list851 = NULL;
    panda$collections$ImmutableArray* statements853 = NULL;
    panda$core$Int64 result855;
    panda$collections$Iterator* Iter$269$17860 = NULL;
    panda$collections$Iterator* $tmp861;
    panda$collections$Iterator* $tmp862;
    org$pandalanguage$pandac$ASTNode* s878 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp879;
    panda$core$Object* $tmp880;
    panda$core$Int64 $tmp891;
    panda$core$Int64 $tmp893;
    panda$core$Int64 $tmp896;
    panda$core$Int64 $tmp898;
    panda$core$Int64 $tmp901;
    org$pandalanguage$pandac$ASTNode* test903 = NULL;
    panda$collections$ImmutableArray* ifTrue905 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse907 = NULL;
    panda$core$Int64 result909;
    panda$collections$Iterator* Iter$279$17914 = NULL;
    panda$collections$Iterator* $tmp915;
    panda$collections$Iterator* $tmp916;
    org$pandalanguage$pandac$ASTNode* s932 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp933;
    panda$core$Object* $tmp934;
    panda$core$Int64 $tmp947;
    panda$core$Int64 $tmp949;
    panda$core$Int64 $tmp952;
    panda$collections$ImmutableArray* statements954 = NULL;
    panda$core$Int64 result956;
    panda$core$Int64 $tmp957;
    panda$collections$Iterator* Iter$290$17961 = NULL;
    panda$collections$Iterator* $tmp962;
    panda$collections$Iterator* $tmp963;
    org$pandalanguage$pandac$ASTNode* s979 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp980;
    panda$core$Object* $tmp981;
    panda$core$Int64 $tmp992;
    org$pandalanguage$pandac$ASTNode* value994 = NULL;
    panda$collections$ImmutableArray* whens996 = NULL;
    panda$collections$ImmutableArray* other998 = NULL;
    panda$core$Int64 result1000;
    panda$collections$Iterator* Iter$296$171005 = NULL;
    panda$collections$Iterator* $tmp1006;
    panda$collections$Iterator* $tmp1007;
    org$pandalanguage$pandac$ASTNode* w1023 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1024;
    panda$core$Object* $tmp1025;
    panda$collections$Iterator* Iter$300$211037 = NULL;
    panda$collections$Iterator* $tmp1038;
    panda$collections$Iterator* $tmp1039;
    org$pandalanguage$pandac$ASTNode* s1055 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1056;
    panda$core$Object* $tmp1057;
    panda$core$Int64 $tmp1068;
    panda$core$Int64 $tmp1070;
    panda$core$Int64 $tmp1073;
    panda$core$Int64 $tmp1075;
    panda$core$Int64 $tmp1078;
    panda$core$Int64 $tmp1080;
    panda$core$Int64 $tmp1083;
    org$pandalanguage$pandac$ASTNode* base1085 = NULL;
    panda$core$Int64 $tmp1087;
    panda$core$Int64 $tmp1092;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1099;
    panda$core$Int64 $tmp1102;
    panda$core$Int64 $tmp1104;
    panda$core$Int64 $tmp1107;
    org$pandalanguage$pandac$ASTNode* value1109 = NULL;
    panda$core$Int64 $tmp1111;
    panda$core$Int64 $tmp1117;
    panda$core$Int64 $tmp1119;
    panda$core$Int64 $tmp1122;
    panda$core$Int64 $tmp1124;
    panda$core$Int64 $tmp1127;
    panda$core$Int64 $tmp1129;
    panda$core$Int64 $tmp1132;
    panda$core$Int64 $tmp1134;
    panda$core$Int64 $tmp1137;
    panda$core$Int64 $tmp1139;
    panda$core$Int64 $tmp1142;
    panda$core$Int64 $tmp1144;
    panda$core$Int64 $tmp1147;
    panda$collections$ImmutableArray* decls1149 = NULL;
    panda$core$Int64 result1151;
    panda$core$Int64 $tmp1152;
    panda$collections$Iterator* Iter$338$171156 = NULL;
    panda$collections$Iterator* $tmp1157;
    panda$collections$Iterator* $tmp1158;
    org$pandalanguage$pandac$ASTNode* decl1174 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1175;
    panda$core$Object* $tmp1176;
    panda$core$Int64 $tmp1187;
    panda$collections$ImmutableArray* tests1189 = NULL;
    panda$collections$ImmutableArray* statements1191 = NULL;
    panda$core$Int64 result1193;
    panda$core$Int64 $tmp1194;
    panda$collections$Iterator* Iter$344$171198 = NULL;
    panda$collections$Iterator* $tmp1199;
    panda$collections$Iterator* $tmp1200;
    org$pandalanguage$pandac$ASTNode* test1216 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1217;
    panda$core$Object* $tmp1218;
    panda$collections$Iterator* Iter$347$171230 = NULL;
    panda$collections$Iterator* $tmp1231;
    panda$collections$Iterator* $tmp1232;
    org$pandalanguage$pandac$ASTNode* s1248 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1249;
    panda$core$Object* $tmp1250;
    panda$core$Int64 $tmp1261;
    org$pandalanguage$pandac$ASTNode* test1263 = NULL;
    panda$collections$ImmutableArray* statements1265 = NULL;
    panda$core$Int64 result1267;
    panda$collections$Iterator* Iter$353$171272 = NULL;
    panda$collections$Iterator* $tmp1273;
    panda$collections$Iterator* $tmp1274;
    org$pandalanguage$pandac$ASTNode* s1290 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1291;
    panda$core$Object* $tmp1292;
    panda$core$Bit $tmp1303;
    panda$core$String* $tmp1307;
    panda$core$String* $tmp1308;
    int $tmp652;
    {
        $tmp654 = p_node;
        $match$225_9653 = $tmp654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
        panda$core$Int64$init$builtin_int64(&$tmp655, 1);
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp655);
        if ($tmp656.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp658 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            test657 = *$tmp658;
            panda$core$Int64 $tmp660 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test657);
            $returnValue659 = $tmp660;
            $tmp652 = 0;
            goto $l650;
            $l661:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp663, 2);
        panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp663);
        if ($tmp664.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp665, 0);
            $returnValue659 = $tmp665;
            $tmp652 = 1;
            goto $l650;
            $l666:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp668, 3);
        panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp668);
        if ($tmp669.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp670, 0);
            $returnValue659 = $tmp670;
            $tmp652 = 2;
            goto $l650;
            $l671:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp673, 4);
        panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp673);
        if ($tmp674.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            left675 = *$tmp676;
            org$pandalanguage$pandac$ASTNode** $tmp678 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 32));
            right677 = *$tmp678;
            panda$core$Int64$init$builtin_int64(&$tmp679, 1);
            panda$core$Int64 $tmp680 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left675);
            panda$core$Int64 $tmp681 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp679, $tmp680);
            panda$core$Int64 $tmp682 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right677);
            panda$core$Int64 $tmp683 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp681, $tmp682);
            $returnValue659 = $tmp683;
            $tmp652 = 3;
            goto $l650;
            $l684:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp686, 5);
        panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp686);
        if ($tmp687.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp688, 1);
            $returnValue659 = $tmp688;
            $tmp652 = 4;
            goto $l650;
            $l689:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp691, 6);
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp691);
        if ($tmp692.value) {
        {
            panda$collections$ImmutableArray** $tmp694 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 16));
            statements693 = *$tmp694;
            panda$core$Int64$init$builtin_int64(&$tmp696, 0);
            result695 = $tmp696;
            {
                int $tmp699;
                {
                    ITable* $tmp703 = ((panda$collections$Iterable*) statements693)->$class->itable;
                    while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp703 = $tmp703->next;
                    }
                    $fn705 $tmp704 = $tmp703->methods[0];
                    panda$collections$Iterator* $tmp706 = $tmp704(((panda$collections$Iterable*) statements693));
                    $tmp702 = $tmp706;
                    $tmp701 = $tmp702;
                    Iter$238$17700 = $tmp701;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                    $l707:;
                    ITable* $tmp710 = Iter$238$17700->$class->itable;
                    while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp710 = $tmp710->next;
                    }
                    $fn712 $tmp711 = $tmp710->methods[0];
                    panda$core$Bit $tmp713 = $tmp711(Iter$238$17700);
                    panda$core$Bit $tmp714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp713);
                    bool $tmp709 = $tmp714.value;
                    if (!$tmp709) goto $l708;
                    {
                        int $tmp717;
                        {
                            ITable* $tmp721 = Iter$238$17700->$class->itable;
                            while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp721 = $tmp721->next;
                            }
                            $fn723 $tmp722 = $tmp721->methods[1];
                            panda$core$Object* $tmp724 = $tmp722(Iter$238$17700);
                            $tmp720 = $tmp724;
                            $tmp719 = ((org$pandalanguage$pandac$ASTNode*) $tmp720);
                            s718 = $tmp719;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
                            panda$core$Panda$unref$panda$core$Object($tmp720);
                            panda$core$Int64 $tmp725 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s718);
                            panda$core$Int64 $tmp726 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result695, $tmp725);
                            result695 = $tmp726;
                        }
                        $tmp717 = -1;
                        goto $l715;
                        $l715:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s718));
                        s718 = NULL;
                        switch ($tmp717) {
                            case -1: goto $l727;
                        }
                        $l727:;
                    }
                    goto $l707;
                    $l708:;
                }
                $tmp699 = -1;
                goto $l697;
                $l697:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$238$17700));
                Iter$238$17700 = NULL;
                switch ($tmp699) {
                    case -1: goto $l728;
                }
                $l728:;
            }
            $returnValue659 = result695;
            $tmp652 = 5;
            goto $l650;
            $l729:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp731, 7);
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp731);
        if ($tmp732.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp733, 1);
            $returnValue659 = $tmp733;
            $tmp652 = 6;
            goto $l650;
            $l734:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp736, 8);
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp736);
        if ($tmp737.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp739 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            target738 = *$tmp739;
            panda$collections$ImmutableArray** $tmp741 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            args740 = *$tmp741;
            panda$core$Int64 $tmp743 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target738);
            result742 = $tmp743;
            {
                int $tmp746;
                {
                    ITable* $tmp750 = ((panda$collections$Iterable*) args740)->$class->itable;
                    while ($tmp750->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp750 = $tmp750->next;
                    }
                    $fn752 $tmp751 = $tmp750->methods[0];
                    panda$collections$Iterator* $tmp753 = $tmp751(((panda$collections$Iterable*) args740));
                    $tmp749 = $tmp753;
                    $tmp748 = $tmp749;
                    Iter$246$17747 = $tmp748;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                    $l754:;
                    ITable* $tmp757 = Iter$246$17747->$class->itable;
                    while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp757 = $tmp757->next;
                    }
                    $fn759 $tmp758 = $tmp757->methods[0];
                    panda$core$Bit $tmp760 = $tmp758(Iter$246$17747);
                    panda$core$Bit $tmp761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp760);
                    bool $tmp756 = $tmp761.value;
                    if (!$tmp756) goto $l755;
                    {
                        int $tmp764;
                        {
                            ITable* $tmp768 = Iter$246$17747->$class->itable;
                            while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp768 = $tmp768->next;
                            }
                            $fn770 $tmp769 = $tmp768->methods[1];
                            panda$core$Object* $tmp771 = $tmp769(Iter$246$17747);
                            $tmp767 = $tmp771;
                            $tmp766 = ((org$pandalanguage$pandac$ASTNode*) $tmp767);
                            a765 = $tmp766;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
                            panda$core$Panda$unref$panda$core$Object($tmp767);
                            panda$core$Int64 $tmp772 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a765);
                            panda$core$Int64 $tmp773 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result742, $tmp772);
                            result742 = $tmp773;
                        }
                        $tmp764 = -1;
                        goto $l762;
                        $l762:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a765));
                        a765 = NULL;
                        switch ($tmp764) {
                            case -1: goto $l774;
                        }
                        $l774:;
                    }
                    goto $l754;
                    $l755:;
                }
                $tmp746 = -1;
                goto $l744;
                $l744:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$246$17747));
                Iter$246$17747 = NULL;
                switch ($tmp746) {
                    case -1: goto $l775;
                }
                $l775:;
            }
            $returnValue659 = result742;
            $tmp652 = 7;
            goto $l650;
            $l776:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp778, 10);
        panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp778);
        if ($tmp779.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp781 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            base780 = *$tmp781;
            panda$core$Int64 $tmp782 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base780);
            $returnValue659 = $tmp782;
            $tmp652 = 8;
            goto $l650;
            $l783:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp785, 12);
        panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp785);
        if ($tmp786.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp787, 1);
            $returnValue659 = $tmp787;
            $tmp652 = 9;
            goto $l650;
            $l788:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp790, 13);
        panda$core$Bit $tmp791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp790);
        if ($tmp791.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp793 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 24));
            value792 = *$tmp793;
            if (((panda$core$Bit) { value792 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp794, 0);
                $returnValue659 = $tmp794;
                $tmp652 = 10;
                goto $l650;
                $l795:;
                return $returnValue659;
            }
            }
            panda$core$Int64 $tmp797 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value792);
            $returnValue659 = $tmp797;
            $tmp652 = 11;
            goto $l650;
            $l798:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp800, 14);
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp800);
        if ($tmp801.value) {
        {
            panda$collections$ImmutableArray** $tmp803 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            statements802 = *$tmp803;
            org$pandalanguage$pandac$ASTNode** $tmp805 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 32));
            test804 = *$tmp805;
            panda$core$Int64 $tmp807 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test804);
            result806 = $tmp807;
            {
                int $tmp810;
                {
                    ITable* $tmp814 = ((panda$collections$Iterable*) statements802)->$class->itable;
                    while ($tmp814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp814 = $tmp814->next;
                    }
                    $fn816 $tmp815 = $tmp814->methods[0];
                    panda$collections$Iterator* $tmp817 = $tmp815(((panda$collections$Iterable*) statements802));
                    $tmp813 = $tmp817;
                    $tmp812 = $tmp813;
                    Iter$261$17811 = $tmp812;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                    $l818:;
                    ITable* $tmp821 = Iter$261$17811->$class->itable;
                    while ($tmp821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp821 = $tmp821->next;
                    }
                    $fn823 $tmp822 = $tmp821->methods[0];
                    panda$core$Bit $tmp824 = $tmp822(Iter$261$17811);
                    panda$core$Bit $tmp825 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp824);
                    bool $tmp820 = $tmp825.value;
                    if (!$tmp820) goto $l819;
                    {
                        int $tmp828;
                        {
                            ITable* $tmp832 = Iter$261$17811->$class->itable;
                            while ($tmp832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp832 = $tmp832->next;
                            }
                            $fn834 $tmp833 = $tmp832->methods[1];
                            panda$core$Object* $tmp835 = $tmp833(Iter$261$17811);
                            $tmp831 = $tmp835;
                            $tmp830 = ((org$pandalanguage$pandac$ASTNode*) $tmp831);
                            s829 = $tmp830;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                            panda$core$Panda$unref$panda$core$Object($tmp831);
                            panda$core$Int64 $tmp836 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s829);
                            panda$core$Int64 $tmp837 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result806, $tmp836);
                            result806 = $tmp837;
                        }
                        $tmp828 = -1;
                        goto $l826;
                        $l826:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s829));
                        s829 = NULL;
                        switch ($tmp828) {
                            case -1: goto $l838;
                        }
                        $l838:;
                    }
                    goto $l818;
                    $l819:;
                }
                $tmp810 = -1;
                goto $l808;
                $l808:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$261$17811));
                Iter$261$17811 = NULL;
                switch ($tmp810) {
                    case -1: goto $l839;
                }
                $l839:;
            }
            $returnValue659 = result806;
            $tmp652 = 12;
            goto $l650;
            $l840:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp842, 15);
        panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp842);
        if ($tmp843.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp845 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            base844 = *$tmp845;
            panda$core$Int64 $tmp846 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base844);
            $returnValue659 = $tmp846;
            $tmp652 = 13;
            goto $l650;
            $l847:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp849, 18);
        panda$core$Bit $tmp850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp849);
        if ($tmp850.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp852 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 32));
            list851 = *$tmp852;
            panda$collections$ImmutableArray** $tmp854 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 40));
            statements853 = *$tmp854;
            panda$core$Int64 $tmp856 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list851);
            result855 = $tmp856;
            {
                int $tmp859;
                {
                    ITable* $tmp863 = ((panda$collections$Iterable*) statements853)->$class->itable;
                    while ($tmp863->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp863 = $tmp863->next;
                    }
                    $fn865 $tmp864 = $tmp863->methods[0];
                    panda$collections$Iterator* $tmp866 = $tmp864(((panda$collections$Iterable*) statements853));
                    $tmp862 = $tmp866;
                    $tmp861 = $tmp862;
                    Iter$269$17860 = $tmp861;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp861));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                    $l867:;
                    ITable* $tmp870 = Iter$269$17860->$class->itable;
                    while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp870 = $tmp870->next;
                    }
                    $fn872 $tmp871 = $tmp870->methods[0];
                    panda$core$Bit $tmp873 = $tmp871(Iter$269$17860);
                    panda$core$Bit $tmp874 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp873);
                    bool $tmp869 = $tmp874.value;
                    if (!$tmp869) goto $l868;
                    {
                        int $tmp877;
                        {
                            ITable* $tmp881 = Iter$269$17860->$class->itable;
                            while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp881 = $tmp881->next;
                            }
                            $fn883 $tmp882 = $tmp881->methods[1];
                            panda$core$Object* $tmp884 = $tmp882(Iter$269$17860);
                            $tmp880 = $tmp884;
                            $tmp879 = ((org$pandalanguage$pandac$ASTNode*) $tmp880);
                            s878 = $tmp879;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
                            panda$core$Panda$unref$panda$core$Object($tmp880);
                            panda$core$Int64 $tmp885 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s878);
                            panda$core$Int64 $tmp886 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result855, $tmp885);
                            result855 = $tmp886;
                        }
                        $tmp877 = -1;
                        goto $l875;
                        $l875:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s878));
                        s878 = NULL;
                        switch ($tmp877) {
                            case -1: goto $l887;
                        }
                        $l887:;
                    }
                    goto $l867;
                    $l868:;
                }
                $tmp859 = -1;
                goto $l857;
                $l857:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$269$17860));
                Iter$269$17860 = NULL;
                switch ($tmp859) {
                    case -1: goto $l888;
                }
                $l888:;
            }
            $returnValue659 = result855;
            $tmp652 = 14;
            goto $l650;
            $l889:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp891, 19);
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp891);
        if ($tmp892.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp893, 0);
            $returnValue659 = $tmp893;
            $tmp652 = 15;
            goto $l650;
            $l894:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp896, 20);
        panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp896);
        if ($tmp897.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp898, 1);
            $returnValue659 = $tmp898;
            $tmp652 = 16;
            goto $l650;
            $l899:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp901, 21);
        panda$core$Bit $tmp902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp901);
        if ($tmp902.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp904 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            test903 = *$tmp904;
            panda$collections$ImmutableArray** $tmp906 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            ifTrue905 = *$tmp906;
            org$pandalanguage$pandac$ASTNode** $tmp908 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 32));
            ifFalse907 = *$tmp908;
            panda$core$Int64 $tmp910 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test903);
            result909 = $tmp910;
            {
                int $tmp913;
                {
                    ITable* $tmp917 = ((panda$collections$Iterable*) ifTrue905)->$class->itable;
                    while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp917 = $tmp917->next;
                    }
                    $fn919 $tmp918 = $tmp917->methods[0];
                    panda$collections$Iterator* $tmp920 = $tmp918(((panda$collections$Iterable*) ifTrue905));
                    $tmp916 = $tmp920;
                    $tmp915 = $tmp916;
                    Iter$279$17914 = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                    $l921:;
                    ITable* $tmp924 = Iter$279$17914->$class->itable;
                    while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp924 = $tmp924->next;
                    }
                    $fn926 $tmp925 = $tmp924->methods[0];
                    panda$core$Bit $tmp927 = $tmp925(Iter$279$17914);
                    panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
                    bool $tmp923 = $tmp928.value;
                    if (!$tmp923) goto $l922;
                    {
                        int $tmp931;
                        {
                            ITable* $tmp935 = Iter$279$17914->$class->itable;
                            while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp935 = $tmp935->next;
                            }
                            $fn937 $tmp936 = $tmp935->methods[1];
                            panda$core$Object* $tmp938 = $tmp936(Iter$279$17914);
                            $tmp934 = $tmp938;
                            $tmp933 = ((org$pandalanguage$pandac$ASTNode*) $tmp934);
                            s932 = $tmp933;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                            panda$core$Panda$unref$panda$core$Object($tmp934);
                            panda$core$Int64 $tmp939 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s932);
                            panda$core$Int64 $tmp940 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result909, $tmp939);
                            result909 = $tmp940;
                        }
                        $tmp931 = -1;
                        goto $l929;
                        $l929:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s932));
                        s932 = NULL;
                        switch ($tmp931) {
                            case -1: goto $l941;
                        }
                        $l941:;
                    }
                    goto $l921;
                    $l922:;
                }
                $tmp913 = -1;
                goto $l911;
                $l911:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$279$17914));
                Iter$279$17914 = NULL;
                switch ($tmp913) {
                    case -1: goto $l942;
                }
                $l942:;
            }
            if (((panda$core$Bit) { ifFalse907 != NULL }).value) {
            {
                panda$core$Int64 $tmp943 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse907);
                panda$core$Int64 $tmp944 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result909, $tmp943);
                result909 = $tmp944;
            }
            }
            $returnValue659 = result909;
            $tmp652 = 17;
            goto $l650;
            $l945:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp947, 22);
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp947);
        if ($tmp948.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp949, 1);
            $returnValue659 = $tmp949;
            $tmp652 = 18;
            goto $l650;
            $l950:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp952, 24);
        panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp952);
        if ($tmp953.value) {
        {
            panda$collections$ImmutableArray** $tmp955 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            statements954 = *$tmp955;
            panda$core$Int64$init$builtin_int64(&$tmp957, 0);
            result956 = $tmp957;
            {
                int $tmp960;
                {
                    ITable* $tmp964 = ((panda$collections$Iterable*) statements954)->$class->itable;
                    while ($tmp964->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp964 = $tmp964->next;
                    }
                    $fn966 $tmp965 = $tmp964->methods[0];
                    panda$collections$Iterator* $tmp967 = $tmp965(((panda$collections$Iterable*) statements954));
                    $tmp963 = $tmp967;
                    $tmp962 = $tmp963;
                    Iter$290$17961 = $tmp962;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp962));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp963));
                    $l968:;
                    ITable* $tmp971 = Iter$290$17961->$class->itable;
                    while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp971 = $tmp971->next;
                    }
                    $fn973 $tmp972 = $tmp971->methods[0];
                    panda$core$Bit $tmp974 = $tmp972(Iter$290$17961);
                    panda$core$Bit $tmp975 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp974);
                    bool $tmp970 = $tmp975.value;
                    if (!$tmp970) goto $l969;
                    {
                        int $tmp978;
                        {
                            ITable* $tmp982 = Iter$290$17961->$class->itable;
                            while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp982 = $tmp982->next;
                            }
                            $fn984 $tmp983 = $tmp982->methods[1];
                            panda$core$Object* $tmp985 = $tmp983(Iter$290$17961);
                            $tmp981 = $tmp985;
                            $tmp980 = ((org$pandalanguage$pandac$ASTNode*) $tmp981);
                            s979 = $tmp980;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp980));
                            panda$core$Panda$unref$panda$core$Object($tmp981);
                            panda$core$Int64 $tmp986 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s979);
                            panda$core$Int64 $tmp987 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result956, $tmp986);
                            result956 = $tmp987;
                        }
                        $tmp978 = -1;
                        goto $l976;
                        $l976:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s979));
                        s979 = NULL;
                        switch ($tmp978) {
                            case -1: goto $l988;
                        }
                        $l988:;
                    }
                    goto $l968;
                    $l969:;
                }
                $tmp960 = -1;
                goto $l958;
                $l958:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$290$17961));
                Iter$290$17961 = NULL;
                switch ($tmp960) {
                    case -1: goto $l989;
                }
                $l989:;
            }
            $returnValue659 = result956;
            $tmp652 = 19;
            goto $l650;
            $l990:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp992, 25);
        panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp992);
        if ($tmp993.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp995 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            value994 = *$tmp995;
            panda$collections$ImmutableArray** $tmp997 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            whens996 = *$tmp997;
            panda$collections$ImmutableArray** $tmp999 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 32));
            other998 = *$tmp999;
            panda$core$Int64 $tmp1001 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value994);
            result1000 = $tmp1001;
            {
                int $tmp1004;
                {
                    ITable* $tmp1008 = ((panda$collections$Iterable*) whens996)->$class->itable;
                    while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1008 = $tmp1008->next;
                    }
                    $fn1010 $tmp1009 = $tmp1008->methods[0];
                    panda$collections$Iterator* $tmp1011 = $tmp1009(((panda$collections$Iterable*) whens996));
                    $tmp1007 = $tmp1011;
                    $tmp1006 = $tmp1007;
                    Iter$296$171005 = $tmp1006;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                    $l1012:;
                    ITable* $tmp1015 = Iter$296$171005->$class->itable;
                    while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1015 = $tmp1015->next;
                    }
                    $fn1017 $tmp1016 = $tmp1015->methods[0];
                    panda$core$Bit $tmp1018 = $tmp1016(Iter$296$171005);
                    panda$core$Bit $tmp1019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1018);
                    bool $tmp1014 = $tmp1019.value;
                    if (!$tmp1014) goto $l1013;
                    {
                        int $tmp1022;
                        {
                            ITable* $tmp1026 = Iter$296$171005->$class->itable;
                            while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1026 = $tmp1026->next;
                            }
                            $fn1028 $tmp1027 = $tmp1026->methods[1];
                            panda$core$Object* $tmp1029 = $tmp1027(Iter$296$171005);
                            $tmp1025 = $tmp1029;
                            $tmp1024 = ((org$pandalanguage$pandac$ASTNode*) $tmp1025);
                            w1023 = $tmp1024;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
                            panda$core$Panda$unref$panda$core$Object($tmp1025);
                            panda$core$Int64 $tmp1030 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w1023);
                            panda$core$Int64 $tmp1031 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1000, $tmp1030);
                            result1000 = $tmp1031;
                        }
                        $tmp1022 = -1;
                        goto $l1020;
                        $l1020:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1023));
                        w1023 = NULL;
                        switch ($tmp1022) {
                            case -1: goto $l1032;
                        }
                        $l1032:;
                    }
                    goto $l1012;
                    $l1013:;
                }
                $tmp1004 = -1;
                goto $l1002;
                $l1002:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$171005));
                Iter$296$171005 = NULL;
                switch ($tmp1004) {
                    case -1: goto $l1033;
                }
                $l1033:;
            }
            if (((panda$core$Bit) { other998 != NULL }).value) {
            {
                {
                    int $tmp1036;
                    {
                        ITable* $tmp1040 = ((panda$collections$Iterable*) other998)->$class->itable;
                        while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1040 = $tmp1040->next;
                        }
                        $fn1042 $tmp1041 = $tmp1040->methods[0];
                        panda$collections$Iterator* $tmp1043 = $tmp1041(((panda$collections$Iterable*) other998));
                        $tmp1039 = $tmp1043;
                        $tmp1038 = $tmp1039;
                        Iter$300$211037 = $tmp1038;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
                        $l1044:;
                        ITable* $tmp1047 = Iter$300$211037->$class->itable;
                        while ($tmp1047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1047 = $tmp1047->next;
                        }
                        $fn1049 $tmp1048 = $tmp1047->methods[0];
                        panda$core$Bit $tmp1050 = $tmp1048(Iter$300$211037);
                        panda$core$Bit $tmp1051 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1050);
                        bool $tmp1046 = $tmp1051.value;
                        if (!$tmp1046) goto $l1045;
                        {
                            int $tmp1054;
                            {
                                ITable* $tmp1058 = Iter$300$211037->$class->itable;
                                while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1058 = $tmp1058->next;
                                }
                                $fn1060 $tmp1059 = $tmp1058->methods[1];
                                panda$core$Object* $tmp1061 = $tmp1059(Iter$300$211037);
                                $tmp1057 = $tmp1061;
                                $tmp1056 = ((org$pandalanguage$pandac$ASTNode*) $tmp1057);
                                s1055 = $tmp1056;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
                                panda$core$Panda$unref$panda$core$Object($tmp1057);
                                panda$core$Int64 $tmp1062 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1055);
                                panda$core$Int64 $tmp1063 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1000, $tmp1062);
                                result1000 = $tmp1063;
                            }
                            $tmp1054 = -1;
                            goto $l1052;
                            $l1052:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1055));
                            s1055 = NULL;
                            switch ($tmp1054) {
                                case -1: goto $l1064;
                            }
                            $l1064:;
                        }
                        goto $l1044;
                        $l1045:;
                    }
                    $tmp1036 = -1;
                    goto $l1034;
                    $l1034:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$300$211037));
                    Iter$300$211037 = NULL;
                    switch ($tmp1036) {
                        case -1: goto $l1065;
                    }
                    $l1065:;
                }
            }
            }
            $returnValue659 = result1000;
            $tmp652 = 20;
            goto $l650;
            $l1066:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1068, 26);
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1068);
        if ($tmp1069.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1070, 0);
            $returnValue659 = $tmp1070;
            $tmp652 = 21;
            goto $l650;
            $l1071:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1073, 28);
        panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1073);
        if ($tmp1074.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1075, 1);
            $returnValue659 = $tmp1075;
            $tmp652 = 22;
            goto $l650;
            $l1076:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1078, 29);
        panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1078);
        if ($tmp1079.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1080, 0);
            $returnValue659 = $tmp1080;
            $tmp652 = 23;
            goto $l650;
            $l1081:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1083, 32);
        panda$core$Bit $tmp1084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1083);
        if ($tmp1084.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1086 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 24));
            base1085 = *$tmp1086;
            panda$core$Int64$init$builtin_int64(&$tmp1087, 1);
            panda$core$Int64 $tmp1088 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1085);
            panda$core$Int64 $tmp1089 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1087, $tmp1088);
            $returnValue659 = $tmp1089;
            $tmp652 = 24;
            goto $l650;
            $l1090:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1092, 33);
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1092);
        if ($tmp1093.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1094, 1);
            $returnValue659 = $tmp1094;
            $tmp652 = 25;
            goto $l650;
            $l1095:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1097, 34);
        panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1097);
        if ($tmp1098.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1099, 1);
            $returnValue659 = $tmp1099;
            $tmp652 = 26;
            goto $l650;
            $l1100:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1102, 35);
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1102);
        if ($tmp1103.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1104, 1);
            $returnValue659 = $tmp1104;
            $tmp652 = 27;
            goto $l650;
            $l1105:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1107, 36);
        panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1107);
        if ($tmp1108.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1110 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 16));
            value1109 = *$tmp1110;
            if (((panda$core$Bit) { value1109 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1111, 0);
                $returnValue659 = $tmp1111;
                $tmp652 = 28;
                goto $l650;
                $l1112:;
                return $returnValue659;
            }
            }
            panda$core$Int64 $tmp1114 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1109);
            $returnValue659 = $tmp1114;
            $tmp652 = 29;
            goto $l650;
            $l1115:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1117, 37);
        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1117);
        if ($tmp1118.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1119, 1);
            $returnValue659 = $tmp1119;
            $tmp652 = 30;
            goto $l650;
            $l1120:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1122, 38);
        panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1122);
        if ($tmp1123.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1124, 1);
            $returnValue659 = $tmp1124;
            $tmp652 = 31;
            goto $l650;
            $l1125:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1127, 39);
        panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1127);
        if ($tmp1128.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1129, 1);
            $returnValue659 = $tmp1129;
            $tmp652 = 32;
            goto $l650;
            $l1130:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1132, 42);
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1132);
        if ($tmp1133.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1134, 0);
            $returnValue659 = $tmp1134;
            $tmp652 = 33;
            goto $l650;
            $l1135:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1137, 43);
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1137);
        if ($tmp1138.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1139, 0);
            $returnValue659 = $tmp1139;
            $tmp652 = 34;
            goto $l650;
            $l1140:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1142, 45);
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1142);
        if ($tmp1143.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1144, 0);
            $returnValue659 = $tmp1144;
            $tmp652 = 35;
            goto $l650;
            $l1145:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1147, 47);
        panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1147);
        if ($tmp1148.value) {
        {
            panda$collections$ImmutableArray** $tmp1150 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            decls1149 = *$tmp1150;
            panda$core$Int64$init$builtin_int64(&$tmp1152, 0);
            result1151 = $tmp1152;
            {
                int $tmp1155;
                {
                    ITable* $tmp1159 = ((panda$collections$Iterable*) decls1149)->$class->itable;
                    while ($tmp1159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1159 = $tmp1159->next;
                    }
                    $fn1161 $tmp1160 = $tmp1159->methods[0];
                    panda$collections$Iterator* $tmp1162 = $tmp1160(((panda$collections$Iterable*) decls1149));
                    $tmp1158 = $tmp1162;
                    $tmp1157 = $tmp1158;
                    Iter$338$171156 = $tmp1157;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1157));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1158));
                    $l1163:;
                    ITable* $tmp1166 = Iter$338$171156->$class->itable;
                    while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1166 = $tmp1166->next;
                    }
                    $fn1168 $tmp1167 = $tmp1166->methods[0];
                    panda$core$Bit $tmp1169 = $tmp1167(Iter$338$171156);
                    panda$core$Bit $tmp1170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1169);
                    bool $tmp1165 = $tmp1170.value;
                    if (!$tmp1165) goto $l1164;
                    {
                        int $tmp1173;
                        {
                            ITable* $tmp1177 = Iter$338$171156->$class->itable;
                            while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1177 = $tmp1177->next;
                            }
                            $fn1179 $tmp1178 = $tmp1177->methods[1];
                            panda$core$Object* $tmp1180 = $tmp1178(Iter$338$171156);
                            $tmp1176 = $tmp1180;
                            $tmp1175 = ((org$pandalanguage$pandac$ASTNode*) $tmp1176);
                            decl1174 = $tmp1175;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
                            panda$core$Panda$unref$panda$core$Object($tmp1176);
                            panda$core$Int64 $tmp1181 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1174);
                            panda$core$Int64 $tmp1182 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1151, $tmp1181);
                            result1151 = $tmp1182;
                        }
                        $tmp1173 = -1;
                        goto $l1171;
                        $l1171:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1174));
                        decl1174 = NULL;
                        switch ($tmp1173) {
                            case -1: goto $l1183;
                        }
                        $l1183:;
                    }
                    goto $l1163;
                    $l1164:;
                }
                $tmp1155 = -1;
                goto $l1153;
                $l1153:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$171156));
                Iter$338$171156 = NULL;
                switch ($tmp1155) {
                    case -1: goto $l1184;
                }
                $l1184:;
            }
            $returnValue659 = result1151;
            $tmp652 = 36;
            goto $l650;
            $l1185:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1187, 48);
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1187);
        if ($tmp1188.value) {
        {
            panda$collections$ImmutableArray** $tmp1190 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 16));
            tests1189 = *$tmp1190;
            panda$collections$ImmutableArray** $tmp1192 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 24));
            statements1191 = *$tmp1192;
            panda$core$Int64$init$builtin_int64(&$tmp1194, 0);
            result1193 = $tmp1194;
            {
                int $tmp1197;
                {
                    ITable* $tmp1201 = ((panda$collections$Iterable*) tests1189)->$class->itable;
                    while ($tmp1201->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1201 = $tmp1201->next;
                    }
                    $fn1203 $tmp1202 = $tmp1201->methods[0];
                    panda$collections$Iterator* $tmp1204 = $tmp1202(((panda$collections$Iterable*) tests1189));
                    $tmp1200 = $tmp1204;
                    $tmp1199 = $tmp1200;
                    Iter$344$171198 = $tmp1199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
                    $l1205:;
                    ITable* $tmp1208 = Iter$344$171198->$class->itable;
                    while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1208 = $tmp1208->next;
                    }
                    $fn1210 $tmp1209 = $tmp1208->methods[0];
                    panda$core$Bit $tmp1211 = $tmp1209(Iter$344$171198);
                    panda$core$Bit $tmp1212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1211);
                    bool $tmp1207 = $tmp1212.value;
                    if (!$tmp1207) goto $l1206;
                    {
                        int $tmp1215;
                        {
                            ITable* $tmp1219 = Iter$344$171198->$class->itable;
                            while ($tmp1219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1219 = $tmp1219->next;
                            }
                            $fn1221 $tmp1220 = $tmp1219->methods[1];
                            panda$core$Object* $tmp1222 = $tmp1220(Iter$344$171198);
                            $tmp1218 = $tmp1222;
                            $tmp1217 = ((org$pandalanguage$pandac$ASTNode*) $tmp1218);
                            test1216 = $tmp1217;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                            panda$core$Panda$unref$panda$core$Object($tmp1218);
                            panda$core$Int64 $tmp1223 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1216);
                            panda$core$Int64 $tmp1224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1193, $tmp1223);
                            result1193 = $tmp1224;
                        }
                        $tmp1215 = -1;
                        goto $l1213;
                        $l1213:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1216));
                        test1216 = NULL;
                        switch ($tmp1215) {
                            case -1: goto $l1225;
                        }
                        $l1225:;
                    }
                    goto $l1205;
                    $l1206:;
                }
                $tmp1197 = -1;
                goto $l1195;
                $l1195:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$344$171198));
                Iter$344$171198 = NULL;
                switch ($tmp1197) {
                    case -1: goto $l1226;
                }
                $l1226:;
            }
            {
                int $tmp1229;
                {
                    ITable* $tmp1233 = ((panda$collections$Iterable*) statements1191)->$class->itable;
                    while ($tmp1233->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1233 = $tmp1233->next;
                    }
                    $fn1235 $tmp1234 = $tmp1233->methods[0];
                    panda$collections$Iterator* $tmp1236 = $tmp1234(((panda$collections$Iterable*) statements1191));
                    $tmp1232 = $tmp1236;
                    $tmp1231 = $tmp1232;
                    Iter$347$171230 = $tmp1231;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                    $l1237:;
                    ITable* $tmp1240 = Iter$347$171230->$class->itable;
                    while ($tmp1240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1240 = $tmp1240->next;
                    }
                    $fn1242 $tmp1241 = $tmp1240->methods[0];
                    panda$core$Bit $tmp1243 = $tmp1241(Iter$347$171230);
                    panda$core$Bit $tmp1244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1243);
                    bool $tmp1239 = $tmp1244.value;
                    if (!$tmp1239) goto $l1238;
                    {
                        int $tmp1247;
                        {
                            ITable* $tmp1251 = Iter$347$171230->$class->itable;
                            while ($tmp1251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1251 = $tmp1251->next;
                            }
                            $fn1253 $tmp1252 = $tmp1251->methods[1];
                            panda$core$Object* $tmp1254 = $tmp1252(Iter$347$171230);
                            $tmp1250 = $tmp1254;
                            $tmp1249 = ((org$pandalanguage$pandac$ASTNode*) $tmp1250);
                            s1248 = $tmp1249;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1249));
                            panda$core$Panda$unref$panda$core$Object($tmp1250);
                            panda$core$Int64 $tmp1255 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1248);
                            panda$core$Int64 $tmp1256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1193, $tmp1255);
                            result1193 = $tmp1256;
                        }
                        $tmp1247 = -1;
                        goto $l1245;
                        $l1245:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1248));
                        s1248 = NULL;
                        switch ($tmp1247) {
                            case -1: goto $l1257;
                        }
                        $l1257:;
                    }
                    goto $l1237;
                    $l1238:;
                }
                $tmp1229 = -1;
                goto $l1227;
                $l1227:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$347$171230));
                Iter$347$171230 = NULL;
                switch ($tmp1229) {
                    case -1: goto $l1258;
                }
                $l1258:;
            }
            $returnValue659 = result1193;
            $tmp652 = 37;
            goto $l650;
            $l1259:;
            return $returnValue659;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1261, 49);
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$225_9653->$rawValue, $tmp1261);
        if ($tmp1262.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1264 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$225_9653->$data + 24));
            test1263 = *$tmp1264;
            panda$collections$ImmutableArray** $tmp1266 = ((panda$collections$ImmutableArray**) ((char*) $match$225_9653->$data + 32));
            statements1265 = *$tmp1266;
            panda$core$Int64 $tmp1268 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1263);
            result1267 = $tmp1268;
            {
                int $tmp1271;
                {
                    ITable* $tmp1275 = ((panda$collections$Iterable*) statements1265)->$class->itable;
                    while ($tmp1275->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1275 = $tmp1275->next;
                    }
                    $fn1277 $tmp1276 = $tmp1275->methods[0];
                    panda$collections$Iterator* $tmp1278 = $tmp1276(((panda$collections$Iterable*) statements1265));
                    $tmp1274 = $tmp1278;
                    $tmp1273 = $tmp1274;
                    Iter$353$171272 = $tmp1273;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
                    $l1279:;
                    ITable* $tmp1282 = Iter$353$171272->$class->itable;
                    while ($tmp1282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1282 = $tmp1282->next;
                    }
                    $fn1284 $tmp1283 = $tmp1282->methods[0];
                    panda$core$Bit $tmp1285 = $tmp1283(Iter$353$171272);
                    panda$core$Bit $tmp1286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1285);
                    bool $tmp1281 = $tmp1286.value;
                    if (!$tmp1281) goto $l1280;
                    {
                        int $tmp1289;
                        {
                            ITable* $tmp1293 = Iter$353$171272->$class->itable;
                            while ($tmp1293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1293 = $tmp1293->next;
                            }
                            $fn1295 $tmp1294 = $tmp1293->methods[1];
                            panda$core$Object* $tmp1296 = $tmp1294(Iter$353$171272);
                            $tmp1292 = $tmp1296;
                            $tmp1291 = ((org$pandalanguage$pandac$ASTNode*) $tmp1292);
                            s1290 = $tmp1291;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1291));
                            panda$core$Panda$unref$panda$core$Object($tmp1292);
                            panda$core$Int64 $tmp1297 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1290);
                            panda$core$Int64 $tmp1298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1267, $tmp1297);
                            result1267 = $tmp1298;
                        }
                        $tmp1289 = -1;
                        goto $l1287;
                        $l1287:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1290));
                        s1290 = NULL;
                        switch ($tmp1289) {
                            case -1: goto $l1299;
                        }
                        $l1299:;
                    }
                    goto $l1279;
                    $l1280:;
                }
                $tmp1271 = -1;
                goto $l1269;
                $l1269:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$353$171272));
                Iter$353$171272 = NULL;
                switch ($tmp1271) {
                    case -1: goto $l1300;
                }
                $l1300:;
            }
            $returnValue659 = result1267;
            $tmp652 = 38;
            goto $l650;
            $l1301:;
            return $returnValue659;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1303, false);
            if ($tmp1303.value) goto $l1304; else goto $l1305;
            $l1305:;
            panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1309, ((panda$core$Object*) p_node));
            $tmp1308 = $tmp1310;
            panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1311);
            $tmp1307 = $tmp1312;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1306, (panda$core$Int64) { 358 }, $tmp1307);
            abort();
            $l1304:;
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
    $tmp652 = -1;
    goto $l650;
    $l650:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
    switch ($tmp652) {
        case 3: goto $l684;
        case 32: goto $l1130;
        case 23: goto $l1081;
        case 31: goto $l1125;
        case 22: goto $l1076;
        case 35: goto $l1145;
        case 10: goto $l795;
        case -1: goto $l1313;
        case 17: goto $l945;
        case 38: goto $l1301;
        case 37: goto $l1259;
        case 28: goto $l1112;
        case 18: goto $l950;
        case 12: goto $l840;
        case 0: goto $l661;
        case 30: goto $l1120;
        case 19: goto $l990;
        case 16: goto $l899;
        case 4: goto $l689;
        case 25: goto $l1095;
        case 24: goto $l1090;
        case 11: goto $l798;
        case 33: goto $l1135;
        case 2: goto $l671;
        case 7: goto $l776;
        case 8: goto $l783;
        case 1: goto $l666;
        case 29: goto $l1115;
        case 21: goto $l1071;
        case 36: goto $l1185;
        case 27: goto $l1105;
        case 26: goto $l1100;
        case 20: goto $l1066;
        case 34: goto $l1140;
        case 9: goto $l788;
        case 6: goto $l734;
        case 5: goto $l729;
        case 13: goto $l847;
        case 14: goto $l889;
        case 15: goto $l894;
    }
    $l1313:;
    if (false) goto $l1314; else goto $l1315;
    $l1315:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1316, (panda$core$Int64) { 223 }, &$s1317);
    abort();
    $l1314:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1320;
    panda$core$Int64 $tmp1322;
    panda$core$Int64 c1331;
    panda$core$Int64 $tmp1332;
    panda$collections$Iterator* Iter$366$131336 = NULL;
    panda$collections$Iterator* $tmp1337;
    panda$collections$Iterator* $tmp1338;
    org$pandalanguage$pandac$ASTNode* s1354 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1355;
    panda$core$Object* $tmp1356;
    panda$core$Int64 $tmp1363;
    panda$core$Bit $returnValue1365;
    panda$core$Bit $tmp1366;
    panda$core$Bit $tmp1372;
    panda$core$Bit $tmp1374;
    panda$core$Object* $tmp1321 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1320 = $tmp1321;
    panda$core$Int64$init$builtin_int64(&$tmp1322, 0);
    panda$core$Bit $tmp1323 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1320)->settings->optimizationLevel, $tmp1322);
    bool $tmp1319 = $tmp1323.value;
    panda$core$Panda$unref$panda$core$Object($tmp1320);
    if (!$tmp1319) goto $l1324;
    panda$core$Bit $tmp1325 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1325);
    $tmp1319 = $tmp1326.value;
    $l1324:;
    panda$core$Bit $tmp1327 = { $tmp1319 };
    bool $tmp1318 = $tmp1327.value;
    if (!$tmp1318) goto $l1328;
    panda$core$Bit $tmp1329 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1318 = $tmp1329.value;
    $l1328:;
    panda$core$Bit $tmp1330 = { $tmp1318 };
    if ($tmp1330.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1332, 0);
        c1331 = $tmp1332;
        {
            int $tmp1335;
            {
                ITable* $tmp1339 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1339->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1339 = $tmp1339->next;
                }
                $fn1341 $tmp1340 = $tmp1339->methods[0];
                panda$collections$Iterator* $tmp1342 = $tmp1340(((panda$collections$Iterable*) p_statements));
                $tmp1338 = $tmp1342;
                $tmp1337 = $tmp1338;
                Iter$366$131336 = $tmp1337;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
                $l1343:;
                ITable* $tmp1346 = Iter$366$131336->$class->itable;
                while ($tmp1346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1346 = $tmp1346->next;
                }
                $fn1348 $tmp1347 = $tmp1346->methods[0];
                panda$core$Bit $tmp1349 = $tmp1347(Iter$366$131336);
                panda$core$Bit $tmp1350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1349);
                bool $tmp1345 = $tmp1350.value;
                if (!$tmp1345) goto $l1344;
                {
                    int $tmp1353;
                    {
                        ITable* $tmp1357 = Iter$366$131336->$class->itable;
                        while ($tmp1357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1357 = $tmp1357->next;
                        }
                        $fn1359 $tmp1358 = $tmp1357->methods[1];
                        panda$core$Object* $tmp1360 = $tmp1358(Iter$366$131336);
                        $tmp1356 = $tmp1360;
                        $tmp1355 = ((org$pandalanguage$pandac$ASTNode*) $tmp1356);
                        s1354 = $tmp1355;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
                        panda$core$Panda$unref$panda$core$Object($tmp1356);
                        panda$core$Int64 $tmp1361 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1354);
                        panda$core$Int64 $tmp1362 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1331, $tmp1361);
                        c1331 = $tmp1362;
                        panda$core$Int64$init$builtin_int64(&$tmp1363, 0);
                        panda$core$Bit $tmp1364 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1331, $tmp1363);
                        if ($tmp1364.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1366, false);
                            $returnValue1365 = $tmp1366;
                            $tmp1353 = 0;
                            goto $l1351;
                            $l1367:;
                            $tmp1335 = 0;
                            goto $l1333;
                            $l1368:;
                            return $returnValue1365;
                        }
                        }
                    }
                    $tmp1353 = -1;
                    goto $l1351;
                    $l1351:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1354));
                    s1354 = NULL;
                    switch ($tmp1353) {
                        case -1: goto $l1370;
                        case 0: goto $l1367;
                    }
                    $l1370:;
                }
                goto $l1343;
                $l1344:;
            }
            $tmp1335 = -1;
            goto $l1333;
            $l1333:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$366$131336));
            Iter$366$131336 = NULL;
            switch ($tmp1335) {
                case 0: goto $l1368;
                case -1: goto $l1371;
            }
            $l1371:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1372, true);
        $returnValue1365 = $tmp1372;
        return $returnValue1365;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1374, false);
    $returnValue1365 = $tmp1374;
    return $returnValue1365;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1379 = NULL;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $match$387_131385 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1386;
    panda$core$Int64 $tmp1387;
    org$pandalanguage$pandac$Position position1389;
    panda$core$String* text1391 = NULL;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1394;
    panda$core$Bit $tmp1395;
    org$pandalanguage$pandac$Annotations* annotations1400 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1401;
    org$pandalanguage$pandac$Annotations* $tmp1402;
    panda$core$Int64 $tmp1406;
    org$pandalanguage$pandac$Annotations* $tmp1414;
    panda$core$Int64 $tmp1415;
    panda$collections$Array* generics1417 = NULL;
    panda$collections$Array* $tmp1421;
    panda$collections$Array* $tmp1422;
    panda$collections$Array* $tmp1423;
    panda$core$String* fullName1425 = NULL;
    panda$core$String* $tmp1426;
    panda$core$String* $tmp1427;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$collections$Iterator* Iter$402$131440 = NULL;
    panda$collections$Iterator* $tmp1441;
    panda$collections$Iterator* $tmp1442;
    org$pandalanguage$pandac$ASTNode* p1458 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    panda$core$Object* $tmp1460;
    panda$core$String* parameterName1465 = NULL;
    org$pandalanguage$pandac$Type* bound1466 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$405_171470 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1471;
    panda$core$Int64 $tmp1472;
    panda$core$String* id1474 = NULL;
    panda$core$String* $tmp1476;
    panda$core$String* $tmp1477;
    org$pandalanguage$pandac$Type* $tmp1478;
    org$pandalanguage$pandac$Type* $tmp1479;
    org$pandalanguage$pandac$Type* $tmp1480;
    panda$core$Int64 $tmp1482;
    panda$core$String* id1484 = NULL;
    org$pandalanguage$pandac$ASTNode* type1486 = NULL;
    panda$core$String* $tmp1488;
    panda$core$String* $tmp1489;
    org$pandalanguage$pandac$Type* $tmp1490;
    org$pandalanguage$pandac$Type* $tmp1491;
    org$pandalanguage$pandac$Type* $tmp1492;
    panda$core$Bit $tmp1494;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1499;
    panda$collections$Array* $tmp1506;
    panda$collections$Array* $tmp1507;
    panda$collections$Array* parameters1508 = NULL;
    panda$collections$Array* $tmp1509;
    panda$collections$Array* $tmp1510;
    panda$collections$Iterator* Iter$423$91515 = NULL;
    panda$collections$Iterator* $tmp1516;
    panda$collections$Iterator* $tmp1517;
    org$pandalanguage$pandac$ASTNode* p1533 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1534;
    panda$core$Object* $tmp1535;
    org$pandalanguage$pandac$ASTNode* $match$424_131543 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1544;
    panda$core$Int64 $tmp1545;
    panda$core$String* name1547 = NULL;
    org$pandalanguage$pandac$ASTNode* type1549 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1551;
    org$pandalanguage$pandac$Type* $tmp1553;
    panda$core$Bit $tmp1555;
    org$pandalanguage$pandac$Type* returnType1562 = NULL;
    org$pandalanguage$pandac$Type* $tmp1563;
    org$pandalanguage$pandac$Type* $tmp1564;
    org$pandalanguage$pandac$Type* $tmp1565;
    org$pandalanguage$pandac$Type* $tmp1567;
    org$pandalanguage$pandac$Type* $tmp1568;
    org$pandalanguage$pandac$Type* $tmp1569;
    panda$core$Int64 $tmp1572;
    org$pandalanguage$pandac$Type* $tmp1575;
    org$pandalanguage$pandac$Annotations* $tmp1584;
    panda$core$Int64 $tmp1585;
    panda$core$Int64 $tmp1589;
    panda$core$Int64 $tmp1592;
    panda$core$Int64 $tmp1594;
    org$pandalanguage$pandac$Annotations* $tmp1597;
    panda$core$Int64 $tmp1598;
    org$pandalanguage$pandac$MethodDecl* $returnValue1600;
    org$pandalanguage$pandac$MethodDecl* $tmp1601;
    org$pandalanguage$pandac$MethodDecl* $tmp1602;
    int $tmp1378;
    {
        memset(&doccomment1379, 0, sizeof(doccomment1379));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1380 = doccomment1379;
                $tmp1381 = NULL;
                doccomment1379 = $tmp1381;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
            }
        }
        }
        else {
        {
            int $tmp1384;
            {
                $tmp1386 = p_rawDoccomment;
                $match$387_131385 = $tmp1386;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
                panda$core$Int64$init$builtin_int64(&$tmp1387, 38);
                panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$387_131385->$rawValue, $tmp1387);
                if ($tmp1388.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1390 = ((org$pandalanguage$pandac$Position*) ((char*) $match$387_131385->$data + 0));
                    position1389 = *$tmp1390;
                    panda$core$String** $tmp1392 = ((panda$core$String**) ((char*) $match$387_131385->$data + 16));
                    text1391 = *$tmp1392;
                    {
                        $tmp1393 = doccomment1379;
                        $tmp1394 = text1391;
                        doccomment1379 = $tmp1394;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1395, false);
                    if ($tmp1395.value) goto $l1396; else goto $l1397;
                    $l1397:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1398, (panda$core$Int64) { 391 });
                    abort();
                    $l1396:;
                }
                }
            }
            $tmp1384 = -1;
            goto $l1382;
            $l1382:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
            switch ($tmp1384) {
                case -1: goto $l1399;
            }
            $l1399:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1403 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1402 = $tmp1403;
        $tmp1401 = $tmp1402;
        annotations1400 = $tmp1401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
        panda$core$Int64$init$builtin_int64(&$tmp1406, 2);
        panda$core$Bit $tmp1407 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1406);
        bool $tmp1405 = $tmp1407.value;
        if (!$tmp1405) goto $l1408;
        panda$core$Bit $tmp1409 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1405 = $tmp1409.value;
        $l1408:;
        panda$core$Bit $tmp1410 = { $tmp1405 };
        bool $tmp1404 = $tmp1410.value;
        if ($tmp1404) goto $l1411;
        panda$core$Bit $tmp1412 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1400);
        $tmp1404 = $tmp1412.value;
        $l1411:;
        panda$core$Bit $tmp1413 = { $tmp1404 };
        if ($tmp1413.value) {
        {
            $tmp1414 = annotations1400;
            panda$core$Int64$init$builtin_int64(&$tmp1415, 256);
            panda$core$Int64 $tmp1416 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1414->flags, $tmp1415);
            $tmp1414->flags = $tmp1416;
        }
        }
        memset(&generics1417, 0, sizeof(generics1417));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1420;
            {
                {
                    $tmp1421 = generics1417;
                    panda$collections$Array* $tmp1424 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1424);
                    $tmp1423 = $tmp1424;
                    $tmp1422 = $tmp1423;
                    generics1417 = $tmp1422;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                }
                panda$core$String* $tmp1431 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1430 = $tmp1431;
                panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1432);
                $tmp1429 = $tmp1433;
                panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, p_name);
                $tmp1428 = $tmp1434;
                panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1428, &$s1435);
                $tmp1427 = $tmp1436;
                $tmp1426 = $tmp1427;
                fullName1425 = $tmp1426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
                {
                    int $tmp1439;
                    {
                        ITable* $tmp1443 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1443 = $tmp1443->next;
                        }
                        $fn1445 $tmp1444 = $tmp1443->methods[0];
                        panda$collections$Iterator* $tmp1446 = $tmp1444(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1442 = $tmp1446;
                        $tmp1441 = $tmp1442;
                        Iter$402$131440 = $tmp1441;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                        $l1447:;
                        ITable* $tmp1450 = Iter$402$131440->$class->itable;
                        while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1450 = $tmp1450->next;
                        }
                        $fn1452 $tmp1451 = $tmp1450->methods[0];
                        panda$core$Bit $tmp1453 = $tmp1451(Iter$402$131440);
                        panda$core$Bit $tmp1454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1453);
                        bool $tmp1449 = $tmp1454.value;
                        if (!$tmp1449) goto $l1448;
                        {
                            int $tmp1457;
                            {
                                ITable* $tmp1461 = Iter$402$131440->$class->itable;
                                while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1461 = $tmp1461->next;
                                }
                                $fn1463 $tmp1462 = $tmp1461->methods[1];
                                panda$core$Object* $tmp1464 = $tmp1462(Iter$402$131440);
                                $tmp1460 = $tmp1464;
                                $tmp1459 = ((org$pandalanguage$pandac$ASTNode*) $tmp1460);
                                p1458 = $tmp1459;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                panda$core$Panda$unref$panda$core$Object($tmp1460);
                                memset(&parameterName1465, 0, sizeof(parameterName1465));
                                memset(&bound1466, 0, sizeof(bound1466));
                                int $tmp1469;
                                {
                                    $tmp1471 = p1458;
                                    $match$405_171470 = $tmp1471;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                                    panda$core$Int64$init$builtin_int64(&$tmp1472, 20);
                                    panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$405_171470->$rawValue, $tmp1472);
                                    if ($tmp1473.value) {
                                    {
                                        panda$core$String** $tmp1475 = ((panda$core$String**) ((char*) $match$405_171470->$data + 16));
                                        id1474 = *$tmp1475;
                                        {
                                            $tmp1476 = parameterName1465;
                                            $tmp1477 = id1474;
                                            parameterName1465 = $tmp1477;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                                        }
                                        {
                                            $tmp1478 = bound1466;
                                            org$pandalanguage$pandac$Type* $tmp1481 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1480 = $tmp1481;
                                            $tmp1479 = $tmp1480;
                                            bound1466 = $tmp1479;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1482, 44);
                                    panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$405_171470->$rawValue, $tmp1482);
                                    if ($tmp1483.value) {
                                    {
                                        panda$core$String** $tmp1485 = ((panda$core$String**) ((char*) $match$405_171470->$data + 16));
                                        id1484 = *$tmp1485;
                                        org$pandalanguage$pandac$ASTNode** $tmp1487 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$405_171470->$data + 24));
                                        type1486 = *$tmp1487;
                                        {
                                            $tmp1488 = parameterName1465;
                                            $tmp1489 = id1484;
                                            parameterName1465 = $tmp1489;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
                                        }
                                        {
                                            $tmp1490 = bound1466;
                                            org$pandalanguage$pandac$Type* $tmp1493 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1486);
                                            $tmp1492 = $tmp1493;
                                            $tmp1491 = $tmp1492;
                                            bound1466 = $tmp1491;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1494, false);
                                        if ($tmp1494.value) goto $l1495; else goto $l1496;
                                        $l1496:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1497, (panda$core$Int64) { 413 });
                                        abort();
                                        $l1495:;
                                    }
                                    }
                                    }
                                }
                                $tmp1469 = -1;
                                goto $l1467;
                                $l1467:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1471));
                                switch ($tmp1469) {
                                    case -1: goto $l1498;
                                }
                                $l1498:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1500 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1502 = (($fn1501) p1458->$class->vtable[2])(p1458);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1500, $tmp1502, fullName1425, parameterName1465, bound1466);
                                $tmp1499 = $tmp1500;
                                panda$collections$Array$add$panda$collections$Array$T(generics1417, ((panda$core$Object*) $tmp1499));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1499));
                            }
                            $tmp1457 = -1;
                            goto $l1455;
                            $l1455:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1466));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1465));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1458));
                            p1458 = NULL;
                            switch ($tmp1457) {
                                case -1: goto $l1503;
                            }
                            $l1503:;
                        }
                        goto $l1447;
                        $l1448:;
                    }
                    $tmp1439 = -1;
                    goto $l1437;
                    $l1437:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$402$131440));
                    Iter$402$131440 = NULL;
                    switch ($tmp1439) {
                        case -1: goto $l1504;
                    }
                    $l1504:;
                }
            }
            $tmp1420 = -1;
            goto $l1418;
            $l1418:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1425));
            fullName1425 = NULL;
            switch ($tmp1420) {
                case -1: goto $l1505;
            }
            $l1505:;
        }
        }
        else {
        {
            {
                $tmp1506 = generics1417;
                $tmp1507 = NULL;
                generics1417 = $tmp1507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
            }
        }
        }
        panda$collections$Array* $tmp1511 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1511);
        $tmp1510 = $tmp1511;
        $tmp1509 = $tmp1510;
        parameters1508 = $tmp1509;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
        {
            int $tmp1514;
            {
                ITable* $tmp1518 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1518 = $tmp1518->next;
                }
                $fn1520 $tmp1519 = $tmp1518->methods[0];
                panda$collections$Iterator* $tmp1521 = $tmp1519(((panda$collections$Iterable*) p_rawParameters));
                $tmp1517 = $tmp1521;
                $tmp1516 = $tmp1517;
                Iter$423$91515 = $tmp1516;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
                $l1522:;
                ITable* $tmp1525 = Iter$423$91515->$class->itable;
                while ($tmp1525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1525 = $tmp1525->next;
                }
                $fn1527 $tmp1526 = $tmp1525->methods[0];
                panda$core$Bit $tmp1528 = $tmp1526(Iter$423$91515);
                panda$core$Bit $tmp1529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1528);
                bool $tmp1524 = $tmp1529.value;
                if (!$tmp1524) goto $l1523;
                {
                    int $tmp1532;
                    {
                        ITable* $tmp1536 = Iter$423$91515->$class->itable;
                        while ($tmp1536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1536 = $tmp1536->next;
                        }
                        $fn1538 $tmp1537 = $tmp1536->methods[1];
                        panda$core$Object* $tmp1539 = $tmp1537(Iter$423$91515);
                        $tmp1535 = $tmp1539;
                        $tmp1534 = ((org$pandalanguage$pandac$ASTNode*) $tmp1535);
                        p1533 = $tmp1534;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                        panda$core$Panda$unref$panda$core$Object($tmp1535);
                        int $tmp1542;
                        {
                            $tmp1544 = p1533;
                            $match$424_131543 = $tmp1544;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1544));
                            panda$core$Int64$init$builtin_int64(&$tmp1545, 31);
                            panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$424_131543->$rawValue, $tmp1545);
                            if ($tmp1546.value) {
                            {
                                panda$core$String** $tmp1548 = ((panda$core$String**) ((char*) $match$424_131543->$data + 16));
                                name1547 = *$tmp1548;
                                org$pandalanguage$pandac$ASTNode** $tmp1550 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$424_131543->$data + 24));
                                type1549 = *$tmp1550;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1552 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1549);
                                $tmp1553 = $tmp1554;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1552, name1547, $tmp1553);
                                $tmp1551 = $tmp1552;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1508, ((panda$core$Object*) $tmp1551));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1555, false);
                                if ($tmp1555.value) goto $l1556; else goto $l1557;
                                $l1557:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1558, (panda$core$Int64) { 428 });
                                abort();
                                $l1556:;
                            }
                            }
                        }
                        $tmp1542 = -1;
                        goto $l1540;
                        $l1540:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1544));
                        switch ($tmp1542) {
                            case -1: goto $l1559;
                        }
                        $l1559:;
                    }
                    $tmp1532 = -1;
                    goto $l1530;
                    $l1530:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1533));
                    p1533 = NULL;
                    switch ($tmp1532) {
                        case -1: goto $l1560;
                    }
                    $l1560:;
                }
                goto $l1522;
                $l1523:;
            }
            $tmp1514 = -1;
            goto $l1512;
            $l1512:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$423$91515));
            Iter$423$91515 = NULL;
            switch ($tmp1514) {
                case -1: goto $l1561;
            }
            $l1561:;
        }
        memset(&returnType1562, 0, sizeof(returnType1562));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1563 = returnType1562;
                org$pandalanguage$pandac$Type* $tmp1566 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1565 = $tmp1566;
                $tmp1564 = $tmp1565;
                returnType1562 = $tmp1564;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
            }
        }
        }
        else {
        {
            {
                $tmp1567 = returnType1562;
                org$pandalanguage$pandac$Type* $tmp1570 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1569 = $tmp1570;
                $tmp1568 = $tmp1569;
                returnType1562 = $tmp1568;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1572, 1);
        panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1572);
        bool $tmp1571 = $tmp1573.value;
        if (!$tmp1571) goto $l1574;
        org$pandalanguage$pandac$Type* $tmp1576 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1575 = $tmp1576;
        panda$core$Bit $tmp1577 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1562, $tmp1575);
        $tmp1571 = $tmp1577.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
        $l1574:;
        panda$core$Bit $tmp1578 = { $tmp1571 };
        if ($tmp1578.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1579);
        }
        }
        bool $tmp1580 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1580) goto $l1581;
        panda$core$Bit $tmp1582 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1400, p_statements);
        $tmp1580 = $tmp1582.value;
        $l1581:;
        panda$core$Bit $tmp1583 = { $tmp1580 };
        if ($tmp1583.value) {
        {
            $tmp1584 = annotations1400;
            panda$core$Int64$init$builtin_int64(&$tmp1585, 1024);
            panda$core$Int64 $tmp1586 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1584->flags, $tmp1585);
            $tmp1584->flags = $tmp1586;
        }
        }
        bool $tmp1587 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1587) goto $l1588;
        panda$core$Int64$init$builtin_int64(&$tmp1589, 1);
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1589);
        $tmp1587 = $tmp1590.value;
        $l1588:;
        panda$core$Bit $tmp1591 = { $tmp1587 };
        if ($tmp1591.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1592, 512);
            panda$core$Int64 $tmp1593 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(annotations1400->flags, $tmp1592);
            panda$core$Int64$init$builtin_int64(&$tmp1594, 0);
            panda$core$Bit $tmp1595 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1593, $tmp1594);
            if ($tmp1595.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1596);
            }
            }
            $tmp1597 = annotations1400;
            panda$core$Int64$init$builtin_int64(&$tmp1598, 512);
            panda$core$Int64 $tmp1599 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1597->flags, $tmp1598);
            $tmp1597->flags = $tmp1599;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1603 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1603, p_owner, p_position, doccomment1379, annotations1400, p_kind, p_name, generics1417, parameters1508, returnType1562, p_statements);
        $tmp1602 = $tmp1603;
        $tmp1601 = $tmp1602;
        $returnValue1600 = $tmp1601;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
        $tmp1378 = 0;
        goto $l1376;
        $l1604:;
        return $returnValue1600;
    }
    $l1376:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1562));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1508));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1417));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1400));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1379));
    annotations1400 = NULL;
    parameters1508 = NULL;
    switch ($tmp1378) {
        case 0: goto $l1604;
    }
    $l1606:;
    if (false) goto $l1607; else goto $l1608;
    $l1608:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1609, (panda$core$Int64) { 377 }, &$s1610);
    abort();
    $l1607:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$456_91614 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1615;
    panda$core$Int64 $tmp1616;
    org$pandalanguage$pandac$Position position1618;
    org$pandalanguage$pandac$ASTNode* dc1620 = NULL;
    panda$collections$ImmutableArray* annotations1622 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1624 = NULL;
    panda$core$Int64 $tmp1626;
    org$pandalanguage$pandac$Position position1628;
    org$pandalanguage$pandac$ASTNode* dc1630 = NULL;
    panda$collections$ImmutableArray* annotations1632 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1634;
    panda$core$String* name1636 = NULL;
    panda$collections$ImmutableArray* generics1638 = NULL;
    panda$collections$ImmutableArray* parameters1640 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1642 = NULL;
    panda$collections$ImmutableArray* statements1644 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1649 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1650;
    org$pandalanguage$pandac$MethodDecl* $tmp1651;
    panda$core$Int64 $tmp1654;
    org$pandalanguage$pandac$Position position1656;
    org$pandalanguage$pandac$ASTNode* dc1658 = NULL;
    panda$collections$ImmutableArray* annotations1660 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1662;
    panda$core$String* name1664 = NULL;
    panda$collections$ImmutableArray* generics1666 = NULL;
    panda$collections$ImmutableArray* supertypes1668 = NULL;
    panda$collections$ImmutableArray* members1670 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1675 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1676;
    org$pandalanguage$pandac$ClassDecl* $tmp1677;
    panda$core$Weak* $tmp1679;
    panda$core$Weak* $tmp1680;
    panda$core$Weak* $tmp1681;
    panda$core$String* $tmp1683;
    org$pandalanguage$pandac$Alias* $tmp1690;
    panda$core$String* $tmp1692;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1693;
    panda$core$Int64 $tmp1695;
    panda$core$Bit $tmp1697;
    org$pandalanguage$pandac$Position $tmp1699;
    org$pandalanguage$pandac$Alias* $tmp1700;
    panda$core$String* $tmp1702;
    org$pandalanguage$pandac$Position $tmp1704;
    panda$core$Int64 $tmp1706;
    org$pandalanguage$pandac$Position position1708;
    org$pandalanguage$pandac$ASTNode* dc1710 = NULL;
    panda$core$String* name1712 = NULL;
    panda$collections$ImmutableArray* fields1714 = NULL;
    panda$core$Bit $tmp1716;
    panda$core$String* $tmp1720;
    panda$core$String* $tmp1721;
    int $tmp1613;
    {
        $tmp1615 = p_node;
        $match$456_91614 = $tmp1615;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1615));
        panda$core$Int64$init$builtin_int64(&$tmp1616, 16);
        panda$core$Bit $tmp1617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91614->$rawValue, $tmp1616);
        if ($tmp1617.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1619 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91614->$data + 0));
            position1618 = *$tmp1619;
            org$pandalanguage$pandac$ASTNode** $tmp1621 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91614->$data + 16));
            dc1620 = *$tmp1621;
            panda$collections$ImmutableArray** $tmp1623 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 24));
            annotations1622 = *$tmp1623;
            org$pandalanguage$pandac$ASTNode** $tmp1625 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91614->$data + 32));
            varDecl1624 = *$tmp1625;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1618, dc1620, annotations1622, varDecl1624);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1626, 26);
        panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91614->$rawValue, $tmp1626);
        if ($tmp1627.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1629 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91614->$data + 0));
            position1628 = *$tmp1629;
            org$pandalanguage$pandac$ASTNode** $tmp1631 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91614->$data + 16));
            dc1630 = *$tmp1631;
            panda$collections$ImmutableArray** $tmp1633 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 24));
            annotations1632 = *$tmp1633;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1635 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$456_91614->$data + 32));
            kind1634 = *$tmp1635;
            panda$core$String** $tmp1637 = ((panda$core$String**) ((char*) $match$456_91614->$data + 40));
            name1636 = *$tmp1637;
            panda$collections$ImmutableArray** $tmp1639 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 48));
            generics1638 = *$tmp1639;
            panda$collections$ImmutableArray** $tmp1641 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 56));
            parameters1640 = *$tmp1641;
            org$pandalanguage$pandac$ASTNode** $tmp1643 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91614->$data + 64));
            returnType1642 = *$tmp1643;
            panda$collections$ImmutableArray** $tmp1645 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 72));
            statements1644 = *$tmp1645;
            int $tmp1648;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1652 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1628, dc1630, annotations1632, kind1634, name1636, generics1638, parameters1640, returnType1642, statements1644);
                $tmp1651 = $tmp1652;
                $tmp1650 = $tmp1651;
                m1649 = $tmp1650;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1650));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1651));
                if (((panda$core$Bit) { m1649 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1649));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1649));
                }
                }
            }
            $tmp1648 = -1;
            goto $l1646;
            $l1646:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1649));
            m1649 = NULL;
            switch ($tmp1648) {
                case -1: goto $l1653;
            }
            $l1653:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1654, 11);
        panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91614->$rawValue, $tmp1654);
        if ($tmp1655.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1657 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91614->$data + 0));
            position1656 = *$tmp1657;
            org$pandalanguage$pandac$ASTNode** $tmp1659 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91614->$data + 16));
            dc1658 = *$tmp1659;
            panda$collections$ImmutableArray** $tmp1661 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 24));
            annotations1660 = *$tmp1661;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1663 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$456_91614->$data + 32));
            kind1662 = *$tmp1663;
            panda$core$String** $tmp1665 = ((panda$core$String**) ((char*) $match$456_91614->$data + 40));
            name1664 = *$tmp1665;
            panda$collections$ImmutableArray** $tmp1667 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 48));
            generics1666 = *$tmp1667;
            panda$collections$ImmutableArray** $tmp1669 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 56));
            supertypes1668 = *$tmp1669;
            panda$collections$ImmutableArray** $tmp1671 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 64));
            members1670 = *$tmp1671;
            int $tmp1674;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1678 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1656, dc1658, annotations1660, kind1662, name1664, generics1666, supertypes1668, members1670);
                $tmp1677 = $tmp1678;
                $tmp1676 = $tmp1677;
                inner1675 = $tmp1676;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                if (((panda$core$Bit) { inner1675 != NULL }).value) {
                {
                    {
                        $tmp1679 = inner1675->owner;
                        panda$core$Weak* $tmp1682 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1682, ((panda$core$Object*) p_cl));
                        $tmp1681 = $tmp1682;
                        $tmp1680 = $tmp1681;
                        inner1675->owner = $tmp1680;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1680));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1681));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1675));
                    panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1684);
                    $tmp1683 = $tmp1685;
                    panda$core$Bit $tmp1686 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1675->name, $tmp1683);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
                    if ($tmp1686.value) goto $l1687; else goto $l1688;
                    $l1688:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1689, (panda$core$Int64) { 474 });
                    abort();
                    $l1687:;
                    org$pandalanguage$pandac$Alias* $tmp1691 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1694 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1695, 1);
                    panda$core$Int64 $tmp1696 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1694, $tmp1695);
                    panda$core$Bit$init$builtin_bit(&$tmp1697, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1693, ((panda$core$Int64$nullable) { $tmp1696, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1697);
                    panda$core$String* $tmp1698 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1675->name, $tmp1693);
                    $tmp1692 = $tmp1698;
                    org$pandalanguage$pandac$Position$init(&$tmp1699);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1691, $tmp1692, inner1675->name, $tmp1699);
                    $tmp1690 = $tmp1691;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1690));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1692));
                    org$pandalanguage$pandac$Alias* $tmp1701 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1703 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1702 = $tmp1703;
                    org$pandalanguage$pandac$Position$init(&$tmp1704);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1701, $tmp1702, p_cl->name, $tmp1704);
                    $tmp1700 = $tmp1701;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1675->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1700));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
                }
                }
            }
            $tmp1674 = -1;
            goto $l1672;
            $l1672:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1675));
            inner1675 = NULL;
            switch ($tmp1674) {
                case -1: goto $l1705;
            }
            $l1705:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1706, 9);
        panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91614->$rawValue, $tmp1706);
        if ($tmp1707.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1709 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_91614->$data + 0));
            position1708 = *$tmp1709;
            org$pandalanguage$pandac$ASTNode** $tmp1711 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$456_91614->$data + 16));
            dc1710 = *$tmp1711;
            panda$core$String** $tmp1713 = ((panda$core$String**) ((char*) $match$456_91614->$data + 24));
            name1712 = *$tmp1713;
            panda$collections$ImmutableArray** $tmp1715 = ((panda$collections$ImmutableArray**) ((char*) $match$456_91614->$data + 32));
            fields1714 = *$tmp1715;
            org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1708, dc1710, name1712, fields1714);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1716, false);
            if ($tmp1716.value) goto $l1717; else goto $l1718;
            $l1718:;
            panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1722, ((panda$core$Object*) p_node));
            $tmp1721 = $tmp1723;
            panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1724);
            $tmp1720 = $tmp1725;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1719, (panda$core$Int64) { 482 }, $tmp1720);
            abort();
            $l1717:;
        }
        }
        }
        }
        }
    }
    $tmp1613 = -1;
    goto $l1611;
    $l1611:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
    switch ($tmp1613) {
        case -1: goto $l1726;
    }
    $l1726:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1730 = NULL;
    panda$core$String* $tmp1731;
    panda$core$String* $tmp1732;
    org$pandalanguage$pandac$ASTNode* $match$494_131736 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1737;
    panda$core$Int64 $tmp1738;
    org$pandalanguage$pandac$Position position1740;
    panda$core$String* text1742 = NULL;
    panda$core$String* $tmp1744;
    panda$core$String* $tmp1745;
    panda$core$Bit $tmp1746;
    panda$collections$Array* fields1751 = NULL;
    panda$collections$Array* $tmp1752;
    panda$collections$Array* $tmp1753;
    panda$collections$Iterator* Iter$502$91758 = NULL;
    panda$collections$Iterator* $tmp1759;
    panda$collections$Iterator* $tmp1760;
    org$pandalanguage$pandac$ASTNode* t1776 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1777;
    panda$core$Object* $tmp1778;
    org$pandalanguage$pandac$Type* $tmp1783;
    org$pandalanguage$pandac$ChoiceCase* entry1787 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp1788;
    org$pandalanguage$pandac$ChoiceCase* $tmp1789;
    int $tmp1729;
    {
        memset(&doccomment1730, 0, sizeof(doccomment1730));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1731 = doccomment1730;
                $tmp1732 = NULL;
                doccomment1730 = $tmp1732;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
            }
        }
        }
        else {
        {
            int $tmp1735;
            {
                $tmp1737 = p_rawDoccomment;
                $match$494_131736 = $tmp1737;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
                panda$core$Int64$init$builtin_int64(&$tmp1738, 38);
                panda$core$Bit $tmp1739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131736->$rawValue, $tmp1738);
                if ($tmp1739.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131736->$data + 0));
                    position1740 = *$tmp1741;
                    panda$core$String** $tmp1743 = ((panda$core$String**) ((char*) $match$494_131736->$data + 16));
                    text1742 = *$tmp1743;
                    {
                        $tmp1744 = doccomment1730;
                        $tmp1745 = text1742;
                        doccomment1730 = $tmp1745;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1744));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1746, false);
                    if ($tmp1746.value) goto $l1747; else goto $l1748;
                    $l1748:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1749, (panda$core$Int64) { 498 });
                    abort();
                    $l1747:;
                }
                }
            }
            $tmp1735 = -1;
            goto $l1733;
            $l1733:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
            switch ($tmp1735) {
                case -1: goto $l1750;
            }
            $l1750:;
        }
        }
        panda$collections$Array* $tmp1754 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1754);
        $tmp1753 = $tmp1754;
        $tmp1752 = $tmp1753;
        fields1751 = $tmp1752;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
        {
            int $tmp1757;
            {
                ITable* $tmp1761 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1761 = $tmp1761->next;
                }
                $fn1763 $tmp1762 = $tmp1761->methods[0];
                panda$collections$Iterator* $tmp1764 = $tmp1762(((panda$collections$Iterable*) p_rawFields));
                $tmp1760 = $tmp1764;
                $tmp1759 = $tmp1760;
                Iter$502$91758 = $tmp1759;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
                $l1765:;
                ITable* $tmp1768 = Iter$502$91758->$class->itable;
                while ($tmp1768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1768 = $tmp1768->next;
                }
                $fn1770 $tmp1769 = $tmp1768->methods[0];
                panda$core$Bit $tmp1771 = $tmp1769(Iter$502$91758);
                panda$core$Bit $tmp1772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1771);
                bool $tmp1767 = $tmp1772.value;
                if (!$tmp1767) goto $l1766;
                {
                    int $tmp1775;
                    {
                        ITable* $tmp1779 = Iter$502$91758->$class->itable;
                        while ($tmp1779->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1779 = $tmp1779->next;
                        }
                        $fn1781 $tmp1780 = $tmp1779->methods[1];
                        panda$core$Object* $tmp1782 = $tmp1780(Iter$502$91758);
                        $tmp1778 = $tmp1782;
                        $tmp1777 = ((org$pandalanguage$pandac$ASTNode*) $tmp1778);
                        t1776 = $tmp1777;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
                        panda$core$Panda$unref$panda$core$Object($tmp1778);
                        org$pandalanguage$pandac$Type* $tmp1784 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1776);
                        $tmp1783 = $tmp1784;
                        panda$collections$Array$add$panda$collections$Array$T(fields1751, ((panda$core$Object*) $tmp1783));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                    }
                    $tmp1775 = -1;
                    goto $l1773;
                    $l1773:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1776));
                    t1776 = NULL;
                    switch ($tmp1775) {
                        case -1: goto $l1785;
                    }
                    $l1785:;
                }
                goto $l1765;
                $l1766:;
            }
            $tmp1757 = -1;
            goto $l1755;
            $l1755:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$502$91758));
            Iter$502$91758 = NULL;
            switch ($tmp1757) {
                case -1: goto $l1786;
            }
            $l1786:;
        }
        org$pandalanguage$pandac$ChoiceCase* $tmp1790 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
        ITable* $tmp1791 = ((panda$collections$CollectionView*) p_cl->choiceCases)->$class->itable;
        while ($tmp1791->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1791 = $tmp1791->next;
        }
        $fn1793 $tmp1792 = $tmp1791->methods[0];
        panda$core$Int64 $tmp1794 = $tmp1792(((panda$collections$CollectionView*) p_cl->choiceCases));
        org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1790, p_cl, p_position, p_name, doccomment1730, $tmp1794, ((panda$collections$ListView*) fields1751));
        $tmp1789 = $tmp1790;
        $tmp1788 = $tmp1789;
        entry1787 = $tmp1788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceCases, ((panda$core$Object*) entry1787));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1787));
    }
    $tmp1729 = -1;
    goto $l1727;
    $l1727:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1787));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1751));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1730));
    fields1751 = NULL;
    entry1787 = NULL;
    switch ($tmp1729) {
        case -1: goto $l1795;
    }
    $l1795:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1799 = NULL;
    panda$core$String* $tmp1805;
    panda$core$String* $tmp1806;
    panda$core$String* $tmp1807;
    panda$core$String* $tmp1808;
    panda$core$String* $tmp1809;
    panda$core$String* $tmp1810;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    panda$core$String* doccomment1819 = NULL;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1821;
    org$pandalanguage$pandac$ASTNode* $match$528_131825 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1826;
    panda$core$Int64 $tmp1827;
    org$pandalanguage$pandac$Position position1829;
    panda$core$String* text1831 = NULL;
    panda$core$String* $tmp1833;
    panda$core$String* $tmp1834;
    panda$core$Bit $tmp1835;
    org$pandalanguage$pandac$Annotations* annotations1840 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1841;
    org$pandalanguage$pandac$Annotations* $tmp1842;
    panda$collections$Array* parameters1844 = NULL;
    panda$collections$Array* $tmp1845;
    panda$collections$Array* $tmp1846;
    panda$collections$Iterator* Iter$538$131851 = NULL;
    panda$collections$Iterator* $tmp1852;
    panda$collections$Iterator* $tmp1853;
    org$pandalanguage$pandac$ASTNode* p1869 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1870;
    panda$core$Object* $tmp1871;
    panda$core$String* name1876 = NULL;
    org$pandalanguage$pandac$Type* bound1877 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$541_171881 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1882;
    panda$core$Int64 $tmp1883;
    panda$core$String* id1885 = NULL;
    panda$core$String* $tmp1887;
    panda$core$String* $tmp1888;
    org$pandalanguage$pandac$Type* $tmp1889;
    org$pandalanguage$pandac$Type* $tmp1890;
    org$pandalanguage$pandac$Type* $tmp1891;
    panda$core$Int64 $tmp1893;
    panda$core$String* id1895 = NULL;
    org$pandalanguage$pandac$ASTNode* type1897 = NULL;
    panda$core$String* $tmp1899;
    panda$core$String* $tmp1900;
    org$pandalanguage$pandac$Type* $tmp1901;
    org$pandalanguage$pandac$Type* $tmp1902;
    org$pandalanguage$pandac$Type* $tmp1903;
    panda$core$Bit $tmp1905;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1910;
    panda$collections$Array* supertypes1916 = NULL;
    panda$collections$Array* $tmp1917;
    panda$collections$Array* $tmp1918;
    panda$core$Int64 $tmp1920;
    panda$collections$Iterator* Iter$559$131926 = NULL;
    panda$collections$Iterator* $tmp1927;
    panda$collections$Iterator* $tmp1928;
    org$pandalanguage$pandac$ASTNode* s1944 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    panda$core$Object* $tmp1946;
    org$pandalanguage$pandac$Type* $tmp1951;
    org$pandalanguage$pandac$ClassDecl* result1955 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1956;
    org$pandalanguage$pandac$ClassDecl* $tmp1957;
    panda$core$Object* $tmp1959;
    panda$core$Object* $tmp1961;
    panda$core$Int64 $tmp1963;
    org$pandalanguage$pandac$FieldDecl* rawValue1968 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1969;
    org$pandalanguage$pandac$FieldDecl* $tmp1970;
    org$pandalanguage$pandac$Annotations* $tmp1972;
    panda$core$Int64 $tmp1974;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1975;
    panda$core$Int64 $tmp1976;
    org$pandalanguage$pandac$Type* $tmp1978;
    org$pandalanguage$pandac$FieldDecl* data1980 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1981;
    org$pandalanguage$pandac$FieldDecl* $tmp1982;
    org$pandalanguage$pandac$Annotations* $tmp1984;
    panda$core$Int64 $tmp1986;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1987;
    panda$core$Int64 $tmp1988;
    org$pandalanguage$pandac$Type* $tmp1990;
    panda$collections$Iterator* Iter$578$91996 = NULL;
    panda$collections$Iterator* $tmp1997;
    panda$collections$Iterator* $tmp1998;
    org$pandalanguage$pandac$ASTNode* m2014 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2015;
    panda$core$Object* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $match$579_132024 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2025;
    panda$core$Int64 $tmp2026;
    org$pandalanguage$pandac$Position mPosition2028;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind2030;
    panda$core$Int64 $tmp2032;
    org$pandalanguage$pandac$ClassDecl$Kind $match$582_252034;
    panda$core$Int64 $tmp2035;
    panda$core$Int64 $tmp2037;
    panda$core$Int64 $tmp2040;
    panda$core$Bit foundInit2046;
    panda$core$Bit $tmp2047;
    panda$core$Bit foundCleanup2048;
    panda$core$Bit $tmp2049;
    panda$collections$Iterator* Iter$597$92053 = NULL;
    panda$collections$Iterator* $tmp2054;
    panda$collections$Iterator* $tmp2055;
    org$pandalanguage$pandac$MethodDecl* m2071 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2072;
    panda$core$Object* $tmp2073;
    panda$core$Int64 $tmp2078;
    panda$core$Bit $tmp2080;
    panda$core$Int64 $tmp2089;
    panda$core$Bit $tmp2092;
    panda$core$Int64 $tmp2093;
    panda$core$Int64 $tmp2102;
    org$pandalanguage$pandac$MethodDecl* defaultInit2115 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2116;
    org$pandalanguage$pandac$MethodDecl* $tmp2117;
    org$pandalanguage$pandac$Annotations* $tmp2119;
    panda$core$Int64 $tmp2121;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2122;
    panda$core$Int64 $tmp2123;
    panda$collections$Array* $tmp2125;
    panda$collections$Array* $tmp2127;
    org$pandalanguage$pandac$Type* $tmp2129;
    panda$collections$ImmutableArray* $tmp2131;
    panda$core$Int64 $tmp2139;
    panda$core$Int64 $tmp2142;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2156 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2157;
    org$pandalanguage$pandac$MethodDecl* $tmp2158;
    org$pandalanguage$pandac$Annotations* $tmp2160;
    panda$core$Int64 $tmp2162;
    panda$core$Int64 $tmp2163;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2165;
    panda$core$Int64 $tmp2166;
    panda$collections$Array* $tmp2168;
    panda$collections$Array* $tmp2170;
    org$pandalanguage$pandac$Type* $tmp2172;
    panda$collections$ImmutableArray* $tmp2174;
    panda$core$Int64 $tmp2177;
    panda$core$Bit haveFields2179;
    panda$core$Bit $tmp2180;
    panda$core$Int64 $tmp2185;
    panda$collections$Iterator* Iter$628$172190 = NULL;
    panda$collections$Iterator* $tmp2191;
    panda$collections$Iterator* $tmp2192;
    org$pandalanguage$pandac$ChoiceCase* e2208 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp2209;
    panda$core$Object* $tmp2210;
    panda$core$Int64 $tmp2219;
    panda$core$Bit $tmp2221;
    org$pandalanguage$pandac$ClassDecl* $returnValue2226;
    org$pandalanguage$pandac$ClassDecl* $tmp2227;
    org$pandalanguage$pandac$Type* $tmp2231;
    org$pandalanguage$pandac$Type* $tmp2232;
    org$pandalanguage$pandac$Type* $tmp2233;
    panda$core$Object* $tmp2235;
    panda$core$Object* $tmp2236;
    org$pandalanguage$pandac$ClassDecl* $tmp2239;
    int $tmp1798;
    {
        memset(&fullName1799, 0, sizeof(fullName1799));
        ITable* $tmp1801 = ((panda$core$Equatable*) p_contextName)->$class->itable;
        while ($tmp1801->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp1801 = $tmp1801->next;
        }
        $fn1803 $tmp1802 = $tmp1801->methods[1];
        panda$core$Bit $tmp1804 = $tmp1802(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s1800));
        if ($tmp1804.value) {
        {
            {
                $tmp1805 = fullName1799;
                panda$core$String* $tmp1811 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1810 = $tmp1811;
                panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, &$s1812);
                $tmp1809 = $tmp1813;
                panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, p_name);
                $tmp1808 = $tmp1814;
                panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, &$s1815);
                $tmp1807 = $tmp1816;
                $tmp1806 = $tmp1807;
                fullName1799 = $tmp1806;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1808));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1805));
            }
        }
        }
        else {
        {
            {
                $tmp1817 = fullName1799;
                $tmp1818 = p_name;
                fullName1799 = $tmp1818;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
            }
        }
        }
        memset(&doccomment1819, 0, sizeof(doccomment1819));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1820 = doccomment1819;
                $tmp1821 = NULL;
                doccomment1819 = $tmp1821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
            }
        }
        }
        else {
        {
            int $tmp1824;
            {
                $tmp1826 = p_rawDoccomment;
                $match$528_131825 = $tmp1826;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
                panda$core$Int64$init$builtin_int64(&$tmp1827, 38);
                panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$528_131825->$rawValue, $tmp1827);
                if ($tmp1828.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1830 = ((org$pandalanguage$pandac$Position*) ((char*) $match$528_131825->$data + 0));
                    position1829 = *$tmp1830;
                    panda$core$String** $tmp1832 = ((panda$core$String**) ((char*) $match$528_131825->$data + 16));
                    text1831 = *$tmp1832;
                    {
                        $tmp1833 = doccomment1819;
                        $tmp1834 = text1831;
                        doccomment1819 = $tmp1834;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1834));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1835, false);
                    if ($tmp1835.value) goto $l1836; else goto $l1837;
                    $l1837:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1838, (panda$core$Int64) { 532 });
                    abort();
                    $l1836:;
                }
                }
            }
            $tmp1824 = -1;
            goto $l1822;
            $l1822:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
            switch ($tmp1824) {
                case -1: goto $l1839;
            }
            $l1839:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1843 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1842 = $tmp1843;
        $tmp1841 = $tmp1842;
        annotations1840 = $tmp1841;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
        panda$collections$Array* $tmp1847 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1847);
        $tmp1846 = $tmp1847;
        $tmp1845 = $tmp1846;
        parameters1844 = $tmp1845;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1845));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1850;
                {
                    ITable* $tmp1854 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1854->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1854 = $tmp1854->next;
                    }
                    $fn1856 $tmp1855 = $tmp1854->methods[0];
                    panda$collections$Iterator* $tmp1857 = $tmp1855(((panda$collections$Iterable*) p_generics));
                    $tmp1853 = $tmp1857;
                    $tmp1852 = $tmp1853;
                    Iter$538$131851 = $tmp1852;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                    $l1858:;
                    ITable* $tmp1861 = Iter$538$131851->$class->itable;
                    while ($tmp1861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1861 = $tmp1861->next;
                    }
                    $fn1863 $tmp1862 = $tmp1861->methods[0];
                    panda$core$Bit $tmp1864 = $tmp1862(Iter$538$131851);
                    panda$core$Bit $tmp1865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1864);
                    bool $tmp1860 = $tmp1865.value;
                    if (!$tmp1860) goto $l1859;
                    {
                        int $tmp1868;
                        {
                            ITable* $tmp1872 = Iter$538$131851->$class->itable;
                            while ($tmp1872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1872 = $tmp1872->next;
                            }
                            $fn1874 $tmp1873 = $tmp1872->methods[1];
                            panda$core$Object* $tmp1875 = $tmp1873(Iter$538$131851);
                            $tmp1871 = $tmp1875;
                            $tmp1870 = ((org$pandalanguage$pandac$ASTNode*) $tmp1871);
                            p1869 = $tmp1870;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                            panda$core$Panda$unref$panda$core$Object($tmp1871);
                            memset(&name1876, 0, sizeof(name1876));
                            memset(&bound1877, 0, sizeof(bound1877));
                            int $tmp1880;
                            {
                                $tmp1882 = p1869;
                                $match$541_171881 = $tmp1882;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
                                panda$core$Int64$init$builtin_int64(&$tmp1883, 20);
                                panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541_171881->$rawValue, $tmp1883);
                                if ($tmp1884.value) {
                                {
                                    panda$core$String** $tmp1886 = ((panda$core$String**) ((char*) $match$541_171881->$data + 16));
                                    id1885 = *$tmp1886;
                                    {
                                        $tmp1887 = name1876;
                                        $tmp1888 = id1885;
                                        name1876 = $tmp1888;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1888));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1887));
                                    }
                                    {
                                        $tmp1889 = bound1877;
                                        org$pandalanguage$pandac$Type* $tmp1892 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1891 = $tmp1892;
                                        $tmp1890 = $tmp1891;
                                        bound1877 = $tmp1890;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1890));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1889));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1893, 44);
                                panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541_171881->$rawValue, $tmp1893);
                                if ($tmp1894.value) {
                                {
                                    panda$core$String** $tmp1896 = ((panda$core$String**) ((char*) $match$541_171881->$data + 16));
                                    id1895 = *$tmp1896;
                                    org$pandalanguage$pandac$ASTNode** $tmp1898 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$541_171881->$data + 24));
                                    type1897 = *$tmp1898;
                                    {
                                        $tmp1899 = name1876;
                                        $tmp1900 = id1895;
                                        name1876 = $tmp1900;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
                                    }
                                    {
                                        $tmp1901 = bound1877;
                                        org$pandalanguage$pandac$Type* $tmp1904 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1897);
                                        $tmp1903 = $tmp1904;
                                        $tmp1902 = $tmp1903;
                                        bound1877 = $tmp1902;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1903));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1905, false);
                                    if ($tmp1905.value) goto $l1906; else goto $l1907;
                                    $l1907:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1908, (panda$core$Int64) { 549 });
                                    abort();
                                    $l1906:;
                                }
                                }
                                }
                            }
                            $tmp1880 = -1;
                            goto $l1878;
                            $l1878:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
                            switch ($tmp1880) {
                                case -1: goto $l1909;
                            }
                            $l1909:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1911 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1913 = (($fn1912) p1869->$class->vtable[2])(p1869);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1911, $tmp1913, fullName1799, name1876, bound1877);
                            $tmp1910 = $tmp1911;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1844, ((panda$core$Object*) $tmp1910));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
                        }
                        $tmp1868 = -1;
                        goto $l1866;
                        $l1866:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1876));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1869));
                        p1869 = NULL;
                        switch ($tmp1868) {
                            case -1: goto $l1914;
                        }
                        $l1914:;
                    }
                    goto $l1858;
                    $l1859:;
                }
                $tmp1850 = -1;
                goto $l1848;
                $l1848:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$131851));
                Iter$538$131851 = NULL;
                switch ($tmp1850) {
                    case -1: goto $l1915;
                }
                $l1915:;
            }
        }
        }
        panda$collections$Array* $tmp1919 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1919);
        $tmp1918 = $tmp1919;
        $tmp1917 = $tmp1918;
        supertypes1916 = $tmp1917;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1917));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1918));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1920, 2);
            panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1920);
            if ($tmp1921.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1922);
            }
            }
            {
                int $tmp1925;
                {
                    ITable* $tmp1929 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1929->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1929 = $tmp1929->next;
                    }
                    $fn1931 $tmp1930 = $tmp1929->methods[0];
                    panda$collections$Iterator* $tmp1932 = $tmp1930(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1928 = $tmp1932;
                    $tmp1927 = $tmp1928;
                    Iter$559$131926 = $tmp1927;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1928));
                    $l1933:;
                    ITable* $tmp1936 = Iter$559$131926->$class->itable;
                    while ($tmp1936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1936 = $tmp1936->next;
                    }
                    $fn1938 $tmp1937 = $tmp1936->methods[0];
                    panda$core$Bit $tmp1939 = $tmp1937(Iter$559$131926);
                    panda$core$Bit $tmp1940 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1939);
                    bool $tmp1935 = $tmp1940.value;
                    if (!$tmp1935) goto $l1934;
                    {
                        int $tmp1943;
                        {
                            ITable* $tmp1947 = Iter$559$131926->$class->itable;
                            while ($tmp1947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1947 = $tmp1947->next;
                            }
                            $fn1949 $tmp1948 = $tmp1947->methods[1];
                            panda$core$Object* $tmp1950 = $tmp1948(Iter$559$131926);
                            $tmp1946 = $tmp1950;
                            $tmp1945 = ((org$pandalanguage$pandac$ASTNode*) $tmp1946);
                            s1944 = $tmp1945;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1945));
                            panda$core$Panda$unref$panda$core$Object($tmp1946);
                            org$pandalanguage$pandac$Type* $tmp1952 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1944);
                            $tmp1951 = $tmp1952;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1916, ((panda$core$Object*) $tmp1951));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
                        }
                        $tmp1943 = -1;
                        goto $l1941;
                        $l1941:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1944));
                        s1944 = NULL;
                        switch ($tmp1943) {
                            case -1: goto $l1953;
                        }
                        $l1953:;
                    }
                    goto $l1933;
                    $l1934:;
                }
                $tmp1925 = -1;
                goto $l1923;
                $l1923:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$559$131926));
                Iter$559$131926 = NULL;
                switch ($tmp1925) {
                    case -1: goto $l1954;
                }
                $l1954:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1958 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1960 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1959 = $tmp1960;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1958, p_source, p_position, p_aliases, doccomment1819, annotations1840, p_kind, fullName1799, ((panda$collections$ListView*) supertypes1916), parameters1844, ((org$pandalanguage$pandac$Compiler*) $tmp1959)->root);
        $tmp1957 = $tmp1958;
        $tmp1956 = $tmp1957;
        result1955 = $tmp1956;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
        panda$core$Panda$unref$panda$core$Object($tmp1959);
        panda$core$Object* $tmp1962 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1961 = $tmp1962;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1961)->currentClass, ((panda$core$Object*) result1955));
        panda$core$Panda$unref$panda$core$Object($tmp1961);
        panda$core$Int64$init$builtin_int64(&$tmp1963, 2);
        panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1963);
        if ($tmp1964.value) {
        {
            int $tmp1967;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1971 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1973 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1974, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1973, $tmp1974);
                $tmp1972 = $tmp1973;
                panda$core$Int64$init$builtin_int64(&$tmp1976, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1975, $tmp1976);
                org$pandalanguage$pandac$Type* $tmp1979 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1978 = $tmp1979;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1971, result1955, result1955->position, NULL, $tmp1972, $tmp1975, &$s1977, $tmp1978, NULL);
                $tmp1970 = $tmp1971;
                $tmp1969 = $tmp1970;
                rawValue1968 = $tmp1969;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1972));
                panda$collections$Array$add$panda$collections$Array$T(result1955->fields, ((panda$core$Object*) rawValue1968));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1955->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1968));
                org$pandalanguage$pandac$FieldDecl* $tmp1983 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1985 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1986, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1985, $tmp1986);
                $tmp1984 = $tmp1985;
                panda$core$Int64$init$builtin_int64(&$tmp1988, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1987, $tmp1988);
                org$pandalanguage$pandac$Type* $tmp1991 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1990 = $tmp1991;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1983, result1955, result1955->position, NULL, $tmp1984, $tmp1987, &$s1989, $tmp1990, NULL);
                $tmp1982 = $tmp1983;
                $tmp1981 = $tmp1982;
                data1980 = $tmp1981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
                panda$collections$Array$add$panda$collections$Array$T(result1955->fields, ((panda$core$Object*) data1980));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1955->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1980));
            }
            $tmp1967 = -1;
            goto $l1965;
            $l1965:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1968));
            rawValue1968 = NULL;
            data1980 = NULL;
            switch ($tmp1967) {
                case -1: goto $l1992;
            }
            $l1992:;
        }
        }
        {
            int $tmp1995;
            {
                ITable* $tmp1999 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1999->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1999 = $tmp1999->next;
                }
                $fn2001 $tmp2000 = $tmp1999->methods[0];
                panda$collections$Iterator* $tmp2002 = $tmp2000(((panda$collections$Iterable*) p_members));
                $tmp1998 = $tmp2002;
                $tmp1997 = $tmp1998;
                Iter$578$91996 = $tmp1997;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
                $l2003:;
                ITable* $tmp2006 = Iter$578$91996->$class->itable;
                while ($tmp2006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2006 = $tmp2006->next;
                }
                $fn2008 $tmp2007 = $tmp2006->methods[0];
                panda$core$Bit $tmp2009 = $tmp2007(Iter$578$91996);
                panda$core$Bit $tmp2010 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2009);
                bool $tmp2005 = $tmp2010.value;
                if (!$tmp2005) goto $l2004;
                {
                    int $tmp2013;
                    {
                        ITable* $tmp2017 = Iter$578$91996->$class->itable;
                        while ($tmp2017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2017 = $tmp2017->next;
                        }
                        $fn2019 $tmp2018 = $tmp2017->methods[1];
                        panda$core$Object* $tmp2020 = $tmp2018(Iter$578$91996);
                        $tmp2016 = $tmp2020;
                        $tmp2015 = ((org$pandalanguage$pandac$ASTNode*) $tmp2016);
                        m2014 = $tmp2015;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
                        panda$core$Panda$unref$panda$core$Object($tmp2016);
                        int $tmp2023;
                        {
                            $tmp2025 = m2014;
                            $match$579_132024 = $tmp2025;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
                            panda$core$Int64$init$builtin_int64(&$tmp2026, 26);
                            panda$core$Bit $tmp2027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$579_132024->$rawValue, $tmp2026);
                            if ($tmp2027.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp2029 = ((org$pandalanguage$pandac$Position*) ((char*) $match$579_132024->$data + 0));
                                mPosition2028 = *$tmp2029;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2031 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$579_132024->$data + 32));
                                methodKind2030 = *$tmp2031;
                                panda$core$Int64$init$builtin_int64(&$tmp2032, 2);
                                panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind2030.$rawValue, $tmp2032);
                                if ($tmp2033.value) {
                                {
                                    {
                                        $match$582_252034 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2035, 0);
                                        panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_252034.$rawValue, $tmp2035);
                                        if ($tmp2036.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2037, 1);
                                        panda$core$Bit $tmp2038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_252034.$rawValue, $tmp2037);
                                        if ($tmp2038.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2028, &$s2039);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2040, 2);
                                        panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_252034.$rawValue, $tmp2040);
                                        if ($tmp2041.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2028, &$s2042);
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
                        $tmp2023 = -1;
                        goto $l2021;
                        $l2021:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
                        switch ($tmp2023) {
                            case -1: goto $l2043;
                        }
                        $l2043:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1955, m2014);
                    }
                    $tmp2013 = -1;
                    goto $l2011;
                    $l2011:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2014));
                    m2014 = NULL;
                    switch ($tmp2013) {
                        case -1: goto $l2044;
                    }
                    $l2044:;
                }
                goto $l2003;
                $l2004:;
            }
            $tmp1995 = -1;
            goto $l1993;
            $l1993:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$578$91996));
            Iter$578$91996 = NULL;
            switch ($tmp1995) {
                case -1: goto $l2045;
            }
            $l2045:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2047, false);
        foundInit2046 = $tmp2047;
        panda$core$Bit$init$builtin_bit(&$tmp2049, false);
        foundCleanup2048 = $tmp2049;
        {
            int $tmp2052;
            {
                ITable* $tmp2056 = ((panda$collections$Iterable*) result1955->methods)->$class->itable;
                while ($tmp2056->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2056 = $tmp2056->next;
                }
                $fn2058 $tmp2057 = $tmp2056->methods[0];
                panda$collections$Iterator* $tmp2059 = $tmp2057(((panda$collections$Iterable*) result1955->methods));
                $tmp2055 = $tmp2059;
                $tmp2054 = $tmp2055;
                Iter$597$92053 = $tmp2054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
                $l2060:;
                ITable* $tmp2063 = Iter$597$92053->$class->itable;
                while ($tmp2063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2063 = $tmp2063->next;
                }
                $fn2065 $tmp2064 = $tmp2063->methods[0];
                panda$core$Bit $tmp2066 = $tmp2064(Iter$597$92053);
                panda$core$Bit $tmp2067 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2066);
                bool $tmp2062 = $tmp2067.value;
                if (!$tmp2062) goto $l2061;
                {
                    int $tmp2070;
                    {
                        ITable* $tmp2074 = Iter$597$92053->$class->itable;
                        while ($tmp2074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2074 = $tmp2074->next;
                        }
                        $fn2076 $tmp2075 = $tmp2074->methods[1];
                        panda$core$Object* $tmp2077 = $tmp2075(Iter$597$92053);
                        $tmp2073 = $tmp2077;
                        $tmp2072 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2073);
                        m2071 = $tmp2072;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2072));
                        panda$core$Panda$unref$panda$core$Object($tmp2073);
                        panda$core$Int64$init$builtin_int64(&$tmp2078, 2);
                        panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2071->methodKind.$rawValue, $tmp2078);
                        if ($tmp2079.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2080, true);
                            foundInit2046 = $tmp2080;
                        }
                        }
                        panda$core$Bit $tmp2083 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2071)->name, &$s2082);
                        bool $tmp2081 = $tmp2083.value;
                        if (!$tmp2081) goto $l2084;
                        ITable* $tmp2085 = ((panda$collections$CollectionView*) m2071->parameters)->$class->itable;
                        while ($tmp2085->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp2085 = $tmp2085->next;
                        }
                        $fn2087 $tmp2086 = $tmp2085->methods[0];
                        panda$core$Int64 $tmp2088 = $tmp2086(((panda$collections$CollectionView*) m2071->parameters));
                        panda$core$Int64$init$builtin_int64(&$tmp2089, 0);
                        panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2088, $tmp2089);
                        $tmp2081 = $tmp2090.value;
                        $l2084:;
                        panda$core$Bit $tmp2091 = { $tmp2081 };
                        if ($tmp2091.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2092, true);
                            foundCleanup2048 = $tmp2092;
                            panda$core$Int64$init$builtin_int64(&$tmp2093, 2);
                            panda$core$Bit $tmp2094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2093);
                            if ($tmp2094.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2095);
                            }
                            }
                        }
                        }
                    }
                    $tmp2070 = -1;
                    goto $l2068;
                    $l2068:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2071));
                    m2071 = NULL;
                    switch ($tmp2070) {
                        case -1: goto $l2096;
                    }
                    $l2096:;
                }
                goto $l2060;
                $l2061:;
            }
            $tmp2052 = -1;
            goto $l2050;
            $l2050:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$597$92053));
            Iter$597$92053 = NULL;
            switch ($tmp2052) {
                case -1: goto $l2097;
            }
            $l2097:;
        }
        panda$core$Bit $tmp2100 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2046);
        bool $tmp2099 = $tmp2100.value;
        if (!$tmp2099) goto $l2101;
        panda$core$Int64$init$builtin_int64(&$tmp2102, 0);
        panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2102);
        $tmp2099 = $tmp2103.value;
        $l2101:;
        panda$core$Bit $tmp2104 = { $tmp2099 };
        bool $tmp2098 = $tmp2104.value;
        if (!$tmp2098) goto $l2105;
        ITable* $tmp2107 = ((panda$core$Equatable*) result1955->name)->$class->itable;
        while ($tmp2107->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2107 = $tmp2107->next;
        }
        $fn2109 $tmp2108 = $tmp2107->methods[1];
        panda$core$Bit $tmp2110 = $tmp2108(((panda$core$Equatable*) result1955->name), ((panda$core$Equatable*) &$s2106));
        $tmp2098 = $tmp2110.value;
        $l2105:;
        panda$core$Bit $tmp2111 = { $tmp2098 };
        if ($tmp2111.value) {
        {
            int $tmp2114;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2118 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2120 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2121, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2120, $tmp2121);
                $tmp2119 = $tmp2120;
                panda$core$Int64$init$builtin_int64(&$tmp2123, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2122, $tmp2123);
                panda$collections$Array* $tmp2126 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2126);
                $tmp2125 = $tmp2126;
                panda$collections$Array* $tmp2128 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2128);
                $tmp2127 = $tmp2128;
                org$pandalanguage$pandac$Type* $tmp2130 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2129 = $tmp2130;
                panda$collections$ImmutableArray* $tmp2132 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2132);
                $tmp2131 = $tmp2132;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2118, result1955, p_position, NULL, $tmp2119, $tmp2122, &$s2124, $tmp2125, $tmp2127, $tmp2129, $tmp2131);
                $tmp2117 = $tmp2118;
                $tmp2116 = $tmp2117;
                defaultInit2115 = $tmp2116;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
                panda$collections$Array$add$panda$collections$Array$T(result1955->methods, ((panda$core$Object*) defaultInit2115));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1955->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2115));
            }
            $tmp2114 = -1;
            goto $l2112;
            $l2112:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2115));
            defaultInit2115 = NULL;
            switch ($tmp2114) {
                case -1: goto $l2133;
            }
            $l2133:;
        }
        }
        panda$core$Bit $tmp2136 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2048);
        bool $tmp2135 = $tmp2136.value;
        if (!$tmp2135) goto $l2137;
        panda$core$Int64$init$builtin_int64(&$tmp2139, 0);
        panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2139);
        bool $tmp2138 = $tmp2140.value;
        if ($tmp2138) goto $l2141;
        panda$core$Int64$init$builtin_int64(&$tmp2142, 2);
        panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2142);
        $tmp2138 = $tmp2143.value;
        $l2141:;
        panda$core$Bit $tmp2144 = { $tmp2138 };
        $tmp2135 = $tmp2144.value;
        $l2137:;
        panda$core$Bit $tmp2145 = { $tmp2135 };
        bool $tmp2134 = $tmp2145.value;
        if (!$tmp2134) goto $l2146;
        ITable* $tmp2148 = ((panda$core$Equatable*) result1955->name)->$class->itable;
        while ($tmp2148->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2148 = $tmp2148->next;
        }
        $fn2150 $tmp2149 = $tmp2148->methods[1];
        panda$core$Bit $tmp2151 = $tmp2149(((panda$core$Equatable*) result1955->name), ((panda$core$Equatable*) &$s2147));
        $tmp2134 = $tmp2151.value;
        $l2146:;
        panda$core$Bit $tmp2152 = { $tmp2134 };
        if ($tmp2152.value) {
        {
            int $tmp2155;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2159 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2161 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2162, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2163, 8192);
                panda$core$Int64 $tmp2164 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2162, $tmp2163);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2161, $tmp2164);
                $tmp2160 = $tmp2161;
                panda$core$Int64$init$builtin_int64(&$tmp2166, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2165, $tmp2166);
                panda$collections$Array* $tmp2169 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2169);
                $tmp2168 = $tmp2169;
                panda$collections$Array* $tmp2171 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2171);
                $tmp2170 = $tmp2171;
                org$pandalanguage$pandac$Type* $tmp2173 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2172 = $tmp2173;
                panda$collections$ImmutableArray* $tmp2175 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2175);
                $tmp2174 = $tmp2175;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2159, result1955, p_position, NULL, $tmp2160, $tmp2165, &$s2167, $tmp2168, $tmp2170, $tmp2172, $tmp2174);
                $tmp2158 = $tmp2159;
                $tmp2157 = $tmp2158;
                defaultCleanup2156 = $tmp2157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2168));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
                panda$collections$Array$add$panda$collections$Array$T(result1955->methods, ((panda$core$Object*) defaultCleanup2156));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1955->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2156));
            }
            $tmp2155 = -1;
            goto $l2153;
            $l2153:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2156));
            defaultCleanup2156 = NULL;
            switch ($tmp2155) {
                case -1: goto $l2176;
            }
            $l2176:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2177, 2);
        panda$core$Bit $tmp2178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2177);
        if ($tmp2178.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2180, false);
            haveFields2179 = $tmp2180;
            ITable* $tmp2181 = ((panda$collections$CollectionView*) result1955->choiceCases)->$class->itable;
            while ($tmp2181->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2181 = $tmp2181->next;
            }
            $fn2183 $tmp2182 = $tmp2181->methods[0];
            panda$core$Int64 $tmp2184 = $tmp2182(((panda$collections$CollectionView*) result1955->choiceCases));
            panda$core$Int64$init$builtin_int64(&$tmp2185, 0);
            panda$core$Bit $tmp2186 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2184, $tmp2185);
            if ($tmp2186.value) {
            {
                {
                    int $tmp2189;
                    {
                        ITable* $tmp2193 = ((panda$collections$Iterable*) result1955->choiceCases)->$class->itable;
                        while ($tmp2193->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2193 = $tmp2193->next;
                        }
                        $fn2195 $tmp2194 = $tmp2193->methods[0];
                        panda$collections$Iterator* $tmp2196 = $tmp2194(((panda$collections$Iterable*) result1955->choiceCases));
                        $tmp2192 = $tmp2196;
                        $tmp2191 = $tmp2192;
                        Iter$628$172190 = $tmp2191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                        $l2197:;
                        ITable* $tmp2200 = Iter$628$172190->$class->itable;
                        while ($tmp2200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2200 = $tmp2200->next;
                        }
                        $fn2202 $tmp2201 = $tmp2200->methods[0];
                        panda$core$Bit $tmp2203 = $tmp2201(Iter$628$172190);
                        panda$core$Bit $tmp2204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2203);
                        bool $tmp2199 = $tmp2204.value;
                        if (!$tmp2199) goto $l2198;
                        {
                            int $tmp2207;
                            {
                                ITable* $tmp2211 = Iter$628$172190->$class->itable;
                                while ($tmp2211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2211 = $tmp2211->next;
                                }
                                $fn2213 $tmp2212 = $tmp2211->methods[1];
                                panda$core$Object* $tmp2214 = $tmp2212(Iter$628$172190);
                                $tmp2210 = $tmp2214;
                                $tmp2209 = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2210);
                                e2208 = $tmp2209;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                                panda$core$Panda$unref$panda$core$Object($tmp2210);
                                ITable* $tmp2215 = ((panda$collections$CollectionView*) e2208->fields)->$class->itable;
                                while ($tmp2215->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                    $tmp2215 = $tmp2215->next;
                                }
                                $fn2217 $tmp2216 = $tmp2215->methods[0];
                                panda$core$Int64 $tmp2218 = $tmp2216(((panda$collections$CollectionView*) e2208->fields));
                                panda$core$Int64$init$builtin_int64(&$tmp2219, 0);
                                panda$core$Bit $tmp2220 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2218, $tmp2219);
                                if ($tmp2220.value) {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2221, true);
                                    haveFields2179 = $tmp2221;
                                    $tmp2207 = 0;
                                    goto $l2205;
                                    $l2222:;
                                    goto $l2198;
                                }
                                }
                            }
                            $tmp2207 = -1;
                            goto $l2205;
                            $l2205:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2208));
                            e2208 = NULL;
                            switch ($tmp2207) {
                                case -1: goto $l2223;
                                case 0: goto $l2222;
                            }
                            $l2223:;
                        }
                        goto $l2197;
                        $l2198:;
                    }
                    $tmp2189 = -1;
                    goto $l2187;
                    $l2187:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$628$172190));
                    Iter$628$172190 = NULL;
                    switch ($tmp2189) {
                        case -1: goto $l2224;
                    }
                    $l2224:;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, result1955->position, &$s2225);
                $tmp2227 = NULL;
                $returnValue2226 = $tmp2227;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
                $tmp1798 = 0;
                goto $l1796;
                $l2228:;
                return $returnValue2226;
            }
            }
            panda$core$Bit $tmp2230 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2179);
            if ($tmp2230.value) {
            {
                {
                    $tmp2231 = result1955->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2234 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2233 = $tmp2234;
                    $tmp2232 = $tmp2233;
                    result1955->rawSuper = $tmp2232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2237 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2236 = $tmp2237;
        panda$core$Object* $tmp2238 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2236)->currentClass);
        $tmp2235 = $tmp2238;
        panda$core$Panda$unref$panda$core$Object($tmp2235);
        panda$core$Panda$unref$panda$core$Object($tmp2236);
        $tmp2239 = result1955;
        $returnValue2226 = $tmp2239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
        $tmp1798 = 1;
        goto $l1796;
        $l2240:;
        return $returnValue2226;
    }
    $l1796:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1955));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1916));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1844));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1840));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1819));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1799));
    annotations1840 = NULL;
    parameters1844 = NULL;
    supertypes1916 = NULL;
    result1955 = NULL;
    switch ($tmp1798) {
        case 1: goto $l2240;
        case 0: goto $l2228;
    }
    $l2242:;
    if (false) goto $l2243; else goto $l2244;
    $l2244:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2245, (panda$core$Int64) { 511 }, &$s2246);
    abort();
    $l2243:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$649$92250 = NULL;
    panda$collections$Iterator* $tmp2251;
    panda$collections$Iterator* $tmp2252;
    org$pandalanguage$pandac$ClassDecl* inner2268 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2269;
    panda$core$Object* $tmp2270;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2249;
        {
            ITable* $tmp2253 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2253->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2253 = $tmp2253->next;
            }
            $fn2255 $tmp2254 = $tmp2253->methods[0];
            panda$collections$Iterator* $tmp2256 = $tmp2254(((panda$collections$Iterable*) p_cl->classes));
            $tmp2252 = $tmp2256;
            $tmp2251 = $tmp2252;
            Iter$649$92250 = $tmp2251;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
            $l2257:;
            ITable* $tmp2260 = Iter$649$92250->$class->itable;
            while ($tmp2260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2260 = $tmp2260->next;
            }
            $fn2262 $tmp2261 = $tmp2260->methods[0];
            panda$core$Bit $tmp2263 = $tmp2261(Iter$649$92250);
            panda$core$Bit $tmp2264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2263);
            bool $tmp2259 = $tmp2264.value;
            if (!$tmp2259) goto $l2258;
            {
                int $tmp2267;
                {
                    ITable* $tmp2271 = Iter$649$92250->$class->itable;
                    while ($tmp2271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2271 = $tmp2271->next;
                    }
                    $fn2273 $tmp2272 = $tmp2271->methods[1];
                    panda$core$Object* $tmp2274 = $tmp2272(Iter$649$92250);
                    $tmp2270 = $tmp2274;
                    $tmp2269 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2270);
                    inner2268 = $tmp2269;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
                    panda$core$Panda$unref$panda$core$Object($tmp2270);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2268, p_arr);
                }
                $tmp2267 = -1;
                goto $l2265;
                $l2265:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2268));
                inner2268 = NULL;
                switch ($tmp2267) {
                    case -1: goto $l2275;
                }
                $l2275:;
            }
            goto $l2257;
            $l2258:;
        }
        $tmp2249 = -1;
        goto $l2247;
        $l2247:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$649$92250));
        Iter$649$92250 = NULL;
        switch ($tmp2249) {
            case -1: goto $l2276;
        }
        $l2276:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, panda$collections$List* p_classes) {
    panda$core$String* fullName2280 = NULL;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2287;
    panda$core$String* $tmp2288;
    panda$core$String* $tmp2289;
    panda$core$String* $tmp2293;
    panda$core$String* $tmp2294;
    org$pandalanguage$pandac$ClassDecl* $tmp2296;
    org$pandalanguage$pandac$ClassDecl* $tmp2297;
    org$pandalanguage$pandac$ClassDecl* $tmp2298;
    org$pandalanguage$pandac$Position $tmp2300;
    org$pandalanguage$pandac$Annotations* $tmp2301;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2303;
    panda$core$Int64 $tmp2304;
    panda$collections$Array* $tmp2305;
    panda$collections$Array* $tmp2307;
    panda$core$Object* $tmp2309;
    org$pandalanguage$pandac$MethodDecl* defaultInit2314 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2315;
    org$pandalanguage$pandac$MethodDecl* $tmp2316;
    org$pandalanguage$pandac$Position $tmp2318;
    org$pandalanguage$pandac$Annotations* $tmp2319;
    panda$core$Int64 $tmp2321;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2322;
    panda$core$Int64 $tmp2323;
    panda$collections$Array* $tmp2325;
    panda$collections$Array* $tmp2327;
    org$pandalanguage$pandac$Type* $tmp2329;
    panda$collections$ImmutableArray* $tmp2331;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2333 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2334;
    org$pandalanguage$pandac$MethodDecl* $tmp2335;
    org$pandalanguage$pandac$Position $tmp2337;
    org$pandalanguage$pandac$Annotations* $tmp2338;
    panda$core$Int64 $tmp2340;
    panda$core$Int64 $tmp2341;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2343;
    panda$core$Int64 $tmp2344;
    panda$collections$Array* $tmp2346;
    panda$collections$Array* $tmp2348;
    org$pandalanguage$pandac$Type* $tmp2350;
    panda$collections$ImmutableArray* $tmp2352;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2279;
        {
            memset(&fullName2280, 0, sizeof(fullName2280));
            ITable* $tmp2282 = ((panda$core$Equatable*) p_contextName)->$class->itable;
            while ($tmp2282->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp2282 = $tmp2282->next;
            }
            $fn2284 $tmp2283 = $tmp2282->methods[1];
            panda$core$Bit $tmp2285 = $tmp2283(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s2281));
            if ($tmp2285.value) {
            {
                {
                    $tmp2286 = fullName2280;
                    panda$core$String* $tmp2290 = panda$core$String$convert$R$panda$core$String(p_contextName);
                    $tmp2289 = $tmp2290;
                    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2291);
                    $tmp2288 = $tmp2292;
                    $tmp2287 = $tmp2288;
                    fullName2280 = $tmp2287;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2286));
                }
            }
            }
            else {
            {
                {
                    $tmp2293 = fullName2280;
                    $tmp2294 = &$s2295;
                    fullName2280 = $tmp2294;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
                }
            }
            }
            {
                $tmp2296 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2299 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2300);
                org$pandalanguage$pandac$Annotations* $tmp2302 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2302);
                $tmp2301 = $tmp2302;
                panda$core$Int64$init$builtin_int64(&$tmp2304, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2303, $tmp2304);
                panda$collections$Array* $tmp2306 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2306);
                $tmp2305 = $tmp2306;
                panda$collections$Array* $tmp2308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2308);
                $tmp2307 = $tmp2308;
                panda$core$Object* $tmp2310 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2309 = $tmp2310;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2299, p_source, $tmp2300, p_aliases, NULL, $tmp2301, $tmp2303, fullName2280, ((panda$collections$ListView*) $tmp2305), $tmp2307, ((org$pandalanguage$pandac$Compiler*) $tmp2309)->root);
                $tmp2298 = $tmp2299;
                $tmp2297 = $tmp2298;
                self->bareCodeClass = $tmp2297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
                panda$core$Panda$unref$panda$core$Object($tmp2309);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
            }
            ITable* $tmp2311 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2311->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2311 = $tmp2311->next;
            }
            $fn2313 $tmp2312 = $tmp2311->methods[0];
            $tmp2312(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2317 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2318);
            org$pandalanguage$pandac$Annotations* $tmp2320 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2321, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2320, $tmp2321);
            $tmp2319 = $tmp2320;
            panda$core$Int64$init$builtin_int64(&$tmp2323, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2322, $tmp2323);
            panda$collections$Array* $tmp2326 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2326);
            $tmp2325 = $tmp2326;
            panda$collections$Array* $tmp2328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2328);
            $tmp2327 = $tmp2328;
            org$pandalanguage$pandac$Type* $tmp2330 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2329 = $tmp2330;
            panda$collections$ImmutableArray* $tmp2332 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2332);
            $tmp2331 = $tmp2332;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2317, self->bareCodeClass, $tmp2318, NULL, $tmp2319, $tmp2322, &$s2324, $tmp2325, $tmp2327, $tmp2329, $tmp2331);
            $tmp2316 = $tmp2317;
            $tmp2315 = $tmp2316;
            defaultInit2314 = $tmp2315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2319));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2314));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2314));
            org$pandalanguage$pandac$MethodDecl* $tmp2336 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2337);
            org$pandalanguage$pandac$Annotations* $tmp2339 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2340, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2341, 8192);
            panda$core$Int64 $tmp2342 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2340, $tmp2341);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2339, $tmp2342);
            $tmp2338 = $tmp2339;
            panda$core$Int64$init$builtin_int64(&$tmp2344, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2343, $tmp2344);
            panda$collections$Array* $tmp2347 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2347);
            $tmp2346 = $tmp2347;
            panda$collections$Array* $tmp2349 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2349);
            $tmp2348 = $tmp2349;
            org$pandalanguage$pandac$Type* $tmp2351 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2350 = $tmp2351;
            panda$collections$ImmutableArray* $tmp2353 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2353);
            $tmp2352 = $tmp2353;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2336, self->bareCodeClass, $tmp2337, NULL, $tmp2338, $tmp2343, &$s2345, $tmp2346, $tmp2348, $tmp2350, $tmp2352);
            $tmp2335 = $tmp2336;
            $tmp2334 = $tmp2335;
            defaultCleanup2333 = $tmp2334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2333));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2333));
        }
        $tmp2279 = -1;
        goto $l2277;
        $l2277:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName2280));
        defaultInit2314 = NULL;
        defaultCleanup2333 = NULL;
        switch ($tmp2279) {
            case -1: goto $l2354;
        }
        $l2354:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2359;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2355; else goto $l2356;
    $l2356:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2357, (panda$core$Int64) { 684 }, &$s2358);
    abort();
    $l2355:;
    panda$core$Object* $tmp2360 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2359 = $tmp2360;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2359), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2359);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2361;
    panda$io$File* $tmp2362;
    org$pandalanguage$pandac$ASTNode* $match$690_92366 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    panda$core$Int64 $tmp2368;
    panda$collections$ImmutableArray* entries2370 = NULL;
    panda$collections$Array* result2375 = NULL;
    panda$collections$Array* $tmp2376;
    panda$collections$Array* $tmp2377;
    panda$core$String* currentPackage2379 = NULL;
    panda$core$String* $tmp2380;
    panda$collections$HashMap* aliases2382 = NULL;
    panda$collections$HashMap* $tmp2383;
    panda$collections$HashMap* $tmp2384;
    panda$collections$Iterator* Iter$695$172389 = NULL;
    panda$collections$Iterator* $tmp2390;
    panda$collections$Iterator* $tmp2391;
    org$pandalanguage$pandac$ASTNode* e2407 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2408;
    panda$core$Object* $tmp2409;
    org$pandalanguage$pandac$ASTNode* $match$696_212417 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2418;
    panda$core$Int64 $tmp2419;
    panda$core$String* name2421 = NULL;
    panda$core$String* $tmp2423;
    panda$core$String* $tmp2424;
    panda$core$Int64 $tmp2425;
    panda$core$String* fullName2427 = NULL;
    panda$core$String$Index$nullable idx2432;
    panda$core$String* alias2435 = NULL;
    panda$core$String* $tmp2436;
    panda$core$String* $tmp2437;
    panda$core$String* $tmp2438;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2439;
    panda$core$Bit $tmp2441;
    panda$core$String* $tmp2443;
    panda$core$String* $tmp2444;
    panda$core$Int64 $tmp2446;
    org$pandalanguage$pandac$Position position2448;
    org$pandalanguage$pandac$ASTNode* dc2450 = NULL;
    panda$collections$ImmutableArray* annotations2452 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2454;
    panda$core$String* name2456 = NULL;
    panda$collections$ImmutableArray* generics2458 = NULL;
    panda$collections$ImmutableArray* supertypes2460 = NULL;
    panda$collections$ImmutableArray* members2462 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2467 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2468;
    org$pandalanguage$pandac$ClassDecl* $tmp2469;
    panda$core$Int64 $tmp2472;
    org$pandalanguage$pandac$Position position2474;
    org$pandalanguage$pandac$ASTNode* dc2476 = NULL;
    panda$collections$ImmutableArray* annotations2478 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2480;
    panda$core$String* rawName2482 = NULL;
    panda$collections$ImmutableArray* generics2484 = NULL;
    panda$collections$ImmutableArray* parameters2486 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2488 = NULL;
    panda$collections$ImmutableArray* statements2490 = NULL;
    panda$core$Int64 $tmp2495;
    panda$core$String* name2501 = NULL;
    panda$core$String* $tmp2507;
    panda$core$String* $tmp2508;
    panda$collections$Array* mainParameters2510 = NULL;
    panda$collections$Array* $tmp2511;
    panda$collections$Array* $tmp2512;
    panda$collections$Array* mainStatements2514 = NULL;
    panda$collections$Array* $tmp2515;
    panda$collections$Array* $tmp2516;
    panda$collections$Array* mainArguments2518 = NULL;
    panda$collections$Array* $tmp2519;
    panda$collections$Array* $tmp2520;
    panda$collections$Iterator* Iter$729$332525 = NULL;
    panda$collections$Iterator* $tmp2526;
    panda$collections$Iterator* $tmp2527;
    org$pandalanguage$pandac$ASTNode* p2543 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2544;
    panda$core$Object* $tmp2545;
    org$pandalanguage$pandac$ASTNode* $match$730_372553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2554;
    panda$core$Int64 $tmp2555;
    org$pandalanguage$pandac$Position position2557;
    panda$core$String* name2559 = NULL;
    org$pandalanguage$pandac$ASTNode* type2561 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2563;
    org$pandalanguage$pandac$Type* $tmp2565;
    org$pandalanguage$pandac$ASTNode* $tmp2567;
    panda$core$Int64 $tmp2569;
    panda$core$Bit $tmp2570;
    org$pandalanguage$pandac$ASTNode* bareConstruct2577 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    panda$core$Int64 $tmp2581;
    org$pandalanguage$pandac$ASTNode* $tmp2582;
    panda$core$Int64 $tmp2584;
    panda$collections$ImmutableArray* $tmp2586;
    org$pandalanguage$pandac$ASTNode* $tmp2588;
    panda$core$Int64 $tmp2590;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    panda$core$Int64 $tmp2593;
    panda$collections$ImmutableArray* $tmp2594;
    org$pandalanguage$pandac$Type* returnType2596 = NULL;
    org$pandalanguage$pandac$Type* $tmp2597;
    org$pandalanguage$pandac$Type* $tmp2598;
    org$pandalanguage$pandac$Type* $tmp2599;
    org$pandalanguage$pandac$Type* $tmp2601;
    org$pandalanguage$pandac$Type* $tmp2602;
    org$pandalanguage$pandac$Type* $tmp2603;
    org$pandalanguage$pandac$MethodDecl* bareMain2605 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2606;
    org$pandalanguage$pandac$MethodDecl* $tmp2607;
    org$pandalanguage$pandac$Position $tmp2609;
    org$pandalanguage$pandac$Annotations* $tmp2610;
    panda$core$Int64 $tmp2612;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2613;
    panda$core$Int64 $tmp2614;
    panda$collections$Array* $tmp2616;
    panda$collections$ImmutableArray* $tmp2618;
    panda$core$String* $tmp2621;
    panda$core$String* $tmp2622;
    panda$core$Object* $tmp2623;
    org$pandalanguage$pandac$MethodDecl* m2625 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2626;
    org$pandalanguage$pandac$MethodDecl* $tmp2627;
    org$pandalanguage$pandac$Annotations* $tmp2631;
    panda$core$Int64 $tmp2632;
    panda$core$Object* $tmp2635;
    panda$core$Int64 $tmp2638;
    org$pandalanguage$pandac$Position position2640;
    org$pandalanguage$pandac$ASTNode* dc2642 = NULL;
    panda$collections$ImmutableArray* annotations2644 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2646 = NULL;
    panda$core$Int64 old2648;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2653;
    panda$core$Bit $tmp2658;
    org$pandalanguage$pandac$FieldDecl* f2675 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2676;
    panda$core$Object* $tmp2677;
    panda$core$Int64 $tmp2680;
    panda$core$Bit $tmp2693;
    panda$core$String* $tmp2697;
    panda$core$String* $tmp2698;
    panda$core$String* $tmp2699;
    panda$core$String* $tmp2700;
    panda$core$String* $tmp2701;
    panda$core$String* $tmp2702;
    panda$core$Object* $tmp2707;
    panda$core$Object* $tmp2712;
    panda$io$File* $tmp2722;
    panda$io$File* $tmp2723;
    panda$collections$ListView* $returnValue2724;
    panda$collections$ListView* $tmp2725;
    panda$core$Bit $tmp2730;
    {
        $tmp2361 = self->source;
        $tmp2362 = p_source;
        self->source = $tmp2362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
    }
    int $tmp2365;
    {
        $tmp2367 = p_file;
        $match$690_92366 = $tmp2367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
        panda$core$Int64$init$builtin_int64(&$tmp2368, 17);
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$690_92366->$rawValue, $tmp2368);
        if ($tmp2369.value) {
        {
            panda$collections$ImmutableArray** $tmp2371 = ((panda$collections$ImmutableArray**) ((char*) $match$690_92366->$data + 0));
            entries2370 = *$tmp2371;
            int $tmp2374;
            {
                panda$collections$Array* $tmp2378 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2378);
                $tmp2377 = $tmp2378;
                $tmp2376 = $tmp2377;
                result2375 = $tmp2376;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2376));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
                $tmp2380 = &$s2381;
                currentPackage2379 = $tmp2380;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2380));
                panda$collections$HashMap* $tmp2385 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2385);
                $tmp2384 = $tmp2385;
                $tmp2383 = $tmp2384;
                aliases2382 = $tmp2383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
                {
                    int $tmp2388;
                    {
                        ITable* $tmp2392 = ((panda$collections$Iterable*) entries2370)->$class->itable;
                        while ($tmp2392->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2392 = $tmp2392->next;
                        }
                        $fn2394 $tmp2393 = $tmp2392->methods[0];
                        panda$collections$Iterator* $tmp2395 = $tmp2393(((panda$collections$Iterable*) entries2370));
                        $tmp2391 = $tmp2395;
                        $tmp2390 = $tmp2391;
                        Iter$695$172389 = $tmp2390;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2390));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
                        $l2396:;
                        ITable* $tmp2399 = Iter$695$172389->$class->itable;
                        while ($tmp2399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2399 = $tmp2399->next;
                        }
                        $fn2401 $tmp2400 = $tmp2399->methods[0];
                        panda$core$Bit $tmp2402 = $tmp2400(Iter$695$172389);
                        panda$core$Bit $tmp2403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2402);
                        bool $tmp2398 = $tmp2403.value;
                        if (!$tmp2398) goto $l2397;
                        {
                            int $tmp2406;
                            {
                                ITable* $tmp2410 = Iter$695$172389->$class->itable;
                                while ($tmp2410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2410 = $tmp2410->next;
                                }
                                $fn2412 $tmp2411 = $tmp2410->methods[1];
                                panda$core$Object* $tmp2413 = $tmp2411(Iter$695$172389);
                                $tmp2409 = $tmp2413;
                                $tmp2408 = ((org$pandalanguage$pandac$ASTNode*) $tmp2409);
                                e2407 = $tmp2408;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2408));
                                panda$core$Panda$unref$panda$core$Object($tmp2409);
                                int $tmp2416;
                                {
                                    $tmp2418 = e2407;
                                    $match$696_212417 = $tmp2418;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
                                    panda$core$Int64$init$builtin_int64(&$tmp2419, 30);
                                    panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212417->$rawValue, $tmp2419);
                                    if ($tmp2420.value) {
                                    {
                                        panda$core$String** $tmp2422 = ((panda$core$String**) ((char*) $match$696_212417->$data + 16));
                                        name2421 = *$tmp2422;
                                        {
                                            $tmp2423 = currentPackage2379;
                                            $tmp2424 = name2421;
                                            currentPackage2379 = $tmp2424;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2424));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2425, 46);
                                    panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212417->$rawValue, $tmp2425);
                                    if ($tmp2426.value) {
                                    {
                                        panda$core$String** $tmp2428 = ((panda$core$String**) ((char*) $match$696_212417->$data + 16));
                                        fullName2427 = *$tmp2428;
                                        int $tmp2431;
                                        {
                                            panda$core$String$Index$nullable $tmp2434 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2427, &$s2433);
                                            idx2432 = $tmp2434;
                                            memset(&alias2435, 0, sizeof(alias2435));
                                            if (((panda$core$Bit) { idx2432.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2436 = alias2435;
                                                    panda$core$String$Index $tmp2440 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2427, ((panda$core$String$Index) idx2432.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2441, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2439, ((panda$core$String$Index$nullable) { $tmp2440, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2441);
                                                    panda$core$String* $tmp2442 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2427, $tmp2439);
                                                    $tmp2438 = $tmp2442;
                                                    $tmp2437 = $tmp2438;
                                                    alias2435 = $tmp2437;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2437));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2438));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2443 = alias2435;
                                                    $tmp2444 = fullName2427;
                                                    alias2435 = $tmp2444;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2382, ((panda$collections$Key*) alias2435), ((panda$core$Object*) fullName2427));
                                        }
                                        $tmp2431 = -1;
                                        goto $l2429;
                                        $l2429:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2435));
                                        switch ($tmp2431) {
                                            case -1: goto $l2445;
                                        }
                                        $l2445:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2446, 11);
                                    panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212417->$rawValue, $tmp2446);
                                    if ($tmp2447.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2449 = ((org$pandalanguage$pandac$Position*) ((char*) $match$696_212417->$data + 0));
                                        position2448 = *$tmp2449;
                                        org$pandalanguage$pandac$ASTNode** $tmp2451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212417->$data + 16));
                                        dc2450 = *$tmp2451;
                                        panda$collections$ImmutableArray** $tmp2453 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 24));
                                        annotations2452 = *$tmp2453;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2455 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$696_212417->$data + 32));
                                        kind2454 = *$tmp2455;
                                        panda$core$String** $tmp2457 = ((panda$core$String**) ((char*) $match$696_212417->$data + 40));
                                        name2456 = *$tmp2457;
                                        panda$collections$ImmutableArray** $tmp2459 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 48));
                                        generics2458 = *$tmp2459;
                                        panda$collections$ImmutableArray** $tmp2461 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 56));
                                        supertypes2460 = *$tmp2461;
                                        panda$collections$ImmutableArray** $tmp2463 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 64));
                                        members2462 = *$tmp2463;
                                        int $tmp2466;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2470 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2382), currentPackage2379, position2448, dc2450, annotations2452, kind2454, name2456, generics2458, supertypes2460, members2462);
                                            $tmp2469 = $tmp2470;
                                            $tmp2468 = $tmp2469;
                                            cl2467 = $tmp2468;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                                            if (((panda$core$Bit) { cl2467 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2467, result2375);
                                            }
                                            }
                                        }
                                        $tmp2466 = -1;
                                        goto $l2464;
                                        $l2464:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2467));
                                        cl2467 = NULL;
                                        switch ($tmp2466) {
                                            case -1: goto $l2471;
                                        }
                                        $l2471:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2472, 26);
                                    panda$core$Bit $tmp2473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212417->$rawValue, $tmp2472);
                                    if ($tmp2473.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2475 = ((org$pandalanguage$pandac$Position*) ((char*) $match$696_212417->$data + 0));
                                        position2474 = *$tmp2475;
                                        org$pandalanguage$pandac$ASTNode** $tmp2477 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212417->$data + 16));
                                        dc2476 = *$tmp2477;
                                        panda$collections$ImmutableArray** $tmp2479 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 24));
                                        annotations2478 = *$tmp2479;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2481 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$696_212417->$data + 32));
                                        kind2480 = *$tmp2481;
                                        panda$core$String** $tmp2483 = ((panda$core$String**) ((char*) $match$696_212417->$data + 40));
                                        rawName2482 = *$tmp2483;
                                        panda$collections$ImmutableArray** $tmp2485 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 48));
                                        generics2484 = *$tmp2485;
                                        panda$collections$ImmutableArray** $tmp2487 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 56));
                                        parameters2486 = *$tmp2487;
                                        org$pandalanguage$pandac$ASTNode** $tmp2489 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212417->$data + 64));
                                        rawReturnType2488 = *$tmp2489;
                                        panda$collections$ImmutableArray** $tmp2491 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 72));
                                        statements2490 = *$tmp2491;
                                        int $tmp2494;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2495, 2);
                                            panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2480.$rawValue, $tmp2495);
                                            if ($tmp2496.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2474, &$s2497);
                                                $tmp2494 = 0;
                                                goto $l2492;
                                                $l2498:;
                                                $tmp2416 = 0;
                                                goto $l2414;
                                                $l2499:;
                                                $tmp2406 = 0;
                                                goto $l2404;
                                                $l2500:;
                                                goto $l2396;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2382), currentPackage2379, ((panda$collections$List*) result2375));
                                            memset(&name2501, 0, sizeof(name2501));
                                            panda$core$Bit $tmp2503 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2482, &$s2502);
                                            if ($tmp2503.value) {
                                            {
                                                int $tmp2506;
                                                {
                                                    {
                                                        $tmp2507 = name2501;
                                                        $tmp2508 = &$s2509;
                                                        name2501 = $tmp2508;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2508));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
                                                    }
                                                    panda$collections$Array* $tmp2513 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2513);
                                                    $tmp2512 = $tmp2513;
                                                    $tmp2511 = $tmp2512;
                                                    mainParameters2510 = $tmp2511;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
                                                    panda$collections$Array* $tmp2517 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2517);
                                                    $tmp2516 = $tmp2517;
                                                    $tmp2515 = $tmp2516;
                                                    mainStatements2514 = $tmp2515;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
                                                    panda$collections$Array* $tmp2521 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2521);
                                                    $tmp2520 = $tmp2521;
                                                    $tmp2519 = $tmp2520;
                                                    mainArguments2518 = $tmp2519;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                                                    {
                                                        int $tmp2524;
                                                        {
                                                            ITable* $tmp2528 = ((panda$collections$Iterable*) parameters2486)->$class->itable;
                                                            while ($tmp2528->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2528 = $tmp2528->next;
                                                            }
                                                            $fn2530 $tmp2529 = $tmp2528->methods[0];
                                                            panda$collections$Iterator* $tmp2531 = $tmp2529(((panda$collections$Iterable*) parameters2486));
                                                            $tmp2527 = $tmp2531;
                                                            $tmp2526 = $tmp2527;
                                                            Iter$729$332525 = $tmp2526;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2526));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                                                            $l2532:;
                                                            ITable* $tmp2535 = Iter$729$332525->$class->itable;
                                                            while ($tmp2535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2535 = $tmp2535->next;
                                                            }
                                                            $fn2537 $tmp2536 = $tmp2535->methods[0];
                                                            panda$core$Bit $tmp2538 = $tmp2536(Iter$729$332525);
                                                            panda$core$Bit $tmp2539 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2538);
                                                            bool $tmp2534 = $tmp2539.value;
                                                            if (!$tmp2534) goto $l2533;
                                                            {
                                                                int $tmp2542;
                                                                {
                                                                    ITable* $tmp2546 = Iter$729$332525->$class->itable;
                                                                    while ($tmp2546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2546 = $tmp2546->next;
                                                                    }
                                                                    $fn2548 $tmp2547 = $tmp2546->methods[1];
                                                                    panda$core$Object* $tmp2549 = $tmp2547(Iter$729$332525);
                                                                    $tmp2545 = $tmp2549;
                                                                    $tmp2544 = ((org$pandalanguage$pandac$ASTNode*) $tmp2545);
                                                                    p2543 = $tmp2544;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2544));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2545);
                                                                    int $tmp2552;
                                                                    {
                                                                        $tmp2554 = p2543;
                                                                        $match$730_372553 = $tmp2554;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2554));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2555, 31);
                                                                        panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$730_372553->$rawValue, $tmp2555);
                                                                        if ($tmp2556.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2558 = ((org$pandalanguage$pandac$Position*) ((char*) $match$730_372553->$data + 0));
                                                                            position2557 = *$tmp2558;
                                                                            panda$core$String** $tmp2560 = ((panda$core$String**) ((char*) $match$730_372553->$data + 16));
                                                                            name2559 = *$tmp2560;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2562 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$730_372553->$data + 24));
                                                                            type2561 = *$tmp2562;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2564 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2566 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2561);
                                                                            $tmp2565 = $tmp2566;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2564, name2559, $tmp2565);
                                                                            $tmp2563 = $tmp2564;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2510, ((panda$core$Object*) $tmp2563));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2568 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2569, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2568, $tmp2569, position2557, name2559);
                                                                            $tmp2567 = $tmp2568;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2518, ((panda$core$Object*) $tmp2567));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2570, false);
                                                                            if ($tmp2570.value) goto $l2571; else goto $l2572;
                                                                            $l2572:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2573, (panda$core$Int64) { 736 });
                                                                            abort();
                                                                            $l2571:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2552 = -1;
                                                                    goto $l2550;
                                                                    $l2550:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                                                                    switch ($tmp2552) {
                                                                        case -1: goto $l2574;
                                                                    }
                                                                    $l2574:;
                                                                }
                                                                $tmp2542 = -1;
                                                                goto $l2540;
                                                                $l2540:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2543));
                                                                p2543 = NULL;
                                                                switch ($tmp2542) {
                                                                    case -1: goto $l2575;
                                                                }
                                                                $l2575:;
                                                            }
                                                            goto $l2532;
                                                            $l2533:;
                                                        }
                                                        $tmp2524 = -1;
                                                        goto $l2522;
                                                        $l2522:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$729$332525));
                                                        Iter$729$332525 = NULL;
                                                        switch ($tmp2524) {
                                                            case -1: goto $l2576;
                                                        }
                                                        $l2576:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2580 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2581, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2583 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2584, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2583, $tmp2584, position2474, &$s2585);
                                                    $tmp2582 = $tmp2583;
                                                    panda$collections$ImmutableArray* $tmp2587 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2587);
                                                    $tmp2586 = $tmp2587;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2580, $tmp2581, position2474, $tmp2582, $tmp2586);
                                                    $tmp2579 = $tmp2580;
                                                    $tmp2578 = $tmp2579;
                                                    bareConstruct2577 = $tmp2578;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2586));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2582));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2589 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2590, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2592 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2593, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2592, $tmp2593, position2474, bareConstruct2577, name2501);
                                                    $tmp2591 = $tmp2592;
                                                    panda$collections$ImmutableArray* $tmp2595 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2518);
                                                    $tmp2594 = $tmp2595;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2589, $tmp2590, position2474, $tmp2591, $tmp2594);
                                                    $tmp2588 = $tmp2589;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2514, ((panda$core$Object*) $tmp2588));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2594));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
                                                    memset(&returnType2596, 0, sizeof(returnType2596));
                                                    if (((panda$core$Bit) { rawReturnType2488 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2597 = returnType2596;
                                                            org$pandalanguage$pandac$Type* $tmp2600 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2488);
                                                            $tmp2599 = $tmp2600;
                                                            $tmp2598 = $tmp2599;
                                                            returnType2596 = $tmp2598;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2598));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2601 = returnType2596;
                                                            org$pandalanguage$pandac$Type* $tmp2604 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2603 = $tmp2604;
                                                            $tmp2602 = $tmp2603;
                                                            returnType2596 = $tmp2602;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2608 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2609);
                                                    org$pandalanguage$pandac$Annotations* $tmp2611 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2612, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2611, $tmp2612);
                                                    $tmp2610 = $tmp2611;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2614, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2613, $tmp2614);
                                                    panda$collections$Array* $tmp2617 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2617);
                                                    $tmp2616 = $tmp2617;
                                                    panda$collections$ImmutableArray* $tmp2619 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2514);
                                                    $tmp2618 = $tmp2619;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2608, self->bareCodeClass, $tmp2609, NULL, $tmp2610, $tmp2613, &$s2615, $tmp2616, mainParameters2510, returnType2596, $tmp2618);
                                                    $tmp2607 = $tmp2608;
                                                    $tmp2606 = $tmp2607;
                                                    bareMain2605 = $tmp2606;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2606));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2607));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2618));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2616));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2605));
                                                }
                                                $tmp2506 = -1;
                                                goto $l2504;
                                                $l2504:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2605));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2596));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2577));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2518));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2514));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2510));
                                                mainParameters2510 = NULL;
                                                mainStatements2514 = NULL;
                                                mainArguments2518 = NULL;
                                                bareConstruct2577 = NULL;
                                                bareMain2605 = NULL;
                                                switch ($tmp2506) {
                                                    case -1: goto $l2620;
                                                }
                                                $l2620:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2621 = name2501;
                                                    $tmp2622 = rawName2482;
                                                    name2501 = $tmp2622;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2622));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2624 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2623 = $tmp2624;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2623)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2623);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2628 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2474, dc2476, annotations2478, kind2480, name2501, generics2484, parameters2486, rawReturnType2488, statements2490);
                                            $tmp2627 = $tmp2628;
                                            $tmp2626 = $tmp2627;
                                            m2625 = $tmp2626;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2626));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2627));
                                            panda$core$Bit $tmp2629 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2625->annotations);
                                            if ($tmp2629.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2625)->position, &$s2630);
                                                $tmp2631 = m2625->annotations;
                                                panda$core$Int64$init$builtin_int64(&$tmp2632, 16);
                                                panda$core$Int64 $tmp2633 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2632);
                                                panda$core$Int64 $tmp2634 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2631->flags, $tmp2633);
                                                $tmp2631->flags = $tmp2634;
                                            }
                                            }
                                            panda$core$Object* $tmp2636 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2635 = $tmp2636;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2635)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2635);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2625));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2625));
                                        }
                                        $tmp2494 = -1;
                                        goto $l2492;
                                        $l2492:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2625));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2501));
                                        m2625 = NULL;
                                        switch ($tmp2494) {
                                            case -1: goto $l2637;
                                            case 0: goto $l2498;
                                        }
                                        $l2637:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2638, 16);
                                    panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_212417->$rawValue, $tmp2638);
                                    if ($tmp2639.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2641 = ((org$pandalanguage$pandac$Position*) ((char*) $match$696_212417->$data + 0));
                                        position2640 = *$tmp2641;
                                        org$pandalanguage$pandac$ASTNode** $tmp2643 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212417->$data + 16));
                                        dc2642 = *$tmp2643;
                                        panda$collections$ImmutableArray** $tmp2645 = ((panda$collections$ImmutableArray**) ((char*) $match$696_212417->$data + 24));
                                        annotations2644 = *$tmp2645;
                                        org$pandalanguage$pandac$ASTNode** $tmp2647 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$696_212417->$data + 32));
                                        varDecl2646 = *$tmp2647;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2382), currentPackage2379, ((panda$collections$List*) result2375));
                                        ITable* $tmp2649 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2649->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2649 = $tmp2649->next;
                                        }
                                        $fn2651 $tmp2650 = $tmp2649->methods[0];
                                        panda$core$Int64 $tmp2652 = $tmp2650(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        old2648 = $tmp2652;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2640, dc2642, annotations2644, varDecl2646);
                                        ITable* $tmp2654 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2654->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2654 = $tmp2654->next;
                                        }
                                        $fn2656 $tmp2655 = $tmp2654->methods[0];
                                        panda$core$Int64 $tmp2657 = $tmp2655(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        panda$core$Bit$init$builtin_bit(&$tmp2658, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2653, old2648, $tmp2657, $tmp2658);
                                        int64_t $tmp2660 = $tmp2653.min.value;
                                        panda$core$Int64 i2659 = { $tmp2660 };
                                        int64_t $tmp2662 = $tmp2653.max.value;
                                        bool $tmp2663 = $tmp2653.inclusive.value;
                                        if ($tmp2663) goto $l2670; else goto $l2671;
                                        $l2670:;
                                        if ($tmp2660 <= $tmp2662) goto $l2664; else goto $l2666;
                                        $l2671:;
                                        if ($tmp2660 < $tmp2662) goto $l2664; else goto $l2666;
                                        $l2664:;
                                        {
                                            int $tmp2674;
                                            {
                                                panda$core$Object* $tmp2678 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2659);
                                                $tmp2677 = $tmp2678;
                                                $tmp2676 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2677);
                                                f2675 = $tmp2676;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2676));
                                                panda$core$Panda$unref$panda$core$Object($tmp2677);
                                                panda$core$Int64$init$builtin_int64(&$tmp2680, 2);
                                                panda$core$Bit $tmp2681 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2675->fieldKind.$rawValue, $tmp2680);
                                                bool $tmp2679 = $tmp2681.value;
                                                if (!$tmp2679) goto $l2682;
                                                panda$core$Bit $tmp2683 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2675->annotations);
                                                $tmp2679 = $tmp2683.value;
                                                $l2682:;
                                                panda$core$Bit $tmp2684 = { $tmp2679 };
                                                if ($tmp2684.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2675)->position, &$s2685);
                                                }
                                                }
                                            }
                                            $tmp2674 = -1;
                                            goto $l2672;
                                            $l2672:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2675));
                                            f2675 = NULL;
                                            switch ($tmp2674) {
                                                case -1: goto $l2686;
                                            }
                                            $l2686:;
                                        }
                                        $l2667:;
                                        int64_t $tmp2688 = $tmp2662 - i2659.value;
                                        if ($tmp2663) goto $l2689; else goto $l2690;
                                        $l2689:;
                                        if ((uint64_t) $tmp2688 >= 1) goto $l2687; else goto $l2666;
                                        $l2690:;
                                        if ((uint64_t) $tmp2688 > 1) goto $l2687; else goto $l2666;
                                        $l2687:;
                                        i2659.value += 1;
                                        goto $l2664;
                                        $l2666:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2693, false);
                                        if ($tmp2693.value) goto $l2694; else goto $l2695;
                                        $l2695:;
                                        panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2703, ((panda$core$Object*) e2407));
                                        $tmp2702 = $tmp2704;
                                        panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2705);
                                        $tmp2701 = $tmp2706;
                                        panda$core$Int64$wrapper* $tmp2708;
                                        $tmp2708 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2708->value = e2407->$rawValue;
                                        $tmp2707 = ((panda$core$Object*) $tmp2708);
                                        panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2701, $tmp2707);
                                        $tmp2700 = $tmp2709;
                                        panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2710);
                                        $tmp2699 = $tmp2711;
                                        org$pandalanguage$pandac$Position $tmp2714 = (($fn2713) e2407->$class->vtable[2])(e2407);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2715;
                                        $tmp2715 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2715->value = $tmp2714;
                                        $tmp2712 = ((panda$core$Object*) $tmp2715);
                                        panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2699, $tmp2712);
                                        $tmp2698 = $tmp2716;
                                        panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2717);
                                        $tmp2697 = $tmp2718;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2696, (panda$core$Int64) { 785 }, $tmp2697);
                                        abort();
                                        $l2694:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2416 = -1;
                                goto $l2414;
                                $l2414:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
                                switch ($tmp2416) {
                                    case 0: goto $l2499;
                                    case -1: goto $l2719;
                                }
                                $l2719:;
                            }
                            $tmp2406 = -1;
                            goto $l2404;
                            $l2404:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2407));
                            e2407 = NULL;
                            switch ($tmp2406) {
                                case -1: goto $l2720;
                                case 0: goto $l2500;
                            }
                            $l2720:;
                        }
                        goto $l2396;
                        $l2397:;
                    }
                    $tmp2388 = -1;
                    goto $l2386;
                    $l2386:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$695$172389));
                    Iter$695$172389 = NULL;
                    switch ($tmp2388) {
                        case -1: goto $l2721;
                    }
                    $l2721:;
                }
                {
                    $tmp2722 = self->source;
                    $tmp2723 = NULL;
                    self->source = $tmp2723;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2723));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2722));
                }
                $tmp2725 = ((panda$collections$ListView*) result2375);
                $returnValue2724 = $tmp2725;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2725));
                $tmp2374 = 0;
                goto $l2372;
                $l2726:;
                $tmp2365 = 0;
                goto $l2363;
                $l2727:;
                return $returnValue2724;
            }
            $l2372:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2375));
            result2375 = NULL;
            currentPackage2379 = NULL;
            aliases2382 = NULL;
            switch ($tmp2374) {
                case 0: goto $l2726;
            }
            $l2729:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2730, false);
            if ($tmp2730.value) goto $l2731; else goto $l2732;
            $l2732:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2733, (panda$core$Int64) { 791 });
            abort();
            $l2731:;
        }
        }
    }
    $tmp2365 = -1;
    goto $l2363;
    $l2363:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
    switch ($tmp2365) {
        case -1: goto $l2734;
        case 0: goto $l2727;
    }
    $l2734:;
    if (false) goto $l2735; else goto $l2736;
    $l2736:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2737, (panda$core$Int64) { 688 }, &$s2738);
    abort();
    $l2735:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2741;
    {
    }
    $tmp2741 = -1;
    goto $l2739;
    $l2739:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2741) {
        case -1: goto $l2742;
    }
    $l2742:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

